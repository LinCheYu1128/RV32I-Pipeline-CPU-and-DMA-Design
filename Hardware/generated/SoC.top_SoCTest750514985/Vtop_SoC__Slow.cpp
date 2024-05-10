// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_SoC.h for the primary calling header

#include "Vtop_SoC.h"
#include "Vtop_SoC__Syms.h"

//==========

Vtop_SoC::Vtop_SoC(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    Vtop_SoC__Syms* __restrict vlSymsp = __VlSymsp = new Vtop_SoC__Syms(_vcontextp__, this, name());
    Vtop_SoC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtop_SoC::__Vconfigure(Vtop_SoC__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

Vtop_SoC::~Vtop_SoC() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void Vtop_SoC::_initial__TOP__1(Vtop_SoC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_SoC::_initial__TOP__1\n"); );
    Vtop_SoC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VlWide<7>/*223:0*/ __Vtemp1;
    VlWide<7>/*223:0*/ __Vtemp2;
    // Body
    vlTOPp->io_regs_0 = 0U;
    __Vtemp1[0U] = 0x2e686578U;
    __Vtemp1[1U] = 0x696e7374U;
    __Vtemp1[2U] = 0x7263652fU;
    __Vtemp1[3U] = 0x65736f75U;
    __Vtemp1[4U] = 0x696e2f72U;
    __Vtemp1[5U] = 0x632f6d61U;
    __Vtemp1[6U] = 0x2e2f7372U;
    VL_READMEM_N(true, 8, 32768, 0, VL_CVT_PACK_STR_NW(7, __Vtemp1)
                 ,  &(vlTOPp->top_SoC__DOT__im__DOT__memory)
                 , 0, ~0ULL);
    __Vtemp2[0U] = 0x2e686578U;
    __Vtemp2[1U] = 0x64617461U;
    __Vtemp2[2U] = 0x7263652fU;
    __Vtemp2[3U] = 0x65736f75U;
    __Vtemp2[4U] = 0x696e2f72U;
    __Vtemp2[5U] = 0x632f6d61U;
    __Vtemp2[6U] = 0x2e2f7372U;
    VL_READMEM_N(true, 32, 32768, 0, VL_CVT_PACK_STR_NW(7, __Vtemp2)
                 ,  &(vlTOPp->top_SoC__DOT__datamem__DOT__memory)
                 , 0, ~0ULL);
}

void Vtop_SoC::_settle__TOP__3(Vtop_SoC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_SoC::_settle__TOP__3\n"); );
    Vtop_SoC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VlWide<3>/*95:0*/ __Vtemp94;
    VlWide<3>/*95:0*/ __Vtemp95;
    VlWide<3>/*95:0*/ __Vtemp96;
    VlWide<3>/*95:0*/ __Vtemp97;
    VlWide<3>/*95:0*/ __Vtemp98;
    VlWide<3>/*95:0*/ __Vtemp99;
    VlWide<3>/*95:0*/ __Vtemp100;
    VlWide<3>/*95:0*/ __Vtemp101;
    VlWide<3>/*95:0*/ __Vtemp103;
    VlWide<3>/*95:0*/ __Vtemp117;
    VlWide<3>/*95:0*/ __Vtemp118;
    VlWide<3>/*95:0*/ __Vtemp119;
    VlWide<3>/*95:0*/ __Vtemp120;
    VlWide<3>/*95:0*/ __Vtemp121;
    VlWide<3>/*95:0*/ __Vtemp122;
    VlWide<3>/*95:0*/ __Vtemp123;
    VlWide<3>/*95:0*/ __Vtemp124;
    VlWide<3>/*95:0*/ __Vtemp125;
    VlWide<3>/*95:0*/ __Vtemp126;
    VlWide<3>/*95:0*/ __Vtemp127;
    VlWide<3>/*95:0*/ __Vtemp128;
    VlWide<3>/*95:0*/ __Vtemp153;
    VlWide<3>/*95:0*/ __Vtemp154;
    VlWide<3>/*95:0*/ __Vtemp155;
    VlWide<3>/*95:0*/ __Vtemp156;
    VlWide<3>/*95:0*/ __Vtemp157;
    VlWide<3>/*95:0*/ __Vtemp158;
    VlWide<3>/*95:0*/ __Vtemp159;
    VlWide<3>/*95:0*/ __Vtemp160;
    VlWide<3>/*95:0*/ __Vtemp161;
    // Body
    vlTOPp->io_regs_1 = vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_1;
    vlTOPp->io_regs_2 = vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_2;
    vlTOPp->io_regs_3 = vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_3;
    vlTOPp->io_regs_4 = vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_4;
    vlTOPp->io_regs_5 = vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_5;
    vlTOPp->io_regs_6 = vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_6;
    vlTOPp->io_regs_7 = vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_7;
    vlTOPp->io_regs_8 = vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_8;
    vlTOPp->io_regs_9 = vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_9;
    vlTOPp->io_regs_10 = vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_10;
    vlTOPp->io_regs_11 = vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_11;
    vlTOPp->io_regs_12 = vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_12;
    vlTOPp->io_regs_13 = vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_13;
    vlTOPp->io_regs_14 = vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_14;
    vlTOPp->io_regs_15 = vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_15;
    vlTOPp->io_regs_16 = vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_16;
    vlTOPp->io_regs_17 = vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_17;
    vlTOPp->io_regs_18 = vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_18;
    vlTOPp->io_regs_19 = vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_19;
    vlTOPp->io_regs_20 = vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_20;
    vlTOPp->io_regs_21 = vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_21;
    vlTOPp->io_regs_22 = vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_22;
    vlTOPp->io_regs_23 = vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_23;
    vlTOPp->io_regs_24 = vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_24;
    vlTOPp->io_regs_25 = vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_25;
    vlTOPp->io_regs_26 = vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_26;
    vlTOPp->io_WB_PC = (0x7fffU & ((0U < (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__stage_WB__DOT__pc_plus4_Reg))
                                    ? ((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__stage_WB__DOT__pc_plus4_Reg) 
                                       - (IData)(4U))
                                    : (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__stage_WB__DOT__pc_plus4_Reg)));
    vlTOPp->io_EXE_src1 = vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__rs1Reg;
    vlTOPp->top_SoC__DOT__datamem__DOT___rLatencyCounter_T_1 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__rLatencyCounter)));
    vlTOPp->top_SoC__DOT__cpu__DOT___GEN_8 = ((IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__w_outstanding)
                                               ? (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__mWriteState)
                                               : 3U);
    vlTOPp->top_SoC__DOT__cpu__DOT___GEN_10 = ((3U 
                                                == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__mWriteState))
                                                ? ((IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__write_resp_reg_valid)
                                                    ? 0U
                                                    : (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__mWriteState))
                                                : (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__mWriteState));
    vlTOPp->top_SoC__DOT__datamem__DOT___GEN_65 = (0xffU 
                                                   & ((2U 
                                                       == (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__wLatencyCounter))
                                                       : 
                                                      ((3U 
                                                        == (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState))
                                                        ? 0U
                                                        : (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__wLatencyCounter))));
    vlTOPp->top_SoC__DOT__datamem__DOT___GEN_149 = 
        ((IData)(vlTOPp->reset) ? 0U : ((0U == (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__readState))
                                         ? 0U : (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__rAddrOffset)));
    vlTOPp->top_SoC__DOT__bus__DOT__readBuses_0__DOT___T 
        = ((~ (IData)(vlTOPp->top_SoC__DOT__bus__DOT__readBuses_0__DOT__outstanding)) 
           & (1U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__mReadState)));
    vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT___T 
        = ((~ (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__aw_outstanding)) 
           & (1U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__mWriteState)));
    vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT___T_1 
        = ((~ (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__w_outstanding)) 
           & (2U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__mWriteState)));
    vlTOPp->top_SoC__DOT__cpu_io_DataMem_b_ready = 
        ((3U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__mWriteState)) 
         | (2U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__mWriteState)));
    vlTOPp->top_SoC__DOT__datamem__DOT___GEN_16 = (
                                                   (1U 
                                                    != (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__readState)) 
                                                   & (2U 
                                                      == (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__readState)));
    vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0_io_slave_0_writeResp_ready 
        = ((IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__aw_outstanding) 
           & (~ (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__b_outstanding)));
    vlTOPp->top_SoC__DOT__bus__DOT__readBuses_0_io_slave_0_readAddr_valid 
        = ((IData)(vlTOPp->top_SoC__DOT__bus__DOT__readBuses_0__DOT__outstanding) 
           & (IData)(vlTOPp->top_SoC__DOT__bus__DOT__readBuses_0__DOT__read_addr_reg_valid));
    vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0_io_slave_0_writeAddr_valid 
        = ((IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__aw_outstanding) 
           & (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__write_addr_reg_valid));
    vlTOPp->io_wdata = vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__data_reg_data;
    vlTOPp->io_MEM_PC = vlTOPp->top_SoC__DOT__cpu__DOT__stage_MEM__DOT__pcReg;
    vlTOPp->io_raddr = (0x7fffU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_MEM__DOT__aluReg);
    vlTOPp->top_SoC__DOT__datamem__DOT___GEN_32 = ((IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__aw_determined)
                                                    ? 4U
                                                    : (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState));
    vlTOPp->top_SoC__DOT__datamem__DOT___GEN_35 = ((IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__w_determined)
                                                    ? 3U
                                                    : (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState));
    vlTOPp->top_SoC__DOT__datamem__DOT__lo = ((((2U 
                                                 & (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__data_reg_strb))
                                                 ? 
                                                (0xffU 
                                                 & (vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__data_reg_data 
                                                    >> 8U))
                                                 : 0U) 
                                               << 8U) 
                                              | ((1U 
                                                  & (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__data_reg_strb))
                                                  ? 
                                                 (0xffU 
                                                  & vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__data_reg_data)
                                                  : 0U));
    vlTOPp->top_SoC__DOT__datamem__DOT__hi = ((((8U 
                                                 & (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__data_reg_strb))
                                                 ? 
                                                (0xffU 
                                                 & (vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__data_reg_data 
                                                    >> 0x18U))
                                                 : 0U) 
                                               << 8U) 
                                              | ((4U 
                                                  & (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__data_reg_strb))
                                                  ? 
                                                 (0xffU 
                                                  & (vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__data_reg_data 
                                                     >> 0x10U))
                                                  : 0U));
    vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0__DOT___T_7 
        = ((0U == (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__readState)) 
           & (IData)(vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0__DOT__ar_determined));
    vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT___GEN_33 
        = ((~ (((0U != (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState)) 
                & (1U == (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState))) 
               & (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__aw_determined))) 
           & (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__aw_determined));
    vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT___GEN_35 
        = ((~ (((0U != (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState)) 
                & ((1U == (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState)) 
                   | (4U == (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState)))) 
               & (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__w_determined))) 
           & (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__w_determined));
    vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0__DOT___GEN_25 
        = ((1U != (IData)(vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0__DOT__state)) 
           & (2U != (IData)(vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0__DOT__state)));
    vlTOPp->top_SoC__DOT__datamem__DOT___T_12 = ((IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__aw_determined) 
                                                 & (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__w_determined));
    vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0_io_out_readData_ready 
        = ((0U != (IData)(vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0__DOT__state)) 
           & (1U == (IData)(vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0__DOT__state)));
    vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0_io_out_writeResp_ready 
        = ((0U != (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__state)) 
           & ((1U != (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__state)) 
              & (2U == (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__state))));
    vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0_io_in_0_readData_valid 
        = ((0U != (IData)(vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0__DOT__state)) 
           & ((1U != (IData)(vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0__DOT__state)) 
              & (2U == (IData)(vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0__DOT__state))));
    vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0_io_in_0_writeResp_valid 
        = ((0U != (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__state)) 
           & ((1U != (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__state)) 
              & ((2U != (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__state)) 
                 & (3U == (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__state)))));
    vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT___GEN_47 
        = ((1U != (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__state)) 
           & ((2U != (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__state)) 
              & (3U != (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__state))));
    vlTOPp->io_EXE_PC = vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__pcReg;
    vlTOPp->io_EXE_src2 = vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__rs2Reg;
    vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__bc_io_BrEq 
        = (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__rs1Reg 
           == vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__rs2Reg);
    vlTOPp->io_regs_27 = vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_27;
    vlTOPp->io_regs_28 = vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_28;
    vlTOPp->io_regs_29 = vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_29;
    vlTOPp->io_regs_30 = vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_30;
    vlTOPp->io_regs_31 = vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_31;
    vlTOPp->io_ID_PC = vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__pcReg;
    vlTOPp->io_IF_PC = vlTOPp->top_SoC__DOT__cpu__DOT__stage_IF__DOT__pcReg;
    vlTOPp->io_WB_rd = (0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_WB__DOT__InstReg 
                                 >> 7U));
    vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_W_WBSel 
        = ((0x67U == (0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_WB__DOT__InstReg))
            ? 0U : ((0x6fU == (0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_WB__DOT__InstReg))
                     ? 0U : ((3U == (0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_WB__DOT__InstReg))
                              ? 2U : 1U)));
    vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT___io_W_RegWEn_T_3 
        = ((0x23U != (0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_WB__DOT__InstReg)) 
           & (0x63U != (0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_WB__DOT__InstReg)));
    vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_Stall_MA 
        = ((3U == (0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_MEM__DOT__InstReg)) 
           | (0x23U == (0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_MEM__DOT__InstReg)));
    vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__is_M_use_rd 
        = ((0xbU != (0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_MEM__DOT__InstReg)) 
           & ((0x23U != (0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_MEM__DOT__InstReg)) 
              & (0x63U != (0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_MEM__DOT__InstReg))));
    vlTOPp->io_EXE_Jump = ((0x6fU == (0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg)) 
                           | (0x67U == (0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg)));
    vlTOPp->io_EXE_Branch = (0x63U == (0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg));
    vlTOPp->io_ALU_src2 = ((0x33U != (0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg))
                            ? vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__immReg
                            : vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__rs2Reg);
    vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__E_En 
        = (((0x63U == (0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg)) 
            | (0x6fU == (0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg))) 
           | (0x67U == (0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg)));
    vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__is_E_use_rd 
        = ((0xbU != (0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg)) 
           & ((0x23U != (0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg)) 
              & (0x63U != (0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg))));
    vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__bc_io_BrLT 
        = ((0x2000U & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg)
            ? (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__rs1Reg 
               < vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__rs2Reg)
            : VL_LTS_III(1,32,32, vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__rs1Reg, vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__rs2Reg));
    vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src2 
        = ((0x33U != (0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg))
            ? vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__immReg
            : vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__rs2Reg);
    vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT___EXE_funct5_T 
        = ((0x3f8U & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                      >> 0x16U)) | (7U & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                                          >> 0xcU)));
    vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ASel 
        = ((0x37U == (0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg))
            ? 2U : ((0x6fU == (0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg)) 
                    | ((0x63U == (0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg)) 
                       | (0x17U == (0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg)))));
    vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__ig__DOT___simm_T_22 
        = ((0x100000U & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                         >> 0xbU)) | ((0xff000U & vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg) 
                                      | ((0x800U & 
                                          (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                           >> 9U)) 
                                         | (0x7feU 
                                            & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                               >> 0x14U)))));
    vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__ig__DOT___simm_T_13 
        = ((0xfe0U & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                      >> 0x14U)) | (0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                             >> 7U)));
    vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT___GEN_13 
        = ((0xdU == (0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                              >> 0xfU))) ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_13
            : ((0xcU == (0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                  >> 0xfU))) ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_12
                : ((0xbU == (0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                      >> 0xfU))) ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_11
                    : ((0xaU == (0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                          >> 0xfU)))
                        ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_10
                        : ((9U == (0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                            >> 0xfU)))
                            ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_9
                            : ((8U == (0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                >> 0xfU)))
                                ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_8
                                : ((7U == (0x1fU & 
                                           (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                            >> 0xfU)))
                                    ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_7
                                    : ((6U == (0x1fU 
                                               & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                  >> 0xfU)))
                                        ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_6
                                        : ((5U == (0x1fU 
                                                   & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                      >> 0xfU)))
                                            ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_5
                                            : ((4U 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                    >> 0xfU)))
                                                ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_4
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                        >> 0xfU)))
                                                    ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_3
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                         >> 0xfU)))
                                                     ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_2
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                          >> 0xfU)))
                                                      ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_1
                                                      : 0U)))))))))))));
    vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT___GEN_45 
        = ((0xdU == (0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                              >> 0x14U))) ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_13
            : ((0xcU == (0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                  >> 0x14U))) ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_12
                : ((0xbU == (0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                      >> 0x14U))) ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_11
                    : ((0xaU == (0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                          >> 0x14U)))
                        ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_10
                        : ((9U == (0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                            >> 0x14U)))
                            ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_9
                            : ((8U == (0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                >> 0x14U)))
                                ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_8
                                : ((7U == (0x1fU & 
                                           (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                            >> 0x14U)))
                                    ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_7
                                    : ((6U == (0x1fU 
                                               & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                  >> 0x14U)))
                                        ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_6
                                        : ((5U == (0x1fU 
                                                   & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                      >> 0x14U)))
                                            ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_5
                                            : ((4U 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                    >> 0x14U)))
                                                ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_4
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                        >> 0x14U)))
                                                    ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_3
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                         >> 0x14U)))
                                                     ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_2
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                          >> 0x14U)))
                                                      ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_1
                                                      : 0U)))))))))))));
    vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_D_ImmSel 
        = ((0x6fU == (0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg))
            ? 4U : ((0x17U == (0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg))
                     ? 5U : ((0x37U == (0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg))
                              ? 5U : ((0x23U == (0x7fU 
                                                 & vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg))
                                       ? 2U : ((0x63U 
                                                == 
                                                (0x7fU 
                                                 & vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg))
                                                ? 3U
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg)) 
                                                   | ((0x67U 
                                                       == 
                                                       (0x7fU 
                                                        & vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg)) 
                                                      | (0x13U 
                                                         == 
                                                         (0x7fU 
                                                          & vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg)))))))));
    vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__is_D_use_rs1 
        = ((0xbU != (0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg)) 
           & ((0x17U != (0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg)) 
              & ((0x37U != (0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg)) 
                 & (0x6fU != (0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg)))));
    vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__is_D_use_rs2 
        = ((0x23U == (0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg)) 
           | ((0x33U == (0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg)) 
              | (0x63U == (0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg))));
    vlTOPp->top_SoC__DOT__im_io_inst = (((vlTOPp->top_SoC__DOT__im__DOT__memory
                                          [(0x7fffU 
                                            & ((IData)(3U) 
                                               + (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__stage_IF__DOT__pcReg)))] 
                                          << 0x18U) 
                                         | (vlTOPp->top_SoC__DOT__im__DOT__memory
                                            [(0x7fffU 
                                              & ((IData)(2U) 
                                                 + (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__stage_IF__DOT__pcReg)))] 
                                            << 0x10U)) 
                                        | ((vlTOPp->top_SoC__DOT__im__DOT__memory
                                            [(0x7fffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__stage_IF__DOT__pcReg)))] 
                                            << 8U) 
                                           | vlTOPp->top_SoC__DOT__im__DOT__memory
                                           [vlTOPp->top_SoC__DOT__cpu__DOT__stage_IF__DOT__pcReg]));
    vlTOPp->top_SoC__DOT__datamem_io_slave_r_bits_data 
        = ((0U == (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__readState))
            ? 0U : ((1U == (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__readState))
                     ? 0U : ((2U == (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__readState))
                              ? vlTOPp->top_SoC__DOT__datamem__DOT__memory
                             [vlTOPp->top_SoC__DOT__datamem__DOT__rAddrOffset]
                              : 0U)));
    vlTOPp->top_SoC__DOT__bus__DOT__readBuses_0__DOT___GEN_0 
        = ((IData)(vlTOPp->top_SoC__DOT__bus__DOT__readBuses_0__DOT___T) 
           | (IData)(vlTOPp->top_SoC__DOT__bus__DOT__readBuses_0__DOT__outstanding));
    vlTOPp->top_SoC__DOT__bus__DOT__readBuses_0__DOT___GEN_5 
        = ((IData)(vlTOPp->top_SoC__DOT__bus__DOT__readBuses_0__DOT___T) 
           | (IData)(vlTOPp->top_SoC__DOT__bus__DOT__readBuses_0__DOT__read_addr_reg_valid));
    vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT___GEN_0 
        = ((IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT___T) 
           | (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__aw_outstanding));
    vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT___GEN_3 
        = ((IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT___T) 
           | (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__write_addr_reg_valid));
    vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT___GEN_6 
        = ((IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT___T_1) 
           | (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__w_outstanding));
    vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT___GEN_9 
        = ((IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT___T_1) 
           | (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__write_data_reg_valid));
    vlTOPp->top_SoC__DOT__datamem_io_slave_r_valid 
        = ((0U != (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__readState)) 
           & (IData)(vlTOPp->top_SoC__DOT__datamem__DOT___GEN_16));
    vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0__DOT___GEN_17 
        = (((IData)(vlTOPp->top_SoC__DOT__bus__DOT__readBuses_0_io_slave_0_readAddr_valid) 
            & ((0U == (IData)(vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0__DOT__state)) 
               | (IData)(vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0__DOT___GEN_25))) 
           | (IData)(vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0__DOT__ar_determined));
    vlTOPp->top_SoC__DOT__datamem__DOT___GEN_150 = 
        ((IData)(vlTOPp->reset) ? 0U : ((0U == (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState))
                                         ? (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeAddressReg)
                                         : ((1U == (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState))
                                             ? ((IData)(vlTOPp->top_SoC__DOT__datamem__DOT___T_12)
                                                 ? 0U
                                                 : 
                                                ((IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__aw_determined)
                                                  ? 0U
                                                  : (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeAddressReg)))
                                             : (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeAddressReg))));
    vlTOPp->top_SoC__DOT__datamem__DOT___GEN_39 = (
                                                   (2U 
                                                    == (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__wLatencyCounter))
                                                     ? 3U
                                                     : (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState))
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState))
                                                     ? 
                                                    ((IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0_io_out_writeResp_ready)
                                                      ? 1U
                                                      : (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState))
                                                     : (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState)));
    vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT___GEN_3 
        = (((IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0_io_out_writeResp_ready) 
            & ((0U != (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState)) 
               & ((1U != (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState)) 
                  & ((4U != (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState)) 
                     & ((2U != (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState)) 
                        & (3U == (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState)))))))
            ? 3U : (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__state));
    vlTOPp->top_SoC__DOT__bus__DOT__readBuses_0__DOT___T_1 
        = ((2U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__mReadState)) 
           & ((IData)(vlTOPp->top_SoC__DOT__bus__DOT__readBuses_0__DOT__outstanding) 
              & (IData)(vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0_io_in_0_readData_valid)));
    vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0__DOT___GEN_2 
        = ((((IData)(vlTOPp->top_SoC__DOT__bus__DOT__readBuses_0__DOT__outstanding) 
             & (2U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__mReadState))) 
            & (IData)(vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0_io_in_0_readData_valid))
            ? 0U : (IData)(vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0__DOT__state));
    vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT___GEN_5 
        = ((3U == (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__state))
            ? (((IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0_io_slave_0_writeResp_ready) 
                & (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0_io_in_0_writeResp_valid))
                ? 0U : (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__state))
            : (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__state));
    vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT___T_7 
        = ((IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0_io_slave_0_writeResp_ready) 
           & (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0_io_in_0_writeResp_valid));
    vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__arbiter_io_in_0_valid 
        = ((IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0_io_slave_0_writeAddr_valid) 
           & ((0U == (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__state)) 
              | (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT___GEN_47)));
    vlTOPp->top_SoC__DOT__cpu__DOT__datapath_WB_io_WB_wdata 
        = ((2U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_W_WBSel))
            ? vlTOPp->top_SoC__DOT__cpu__DOT__stage_WB__DOT__ld_data_Reg
            : ((1U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_W_WBSel))
                ? vlTOPp->top_SoC__DOT__cpu__DOT__stage_WB__DOT__alu_out_Reg
                : ((0U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_W_WBSel))
                    ? (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__stage_WB__DOT__pc_plus4_Reg)
                    : 0U)));
    vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT___io_W_RegWEn_T_5 
        = ((0xbU != (0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_WB__DOT__InstReg)) 
           & (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT___io_W_RegWEn_T_3));
    vlTOPp->io_Stall_MA = vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_Stall_MA;
    vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT___E_Branch_taken_T_14 
        = (1U & ((7U == (7U & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                               >> 0xcU))) ? (~ (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__bc_io_BrLT))
                  : ((6U == (7U & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                                   >> 0xcU))) ? (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__bc_io_BrLT)
                      : ((5U == (7U & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                                       >> 0xcU))) ? 
                         (~ (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__bc_io_BrLT))
                          : ((4U == (7U & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                                           >> 0xcU)))
                              ? (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__bc_io_BrLT)
                              : ((1U == (7U & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                                               >> 0xcU)))
                                  ? (~ (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__bc_io_BrEq))
                                  : ((0U == (7U & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                                                   >> 0xcU))) 
                                     & (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__bc_io_BrEq))))))));
    vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__EXE_funct5 
        = (0x1fU & ((0xa5U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT___EXE_funct5_T))
                     ? (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                        >> 0x14U) : ((0x1a5U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT___EXE_funct5_T))
                                      ? (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                                         >> 0x14U) : 
                                     ((0x181U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT___EXE_funct5_T))
                                       ? (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                                          >> 0x14U)
                                       : 0x1fU))));
    vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT___alu_src1_T_3 
        = ((1U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ASel))
            ? (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__pcReg)
            : vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__rs1Reg);
    vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT___GEN_26 
        = ((0x1aU == (0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                               >> 0xfU))) ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_26
            : ((0x19U == (0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                   >> 0xfU))) ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_25
                : ((0x18U == (0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                       >> 0xfU))) ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_24
                    : ((0x17U == (0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                           >> 0xfU)))
                        ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_23
                        : ((0x16U == (0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                               >> 0xfU)))
                            ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_22
                            : ((0x15U == (0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                   >> 0xfU)))
                                ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_21
                                : ((0x14U == (0x1fU 
                                              & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                 >> 0xfU)))
                                    ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_20
                                    : ((0x13U == (0x1fU 
                                                  & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                     >> 0xfU)))
                                        ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_19
                                        : ((0x12U == 
                                            (0x1fU 
                                             & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                >> 0xfU)))
                                            ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_18
                                            : ((0x11U 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                    >> 0xfU)))
                                                ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_17
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                        >> 0xfU)))
                                                    ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_16
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                         >> 0xfU)))
                                                     ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_15
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                          >> 0xfU)))
                                                      ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_14
                                                      : vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT___GEN_13)))))))))))));
    vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT___GEN_58 
        = ((0x1aU == (0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                               >> 0x14U))) ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_26
            : ((0x19U == (0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                   >> 0x14U))) ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_25
                : ((0x18U == (0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                       >> 0x14U))) ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_24
                    : ((0x17U == (0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                           >> 0x14U)))
                        ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_23
                        : ((0x16U == (0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                               >> 0x14U)))
                            ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_22
                            : ((0x15U == (0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                   >> 0x14U)))
                                ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_21
                                : ((0x14U == (0x1fU 
                                              & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                 >> 0x14U)))
                                    ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_20
                                    : ((0x13U == (0x1fU 
                                                  & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                     >> 0x14U)))
                                        ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_19
                                        : ((0x12U == 
                                            (0x1fU 
                                             & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                >> 0x14U)))
                                            ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_18
                                            : ((0x11U 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                    >> 0x14U)))
                                                ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_17
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                        >> 0x14U)))
                                                    ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_16
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                         >> 0x14U)))
                                                     ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_15
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                          >> 0x14U)))
                                                      ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_14
                                                      : vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT___GEN_45)))))))))))));
    vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__ig__DOT___simm_T_26 
        = ((1U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_D_ImmSel))
            ? (0xfffU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                         >> 0x14U)) : 0U);
    vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT___io_Stall_DH_T_3 
        = (((((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__is_D_use_rs1) 
              & (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__is_M_use_rd)) 
             & ((0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                          >> 0xfU)) == (0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_MEM__DOT__InstReg 
                                                 >> 7U)))) 
            & (0U != (0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_MEM__DOT__InstReg 
                               >> 7U)))) | ((((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__is_D_use_rs2) 
                                              & (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__is_M_use_rd)) 
                                             & ((0x1fU 
                                                 & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                    >> 0x14U)) 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_MEM__DOT__InstReg 
                                                    >> 7U)))) 
                                            & (0U != 
                                               (0x1fU 
                                                & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_MEM__DOT__InstReg 
                                                   >> 7U)))));
    vlTOPp->io_Hcf = (0xbU == (0x7fU & vlTOPp->top_SoC__DOT__im_io_inst));
    vlTOPp->io_inst = vlTOPp->top_SoC__DOT__im_io_inst;
    vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE_io_Stall 
        = ((0xbU == (0x7fU & vlTOPp->top_SoC__DOT__im_io_inst)) 
           | (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_Stall_MA));
    vlTOPp->io_rdata = vlTOPp->top_SoC__DOT__datamem_io_slave_r_bits_data;
    vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0__DOT___T_2 
        = ((IData)(vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0_io_out_readData_ready) 
           & (IData)(vlTOPp->top_SoC__DOT__datamem_io_slave_r_valid));
    vlTOPp->top_SoC__DOT__datamem__DOT___GEN_3 = (((IData)(vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0_io_out_readData_ready) 
                                                   & (IData)(vlTOPp->top_SoC__DOT__datamem_io_slave_r_valid))
                                                   ? 0U
                                                   : (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__readState));
    vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT___GEN_18 
        = ((IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT___T_7) 
           | ((~ ((((IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__aw_outstanding) 
                    & (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__w_outstanding)) 
                   & (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__write_resp_reg_valid)) 
                  & (IData)(vlTOPp->top_SoC__DOT__cpu_io_DataMem_b_ready))) 
              & (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__write_resp_reg_valid)));
    vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT___GEN_17 
        = ((IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT___T_7) 
           | ((~ ((((IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__aw_outstanding) 
                    & (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__w_outstanding)) 
                   & (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__write_resp_reg_valid)) 
                  & (IData)(vlTOPp->top_SoC__DOT__cpu_io_DataMem_b_ready))) 
              & (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__b_outstanding)));
    vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT___GEN_25 
        = ((IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__arbiter_io_in_0_valid) 
           | (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__aw_determined));
    vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0_io_in_0_writeData_ready 
        = ((0U == (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__state))
            ? (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__arbiter_io_in_0_valid)
            : (1U == (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__state)));
    vlTOPp->io_WB_wdata = vlTOPp->top_SoC__DOT__cpu__DOT__datapath_WB_io_WB_wdata;
    vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT___io_Stall_DH_T_2 
        = ((((((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__is_D_use_rs1) 
               & (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT___io_W_RegWEn_T_5)) 
              & ((0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                           >> 0xfU)) == (0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_WB__DOT__InstReg 
                                                  >> 7U)))) 
             & (0U != (0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_WB__DOT__InstReg 
                                >> 7U)))) | ((((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__is_D_use_rs2) 
                                               & (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT___io_W_RegWEn_T_5)) 
                                              & ((0x1fU 
                                                  & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                     >> 0x14U)) 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_WB__DOT__InstReg 
                                                     >> 7U)))) 
                                             & (0U 
                                                != 
                                                (0x1fU 
                                                 & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_WB__DOT__InstReg 
                                                    >> 7U))))) 
           | (((((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__is_D_use_rs1) 
                 & (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__is_E_use_rd)) 
                & ((0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                             >> 0xfU)) == (0x1fU & 
                                           (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                                            >> 7U)))) 
               & (0U != (0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                                  >> 7U)))) | ((((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__is_D_use_rs2) 
                                                 & (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__is_E_use_rd)) 
                                                & ((0x1fU 
                                                    & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                       >> 0x14U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                                                       >> 7U)))) 
                                               & (0U 
                                                  != 
                                                  (0x1fU 
                                                   & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                                                      >> 7U))))));
    vlTOPp->io_E_Branch_taken = ((0x67U == (0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg)) 
                                 | ((0x6fU == (0x7fU 
                                               & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg)) 
                                    | ((0x63U == (0x7fU 
                                                  & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg)) 
                                       & (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT___E_Branch_taken_T_14))));
    vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__E_Branch_taken 
        = ((0x67U == (0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg)) 
           | ((0x6fU == (0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg)) 
              | ((0x63U == (0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg)) 
                 & (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT___E_Branch_taken_T_14))));
    vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel 
        = ((0x13U == (0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg))
            ? (((1U == (7U & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                              >> 0xcU))) | (5U == (7U 
                                                   & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                                                      >> 0xcU))))
                ? ((0x7f00U & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                               >> 0x11U)) | (((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__EXE_funct5) 
                                              << 3U) 
                                             | (7U 
                                                & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                                                   >> 0xcU))))
                : (((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__EXE_funct5) 
                    << 3U) | (7U & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                                    >> 0xcU)))) : (
                                                   (0x33U 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg))
                                                    ? 
                                                   ((0x7f00U 
                                                     & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                                                        >> 0x11U)) 
                                                    | ((((IData)(
                                                                 (0x8004000U 
                                                                  == 
                                                                  (0xfff07000U 
                                                                   & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg)))
                                                          ? 
                                                         (0x1fU 
                                                          & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                                                             >> 0x14U))
                                                          : 0x1fU) 
                                                        << 3U) 
                                                       | (7U 
                                                          & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                                                             >> 0xcU))))
                                                    : 0xf8U));
    if ((2U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ASel))) {
        vlTOPp->io_ALU_src1 = 0U;
        vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 = 0U;
    } else {
        vlTOPp->io_ALU_src1 = vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT___alu_src1_T_3;
        vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
            = vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT___alu_src1_T_3;
    }
    vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__ig__DOT___simm_T_30 
        = ((2U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_D_ImmSel))
            ? ((0x1000U & ((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__ig__DOT___simm_T_13) 
                           << 1U)) | (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__ig__DOT___simm_T_13))
            : ((3U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_D_ImmSel))
                ? ((0x1000U & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                               >> 0x13U)) | ((0x800U 
                                              & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                 << 4U)) 
                                             | ((0x7e0U 
                                                 & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                      >> 7U)))))
                : ((0x1000U & ((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__ig__DOT___simm_T_26) 
                               << 1U)) | (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__ig__DOT___simm_T_26))));
    vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT___T_1 
        = ((IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0_io_in_0_writeData_ready) 
           & ((IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__aw_outstanding) 
              & (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__write_data_reg_valid)));
    vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_Flush_DH 
        = ((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT___io_Stall_DH_T_2) 
           | (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT___io_Stall_DH_T_3));
    vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___result_T_60 
        = (0x1fU & ((0xfU & ((7U & ((3U & ((1U & vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1) 
                                           + (1U & 
                                              (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                               >> 1U)))) 
                                    + (3U & ((1U & 
                                              (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                               >> 2U)) 
                                             + (1U 
                                                & (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                                   >> 3U)))))) 
                             + (7U & ((3U & ((1U & 
                                              (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                               >> 4U)) 
                                             + (1U 
                                                & (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                                   >> 5U)))) 
                                      + (3U & ((1U 
                                                & (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                                   >> 6U)) 
                                               + (1U 
                                                  & (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                                     >> 7U)))))))) 
                    + (0xfU & ((7U & ((3U & ((1U & 
                                              (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                               >> 8U)) 
                                             + (1U 
                                                & (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                                   >> 9U)))) 
                                      + (3U & ((1U 
                                                & (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                                   >> 0xaU)) 
                                               + (1U 
                                                  & (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                                     >> 0xbU)))))) 
                               + (7U & ((3U & ((1U 
                                                & (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                                   >> 0xcU)) 
                                               + (1U 
                                                  & (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                                     >> 0xdU)))) 
                                        + (3U & ((1U 
                                                  & (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                                     >> 0xeU)) 
                                                 + 
                                                 (1U 
                                                  & (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                                     >> 0xfU))))))))));
    vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___result_T_90 
        = (0x1fU & ((0xfU & ((7U & ((3U & ((1U & (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                                  >> 0x10U)) 
                                           + (1U & 
                                              (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                               >> 0x11U)))) 
                                    + (3U & ((1U & 
                                              (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                               >> 0x12U)) 
                                             + (1U 
                                                & (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                                   >> 0x13U)))))) 
                             + (7U & ((3U & ((1U & 
                                              (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                               >> 0x14U)) 
                                             + (1U 
                                                & (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                                   >> 0x15U)))) 
                                      + (3U & ((1U 
                                                & (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                                   >> 0x16U)) 
                                               + (1U 
                                                  & (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                                     >> 0x17U)))))))) 
                    + (0xfU & ((7U & ((3U & ((1U & 
                                              (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                               >> 0x18U)) 
                                             + (1U 
                                                & (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                                   >> 0x19U)))) 
                                      + (3U & ((1U 
                                                & (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                                   >> 0x1aU)) 
                                               + (1U 
                                                  & (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                                     >> 0x1bU)))))) 
                               + (7U & ((3U & ((1U 
                                                & (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                                   >> 0x1cU)) 
                                               + (1U 
                                                  & (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                                     >> 0x1dU)))) 
                                        + (3U & ((1U 
                                                  & (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                                     >> 0x1eU)) 
                                                 + 
                                                 (1U 
                                                  & (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                                     >> 0x1fU))))))))));
    vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___io_out_T_6 
        = VL_LTS_III(1,32,32, vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1, vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src2);
    vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___io_out_T_8 
        = (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
           < vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src2);
    vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___GEN_5 
        = ((0x10fcU == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
            ? (0x7ffffffffULL & ((QData)((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src2)) 
                                 + ((QData)((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1)) 
                                    << 2U))) : ((0x10feU 
                                                 == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                 ? 
                                                (0x7ffffffffULL 
                                                 & ((QData)((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src2)) 
                                                    + 
                                                    ((QData)((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1)) 
                                                     << 3U)))
                                                 : 
                                                ((0x34c5U 
                                                  == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                  ? (QData)((IData)(
                                                                    ((0xff000000U 
                                                                      & (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                                                         << 0x18U)) 
                                                                     | ((0xff0000U 
                                                                         & (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                                                            << 8U)) 
                                                                        | ((0xff00U 
                                                                            & (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                                                               >> 8U)) 
                                                                           | (0xffU 
                                                                              & (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                                                                >> 0x18U)))))))
                                                  : 
                                                 ((0x404U 
                                                   == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                   ? (QData)((IData)(
                                                                     (0xffffU 
                                                                      & vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1)))
                                                   : 
                                                  ((0x143dU 
                                                    == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                    ? (QData)((IData)(
                                                                      ((((0U 
                                                                          == 
                                                                          (0xffU 
                                                                           & (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                                                              >> 0x18U)))
                                                                          ? 0U
                                                                          : 0xffU) 
                                                                        << 0x18U) 
                                                                       | ((((0U 
                                                                             == 
                                                                             (0xffU 
                                                                              & (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                                                                >> 0x10U)))
                                                                             ? 0U
                                                                             : 0xffU) 
                                                                           << 0x10U) 
                                                                          | ((((0U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                                                                >> 8U)))
                                                                                ? 0U
                                                                                : 0xffU) 
                                                                              << 8U) 
                                                                             | ((0U 
                                                                                == 
                                                                                (0xffU 
                                                                                & vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1))
                                                                                 ? 0U
                                                                                 : 0xffU))))))
                                                    : 
                                                   ((0x1f8U 
                                                     == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                     ? 
                                                    ((QData)((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1)) 
                                                     * (QData)((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src2)))
                                                     : 0ULL))))));
    vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___io_out_T_3 
        = (0x7fffffffffffffffULL & ((QData)((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1)) 
                                    << (0x1fU & vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src2)));
    vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___io_out_T_12 
        = (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
           >> (0x1fU & vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src2));
    vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__result___05F4 
        = ((0xf8U != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
           & ((0xf9U != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
              & ((0xfaU != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                 & ((0xfbU != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                    & ((0xfcU != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                       & ((0xfdU != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                          & ((0xfeU != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                             & ((0xffU != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                                & ((0x20f8U != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                                   & ((0x20fdU != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                                      & ((0x3001U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                          ? (0U == 
                                             (0xffffU 
                                              & (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                                 >> 0x10U)))
                                          : ((0x3009U 
                                              == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                                             & (0U 
                                                == 
                                                (0xffffU 
                                                 & vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1))))))))))))));
    vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT___GEN_12 
        = ((IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT___T_1) 
           | (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__w_determined));
    if (vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT___T_1) {
        vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT___GEN_9 
            = ((IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__aw_outstanding)
                ? vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__write_data_reg
                : 0U);
        vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT___GEN_10 
            = ((IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__aw_outstanding)
                ? (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__write_data_reg_strb)
                : 0U);
    } else {
        vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT___GEN_9 
            = vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__data_reg_data;
        vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT___GEN_10 
            = vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__data_reg_strb;
    }
    vlTOPp->io_Flush = vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_Flush_DH;
    vlTOPp->io_Stall_DH = vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_Flush_DH;
    vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID_io_Stall 
        = (((0xbU == (0x7fU & vlTOPp->top_SoC__DOT__im_io_inst)) 
            | (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_Flush_DH)) 
           | (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_Stall_MA));
    VL_EXTEND_WI(95,32, __Vtemp94, ((((0x8000U & vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1)
                                       ? 0xffffU : 0U) 
                                     << 0x10U) | (0xffffU 
                                                  & vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1)));
    VL_EXTEND_WI(95,32, __Vtemp95, (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                    | ((IData)(1U) 
                                       << (0x1fU & vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src2))));
    VL_EXTEND_WI(95,32, __Vtemp96, (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                    & (~ ((IData)(1U) 
                                          << (0x1fU 
                                              & vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src2)))));
    VL_EXTEND_WI(95,32, __Vtemp97, (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                    ^ ((IData)(1U) 
                                       << (0x1fU & vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src2))));
    VL_EXTEND_WI(95,1, __Vtemp98, (1U & vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___io_out_T_12));
    VL_EXTEND_WI(95,32, __Vtemp99, vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___io_out_T_12);
    VL_EXTEND_WI(95,32, __Vtemp100, vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1);
    VL_SHIFTL_WWI(95,95,6, __Vtemp101, __Vtemp100, 
                  (0x3fU & ((IData)(0x20U) - (0x1fU 
                                              & vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src2))));
    VL_EXTEND_WQ(95,64, __Vtemp103, ((0x30f9U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                      ? (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___io_out_T_3 
                                         | (QData)((IData)(
                                                           ((0x1fU 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(0x20U) 
                                                                 - 
                                                                 (0x1fU 
                                                                  & vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src2))))
                                                             ? 
                                                            (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                                             >> 
                                                             (0x3fU 
                                                              & ((IData)(0x20U) 
                                                                 - 
                                                                 (0x1fU 
                                                                  & vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src2))))
                                                             : 0U))))
                                      : ((0x10faU == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                          ? (0x1ffffffffULL 
                                             & ((QData)((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src2)) 
                                                + ((QData)((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1)) 
                                                   << 1U)))
                                          : vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___GEN_5)));
    if ((0x3029U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))) {
        vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___GEN_13[0U] 
            = __Vtemp94[0U];
        vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___GEN_13[1U] 
            = __Vtemp94[1U];
        vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___GEN_13[2U] 
            = (0x7fffffffU & __Vtemp94[2U]);
    } else {
        vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___GEN_13[0U] 
            = ((0x14f9U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                ? __Vtemp95[0U] : ((0x24f9U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                    ? __Vtemp96[0U]
                                    : ((0x34f9U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                        ? __Vtemp97[0U]
                                        : ((0x24fdU 
                                            == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                            ? __Vtemp98[0U]
                                            : ((0x30fdU 
                                                == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                ? (
                                                   __Vtemp99[0U] 
                                                   | __Vtemp101[0U])
                                                : __Vtemp103[0U])))));
        vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___GEN_13[1U] 
            = ((0x14f9U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                ? __Vtemp95[1U] : ((0x24f9U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                    ? __Vtemp96[1U]
                                    : ((0x34f9U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                        ? __Vtemp97[1U]
                                        : ((0x24fdU 
                                            == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                            ? __Vtemp98[1U]
                                            : ((0x30fdU 
                                                == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                ? (
                                                   __Vtemp99[1U] 
                                                   | __Vtemp101[1U])
                                                : __Vtemp103[1U])))));
        vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___GEN_13[2U] 
            = (0x7fffffffU & ((0x14f9U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                               ? __Vtemp95[2U] : ((0x24f9U 
                                                   == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                   ? 
                                                  __Vtemp96[2U]
                                                   : 
                                                  ((0x34f9U 
                                                    == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                    ? 
                                                   __Vtemp97[2U]
                                                    : 
                                                   ((0x24fdU 
                                                     == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                     ? 
                                                    __Vtemp98[2U]
                                                     : 
                                                    ((0x30fdU 
                                                      == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                      ? 
                                                     (__Vtemp99[2U] 
                                                      | __Vtemp101[2U])
                                                      : 
                                                     __Vtemp103[2U]))))));
    }
    vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__val16 
        = ((0xf8U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
            ? 0U : ((0xf9U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                     ? 0U : ((0xfaU == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                              ? 0U : ((0xfbU == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                       ? 0U : ((0xfcU 
                                                == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                ? 0U
                                                : (
                                                   (0xfdU 
                                                    == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                    ? 0U
                                                    : 
                                                   ((0xfeU 
                                                     == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                     ? 0U
                                                     : 
                                                    ((0xffU 
                                                      == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                      ? 0U
                                                      : 
                                                     ((0x20f8U 
                                                       == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                       ? 0U
                                                       : 
                                                      ((0x20fdU 
                                                        == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                        ? 0U
                                                        : 
                                                       (0xffffU 
                                                        & ((0x3001U 
                                                            == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                            ? 
                                                           ((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__result___05F4)
                                                             ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1
                                                             : 
                                                            (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                                             >> 0x10U))
                                                            : 
                                                           ((0x3009U 
                                                             == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                             ? 
                                                            ((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__result___05F4)
                                                              ? 
                                                             (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                                              >> 0x10U)
                                                              : vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1)
                                                             : 0U)))))))))))));
    vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__result___05F3 
        = ((0xf8U != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
           & ((0xf9U != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
              & ((0xfaU != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                 & ((0xfbU != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                    & ((0xfcU != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                       & ((0xfdU != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                          & ((0xfeU != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                             & ((0xffU != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                                & ((0x20f8U != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                                   & ((0x20fdU != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                                      & ((0x3001U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                          ? (0U == 
                                             (0xffU 
                                              & ((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__val16) 
                                                 >> 8U)))
                                          : ((0x3009U 
                                              == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                                             & (0U 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__val16)))))))))))))));
    vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__val8 
        = ((0xf8U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
            ? 0U : ((0xf9U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                     ? 0U : ((0xfaU == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                              ? 0U : ((0xfbU == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                       ? 0U : ((0xfcU 
                                                == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                ? 0U
                                                : (
                                                   (0xfdU 
                                                    == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                    ? 0U
                                                    : 
                                                   ((0xfeU 
                                                     == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                     ? 0U
                                                     : 
                                                    ((0xffU 
                                                      == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                      ? 0U
                                                      : 
                                                     ((0x20f8U 
                                                       == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                       ? 0U
                                                       : 
                                                      ((0x20fdU 
                                                        == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                        ? 0U
                                                        : 
                                                       (0xffU 
                                                        & ((0x3001U 
                                                            == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                            ? 
                                                           ((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__result___05F3)
                                                             ? (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__val16)
                                                             : 
                                                            ((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__val16) 
                                                             >> 8U))
                                                            : 
                                                           ((0x3009U 
                                                             == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                             ? 
                                                            ((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__result___05F3)
                                                              ? 
                                                             ((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__val16) 
                                                              >> 8U)
                                                              : (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__val16))
                                                             : 0U)))))))))))));
    vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__result___05F2 
        = ((0xf8U != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
           & ((0xf9U != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
              & ((0xfaU != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                 & ((0xfbU != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                    & ((0xfcU != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                       & ((0xfdU != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                          & ((0xfeU != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                             & ((0xffU != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                                & ((0x20f8U != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                                   & ((0x20fdU != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                                      & ((0x3001U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                          ? (0U == 
                                             (0xfU 
                                              & ((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__val8) 
                                                 >> 4U)))
                                          : ((0x3009U 
                                              == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                                             & (0U 
                                                == 
                                                (0xfU 
                                                 & (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__val8)))))))))))))));
    vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__val4 
        = ((0xf8U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
            ? 0U : ((0xf9U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                     ? 0U : ((0xfaU == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                              ? 0U : ((0xfbU == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                       ? 0U : ((0xfcU 
                                                == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                ? 0U
                                                : (
                                                   (0xfdU 
                                                    == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                    ? 0U
                                                    : 
                                                   ((0xfeU 
                                                     == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                     ? 0U
                                                     : 
                                                    ((0xffU 
                                                      == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                      ? 0U
                                                      : 
                                                     ((0x20f8U 
                                                       == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                       ? 0U
                                                       : 
                                                      ((0x20fdU 
                                                        == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                        ? 0U
                                                        : 
                                                       (0xfU 
                                                        & ((0x3001U 
                                                            == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                            ? 
                                                           ((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__result___05F2)
                                                             ? (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__val8)
                                                             : 
                                                            ((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__val8) 
                                                             >> 4U))
                                                            : 
                                                           ((0x3009U 
                                                             == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                             ? 
                                                            ((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__result___05F2)
                                                              ? 
                                                             ((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__val8) 
                                                              >> 4U)
                                                              : (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__val8))
                                                             : 0U)))))))))))));
    vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__result___05F1 
        = ((0xf8U != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
           & ((0xf9U != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
              & ((0xfaU != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                 & ((0xfbU != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                    & ((0xfcU != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                       & ((0xfdU != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                          & ((0xfeU != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                             & ((0xffU != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                                & ((0x20f8U != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                                   & ((0x20fdU != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                                      & ((0x3001U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                          ? (0U == 
                                             (3U & 
                                              ((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__val4) 
                                               >> 2U)))
                                          : ((0x3009U 
                                              == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                                             & (0U 
                                                == 
                                                (3U 
                                                 & (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__val4)))))))))))))));
    vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___io_out_T_21 
        = (((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__result___05F4) 
            << 4U) | (((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__result___05F3) 
                       << 3U) | (((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__result___05F2) 
                                  << 2U) | (((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__result___05F1) 
                                             << 1U) 
                                            | ((0xf8U 
                                                != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                                               & ((0xf9U 
                                                   != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                                                  & ((0xfaU 
                                                      != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                                                     & ((0xfbU 
                                                         != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                                                        & ((0xfcU 
                                                            != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                                                           & ((0xfdU 
                                                               != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                                                              & ((0xfeU 
                                                                  != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                                                                 & ((0xffU 
                                                                     != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                                                                    & ((0x20f8U 
                                                                        != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                                                                       & ((0x20fdU 
                                                                           != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                                                                          & ((0x3001U 
                                                                              == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                                              ? 
                                                                             ((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__result___05F1)
                                                                               ? 
                                                                              (~ 
                                                                               ((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__val4) 
                                                                                >> 1U))
                                                                               : 
                                                                              (~ 
                                                                               ((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__val4) 
                                                                                >> 3U)))
                                                                              : 
                                                                             ((0x3009U 
                                                                               == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                                                                              & ((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__result___05F1)
                                                                                 ? 
                                                                                ((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__val4) 
                                                                                >> 3U)
                                                                                 : 
                                                                                ((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__val4) 
                                                                                >> 1U))))))))))))))))));
    VL_EXTEND_WI(95,32, __Vtemp117, VL_SHIFTRS_III(32,32,5, vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1, 
                                                   (0x1fU 
                                                    & vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src2)));
    VL_EXTEND_WI(95,5, __Vtemp118, (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___io_out_T_21));
    VL_EXTEND_WI(95,5, __Vtemp119, (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___io_out_T_21));
    VL_EXTEND_WI(95,5, __Vtemp120, (0x1fU & ((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___result_T_60) 
                                             + (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___result_T_90))));
    VL_EXTEND_WI(95,32, __Vtemp121, (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                     & (~ vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src2)));
    VL_EXTEND_WI(95,32, __Vtemp122, (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                     | (~ vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src2)));
    VL_EXTEND_WI(95,32, __Vtemp123, (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                     ^ (~ vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src2)));
    VL_EXTEND_WI(95,32, __Vtemp124, ((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___io_out_T_6)
                                      ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1
                                      : vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src2));
    VL_EXTEND_WI(95,32, __Vtemp125, ((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___io_out_T_6)
                                      ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src2
                                      : vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1));
    VL_EXTEND_WI(95,32, __Vtemp126, ((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___io_out_T_8)
                                      ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1
                                      : vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src2));
    VL_EXTEND_WI(95,32, __Vtemp127, ((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___io_out_T_8)
                                      ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src2
                                      : vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1));
    VL_EXTEND_WI(95,32, __Vtemp128, ((((0x80U & vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1)
                                        ? 0xffffffU
                                        : 0U) << 8U) 
                                     | (0xffU & vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1)));
    if ((0x20fdU == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))) {
        vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___GEN_41[0U] 
            = __Vtemp117[0U];
        vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___GEN_41[1U] 
            = __Vtemp117[1U];
        vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___GEN_41[2U] 
            = __Vtemp117[2U];
    } else {
        vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___GEN_41[0U] 
            = ((0x3001U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                ? __Vtemp118[0U] : ((0x3009U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                     ? __Vtemp119[0U]
                                     : ((0x3011U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                         ? __Vtemp120[0U]
                                         : ((0x20ffU 
                                             == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                             ? __Vtemp121[0U]
                                             : ((0x20feU 
                                                 == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                 ? 
                                                __Vtemp122[0U]
                                                 : 
                                                ((0x20fcU 
                                                  == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                  ? 
                                                 __Vtemp123[0U]
                                                  : 
                                                 ((0x5fcU 
                                                   == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                   ? 
                                                  __Vtemp124[0U]
                                                   : 
                                                  ((0x5feU 
                                                    == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                    ? 
                                                   __Vtemp125[0U]
                                                    : 
                                                   ((0x5fdU 
                                                     == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                     ? 
                                                    __Vtemp126[0U]
                                                     : 
                                                    ((0x5ffU 
                                                      == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                      ? 
                                                     __Vtemp127[0U]
                                                      : 
                                                     ((0x3021U 
                                                       == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                       ? 
                                                      __Vtemp128[0U]
                                                       : 
                                                      vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___GEN_13[0U])))))))))));
        vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___GEN_41[1U] 
            = ((0x3001U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                ? __Vtemp118[1U] : ((0x3009U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                     ? __Vtemp119[1U]
                                     : ((0x3011U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                         ? __Vtemp120[1U]
                                         : ((0x20ffU 
                                             == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                             ? __Vtemp121[1U]
                                             : ((0x20feU 
                                                 == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                 ? 
                                                __Vtemp122[1U]
                                                 : 
                                                ((0x20fcU 
                                                  == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                  ? 
                                                 __Vtemp123[1U]
                                                  : 
                                                 ((0x5fcU 
                                                   == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                   ? 
                                                  __Vtemp124[1U]
                                                   : 
                                                  ((0x5feU 
                                                    == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                    ? 
                                                   __Vtemp125[1U]
                                                    : 
                                                   ((0x5fdU 
                                                     == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                     ? 
                                                    __Vtemp126[1U]
                                                     : 
                                                    ((0x5ffU 
                                                      == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                      ? 
                                                     __Vtemp127[1U]
                                                      : 
                                                     ((0x3021U 
                                                       == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                       ? 
                                                      __Vtemp128[1U]
                                                       : 
                                                      vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___GEN_13[1U])))))))))));
        vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___GEN_41[2U] 
            = ((0x3001U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                ? __Vtemp118[2U] : ((0x3009U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                     ? __Vtemp119[2U]
                                     : ((0x3011U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                         ? __Vtemp120[2U]
                                         : ((0x20ffU 
                                             == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                             ? __Vtemp121[2U]
                                             : ((0x20feU 
                                                 == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                 ? 
                                                __Vtemp122[2U]
                                                 : 
                                                ((0x20fcU 
                                                  == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                  ? 
                                                 __Vtemp123[2U]
                                                  : 
                                                 ((0x5fcU 
                                                   == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                   ? 
                                                  __Vtemp124[2U]
                                                   : 
                                                  ((0x5feU 
                                                    == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                    ? 
                                                   __Vtemp125[2U]
                                                    : 
                                                   ((0x5fdU 
                                                     == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                     ? 
                                                    __Vtemp126[2U]
                                                     : 
                                                    ((0x5ffU 
                                                      == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                      ? 
                                                     __Vtemp127[2U]
                                                      : 
                                                     ((0x3021U 
                                                       == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                       ? 
                                                      __Vtemp128[2U]
                                                       : 
                                                      vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___GEN_13[2U])))))))))));
    }
    VL_EXTEND_WI(95,32, __Vtemp153, (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                     + vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src2));
    VL_EXTEND_WQ(95,63, __Vtemp154, vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___io_out_T_3);
    VL_EXTEND_WI(95,1, __Vtemp155, VL_LTS_III(1,32,32, vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1, vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src2));
    VL_EXTEND_WI(95,1, __Vtemp156, (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                    < vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src2));
    VL_EXTEND_WI(95,32, __Vtemp157, (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                     ^ vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src2));
    VL_EXTEND_WI(95,32, __Vtemp158, vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___io_out_T_12);
    VL_EXTEND_WI(95,32, __Vtemp159, (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                     | vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src2));
    VL_EXTEND_WI(95,32, __Vtemp160, (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                     & vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src2));
    VL_EXTEND_WI(95,32, __Vtemp161, (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 
                                     - vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src2));
    if ((0xf8U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))) {
        vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___GEN_122[0U] 
            = __Vtemp153[0U];
        vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___GEN_122[1U] 
            = __Vtemp153[1U];
        vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___GEN_122[2U] 
            = __Vtemp153[2U];
    } else {
        vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___GEN_122[0U] 
            = ((0xf9U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                ? __Vtemp154[0U] : ((0xfaU == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                     ? __Vtemp155[0U]
                                     : ((0xfbU == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                         ? __Vtemp156[0U]
                                         : ((0xfcU 
                                             == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                             ? __Vtemp157[0U]
                                             : ((0xfdU 
                                                 == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                 ? 
                                                __Vtemp158[0U]
                                                 : 
                                                ((0xfeU 
                                                  == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                  ? 
                                                 __Vtemp159[0U]
                                                  : 
                                                 ((0xffU 
                                                   == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                   ? 
                                                  __Vtemp160[0U]
                                                   : 
                                                  ((0x20f8U 
                                                    == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                    ? 
                                                   __Vtemp161[0U]
                                                    : 
                                                   vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___GEN_41[0U]))))))));
        vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___GEN_122[1U] 
            = ((0xf9U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                ? __Vtemp154[1U] : ((0xfaU == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                     ? __Vtemp155[1U]
                                     : ((0xfbU == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                         ? __Vtemp156[1U]
                                         : ((0xfcU 
                                             == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                             ? __Vtemp157[1U]
                                             : ((0xfdU 
                                                 == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                 ? 
                                                __Vtemp158[1U]
                                                 : 
                                                ((0xfeU 
                                                  == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                  ? 
                                                 __Vtemp159[1U]
                                                  : 
                                                 ((0xffU 
                                                   == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                   ? 
                                                  __Vtemp160[1U]
                                                   : 
                                                  ((0x20f8U 
                                                    == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                    ? 
                                                   __Vtemp161[1U]
                                                    : 
                                                   vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___GEN_41[1U]))))))));
        vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___GEN_122[2U] 
            = ((0xf9U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                ? __Vtemp154[2U] : ((0xfaU == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                     ? __Vtemp155[2U]
                                     : ((0xfbU == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                         ? __Vtemp156[2U]
                                         : ((0xfcU 
                                             == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                             ? __Vtemp157[2U]
                                             : ((0xfdU 
                                                 == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                 ? 
                                                __Vtemp158[2U]
                                                 : 
                                                ((0xfeU 
                                                  == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                  ? 
                                                 __Vtemp159[2U]
                                                  : 
                                                 ((0xffU 
                                                   == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                   ? 
                                                  __Vtemp160[2U]
                                                   : 
                                                  ((0x20f8U 
                                                    == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel))
                                                    ? 
                                                   __Vtemp161[2U]
                                                    : 
                                                   vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___GEN_41[2U]))))))));
    }
    vlTOPp->io_EXE_alu_out = vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___GEN_122[0U];
    vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_Flush_BH 
        = (((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__E_En) 
            & (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__E_Branch_taken)) 
           & ((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__pcReg) 
              != (0x7fffU & vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___GEN_122[0U])));
    vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE_io_Flush 
        = ((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_Flush_BH) 
           | (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_Flush_DH));
    vlTOPp->top_SoC__DOT__cpu__DOT__datapath_IF__DOT___io_next_pc_T_9 
        = (0x7fffU & ((1U == ((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_Flush_BH)
                               ? 2U : 0U)) ? ((IData)(4U) 
                                              + (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__pcReg))
                       : ((IData)(4U) + (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__stage_IF__DOT__pcReg))));
}

void Vtop_SoC::_eval_initial(Vtop_SoC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_SoC::_eval_initial\n"); );
    Vtop_SoC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void Vtop_SoC::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_SoC::final\n"); );
    // Variables
    Vtop_SoC__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop_SoC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop_SoC::_eval_settle(Vtop_SoC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_SoC::_eval_settle\n"); );
    Vtop_SoC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vtop_SoC::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_SoC::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_regs_0 = VL_RAND_RESET_I(32);
    io_regs_1 = VL_RAND_RESET_I(32);
    io_regs_2 = VL_RAND_RESET_I(32);
    io_regs_3 = VL_RAND_RESET_I(32);
    io_regs_4 = VL_RAND_RESET_I(32);
    io_regs_5 = VL_RAND_RESET_I(32);
    io_regs_6 = VL_RAND_RESET_I(32);
    io_regs_7 = VL_RAND_RESET_I(32);
    io_regs_8 = VL_RAND_RESET_I(32);
    io_regs_9 = VL_RAND_RESET_I(32);
    io_regs_10 = VL_RAND_RESET_I(32);
    io_regs_11 = VL_RAND_RESET_I(32);
    io_regs_12 = VL_RAND_RESET_I(32);
    io_regs_13 = VL_RAND_RESET_I(32);
    io_regs_14 = VL_RAND_RESET_I(32);
    io_regs_15 = VL_RAND_RESET_I(32);
    io_regs_16 = VL_RAND_RESET_I(32);
    io_regs_17 = VL_RAND_RESET_I(32);
    io_regs_18 = VL_RAND_RESET_I(32);
    io_regs_19 = VL_RAND_RESET_I(32);
    io_regs_20 = VL_RAND_RESET_I(32);
    io_regs_21 = VL_RAND_RESET_I(32);
    io_regs_22 = VL_RAND_RESET_I(32);
    io_regs_23 = VL_RAND_RESET_I(32);
    io_regs_24 = VL_RAND_RESET_I(32);
    io_regs_25 = VL_RAND_RESET_I(32);
    io_regs_26 = VL_RAND_RESET_I(32);
    io_regs_27 = VL_RAND_RESET_I(32);
    io_regs_28 = VL_RAND_RESET_I(32);
    io_regs_29 = VL_RAND_RESET_I(32);
    io_regs_30 = VL_RAND_RESET_I(32);
    io_regs_31 = VL_RAND_RESET_I(32);
    io_Hcf = VL_RAND_RESET_I(1);
    io_inst = VL_RAND_RESET_I(32);
    io_rdata = VL_RAND_RESET_I(32);
    io_wdata = VL_RAND_RESET_I(32);
    io_Dump_Mem = VL_RAND_RESET_I(1);
    io_E_Branch_taken = VL_RAND_RESET_I(1);
    io_Flush = VL_RAND_RESET_I(1);
    io_Stall_MA = VL_RAND_RESET_I(1);
    io_Stall_DH = VL_RAND_RESET_I(1);
    io_IF_PC = VL_RAND_RESET_I(32);
    io_ID_PC = VL_RAND_RESET_I(32);
    io_EXE_PC = VL_RAND_RESET_I(32);
    io_MEM_PC = VL_RAND_RESET_I(32);
    io_WB_PC = VL_RAND_RESET_I(32);
    io_EXE_alu_out = VL_RAND_RESET_I(32);
    io_EXE_src1 = VL_RAND_RESET_I(32);
    io_EXE_src2 = VL_RAND_RESET_I(32);
    io_ALU_src1 = VL_RAND_RESET_I(32);
    io_ALU_src2 = VL_RAND_RESET_I(32);
    io_raddr = VL_RAND_RESET_I(32);
    io_WB_rd = VL_RAND_RESET_I(5);
    io_WB_wdata = VL_RAND_RESET_I(32);
    io_EXE_Jump = VL_RAND_RESET_I(1);
    io_EXE_Branch = VL_RAND_RESET_I(1);
    top_SoC__DOT__cpu_io_DataMem_b_ready = VL_RAND_RESET_I(1);
    top_SoC__DOT__im_io_inst = VL_RAND_RESET_I(32);
    top_SoC__DOT__datamem_io_slave_r_valid = VL_RAND_RESET_I(1);
    top_SoC__DOT__datamem_io_slave_r_bits_data = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__stage_ID_io_Stall = VL_RAND_RESET_I(1);
    top_SoC__DOT__cpu__DOT__stage_EXE_io_Flush = VL_RAND_RESET_I(1);
    top_SoC__DOT__cpu__DOT__stage_EXE_io_Stall = VL_RAND_RESET_I(1);
    top_SoC__DOT__cpu__DOT__datapath_WB_io_WB_wdata = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__contorller_io_Flush_DH = VL_RAND_RESET_I(1);
    top_SoC__DOT__cpu__DOT__contorller_io_Flush_BH = VL_RAND_RESET_I(1);
    top_SoC__DOT__cpu__DOT__contorller_io_Stall_MA = VL_RAND_RESET_I(1);
    top_SoC__DOT__cpu__DOT__contorller_io_D_ImmSel = VL_RAND_RESET_I(3);
    top_SoC__DOT__cpu__DOT__contorller_io_E_ASel = VL_RAND_RESET_I(2);
    top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel = VL_RAND_RESET_I(15);
    top_SoC__DOT__cpu__DOT__contorller_io_W_WBSel = VL_RAND_RESET_I(2);
    top_SoC__DOT__cpu__DOT__mReadState = VL_RAND_RESET_I(2);
    top_SoC__DOT__cpu__DOT__mWriteState = VL_RAND_RESET_I(2);
    top_SoC__DOT__cpu__DOT___GEN_8 = VL_RAND_RESET_I(2);
    top_SoC__DOT__cpu__DOT___GEN_10 = VL_RAND_RESET_I(2);
    top_SoC__DOT__cpu__DOT__stage_IF__DOT__pcReg = VL_RAND_RESET_I(15);
    top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__stage_ID__DOT__pcReg = VL_RAND_RESET_I(15);
    top_SoC__DOT__cpu__DOT__stage_EXE__DOT__pcReg = VL_RAND_RESET_I(15);
    top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__stage_EXE__DOT__immReg = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__stage_EXE__DOT__rs1Reg = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__stage_EXE__DOT__rs2Reg = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__stage_MEM__DOT__InstReg = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__stage_MEM__DOT__pcReg = VL_RAND_RESET_I(15);
    top_SoC__DOT__cpu__DOT__stage_MEM__DOT__aluReg = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__stage_MEM__DOT__wdataReg = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__stage_WB__DOT__pc_plus4_Reg = VL_RAND_RESET_I(15);
    top_SoC__DOT__cpu__DOT__stage_WB__DOT__InstReg = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__stage_WB__DOT__alu_out_Reg = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__stage_WB__DOT__ld_data_Reg = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__datapath_IF__DOT___io_next_pc_T_9 = VL_RAND_RESET_I(15);
    top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_1 = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_2 = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_3 = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_4 = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_5 = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_6 = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_7 = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_8 = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_9 = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_10 = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_11 = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_12 = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_13 = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_14 = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_15 = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_16 = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_17 = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_18 = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_19 = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_20 = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_21 = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_22 = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_23 = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_24 = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_25 = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_26 = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_27 = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_28 = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_29 = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_30 = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_31 = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT___GEN_13 = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT___GEN_26 = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT___GEN_45 = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT___GEN_58 = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__datapath_ID__DOT__ig__DOT___simm_T_13 = VL_RAND_RESET_I(12);
    top_SoC__DOT__cpu__DOT__datapath_ID__DOT__ig__DOT___simm_T_22 = VL_RAND_RESET_I(21);
    top_SoC__DOT__cpu__DOT__datapath_ID__DOT__ig__DOT___simm_T_26 = VL_RAND_RESET_I(12);
    top_SoC__DOT__cpu__DOT__datapath_ID__DOT__ig__DOT___simm_T_30 = VL_RAND_RESET_I(13);
    top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__bc_io_BrEq = VL_RAND_RESET_I(1);
    top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__bc_io_BrLT = VL_RAND_RESET_I(1);
    top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1 = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src2 = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__datapath_EXE__DOT___alu_src1_T_3 = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___io_out_T_3 = VL_RAND_RESET_Q(63);
    top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___io_out_T_6 = VL_RAND_RESET_I(1);
    top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___io_out_T_8 = VL_RAND_RESET_I(1);
    top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___io_out_T_12 = VL_RAND_RESET_I(32);
    top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__result___05F4 = VL_RAND_RESET_I(1);
    top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__val16 = VL_RAND_RESET_I(16);
    top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__result___05F3 = VL_RAND_RESET_I(1);
    top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__val8 = VL_RAND_RESET_I(8);
    top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__result___05F2 = VL_RAND_RESET_I(1);
    top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__val4 = VL_RAND_RESET_I(4);
    top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__result___05F1 = VL_RAND_RESET_I(1);
    top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___io_out_T_21 = VL_RAND_RESET_I(5);
    top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___result_T_60 = VL_RAND_RESET_I(5);
    top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___result_T_90 = VL_RAND_RESET_I(5);
    top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___GEN_5 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(95, top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___GEN_13);
    VL_RAND_RESET_W(95, top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___GEN_41);
    VL_RAND_RESET_W(95, top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___GEN_122);
    top_SoC__DOT__cpu__DOT__contorller__DOT__E_En = VL_RAND_RESET_I(1);
    top_SoC__DOT__cpu__DOT__contorller__DOT___E_Branch_taken_T_14 = VL_RAND_RESET_I(1);
    top_SoC__DOT__cpu__DOT__contorller__DOT__E_Branch_taken = VL_RAND_RESET_I(1);
    top_SoC__DOT__cpu__DOT__contorller__DOT___EXE_funct5_T = VL_RAND_RESET_I(10);
    top_SoC__DOT__cpu__DOT__contorller__DOT__EXE_funct5 = VL_RAND_RESET_I(5);
    top_SoC__DOT__cpu__DOT__contorller__DOT___io_W_RegWEn_T_3 = VL_RAND_RESET_I(1);
    top_SoC__DOT__cpu__DOT__contorller__DOT___io_W_RegWEn_T_5 = VL_RAND_RESET_I(1);
    top_SoC__DOT__cpu__DOT__contorller__DOT__is_D_use_rs1 = VL_RAND_RESET_I(1);
    top_SoC__DOT__cpu__DOT__contorller__DOT__is_D_use_rs2 = VL_RAND_RESET_I(1);
    top_SoC__DOT__cpu__DOT__contorller__DOT__is_M_use_rd = VL_RAND_RESET_I(1);
    top_SoC__DOT__cpu__DOT__contorller__DOT__is_E_use_rd = VL_RAND_RESET_I(1);
    top_SoC__DOT__cpu__DOT__contorller__DOT___io_Stall_DH_T_2 = VL_RAND_RESET_I(1);
    top_SoC__DOT__cpu__DOT__contorller__DOT___io_Stall_DH_T_3 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32768; ++__Vi0) {
        top_SoC__DOT__im__DOT__memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<32768; ++__Vi0) {
        top_SoC__DOT__datamem__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    top_SoC__DOT__datamem__DOT__rAddrOffset = VL_RAND_RESET_I(15);
    top_SoC__DOT__datamem__DOT__writeAddressReg = VL_RAND_RESET_I(15);
    top_SoC__DOT__datamem__DOT__writeState = VL_RAND_RESET_I(3);
    top_SoC__DOT__datamem__DOT__readState = VL_RAND_RESET_I(2);
    top_SoC__DOT__datamem__DOT__rLatencyCounter = VL_RAND_RESET_I(8);
    top_SoC__DOT__datamem__DOT__wLatencyCounter = VL_RAND_RESET_I(8);
    top_SoC__DOT__datamem__DOT___GEN_3 = VL_RAND_RESET_I(2);
    top_SoC__DOT__datamem__DOT___rLatencyCounter_T_1 = VL_RAND_RESET_I(8);
    top_SoC__DOT__datamem__DOT___GEN_16 = VL_RAND_RESET_I(1);
    top_SoC__DOT__datamem__DOT___T_12 = VL_RAND_RESET_I(1);
    top_SoC__DOT__datamem__DOT___GEN_32 = VL_RAND_RESET_I(3);
    top_SoC__DOT__datamem__DOT___GEN_35 = VL_RAND_RESET_I(3);
    top_SoC__DOT__datamem__DOT___GEN_39 = VL_RAND_RESET_I(3);
    top_SoC__DOT__datamem__DOT__lo = VL_RAND_RESET_I(16);
    top_SoC__DOT__datamem__DOT__hi = VL_RAND_RESET_I(16);
    top_SoC__DOT__datamem__DOT___GEN_65 = VL_RAND_RESET_I(8);
    top_SoC__DOT__datamem__DOT___GEN_149 = VL_RAND_RESET_I(32);
    top_SoC__DOT__datamem__DOT___GEN_150 = VL_RAND_RESET_I(32);
    top_SoC__DOT__datamem__DOT__initvar = VL_RAND_RESET_I(32);
    top_SoC__DOT__bus__DOT__readBuses_0_io_slave_0_readAddr_valid = VL_RAND_RESET_I(1);
    top_SoC__DOT__bus__DOT__readMuxes_0_io_out_readData_ready = VL_RAND_RESET_I(1);
    top_SoC__DOT__bus__DOT__readMuxes_0_io_in_0_readData_valid = VL_RAND_RESET_I(1);
    top_SoC__DOT__bus__DOT__writeBuses_0_io_slave_0_writeAddr_valid = VL_RAND_RESET_I(1);
    top_SoC__DOT__bus__DOT__writeBuses_0_io_slave_0_writeResp_ready = VL_RAND_RESET_I(1);
    top_SoC__DOT__bus__DOT__writeMuxes_0_io_out_writeResp_ready = VL_RAND_RESET_I(1);
    top_SoC__DOT__bus__DOT__writeMuxes_0_io_in_0_writeData_ready = VL_RAND_RESET_I(1);
    top_SoC__DOT__bus__DOT__writeMuxes_0_io_in_0_writeResp_valid = VL_RAND_RESET_I(1);
    top_SoC__DOT__bus__DOT__readBuses_0__DOT__read_addr_reg_valid = VL_RAND_RESET_I(1);
    top_SoC__DOT__bus__DOT__readBuses_0__DOT__outstanding = VL_RAND_RESET_I(1);
    top_SoC__DOT__bus__DOT__readBuses_0__DOT___T = VL_RAND_RESET_I(1);
    top_SoC__DOT__bus__DOT__readBuses_0__DOT___GEN_0 = VL_RAND_RESET_I(1);
    top_SoC__DOT__bus__DOT__readBuses_0__DOT___GEN_5 = VL_RAND_RESET_I(1);
    top_SoC__DOT__bus__DOT__readBuses_0__DOT___T_1 = VL_RAND_RESET_I(1);
    top_SoC__DOT__bus__DOT__readMuxes_0__DOT__state = VL_RAND_RESET_I(2);
    top_SoC__DOT__bus__DOT__readMuxes_0__DOT__ar_determined = VL_RAND_RESET_I(1);
    top_SoC__DOT__bus__DOT__readMuxes_0__DOT__data_reg_data = VL_RAND_RESET_I(32);
    top_SoC__DOT__bus__DOT__readMuxes_0__DOT___GEN_25 = VL_RAND_RESET_I(1);
    top_SoC__DOT__bus__DOT__readMuxes_0__DOT___T_2 = VL_RAND_RESET_I(1);
    top_SoC__DOT__bus__DOT__readMuxes_0__DOT___GEN_2 = VL_RAND_RESET_I(2);
    top_SoC__DOT__bus__DOT__readMuxes_0__DOT___GEN_17 = VL_RAND_RESET_I(1);
    top_SoC__DOT__bus__DOT__readMuxes_0__DOT___T_7 = VL_RAND_RESET_I(1);
    top_SoC__DOT__bus__DOT__writeBuses_0__DOT__write_addr_reg_valid = VL_RAND_RESET_I(1);
    top_SoC__DOT__bus__DOT__writeBuses_0__DOT__write_data_reg = VL_RAND_RESET_I(32);
    top_SoC__DOT__bus__DOT__writeBuses_0__DOT__write_data_reg_valid = VL_RAND_RESET_I(1);
    top_SoC__DOT__bus__DOT__writeBuses_0__DOT__write_data_reg_strb = VL_RAND_RESET_I(4);
    top_SoC__DOT__bus__DOT__writeBuses_0__DOT__write_resp_reg_valid = VL_RAND_RESET_I(1);
    top_SoC__DOT__bus__DOT__writeBuses_0__DOT__w_outstanding = VL_RAND_RESET_I(1);
    top_SoC__DOT__bus__DOT__writeBuses_0__DOT__aw_outstanding = VL_RAND_RESET_I(1);
    top_SoC__DOT__bus__DOT__writeBuses_0__DOT__b_outstanding = VL_RAND_RESET_I(1);
    top_SoC__DOT__bus__DOT__writeBuses_0__DOT___T = VL_RAND_RESET_I(1);
    top_SoC__DOT__bus__DOT__writeBuses_0__DOT___GEN_0 = VL_RAND_RESET_I(1);
    top_SoC__DOT__bus__DOT__writeBuses_0__DOT___GEN_3 = VL_RAND_RESET_I(1);
    top_SoC__DOT__bus__DOT__writeBuses_0__DOT___T_1 = VL_RAND_RESET_I(1);
    top_SoC__DOT__bus__DOT__writeBuses_0__DOT___GEN_6 = VL_RAND_RESET_I(1);
    top_SoC__DOT__bus__DOT__writeBuses_0__DOT___GEN_9 = VL_RAND_RESET_I(1);
    top_SoC__DOT__bus__DOT__writeBuses_0__DOT___T_7 = VL_RAND_RESET_I(1);
    top_SoC__DOT__bus__DOT__writeBuses_0__DOT___GEN_17 = VL_RAND_RESET_I(1);
    top_SoC__DOT__bus__DOT__writeBuses_0__DOT___GEN_18 = VL_RAND_RESET_I(1);
    top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__arbiter_io_in_0_valid = VL_RAND_RESET_I(1);
    top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__state = VL_RAND_RESET_I(2);
    top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__w_determined = VL_RAND_RESET_I(1);
    top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__aw_determined = VL_RAND_RESET_I(1);
    top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__data_reg_data = VL_RAND_RESET_I(32);
    top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__data_reg_strb = VL_RAND_RESET_I(4);
    top_SoC__DOT__bus__DOT__writeMuxes_0__DOT___GEN_47 = VL_RAND_RESET_I(1);
    top_SoC__DOT__bus__DOT__writeMuxes_0__DOT___T_1 = VL_RAND_RESET_I(1);
    top_SoC__DOT__bus__DOT__writeMuxes_0__DOT___GEN_3 = VL_RAND_RESET_I(2);
    top_SoC__DOT__bus__DOT__writeMuxes_0__DOT___GEN_5 = VL_RAND_RESET_I(2);
    top_SoC__DOT__bus__DOT__writeMuxes_0__DOT___GEN_9 = VL_RAND_RESET_I(32);
    top_SoC__DOT__bus__DOT__writeMuxes_0__DOT___GEN_10 = VL_RAND_RESET_I(4);
    top_SoC__DOT__bus__DOT__writeMuxes_0__DOT___GEN_12 = VL_RAND_RESET_I(1);
    top_SoC__DOT__bus__DOT__writeMuxes_0__DOT___GEN_25 = VL_RAND_RESET_I(1);
    top_SoC__DOT__bus__DOT__writeMuxes_0__DOT___GEN_33 = VL_RAND_RESET_I(1);
    top_SoC__DOT__bus__DOT__writeMuxes_0__DOT___GEN_35 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
