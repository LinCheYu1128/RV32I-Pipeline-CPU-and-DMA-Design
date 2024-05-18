package SoC

import chisel3._
import chisel3.util._

import PiplinedCPU._
import Memory._
import MemIF._
import AXI._
import DMA._
import AXILite._

// CPU <-> Bus <-> Memory

class top_SoC(idWidth: Int, addrWidth: Int, dataWidth: Int) extends Module {
  val io = IO(new Bundle{
    val regs = Output(Vec(32,UInt(dataWidth.W)))
    val Hcf = Output(Bool())

    //for sure that IM and DM will be synthesized
    val inst = Output(UInt(32.W))
    val rdata = Output(UInt(32.W))
    val raddr = Output(UInt(32.W))
    val wdata  = Output(UInt(32.W))
    val waddr = Output(UInt(32.W))

    val localMemDump = Input(Bool())
    val globalMemDump = Input(Bool())

    // DMA
    // val slave = new Axi4SlaveIF(idWidth, addrWidth, dataWidth, 2)
    val DMA_Hcf = Output(Bool())

    // Test
    val E_Branch_taken = Output(Bool())
    val Flush = Output(Bool())
    val Stall_MA = Output(Bool())
    val Stall_DH = Output(Bool())
    val IF_PC = Output(UInt(32.W))
    val ID_PC = Output(UInt(32.W))
    val EXE_PC = Output(UInt(32.W))
    val MEM_PC = Output(UInt(32.W))
    val WB_PC = Output(UInt(32.W))
    val EXE_alu_out = Output(UInt(32.W))
    val EXE_src1 = Output(UInt(32.W))
    val EXE_src2 = Output(UInt(32.W))
    val ALU_src1 = Output(UInt(32.W))
    val ALU_src2 = Output(UInt(32.W))
    val WB_rd = Output(UInt(5.W))
    val WB_wdata = Output(UInt(32.W))
    val EXE_Jump = Output(Bool())
    val EXE_Branch = Output(Bool())
  })

  object SystemConfig {
    val nMasters: Int = 2
    val nSlaves: Int = 3
    val DMABaseAddr: Int = 0
    val DMASize: Int = 100
    val DataMemBaseAddr: Int = 0x10000 // Provide the base address
    val DataMemSize: Map[String, Int] = Map(
      "Size" -> 1024, // Height x Width
      "Height" -> 256, // The Number of bytes
      "Width" -> 32 // unit: 32 bits
    )
    val DataMemLatency: Int = 1
    val DataMemInitFilePath: String =
      "./src/main/resource/data0.hex" // Provide the file path
    val GlobalMemBaseAddr: Int = 0x8000 // Provide the base address
    val GlobalMemSize: Map[String, Int] = Map(
      "Size" -> 1024, // Height x Width
      "Height" -> 256, // The Number of bytes
      "Width" -> 32 // unit: 32 bits
    )
    val GlobalMemLatency: Int = 10
    val GlobalMemInitFilePath: String =
      "./src/main/resource/data1.hex" // Provide the file path
  }
  // Call module
  val cpu = Module(new PiplinedCPU(addrWidth, dataWidth))
  val im = Module(new InstMem(15))
  val dma = Module(new DMA(idWidth, addrWidth, dataWidth, 0))
  val datamem = Module(
    new DataMem(
      SystemConfig.DataMemSize("Width"),
      SystemConfig.DataMemSize("Height"),
      idWidth,
      addrWidth,
      dataWidth,
      SystemConfig.DataMemBaseAddr,
      SystemConfig.DataMemLatency,
      SystemConfig.DataMemInitFilePath
    )
  )
  val globalMem = Module(
    new DataMem(
      SystemConfig.GlobalMemSize("Width"),
      SystemConfig.GlobalMemSize("Height"),
      idWidth,
      addrWidth,
      dataWidth,
      SystemConfig.GlobalMemBaseAddr,
      SystemConfig.GlobalMemLatency,
      SystemConfig.GlobalMemInitFilePath
    )
  )

  val bus = Module(
    new AXILiteXBar(
      SystemConfig.nMasters,
      SystemConfig.nSlaves,
      idWidth,
      addrWidth,
      dataWidth,
      // Seq(
      //   (Integer.parseInt("8000",16), Integer.parseInt("8000",16)),
      //   (Integer.parseInt("100000",16), Integer.parseInt("200000",16)),
      //   (Integer.parseInt("0",16), Integer.parseInt("1000",16))
      // )
      Seq(
        (SystemConfig.DataMemBaseAddr, SystemConfig.DataMemSize("Size")),
        (SystemConfig.GlobalMemBaseAddr, SystemConfig.GlobalMemSize("Size")),
        (Integer.parseInt("0",16), Integer.parseInt("64",16))
      )
    ) 
  )

  // Memory
  datamem.io.dump := io.localMemDump
  globalMem.io.dump := io.globalMemDump

  // Piplined CPU
  cpu.io.InstMem.rdata := im.io.inst
  cpu.io.InstMem.Valid := true.B // Direct to Mem
  cpu.io.DMA_running  := false.B // DMA finished: local memory is syncronized with global memory
  // Insruction Memory
  im.io.raddr := cpu.io.InstMem.raddr

  // connect dma and mem through bus
  bus.io.masters(0) <> cpu.io.DataMem
  bus.io.masters(1) <> dma.io.master
  bus.io.slaves(0) <> datamem.io.slave
  bus.io.slaves(1) <> globalMem.io.slave
  bus.io.slaves(2) <> dma.io.slave
  

  // io.slave <> dma.io.slave
  io.DMA_Hcf := dma.io.Hcf

  //System
  io.regs := cpu.io.regs
  io.Hcf := cpu.io.Hcf

  io.inst := im.io.inst
  io.rdata := datamem.io.slave.r.bits.data
  io.wdata := datamem.io.slave.w.bits.data
  io.raddr := cpu.io.raddr
  io.waddr := cpu.io.waddr

  // Test
  io.E_Branch_taken := cpu.io.E_Branch_taken
  io.Flush := cpu.io.Flush
  io.Stall_MA := cpu.io.Stall_MA
  io.Stall_DH := cpu.io.Stall_DH
  io.IF_PC := cpu.io.IF_PC
  io.ID_PC := cpu.io.ID_PC
  io.EXE_PC := cpu.io.EXE_PC
  io.MEM_PC := cpu.io.MEM_PC
  io.WB_PC := cpu.io.WB_PC
  io.EXE_alu_out := cpu.io.EXE_alu_out
  io.EXE_src1 := cpu.io.EXE_src1
  io.EXE_src2 := cpu.io.EXE_src2
  io.ALU_src1 := cpu.io.ALU_src1
  io.ALU_src2 := cpu.io.ALU_src2
  io.WB_rd := cpu.io.WB_rd
  io.WB_wdata := cpu.io.WB_wdata
  io.EXE_Jump := cpu.io.EXE_Jump
  io.EXE_Branch := cpu.io.EXE_Branch

  // Initialize the registers with 0
  // for (i <- 0 until 32) {
  //   io.regs(i) := 0.U
  // }
}