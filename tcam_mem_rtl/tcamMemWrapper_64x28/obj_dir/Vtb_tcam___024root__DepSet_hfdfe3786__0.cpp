// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_tcam.h for the primary calling header

#include "Vtb_tcam__pch.h"
#include "Vtb_tcam__Syms.h"
#include "Vtb_tcam___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__2(Vtb_tcam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_tcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tcam___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h0f0a937a__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tcam.in_clk)", 
                                                           "sky130_sram_1kbyte_1rw1r_32x256_8.sv", 
                                                           61);
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__csb1_reg 
            = vlSelf->tb_tcam__DOT__in_csb;
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__addr1_reg 
            = vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__ar_addr2;
        if (VL_UNLIKELY((((~ (IData)(vlSelf->tb_tcam__DOT__in_csb)) 
                          & (~ (IData)(vlSelf->tb_tcam__DOT__in_web))) 
                         & ((IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT____Vcellinp__dut_vtb__addr0) 
                            == (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__ar_addr2))))) {
            VL_WRITEF_NX("%20#WARNING: Writing and reading addr0= %b and addr1= %b simultaneously!\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         8,(IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT____Vcellinp__dut_vtb__addr0),
                         8,vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__ar_addr2);
        }
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "sky130_sram_1kbyte_1rw1r_32x256_8.sv", 
                                           66);
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__rdata_upper = 0U;
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__csb1_reg))))) {
            VL_WRITEF_NX("%20# Reading %Ntb_tcam.dut.tcam7x64_dut3.dut_vtb addr1=%b dout1=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         vlSymsp->name(),8,(IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__addr1_reg),
                         32,vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__mem
                         [vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__addr1_reg]);
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__3(Vtb_tcam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_tcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tcam___024root___eval_initial__TOP__Vtiming__3\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h0f0a937a__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tcam.in_clk)", 
                                                           "sky130_sram_1kbyte_1rw1r_32x256_8.sv", 
                                                           44);
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__csb0_reg 
            = vlSelf->tb_tcam__DOT__in_csb;
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__web0_reg 
            = vlSelf->tb_tcam__DOT__in_web;
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__wmask0_reg 
            = vlSelf->tb_tcam__DOT__in_wmask;
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__addr0_reg 
            = vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT____Vcellinp__dut_vtb__addr0;
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__din0_reg 
            = vlSelf->tb_tcam__DOT__in_wdata;
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "sky130_sram_1kbyte_1rw1r_32x256_8.sv", 
                                           50);
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__rdata_lower = 0U;
        if (VL_UNLIKELY(((~ (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__csb0_reg)) 
                         & (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__web0_reg)))) {
            VL_WRITEF_NX("%20#Reading %Ntb_tcam.dut.tcam7x64_dut3.dut_vtb addr0= %b dout0= %b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         vlSymsp->name(),8,(IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__addr0_reg),
                         32,vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__mem
                         [vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__addr0_reg]);
        }
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__csb0_reg)) 
                               & (~ (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__web0_reg)))))) {
            VL_WRITEF_NX("%20#Writing %Ntb_tcam.dut.tcam7x64_dut3.dut_vtb addr0= %b din0= %b wmask0= %b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         vlSymsp->name(),8,(IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__addr0_reg),
                         32,vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__din0_reg,
                         4,(IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__wmask0_reg));
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__4(Vtb_tcam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_tcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tcam___024root___eval_initial__TOP__Vtiming__4\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h0f0a937a__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tcam.in_clk)", 
                                                           "sky130_sram_1kbyte_1rw1r_32x256_8.sv", 
                                                           61);
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__csb1_reg 
            = vlSelf->tb_tcam__DOT__in_csb;
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__addr1_reg 
            = vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__ar_addr2;
        if (VL_UNLIKELY((((~ (IData)(vlSelf->tb_tcam__DOT__in_csb)) 
                          & (~ (IData)(vlSelf->tb_tcam__DOT__in_web))) 
                         & ((IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT____Vcellinp__dut_vtb__addr0) 
                            == (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__ar_addr2))))) {
            VL_WRITEF_NX("%20#WARNING: Writing and reading addr0= %b and addr1= %b simultaneously!\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         8,(IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT____Vcellinp__dut_vtb__addr0),
                         8,vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__ar_addr2);
        }
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "sky130_sram_1kbyte_1rw1r_32x256_8.sv", 
                                           66);
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__rdata_upper = 0U;
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__csb1_reg))))) {
            VL_WRITEF_NX("%20# Reading %Ntb_tcam.dut.tcam7x64_dut2.dut_vtb addr1=%b dout1=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         vlSymsp->name(),8,(IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__addr1_reg),
                         32,vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__mem
                         [vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__addr1_reg]);
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__5(Vtb_tcam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_tcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tcam___024root___eval_initial__TOP__Vtiming__5\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h0f0a937a__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tcam.in_clk)", 
                                                           "sky130_sram_1kbyte_1rw1r_32x256_8.sv", 
                                                           44);
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__csb0_reg 
            = vlSelf->tb_tcam__DOT__in_csb;
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__web0_reg 
            = vlSelf->tb_tcam__DOT__in_web;
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__wmask0_reg 
            = vlSelf->tb_tcam__DOT__in_wmask;
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__addr0_reg 
            = vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT____Vcellinp__dut_vtb__addr0;
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__din0_reg 
            = vlSelf->tb_tcam__DOT__in_wdata;
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "sky130_sram_1kbyte_1rw1r_32x256_8.sv", 
                                           50);
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__rdata_lower = 0U;
        if (VL_UNLIKELY(((~ (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__csb0_reg)) 
                         & (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__web0_reg)))) {
            VL_WRITEF_NX("%20#Reading %Ntb_tcam.dut.tcam7x64_dut2.dut_vtb addr0= %b dout0= %b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         vlSymsp->name(),8,(IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__addr0_reg),
                         32,vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__mem
                         [vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__addr0_reg]);
        }
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__csb0_reg)) 
                               & (~ (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__web0_reg)))))) {
            VL_WRITEF_NX("%20#Writing %Ntb_tcam.dut.tcam7x64_dut2.dut_vtb addr0= %b din0= %b wmask0= %b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         vlSymsp->name(),8,(IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__addr0_reg),
                         32,vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__din0_reg,
                         4,(IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__wmask0_reg));
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__6(Vtb_tcam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_tcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tcam___024root___eval_initial__TOP__Vtiming__6\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h0f0a937a__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tcam.in_clk)", 
                                                           "sky130_sram_1kbyte_1rw1r_32x256_8.sv", 
                                                           61);
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__csb1_reg 
            = vlSelf->tb_tcam__DOT__in_csb;
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__addr1_reg 
            = vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__ar_addr2;
        if (VL_UNLIKELY((((~ (IData)(vlSelf->tb_tcam__DOT__in_csb)) 
                          & (~ (IData)(vlSelf->tb_tcam__DOT__in_web))) 
                         & ((IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT____Vcellinp__dut_vtb__addr0) 
                            == (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__ar_addr2))))) {
            VL_WRITEF_NX("%20#WARNING: Writing and reading addr0= %b and addr1= %b simultaneously!\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         8,(IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT____Vcellinp__dut_vtb__addr0),
                         8,vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__ar_addr2);
        }
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "sky130_sram_1kbyte_1rw1r_32x256_8.sv", 
                                           66);
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__rdata_upper = 0U;
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__csb1_reg))))) {
            VL_WRITEF_NX("%20# Reading %Ntb_tcam.dut.tcam7x64_dut1.dut_vtb addr1=%b dout1=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         vlSymsp->name(),8,(IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__addr1_reg),
                         32,vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__mem
                         [vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__addr1_reg]);
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__7(Vtb_tcam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_tcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tcam___024root___eval_initial__TOP__Vtiming__7\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h0f0a937a__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tcam.in_clk)", 
                                                           "sky130_sram_1kbyte_1rw1r_32x256_8.sv", 
                                                           44);
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__csb0_reg 
            = vlSelf->tb_tcam__DOT__in_csb;
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__web0_reg 
            = vlSelf->tb_tcam__DOT__in_web;
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__wmask0_reg 
            = vlSelf->tb_tcam__DOT__in_wmask;
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__addr0_reg 
            = vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT____Vcellinp__dut_vtb__addr0;
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__din0_reg 
            = vlSelf->tb_tcam__DOT__in_wdata;
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "sky130_sram_1kbyte_1rw1r_32x256_8.sv", 
                                           50);
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__rdata_lower = 0U;
        if (VL_UNLIKELY(((~ (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__csb0_reg)) 
                         & (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__web0_reg)))) {
            VL_WRITEF_NX("%20#Reading %Ntb_tcam.dut.tcam7x64_dut1.dut_vtb addr0= %b dout0= %b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         vlSymsp->name(),8,(IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__addr0_reg),
                         32,vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__mem
                         [vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__addr0_reg]);
        }
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__csb0_reg)) 
                               & (~ (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__web0_reg)))))) {
            VL_WRITEF_NX("%20#Writing %Ntb_tcam.dut.tcam7x64_dut1.dut_vtb addr0= %b din0= %b wmask0= %b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         vlSymsp->name(),8,(IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__addr0_reg),
                         32,vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__din0_reg,
                         4,(IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__wmask0_reg));
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__8(Vtb_tcam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_tcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tcam___024root___eval_initial__TOP__Vtiming__8\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h0f0a937a__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tcam.in_clk)", 
                                                           "sky130_sram_1kbyte_1rw1r_32x256_8.sv", 
                                                           61);
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__csb1_reg 
            = vlSelf->tb_tcam__DOT__in_csb;
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__addr1_reg 
            = vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__ar_addr2;
        if (VL_UNLIKELY((((~ (IData)(vlSelf->tb_tcam__DOT__in_csb)) 
                          & (~ (IData)(vlSelf->tb_tcam__DOT__in_web))) 
                         & ((IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT____Vcellinp__dut_vtb__addr0) 
                            == (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__ar_addr2))))) {
            VL_WRITEF_NX("%20#WARNING: Writing and reading addr0= %b and addr1= %b simultaneously!\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         8,(IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT____Vcellinp__dut_vtb__addr0),
                         8,vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__ar_addr2);
        }
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "sky130_sram_1kbyte_1rw1r_32x256_8.sv", 
                                           66);
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__rdata_upper = 0U;
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__csb1_reg))))) {
            VL_WRITEF_NX("%20# Reading %Ntb_tcam.dut.tcam7x64_dut0.dut_vtb addr1=%b dout1=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         vlSymsp->name(),8,(IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__addr1_reg),
                         32,vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__mem
                         [vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__addr1_reg]);
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__9(Vtb_tcam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_tcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tcam___024root___eval_initial__TOP__Vtiming__9\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h0f0a937a__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_tcam.in_clk)", 
                                                           "sky130_sram_1kbyte_1rw1r_32x256_8.sv", 
                                                           44);
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__csb0_reg 
            = vlSelf->tb_tcam__DOT__in_csb;
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__web0_reg 
            = vlSelf->tb_tcam__DOT__in_web;
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__wmask0_reg 
            = vlSelf->tb_tcam__DOT__in_wmask;
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__addr0_reg 
            = vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT____Vcellinp__dut_vtb__addr0;
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__din0_reg 
            = vlSelf->tb_tcam__DOT__in_wdata;
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "sky130_sram_1kbyte_1rw1r_32x256_8.sv", 
                                           50);
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__rdata_lower = 0U;
        if (VL_UNLIKELY(((~ (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__csb0_reg)) 
                         & (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__web0_reg)))) {
            VL_WRITEF_NX("%20#Reading %Ntb_tcam.dut.tcam7x64_dut0.dut_vtb addr0= %b dout0= %b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         vlSymsp->name(),8,(IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__addr0_reg),
                         32,vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__mem
                         [vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__addr0_reg]);
        }
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__csb0_reg)) 
                               & (~ (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__web0_reg)))))) {
            VL_WRITEF_NX("%20#Writing %Ntb_tcam.dut.tcam7x64_dut0.dut_vtb addr0= %b din0= %b wmask0= %b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         vlSymsp->name(),8,(IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__addr0_reg),
                         32,vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__din0_reg,
                         4,(IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__wmask0_reg));
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_tcam___024root___dump_triggers__act(Vtb_tcam___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_tcam___024root___eval_triggers__act(Vtb_tcam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_tcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tcam___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((~ (IData)(vlSelf->tb_tcam__DOT__in_clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_tcam__DOT__in_clk__0)));
    vlSelf->__VactTriggered.set(1U, (((~ (IData)(vlSelf->tb_tcam__DOT__in_clk)) 
                                      & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_tcam__DOT__in_clk__0)) 
                                     | vlSelf->__VdlySched.awaitingCurrentTime()));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->tb_tcam__DOT__in_clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_tcam__DOT__in_clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__tb_tcam__DOT__in_clk__0 
        = vlSelf->tb_tcam__DOT__in_clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_tcam___024root___dump_triggers__act(vlSelf);
    }
#endif
}
