// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_SoC__Syms.h"


//======================

void Vtop_SoC::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vtop_SoC::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop_SoC__Syms* __restrict vlSymsp = static_cast<Vtop_SoC__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vtop_SoC::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vtop_SoC::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vtop_SoC__Syms* __restrict vlSymsp = static_cast<Vtop_SoC__Syms*>(userp);
    Vtop_SoC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vtop_SoC::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vtop_SoC__Syms* __restrict vlSymsp = static_cast<Vtop_SoC__Syms*>(userp);
    Vtop_SoC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+269,"clock", false,-1);
        tracep->declBit(c+270,"reset", false,-1);
        tracep->declBus(c+271,"io_regs_0", false,-1, 31,0);
        tracep->declBus(c+272,"io_regs_1", false,-1, 31,0);
        tracep->declBus(c+273,"io_regs_2", false,-1, 31,0);
        tracep->declBus(c+274,"io_regs_3", false,-1, 31,0);
        tracep->declBus(c+275,"io_regs_4", false,-1, 31,0);
        tracep->declBus(c+276,"io_regs_5", false,-1, 31,0);
        tracep->declBus(c+277,"io_regs_6", false,-1, 31,0);
        tracep->declBus(c+278,"io_regs_7", false,-1, 31,0);
        tracep->declBus(c+279,"io_regs_8", false,-1, 31,0);
        tracep->declBus(c+280,"io_regs_9", false,-1, 31,0);
        tracep->declBus(c+281,"io_regs_10", false,-1, 31,0);
        tracep->declBus(c+282,"io_regs_11", false,-1, 31,0);
        tracep->declBus(c+283,"io_regs_12", false,-1, 31,0);
        tracep->declBus(c+284,"io_regs_13", false,-1, 31,0);
        tracep->declBus(c+285,"io_regs_14", false,-1, 31,0);
        tracep->declBus(c+286,"io_regs_15", false,-1, 31,0);
        tracep->declBus(c+287,"io_regs_16", false,-1, 31,0);
        tracep->declBus(c+288,"io_regs_17", false,-1, 31,0);
        tracep->declBus(c+289,"io_regs_18", false,-1, 31,0);
        tracep->declBus(c+290,"io_regs_19", false,-1, 31,0);
        tracep->declBus(c+291,"io_regs_20", false,-1, 31,0);
        tracep->declBus(c+292,"io_regs_21", false,-1, 31,0);
        tracep->declBus(c+293,"io_regs_22", false,-1, 31,0);
        tracep->declBus(c+294,"io_regs_23", false,-1, 31,0);
        tracep->declBus(c+295,"io_regs_24", false,-1, 31,0);
        tracep->declBus(c+296,"io_regs_25", false,-1, 31,0);
        tracep->declBus(c+297,"io_regs_26", false,-1, 31,0);
        tracep->declBus(c+298,"io_regs_27", false,-1, 31,0);
        tracep->declBus(c+299,"io_regs_28", false,-1, 31,0);
        tracep->declBus(c+300,"io_regs_29", false,-1, 31,0);
        tracep->declBus(c+301,"io_regs_30", false,-1, 31,0);
        tracep->declBus(c+302,"io_regs_31", false,-1, 31,0);
        tracep->declBit(c+303,"io_Hcf", false,-1);
        tracep->declBus(c+304,"io_inst", false,-1, 31,0);
        tracep->declBus(c+305,"io_rdata", false,-1, 31,0);
        tracep->declBus(c+306,"io_wdata", false,-1, 31,0);
        tracep->declBit(c+307,"io_Dump_Mem", false,-1);
        tracep->declBit(c+308,"io_E_Branch_taken", false,-1);
        tracep->declBit(c+309,"io_Flush", false,-1);
        tracep->declBit(c+310,"io_Stall_MA", false,-1);
        tracep->declBit(c+311,"io_Stall_DH", false,-1);
        tracep->declBus(c+312,"io_IF_PC", false,-1, 31,0);
        tracep->declBus(c+313,"io_ID_PC", false,-1, 31,0);
        tracep->declBus(c+314,"io_EXE_PC", false,-1, 31,0);
        tracep->declBus(c+315,"io_MEM_PC", false,-1, 31,0);
        tracep->declBus(c+316,"io_WB_PC", false,-1, 31,0);
        tracep->declBus(c+317,"io_EXE_alu_out", false,-1, 31,0);
        tracep->declBus(c+318,"io_EXE_src1", false,-1, 31,0);
        tracep->declBus(c+319,"io_EXE_src2", false,-1, 31,0);
        tracep->declBus(c+320,"io_ALU_src1", false,-1, 31,0);
        tracep->declBus(c+321,"io_ALU_src2", false,-1, 31,0);
        tracep->declBus(c+322,"io_raddr", false,-1, 31,0);
        tracep->declBus(c+323,"io_WB_rd", false,-1, 4,0);
        tracep->declBus(c+324,"io_WB_wdata", false,-1, 31,0);
        tracep->declBit(c+325,"io_EXE_Jump", false,-1);
        tracep->declBit(c+326,"io_EXE_Branch", false,-1);
        tracep->declBit(c+269,"top_SoC clock", false,-1);
        tracep->declBit(c+270,"top_SoC reset", false,-1);
        tracep->declBus(c+271,"top_SoC io_regs_0", false,-1, 31,0);
        tracep->declBus(c+272,"top_SoC io_regs_1", false,-1, 31,0);
        tracep->declBus(c+273,"top_SoC io_regs_2", false,-1, 31,0);
        tracep->declBus(c+274,"top_SoC io_regs_3", false,-1, 31,0);
        tracep->declBus(c+275,"top_SoC io_regs_4", false,-1, 31,0);
        tracep->declBus(c+276,"top_SoC io_regs_5", false,-1, 31,0);
        tracep->declBus(c+277,"top_SoC io_regs_6", false,-1, 31,0);
        tracep->declBus(c+278,"top_SoC io_regs_7", false,-1, 31,0);
        tracep->declBus(c+279,"top_SoC io_regs_8", false,-1, 31,0);
        tracep->declBus(c+280,"top_SoC io_regs_9", false,-1, 31,0);
        tracep->declBus(c+281,"top_SoC io_regs_10", false,-1, 31,0);
        tracep->declBus(c+282,"top_SoC io_regs_11", false,-1, 31,0);
        tracep->declBus(c+283,"top_SoC io_regs_12", false,-1, 31,0);
        tracep->declBus(c+284,"top_SoC io_regs_13", false,-1, 31,0);
        tracep->declBus(c+285,"top_SoC io_regs_14", false,-1, 31,0);
        tracep->declBus(c+286,"top_SoC io_regs_15", false,-1, 31,0);
        tracep->declBus(c+287,"top_SoC io_regs_16", false,-1, 31,0);
        tracep->declBus(c+288,"top_SoC io_regs_17", false,-1, 31,0);
        tracep->declBus(c+289,"top_SoC io_regs_18", false,-1, 31,0);
        tracep->declBus(c+290,"top_SoC io_regs_19", false,-1, 31,0);
        tracep->declBus(c+291,"top_SoC io_regs_20", false,-1, 31,0);
        tracep->declBus(c+292,"top_SoC io_regs_21", false,-1, 31,0);
        tracep->declBus(c+293,"top_SoC io_regs_22", false,-1, 31,0);
        tracep->declBus(c+294,"top_SoC io_regs_23", false,-1, 31,0);
        tracep->declBus(c+295,"top_SoC io_regs_24", false,-1, 31,0);
        tracep->declBus(c+296,"top_SoC io_regs_25", false,-1, 31,0);
        tracep->declBus(c+297,"top_SoC io_regs_26", false,-1, 31,0);
        tracep->declBus(c+298,"top_SoC io_regs_27", false,-1, 31,0);
        tracep->declBus(c+299,"top_SoC io_regs_28", false,-1, 31,0);
        tracep->declBus(c+300,"top_SoC io_regs_29", false,-1, 31,0);
        tracep->declBus(c+301,"top_SoC io_regs_30", false,-1, 31,0);
        tracep->declBus(c+302,"top_SoC io_regs_31", false,-1, 31,0);
        tracep->declBit(c+303,"top_SoC io_Hcf", false,-1);
        tracep->declBus(c+304,"top_SoC io_inst", false,-1, 31,0);
        tracep->declBus(c+305,"top_SoC io_rdata", false,-1, 31,0);
        tracep->declBus(c+306,"top_SoC io_wdata", false,-1, 31,0);
        tracep->declBit(c+307,"top_SoC io_Dump_Mem", false,-1);
        tracep->declBit(c+308,"top_SoC io_E_Branch_taken", false,-1);
        tracep->declBit(c+309,"top_SoC io_Flush", false,-1);
        tracep->declBit(c+310,"top_SoC io_Stall_MA", false,-1);
        tracep->declBit(c+311,"top_SoC io_Stall_DH", false,-1);
        tracep->declBus(c+312,"top_SoC io_IF_PC", false,-1, 31,0);
        tracep->declBus(c+313,"top_SoC io_ID_PC", false,-1, 31,0);
        tracep->declBus(c+314,"top_SoC io_EXE_PC", false,-1, 31,0);
        tracep->declBus(c+315,"top_SoC io_MEM_PC", false,-1, 31,0);
        tracep->declBus(c+316,"top_SoC io_WB_PC", false,-1, 31,0);
        tracep->declBus(c+317,"top_SoC io_EXE_alu_out", false,-1, 31,0);
        tracep->declBus(c+318,"top_SoC io_EXE_src1", false,-1, 31,0);
        tracep->declBus(c+319,"top_SoC io_EXE_src2", false,-1, 31,0);
        tracep->declBus(c+320,"top_SoC io_ALU_src1", false,-1, 31,0);
        tracep->declBus(c+321,"top_SoC io_ALU_src2", false,-1, 31,0);
        tracep->declBus(c+322,"top_SoC io_raddr", false,-1, 31,0);
        tracep->declBus(c+323,"top_SoC io_WB_rd", false,-1, 4,0);
        tracep->declBus(c+324,"top_SoC io_WB_wdata", false,-1, 31,0);
        tracep->declBit(c+325,"top_SoC io_EXE_Jump", false,-1);
        tracep->declBit(c+326,"top_SoC io_EXE_Branch", false,-1);
        tracep->declBit(c+269,"top_SoC cpu_clock", false,-1);
        tracep->declBit(c+270,"top_SoC cpu_reset", false,-1);
        tracep->declBus(c+1,"top_SoC cpu_io_InstMem_raddr", false,-1, 14,0);
        tracep->declBus(c+2,"top_SoC cpu_io_InstMem_rdata", false,-1, 31,0);
        tracep->declBit(c+3,"top_SoC cpu_io_DataMem_aw_ready", false,-1);
        tracep->declBit(c+4,"top_SoC cpu_io_DataMem_aw_valid", false,-1);
        tracep->declBit(c+5,"top_SoC cpu_io_DataMem_w_ready", false,-1);
        tracep->declBit(c+6,"top_SoC cpu_io_DataMem_w_valid", false,-1);
        tracep->declBus(c+7,"top_SoC cpu_io_DataMem_w_bits_data", false,-1, 31,0);
        tracep->declBit(c+8,"top_SoC cpu_io_DataMem_b_ready", false,-1);
        tracep->declBit(c+9,"top_SoC cpu_io_DataMem_b_valid", false,-1);
        tracep->declBit(c+10,"top_SoC cpu_io_DataMem_ar_ready", false,-1);
        tracep->declBit(c+11,"top_SoC cpu_io_DataMem_ar_valid", false,-1);
        tracep->declBit(c+12,"top_SoC cpu_io_DataMem_r_ready", false,-1);
        tracep->declBus(c+13,"top_SoC cpu_io_DataMem_r_bits_data", false,-1, 31,0);
        tracep->declBus(c+14,"top_SoC cpu_io_regs_1", false,-1, 31,0);
        tracep->declBus(c+15,"top_SoC cpu_io_regs_2", false,-1, 31,0);
        tracep->declBus(c+16,"top_SoC cpu_io_regs_3", false,-1, 31,0);
        tracep->declBus(c+17,"top_SoC cpu_io_regs_4", false,-1, 31,0);
        tracep->declBus(c+18,"top_SoC cpu_io_regs_5", false,-1, 31,0);
        tracep->declBus(c+19,"top_SoC cpu_io_regs_6", false,-1, 31,0);
        tracep->declBus(c+20,"top_SoC cpu_io_regs_7", false,-1, 31,0);
        tracep->declBus(c+21,"top_SoC cpu_io_regs_8", false,-1, 31,0);
        tracep->declBus(c+22,"top_SoC cpu_io_regs_9", false,-1, 31,0);
        tracep->declBus(c+23,"top_SoC cpu_io_regs_10", false,-1, 31,0);
        tracep->declBus(c+24,"top_SoC cpu_io_regs_11", false,-1, 31,0);
        tracep->declBus(c+25,"top_SoC cpu_io_regs_12", false,-1, 31,0);
        tracep->declBus(c+26,"top_SoC cpu_io_regs_13", false,-1, 31,0);
        tracep->declBus(c+27,"top_SoC cpu_io_regs_14", false,-1, 31,0);
        tracep->declBus(c+28,"top_SoC cpu_io_regs_15", false,-1, 31,0);
        tracep->declBus(c+29,"top_SoC cpu_io_regs_16", false,-1, 31,0);
        tracep->declBus(c+30,"top_SoC cpu_io_regs_17", false,-1, 31,0);
        tracep->declBus(c+31,"top_SoC cpu_io_regs_18", false,-1, 31,0);
        tracep->declBus(c+32,"top_SoC cpu_io_regs_19", false,-1, 31,0);
        tracep->declBus(c+33,"top_SoC cpu_io_regs_20", false,-1, 31,0);
        tracep->declBus(c+34,"top_SoC cpu_io_regs_21", false,-1, 31,0);
        tracep->declBus(c+35,"top_SoC cpu_io_regs_22", false,-1, 31,0);
        tracep->declBus(c+36,"top_SoC cpu_io_regs_23", false,-1, 31,0);
        tracep->declBus(c+37,"top_SoC cpu_io_regs_24", false,-1, 31,0);
        tracep->declBus(c+38,"top_SoC cpu_io_regs_25", false,-1, 31,0);
        tracep->declBus(c+39,"top_SoC cpu_io_regs_26", false,-1, 31,0);
        tracep->declBus(c+40,"top_SoC cpu_io_regs_27", false,-1, 31,0);
        tracep->declBus(c+41,"top_SoC cpu_io_regs_28", false,-1, 31,0);
        tracep->declBus(c+42,"top_SoC cpu_io_regs_29", false,-1, 31,0);
        tracep->declBus(c+43,"top_SoC cpu_io_regs_30", false,-1, 31,0);
        tracep->declBus(c+44,"top_SoC cpu_io_regs_31", false,-1, 31,0);
        tracep->declBit(c+45,"top_SoC cpu_io_Hcf", false,-1);
        tracep->declBit(c+46,"top_SoC cpu_io_E_Branch_taken", false,-1);
        tracep->declBit(c+47,"top_SoC cpu_io_Flush", false,-1);
        tracep->declBit(c+48,"top_SoC cpu_io_Stall_MA", false,-1);
        tracep->declBit(c+47,"top_SoC cpu_io_Stall_DH", false,-1);
        tracep->declBus(c+1,"top_SoC cpu_io_IF_PC", false,-1, 14,0);
        tracep->declBus(c+49,"top_SoC cpu_io_ID_PC", false,-1, 14,0);
        tracep->declBus(c+50,"top_SoC cpu_io_EXE_PC", false,-1, 14,0);
        tracep->declBus(c+51,"top_SoC cpu_io_MEM_PC", false,-1, 14,0);
        tracep->declBus(c+52,"top_SoC cpu_io_WB_PC", false,-1, 14,0);
        tracep->declBus(c+53,"top_SoC cpu_io_EXE_src1", false,-1, 31,0);
        tracep->declBus(c+54,"top_SoC cpu_io_EXE_src2", false,-1, 31,0);
        tracep->declBus(c+55,"top_SoC cpu_io_ALU_src1", false,-1, 31,0);
        tracep->declBus(c+56,"top_SoC cpu_io_ALU_src2", false,-1, 31,0);
        tracep->declBus(c+57,"top_SoC cpu_io_raddr", false,-1, 14,0);
        tracep->declBus(c+58,"top_SoC cpu_io_EXE_alu_out", false,-1, 31,0);
        tracep->declBus(c+59,"top_SoC cpu_io_WB_rd", false,-1, 4,0);
        tracep->declBus(c+60,"top_SoC cpu_io_WB_wdata", false,-1, 31,0);
        tracep->declBit(c+61,"top_SoC cpu_io_EXE_Jump", false,-1);
        tracep->declBit(c+62,"top_SoC cpu_io_EXE_Branch", false,-1);
        tracep->declBit(c+269,"top_SoC im_clock", false,-1);
        tracep->declBus(c+1,"top_SoC im_io_raddr", false,-1, 14,0);
        tracep->declBus(c+2,"top_SoC im_io_inst", false,-1, 31,0);
        tracep->declBit(c+269,"top_SoC datamem_clock", false,-1);
        tracep->declBit(c+270,"top_SoC datamem_reset", false,-1);
        tracep->declBit(c+63,"top_SoC datamem_io_slave_aw_ready", false,-1);
        tracep->declBit(c+64,"top_SoC datamem_io_slave_aw_valid", false,-1);
        tracep->declBit(c+65,"top_SoC datamem_io_slave_w_ready", false,-1);
        tracep->declBit(c+66,"top_SoC datamem_io_slave_w_valid", false,-1);
        tracep->declBus(c+67,"top_SoC datamem_io_slave_w_bits_data", false,-1, 31,0);
        tracep->declBus(c+68,"top_SoC datamem_io_slave_w_bits_strb", false,-1, 3,0);
        tracep->declBit(c+69,"top_SoC datamem_io_slave_b_ready", false,-1);
        tracep->declBit(c+70,"top_SoC datamem_io_slave_b_valid", false,-1);
        tracep->declBit(c+71,"top_SoC datamem_io_slave_ar_ready", false,-1);
        tracep->declBit(c+72,"top_SoC datamem_io_slave_ar_valid", false,-1);
        tracep->declBit(c+73,"top_SoC datamem_io_slave_r_ready", false,-1);
        tracep->declBit(c+74,"top_SoC datamem_io_slave_r_valid", false,-1);
        tracep->declBus(c+75,"top_SoC datamem_io_slave_r_bits_data", false,-1, 31,0);
        tracep->declBit(c+307,"top_SoC datamem_io_dump", false,-1);
        tracep->declBit(c+269,"top_SoC bus_clock", false,-1);
        tracep->declBit(c+270,"top_SoC bus_reset", false,-1);
        tracep->declBit(c+3,"top_SoC bus_io_masters_0_aw_ready", false,-1);
        tracep->declBit(c+4,"top_SoC bus_io_masters_0_aw_valid", false,-1);
        tracep->declBit(c+5,"top_SoC bus_io_masters_0_w_ready", false,-1);
        tracep->declBit(c+6,"top_SoC bus_io_masters_0_w_valid", false,-1);
        tracep->declBus(c+7,"top_SoC bus_io_masters_0_w_bits_data", false,-1, 31,0);
        tracep->declBit(c+8,"top_SoC bus_io_masters_0_b_ready", false,-1);
        tracep->declBit(c+9,"top_SoC bus_io_masters_0_b_valid", false,-1);
        tracep->declBit(c+10,"top_SoC bus_io_masters_0_ar_ready", false,-1);
        tracep->declBit(c+11,"top_SoC bus_io_masters_0_ar_valid", false,-1);
        tracep->declBit(c+12,"top_SoC bus_io_masters_0_r_ready", false,-1);
        tracep->declBus(c+13,"top_SoC bus_io_masters_0_r_bits_data", false,-1, 31,0);
        tracep->declBit(c+63,"top_SoC bus_io_slaves_0_aw_ready", false,-1);
        tracep->declBit(c+64,"top_SoC bus_io_slaves_0_aw_valid", false,-1);
        tracep->declBit(c+65,"top_SoC bus_io_slaves_0_w_ready", false,-1);
        tracep->declBit(c+66,"top_SoC bus_io_slaves_0_w_valid", false,-1);
        tracep->declBus(c+67,"top_SoC bus_io_slaves_0_w_bits_data", false,-1, 31,0);
        tracep->declBus(c+68,"top_SoC bus_io_slaves_0_w_bits_strb", false,-1, 3,0);
        tracep->declBit(c+69,"top_SoC bus_io_slaves_0_b_ready", false,-1);
        tracep->declBit(c+70,"top_SoC bus_io_slaves_0_b_valid", false,-1);
        tracep->declBit(c+71,"top_SoC bus_io_slaves_0_ar_ready", false,-1);
        tracep->declBit(c+72,"top_SoC bus_io_slaves_0_ar_valid", false,-1);
        tracep->declBit(c+73,"top_SoC bus_io_slaves_0_r_ready", false,-1);
        tracep->declBit(c+74,"top_SoC bus_io_slaves_0_r_valid", false,-1);
        tracep->declBus(c+75,"top_SoC bus_io_slaves_0_r_bits_data", false,-1, 31,0);
        tracep->declBit(c+269,"top_SoC cpu clock", false,-1);
        tracep->declBit(c+270,"top_SoC cpu reset", false,-1);
        tracep->declBus(c+1,"top_SoC cpu io_InstMem_raddr", false,-1, 14,0);
        tracep->declBus(c+2,"top_SoC cpu io_InstMem_rdata", false,-1, 31,0);
        tracep->declBit(c+3,"top_SoC cpu io_DataMem_aw_ready", false,-1);
        tracep->declBit(c+4,"top_SoC cpu io_DataMem_aw_valid", false,-1);
        tracep->declBit(c+5,"top_SoC cpu io_DataMem_w_ready", false,-1);
        tracep->declBit(c+6,"top_SoC cpu io_DataMem_w_valid", false,-1);
        tracep->declBus(c+7,"top_SoC cpu io_DataMem_w_bits_data", false,-1, 31,0);
        tracep->declBit(c+8,"top_SoC cpu io_DataMem_b_ready", false,-1);
        tracep->declBit(c+9,"top_SoC cpu io_DataMem_b_valid", false,-1);
        tracep->declBit(c+10,"top_SoC cpu io_DataMem_ar_ready", false,-1);
        tracep->declBit(c+11,"top_SoC cpu io_DataMem_ar_valid", false,-1);
        tracep->declBit(c+12,"top_SoC cpu io_DataMem_r_ready", false,-1);
        tracep->declBus(c+13,"top_SoC cpu io_DataMem_r_bits_data", false,-1, 31,0);
        tracep->declBus(c+14,"top_SoC cpu io_regs_1", false,-1, 31,0);
        tracep->declBus(c+15,"top_SoC cpu io_regs_2", false,-1, 31,0);
        tracep->declBus(c+16,"top_SoC cpu io_regs_3", false,-1, 31,0);
        tracep->declBus(c+17,"top_SoC cpu io_regs_4", false,-1, 31,0);
        tracep->declBus(c+18,"top_SoC cpu io_regs_5", false,-1, 31,0);
        tracep->declBus(c+19,"top_SoC cpu io_regs_6", false,-1, 31,0);
        tracep->declBus(c+20,"top_SoC cpu io_regs_7", false,-1, 31,0);
        tracep->declBus(c+21,"top_SoC cpu io_regs_8", false,-1, 31,0);
        tracep->declBus(c+22,"top_SoC cpu io_regs_9", false,-1, 31,0);
        tracep->declBus(c+23,"top_SoC cpu io_regs_10", false,-1, 31,0);
        tracep->declBus(c+24,"top_SoC cpu io_regs_11", false,-1, 31,0);
        tracep->declBus(c+25,"top_SoC cpu io_regs_12", false,-1, 31,0);
        tracep->declBus(c+26,"top_SoC cpu io_regs_13", false,-1, 31,0);
        tracep->declBus(c+27,"top_SoC cpu io_regs_14", false,-1, 31,0);
        tracep->declBus(c+28,"top_SoC cpu io_regs_15", false,-1, 31,0);
        tracep->declBus(c+29,"top_SoC cpu io_regs_16", false,-1, 31,0);
        tracep->declBus(c+30,"top_SoC cpu io_regs_17", false,-1, 31,0);
        tracep->declBus(c+31,"top_SoC cpu io_regs_18", false,-1, 31,0);
        tracep->declBus(c+32,"top_SoC cpu io_regs_19", false,-1, 31,0);
        tracep->declBus(c+33,"top_SoC cpu io_regs_20", false,-1, 31,0);
        tracep->declBus(c+34,"top_SoC cpu io_regs_21", false,-1, 31,0);
        tracep->declBus(c+35,"top_SoC cpu io_regs_22", false,-1, 31,0);
        tracep->declBus(c+36,"top_SoC cpu io_regs_23", false,-1, 31,0);
        tracep->declBus(c+37,"top_SoC cpu io_regs_24", false,-1, 31,0);
        tracep->declBus(c+38,"top_SoC cpu io_regs_25", false,-1, 31,0);
        tracep->declBus(c+39,"top_SoC cpu io_regs_26", false,-1, 31,0);
        tracep->declBus(c+40,"top_SoC cpu io_regs_27", false,-1, 31,0);
        tracep->declBus(c+41,"top_SoC cpu io_regs_28", false,-1, 31,0);
        tracep->declBus(c+42,"top_SoC cpu io_regs_29", false,-1, 31,0);
        tracep->declBus(c+43,"top_SoC cpu io_regs_30", false,-1, 31,0);
        tracep->declBus(c+44,"top_SoC cpu io_regs_31", false,-1, 31,0);
        tracep->declBit(c+45,"top_SoC cpu io_Hcf", false,-1);
        tracep->declBit(c+46,"top_SoC cpu io_E_Branch_taken", false,-1);
        tracep->declBit(c+47,"top_SoC cpu io_Flush", false,-1);
        tracep->declBit(c+48,"top_SoC cpu io_Stall_MA", false,-1);
        tracep->declBit(c+47,"top_SoC cpu io_Stall_DH", false,-1);
        tracep->declBus(c+1,"top_SoC cpu io_IF_PC", false,-1, 14,0);
        tracep->declBus(c+49,"top_SoC cpu io_ID_PC", false,-1, 14,0);
        tracep->declBus(c+50,"top_SoC cpu io_EXE_PC", false,-1, 14,0);
        tracep->declBus(c+51,"top_SoC cpu io_MEM_PC", false,-1, 14,0);
        tracep->declBus(c+52,"top_SoC cpu io_WB_PC", false,-1, 14,0);
        tracep->declBus(c+53,"top_SoC cpu io_EXE_src1", false,-1, 31,0);
        tracep->declBus(c+54,"top_SoC cpu io_EXE_src2", false,-1, 31,0);
        tracep->declBus(c+55,"top_SoC cpu io_ALU_src1", false,-1, 31,0);
        tracep->declBus(c+56,"top_SoC cpu io_ALU_src2", false,-1, 31,0);
        tracep->declBus(c+57,"top_SoC cpu io_raddr", false,-1, 14,0);
        tracep->declBus(c+58,"top_SoC cpu io_EXE_alu_out", false,-1, 31,0);
        tracep->declBus(c+59,"top_SoC cpu io_WB_rd", false,-1, 4,0);
        tracep->declBus(c+60,"top_SoC cpu io_WB_wdata", false,-1, 31,0);
        tracep->declBit(c+61,"top_SoC cpu io_EXE_Jump", false,-1);
        tracep->declBit(c+62,"top_SoC cpu io_EXE_Branch", false,-1);
        tracep->declBit(c+269,"top_SoC cpu stage_IF_clock", false,-1);
        tracep->declBit(c+270,"top_SoC cpu stage_IF_reset", false,-1);
        tracep->declBit(c+76,"top_SoC cpu stage_IF_io_Stall", false,-1);
        tracep->declBus(c+77,"top_SoC cpu stage_IF_io_next_pc_in", false,-1, 14,0);
        tracep->declBus(c+1,"top_SoC cpu stage_IF_io_pc", false,-1, 14,0);
        tracep->declBit(c+269,"top_SoC cpu stage_ID_clock", false,-1);
        tracep->declBit(c+270,"top_SoC cpu stage_ID_reset", false,-1);
        tracep->declBit(c+78,"top_SoC cpu stage_ID_io_Flush", false,-1);
        tracep->declBit(c+79,"top_SoC cpu stage_ID_io_Stall", false,-1);
        tracep->declBus(c+1,"top_SoC cpu stage_ID_io_pc_in", false,-1, 14,0);
        tracep->declBus(c+2,"top_SoC cpu stage_ID_io_inst_in", false,-1, 31,0);
        tracep->declBus(c+49,"top_SoC cpu stage_ID_io_pc", false,-1, 14,0);
        tracep->declBus(c+80,"top_SoC cpu stage_ID_io_inst", false,-1, 31,0);
        tracep->declBit(c+269,"top_SoC cpu stage_EXE_clock", false,-1);
        tracep->declBit(c+270,"top_SoC cpu stage_EXE_reset", false,-1);
        tracep->declBit(c+81,"top_SoC cpu stage_EXE_io_Flush", false,-1);
        tracep->declBit(c+82,"top_SoC cpu stage_EXE_io_Stall", false,-1);
        tracep->declBus(c+80,"top_SoC cpu stage_EXE_io_inst_in", false,-1, 31,0);
        tracep->declBus(c+49,"top_SoC cpu stage_EXE_io_pc_in", false,-1, 14,0);
        tracep->declBus(c+83,"top_SoC cpu stage_EXE_io_rs1_rdata_in", false,-1, 31,0);
        tracep->declBus(c+84,"top_SoC cpu stage_EXE_io_rs2_rdata_in", false,-1, 31,0);
        tracep->declBus(c+85,"top_SoC cpu stage_EXE_io_imm_in", false,-1, 31,0);
        tracep->declBus(c+86,"top_SoC cpu stage_EXE_io_inst", false,-1, 31,0);
        tracep->declBus(c+50,"top_SoC cpu stage_EXE_io_pc", false,-1, 14,0);
        tracep->declBus(c+53,"top_SoC cpu stage_EXE_io_rs1_rdata", false,-1, 31,0);
        tracep->declBus(c+54,"top_SoC cpu stage_EXE_io_rs2_rdata", false,-1, 31,0);
        tracep->declBus(c+87,"top_SoC cpu stage_EXE_io_imm", false,-1, 31,0);
        tracep->declBit(c+269,"top_SoC cpu stage_MEM_clock", false,-1);
        tracep->declBit(c+270,"top_SoC cpu stage_MEM_reset", false,-1);
        tracep->declBit(c+82,"top_SoC cpu stage_MEM_io_Stall", false,-1);
        tracep->declBus(c+50,"top_SoC cpu stage_MEM_io_pc_in", false,-1, 14,0);
        tracep->declBus(c+86,"top_SoC cpu stage_MEM_io_inst_in", false,-1, 31,0);
        tracep->declBus(c+58,"top_SoC cpu stage_MEM_io_alu_out_in", false,-1, 31,0);
        tracep->declBus(c+54,"top_SoC cpu stage_MEM_io_DM_wdata_in", false,-1, 31,0);
        tracep->declBus(c+51,"top_SoC cpu stage_MEM_io_pc", false,-1, 14,0);
        tracep->declBus(c+88,"top_SoC cpu stage_MEM_io_inst", false,-1, 31,0);
        tracep->declBus(c+89,"top_SoC cpu stage_MEM_io_alu_out", false,-1, 31,0);
        tracep->declBus(c+7,"top_SoC cpu stage_MEM_io_DM_wdata", false,-1, 31,0);
        tracep->declBit(c+269,"top_SoC cpu stage_WB_clock", false,-1);
        tracep->declBit(c+270,"top_SoC cpu stage_WB_reset", false,-1);
        tracep->declBit(c+45,"top_SoC cpu stage_WB_io_Stall", false,-1);
        tracep->declBus(c+90,"top_SoC cpu stage_WB_io_pc_plus4_in", false,-1, 14,0);
        tracep->declBus(c+88,"top_SoC cpu stage_WB_io_inst_in", false,-1, 31,0);
        tracep->declBus(c+89,"top_SoC cpu stage_WB_io_alu_out_in", false,-1, 31,0);
        tracep->declBus(c+13,"top_SoC cpu stage_WB_io_ld_data_in", false,-1, 31,0);
        tracep->declBus(c+91,"top_SoC cpu stage_WB_io_pc_plus4", false,-1, 14,0);
        tracep->declBus(c+92,"top_SoC cpu stage_WB_io_inst", false,-1, 31,0);
        tracep->declBus(c+93,"top_SoC cpu stage_WB_io_alu_out", false,-1, 31,0);
        tracep->declBus(c+94,"top_SoC cpu stage_WB_io_ld_data", false,-1, 31,0);
        tracep->declBus(c+95,"top_SoC cpu datapath_IF_io_PCSel", false,-1, 1,0);
        tracep->declBus(c+1,"top_SoC cpu datapath_IF_io_IF_pc_in", false,-1, 14,0);
        tracep->declBus(c+50,"top_SoC cpu datapath_IF_io_EXE_pc_in", false,-1, 14,0);
        tracep->declBus(c+96,"top_SoC cpu datapath_IF_io_EXE_target_pc_in", false,-1, 14,0);
        tracep->declBus(c+2,"top_SoC cpu datapath_IF_io_Mem_data", false,-1, 31,0);
        tracep->declBus(c+77,"top_SoC cpu datapath_IF_io_next_pc", false,-1, 14,0);
        tracep->declBus(c+1,"top_SoC cpu datapath_IF_io_Mem_Addr", false,-1, 14,0);
        tracep->declBus(c+2,"top_SoC cpu datapath_IF_io_inst", false,-1, 31,0);
        tracep->declBit(c+269,"top_SoC cpu datapath_ID_clock", false,-1);
        tracep->declBit(c+270,"top_SoC cpu datapath_ID_reset", false,-1);
        tracep->declBus(c+80,"top_SoC cpu datapath_ID_io_ID_inst_in", false,-1, 31,0);
        tracep->declBus(c+59,"top_SoC cpu datapath_ID_io_WB_index", false,-1, 4,0);
        tracep->declBus(c+60,"top_SoC cpu datapath_ID_io_WB_wdata", false,-1, 31,0);
        tracep->declBit(c+97,"top_SoC cpu datapath_ID_io_WB_RegWEn", false,-1);
        tracep->declBus(c+98,"top_SoC cpu datapath_ID_io_ImmSel", false,-1, 2,0);
        tracep->declBus(c+83,"top_SoC cpu datapath_ID_io_ID_rs1_rdata", false,-1, 31,0);
        tracep->declBus(c+84,"top_SoC cpu datapath_ID_io_ID_rs2_rdata", false,-1, 31,0);
        tracep->declBus(c+85,"top_SoC cpu datapath_ID_io_imm", false,-1, 31,0);
        tracep->declBus(c+14,"top_SoC cpu datapath_ID_io_regs_1", false,-1, 31,0);
        tracep->declBus(c+15,"top_SoC cpu datapath_ID_io_regs_2", false,-1, 31,0);
        tracep->declBus(c+16,"top_SoC cpu datapath_ID_io_regs_3", false,-1, 31,0);
        tracep->declBus(c+17,"top_SoC cpu datapath_ID_io_regs_4", false,-1, 31,0);
        tracep->declBus(c+18,"top_SoC cpu datapath_ID_io_regs_5", false,-1, 31,0);
        tracep->declBus(c+19,"top_SoC cpu datapath_ID_io_regs_6", false,-1, 31,0);
        tracep->declBus(c+20,"top_SoC cpu datapath_ID_io_regs_7", false,-1, 31,0);
        tracep->declBus(c+21,"top_SoC cpu datapath_ID_io_regs_8", false,-1, 31,0);
        tracep->declBus(c+22,"top_SoC cpu datapath_ID_io_regs_9", false,-1, 31,0);
        tracep->declBus(c+23,"top_SoC cpu datapath_ID_io_regs_10", false,-1, 31,0);
        tracep->declBus(c+24,"top_SoC cpu datapath_ID_io_regs_11", false,-1, 31,0);
        tracep->declBus(c+25,"top_SoC cpu datapath_ID_io_regs_12", false,-1, 31,0);
        tracep->declBus(c+26,"top_SoC cpu datapath_ID_io_regs_13", false,-1, 31,0);
        tracep->declBus(c+27,"top_SoC cpu datapath_ID_io_regs_14", false,-1, 31,0);
        tracep->declBus(c+28,"top_SoC cpu datapath_ID_io_regs_15", false,-1, 31,0);
        tracep->declBus(c+29,"top_SoC cpu datapath_ID_io_regs_16", false,-1, 31,0);
        tracep->declBus(c+30,"top_SoC cpu datapath_ID_io_regs_17", false,-1, 31,0);
        tracep->declBus(c+31,"top_SoC cpu datapath_ID_io_regs_18", false,-1, 31,0);
        tracep->declBus(c+32,"top_SoC cpu datapath_ID_io_regs_19", false,-1, 31,0);
        tracep->declBus(c+33,"top_SoC cpu datapath_ID_io_regs_20", false,-1, 31,0);
        tracep->declBus(c+34,"top_SoC cpu datapath_ID_io_regs_21", false,-1, 31,0);
        tracep->declBus(c+35,"top_SoC cpu datapath_ID_io_regs_22", false,-1, 31,0);
        tracep->declBus(c+36,"top_SoC cpu datapath_ID_io_regs_23", false,-1, 31,0);
        tracep->declBus(c+37,"top_SoC cpu datapath_ID_io_regs_24", false,-1, 31,0);
        tracep->declBus(c+38,"top_SoC cpu datapath_ID_io_regs_25", false,-1, 31,0);
        tracep->declBus(c+39,"top_SoC cpu datapath_ID_io_regs_26", false,-1, 31,0);
        tracep->declBus(c+40,"top_SoC cpu datapath_ID_io_regs_27", false,-1, 31,0);
        tracep->declBus(c+41,"top_SoC cpu datapath_ID_io_regs_28", false,-1, 31,0);
        tracep->declBus(c+42,"top_SoC cpu datapath_ID_io_regs_29", false,-1, 31,0);
        tracep->declBus(c+43,"top_SoC cpu datapath_ID_io_regs_30", false,-1, 31,0);
        tracep->declBus(c+44,"top_SoC cpu datapath_ID_io_regs_31", false,-1, 31,0);
        tracep->declBus(c+50,"top_SoC cpu datapath_EXE_io_EXE_pc_in", false,-1, 14,0);
        tracep->declBus(c+87,"top_SoC cpu datapath_EXE_io_EXE_imm_in", false,-1, 31,0);
        tracep->declBus(c+53,"top_SoC cpu datapath_EXE_io_EXE_rs1_rdata_in", false,-1, 31,0);
        tracep->declBus(c+54,"top_SoC cpu datapath_EXE_io_EXE_rs2_rdata_in", false,-1, 31,0);
        tracep->declBus(c+99,"top_SoC cpu datapath_EXE_io_E_ASel", false,-1, 1,0);
        tracep->declBit(c+100,"top_SoC cpu datapath_EXE_io_E_BSel", false,-1);
        tracep->declBit(c+101,"top_SoC cpu datapath_EXE_io_E_BrUn", false,-1);
        tracep->declBus(c+102,"top_SoC cpu datapath_EXE_io_E_ALUSel", false,-1, 14,0);
        tracep->declBus(c+96,"top_SoC cpu datapath_EXE_io_EXE_target_pc_out", false,-1, 14,0);
        tracep->declBus(c+58,"top_SoC cpu datapath_EXE_io_EXE_alu_out", false,-1, 31,0);
        tracep->declBus(c+54,"top_SoC cpu datapath_EXE_io_EXE_rs2_rdata_out", false,-1, 31,0);
        tracep->declBit(c+103,"top_SoC cpu datapath_EXE_io_E_BrEq", false,-1);
        tracep->declBit(c+104,"top_SoC cpu datapath_EXE_io_E_BrLT", false,-1);
        tracep->declBus(c+55,"top_SoC cpu datapath_EXE_io_alu_src1", false,-1, 31,0);
        tracep->declBus(c+56,"top_SoC cpu datapath_EXE_io_alu_src2", false,-1, 31,0);
        tracep->declBus(c+53,"top_SoC cpu datapath_EXE_io_EXE_src1", false,-1, 31,0);
        tracep->declBus(c+54,"top_SoC cpu datapath_EXE_io_EXE_src2", false,-1, 31,0);
        tracep->declBus(c+51,"top_SoC cpu datapath_MEM_io_MEM_pc_in", false,-1, 14,0);
        tracep->declBus(c+89,"top_SoC cpu datapath_MEM_io_MEM_alu_out_in", false,-1, 31,0);
        tracep->declBus(c+7,"top_SoC cpu datapath_MEM_io_MEM_DM_wdata_in", false,-1, 31,0);
        tracep->declBus(c+90,"top_SoC cpu datapath_MEM_io_MEM_pc_plus_4", false,-1, 14,0);
        tracep->declBus(c+89,"top_SoC cpu datapath_MEM_io_MEM_alu_out", false,-1, 31,0);
        tracep->declBus(c+13,"top_SoC cpu datapath_MEM_io_MEM_ld_data", false,-1, 31,0);
        tracep->declBus(c+57,"top_SoC cpu datapath_MEM_io_Mem_Addr", false,-1, 14,0);
        tracep->declBus(c+7,"top_SoC cpu datapath_MEM_io_Mem_Write_Data", false,-1, 31,0);
        tracep->declBus(c+13,"top_SoC cpu datapath_MEM_io_Mem_Data", false,-1, 31,0);
        tracep->declBus(c+91,"top_SoC cpu datapath_WB_io_WB_pc_plus4_in", false,-1, 14,0);
        tracep->declBus(c+93,"top_SoC cpu datapath_WB_io_WB_alu_out_in", false,-1, 31,0);
        tracep->declBus(c+94,"top_SoC cpu datapath_WB_io_WB_ld_data_in", false,-1, 31,0);
        tracep->declBus(c+105,"top_SoC cpu datapath_WB_io_W_WBSel", false,-1, 1,0);
        tracep->declBus(c+60,"top_SoC cpu datapath_WB_io_WB_wdata", false,-1, 31,0);
        tracep->declBit(c+106,"top_SoC cpu contorller_io_DM_Mem_R", false,-1);
        tracep->declBit(c+107,"top_SoC cpu contorller_io_DM_Mem_W", false,-1);
        tracep->declBit(c+103,"top_SoC cpu contorller_io_E_BrEq", false,-1);
        tracep->declBit(c+104,"top_SoC cpu contorller_io_E_BrLT", false,-1);
        tracep->declBit(c+46,"top_SoC cpu contorller_io_E_Branch_taken", false,-1);
        tracep->declBus(c+49,"top_SoC cpu contorller_io_ID_pc", false,-1, 14,0);
        tracep->declBus(c+96,"top_SoC cpu contorller_io_EXE_target_pc", false,-1, 14,0);
        tracep->declBit(c+47,"top_SoC cpu contorller_io_Flush_DH", false,-1);
        tracep->declBit(c+78,"top_SoC cpu contorller_io_Flush_BH", false,-1);
        tracep->declBit(c+47,"top_SoC cpu contorller_io_Stall_DH", false,-1);
        tracep->declBit(c+48,"top_SoC cpu contorller_io_Stall_MA", false,-1);
        tracep->declBus(c+2,"top_SoC cpu contorller_io_IF_Inst", false,-1, 31,0);
        tracep->declBus(c+80,"top_SoC cpu contorller_io_ID_Inst", false,-1, 31,0);
        tracep->declBus(c+86,"top_SoC cpu contorller_io_EXE_Inst", false,-1, 31,0);
        tracep->declBus(c+88,"top_SoC cpu contorller_io_MEM_Inst", false,-1, 31,0);
        tracep->declBus(c+92,"top_SoC cpu contorller_io_WB_Inst", false,-1, 31,0);
        tracep->declBus(c+95,"top_SoC cpu contorller_io_PCSel", false,-1, 1,0);
        tracep->declBus(c+98,"top_SoC cpu contorller_io_D_ImmSel", false,-1, 2,0);
        tracep->declBit(c+97,"top_SoC cpu contorller_io_W_RegWEn", false,-1);
        tracep->declBit(c+101,"top_SoC cpu contorller_io_E_BrUn", false,-1);
        tracep->declBus(c+99,"top_SoC cpu contorller_io_E_ASel", false,-1, 1,0);
        tracep->declBit(c+100,"top_SoC cpu contorller_io_E_BSel", false,-1);
        tracep->declBus(c+102,"top_SoC cpu contorller_io_E_ALUSel", false,-1, 14,0);
        tracep->declBus(c+105,"top_SoC cpu contorller_io_W_WBSel", false,-1, 1,0);
        tracep->declBit(c+45,"top_SoC cpu contorller_io_Hcf", false,-1);
        tracep->declBus(c+108,"top_SoC cpu mReadState", false,-1, 1,0);
        tracep->declBus(c+109,"top_SoC cpu mWriteState", false,-1, 1,0);
        tracep->declBit(c+269,"top_SoC cpu stage_IF clock", false,-1);
        tracep->declBit(c+270,"top_SoC cpu stage_IF reset", false,-1);
        tracep->declBit(c+76,"top_SoC cpu stage_IF io_Stall", false,-1);
        tracep->declBus(c+77,"top_SoC cpu stage_IF io_next_pc_in", false,-1, 14,0);
        tracep->declBus(c+1,"top_SoC cpu stage_IF io_pc", false,-1, 14,0);
        tracep->declBus(c+1,"top_SoC cpu stage_IF pcReg", false,-1, 14,0);
        tracep->declBit(c+269,"top_SoC cpu stage_ID clock", false,-1);
        tracep->declBit(c+270,"top_SoC cpu stage_ID reset", false,-1);
        tracep->declBit(c+78,"top_SoC cpu stage_ID io_Flush", false,-1);
        tracep->declBit(c+79,"top_SoC cpu stage_ID io_Stall", false,-1);
        tracep->declBus(c+1,"top_SoC cpu stage_ID io_pc_in", false,-1, 14,0);
        tracep->declBus(c+2,"top_SoC cpu stage_ID io_inst_in", false,-1, 31,0);
        tracep->declBus(c+49,"top_SoC cpu stage_ID io_pc", false,-1, 14,0);
        tracep->declBus(c+80,"top_SoC cpu stage_ID io_inst", false,-1, 31,0);
        tracep->declBus(c+80,"top_SoC cpu stage_ID InstReg", false,-1, 31,0);
        tracep->declBus(c+49,"top_SoC cpu stage_ID pcReg", false,-1, 14,0);
        tracep->declBit(c+269,"top_SoC cpu stage_EXE clock", false,-1);
        tracep->declBit(c+270,"top_SoC cpu stage_EXE reset", false,-1);
        tracep->declBit(c+81,"top_SoC cpu stage_EXE io_Flush", false,-1);
        tracep->declBit(c+82,"top_SoC cpu stage_EXE io_Stall", false,-1);
        tracep->declBus(c+80,"top_SoC cpu stage_EXE io_inst_in", false,-1, 31,0);
        tracep->declBus(c+49,"top_SoC cpu stage_EXE io_pc_in", false,-1, 14,0);
        tracep->declBus(c+83,"top_SoC cpu stage_EXE io_rs1_rdata_in", false,-1, 31,0);
        tracep->declBus(c+84,"top_SoC cpu stage_EXE io_rs2_rdata_in", false,-1, 31,0);
        tracep->declBus(c+85,"top_SoC cpu stage_EXE io_imm_in", false,-1, 31,0);
        tracep->declBus(c+86,"top_SoC cpu stage_EXE io_inst", false,-1, 31,0);
        tracep->declBus(c+50,"top_SoC cpu stage_EXE io_pc", false,-1, 14,0);
        tracep->declBus(c+53,"top_SoC cpu stage_EXE io_rs1_rdata", false,-1, 31,0);
        tracep->declBus(c+54,"top_SoC cpu stage_EXE io_rs2_rdata", false,-1, 31,0);
        tracep->declBus(c+87,"top_SoC cpu stage_EXE io_imm", false,-1, 31,0);
        tracep->declBus(c+50,"top_SoC cpu stage_EXE pcReg", false,-1, 14,0);
        tracep->declBus(c+86,"top_SoC cpu stage_EXE InstReg", false,-1, 31,0);
        tracep->declBus(c+87,"top_SoC cpu stage_EXE immReg", false,-1, 31,0);
        tracep->declBus(c+53,"top_SoC cpu stage_EXE rs1Reg", false,-1, 31,0);
        tracep->declBus(c+54,"top_SoC cpu stage_EXE rs2Reg", false,-1, 31,0);
        tracep->declBit(c+269,"top_SoC cpu stage_MEM clock", false,-1);
        tracep->declBit(c+270,"top_SoC cpu stage_MEM reset", false,-1);
        tracep->declBit(c+82,"top_SoC cpu stage_MEM io_Stall", false,-1);
        tracep->declBus(c+50,"top_SoC cpu stage_MEM io_pc_in", false,-1, 14,0);
        tracep->declBus(c+86,"top_SoC cpu stage_MEM io_inst_in", false,-1, 31,0);
        tracep->declBus(c+58,"top_SoC cpu stage_MEM io_alu_out_in", false,-1, 31,0);
        tracep->declBus(c+54,"top_SoC cpu stage_MEM io_DM_wdata_in", false,-1, 31,0);
        tracep->declBus(c+51,"top_SoC cpu stage_MEM io_pc", false,-1, 14,0);
        tracep->declBus(c+88,"top_SoC cpu stage_MEM io_inst", false,-1, 31,0);
        tracep->declBus(c+89,"top_SoC cpu stage_MEM io_alu_out", false,-1, 31,0);
        tracep->declBus(c+7,"top_SoC cpu stage_MEM io_DM_wdata", false,-1, 31,0);
        tracep->declBus(c+88,"top_SoC cpu stage_MEM InstReg", false,-1, 31,0);
        tracep->declBus(c+51,"top_SoC cpu stage_MEM pcReg", false,-1, 14,0);
        tracep->declBus(c+89,"top_SoC cpu stage_MEM aluReg", false,-1, 31,0);
        tracep->declBus(c+7,"top_SoC cpu stage_MEM wdataReg", false,-1, 31,0);
        tracep->declBit(c+269,"top_SoC cpu stage_WB clock", false,-1);
        tracep->declBit(c+270,"top_SoC cpu stage_WB reset", false,-1);
        tracep->declBit(c+45,"top_SoC cpu stage_WB io_Stall", false,-1);
        tracep->declBus(c+90,"top_SoC cpu stage_WB io_pc_plus4_in", false,-1, 14,0);
        tracep->declBus(c+88,"top_SoC cpu stage_WB io_inst_in", false,-1, 31,0);
        tracep->declBus(c+89,"top_SoC cpu stage_WB io_alu_out_in", false,-1, 31,0);
        tracep->declBus(c+13,"top_SoC cpu stage_WB io_ld_data_in", false,-1, 31,0);
        tracep->declBus(c+91,"top_SoC cpu stage_WB io_pc_plus4", false,-1, 14,0);
        tracep->declBus(c+92,"top_SoC cpu stage_WB io_inst", false,-1, 31,0);
        tracep->declBus(c+93,"top_SoC cpu stage_WB io_alu_out", false,-1, 31,0);
        tracep->declBus(c+94,"top_SoC cpu stage_WB io_ld_data", false,-1, 31,0);
        tracep->declBus(c+91,"top_SoC cpu stage_WB pc_plus4_Reg", false,-1, 14,0);
        tracep->declBus(c+92,"top_SoC cpu stage_WB InstReg", false,-1, 31,0);
        tracep->declBus(c+93,"top_SoC cpu stage_WB alu_out_Reg", false,-1, 31,0);
        tracep->declBus(c+94,"top_SoC cpu stage_WB ld_data_Reg", false,-1, 31,0);
        tracep->declBus(c+95,"top_SoC cpu datapath_IF io_PCSel", false,-1, 1,0);
        tracep->declBus(c+1,"top_SoC cpu datapath_IF io_IF_pc_in", false,-1, 14,0);
        tracep->declBus(c+50,"top_SoC cpu datapath_IF io_EXE_pc_in", false,-1, 14,0);
        tracep->declBus(c+96,"top_SoC cpu datapath_IF io_EXE_target_pc_in", false,-1, 14,0);
        tracep->declBus(c+2,"top_SoC cpu datapath_IF io_Mem_data", false,-1, 31,0);
        tracep->declBus(c+77,"top_SoC cpu datapath_IF io_next_pc", false,-1, 14,0);
        tracep->declBus(c+1,"top_SoC cpu datapath_IF io_Mem_Addr", false,-1, 14,0);
        tracep->declBus(c+2,"top_SoC cpu datapath_IF io_inst", false,-1, 31,0);
        tracep->declBit(c+269,"top_SoC cpu datapath_ID clock", false,-1);
        tracep->declBit(c+270,"top_SoC cpu datapath_ID reset", false,-1);
        tracep->declBus(c+80,"top_SoC cpu datapath_ID io_ID_inst_in", false,-1, 31,0);
        tracep->declBus(c+59,"top_SoC cpu datapath_ID io_WB_index", false,-1, 4,0);
        tracep->declBus(c+60,"top_SoC cpu datapath_ID io_WB_wdata", false,-1, 31,0);
        tracep->declBit(c+97,"top_SoC cpu datapath_ID io_WB_RegWEn", false,-1);
        tracep->declBus(c+98,"top_SoC cpu datapath_ID io_ImmSel", false,-1, 2,0);
        tracep->declBus(c+83,"top_SoC cpu datapath_ID io_ID_rs1_rdata", false,-1, 31,0);
        tracep->declBus(c+84,"top_SoC cpu datapath_ID io_ID_rs2_rdata", false,-1, 31,0);
        tracep->declBus(c+85,"top_SoC cpu datapath_ID io_imm", false,-1, 31,0);
        tracep->declBus(c+14,"top_SoC cpu datapath_ID io_regs_1", false,-1, 31,0);
        tracep->declBus(c+15,"top_SoC cpu datapath_ID io_regs_2", false,-1, 31,0);
        tracep->declBus(c+16,"top_SoC cpu datapath_ID io_regs_3", false,-1, 31,0);
        tracep->declBus(c+17,"top_SoC cpu datapath_ID io_regs_4", false,-1, 31,0);
        tracep->declBus(c+18,"top_SoC cpu datapath_ID io_regs_5", false,-1, 31,0);
        tracep->declBus(c+19,"top_SoC cpu datapath_ID io_regs_6", false,-1, 31,0);
        tracep->declBus(c+20,"top_SoC cpu datapath_ID io_regs_7", false,-1, 31,0);
        tracep->declBus(c+21,"top_SoC cpu datapath_ID io_regs_8", false,-1, 31,0);
        tracep->declBus(c+22,"top_SoC cpu datapath_ID io_regs_9", false,-1, 31,0);
        tracep->declBus(c+23,"top_SoC cpu datapath_ID io_regs_10", false,-1, 31,0);
        tracep->declBus(c+24,"top_SoC cpu datapath_ID io_regs_11", false,-1, 31,0);
        tracep->declBus(c+25,"top_SoC cpu datapath_ID io_regs_12", false,-1, 31,0);
        tracep->declBus(c+26,"top_SoC cpu datapath_ID io_regs_13", false,-1, 31,0);
        tracep->declBus(c+27,"top_SoC cpu datapath_ID io_regs_14", false,-1, 31,0);
        tracep->declBus(c+28,"top_SoC cpu datapath_ID io_regs_15", false,-1, 31,0);
        tracep->declBus(c+29,"top_SoC cpu datapath_ID io_regs_16", false,-1, 31,0);
        tracep->declBus(c+30,"top_SoC cpu datapath_ID io_regs_17", false,-1, 31,0);
        tracep->declBus(c+31,"top_SoC cpu datapath_ID io_regs_18", false,-1, 31,0);
        tracep->declBus(c+32,"top_SoC cpu datapath_ID io_regs_19", false,-1, 31,0);
        tracep->declBus(c+33,"top_SoC cpu datapath_ID io_regs_20", false,-1, 31,0);
        tracep->declBus(c+34,"top_SoC cpu datapath_ID io_regs_21", false,-1, 31,0);
        tracep->declBus(c+35,"top_SoC cpu datapath_ID io_regs_22", false,-1, 31,0);
        tracep->declBus(c+36,"top_SoC cpu datapath_ID io_regs_23", false,-1, 31,0);
        tracep->declBus(c+37,"top_SoC cpu datapath_ID io_regs_24", false,-1, 31,0);
        tracep->declBus(c+38,"top_SoC cpu datapath_ID io_regs_25", false,-1, 31,0);
        tracep->declBus(c+39,"top_SoC cpu datapath_ID io_regs_26", false,-1, 31,0);
        tracep->declBus(c+40,"top_SoC cpu datapath_ID io_regs_27", false,-1, 31,0);
        tracep->declBus(c+41,"top_SoC cpu datapath_ID io_regs_28", false,-1, 31,0);
        tracep->declBus(c+42,"top_SoC cpu datapath_ID io_regs_29", false,-1, 31,0);
        tracep->declBus(c+43,"top_SoC cpu datapath_ID io_regs_30", false,-1, 31,0);
        tracep->declBus(c+44,"top_SoC cpu datapath_ID io_regs_31", false,-1, 31,0);
        tracep->declBit(c+269,"top_SoC cpu datapath_ID rf_clock", false,-1);
        tracep->declBit(c+270,"top_SoC cpu datapath_ID rf_reset", false,-1);
        tracep->declBit(c+97,"top_SoC cpu datapath_ID rf_io_wen", false,-1);
        tracep->declBus(c+59,"top_SoC cpu datapath_ID rf_io_waddr", false,-1, 4,0);
        tracep->declBus(c+60,"top_SoC cpu datapath_ID rf_io_wdata", false,-1, 31,0);
        tracep->declBus(c+110,"top_SoC cpu datapath_ID rf_io_raddr_0", false,-1, 4,0);
        tracep->declBus(c+111,"top_SoC cpu datapath_ID rf_io_raddr_1", false,-1, 4,0);
        tracep->declBus(c+83,"top_SoC cpu datapath_ID rf_io_rdata_0", false,-1, 31,0);
        tracep->declBus(c+84,"top_SoC cpu datapath_ID rf_io_rdata_1", false,-1, 31,0);
        tracep->declBus(c+14,"top_SoC cpu datapath_ID rf_io_regs_1", false,-1, 31,0);
        tracep->declBus(c+15,"top_SoC cpu datapath_ID rf_io_regs_2", false,-1, 31,0);
        tracep->declBus(c+16,"top_SoC cpu datapath_ID rf_io_regs_3", false,-1, 31,0);
        tracep->declBus(c+17,"top_SoC cpu datapath_ID rf_io_regs_4", false,-1, 31,0);
        tracep->declBus(c+18,"top_SoC cpu datapath_ID rf_io_regs_5", false,-1, 31,0);
        tracep->declBus(c+19,"top_SoC cpu datapath_ID rf_io_regs_6", false,-1, 31,0);
        tracep->declBus(c+20,"top_SoC cpu datapath_ID rf_io_regs_7", false,-1, 31,0);
        tracep->declBus(c+21,"top_SoC cpu datapath_ID rf_io_regs_8", false,-1, 31,0);
        tracep->declBus(c+22,"top_SoC cpu datapath_ID rf_io_regs_9", false,-1, 31,0);
        tracep->declBus(c+23,"top_SoC cpu datapath_ID rf_io_regs_10", false,-1, 31,0);
        tracep->declBus(c+24,"top_SoC cpu datapath_ID rf_io_regs_11", false,-1, 31,0);
        tracep->declBus(c+25,"top_SoC cpu datapath_ID rf_io_regs_12", false,-1, 31,0);
        tracep->declBus(c+26,"top_SoC cpu datapath_ID rf_io_regs_13", false,-1, 31,0);
        tracep->declBus(c+27,"top_SoC cpu datapath_ID rf_io_regs_14", false,-1, 31,0);
        tracep->declBus(c+28,"top_SoC cpu datapath_ID rf_io_regs_15", false,-1, 31,0);
        tracep->declBus(c+29,"top_SoC cpu datapath_ID rf_io_regs_16", false,-1, 31,0);
        tracep->declBus(c+30,"top_SoC cpu datapath_ID rf_io_regs_17", false,-1, 31,0);
        tracep->declBus(c+31,"top_SoC cpu datapath_ID rf_io_regs_18", false,-1, 31,0);
        tracep->declBus(c+32,"top_SoC cpu datapath_ID rf_io_regs_19", false,-1, 31,0);
        tracep->declBus(c+33,"top_SoC cpu datapath_ID rf_io_regs_20", false,-1, 31,0);
        tracep->declBus(c+34,"top_SoC cpu datapath_ID rf_io_regs_21", false,-1, 31,0);
        tracep->declBus(c+35,"top_SoC cpu datapath_ID rf_io_regs_22", false,-1, 31,0);
        tracep->declBus(c+36,"top_SoC cpu datapath_ID rf_io_regs_23", false,-1, 31,0);
        tracep->declBus(c+37,"top_SoC cpu datapath_ID rf_io_regs_24", false,-1, 31,0);
        tracep->declBus(c+38,"top_SoC cpu datapath_ID rf_io_regs_25", false,-1, 31,0);
        tracep->declBus(c+39,"top_SoC cpu datapath_ID rf_io_regs_26", false,-1, 31,0);
        tracep->declBus(c+40,"top_SoC cpu datapath_ID rf_io_regs_27", false,-1, 31,0);
        tracep->declBus(c+41,"top_SoC cpu datapath_ID rf_io_regs_28", false,-1, 31,0);
        tracep->declBus(c+42,"top_SoC cpu datapath_ID rf_io_regs_29", false,-1, 31,0);
        tracep->declBus(c+43,"top_SoC cpu datapath_ID rf_io_regs_30", false,-1, 31,0);
        tracep->declBus(c+44,"top_SoC cpu datapath_ID rf_io_regs_31", false,-1, 31,0);
        tracep->declBus(c+112,"top_SoC cpu datapath_ID ig_io_inst_31_7", false,-1, 24,0);
        tracep->declBus(c+98,"top_SoC cpu datapath_ID ig_io_ImmSel", false,-1, 2,0);
        tracep->declBus(c+85,"top_SoC cpu datapath_ID ig_io_imm", false,-1, 31,0);
        tracep->declBit(c+269,"top_SoC cpu datapath_ID rf clock", false,-1);
        tracep->declBit(c+270,"top_SoC cpu datapath_ID rf reset", false,-1);
        tracep->declBit(c+97,"top_SoC cpu datapath_ID rf io_wen", false,-1);
        tracep->declBus(c+59,"top_SoC cpu datapath_ID rf io_waddr", false,-1, 4,0);
        tracep->declBus(c+60,"top_SoC cpu datapath_ID rf io_wdata", false,-1, 31,0);
        tracep->declBus(c+110,"top_SoC cpu datapath_ID rf io_raddr_0", false,-1, 4,0);
        tracep->declBus(c+111,"top_SoC cpu datapath_ID rf io_raddr_1", false,-1, 4,0);
        tracep->declBus(c+83,"top_SoC cpu datapath_ID rf io_rdata_0", false,-1, 31,0);
        tracep->declBus(c+84,"top_SoC cpu datapath_ID rf io_rdata_1", false,-1, 31,0);
        tracep->declBus(c+14,"top_SoC cpu datapath_ID rf io_regs_1", false,-1, 31,0);
        tracep->declBus(c+15,"top_SoC cpu datapath_ID rf io_regs_2", false,-1, 31,0);
        tracep->declBus(c+16,"top_SoC cpu datapath_ID rf io_regs_3", false,-1, 31,0);
        tracep->declBus(c+17,"top_SoC cpu datapath_ID rf io_regs_4", false,-1, 31,0);
        tracep->declBus(c+18,"top_SoC cpu datapath_ID rf io_regs_5", false,-1, 31,0);
        tracep->declBus(c+19,"top_SoC cpu datapath_ID rf io_regs_6", false,-1, 31,0);
        tracep->declBus(c+20,"top_SoC cpu datapath_ID rf io_regs_7", false,-1, 31,0);
        tracep->declBus(c+21,"top_SoC cpu datapath_ID rf io_regs_8", false,-1, 31,0);
        tracep->declBus(c+22,"top_SoC cpu datapath_ID rf io_regs_9", false,-1, 31,0);
        tracep->declBus(c+23,"top_SoC cpu datapath_ID rf io_regs_10", false,-1, 31,0);
        tracep->declBus(c+24,"top_SoC cpu datapath_ID rf io_regs_11", false,-1, 31,0);
        tracep->declBus(c+25,"top_SoC cpu datapath_ID rf io_regs_12", false,-1, 31,0);
        tracep->declBus(c+26,"top_SoC cpu datapath_ID rf io_regs_13", false,-1, 31,0);
        tracep->declBus(c+27,"top_SoC cpu datapath_ID rf io_regs_14", false,-1, 31,0);
        tracep->declBus(c+28,"top_SoC cpu datapath_ID rf io_regs_15", false,-1, 31,0);
        tracep->declBus(c+29,"top_SoC cpu datapath_ID rf io_regs_16", false,-1, 31,0);
        tracep->declBus(c+30,"top_SoC cpu datapath_ID rf io_regs_17", false,-1, 31,0);
        tracep->declBus(c+31,"top_SoC cpu datapath_ID rf io_regs_18", false,-1, 31,0);
        tracep->declBus(c+32,"top_SoC cpu datapath_ID rf io_regs_19", false,-1, 31,0);
        tracep->declBus(c+33,"top_SoC cpu datapath_ID rf io_regs_20", false,-1, 31,0);
        tracep->declBus(c+34,"top_SoC cpu datapath_ID rf io_regs_21", false,-1, 31,0);
        tracep->declBus(c+35,"top_SoC cpu datapath_ID rf io_regs_22", false,-1, 31,0);
        tracep->declBus(c+36,"top_SoC cpu datapath_ID rf io_regs_23", false,-1, 31,0);
        tracep->declBus(c+37,"top_SoC cpu datapath_ID rf io_regs_24", false,-1, 31,0);
        tracep->declBus(c+38,"top_SoC cpu datapath_ID rf io_regs_25", false,-1, 31,0);
        tracep->declBus(c+39,"top_SoC cpu datapath_ID rf io_regs_26", false,-1, 31,0);
        tracep->declBus(c+40,"top_SoC cpu datapath_ID rf io_regs_27", false,-1, 31,0);
        tracep->declBus(c+41,"top_SoC cpu datapath_ID rf io_regs_28", false,-1, 31,0);
        tracep->declBus(c+42,"top_SoC cpu datapath_ID rf io_regs_29", false,-1, 31,0);
        tracep->declBus(c+43,"top_SoC cpu datapath_ID rf io_regs_30", false,-1, 31,0);
        tracep->declBus(c+44,"top_SoC cpu datapath_ID rf io_regs_31", false,-1, 31,0);
        tracep->declBus(c+14,"top_SoC cpu datapath_ID rf regs_1", false,-1, 31,0);
        tracep->declBus(c+15,"top_SoC cpu datapath_ID rf regs_2", false,-1, 31,0);
        tracep->declBus(c+16,"top_SoC cpu datapath_ID rf regs_3", false,-1, 31,0);
        tracep->declBus(c+17,"top_SoC cpu datapath_ID rf regs_4", false,-1, 31,0);
        tracep->declBus(c+18,"top_SoC cpu datapath_ID rf regs_5", false,-1, 31,0);
        tracep->declBus(c+19,"top_SoC cpu datapath_ID rf regs_6", false,-1, 31,0);
        tracep->declBus(c+20,"top_SoC cpu datapath_ID rf regs_7", false,-1, 31,0);
        tracep->declBus(c+21,"top_SoC cpu datapath_ID rf regs_8", false,-1, 31,0);
        tracep->declBus(c+22,"top_SoC cpu datapath_ID rf regs_9", false,-1, 31,0);
        tracep->declBus(c+23,"top_SoC cpu datapath_ID rf regs_10", false,-1, 31,0);
        tracep->declBus(c+24,"top_SoC cpu datapath_ID rf regs_11", false,-1, 31,0);
        tracep->declBus(c+25,"top_SoC cpu datapath_ID rf regs_12", false,-1, 31,0);
        tracep->declBus(c+26,"top_SoC cpu datapath_ID rf regs_13", false,-1, 31,0);
        tracep->declBus(c+27,"top_SoC cpu datapath_ID rf regs_14", false,-1, 31,0);
        tracep->declBus(c+28,"top_SoC cpu datapath_ID rf regs_15", false,-1, 31,0);
        tracep->declBus(c+29,"top_SoC cpu datapath_ID rf regs_16", false,-1, 31,0);
        tracep->declBus(c+30,"top_SoC cpu datapath_ID rf regs_17", false,-1, 31,0);
        tracep->declBus(c+31,"top_SoC cpu datapath_ID rf regs_18", false,-1, 31,0);
        tracep->declBus(c+32,"top_SoC cpu datapath_ID rf regs_19", false,-1, 31,0);
        tracep->declBus(c+33,"top_SoC cpu datapath_ID rf regs_20", false,-1, 31,0);
        tracep->declBus(c+34,"top_SoC cpu datapath_ID rf regs_21", false,-1, 31,0);
        tracep->declBus(c+35,"top_SoC cpu datapath_ID rf regs_22", false,-1, 31,0);
        tracep->declBus(c+36,"top_SoC cpu datapath_ID rf regs_23", false,-1, 31,0);
        tracep->declBus(c+37,"top_SoC cpu datapath_ID rf regs_24", false,-1, 31,0);
        tracep->declBus(c+38,"top_SoC cpu datapath_ID rf regs_25", false,-1, 31,0);
        tracep->declBus(c+39,"top_SoC cpu datapath_ID rf regs_26", false,-1, 31,0);
        tracep->declBus(c+40,"top_SoC cpu datapath_ID rf regs_27", false,-1, 31,0);
        tracep->declBus(c+41,"top_SoC cpu datapath_ID rf regs_28", false,-1, 31,0);
        tracep->declBus(c+42,"top_SoC cpu datapath_ID rf regs_29", false,-1, 31,0);
        tracep->declBus(c+43,"top_SoC cpu datapath_ID rf regs_30", false,-1, 31,0);
        tracep->declBus(c+44,"top_SoC cpu datapath_ID rf regs_31", false,-1, 31,0);
        tracep->declBus(c+112,"top_SoC cpu datapath_ID ig io_inst_31_7", false,-1, 24,0);
        tracep->declBus(c+98,"top_SoC cpu datapath_ID ig io_ImmSel", false,-1, 2,0);
        tracep->declBus(c+85,"top_SoC cpu datapath_ID ig io_imm", false,-1, 31,0);
        tracep->declBus(c+113,"top_SoC cpu datapath_ID ig inst_shift", false,-1, 31,0);
        tracep->declBus(c+50,"top_SoC cpu datapath_EXE io_EXE_pc_in", false,-1, 14,0);
        tracep->declBus(c+87,"top_SoC cpu datapath_EXE io_EXE_imm_in", false,-1, 31,0);
        tracep->declBus(c+53,"top_SoC cpu datapath_EXE io_EXE_rs1_rdata_in", false,-1, 31,0);
        tracep->declBus(c+54,"top_SoC cpu datapath_EXE io_EXE_rs2_rdata_in", false,-1, 31,0);
        tracep->declBus(c+99,"top_SoC cpu datapath_EXE io_E_ASel", false,-1, 1,0);
        tracep->declBit(c+100,"top_SoC cpu datapath_EXE io_E_BSel", false,-1);
        tracep->declBit(c+101,"top_SoC cpu datapath_EXE io_E_BrUn", false,-1);
        tracep->declBus(c+102,"top_SoC cpu datapath_EXE io_E_ALUSel", false,-1, 14,0);
        tracep->declBus(c+96,"top_SoC cpu datapath_EXE io_EXE_target_pc_out", false,-1, 14,0);
        tracep->declBus(c+58,"top_SoC cpu datapath_EXE io_EXE_alu_out", false,-1, 31,0);
        tracep->declBus(c+54,"top_SoC cpu datapath_EXE io_EXE_rs2_rdata_out", false,-1, 31,0);
        tracep->declBit(c+103,"top_SoC cpu datapath_EXE io_E_BrEq", false,-1);
        tracep->declBit(c+104,"top_SoC cpu datapath_EXE io_E_BrLT", false,-1);
        tracep->declBus(c+55,"top_SoC cpu datapath_EXE io_alu_src1", false,-1, 31,0);
        tracep->declBus(c+56,"top_SoC cpu datapath_EXE io_alu_src2", false,-1, 31,0);
        tracep->declBus(c+53,"top_SoC cpu datapath_EXE io_EXE_src1", false,-1, 31,0);
        tracep->declBus(c+54,"top_SoC cpu datapath_EXE io_EXE_src2", false,-1, 31,0);
        tracep->declBit(c+101,"top_SoC cpu datapath_EXE bc_io_BrUn", false,-1);
        tracep->declBus(c+53,"top_SoC cpu datapath_EXE bc_io_src1", false,-1, 31,0);
        tracep->declBus(c+54,"top_SoC cpu datapath_EXE bc_io_src2", false,-1, 31,0);
        tracep->declBit(c+103,"top_SoC cpu datapath_EXE bc_io_BrEq", false,-1);
        tracep->declBit(c+104,"top_SoC cpu datapath_EXE bc_io_BrLT", false,-1);
        tracep->declBus(c+114,"top_SoC cpu datapath_EXE alu_io_src1", false,-1, 31,0);
        tracep->declBus(c+115,"top_SoC cpu datapath_EXE alu_io_src2", false,-1, 31,0);
        tracep->declBus(c+102,"top_SoC cpu datapath_EXE alu_io_ALUSel", false,-1, 14,0);
        tracep->declBus(c+58,"top_SoC cpu datapath_EXE alu_io_out", false,-1, 31,0);
        tracep->declBit(c+101,"top_SoC cpu datapath_EXE bc io_BrUn", false,-1);
        tracep->declBus(c+53,"top_SoC cpu datapath_EXE bc io_src1", false,-1, 31,0);
        tracep->declBus(c+54,"top_SoC cpu datapath_EXE bc io_src2", false,-1, 31,0);
        tracep->declBit(c+103,"top_SoC cpu datapath_EXE bc io_BrEq", false,-1);
        tracep->declBit(c+104,"top_SoC cpu datapath_EXE bc io_BrLT", false,-1);
        tracep->declBus(c+114,"top_SoC cpu datapath_EXE alu io_src1", false,-1, 31,0);
        tracep->declBus(c+115,"top_SoC cpu datapath_EXE alu io_src2", false,-1, 31,0);
        tracep->declBus(c+102,"top_SoC cpu datapath_EXE alu io_ALUSel", false,-1, 14,0);
        tracep->declBus(c+58,"top_SoC cpu datapath_EXE alu io_out", false,-1, 31,0);
        tracep->declBit(c+116,"top_SoC cpu datapath_EXE alu result__4", false,-1);
        tracep->declBus(c+117,"top_SoC cpu datapath_EXE alu val16", false,-1, 15,0);
        tracep->declBit(c+118,"top_SoC cpu datapath_EXE alu result__3", false,-1);
        tracep->declBus(c+119,"top_SoC cpu datapath_EXE alu val8", false,-1, 7,0);
        tracep->declBit(c+120,"top_SoC cpu datapath_EXE alu result__2", false,-1);
        tracep->declBus(c+121,"top_SoC cpu datapath_EXE alu val4", false,-1, 3,0);
        tracep->declBit(c+122,"top_SoC cpu datapath_EXE alu result__1", false,-1);
        tracep->declBit(c+123,"top_SoC cpu datapath_EXE alu result__0", false,-1);
        tracep->declBus(c+124,"top_SoC cpu datapath_EXE alu result_1", false,-1, 4,0);
        tracep->declBus(c+51,"top_SoC cpu datapath_MEM io_MEM_pc_in", false,-1, 14,0);
        tracep->declBus(c+89,"top_SoC cpu datapath_MEM io_MEM_alu_out_in", false,-1, 31,0);
        tracep->declBus(c+7,"top_SoC cpu datapath_MEM io_MEM_DM_wdata_in", false,-1, 31,0);
        tracep->declBus(c+90,"top_SoC cpu datapath_MEM io_MEM_pc_plus_4", false,-1, 14,0);
        tracep->declBus(c+89,"top_SoC cpu datapath_MEM io_MEM_alu_out", false,-1, 31,0);
        tracep->declBus(c+13,"top_SoC cpu datapath_MEM io_MEM_ld_data", false,-1, 31,0);
        tracep->declBus(c+57,"top_SoC cpu datapath_MEM io_Mem_Addr", false,-1, 14,0);
        tracep->declBus(c+7,"top_SoC cpu datapath_MEM io_Mem_Write_Data", false,-1, 31,0);
        tracep->declBus(c+13,"top_SoC cpu datapath_MEM io_Mem_Data", false,-1, 31,0);
        tracep->declBus(c+91,"top_SoC cpu datapath_WB io_WB_pc_plus4_in", false,-1, 14,0);
        tracep->declBus(c+93,"top_SoC cpu datapath_WB io_WB_alu_out_in", false,-1, 31,0);
        tracep->declBus(c+94,"top_SoC cpu datapath_WB io_WB_ld_data_in", false,-1, 31,0);
        tracep->declBus(c+105,"top_SoC cpu datapath_WB io_W_WBSel", false,-1, 1,0);
        tracep->declBus(c+60,"top_SoC cpu datapath_WB io_WB_wdata", false,-1, 31,0);
        tracep->declBit(c+106,"top_SoC cpu contorller io_DM_Mem_R", false,-1);
        tracep->declBit(c+107,"top_SoC cpu contorller io_DM_Mem_W", false,-1);
        tracep->declBit(c+103,"top_SoC cpu contorller io_E_BrEq", false,-1);
        tracep->declBit(c+104,"top_SoC cpu contorller io_E_BrLT", false,-1);
        tracep->declBit(c+46,"top_SoC cpu contorller io_E_Branch_taken", false,-1);
        tracep->declBus(c+49,"top_SoC cpu contorller io_ID_pc", false,-1, 14,0);
        tracep->declBus(c+96,"top_SoC cpu contorller io_EXE_target_pc", false,-1, 14,0);
        tracep->declBit(c+47,"top_SoC cpu contorller io_Flush_DH", false,-1);
        tracep->declBit(c+78,"top_SoC cpu contorller io_Flush_BH", false,-1);
        tracep->declBit(c+47,"top_SoC cpu contorller io_Stall_DH", false,-1);
        tracep->declBit(c+48,"top_SoC cpu contorller io_Stall_MA", false,-1);
        tracep->declBus(c+2,"top_SoC cpu contorller io_IF_Inst", false,-1, 31,0);
        tracep->declBus(c+80,"top_SoC cpu contorller io_ID_Inst", false,-1, 31,0);
        tracep->declBus(c+86,"top_SoC cpu contorller io_EXE_Inst", false,-1, 31,0);
        tracep->declBus(c+88,"top_SoC cpu contorller io_MEM_Inst", false,-1, 31,0);
        tracep->declBus(c+92,"top_SoC cpu contorller io_WB_Inst", false,-1, 31,0);
        tracep->declBus(c+95,"top_SoC cpu contorller io_PCSel", false,-1, 1,0);
        tracep->declBus(c+98,"top_SoC cpu contorller io_D_ImmSel", false,-1, 2,0);
        tracep->declBit(c+97,"top_SoC cpu contorller io_W_RegWEn", false,-1);
        tracep->declBit(c+101,"top_SoC cpu contorller io_E_BrUn", false,-1);
        tracep->declBus(c+99,"top_SoC cpu contorller io_E_ASel", false,-1, 1,0);
        tracep->declBit(c+100,"top_SoC cpu contorller io_E_BSel", false,-1);
        tracep->declBus(c+102,"top_SoC cpu contorller io_E_ALUSel", false,-1, 14,0);
        tracep->declBus(c+105,"top_SoC cpu contorller io_W_WBSel", false,-1, 1,0);
        tracep->declBit(c+45,"top_SoC cpu contorller io_Hcf", false,-1);
        tracep->declBus(c+125,"top_SoC cpu contorller IF_opcode", false,-1, 6,0);
        tracep->declBus(c+126,"top_SoC cpu contorller ID_opcode", false,-1, 6,0);
        tracep->declBus(c+110,"top_SoC cpu contorller ID_rs1", false,-1, 4,0);
        tracep->declBus(c+111,"top_SoC cpu contorller ID_rs2", false,-1, 4,0);
        tracep->declBus(c+127,"top_SoC cpu contorller EXE_opcode", false,-1, 6,0);
        tracep->declBus(c+128,"top_SoC cpu contorller EXE_funct3", false,-1, 2,0);
        tracep->declBus(c+129,"top_SoC cpu contorller EXE_funct7", false,-1, 6,0);
        tracep->declBus(c+130,"top_SoC cpu contorller EXE_rd", false,-1, 4,0);
        tracep->declBus(c+131,"top_SoC cpu contorller EXE_rs2", false,-1, 4,0);
        tracep->declBus(c+132,"top_SoC cpu contorller MEM_opcode", false,-1, 6,0);
        tracep->declBus(c+133,"top_SoC cpu contorller MEM_rd", false,-1, 4,0);
        tracep->declBus(c+134,"top_SoC cpu contorller WB_opcode", false,-1, 6,0);
        tracep->declBus(c+59,"top_SoC cpu contorller WB_rd", false,-1, 4,0);
        tracep->declBit(c+135,"top_SoC cpu contorller E_En", false,-1);
        tracep->declBit(c+136,"top_SoC cpu contorller E_Branch_taken", false,-1);
        tracep->declBit(c+78,"top_SoC cpu contorller Predict_Miss", false,-1);
        tracep->declBus(c+137,"top_SoC cpu contorller EXE_funct5", false,-1, 4,0);
        tracep->declBit(c+138,"top_SoC cpu contorller use_funct7", false,-1);
        tracep->declBit(c+139,"top_SoC cpu contorller zext_check", false,-1);
        tracep->declBit(c+140,"top_SoC cpu contorller is_D_use_rs1", false,-1);
        tracep->declBit(c+141,"top_SoC cpu contorller is_D_use_rs2", false,-1);
        tracep->declBit(c+142,"top_SoC cpu contorller is_M_use_rd", false,-1);
        tracep->declBit(c+143,"top_SoC cpu contorller is_E_use_rd", false,-1);
        tracep->declBit(c+144,"top_SoC cpu contorller is_D_rs1_W_rd_overlap", false,-1);
        tracep->declBit(c+145,"top_SoC cpu contorller is_D_rs2_W_rd_overlap", false,-1);
        tracep->declBit(c+146,"top_SoC cpu contorller is_D_rs1_M_rd_overlap", false,-1);
        tracep->declBit(c+147,"top_SoC cpu contorller is_D_rs2_M_rd_overlap", false,-1);
        tracep->declBit(c+148,"top_SoC cpu contorller is_D_rs1_E_rd_overlap", false,-1);
        tracep->declBit(c+149,"top_SoC cpu contorller is_D_rs2_E_rd_overlap", false,-1);
        tracep->declBit(c+269,"top_SoC im clock", false,-1);
        tracep->declBus(c+1,"top_SoC im io_raddr", false,-1, 14,0);
        tracep->declBus(c+2,"top_SoC im io_inst", false,-1, 31,0);
        tracep->declBit(c+327,"top_SoC im memory_rdata_MPORT_en", false,-1);
        tracep->declBus(c+150,"top_SoC im memory_rdata_MPORT_addr", false,-1, 14,0);
        tracep->declBus(c+151,"top_SoC im memory_rdata_MPORT_data", false,-1, 7,0);
        tracep->declBit(c+327,"top_SoC im memory_rdata_MPORT_1_en", false,-1);
        tracep->declBus(c+152,"top_SoC im memory_rdata_MPORT_1_addr", false,-1, 14,0);
        tracep->declBus(c+153,"top_SoC im memory_rdata_MPORT_1_data", false,-1, 7,0);
        tracep->declBit(c+327,"top_SoC im memory_rdata_MPORT_2_en", false,-1);
        tracep->declBus(c+154,"top_SoC im memory_rdata_MPORT_2_addr", false,-1, 14,0);
        tracep->declBus(c+155,"top_SoC im memory_rdata_MPORT_2_data", false,-1, 7,0);
        tracep->declBit(c+327,"top_SoC im memory_rdata_MPORT_3_en", false,-1);
        tracep->declBus(c+1,"top_SoC im memory_rdata_MPORT_3_addr", false,-1, 14,0);
        tracep->declBus(c+156,"top_SoC im memory_rdata_MPORT_3_data", false,-1, 7,0);
        tracep->declBus(c+157,"top_SoC im rdata_lo", false,-1, 15,0);
        tracep->declBus(c+158,"top_SoC im rdata_hi", false,-1, 15,0);
        tracep->declBit(c+269,"top_SoC im BindsTo_0_InstMem_Inst clock", false,-1);
        tracep->declBus(c+1,"top_SoC im BindsTo_0_InstMem_Inst io_raddr", false,-1, 14,0);
        tracep->declBus(c+2,"top_SoC im BindsTo_0_InstMem_Inst io_inst", false,-1, 31,0);
        tracep->declBit(c+269,"top_SoC datamem clock", false,-1);
        tracep->declBit(c+270,"top_SoC datamem reset", false,-1);
        tracep->declBit(c+63,"top_SoC datamem io_slave_aw_ready", false,-1);
        tracep->declBit(c+64,"top_SoC datamem io_slave_aw_valid", false,-1);
        tracep->declBit(c+65,"top_SoC datamem io_slave_w_ready", false,-1);
        tracep->declBit(c+66,"top_SoC datamem io_slave_w_valid", false,-1);
        tracep->declBus(c+67,"top_SoC datamem io_slave_w_bits_data", false,-1, 31,0);
        tracep->declBus(c+68,"top_SoC datamem io_slave_w_bits_strb", false,-1, 3,0);
        tracep->declBit(c+69,"top_SoC datamem io_slave_b_ready", false,-1);
        tracep->declBit(c+70,"top_SoC datamem io_slave_b_valid", false,-1);
        tracep->declBit(c+71,"top_SoC datamem io_slave_ar_ready", false,-1);
        tracep->declBit(c+72,"top_SoC datamem io_slave_ar_valid", false,-1);
        tracep->declBit(c+73,"top_SoC datamem io_slave_r_ready", false,-1);
        tracep->declBit(c+74,"top_SoC datamem io_slave_r_valid", false,-1);
        tracep->declBus(c+75,"top_SoC datamem io_slave_r_bits_data", false,-1, 31,0);
        tracep->declBit(c+307,"top_SoC datamem io_dump", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+159+i*1,"top_SoC datamem memory", true,(i+0), 31,0);}}
        tracep->declBit(c+191,"top_SoC datamem memory_io_slave_r_bits_data_MPORT_en", false,-1);
        tracep->declBus(c+192,"top_SoC datamem memory_io_slave_r_bits_data_MPORT_addr", false,-1, 4,0);
        tracep->declBus(c+193,"top_SoC datamem memory_io_slave_r_bits_data_MPORT_data", false,-1, 31,0);
        tracep->declBit(c+307,"top_SoC datamem memory_data_MPORT_en", false,-1);
        tracep->declBus(c+328,"top_SoC datamem memory_data_MPORT_addr", false,-1, 4,0);
        tracep->declBus(c+194,"top_SoC datamem memory_data_MPORT_data", false,-1, 31,0);
        tracep->declBit(c+307,"top_SoC datamem memory_data_MPORT_1_en", false,-1);
        tracep->declBus(c+329,"top_SoC datamem memory_data_MPORT_1_addr", false,-1, 4,0);
        tracep->declBus(c+195,"top_SoC datamem memory_data_MPORT_1_data", false,-1, 31,0);
        tracep->declBit(c+307,"top_SoC datamem memory_data_MPORT_2_en", false,-1);
        tracep->declBus(c+330,"top_SoC datamem memory_data_MPORT_2_addr", false,-1, 4,0);
        tracep->declBus(c+196,"top_SoC datamem memory_data_MPORT_2_data", false,-1, 31,0);
        tracep->declBit(c+307,"top_SoC datamem memory_data_MPORT_3_en", false,-1);
        tracep->declBus(c+331,"top_SoC datamem memory_data_MPORT_3_addr", false,-1, 4,0);
        tracep->declBus(c+197,"top_SoC datamem memory_data_MPORT_3_data", false,-1, 31,0);
        tracep->declBit(c+307,"top_SoC datamem memory_data_MPORT_4_en", false,-1);
        tracep->declBus(c+332,"top_SoC datamem memory_data_MPORT_4_addr", false,-1, 4,0);
        tracep->declBus(c+198,"top_SoC datamem memory_data_MPORT_4_data", false,-1, 31,0);
        tracep->declBit(c+307,"top_SoC datamem memory_data_MPORT_5_en", false,-1);
        tracep->declBus(c+333,"top_SoC datamem memory_data_MPORT_5_addr", false,-1, 4,0);
        tracep->declBus(c+199,"top_SoC datamem memory_data_MPORT_5_data", false,-1, 31,0);
        tracep->declBit(c+307,"top_SoC datamem memory_data_MPORT_6_en", false,-1);
        tracep->declBus(c+334,"top_SoC datamem memory_data_MPORT_6_addr", false,-1, 4,0);
        tracep->declBus(c+200,"top_SoC datamem memory_data_MPORT_6_data", false,-1, 31,0);
        tracep->declBit(c+307,"top_SoC datamem memory_data_MPORT_7_en", false,-1);
        tracep->declBus(c+335,"top_SoC datamem memory_data_MPORT_7_addr", false,-1, 4,0);
        tracep->declBus(c+201,"top_SoC datamem memory_data_MPORT_7_data", false,-1, 31,0);
        tracep->declBit(c+307,"top_SoC datamem memory_data_MPORT_8_en", false,-1);
        tracep->declBus(c+336,"top_SoC datamem memory_data_MPORT_8_addr", false,-1, 4,0);
        tracep->declBus(c+202,"top_SoC datamem memory_data_MPORT_8_data", false,-1, 31,0);
        tracep->declBit(c+307,"top_SoC datamem memory_data_MPORT_9_en", false,-1);
        tracep->declBus(c+337,"top_SoC datamem memory_data_MPORT_9_addr", false,-1, 4,0);
        tracep->declBus(c+203,"top_SoC datamem memory_data_MPORT_9_data", false,-1, 31,0);
        tracep->declBit(c+307,"top_SoC datamem memory_data_MPORT_10_en", false,-1);
        tracep->declBus(c+338,"top_SoC datamem memory_data_MPORT_10_addr", false,-1, 4,0);
        tracep->declBus(c+204,"top_SoC datamem memory_data_MPORT_10_data", false,-1, 31,0);
        tracep->declBit(c+307,"top_SoC datamem memory_data_MPORT_11_en", false,-1);
        tracep->declBus(c+339,"top_SoC datamem memory_data_MPORT_11_addr", false,-1, 4,0);
        tracep->declBus(c+205,"top_SoC datamem memory_data_MPORT_11_data", false,-1, 31,0);
        tracep->declBit(c+307,"top_SoC datamem memory_data_MPORT_12_en", false,-1);
        tracep->declBus(c+340,"top_SoC datamem memory_data_MPORT_12_addr", false,-1, 4,0);
        tracep->declBus(c+206,"top_SoC datamem memory_data_MPORT_12_data", false,-1, 31,0);
        tracep->declBit(c+307,"top_SoC datamem memory_data_MPORT_13_en", false,-1);
        tracep->declBus(c+341,"top_SoC datamem memory_data_MPORT_13_addr", false,-1, 4,0);
        tracep->declBus(c+207,"top_SoC datamem memory_data_MPORT_13_data", false,-1, 31,0);
        tracep->declBit(c+307,"top_SoC datamem memory_data_MPORT_14_en", false,-1);
        tracep->declBus(c+342,"top_SoC datamem memory_data_MPORT_14_addr", false,-1, 4,0);
        tracep->declBus(c+208,"top_SoC datamem memory_data_MPORT_14_data", false,-1, 31,0);
        tracep->declBit(c+307,"top_SoC datamem memory_data_MPORT_15_en", false,-1);
        tracep->declBus(c+343,"top_SoC datamem memory_data_MPORT_15_addr", false,-1, 4,0);
        tracep->declBus(c+209,"top_SoC datamem memory_data_MPORT_15_data", false,-1, 31,0);
        tracep->declBit(c+307,"top_SoC datamem memory_data_MPORT_16_en", false,-1);
        tracep->declBus(c+344,"top_SoC datamem memory_data_MPORT_16_addr", false,-1, 4,0);
        tracep->declBus(c+210,"top_SoC datamem memory_data_MPORT_16_data", false,-1, 31,0);
        tracep->declBit(c+307,"top_SoC datamem memory_data_MPORT_17_en", false,-1);
        tracep->declBus(c+345,"top_SoC datamem memory_data_MPORT_17_addr", false,-1, 4,0);
        tracep->declBus(c+211,"top_SoC datamem memory_data_MPORT_17_data", false,-1, 31,0);
        tracep->declBit(c+307,"top_SoC datamem memory_data_MPORT_18_en", false,-1);
        tracep->declBus(c+346,"top_SoC datamem memory_data_MPORT_18_addr", false,-1, 4,0);
        tracep->declBus(c+212,"top_SoC datamem memory_data_MPORT_18_data", false,-1, 31,0);
        tracep->declBit(c+307,"top_SoC datamem memory_data_MPORT_19_en", false,-1);
        tracep->declBus(c+347,"top_SoC datamem memory_data_MPORT_19_addr", false,-1, 4,0);
        tracep->declBus(c+213,"top_SoC datamem memory_data_MPORT_19_data", false,-1, 31,0);
        tracep->declBit(c+307,"top_SoC datamem memory_data_MPORT_20_en", false,-1);
        tracep->declBus(c+348,"top_SoC datamem memory_data_MPORT_20_addr", false,-1, 4,0);
        tracep->declBus(c+214,"top_SoC datamem memory_data_MPORT_20_data", false,-1, 31,0);
        tracep->declBit(c+307,"top_SoC datamem memory_data_MPORT_21_en", false,-1);
        tracep->declBus(c+349,"top_SoC datamem memory_data_MPORT_21_addr", false,-1, 4,0);
        tracep->declBus(c+215,"top_SoC datamem memory_data_MPORT_21_data", false,-1, 31,0);
        tracep->declBit(c+307,"top_SoC datamem memory_data_MPORT_22_en", false,-1);
        tracep->declBus(c+350,"top_SoC datamem memory_data_MPORT_22_addr", false,-1, 4,0);
        tracep->declBus(c+216,"top_SoC datamem memory_data_MPORT_22_data", false,-1, 31,0);
        tracep->declBit(c+307,"top_SoC datamem memory_data_MPORT_23_en", false,-1);
        tracep->declBus(c+351,"top_SoC datamem memory_data_MPORT_23_addr", false,-1, 4,0);
        tracep->declBus(c+217,"top_SoC datamem memory_data_MPORT_23_data", false,-1, 31,0);
        tracep->declBit(c+307,"top_SoC datamem memory_data_MPORT_24_en", false,-1);
        tracep->declBus(c+352,"top_SoC datamem memory_data_MPORT_24_addr", false,-1, 4,0);
        tracep->declBus(c+218,"top_SoC datamem memory_data_MPORT_24_data", false,-1, 31,0);
        tracep->declBit(c+307,"top_SoC datamem memory_data_MPORT_25_en", false,-1);
        tracep->declBus(c+353,"top_SoC datamem memory_data_MPORT_25_addr", false,-1, 4,0);
        tracep->declBus(c+219,"top_SoC datamem memory_data_MPORT_25_data", false,-1, 31,0);
        tracep->declBit(c+307,"top_SoC datamem memory_data_MPORT_26_en", false,-1);
        tracep->declBus(c+354,"top_SoC datamem memory_data_MPORT_26_addr", false,-1, 4,0);
        tracep->declBus(c+220,"top_SoC datamem memory_data_MPORT_26_data", false,-1, 31,0);
        tracep->declBit(c+307,"top_SoC datamem memory_data_MPORT_27_en", false,-1);
        tracep->declBus(c+355,"top_SoC datamem memory_data_MPORT_27_addr", false,-1, 4,0);
        tracep->declBus(c+221,"top_SoC datamem memory_data_MPORT_27_data", false,-1, 31,0);
        tracep->declBit(c+307,"top_SoC datamem memory_data_MPORT_28_en", false,-1);
        tracep->declBus(c+356,"top_SoC datamem memory_data_MPORT_28_addr", false,-1, 4,0);
        tracep->declBus(c+222,"top_SoC datamem memory_data_MPORT_28_data", false,-1, 31,0);
        tracep->declBit(c+307,"top_SoC datamem memory_data_MPORT_29_en", false,-1);
        tracep->declBus(c+357,"top_SoC datamem memory_data_MPORT_29_addr", false,-1, 4,0);
        tracep->declBus(c+223,"top_SoC datamem memory_data_MPORT_29_data", false,-1, 31,0);
        tracep->declBit(c+307,"top_SoC datamem memory_data_MPORT_30_en", false,-1);
        tracep->declBus(c+358,"top_SoC datamem memory_data_MPORT_30_addr", false,-1, 4,0);
        tracep->declBus(c+224,"top_SoC datamem memory_data_MPORT_30_data", false,-1, 31,0);
        tracep->declBit(c+307,"top_SoC datamem memory_data_MPORT_31_en", false,-1);
        tracep->declBus(c+359,"top_SoC datamem memory_data_MPORT_31_addr", false,-1, 4,0);
        tracep->declBus(c+225,"top_SoC datamem memory_data_MPORT_31_data", false,-1, 31,0);
        tracep->declBus(c+226,"top_SoC datamem memory_MPORT_data", false,-1, 31,0);
        tracep->declBus(c+328,"top_SoC datamem memory_MPORT_addr", false,-1, 4,0);
        tracep->declBit(c+327,"top_SoC datamem memory_MPORT_mask", false,-1);
        tracep->declBit(c+227,"top_SoC datamem memory_MPORT_en", false,-1);
        tracep->declBus(c+226,"top_SoC datamem memory_MPORT_1_data", false,-1, 31,0);
        tracep->declBus(c+228,"top_SoC datamem memory_MPORT_1_addr", false,-1, 4,0);
        tracep->declBit(c+327,"top_SoC datamem memory_MPORT_1_mask", false,-1);
        tracep->declBit(c+229,"top_SoC datamem memory_MPORT_1_en", false,-1);
        tracep->declBus(c+230,"top_SoC datamem rAddrOffset", false,-1, 14,0);
        tracep->declBus(c+231,"top_SoC datamem writeAddressReg", false,-1, 14,0);
        tracep->declBus(c+232,"top_SoC datamem writeState", false,-1, 2,0);
        tracep->declBus(c+233,"top_SoC datamem readState", false,-1, 1,0);
        tracep->declBus(c+234,"top_SoC datamem rLatencyCounter", false,-1, 7,0);
        tracep->declBus(c+235,"top_SoC datamem wLatencyCounter", false,-1, 7,0);
        tracep->declBus(c+236,"top_SoC datamem writeData_0", false,-1, 7,0);
        tracep->declBus(c+237,"top_SoC datamem writeData_1", false,-1, 7,0);
        tracep->declBus(c+238,"top_SoC datamem writeData_2", false,-1, 7,0);
        tracep->declBus(c+239,"top_SoC datamem writeData_3", false,-1, 7,0);
        tracep->declBus(c+240,"top_SoC datamem lo", false,-1, 15,0);
        tracep->declBus(c+241,"top_SoC datamem hi", false,-1, 15,0);
        tracep->declBus(c+360,"top_SoC datamem initvar", false,-1, 31,0);
        tracep->declBit(c+269,"top_SoC bus clock", false,-1);
        tracep->declBit(c+270,"top_SoC bus reset", false,-1);
        tracep->declBit(c+3,"top_SoC bus io_masters_0_aw_ready", false,-1);
        tracep->declBit(c+4,"top_SoC bus io_masters_0_aw_valid", false,-1);
        tracep->declBit(c+5,"top_SoC bus io_masters_0_w_ready", false,-1);
        tracep->declBit(c+6,"top_SoC bus io_masters_0_w_valid", false,-1);
        tracep->declBus(c+7,"top_SoC bus io_masters_0_w_bits_data", false,-1, 31,0);
        tracep->declBit(c+8,"top_SoC bus io_masters_0_b_ready", false,-1);
        tracep->declBit(c+9,"top_SoC bus io_masters_0_b_valid", false,-1);
        tracep->declBit(c+10,"top_SoC bus io_masters_0_ar_ready", false,-1);
        tracep->declBit(c+11,"top_SoC bus io_masters_0_ar_valid", false,-1);
        tracep->declBit(c+12,"top_SoC bus io_masters_0_r_ready", false,-1);
        tracep->declBus(c+13,"top_SoC bus io_masters_0_r_bits_data", false,-1, 31,0);
        tracep->declBit(c+63,"top_SoC bus io_slaves_0_aw_ready", false,-1);
        tracep->declBit(c+64,"top_SoC bus io_slaves_0_aw_valid", false,-1);
        tracep->declBit(c+65,"top_SoC bus io_slaves_0_w_ready", false,-1);
        tracep->declBit(c+66,"top_SoC bus io_slaves_0_w_valid", false,-1);
        tracep->declBus(c+67,"top_SoC bus io_slaves_0_w_bits_data", false,-1, 31,0);
        tracep->declBus(c+68,"top_SoC bus io_slaves_0_w_bits_strb", false,-1, 3,0);
        tracep->declBit(c+69,"top_SoC bus io_slaves_0_b_ready", false,-1);
        tracep->declBit(c+70,"top_SoC bus io_slaves_0_b_valid", false,-1);
        tracep->declBit(c+71,"top_SoC bus io_slaves_0_ar_ready", false,-1);
        tracep->declBit(c+72,"top_SoC bus io_slaves_0_ar_valid", false,-1);
        tracep->declBit(c+73,"top_SoC bus io_slaves_0_r_ready", false,-1);
        tracep->declBit(c+74,"top_SoC bus io_slaves_0_r_valid", false,-1);
        tracep->declBus(c+75,"top_SoC bus io_slaves_0_r_bits_data", false,-1, 31,0);
        tracep->declBit(c+269,"top_SoC bus readBuses_0_clock", false,-1);
        tracep->declBit(c+270,"top_SoC bus readBuses_0_reset", false,-1);
        tracep->declBit(c+10,"top_SoC bus readBuses_0_io_master_readAddr_ready", false,-1);
        tracep->declBit(c+11,"top_SoC bus readBuses_0_io_master_readAddr_valid", false,-1);
        tracep->declBit(c+12,"top_SoC bus readBuses_0_io_master_readData_ready", false,-1);
        tracep->declBit(c+242,"top_SoC bus readBuses_0_io_master_readData_valid", false,-1);
        tracep->declBus(c+13,"top_SoC bus readBuses_0_io_master_readData_bits_data", false,-1, 31,0);
        tracep->declBit(c+243,"top_SoC bus readBuses_0_io_slave_0_readAddr_ready", false,-1);
        tracep->declBit(c+244,"top_SoC bus readBuses_0_io_slave_0_readAddr_valid", false,-1);
        tracep->declBit(c+245,"top_SoC bus readBuses_0_io_slave_0_readData_ready", false,-1);
        tracep->declBit(c+246,"top_SoC bus readBuses_0_io_slave_0_readData_valid", false,-1);
        tracep->declBus(c+247,"top_SoC bus readBuses_0_io_slave_0_readData_bits_data", false,-1, 31,0);
        tracep->declBit(c+269,"top_SoC bus readMuxes_0_clock", false,-1);
        tracep->declBit(c+270,"top_SoC bus readMuxes_0_reset", false,-1);
        tracep->declBit(c+71,"top_SoC bus readMuxes_0_io_out_readAddr_ready", false,-1);
        tracep->declBit(c+72,"top_SoC bus readMuxes_0_io_out_readAddr_valid", false,-1);
        tracep->declBit(c+73,"top_SoC bus readMuxes_0_io_out_readData_ready", false,-1);
        tracep->declBit(c+74,"top_SoC bus readMuxes_0_io_out_readData_valid", false,-1);
        tracep->declBus(c+75,"top_SoC bus readMuxes_0_io_out_readData_bits_data", false,-1, 31,0);
        tracep->declBit(c+243,"top_SoC bus readMuxes_0_io_in_0_readAddr_ready", false,-1);
        tracep->declBit(c+244,"top_SoC bus readMuxes_0_io_in_0_readAddr_valid", false,-1);
        tracep->declBit(c+245,"top_SoC bus readMuxes_0_io_in_0_readData_ready", false,-1);
        tracep->declBit(c+246,"top_SoC bus readMuxes_0_io_in_0_readData_valid", false,-1);
        tracep->declBus(c+247,"top_SoC bus readMuxes_0_io_in_0_readData_bits_data", false,-1, 31,0);
        tracep->declBit(c+269,"top_SoC bus writeBuses_0_clock", false,-1);
        tracep->declBit(c+270,"top_SoC bus writeBuses_0_reset", false,-1);
        tracep->declBit(c+3,"top_SoC bus writeBuses_0_io_master_writeAddr_ready", false,-1);
        tracep->declBit(c+4,"top_SoC bus writeBuses_0_io_master_writeAddr_valid", false,-1);
        tracep->declBit(c+5,"top_SoC bus writeBuses_0_io_master_writeData_ready", false,-1);
        tracep->declBit(c+6,"top_SoC bus writeBuses_0_io_master_writeData_valid", false,-1);
        tracep->declBus(c+7,"top_SoC bus writeBuses_0_io_master_writeData_bits_data", false,-1, 31,0);
        tracep->declBit(c+8,"top_SoC bus writeBuses_0_io_master_writeResp_ready", false,-1);
        tracep->declBit(c+9,"top_SoC bus writeBuses_0_io_master_writeResp_valid", false,-1);
        tracep->declBit(c+248,"top_SoC bus writeBuses_0_io_slave_0_writeAddr_ready", false,-1);
        tracep->declBit(c+249,"top_SoC bus writeBuses_0_io_slave_0_writeAddr_valid", false,-1);
        tracep->declBit(c+250,"top_SoC bus writeBuses_0_io_slave_0_writeData_ready", false,-1);
        tracep->declBit(c+251,"top_SoC bus writeBuses_0_io_slave_0_writeData_valid", false,-1);
        tracep->declBus(c+252,"top_SoC bus writeBuses_0_io_slave_0_writeData_bits_data", false,-1, 31,0);
        tracep->declBus(c+253,"top_SoC bus writeBuses_0_io_slave_0_writeData_bits_strb", false,-1, 3,0);
        tracep->declBit(c+254,"top_SoC bus writeBuses_0_io_slave_0_writeResp_ready", false,-1);
        tracep->declBit(c+255,"top_SoC bus writeBuses_0_io_slave_0_writeResp_valid", false,-1);
        tracep->declBit(c+269,"top_SoC bus writeMuxes_0_clock", false,-1);
        tracep->declBit(c+270,"top_SoC bus writeMuxes_0_reset", false,-1);
        tracep->declBit(c+63,"top_SoC bus writeMuxes_0_io_out_writeAddr_ready", false,-1);
        tracep->declBit(c+64,"top_SoC bus writeMuxes_0_io_out_writeAddr_valid", false,-1);
        tracep->declBit(c+65,"top_SoC bus writeMuxes_0_io_out_writeData_ready", false,-1);
        tracep->declBit(c+66,"top_SoC bus writeMuxes_0_io_out_writeData_valid", false,-1);
        tracep->declBus(c+67,"top_SoC bus writeMuxes_0_io_out_writeData_bits_data", false,-1, 31,0);
        tracep->declBus(c+68,"top_SoC bus writeMuxes_0_io_out_writeData_bits_strb", false,-1, 3,0);
        tracep->declBit(c+69,"top_SoC bus writeMuxes_0_io_out_writeResp_ready", false,-1);
        tracep->declBit(c+70,"top_SoC bus writeMuxes_0_io_out_writeResp_valid", false,-1);
        tracep->declBit(c+248,"top_SoC bus writeMuxes_0_io_in_0_writeAddr_ready", false,-1);
        tracep->declBit(c+249,"top_SoC bus writeMuxes_0_io_in_0_writeAddr_valid", false,-1);
        tracep->declBit(c+250,"top_SoC bus writeMuxes_0_io_in_0_writeData_ready", false,-1);
        tracep->declBit(c+251,"top_SoC bus writeMuxes_0_io_in_0_writeData_valid", false,-1);
        tracep->declBus(c+252,"top_SoC bus writeMuxes_0_io_in_0_writeData_bits_data", false,-1, 31,0);
        tracep->declBus(c+253,"top_SoC bus writeMuxes_0_io_in_0_writeData_bits_strb", false,-1, 3,0);
        tracep->declBit(c+254,"top_SoC bus writeMuxes_0_io_in_0_writeResp_ready", false,-1);
        tracep->declBit(c+255,"top_SoC bus writeMuxes_0_io_in_0_writeResp_valid", false,-1);
        tracep->declBit(c+269,"top_SoC bus readBuses_0 clock", false,-1);
        tracep->declBit(c+270,"top_SoC bus readBuses_0 reset", false,-1);
        tracep->declBit(c+10,"top_SoC bus readBuses_0 io_master_readAddr_ready", false,-1);
        tracep->declBit(c+11,"top_SoC bus readBuses_0 io_master_readAddr_valid", false,-1);
        tracep->declBit(c+12,"top_SoC bus readBuses_0 io_master_readData_ready", false,-1);
        tracep->declBit(c+242,"top_SoC bus readBuses_0 io_master_readData_valid", false,-1);
        tracep->declBus(c+13,"top_SoC bus readBuses_0 io_master_readData_bits_data", false,-1, 31,0);
        tracep->declBit(c+243,"top_SoC bus readBuses_0 io_slave_0_readAddr_ready", false,-1);
        tracep->declBit(c+244,"top_SoC bus readBuses_0 io_slave_0_readAddr_valid", false,-1);
        tracep->declBit(c+245,"top_SoC bus readBuses_0 io_slave_0_readData_ready", false,-1);
        tracep->declBit(c+246,"top_SoC bus readBuses_0 io_slave_0_readData_valid", false,-1);
        tracep->declBus(c+247,"top_SoC bus readBuses_0 io_slave_0_readData_bits_data", false,-1, 31,0);
        tracep->declBit(c+256,"top_SoC bus readBuses_0 read_addr_reg_valid", false,-1);
        tracep->declBit(c+257,"top_SoC bus readBuses_0 outstanding", false,-1);
        tracep->declBit(c+269,"top_SoC bus readMuxes_0 clock", false,-1);
        tracep->declBit(c+270,"top_SoC bus readMuxes_0 reset", false,-1);
        tracep->declBit(c+71,"top_SoC bus readMuxes_0 io_out_readAddr_ready", false,-1);
        tracep->declBit(c+72,"top_SoC bus readMuxes_0 io_out_readAddr_valid", false,-1);
        tracep->declBit(c+73,"top_SoC bus readMuxes_0 io_out_readData_ready", false,-1);
        tracep->declBit(c+74,"top_SoC bus readMuxes_0 io_out_readData_valid", false,-1);
        tracep->declBus(c+75,"top_SoC bus readMuxes_0 io_out_readData_bits_data", false,-1, 31,0);
        tracep->declBit(c+243,"top_SoC bus readMuxes_0 io_in_0_readAddr_ready", false,-1);
        tracep->declBit(c+244,"top_SoC bus readMuxes_0 io_in_0_readAddr_valid", false,-1);
        tracep->declBit(c+245,"top_SoC bus readMuxes_0 io_in_0_readData_ready", false,-1);
        tracep->declBit(c+246,"top_SoC bus readMuxes_0 io_in_0_readData_valid", false,-1);
        tracep->declBus(c+247,"top_SoC bus readMuxes_0 io_in_0_readData_bits_data", false,-1, 31,0);
        tracep->declBit(c+258,"top_SoC bus readMuxes_0 arbiter_io_in_0_valid", false,-1);
        tracep->declBit(c+258,"top_SoC bus readMuxes_0 arbiter_io_out_valid", false,-1);
        tracep->declBus(c+259,"top_SoC bus readMuxes_0 state", false,-1, 1,0);
        tracep->declBit(c+72,"top_SoC bus readMuxes_0 ar_determined", false,-1);
        tracep->declBus(c+247,"top_SoC bus readMuxes_0 data_reg_data", false,-1, 31,0);
        tracep->declBit(c+243,"top_SoC bus readMuxes_0 mask_0", false,-1);
        tracep->declBit(c+258,"top_SoC bus readMuxes_0 arbiter io_in_0_valid", false,-1);
        tracep->declBit(c+258,"top_SoC bus readMuxes_0 arbiter io_out_valid", false,-1);
        tracep->declBit(c+269,"top_SoC bus writeBuses_0 clock", false,-1);
        tracep->declBit(c+270,"top_SoC bus writeBuses_0 reset", false,-1);
        tracep->declBit(c+3,"top_SoC bus writeBuses_0 io_master_writeAddr_ready", false,-1);
        tracep->declBit(c+4,"top_SoC bus writeBuses_0 io_master_writeAddr_valid", false,-1);
        tracep->declBit(c+5,"top_SoC bus writeBuses_0 io_master_writeData_ready", false,-1);
        tracep->declBit(c+6,"top_SoC bus writeBuses_0 io_master_writeData_valid", false,-1);
        tracep->declBus(c+7,"top_SoC bus writeBuses_0 io_master_writeData_bits_data", false,-1, 31,0);
        tracep->declBit(c+8,"top_SoC bus writeBuses_0 io_master_writeResp_ready", false,-1);
        tracep->declBit(c+9,"top_SoC bus writeBuses_0 io_master_writeResp_valid", false,-1);
        tracep->declBit(c+248,"top_SoC bus writeBuses_0 io_slave_0_writeAddr_ready", false,-1);
        tracep->declBit(c+249,"top_SoC bus writeBuses_0 io_slave_0_writeAddr_valid", false,-1);
        tracep->declBit(c+250,"top_SoC bus writeBuses_0 io_slave_0_writeData_ready", false,-1);
        tracep->declBit(c+251,"top_SoC bus writeBuses_0 io_slave_0_writeData_valid", false,-1);
        tracep->declBus(c+252,"top_SoC bus writeBuses_0 io_slave_0_writeData_bits_data", false,-1, 31,0);
        tracep->declBus(c+253,"top_SoC bus writeBuses_0 io_slave_0_writeData_bits_strb", false,-1, 3,0);
        tracep->declBit(c+254,"top_SoC bus writeBuses_0 io_slave_0_writeResp_ready", false,-1);
        tracep->declBit(c+255,"top_SoC bus writeBuses_0 io_slave_0_writeResp_valid", false,-1);
        tracep->declBit(c+260,"top_SoC bus writeBuses_0 write_addr_reg_valid", false,-1);
        tracep->declBus(c+261,"top_SoC bus writeBuses_0 write_data_reg", false,-1, 31,0);
        tracep->declBit(c+262,"top_SoC bus writeBuses_0 write_data_reg_valid", false,-1);
        tracep->declBus(c+263,"top_SoC bus writeBuses_0 write_data_reg_strb", false,-1, 3,0);
        tracep->declBit(c+9,"top_SoC bus writeBuses_0 write_resp_reg_valid", false,-1);
        tracep->declBit(c+264,"top_SoC bus writeBuses_0 w_outstanding", false,-1);
        tracep->declBit(c+265,"top_SoC bus writeBuses_0 aw_outstanding", false,-1);
        tracep->declBit(c+266,"top_SoC bus writeBuses_0 b_outstanding", false,-1);
        tracep->declBit(c+269,"top_SoC bus writeMuxes_0 clock", false,-1);
        tracep->declBit(c+270,"top_SoC bus writeMuxes_0 reset", false,-1);
        tracep->declBit(c+63,"top_SoC bus writeMuxes_0 io_out_writeAddr_ready", false,-1);
        tracep->declBit(c+64,"top_SoC bus writeMuxes_0 io_out_writeAddr_valid", false,-1);
        tracep->declBit(c+65,"top_SoC bus writeMuxes_0 io_out_writeData_ready", false,-1);
        tracep->declBit(c+66,"top_SoC bus writeMuxes_0 io_out_writeData_valid", false,-1);
        tracep->declBus(c+67,"top_SoC bus writeMuxes_0 io_out_writeData_bits_data", false,-1, 31,0);
        tracep->declBus(c+68,"top_SoC bus writeMuxes_0 io_out_writeData_bits_strb", false,-1, 3,0);
        tracep->declBit(c+69,"top_SoC bus writeMuxes_0 io_out_writeResp_ready", false,-1);
        tracep->declBit(c+70,"top_SoC bus writeMuxes_0 io_out_writeResp_valid", false,-1);
        tracep->declBit(c+248,"top_SoC bus writeMuxes_0 io_in_0_writeAddr_ready", false,-1);
        tracep->declBit(c+249,"top_SoC bus writeMuxes_0 io_in_0_writeAddr_valid", false,-1);
        tracep->declBit(c+250,"top_SoC bus writeMuxes_0 io_in_0_writeData_ready", false,-1);
        tracep->declBit(c+251,"top_SoC bus writeMuxes_0 io_in_0_writeData_valid", false,-1);
        tracep->declBus(c+252,"top_SoC bus writeMuxes_0 io_in_0_writeData_bits_data", false,-1, 31,0);
        tracep->declBus(c+253,"top_SoC bus writeMuxes_0 io_in_0_writeData_bits_strb", false,-1, 3,0);
        tracep->declBit(c+254,"top_SoC bus writeMuxes_0 io_in_0_writeResp_ready", false,-1);
        tracep->declBit(c+255,"top_SoC bus writeMuxes_0 io_in_0_writeResp_valid", false,-1);
        tracep->declBit(c+267,"top_SoC bus writeMuxes_0 arbiter_io_in_0_valid", false,-1);
        tracep->declBit(c+267,"top_SoC bus writeMuxes_0 arbiter_io_out_valid", false,-1);
        tracep->declBus(c+268,"top_SoC bus writeMuxes_0 state", false,-1, 1,0);
        tracep->declBit(c+66,"top_SoC bus writeMuxes_0 w_determined", false,-1);
        tracep->declBit(c+64,"top_SoC bus writeMuxes_0 aw_determined", false,-1);
        tracep->declBus(c+67,"top_SoC bus writeMuxes_0 data_reg_data", false,-1, 31,0);
        tracep->declBus(c+68,"top_SoC bus writeMuxes_0 data_reg_strb", false,-1, 3,0);
        tracep->declBit(c+248,"top_SoC bus writeMuxes_0 mask_0", false,-1);
        tracep->declBit(c+267,"top_SoC bus writeMuxes_0 arbiter io_in_0_valid", false,-1);
        tracep->declBit(c+267,"top_SoC bus writeMuxes_0 arbiter io_out_valid", false,-1);
    }
}

void Vtop_SoC::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vtop_SoC::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vtop_SoC__Syms* __restrict vlSymsp = static_cast<Vtop_SoC__Syms*>(userp);
    Vtop_SoC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vtop_SoC::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vtop_SoC__Syms* __restrict vlSymsp = static_cast<Vtop_SoC__Syms*>(userp);
    Vtop_SoC* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullSData(oldp+1,(vlTOPp->top_SoC__DOT__cpu__DOT__stage_IF__DOT__pcReg),15);
        tracep->fullIData(oldp+2,(vlTOPp->top_SoC__DOT__im_io_inst),32);
        tracep->fullBit(oldp+3,((1U & (~ (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__aw_outstanding)))));
        tracep->fullBit(oldp+4,((1U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__mWriteState))));
        tracep->fullBit(oldp+5,((1U & (~ (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__w_outstanding)))));
        tracep->fullBit(oldp+6,((2U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__mWriteState))));
        tracep->fullIData(oldp+7,(vlTOPp->top_SoC__DOT__cpu__DOT__stage_MEM__DOT__wdataReg),32);
        tracep->fullBit(oldp+8,(vlTOPp->top_SoC__DOT__cpu_io_DataMem_b_ready));
        tracep->fullBit(oldp+9,(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__write_resp_reg_valid));
        tracep->fullBit(oldp+10,((1U & (~ (IData)(vlTOPp->top_SoC__DOT__bus__DOT__readBuses_0__DOT__outstanding)))));
        tracep->fullBit(oldp+11,((1U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__mReadState))));
        tracep->fullBit(oldp+12,((2U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__mReadState))));
        tracep->fullIData(oldp+13,(((IData)(vlTOPp->top_SoC__DOT__bus__DOT__readBuses_0__DOT__outstanding)
                                     ? vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0__DOT__data_reg_data
                                     : 0U)),32);
        tracep->fullIData(oldp+14,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_1),32);
        tracep->fullIData(oldp+15,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_2),32);
        tracep->fullIData(oldp+16,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_3),32);
        tracep->fullIData(oldp+17,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_4),32);
        tracep->fullIData(oldp+18,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_5),32);
        tracep->fullIData(oldp+19,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_6),32);
        tracep->fullIData(oldp+20,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_7),32);
        tracep->fullIData(oldp+21,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_8),32);
        tracep->fullIData(oldp+22,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_9),32);
        tracep->fullIData(oldp+23,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_10),32);
        tracep->fullIData(oldp+24,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_11),32);
        tracep->fullIData(oldp+25,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_12),32);
        tracep->fullIData(oldp+26,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_13),32);
        tracep->fullIData(oldp+27,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_14),32);
        tracep->fullIData(oldp+28,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_15),32);
        tracep->fullIData(oldp+29,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_16),32);
        tracep->fullIData(oldp+30,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_17),32);
        tracep->fullIData(oldp+31,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_18),32);
        tracep->fullIData(oldp+32,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_19),32);
        tracep->fullIData(oldp+33,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_20),32);
        tracep->fullIData(oldp+34,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_21),32);
        tracep->fullIData(oldp+35,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_22),32);
        tracep->fullIData(oldp+36,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_23),32);
        tracep->fullIData(oldp+37,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_24),32);
        tracep->fullIData(oldp+38,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_25),32);
        tracep->fullIData(oldp+39,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_26),32);
        tracep->fullIData(oldp+40,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_27),32);
        tracep->fullIData(oldp+41,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_28),32);
        tracep->fullIData(oldp+42,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_29),32);
        tracep->fullIData(oldp+43,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_30),32);
        tracep->fullIData(oldp+44,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_31),32);
        tracep->fullBit(oldp+45,((0xbU == (0x7fU & vlTOPp->top_SoC__DOT__im_io_inst))));
        tracep->fullBit(oldp+46,(((0x67U == (0x7fU 
                                             & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg)) 
                                  | ((0x6fU == (0x7fU 
                                                & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg)) 
                                     | ((0x63U == (0x7fU 
                                                   & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg)) 
                                        & (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT___E_Branch_taken_T_14))))));
        tracep->fullBit(oldp+47,(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_Flush_DH));
        tracep->fullBit(oldp+48,(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_Stall_MA));
        tracep->fullSData(oldp+49,(vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__pcReg),15);
        tracep->fullSData(oldp+50,(vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__pcReg),15);
        tracep->fullSData(oldp+51,(vlTOPp->top_SoC__DOT__cpu__DOT__stage_MEM__DOT__pcReg),15);
        tracep->fullSData(oldp+52,((0x7fffU & ((0U 
                                                < (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__stage_WB__DOT__pc_plus4_Reg))
                                                ? ((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__stage_WB__DOT__pc_plus4_Reg) 
                                                   - (IData)(4U))
                                                : (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__stage_WB__DOT__pc_plus4_Reg)))),15);
        tracep->fullIData(oldp+53,(vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__rs1Reg),32);
        tracep->fullIData(oldp+54,(vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__rs2Reg),32);
        tracep->fullIData(oldp+55,(((2U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ASel))
                                     ? 0U : vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT___alu_src1_T_3)),32);
        tracep->fullIData(oldp+56,(((0x33U != (0x7fU 
                                               & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg))
                                     ? vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__immReg
                                     : vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__rs2Reg)),32);
        tracep->fullSData(oldp+57,((0x7fffU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_MEM__DOT__aluReg)),15);
        tracep->fullIData(oldp+58,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___GEN_122[0U]),32);
        tracep->fullCData(oldp+59,((0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_WB__DOT__InstReg 
                                             >> 7U))),5);
        tracep->fullIData(oldp+60,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_WB_io_WB_wdata),32);
        tracep->fullBit(oldp+61,(((0x6fU == (0x7fU 
                                             & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg)) 
                                  | (0x67U == (0x7fU 
                                               & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg)))));
        tracep->fullBit(oldp+62,((0x63U == (0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg))));
        tracep->fullBit(oldp+63,(((0U != (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState)) 
                                  & (1U == (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState)))));
        tracep->fullBit(oldp+64,(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__aw_determined));
        tracep->fullBit(oldp+65,(((0U != (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState)) 
                                  & ((1U == (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState)) 
                                     | (4U == (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState))))));
        tracep->fullBit(oldp+66,(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__w_determined));
        tracep->fullIData(oldp+67,(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__data_reg_data),32);
        tracep->fullCData(oldp+68,(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__data_reg_strb),4);
        tracep->fullBit(oldp+69,(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0_io_out_writeResp_ready));
        tracep->fullBit(oldp+70,(((0U != (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState)) 
                                  & ((1U != (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState)) 
                                     & ((4U != (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState)) 
                                        & ((2U != (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState)) 
                                           & (3U == (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState))))))));
        tracep->fullBit(oldp+71,((0U == (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__readState))));
        tracep->fullBit(oldp+72,(vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0__DOT__ar_determined));
        tracep->fullBit(oldp+73,(vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0_io_out_readData_ready));
        tracep->fullBit(oldp+74,(vlTOPp->top_SoC__DOT__datamem_io_slave_r_valid));
        tracep->fullIData(oldp+75,(vlTOPp->top_SoC__DOT__datamem_io_slave_r_bits_data),32);
        tracep->fullBit(oldp+76,((((0xbU == (0x7fU 
                                             & vlTOPp->top_SoC__DOT__im_io_inst)) 
                                   | (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_Flush_DH)) 
                                  | (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_Stall_MA))));
        tracep->fullSData(oldp+77,((0x7fffU & ((2U 
                                                == 
                                                ((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_Flush_BH)
                                                  ? 2U
                                                  : 0U))
                                                ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___GEN_122[0U]
                                                : (
                                                   (1U 
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
        tracep->fullBit(oldp+78,(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_Flush_BH));
        tracep->fullBit(oldp+79,(vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID_io_Stall));
        tracep->fullIData(oldp+80,(vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg),32);
        tracep->fullBit(oldp+81,(vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE_io_Flush));
        tracep->fullBit(oldp+82,(vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE_io_Stall));
        tracep->fullIData(oldp+83,(((0x1fU == (0x1fU 
                                               & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                  >> 0xfU)))
                                     ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_31
                                     : ((0x1eU == (0x1fU 
                                                   & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                      >> 0xfU)))
                                         ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_30
                                         : ((0x1dU 
                                             == (0x1fU 
                                                 & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                    >> 0xfU)))
                                             ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_29
                                             : ((0x1cU 
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
        tracep->fullIData(oldp+84,(((0x1fU == (0x1fU 
                                               & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                  >> 0x14U)))
                                     ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_31
                                     : ((0x1eU == (0x1fU 
                                                   & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                      >> 0x14U)))
                                         ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_30
                                         : ((0x1dU 
                                             == (0x1fU 
                                                 & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                    >> 0x14U)))
                                             ? vlTOPp->top_SoC__DOT__cpu__DOT__datapath_ID__DOT__rf__DOT__regs_29
                                             : ((0x1cU 
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
        tracep->fullIData(oldp+85,(((4U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_D_ImmSel))
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
        tracep->fullIData(oldp+86,(vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg),32);
        tracep->fullIData(oldp+87,(vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__immReg),32);
        tracep->fullIData(oldp+88,(vlTOPp->top_SoC__DOT__cpu__DOT__stage_MEM__DOT__InstReg),32);
        tracep->fullIData(oldp+89,(vlTOPp->top_SoC__DOT__cpu__DOT__stage_MEM__DOT__aluReg),32);
        tracep->fullSData(oldp+90,((0x7fffU & ((IData)(4U) 
                                               + (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__stage_MEM__DOT__pcReg)))),15);
        tracep->fullSData(oldp+91,(vlTOPp->top_SoC__DOT__cpu__DOT__stage_WB__DOT__pc_plus4_Reg),15);
        tracep->fullIData(oldp+92,(vlTOPp->top_SoC__DOT__cpu__DOT__stage_WB__DOT__InstReg),32);
        tracep->fullIData(oldp+93,(vlTOPp->top_SoC__DOT__cpu__DOT__stage_WB__DOT__alu_out_Reg),32);
        tracep->fullIData(oldp+94,(vlTOPp->top_SoC__DOT__cpu__DOT__stage_WB__DOT__ld_data_Reg),32);
        tracep->fullCData(oldp+95,(((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_Flush_BH)
                                     ? 2U : 0U)),2);
        tracep->fullSData(oldp+96,((0x7fffU & vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___GEN_122[0U])),15);
        tracep->fullBit(oldp+97,(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT___io_W_RegWEn_T_5));
        tracep->fullCData(oldp+98,(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_D_ImmSel),3);
        tracep->fullCData(oldp+99,(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ASel),2);
        tracep->fullBit(oldp+100,((0x33U != (0x7fU 
                                             & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg))));
        tracep->fullBit(oldp+101,((1U & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                                         >> 0xdU))));
        tracep->fullSData(oldp+102,(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel),15);
        tracep->fullBit(oldp+103,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__bc_io_BrEq));
        tracep->fullBit(oldp+104,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__bc_io_BrLT));
        tracep->fullCData(oldp+105,(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_W_WBSel),2);
        tracep->fullBit(oldp+106,((3U == (0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_MEM__DOT__InstReg))));
        tracep->fullBit(oldp+107,((0x23U == (0x7fU 
                                             & vlTOPp->top_SoC__DOT__cpu__DOT__stage_MEM__DOT__InstReg))));
        tracep->fullCData(oldp+108,(vlTOPp->top_SoC__DOT__cpu__DOT__mReadState),2);
        tracep->fullCData(oldp+109,(vlTOPp->top_SoC__DOT__cpu__DOT__mWriteState),2);
        tracep->fullCData(oldp+110,((0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+111,((0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                              >> 0x14U))),5);
        tracep->fullIData(oldp+112,((0x1ffffffU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                   >> 7U))),25);
        tracep->fullIData(oldp+113,((0xffffff80U & vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg)),32);
        tracep->fullIData(oldp+114,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src1),32);
        tracep->fullIData(oldp+115,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu_io_src2),32);
        tracep->fullBit(oldp+116,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__result___05F4));
        tracep->fullSData(oldp+117,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__val16),16);
        tracep->fullBit(oldp+118,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__result___05F3));
        tracep->fullCData(oldp+119,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__val8),8);
        tracep->fullBit(oldp+120,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__result___05F2));
        tracep->fullCData(oldp+121,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__val4),4);
        tracep->fullBit(oldp+122,(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT__result___05F1));
        tracep->fullBit(oldp+123,(((0xf8U != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                                   & ((0xf9U != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
                                      & ((0xfaU != (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller_io_E_ALUSel)) 
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
        tracep->fullCData(oldp+124,((0x1fU & ((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___result_T_60) 
                                              + (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__datapath_EXE__DOT__alu__DOT___result_T_90)))),5);
        tracep->fullCData(oldp+125,((0x7fU & vlTOPp->top_SoC__DOT__im_io_inst)),7);
        tracep->fullCData(oldp+126,((0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg)),7);
        tracep->fullCData(oldp+127,((0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg)),7);
        tracep->fullCData(oldp+128,((7U & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+129,((0x7fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                                              >> 0x19U))),7);
        tracep->fullCData(oldp+130,((0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                                              >> 7U))),5);
        tracep->fullCData(oldp+131,((0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+132,((0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_MEM__DOT__InstReg)),7);
        tracep->fullCData(oldp+133,((0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_MEM__DOT__InstReg 
                                              >> 7U))),5);
        tracep->fullCData(oldp+134,((0x7fU & vlTOPp->top_SoC__DOT__cpu__DOT__stage_WB__DOT__InstReg)),7);
        tracep->fullBit(oldp+135,(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__E_En));
        tracep->fullBit(oldp+136,(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__E_Branch_taken));
        tracep->fullCData(oldp+137,(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__EXE_funct5),5);
        tracep->fullBit(oldp+138,(((1U == (7U & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                                                 >> 0xcU))) 
                                   | (5U == (7U & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+139,((IData)((0x8004000U 
                                           == (0xfff07000U 
                                               & vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg)))));
        tracep->fullBit(oldp+140,(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__is_D_use_rs1));
        tracep->fullBit(oldp+141,(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__is_D_use_rs2));
        tracep->fullBit(oldp+142,(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__is_M_use_rd));
        tracep->fullBit(oldp+143,(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__is_E_use_rd));
        tracep->fullBit(oldp+144,(((((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__is_D_use_rs1) 
                                     & (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT___io_W_RegWEn_T_5)) 
                                    & ((0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                 >> 0xfU)) 
                                       == (0x1fU & 
                                           (vlTOPp->top_SoC__DOT__cpu__DOT__stage_WB__DOT__InstReg 
                                            >> 7U)))) 
                                   & (0U != (0x1fU 
                                             & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_WB__DOT__InstReg 
                                                >> 7U))))));
        tracep->fullBit(oldp+145,(((((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__is_D_use_rs2) 
                                     & (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT___io_W_RegWEn_T_5)) 
                                    & ((0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                 >> 0x14U)) 
                                       == (0x1fU & 
                                           (vlTOPp->top_SoC__DOT__cpu__DOT__stage_WB__DOT__InstReg 
                                            >> 7U)))) 
                                   & (0U != (0x1fU 
                                             & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_WB__DOT__InstReg 
                                                >> 7U))))));
        tracep->fullBit(oldp+146,(((((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__is_D_use_rs1) 
                                     & (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__is_M_use_rd)) 
                                    & ((0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                 >> 0xfU)) 
                                       == (0x1fU & 
                                           (vlTOPp->top_SoC__DOT__cpu__DOT__stage_MEM__DOT__InstReg 
                                            >> 7U)))) 
                                   & (0U != (0x1fU 
                                             & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_MEM__DOT__InstReg 
                                                >> 7U))))));
        tracep->fullBit(oldp+147,(((((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__is_D_use_rs2) 
                                     & (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__is_M_use_rd)) 
                                    & ((0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                 >> 0x14U)) 
                                       == (0x1fU & 
                                           (vlTOPp->top_SoC__DOT__cpu__DOT__stage_MEM__DOT__InstReg 
                                            >> 7U)))) 
                                   & (0U != (0x1fU 
                                             & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_MEM__DOT__InstReg 
                                                >> 7U))))));
        tracep->fullBit(oldp+148,(((((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__is_D_use_rs1) 
                                     & (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__is_E_use_rd)) 
                                    & ((0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                 >> 0xfU)) 
                                       == (0x1fU & 
                                           (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                                            >> 7U)))) 
                                   & (0U != (0x1fU 
                                             & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                                                >> 7U))))));
        tracep->fullBit(oldp+149,(((((IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__is_D_use_rs2) 
                                     & (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__contorller__DOT__is_E_use_rd)) 
                                    & ((0x1fU & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_ID__DOT__InstReg 
                                                 >> 0x14U)) 
                                       == (0x1fU & 
                                           (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                                            >> 7U)))) 
                                   & (0U != (0x1fU 
                                             & (vlTOPp->top_SoC__DOT__cpu__DOT__stage_EXE__DOT__InstReg 
                                                >> 7U))))));
        tracep->fullSData(oldp+150,((0x7fffU & ((IData)(3U) 
                                                + (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__stage_IF__DOT__pcReg)))),15);
        tracep->fullCData(oldp+151,(vlTOPp->top_SoC__DOT__im__DOT__memory
                                    [(0x7fffU & ((IData)(3U) 
                                                 + (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__stage_IF__DOT__pcReg)))]),8);
        tracep->fullSData(oldp+152,((0x7fffU & ((IData)(2U) 
                                                + (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__stage_IF__DOT__pcReg)))),15);
        tracep->fullCData(oldp+153,(vlTOPp->top_SoC__DOT__im__DOT__memory
                                    [(0x7fffU & ((IData)(2U) 
                                                 + (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__stage_IF__DOT__pcReg)))]),8);
        tracep->fullSData(oldp+154,((0x7fffU & ((IData)(1U) 
                                                + (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__stage_IF__DOT__pcReg)))),15);
        tracep->fullCData(oldp+155,(vlTOPp->top_SoC__DOT__im__DOT__memory
                                    [(0x7fffU & ((IData)(1U) 
                                                 + (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__stage_IF__DOT__pcReg)))]),8);
        tracep->fullCData(oldp+156,(vlTOPp->top_SoC__DOT__im__DOT__memory
                                    [vlTOPp->top_SoC__DOT__cpu__DOT__stage_IF__DOT__pcReg]),8);
        tracep->fullSData(oldp+157,(((vlTOPp->top_SoC__DOT__im__DOT__memory
                                      [(0x7fffU & ((IData)(1U) 
                                                   + (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__stage_IF__DOT__pcReg)))] 
                                      << 8U) | vlTOPp->top_SoC__DOT__im__DOT__memory
                                     [vlTOPp->top_SoC__DOT__cpu__DOT__stage_IF__DOT__pcReg])),16);
        tracep->fullSData(oldp+158,(((vlTOPp->top_SoC__DOT__im__DOT__memory
                                      [(0x7fffU & ((IData)(3U) 
                                                   + (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__stage_IF__DOT__pcReg)))] 
                                      << 8U) | vlTOPp->top_SoC__DOT__im__DOT__memory
                                     [(0x7fffU & ((IData)(2U) 
                                                  + (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__stage_IF__DOT__pcReg)))])),16);
        tracep->fullIData(oldp+159,(vlTOPp->top_SoC__DOT__datamem__DOT__memory[0]),32);
        tracep->fullIData(oldp+160,(vlTOPp->top_SoC__DOT__datamem__DOT__memory[1]),32);
        tracep->fullIData(oldp+161,(vlTOPp->top_SoC__DOT__datamem__DOT__memory[2]),32);
        tracep->fullIData(oldp+162,(vlTOPp->top_SoC__DOT__datamem__DOT__memory[3]),32);
        tracep->fullIData(oldp+163,(vlTOPp->top_SoC__DOT__datamem__DOT__memory[4]),32);
        tracep->fullIData(oldp+164,(vlTOPp->top_SoC__DOT__datamem__DOT__memory[5]),32);
        tracep->fullIData(oldp+165,(vlTOPp->top_SoC__DOT__datamem__DOT__memory[6]),32);
        tracep->fullIData(oldp+166,(vlTOPp->top_SoC__DOT__datamem__DOT__memory[7]),32);
        tracep->fullIData(oldp+167,(vlTOPp->top_SoC__DOT__datamem__DOT__memory[8]),32);
        tracep->fullIData(oldp+168,(vlTOPp->top_SoC__DOT__datamem__DOT__memory[9]),32);
        tracep->fullIData(oldp+169,(vlTOPp->top_SoC__DOT__datamem__DOT__memory[10]),32);
        tracep->fullIData(oldp+170,(vlTOPp->top_SoC__DOT__datamem__DOT__memory[11]),32);
        tracep->fullIData(oldp+171,(vlTOPp->top_SoC__DOT__datamem__DOT__memory[12]),32);
        tracep->fullIData(oldp+172,(vlTOPp->top_SoC__DOT__datamem__DOT__memory[13]),32);
        tracep->fullIData(oldp+173,(vlTOPp->top_SoC__DOT__datamem__DOT__memory[14]),32);
        tracep->fullIData(oldp+174,(vlTOPp->top_SoC__DOT__datamem__DOT__memory[15]),32);
        tracep->fullIData(oldp+175,(vlTOPp->top_SoC__DOT__datamem__DOT__memory[16]),32);
        tracep->fullIData(oldp+176,(vlTOPp->top_SoC__DOT__datamem__DOT__memory[17]),32);
        tracep->fullIData(oldp+177,(vlTOPp->top_SoC__DOT__datamem__DOT__memory[18]),32);
        tracep->fullIData(oldp+178,(vlTOPp->top_SoC__DOT__datamem__DOT__memory[19]),32);
        tracep->fullIData(oldp+179,(vlTOPp->top_SoC__DOT__datamem__DOT__memory[20]),32);
        tracep->fullIData(oldp+180,(vlTOPp->top_SoC__DOT__datamem__DOT__memory[21]),32);
        tracep->fullIData(oldp+181,(vlTOPp->top_SoC__DOT__datamem__DOT__memory[22]),32);
        tracep->fullIData(oldp+182,(vlTOPp->top_SoC__DOT__datamem__DOT__memory[23]),32);
        tracep->fullIData(oldp+183,(vlTOPp->top_SoC__DOT__datamem__DOT__memory[24]),32);
        tracep->fullIData(oldp+184,(vlTOPp->top_SoC__DOT__datamem__DOT__memory[25]),32);
        tracep->fullIData(oldp+185,(vlTOPp->top_SoC__DOT__datamem__DOT__memory[26]),32);
        tracep->fullIData(oldp+186,(vlTOPp->top_SoC__DOT__datamem__DOT__memory[27]),32);
        tracep->fullIData(oldp+187,(vlTOPp->top_SoC__DOT__datamem__DOT__memory[28]),32);
        tracep->fullIData(oldp+188,(vlTOPp->top_SoC__DOT__datamem__DOT__memory[29]),32);
        tracep->fullIData(oldp+189,(vlTOPp->top_SoC__DOT__datamem__DOT__memory[30]),32);
        tracep->fullIData(oldp+190,(vlTOPp->top_SoC__DOT__datamem__DOT__memory[31]),32);
        tracep->fullBit(oldp+191,(((0U != (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__readState)) 
                                   & (IData)(vlTOPp->top_SoC__DOT__datamem__DOT___GEN_16))));
        tracep->fullCData(oldp+192,((0x1fU & (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__rAddrOffset))),5);
        tracep->fullIData(oldp+193,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                    [(0x1fU & (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__rAddrOffset))]),32);
        tracep->fullIData(oldp+194,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                    [0U]),32);
        tracep->fullIData(oldp+195,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                    [1U]),32);
        tracep->fullIData(oldp+196,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                    [2U]),32);
        tracep->fullIData(oldp+197,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                    [3U]),32);
        tracep->fullIData(oldp+198,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                    [4U]),32);
        tracep->fullIData(oldp+199,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                    [5U]),32);
        tracep->fullIData(oldp+200,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                    [6U]),32);
        tracep->fullIData(oldp+201,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                    [7U]),32);
        tracep->fullIData(oldp+202,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                    [8U]),32);
        tracep->fullIData(oldp+203,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                    [9U]),32);
        tracep->fullIData(oldp+204,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                    [0xaU]),32);
        tracep->fullIData(oldp+205,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                    [0xbU]),32);
        tracep->fullIData(oldp+206,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                    [0xcU]),32);
        tracep->fullIData(oldp+207,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                    [0xdU]),32);
        tracep->fullIData(oldp+208,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                    [0xeU]),32);
        tracep->fullIData(oldp+209,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                    [0xfU]),32);
        tracep->fullIData(oldp+210,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                    [0x10U]),32);
        tracep->fullIData(oldp+211,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                    [0x11U]),32);
        tracep->fullIData(oldp+212,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                    [0x12U]),32);
        tracep->fullIData(oldp+213,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                    [0x13U]),32);
        tracep->fullIData(oldp+214,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                    [0x14U]),32);
        tracep->fullIData(oldp+215,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                    [0x15U]),32);
        tracep->fullIData(oldp+216,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                    [0x16U]),32);
        tracep->fullIData(oldp+217,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                    [0x17U]),32);
        tracep->fullIData(oldp+218,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                    [0x18U]),32);
        tracep->fullIData(oldp+219,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                    [0x19U]),32);
        tracep->fullIData(oldp+220,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                    [0x1aU]),32);
        tracep->fullIData(oldp+221,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                    [0x1bU]),32);
        tracep->fullIData(oldp+222,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                    [0x1cU]),32);
        tracep->fullIData(oldp+223,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                    [0x1dU]),32);
        tracep->fullIData(oldp+224,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                    [0x1eU]),32);
        tracep->fullIData(oldp+225,(vlTOPp->top_SoC__DOT__datamem__DOT__memory
                                    [0x1fU]),32);
        tracep->fullIData(oldp+226,((((IData)(vlTOPp->top_SoC__DOT__datamem__DOT__hi) 
                                      << 0x10U) | (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__lo))),32);
        tracep->fullBit(oldp+227,(((0U != (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState)) 
                                   & ((1U == (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState)) 
                                      & (IData)(vlTOPp->top_SoC__DOT__datamem__DOT___T_12)))));
        tracep->fullCData(oldp+228,((0x1fU & (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeAddressReg))),5);
        tracep->fullBit(oldp+229,(((0U != (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState)) 
                                   & ((1U != (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState)) 
                                      & ((4U == (IData)(vlTOPp->top_SoC__DOT__datamem__DOT__writeState)) 
                                         & (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__w_determined))))));
        tracep->fullSData(oldp+230,(vlTOPp->top_SoC__DOT__datamem__DOT__rAddrOffset),15);
        tracep->fullSData(oldp+231,(vlTOPp->top_SoC__DOT__datamem__DOT__writeAddressReg),15);
        tracep->fullCData(oldp+232,(vlTOPp->top_SoC__DOT__datamem__DOT__writeState),3);
        tracep->fullCData(oldp+233,(vlTOPp->top_SoC__DOT__datamem__DOT__readState),2);
        tracep->fullCData(oldp+234,(vlTOPp->top_SoC__DOT__datamem__DOT__rLatencyCounter),8);
        tracep->fullCData(oldp+235,(vlTOPp->top_SoC__DOT__datamem__DOT__wLatencyCounter),8);
        tracep->fullCData(oldp+236,(((1U & (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__data_reg_strb))
                                      ? (0xffU & vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__data_reg_data)
                                      : 0U)),8);
        tracep->fullCData(oldp+237,(((2U & (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__data_reg_strb))
                                      ? (0xffU & (vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__data_reg_data 
                                                  >> 8U))
                                      : 0U)),8);
        tracep->fullCData(oldp+238,(((4U & (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__data_reg_strb))
                                      ? (0xffU & (vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__data_reg_data 
                                                  >> 0x10U))
                                      : 0U)),8);
        tracep->fullCData(oldp+239,(((8U & (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__data_reg_strb))
                                      ? (0xffU & (vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__data_reg_data 
                                                  >> 0x18U))
                                      : 0U)),8);
        tracep->fullSData(oldp+240,(vlTOPp->top_SoC__DOT__datamem__DOT__lo),16);
        tracep->fullSData(oldp+241,(vlTOPp->top_SoC__DOT__datamem__DOT__hi),16);
        tracep->fullBit(oldp+242,(((IData)(vlTOPp->top_SoC__DOT__bus__DOT__readBuses_0__DOT__outstanding) 
                                   & (IData)(vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0_io_in_0_readData_valid))));
        tracep->fullBit(oldp+243,(((0U == (IData)(vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0__DOT__state)) 
                                   | (IData)(vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0__DOT___GEN_25))));
        tracep->fullBit(oldp+244,(vlTOPp->top_SoC__DOT__bus__DOT__readBuses_0_io_slave_0_readAddr_valid));
        tracep->fullBit(oldp+245,(((IData)(vlTOPp->top_SoC__DOT__bus__DOT__readBuses_0__DOT__outstanding) 
                                   & (2U == (IData)(vlTOPp->top_SoC__DOT__cpu__DOT__mReadState)))));
        tracep->fullBit(oldp+246,(vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0_io_in_0_readData_valid));
        tracep->fullIData(oldp+247,(vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0__DOT__data_reg_data),32);
        tracep->fullBit(oldp+248,(((0U == (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__state)) 
                                   | (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT___GEN_47))));
        tracep->fullBit(oldp+249,(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0_io_slave_0_writeAddr_valid));
        tracep->fullBit(oldp+250,(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0_io_in_0_writeData_ready));
        tracep->fullBit(oldp+251,(((IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__aw_outstanding) 
                                   & (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__write_data_reg_valid))));
        tracep->fullIData(oldp+252,(((IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__aw_outstanding)
                                      ? vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__write_data_reg
                                      : 0U)),32);
        tracep->fullCData(oldp+253,(((IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__aw_outstanding)
                                      ? (IData)(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__write_data_reg_strb)
                                      : 0U)),4);
        tracep->fullBit(oldp+254,(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0_io_slave_0_writeResp_ready));
        tracep->fullBit(oldp+255,(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0_io_in_0_writeResp_valid));
        tracep->fullBit(oldp+256,(vlTOPp->top_SoC__DOT__bus__DOT__readBuses_0__DOT__read_addr_reg_valid));
        tracep->fullBit(oldp+257,(vlTOPp->top_SoC__DOT__bus__DOT__readBuses_0__DOT__outstanding));
        tracep->fullBit(oldp+258,(((IData)(vlTOPp->top_SoC__DOT__bus__DOT__readBuses_0_io_slave_0_readAddr_valid) 
                                   & ((0U == (IData)(vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0__DOT__state)) 
                                      | (IData)(vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0__DOT___GEN_25)))));
        tracep->fullCData(oldp+259,(vlTOPp->top_SoC__DOT__bus__DOT__readMuxes_0__DOT__state),2);
        tracep->fullBit(oldp+260,(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__write_addr_reg_valid));
        tracep->fullIData(oldp+261,(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__write_data_reg),32);
        tracep->fullBit(oldp+262,(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__write_data_reg_valid));
        tracep->fullCData(oldp+263,(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__write_data_reg_strb),4);
        tracep->fullBit(oldp+264,(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__w_outstanding));
        tracep->fullBit(oldp+265,(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__aw_outstanding));
        tracep->fullBit(oldp+266,(vlTOPp->top_SoC__DOT__bus__DOT__writeBuses_0__DOT__b_outstanding));
        tracep->fullBit(oldp+267,(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__arbiter_io_in_0_valid));
        tracep->fullCData(oldp+268,(vlTOPp->top_SoC__DOT__bus__DOT__writeMuxes_0__DOT__state),2);
        tracep->fullBit(oldp+269,(vlTOPp->clock));
        tracep->fullBit(oldp+270,(vlTOPp->reset));
        tracep->fullIData(oldp+271,(vlTOPp->io_regs_0),32);
        tracep->fullIData(oldp+272,(vlTOPp->io_regs_1),32);
        tracep->fullIData(oldp+273,(vlTOPp->io_regs_2),32);
        tracep->fullIData(oldp+274,(vlTOPp->io_regs_3),32);
        tracep->fullIData(oldp+275,(vlTOPp->io_regs_4),32);
        tracep->fullIData(oldp+276,(vlTOPp->io_regs_5),32);
        tracep->fullIData(oldp+277,(vlTOPp->io_regs_6),32);
        tracep->fullIData(oldp+278,(vlTOPp->io_regs_7),32);
        tracep->fullIData(oldp+279,(vlTOPp->io_regs_8),32);
        tracep->fullIData(oldp+280,(vlTOPp->io_regs_9),32);
        tracep->fullIData(oldp+281,(vlTOPp->io_regs_10),32);
        tracep->fullIData(oldp+282,(vlTOPp->io_regs_11),32);
        tracep->fullIData(oldp+283,(vlTOPp->io_regs_12),32);
        tracep->fullIData(oldp+284,(vlTOPp->io_regs_13),32);
        tracep->fullIData(oldp+285,(vlTOPp->io_regs_14),32);
        tracep->fullIData(oldp+286,(vlTOPp->io_regs_15),32);
        tracep->fullIData(oldp+287,(vlTOPp->io_regs_16),32);
        tracep->fullIData(oldp+288,(vlTOPp->io_regs_17),32);
        tracep->fullIData(oldp+289,(vlTOPp->io_regs_18),32);
        tracep->fullIData(oldp+290,(vlTOPp->io_regs_19),32);
        tracep->fullIData(oldp+291,(vlTOPp->io_regs_20),32);
        tracep->fullIData(oldp+292,(vlTOPp->io_regs_21),32);
        tracep->fullIData(oldp+293,(vlTOPp->io_regs_22),32);
        tracep->fullIData(oldp+294,(vlTOPp->io_regs_23),32);
        tracep->fullIData(oldp+295,(vlTOPp->io_regs_24),32);
        tracep->fullIData(oldp+296,(vlTOPp->io_regs_25),32);
        tracep->fullIData(oldp+297,(vlTOPp->io_regs_26),32);
        tracep->fullIData(oldp+298,(vlTOPp->io_regs_27),32);
        tracep->fullIData(oldp+299,(vlTOPp->io_regs_28),32);
        tracep->fullIData(oldp+300,(vlTOPp->io_regs_29),32);
        tracep->fullIData(oldp+301,(vlTOPp->io_regs_30),32);
        tracep->fullIData(oldp+302,(vlTOPp->io_regs_31),32);
        tracep->fullBit(oldp+303,(vlTOPp->io_Hcf));
        tracep->fullIData(oldp+304,(vlTOPp->io_inst),32);
        tracep->fullIData(oldp+305,(vlTOPp->io_rdata),32);
        tracep->fullIData(oldp+306,(vlTOPp->io_wdata),32);
        tracep->fullBit(oldp+307,(vlTOPp->io_Dump_Mem));
        tracep->fullBit(oldp+308,(vlTOPp->io_E_Branch_taken));
        tracep->fullBit(oldp+309,(vlTOPp->io_Flush));
        tracep->fullBit(oldp+310,(vlTOPp->io_Stall_MA));
        tracep->fullBit(oldp+311,(vlTOPp->io_Stall_DH));
        tracep->fullIData(oldp+312,(vlTOPp->io_IF_PC),32);
        tracep->fullIData(oldp+313,(vlTOPp->io_ID_PC),32);
        tracep->fullIData(oldp+314,(vlTOPp->io_EXE_PC),32);
        tracep->fullIData(oldp+315,(vlTOPp->io_MEM_PC),32);
        tracep->fullIData(oldp+316,(vlTOPp->io_WB_PC),32);
        tracep->fullIData(oldp+317,(vlTOPp->io_EXE_alu_out),32);
        tracep->fullIData(oldp+318,(vlTOPp->io_EXE_src1),32);
        tracep->fullIData(oldp+319,(vlTOPp->io_EXE_src2),32);
        tracep->fullIData(oldp+320,(vlTOPp->io_ALU_src1),32);
        tracep->fullIData(oldp+321,(vlTOPp->io_ALU_src2),32);
        tracep->fullIData(oldp+322,(vlTOPp->io_raddr),32);
        tracep->fullCData(oldp+323,(vlTOPp->io_WB_rd),5);
        tracep->fullIData(oldp+324,(vlTOPp->io_WB_wdata),32);
        tracep->fullBit(oldp+325,(vlTOPp->io_EXE_Jump));
        tracep->fullBit(oldp+326,(vlTOPp->io_EXE_Branch));
        tracep->fullBit(oldp+327,(1U));
        tracep->fullCData(oldp+328,(0U),5);
        tracep->fullCData(oldp+329,(1U),5);
        tracep->fullCData(oldp+330,(2U),5);
        tracep->fullCData(oldp+331,(3U),5);
        tracep->fullCData(oldp+332,(4U),5);
        tracep->fullCData(oldp+333,(5U),5);
        tracep->fullCData(oldp+334,(6U),5);
        tracep->fullCData(oldp+335,(7U),5);
        tracep->fullCData(oldp+336,(8U),5);
        tracep->fullCData(oldp+337,(9U),5);
        tracep->fullCData(oldp+338,(0xaU),5);
        tracep->fullCData(oldp+339,(0xbU),5);
        tracep->fullCData(oldp+340,(0xcU),5);
        tracep->fullCData(oldp+341,(0xdU),5);
        tracep->fullCData(oldp+342,(0xeU),5);
        tracep->fullCData(oldp+343,(0xfU),5);
        tracep->fullCData(oldp+344,(0x10U),5);
        tracep->fullCData(oldp+345,(0x11U),5);
        tracep->fullCData(oldp+346,(0x12U),5);
        tracep->fullCData(oldp+347,(0x13U),5);
        tracep->fullCData(oldp+348,(0x14U),5);
        tracep->fullCData(oldp+349,(0x15U),5);
        tracep->fullCData(oldp+350,(0x16U),5);
        tracep->fullCData(oldp+351,(0x17U),5);
        tracep->fullCData(oldp+352,(0x18U),5);
        tracep->fullCData(oldp+353,(0x19U),5);
        tracep->fullCData(oldp+354,(0x1aU),5);
        tracep->fullCData(oldp+355,(0x1bU),5);
        tracep->fullCData(oldp+356,(0x1cU),5);
        tracep->fullCData(oldp+357,(0x1dU),5);
        tracep->fullCData(oldp+358,(0x1eU),5);
        tracep->fullCData(oldp+359,(0x1fU),5);
        tracep->fullIData(oldp+360,(vlTOPp->top_SoC__DOT__datamem__DOT__initvar),32);
    }
}
