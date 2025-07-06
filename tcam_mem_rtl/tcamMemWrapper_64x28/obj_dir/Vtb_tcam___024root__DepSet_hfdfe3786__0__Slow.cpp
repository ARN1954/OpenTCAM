// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_tcam.h for the primary calling header

#include "Vtb_tcam__pch.h"
#include "Vtb_tcam__Syms.h"
#include "Vtb_tcam___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_tcam___024root___dump_triggers__stl(Vtb_tcam___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_tcam___024root___eval_triggers__stl(Vtb_tcam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_tcam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tcam___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_tcam___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
