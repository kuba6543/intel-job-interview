// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vquadra_top.h for the primary calling header

#include "Vquadra_top__pch.h"
#include "Vquadra_top___024root.h"

VL_ATTR_COLD void Vquadra_top___024root___eval_static(Vquadra_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vquadra_top___024root___eval_initial(Vquadra_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_b__0 = vlSelf->rst_b;
}

VL_ATTR_COLD void Vquadra_top___024root___eval_final(Vquadra_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_top___024root___dump_triggers__stl(Vquadra_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vquadra_top___024root___eval_phase__stl(Vquadra_top___024root* vlSelf);

VL_ATTR_COLD void Vquadra_top___024root___eval_settle(Vquadra_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_settle\n"); );
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
            Vquadra_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/kuba/intel-job-interview/verilator/../rtl-model/quadra_top.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vquadra_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_top___024root___dump_triggers__stl(Vquadra_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<IData/*29:0*/, 128> Vquadra_top__ConstPool__TABLE_h31ec0d70_0;
extern const VlUnpacked<IData/*18:0*/, 128> Vquadra_top__ConstPool__TABLE_hb97482fa_0;
extern const VlUnpacked<SData/*12:0*/, 128> Vquadra_top__ConstPool__TABLE_h67007e96_0;

VL_ATTR_COLD void Vquadra_top___024root___stl_sequent__TOP__0(Vquadra_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelf->y = vlSelf->quadra_top__DOT__y_quadra_out;
    vlSelf->y_dv = vlSelf->quadra_top__DOT__dv_p2;
    __Vtableidx1 = (0x7fU & (vlSelf->x >> 0x11U));
    vlSelf->quadra_top__DOT__a_lut_out = Vquadra_top__ConstPool__TABLE_h31ec0d70_0
        [__Vtableidx1];
    __Vtableidx2 = (0x7fU & (vlSelf->x >> 0x11U));
    vlSelf->quadra_top__DOT__b_lut_out = Vquadra_top__ConstPool__TABLE_hb97482fa_0
        [__Vtableidx2];
    __Vtableidx3 = (0x7fU & (vlSelf->x >> 0x11U));
    vlSelf->quadra_top__DOT__c_lut_out = Vquadra_top__ConstPool__TABLE_h67007e96_0
        [__Vtableidx3];
}

VL_ATTR_COLD void Vquadra_top___024root___eval_stl(Vquadra_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vquadra_top___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vquadra_top___024root___eval_triggers__stl(Vquadra_top___024root* vlSelf);

VL_ATTR_COLD bool Vquadra_top___024root___eval_phase__stl(Vquadra_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vquadra_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vquadra_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_top___024root___dump_triggers__ico(Vquadra_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_top___024root___dump_triggers__act(Vquadra_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or negedge rst_b)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_top___024root___dump_triggers__nba(Vquadra_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge rst_b)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vquadra_top___024root___ctor_var_reset(Vquadra_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_b = VL_RAND_RESET_I(1);
    vlSelf->x = VL_RAND_RESET_I(24);
    vlSelf->x_dv = VL_RAND_RESET_I(1);
    vlSelf->y = VL_RAND_RESET_I(25);
    vlSelf->y_dv = VL_RAND_RESET_I(1);
    vlSelf->quadra_top__DOT__dv_p0 = VL_RAND_RESET_I(1);
    vlSelf->quadra_top__DOT__dv_p1 = VL_RAND_RESET_I(1);
    vlSelf->quadra_top__DOT__dv_p2 = VL_RAND_RESET_I(1);
    vlSelf->quadra_top__DOT__a_lut_out = VL_RAND_RESET_I(30);
    vlSelf->quadra_top__DOT__b_lut_out = VL_RAND_RESET_I(19);
    vlSelf->quadra_top__DOT__c_lut_out = VL_RAND_RESET_I(13);
    vlSelf->quadra_top__DOT__y_quadra_out = VL_RAND_RESET_I(25);
    vlSelf->quadra_top__DOT__quadratic_polynomial_interpolator__DOT__x_lut = VL_RAND_RESET_I(24);
    vlSelf->quadra_top__DOT__quadratic_polynomial_interpolator__DOT__a_lut = VL_RAND_RESET_I(30);
    vlSelf->quadra_top__DOT__quadratic_polynomial_interpolator__DOT__b_lut = VL_RAND_RESET_I(19);
    vlSelf->quadra_top__DOT__quadratic_polynomial_interpolator__DOT__c_lut = VL_RAND_RESET_I(13);
    vlSelf->quadra_top__DOT__quadratic_polynomial_interpolator__DOT__a_shift = VL_RAND_RESET_I(25);
    vlSelf->quadra_top__DOT__quadratic_polynomial_interpolator__DOT__bx_shift = VL_RAND_RESET_I(25);
    vlSelf->quadra_top__DOT__quadratic_polynomial_interpolator__DOT__cx2_shift = VL_RAND_RESET_I(25);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_b__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
