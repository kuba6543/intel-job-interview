// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vquadra_top.h for the primary calling header

#ifndef VERILATED_VQUADRA_TOP___024ROOT_H_
#define VERILATED_VQUADRA_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vquadra_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vquadra_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_b,0,0);
    VL_IN8(x_dv,0,0);
    VL_OUT8(y_dv,0,0);
    CData/*0:0*/ quadra_top__DOT__dv_p0;
    CData/*0:0*/ quadra_top__DOT__dv_p1;
    CData/*0:0*/ quadra_top__DOT__dv_p2;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_b__0;
    CData/*0:0*/ __VactContinue;
    SData/*12:0*/ quadra_top__DOT__c_lut_out;
    SData/*12:0*/ quadra_top__DOT__quadratic_polynomial_interpolator__DOT__c_lut;
    VL_IN(x,23,0);
    VL_OUT(y,24,0);
    IData/*29:0*/ quadra_top__DOT__a_lut_out;
    IData/*18:0*/ quadra_top__DOT__b_lut_out;
    IData/*24:0*/ quadra_top__DOT__y_quadra_out;
    IData/*23:0*/ quadra_top__DOT__quadratic_polynomial_interpolator__DOT__x_lut;
    IData/*29:0*/ quadra_top__DOT__quadratic_polynomial_interpolator__DOT__a_lut;
    IData/*18:0*/ quadra_top__DOT__quadratic_polynomial_interpolator__DOT__b_lut;
    IData/*24:0*/ quadra_top__DOT__quadratic_polynomial_interpolator__DOT__a_shift;
    IData/*24:0*/ quadra_top__DOT__quadratic_polynomial_interpolator__DOT__bx_shift;
    IData/*24:0*/ quadra_top__DOT__quadratic_polynomial_interpolator__DOT__cx2_shift;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vquadra_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vquadra_top___024root(Vquadra_top__Syms* symsp, const char* v__name);
    ~Vquadra_top___024root();
    VL_UNCOPYABLE(Vquadra_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
