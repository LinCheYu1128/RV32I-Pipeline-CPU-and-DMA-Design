package AXI

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec
import org.scalatest.freespec.AnyFreeSpec
import chiseltest.ChiselScalatestTester

import chiseltest.simulator.WriteVcdAnnotation
import chisel3.experimental.BundleLiterals._

import AXI._
import AXILite._
import Utils.AXITester
import Config._

// run command:
// AXI Read Bus Test: sbt 'testOnly AXI.AXIBurstReadBusTest'

// AXI Read Mux Test: sbt 'testOnly AXI.AXIBurstReadMuxTest'

class AXIBurstReadBusTest extends AnyFreeSpec
    with ChiselScalatestTester
    with AXITester {
  "Read Bus test" in {
    test(
      new AXIReadBus(
        AXI_Config.slave_num,
        AXI_Config.s_id_width,
        AXI_Config.addr_width,
        AXI_Config.data_width,
        AXI_Config.addr_map
      )
    ).withAnnotations(
      Seq(
        WriteVcdAnnotation,
        VerilatorBackendAnnotation
      )
    ) { dut =>
      /* Initialize IO ports */
      // * master
      for (i <- 0 until AXI_Config.master_num) {
        // input port
        dut.io.master.readAddr.initSource().setSourceClock(dut.clock)

        // output ports
        dut.io.master.readData.initSink().setSinkClock(dut.clock)
      }
      // * slave
      for (i <- 0 until AXI_Config.slave_num) {
        // input port
        dut.io.slave(i).readData.initSource().setSourceClock(dut.clock)

        // output ports
        dut.io.slave(i).readAddr.initSink().setSinkClock(dut.clock)
      }
        println("----START TEST----")

      fork {
        // expect slave 0 receive request from master
        dut.io.slave(0).readAddr.expectDequeue(genBurstAXIAddr(BigInt("9000", 16), 3))
      }.fork {
        // expect slave 1 receive request from master
        dut.io.slave(1).readAddr.expectDequeue(genBurstAXIAddr(BigInt("19000", 16), 3))
      }.fork {
        // expect master will receive data from slave 0
        dut.io.master.readData.expectDequeue(genAXIReadData(0, BigInt("00010203", 16).toInt, false))
        dut.io.master.readData.expectDequeue(genAXIReadData(0, BigInt("04050607", 16).toInt, false))
        dut.io.master.readData.expectDequeue(genAXIReadData(0, BigInt("08090a0b", 16).toInt, false))
        dut.io.master.readData.expectDequeue(genAXIReadData(0, BigInt("0c0d0e0f", 16).toInt, true))
        // expect master will receive data from slave 1
        dut.io.master.readData.expectDequeue(genAXIReadData(0, BigInt("0f0f0f0f", 16).toInt, false))
        dut.io.master.readData.expectDequeue(genAXIReadData(0, BigInt("05050505", 16).toInt, false))
        dut.io.master.readData.expectDequeue(genAXIReadData(0, BigInt("08080808", 16).toInt, false))
        dut.io.master.readData.expectDequeue(genAXIReadData(0, BigInt("04040404", 16).toInt, true))
      }.fork {
        // assume slave 0 send data to master
        dut.io.slave(0).readData.enqueue(genAXIReadData(0, BigInt("00010203", 16).toInt, false))
        dut.io.slave(0).readData.enqueue(genAXIReadData(0, BigInt("04050607", 16).toInt, false))
        dut.io.slave(0).readData.enqueue(genAXIReadData(0, BigInt("08090a0b", 16).toInt, false))
        dut.io.slave(0).readData.enqueue(genAXIReadData(0, BigInt("0c0d0e0f", 16).toInt, true))
        // master send request to slave 1
        dut.io.slave(1).readData.enqueue(genAXIReadData(0, BigInt("0f0f0f0f", 16).toInt, false))
        dut.io.slave(1).readData.enqueue(genAXIReadData(0, BigInt("05050505", 16).toInt, false))
        dut.io.slave(1).readData.enqueue(genAXIReadData(0, BigInt("08080808", 16).toInt, false))
        dut.io.slave(1).readData.enqueue(genAXIReadData(0, BigInt("04040404", 16).toInt, true))
      }.fork {
        // master send request to slave 0
        dut.io.master.readAddr.enqueue(genBurstAXIAddr(BigInt("9000", 16), 3))
        fork.withRegion(Monitor) {
            while (!dut.io.master.readData.bits.last.peek().litToBoolean)
              dut.clock.step(1)
          }.joinAndStep(dut.clock)
        // master send request to slave 1
        dut.io.master.readAddr.enqueue(genBurstAXIAddr(BigInt("19000", 16), 3))
      }.join()
      dut.clock.step(2)

      println("----TEST END----")
    }
  }
}

class AXIBurstReadMuxTest extends AnyFreeSpec
    with ChiselScalatestTester
    with AXITester {
  "Read Bus test" in {
    test(
      new AXISlaveReadMux(
        AXI_Config.master_num,
        AXI_Config.s_id_width,
        AXI_Config.addr_width,
        AXI_Config.data_width,
      )
    ).withAnnotations(
      Seq(
        WriteVcdAnnotation,
        VerilatorBackendAnnotation
      )
    ) { dut =>
      /* Initialize IO ports */
      for (i <- 0 until AXI_Config.master_num) {
        // input port
        dut.io.in(i).readAddr.initSource().setSourceClock(dut.clock)

        // output ports
        dut.io.in(i).readData.initSink().setSinkClock(dut.clock)
      }
      dut.io.out.readData.initSource().setSourceClock(dut.clock)
      dut.io.out.readAddr.initSink().setSinkClock(dut.clock)
      println("----START TEST----")
      println("[Test 1] Input address from master 0")
      println("[Test 1]: Send address 0x1234 from master 0 to slave")
      println("[Test 1]: Respond data 0x4321 from slave")
      fork{
        // Check if the address read from slave is the same as the address from master0
        dut.io.out.readAddr.expectDequeue(genBurstAXIAddr(BigInt("1234", 16), 3))
        // Check if the data read from master 0 is the same as the data from slave
        dut.io.in(0).readData.expectDequeue(genAXIReadData(0, BigInt("4321", 16).toInt, false))
        dut.io.in(0).readData.expectDequeue(genAXIReadData(0, BigInt("8765", 16).toInt, false))
        dut.io.in(0).readData.expectDequeue(genAXIReadData(0, BigInt("5555", 16).toInt, false))
        dut.io.in(0).readData.expectDequeue(genAXIReadData(0, BigInt("1111", 16).toInt, true)) 
      }.fork{
        dut.io.in(0).readAddr.enqueue(genAXIAddr(BigInt("1234", 16)))
        dut.io.out.readData.enqueue(genAXIReadData(0, BigInt("4321", 16).toInt, false))   // Gen resp data from slave
        dut.io.out.readData.enqueue(genAXIReadData(0, BigInt("8765", 16).toInt, false)) 
        dut.io.out.readData.enqueue(genAXIReadData(0, BigInt("5555", 16).toInt, false)) 
        dut.io.out.readData.enqueue(genAXIReadData(0, BigInt("1111", 16).toInt, true)) 
      }.join()

      dut.clock.step(1)

      println("----TEST END----")
    }
  }
}