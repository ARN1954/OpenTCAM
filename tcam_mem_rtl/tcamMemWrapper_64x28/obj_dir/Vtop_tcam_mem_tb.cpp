// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop_tcam_mem_tb__pch.h"

//============================================================
// Constructors

Vtop_tcam_mem_tb::Vtop_tcam_mem_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtop_tcam_mem_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtop_tcam_mem_tb::Vtop_tcam_mem_tb(const char* _vcname__)
    : Vtop_tcam_mem_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtop_tcam_mem_tb::~Vtop_tcam_mem_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtop_tcam_mem_tb___024root___eval_debug_assertions(Vtop_tcam_mem_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop_tcam_mem_tb___024root___eval_static(Vtop_tcam_mem_tb___024root* vlSelf);
void Vtop_tcam_mem_tb___024root___eval_initial(Vtop_tcam_mem_tb___024root* vlSelf);
void Vtop_tcam_mem_tb___024root___eval_settle(Vtop_tcam_mem_tb___024root* vlSelf);
void Vtop_tcam_mem_tb___024root___eval(Vtop_tcam_mem_tb___024root* vlSelf);

void Vtop_tcam_mem_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop_tcam_mem_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtop_tcam_mem_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtop_tcam_mem_tb___024root___eval_static(&(vlSymsp->TOP));
        Vtop_tcam_mem_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vtop_tcam_mem_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtop_tcam_mem_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtop_tcam_mem_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtop_tcam_mem_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtop_tcam_mem_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtop_tcam_mem_tb___024root___eval_final(Vtop_tcam_mem_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_tcam_mem_tb::final() {
    Vtop_tcam_mem_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtop_tcam_mem_tb::hierName() const { return vlSymsp->name(); }
const char* Vtop_tcam_mem_tb::modelName() const { return "Vtop_tcam_mem_tb"; }
unsigned Vtop_tcam_mem_tb::threads() const { return 1; }
void Vtop_tcam_mem_tb::prepareClone() const { contextp()->prepareClone(); }
void Vtop_tcam_mem_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vtop_tcam_mem_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtop_tcam_mem_tb::trace()' called on model that was Verilated without --trace option");
}
