// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_TCAM__SYMS_H_
#define VERILATED_VTB_TCAM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_tcam.h"

// INCLUDE MODULE CLASSES
#include "Vtb_tcam___024root.h"
#include "Vtb_tcam___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_tcam__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_tcam* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_tcam___024root             TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_tb_tcam__dut__tcam7x64_dut0__dut_vtb;
    VerilatedScope __Vscope_tb_tcam__dut__tcam7x64_dut1__dut_vtb;
    VerilatedScope __Vscope_tb_tcam__dut__tcam7x64_dut2__dut_vtb;
    VerilatedScope __Vscope_tb_tcam__dut__tcam7x64_dut3__dut_vtb;

    // CONSTRUCTORS
    Vtb_tcam__Syms(VerilatedContext* contextp, const char* namep, Vtb_tcam* modelp);
    ~Vtb_tcam__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
