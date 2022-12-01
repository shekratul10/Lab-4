// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRISC_V__Syms.h"


void VRISC_V___024root__trace_chg_sub_0(VRISC_V___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VRISC_V___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V___024root__trace_chg_top_0\n"); );
    // Init
    VRISC_V___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRISC_V___024root*>(voidSelf);
    VRISC_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VRISC_V___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VRISC_V___024root__trace_chg_sub_0(VRISC_V___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+1,(vlSelf->RISC_V__DOT__PC),32);
        bufp->chgIData(oldp+2,(vlSelf->RISC_V__DOT__instr),32);
        bufp->chgBit(oldp+3,(vlSelf->RISC_V__DOT__RegWrite));
        bufp->chgBit(oldp+4,(vlSelf->RISC_V__DOT__ALUsrc));
        bufp->chgCData(oldp+5,((0x1fU & (vlSelf->RISC_V__DOT__instr 
                                         >> 0xfU))),5);
        bufp->chgCData(oldp+6,((0x1fU & (vlSelf->RISC_V__DOT__instr 
                                         >> 0x14U))),5);
        bufp->chgCData(oldp+7,((0x1fU & (vlSelf->RISC_V__DOT__instr 
                                         >> 7U))),5);
        bufp->chgIData(oldp+8,(vlSelf->RISC_V__DOT__Alu__DOT__ALUop1),32);
        bufp->chgIData(oldp+9,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array
                               [(0x1fU & (vlSelf->RISC_V__DOT__instr 
                                          >> 0x14U))]),32);
        bufp->chgIData(oldp+10,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[0]),32);
        bufp->chgIData(oldp+11,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[1]),32);
        bufp->chgIData(oldp+12,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[2]),32);
        bufp->chgIData(oldp+13,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[3]),32);
        bufp->chgIData(oldp+14,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[4]),32);
        bufp->chgIData(oldp+15,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[5]),32);
        bufp->chgIData(oldp+16,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[6]),32);
        bufp->chgIData(oldp+17,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[7]),32);
        bufp->chgIData(oldp+18,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[8]),32);
        bufp->chgIData(oldp+19,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[9]),32);
        bufp->chgIData(oldp+20,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[10]),32);
        bufp->chgIData(oldp+21,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[11]),32);
        bufp->chgIData(oldp+22,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[12]),32);
        bufp->chgIData(oldp+23,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[13]),32);
        bufp->chgIData(oldp+24,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[14]),32);
        bufp->chgIData(oldp+25,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[15]),32);
        bufp->chgIData(oldp+26,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[16]),32);
        bufp->chgIData(oldp+27,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[17]),32);
        bufp->chgIData(oldp+28,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[18]),32);
        bufp->chgIData(oldp+29,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[19]),32);
        bufp->chgIData(oldp+30,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[20]),32);
        bufp->chgIData(oldp+31,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[21]),32);
        bufp->chgIData(oldp+32,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[22]),32);
        bufp->chgIData(oldp+33,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[23]),32);
        bufp->chgIData(oldp+34,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[24]),32);
        bufp->chgIData(oldp+35,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[25]),32);
        bufp->chgIData(oldp+36,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[26]),32);
        bufp->chgIData(oldp+37,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[27]),32);
        bufp->chgIData(oldp+38,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[28]),32);
        bufp->chgIData(oldp+39,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[29]),32);
        bufp->chgIData(oldp+40,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[30]),32);
        bufp->chgIData(oldp+41,(vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[31]),32);
        bufp->chgSData(oldp+42,((0x3ffU & vlSelf->RISC_V__DOT__PC)),10);
        bufp->chgIData(oldp+43,(((IData)(4U) + vlSelf->RISC_V__DOT__PC)),32);
        bufp->chgIData(oldp+44,((vlSelf->RISC_V__DOT__instr 
                                 >> 7U)),25);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+45,(vlSelf->RISC_V__DOT__ImmOp),32);
        bufp->chgCData(oldp+46,(vlSelf->RISC_V__DOT__ALUctrl),3);
        bufp->chgCData(oldp+47,(vlSelf->RISC_V__DOT__ImmSrc),2);
        bufp->chgBit(oldp+48,(vlSelf->RISC_V__DOT__PCsrc));
        bufp->chgBit(oldp+49,(vlSelf->RISC_V__DOT__EQ));
        bufp->chgIData(oldp+50,(vlSelf->RISC_V__DOT__Alu__DOT__ALUop2),32);
    }
    bufp->chgBit(oldp+51,(vlSelf->clk));
    bufp->chgBit(oldp+52,(vlSelf->rst));
    bufp->chgIData(oldp+53,(vlSelf->a0),32);
    bufp->chgIData(oldp+54,(((4U & (IData)(vlSelf->RISC_V__DOT__ALUctrl))
                              ? ((2U & (IData)(vlSelf->RISC_V__DOT__ALUctrl))
                                  ? 0U : ((1U & (IData)(vlSelf->RISC_V__DOT__ALUctrl))
                                           ? 0U : (vlSelf->RISC_V__DOT__Alu__DOT__ALUop1 
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
    bufp->chgIData(oldp+55,(((IData)(vlSelf->RISC_V__DOT__PCsrc)
                              ? (vlSelf->RISC_V__DOT__PC 
                                 + vlSelf->RISC_V__DOT__ImmOp)
                              : ((IData)(4U) + vlSelf->RISC_V__DOT__PC))),32);
    bufp->chgIData(oldp+56,((vlSelf->RISC_V__DOT__PC 
                             + vlSelf->RISC_V__DOT__ImmOp)),32);
}

void VRISC_V___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V___024root__trace_cleanup\n"); );
    // Init
    VRISC_V___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRISC_V___024root*>(voidSelf);
    VRISC_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
