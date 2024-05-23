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
// AXI Write Mux Test: sbt 'testOnly AXI.AXIBurstWriteBusTest'
// AXI Write Bus Test: sbt 'testOnly AXI.AXIBurstWriteMuxTest'
// AXI Bar Test: sbt 'testOnly AXI.AXIBurstBarTest'

class AXIBurstReadBusTest extends AnyFreeSpec
    with ChiselScalatestTester
    with AXITester {
  "AXI Bus test" in {
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
  "AXI Bus test" in {
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
      
      // one slave(out) and two masters(in)
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
        // master 0 request 
        dut.io.in(0).readAddr.enqueue(genBurstAXIAddr(BigInt("1234", 16), 3))
        // slave response
        dut.io.out.readData.enqueue(genAXIReadData(0, BigInt("4321", 16).toInt, false))   // Gen resp data from slave
        dut.io.out.readData.enqueue(genAXIReadData(0, BigInt("8765", 16).toInt, false)) 
        dut.io.out.readData.enqueue(genAXIReadData(0, BigInt("5555", 16).toInt, false)) 
        dut.io.out.readData.enqueue(genAXIReadData(0, BigInt("1111", 16).toInt, true)) 
      }.join()

      dut.clock.step(5)

      println("--------")
      println("[Test 2] Input address from master 1")
      println("[Test 2]: Send address 0x5678 from master 1 to slave")
      println("[Test 2]: Respond data 0x8765 from slave")

      fork{
        // Check if the address read from slave is the same as the address from master0
        dut.io.out.readAddr.expectDequeue(genBurstAXIAddr(BigInt("5678", 16), 3))
        // Check if the data read from master 0 is the same as the data from slave
        dut.io.in(1).readData.expectDequeue(genAXIReadData(0, BigInt("8888", 16).toInt, false))
        dut.io.in(1).readData.expectDequeue(genAXIReadData(0, BigInt("4444", 16).toInt, false))
        dut.io.in(1).readData.expectDequeue(genAXIReadData(0, BigInt("2222", 16).toInt, false))
        dut.io.in(1).readData.expectDequeue(genAXIReadData(0, BigInt("1111", 16).toInt, true)) 
      }.fork{
        // master 0 request 
        dut.io.in(1).readAddr.enqueue(genBurstAXIAddr(BigInt("5678", 16), 3))
        // slave response
        dut.io.out.readData.enqueue(genAXIReadData(0, BigInt("8888", 16).toInt, false))   // Gen resp data from slave
        dut.io.out.readData.enqueue(genAXIReadData(0, BigInt("4444", 16).toInt, false)) 
        dut.io.out.readData.enqueue(genAXIReadData(0, BigInt("2222", 16).toInt, false)) 
        dut.io.out.readData.enqueue(genAXIReadData(0, BigInt("1111", 16).toInt, true)) 
      }.join()

      dut.clock.step(5)

      println("--------")
      println("[Test 3] Input address from master 1 & 2 at the same time")
      println("[Test 3]: Send address 0xaaaa from master 0 to slave")
      println("[Test 3]: Send address 0xbbbb from master 1 to slave")
      println("[Test 3]: Respond data 0x1111 0x2222 0x3333 0x4444 0x6666, 0x7777, 0x8888, 0x9999 from slave")
      println("[Test 3]: Observe address read from slave & data read from master")

      dut.io.out.readAddr.ready.poke(true.B)
      dut.io.in(0).readData.ready.poke(true.B)
      dut.io.in(1).readData.ready.poke(true.B)

      fork{
        dut.io.in(0).readAddr.enqueue(genBurstAXIAddr(BigInt("aaaa", 16), 3))
      }.fork{
        dut.io.in(1).readAddr.enqueue(genBurstAXIAddr(BigInt("bbbb", 16), 3))
      }.fork{
        dut.io.out.readData.enqueue(genAXIReadData(0, BigInt("1111", 16).toInt, false))
        dut.io.out.readData.enqueue(genAXIReadData(0, BigInt("2222", 16).toInt, false))
        dut.io.out.readData.enqueue(genAXIReadData(0, BigInt("3333", 16).toInt, false))
        dut.io.out.readData.enqueue(genAXIReadData(0, BigInt("4444", 16).toInt, true))

        dut.io.out.readData.enqueue(genAXIReadData(0, BigInt("6666", 16).toInt, false))
        dut.io.out.readData.enqueue(genAXIReadData(0, BigInt("7777", 16).toInt, false))
        dut.io.out.readData.enqueue(genAXIReadData(0, BigInt("8888", 16).toInt, false))
        dut.io.out.readData.enqueue(genAXIReadData(0, BigInt("9999", 16).toInt, true))
      }.fork.withRegion(Monitor){
        while(!(dut.io.in(0).readData.valid.peek().litToBoolean | dut.io.in(1).readData.valid.peek().litToBoolean))
            dut.clock.step(1)
        println("[Test 3] First try")
        println("[Test 3]: Slave observe address 0x" + dut.io.out.readAddr.bits.addr.peek().litValue.toString(16))
        println("[Test 3]: Master 0 observe data 0x" + dut.io.in(0).readData.bits.data.peek().litValue.toString(16))
        println("[Test 3]: Master 1 observe data 0x" + dut.io.in(1).readData.bits.data.peek().litValue.toString(16))
        dut.clock.step(1)

        while(!(dut.io.in(0).readData.valid.peek().litToBoolean | dut.io.in(1).readData.valid.peek().litToBoolean))
            dut.clock.step(1)
        println("[Test 3] Second try")
        println("[Test 3]: Slave observe address 0x" + dut.io.out.readAddr.bits.addr.peek().litValue.toString(16))
        println("[Test 3]: Master 0 observe data 0x" + dut.io.in(0).readData.bits.data.peek().litValue.toString(16))
        println("[Test 3]: Master 1 observe data 0x" + dut.io.in(1).readData.bits.data.peek().litValue.toString(16))
        dut.clock.step(1)

        while(!(dut.io.in(0).readData.valid.peek().litToBoolean | dut.io.in(1).readData.valid.peek().litToBoolean))
            dut.clock.step(1)
        println("[Test 3] Third try")
        println("[Test 3]: Slave observe address 0x" + dut.io.out.readAddr.bits.addr.peek().litValue.toString(16))
        println("[Test 3]: Master 0 observe data 0x" + dut.io.in(0).readData.bits.data.peek().litValue.toString(16))
        println("[Test 3]: Master 1 observe data 0x" + dut.io.in(1).readData.bits.data.peek().litValue.toString(16))
        dut.clock.step(1)

        while(!(dut.io.in(0).readData.valid.peek().litToBoolean | dut.io.in(1).readData.valid.peek().litToBoolean))
            dut.clock.step(1)
        println("[Test 3] Fourth try")
        println("[Test 3]: Slave observe address 0x" + dut.io.out.readAddr.bits.addr.peek().litValue.toString(16))
        println("[Test 3]: Master 0 observe data 0x" + dut.io.in(0).readData.bits.data.peek().litValue.toString(16))
        println("[Test 3]: Master 1 observe data 0x" + dut.io.in(1).readData.bits.data.peek().litValue.toString(16))
        dut.clock.step(1)

        while(!(dut.io.in(0).readData.valid.peek().litToBoolean | dut.io.in(1).readData.valid.peek().litToBoolean))
            dut.clock.step(1)
        println("[Test 3] Fifth try")
        println("[Test 3]: Slave observe address 0x" + dut.io.out.readAddr.bits.addr.peek().litValue.toString(16))
        println("[Test 3]: Master 0 observe data 0x" + dut.io.in(0).readData.bits.data.peek().litValue.toString(16))
        println("[Test 3]: Master 1 observe data 0x" + dut.io.in(1).readData.bits.data.peek().litValue.toString(16))
        dut.clock.step(1)

        while(!(dut.io.in(0).readData.valid.peek().litToBoolean | dut.io.in(1).readData.valid.peek().litToBoolean))
            dut.clock.step(1)
        println("[Test 3] Sixth try")
        println("[Test 3]: Slave observe address 0x" + dut.io.out.readAddr.bits.addr.peek().litValue.toString(16))
        println("[Test 3]: Master 0 observe data 0x" + dut.io.in(0).readData.bits.data.peek().litValue.toString(16))
        println("[Test 3]: Master 1 observe data 0x" + dut.io.in(1).readData.bits.data.peek().litValue.toString(16))
        dut.clock.step(1)

        while(!(dut.io.in(0).readData.valid.peek().litToBoolean | dut.io.in(1).readData.valid.peek().litToBoolean))
            dut.clock.step(1)
        println("[Test 3] Seventh try")
        println("[Test 3]: Slave observe address 0x" + dut.io.out.readAddr.bits.addr.peek().litValue.toString(16))
        println("[Test 3]: Master 0 observe data 0x" + dut.io.in(0).readData.bits.data.peek().litValue.toString(16))
        println("[Test 3]: Master 1 observe data 0x" + dut.io.in(1).readData.bits.data.peek().litValue.toString(16))
        dut.clock.step(1)

        while(!(dut.io.in(0).readData.valid.peek().litToBoolean | dut.io.in(1).readData.valid.peek().litToBoolean))
            dut.clock.step(1)
        println("[Test 3] Eighth try")
        println("[Test 3]: Slave observe address 0x" + dut.io.out.readAddr.bits.addr.peek().litValue.toString(16))
        println("[Test 3]: Master 0 observe data 0x" + dut.io.in(0).readData.bits.data.peek().litValue.toString(16))
        println("[Test 3]: Master 1 observe data 0x" + dut.io.in(1).readData.bits.data.peek().litValue.toString(16))
      }.joinAndStep(dut.clock)
      
      dut.clock.step(2)


      println("----TEST END----")
    }
  }
}

class AXIBurstWriteBusTest extends AnyFreeSpec
    with ChiselScalatestTester
    with AXITester {
  "AXI Bus test" in {
    test(
      new AXIWriteBus(
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
        dut.io.master.writeAddr.initSource().setSourceClock(dut.clock)
        dut.io.master.writeData.initSource().setSourceClock(dut.clock)

        // output ports
        dut.io.master.writeResp.initSink().setSinkClock(dut.clock)
      }
      //* slave
      for (i <- 0 until AXI_Config.slave_num) {
        // input port
        dut.io.slave(i).writeResp.initSource().setSourceClock(dut.clock)

        // output ports
        dut.io.slave(i).writeAddr.initSink().setSinkClock(dut.clock)
        dut.io.slave(i).writeData.initSink().setSinkClock(dut.clock)
      }
      println("----START TEST----")

      fork {
        // expect slave 0 receive write request from master
        dut.io.slave(0).writeAddr.expectDequeue(genBurstAXIAddr(BigInt("9000", 16), 3))
      }.fork {
        // expect slave 1 receive write request from master
        dut.io.slave(1).writeAddr.expectDequeue(genBurstAXIAddr(BigInt("19000", 16), 3))
      }.fork {
        // expect slave 0 will receive write data from master
        dut.io.slave(0).writeData.expectDequeue(genAXIWriteData(0, BigInt("00010203", 16).toInt, "b1111", false))
        dut.io.slave(0).writeData.expectDequeue(genAXIWriteData(0, BigInt("04050607", 16).toInt, "b1111", false))
        dut.io.slave(0).writeData.expectDequeue(genAXIWriteData(0, BigInt("08090a0b", 16).toInt, "b1111", false))
        dut.io.slave(0).writeData.expectDequeue(genAXIWriteData(0, BigInt("0c0d0e0f", 16).toInt, "b1111", true))
      }.fork {
        // expect slave 0 will receive write data from master
        dut.io.slave(1).writeData.expectDequeue(genAXIWriteData(0, BigInt("0f0f0f0f", 16).toInt, "b1111", false))
        dut.io.slave(1).writeData.expectDequeue(genAXIWriteData(0, BigInt("05050505", 16).toInt, "b1111", false))
        dut.io.slave(1).writeData.expectDequeue(genAXIWriteData(0, BigInt("08080808", 16).toInt, "b1111", false))
        dut.io.slave(1).writeData.expectDequeue(genAXIWriteData(0, BigInt("04040404", 16).toInt, "b1111", true))
      }.fork {
        dut.io.master.writeResp.expectDequeue(genAXIWriteResp(0))
        dut.io.master.writeResp.expectDequeue(genAXIWriteResp(0))
      }.fork {
        // assume master send request to slave 0
        dut.io.master.writeAddr.enqueue(genBurstAXIAddr(BigInt("9000", 16), 3))
        dut.io.master.writeAddr.enqueue(genBurstAXIAddr(BigInt("19000", 16), 3))
      }.fork {
        // assume master send data to slave 1
        dut.io.master.writeData.enqueue(genAXIWriteData(0, BigInt("00010203", 16).toInt, "b1111", false))
        dut.io.master.writeData.enqueue(genAXIWriteData(0, BigInt("04050607", 16).toInt, "b1111", false))
        dut.io.master.writeData.enqueue(genAXIWriteData(0, BigInt("08090a0b", 16).toInt, "b1111", false))
        dut.io.master.writeData.enqueue(genAXIWriteData(0, BigInt("0c0d0e0f", 16).toInt, "b1111", true))
        // assume master send data to slave 1
        dut.io.master.writeData.enqueue(genAXIWriteData(0, BigInt("0f0f0f0f", 16).toInt, "b1111", false))
        dut.io.master.writeData.enqueue(genAXIWriteData(0, BigInt("05050505", 16).toInt, "b1111", false))
        dut.io.master.writeData.enqueue(genAXIWriteData(0, BigInt("08080808", 16).toInt, "b1111", false))
        dut.io.master.writeData.enqueue(genAXIWriteData(0, BigInt("04040404", 16).toInt, "b1111", true))
      }.fork{
        fork.withRegion(Monitor){
          while(!dut.io.slave(0).writeData.bits.last.peek().litToBoolean)
            dut.clock.step(1)
        }.joinAndStep(dut.clock)
        dut.io.slave(0).writeResp.enqueue(genAXIWriteResp(0))
      }.fork{
        fork.withRegion(Monitor){
          while(!dut.io.slave(1).writeData.bits.last.peek().litToBoolean)
            dut.clock.step(1)
        }.joinAndStep(dut.clock)
        dut.io.slave(1).writeResp.enqueue(genAXIWriteResp(0))
      }.join()
      dut.clock.step(2)

      println("----TEST END----")
    }
  }
}

class AXIBurstWriteMuxTest extends AnyFreeSpec
    with ChiselScalatestTester
    with AXITester {
  "AXI Bus test" in {
    test(
      new AXISlaveWriteMux(
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
        dut.io.in(i).writeAddr.initSource().setSourceClock(dut.clock)
        dut.io.in(i).writeData.initSource().setSourceClock(dut.clock)

        // output ports
        dut.io.in(i).writeResp.initSink().setSinkClock(dut.clock)
      }
      dut.io.out.writeResp.initSource().setSourceClock(dut.clock)
      dut.io.out.writeAddr.initSink().setSinkClock(dut.clock)
      dut.io.out.writeData.initSink().setSinkClock(dut.clock)

      println("----START TEST----")

      println("[Test 1] Input from master 0")
      println("[Test 1]: Send address 0x1234 & data 0x4321 from master 0 to slave")

      dut.clock.step(1)
      fork{
        dut.io.out.writeAddr.expectDequeue(genBurstAXIAddr(BigInt("1234", 16), 3))
      }.fork{
        dut.io.out.writeData.expectDequeue(genAXIWriteData(0, BigInt("1111", 16).toInt, "b1111", false))
        dut.io.out.writeData.expectDequeue(genAXIWriteData(0, BigInt("2222", 16).toInt, "b1111", false))
        dut.io.out.writeData.expectDequeue(genAXIWriteData(0, BigInt("3333", 16).toInt, "b1111", false))
        dut.io.out.writeData.expectDequeue(genAXIWriteData(0, BigInt("4444", 16).toInt, "b1111", true))
      }.fork{
        dut.io.in(0).writeResp.expectDequeue(genAXIWriteResp(0))
      }.fork{
        dut.io.in(0).writeAddr.enqueue(genBurstAXIAddr(BigInt("1234", 16), 3))
      }.fork{
        dut.io.in(0).writeData.enqueue(genAXIWriteData(0, BigInt("1111", 16).toInt, "b1111", false))
        dut.io.in(0).writeData.enqueue(genAXIWriteData(0, BigInt("2222", 16).toInt, "b1111", false))
        dut.io.in(0).writeData.enqueue(genAXIWriteData(0, BigInt("3333", 16).toInt, "b1111", false))
        dut.io.in(0).writeData.enqueue(genAXIWriteData(0, BigInt("4444", 16).toInt, "b1111", true))
      }.fork{
        fork.withRegion(Monitor){
          while(!dut.io.out.writeAddr.valid.peek().litToBoolean || !dut.io.out.writeData.valid.peek().litToBoolean){
            dut.clock.step(1)
          }
        }.joinAndStep(dut.clock)
        dut.io.out.writeResp.enqueue(genAXIWriteResp(0))
      }.join()

      println("--------")
      println("[Test 2] Input from master 1")
      println("[Test 2]: Send address 0x5678 & data 0x8765 from master 1 to slave")

      dut.clock.step(1)
      fork{
        dut.io.out.writeAddr.expectDequeue(genBurstAXIAddr(BigInt("5678", 16), 3))
      }.fork{
        dut.io.out.writeData.expectDequeue(genAXIWriteData(0, BigInt("5555", 16).toInt, "b1111", false))
        dut.io.out.writeData.expectDequeue(genAXIWriteData(0, BigInt("6666", 16).toInt, "b1111", false))
        dut.io.out.writeData.expectDequeue(genAXIWriteData(0, BigInt("7777", 16).toInt, "b1111", false))
        dut.io.out.writeData.expectDequeue(genAXIWriteData(0, BigInt("8888", 16).toInt, "b1111", true))
      }.fork{
        dut.io.in(1).writeResp.expectDequeue(genAXIWriteResp(0))
      }.fork{
        dut.io.in(1).writeAddr.enqueue(genBurstAXIAddr(BigInt("5678", 16), 3))
      }.fork{
        dut.io.in(1).writeData.enqueue(genAXIWriteData(0, BigInt("5555", 16).toInt, "b1111", false))
        dut.io.in(1).writeData.enqueue(genAXIWriteData(0, BigInt("6666", 16).toInt, "b1111", false))
        dut.io.in(1).writeData.enqueue(genAXIWriteData(0, BigInt("7777", 16).toInt, "b1111", false))
        dut.io.in(1).writeData.enqueue(genAXIWriteData(0, BigInt("8888", 16).toInt, "b1111", true))
      }.fork{
        fork.withRegion(Monitor){
          while(!dut.io.out.writeAddr.valid.peek().litToBoolean || !dut.io.out.writeData.valid.peek().litToBoolean){
            dut.clock.step(1)
          }
        }.joinAndStep(dut.clock)
        dut.io.out.writeResp.enqueue(genAXIWriteResp(0))
      }.join()

      dut.clock.step(1)
      println("--------")
      println("[Test 3] Input address from master 1 & 2 at the same time")
      println("[Test 3]: Send address 0xaaaa & 0xcccc from master 0 to slave")
      println("[Test 3]: Send address 0xbbbb & 0xdddd from master 1 to slave")
      println("[Test 3]: Send data 0x6666, 0x7777 from master 0 to slave")
      println("[Test 3]: Send data 0x8888, 0x9999 from master 1 to slave")
      println("[Test 3]: Respond writeResp from slave")
      println("[Test 3]: Observe address read from slave & data read from master")

      dut.io.out.writeAddr.ready.poke(true.B)
      dut.io.out.writeData.ready.poke(true.B)

      fork{
        dut.io.in(0).writeAddr.enqueue(genBurstAXIAddr(BigInt("aaaa", 16), 3))
      }.fork{
        dut.io.in(1).writeAddr.enqueue(genBurstAXIAddr(BigInt("bbbb", 16), 3))
      }.fork{
        dut.io.in(0).writeData.enqueue(genAXIWriteData(0, BigInt("1111", 16).toInt, "b1111", false))
        dut.io.in(0).writeData.enqueue(genAXIWriteData(0, BigInt("2222", 16).toInt, "b1111", false))
        dut.io.in(0).writeData.enqueue(genAXIWriteData(0, BigInt("3333", 16).toInt, "b1111", false))
        dut.io.in(0).writeData.enqueue(genAXIWriteData(0, BigInt("4444", 16).toInt, "b1111", true))
      }.fork{
        dut.io.in(1).writeData.enqueue(genAXIWriteData(0, BigInt("6666", 16).toInt, "b1111", false))
        dut.io.in(1).writeData.enqueue(genAXIWriteData(0, BigInt("7777", 16).toInt, "b1111", false))
        dut.io.in(1).writeData.enqueue(genAXIWriteData(0, BigInt("8888", 16).toInt, "b1111", false))
        dut.io.in(1).writeData.enqueue(genAXIWriteData(0, BigInt("9999", 16).toInt, "b1111", true))
      }.fork{
        dut.io.in(0).writeResp.expectDequeue(genAXIWriteResp(0))
      }.fork{
        dut.io.in(1).writeResp.expectDequeue(genAXIWriteResp(0))
      }.fork{
        for(i <- 0 until 2){
          fork.withRegion(Monitor){
            while(!(dut.io.in(0).writeAddr.valid.peek().litToBoolean | dut.io.in(1).writeData.valid.peek().litToBoolean))
            {
              dut.clock.step(1)
            }
          }.joinAndStep(dut.clock)
          dut.io.out.writeResp.enqueue(genAXIWriteResp(0))
        }
      }.fork
        .withRegion(Monitor){
          while(!(dut.io.out.writeAddr.valid.peek().litToBoolean & dut.io.out.writeData.valid.peek().litToBoolean))
            dut.clock.step(1)
          println("[Test 3] First try 1")
          println("[Test 3]: Slave observe address 0x" + dut.io.out.writeAddr.bits.addr.peek().litValue.toString(16))
          println("[Test 3]: Slave observe data 0x" + dut.io.out.writeData.bits.data.peek().litValue.toString(16))
          dut.clock.step(1)
          println("[Test 3] First try 2")
          println("[Test 3]: Slave observe address 0x" + dut.io.out.writeAddr.bits.addr.peek().litValue.toString(16))
          println("[Test 3]: Slave observe data 0x" + dut.io.out.writeData.bits.data.peek().litValue.toString(16))
          dut.clock.step(1)
          println("[Test 3] First try 3")
          println("[Test 3]: Slave observe address 0x" + dut.io.out.writeAddr.bits.addr.peek().litValue.toString(16))
          println("[Test 3]: Slave observe data 0x" + dut.io.out.writeData.bits.data.peek().litValue.toString(16))
          dut.clock.step(1)
          println("[Test 3] First try 4")
          println("[Test 3]: Slave observe address 0x" + dut.io.out.writeAddr.bits.addr.peek().litValue.toString(16))
          println("[Test 3]: Slave observe data 0x" + dut.io.out.writeData.bits.data.peek().litValue.toString(16))
          dut.clock.step(1)

          while(!(dut.io.out.writeAddr.valid.peek().litToBoolean & dut.io.out.writeData.valid.peek().litToBoolean))
            dut.clock.step(1)
          println("[Test 3] Second try 1")
          println("[Test 3]: Slave observe address 0x" + dut.io.out.writeAddr.bits.addr.peek().litValue.toString(16))
          println("[Test 3]: Slave observe data 0x" + dut.io.out.writeData.bits.data.peek().litValue.toString(16))
          dut.clock.step(1)
          println("[Test 3] Second try 2")
          println("[Test 3]: Slave observe address 0x" + dut.io.out.writeAddr.bits.addr.peek().litValue.toString(16))
          println("[Test 3]: Slave observe data 0x" + dut.io.out.writeData.bits.data.peek().litValue.toString(16))
          dut.clock.step(1)
          println("[Test 3] Second try 3")
          println("[Test 3]: Slave observe address 0x" + dut.io.out.writeAddr.bits.addr.peek().litValue.toString(16))
          println("[Test 3]: Slave observe data 0x" + dut.io.out.writeData.bits.data.peek().litValue.toString(16))
          dut.clock.step(1)
          println("[Test 3] Second try 4")
          println("[Test 3]: Slave observe address 0x" + dut.io.out.writeAddr.bits.addr.peek().litValue.toString(16))
          println("[Test 3]: Slave observe data 0x" + dut.io.out.writeData.bits.data.peek().litValue.toString(16))
          dut.clock.step(1)

        }.joinAndStep(dut.clock)
      dut.clock.step(2)

      println("----TEST END----")
    }
  }
}

class AXIBurstBarTest extends AnyFreeSpec
    with ChiselScalatestTester
    with AXITester {

  "AXI Bus test" in {
    test(
      new AXILiteXBar(
        AXI_Config.master_num,
        AXI_Config.slave_num,
        AXI_Config.s_id_width,
        AXI_Config.addr_width,
        AXI_Config.data_width,
        AXI_Config.addr_map
      )
    ).withAnnotations(
      Seq(
        WriteVcdAnnotation
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

      println("[Test 1] AXI cross bar READ test")
      println("[Test 1]: Masters read from each slave according to addr")
      println("[Test 1]: Slaves respond data to each master")

      fork {
        dut.io.slaves(0).ar.expectDequeue(genBurstAXIAddr(BigInt("9000", 16).toInt, 3))
      }.fork {
        dut.io.slaves(1).ar.expectDequeue(genBurstAXIAddr(BigInt("19000", 16).toInt, 3))
      }.fork {
        dut.io.masters(0).r.expectDequeue(genAXIReadData(0, BigInt("00010203", 16).toInt, false))
        dut.io.masters(0).r.expectDequeue(genAXIReadData(0, BigInt("04050607", 16).toInt, false))
        dut.io.masters(0).r.expectDequeue(genAXIReadData(0, BigInt("08090a0b", 16).toInt, false))
        dut.io.masters(0).r.expectDequeue(genAXIReadData(0, BigInt("0c0d0e0f", 16).toInt, true))
      }.fork {
        dut.io.masters(1).r.expectDequeue(genAXIReadData(0, BigInt("0f0f0f0f", 16).toInt, false))
        dut.io.masters(1).r.expectDequeue(genAXIReadData(0, BigInt("05050505", 16).toInt, false))
        dut.io.masters(1).r.expectDequeue(genAXIReadData(0, BigInt("08080808", 16).toInt, false))
        dut.io.masters(1).r.expectDequeue(genAXIReadData(0, BigInt("04040404", 16).toInt, true))
      }.fork {
        dut.io.slaves(0).r.enqueue(genAXIReadData(0, BigInt("00010203", 16).toInt, false))
        dut.io.slaves(0).r.enqueue(genAXIReadData(0, BigInt("04050607", 16).toInt, false))
        dut.io.slaves(0).r.enqueue(genAXIReadData(0, BigInt("08090a0b", 16).toInt, false))
        dut.io.slaves(0).r.enqueue(genAXIReadData(0, BigInt("0c0d0e0f", 16).toInt, true))
      }.fork {
        dut.io.slaves(1).r.enqueue(genAXIReadData(0, BigInt("0f0f0f0f", 16).toInt, false))
        dut.io.slaves(1).r.enqueue(genAXIReadData(0, BigInt("05050505", 16).toInt, false))
        dut.io.slaves(1).r.enqueue(genAXIReadData(0, BigInt("08080808", 16).toInt, false))
        dut.io.slaves(1).r.enqueue(genAXIReadData(0, BigInt("04040404", 16).toInt, true))

      }.fork {
        dut.io.masters(0).ar.enqueue(genBurstAXIAddr(BigInt("9000", 16).toInt, 3))
      }.fork {
        dut.io.masters(1).ar.enqueue(genBurstAXIAddr(BigInt("19000", 16).toInt, 3))
      }.join()

      dut.clock.step(1)

      println("--------")
      println("[Test 2] AXI cross bar WRITE test")
      println("[Test 2]: Masters write data to each slave according to addr")
      println("[Test 2]: Slaves respond after handshake")

      fork {
        dut.io.slaves(0).aw.expectDequeue(genAXIAddr(BigInt("9000", 16).toInt))
        dut.io.slaves(0).aw.expectDequeue(genAXIAddr(BigInt("9008", 16).toInt))
      }.fork {
        dut.io.slaves(1).aw.expectDequeue(genAXIAddr(BigInt("19000", 16).toInt))
        dut.io.slaves(1).aw.expectDequeue(genAXIAddr(BigInt("19008", 16).toInt))
      }.fork {
        dut.io.slaves(0).w.expectDequeue(genAXIWriteData(0, BigInt("00010203", 16).toInt, "b1111", true))
        dut.io.slaves(0).w.expectDequeue(genAXIWriteData(0, BigInt("04050607", 16).toInt, "b1111", true))
      }.fork {
        dut.io.slaves(1).w.expectDequeue(genAXIWriteData(0, BigInt("08090a0b", 16).toInt, "b1111", true))
        dut.io.slaves(1).w.expectDequeue(genAXIWriteData(0, BigInt("0c0d0e0f", 16).toInt, "b1111", true))
      }.fork {
        dut.io.masters(0).b.expectDequeue(genAXIWriteResp(0))
        dut.io.masters(0).b.expectDequeue(genAXIWriteResp(0))
      }.fork {
        dut.io.masters(1).b.expectDequeue(genAXIWriteResp(0))
        dut.io.masters(1).b.expectDequeue(genAXIWriteResp(0))
      }.fork {
        dut.io.masters(0).aw.enqueue(genAXIAddr(BigInt("9000", 16).toInt))
        dut.io.masters(0).aw.enqueue(genAXIAddr(BigInt("19008", 16).toInt))
      }.fork {
        dut.io.masters(1).aw.enqueue(genAXIAddr(BigInt("19000", 16).toInt))
        dut.io.masters(1).aw.enqueue(genAXIAddr(BigInt("9008", 16).toInt))
      }.fork {
        dut.io.masters(0).w.enqueue(genAXIWriteData(0, BigInt("00010203", 16).toInt, "b1111", true))
        dut.io.masters(0).w.enqueue(genAXIWriteData(0, BigInt("0c0d0e0f", 16).toInt, "b1111", true))
      }.fork {
        dut.io.masters(1).w.enqueue(genAXIWriteData(0, BigInt("08090a0b", 16).toInt, "b1111", true))
        dut.io.masters(1).w.enqueue(genAXIWriteData(0, BigInt("04050607", 16).toInt, "b1111", true))
      }.fork {
        for (i <- 0 until 2) {
          fork.withRegion(Monitor) {
              while (!dut.io.slaves(0).aw.valid.peek().litToBoolean || !dut.io.slaves(0).w.valid.peek().litToBoolean)
                dut.clock.step(1)
            }.joinAndStep(dut.clock)
          dut.io.slaves(0).b.enqueue(genAXIWriteResp(0))
        }
      }.fork {
        for (i <- 0 until 2) {
          fork
            .withRegion(Monitor) {
              while (!dut.io.slaves(1).aw.valid.peek().litToBoolean || !dut.io.slaves(1).w.valid.peek().litToBoolean)
                dut.clock.step(1)
            }.joinAndStep(dut.clock)
          dut.io.slaves(1).b.enqueue(genAXIWriteResp(0))
        }
      }.join()

      dut.clock.step(1)

      println("--------")
      println("[Test 3] AXI cross bar READ & WRITE same slave at the same time")
      println("[Test 3]: Master0 read data from slave0")
      println("[Test 3]: Master1 write data to slave0")
      println("[Test 3]: Slave 0 respond at the same time")

      fork {
        dut.io.slaves(0).ar.expectDequeue(genAXIAddr(BigInt("9000", 16).toInt))
      }.fork {
        dut.io.slaves(0).aw.expectDequeue(genAXIAddr(BigInt("9000", 16).toInt))
      }.fork {
        dut.io.slaves(0).w.expectDequeue(genAXIWriteData(0, BigInt("1EADBEEF", 16).toInt, "b1111", true))
      }.fork {
        dut.io.masters(0).r.expectDequeue(genAXIReadData(0, BigInt("1AFEBABE", 16).toInt, true))
      }.fork {
        dut.io.masters(1).b.expectDequeue(genAXIWriteResp(0))
      }.fork {
        dut.io.masters(0).ar.enqueue(genAXIAddr(BigInt("9000", 16).toInt))
      }.fork {
        dut.io.slaves(0).r.enqueue(genAXIReadData(0, BigInt("1AFEBABE", 16).toInt, true))
      }.fork {
        dut.io.masters(1).aw.enqueue(genAXIAddr(BigInt("9000", 16).toInt))
      }.fork {
        dut.io.masters(1).w.enqueue(genAXIWriteData(0, BigInt("1EADBEEF", 16).toInt, "b1111", true))
      }.fork {
        fork.withRegion(Monitor) {
            while ( !dut.io.slaves(0).aw.valid.peek().litToBoolean || !dut.io.slaves(0).w.valid.peek().litToBoolean)
              dut.clock.step(1)
          }.joinAndStep(dut.clock)
        dut.io.slaves(0).b.enqueue(genAXIWriteResp(0))
      }.join()

      dut.clock.step(1)

      println("----TEST END----")
    }
  }
}