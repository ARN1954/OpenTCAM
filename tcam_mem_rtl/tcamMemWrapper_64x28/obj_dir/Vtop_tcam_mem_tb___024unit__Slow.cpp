// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tcam_mem_tb.h for the primary calling header

#include "Vtop_tcam_mem_tb__pch.h"
#include "Vtop_tcam_mem_tb__Syms.h"
#include "Vtop_tcam_mem_tb___024unit.h"

void Vtop_tcam_mem_tb___024unit___ctor_var_reset(Vtop_tcam_mem_tb___024unit* vlSelf);

Vtop_tcam_mem_tb___024unit::Vtop_tcam_mem_tb___024unit(Vtop_tcam_mem_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_tcam_mem_tb___024unit___ctor_var_reset(this);
}

void Vtop_tcam_mem_tb___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_tcam_mem_tb___024unit::~Vtop_tcam_mem_tb___024unit() {
}
