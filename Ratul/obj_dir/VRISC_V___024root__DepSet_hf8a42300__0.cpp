// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRISC_V.h for the primary calling header

#include "verilated.h"

#include "VRISC_V___024root.h"

VL_INLINE_OPT void VRISC_V___024root___sequent__TOP__0(VRISC_V___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array__v0;
    IData/*31:0*/ __Vdlyvval__RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array__v0;
    CData/*0:0*/ __Vdlyvset__RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array__v0;
    // Body
    __Vdlyvset__RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array__v0 = 0U;
    vlSelf->RISC_V__DOT__PC = ((IData)(vlSelf->rst)
                                ? 0U : vlSelf->RISC_V__DOT__PgrC__DOT__mux_output);
    if (vlSelf->RISC_V__DOT__RegWrite) {
        __Vdlyvval__RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array__v0 
            = ((4U & (IData)(vlSelf->RISC_V__DOT__ALUctrl))
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
                           + vlSelf->RISC_V__DOT__Alu__DOT__ALUop2))));
        __Vdlyvset__RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array__v0 = 1U;
        __Vdlyvdim0__RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array__v0 
            = (0x1fU & (vlSelf->RISC_V__DOT__instr 
                        >> 7U));
    }
    if (__Vdlyvset__RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array__v0) {
        vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array[__Vdlyvdim0__RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array__v0] 
            = __Vdlyvval__RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array__v0;
    }
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
    vlSelf->a0 = vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array
        [0xaU];
    vlSelf->RISC_V__DOT__RegWrite = 0U;
    if ((0x13U == (0x7fU & vlSelf->RISC_V__DOT__instr))) {
        if ((0U == (7U & (vlSelf->RISC_V__DOT__instr 
                          >> 0xcU)))) {
            vlSelf->RISC_V__DOT__RegWrite = 1U;
        }
    }
    vlSelf->RISC_V__DOT__ALUsrc = 1U;
    if ((0x13U != (0x7fU & vlSelf->RISC_V__DOT__instr))) {
        if ((0x63U == (0x7fU & vlSelf->RISC_V__DOT__instr))) {
            if ((1U == (7U & (vlSelf->RISC_V__DOT__instr 
                              >> 0xcU)))) {
                vlSelf->RISC_V__DOT__ALUsrc = 0U;
            }
        }
    }
    vlSelf->RISC_V__DOT__Alu__DOT__ALUop1 = vlSelf->RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array
        [(0x1fU & (vlSelf->RISC_V__DOT__instr >> 0xfU))];
}

VL_INLINE_OPT void VRISC_V___024root___combo__TOP__0(VRISC_V___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->RISC_V__DOT__EQ = (vlSelf->RISC_V__DOT__Alu__DOT__ALUop1 
                               == vlSelf->RISC_V__DOT__Alu__DOT__ALUop2);
    vlSelf->RISC_V__DOT__ALUctrl = 7U;
    vlSelf->RISC_V__DOT__PCsrc = 0U;
    if ((0x13U != (0x7fU & vlSelf->RISC_V__DOT__instr))) {
        if ((0x63U == (0x7fU & vlSelf->RISC_V__DOT__instr))) {
            if ((1U == (7U & (vlSelf->RISC_V__DOT__instr 
                              >> 0xcU)))) {
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

void VRISC_V___024root___eval(VRISC_V___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VRISC_V___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    VRISC_V___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData VRISC_V___024root___change_request_1(VRISC_V___024root* vlSelf);

VL_INLINE_OPT QData VRISC_V___024root___change_request(VRISC_V___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V___024root___change_request\n"); );
    // Body
    return (VRISC_V___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VRISC_V___024root___change_request_1(VRISC_V___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->RISC_V__DOT__Alu__DOT__ALUop2 ^ vlSelf->__Vchglast__TOP__RISC_V__DOT__Alu__DOT__ALUop2));
    VL_DEBUG_IF( if(__req && ((vlSelf->RISC_V__DOT__Alu__DOT__ALUop2 ^ vlSelf->__Vchglast__TOP__RISC_V__DOT__Alu__DOT__ALUop2))) VL_DBG_MSGF("        CHANGE: topAlu.sv:20: RISC_V.Alu.ALUop2\n"); );
    // Final
    vlSelf->__Vchglast__TOP__RISC_V__DOT__Alu__DOT__ALUop2 
        = vlSelf->RISC_V__DOT__Alu__DOT__ALUop2;
    return __req;
}

#ifdef VL_DEBUG
void VRISC_V___024root___eval_debug_assertions(VRISC_V___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
