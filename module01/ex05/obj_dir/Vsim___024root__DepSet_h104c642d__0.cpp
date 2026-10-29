// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "verilated.h"

#include "Vsim__Syms.h"
#include "Vsim___024root.h"

VL_INLINE_OPT VlCoroutine Vsim___024root___eval_initial__TOP__0(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_initial__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand1;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand1 = 0;
    CData/*7:0*/ __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand2;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand2 = 0;
    CData/*1:0*/ __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operation;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operation = 0;
    CData/*7:0*/ __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__expected;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__expected = 0;
    CData/*7:0*/ __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand1;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand1 = 0;
    CData/*7:0*/ __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand2;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand2 = 0;
    CData/*1:0*/ __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operation;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operation = 0;
    CData/*7:0*/ __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__expected;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__expected = 0;
    CData/*7:0*/ __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand1;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand1 = 0;
    CData/*7:0*/ __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand2;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand2 = 0;
    CData/*1:0*/ __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operation;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operation = 0;
    CData/*7:0*/ __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__expected;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__expected = 0;
    CData/*7:0*/ __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand1;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand1 = 0;
    CData/*7:0*/ __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand2;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand2 = 0;
    CData/*1:0*/ __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operation;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operation = 0;
    CData/*7:0*/ __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__expected;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__expected = 0;
    // Body
    VL_WRITEF("Sttarting tests: \n");
    co_await vlSelf->__VdlySched.delay(0xaU, "bench.sv", 
                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("-----------------------------------\n");
    vlSelf->sim__DOT__opcode = 0U;
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.fst"});
    vlSymsp->_traceDumpOpen();
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operation 
        = vlSelf->sim__DOT__opcode;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand2 = 0x22U;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand1 = 0x11U;
    {
        if ((0U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operation))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__expected 
                = ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand1) 
                   & (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand2));
        } else if ((1U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operation))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__expected 
                = ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand1) 
                   | (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand2));
        } else if (VL_LIKELY((2U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operation)))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__expected 
                = (0xffU & ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand1) 
                            + (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand2)));
        } else {
            VL_WRITEF("Skiped %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operation);
            goto __Vlabel1;
        }
        vlSelf->sim__DOT__op1 = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand1;
        vlSelf->sim__DOT__op2 = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand2;
        vlSelf->sim__DOT__opcode = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operation;
        co_await vlSelf->__VdlySched.delay(0xaU, "bench.sv", 
                                           31);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if (((IData)(vlSelf->sim__DOT__result) == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__expected))) {
            VL_WRITEF("Passed %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operation);
            vlSelf->sim__DOT__bench0__DOT__test_passed 
                = ((IData)(1U) + vlSelf->sim__DOT__bench0__DOT__test_passed);
        } else {
            VL_WRITEF("Failed %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operation);
            vlSelf->sim__DOT__bench0__DOT__test_failed 
                = ((IData)(1U) + vlSelf->sim__DOT__bench0__DOT__test_failed);
        }
        __Vlabel1: ;
    }
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operation 
        = vlSelf->sim__DOT__opcode;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand2 = 1U;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand1 = 1U;
    {
        if ((0U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operation))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__expected 
                = ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand1) 
                   & (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand2));
        } else if ((1U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operation))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__expected 
                = ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand1) 
                   | (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand2));
        } else if (VL_LIKELY((2U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operation)))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__expected 
                = (0xffU & ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand1) 
                            + (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand2)));
        } else {
            VL_WRITEF("Skiped %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operation);
            goto __Vlabel2;
        }
        vlSelf->sim__DOT__op1 = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand1;
        vlSelf->sim__DOT__op2 = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand2;
        vlSelf->sim__DOT__opcode = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operation;
        co_await vlSelf->__VdlySched.delay(0xaU, "bench.sv", 
                                           31);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if (((IData)(vlSelf->sim__DOT__result) == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__expected))) {
            VL_WRITEF("Passed %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operation);
            vlSelf->sim__DOT__bench0__DOT__test_passed 
                = ((IData)(1U) + vlSelf->sim__DOT__bench0__DOT__test_passed);
        } else {
            VL_WRITEF("Failed %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operation);
            vlSelf->sim__DOT__bench0__DOT__test_failed 
                = ((IData)(1U) + vlSelf->sim__DOT__bench0__DOT__test_failed);
        }
        __Vlabel2: ;
    }
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operation 
        = vlSelf->sim__DOT__opcode;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand2 = 0x81U;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand1 = 0x81U;
    {
        if ((0U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operation))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__expected 
                = ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand1) 
                   & (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand2));
        } else if ((1U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operation))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__expected 
                = ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand1) 
                   | (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand2));
        } else if (VL_LIKELY((2U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operation)))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__expected 
                = (0xffU & ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand1) 
                            + (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand2)));
        } else {
            VL_WRITEF("Skiped %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operation);
            goto __Vlabel3;
        }
        vlSelf->sim__DOT__op1 = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand1;
        vlSelf->sim__DOT__op2 = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand2;
        vlSelf->sim__DOT__opcode = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operation;
        co_await vlSelf->__VdlySched.delay(0xaU, "bench.sv", 
                                           31);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if (((IData)(vlSelf->sim__DOT__result) == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__expected))) {
            VL_WRITEF("Passed %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operation);
            vlSelf->sim__DOT__bench0__DOT__test_passed 
                = ((IData)(1U) + vlSelf->sim__DOT__bench0__DOT__test_passed);
        } else {
            VL_WRITEF("Failed %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operation);
            vlSelf->sim__DOT__bench0__DOT__test_failed 
                = ((IData)(1U) + vlSelf->sim__DOT__bench0__DOT__test_failed);
        }
        __Vlabel3: ;
    }
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operation 
        = vlSelf->sim__DOT__opcode;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand2 = 0U;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand1 = 0U;
    {
        if ((0U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operation))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__expected 
                = ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand1) 
                   & (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand2));
        } else if ((1U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operation))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__expected 
                = ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand1) 
                   | (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand2));
        } else if (VL_LIKELY((2U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operation)))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__expected 
                = (0xffU & ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand1) 
                            + (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand2)));
        } else {
            VL_WRITEF("Skiped %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operation);
            goto __Vlabel4;
        }
        vlSelf->sim__DOT__op1 = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand1;
        vlSelf->sim__DOT__op2 = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand2;
        vlSelf->sim__DOT__opcode = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operation;
        co_await vlSelf->__VdlySched.delay(0xaU, "bench.sv", 
                                           31);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if (((IData)(vlSelf->sim__DOT__result) == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__expected))) {
            VL_WRITEF("Passed %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operation);
            vlSelf->sim__DOT__bench0__DOT__test_passed 
                = ((IData)(1U) + vlSelf->sim__DOT__bench0__DOT__test_passed);
        } else {
            VL_WRITEF("Failed %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operation);
            vlSelf->sim__DOT__bench0__DOT__test_failed 
                = ((IData)(1U) + vlSelf->sim__DOT__bench0__DOT__test_failed);
        }
        __Vlabel4: ;
    }
    VL_WRITEF("| Resume ::: Passed:%11d, Failed:%11d|\n\n",
              32,vlSelf->sim__DOT__bench0__DOT__test_passed,
              32,vlSelf->sim__DOT__bench0__DOT__test_failed);
    vlSelf->sim__DOT__bench0__DOT__unnamedblk1__DOT__i = 1U;
    VL_WRITEF("-----------------------------------\n");
    vlSelf->sim__DOT__opcode = 1U;
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.fst"});
    vlSymsp->_traceDumpOpen();
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operation 
        = vlSelf->sim__DOT__opcode;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand2 = 0x22U;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand1 = 0x11U;
    {
        if ((0U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operation))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__expected 
                = ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand1) 
                   & (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand2));
        } else if ((1U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operation))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__expected 
                = ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand1) 
                   | (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand2));
        } else if (VL_LIKELY((2U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operation)))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__expected 
                = (0xffU & ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand1) 
                            + (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand2)));
        } else {
            VL_WRITEF("Skiped %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operation);
            goto __Vlabel5;
        }
        vlSelf->sim__DOT__op1 = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand1;
        vlSelf->sim__DOT__op2 = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand2;
        vlSelf->sim__DOT__opcode = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operation;
        co_await vlSelf->__VdlySched.delay(0xaU, "bench.sv", 
                                           31);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if (((IData)(vlSelf->sim__DOT__result) == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__expected))) {
            VL_WRITEF("Passed %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operation);
            vlSelf->sim__DOT__bench0__DOT__test_passed 
                = ((IData)(1U) + vlSelf->sim__DOT__bench0__DOT__test_passed);
        } else {
            VL_WRITEF("Failed %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operation);
            vlSelf->sim__DOT__bench0__DOT__test_failed 
                = ((IData)(1U) + vlSelf->sim__DOT__bench0__DOT__test_failed);
        }
        __Vlabel5: ;
    }
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operation 
        = vlSelf->sim__DOT__opcode;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand2 = 1U;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand1 = 1U;
    {
        if ((0U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operation))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__expected 
                = ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand1) 
                   & (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand2));
        } else if ((1U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operation))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__expected 
                = ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand1) 
                   | (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand2));
        } else if (VL_LIKELY((2U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operation)))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__expected 
                = (0xffU & ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand1) 
                            + (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand2)));
        } else {
            VL_WRITEF("Skiped %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operation);
            goto __Vlabel6;
        }
        vlSelf->sim__DOT__op1 = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand1;
        vlSelf->sim__DOT__op2 = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand2;
        vlSelf->sim__DOT__opcode = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operation;
        co_await vlSelf->__VdlySched.delay(0xaU, "bench.sv", 
                                           31);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if (((IData)(vlSelf->sim__DOT__result) == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__expected))) {
            VL_WRITEF("Passed %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operation);
            vlSelf->sim__DOT__bench0__DOT__test_passed 
                = ((IData)(1U) + vlSelf->sim__DOT__bench0__DOT__test_passed);
        } else {
            VL_WRITEF("Failed %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operation);
            vlSelf->sim__DOT__bench0__DOT__test_failed 
                = ((IData)(1U) + vlSelf->sim__DOT__bench0__DOT__test_failed);
        }
        __Vlabel6: ;
    }
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operation 
        = vlSelf->sim__DOT__opcode;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand2 = 0x81U;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand1 = 0x81U;
    {
        if ((0U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operation))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__expected 
                = ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand1) 
                   & (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand2));
        } else if ((1U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operation))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__expected 
                = ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand1) 
                   | (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand2));
        } else if (VL_LIKELY((2U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operation)))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__expected 
                = (0xffU & ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand1) 
                            + (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand2)));
        } else {
            VL_WRITEF("Skiped %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operation);
            goto __Vlabel7;
        }
        vlSelf->sim__DOT__op1 = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand1;
        vlSelf->sim__DOT__op2 = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand2;
        vlSelf->sim__DOT__opcode = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operation;
        co_await vlSelf->__VdlySched.delay(0xaU, "bench.sv", 
                                           31);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if (((IData)(vlSelf->sim__DOT__result) == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__expected))) {
            VL_WRITEF("Passed %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operation);
            vlSelf->sim__DOT__bench0__DOT__test_passed 
                = ((IData)(1U) + vlSelf->sim__DOT__bench0__DOT__test_passed);
        } else {
            VL_WRITEF("Failed %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operation);
            vlSelf->sim__DOT__bench0__DOT__test_failed 
                = ((IData)(1U) + vlSelf->sim__DOT__bench0__DOT__test_failed);
        }
        __Vlabel7: ;
    }
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operation 
        = vlSelf->sim__DOT__opcode;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand2 = 0U;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand1 = 0U;
    {
        if ((0U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operation))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__expected 
                = ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand1) 
                   & (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand2));
        } else if ((1U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operation))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__expected 
                = ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand1) 
                   | (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand2));
        } else if (VL_LIKELY((2U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operation)))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__expected 
                = (0xffU & ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand1) 
                            + (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand2)));
        } else {
            VL_WRITEF("Skiped %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operation);
            goto __Vlabel8;
        }
        vlSelf->sim__DOT__op1 = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand1;
        vlSelf->sim__DOT__op2 = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand2;
        vlSelf->sim__DOT__opcode = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operation;
        co_await vlSelf->__VdlySched.delay(0xaU, "bench.sv", 
                                           31);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if (((IData)(vlSelf->sim__DOT__result) == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__expected))) {
            VL_WRITEF("Passed %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operation);
            vlSelf->sim__DOT__bench0__DOT__test_passed 
                = ((IData)(1U) + vlSelf->sim__DOT__bench0__DOT__test_passed);
        } else {
            VL_WRITEF("Failed %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operation);
            vlSelf->sim__DOT__bench0__DOT__test_failed 
                = ((IData)(1U) + vlSelf->sim__DOT__bench0__DOT__test_failed);
        }
        __Vlabel8: ;
    }
    VL_WRITEF("| Resume ::: Passed:%11d, Failed:%11d|\n\n",
              32,vlSelf->sim__DOT__bench0__DOT__test_passed,
              32,vlSelf->sim__DOT__bench0__DOT__test_failed);
    vlSelf->sim__DOT__bench0__DOT__unnamedblk1__DOT__i = 2U;
    VL_WRITEF("-----------------------------------\n");
    vlSelf->sim__DOT__opcode = 2U;
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.fst"});
    vlSymsp->_traceDumpOpen();
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operation 
        = vlSelf->sim__DOT__opcode;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand2 = 0x22U;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand1 = 0x11U;
    {
        if ((0U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operation))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__expected 
                = ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand1) 
                   & (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand2));
        } else if ((1U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operation))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__expected 
                = ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand1) 
                   | (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand2));
        } else if (VL_LIKELY((2U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operation)))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__expected 
                = (0xffU & ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand1) 
                            + (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand2)));
        } else {
            VL_WRITEF("Skiped %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operation);
            goto __Vlabel9;
        }
        vlSelf->sim__DOT__op1 = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand1;
        vlSelf->sim__DOT__op2 = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand2;
        vlSelf->sim__DOT__opcode = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operation;
        co_await vlSelf->__VdlySched.delay(0xaU, "bench.sv", 
                                           31);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if (((IData)(vlSelf->sim__DOT__result) == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__expected))) {
            VL_WRITEF("Passed %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operation);
            vlSelf->sim__DOT__bench0__DOT__test_passed 
                = ((IData)(1U) + vlSelf->sim__DOT__bench0__DOT__test_passed);
        } else {
            VL_WRITEF("Failed %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operation);
            vlSelf->sim__DOT__bench0__DOT__test_failed 
                = ((IData)(1U) + vlSelf->sim__DOT__bench0__DOT__test_failed);
        }
        __Vlabel9: ;
    }
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operation 
        = vlSelf->sim__DOT__opcode;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand2 = 1U;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand1 = 1U;
    {
        if ((0U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operation))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__expected 
                = ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand1) 
                   & (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand2));
        } else if ((1U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operation))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__expected 
                = ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand1) 
                   | (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand2));
        } else if (VL_LIKELY((2U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operation)))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__expected 
                = (0xffU & ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand1) 
                            + (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand2)));
        } else {
            VL_WRITEF("Skiped %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operation);
            goto __Vlabel10;
        }
        vlSelf->sim__DOT__op1 = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand1;
        vlSelf->sim__DOT__op2 = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand2;
        vlSelf->sim__DOT__opcode = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operation;
        co_await vlSelf->__VdlySched.delay(0xaU, "bench.sv", 
                                           31);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if (((IData)(vlSelf->sim__DOT__result) == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__expected))) {
            VL_WRITEF("Passed %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operation);
            vlSelf->sim__DOT__bench0__DOT__test_passed 
                = ((IData)(1U) + vlSelf->sim__DOT__bench0__DOT__test_passed);
        } else {
            VL_WRITEF("Failed %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operation);
            vlSelf->sim__DOT__bench0__DOT__test_failed 
                = ((IData)(1U) + vlSelf->sim__DOT__bench0__DOT__test_failed);
        }
        __Vlabel10: ;
    }
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operation 
        = vlSelf->sim__DOT__opcode;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand2 = 0x81U;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand1 = 0x81U;
    {
        if ((0U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operation))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__expected 
                = ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand1) 
                   & (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand2));
        } else if ((1U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operation))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__expected 
                = ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand1) 
                   | (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand2));
        } else if (VL_LIKELY((2U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operation)))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__expected 
                = (0xffU & ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand1) 
                            + (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand2)));
        } else {
            VL_WRITEF("Skiped %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operation);
            goto __Vlabel11;
        }
        vlSelf->sim__DOT__op1 = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand1;
        vlSelf->sim__DOT__op2 = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand2;
        vlSelf->sim__DOT__opcode = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operation;
        co_await vlSelf->__VdlySched.delay(0xaU, "bench.sv", 
                                           31);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if (((IData)(vlSelf->sim__DOT__result) == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__expected))) {
            VL_WRITEF("Passed %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operation);
            vlSelf->sim__DOT__bench0__DOT__test_passed 
                = ((IData)(1U) + vlSelf->sim__DOT__bench0__DOT__test_passed);
        } else {
            VL_WRITEF("Failed %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operation);
            vlSelf->sim__DOT__bench0__DOT__test_failed 
                = ((IData)(1U) + vlSelf->sim__DOT__bench0__DOT__test_failed);
        }
        __Vlabel11: ;
    }
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operation 
        = vlSelf->sim__DOT__opcode;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand2 = 0U;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand1 = 0U;
    {
        if ((0U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operation))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__expected 
                = ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand1) 
                   & (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand2));
        } else if ((1U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operation))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__expected 
                = ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand1) 
                   | (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand2));
        } else if (VL_LIKELY((2U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operation)))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__expected 
                = (0xffU & ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand1) 
                            + (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand2)));
        } else {
            VL_WRITEF("Skiped %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operation);
            goto __Vlabel12;
        }
        vlSelf->sim__DOT__op1 = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand1;
        vlSelf->sim__DOT__op2 = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand2;
        vlSelf->sim__DOT__opcode = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operation;
        co_await vlSelf->__VdlySched.delay(0xaU, "bench.sv", 
                                           31);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if (((IData)(vlSelf->sim__DOT__result) == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__expected))) {
            VL_WRITEF("Passed %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operation);
            vlSelf->sim__DOT__bench0__DOT__test_passed 
                = ((IData)(1U) + vlSelf->sim__DOT__bench0__DOT__test_passed);
        } else {
            VL_WRITEF("Failed %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operation);
            vlSelf->sim__DOT__bench0__DOT__test_failed 
                = ((IData)(1U) + vlSelf->sim__DOT__bench0__DOT__test_failed);
        }
        __Vlabel12: ;
    }
    VL_WRITEF("| Resume ::: Passed:%11d, Failed:%11d|\n\n",
              32,vlSelf->sim__DOT__bench0__DOT__test_passed,
              32,vlSelf->sim__DOT__bench0__DOT__test_failed);
    vlSelf->sim__DOT__bench0__DOT__unnamedblk1__DOT__i = 3U;
    VL_WRITEF("-----------------------------------\n");
    vlSelf->sim__DOT__opcode = 3U;
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.fst"});
    vlSymsp->_traceDumpOpen();
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operation 
        = vlSelf->sim__DOT__opcode;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand2 = 0x22U;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand1 = 0x11U;
    {
        if ((0U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operation))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__expected 
                = ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand1) 
                   & (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand2));
        } else if ((1U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operation))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__expected 
                = ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand1) 
                   | (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand2));
        } else if (VL_LIKELY((2U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operation)))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__expected 
                = (0xffU & ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand1) 
                            + (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand2)));
        } else {
            VL_WRITEF("Skiped %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operation);
            goto __Vlabel13;
        }
        vlSelf->sim__DOT__op1 = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand1;
        vlSelf->sim__DOT__op2 = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand2;
        vlSelf->sim__DOT__opcode = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operation;
        co_await vlSelf->__VdlySched.delay(0xaU, "bench.sv", 
                                           31);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if (((IData)(vlSelf->sim__DOT__result) == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__expected))) {
            VL_WRITEF("Passed %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operation);
            vlSelf->sim__DOT__bench0__DOT__test_passed 
                = ((IData)(1U) + vlSelf->sim__DOT__bench0__DOT__test_passed);
        } else {
            VL_WRITEF("Failed %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__0__operation);
            vlSelf->sim__DOT__bench0__DOT__test_failed 
                = ((IData)(1U) + vlSelf->sim__DOT__bench0__DOT__test_failed);
        }
        __Vlabel13: ;
    }
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operation 
        = vlSelf->sim__DOT__opcode;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand2 = 1U;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand1 = 1U;
    {
        if ((0U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operation))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__expected 
                = ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand1) 
                   & (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand2));
        } else if ((1U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operation))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__expected 
                = ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand1) 
                   | (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand2));
        } else if (VL_LIKELY((2U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operation)))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__expected 
                = (0xffU & ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand1) 
                            + (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand2)));
        } else {
            VL_WRITEF("Skiped %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operation);
            goto __Vlabel14;
        }
        vlSelf->sim__DOT__op1 = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand1;
        vlSelf->sim__DOT__op2 = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand2;
        vlSelf->sim__DOT__opcode = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operation;
        co_await vlSelf->__VdlySched.delay(0xaU, "bench.sv", 
                                           31);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if (((IData)(vlSelf->sim__DOT__result) == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__expected))) {
            VL_WRITEF("Passed %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operation);
            vlSelf->sim__DOT__bench0__DOT__test_passed 
                = ((IData)(1U) + vlSelf->sim__DOT__bench0__DOT__test_passed);
        } else {
            VL_WRITEF("Failed %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__1__operation);
            vlSelf->sim__DOT__bench0__DOT__test_failed 
                = ((IData)(1U) + vlSelf->sim__DOT__bench0__DOT__test_failed);
        }
        __Vlabel14: ;
    }
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operation 
        = vlSelf->sim__DOT__opcode;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand2 = 0x81U;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand1 = 0x81U;
    {
        if ((0U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operation))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__expected 
                = ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand1) 
                   & (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand2));
        } else if ((1U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operation))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__expected 
                = ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand1) 
                   | (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand2));
        } else if (VL_LIKELY((2U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operation)))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__expected 
                = (0xffU & ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand1) 
                            + (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand2)));
        } else {
            VL_WRITEF("Skiped %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operation);
            goto __Vlabel15;
        }
        vlSelf->sim__DOT__op1 = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand1;
        vlSelf->sim__DOT__op2 = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand2;
        vlSelf->sim__DOT__opcode = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operation;
        co_await vlSelf->__VdlySched.delay(0xaU, "bench.sv", 
                                           31);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if (((IData)(vlSelf->sim__DOT__result) == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__expected))) {
            VL_WRITEF("Passed %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operation);
            vlSelf->sim__DOT__bench0__DOT__test_passed 
                = ((IData)(1U) + vlSelf->sim__DOT__bench0__DOT__test_passed);
        } else {
            VL_WRITEF("Failed %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__2__operation);
            vlSelf->sim__DOT__bench0__DOT__test_failed 
                = ((IData)(1U) + vlSelf->sim__DOT__bench0__DOT__test_failed);
        }
        __Vlabel15: ;
    }
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operation 
        = vlSelf->sim__DOT__opcode;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand2 = 0U;
    __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand1 = 0U;
    {
        if ((0U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operation))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__expected 
                = ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand1) 
                   & (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand2));
        } else if ((1U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operation))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__expected 
                = ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand1) 
                   | (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand2));
        } else if (VL_LIKELY((2U == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operation)))) {
            __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__expected 
                = (0xffU & ((IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand1) 
                            + (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand2)));
        } else {
            VL_WRITEF("Skiped %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operation);
            goto __Vlabel16;
        }
        vlSelf->sim__DOT__op1 = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand1;
        vlSelf->sim__DOT__op2 = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand2;
        vlSelf->sim__DOT__opcode = __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operation;
        co_await vlSelf->__VdlySched.delay(0xaU, "bench.sv", 
                                           31);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if (((IData)(vlSelf->sim__DOT__result) == (IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__expected))) {
            VL_WRITEF("Passed %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operation);
            vlSelf->sim__DOT__bench0__DOT__test_passed 
                = ((IData)(1U) + vlSelf->sim__DOT__bench0__DOT__test_passed);
        } else {
            VL_WRITEF("Failed %3#, %3#, %1#\n\n",8,
                      __Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand1,
                      8,(IData)(__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operand2),
                      2,__Vtask_sim__DOT__bench0__DOT__alu_operation_check__3__operation);
            vlSelf->sim__DOT__bench0__DOT__test_failed 
                = ((IData)(1U) + vlSelf->sim__DOT__bench0__DOT__test_failed);
        }
        __Vlabel16: ;
    }
    VL_WRITEF("| Resume ::: Passed:%11d, Failed:%11d|\n\n",
              32,vlSelf->sim__DOT__bench0__DOT__test_passed,
              32,vlSelf->sim__DOT__bench0__DOT__test_failed);
    vlSelf->sim__DOT__bench0__DOT__unnamedblk1__DOT__i = 4U;
    VL_FINISH_MT("bench.sv", 66, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim___024root___dump_triggers__act(Vsim___024root* vlSelf);
#endif  // VL_DEBUG

void Vsim___024root___eval_triggers__act(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = vlSelf->__VdlySched.awaitingCurrentTime();
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsim___024root___dump_triggers__act(vlSelf);
    }
#endif
}
