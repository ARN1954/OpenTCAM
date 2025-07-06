// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_tcam.h for the primary calling header

#ifndef VERILATED_VTB_TCAM___024ROOT_H_
#define VERILATED_VTB_TCAM___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_tcam__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_tcam___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_tcam__DOT__in_clk;
        CData/*0:0*/ tb_tcam__DOT__in_csb;
        CData/*0:0*/ tb_tcam__DOT__in_web;
        CData/*3:0*/ tb_tcam__DOT__in_wmask;
        CData/*5:0*/ tb_tcam__DOT__out_pma;
        CData/*7:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__ar_addr2;
        CData/*7:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT____Vcellinp__dut_vtb__addr0;
        CData/*0:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__csb0_reg;
        CData/*0:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__web0_reg;
        CData/*3:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__wmask0_reg;
        CData/*7:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__addr0_reg;
        CData/*0:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__csb1_reg;
        CData/*7:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__addr1_reg;
        CData/*7:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__ar_addr2;
        CData/*7:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT____Vcellinp__dut_vtb__addr0;
        CData/*0:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__csb0_reg;
        CData/*0:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__web0_reg;
        CData/*3:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__wmask0_reg;
        CData/*7:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__addr0_reg;
        CData/*0:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__csb1_reg;
        CData/*7:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__addr1_reg;
        CData/*7:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__ar_addr2;
        CData/*7:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT____Vcellinp__dut_vtb__addr0;
        CData/*0:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__csb0_reg;
        CData/*0:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__web0_reg;
        CData/*3:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__wmask0_reg;
        CData/*7:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__addr0_reg;
        CData/*0:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__csb1_reg;
        CData/*7:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__addr1_reg;
        CData/*7:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__ar_addr2;
        CData/*7:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT____Vcellinp__dut_vtb__addr0;
        CData/*0:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__csb0_reg;
        CData/*0:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__web0_reg;
        CData/*3:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__wmask0_reg;
        CData/*7:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__addr0_reg;
        CData/*0:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__csb1_reg;
        CData/*7:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__addr1_reg;
        CData/*0:0*/ __Vdlyvset__tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__rdata_upper__v0;
        CData/*0:0*/ __Vdlyvset__tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__rdata_lower__v0;
        CData/*0:0*/ __Vdlyvset__tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__rdata_upper__v0;
        CData/*0:0*/ __Vdlyvset__tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__rdata_lower__v0;
        CData/*0:0*/ __Vdlyvset__tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__rdata_upper__v0;
        CData/*0:0*/ __Vdlyvset__tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__rdata_lower__v0;
        CData/*0:0*/ __Vdlyvset__tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__rdata_upper__v0;
        CData/*0:0*/ __Vdlyvset__tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__rdata_lower__v0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_tcam__DOT__in_clk__0;
        CData/*0:0*/ __VactContinue;
        IData/*27:0*/ tb_tcam__DOT__in_addr;
        IData/*31:0*/ tb_tcam__DOT__in_wdata;
        IData/*31:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__rdata_lower;
        IData/*31:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__rdata_upper;
        IData/*31:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__din0_reg;
        IData/*31:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__rdata_lower;
        IData/*31:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__rdata_upper;
        IData/*31:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__din0_reg;
        IData/*31:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__rdata_lower;
        IData/*31:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__rdata_upper;
        IData/*31:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__din0_reg;
        IData/*31:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__rdata_lower;
        IData/*31:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__rdata_upper;
        IData/*31:0*/ tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__din0_reg;
        IData/*31:0*/ __Vintraval_hc0c8a841__0;
        IData/*31:0*/ __Vintraval_h1fb90955__0;
    };
    struct {
        IData/*31:0*/ __Vintraval_h6ae8d7f6__0;
        IData/*31:0*/ __Vintraval_h6b291ae5__0;
        IData/*31:0*/ __Vintraval_h57c239e4__0;
        IData/*31:0*/ __Vintraval_h59460479__0;
        IData/*31:0*/ __Vintraval_hb2986a50__0;
        IData/*31:0*/ __Vintraval_hf0384487__0;
        IData/*31:0*/ __Vdlyvval__tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__rdata_upper__v0;
        IData/*31:0*/ __Vdlyvval__tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__rdata_lower__v0;
        IData/*31:0*/ __Vdlyvval__tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__rdata_upper__v0;
        IData/*31:0*/ __Vdlyvval__tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__rdata_lower__v0;
        IData/*31:0*/ __Vdlyvval__tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__rdata_upper__v0;
        IData/*31:0*/ __Vdlyvval__tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__rdata_lower__v0;
        IData/*31:0*/ __Vdlyvval__tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__rdata_upper__v0;
        IData/*31:0*/ __Vdlyvval__tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__rdata_lower__v0;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ tb_tcam__DOT__dut__DOT__out_gate2;
        QData/*63:0*/ tb_tcam__DOT__dut__DOT__out_andgate;
        VlUnpacked<IData/*31:0*/, 256> tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__mem;
        VlUnpacked<IData/*31:0*/, 256> tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__mem;
        VlUnpacked<IData/*31:0*/, 256> tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__mem;
        VlUnpacked<IData/*31:0*/, 256> tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__mem;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h0f0a937a__0;
    VlTriggerScheduler __VtrigSched_h0f0a9447__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_tcam__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_tcam___024root(Vtb_tcam__Syms* symsp, const char* v__name);
    ~Vtb_tcam___024root();
    VL_UNCOPYABLE(Vtb_tcam___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
