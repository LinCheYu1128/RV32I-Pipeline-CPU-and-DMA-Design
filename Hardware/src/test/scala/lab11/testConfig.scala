package Config

import chisel3._

object AXI_Config {
  val master_num = 2 // number of masters
  val slave_num = 2 // number of slaves
  val s_id_width = 4
  val addr_width = 32
  val data_width = 32
  // allocation of 2 slaves in memory space
  val addr_map = List(
    (Integer.parseInt("8000", 16), Integer.parseInt("10000", 16)),
    (Integer.parseInt("10000", 16), Integer.parseInt("20000", 16))
  )
}

object DataMem_Config {
  val size: Map[String, Int] = Map(
    "Width" -> 64,
    "Height" -> 256
  )
  val idWidth = 4
  val addrWidth = 32
  val dataWidth = 32
  val baseAddr = 0x8000
  val latency = 4
  val initFilePath = "./src/main/resource/data1.hex"
}

