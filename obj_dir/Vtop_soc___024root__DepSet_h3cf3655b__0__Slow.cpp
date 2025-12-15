// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_soc.h for the primary calling header

#include "Vtop_soc__pch.h"
#include "Vtop_soc___024root.h"

VL_ATTR_COLD void Vtop_soc___024root___eval_static(Vtop_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_soc___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop_soc___024root___eval_initial__TOP(Vtop_soc___024root* vlSelf);

VL_ATTR_COLD void Vtop_soc___024root___eval_initial(Vtop_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_soc___024root___eval_initial\n"); );
    // Body
    Vtop_soc___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__top_soc__DOT__u_cpu__DOT__d_addr_n__0 
        = vlSelf->top_soc__DOT__u_cpu__DOT__d_addr_n;
    vlSelf->__Vtrigprevexpr___TOP__top_soc__DOT__u_cpu__DOT__d_addr_n__1 
        = vlSelf->top_soc__DOT__u_cpu__DOT__d_addr_n;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

extern const VlWide<32>/*1023:0*/ Vtop_soc__ConstPool__CONST_h3b72f196_0;

VL_ATTR_COLD void Vtop_soc___024root___eval_initial__TOP(Vtop_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_soc___024root___eval_initial__TOP\n"); );
    // Init
    IData/*31:0*/ top_soc__DOT__u_ram__DOT__unnamedblk1__DOT__j;
    top_soc__DOT__u_ram__DOT__unnamedblk1__DOT__j = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    top_soc__DOT__u_ram__DOT__unnamedblk1__DOT__j = 0U;
    while (VL_GTS_III(32, 0x10000U, top_soc__DOT__u_ram__DOT__unnamedblk1__DOT__j)) {
        vlSelf->top_soc__DOT__u_ram__DOT__mem8[(0xffffU 
                                                & top_soc__DOT__u_ram__DOT__unnamedblk1__DOT__j)] = 0U;
        top_soc__DOT__u_ram__DOT__unnamedblk1__DOT__j 
            = ((IData)(1U) + top_soc__DOT__u_ram__DOT__unnamedblk1__DOT__j);
    }
    __Vtemp_2[0U] = 0x453d2573U;
    __Vtemp_2[1U] = 0x4d46494cU;
    __Vtemp_2[2U] = 0x4d45U;
    if (VL_VALUEPLUSARGS_INW(1024, VL_CVT_PACK_STR_NW(3, __Vtemp_2), 
                             vlSelf->top_soc__DOT__u_ram__DOT__unnamedblk1__DOT__f)) {
        VL_READMEM_N(true, 8, 65536, 0, VL_CVT_PACK_STR_NW(32, vlSelf->top_soc__DOT__u_ram__DOT__unnamedblk1__DOT__f)
                     ,  &(vlSelf->top_soc__DOT__u_ram__DOT__mem8)
                     , 0, ~0ULL);
    } else {
        VL_READMEM_N(true, 8, 65536, 0, VL_CVT_PACK_STR_NW(32, Vtop_soc__ConstPool__CONST_h3b72f196_0)
                     ,  &(vlSelf->top_soc__DOT__u_ram__DOT__mem8)
                     , 0, ~0ULL);
    }
}

VL_ATTR_COLD void Vtop_soc___024root___eval_final(Vtop_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_soc___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_soc___024root___dump_triggers__stl(Vtop_soc___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop_soc___024root___eval_phase__stl(Vtop_soc___024root* vlSelf);

VL_ATTR_COLD void Vtop_soc___024root___eval_settle(Vtop_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_soc___024root___eval_settle\n"); );
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
            Vtop_soc___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/top_soc.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop_soc___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_soc___024root___dump_triggers__stl(Vtop_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_soc___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] top_soc.u_cpu.d_addr_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_soc___024root___stl_sequent__TOP__0(Vtop_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_soc___024root___stl_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ top_soc__DOT__u_cpu__DOT__imm_b;
    top_soc__DOT__u_cpu__DOT__imm_b = 0;
    IData/*31:0*/ top_soc__DOT__u_cpu__DOT__imm_j;
    top_soc__DOT__u_cpu__DOT__imm_j = 0;
    IData/*31:0*/ top_soc__DOT__u_cpu__DOT____VdfgTmp_h15519655__0;
    top_soc__DOT__u_cpu__DOT____VdfgTmp_h15519655__0 = 0;
    IData/*31:0*/ top_soc__DOT__u_ram__DOT__rd32__Vstatic__aa;
    top_soc__DOT__u_ram__DOT__rd32__Vstatic__aa = 0;
    IData/*31:0*/ __Vfunc_top_soc__DOT__u_cpu__DOT__sext12__0__Vfuncout;
    __Vfunc_top_soc__DOT__u_cpu__DOT__sext12__0__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_top_soc__DOT__u_cpu__DOT__sext12__0__v;
    __Vfunc_top_soc__DOT__u_cpu__DOT__sext12__0__v = 0;
    IData/*31:0*/ __Vfunc_top_soc__DOT__u_cpu__DOT__sext12__1__Vfuncout;
    __Vfunc_top_soc__DOT__u_cpu__DOT__sext12__1__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_top_soc__DOT__u_cpu__DOT__sext12__1__v;
    __Vfunc_top_soc__DOT__u_cpu__DOT__sext12__1__v = 0;
    IData/*31:0*/ __Vfunc_top_soc__DOT__u_cpu__DOT__sext13__2__Vfuncout;
    __Vfunc_top_soc__DOT__u_cpu__DOT__sext13__2__Vfuncout = 0;
    SData/*12:0*/ __Vfunc_top_soc__DOT__u_cpu__DOT__sext13__2__v;
    __Vfunc_top_soc__DOT__u_cpu__DOT__sext13__2__v = 0;
    IData/*31:0*/ __Vfunc_top_soc__DOT__u_cpu__DOT__sext21__3__Vfuncout;
    __Vfunc_top_soc__DOT__u_cpu__DOT__sext21__3__Vfuncout = 0;
    IData/*20:0*/ __Vfunc_top_soc__DOT__u_cpu__DOT__sext21__3__v;
    __Vfunc_top_soc__DOT__u_cpu__DOT__sext21__3__v = 0;
    IData/*31:0*/ __Vfunc_top_soc__DOT__u_ram__DOT__rd32__5__Vfuncout;
    __Vfunc_top_soc__DOT__u_ram__DOT__rd32__5__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top_soc__DOT__u_ram__DOT__rd32__5__a;
    __Vfunc_top_soc__DOT__u_ram__DOT__rd32__5__a = 0;
    // Body
    __Vfunc_top_soc__DOT__u_ram__DOT__rd32__5__a = vlSelf->top_soc__DOT__u_cpu__DOT__pc;
    top_soc__DOT__u_ram__DOT__rd32__Vstatic__aa = (0xfffffffcU 
                                                   & __Vfunc_top_soc__DOT__u_ram__DOT__rd32__5__a);
    __Vfunc_top_soc__DOT__u_ram__DOT__rd32__5__Vfuncout 
        = ((0x10000U > ((IData)(3U) + top_soc__DOT__u_ram__DOT__rd32__Vstatic__aa))
            ? ((vlSelf->top_soc__DOT__u_ram__DOT__mem8
                [(0xffffU & ((IData)(3U) + top_soc__DOT__u_ram__DOT__rd32__Vstatic__aa))] 
                << 0x18U) | ((vlSelf->top_soc__DOT__u_ram__DOT__mem8
                              [(0xffffU & ((IData)(2U) 
                                           + top_soc__DOT__u_ram__DOT__rd32__Vstatic__aa))] 
                              << 0x10U) | ((vlSelf->top_soc__DOT__u_ram__DOT__mem8
                                            [(0xffffU 
                                              & ((IData)(1U) 
                                                 + top_soc__DOT__u_ram__DOT__rd32__Vstatic__aa))] 
                                            << 8U) 
                                           | vlSelf->top_soc__DOT__u_ram__DOT__mem8
                                           [(0xffffU 
                                             & top_soc__DOT__u_ram__DOT__rd32__Vstatic__aa)])))
            : 0x13U);
    vlSelf->top_soc__DOT__i_rdata = __Vfunc_top_soc__DOT__u_ram__DOT__rd32__5__Vfuncout;
    vlSelf->top_soc__DOT__u_cpu__DOT__do_wb = 0U;
    vlSelf->top_soc__DOT__u_cpu__DOT__d_we_n = 0U;
    if ((1U & (~ (vlSelf->top_soc__DOT__i_rdata >> 6U)))) {
        if ((0x20U & vlSelf->top_soc__DOT__i_rdata)) {
            if ((1U & (~ (vlSelf->top_soc__DOT__i_rdata 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->top_soc__DOT__i_rdata 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top_soc__DOT__i_rdata 
                                  >> 2U)))) {
                        if ((2U & vlSelf->top_soc__DOT__i_rdata)) {
                            if ((1U & vlSelf->top_soc__DOT__i_rdata)) {
                                vlSelf->top_soc__DOT__u_cpu__DOT__d_we_n = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    __Vfunc_top_soc__DOT__u_cpu__DOT__sext13__2__v 
        = ((0x1000U & (vlSelf->top_soc__DOT__i_rdata 
                       >> 0x13U)) | ((0x800U & (vlSelf->top_soc__DOT__i_rdata 
                                                << 4U)) 
                                     | ((0x7e0U & (vlSelf->top_soc__DOT__i_rdata 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelf->top_soc__DOT__i_rdata 
                                            >> 7U)))));
    __Vfunc_top_soc__DOT__u_cpu__DOT__sext13__2__Vfuncout 
        = (((- (IData)((1U & ((IData)(__Vfunc_top_soc__DOT__u_cpu__DOT__sext13__2__v) 
                              >> 0xcU)))) << 0xdU) 
           | (IData)(__Vfunc_top_soc__DOT__u_cpu__DOT__sext13__2__v));
    top_soc__DOT__u_cpu__DOT__imm_b = __Vfunc_top_soc__DOT__u_cpu__DOT__sext13__2__Vfuncout;
    __Vfunc_top_soc__DOT__u_cpu__DOT__sext21__3__v 
        = ((0x100000U & (vlSelf->top_soc__DOT__i_rdata 
                         >> 0xbU)) | ((0xff000U & vlSelf->top_soc__DOT__i_rdata) 
                                      | ((0x800U & 
                                          (vlSelf->top_soc__DOT__i_rdata 
                                           >> 9U)) 
                                         | (0x7feU 
                                            & (vlSelf->top_soc__DOT__i_rdata 
                                               >> 0x14U)))));
    __Vfunc_top_soc__DOT__u_cpu__DOT__sext21__3__Vfuncout 
        = (((- (IData)((1U & (__Vfunc_top_soc__DOT__u_cpu__DOT__sext21__3__v 
                              >> 0x14U)))) << 0x15U) 
           | __Vfunc_top_soc__DOT__u_cpu__DOT__sext21__3__v);
    top_soc__DOT__u_cpu__DOT__imm_j = __Vfunc_top_soc__DOT__u_cpu__DOT__sext21__3__Vfuncout;
    __Vfunc_top_soc__DOT__u_cpu__DOT__sext12__1__v 
        = ((0xfe0U & (vlSelf->top_soc__DOT__i_rdata 
                      >> 0x14U)) | (0x1fU & (vlSelf->top_soc__DOT__i_rdata 
                                             >> 7U)));
    __Vfunc_top_soc__DOT__u_cpu__DOT__sext12__1__Vfuncout 
        = (((- (IData)((1U & ((IData)(__Vfunc_top_soc__DOT__u_cpu__DOT__sext12__1__v) 
                              >> 0xbU)))) << 0xcU) 
           | (IData)(__Vfunc_top_soc__DOT__u_cpu__DOT__sext12__1__v));
    vlSelf->top_soc__DOT__u_cpu__DOT__imm_s = __Vfunc_top_soc__DOT__u_cpu__DOT__sext12__1__Vfuncout;
    __Vfunc_top_soc__DOT__u_cpu__DOT__sext12__0__v 
        = (vlSelf->top_soc__DOT__i_rdata >> 0x14U);
    __Vfunc_top_soc__DOT__u_cpu__DOT__sext12__0__Vfuncout 
        = (((- (IData)((1U & ((IData)(__Vfunc_top_soc__DOT__u_cpu__DOT__sext12__0__v) 
                              >> 0xbU)))) << 0xcU) 
           | (IData)(__Vfunc_top_soc__DOT__u_cpu__DOT__sext12__0__v));
    vlSelf->top_soc__DOT__u_cpu__DOT__imm_i = __Vfunc_top_soc__DOT__u_cpu__DOT__sext12__0__Vfuncout;
    top_soc__DOT__u_cpu__DOT____VdfgTmp_h15519655__0 
        = vlSelf->top_soc__DOT__u_cpu__DOT__x[(0x1fU 
                                               & (vlSelf->top_soc__DOT__i_rdata 
                                                  >> 0x14U))];
    vlSelf->top_soc__DOT__u_cpu__DOT__rs1v = ((0U == 
                                               (0x1fU 
                                                & (vlSelf->top_soc__DOT__i_rdata 
                                                   >> 0xfU)))
                                               ? 0U
                                               : vlSelf->top_soc__DOT__u_cpu__DOT__x
                                              [(0x1fU 
                                                & (vlSelf->top_soc__DOT__i_rdata 
                                                   >> 0xfU))]);
    if ((0U == (0x1fU & (vlSelf->top_soc__DOT__i_rdata 
                         >> 0x14U)))) {
        vlSelf->top_soc__DOT__u_cpu__DOT____VdfgTmp_h0098c51a__0 = 0U;
        vlSelf->top_soc__DOT__u_cpu__DOT__rs2v = 0U;
    } else {
        vlSelf->top_soc__DOT__u_cpu__DOT____VdfgTmp_h0098c51a__0 
            = (0x1fU & top_soc__DOT__u_cpu__DOT____VdfgTmp_h15519655__0);
        vlSelf->top_soc__DOT__u_cpu__DOT__rs2v = top_soc__DOT__u_cpu__DOT____VdfgTmp_h15519655__0;
    }
    vlSelf->top_soc__DOT__u_cpu__DOT____VdfgExtracted_hae3c383b__0 
        = (vlSelf->top_soc__DOT__u_cpu__DOT__rs1v + vlSelf->top_soc__DOT__u_cpu__DOT__imm_i);
    vlSelf->top_soc__DOT__u_cpu__DOT____VdfgExtracted_hea06c40a__0 
        = (vlSelf->top_soc__DOT__u_cpu__DOT__rs1v + vlSelf->top_soc__DOT__u_cpu__DOT__rs2v);
    vlSelf->top_soc__DOT__u_cpu__DOT____VdfgExtracted_h117a9097__0 
        = VL_LTS_III(32, vlSelf->top_soc__DOT__u_cpu__DOT__rs1v, vlSelf->top_soc__DOT__u_cpu__DOT__rs2v);
    vlSelf->top_soc__DOT__u_cpu__DOT____VdfgExtracted_h12c968b5__0 
        = (vlSelf->top_soc__DOT__u_cpu__DOT__rs1v < vlSelf->top_soc__DOT__u_cpu__DOT__rs2v);
    vlSelf->top_soc__DOT__u_cpu__DOT__pc_next = ((IData)(4U) 
                                                 + vlSelf->top_soc__DOT__u_cpu__DOT__pc);
    if ((0x40U & vlSelf->top_soc__DOT__i_rdata)) {
        if ((0x20U & vlSelf->top_soc__DOT__i_rdata)) {
            if ((1U & (~ (vlSelf->top_soc__DOT__i_rdata 
                          >> 4U)))) {
                if ((8U & vlSelf->top_soc__DOT__i_rdata)) {
                    if ((4U & vlSelf->top_soc__DOT__i_rdata)) {
                        if ((2U & vlSelf->top_soc__DOT__i_rdata)) {
                            if ((1U & vlSelf->top_soc__DOT__i_rdata)) {
                                vlSelf->top_soc__DOT__u_cpu__DOT__do_wb = 1U;
                                vlSelf->top_soc__DOT__u_cpu__DOT__pc_next 
                                    = (vlSelf->top_soc__DOT__u_cpu__DOT__pc 
                                       + top_soc__DOT__u_cpu__DOT__imm_j);
                            }
                        }
                    }
                } else if ((4U & vlSelf->top_soc__DOT__i_rdata)) {
                    if ((2U & vlSelf->top_soc__DOT__i_rdata)) {
                        if ((1U & vlSelf->top_soc__DOT__i_rdata)) {
                            vlSelf->top_soc__DOT__u_cpu__DOT__do_wb = 1U;
                            vlSelf->top_soc__DOT__u_cpu__DOT__pc_next 
                                = (0xfffffffeU & vlSelf->top_soc__DOT__u_cpu__DOT____VdfgExtracted_hae3c383b__0);
                        }
                    }
                } else if ((2U & vlSelf->top_soc__DOT__i_rdata)) {
                    if ((1U & vlSelf->top_soc__DOT__i_rdata)) {
                        if ((0x4000U & vlSelf->top_soc__DOT__i_rdata)) {
                            if ((0x2000U & vlSelf->top_soc__DOT__i_rdata)) {
                                if ((0x1000U & vlSelf->top_soc__DOT__i_rdata)) {
                                    if ((vlSelf->top_soc__DOT__u_cpu__DOT__rs1v 
                                         >= vlSelf->top_soc__DOT__u_cpu__DOT__rs2v)) {
                                        vlSelf->top_soc__DOT__u_cpu__DOT__pc_next 
                                            = (vlSelf->top_soc__DOT__u_cpu__DOT__pc 
                                               + top_soc__DOT__u_cpu__DOT__imm_b);
                                    }
                                } else if (vlSelf->top_soc__DOT__u_cpu__DOT____VdfgExtracted_h12c968b5__0) {
                                    vlSelf->top_soc__DOT__u_cpu__DOT__pc_next 
                                        = (vlSelf->top_soc__DOT__u_cpu__DOT__pc 
                                           + top_soc__DOT__u_cpu__DOT__imm_b);
                                }
                            } else if ((0x1000U & vlSelf->top_soc__DOT__i_rdata)) {
                                if (VL_GTES_III(32, vlSelf->top_soc__DOT__u_cpu__DOT__rs1v, vlSelf->top_soc__DOT__u_cpu__DOT__rs2v)) {
                                    vlSelf->top_soc__DOT__u_cpu__DOT__pc_next 
                                        = (vlSelf->top_soc__DOT__u_cpu__DOT__pc 
                                           + top_soc__DOT__u_cpu__DOT__imm_b);
                                }
                            } else if (vlSelf->top_soc__DOT__u_cpu__DOT____VdfgExtracted_h117a9097__0) {
                                vlSelf->top_soc__DOT__u_cpu__DOT__pc_next 
                                    = (vlSelf->top_soc__DOT__u_cpu__DOT__pc 
                                       + top_soc__DOT__u_cpu__DOT__imm_b);
                            }
                        } else if ((1U & (~ (vlSelf->top_soc__DOT__i_rdata 
                                             >> 0xdU)))) {
                            if ((0x1000U & vlSelf->top_soc__DOT__i_rdata)) {
                                if ((vlSelf->top_soc__DOT__u_cpu__DOT__rs1v 
                                     != vlSelf->top_soc__DOT__u_cpu__DOT__rs2v)) {
                                    vlSelf->top_soc__DOT__u_cpu__DOT__pc_next 
                                        = (vlSelf->top_soc__DOT__u_cpu__DOT__pc 
                                           + top_soc__DOT__u_cpu__DOT__imm_b);
                                }
                            } else if ((vlSelf->top_soc__DOT__u_cpu__DOT__rs1v 
                                        == vlSelf->top_soc__DOT__u_cpu__DOT__rs2v)) {
                                vlSelf->top_soc__DOT__u_cpu__DOT__pc_next 
                                    = (vlSelf->top_soc__DOT__u_cpu__DOT__pc 
                                       + top_soc__DOT__u_cpu__DOT__imm_b);
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x20U & vlSelf->top_soc__DOT__i_rdata)) {
        if ((0x10U & vlSelf->top_soc__DOT__i_rdata)) {
            if ((1U & (~ (vlSelf->top_soc__DOT__i_rdata 
                          >> 3U)))) {
                if ((4U & vlSelf->top_soc__DOT__i_rdata)) {
                    if ((2U & vlSelf->top_soc__DOT__i_rdata)) {
                        if ((1U & vlSelf->top_soc__DOT__i_rdata)) {
                            vlSelf->top_soc__DOT__u_cpu__DOT__do_wb = 1U;
                        }
                    }
                } else if ((2U & vlSelf->top_soc__DOT__i_rdata)) {
                    if ((1U & vlSelf->top_soc__DOT__i_rdata)) {
                        vlSelf->top_soc__DOT__u_cpu__DOT__do_wb = 1U;
                    }
                }
            }
        }
    } else if ((0x10U & vlSelf->top_soc__DOT__i_rdata)) {
        if ((1U & (~ (vlSelf->top_soc__DOT__i_rdata 
                      >> 3U)))) {
            if ((4U & vlSelf->top_soc__DOT__i_rdata)) {
                if ((2U & vlSelf->top_soc__DOT__i_rdata)) {
                    if ((1U & vlSelf->top_soc__DOT__i_rdata)) {
                        vlSelf->top_soc__DOT__u_cpu__DOT__do_wb = 1U;
                    }
                }
            } else if ((2U & vlSelf->top_soc__DOT__i_rdata)) {
                if ((1U & vlSelf->top_soc__DOT__i_rdata)) {
                    vlSelf->top_soc__DOT__u_cpu__DOT__do_wb = 1U;
                }
            }
        }
    } else if ((1U & (~ (vlSelf->top_soc__DOT__i_rdata 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->top_soc__DOT__i_rdata 
                      >> 2U)))) {
            if ((2U & vlSelf->top_soc__DOT__i_rdata)) {
                if ((1U & vlSelf->top_soc__DOT__i_rdata)) {
                    vlSelf->top_soc__DOT__u_cpu__DOT__do_wb = 1U;
                }
            }
        }
    }
}

void Vtop_soc___024root___act_sequent__TOP__0(Vtop_soc___024root* vlSelf);
void Vtop_soc___024root___act_sequent__TOP__1(Vtop_soc___024root* vlSelf);

VL_ATTR_COLD void Vtop_soc___024root___eval_stl(Vtop_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_soc___024root___eval_stl\n"); );
    // Body
    if ((3ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop_soc___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop_soc___024root___stl_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop_soc___024root___act_sequent__TOP__1(vlSelf);
    }
}

VL_ATTR_COLD void Vtop_soc___024root___eval_triggers__stl(Vtop_soc___024root* vlSelf);

VL_ATTR_COLD bool Vtop_soc___024root___eval_phase__stl(Vtop_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_soc___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop_soc___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop_soc___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_soc___024root___dump_triggers__act(Vtop_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_soc___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] top_soc.u_cpu.d_addr_n)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_soc___024root___dump_triggers__nba(Vtop_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_soc___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] top_soc.u_cpu.d_addr_n)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_soc___024root___ctor_var_reset(Vtop_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_soc___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->top_soc__DOT__i_rdata = VL_RAND_RESET_I(32);
    vlSelf->top_soc__DOT__ram_rdata = VL_RAND_RESET_I(32);
    vlSelf->top_soc__DOT__u_cpu__DOT__pc = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top_soc__DOT__u_cpu__DOT__x[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top_soc__DOT__u_cpu__DOT__rs1v = VL_RAND_RESET_I(32);
    vlSelf->top_soc__DOT__u_cpu__DOT__rs2v = VL_RAND_RESET_I(32);
    vlSelf->top_soc__DOT__u_cpu__DOT__imm_i = VL_RAND_RESET_I(32);
    vlSelf->top_soc__DOT__u_cpu__DOT__imm_s = VL_RAND_RESET_I(32);
    vlSelf->top_soc__DOT__u_cpu__DOT__load_ext__Vstatic__b = VL_RAND_RESET_I(8);
    vlSelf->top_soc__DOT__u_cpu__DOT__load_ext__Vstatic__h = VL_RAND_RESET_I(16);
    vlSelf->top_soc__DOT__u_cpu__DOT__pc_next = VL_RAND_RESET_I(32);
    vlSelf->top_soc__DOT__u_cpu__DOT__do_wb = VL_RAND_RESET_I(1);
    vlSelf->top_soc__DOT__u_cpu__DOT__wb_data = VL_RAND_RESET_I(32);
    vlSelf->top_soc__DOT__u_cpu__DOT__d_we_n = VL_RAND_RESET_I(1);
    vlSelf->top_soc__DOT__u_cpu__DOT__d_wstrb_n = VL_RAND_RESET_I(4);
    vlSelf->top_soc__DOT__u_cpu__DOT__d_addr_n = VL_RAND_RESET_I(32);
    vlSelf->top_soc__DOT__u_cpu__DOT__d_wdata_n = VL_RAND_RESET_I(32);
    vlSelf->top_soc__DOT__u_cpu__DOT____VdfgExtracted_h117a9097__0 = VL_RAND_RESET_I(1);
    vlSelf->top_soc__DOT__u_cpu__DOT____VdfgExtracted_h12c968b5__0 = VL_RAND_RESET_I(1);
    vlSelf->top_soc__DOT__u_cpu__DOT____VdfgExtracted_hae3c383b__0 = VL_RAND_RESET_I(32);
    vlSelf->top_soc__DOT__u_cpu__DOT____VdfgExtracted_hea06c40a__0 = VL_RAND_RESET_I(32);
    vlSelf->top_soc__DOT__u_cpu__DOT____VdfgTmp_h0098c51a__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 65536; ++__Vi0) {
        vlSelf->top_soc__DOT__u_ram__DOT__mem8[__Vi0] = VL_RAND_RESET_I(8);
    }
    VL_RAND_RESET_W(1024, vlSelf->top_soc__DOT__u_ram__DOT__unnamedblk1__DOT__f);
    vlSelf->__Vfunc_top_soc__DOT__u_cpu__DOT__load_ext__4__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_top_soc__DOT__u_cpu__DOT__load_ext__4__raw = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_top_soc__DOT__u_cpu__DOT__load_ext__4__byte_off = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_top_soc__DOT__u_cpu__DOT__load_ext__4__f3 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__top_soc__DOT__u_cpu__DOT__d_addr_n__0 = VL_RAND_RESET_I(32);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__top_soc__DOT__u_cpu__DOT__d_addr_n__1 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
