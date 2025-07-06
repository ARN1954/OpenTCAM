// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_tcam__pch.h"
#include "Vtb_tcam.h"
#include "Vtb_tcam___024root.h"
#include "Vtb_tcam___024unit.h"

// FUNCTIONS
Vtb_tcam__Syms::~Vtb_tcam__Syms()
{
}

Vtb_tcam__Syms::Vtb_tcam__Syms(VerilatedContext* contextp, const char* namep, Vtb_tcam* modelp)
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
    __Vscope_tb_tcam__dut__tcam7x64_dut0__dut_vtb.configure(this, name(), "tb_tcam.dut.tcam7x64_dut0.dut_vtb", "dut_vtb", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_tcam__dut__tcam7x64_dut1__dut_vtb.configure(this, name(), "tb_tcam.dut.tcam7x64_dut1.dut_vtb", "dut_vtb", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_tcam__dut__tcam7x64_dut2__dut_vtb.configure(this, name(), "tb_tcam.dut.tcam7x64_dut2.dut_vtb", "dut_vtb", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_tcam__dut__tcam7x64_dut3__dut_vtb.configure(this, name(), "tb_tcam.dut.tcam7x64_dut3.dut_vtb", "dut_vtb", -9, VerilatedScope::SCOPE_OTHER);
}
