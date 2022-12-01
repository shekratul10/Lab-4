// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRISC_V__Syms.h"


VL_ATTR_COLD void VRISC_V___024root__trace_init_sub__TOP__0(VRISC_V___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+52,"clk", false,-1);
    tracep->declBit(c+53,"rst", false,-1);
    tracep->declBus(c+54,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("RISC_V ");
    tracep->declBus(c+58,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+52,"clk", false,-1);
    tracep->declBit(c+53,"rst", false,-1);
    tracep->declBus(c+54,"a0", false,-1, 31,0);
    tracep->declBus(c+2,"PC", false,-1, 31,0);
    tracep->declBus(c+3,"instr", false,-1, 31,0);
    tracep->declBus(c+46,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+4,"RegWrite", false,-1);
    tracep->declBus(c+47,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+5,"ALUsrc", false,-1);
    tracep->declBus(c+48,"ImmSrc", false,-1, 1,0);
    tracep->declBit(c+49,"PCsrc", false,-1);
    tracep->declBit(c+50,"EQ", false,-1);
    tracep->pushNamePrefix("Alu ");
    tracep->declBus(c+59,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+58,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+52,"clk", false,-1);
    tracep->declBus(c+46,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+4,"RegWrite", false,-1);
    tracep->declBit(c+5,"ALUsrc", false,-1);
    tracep->declBus(c+47,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+6,"addr1", false,-1, 4,0);
    tracep->declBus(c+7,"addr2", false,-1, 4,0);
    tracep->declBus(c+8,"addr3", false,-1, 4,0);
    tracep->declBus(c+54,"a0", false,-1, 31,0);
    tracep->declBit(c+50,"EQ", false,-1);
    tracep->declBus(c+9,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+51,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+10,"regOp2", false,-1, 31,0);
    tracep->declBus(c+55,"ALUout", false,-1, 31,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+58,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+9,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+51,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+47,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+55,"ALUout", false,-1, 31,0);
    tracep->declBit(c+50,"EQ", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu_reg ");
    tracep->declBus(c+59,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+58,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+52,"clk", false,-1);
    tracep->declBus(c+6,"addr1", false,-1, 4,0);
    tracep->declBus(c+7,"addr2", false,-1, 4,0);
    tracep->declBus(c+8,"addr3", false,-1, 4,0);
    tracep->declBit(c+4,"WE3", false,-1);
    tracep->declBus(c+55,"WD3", false,-1, 31,0);
    tracep->declBus(c+9,"dout1", false,-1, 31,0);
    tracep->declBus(c+10,"dout2", false,-1, 31,0);
    tracep->declBus(c+54,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+11+i*1,"regfile_array", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("CU ");
    tracep->declBus(c+58,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+3,"instr", false,-1, 31,0);
    tracep->declBit(c+50,"EQ", false,-1);
    tracep->declBus(c+47,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+4,"RegWrite", false,-1);
    tracep->declBit(c+5,"ALUsrc", false,-1);
    tracep->declBus(c+48,"ImmSrc", false,-1, 1,0);
    tracep->declBit(c+49,"PCsrc", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("INSTR ");
    tracep->declBus(c+60,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+61,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+43,"addr", false,-1, 9,0);
    tracep->declBus(c+3,"read", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PgrC ");
    tracep->declBus(c+58,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+52,"clk", false,-1);
    tracep->declBit(c+53,"rst", false,-1);
    tracep->declBus(c+46,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+49,"PCsrc", false,-1);
    tracep->declBus(c+2,"pc", false,-1, 31,0);
    tracep->declBus(c+56,"mux_output", false,-1, 31,0);
    tracep->pushNamePrefix("mux ");
    tracep->declBus(c+58,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+57,"branch_pc", false,-1, 31,0);
    tracep->declBus(c+44,"inc_pc", false,-1, 31,0);
    tracep->declBit(c+49,"PCsrc", false,-1);
    tracep->declBus(c+56,"next_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pcreg ");
    tracep->declBus(c+58,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+52,"clk", false,-1);
    tracep->declBit(c+53,"rst", false,-1);
    tracep->declBus(c+56,"next_pc", false,-1, 31,0);
    tracep->declBus(c+2,"pc", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("SE ");
    tracep->declBus(c+45,"instr", false,-1, 31,7);
    tracep->declBus(c+48,"ImmSrc", false,-1, 1,0);
    tracep->declBus(c+46,"ImmOp", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VRISC_V___024root__trace_init_top(VRISC_V___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V___024root__trace_init_top\n"); );
    // Body
    VRISC_V___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VRISC_V___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VRISC_V___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VRISC_V___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VRISC_V___024root__trace_register(VRISC_V___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VRISC_V___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VRISC_V___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VRISC_V___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VRISC_V___024root__trace_full_sub_0(VRISC_V___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VRISC_V___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V___024root__trace_full_top_0\n"); );
    // Init
    VRISC_V___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRISC_V___024root*>(voidSelf);
    VRISC_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VRISC_V___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VRISC_V___024root__trace_full_sub_0(VRISC_V___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelf->RISC_V__DOT__PC),32);
    bufp->fullIData(oldp+3,(vlSelf->RISC_V__DOT__instr),32);
    bufp->fullBit(oldp+4,(vlSelf->RISC_V__DOT__RegWrite));
    bufp->fullBit(oldp+5,(vlSelf->RISC_V__DOT__ALUsrc));
    bufp->fullCData(oldp+6,((0x1fU & (vlSelf->RISC_V__DOT__instr 
                                      >> 0xfU))),5);
    bufp->fullCData(oldp+7,((0x1fU & (vlSelf->RISC_V__DOT__instr 
                                      >> 0x14U))),5);
    bufp->fullCData(oldp+8,((0x1fU & (vlSelf->RISC_V__DOT__instr 
                                      >> 7U))),5);
    bufp->fullIData(oldp+9,(vlSelf->RISC_V__DOT__Alu__DOT__ALUop1),32);
    bufp->fullIData(oldp+10,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array
                             [(0x1fU & (vlSelf->RISC_V__DOT__instr 
                                        >> 0x14U))]),32);
    bufp->fullIData(oldp+11,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[0]),32);
    bufp->fullIData(oldp+12,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[1]),32);
    bufp->fullIData(oldp+13,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[2]),32);
    bufp->fullIData(oldp+14,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[3]),32);
    bufp->fullIData(oldp+15,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[4]),32);
    bufp->fullIData(oldp+16,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[5]),32);
    bufp->fullIData(oldp+17,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[6]),32);
    bufp->fullIData(oldp+18,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[7]),32);
    bufp->fullIData(oldp+19,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[8]),32);
    bufp->fullIData(oldp+20,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[9]),32);
    bufp->fullIData(oldp+21,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[10]),32);
    bufp->fullIData(oldp+22,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[11]),32);
    bufp->fullIData(oldp+23,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[12]),32);
    bufp->fullIData(oldp+24,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[13]),32);
    bufp->fullIData(oldp+25,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[14]),32);
    bufp->fullIData(oldp+26,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[15]),32);
    bufp->fullIData(oldp+27,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[16]),32);
    bufp->fullIData(oldp+28,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[17]),32);
    bufp->fullIData(oldp+29,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[18]),32);
    bufp->fullIData(oldp+30,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[19]),32);
    bufp->fullIData(oldp+31,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[20]),32);
    bufp->fullIData(oldp+32,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[21]),32);
    bufp->fullIData(oldp+33,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[22]),32);
    bufp->fullIData(oldp+34,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[23]),32);
    bufp->fullIData(oldp+35,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[24]),32);
    bufp->fullIData(oldp+36,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[25]),32);
    bufp->fullIData(oldp+37,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[26]),32);
    bufp->fullIData(oldp+38,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[27]),32);
    bufp->fullIData(oldp+39,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[28]),32);
    bufp->fullIData(oldp+40,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[29]),32);
    bufp->fullIData(oldp+41,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[30]),32);
    bufp->fullIData(oldp+42,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[31]),32);
    bufp->fullSData(oldp+43,((0x3ffU & vlSelf->RISC_V__DOT__PC)),10);
    bufp->fullIData(oldp+44,(((IData)(4U) + vlSelf->RISC_V__DOT__PC)),32);
    bufp->fullIData(oldp+45,((vlSelf->RISC_V__DOT__instr 
                              >> 7U)),25);
    bufp->fullIData(oldp+46,(vlSelf->RISC_V__DOT__ImmOp),32);
    bufp->fullCData(oldp+47,(vlSelf->RISC_V__DOT__ALUctrl),3);
    bufp->fullCData(oldp+48,(vlSelf->RISC_V__DOT__ImmSrc),2);
    bufp->fullBit(oldp+49,(vlSelf->RISC_V__DOT__PCsrc));
    bufp->fullBit(oldp+50,(vlSelf->RISC_V__DOT__EQ));
    bufp->fullIData(oldp+51,(vlSelf->RISC_V__DOT__Alu__DOT__ALUop2),32);
    bufp->fullBit(oldp+52,(vlSelf->clk));
    bufp->fullBit(oldp+53,(vlSelf->rst));
    bufp->fullIData(oldp+54,(vlSelf->a0),32);
    bufp->fullIData(oldp+55,(((4U & (IData)(vlSelf->RISC_V__DOT__ALUctrl))
                               ? ((2U & (IData)(vlSelf->RISC_V__DOT__ALUctrl))
                                   ? 0U : ((1U & (IData)(vlSelf->RISC_V__DOT__ALUctrl))
                                            ? 0U : 
                                           (vlSelf->RISC_V__DOT__Alu__DOT__ALUop1 
                                            < vlSelf->RISC_V__DOT__Alu__DOT__ALUop2)))
                               : ((2U & (IData)(vlSelf->RISC_V__DOT__ALUctrl))
                                   ? ((1U & (IData)(vlSelf->RISC_V__DOT__ALUctrl))
                                       ? (vlSelf->RISC_V__DOT__Alu__DOT__ALUop1 
                                          | vlSelf->RISC_V__DOT__Alu__DOT__ALUop2)
                                       : (vlSelf->RISC_V__DOT__Alu__DOT__ALUop1 
                                          & vlSelf->RISC_V__DOT__Alu__DOT__ALUop2))
                                   : ((1U & (IData)(vlSelf->RISC_V__DOT__ALUctrl))
                                       ? (vlSelf->RISC_V__DOT__Alu__DOT__ALUop1 
                                          - vlSelf->RISC_V__DOT__Alu__DOT__ALUop2)
                                       : (vlSelf->RISC_V__DOT__Alu__DOT__ALUop1 
                                          + vlSelf->RISC_V__DOT__Alu__DOT__ALUop2))))),32);
    bufp->fullIData(oldp+56,(((IData)(vlSelf->RISC_V__DOT__PCsrc)
                               ? (vlSelf->RISC_V__DOT__PC 
                                  + vlSelf->RISC_V__DOT__ImmOp)
                               : ((IData)(4U) + vlSelf->RISC_V__DOT__PC))),32);
    bufp->fullIData(oldp+57,((vlSelf->RISC_V__DOT__PC 
                              + vlSelf->RISC_V__DOT__ImmOp)),32);
    bufp->fullIData(oldp+58,(0x20U),32);
    bufp->fullIData(oldp+59,(5U),32);
    bufp->fullIData(oldp+60,(0xaU),32);
    bufp->fullIData(oldp+61,(8U),32);
}
