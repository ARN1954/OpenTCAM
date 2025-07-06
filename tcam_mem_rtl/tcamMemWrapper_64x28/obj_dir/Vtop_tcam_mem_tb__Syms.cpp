// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop_tcam_mem_tb__pch.h"
#include "Vtop_tcam_mem_tb.h"
#include "Vtop_tcam_mem_tb___024root.h"
#include "Vtop_tcam_mem_tb___024unit.h"

// FUNCTIONS
Vtop_tcam_mem_tb__Syms::~Vtop_tcam_mem_tb__Syms()
{
}

Vtop_tcam_mem_tb__Syms::Vtop_tcam_mem_tb__Syms(VerilatedContext* contextp, const char* namep, Vtop_tcam_mem_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(74);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_top_tcam_mem_tb__dut__tcam7x64_dut0__dut_vtb.configure(this, name(), "top_tcam_mem_tb.dut.tcam7x64_dut0.dut_vtb", "dut_vtb", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_tcam_mem_tb__dut__tcam7x64_dut1__dut_vtb.configure(this, name(), "top_tcam_mem_tb.dut.tcam7x64_dut1.dut_vtb", "dut_vtb", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_tcam_mem_tb__dut__tcam7x64_dut2__dut_vtb.configure(this, name(), "top_tcam_mem_tb.dut.tcam7x64_dut2.dut_vtb", "dut_vtb", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_tcam_mem_tb__dut__tcam7x64_dut3__dut_vtb.configure(this, name(), "top_tcam_mem_tb.dut.tcam7x64_dut3.dut_vtb", "dut_vtb", -9, VerilatedScope::SCOPE_OTHER);
}
