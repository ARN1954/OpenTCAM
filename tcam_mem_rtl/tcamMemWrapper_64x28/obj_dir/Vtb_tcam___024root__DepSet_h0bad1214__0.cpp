// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_tcam.h for the primary calling header

#include "Vtb_tcam__pch.h"
#include "Vtb_tcam___024root.h"

VL_ATTR_COLD void Vtb_tcam___024root___eval_initial__TOP(Vtb_tcam___024root* vlSelf);
VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__0(Vtb_tcam___024root* vlSelf);
VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__1(Vtb_tcam___024root* vlSelf);
VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__2(Vtb_tcam___024root* vlSelf);
VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__3(Vtb_tcam___024root* vlSelf);
VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__4(Vtb_tcam___024root* vlSelf);
VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__5(Vtb_tcam___024root* vlSelf);
VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__6(Vtb_tcam___024root* vlSelf);
VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__7(Vtb_tcam___024root* vlSelf);
VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__8(Vtb_tcam___024root* vlSelf);
VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__9(Vtb_tcam___024root* vlSelf);
VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__10(Vtb_tcam___024root* vlSelf);
VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__11(Vtb_tcam___024root* vlSelf);
VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__12(Vtb_tcam___024root* vlSelf);
VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__13(Vtb_tcam___024root* vlSelf);
VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__14(Vtb_tcam___024root* vlSelf);
VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__15(Vtb_tcam___024root* vlSelf);
VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__16(Vtb_tcam___024root* vlSelf);
VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__17(Vtb_tcam___024root* vlSelf);

void Vtb_tcam___024root___eval_initial(Vtb_tcam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_tcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tcam___024root___eval_initial\n"); );
    // Body
    Vtb_tcam___024root___eval_initial__TOP(vlSelf);
    Vtb_tcam___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_tcam___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_tcam___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vtb_tcam___024root___eval_initial__TOP__Vtiming__3(vlSelf);
    Vtb_tcam___024root___eval_initial__TOP__Vtiming__4(vlSelf);
    Vtb_tcam___024root___eval_initial__TOP__Vtiming__5(vlSelf);
    Vtb_tcam___024root___eval_initial__TOP__Vtiming__6(vlSelf);
    Vtb_tcam___024root___eval_initial__TOP__Vtiming__7(vlSelf);
    Vtb_tcam___024root___eval_initial__TOP__Vtiming__8(vlSelf);
    Vtb_tcam___024root___eval_initial__TOP__Vtiming__9(vlSelf);
    Vtb_tcam___024root___eval_initial__TOP__Vtiming__10(vlSelf);
    Vtb_tcam___024root___eval_initial__TOP__Vtiming__11(vlSelf);
    Vtb_tcam___024root___eval_initial__TOP__Vtiming__12(vlSelf);
    Vtb_tcam___024root___eval_initial__TOP__Vtiming__13(vlSelf);
    Vtb_tcam___024root___eval_initial__TOP__Vtiming__14(vlSelf);
    Vtb_tcam___024root___eval_initial__TOP__Vtiming__15(vlSelf);
    Vtb_tcam___024root___eval_initial__TOP__Vtiming__16(vlSelf);
    Vtb_tcam___024root___eval_initial__TOP__Vtiming__17(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_tcam__DOT__in_clk__0 
        = vlSelf->tb_tcam__DOT__in_clk;
}

VL_INLINE_OPT VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__0(Vtb_tcam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_tcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tcam___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_tcam__DOT__in_csb = 1U;
    vlSelf->tb_tcam__DOT__in_web = 1U;
    vlSelf->tb_tcam__DOT__in_wmask = 0xfU;
    vlSelf->tb_tcam__DOT__in_addr = 0U;
    vlSelf->tb_tcam__DOT__in_wdata = 0U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_tcam.sv", 
                                       36);
    vlSelf->tb_tcam__DOT__in_csb = 0U;
    vlSelf->tb_tcam__DOT__in_web = 0U;
    vlSelf->tb_tcam__DOT__in_wmask = 0xfU;
    vlSelf->tb_tcam__DOT__in_addr = 0x85U;
    vlSelf->tb_tcam__DOT__in_wdata = 0x10U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_tcam.sv", 
                                       47);
    VL_WRITEF_NX("Write Block 0 Lower: addr = %b, data = %b\n",0,
                 28,vlSelf->tb_tcam__DOT__in_addr,32,
                 vlSelf->tb_tcam__DOT__in_wdata);
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_tcam.sv", 
                                       49);
    VL_WRITEF_NX("[Confirm] Block 0 out_rdata = %b\n",0,
                 64,(((QData)((IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__rdata_upper)) 
                      << 0x20U) | (QData)((IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__rdata_lower))));
    vlSelf->tb_tcam__DOT__in_addr = 5U;
    vlSelf->tb_tcam__DOT__in_wdata = 0U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_tcam.sv", 
                                       54);
    VL_WRITEF_NX("Write Block 0 Upper: addr = %b, data = %b\n",0,
                 28,vlSelf->tb_tcam__DOT__in_addr,32,
                 vlSelf->tb_tcam__DOT__in_wdata);
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_tcam.sv", 
                                       56);
    VL_WRITEF_NX("[Confirm] Block 0 out_rdata = %b\n",0,
                 64,(((QData)((IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__rdata_upper)) 
                      << 0x20U) | (QData)((IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__rdata_lower))));
    vlSelf->tb_tcam__DOT__in_addr = 0x185U;
    vlSelf->tb_tcam__DOT__in_wdata = 0x10U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_tcam.sv", 
                                       63);
    VL_WRITEF_NX("Write Block 1 Lower: addr = %b, data = %b\n",0,
                 28,vlSelf->tb_tcam__DOT__in_addr,32,
                 vlSelf->tb_tcam__DOT__in_wdata);
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_tcam.sv", 
                                       65);
    VL_WRITEF_NX("[Confirm] Block 1 out_rdata = %b\n",0,
                 64,(((QData)((IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__rdata_upper)) 
                      << 0x20U) | (QData)((IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__rdata_lower))));
    vlSelf->tb_tcam__DOT__in_addr = 0x105U;
    vlSelf->tb_tcam__DOT__in_wdata = 0U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_tcam.sv", 
                                       70);
    VL_WRITEF_NX("Write Block 1 Upper: addr = %b, data = %b\n",0,
                 28,vlSelf->tb_tcam__DOT__in_addr,32,
                 vlSelf->tb_tcam__DOT__in_wdata);
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_tcam.sv", 
                                       72);
    VL_WRITEF_NX("[Confirm] Block 1 out_rdata = %b\n",0,
                 64,(((QData)((IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__rdata_upper)) 
                      << 0x20U) | (QData)((IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__rdata_lower))));
    vlSelf->tb_tcam__DOT__in_addr = 0x285U;
    vlSelf->tb_tcam__DOT__in_wdata = 0x10U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_tcam.sv", 
                                       79);
    VL_WRITEF_NX("Write Block 2 Lower: addr = %b, data = %b\n",0,
                 28,vlSelf->tb_tcam__DOT__in_addr,32,
                 vlSelf->tb_tcam__DOT__in_wdata);
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_tcam.sv", 
                                       81);
    VL_WRITEF_NX("[Confirm] Block 2 out_rdata = %b\n",0,
                 64,(((QData)((IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__rdata_upper)) 
                      << 0x20U) | (QData)((IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__rdata_lower))));
    vlSelf->tb_tcam__DOT__in_addr = 0x205U;
    vlSelf->tb_tcam__DOT__in_wdata = 0U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_tcam.sv", 
                                       86);
    VL_WRITEF_NX("Write Block 2 Upper: addr = %b, data = %b\n",0,
                 28,vlSelf->tb_tcam__DOT__in_addr,32,
                 vlSelf->tb_tcam__DOT__in_wdata);
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_tcam.sv", 
                                       88);
    VL_WRITEF_NX("[Confirm] Block 2 out_rdata = %b\n",0,
                 64,(((QData)((IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__rdata_upper)) 
                      << 0x20U) | (QData)((IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__rdata_lower))));
    vlSelf->tb_tcam__DOT__in_addr = 0x385U;
    vlSelf->tb_tcam__DOT__in_wdata = 0x10U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_tcam.sv", 
                                       95);
    VL_WRITEF_NX("Write Block 3 Lower: addr = %b, data = %b\n",0,
                 28,vlSelf->tb_tcam__DOT__in_addr,32,
                 vlSelf->tb_tcam__DOT__in_wdata);
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_tcam.sv", 
                                       97);
    VL_WRITEF_NX("[Confirm] Block 3 out_rdata = %b\n",0,
                 64,(((QData)((IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__rdata_upper)) 
                      << 0x20U) | (QData)((IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__rdata_lower))));
    vlSelf->tb_tcam__DOT__in_addr = 0x305U;
    vlSelf->tb_tcam__DOT__in_wdata = 0U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_tcam.sv", 
                                       102);
    VL_WRITEF_NX("Write Block 3 Upper: addr = %b, data = %b\n",0,
                 28,vlSelf->tb_tcam__DOT__in_addr,32,
                 vlSelf->tb_tcam__DOT__in_wdata);
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_tcam.sv", 
                                       104);
    VL_WRITEF_NX("[Confirm] Block 3 out_rdata = %b\n",0,
                 64,(((QData)((IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__rdata_upper)) 
                      << 0x20U) | (QData)((IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__rdata_lower))));
    vlSelf->tb_tcam__DOT__in_web = 1U;
    vlSelf->tb_tcam__DOT__in_addr = 0xa14285U;
    VL_WRITEF_NX("Search substrings:\nBlock 0 search addr = %b\nBlock 1 search addr = %b\nBlock 2 search addr = %b\nBlock 3 search addr = %b\n",0,
                 7,(0x7fU & vlSelf->tb_tcam__DOT__in_addr),
                 7,(0x7fU & (vlSelf->tb_tcam__DOT__in_addr 
                             >> 7U)),7,(0x7fU & (vlSelf->tb_tcam__DOT__in_addr 
                                                 >> 0xeU)),
                 7,(0x7fU & (vlSelf->tb_tcam__DOT__in_addr 
                             >> 0x15U)));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_tcam.sv", 
                                       115);
    VL_WRITEF_NX("Search result for query 0x%x: out_pma = %0#\nBlock 0 out_rdata = %b\nBlock 1 out_rdata = %b\nBlock 2 out_rdata = %b\nBlock 3 out_rdata = %b\nANDed result (out_andgate) = %b\nPriority encoder output (out_pma) = %0#\n",0,
                 28,vlSelf->tb_tcam__DOT__in_addr,6,
                 (IData)(vlSelf->tb_tcam__DOT__out_pma),
                 64,(((QData)((IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__rdata_upper)) 
                      << 0x20U) | (QData)((IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__rdata_lower))),
                 64,(((QData)((IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__rdata_upper)) 
                      << 0x20U) | (QData)((IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__rdata_lower))),
                 64,(((QData)((IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__rdata_upper)) 
                      << 0x20U) | (QData)((IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__rdata_lower))),
                 64,(((QData)((IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__rdata_upper)) 
                      << 0x20U) | (QData)((IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__rdata_lower))),
                 64,vlSelf->tb_tcam__DOT__dut__DOT__out_andgate,
                 6,(IData)(vlSelf->tb_tcam__DOT__out_pma));
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_tcam.sv", 
                                       125);
    VL_FINISH_MT("tb_tcam.sv", 126, "");
}

VL_INLINE_OPT VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__1(Vtb_tcam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_tcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tcam___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb_tcam.sv", 
                                           26);
        vlSelf->tb_tcam__DOT__in_clk = (1U & (~ (IData)(vlSelf->tb_tcam__DOT__in_clk)));
    }
}

VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__10____Vfork_8__1(Vtb_tcam___024root* vlSelf, IData/*31:0*/ __Vintraval_hf0384487__0);

VL_INLINE_OPT VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__10(Vtb_tcam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_tcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tcam___024root___eval_initial__TOP__Vtiming__10\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h0f0a9447__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge tb_tcam.in_clk)", 
                                                           "sky130_sram_1kbyte_1rw1r_32x256_8.sv", 
                                                           97);
        if ((1U & (~ (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__csb1_reg)))) {
            vlSelf->__Vintraval_hf0384487__0 = vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__mem
                [vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__addr1_reg];
            Vtb_tcam___024root___eval_initial__TOP__Vtiming__10____Vfork_8__1(vlSelf, vlSelf->__Vintraval_hf0384487__0);
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__10____Vfork_8__1(Vtb_tcam___024root* vlSelf, IData/*31:0*/ __Vintraval_hf0384487__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_tcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tcam___024root___eval_initial__TOP__Vtiming__10____Vfork_8__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xbb8ULL, nullptr, 
                                       "sky130_sram_1kbyte_1rw1r_32x256_8.sv", 
                                       99);
    vlSelf->__Vdlyvval__tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__rdata_upper__v0 
        = __Vintraval_hf0384487__0;
    vlSelf->__Vdlyvset__tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__rdata_upper__v0 = 1U;
}

VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__11____Vfork_7__1(Vtb_tcam___024root* vlSelf, IData/*31:0*/ __Vintraval_hb2986a50__0);

VL_INLINE_OPT VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__11(Vtb_tcam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_tcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tcam___024root___eval_initial__TOP__Vtiming__11\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h0f0a9447__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge tb_tcam.in_clk)", 
                                                           "sky130_sram_1kbyte_1rw1r_32x256_8.sv", 
                                                           90);
        if (((~ (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__csb0_reg)) 
             & (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__web0_reg))) {
            vlSelf->__Vintraval_hb2986a50__0 = vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__mem
                [vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__addr0_reg];
            Vtb_tcam___024root___eval_initial__TOP__Vtiming__11____Vfork_7__1(vlSelf, vlSelf->__Vintraval_hb2986a50__0);
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__11____Vfork_7__1(Vtb_tcam___024root* vlSelf, IData/*31:0*/ __Vintraval_hb2986a50__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_tcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tcam___024root___eval_initial__TOP__Vtiming__11____Vfork_7__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xbb8ULL, nullptr, 
                                       "sky130_sram_1kbyte_1rw1r_32x256_8.sv", 
                                       92);
    vlSelf->__Vdlyvval__tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__rdata_lower__v0 
        = __Vintraval_hb2986a50__0;
    vlSelf->__Vdlyvset__tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__rdata_lower__v0 = 1U;
}

VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__12____Vfork_6__1(Vtb_tcam___024root* vlSelf, IData/*31:0*/ __Vintraval_h59460479__0);

VL_INLINE_OPT VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__12(Vtb_tcam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_tcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tcam___024root___eval_initial__TOP__Vtiming__12\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h0f0a9447__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge tb_tcam.in_clk)", 
                                                           "sky130_sram_1kbyte_1rw1r_32x256_8.sv", 
                                                           97);
        if ((1U & (~ (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__csb1_reg)))) {
            vlSelf->__Vintraval_h59460479__0 = vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__mem
                [vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__addr1_reg];
            Vtb_tcam___024root___eval_initial__TOP__Vtiming__12____Vfork_6__1(vlSelf, vlSelf->__Vintraval_h59460479__0);
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__12____Vfork_6__1(Vtb_tcam___024root* vlSelf, IData/*31:0*/ __Vintraval_h59460479__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_tcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tcam___024root___eval_initial__TOP__Vtiming__12____Vfork_6__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xbb8ULL, nullptr, 
                                       "sky130_sram_1kbyte_1rw1r_32x256_8.sv", 
                                       99);
    vlSelf->__Vdlyvval__tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__rdata_upper__v0 
        = __Vintraval_h59460479__0;
    vlSelf->__Vdlyvset__tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__rdata_upper__v0 = 1U;
}

VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__13____Vfork_5__1(Vtb_tcam___024root* vlSelf, IData/*31:0*/ __Vintraval_h57c239e4__0);

VL_INLINE_OPT VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__13(Vtb_tcam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_tcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tcam___024root___eval_initial__TOP__Vtiming__13\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h0f0a9447__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge tb_tcam.in_clk)", 
                                                           "sky130_sram_1kbyte_1rw1r_32x256_8.sv", 
                                                           90);
        if (((~ (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__csb0_reg)) 
             & (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__web0_reg))) {
            vlSelf->__Vintraval_h57c239e4__0 = vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__mem
                [vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__addr0_reg];
            Vtb_tcam___024root___eval_initial__TOP__Vtiming__13____Vfork_5__1(vlSelf, vlSelf->__Vintraval_h57c239e4__0);
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__13____Vfork_5__1(Vtb_tcam___024root* vlSelf, IData/*31:0*/ __Vintraval_h57c239e4__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_tcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tcam___024root___eval_initial__TOP__Vtiming__13____Vfork_5__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xbb8ULL, nullptr, 
                                       "sky130_sram_1kbyte_1rw1r_32x256_8.sv", 
                                       92);
    vlSelf->__Vdlyvval__tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__rdata_lower__v0 
        = __Vintraval_h57c239e4__0;
    vlSelf->__Vdlyvset__tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__rdata_lower__v0 = 1U;
}

VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__14____Vfork_4__1(Vtb_tcam___024root* vlSelf, IData/*31:0*/ __Vintraval_h6b291ae5__0);

VL_INLINE_OPT VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__14(Vtb_tcam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_tcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tcam___024root___eval_initial__TOP__Vtiming__14\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h0f0a9447__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge tb_tcam.in_clk)", 
                                                           "sky130_sram_1kbyte_1rw1r_32x256_8.sv", 
                                                           97);
        if ((1U & (~ (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__csb1_reg)))) {
            vlSelf->__Vintraval_h6b291ae5__0 = vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__mem
                [vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__addr1_reg];
            Vtb_tcam___024root___eval_initial__TOP__Vtiming__14____Vfork_4__1(vlSelf, vlSelf->__Vintraval_h6b291ae5__0);
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__14____Vfork_4__1(Vtb_tcam___024root* vlSelf, IData/*31:0*/ __Vintraval_h6b291ae5__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_tcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tcam___024root___eval_initial__TOP__Vtiming__14____Vfork_4__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xbb8ULL, nullptr, 
                                       "sky130_sram_1kbyte_1rw1r_32x256_8.sv", 
                                       99);
    vlSelf->__Vdlyvval__tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__rdata_upper__v0 
        = __Vintraval_h6b291ae5__0;
    vlSelf->__Vdlyvset__tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__rdata_upper__v0 = 1U;
}

VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__15____Vfork_3__1(Vtb_tcam___024root* vlSelf, IData/*31:0*/ __Vintraval_h6ae8d7f6__0);

VL_INLINE_OPT VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__15(Vtb_tcam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_tcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tcam___024root___eval_initial__TOP__Vtiming__15\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h0f0a9447__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge tb_tcam.in_clk)", 
                                                           "sky130_sram_1kbyte_1rw1r_32x256_8.sv", 
                                                           90);
        if (((~ (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__csb0_reg)) 
             & (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__web0_reg))) {
            vlSelf->__Vintraval_h6ae8d7f6__0 = vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__mem
                [vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__addr0_reg];
            Vtb_tcam___024root___eval_initial__TOP__Vtiming__15____Vfork_3__1(vlSelf, vlSelf->__Vintraval_h6ae8d7f6__0);
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__15____Vfork_3__1(Vtb_tcam___024root* vlSelf, IData/*31:0*/ __Vintraval_h6ae8d7f6__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_tcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tcam___024root___eval_initial__TOP__Vtiming__15____Vfork_3__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xbb8ULL, nullptr, 
                                       "sky130_sram_1kbyte_1rw1r_32x256_8.sv", 
                                       92);
    vlSelf->__Vdlyvval__tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__rdata_lower__v0 
        = __Vintraval_h6ae8d7f6__0;
    vlSelf->__Vdlyvset__tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__rdata_lower__v0 = 1U;
}

VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__16____Vfork_2__1(Vtb_tcam___024root* vlSelf, IData/*31:0*/ __Vintraval_h1fb90955__0);

VL_INLINE_OPT VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__16(Vtb_tcam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_tcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tcam___024root___eval_initial__TOP__Vtiming__16\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h0f0a9447__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge tb_tcam.in_clk)", 
                                                           "sky130_sram_1kbyte_1rw1r_32x256_8.sv", 
                                                           97);
        if ((1U & (~ (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__csb1_reg)))) {
            vlSelf->__Vintraval_h1fb90955__0 = vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__mem
                [vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__addr1_reg];
            Vtb_tcam___024root___eval_initial__TOP__Vtiming__16____Vfork_2__1(vlSelf, vlSelf->__Vintraval_h1fb90955__0);
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__16____Vfork_2__1(Vtb_tcam___024root* vlSelf, IData/*31:0*/ __Vintraval_h1fb90955__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_tcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tcam___024root___eval_initial__TOP__Vtiming__16____Vfork_2__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xbb8ULL, nullptr, 
                                       "sky130_sram_1kbyte_1rw1r_32x256_8.sv", 
                                       99);
    vlSelf->__Vdlyvval__tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__rdata_upper__v0 
        = __Vintraval_h1fb90955__0;
    vlSelf->__Vdlyvset__tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__rdata_upper__v0 = 1U;
}

VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__17____Vfork_1__1(Vtb_tcam___024root* vlSelf, IData/*31:0*/ __Vintraval_hc0c8a841__0);

VL_INLINE_OPT VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__17(Vtb_tcam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_tcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tcam___024root___eval_initial__TOP__Vtiming__17\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h0f0a9447__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge tb_tcam.in_clk)", 
                                                           "sky130_sram_1kbyte_1rw1r_32x256_8.sv", 
                                                           90);
        if (((~ (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__csb0_reg)) 
             & (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__web0_reg))) {
            vlSelf->__Vintraval_hc0c8a841__0 = vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__mem
                [vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__addr0_reg];
            Vtb_tcam___024root___eval_initial__TOP__Vtiming__17____Vfork_1__1(vlSelf, vlSelf->__Vintraval_hc0c8a841__0);
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb_tcam___024root___eval_initial__TOP__Vtiming__17____Vfork_1__1(Vtb_tcam___024root* vlSelf, IData/*31:0*/ __Vintraval_hc0c8a841__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_tcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tcam___024root___eval_initial__TOP__Vtiming__17____Vfork_1__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xbb8ULL, nullptr, 
                                       "sky130_sram_1kbyte_1rw1r_32x256_8.sv", 
                                       92);
    vlSelf->__Vdlyvval__tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__rdata_lower__v0 
        = __Vintraval_hc0c8a841__0;
    vlSelf->__Vdlyvset__tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__rdata_lower__v0 = 1U;
}

VL_INLINE_OPT void Vtb_tcam___024root___act_comb__TOP__0(Vtb_tcam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_tcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tcam___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_tcam__DOT__dut__DOT__out_andgate = (vlSelf->tb_tcam__DOT__dut__DOT__out_gate2 
                                                   & (((QData)((IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__rdata_upper)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__rdata_lower))));
    vlSelf->tb_tcam__DOT__out_pma = ((1U & (IData)(
                                                   (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                    >> 0x3fU)))
                                      ? 0x3fU : ((1U 
                                                  & (IData)(
                                                            (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                             >> 0x3eU)))
                                                  ? 0x3eU
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                              >> 0x3dU)))
                                                   ? 0x3dU
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                               >> 0x3cU)))
                                                    ? 0x3cU
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                >> 0x3bU)))
                                                     ? 0x3bU
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                 >> 0x3aU)))
                                                      ? 0x3aU
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                  >> 0x39U)))
                                                       ? 0x39U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                   >> 0x38U)))
                                                        ? 0x38U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                    >> 0x37U)))
                                                         ? 0x37U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                     >> 0x36U)))
                                                          ? 0x36U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                      >> 0x35U)))
                                                           ? 0x35U
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                       >> 0x34U)))
                                                            ? 0x34U
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                        >> 0x33U)))
                                                             ? 0x33U
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                         >> 0x32U)))
                                                              ? 0x32U
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                          >> 0x31U)))
                                                               ? 0x31U
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                           >> 0x30U)))
                                                                ? 0x30U
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                            >> 0x2fU)))
                                                                 ? 0x2fU
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                             >> 0x2eU)))
                                                                  ? 0x2eU
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                              >> 0x2dU)))
                                                                   ? 0x2dU
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                               >> 0x2cU)))
                                                                    ? 0x2cU
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                                >> 0x2bU)))
                                                                     ? 0x2bU
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                                >> 0x2aU)))
                                                                      ? 0x2aU
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                                >> 0x29U)))
                                                                       ? 0x29U
                                                                       : 
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                                >> 0x28U)))
                                                                        ? 0x28U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                                >> 0x27U)))
                                                                         ? 0x27U
                                                                         : 
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                                >> 0x26U)))
                                                                          ? 0x26U
                                                                          : 
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                                >> 0x25U)))
                                                                           ? 0x25U
                                                                           : 
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                                >> 0x24U)))
                                                                            ? 0x24U
                                                                            : 
                                                                           ((1U 
                                                                             & (IData)(
                                                                                (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                                >> 0x23U)))
                                                                             ? 0x23U
                                                                             : 
                                                                            ((1U 
                                                                              & (IData)(
                                                                                (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                                >> 0x22U)))
                                                                              ? 0x22U
                                                                              : 
                                                                             ((1U 
                                                                               & (IData)(
                                                                                (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                                >> 0x21U)))
                                                                               ? 0x21U
                                                                               : 
                                                                              ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                                >> 0x20U)))
                                                                                ? 0x20U
                                                                                : 
                                                                               ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                                >> 0x1fU)))
                                                                                 ? 0x1fU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                                >> 0x1eU)))
                                                                                 ? 0x1eU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                                >> 0x1dU)))
                                                                                 ? 0x1dU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                                >> 0x1cU)))
                                                                                 ? 0x1cU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                                >> 0x1bU)))
                                                                                 ? 0x1bU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                                >> 0x1aU)))
                                                                                 ? 0x1aU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                                >> 0x19U)))
                                                                                 ? 0x19U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                                >> 0x18U)))
                                                                                 ? 0x18U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                                >> 0x17U)))
                                                                                 ? 0x17U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                                >> 0x16U)))
                                                                                 ? 0x16U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                                >> 0x15U)))
                                                                                 ? 0x15U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                                >> 0x14U)))
                                                                                 ? 0x14U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                                >> 0x13U)))
                                                                                 ? 0x13U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                                >> 0x12U)))
                                                                                 ? 0x12U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                                >> 0x11U)))
                                                                                 ? 0x11U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                                >> 0x10U)))
                                                                                 ? 0x10U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                                >> 0xfU)))
                                                                                 ? 0xfU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                                >> 0xeU)))
                                                                                 ? 0xeU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                                >> 0xdU)))
                                                                                 ? 0xdU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                                >> 0xcU)))
                                                                                 ? 0xcU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                                >> 0xbU)))
                                                                                 ? 0xbU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                                >> 0xaU)))
                                                                                 ? 0xaU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                                >> 9U)))
                                                                                 ? 9U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                                >> 8U)))
                                                                                 ? 8U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                                >> 7U)))
                                                                                 ? 7U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                                >> 6U)))
                                                                                 ? 6U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                                >> 5U)))
                                                                                 ? 5U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                                >> 4U)))
                                                                                 ? 4U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                                >> 3U)))
                                                                                 ? 3U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                                >> 2U)))
                                                                                 ? 2U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->tb_tcam__DOT__dut__DOT__out_andgate 
                                                                                >> 1U)))
                                                                                 ? 1U
                                                                                 : 0U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void Vtb_tcam___024root___act_sequent__TOP__0(Vtb_tcam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_tcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tcam___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ tb_tcam__DOT__dut__DOT__vtb_addr0;
    tb_tcam__DOT__dut__DOT__vtb_addr0 = 0;
    CData/*7:0*/ tb_tcam__DOT__dut__DOT__vtb_addr1;
    tb_tcam__DOT__dut__DOT__vtb_addr1 = 0;
    CData/*7:0*/ tb_tcam__DOT__dut__DOT__vtb_addr2;
    tb_tcam__DOT__dut__DOT__vtb_addr2 = 0;
    CData/*7:0*/ tb_tcam__DOT__dut__DOT__vtb_addr3;
    tb_tcam__DOT__dut__DOT__vtb_addr3 = 0;
    // Body
    if (vlSelf->tb_tcam__DOT__in_web) {
        tb_tcam__DOT__dut__DOT__vtb_addr0 = (0xffU 
                                             & (0x7fU 
                                                & vlSelf->tb_tcam__DOT__in_addr));
        tb_tcam__DOT__dut__DOT__vtb_addr1 = (0xffU 
                                             & (0x7fU 
                                                & (vlSelf->tb_tcam__DOT__in_addr 
                                                   >> 7U)));
        tb_tcam__DOT__dut__DOT__vtb_addr2 = (0xffU 
                                             & (0x7fU 
                                                & (vlSelf->tb_tcam__DOT__in_addr 
                                                   >> 0xeU)));
        tb_tcam__DOT__dut__DOT__vtb_addr3 = (0xffU 
                                             & (0x7fU 
                                                & (vlSelf->tb_tcam__DOT__in_addr 
                                                   >> 0x15U)));
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT____Vcellinp__dut_vtb__addr0 
            = (0x7fU & (IData)(tb_tcam__DOT__dut__DOT__vtb_addr0));
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT____Vcellinp__dut_vtb__addr0 
            = (0x7fU & (IData)(tb_tcam__DOT__dut__DOT__vtb_addr1));
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT____Vcellinp__dut_vtb__addr0 
            = (0x7fU & (IData)(tb_tcam__DOT__dut__DOT__vtb_addr2));
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT____Vcellinp__dut_vtb__addr0 
            = (0x7fU & (IData)(tb_tcam__DOT__dut__DOT__vtb_addr3));
    } else {
        tb_tcam__DOT__dut__DOT__vtb_addr0 = (0xffU 
                                             & ((- (IData)(
                                                           (0U 
                                                            == 
                                                            (3U 
                                                             & (vlSelf->tb_tcam__DOT__in_addr 
                                                                >> 8U))))) 
                                                & vlSelf->tb_tcam__DOT__in_addr));
        tb_tcam__DOT__dut__DOT__vtb_addr1 = (0xffU 
                                             & ((- (IData)(
                                                           (1U 
                                                            == 
                                                            (3U 
                                                             & (vlSelf->tb_tcam__DOT__in_addr 
                                                                >> 8U))))) 
                                                & vlSelf->tb_tcam__DOT__in_addr));
        tb_tcam__DOT__dut__DOT__vtb_addr2 = (0xffU 
                                             & ((- (IData)(
                                                           (2U 
                                                            == 
                                                            (3U 
                                                             & (vlSelf->tb_tcam__DOT__in_addr 
                                                                >> 8U))))) 
                                                & vlSelf->tb_tcam__DOT__in_addr));
        tb_tcam__DOT__dut__DOT__vtb_addr3 = (0xffU 
                                             & ((- (IData)(
                                                           (3U 
                                                            == 
                                                            (3U 
                                                             & (vlSelf->tb_tcam__DOT__in_addr 
                                                                >> 8U))))) 
                                                & vlSelf->tb_tcam__DOT__in_addr));
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT____Vcellinp__dut_vtb__addr0 
            = ((- (IData)((1U & (~ (IData)(vlSelf->tb_tcam__DOT__in_web))))) 
               & (IData)(tb_tcam__DOT__dut__DOT__vtb_addr0));
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT____Vcellinp__dut_vtb__addr0 
            = ((- (IData)((1U & (~ (IData)(vlSelf->tb_tcam__DOT__in_web))))) 
               & (IData)(tb_tcam__DOT__dut__DOT__vtb_addr1));
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT____Vcellinp__dut_vtb__addr0 
            = ((- (IData)((1U & (~ (IData)(vlSelf->tb_tcam__DOT__in_web))))) 
               & (IData)(tb_tcam__DOT__dut__DOT__vtb_addr2));
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT____Vcellinp__dut_vtb__addr0 
            = ((- (IData)((1U & (~ (IData)(vlSelf->tb_tcam__DOT__in_web))))) 
               & (IData)(tb_tcam__DOT__dut__DOT__vtb_addr3));
    }
    vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__ar_addr2 
        = ((0x80U | (0x7fU & (IData)(tb_tcam__DOT__dut__DOT__vtb_addr0))) 
           & (- (IData)((IData)(vlSelf->tb_tcam__DOT__in_web))));
    vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__ar_addr2 
        = ((0x80U | (0x7fU & (IData)(tb_tcam__DOT__dut__DOT__vtb_addr1))) 
           & (- (IData)((IData)(vlSelf->tb_tcam__DOT__in_web))));
    vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__ar_addr2 
        = ((0x80U | (0x7fU & (IData)(tb_tcam__DOT__dut__DOT__vtb_addr2))) 
           & (- (IData)((IData)(vlSelf->tb_tcam__DOT__in_web))));
    vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__ar_addr2 
        = ((0x80U | (0x7fU & (IData)(tb_tcam__DOT__dut__DOT__vtb_addr3))) 
           & (- (IData)((IData)(vlSelf->tb_tcam__DOT__in_web))));
}

void Vtb_tcam___024root___eval_act(Vtb_tcam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_tcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tcam___024root___eval_act\n"); );
    // Body
    if ((0xcULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_tcam___024root___act_comb__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_tcam___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_tcam___024root___nba_sequent__TOP__0(Vtb_tcam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_tcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tcam___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->__Vdlyvset__tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__rdata_upper__v0) {
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__rdata_upper 
            = vlSelf->__Vdlyvval__tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__rdata_upper__v0;
        vlSelf->__Vdlyvset__tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__rdata_upper__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__rdata_lower__v0) {
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__rdata_lower 
            = vlSelf->__Vdlyvval__tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__rdata_lower__v0;
        vlSelf->__Vdlyvset__tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__rdata_lower__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__rdata_upper__v0) {
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__rdata_upper 
            = vlSelf->__Vdlyvval__tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__rdata_upper__v0;
        vlSelf->__Vdlyvset__tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__rdata_upper__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__rdata_lower__v0) {
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__rdata_lower 
            = vlSelf->__Vdlyvval__tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__rdata_lower__v0;
        vlSelf->__Vdlyvset__tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__rdata_lower__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__rdata_upper__v0) {
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__rdata_upper 
            = vlSelf->__Vdlyvval__tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__rdata_upper__v0;
        vlSelf->__Vdlyvset__tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__rdata_upper__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__rdata_lower__v0) {
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__rdata_lower 
            = vlSelf->__Vdlyvval__tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__rdata_lower__v0;
        vlSelf->__Vdlyvset__tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__rdata_lower__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__rdata_upper__v0) {
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__rdata_upper 
            = vlSelf->__Vdlyvval__tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__rdata_upper__v0;
        vlSelf->__Vdlyvset__tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__rdata_upper__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__rdata_lower__v0) {
        vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__rdata_lower 
            = vlSelf->__Vdlyvval__tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__rdata_lower__v0;
        vlSelf->__Vdlyvset__tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__rdata_lower__v0 = 0U;
    }
}

VL_INLINE_OPT void Vtb_tcam___024root___nba_sequent__TOP__1(Vtb_tcam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_tcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tcam___024root___nba_sequent__TOP__1\n"); );
    // Body
    if ((1U & ((~ (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__csb0_reg)) 
               & (~ (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__web0_reg))))) {
        if ((1U & (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__wmask0_reg))) {
            vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__mem[vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__addr0_reg] 
                = ((0xffffff00U & vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__mem
                    [vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__addr0_reg]) 
                   | (0xffU & vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__din0_reg));
        }
        if ((2U & (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__wmask0_reg))) {
            vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__mem[vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__addr0_reg] 
                = ((0xffff00ffU & vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__mem
                    [vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__addr0_reg]) 
                   | (0xff00U & vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__din0_reg));
        }
        if ((4U & (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__wmask0_reg))) {
            vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__mem[vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__addr0_reg] 
                = ((0xff00ffffU & vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__mem
                    [vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__addr0_reg]) 
                   | (0xff0000U & vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__din0_reg));
        }
        if ((8U & (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__wmask0_reg))) {
            vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__mem[vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__addr0_reg] 
                = ((0xffffffU & vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__mem
                    [vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__addr0_reg]) 
                   | (0xff000000U & vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__din0_reg));
        }
    }
    if ((1U & ((~ (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__csb0_reg)) 
               & (~ (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__web0_reg))))) {
        if ((1U & (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__wmask0_reg))) {
            vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__mem[vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__addr0_reg] 
                = ((0xffffff00U & vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__mem
                    [vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__addr0_reg]) 
                   | (0xffU & vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__din0_reg));
        }
        if ((2U & (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__wmask0_reg))) {
            vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__mem[vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__addr0_reg] 
                = ((0xffff00ffU & vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__mem
                    [vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__addr0_reg]) 
                   | (0xff00U & vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__din0_reg));
        }
        if ((4U & (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__wmask0_reg))) {
            vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__mem[vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__addr0_reg] 
                = ((0xff00ffffU & vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__mem
                    [vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__addr0_reg]) 
                   | (0xff0000U & vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__din0_reg));
        }
        if ((8U & (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__wmask0_reg))) {
            vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__mem[vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__addr0_reg] 
                = ((0xffffffU & vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__mem
                    [vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__addr0_reg]) 
                   | (0xff000000U & vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__din0_reg));
        }
    }
    if ((1U & ((~ (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__csb0_reg)) 
               & (~ (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__web0_reg))))) {
        if ((1U & (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__wmask0_reg))) {
            vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__mem[vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__addr0_reg] 
                = ((0xffffff00U & vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__mem
                    [vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__addr0_reg]) 
                   | (0xffU & vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__din0_reg));
        }
        if ((2U & (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__wmask0_reg))) {
            vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__mem[vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__addr0_reg] 
                = ((0xffff00ffU & vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__mem
                    [vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__addr0_reg]) 
                   | (0xff00U & vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__din0_reg));
        }
        if ((4U & (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__wmask0_reg))) {
            vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__mem[vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__addr0_reg] 
                = ((0xff00ffffU & vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__mem
                    [vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__addr0_reg]) 
                   | (0xff0000U & vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__din0_reg));
        }
        if ((8U & (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__wmask0_reg))) {
            vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__mem[vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__addr0_reg] 
                = ((0xffffffU & vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__mem
                    [vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__addr0_reg]) 
                   | (0xff000000U & vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__din0_reg));
        }
    }
    if ((1U & ((~ (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__csb0_reg)) 
               & (~ (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__web0_reg))))) {
        if ((1U & (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__wmask0_reg))) {
            vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__mem[vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__addr0_reg] 
                = ((0xffffff00U & vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__mem
                    [vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__addr0_reg]) 
                   | (0xffU & vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__din0_reg));
        }
        if ((2U & (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__wmask0_reg))) {
            vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__mem[vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__addr0_reg] 
                = ((0xffff00ffU & vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__mem
                    [vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__addr0_reg]) 
                   | (0xff00U & vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__din0_reg));
        }
        if ((4U & (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__wmask0_reg))) {
            vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__mem[vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__addr0_reg] 
                = ((0xff00ffffU & vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__mem
                    [vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__addr0_reg]) 
                   | (0xff0000U & vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__din0_reg));
        }
        if ((8U & (IData)(vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__wmask0_reg))) {
            vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__mem[vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__addr0_reg] 
                = ((0xffffffU & vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__mem
                    [vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__addr0_reg]) 
                   | (0xff000000U & vlSelf->tb_tcam__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__din0_reg));
        }
    }
}

void Vtb_tcam___024root___eval_nba(Vtb_tcam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_tcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tcam___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_tcam___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_tcam___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_tcam___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0xeULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_tcam___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb_tcam___024root___timing_resume(Vtb_tcam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_tcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tcam___024root___timing_resume\n"); );
    // Body
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h0f0a937a__0.resume("@(posedge tb_tcam.in_clk)");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h0f0a9447__0.resume("@(negedge tb_tcam.in_clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_tcam___024root___timing_commit(Vtb_tcam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_tcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tcam___024root___timing_commit\n"); );
    // Body
    if ((! (8ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h0f0a937a__0.commit("@(posedge tb_tcam.in_clk)");
    }
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h0f0a9447__0.commit("@(negedge tb_tcam.in_clk)");
    }
}

void Vtb_tcam___024root___eval_triggers__act(Vtb_tcam___024root* vlSelf);

bool Vtb_tcam___024root___eval_phase__act(Vtb_tcam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_tcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tcam___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_tcam___024root___eval_triggers__act(vlSelf);
    Vtb_tcam___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_tcam___024root___timing_resume(vlSelf);
        Vtb_tcam___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_tcam___024root___eval_phase__nba(Vtb_tcam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_tcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tcam___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_tcam___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_tcam___024root___dump_triggers__nba(Vtb_tcam___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_tcam___024root___dump_triggers__act(Vtb_tcam___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_tcam___024root___eval(Vtb_tcam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_tcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tcam___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_tcam___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_tcam.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_tcam___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_tcam.sv", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_tcam___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_tcam___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_tcam___024root___eval_debug_assertions(Vtb_tcam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_tcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tcam___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
