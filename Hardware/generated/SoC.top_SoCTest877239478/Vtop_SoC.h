// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTOP_SOC_H_
#define VERILATED_VTOP_SOC_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop_SoC__Syms;
class Vtop_SoC_VerilatedVcd;


//----------

VL_MODULE(Vtop_SoC) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_Hcf,0,0);
    VL_IN8(io_Dump_Mem,0,0);
    VL_OUT8(io_E_Branch_taken,0,0);
    VL_OUT8(io_Flush,0,0);
    VL_OUT8(io_Stall_MA,0,0);
    VL_OUT8(io_Stall_DH,0,0);
    VL_OUT8(io_WB_rd,4,0);
    VL_OUT8(io_EXE_Jump,0,0);
    VL_OUT8(io_EXE_Branch,0,0);
    VL_OUT(io_regs_0,31,0);
    VL_OUT(io_regs_1,31,0);
    VL_OUT(io_regs_2,31,0);
    VL_OUT(io_regs_3,31,0);
    VL_OUT(io_regs_4,31,0);
    VL_OUT(io_regs_5,31,0);
    VL_OUT(io_regs_6,31,0);
    VL_OUT(io_regs_7,31,0);
    VL_OUT(io_regs_8,31,0);
    VL_OUT(io_regs_9,31,0);
    VL_OUT(io_regs_10,31,0);
    VL_OUT(io_regs_11,31,0);
    VL_OUT(io_regs_12,31,0);
    VL_OUT(io_regs_13,31,0);
    VL_OUT(io_regs_14,31,0);
    VL_OUT(io_regs_15,31,0);
    VL_OUT(io_regs_16,31,0);
    VL_OUT(io_regs_17,31,0);
    VL_OUT(io_regs_18,31,0);
    VL_OUT(io_regs_19,31,0);
    VL_OUT(io_regs_20,31,0);
    VL_OUT(io_regs_21,31,0);
    VL_OUT(io_regs_22,31,0);
    VL_OUT(io_regs_23,31,0);
    VL_OUT(io_regs_24,31,0);
    VL_OUT(io_regs_25,31,0);
    VL_OUT(io_regs_26,31,0);
    VL_OUT(io_regs_27,31,0);
    VL_OUT(io_regs_28,31,0);
    VL_OUT(io_regs_29,31,0);
    VL_OUT(io_regs_30,31,0);
    VL_OUT(io_regs_31,31,0);
    VL_OUT(io_inst,31,0);
    VL_OUT(io_rdata,31,0);
    VL_OUT(io_wdata,31,0);
    VL_OUT(io_IF_PC,31,0);
    VL_OUT(io_ID_PC,31,0);
    VL_OUT(io_EXE_PC,31,0);
    VL_OUT(io_MEM_PC,31,0);
    VL_OUT(io_WB_PC,31,0);
    VL_OUT(io_EXE_alu_out,31,0);
    VL_OUT(io_EXE_src1,31,0);
    VL_OUT(io_EXE_src2,31,0);
    VL_OUT(io_ALU_src1,31,0);
    VL_OUT(io_ALU_src2,31,0);
    VL_OUT(io_raddr,31,0);
    VL_OUT(io_WB_wdata,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ top_SoC__DOT__cpu_io_DataMem_b_ready;
        CData/*0:0*/ top_SoC__DOT__datamem_io_slave_r_valid;
        CData/*0:0*/ top_SoC__DOT__cpu__DOT__stage_ID_io_Stall;
        CData/*0:0*/ top_SoC__DOT__cpu__DOT__stage_EXE_io_Flush;
        CData/*0:0*/ top_SoC__DOT__cpu__DOT__stage_EXE_io_Stall;
        CData/*0:0*/ top_SoC__DOT__cpu__DOT__contorller_io_Flush_DH;
        CData/*0:0*/ top_SoC__DOT__cpu__DOT__contorller_io_Flush_BH;
        CData/*0:0*/ top_SoC__DOT__cpu__DOT__contorller_io_Stall_MA;
        CData/*2:0*/ top_SoC__DOT__cpu__DOT__contorller_io_D_ImmSel;
        CData/*1:0*/ top_SoC__DOT__cpu__DOT__contorller_io_E_ASel;
        CData/*1:0*/ top_SoC__DOT__cpu__DOT__contorller_io_W_WBSel;
        CData/*1:0*/ top_SoC__DOT__cpu__DOT__mReadState;
        CData/*1:0*/ top_SoC__DOT__cpu__DOT__mWriteState;
        CData/*1:0*/ top_SoC__DOT__cpu__DOT___GEN_8;
        CData/*1:0*/ top_SoC__DOT__cpu__DOT___GEN_10;
        CData/*0:0*/ top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__bc_io_BrEq;
        CData/*0:0*/ top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__bc_io_BrLT;
        CData/*0:0*/ top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___io_out_T_6;
        CData/*0:0*/ top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___io_out_T_8;
        CData/*0:0*/ top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__result___05F4;
        CData/*0:0*/ top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__result___05F3;
        CData/*7:0*/ top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__val8;
        CData/*0:0*/ top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__result___05F2;
        CData/*3:0*/ top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__val4;
        CData/*0:0*/ top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__result___05F1;
        CData/*4:0*/ top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___io_out_T_21;
        CData/*4:0*/ top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___result_T_60;
        CData/*4:0*/ top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___result_T_90;
        CData/*0:0*/ top_SoC__DOT__cpu__DOT__contorller__DOT__E_En;
        CData/*0:0*/ top_SoC__DOT__cpu__DOT__contorller__DOT___E_Branch_taken_T_14;
        CData/*0:0*/ top_SoC__DOT__cpu__DOT__contorller__DOT__E_Branch_taken;
        CData/*4:0*/ top_SoC__DOT__cpu__DOT__contorller__DOT__EXE_funct5;
        CData/*0:0*/ top_SoC__DOT__cpu__DOT__contorller__DOT___io_W_RegWEn_T_3;
        CData/*0:0*/ top_SoC__DOT__cpu__DOT__contorller__DOT___io_W_RegWEn_T_5;
        CData/*0:0*/ top_SoC__DOT__cpu__DOT__contorller__DOT__is_D_use_rs1;
        CData/*0:0*/ top_SoC__DOT__cpu__DOT__contorller__DOT__is_D_use_rs2;
        CData/*0:0*/ top_SoC__DOT__cpu__DOT__contorller__DOT__is_M_use_rd;
        CData/*0:0*/ top_SoC__DOT__cpu__DOT__contorller__DOT__is_E_use_rd;
        CData/*0:0*/ top_SoC__DOT__cpu__DOT__contorller__DOT___io_Stall_DH_T_2;
        CData/*0:0*/ top_SoC__DOT__cpu__DOT__contorller__DOT___io_Stall_DH_T_3;
        CData/*2:0*/ top_SoC__DOT__datamem__DOT__writeState;
        CData/*1:0*/ top_SoC__DOT__datamem__DOT__readState;
        CData/*7:0*/ top_SoC__DOT__datamem__DOT__rLatencyCounter;
        CData/*7:0*/ top_SoC__DOT__datamem__DOT__wLatencyCounter;
        CData/*1:0*/ top_SoC__DOT__datamem__DOT___GEN_3;
        CData/*7:0*/ top_SoC__DOT__datamem__DOT___rLatencyCounter_T_1;
        CData/*0:0*/ top_SoC__DOT__datamem__DOT___GEN_16;
        CData/*0:0*/ top_SoC__DOT__datamem__DOT___T_12;
        CData/*2:0*/ top_SoC__DOT__datamem__DOT___GEN_32;
        CData/*2:0*/ top_SoC__DOT__datamem__DOT___GEN_35;
        CData/*2:0*/ top_SoC__DOT__datamem__DOT___GEN_39;
        CData/*7:0*/ top_SoC__DOT__datamem__DOT___GEN_65;
        CData/*0:0*/ top_SoC__DOT__bus__DOT__readBuses_0_io_slave_0_readAddr_valid;
        CData/*0:0*/ top_SoC__DOT__bus__DOT__readMuxes_0_io_out_readData_ready;
        CData/*0:0*/ top_SoC__DOT__bus__DOT__readMuxes_0_io_in_0_readData_valid;
        CData/*0:0*/ top_SoC__DOT__bus__DOT__writeBuses_0_io_slave_0_writeAddr_valid;
        CData/*0:0*/ top_SoC__DOT__bus__DOT__writeBuses_0_io_slave_0_writeResp_ready;
        CData/*0:0*/ top_SoC__DOT__bus__DOT__writeMuxes_0_io_out_writeResp_ready;
        CData/*0:0*/ top_SoC__DOT__bus__DOT__writeMuxes_0_io_in_0_writeData_ready;
        CData/*0:0*/ top_SoC__DOT__bus__DOT__writeMuxes_0_io_in_0_writeResp_valid;
        CData/*0:0*/ top_SoC__DOT__bus__DOT__readBuses_0__DOT__read_addr_reg_valid;
        CData/*0:0*/ top_SoC__DOT__bus__DOT__readBuses_0__DOT__outstanding;
        CData/*0:0*/ top_SoC__DOT__bus__DOT__readBuses_0__DOT___T;
        CData/*0:0*/ top_SoC__DOT__bus__DOT__readBuses_0__DOT___GEN_0;
    };
    struct {
        CData/*0:0*/ top_SoC__DOT__bus__DOT__readBuses_0__DOT___GEN_5;
        CData/*0:0*/ top_SoC__DOT__bus__DOT__readBuses_0__DOT___T_1;
        CData/*1:0*/ top_SoC__DOT__bus__DOT__readMuxes_0__DOT__state;
        CData/*0:0*/ top_SoC__DOT__bus__DOT__readMuxes_0__DOT__ar_determined;
        CData/*0:0*/ top_SoC__DOT__bus__DOT__readMuxes_0__DOT___GEN_25;
        CData/*0:0*/ top_SoC__DOT__bus__DOT__readMuxes_0__DOT___T_2;
        CData/*1:0*/ top_SoC__DOT__bus__DOT__readMuxes_0__DOT___GEN_2;
        CData/*0:0*/ top_SoC__DOT__bus__DOT__readMuxes_0__DOT___GEN_17;
        CData/*0:0*/ top_SoC__DOT__bus__DOT__readMuxes_0__DOT___T_7;
        CData/*0:0*/ top_SoC__DOT__bus__DOT__writeBuses_0__DOT__write_addr_reg_valid;
        CData/*0:0*/ top_SoC__DOT__bus__DOT__writeBuses_0__DOT__write_data_reg_valid;
        CData/*3:0*/ top_SoC__DOT__bus__DOT__writeBuses_0__DOT__write_data_reg_strb;
        CData/*0:0*/ top_SoC__DOT__bus__DOT__writeBuses_0__DOT__write_resp_reg_valid;
        CData/*0:0*/ top_SoC__DOT__bus__DOT__writeBuses_0__DOT__w_outstanding;
        CData/*0:0*/ top_SoC__DOT__bus__DOT__writeBuses_0__DOT__aw_outstanding;
        CData/*0:0*/ top_SoC__DOT__bus__DOT__writeBuses_0__DOT__b_outstanding;
        CData/*0:0*/ top_SoC__DOT__bus__DOT__writeBuses_0__DOT___T;
        CData/*0:0*/ top_SoC__DOT__bus__DOT__writeBuses_0__DOT___GEN_0;
        CData/*0:0*/ top_SoC__DOT__bus__DOT__writeBuses_0__DOT___GEN_3;
        CData/*0:0*/ top_SoC__DOT__bus__DOT__writeBuses_0__DOT___T_1;
        CData/*0:0*/ top_SoC__DOT__bus__DOT__writeBuses_0__DOT___GEN_6;
        CData/*0:0*/ top_SoC__DOT__bus__DOT__writeBuses_0__DOT___GEN_9;
        CData/*0:0*/ top_SoC__DOT__bus__DOT__writeBuses_0__DOT___T_7;
        CData/*0:0*/ top_SoC__DOT__bus__DOT__writeBuses_0__DOT___GEN_17;
        CData/*0:0*/ top_SoC__DOT__bus__DOT__writeBuses_0__DOT___GEN_18;
        CData/*0:0*/ top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__arbiter_io_in_0_valid;
        CData/*1:0*/ top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__state;
        CData/*0:0*/ top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__w_determined;
        CData/*0:0*/ top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__aw_determined;
        CData/*3:0*/ top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__data_reg_strb;
        CData/*0:0*/ top_SoC__DOT__bus__DOT__writeMuxes_0__DOT___GEN_47;
        CData/*0:0*/ top_SoC__DOT__bus__DOT__writeMuxes_0__DOT___T_1;
        CData/*1:0*/ top_SoC__DOT__bus__DOT__writeMuxes_0__DOT___GEN_3;
        CData/*1:0*/ top_SoC__DOT__bus__DOT__writeMuxes_0__DOT___GEN_5;
        CData/*3:0*/ top_SoC__DOT__bus__DOT__writeMuxes_0__DOT___GEN_10;
        CData/*0:0*/ top_SoC__DOT__bus__DOT__writeMuxes_0__DOT___GEN_12;
        CData/*0:0*/ top_SoC__DOT__bus__DOT__writeMuxes_0__DOT___GEN_25;
        CData/*0:0*/ top_SoC__DOT__bus__DOT__writeMuxes_0__DOT___GEN_33;
        CData/*0:0*/ top_SoC__DOT__bus__DOT__writeMuxes_0__DOT___GEN_35;
        SData/*14:0*/ top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel;
        SData/*14:0*/ top_SoC__DOT__cpu__DOT__stage_IF__DOT__pcReg;
        SData/*14:0*/ top_SoC__DOT__cpu__DOT__stage_ID__DOT__pcReg;
        SData/*14:0*/ top_SoC__DOT__cpu__DOT__stage_EXE__DOT__pcReg;
        SData/*14:0*/ top_SoC__DOT__cpu__DOT__stage_MEM__DOT__pcReg;
        SData/*14:0*/ top_SoC__DOT__cpu__DOT__stage_WB__DOT__pc_plus4_Reg;
        SData/*14:0*/ top_SoC__DOT__cpu__DOT__datapath_IF__DOT___io_next_pc_T_9;
        SData/*11:0*/ top_SoC__DOT__cpu__DOT__datapath_ID__DOT__ig__DOT___simm_T_13;
        SData/*11:0*/ top_SoC__DOT__cpu__DOT__datapath_ID__DOT__ig__DOT___simm_T_26;
        SData/*12:0*/ top_SoC__DOT__cpu__DOT__datapath_ID__DOT__ig__DOT___simm_T_30;
        SData/*15:0*/ top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__val16;
        SData/*9:0*/ top_SoC__DOT__cpu__DOT__contorller__DOT___EXE_funct5_T;
        SData/*14:0*/ top_SoC__DOT__datamem__DOT__rAddrOffset;
        SData/*14:0*/ top_SoC__DOT__datamem__DOT__writeAddressReg;
        SData/*15:0*/ top_SoC__DOT__datamem__DOT__lo;
        SData/*15:0*/ top_SoC__DOT__datamem__DOT__hi;
        IData/*31:0*/ top_SoC__DOT__im_io_inst;
        IData/*31:0*/ top_SoC__DOT__datamem_io_slave_r_bits_data;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__datapath_WB_io_WB_wdata;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__stage_EXE__DOT__immReg;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__stage_EXE__DOT__rs1Reg;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__stage_EXE__DOT__rs2Reg;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__stage_MEM__DOT__InstReg;
    };
    struct {
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__stage_MEM__DOT__aluReg;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__stage_MEM__DOT__wdataReg;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__stage_WB__DOT__InstReg;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__stage_WB__DOT__alu_out_Reg;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__stage_WB__DOT__ld_data_Reg;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_1;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_2;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_3;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_4;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_5;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_6;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_7;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_8;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_9;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_10;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_11;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_12;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_13;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_14;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_15;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_16;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_17;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_18;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_19;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_20;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_21;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_22;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_23;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_24;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_25;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_26;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_27;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_28;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_29;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_30;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_31;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT___GEN_13;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT___GEN_26;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT___GEN_45;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT___GEN_58;
        IData/*20:0*/ top_SoC__DOT__cpu__DOT__datapath_ID__DOT__ig__DOT___simm_T_22;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src2;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__datapath_EXE__DOT___alu_src1_T_3;
        IData/*31:0*/ top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___io_out_T_12;
        VlWide<3>/*94:0*/ top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___GEN_13;
        VlWide<3>/*94:0*/ top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___GEN_41;
        VlWide<3>/*94:0*/ top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___GEN_122;
        IData/*31:0*/ top_SoC__DOT__datamem__DOT___GEN_149;
        IData/*31:0*/ top_SoC__DOT__datamem__DOT___GEN_150;
        IData/*31:0*/ top_SoC__DOT__datamem__DOT__initvar;
        IData/*31:0*/ top_SoC__DOT__bus__DOT__readMuxes_0__DOT__data_reg_data;
        IData/*31:0*/ top_SoC__DOT__bus__DOT__writeBuses_0__DOT__write_data_reg;
        IData/*31:0*/ top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__data_reg_data;
        IData/*31:0*/ top_SoC__DOT__bus__DOT__writeMuxes_0__DOT___GEN_9;
        QData/*62:0*/ top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___io_out_T_3;
        QData/*63:0*/ top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___GEN_5;
        VlUnpacked<CData/*7:0*/, 32768> top_SoC__DOT__im__DOT__memory;
        VlUnpacked<IData/*31:0*/, 32> top_SoC__DOT__datamem__DOT__memory;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vtop_SoC__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop_SoC);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vtop_SoC(VerilatedContext* contextp, const char* name = "TOP");
    Vtop_SoC(const char* name = "TOP")
      : Vtop_SoC(nullptr, name) {}
    /// Destroy the model; called (often implicitly) by application code
    ~Vtop_SoC();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp();
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
    static void _eval_initial_loop(Vtop_SoC__Syms* __restrict vlSymsp);
    void __Vconfigure(Vtop_SoC__Syms* symsp, bool first);
  private:
    static QData _change_request(Vtop_SoC__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vtop_SoC__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__4(Vtop_SoC__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vtop_SoC__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vtop_SoC__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vtop_SoC__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vtop_SoC__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(Vtop_SoC__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Vtop_SoC__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
