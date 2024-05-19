package AXI

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec
import org.scalatest.freespec.AnyFreeSpec
import chiseltest.ChiselScalatestTester

import chiseltest.simulator.WriteVcdAnnotation
import chisel3.experimental.BundleLiterals._


import Utils.AXITester
import Config._

import Memory._

// run command:
// DataMemTest: sbt 'testOnly AXI.AXIBurstDataMemTest'

class BurstDataMemTest extends AnyFreeSpec
    with ChiselScalatestTester
    with AXITester {
  // "Masters" should "send/read data to each Slaves according to addr" in {
  "System test" in {
    test(
      new DataMem(
        DataMem_Config.size("Width"),
        DataMem_Config.size("Height"),
        DataMem_Config.idWidth,
        DataMem_Config.addrWidth,
        DataMem_Config.dataWidth,
        DataMem_Config.baseAddr,
        DataMem_Config.latency,
        DataMem_Config.initFilePath
      )
    )
      .withAnnotations(
        Seq(
          WriteVcdAnnotation,
          VerilatorBackendAnnotation
        )
      ) { dut =>
        // init clocks
        // input port
        dut.io.slave.aw.initSource().setSourceClock(dut.clock)
        dut.io.slave.w.initSource().setSourceClock(dut.clock)
        dut.io.slave.ar.initSource().setSourceClock(dut.clock)
        // output port
        dut.io.slave.r.initSink().setSinkClock(dut.clock)
        dut.io.slave.b.initSink().setSinkClock(dut.clock)

        // AXI burst read 
        val prog_read_ar = genBurstAXIAddr(0x8000, 3)
        val prog_read_r1 = genAXIReadData(0, BigInt("03020100", 16).toInt, false)
        val prog_read_r2 = genAXIReadData(0, BigInt("07060504", 16).toInt, false)
        val prog_read_r3 = genAXIReadData(0, BigInt("03020100", 16).toInt, false)
        val prog_read_r4 = genAXIReadData(0, BigInt("07060504", 16).toInt, true)
        println("[Test 1] DataMem AXI Burst mode READ test")
        fork {
          dut.io.slave.ar.enqueue(prog_read_ar)
        }.fork {
          dut.io.slave.r.expectDequeue(prog_read_r1)
          dut.io.slave.r.expectDequeue(prog_read_r2)
          dut.io.slave.r.expectDequeue(prog_read_r3)
          dut.io.slave.r.expectDequeue(prog_read_r4)
        }.join()
        dut.clock.step(5)

        // AXI burst write
        val prog_write_aw = genBurstAXIAddr(0x8090, 3)
        val prog_write_w1 = genAXIWriteData(0, BigInt("03020100", 16).toInt, "b1111", false)
        val prog_write_w2 = genAXIWriteData(0, BigInt("07060504", 16).toInt, "b1111", false)
        val prog_write_w3 = genAXIWriteData(0, BigInt("03020100", 16).toInt, "b1111", false)
        val prog_write_w4 = genAXIWriteData(0, BigInt("07060504", 16).toInt, "b1111", true)
        val prog_write_b  = genAXIWriteResp(0)
        println("[Test 2] DataMem AXI Burst mode WRITE test")
        dut.io.slave.b.ready.poke(true.B)
        
        dut.io.slave.aw.enqueue(prog_write_aw)
        dut.io.slave.w.enqueue(prog_write_w1)
        while(dut.io.slave.w.ready.peek().litToBoolean == false) { dut.clock.step(1) }
        dut.io.slave.w.enqueue(prog_write_w2)
        dut.io.slave.w.enqueue(prog_write_w3)
        dut.io.slave.w.enqueue(prog_write_w4)
        dut.io.slave.b.expectDequeue(prog_write_b)
        dut.clock.step(5)

        println("Local Mem:\n")
        dut.io.dump.poke(true.B)
        dut.clock.step(1)
        dut.io.dump.poke(false.B)
      }
  }

}