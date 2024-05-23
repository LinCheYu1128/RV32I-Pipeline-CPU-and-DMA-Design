package Memory

import chisel3._
import chisel3.util._
import chisel3.util.experimental.loadMemoryFromFileInline
import AXI._

class DataMem(
    width: Int,
    height: Int,
    idWidth: Int,
    addrWidth: Int,
    dataWidth: Int,
    baseAddr: BigInt,
    latency: Int,
    filePath: String
) extends Module {
  val io = IO(new Bundle {
    val slave = new Axi4SlaveIF(idWidth, addrWidth, dataWidth, 2)
    val dump = Input(Bool())
  })

  val memory = Mem(height, UInt(width.W))
  loadMemoryFromFileInline(memory, filePath)

  // aw channel
  io.slave.aw.ready := false.B

  // w channel
  io.slave.w.ready := false.B

  // b channel
  io.slave.b.bits.id := 0.U
  io.slave.b.bits.resp := 0.U
  io.slave.b.valid := false.B

  // ar channel
  io.slave.ar.ready := false.B

  // r channel
  io.slave.r.bits.id := 0.U
  io.slave.r.bits.data := 0.U
  io.slave.r.bits.resp := 0.U
  io.slave.r.bits.last := false.B
  io.slave.r.valid := false.B

  val readID = RegInit(0.U(idWidth.W))
  val rAddrOffset = RegInit(0.U(addrWidth.W))
  val wAddrOffset = WireDefault(
    ((io.slave.aw.bits.addr - baseAddr.U) & ~(3.U(width.W))) >> 2.U
  )
  val writeAddressReg = RegInit(0.U(addrWidth.W))
  val writeID = RegInit(0.U(idWidth.W))
  val sIdle :: sReady :: sWLatency :: sFinish :: sWaitData :: Nil = Enum(5)
  val sRead :: sRLatency :: sResp :: Nil = Enum(3)
  val writeState = RegInit(sIdle)
  val readState = RegInit(sRead)
  val rLatencyCounter = RegInit(0.U(8.W))
  val wLatencyCounter = RegInit(0.U(8.W))

  val rBurstCounter = RegInit(0.U(8.W))
  val rBurstLen = RegInit(0.U(8.W))
  val wBurstCounter = RegInit(0.U(8.W))
  val wBurstLen = RegInit(0.U(8.W))

  switch(readState) {
    is(sRead) {
      when(io.slave.ar.fire) {
        when(latency.U === 1.U) {
          readState := sResp
        }
        .otherwise {
          readState := sRLatency
        }
      }
    }
    is(sRLatency) {
      when(rLatencyCounter === (latency - 1).U) {
        readState := sResp
      }
    }
    is(sResp) {
      when(io.slave.r.fire && io.slave.r.bits.last) {
      // when(io.slave.r.fire) {
        readState := sRead
      }
    }
  }

  when(readState === sRead) {
    io.slave.ar.ready := true.B
    io.slave.r.valid := false.B
    rAddrOffset := ((io.slave.ar.bits.addr - baseAddr.U) & ~(3.U(width.W))) >> 2.U
    readID := io.slave.ar.bits.id
    rBurstLen := io.slave.ar.bits.len
    rBurstCounter := 0.U
  }
  .elsewhen(readState === sRLatency) {
    rLatencyCounter := rLatencyCounter + 1.U
  }
  .elsewhen(readState === sResp) {
    rLatencyCounter := 0.U
    io.slave.ar.ready := false.B
    io.slave.r.valid := true.B
    io.slave.r.bits.data := memory(rAddrOffset + rBurstCounter)
    io.slave.r.bits.id := readID
    io.slave.r.bits.resp := 0.U
    io.slave.r.bits.last := Mux(rBurstCounter === rBurstLen, true.B, false.B)
    when(io.slave.r.fire) {
      rBurstCounter := rBurstCounter + 1.U
    }
  }

  switch(writeState) {
    is(sIdle) {
      writeState := sReady
    }
    is(sReady) {
      when(io.slave.aw.valid) {
        writeState := sWLatency
      }
    }
    is(sWaitData) {
      when(io.slave.w.valid) {
        when(io.slave.w.bits.last) {
          writeState := sFinish
        }
      }
    }
    is(sWLatency) {
      // when(wLatencyCounter === (latency - 1).U){
        writeState := sWaitData
      // }
    }
    is(sFinish) {
      // when(io.slave.b.ready) {
        writeState := sReady
      // }
    }
  }

  val writeData = WireDefault(VecInit(Seq.fill(dataWidth / 8)(0.U(8.W))))
  val writeDataReg = RegNext(writeData)
  val writeDataRegReg = RegNext(writeDataReg)

  List.range(0, dataWidth / 8).map { x =>
    when(io.slave.w.bits.strb(x) === 1.U) {
      writeData(x) := io.slave.w.bits.data(x * 8 + 7, x * 8)
    }.otherwise {
      writeData(x) := memory(wAddrOffset)(x * 8 + 7, x * 8)
    }
  }

  when(writeState === sIdle) {
    io.slave.aw.ready := false.B
    io.slave.w.ready := false.B
    io.slave.b.bits.resp := 0.U
    io.slave.b.valid := false.B
    writeAddressReg := wAddrOffset.asUInt
  }.elsewhen(writeState === sReady){
    io.slave.aw.ready := true.B
    writeAddressReg := wAddrOffset.asUInt
    wBurstLen := io.slave.aw.bits.len
  }.elsewhen(writeState === sWLatency){
    io.slave.aw.ready := false.B
    wLatencyCounter := wLatencyCounter + 1.U
  }.elsewhen(writeState === sWaitData){
    io.slave.aw.ready := false.B
    io.slave.w.ready := true.B
    io.slave.b.bits.resp := 0.U
    io.slave.b.valid := false.B
    when(io.slave.w.fire) {
      memory(writeAddressReg) := Mux(wBurstLen === 0.U, writeData.asUInt(), writeDataRegReg.asUInt())
      writeAddressReg := writeAddressReg + 1.U
      wBurstCounter := wBurstCounter + 1.U
    }
  }.elsewhen(writeState === sFinish) {
    wLatencyCounter := 0.U
    io.slave.aw.ready := false.B
    io.slave.w.ready := false.B
    io.slave.b.bits.resp := 0.U
    io.slave.b.bits.id := writeID
    io.slave.b.valid := true.B
    when(wBurstLen =/= 0.U) {
      memory(writeAddressReg) := writeDataRegReg.asUInt()
      memory(writeAddressReg + 1.U) := writeDataReg.asUInt()
    }
  }

  when(io.dump) {
    /* Dump Memory */
    printf("\t\t======== Data Memory Dump ========\n")
    printf("\t\tFrom base address %d\n", baseAddr.U)
    
    for (i <- 0 until 10) {
      val indexAddr = baseAddr + (i+36) * 4
      val data = memory(i+36)
      printf(
        "\t\tDataMem[%d] (address = %d(%x)) = 0x%x (%d)\n", i.U+36.U, indexAddr.asUInt, indexAddr.asUInt, data.asSInt, data.asSInt
      )
    }
    // for (i <- 30 until 37) {
    //   val indexAddr = baseAddr + i * 4
    //   val data = memory(i)
    //   printf(
    //     "\t\tDataMem[%d] (address = %d(%x)) = 0x%x (%d)\n", i.U, indexAddr.asUInt, indexAddr.asUInt, data.asSInt, data.asSInt
    //   )
    // }
    printf("\n")
    
  }

}




