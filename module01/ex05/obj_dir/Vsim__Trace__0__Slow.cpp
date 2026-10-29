// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsim__Syms.h"


VL_ATTR_COLD void Vsim___024root__trace_init_sub__TOP__0(Vsim___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("sim ");
    tracep->declBus(c+1,"op1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,"op2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,"opcode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+4,"result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->pushNamePrefix("alu0 ");
    tracep->declBus(c+1,"op1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+2,"op2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+3,"opcode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+4,"result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bench0 ");
    tracep->declBus(c+1,"op1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+2,"op2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+3,"opcode",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+4,"result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+5,"test_passed",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->declBus(c+6,"test_failed",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+7,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vsim___024root__trace_init_top(Vsim___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_init_top\n"); );
    // Body
    Vsim___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsim___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vsim___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vsim___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vsim___024root__trace_register(Vsim___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vsim___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vsim___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vsim___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsim___024root__trace_full_sub_0(Vsim___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vsim___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_full_top_0\n"); );
    // Init
    Vsim___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsim___024root*>(voidSelf);
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsim___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsim___024root__trace_full_sub_0(Vsim___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->sim__DOT__op1),8);
    bufp->fullCData(oldp+2,(vlSelf->sim__DOT__op2),8);
    bufp->fullCData(oldp+3,(vlSelf->sim__DOT__opcode),2);
    bufp->fullCData(oldp+4,((0xffU & ((0U == (IData)(vlSelf->sim__DOT__opcode))
                                       ? ((IData)(vlSelf->sim__DOT__op1) 
                                          & (IData)(vlSelf->sim__DOT__op2))
                                       : ((1U == (IData)(vlSelf->sim__DOT__opcode))
                                           ? ((IData)(vlSelf->sim__DOT__op1) 
                                              | (IData)(vlSelf->sim__DOT__op2))
                                           : ((2U == (IData)(vlSelf->sim__DOT__opcode))
                                               ? ((IData)(vlSelf->sim__DOT__op1) 
                                                  + (IData)(vlSelf->sim__DOT__op2))
                                               : 0U))))),8);
    bufp->fullIData(oldp+5,(vlSelf->sim__DOT__bench0__DOT__test_passed),32);
    bufp->fullIData(oldp+6,(vlSelf->sim__DOT__bench0__DOT__test_failed),32);
    bufp->fullIData(oldp+7,(vlSelf->sim__DOT__bench0__DOT__unnamedblk1__DOT__i),32);
}
