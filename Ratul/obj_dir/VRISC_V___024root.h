// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRISC_V.h for the primary calling header

#ifndef VERILATED_VRISC_V___024ROOT_H_
#define VERILATED_VRISC_V___024ROOT_H_  // guard

#include "verilated.h"

class VRISC_V__Syms;

class VRISC_V___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ RISC_V__DOT__RegWrite;
    CData/*2:0*/ RISC_V__DOT__ALUctrl;
    CData/*0:0*/ RISC_V__DOT__ALUsrc;
    CData/*1:0*/ RISC_V__DOT__ImmSrc;
    CData/*0:0*/ RISC_V__DOT__PCsrc;
    CData/*0:0*/ RISC_V__DOT__EQ;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_OUT(a0,31,0);
    IData/*31:0*/ RISC_V__DOT__PC;
    IData/*31:0*/ RISC_V__DOT__instr;
    IData/*31:0*/ RISC_V__DOT__ImmOp;
    IData/*31:0*/ RISC_V__DOT__PgrC__DOT__mux_output;
    IData/*31:0*/ RISC_V__DOT__Alu__DOT__ALUop1;
    IData/*31:0*/ RISC_V__DOT__Alu__DOT__ALUop2;
    IData/*31:0*/ RISC_V__DOT__Alu__DOT__alu_reg__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __Vchglast__TOP__RISC_V__DOT__Alu__DOT__ALUop2;
    VlUnpacked<CData/*7:0*/, 1024> RISC_V__DOT__INSTR__DOT__rom;
    VlUnpacked<IData/*31:0*/, 32> RISC_V__DOT__Alu__DOT__alu_reg__DOT__regfile_array;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VRISC_V__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRISC_V___024root(VRISC_V__Syms* symsp, const char* name);
    ~VRISC_V___024root();
    VL_UNCOPYABLE(VRISC_V___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
