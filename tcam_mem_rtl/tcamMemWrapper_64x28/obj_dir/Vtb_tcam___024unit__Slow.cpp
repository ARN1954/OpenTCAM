// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_tcam.h for the primary calling header

#include "Vtb_tcam__pch.h"
#include "Vtb_tcam__Syms.h"
#include "Vtb_tcam___024unit.h"

void Vtb_tcam___024unit___ctor_var_reset(Vtb_tcam___024unit* vlSelf);

Vtb_tcam___024unit::Vtb_tcam___024unit(Vtb_tcam__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_tcam___024unit___ctor_var_reset(this);
}

void Vtb_tcam___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_tcam___024unit::~Vtb_tcam___024unit() {
}
