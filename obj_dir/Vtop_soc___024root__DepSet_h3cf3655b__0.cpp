// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_soc.h for the primary calling header

#include "Vtop_soc__pch.h"
#include "Vtop_soc___024root.h"

VL_INLINE_OPT void Vtop_soc___024root___act_sequent__TOP__0(Vtop_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_soc___024root___act_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ top_soc__DOT__ram_rdata;
    top_soc__DOT__ram_rdata = 0;
    IData/*31:0*/ top_soc__DOT__u_ram__DOT__rd32__Vstatic__aa;
    top_soc__DOT__u_ram__DOT__rd32__Vstatic__aa = 0;
    IData/*31:0*/ __Vfunc_top_soc__DOT__u_ram__DOT__rd32__6__Vfuncout;
    __Vfunc_top_soc__DOT__u_ram__DOT__rd32__6__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top_soc__DOT__u_ram__DOT__rd32__6__a;
    __Vfunc_top_soc__DOT__u_ram__DOT__rd32__6__a = 0;
    // Body
    __Vfunc_top_soc__DOT__u_ram__DOT__rd32__6__a = vlSelf->top_soc__DOT__u_cpu__DOT__d_addr_n;
    top_soc__DOT__u_ram__DOT__rd32__Vstatic__aa = (0xfffffffcU 
                                                   & __Vfunc_top_soc__DOT__u_ram__DOT__rd32__6__a);
    __Vfunc_top_soc__DOT__u_ram__DOT__rd32__6__Vfuncout 
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
    top_soc__DOT__ram_rdata = __Vfunc_top_soc__DOT__u_ram__DOT__rd32__6__Vfuncout;
    vlSelf->top_soc__DOT__u_cpu__DOT__wb_data = 0U;
    vlSelf->top_soc__DOT__u_cpu__DOT__d_wstrb_n = 0U;
    vlSelf->top_soc__DOT__u_cpu__DOT__d_addr_n = 0U;
    vlSelf->top_soc__DOT__u_cpu__DOT__d_wdata_n = 0U;
    if ((1U & (~ (IData)(vlSelf->top_soc__DOT__u_cpu__DOT__mul_busy)))) {
        if ((1U & (~ (IData)(vlSelf->top_soc__DOT__u_cpu__DOT__is_mul)))) {
            if ((0x40U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                if ((0x20U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                    if ((1U & (~ (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                  >> 4U)))) {
                        if ((8U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                            if ((4U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                                if ((2U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                                    if ((1U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                                        vlSelf->top_soc__DOT__u_cpu__DOT__wb_data 
                                            = ((IData)(4U) 
                                               + vlSelf->top_soc__DOT__u_cpu__DOT__ex_pc);
                                    }
                                }
                            }
                        } else if ((4U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                            if ((2U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                                if ((1U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                                    vlSelf->top_soc__DOT__u_cpu__DOT__wb_data 
                                        = ((IData)(4U) 
                                           + vlSelf->top_soc__DOT__u_cpu__DOT__ex_pc);
                                }
                            }
                        }
                    }
                }
            } else if ((0x20U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                if ((0x10U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                    if ((1U & (~ (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                  >> 3U)))) {
                        if ((4U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                            if ((2U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                                if ((1U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                                    vlSelf->top_soc__DOT__u_cpu__DOT__wb_data 
                                        = (0xfffff000U 
                                           & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr);
                                }
                            }
                        } else if ((2U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                            if ((1U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                                vlSelf->top_soc__DOT__u_cpu__DOT__wb_data 
                                    = (((((((((0U == 
                                               ((0x3f8U 
                                                 & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                                    >> 0x16U)) 
                                                | (7U 
                                                   & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                                      >> 0xcU)))) 
                                              | (0x100U 
                                                 == 
                                                 ((0x3f8U 
                                                   & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                                      >> 0x16U)) 
                                                  | (7U 
                                                     & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                                        >> 0xcU))))) 
                                             | (7U 
                                                == 
                                                ((0x3f8U 
                                                  & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                                       >> 0xcU))))) 
                                            | (6U == 
                                               ((0x3f8U 
                                                 & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                                    >> 0x16U)) 
                                                | (7U 
                                                   & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                                      >> 0xcU))))) 
                                           | (4U == 
                                              ((0x3f8U 
                                                & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                                   >> 0x16U)) 
                                               | (7U 
                                                  & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                                     >> 0xcU))))) 
                                          | (2U == 
                                             ((0x3f8U 
                                               & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                                    >> 0xcU))))) 
                                         | (3U == (
                                                   (0x3f8U 
                                                    & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                                       >> 0x16U)) 
                                                   | (7U 
                                                      & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                                         >> 0xcU))))) 
                                        | (1U == ((0x3f8U 
                                                   & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                                      >> 0x16U)) 
                                                  | (7U 
                                                     & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                                        >> 0xcU)))))
                                        ? ((0U == (
                                                   (0x3f8U 
                                                    & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                                       >> 0x16U)) 
                                                   | (7U 
                                                      & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                                         >> 0xcU))))
                                            ? vlSelf->top_soc__DOT__u_cpu__DOT____VdfgExtracted_hea06c40a__0
                                            : ((0x100U 
                                                == 
                                                ((0x3f8U 
                                                  & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                                       >> 0xcU))))
                                                ? (vlSelf->top_soc__DOT__u_cpu__DOT__rs1v 
                                                   - vlSelf->top_soc__DOT__u_cpu__DOT__rs2v)
                                                : (
                                                   (7U 
                                                    == 
                                                    ((0x3f8U 
                                                      & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                                         >> 0x16U)) 
                                                     | (7U 
                                                        & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                                           >> 0xcU))))
                                                    ? 
                                                   (vlSelf->top_soc__DOT__u_cpu__DOT__rs1v 
                                                    & vlSelf->top_soc__DOT__u_cpu__DOT__rs2v)
                                                    : 
                                                   ((6U 
                                                     == 
                                                     ((0x3f8U 
                                                       & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                                          >> 0x16U)) 
                                                      | (7U 
                                                         & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                                            >> 0xcU))))
                                                     ? 
                                                    (vlSelf->top_soc__DOT__u_cpu__DOT__rs1v 
                                                     | vlSelf->top_soc__DOT__u_cpu__DOT__rs2v)
                                                     : 
                                                    ((4U 
                                                      == 
                                                      ((0x3f8U 
                                                        & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                                           >> 0x16U)) 
                                                       | (7U 
                                                          & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                                             >> 0xcU))))
                                                      ? 
                                                     (vlSelf->top_soc__DOT__u_cpu__DOT__rs1v 
                                                      ^ vlSelf->top_soc__DOT__u_cpu__DOT__rs2v)
                                                      : 
                                                     ((2U 
                                                       == 
                                                       ((0x3f8U 
                                                         & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                                            >> 0x16U)) 
                                                        | (7U 
                                                           & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                                              >> 0xcU))))
                                                       ? 
                                                      ((IData)(vlSelf->top_soc__DOT__u_cpu__DOT____VdfgExtracted_h117a9097__0)
                                                        ? 1U
                                                        : 0U)
                                                       : 
                                                      ((3U 
                                                        == 
                                                        ((0x3f8U 
                                                          & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                                             >> 0x16U)) 
                                                         | (7U 
                                                            & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                                               >> 0xcU))))
                                                        ? 
                                                       ((IData)(vlSelf->top_soc__DOT__u_cpu__DOT____VdfgExtracted_h12c968b5__0)
                                                         ? 1U
                                                         : 0U)
                                                        : 
                                                       (vlSelf->top_soc__DOT__u_cpu__DOT__rs1v 
                                                        << (IData)(vlSelf->top_soc__DOT__u_cpu__DOT____VdfgTmp_hef64d676__0)))))))))
                                        : ((5U == (
                                                   (0x3f8U 
                                                    & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                                       >> 0x16U)) 
                                                   | (7U 
                                                      & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                                         >> 0xcU))))
                                            ? VL_SHIFTRS_III(32,32,5, vlSelf->top_soc__DOT__u_cpu__DOT__rs1v, (IData)(vlSelf->top_soc__DOT__u_cpu__DOT____VdfgTmp_hef64d676__0))
                                            : vlSelf->top_soc__DOT__u_cpu__DOT____VdfgExtracted_hea06c40a__0));
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                     >> 3U)))) {
                    if ((1U & (~ (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                            if ((1U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                                vlSelf->top_soc__DOT__u_cpu__DOT__d_addr_n 
                                    = (vlSelf->top_soc__DOT__u_cpu__DOT__rs1v 
                                       + vlSelf->top_soc__DOT__u_cpu__DOT__imm_s);
                                if ((0U == (7U & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                                  >> 0xcU)))) {
                                    vlSelf->top_soc__DOT__u_cpu__DOT__d_wstrb_n 
                                        = (0xfU & ((IData)(1U) 
                                                   << 
                                                   (3U 
                                                    & vlSelf->top_soc__DOT__u_cpu__DOT__d_addr_n)));
                                    vlSelf->top_soc__DOT__u_cpu__DOT__d_wdata_n 
                                        = VL_SHIFTL_III(32,32,32, 
                                                        (0xffU 
                                                         & vlSelf->top_soc__DOT__u_cpu__DOT__rs2v), 
                                                        VL_SHIFTL_III(32,32,32, 
                                                                      (3U 
                                                                       & vlSelf->top_soc__DOT__u_cpu__DOT__d_addr_n), 3U));
                                } else if ((1U == (7U 
                                                   & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                                      >> 0xcU)))) {
                                    vlSelf->top_soc__DOT__u_cpu__DOT__d_wstrb_n 
                                        = ((2U & vlSelf->top_soc__DOT__u_cpu__DOT__d_addr_n)
                                            ? 0xcU : 3U);
                                    vlSelf->top_soc__DOT__u_cpu__DOT__d_wdata_n 
                                        = VL_SHIFTL_III(32,32,32, 
                                                        (0xffffU 
                                                         & vlSelf->top_soc__DOT__u_cpu__DOT__rs2v), 
                                                        VL_SHIFTL_III(32,32,32, 
                                                                      (1U 
                                                                       & (vlSelf->top_soc__DOT__u_cpu__DOT__d_addr_n 
                                                                          >> 1U)), 4U));
                                } else {
                                    vlSelf->top_soc__DOT__u_cpu__DOT__d_wstrb_n = 0xfU;
                                    vlSelf->top_soc__DOT__u_cpu__DOT__d_wdata_n 
                                        = vlSelf->top_soc__DOT__u_cpu__DOT__rs2v;
                                }
                            }
                        }
                    }
                }
            } else if ((0x10U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                if ((1U & (~ (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                              >> 3U)))) {
                    if ((4U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                        if ((2U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                            if ((1U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                                vlSelf->top_soc__DOT__u_cpu__DOT__wb_data 
                                    = (vlSelf->top_soc__DOT__u_cpu__DOT__ex_pc 
                                       + (0xfffff000U 
                                          & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr));
                            }
                        }
                    } else if ((2U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                        if ((1U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                            vlSelf->top_soc__DOT__u_cpu__DOT__wb_data 
                                = ((0x4000U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)
                                    ? ((0x2000U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)
                                        ? ((0x1000U 
                                            & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)
                                            ? (vlSelf->top_soc__DOT__u_cpu__DOT__rs1v 
                                               & vlSelf->top_soc__DOT__u_cpu__DOT__imm_i)
                                            : (vlSelf->top_soc__DOT__u_cpu__DOT__rs1v 
                                               | vlSelf->top_soc__DOT__u_cpu__DOT__imm_i))
                                        : ((0x1000U 
                                            & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)
                                            ? (vlSelf->top_soc__DOT__u_cpu__DOT__rs1v 
                                               >> (0x1fU 
                                                   & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                                      >> 0x14U)))
                                            : (vlSelf->top_soc__DOT__u_cpu__DOT__rs1v 
                                               ^ vlSelf->top_soc__DOT__u_cpu__DOT__imm_i)))
                                    : ((0x2000U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)
                                        ? ((0x1000U 
                                            & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)
                                            ? ((vlSelf->top_soc__DOT__u_cpu__DOT__rs1v 
                                                < vlSelf->top_soc__DOT__u_cpu__DOT__imm_i)
                                                ? 1U
                                                : 0U)
                                            : (VL_LTS_III(32, vlSelf->top_soc__DOT__u_cpu__DOT__rs1v, vlSelf->top_soc__DOT__u_cpu__DOT__imm_i)
                                                ? 1U
                                                : 0U))
                                        : ((0x1000U 
                                            & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)
                                            ? (vlSelf->top_soc__DOT__u_cpu__DOT__rs1v 
                                               << (0x1fU 
                                                   & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                                      >> 0x14U)))
                                            : vlSelf->top_soc__DOT__u_cpu__DOT____VdfgExtracted_hae3c383b__0)));
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                              >> 2U)))) {
                    if ((2U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                        if ((1U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                            vlSelf->top_soc__DOT__u_cpu__DOT__d_addr_n 
                                = vlSelf->top_soc__DOT__u_cpu__DOT____VdfgExtracted_hae3c383b__0;
                            vlSelf->__Vfunc_top_soc__DOT__u_cpu__DOT__load_ext__4__f3 
                                = (7U & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                         >> 0xcU));
                            vlSelf->__Vfunc_top_soc__DOT__u_cpu__DOT__load_ext__4__byte_off 
                                = (3U & vlSelf->top_soc__DOT__u_cpu__DOT__d_addr_n);
                            vlSelf->__Vfunc_top_soc__DOT__u_cpu__DOT__load_ext__4__raw 
                                = top_soc__DOT__ram_rdata;
                            vlSelf->top_soc__DOT__u_cpu__DOT__load_ext__Vstatic__b 
                                = (0xffU & ((0U == (IData)(vlSelf->__Vfunc_top_soc__DOT__u_cpu__DOT__load_ext__4__byte_off))
                                             ? vlSelf->__Vfunc_top_soc__DOT__u_cpu__DOT__load_ext__4__raw
                                             : ((1U 
                                                 == (IData)(vlSelf->__Vfunc_top_soc__DOT__u_cpu__DOT__load_ext__4__byte_off))
                                                 ? 
                                                (vlSelf->__Vfunc_top_soc__DOT__u_cpu__DOT__load_ext__4__raw 
                                                 >> 8U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->__Vfunc_top_soc__DOT__u_cpu__DOT__load_ext__4__byte_off))
                                                  ? 
                                                 (vlSelf->__Vfunc_top_soc__DOT__u_cpu__DOT__load_ext__4__raw 
                                                  >> 0x10U)
                                                  : 
                                                 (vlSelf->__Vfunc_top_soc__DOT__u_cpu__DOT__load_ext__4__raw 
                                                  >> 0x18U)))));
                            vlSelf->top_soc__DOT__u_cpu__DOT__load_ext__Vstatic__h 
                                = (0xffffU & ((2U & (IData)(vlSelf->__Vfunc_top_soc__DOT__u_cpu__DOT__load_ext__4__byte_off))
                                               ? (vlSelf->__Vfunc_top_soc__DOT__u_cpu__DOT__load_ext__4__raw 
                                                  >> 0x10U)
                                               : vlSelf->__Vfunc_top_soc__DOT__u_cpu__DOT__load_ext__4__raw));
                            vlSelf->__Vfunc_top_soc__DOT__u_cpu__DOT__load_ext__4__Vfuncout 
                                = ((4U & (IData)(vlSelf->__Vfunc_top_soc__DOT__u_cpu__DOT__load_ext__4__f3))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_top_soc__DOT__u_cpu__DOT__load_ext__4__f3))
                                        ? vlSelf->__Vfunc_top_soc__DOT__u_cpu__DOT__load_ext__4__raw
                                        : ((1U & (IData)(vlSelf->__Vfunc_top_soc__DOT__u_cpu__DOT__load_ext__4__f3))
                                            ? (IData)(vlSelf->top_soc__DOT__u_cpu__DOT__load_ext__Vstatic__h)
                                            : (IData)(vlSelf->top_soc__DOT__u_cpu__DOT__load_ext__Vstatic__b)))
                                    : ((2U & (IData)(vlSelf->__Vfunc_top_soc__DOT__u_cpu__DOT__load_ext__4__f3))
                                        ? vlSelf->__Vfunc_top_soc__DOT__u_cpu__DOT__load_ext__4__raw
                                        : ((1U & (IData)(vlSelf->__Vfunc_top_soc__DOT__u_cpu__DOT__load_ext__4__f3))
                                            ? (((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->top_soc__DOT__u_cpu__DOT__load_ext__Vstatic__h) 
                                                               >> 0xfU)))) 
                                                << 0x10U) 
                                               | (IData)(vlSelf->top_soc__DOT__u_cpu__DOT__load_ext__Vstatic__h))
                                            : (((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->top_soc__DOT__u_cpu__DOT__load_ext__Vstatic__b) 
                                                               >> 7U)))) 
                                                << 8U) 
                                               | (IData)(vlSelf->top_soc__DOT__u_cpu__DOT__load_ext__Vstatic__b)))));
                            vlSelf->top_soc__DOT__u_cpu__DOT__wb_data 
                                = vlSelf->__Vfunc_top_soc__DOT__u_cpu__DOT__load_ext__4__Vfuncout;
                        }
                    }
                }
            }
        }
    }
}

void Vtop_soc___024root___eval_act(Vtop_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_soc___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtop_soc___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop_soc___024root___nba_sequent__TOP__0(Vtop_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_soc___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ top_soc__DOT__u_cpu__DOT__imm_b;
    top_soc__DOT__u_cpu__DOT__imm_b = 0;
    IData/*31:0*/ top_soc__DOT__u_cpu__DOT__imm_j;
    top_soc__DOT__u_cpu__DOT__imm_j = 0;
    IData/*31:0*/ top_soc__DOT__u_cpu__DOT__ex_target;
    top_soc__DOT__u_cpu__DOT__ex_target = 0;
    IData/*31:0*/ top_soc__DOT__u_cpu__DOT____VdfgTmp_h4352f357__0;
    top_soc__DOT__u_cpu__DOT____VdfgTmp_h4352f357__0 = 0;
    IData/*31:0*/ top_soc__DOT__u_ram__DOT__rd32__Vstatic__aa;
    top_soc__DOT__u_ram__DOT__rd32__Vstatic__aa = 0;
    IData/*31:0*/ top_soc__DOT__u_ram__DOT__unnamedblk2__DOT__aa;
    top_soc__DOT__u_ram__DOT__unnamedblk2__DOT__aa = 0;
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
    IData/*31:0*/ __Vdly__top_soc__DOT__u_cpu__DOT__pc_f;
    __Vdly__top_soc__DOT__u_cpu__DOT__pc_f = 0;
    IData/*31:0*/ __Vdly__top_soc__DOT__u_cpu__DOT__if_pc;
    __Vdly__top_soc__DOT__u_cpu__DOT__if_pc = 0;
    IData/*31:0*/ __Vdly__top_soc__DOT__u_cpu__DOT__if_instr;
    __Vdly__top_soc__DOT__u_cpu__DOT__if_instr = 0;
    IData/*31:0*/ __Vdly__top_soc__DOT__u_cpu__DOT__ex_pc;
    __Vdly__top_soc__DOT__u_cpu__DOT__ex_pc = 0;
    IData/*31:0*/ __Vdly__top_soc__DOT__u_cpu__DOT__ex_instr;
    __Vdly__top_soc__DOT__u_cpu__DOT__ex_instr = 0;
    CData/*0:0*/ __Vdly__top_soc__DOT__u_cpu__DOT__mul_busy;
    __Vdly__top_soc__DOT__u_cpu__DOT__mul_busy = 0;
    CData/*2:0*/ __Vdly__top_soc__DOT__u_cpu__DOT__mul_cnt;
    __Vdly__top_soc__DOT__u_cpu__DOT__mul_cnt = 0;
    CData/*4:0*/ __Vdly__top_soc__DOT__u_cpu__DOT__mul_rd;
    __Vdly__top_soc__DOT__u_cpu__DOT__mul_rd = 0;
    IData/*31:0*/ __Vdly__top_soc__DOT__u_cpu__DOT__mul_res;
    __Vdly__top_soc__DOT__u_cpu__DOT__mul_res = 0;
    CData/*0:0*/ __Vdlyvset__top_soc__DOT__u_cpu__DOT__x__v0;
    __Vdlyvset__top_soc__DOT__u_cpu__DOT__x__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top_soc__DOT__u_cpu__DOT__x__v32;
    __Vdlyvset__top_soc__DOT__u_cpu__DOT__x__v32 = 0;
    CData/*4:0*/ __Vdlyvdim0__top_soc__DOT__u_cpu__DOT__x__v33;
    __Vdlyvdim0__top_soc__DOT__u_cpu__DOT__x__v33 = 0;
    IData/*31:0*/ __Vdlyvval__top_soc__DOT__u_cpu__DOT__x__v33;
    __Vdlyvval__top_soc__DOT__u_cpu__DOT__x__v33 = 0;
    CData/*0:0*/ __Vdlyvset__top_soc__DOT__u_cpu__DOT__x__v33;
    __Vdlyvset__top_soc__DOT__u_cpu__DOT__x__v33 = 0;
    CData/*4:0*/ __Vdlyvdim0__top_soc__DOT__u_cpu__DOT__x__v34;
    __Vdlyvdim0__top_soc__DOT__u_cpu__DOT__x__v34 = 0;
    IData/*31:0*/ __Vdlyvval__top_soc__DOT__u_cpu__DOT__x__v34;
    __Vdlyvval__top_soc__DOT__u_cpu__DOT__x__v34 = 0;
    CData/*0:0*/ __Vdlyvset__top_soc__DOT__u_cpu__DOT__x__v34;
    __Vdlyvset__top_soc__DOT__u_cpu__DOT__x__v34 = 0;
    SData/*15:0*/ __Vdlyvdim0__top_soc__DOT__u_ram__DOT__mem8__v0;
    __Vdlyvdim0__top_soc__DOT__u_ram__DOT__mem8__v0 = 0;
    CData/*7:0*/ __Vdlyvval__top_soc__DOT__u_ram__DOT__mem8__v0;
    __Vdlyvval__top_soc__DOT__u_ram__DOT__mem8__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top_soc__DOT__u_ram__DOT__mem8__v0;
    __Vdlyvset__top_soc__DOT__u_ram__DOT__mem8__v0 = 0;
    SData/*15:0*/ __Vdlyvdim0__top_soc__DOT__u_ram__DOT__mem8__v1;
    __Vdlyvdim0__top_soc__DOT__u_ram__DOT__mem8__v1 = 0;
    CData/*7:0*/ __Vdlyvval__top_soc__DOT__u_ram__DOT__mem8__v1;
    __Vdlyvval__top_soc__DOT__u_ram__DOT__mem8__v1 = 0;
    CData/*0:0*/ __Vdlyvset__top_soc__DOT__u_ram__DOT__mem8__v1;
    __Vdlyvset__top_soc__DOT__u_ram__DOT__mem8__v1 = 0;
    SData/*15:0*/ __Vdlyvdim0__top_soc__DOT__u_ram__DOT__mem8__v2;
    __Vdlyvdim0__top_soc__DOT__u_ram__DOT__mem8__v2 = 0;
    CData/*7:0*/ __Vdlyvval__top_soc__DOT__u_ram__DOT__mem8__v2;
    __Vdlyvval__top_soc__DOT__u_ram__DOT__mem8__v2 = 0;
    CData/*0:0*/ __Vdlyvset__top_soc__DOT__u_ram__DOT__mem8__v2;
    __Vdlyvset__top_soc__DOT__u_ram__DOT__mem8__v2 = 0;
    SData/*15:0*/ __Vdlyvdim0__top_soc__DOT__u_ram__DOT__mem8__v3;
    __Vdlyvdim0__top_soc__DOT__u_ram__DOT__mem8__v3 = 0;
    CData/*7:0*/ __Vdlyvval__top_soc__DOT__u_ram__DOT__mem8__v3;
    __Vdlyvval__top_soc__DOT__u_ram__DOT__mem8__v3 = 0;
    CData/*0:0*/ __Vdlyvset__top_soc__DOT__u_ram__DOT__mem8__v3;
    __Vdlyvset__top_soc__DOT__u_ram__DOT__mem8__v3 = 0;
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->top_soc__DOT__u_cpu__DOT__d_we_n) 
                                                 & (0x10000000U 
                                                    == 
                                                    (0xfffffffcU 
                                                     & vlSelf->top_soc__DOT__u_cpu__DOT__d_addr_n)))))) {
        VL_WRITEF("%c",8,(0xffU & vlSelf->top_soc__DOT__u_cpu__DOT__d_wdata_n));
        Verilated::runFlushCallbacks();
    }
    __Vdlyvset__top_soc__DOT__u_ram__DOT__mem8__v0 = 0U;
    __Vdlyvset__top_soc__DOT__u_ram__DOT__mem8__v1 = 0U;
    __Vdlyvset__top_soc__DOT__u_ram__DOT__mem8__v2 = 0U;
    __Vdlyvset__top_soc__DOT__u_ram__DOT__mem8__v3 = 0U;
    __Vdly__top_soc__DOT__u_cpu__DOT__mul_res = vlSelf->top_soc__DOT__u_cpu__DOT__mul_res;
    __Vdly__top_soc__DOT__u_cpu__DOT__mul_rd = vlSelf->top_soc__DOT__u_cpu__DOT__mul_rd;
    __Vdly__top_soc__DOT__u_cpu__DOT__mul_cnt = vlSelf->top_soc__DOT__u_cpu__DOT__mul_cnt;
    __Vdly__top_soc__DOT__u_cpu__DOT__if_instr = vlSelf->top_soc__DOT__u_cpu__DOT__if_instr;
    __Vdly__top_soc__DOT__u_cpu__DOT__if_pc = vlSelf->top_soc__DOT__u_cpu__DOT__if_pc;
    __Vdly__top_soc__DOT__u_cpu__DOT__pc_f = vlSelf->top_soc__DOT__u_cpu__DOT__pc_f;
    __Vdly__top_soc__DOT__u_cpu__DOT__ex_pc = vlSelf->top_soc__DOT__u_cpu__DOT__ex_pc;
    __Vdly__top_soc__DOT__u_cpu__DOT__mul_busy = vlSelf->top_soc__DOT__u_cpu__DOT__mul_busy;
    __Vdlyvset__top_soc__DOT__u_cpu__DOT__x__v0 = 0U;
    __Vdlyvset__top_soc__DOT__u_cpu__DOT__x__v32 = 0U;
    __Vdlyvset__top_soc__DOT__u_cpu__DOT__x__v33 = 0U;
    __Vdlyvset__top_soc__DOT__u_cpu__DOT__x__v34 = 0U;
    __Vdly__top_soc__DOT__u_cpu__DOT__ex_instr = vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr;
    top_soc__DOT__u_ram__DOT__unnamedblk2__DOT__aa 
        = (0xfffffffcU & vlSelf->top_soc__DOT__u_cpu__DOT__d_addr_n);
    if (((IData)(vlSelf->top_soc__DOT__u_cpu__DOT__d_we_n) 
         & (0x10000U > vlSelf->top_soc__DOT__u_cpu__DOT__d_addr_n))) {
        if ((0x10000U > top_soc__DOT__u_ram__DOT__unnamedblk2__DOT__aa)) {
            if ((1U & (IData)(vlSelf->top_soc__DOT__u_cpu__DOT__d_wstrb_n))) {
                __Vdlyvval__top_soc__DOT__u_ram__DOT__mem8__v0 
                    = (0xffU & vlSelf->top_soc__DOT__u_cpu__DOT__d_wdata_n);
                __Vdlyvset__top_soc__DOT__u_ram__DOT__mem8__v0 = 1U;
                __Vdlyvdim0__top_soc__DOT__u_ram__DOT__mem8__v0 
                    = (0xffffU & top_soc__DOT__u_ram__DOT__unnamedblk2__DOT__aa);
            }
            if ((((IData)(vlSelf->top_soc__DOT__u_cpu__DOT__d_wstrb_n) 
                  >> 1U) & (0x10000U > ((IData)(1U) 
                                        + top_soc__DOT__u_ram__DOT__unnamedblk2__DOT__aa)))) {
                __Vdlyvval__top_soc__DOT__u_ram__DOT__mem8__v1 
                    = (0xffU & (vlSelf->top_soc__DOT__u_cpu__DOT__d_wdata_n 
                                >> 8U));
                __Vdlyvset__top_soc__DOT__u_ram__DOT__mem8__v1 = 1U;
                __Vdlyvdim0__top_soc__DOT__u_ram__DOT__mem8__v1 
                    = (0xffffU & ((IData)(1U) + top_soc__DOT__u_ram__DOT__unnamedblk2__DOT__aa));
            }
            if ((((IData)(vlSelf->top_soc__DOT__u_cpu__DOT__d_wstrb_n) 
                  >> 2U) & (0x10000U > ((IData)(2U) 
                                        + top_soc__DOT__u_ram__DOT__unnamedblk2__DOT__aa)))) {
                __Vdlyvval__top_soc__DOT__u_ram__DOT__mem8__v2 
                    = (0xffU & (vlSelf->top_soc__DOT__u_cpu__DOT__d_wdata_n 
                                >> 0x10U));
                __Vdlyvset__top_soc__DOT__u_ram__DOT__mem8__v2 = 1U;
                __Vdlyvdim0__top_soc__DOT__u_ram__DOT__mem8__v2 
                    = (0xffffU & ((IData)(2U) + top_soc__DOT__u_ram__DOT__unnamedblk2__DOT__aa));
            }
            if ((((IData)(vlSelf->top_soc__DOT__u_cpu__DOT__d_wstrb_n) 
                  >> 3U) & (0x10000U > ((IData)(3U) 
                                        + top_soc__DOT__u_ram__DOT__unnamedblk2__DOT__aa)))) {
                __Vdlyvval__top_soc__DOT__u_ram__DOT__mem8__v3 
                    = (vlSelf->top_soc__DOT__u_cpu__DOT__d_wdata_n 
                       >> 0x18U);
                __Vdlyvset__top_soc__DOT__u_ram__DOT__mem8__v3 = 1U;
                __Vdlyvdim0__top_soc__DOT__u_ram__DOT__mem8__v3 
                    = (0xffffU & ((IData)(3U) + top_soc__DOT__u_ram__DOT__unnamedblk2__DOT__aa));
            }
        }
    }
    if (vlSelf->rst) {
        __Vdly__top_soc__DOT__u_cpu__DOT__pc_f = 0U;
        __Vdly__top_soc__DOT__u_cpu__DOT__if_pc = 0U;
        __Vdly__top_soc__DOT__u_cpu__DOT__if_instr = 0x13U;
        __Vdly__top_soc__DOT__u_cpu__DOT__ex_pc = 0U;
        __Vdly__top_soc__DOT__u_cpu__DOT__ex_instr = 0x13U;
        __Vdly__top_soc__DOT__u_cpu__DOT__mul_busy = 0U;
        __Vdly__top_soc__DOT__u_cpu__DOT__mul_cnt = 0U;
        __Vdly__top_soc__DOT__u_cpu__DOT__mul_rd = 0U;
        __Vdly__top_soc__DOT__u_cpu__DOT__mul_res = 0U;
        __Vdlyvset__top_soc__DOT__u_cpu__DOT__x__v0 = 1U;
    } else {
        __Vdlyvset__top_soc__DOT__u_cpu__DOT__x__v32 = 1U;
        if (vlSelf->top_soc__DOT__u_cpu__DOT__mul_busy) {
            if ((0U != (IData)(vlSelf->top_soc__DOT__u_cpu__DOT__mul_cnt))) {
                __Vdly__top_soc__DOT__u_cpu__DOT__mul_cnt 
                    = (7U & ((IData)(vlSelf->top_soc__DOT__u_cpu__DOT__mul_cnt) 
                             - (IData)(1U)));
                __Vdly__top_soc__DOT__u_cpu__DOT__pc_f 
                    = vlSelf->top_soc__DOT__u_cpu__DOT__pc_f;
                __Vdly__top_soc__DOT__u_cpu__DOT__if_pc 
                    = vlSelf->top_soc__DOT__u_cpu__DOT__if_pc;
                __Vdly__top_soc__DOT__u_cpu__DOT__if_instr 
                    = vlSelf->top_soc__DOT__u_cpu__DOT__if_instr;
                __Vdly__top_soc__DOT__u_cpu__DOT__ex_pc 
                    = vlSelf->top_soc__DOT__u_cpu__DOT__ex_pc;
                __Vdly__top_soc__DOT__u_cpu__DOT__ex_instr 
                    = vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr;
            } else {
                __Vdly__top_soc__DOT__u_cpu__DOT__pc_f 
                    = ((IData)(4U) + vlSelf->top_soc__DOT__u_cpu__DOT__pc_f);
                __Vdly__top_soc__DOT__u_cpu__DOT__mul_busy = 0U;
                if ((0U != (IData)(vlSelf->top_soc__DOT__u_cpu__DOT__mul_rd))) {
                    __Vdlyvval__top_soc__DOT__u_cpu__DOT__x__v33 
                        = vlSelf->top_soc__DOT__u_cpu__DOT__mul_res;
                    __Vdlyvset__top_soc__DOT__u_cpu__DOT__x__v33 = 1U;
                    __Vdlyvdim0__top_soc__DOT__u_cpu__DOT__x__v33 
                        = vlSelf->top_soc__DOT__u_cpu__DOT__mul_rd;
                }
                __Vdly__top_soc__DOT__u_cpu__DOT__ex_pc 
                    = vlSelf->top_soc__DOT__u_cpu__DOT__if_pc;
                __Vdly__top_soc__DOT__u_cpu__DOT__ex_instr 
                    = vlSelf->top_soc__DOT__u_cpu__DOT__if_instr;
                __Vdly__top_soc__DOT__u_cpu__DOT__if_pc 
                    = vlSelf->top_soc__DOT__u_cpu__DOT__pc_f;
                __Vdly__top_soc__DOT__u_cpu__DOT__if_instr 
                    = vlSelf->top_soc__DOT__i_rdata;
            }
        } else if (vlSelf->top_soc__DOT__u_cpu__DOT__start_mul) {
            __Vdly__top_soc__DOT__u_cpu__DOT__pc_f 
                = vlSelf->top_soc__DOT__u_cpu__DOT__pc_f;
            __Vdly__top_soc__DOT__u_cpu__DOT__if_pc 
                = vlSelf->top_soc__DOT__u_cpu__DOT__if_pc;
            __Vdly__top_soc__DOT__u_cpu__DOT__if_instr 
                = vlSelf->top_soc__DOT__u_cpu__DOT__if_instr;
            __Vdly__top_soc__DOT__u_cpu__DOT__ex_pc 
                = vlSelf->top_soc__DOT__u_cpu__DOT__ex_pc;
            __Vdly__top_soc__DOT__u_cpu__DOT__ex_instr 
                = vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr;
            __Vdly__top_soc__DOT__u_cpu__DOT__mul_busy = 1U;
            __Vdly__top_soc__DOT__u_cpu__DOT__mul_cnt = 3U;
            __Vdly__top_soc__DOT__u_cpu__DOT__mul_rd 
                = vlSelf->top_soc__DOT__u_cpu__DOT__rd;
            __Vdly__top_soc__DOT__u_cpu__DOT__mul_res 
                = VL_MULS_III(32, vlSelf->top_soc__DOT__u_cpu__DOT__rs1v, vlSelf->top_soc__DOT__u_cpu__DOT__rs2v);
        } else {
            if (((IData)(vlSelf->top_soc__DOT__u_cpu__DOT__do_wb) 
                 & (0U != (IData)(vlSelf->top_soc__DOT__u_cpu__DOT__rd)))) {
                __Vdlyvval__top_soc__DOT__u_cpu__DOT__x__v34 
                    = vlSelf->top_soc__DOT__u_cpu__DOT__wb_data;
                __Vdlyvset__top_soc__DOT__u_cpu__DOT__x__v34 = 1U;
                __Vdlyvdim0__top_soc__DOT__u_cpu__DOT__x__v34 
                    = vlSelf->top_soc__DOT__u_cpu__DOT__rd;
            }
            __Vdly__top_soc__DOT__u_cpu__DOT__ex_pc 
                = vlSelf->top_soc__DOT__u_cpu__DOT__if_pc;
            if (vlSelf->top_soc__DOT__u_cpu__DOT__ex_taken) {
                __Vdly__top_soc__DOT__u_cpu__DOT__ex_instr = 0x13U;
                __Vdly__top_soc__DOT__u_cpu__DOT__if_instr = 0x13U;
            } else {
                __Vdly__top_soc__DOT__u_cpu__DOT__ex_instr 
                    = vlSelf->top_soc__DOT__u_cpu__DOT__if_instr;
                __Vdly__top_soc__DOT__u_cpu__DOT__if_instr 
                    = vlSelf->top_soc__DOT__i_rdata;
            }
            __Vdly__top_soc__DOT__u_cpu__DOT__if_pc 
                = vlSelf->top_soc__DOT__u_cpu__DOT__pc_f;
            __Vdly__top_soc__DOT__u_cpu__DOT__pc_f 
                = vlSelf->top_soc__DOT__u_cpu__DOT__pc_f_next;
        }
    }
    if (__Vdlyvset__top_soc__DOT__u_ram__DOT__mem8__v0) {
        vlSelf->top_soc__DOT__u_ram__DOT__mem8[__Vdlyvdim0__top_soc__DOT__u_ram__DOT__mem8__v0] 
            = __Vdlyvval__top_soc__DOT__u_ram__DOT__mem8__v0;
    }
    if (__Vdlyvset__top_soc__DOT__u_ram__DOT__mem8__v1) {
        vlSelf->top_soc__DOT__u_ram__DOT__mem8[__Vdlyvdim0__top_soc__DOT__u_ram__DOT__mem8__v1] 
            = __Vdlyvval__top_soc__DOT__u_ram__DOT__mem8__v1;
    }
    if (__Vdlyvset__top_soc__DOT__u_ram__DOT__mem8__v2) {
        vlSelf->top_soc__DOT__u_ram__DOT__mem8[__Vdlyvdim0__top_soc__DOT__u_ram__DOT__mem8__v2] 
            = __Vdlyvval__top_soc__DOT__u_ram__DOT__mem8__v2;
    }
    if (__Vdlyvset__top_soc__DOT__u_ram__DOT__mem8__v3) {
        vlSelf->top_soc__DOT__u_ram__DOT__mem8[__Vdlyvdim0__top_soc__DOT__u_ram__DOT__mem8__v3] 
            = __Vdlyvval__top_soc__DOT__u_ram__DOT__mem8__v3;
    }
    vlSelf->top_soc__DOT__u_cpu__DOT__if_pc = __Vdly__top_soc__DOT__u_cpu__DOT__if_pc;
    vlSelf->top_soc__DOT__u_cpu__DOT__if_instr = __Vdly__top_soc__DOT__u_cpu__DOT__if_instr;
    vlSelf->top_soc__DOT__u_cpu__DOT__mul_cnt = __Vdly__top_soc__DOT__u_cpu__DOT__mul_cnt;
    vlSelf->top_soc__DOT__u_cpu__DOT__mul_rd = __Vdly__top_soc__DOT__u_cpu__DOT__mul_rd;
    vlSelf->top_soc__DOT__u_cpu__DOT__mul_res = __Vdly__top_soc__DOT__u_cpu__DOT__mul_res;
    vlSelf->top_soc__DOT__u_cpu__DOT__pc_f = __Vdly__top_soc__DOT__u_cpu__DOT__pc_f;
    vlSelf->top_soc__DOT__u_cpu__DOT__ex_pc = __Vdly__top_soc__DOT__u_cpu__DOT__ex_pc;
    vlSelf->top_soc__DOT__u_cpu__DOT__mul_busy = __Vdly__top_soc__DOT__u_cpu__DOT__mul_busy;
    if (__Vdlyvset__top_soc__DOT__u_cpu__DOT__x__v0) {
        vlSelf->top_soc__DOT__u_cpu__DOT__x[0U] = 0U;
        vlSelf->top_soc__DOT__u_cpu__DOT__x[1U] = 0U;
        vlSelf->top_soc__DOT__u_cpu__DOT__x[2U] = 0U;
        vlSelf->top_soc__DOT__u_cpu__DOT__x[3U] = 0U;
        vlSelf->top_soc__DOT__u_cpu__DOT__x[4U] = 0U;
        vlSelf->top_soc__DOT__u_cpu__DOT__x[5U] = 0U;
        vlSelf->top_soc__DOT__u_cpu__DOT__x[6U] = 0U;
        vlSelf->top_soc__DOT__u_cpu__DOT__x[7U] = 0U;
        vlSelf->top_soc__DOT__u_cpu__DOT__x[8U] = 0U;
        vlSelf->top_soc__DOT__u_cpu__DOT__x[9U] = 0U;
        vlSelf->top_soc__DOT__u_cpu__DOT__x[0xaU] = 0U;
        vlSelf->top_soc__DOT__u_cpu__DOT__x[0xbU] = 0U;
        vlSelf->top_soc__DOT__u_cpu__DOT__x[0xcU] = 0U;
        vlSelf->top_soc__DOT__u_cpu__DOT__x[0xdU] = 0U;
        vlSelf->top_soc__DOT__u_cpu__DOT__x[0xeU] = 0U;
        vlSelf->top_soc__DOT__u_cpu__DOT__x[0xfU] = 0U;
        vlSelf->top_soc__DOT__u_cpu__DOT__x[0x10U] = 0U;
        vlSelf->top_soc__DOT__u_cpu__DOT__x[0x11U] = 0U;
        vlSelf->top_soc__DOT__u_cpu__DOT__x[0x12U] = 0U;
        vlSelf->top_soc__DOT__u_cpu__DOT__x[0x13U] = 0U;
        vlSelf->top_soc__DOT__u_cpu__DOT__x[0x14U] = 0U;
        vlSelf->top_soc__DOT__u_cpu__DOT__x[0x15U] = 0U;
        vlSelf->top_soc__DOT__u_cpu__DOT__x[0x16U] = 0U;
        vlSelf->top_soc__DOT__u_cpu__DOT__x[0x17U] = 0U;
        vlSelf->top_soc__DOT__u_cpu__DOT__x[0x18U] = 0U;
        vlSelf->top_soc__DOT__u_cpu__DOT__x[0x19U] = 0U;
        vlSelf->top_soc__DOT__u_cpu__DOT__x[0x1aU] = 0U;
        vlSelf->top_soc__DOT__u_cpu__DOT__x[0x1bU] = 0U;
        vlSelf->top_soc__DOT__u_cpu__DOT__x[0x1cU] = 0U;
        vlSelf->top_soc__DOT__u_cpu__DOT__x[0x1dU] = 0U;
        vlSelf->top_soc__DOT__u_cpu__DOT__x[0x1eU] = 0U;
        vlSelf->top_soc__DOT__u_cpu__DOT__x[0x1fU] = 0U;
    }
    if (__Vdlyvset__top_soc__DOT__u_cpu__DOT__x__v32) {
        vlSelf->top_soc__DOT__u_cpu__DOT__x[0U] = 0U;
    }
    if (__Vdlyvset__top_soc__DOT__u_cpu__DOT__x__v33) {
        vlSelf->top_soc__DOT__u_cpu__DOT__x[__Vdlyvdim0__top_soc__DOT__u_cpu__DOT__x__v33] 
            = __Vdlyvval__top_soc__DOT__u_cpu__DOT__x__v33;
    }
    if (__Vdlyvset__top_soc__DOT__u_cpu__DOT__x__v34) {
        vlSelf->top_soc__DOT__u_cpu__DOT__x[__Vdlyvdim0__top_soc__DOT__u_cpu__DOT__x__v34] 
            = __Vdlyvval__top_soc__DOT__u_cpu__DOT__x__v34;
    }
    vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr = __Vdly__top_soc__DOT__u_cpu__DOT__ex_instr;
    __Vfunc_top_soc__DOT__u_ram__DOT__rd32__5__a = vlSelf->top_soc__DOT__u_cpu__DOT__pc_f;
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
    vlSelf->top_soc__DOT__u_cpu__DOT__rd = (0x1fU & 
                                            (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                             >> 7U));
    __Vfunc_top_soc__DOT__u_cpu__DOT__sext13__2__v 
        = ((0x1000U & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                       >> 0x13U)) | ((0x800U & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                                << 4U)) 
                                     | ((0x7e0U & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                            >> 7U)))));
    __Vfunc_top_soc__DOT__u_cpu__DOT__sext13__2__Vfuncout 
        = (((- (IData)((1U & ((IData)(__Vfunc_top_soc__DOT__u_cpu__DOT__sext13__2__v) 
                              >> 0xcU)))) << 0xdU) 
           | (IData)(__Vfunc_top_soc__DOT__u_cpu__DOT__sext13__2__v));
    top_soc__DOT__u_cpu__DOT__imm_b = __Vfunc_top_soc__DOT__u_cpu__DOT__sext13__2__Vfuncout;
    __Vfunc_top_soc__DOT__u_cpu__DOT__sext21__3__v 
        = ((0x100000U & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                         >> 0xbU)) | ((0xff000U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr) 
                                      | ((0x800U & 
                                          (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                           >> 9U)) 
                                         | (0x7feU 
                                            & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                               >> 0x14U)))));
    __Vfunc_top_soc__DOT__u_cpu__DOT__sext21__3__Vfuncout 
        = (((- (IData)((1U & (__Vfunc_top_soc__DOT__u_cpu__DOT__sext21__3__v 
                              >> 0x14U)))) << 0x15U) 
           | __Vfunc_top_soc__DOT__u_cpu__DOT__sext21__3__v);
    top_soc__DOT__u_cpu__DOT__imm_j = __Vfunc_top_soc__DOT__u_cpu__DOT__sext21__3__Vfuncout;
    __Vfunc_top_soc__DOT__u_cpu__DOT__sext12__1__v 
        = ((0xfe0U & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                      >> 0x14U)) | (0x1fU & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                             >> 7U)));
    __Vfunc_top_soc__DOT__u_cpu__DOT__sext12__1__Vfuncout 
        = (((- (IData)((1U & ((IData)(__Vfunc_top_soc__DOT__u_cpu__DOT__sext12__1__v) 
                              >> 0xbU)))) << 0xcU) 
           | (IData)(__Vfunc_top_soc__DOT__u_cpu__DOT__sext12__1__v));
    vlSelf->top_soc__DOT__u_cpu__DOT__imm_s = __Vfunc_top_soc__DOT__u_cpu__DOT__sext12__1__Vfuncout;
    vlSelf->top_soc__DOT__u_cpu__DOT__is_mul = (IData)(
                                                       (0x2000033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)));
    __Vfunc_top_soc__DOT__u_cpu__DOT__sext12__0__v 
        = (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
           >> 0x14U);
    __Vfunc_top_soc__DOT__u_cpu__DOT__sext12__0__Vfuncout 
        = (((- (IData)((1U & ((IData)(__Vfunc_top_soc__DOT__u_cpu__DOT__sext12__0__v) 
                              >> 0xbU)))) << 0xcU) 
           | (IData)(__Vfunc_top_soc__DOT__u_cpu__DOT__sext12__0__v));
    vlSelf->top_soc__DOT__u_cpu__DOT__imm_i = __Vfunc_top_soc__DOT__u_cpu__DOT__sext12__0__Vfuncout;
    top_soc__DOT__u_cpu__DOT____VdfgTmp_h4352f357__0 
        = vlSelf->top_soc__DOT__u_cpu__DOT__x[(0x1fU 
                                               & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                                  >> 0x14U))];
    vlSelf->top_soc__DOT__u_cpu__DOT__rs1v = ((0U == 
                                               (0x1fU 
                                                & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                                   >> 0xfU)))
                                               ? 0U
                                               : vlSelf->top_soc__DOT__u_cpu__DOT__x
                                              [(0x1fU 
                                                & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                                   >> 0xfU))]);
    vlSelf->top_soc__DOT__u_cpu__DOT__start_mul = (
                                                   (~ (IData)(vlSelf->top_soc__DOT__u_cpu__DOT__mul_busy)) 
                                                   & (IData)(vlSelf->top_soc__DOT__u_cpu__DOT__is_mul));
    vlSelf->top_soc__DOT__u_cpu__DOT__do_wb = 0U;
    vlSelf->top_soc__DOT__u_cpu__DOT__d_we_n = 0U;
    if ((0U == (0x1fU & (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                         >> 0x14U)))) {
        vlSelf->top_soc__DOT__u_cpu__DOT____VdfgTmp_hef64d676__0 = 0U;
        vlSelf->top_soc__DOT__u_cpu__DOT__rs2v = 0U;
    } else {
        vlSelf->top_soc__DOT__u_cpu__DOT____VdfgTmp_hef64d676__0 
            = (0x1fU & top_soc__DOT__u_cpu__DOT____VdfgTmp_h4352f357__0);
        vlSelf->top_soc__DOT__u_cpu__DOT__rs2v = top_soc__DOT__u_cpu__DOT____VdfgTmp_h4352f357__0;
    }
    vlSelf->top_soc__DOT__u_cpu__DOT____VdfgExtracted_hae3c383b__0 
        = (vlSelf->top_soc__DOT__u_cpu__DOT__rs1v + vlSelf->top_soc__DOT__u_cpu__DOT__imm_i);
    vlSelf->top_soc__DOT__u_cpu__DOT____VdfgExtracted_hea06c40a__0 
        = (vlSelf->top_soc__DOT__u_cpu__DOT__rs1v + vlSelf->top_soc__DOT__u_cpu__DOT__rs2v);
    vlSelf->top_soc__DOT__u_cpu__DOT____VdfgExtracted_h117a9097__0 
        = VL_LTS_III(32, vlSelf->top_soc__DOT__u_cpu__DOT__rs1v, vlSelf->top_soc__DOT__u_cpu__DOT__rs2v);
    vlSelf->top_soc__DOT__u_cpu__DOT____VdfgExtracted_h12c968b5__0 
        = (vlSelf->top_soc__DOT__u_cpu__DOT__rs1v < vlSelf->top_soc__DOT__u_cpu__DOT__rs2v);
    vlSelf->top_soc__DOT__u_cpu__DOT__ex_taken = 0U;
    top_soc__DOT__u_cpu__DOT__ex_target = 0U;
    if ((1U & (~ (IData)(vlSelf->top_soc__DOT__u_cpu__DOT__mul_busy)))) {
        if ((1U & (~ (IData)(vlSelf->top_soc__DOT__u_cpu__DOT__is_mul)))) {
            if ((0x40U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                if ((0x20U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                    if ((1U & (~ (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                  >> 4U)))) {
                        if ((8U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                            if ((4U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                                if ((2U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                                    if ((1U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                                        vlSelf->top_soc__DOT__u_cpu__DOT__do_wb = 1U;
                                        vlSelf->top_soc__DOT__u_cpu__DOT__ex_taken = 1U;
                                        top_soc__DOT__u_cpu__DOT__ex_target 
                                            = (vlSelf->top_soc__DOT__u_cpu__DOT__ex_pc 
                                               + top_soc__DOT__u_cpu__DOT__imm_j);
                                    }
                                }
                            }
                        } else if ((4U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                            if ((2U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                                if ((1U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                                    vlSelf->top_soc__DOT__u_cpu__DOT__do_wb = 1U;
                                    vlSelf->top_soc__DOT__u_cpu__DOT__ex_taken = 1U;
                                    top_soc__DOT__u_cpu__DOT__ex_target 
                                        = (0xfffffffeU 
                                           & vlSelf->top_soc__DOT__u_cpu__DOT____VdfgExtracted_hae3c383b__0);
                                }
                            }
                        } else if ((2U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                            if ((1U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                                vlSelf->top_soc__DOT__u_cpu__DOT__ex_taken 
                                    = ((0x4000U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)
                                        ? ((0x2000U 
                                            & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)
                                            ? ((0x1000U 
                                                & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)
                                                ? (vlSelf->top_soc__DOT__u_cpu__DOT__rs1v 
                                                   >= vlSelf->top_soc__DOT__u_cpu__DOT__rs2v)
                                                : (IData)(vlSelf->top_soc__DOT__u_cpu__DOT____VdfgExtracted_h12c968b5__0))
                                            : ((0x1000U 
                                                & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)
                                                ? VL_GTES_III(32, vlSelf->top_soc__DOT__u_cpu__DOT__rs1v, vlSelf->top_soc__DOT__u_cpu__DOT__rs2v)
                                                : (IData)(vlSelf->top_soc__DOT__u_cpu__DOT____VdfgExtracted_h117a9097__0)))
                                        : ((1U & (~ 
                                                  (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                                   >> 0xdU))) 
                                           && ((0x1000U 
                                                & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)
                                                ? (vlSelf->top_soc__DOT__u_cpu__DOT__rs1v 
                                                   != vlSelf->top_soc__DOT__u_cpu__DOT__rs2v)
                                                : (vlSelf->top_soc__DOT__u_cpu__DOT__rs1v 
                                                   == vlSelf->top_soc__DOT__u_cpu__DOT__rs2v))));
                                if (vlSelf->top_soc__DOT__u_cpu__DOT__ex_taken) {
                                    top_soc__DOT__u_cpu__DOT__ex_target 
                                        = (vlSelf->top_soc__DOT__u_cpu__DOT__ex_pc 
                                           + top_soc__DOT__u_cpu__DOT__imm_b);
                                }
                            }
                        }
                    }
                }
            } else if ((0x20U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                if ((0x10U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                    if ((1U & (~ (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                  >> 3U)))) {
                        if ((4U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                            if ((2U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                                if ((1U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                                    vlSelf->top_soc__DOT__u_cpu__DOT__do_wb = 1U;
                                }
                            }
                        } else if ((2U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                            if ((1U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                                vlSelf->top_soc__DOT__u_cpu__DOT__do_wb = 1U;
                            }
                        }
                    }
                }
            } else if ((0x10U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                if ((1U & (~ (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                              >> 3U)))) {
                    if ((4U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                        if ((2U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                            if ((1U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                                vlSelf->top_soc__DOT__u_cpu__DOT__do_wb = 1U;
                            }
                        }
                    } else if ((2U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                        if ((1U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                            vlSelf->top_soc__DOT__u_cpu__DOT__do_wb = 1U;
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                              >> 2U)))) {
                    if ((2U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                        if ((1U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                            vlSelf->top_soc__DOT__u_cpu__DOT__do_wb = 1U;
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                          >> 6U)))) {
                if ((0x20U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                    if ((1U & (~ (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                  >> 4U)))) {
                        if ((1U & (~ (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                      >> 3U)))) {
                            if ((1U & (~ (vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr 
                                          >> 2U)))) {
                                if ((2U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                                    if ((1U & vlSelf->top_soc__DOT__u_cpu__DOT__ex_instr)) {
                                        vlSelf->top_soc__DOT__u_cpu__DOT__d_we_n = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->top_soc__DOT__u_cpu__DOT__pc_f_next = ((IData)(vlSelf->top_soc__DOT__u_cpu__DOT__ex_taken)
                                                    ? top_soc__DOT__u_cpu__DOT__ex_target
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->top_soc__DOT__u_cpu__DOT__pc_f));
}

void Vtop_soc___024root___eval_nba(Vtop_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_soc___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_soc___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_soc___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtop_soc___024root___eval_triggers__act(Vtop_soc___024root* vlSelf);

bool Vtop_soc___024root___eval_phase__act(Vtop_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_soc___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop_soc___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop_soc___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop_soc___024root___eval_phase__nba(Vtop_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_soc___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop_soc___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_soc___024root___dump_triggers__nba(Vtop_soc___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_soc___024root___dump_triggers__act(Vtop_soc___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_soc___024root___eval(Vtop_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_soc___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop_soc___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/top_soc.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop_soc___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/top_soc.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop_soc___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop_soc___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop_soc___024root___eval_debug_assertions(Vtop_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_soc___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
