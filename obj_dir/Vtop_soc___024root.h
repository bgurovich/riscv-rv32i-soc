// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_soc.h for the primary calling header

#ifndef VERILATED_VTOP_SOC___024ROOT_H_
#define VERILATED_VTOP_SOC___024ROOT_H_  // guard

#include "verilated.h"


class Vtop_soc__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_soc___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*7:0*/ top_soc__DOT__u_cpu__DOT__load_ext__Vstatic__b;
    CData/*0:0*/ top_soc__DOT__u_cpu__DOT__do_wb;
    CData/*0:0*/ top_soc__DOT__u_cpu__DOT__d_we_n;
    CData/*3:0*/ top_soc__DOT__u_cpu__DOT__d_wstrb_n;
    CData/*0:0*/ top_soc__DOT__u_cpu__DOT____VdfgExtracted_h117a9097__0;
    CData/*0:0*/ top_soc__DOT__u_cpu__DOT____VdfgExtracted_h12c968b5__0;
    CData/*4:0*/ top_soc__DOT__u_cpu__DOT____VdfgTmp_h0098c51a__0;
    CData/*1:0*/ __Vfunc_top_soc__DOT__u_cpu__DOT__load_ext__4__byte_off;
    CData/*2:0*/ __Vfunc_top_soc__DOT__u_cpu__DOT__load_ext__4__f3;
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ top_soc__DOT__u_cpu__DOT__load_ext__Vstatic__h;
    IData/*31:0*/ top_soc__DOT__i_rdata;
    IData/*31:0*/ top_soc__DOT__ram_rdata;
    IData/*31:0*/ top_soc__DOT__u_cpu__DOT__pc;
    IData/*31:0*/ top_soc__DOT__u_cpu__DOT__rs1v;
    IData/*31:0*/ top_soc__DOT__u_cpu__DOT__rs2v;
    IData/*31:0*/ top_soc__DOT__u_cpu__DOT__imm_i;
    IData/*31:0*/ top_soc__DOT__u_cpu__DOT__imm_s;
    IData/*31:0*/ top_soc__DOT__u_cpu__DOT__pc_next;
    IData/*31:0*/ top_soc__DOT__u_cpu__DOT__wb_data;
    IData/*31:0*/ top_soc__DOT__u_cpu__DOT__d_addr_n;
    IData/*31:0*/ top_soc__DOT__u_cpu__DOT__d_wdata_n;
    IData/*31:0*/ top_soc__DOT__u_cpu__DOT____VdfgExtracted_hae3c383b__0;
    IData/*31:0*/ top_soc__DOT__u_cpu__DOT____VdfgExtracted_hea06c40a__0;
    VlWide<32>/*1023:0*/ top_soc__DOT__u_ram__DOT__unnamedblk1__DOT__f;
    IData/*31:0*/ __Vfunc_top_soc__DOT__u_cpu__DOT__load_ext__4__Vfuncout;
    IData/*31:0*/ __Vfunc_top_soc__DOT__u_cpu__DOT__load_ext__4__raw;
    IData/*31:0*/ __Vtrigprevexpr___TOP__top_soc__DOT__u_cpu__DOT__d_addr_n__0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__top_soc__DOT__u_cpu__DOT__d_addr_n__1;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> top_soc__DOT__u_cpu__DOT__x;
    VlUnpacked<CData/*7:0*/, 65536> top_soc__DOT__u_ram__DOT__mem8;
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop_soc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_soc___024root(Vtop_soc__Syms* symsp, const char* v__name);
    ~Vtop_soc___024root();
    VL_UNCOPYABLE(Vtop_soc___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
