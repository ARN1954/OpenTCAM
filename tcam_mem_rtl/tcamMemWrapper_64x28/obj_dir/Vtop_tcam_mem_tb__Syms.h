// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP_TCAM_MEM_TB__SYMS_H_
#define VERILATED_VTOP_TCAM_MEM_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop_tcam_mem_tb.h"

// INCLUDE MODULE CLASSES
#include "Vtop_tcam_mem_tb___024root.h"
#include "Vtop_tcam_mem_tb___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtop_tcam_mem_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop_tcam_mem_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop_tcam_mem_tb___024root     TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_top_tcam_mem_tb__dut__tcam7x64_dut0__dut_vtb;
    VerilatedScope __Vscope_top_tcam_mem_tb__dut__tcam7x64_dut1__dut_vtb;
    VerilatedScope __Vscope_top_tcam_mem_tb__dut__tcam7x64_dut2__dut_vtb;
    VerilatedScope __Vscope_top_tcam_mem_tb__dut__tcam7x64_dut3__dut_vtb;

    // CONSTRUCTORS
    Vtop_tcam_mem_tb__Syms(VerilatedContext* contextp, const char* namep, Vtop_tcam_mem_tb* modelp);
    ~Vtop_tcam_mem_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
