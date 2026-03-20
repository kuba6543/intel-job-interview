// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vquadra_top.h for the primary calling header

#include "Vquadra_top__pch.h"
#include "Vquadra_top___024root.h"

extern const VlUnpacked<IData/*29:0*/, 128> Vquadra_top__ConstPool__TABLE_h31ec0d70_0;
extern const VlUnpacked<IData/*18:0*/, 128> Vquadra_top__ConstPool__TABLE_hb97482fa_0;
extern const VlUnpacked<SData/*12:0*/, 128> Vquadra_top__ConstPool__TABLE_h67007e96_0;

VL_INLINE_OPT void Vquadra_top___024root___ico_sequent__TOP__0(Vquadra_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
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

void Vquadra_top___024root___eval_ico(Vquadra_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vquadra_top___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vquadra_top___024root___eval_triggers__ico(Vquadra_top___024root* vlSelf);

bool Vquadra_top___024root___eval_phase__ico(Vquadra_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vquadra_top___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vquadra_top___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vquadra_top___024root___eval_act(Vquadra_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vquadra_top___024root___nba_sequent__TOP__0(Vquadra_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->quadra_top__DOT__dv_p2 = ((IData)(vlSelf->rst_b) 
                                      && (IData)(vlSelf->quadra_top__DOT__dv_p1));
    if (vlSelf->rst_b) {
        vlSelf->quadra_top__DOT__y_quadra_out = (0x1ffffffU 
                                                 & ((vlSelf->quadra_top__DOT__quadratic_polynomial_interpolator__DOT__a_shift 
                                                     + vlSelf->quadra_top__DOT__quadratic_polynomial_interpolator__DOT__bx_shift) 
                                                    + vlSelf->quadra_top__DOT__quadratic_polynomial_interpolator__DOT__cx2_shift));
        vlSelf->quadra_top__DOT__quadratic_polynomial_interpolator__DOT__a_shift 
            = (0x1ffffffU & (vlSelf->quadra_top__DOT__quadratic_polynomial_interpolator__DOT__a_lut 
                             >> 4U));
        vlSelf->quadra_top__DOT__quadratic_polynomial_interpolator__DOT__bx_shift 
            = (0x1ffffffU & VL_SHIFTR_III(25,25,32, 
                                          (0x1ffffffU 
                                           & (vlSelf->quadra_top__DOT__quadratic_polynomial_interpolator__DOT__b_lut 
                                              * vlSelf->quadra_top__DOT__quadratic_polynomial_interpolator__DOT__x_lut)), 0x10U));
        vlSelf->quadra_top__DOT__quadratic_polynomial_interpolator__DOT__cx2_shift 
            = (0x1ffffffU & VL_SHIFTR_III(25,25,32, 
                                          (0x1ffffffU 
                                           & ((IData)(vlSelf->quadra_top__DOT__quadratic_polynomial_interpolator__DOT__c_lut) 
                                              * (0x1ffffffU 
                                                 & (vlSelf->quadra_top__DOT__quadratic_polynomial_interpolator__DOT__x_lut 
                                                    * vlSelf->quadra_top__DOT__quadratic_polynomial_interpolator__DOT__x_lut)))), 0xbU));
    } else {
        vlSelf->quadra_top__DOT__y_quadra_out = 0U;
        vlSelf->quadra_top__DOT__quadratic_polynomial_interpolator__DOT__a_shift = 0U;
        vlSelf->quadra_top__DOT__quadratic_polynomial_interpolator__DOT__bx_shift = 0U;
        vlSelf->quadra_top__DOT__quadratic_polynomial_interpolator__DOT__cx2_shift = 0U;
    }
    vlSelf->y_dv = vlSelf->quadra_top__DOT__dv_p2;
    vlSelf->quadra_top__DOT__dv_p1 = ((IData)(vlSelf->rst_b) 
                                      && (IData)(vlSelf->quadra_top__DOT__dv_p0));
    vlSelf->y = vlSelf->quadra_top__DOT__y_quadra_out;
    vlSelf->quadra_top__DOT__dv_p0 = ((IData)(vlSelf->rst_b) 
                                      && (IData)(vlSelf->x_dv));
    if ((1U & (~ (IData)(vlSelf->rst_b)))) {
        vlSelf->quadra_top__DOT__quadratic_polynomial_interpolator__DOT__a_lut = 0U;
        vlSelf->quadra_top__DOT__quadratic_polynomial_interpolator__DOT__b_lut = 0U;
        vlSelf->quadra_top__DOT__quadratic_polynomial_interpolator__DOT__x_lut = 0U;
        vlSelf->quadra_top__DOT__quadratic_polynomial_interpolator__DOT__c_lut = 0U;
    }
    if (vlSelf->x_dv) {
        vlSelf->quadra_top__DOT__quadratic_polynomial_interpolator__DOT__a_lut 
            = vlSelf->quadra_top__DOT__a_lut_out;
        vlSelf->quadra_top__DOT__quadratic_polynomial_interpolator__DOT__b_lut 
            = vlSelf->quadra_top__DOT__b_lut_out;
        vlSelf->quadra_top__DOT__quadratic_polynomial_interpolator__DOT__x_lut 
            = (0x1ffffU & vlSelf->x);
        vlSelf->quadra_top__DOT__quadratic_polynomial_interpolator__DOT__c_lut 
            = vlSelf->quadra_top__DOT__c_lut_out;
    }
}

void Vquadra_top___024root___eval_nba(Vquadra_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vquadra_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

void Vquadra_top___024root___eval_triggers__act(Vquadra_top___024root* vlSelf);

bool Vquadra_top___024root___eval_phase__act(Vquadra_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vquadra_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vquadra_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vquadra_top___024root___eval_phase__nba(Vquadra_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vquadra_top___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_top___024root___dump_triggers__ico(Vquadra_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_top___024root___dump_triggers__nba(Vquadra_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_top___024root___dump_triggers__act(Vquadra_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vquadra_top___024root___eval(Vquadra_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vquadra_top___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/kuba/intel-job-interview/verilator/../rtl-model/quadra_top.sv", 3, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vquadra_top___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vquadra_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/kuba/intel-job-interview/verilator/../rtl-model/quadra_top.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vquadra_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/kuba/intel-job-interview/verilator/../rtl-model/quadra_top.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vquadra_top___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vquadra_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vquadra_top___024root___eval_debug_assertions(Vquadra_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_b & 0xfeU))) {
        Verilated::overWidthError("rst_b");}
    if (VL_UNLIKELY((vlSelf->x & 0xff000000U))) {
        Verilated::overWidthError("x");}
    if (VL_UNLIKELY((vlSelf->x_dv & 0xfeU))) {
        Verilated::overWidthError("x_dv");}
}
#endif  // VL_DEBUG
