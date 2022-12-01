// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRISC_V.h for the primary calling header

#include "verilated.h"

#include "VRISC_V__Syms.h"
#include "VRISC_V___024root.h"

void VRISC_V___024root___ctor_var_reset(VRISC_V___024root* vlSelf);

VRISC_V___024root::VRISC_V___024root(VRISC_V__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VRISC_V___024root___ctor_var_reset(this);
}

void VRISC_V___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VRISC_V___024root::~VRISC_V___024root() {
}
