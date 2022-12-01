// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRISC_V.h for the primary calling header

#include "verilated.h"

#include "VRISC_V___024root.h"

VL_ATTR_COLD void VRISC_V___024root___initial__TOP__0(VRISC_V___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V___024root___initial__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hb2c2e739__0;
    // Body
    vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[0U] = 0U;
    vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[1U] = 0U;
    vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[2U] = 0U;
    vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[3U] = 0U;
    vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[4U] = 0U;
    vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[5U] = 0U;
    vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[6U] = 0U;
    vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[7U] = 0U;
    vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[8U] = 0U;
    vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[9U] = 0U;
    vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[0xaU] = 0U;
    vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[0xbU] = 0U;
    vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[0xcU] = 0U;
    vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[0xdU] = 0U;
    vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[0xeU] = 0U;
    vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[0xfU] = 0U;
    vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[0x10U] = 0U;
    vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[0x11U] = 0U;
    vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[0x12U] = 0U;
    vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[0x13U] = 0U;
    vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[0x14U] = 0U;
    vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[0x15U] = 0U;
    vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[0x16U] = 0U;
    vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[0x17U] = 0U;
    vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[0x18U] = 0U;
    vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[0x19U] = 0U;
    vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[0x1aU] = 0U;
    vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[0x1bU] = 0U;
    vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[0x1cU] = 0U;
    vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[0x1dU] = 0U;
    vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[0x1eU] = 0U;
    vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[0x1fU] = 0U;
    vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__unnamedblk1__DOT__i = 0x20U;
    __Vtemp_hb2c2e739__0[0U] = 0x2e6d656dU;
    __Vtemp_hb2c2e739__0[1U] = 0x74696f6eU;
    __Vtemp_hb2c2e739__0[2U] = 0x74727563U;
    __Vtemp_hb2c2e739__0[3U] = 0x696e73U;
    VL_READMEM_N(true, 8, 1024, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_hb2c2e739__0)
                 ,  &(vlSelf->RISC_V__DOT__INSTR__DOT__rom)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VRISC_V___024root___settle__TOP__0(VRISC_V___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->a0 = vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array
        [0xaU];
    vlSelf->RISC_V__DOT__instr = ((vlSelf->RISC_V__DOT__INSTR__DOT__rom
                                   [(0x3ffU & vlSelf->RISC_V__DOT__PC)] 
                                   << 0x18U) | ((vlSelf->RISC_V__DOT__INSTR__DOT__rom
                                                 [(0x3ffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->RISC_V__DOT__PC))] 
                                                 << 0x10U) 
                                                | ((vlSelf->RISC_V__DOT__INSTR__DOT__rom
                                                    [
                                                    (0x3ffU 
                                                     & ((IData)(2U) 
                                                        + vlSelf->RISC_V__DOT__PC))] 
                                                    << 8U) 
                                                   | vlSelf->RISC_V__DOT__INSTR__DOT__rom
                                                   [
                                                   (0x3ffU 
                                                    & ((IData)(3U) 
                                                       + vlSelf->RISC_V__DOT__PC))])));
    vlSelf->RISC_V__DOT__RegWrite = 0U;
    vlSelf->RISC_V__DOT__ALUsrc = 1U;
    vlSelf->RISC_V__DOT__Alu__DOT__ALUop1 = vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array
        [(0x1fU & (vlSelf->RISC_V__DOT__instr >> 0xfU))];
    vlSelf->RISC_V__DOT__EQ = (vlSelf->RISC_V__DOT__Alu__DOT__ALUop1 
                               == vlSelf->RISC_V__DOT__Alu__DOT__ALUop2);
    vlSelf->RISC_V__DOT__ALUctrl = 7U;
    vlSelf->RISC_V__DOT__PCsrc = 0U;
    if ((0x13U != (0x7fU & vlSelf->RISC_V__DOT__instr))) {
        if ((0x63U == (0x7fU & vlSelf->RISC_V__DOT__instr))) {
            if ((1U == (7U & (vlSelf->RISC_V__DOT__instr 
                              >> 0xcU)))) {
                vlSelf->RISC_V__DOT__ALUsrc = 0U;
                if ((1U & (~ (IData)(vlSelf->RISC_V__DOT__EQ)))) {
                    vlSelf->RISC_V__DOT__PCsrc = 1U;
                }
            }
        }
    }
    vlSelf->RISC_V__DOT__ImmSrc = 3U;
    if ((0x13U == (0x7fU & vlSelf->RISC_V__DOT__instr))) {
        if ((0U == (7U & (vlSelf->RISC_V__DOT__instr 
                          >> 0xcU)))) {
            vlSelf->RISC_V__DOT__RegWrite = 1U;
            vlSelf->RISC_V__DOT__ALUctrl = 0U;
            vlSelf->RISC_V__DOT__ImmSrc = 0U;
        }
    } else if ((0x63U == (0x7fU & vlSelf->RISC_V__DOT__instr))) {
        if ((1U == (7U & (vlSelf->RISC_V__DOT__instr 
                          >> 0xcU)))) {
            if ((1U & (~ (IData)(vlSelf->RISC_V__DOT__EQ)))) {
                vlSelf->RISC_V__DOT__ALUctrl = 7U;
                vlSelf->RISC_V__DOT__ImmSrc = 3U;
            }
        }
    }
    vlSelf->RISC_V__DOT__ImmOp = ((2U & (IData)(vlSelf->RISC_V__DOT__ImmSrc))
                                   ? ((1U & (IData)(vlSelf->RISC_V__DOT__ImmSrc))
                                       ? (((- (IData)(
                                                      (vlSelf->RISC_V__DOT__instr 
                                                       >> 0x1fU))) 
                                           << 0xbU) 
                                          | ((0x400U 
                                              & (vlSelf->RISC_V__DOT__instr 
                                                 << 3U)) 
                                             | ((0x3f0U 
                                                 & (vlSelf->RISC_V__DOT__instr 
                                                    >> 0x15U)) 
                                                | (0xfU 
                                                   & (vlSelf->RISC_V__DOT__instr 
                                                      >> 8U)))))
                                       : (((- (IData)(
                                                      (vlSelf->RISC_V__DOT__instr 
                                                       >> 0x1fU))) 
                                           << 0xcU) 
                                          | ((0xfe0U 
                                              & (vlSelf->RISC_V__DOT__instr 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSelf->RISC_V__DOT__instr 
                                                   >> 7U)))))
                                   : ((1U & (IData)(vlSelf->RISC_V__DOT__ImmSrc))
                                       ? (0xfffff000U 
                                          & vlSelf->RISC_V__DOT__instr)
                                       : (((- (IData)(
                                                      (vlSelf->RISC_V__DOT__instr 
                                                       >> 0x1fU))) 
                                           << 0xcU) 
                                          | (vlSelf->RISC_V__DOT__instr 
                                             >> 0x14U))));
    vlSelf->RISC_V__DOT__Alu__DOT__ALUop2 = ((IData)(vlSelf->RISC_V__DOT__ALUsrc)
                                              ? vlSelf->RISC_V__DOT__ImmOp
                                              : vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array
                                             [(0x1fU 
                                               & (vlSelf->RISC_V__DOT__instr 
                                                  >> 0x14U))]);
    vlSelf->RISC_V__DOT__PgrC__DOT__mux_output = ((IData)(vlSelf->RISC_V__DOT__PCsrc)
                                                   ? 
                                                  (vlSelf->RISC_V__DOT__PC 
                                                   + vlSelf->RISC_V__DOT__ImmOp)
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelf->RISC_V__DOT__PC));
}

VL_ATTR_COLD void VRISC_V___024root___eval_initial(VRISC_V___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V___024root___eval_initial\n"); );
    // Body
    VRISC_V___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void VRISC_V___024root___eval_settle(VRISC_V___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V___024root___eval_settle\n"); );
    // Body
    VRISC_V___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VRISC_V___024root___final(VRISC_V___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V___024root___final\n"); );
}

VL_ATTR_COLD void VRISC_V___024root___ctor_var_reset(VRISC_V___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->RISC_V__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->RISC_V__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->RISC_V__DOT__ImmOp = VL_RAND_RESET_I(32);
    vlSelf->RISC_V__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->RISC_V__DOT__ALUctrl = VL_RAND_RESET_I(3);
    vlSelf->RISC_V__DOT__ALUsrc = VL_RAND_RESET_I(1);
    vlSelf->RISC_V__DOT__ImmSrc = VL_RAND_RESET_I(2);
    vlSelf->RISC_V__DOT__PCsrc = VL_RAND_RESET_I(1);
    vlSelf->RISC_V__DOT__EQ = VL_RAND_RESET_I(1);
    vlSelf->RISC_V__DOT__PgrC__DOT__mux_output = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        vlSelf->RISC_V__DOT__INSTR__DOT__rom[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->RISC_V__DOT__Alu__DOT__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->RISC_V__DOT__Alu__DOT__ALUop2 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__Vchglast__TOP__RISC_V__DOT__Alu__DOT__ALUop2 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
