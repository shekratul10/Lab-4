// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VRISC_V.h"
#include "VRISC_V__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VRISC_V::VRISC_V(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VRISC_V__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , a0{vlSymsp->TOP.a0}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VRISC_V::VRISC_V(const char* _vcname__)
    : VRISC_V(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VRISC_V::~VRISC_V() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VRISC_V___024root___eval_initial(VRISC_V___024root* vlSelf);
void VRISC_V___024root___eval_settle(VRISC_V___024root* vlSelf);
void VRISC_V___024root___eval(VRISC_V___024root* vlSelf);
QData VRISC_V___024root___change_request(VRISC_V___024root* vlSelf);
#ifdef VL_DEBUG
void VRISC_V___024root___eval_debug_assertions(VRISC_V___024root* vlSelf);
#endif  // VL_DEBUG
void VRISC_V___024root___final(VRISC_V___024root* vlSelf);

static void _eval_initial_loop(VRISC_V__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VRISC_V___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VRISC_V___024root___eval_settle(&(vlSymsp->TOP));
        VRISC_V___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VRISC_V___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("RISC_V.sv", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VRISC_V___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VRISC_V::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRISC_V::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VRISC_V___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VRISC_V___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VRISC_V___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("RISC_V.sv", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VRISC_V___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VRISC_V::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VRISC_V::final() {
    VRISC_V___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VRISC_V::hierName() const { return vlSymsp->name(); }
const char* VRISC_V::modelName() const { return "VRISC_V"; }
unsigned VRISC_V::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VRISC_V::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VRISC_V___024root__trace_init_top(VRISC_V___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VRISC_V___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRISC_V___024root*>(voidSelf);
    VRISC_V__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VRISC_V___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VRISC_V___024root__trace_register(VRISC_V___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VRISC_V::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VRISC_V___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
