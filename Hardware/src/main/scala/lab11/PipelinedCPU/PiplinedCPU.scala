package PiplinedCPU

import chisel3._
import chisel3.util._

import MemIF._
import AXI._
import PiplinedCPU.StageRegister._
import PiplinedCPU.Controller._
import PiplinedCPU.DatapathModule._
import PiplinedCPU.opcode_map._
import PiplinedCPU.wide._


class PiplinedCPU(memAddrWidth: Int, memDataWidth: Int) extends Module {
    val io = IO(new Bundle{
        //InstMem
        val InstMem = new MemIF_CPU(memAddrWidth, memDataWidth)

        // DataMem
        val DataMem = new Axi4MasterIF(4, memAddrWidth, memDataWidth, 2)
        // val DataMem = new MemIF_CPU(memAddrWidth, memDataWidth)

        //System
        val regs = Output(Vec(32,UInt(32.W)))
        val Hcf = Output(Bool())

        // Test
        val E_Branch_taken = Output(Bool())
        val Flush = Output(Bool())
        val Stall_MA = Output(Bool())
        val Stall_DH = Output(Bool())
        val IF_PC = Output(UInt(memAddrWidth.W))
        val ID_PC = Output(UInt(memAddrWidth.W))
        val EXE_PC = Output(UInt(memAddrWidth.W))
        val MEM_PC = Output(UInt(memAddrWidth.W))
        val WB_PC = Output(UInt(memAddrWidth.W))
        val EXE_src1 = Output(UInt(32.W))
        val EXE_src2 = Output(UInt(32.W))
        val ALU_src1 = Output(UInt(32.W))
        val ALU_src2 = Output(UInt(32.W))
        val raddr = Output(UInt(memAddrWidth.W))
        val waddr = Output(UInt(memAddrWidth.W))
        val EXE_alu_out = Output(UInt(32.W))
        val WB_rd = Output(UInt(5.W))
        val WB_wdata = Output(UInt(32.W))
        val EXE_Jump = Output(Bool())
        val EXE_Branch = Output(Bool())
    })
    /*****  Pipeline Stages Registers Module for holding data *****/
    // stage Registers
    val stage_IF = Module(new Reg_IF(memAddrWidth))
    val stage_ID = Module(new Reg_ID(memAddrWidth))
    val stage_EXE = Module(new Reg_EXE(memAddrWidth))
    val stage_MEM = Module(new Reg_MEM(memAddrWidth))
    val stage_WB = Module(new Reg_WB(memAddrWidth))

    // 5 pipe stage datapath modules
    val datapath_IF = Module(new Path_IF(memAddrWidth))
    val datapath_ID = Module(new Path_ID(memAddrWidth))
    val datapath_EXE = Module(new Path_EXE(memAddrWidth))
    val datapath_MEM = Module(new Path_MEM(memAddrWidth))
    val datapath_WB = Module(new Path_WB(memAddrWidth))

    // 1 contorller module
    val contorller = Module(new Controller(memAddrWidth))

    /* Wire Connect */
    // === IF stage reg (PC reg) ======================================================
    stage_IF.io.Stall := (contorller.io.Hcf||contorller.io.Stall_DH || contorller.io.Stall_MA)       // To Be Modified
    stage_IF.io.next_pc_in := datapath_IF.io.next_pc

    // IF Block Datapath
    datapath_IF.io.PCSel := contorller.io.PCSel
    datapath_IF.io.IF_pc_in := stage_IF.io.pc
    datapath_IF.io.EXE_pc_in := stage_EXE.io.pc
    datapath_IF.io.EXE_target_pc_in := datapath_EXE.io.EXE_target_pc_out
    datapath_IF.io.Mem_data := io.InstMem.rdata(31,0)

    // --- Insruction Memory Interface
    io.InstMem.Mem_R := contorller.io.IM_Mem_R
    io.InstMem.Mem_W :=  contorller.io.IM_Mem_W
    io.InstMem.Length :=  contorller.io.IM_Length
    io.InstMem.raddr := datapath_IF.io.Mem_Addr
    io.InstMem.waddr := 0.U // not used
    io.InstMem.wdata := 0.U // not used

    // === ID stage reg ==============================================================
    stage_ID.io.Flush := contorller.io.Flush_BH   // To Be Modified
    stage_ID.io.Stall := (contorller.io.Hcf||contorller.io.Stall_DH || contorller.io.Stall_MA)      // To Be Modified
    stage_ID.io.inst_in := datapath_IF.io.inst
    stage_ID.io.pc_in := stage_IF.io.pc

    // ID Block Datapath
    datapath_ID.io.ID_inst_in := stage_ID.io.inst
    datapath_ID.io.WB_index := stage_WB.io.inst(11,7)
    datapath_ID.io.WB_wdata := datapath_WB.io.WB_wdata
    datapath_ID.io.WB_RegWEn := contorller.io.W_RegWEn
    datapath_ID.io.ImmSel := contorller.io.D_ImmSel

    // === EXE stage reg ==============================================================
    // EXE for data hazard
    stage_EXE.io.Flush := (contorller.io.Flush_BH||contorller.io.Flush_DH) // To Be Modified
    stage_EXE.io.Stall := (contorller.io.Hcf || contorller.io.Stall_MA)   // To Be Modified
    stage_EXE.io.pc_in := stage_ID.io.pc
    stage_EXE.io.inst_in := stage_ID.io.inst
    stage_EXE.io.imm_in := datapath_ID.io.imm
    stage_EXE.io.rs1_rdata_in := datapath_ID.io.ID_rs1_rdata
    stage_EXE.io.rs2_rdata_in := datapath_ID.io.ID_rs2_rdata

    // EXE Block Datapath
    datapath_EXE.io.EXE_pc_in := stage_EXE.io.pc
    datapath_EXE.io.EXE_imm_in := stage_EXE.io.imm
    datapath_EXE.io.EXE_rs1_rdata_in := stage_EXE.io.rs1_rdata
    datapath_EXE.io.EXE_rs2_rdata_in := stage_EXE.io.rs2_rdata
    datapath_EXE.io.E_ASel := contorller.io.E_ASel
    datapath_EXE.io.E_BSel := contorller.io.E_BSel
    datapath_EXE.io.E_BrUn := contorller.io.E_BrUn
    datapath_EXE.io.E_ALUSel := contorller.io.E_ALUSel

    // === MEM stage reg ==============================================================
    stage_MEM.io.Stall := (contorller.io.Hcf || contorller.io.Stall_MA) // To Be Modified
    stage_MEM.io.pc_in := stage_EXE.io.pc
    stage_MEM.io.inst_in := stage_EXE.io.inst
    stage_MEM.io.DM_wdata_in := datapath_EXE.io.EXE_rs2_rdata_out
    stage_MEM.io.alu_out_in := datapath_EXE.io.EXE_alu_out

    // MEM Block Datapath
    datapath_MEM.io.MEM_pc_in := stage_MEM.io.pc
    datapath_MEM.io.MEM_alu_out_in := stage_MEM.io.alu_out
    datapath_MEM.io.MEM_DM_wdata_in := stage_MEM.io.DM_wdata
    // datapath_MEM.io.Mem_Data := io.DataMem.rdata(31,0)
    datapath_MEM.io.Mem_Data := MuxLookup(contorller.io.DM_Length, io.DataMem.r.bits.data, Seq(
        Byte -> MuxLookup(datapath_MEM.io.Mem_Addr(1,0), io.DataMem.r.bits.data(7,0).asUInt,  Seq(
            "b00".U -> io.DataMem.r.bits.data(7,0).asUInt,
            "b01".U -> io.DataMem.r.bits.data(15,8).asUInt,
            "b10".U -> io.DataMem.r.bits.data(23,16).asUInt,
            "b11".U -> io.DataMem.r.bits.data(31,24).asUInt
        )),
        Half -> MuxLookup(datapath_MEM.io.Mem_Addr(1), io.DataMem.r.bits.data(15,0).asUInt,  Seq(
            "b0".U -> io.DataMem.r.bits.data(15,0).asUInt,
            "b1".U -> io.DataMem.r.bits.data(31,16).asUInt,
        )),
        Word -> io.DataMem.r.bits.data(31,0).asUInt
    ))
    io.DataMem.r.bits.data(31,0)

    // --- Data Memory Interface
    // Master state machine
    val mReadIdle :: mReadReq :: mReadResp :: Nil = Enum(3)
    val mWriteIdle :: mWriteReq :: mWriteSend :: mWriteResp :: Nil = Enum(4)
    val mReadState  = RegInit(mReadIdle)
    val mWriteState = RegInit(mWriteIdle)
    val mWriteDataSent = RegInit(false.B) // true for write data is sent through master interface
    // check Write Addr and Data status
    when(mWriteState === mWriteSend) {
        when(io.DataMem.w.ready) {
            mWriteDataSent := true.B
        }
    }.otherwise {
        mWriteDataSent := false.B
    }

    // Mater State Controller
    switch(mReadState) {
        is(mReadIdle) {
            when(contorller.io.DM_Mem_R === 1.U) {
                mReadState := mReadReq
            }
        }
        is(mReadReq) {
            when(io.DataMem.ar.ready) {
                mReadState := mReadResp
            }
        }
        is(mReadResp) {
            when(io.DataMem.r.valid) {
                mReadState := mReadIdle
            }
        }
    }
    switch(mWriteState) {
        is(mWriteIdle) {
            when(contorller.io.DM_Mem_W === 1.U) {
                mWriteState := mWriteSend
            }
        }
        is(mWriteReq) {
            when(io.DataMem.aw.ready) {
                mWriteState := mWriteSend
            }
        }
        is(mWriteSend) {
            when(mWriteDataSent) {
                mWriteState := mWriteResp
            }
        }
        is(mWriteResp) {
            when(io.DataMem.b.valid) {
                mWriteState := mWriteIdle
            }
        }
    }
    // === AXI read ===============================================================
    // read address channel
    io.DataMem.ar.valid       := mReadState === mReadReq
    io.DataMem.ar.bits.addr   := datapath_MEM.io.Mem_Addr
    io.DataMem.ar.bits.burst  := 0.U
    io.DataMem.ar.bits.len    := 0.U  // Burst length
    io.DataMem.ar.bits.size   := 2.U  // burst size: 4 bytes
    io.DataMem.ar.bits.cache  := 0.U
    io.DataMem.ar.bits.id     := 0.U
    io.DataMem.ar.bits.prot   := 0.U
    io.DataMem.ar.bits.lock   := 0.U
    io.DataMem.ar.bits.qos    := 0.U
    io.DataMem.ar.bits.region := 0.U
    // read data channel
    io.DataMem.r.ready := mReadState === mReadResp
    // === AXI write ==============================================================
    // write address channel
    io.DataMem.aw.valid       := mWriteState === mWriteSend && !mWriteDataSent
    io.DataMem.aw.bits.addr   := datapath_MEM.io.Mem_Addr
    io.DataMem.aw.bits.burst  := 0.U
    io.DataMem.aw.bits.len    := 0.U  // Burst length
    io.DataMem.aw.bits.size   := 2.U  // burst size: 4 bytes
    io.DataMem.aw.bits.cache  := 0.U
    io.DataMem.aw.bits.id     := 0.U
    io.DataMem.aw.bits.prot   := 0.U
    io.DataMem.aw.bits.lock   := 0.U
    io.DataMem.aw.bits.qos    := 0.U
    io.DataMem.aw.bits.region := 0.U
    // write data channel
    io.DataMem.w.valid     := mWriteState === mWriteSend && !mWriteDataSent
    io.DataMem.w.bits.data := MuxLookup(contorller.io.DM_Length, datapath_MEM.io.Mem_Write_Data, Seq(
        Byte -> MuxLookup(datapath_MEM.io.Mem_Addr(1,0), datapath_MEM.io.Mem_Write_Data,  Seq(
            "b00".U -> Cat(0.U(24.W), datapath_MEM.io.Mem_Write_Data(7,0)),
            "b01".U -> Cat(0.U(16.W), datapath_MEM.io.Mem_Write_Data(7,0), 0.U(8.W)),
            "b10".U -> Cat(0.U(8.W), datapath_MEM.io.Mem_Write_Data(7,0), 0.U(16.W)),
            "b11".U -> Cat(datapath_MEM.io.Mem_Write_Data(7,0), 0.U(24.W)),
        )),
        Half -> MuxLookup(datapath_MEM.io.Mem_Addr(1), datapath_MEM.io.Mem_Write_Data,  Seq(
            "b0".U -> Cat(0.U(8.W), datapath_MEM.io.Mem_Write_Data(7,0)),
            "b1".U -> Cat(datapath_MEM.io.Mem_Write_Data(7,0), 0.U(8.W)),
        )),
        Word -> datapath_MEM.io.Mem_Write_Data
    ))
    
    io.DataMem.w.bits.strb := MuxLookup(contorller.io.DM_Length, "b0001".U, Seq(
        Byte -> MuxLookup(datapath_MEM.io.Mem_Addr(1,0), "b0001".U,  Seq(
            "b00".U -> "b0001".U,
            "b01".U -> "b0010".U,
            "b10".U -> "b0100".U,
            "b11".U -> "b1000".U,
        )),
        Half -> MuxLookup(datapath_MEM.io.Mem_Addr(1), "b0011".U,  Seq(
            "b0".U -> "b0011".U,
            "b1".U -> "b1100".U,
        )),
        Word -> "b1111".U
    ))
    io.DataMem.w.bits.last := true.B
    // write response channel
    io.DataMem.b.ready := (mWriteState === mWriteResp || mWriteState === mWriteSend)


    // io.DataMem.Mem_R := contorller.io.DM_Mem_R
    // io.DataMem.Mem_W :=  contorller.io.DM_Mem_W
    // io.DataMem.Length :=  contorller.io.DM_Length
    // io.DataMem.raddr := datapath_MEM.io.Mem_Addr
    // io.DataMem.waddr := datapath_MEM.io.Mem_Addr
    // io.DataMem.wdata := datapath_MEM.io.Mem_Write_Data

    // === WB stage reg ==============================================================
    stage_WB.io.Stall := contorller.io.Hcf        // To Be Modified
    stage_WB.io.pc_plus4_in := datapath_MEM.io.MEM_pc_plus_4
    stage_WB.io.inst_in := stage_MEM.io.inst
    stage_WB.io.alu_out_in := datapath_MEM.io.MEM_alu_out
    stage_WB.io.ld_data_in := datapath_MEM.io.MEM_ld_data

    // WB Block Datapath
    datapath_WB.io.WB_pc_plus4_in := stage_WB.io.pc_plus4
    datapath_WB.io.WB_alu_out_in := stage_WB.io.alu_out
    datapath_WB.io.WB_ld_data_in := stage_WB.io.ld_data
    datapath_WB.io.W_WBSel := contorller.io.W_WBSel

    /* Controller */
    contorller.io.IF_Inst := io.InstMem.rdata
    contorller.io.ID_Inst := stage_ID.io.inst
    contorller.io.EXE_Inst := stage_EXE.io.inst
    contorller.io.MEM_Inst := stage_MEM.io.inst
    contorller.io.WB_Inst := stage_WB.io.inst

    contorller.io.E_BrEq := datapath_EXE.io.E_BrEq
    contorller.io.E_BrLT := datapath_EXE.io.E_BrLT

    contorller.io.ID_pc := stage_ID.io.pc

    contorller.io.EXE_target_pc := datapath_EXE.io.EXE_target_pc_out

    contorller.io.IM_Valid := io.InstMem.Valid
    contorller.io.DM_Valid := io.DataMem.r.valid || io.DataMem.b.valid //RegNext(io.DataMem.w.valid) // io.DataMem.Valid


    /* System */
    io.regs := datapath_ID.io.regs
    io.Hcf := contorller.io.Hcf

    /* Test */
    io.E_Branch_taken := contorller.io.E_Branch_taken
    // TODO : Flush signal should be modified
    io.Flush := contorller.io.Flush_DH
    // TODO : Stall signal should be modified
    io.Stall_DH := contorller.io.Stall_DH
    io.Stall_MA := contorller.io.Stall_MA
    io.IF_PC := stage_IF.io.pc
    io.ID_PC := stage_ID.io.pc
    io.EXE_PC := stage_EXE.io.pc
    io.MEM_PC := stage_MEM.io.pc
    io.WB_PC := Mux(stage_WB.io.pc_plus4 > 0.U ,stage_WB.io.pc_plus4 - 4.U,stage_WB.io.pc_plus4)
    io.EXE_alu_out := datapath_EXE.io.EXE_alu_out
    io.EXE_src1 := datapath_EXE.io.EXE_src1
    io.EXE_src2 := datapath_EXE.io.EXE_src2
    io.ALU_src1 := datapath_EXE.io.alu_src1
    io.ALU_src2 := datapath_EXE.io.alu_src2
    io.raddr := io.DataMem.ar.bits.addr
    io.waddr := io.DataMem.aw.bits.addr
    io.WB_wdata := datapath_WB.io.WB_wdata
    io.WB_rd := stage_WB.io.inst(11,7)
    io.EXE_Jump := (stage_EXE.io.inst(6, 0)===JAL) || (stage_EXE.io.inst(6, 0)===JALR)
    io.EXE_Branch := (stage_EXE.io.inst(6, 0)===BRANCH)
}