// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_tcam.h for the primary calling header

#ifndef VERILATED_VTB_TCAM___024UNIT_H_
#define VERILATED_VTB_TCAM___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_tcam__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_tcam___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb_tcam__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_tcam___024unit(Vtb_tcam__Syms* symsp, const char* v__name);
    ~Vtb_tcam___024unit();
    VL_UNCOPYABLE(Vtb_tcam___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
