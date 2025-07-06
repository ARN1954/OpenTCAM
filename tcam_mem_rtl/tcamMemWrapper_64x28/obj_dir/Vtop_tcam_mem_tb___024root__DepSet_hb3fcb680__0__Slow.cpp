// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tcam_mem_tb.h for the primary calling header

#include "Vtop_tcam_mem_tb__pch.h"
#include "Vtop_tcam_mem_tb___024root.h"

VL_ATTR_COLD void Vtop_tcam_mem_tb___024root___eval_static(Vtop_tcam_mem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tcam_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tcam_mem_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop_tcam_mem_tb___024root___eval_initial__TOP(Vtop_tcam_mem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tcam_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tcam_mem_tb___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->top_tcam_mem_tb__DOT__in_clk = 0U;
}

VL_ATTR_COLD void Vtop_tcam_mem_tb___024root___eval_final(Vtop_tcam_mem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tcam_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tcam_mem_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tcam_mem_tb___024root___dump_triggers__stl(Vtop_tcam_mem_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop_tcam_mem_tb___024root___eval_phase__stl(Vtop_tcam_mem_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_tcam_mem_tb___024root___eval_settle(Vtop_tcam_mem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tcam_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tcam_mem_tb___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop_tcam_mem_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("top_tcam_mem_tb.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop_tcam_mem_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tcam_mem_tb___024root___dump_triggers__stl(Vtop_tcam_mem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tcam_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tcam_mem_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_tcam_mem_tb___024root___stl_sequent__TOP__0(Vtop_tcam_mem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tcam_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tcam_mem_tb___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ top_tcam_mem_tb__DOT__dut__DOT__vtb_addr0;
    top_tcam_mem_tb__DOT__dut__DOT__vtb_addr0 = 0;
    CData/*7:0*/ top_tcam_mem_tb__DOT__dut__DOT__vtb_addr1;
    top_tcam_mem_tb__DOT__dut__DOT__vtb_addr1 = 0;
    CData/*7:0*/ top_tcam_mem_tb__DOT__dut__DOT__vtb_addr2;
    top_tcam_mem_tb__DOT__dut__DOT__vtb_addr2 = 0;
    CData/*7:0*/ top_tcam_mem_tb__DOT__dut__DOT__vtb_addr3;
    top_tcam_mem_tb__DOT__dut__DOT__vtb_addr3 = 0;
    // Body
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
        = (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_gate2 
           & (((QData)((IData)(vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut3__DOT__rdata_upper)) 
               << 0x20U) | (QData)((IData)(vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut3__DOT__rdata_lower))));
    if (vlSelf->top_tcam_mem_tb__DOT__in_web) {
        top_tcam_mem_tb__DOT__dut__DOT__vtb_addr0 = 
            (0xffU & (0x7fU & vlSelf->top_tcam_mem_tb__DOT__in_addr));
        top_tcam_mem_tb__DOT__dut__DOT__vtb_addr1 = 
            (0xffU & (0x7fU & (vlSelf->top_tcam_mem_tb__DOT__in_addr 
                               >> 7U)));
        top_tcam_mem_tb__DOT__dut__DOT__vtb_addr2 = 
            (0xffU & (0x7fU & (vlSelf->top_tcam_mem_tb__DOT__in_addr 
                               >> 0xeU)));
        top_tcam_mem_tb__DOT__dut__DOT__vtb_addr3 = 
            (0xffU & (0x7fU & (vlSelf->top_tcam_mem_tb__DOT__in_addr 
                               >> 0x15U)));
        vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut0__DOT____Vcellinp__dut_vtb__addr0 
            = (0x7fU & (IData)(top_tcam_mem_tb__DOT__dut__DOT__vtb_addr0));
        vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut1__DOT____Vcellinp__dut_vtb__addr0 
            = (0x7fU & (IData)(top_tcam_mem_tb__DOT__dut__DOT__vtb_addr1));
        vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut2__DOT____Vcellinp__dut_vtb__addr0 
            = (0x7fU & (IData)(top_tcam_mem_tb__DOT__dut__DOT__vtb_addr2));
        vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut3__DOT____Vcellinp__dut_vtb__addr0 
            = (0x7fU & (IData)(top_tcam_mem_tb__DOT__dut__DOT__vtb_addr3));
    } else {
        top_tcam_mem_tb__DOT__dut__DOT__vtb_addr0 = 
            (0xffU & ((- (IData)((0U == (3U & (vlSelf->top_tcam_mem_tb__DOT__in_addr 
                                               >> 8U))))) 
                      & vlSelf->top_tcam_mem_tb__DOT__in_addr));
        top_tcam_mem_tb__DOT__dut__DOT__vtb_addr1 = 
            (0xffU & ((- (IData)((1U == (3U & (vlSelf->top_tcam_mem_tb__DOT__in_addr 
                                               >> 8U))))) 
                      & vlSelf->top_tcam_mem_tb__DOT__in_addr));
        top_tcam_mem_tb__DOT__dut__DOT__vtb_addr2 = 
            (0xffU & ((- (IData)((2U == (3U & (vlSelf->top_tcam_mem_tb__DOT__in_addr 
                                               >> 8U))))) 
                      & vlSelf->top_tcam_mem_tb__DOT__in_addr));
        top_tcam_mem_tb__DOT__dut__DOT__vtb_addr3 = 
            (0xffU & ((- (IData)((3U == (3U & (vlSelf->top_tcam_mem_tb__DOT__in_addr 
                                               >> 8U))))) 
                      & vlSelf->top_tcam_mem_tb__DOT__in_addr));
        vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut0__DOT____Vcellinp__dut_vtb__addr0 
            = ((- (IData)((1U & (~ (IData)(vlSelf->top_tcam_mem_tb__DOT__in_web))))) 
               & (IData)(top_tcam_mem_tb__DOT__dut__DOT__vtb_addr0));
        vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut1__DOT____Vcellinp__dut_vtb__addr0 
            = ((- (IData)((1U & (~ (IData)(vlSelf->top_tcam_mem_tb__DOT__in_web))))) 
               & (IData)(top_tcam_mem_tb__DOT__dut__DOT__vtb_addr1));
        vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut2__DOT____Vcellinp__dut_vtb__addr0 
            = ((- (IData)((1U & (~ (IData)(vlSelf->top_tcam_mem_tb__DOT__in_web))))) 
               & (IData)(top_tcam_mem_tb__DOT__dut__DOT__vtb_addr2));
        vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut3__DOT____Vcellinp__dut_vtb__addr0 
            = ((- (IData)((1U & (~ (IData)(vlSelf->top_tcam_mem_tb__DOT__in_web))))) 
               & (IData)(top_tcam_mem_tb__DOT__dut__DOT__vtb_addr3));
    }
    vlSelf->top_tcam_mem_tb__DOT__out_pma = ((1U & (IData)(
                                                           (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                            >> 0x3fU)))
                                              ? 0x3fU
                                              : ((1U 
                                                  & (IData)(
                                                            (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                             >> 0x3eU)))
                                                  ? 0x3eU
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                              >> 0x3dU)))
                                                   ? 0x3dU
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                               >> 0x3cU)))
                                                    ? 0x3cU
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                >> 0x3bU)))
                                                     ? 0x3bU
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                 >> 0x3aU)))
                                                      ? 0x3aU
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                  >> 0x39U)))
                                                       ? 0x39U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                   >> 0x38U)))
                                                        ? 0x38U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                    >> 0x37U)))
                                                         ? 0x37U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                     >> 0x36U)))
                                                          ? 0x36U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                      >> 0x35U)))
                                                           ? 0x35U
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                       >> 0x34U)))
                                                            ? 0x34U
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                        >> 0x33U)))
                                                             ? 0x33U
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                         >> 0x32U)))
                                                              ? 0x32U
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                          >> 0x31U)))
                                                               ? 0x31U
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                           >> 0x30U)))
                                                                ? 0x30U
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                            >> 0x2fU)))
                                                                 ? 0x2fU
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                             >> 0x2eU)))
                                                                  ? 0x2eU
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                              >> 0x2dU)))
                                                                   ? 0x2dU
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                               >> 0x2cU)))
                                                                    ? 0x2cU
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                                >> 0x2bU)))
                                                                     ? 0x2bU
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                                >> 0x2aU)))
                                                                      ? 0x2aU
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                                >> 0x29U)))
                                                                       ? 0x29U
                                                                       : 
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                                >> 0x28U)))
                                                                        ? 0x28U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                                >> 0x27U)))
                                                                         ? 0x27U
                                                                         : 
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                                >> 0x26U)))
                                                                          ? 0x26U
                                                                          : 
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                                >> 0x25U)))
                                                                           ? 0x25U
                                                                           : 
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                                >> 0x24U)))
                                                                            ? 0x24U
                                                                            : 
                                                                           ((1U 
                                                                             & (IData)(
                                                                                (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                                >> 0x23U)))
                                                                             ? 0x23U
                                                                             : 
                                                                            ((1U 
                                                                              & (IData)(
                                                                                (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                                >> 0x22U)))
                                                                              ? 0x22U
                                                                              : 
                                                                             ((1U 
                                                                               & (IData)(
                                                                                (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                                >> 0x21U)))
                                                                               ? 0x21U
                                                                               : 
                                                                              ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                                >> 0x20U)))
                                                                                ? 0x20U
                                                                                : 
                                                                               ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                                >> 0x1fU)))
                                                                                 ? 0x1fU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                                >> 0x1eU)))
                                                                                 ? 0x1eU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                                >> 0x1dU)))
                                                                                 ? 0x1dU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                                >> 0x1cU)))
                                                                                 ? 0x1cU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                                >> 0x1bU)))
                                                                                 ? 0x1bU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                                >> 0x1aU)))
                                                                                 ? 0x1aU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                                >> 0x19U)))
                                                                                 ? 0x19U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                                >> 0x18U)))
                                                                                 ? 0x18U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                                >> 0x17U)))
                                                                                 ? 0x17U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                                >> 0x16U)))
                                                                                 ? 0x16U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                                >> 0x15U)))
                                                                                 ? 0x15U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                                >> 0x14U)))
                                                                                 ? 0x14U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                                >> 0x13U)))
                                                                                 ? 0x13U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                                >> 0x12U)))
                                                                                 ? 0x12U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                                >> 0x11U)))
                                                                                 ? 0x11U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                                >> 0x10U)))
                                                                                 ? 0x10U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                                >> 0xfU)))
                                                                                 ? 0xfU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                                >> 0xeU)))
                                                                                 ? 0xeU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                                >> 0xdU)))
                                                                                 ? 0xdU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                                >> 0xcU)))
                                                                                 ? 0xcU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                                >> 0xbU)))
                                                                                 ? 0xbU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                                >> 0xaU)))
                                                                                 ? 0xaU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                                >> 9U)))
                                                                                 ? 9U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                                >> 8U)))
                                                                                 ? 8U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                                >> 7U)))
                                                                                 ? 7U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                                >> 6U)))
                                                                                 ? 6U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                                >> 5U)))
                                                                                 ? 5U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                                >> 4U)))
                                                                                 ? 4U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                                >> 3U)))
                                                                                 ? 3U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                                >> 2U)))
                                                                                 ? 2U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate 
                                                                                >> 1U)))
                                                                                 ? 1U
                                                                                 : 0U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut0__DOT__ar_addr2 
        = ((0x80U | (0x7fU & (IData)(top_tcam_mem_tb__DOT__dut__DOT__vtb_addr0))) 
           & (- (IData)((IData)(vlSelf->top_tcam_mem_tb__DOT__in_web))));
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut1__DOT__ar_addr2 
        = ((0x80U | (0x7fU & (IData)(top_tcam_mem_tb__DOT__dut__DOT__vtb_addr1))) 
           & (- (IData)((IData)(vlSelf->top_tcam_mem_tb__DOT__in_web))));
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut2__DOT__ar_addr2 
        = ((0x80U | (0x7fU & (IData)(top_tcam_mem_tb__DOT__dut__DOT__vtb_addr2))) 
           & (- (IData)((IData)(vlSelf->top_tcam_mem_tb__DOT__in_web))));
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut3__DOT__ar_addr2 
        = ((0x80U | (0x7fU & (IData)(top_tcam_mem_tb__DOT__dut__DOT__vtb_addr3))) 
           & (- (IData)((IData)(vlSelf->top_tcam_mem_tb__DOT__in_web))));
}

VL_ATTR_COLD void Vtop_tcam_mem_tb___024root___eval_stl(Vtop_tcam_mem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tcam_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tcam_mem_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop_tcam_mem_tb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtop_tcam_mem_tb___024root___eval_triggers__stl(Vtop_tcam_mem_tb___024root* vlSelf);

VL_ATTR_COLD bool Vtop_tcam_mem_tb___024root___eval_phase__stl(Vtop_tcam_mem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tcam_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tcam_mem_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop_tcam_mem_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop_tcam_mem_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tcam_mem_tb___024root___dump_triggers__act(Vtop_tcam_mem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tcam_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tcam_mem_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(negedge top_tcam_mem_tb.in_clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge top_tcam_mem_tb.in_clk or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge top_tcam_mem_tb.in_clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tcam_mem_tb___024root___dump_triggers__nba(Vtop_tcam_mem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tcam_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tcam_mem_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(negedge top_tcam_mem_tb.in_clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge top_tcam_mem_tb.in_clk or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge top_tcam_mem_tb.in_clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_tcam_mem_tb___024root___ctor_var_reset(Vtop_tcam_mem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tcam_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tcam_mem_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->top_tcam_mem_tb__DOT__in_clk = VL_RAND_RESET_I(1);
    vlSelf->top_tcam_mem_tb__DOT__in_csb = VL_RAND_RESET_I(1);
    vlSelf->top_tcam_mem_tb__DOT__in_web = VL_RAND_RESET_I(1);
    vlSelf->top_tcam_mem_tb__DOT__in_wmask = VL_RAND_RESET_I(4);
    vlSelf->top_tcam_mem_tb__DOT__in_addr = VL_RAND_RESET_I(28);
    vlSelf->top_tcam_mem_tb__DOT__in_wdata = VL_RAND_RESET_I(32);
    vlSelf->top_tcam_mem_tb__DOT__out_pma = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top_tcam_mem_tb__DOT__key_parts[__Vi0] = VL_RAND_RESET_I(7);
    }
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_gate2 = VL_RAND_RESET_Q(64);
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__out_andgate = VL_RAND_RESET_Q(64);
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut0__DOT__ar_addr2 = VL_RAND_RESET_I(8);
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut0__DOT__rdata_lower = VL_RAND_RESET_I(32);
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut0__DOT__rdata_upper = VL_RAND_RESET_I(32);
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut0__DOT____Vcellinp__dut_vtb__addr0 = VL_RAND_RESET_I(8);
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__csb0_reg = VL_RAND_RESET_I(1);
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__web0_reg = VL_RAND_RESET_I(1);
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__wmask0_reg = VL_RAND_RESET_I(4);
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__addr0_reg = VL_RAND_RESET_I(8);
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__din0_reg = VL_RAND_RESET_I(32);
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__csb1_reg = VL_RAND_RESET_I(1);
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__addr1_reg = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut0__DOT__dut_vtb__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut1__DOT__ar_addr2 = VL_RAND_RESET_I(8);
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut1__DOT__rdata_lower = VL_RAND_RESET_I(32);
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut1__DOT__rdata_upper = VL_RAND_RESET_I(32);
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut1__DOT____Vcellinp__dut_vtb__addr0 = VL_RAND_RESET_I(8);
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__csb0_reg = VL_RAND_RESET_I(1);
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__web0_reg = VL_RAND_RESET_I(1);
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__wmask0_reg = VL_RAND_RESET_I(4);
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__addr0_reg = VL_RAND_RESET_I(8);
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__din0_reg = VL_RAND_RESET_I(32);
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__csb1_reg = VL_RAND_RESET_I(1);
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__addr1_reg = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut1__DOT__dut_vtb__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut2__DOT__ar_addr2 = VL_RAND_RESET_I(8);
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut2__DOT__rdata_lower = VL_RAND_RESET_I(32);
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut2__DOT__rdata_upper = VL_RAND_RESET_I(32);
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut2__DOT____Vcellinp__dut_vtb__addr0 = VL_RAND_RESET_I(8);
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__csb0_reg = VL_RAND_RESET_I(1);
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__web0_reg = VL_RAND_RESET_I(1);
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__wmask0_reg = VL_RAND_RESET_I(4);
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__addr0_reg = VL_RAND_RESET_I(8);
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__din0_reg = VL_RAND_RESET_I(32);
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__csb1_reg = VL_RAND_RESET_I(1);
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__addr1_reg = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut2__DOT__dut_vtb__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut3__DOT__ar_addr2 = VL_RAND_RESET_I(8);
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut3__DOT__rdata_lower = VL_RAND_RESET_I(32);
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut3__DOT__rdata_upper = VL_RAND_RESET_I(32);
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut3__DOT____Vcellinp__dut_vtb__addr0 = VL_RAND_RESET_I(8);
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__csb0_reg = VL_RAND_RESET_I(1);
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__web0_reg = VL_RAND_RESET_I(1);
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__wmask0_reg = VL_RAND_RESET_I(4);
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__addr0_reg = VL_RAND_RESET_I(8);
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__din0_reg = VL_RAND_RESET_I(32);
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__csb1_reg = VL_RAND_RESET_I(1);
    vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__addr1_reg = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut3__DOT__dut_vtb__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vintraval_h0b077030__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vintraval_h6a83bcb2__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vintraval_hc4b1ecbc__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vintraval_h4c939d6f__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vintraval_h5a4e0b02__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vintraval_h450a2a5b__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vintraval_hd3743077__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vintraval_h039ff142__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut3__DOT__rdata_upper__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut3__DOT__rdata_upper__v0 = 0;
    vlSelf->__Vdlyvval__top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut3__DOT__rdata_lower__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut3__DOT__rdata_lower__v0 = 0;
    vlSelf->__Vdlyvval__top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut2__DOT__rdata_upper__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut2__DOT__rdata_upper__v0 = 0;
    vlSelf->__Vdlyvval__top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut2__DOT__rdata_lower__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut2__DOT__rdata_lower__v0 = 0;
    vlSelf->__Vdlyvval__top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut1__DOT__rdata_upper__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut1__DOT__rdata_upper__v0 = 0;
    vlSelf->__Vdlyvval__top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut1__DOT__rdata_lower__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut1__DOT__rdata_lower__v0 = 0;
    vlSelf->__Vdlyvval__top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut0__DOT__rdata_upper__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut0__DOT__rdata_upper__v0 = 0;
    vlSelf->__Vdlyvval__top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut0__DOT__rdata_lower__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top_tcam_mem_tb__DOT__dut__DOT__tcam7x64_dut0__DOT__rdata_lower__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top_tcam_mem_tb__DOT__in_clk__0 = VL_RAND_RESET_I(1);
}
