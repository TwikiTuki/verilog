// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsim__Syms.h"


void Vsim___024root__trace_chg_sub_0(Vsim___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vsim___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_chg_top_0\n"); );
    // Init
    Vsim___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsim___024root*>(voidSelf);
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsim___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vsim___024root__trace_chg_sub_0(Vsim___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+0,(vlSelf->sim__DOT__op1),8);
        bufp->chgCData(oldp+1,(vlSelf->sim__DOT__op2),8);
        bufp->chgCData(oldp+2,(vlSelf->sim__DOT__opcode),2);
        bufp->chgCData(oldp+3,((0xffU & ((0U == (IData)(vlSelf->sim__DOT__opcode))
                                          ? ((IData)(vlSelf->sim__DOT__op1) 
                                             & (IData)(vlSelf->sim__DOT__op2))
                                          : ((1U == (IData)(vlSelf->sim__DOT__opcode))
                                              ? ((IData)(vlSelf->sim__DOT__op1) 
                                                 | (IData)(vlSelf->sim__DOT__op2))
                                              : ((2U 
                                                  == (IData)(vlSelf->sim__DOT__opcode))
                                                  ? 
                                                 ((IData)(vlSelf->sim__DOT__op1) 
                                                  + (IData)(vlSelf->sim__DOT__op2))
                                                  : 0U))))),8);
        bufp->chgIData(oldp+4,(vlSelf->sim__DOT__bench0__DOT__test_passed),32);
        bufp->chgIData(oldp+5,(vlSelf->sim__DOT__bench0__DOT__test_failed),32);
        bufp->chgIData(oldp+6,(vlSelf->sim__DOT__bench0__DOT__unnamedblk1__DOT__i),32);
    }
}

void Vsim___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_cleanup\n"); );
    // Init
    Vsim___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsim___024root*>(voidSelf);
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
