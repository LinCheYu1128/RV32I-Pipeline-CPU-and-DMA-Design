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

import AXILite._

// run command:
// AXIBusTest: sbt 'testOnly AXI.AXIBurstBusTest'

class AXIBurstBusTest extends AnyFreeSpec
    with ChiselScalatestTester
    with AXITester {
  // "Masters" should "send/read data to each Slaves according to addr" in {
  "Bus test" in {
    test(
      new AXILiteXBar(
        AXI_Config.master_num,
        AXI_Config.slave_num,
        AXI_Config.s_id_width,
        AXI_Config.addr_width,
        AXI_Config.data_width,
        AXI_Config.addr_map
      )
    )
      .withAnnotations(
        Seq(
          WriteVcdAnnotation,
          VerilatorBackendAnnotation
        )
      ) { dut =>
        /* Initialize IO ports */
        // * masters
        for (i <- 0 until AXI_Config.master_num) {
          // input port
          dut.io.masters(i).ar.initSource().setSourceClock(dut.clock)
          dut.io.masters(i).aw.initSource().setSourceClock(dut.clock)
          dut.io.masters(i).w.initSource().setSourceClock(dut.clock)

          // output ports
          dut.io.masters(i).r.initSink().setSinkClock(dut.clock)
          dut.io.masters(i).b.initSink().setSinkClock(dut.clock)
        }
        // * slaves
        for (i <- 0 until AXI_Config.slave_num) {
          // input port
          dut.io.slaves(i).r.initSource().setSourceClock(dut.clock)
          dut.io.slaves(i).b.initSource().setSourceClock(dut.clock)

          // output ports
          dut.io.slaves(i).ar.initSink().setSinkClock(dut.clock)
          dut.io.slaves(i).aw.initSink().setSinkClock(dut.clock)
          dut.io.slaves(i).w.initSink().setSinkClock(dut.clock)
        }
        println("----START TEST----")
      }
  }
}