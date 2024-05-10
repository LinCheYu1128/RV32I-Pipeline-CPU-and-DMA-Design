// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_SoC__Syms.h"


void Vtop_SoC::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vtop_SoC__Syms* __restrict vlSymsp = static_cast<Vtop_SoC__Syms*>(userp);
    Vtop_SoC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vtop_SoC::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vtop_SoC__Syms* __restrict vlSymsp = static_cast<Vtop_SoC__Syms*>(userp);
    Vtop_SoC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgSData(oldp+0,(vlTOPp->top_SoC__DOT__cpu__DOT__stage_IF__DOT__pcReg),15);
            tracep->chgIData(oldp+1,(vlTOPp->top_SoC__DOT__im_io_inst),32);
            tracep->chgBit(oldp+2,((1U & (~ (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__aw_outstanding)))));
            tracep->chgBit(oldp+3,((1U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__mWriteState))));
            tracep->chgBit(oldp+4,((1U & (~ (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__w_outstanding)))));
            tracep->chgBit(oldp+5,((2U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__mWriteState))));
            tracep->chgIData(oldp+6,(vlTOPp->top_SoC__DOT__cpu__DOT__stage_MEM__DOT__wdataReg),32);
            tracep->chgBit(oldp+7,(vlTOPp->top_SoC__DOT__cpu_io_DataMem_b_ready));
            tracep->chgBit(oldp+8,(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__write_resp_reg_valid));
            tracep->chgBit(oldp+9,((1U & (~ (IData)(vlTOPp->top_SoC__DOT__bus__DOT__readBuses_0__DOT__outstanding)))));
            tracep->chgBit(oldp+10,((1U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__mReadState))));
            tracep->chgBit(oldp+11,((2U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__mReadState))));
            tracep->chgIData(oldp+12,(((IData)(vlTOPp->top_SoC__DOT__bus__DOT__readBuses_0__DOT__outstanding)
                                        ? vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0__DOT__data_reg_data
                                        : 0U)),32);
            tracep->chgIData(oldp+13,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_1),32);
            tracep->chgIData(oldp+14,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_2),32);
            tracep->chgIData(oldp+15,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_3),32);
            tracep->chgIData(oldp+16,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_4),32);
            tracep->chgIData(oldp+17,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_5),32);
            tracep->chgIData(oldp+18,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_6),32);
            tracep->chgIData(oldp+19,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_7),32);
            tracep->chgIData(oldp+20,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_8),32);
            tracep->chgIData(oldp+21,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_9),32);
            tracep->chgIData(oldp+22,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_10),32);
            tracep->chgIData(oldp+23,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_11),32);
            tracep->chgIData(oldp+24,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_12),32);
            tracep->chgIData(oldp+25,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_13),32);
            tracep->chgIData(oldp+26,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_14),32);
            tracep->chgIData(oldp+27,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_15),32);
            tracep->chgIData(oldp+28,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_16),32);
            tracep->chgIData(oldp+29,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_17),32);
            tracep->chgIData(oldp+30,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_18),32);
            tracep->chgIData(oldp+31,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_19),32);
            tracep->chgIData(oldp+32,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_20),32);
            tracep->chgIData(oldp+33,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_21),32);
            tracep->chgIData(oldp+34,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_22),32);
            tracep->chgIData(oldp+35,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_23),32);
            tracep->chgIData(oldp+36,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_24),32);
            tracep->chgIData(oldp+37,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_25),32);
            tracep->chgIData(oldp+38,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_26),32);
            tracep->chgIData(oldp+39,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_27),32);
            tracep->chgIData(oldp+40,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_28),32);
            tracep->chgIData(oldp+41,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_29),32);
            tracep->chgIData(oldp+42,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_30),32);
            tracep->chgIData(oldp+43,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_31),32);
            tracep->chgBit(oldp+44,((0xbU == (0x7fU 
                                              & vlTOPp->top_SoC__DOT__im_io_inst))));
            tracep->chgBit(oldp+45,(((0x67U == (0x7fU 
                                                & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg)) 
                                     | ((0x6fU == (0x7fU 
                                                   & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg)) 
                                        | ((0x63U == 
                                            (0x7fU 
                                             & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg)) 
                                           & (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT___E_Branch_taken_T_14))))));
            tracep->chgBit(oldp+46,(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_Flush_DH));
            tracep->chgBit(oldp+47,(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_Stall_MA));
            tracep->chgSData(oldp+48,(vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__pcReg),15);
            tracep->chgSData(oldp+49,(vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__pcReg),15);
            tracep->chgSData(oldp+50,(vlTOPp->top_SoC__DOT__cpu__DOT__stage_MEM__DOT__pcReg),15);
            tracep->chgSData(oldp+51,((0x7fffU & ((0U 
                                                   < (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__stage_WB__DOT__pc_plus4_Reg))
                                                   ? 
                                                  ((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__stage_WB__DOT__pc_plus4_Reg) 
                                                   - (IData)(4U))
                                                   : (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__stage_WB__DOT__pc_plus4_Reg)))),15);
            tracep->chgIData(oldp+52,(vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__rs1Reg),32);
            tracep->chgIData(oldp+53,(vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__rs2Reg),32);
            tracep->chgIData(oldp+54,(((2U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ASel))
                                        ? 0U : vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT___alu_src1_T_3)),32);
            tracep->chgIData(oldp+55,(((0x33U != (0x7fU 
                                                  & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg))
                                        ? vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__immReg
                                        : vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__rs2Reg)),32);
            tracep->chgSData(oldp+56,((0x7fffU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_MEM__DOT__aluReg)),15);
            tracep->chgIData(oldp+57,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___GEN_122[0U]),32);
            tracep->chgCData(oldp+58,((0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_WB__DOT__InstReg 
                                                >> 7U))),5);
            tracep->chgIData(oldp+59,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_WB_io_WB_wdata),32);
            tracep->chgBit(oldp+60,(((0x6fU == (0x7fU 
                                                & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg)) 
                                     | (0x67U == (0x7fU 
                                                  & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg)))));
            tracep->chgBit(oldp+61,((0x63U == (0x7fU 
                                               & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg))));
            tracep->chgBit(oldp+62,(((0U != (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState)) 
                                     & (1U == (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState)))));
            tracep->chgBit(oldp+63,(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__aw_determined));
            tracep->chgBit(oldp+64,(((0U != (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState)) 
                                     & ((1U == (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState)) 
                                        | (4U == (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState))))));
            tracep->chgBit(oldp+65,(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__w_determined));
            tracep->chgIData(oldp+66,(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__data_reg_data),32);
            tracep->chgCData(oldp+67,(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__data_reg_strb),4);
            tracep->chgBit(oldp+68,(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0_io_out_writeResp_ready));
            tracep->chgBit(oldp+69,(((0U != (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState)) 
                                     & ((1U != (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState)) 
                                        & ((4U != (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState)) 
                                           & ((2U != (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState)) 
                                              & (3U 
                                                 == (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState))))))));
            tracep->chgBit(oldp+70,((0U == (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__readState))));
            tracep->chgBit(oldp+71,(vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0__DOT__ar_determined));
            tracep->chgBit(oldp+72,(vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0_io_out_readData_ready));
            tracep->chgBit(oldp+73,(vlTOPp->top_SoC__DOT__datamem_io_slave_r_valid));
            tracep->chgIData(oldp+74,(vlTOPp->top_SoC__DOT__datamem_io_slave_r_bits_data),32);
            tracep->chgBit(oldp+75,((((0xbU == (0x7fU 
                                                & vlTOPp->top_SoC__DOT__im_io_inst)) 
                                      | (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_Flush_DH)) 
                                     | (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_Stall_MA))));
            tracep->chgSData(oldp+76,((0x7fffU & ((2U 
                                                   == 
                                                   ((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_Flush_BH)
                                                     ? 2U
                                                     : 0U))
                                                   ? 
                                                  vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___GEN_122[0U]
                                                   : 
                                                  ((1U 
                                                    == 
                                                    ((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_Flush_BH)
                                                      ? 2U
                                                      : 0U))
                                                    ? 
                                                   ((IData)(4U) 
                                                    + (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__pcReg))
                                                    : 
                                                   ((IData)(4U) 
                                                    + (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__stage_IF__DOT__pcReg)))))),15);
            tracep->chgBit(oldp+77,(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_Flush_BH));
            tracep->chgBit(oldp+78,(vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID_io_Stall));
            tracep->chgIData(oldp+79,(vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg),32);
            tracep->chgBit(oldp+80,(vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE_io_Flush));
            tracep->chgBit(oldp+81,(vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE_io_Stall));
            tracep->chgIData(oldp+82,(((0x1fU == (0x1fU 
                                                  & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                     >> 0xfU)))
                                        ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_31
                                        : ((0x1eU == 
                                            (0x1fU 
                                             & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                >> 0xfU)))
                                            ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_30
                                            : ((0x1dU 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                    >> 0xfU)))
                                                ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_29
                                                : (
                                                   (0x1cU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                        >> 0xfU)))
                                                    ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_28
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                         >> 0xfU)))
                                                     ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_27
                                                     : vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT___GEN_26)))))),32);
            tracep->chgIData(oldp+83,(((0x1fU == (0x1fU 
                                                  & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                     >> 0x14U)))
                                        ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_31
                                        : ((0x1eU == 
                                            (0x1fU 
                                             & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                >> 0x14U)))
                                            ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_30
                                            : ((0x1dU 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                    >> 0x14U)))
                                                ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_29
                                                : (
                                                   (0x1cU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                        >> 0x14U)))
                                                    ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_28
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                         >> 0x14U)))
                                                     ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_27
                                                     : vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT___GEN_58)))))),32);
            tracep->chgIData(oldp+84,(((4U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_D_ImmSel))
                                        ? ((0xffe00000U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & (vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__ig__DOT___simm_T_22 
                                                              >> 0x14U)))) 
                                               << 0x15U)) 
                                           | vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__ig__DOT___simm_T_22)
                                        : ((5U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_D_ImmSel))
                                            ? (0xfffff000U 
                                               & vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg)
                                            : ((0xffffe000U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__ig__DOT___simm_T_30) 
                                                                  >> 0xcU)))) 
                                                   << 0xdU)) 
                                               | (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__ig__DOT___simm_T_30))))),32);
            tracep->chgIData(oldp+85,(vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg),32);
            tracep->chgIData(oldp+86,(vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__immReg),32);
            tracep->chgIData(oldp+87,(vlTOPp->top_SoC__DOT__cpu__DOT__stage_MEM__DOT__InstReg),32);
            tracep->chgIData(oldp+88,(vlTOPp->top_SoC__DOT__cpu__DOT__stage_MEM__DOT__aluReg),32);
            tracep->chgSData(oldp+89,((0x7fffU & ((IData)(4U) 
                                                  + (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__stage_MEM__DOT__pcReg)))),15);
            tracep->chgSData(oldp+90,(vlTOPp->top_SoC__DOT__cpu__DOT__stage_WB__DOT__pc_plus4_Reg),15);
            tracep->chgIData(oldp+91,(vlTOPp->top_SoC__DOT__cpu__DOT__stage_WB__DOT__InstReg),32);
            tracep->chgIData(oldp+92,(vlTOPp->top_SoC__DOT__cpu__DOT__stage_WB__DOT__alu_out_Reg),32);
            tracep->chgIData(oldp+93,(vlTOPp->top_SoC__DOT__cpu__DOT__stage_WB__DOT__ld_data_Reg),32);
            tracep->chgCData(oldp+94,(((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_Flush_BH)
                                        ? 2U : 0U)),2);
            tracep->chgSData(oldp+95,((0x7fffU & vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___GEN_122[0U])),15);
            tracep->chgBit(oldp+96,(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT___io_W_RegWEn_T_5));
            tracep->chgCData(oldp+97,(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_D_ImmSel),3);
            tracep->chgCData(oldp+98,(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ASel),2);
            tracep->chgBit(oldp+99,((0x33U != (0x7fU 
                                               & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg))));
            tracep->chgBit(oldp+100,((1U & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                                            >> 0xdU))));
            tracep->chgSData(oldp+101,(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel),15);
            tracep->chgBit(oldp+102,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__bc_io_BrEq));
            tracep->chgBit(oldp+103,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__bc_io_BrLT));
            tracep->chgCData(oldp+104,(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_W_WBSel),2);
            tracep->chgBit(oldp+105,((3U == (0x7fU 
                                             & vlTOPp->top_SoC__DOT__cpu__DOT__stage_MEM__DOT__InstReg))));
            tracep->chgBit(oldp+106,((0x23U == (0x7fU 
                                                & vlTOPp->top_SoC__DOT__cpu__DOT__stage_MEM__DOT__InstReg))));
            tracep->chgCData(oldp+107,(vlTOPp->top_SoC__DOT__cpu__DOT__mReadState),2);
            tracep->chgCData(oldp+108,(vlTOPp->top_SoC__DOT__cpu__DOT__mWriteState),2);
            tracep->chgCData(oldp+109,((0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+110,((0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                 >> 0x14U))),5);
            tracep->chgIData(oldp+111,((0x1ffffffU 
                                        & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                           >> 7U))),25);
            tracep->chgIData(oldp+112,((0xffffff80U 
                                        & vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg)),32);
            tracep->chgIData(oldp+113,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1),32);
            tracep->chgIData(oldp+114,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src2),32);
            tracep->chgBit(oldp+115,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__result___05F4));
            tracep->chgSData(oldp+116,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__val16),16);
            tracep->chgBit(oldp+117,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__result___05F3));
            tracep->chgCData(oldp+118,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__val8),8);
            tracep->chgBit(oldp+119,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__result___05F2));
            tracep->chgCData(oldp+120,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__val4),4);
            tracep->chgBit(oldp+121,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__result___05F1));
            tracep->chgBit(oldp+122,(((0xf8U != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                                      & ((0xf9U != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
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
                                                                         >> 1U))))))))))))))));
            tracep->chgCData(oldp+123,((0x1fU & ((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___result_T_60) 
                                                 + (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___result_T_90)))),5);
            tracep->chgCData(oldp+124,((0x7fU & vlTOPp->top_SoC__DOT__im_io_inst)),7);
            tracep->chgCData(oldp+125,((0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg)),7);
            tracep->chgCData(oldp+126,((0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg)),7);
            tracep->chgCData(oldp+127,((7U & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+128,((0x7fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                                                 >> 0x19U))),7);
            tracep->chgCData(oldp+129,((0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+130,((0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                                                 >> 0x14U))),5);
            tracep->chgCData(oldp+131,((0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_MEM__DOT__InstReg)),7);
            tracep->chgCData(oldp+132,((0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_MEM__DOT__InstReg 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+133,((0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_WB__DOT__InstReg)),7);
            tracep->chgBit(oldp+134,(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__E_En));
            tracep->chgBit(oldp+135,(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__E_Branch_taken));
            tracep->chgCData(oldp+136,(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__EXE_funct5),5);
            tracep->chgBit(oldp+137,(((1U == (7U & 
                                              (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                                               >> 0xcU))) 
                                      | (5U == (7U 
                                                & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                                                   >> 0xcU))))));
            tracep->chgBit(oldp+138,((IData)((0x8004000U 
                                              == (0xfff07000U 
                                                  & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg)))));
            tracep->chgBit(oldp+139,(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__is_D_use_rs1));
            tracep->chgBit(oldp+140,(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__is_D_use_rs2));
            tracep->chgBit(oldp+141,(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__is_M_use_rd));
            tracep->chgBit(oldp+142,(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__is_E_use_rd));
            tracep->chgBit(oldp+143,(((((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__is_D_use_rs1) 
                                        & (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT___io_W_RegWEn_T_5)) 
                                       & ((0x1fU & 
                                           (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                            >> 0xfU)) 
                                          == (0x1fU 
                                              & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_WB__DOT__InstReg 
                                                 >> 7U)))) 
                                      & (0U != (0x1fU 
                                                & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_WB__DOT__InstReg 
                                                   >> 7U))))));
            tracep->chgBit(oldp+144,(((((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__is_D_use_rs2) 
                                        & (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT___io_W_RegWEn_T_5)) 
                                       & ((0x1fU & 
                                           (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                            >> 0x14U)) 
                                          == (0x1fU 
                                              & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_WB__DOT__InstReg 
                                                 >> 7U)))) 
                                      & (0U != (0x1fU 
                                                & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_WB__DOT__InstReg 
                                                   >> 7U))))));
            tracep->chgBit(oldp+145,(((((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__is_D_use_rs1) 
                                        & (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__is_M_use_rd)) 
                                       & ((0x1fU & 
                                           (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                            >> 0xfU)) 
                                          == (0x1fU 
                                              & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_MEM__DOT__InstReg 
                                                 >> 7U)))) 
                                      & (0U != (0x1fU 
                                                & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_MEM__DOT__InstReg 
                                                   >> 7U))))));
            tracep->chgBit(oldp+146,(((((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__is_D_use_rs2) 
                                        & (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__is_M_use_rd)) 
                                       & ((0x1fU & 
                                           (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                            >> 0x14U)) 
                                          == (0x1fU 
                                              & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_MEM__DOT__InstReg 
                                                 >> 7U)))) 
                                      & (0U != (0x1fU 
                                                & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_MEM__DOT__InstReg 
                                                   >> 7U))))));
            tracep->chgBit(oldp+147,(((((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__is_D_use_rs1) 
                                        & (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__is_E_use_rd)) 
                                       & ((0x1fU & 
                                           (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                            >> 0xfU)) 
                                          == (0x1fU 
                                              & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                                                 >> 7U)))) 
                                      & (0U != (0x1fU 
                                                & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                                                   >> 7U))))));
            tracep->chgBit(oldp+148,(((((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__is_D_use_rs2) 
                                        & (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__is_E_use_rd)) 
                                       & ((0x1fU & 
                                           (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                            >> 0x14U)) 
                                          == (0x1fU 
                                              & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                                                 >> 7U)))) 
                                      & (0U != (0x1fU 
                                                & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                                                   >> 7U))))));
            tracep->chgSData(oldp+149,((0x7fffU & ((IData)(3U) 
                                                   + (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__stage_IF__DOT__pcReg)))),15);
            tracep->chgCData(oldp+150,(vlTOPp->top_SoC__DOT__im__DOT__memory
                                       [(0x7fffU & 
                                         ((IData)(3U) 
                                          + (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__stage_IF__DOT__pcReg)))]),8);
            tracep->chgSData(oldp+151,((0x7fffU & ((IData)(2U) 
                                                   + (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__stage_IF__DOT__pcReg)))),15);
            tracep->chgCData(oldp+152,(vlTOPp->top_SoC__DOT__im__DOT__memory
                                       [(0x7fffU & 
                                         ((IData)(2U) 
                                          + (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__stage_IF__DOT__pcReg)))]),8);
            tracep->chgSData(oldp+153,((0x7fffU & ((IData)(1U) 
                                                   + (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__stage_IF__DOT__pcReg)))),15);
            tracep->chgCData(oldp+154,(vlTOPp->top_SoC__DOT__im__DOT__memory
                                       [(0x7fffU & 
                                         ((IData)(1U) 
                                          + (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__stage_IF__DOT__pcReg)))]),8);
            tracep->chgCData(oldp+155,(vlTOPp->top_SoC__DOT__im__DOT__memory
                                       [vlTOPp->top_SoC__DOT__cpu__DOT__stage_IF__DOT__pcReg]),8);
            tracep->chgSData(oldp+156,(((vlTOPp->top_SoC__DOT__im__DOT__memory
                                         [(0x7fffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__stage_IF__DOT__pcReg)))] 
                                         << 8U) | vlTOPp->top_SoC__DOT__im__DOT__memory
                                        [vlTOPp->top_SoC__DOT__cpu__DOT__stage_IF__DOT__pcReg])),16);
            tracep->chgSData(oldp+157,(((vlTOPp->top_SoC__DOT__im__DOT__memory
                                         [(0x7fffU 
                                           & ((IData)(3U) 
                                              + (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__stage_IF__DOT__pcReg)))] 
                                         << 8U) | vlTOPp->top_SoC__DOT__im__DOT__memory
                                        [(0x7fffU & 
                                          ((IData)(2U) 
                                           + (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__stage_IF__DOT__pcReg)))])),16);
            tracep->chgBit(oldp+158,(((0U != (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__readState)) 
                                      & (IData)(vlTOPp->top_SoC__DOT__datamem__DOT___GEN_16))));
            tracep->chgSData(oldp+159,(vlTOPp->top_SoC__DOT__datamem__DOT__rAddrOffset),15);
            tracep->chgIData(oldp+160,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                       [vlTOPp->top_SoC__DOT__datamem__DOT__rAddrOffset]),32);
            tracep->chgIData(oldp+161,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                       [0U]),32);
            tracep->chgIData(oldp+162,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                       [1U]),32);
            tracep->chgIData(oldp+163,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                       [2U]),32);
            tracep->chgIData(oldp+164,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                       [3U]),32);
            tracep->chgIData(oldp+165,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                       [4U]),32);
            tracep->chgIData(oldp+166,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                       [5U]),32);
            tracep->chgIData(oldp+167,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                       [6U]),32);
            tracep->chgIData(oldp+168,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                       [7U]),32);
            tracep->chgIData(oldp+169,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                       [8U]),32);
            tracep->chgIData(oldp+170,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                       [9U]),32);
            tracep->chgIData(oldp+171,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                       [0xaU]),32);
            tracep->chgIData(oldp+172,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                       [0xbU]),32);
            tracep->chgIData(oldp+173,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                       [0xcU]),32);
            tracep->chgIData(oldp+174,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                       [0xdU]),32);
            tracep->chgIData(oldp+175,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                       [0xeU]),32);
            tracep->chgIData(oldp+176,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                       [0xfU]),32);
            tracep->chgIData(oldp+177,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                       [0x10U]),32);
            tracep->chgIData(oldp+178,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                       [0x11U]),32);
            tracep->chgIData(oldp+179,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                       [0x12U]),32);
            tracep->chgIData(oldp+180,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                       [0x13U]),32);
            tracep->chgIData(oldp+181,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                       [0x14U]),32);
            tracep->chgIData(oldp+182,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                       [0x15U]),32);
            tracep->chgIData(oldp+183,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                       [0x16U]),32);
            tracep->chgIData(oldp+184,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                       [0x17U]),32);
            tracep->chgIData(oldp+185,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                       [0x18U]),32);
            tracep->chgIData(oldp+186,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                       [0x19U]),32);
            tracep->chgIData(oldp+187,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                       [0x1aU]),32);
            tracep->chgIData(oldp+188,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                       [0x1bU]),32);
            tracep->chgIData(oldp+189,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                       [0x1cU]),32);
            tracep->chgIData(oldp+190,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                       [0x1dU]),32);
            tracep->chgIData(oldp+191,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                       [0x1eU]),32);
            tracep->chgIData(oldp+192,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                       [0x1fU]),32);
            tracep->chgIData(oldp+193,((((IData)(vlTOPp->top_SoC__DOT__datamem__DOT__hi) 
                                         << 0x10U) 
                                        | (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__lo))),32);
            tracep->chgBit(oldp+194,(((0U != (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState)) 
                                      & ((1U == (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState)) 
                                         & (IData)(vlTOPp->top_SoC__DOT__datamem__DOT___T_12)))));
            tracep->chgSData(oldp+195,(vlTOPp->top_SoC__DOT__datamem__DOT__writeAddressReg),15);
            tracep->chgBit(oldp+196,(((0U != (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState)) 
                                      & ((1U != (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState)) 
                                         & ((4U == (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState)) 
                                            & (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__w_determined))))));
            tracep->chgCData(oldp+197,(vlTOPp->top_SoC__DOT__datamem__DOT__writeState),3);
            tracep->chgCData(oldp+198,(vlTOPp->top_SoC__DOT__datamem__DOT__readState),2);
            tracep->chgCData(oldp+199,(vlTOPp->top_SoC__DOT__datamem__DOT__rLatencyCounter),8);
            tracep->chgCData(oldp+200,(vlTOPp->top_SoC__DOT__datamem__DOT__wLatencyCounter),8);
            tracep->chgCData(oldp+201,(((1U & (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__data_reg_strb))
                                         ? (0xffU & vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__data_reg_data)
                                         : 0U)),8);
            tracep->chgCData(oldp+202,(((2U & (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__data_reg_strb))
                                         ? (0xffU & 
                                            (vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__data_reg_data 
                                             >> 8U))
                                         : 0U)),8);
            tracep->chgCData(oldp+203,(((4U & (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__data_reg_strb))
                                         ? (0xffU & 
                                            (vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__data_reg_data 
                                             >> 0x10U))
                                         : 0U)),8);
            tracep->chgCData(oldp+204,(((8U & (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__data_reg_strb))
                                         ? (0xffU & 
                                            (vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__data_reg_data 
                                             >> 0x18U))
                                         : 0U)),8);
            tracep->chgSData(oldp+205,(vlTOPp->top_SoC__DOT__datamem__DOT__lo),16);
            tracep->chgSData(oldp+206,(vlTOPp->top_SoC__DOT__datamem__DOT__hi),16);
            tracep->chgBit(oldp+207,(((IData)(vlTOPp->top_SoC__DOT__bus__DOT__readBuses_0__DOT__outstanding) 
                                      & (IData)(vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0_io_in_0_readData_valid))));
            tracep->chgBit(oldp+208,(((0U == (IData)(vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0__DOT__state)) 
                                      | (IData)(vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0__DOT___GEN_25))));
            tracep->chgBit(oldp+209,(vlTOPp->top_SoC__DOT__bus__DOT__readBuses_0_io_slave_0_readAddr_valid));
            tracep->chgBit(oldp+210,(((IData)(vlTOPp->top_SoC__DOT__bus__DOT__readBuses_0__DOT__outstanding) 
                                      & (2U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__mReadState)))));
            tracep->chgBit(oldp+211,(vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0_io_in_0_readData_valid));
            tracep->chgIData(oldp+212,(vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0__DOT__data_reg_data),32);
            tracep->chgBit(oldp+213,(((0U == (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__state)) 
                                      | (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT___GEN_47))));
            tracep->chgBit(oldp+214,(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0_io_slave_0_writeAddr_valid));
            tracep->chgBit(oldp+215,(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0_io_in_0_writeData_ready));
            tracep->chgBit(oldp+216,(((IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__aw_outstanding) 
                                      & (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__write_data_reg_valid))));
            tracep->chgIData(oldp+217,(((IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__aw_outstanding)
                                         ? vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__write_data_reg
                                         : 0U)),32);
            tracep->chgCData(oldp+218,(((IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__aw_outstanding)
                                         ? (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__write_data_reg_strb)
                                         : 0U)),4);
            tracep->chgBit(oldp+219,(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0_io_slave_0_writeResp_ready));
            tracep->chgBit(oldp+220,(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0_io_in_0_writeResp_valid));
            tracep->chgBit(oldp+221,(vlTOPp->top_SoC__DOT__bus__DOT__readBuses_0__DOT__read_addr_reg_valid));
            tracep->chgBit(oldp+222,(vlTOPp->top_SoC__DOT__bus__DOT__readBuses_0__DOT__outstanding));
            tracep->chgBit(oldp+223,(((IData)(vlTOPp->top_SoC__DOT__bus__DOT__readBuses_0_io_slave_0_readAddr_valid) 
                                      & ((0U == (IData)(vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0__DOT__state)) 
                                         | (IData)(vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0__DOT___GEN_25)))));
            tracep->chgCData(oldp+224,(vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0__DOT__state),2);
            tracep->chgBit(oldp+225,(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__write_addr_reg_valid));
            tracep->chgIData(oldp+226,(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__write_data_reg),32);
            tracep->chgBit(oldp+227,(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__write_data_reg_valid));
            tracep->chgCData(oldp+228,(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__write_data_reg_strb),4);
            tracep->chgBit(oldp+229,(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__w_outstanding));
            tracep->chgBit(oldp+230,(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__aw_outstanding));
            tracep->chgBit(oldp+231,(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__b_outstanding));
            tracep->chgBit(oldp+232,(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__arbiter_io_in_0_valid));
            tracep->chgCData(oldp+233,(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__state),2);
        }
        tracep->chgBit(oldp+234,(vlTOPp->clock));
        tracep->chgBit(oldp+235,(vlTOPp->reset));
        tracep->chgIData(oldp+236,(vlTOPp->io_regs_0),32);
        tracep->chgIData(oldp+237,(vlTOPp->io_regs_1),32);
        tracep->chgIData(oldp+238,(vlTOPp->io_regs_2),32);
        tracep->chgIData(oldp+239,(vlTOPp->io_regs_3),32);
        tracep->chgIData(oldp+240,(vlTOPp->io_regs_4),32);
        tracep->chgIData(oldp+241,(vlTOPp->io_regs_5),32);
        tracep->chgIData(oldp+242,(vlTOPp->io_regs_6),32);
        tracep->chgIData(oldp+243,(vlTOPp->io_regs_7),32);
        tracep->chgIData(oldp+244,(vlTOPp->io_regs_8),32);
        tracep->chgIData(oldp+245,(vlTOPp->io_regs_9),32);
        tracep->chgIData(oldp+246,(vlTOPp->io_regs_10),32);
        tracep->chgIData(oldp+247,(vlTOPp->io_regs_11),32);
        tracep->chgIData(oldp+248,(vlTOPp->io_regs_12),32);
        tracep->chgIData(oldp+249,(vlTOPp->io_regs_13),32);
        tracep->chgIData(oldp+250,(vlTOPp->io_regs_14),32);
        tracep->chgIData(oldp+251,(vlTOPp->io_regs_15),32);
        tracep->chgIData(oldp+252,(vlTOPp->io_regs_16),32);
        tracep->chgIData(oldp+253,(vlTOPp->io_regs_17),32);
        tracep->chgIData(oldp+254,(vlTOPp->io_regs_18),32);
        tracep->chgIData(oldp+255,(vlTOPp->io_regs_19),32);
        tracep->chgIData(oldp+256,(vlTOPp->io_regs_20),32);
        tracep->chgIData(oldp+257,(vlTOPp->io_regs_21),32);
        tracep->chgIData(oldp+258,(vlTOPp->io_regs_22),32);
        tracep->chgIData(oldp+259,(vlTOPp->io_regs_23),32);
        tracep->chgIData(oldp+260,(vlTOPp->io_regs_24),32);
        tracep->chgIData(oldp+261,(vlTOPp->io_regs_25),32);
        tracep->chgIData(oldp+262,(vlTOPp->io_regs_26),32);
        tracep->chgIData(oldp+263,(vlTOPp->io_regs_27),32);
        tracep->chgIData(oldp+264,(vlTOPp->io_regs_28),32);
        tracep->chgIData(oldp+265,(vlTOPp->io_regs_29),32);
        tracep->chgIData(oldp+266,(vlTOPp->io_regs_30),32);
        tracep->chgIData(oldp+267,(vlTOPp->io_regs_31),32);
        tracep->chgBit(oldp+268,(vlTOPp->io_Hcf));
        tracep->chgIData(oldp+269,(vlTOPp->io_inst),32);
        tracep->chgIData(oldp+270,(vlTOPp->io_rdata),32);
        tracep->chgIData(oldp+271,(vlTOPp->io_wdata),32);
        tracep->chgBit(oldp+272,(vlTOPp->io_Dump_Mem));
        tracep->chgBit(oldp+273,(vlTOPp->io_E_Branch_taken));
        tracep->chgBit(oldp+274,(vlTOPp->io_Flush));
        tracep->chgBit(oldp+275,(vlTOPp->io_Stall_MA));
        tracep->chgBit(oldp+276,(vlTOPp->io_Stall_DH));
        tracep->chgIData(oldp+277,(vlTOPp->io_IF_PC),32);
        tracep->chgIData(oldp+278,(vlTOPp->io_ID_PC),32);
        tracep->chgIData(oldp+279,(vlTOPp->io_EXE_PC),32);
        tracep->chgIData(oldp+280,(vlTOPp->io_MEM_PC),32);
        tracep->chgIData(oldp+281,(vlTOPp->io_WB_PC),32);
        tracep->chgIData(oldp+282,(vlTOPp->io_EXE_alu_out),32);
        tracep->chgIData(oldp+283,(vlTOPp->io_EXE_src1),32);
        tracep->chgIData(oldp+284,(vlTOPp->io_EXE_src2),32);
        tracep->chgIData(oldp+285,(vlTOPp->io_ALU_src1),32);
        tracep->chgIData(oldp+286,(vlTOPp->io_ALU_src2),32);
        tracep->chgIData(oldp+287,(vlTOPp->io_raddr),32);
        tracep->chgCData(oldp+288,(vlTOPp->io_WB_rd),5);
        tracep->chgIData(oldp+289,(vlTOPp->io_WB_wdata),32);
        tracep->chgBit(oldp+290,(vlTOPp->io_EXE_Jump));
        tracep->chgBit(oldp+291,(vlTOPp->io_EXE_Branch));
    }
}

void Vtop_SoC::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vtop_SoC__Syms* __restrict vlSymsp = static_cast<Vtop_SoC__Syms*>(userp);
    Vtop_SoC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
