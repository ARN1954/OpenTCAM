// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_tcam__pch.h"

//============================================================
// Constructors

Vtb_tcam::Vtb_tcam(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_tcam__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_tcam::Vtb_tcam(const char* _vcname__)
    : Vtb_tcam(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_tcam::~Vtb_tcam() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_tcam___024root___eval_debug_assertions(Vtb_tcam___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_tcam___024root___eval_static(Vtb_tcam___024root* vlSelf);
void Vtb_tcam___024root___eval_initial(Vtb_tcam___024root* vlSelf);
void Vtb_tcam___024root___eval_settle(Vtb_tcam___024root* vlSelf);
void Vtb_tcam___024root___eval(Vtb_tcam___024root* vlSelf);

void Vtb_tcam::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_tcam::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_tcam___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_tcam___024root___eval_static(&(vlSymsp->TOP));
        Vtb_tcam___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_tcam___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_tcam___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_tcam::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_tcam::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_tcam::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_tcam___024root___eval_final(Vtb_tcam___024root* vlSelf);

VL_ATTR_COLD void Vtb_tcam::final() {
    Vtb_tcam___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_tcam::hierName() const { return vlSymsp->name(); }
const char* Vtb_tcam::modelName() const { return "Vtb_tcam"; }
unsigned Vtb_tcam::threads() const { return 1; }
void Vtb_tcam::prepareClone() const { contextp()->prepareClone(); }
void Vtb_tcam::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vtb_tcam::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_tcam::trace()' called on model that was Verilated without --trace option");
}
