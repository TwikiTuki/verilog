// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "verilated.h"

#include "Vsim___024root.h"

VlCoroutine Vsim___024root___eval_initial__TOP__0(Vsim___024root* vlSelf);

void Vsim___024root___eval_initial(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vsim___024root___eval_initial__TOP__0(vlSelf);
}

VL_INLINE_OPT void Vsim___024root___act_sequent__TOP__0(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->sim__DOT__result = (0xffU & ((0U == (IData)(vlSelf->sim__DOT__opcode))
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
                                                  : 0U))));
}

void Vsim___024root___eval_act(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(0U)) {
        Vsim___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vsim___024root___eval_nba(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vsim___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vsim___024root___eval_triggers__act(Vsim___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim___024root___dump_triggers__act(Vsim___024root* vlSelf);
#endif  // VL_DEBUG
void Vsim___024root___timing_resume(Vsim___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim___024root___dump_triggers__nba(Vsim___024root* vlSelf);
#endif  // VL_DEBUG

void Vsim___024root___eval(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vsim___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vsim___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("sim.sv", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vsim___024root___timing_resume(vlSelf);
                Vsim___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vsim___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("sim.sv", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vsim___024root___eval_nba(vlSelf);
        }
    }
}

void Vsim___024root___timing_resume(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___timing_resume\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(0U)) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vsim___024root___eval_debug_assertions(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
