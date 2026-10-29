// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM___024ROOT_H_
#define VERILATED_VSIM___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class Vsim__Syms;

class Vsim___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ sim__DOT__op1;
    CData/*7:0*/ sim__DOT__op2;
    CData/*1:0*/ sim__DOT__opcode;
    CData/*7:0*/ sim__DOT__result;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ sim__DOT__bench0__DOT__test_passed;
    IData/*31:0*/ sim__DOT__bench0__DOT__test_failed;
    IData/*31:0*/ sim__DOT__bench0__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim___024root(Vsim__Syms* symsp, const char* v__name);
    ~Vsim___024root();
    VL_UNCOPYABLE(Vsim___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
