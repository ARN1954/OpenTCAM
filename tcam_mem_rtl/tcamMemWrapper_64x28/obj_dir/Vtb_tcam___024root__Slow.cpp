// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_tcam.h for the primary calling header

#include "Vtb_tcam__pch.h"
#include "Vtb_tcam__Syms.h"
#include "Vtb_tcam___024root.h"

void Vtb_tcam___024root___ctor_var_reset(Vtb_tcam___024root* vlSelf);

Vtb_tcam___024root::Vtb_tcam___024root(Vtb_tcam__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_tcam___024root___ctor_var_reset(this);
}

void Vtb_tcam___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_tcam___024root::~Vtb_tcam___024root() {
}
