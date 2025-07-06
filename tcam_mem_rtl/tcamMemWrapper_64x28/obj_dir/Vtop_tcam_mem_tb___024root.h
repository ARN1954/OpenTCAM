// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_tcam_mem_tb.h for the primary calling header

#ifndef VERILATED_VTOP_TCAM_MEM_TB___024ROOT_H_
#define VERILATED_VTOP_TCAM_MEM_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtop_tcam_mem_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_tcam_mem_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ top_tcam_mem_tb__DOT__in_clk;
        CData/*0:0*/ top_tcam_mem_tb__DOT__in_csb;
        CData/*0:0*/ top_tcam_mem_tb__DOT__in_web;
        CData/*3:0*/ top_tcam_mem_tb__DOT__in_wmask;
        CData/*5:0*/ top_tcam_mem_tb__DOT__out_pma;
        CData/*7:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut0__DOT__ar_addr2;
        CData/*7:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut0__DOT____Vcellinp__dut_vtb__addr0;
        CData/*0:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__csb0_reg;
        CData/*0:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__web0_reg;
        CData/*3:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__wmask0_reg;
        CData/*7:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__addr0_reg;
        CData/*0:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__csb1_reg;
        CData/*7:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__addr1_reg;
        CData/*7:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut1__DOT__ar_addr2;
        CData/*7:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut1__DOT____Vcellinp__dut_vtb__addr0;
        CData/*0:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__csb0_reg;
        CData/*0:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__web0_reg;
        CData/*3:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__wmask0_reg;
        CData/*7:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__addr0_reg;
        CData/*0:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__csb1_reg;
        CData/*7:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__addr1_reg;
        CData/*7:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut2__DOT__ar_addr2;
        CData/*7:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut2__DOT____Vcellinp__dut_vtb__addr0;
        CData/*0:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__csb0_reg;
        CData/*0:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__web0_reg;
        CData/*3:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__wmask0_reg;
        CData/*7:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__addr0_reg;
        CData/*0:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__csb1_reg;
        CData/*7:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__addr1_reg;
        CData/*7:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut3__DOT__ar_addr2;
        CData/*7:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut3__DOT____Vcellinp__dut_vtb__addr0;
        CData/*0:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__csb0_reg;
        CData/*0:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__web0_reg;
        CData/*3:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__wmask0_reg;
        CData/*7:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__addr0_reg;
        CData/*0:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__csb1_reg;
        CData/*7:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__addr1_reg;
        CData/*0:0*/ __Vdlyvset__top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut3__DOT__rdata_upper__v0;
        CData/*0:0*/ __Vdlyvset__top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut3__DOT__rdata_lower__v0;
        CData/*0:0*/ __Vdlyvset__top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut2__DOT__rdata_upper__v0;
        CData/*0:0*/ __Vdlyvset__top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut2__DOT__rdata_lower__v0;
        CData/*0:0*/ __Vdlyvset__top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut1__DOT__rdata_upper__v0;
        CData/*0:0*/ __Vdlyvset__top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut1__DOT__rdata_lower__v0;
        CData/*0:0*/ __Vdlyvset__top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut0__DOT__rdata_upper__v0;
        CData/*0:0*/ __Vdlyvset__top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut0__DOT__rdata_lower__v0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top_tcam_mem_tb__DOT__in_clk__0;
        CData/*0:0*/ __VactContinue;
        IData/*27:0*/ top_tcam_mem_tb__DOT__in_addr;
        IData/*31:0*/ top_tcam_mem_tb__DOT__in_wdata;
        IData/*31:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut0__DOT__rdata_lower;
        IData/*31:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut0__DOT__rdata_upper;
        IData/*31:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__din0_reg;
        IData/*31:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut1__DOT__rdata_lower;
        IData/*31:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut1__DOT__rdata_upper;
        IData/*31:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__din0_reg;
        IData/*31:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut2__DOT__rdata_lower;
        IData/*31:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut2__DOT__rdata_upper;
        IData/*31:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__din0_reg;
        IData/*31:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut3__DOT__rdata_lower;
        IData/*31:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut3__DOT__rdata_upper;
        IData/*31:0*/ top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__din0_reg;
        IData/*31:0*/ __Vintraval_h0b077030__0;
        IData/*31:0*/ __Vintraval_h6a83bcb2__0;
    };
    struct {
        IData/*31:0*/ __Vintraval_hc4b1ecbc__0;
        IData/*31:0*/ __Vintraval_h4c939d6f__0;
        IData/*31:0*/ __Vintraval_h5a4e0b02__0;
        IData/*31:0*/ __Vintraval_h450a2a5b__0;
        IData/*31:0*/ __Vintraval_hd3743077__0;
        IData/*31:0*/ __Vintraval_h039ff142__0;
        IData/*31:0*/ __Vdlyvval__top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut3__DOT__rdata_upper__v0;
        IData/*31:0*/ __Vdlyvval__top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut3__DOT__rdata_lower__v0;
        IData/*31:0*/ __Vdlyvval__top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut2__DOT__rdata_upper__v0;
        IData/*31:0*/ __Vdlyvval__top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut2__DOT__rdata_lower__v0;
        IData/*31:0*/ __Vdlyvval__top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut1__DOT__rdata_upper__v0;
        IData/*31:0*/ __Vdlyvval__top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut1__DOT__rdata_lower__v0;
        IData/*31:0*/ __Vdlyvval__top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut0__DOT__rdata_upper__v0;
        IData/*31:0*/ __Vdlyvval__top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut0__DOT__rdata_lower__v0;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ top_tcam_mem_tb__DOT__dut__DOT__out_gate2;
        QData/*63:0*/ top_tcam_mem_tb__DOT__dut__DOT__out_andgate;
        VlUnpacked<CData/*6:0*/, 4> top_tcam_mem_tb__DOT__key_parts;
        VlUnpacked<IData/*31:0*/, 256> top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__mem;
        VlUnpacked<IData/*31:0*/, 256> top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__mem;
        VlUnpacked<IData/*31:0*/, 256> top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__mem;
        VlUnpacked<IData/*31:0*/, 256> top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__mem;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h4524a824__0;
    VlTriggerScheduler __VtrigSched_h4524a8e5__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop_tcam_mem_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_tcam_mem_tb___024root(Vtop_tcam_mem_tb__Syms* symsp, const char* v__name);
    ~Vtop_tcam_mem_tb___024root();
    VL_UNCOPYABLE(Vtop_tcam_mem_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
