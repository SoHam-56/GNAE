// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTB_gpnae.h for the primary calling header

#include "VTB_gpnae__pch.h"
#include "VTB_gpnae___024root.h"

VL_ATTR_COLD void VTB_gpnae___024root___eval_static__TOP(VTB_gpnae___024root* vlSelf);
VL_ATTR_COLD void VTB_gpnae___024root____Vm_traceActivitySetAll(VTB_gpnae___024root* vlSelf);

VL_ATTR_COLD void VTB_gpnae___024root___eval_static(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___eval_static\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VTB_gpnae___024root___eval_static__TOP(vlSelf);
    VTB_gpnae___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__TB_gpnae__DOT__clk__0 
        = vlSelfRef.TB_gpnae__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__TB_gpnae__DOT__rstn_i__0 
        = vlSelfRef.TB_gpnae__DOT__rstn_i;
    vlSelfRef.__Vtrigprevexpr___TOP__TB_gpnae__DOT__dut__DOT__selu_clk__0 
        = vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__TB_gpnae__DOT__dut__DOT__selu_inst__DOT____Vcellinp__fp32_down_inst__clk_i__0 
        = vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT____Vcellinp__fp32_down_inst__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__TB_gpnae__DOT__dut__DOT__mac_clk__0 
        = vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_reset_n__0 
        = vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_reset_n;
    vlSelfRef.__Vtrigprevexpr___TOP__TB_gpnae__DOT__dut__DOT__sigtan_clk__0 
        = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__TB_gpnae__DOT__idle_o__0 
        = vlSelfRef.TB_gpnae__DOT__idle_o;
}

VL_ATTR_COLD void VTB_gpnae___024root___eval_static__TOP(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___eval_static__TOP\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__signal_sigmoid[0U] = 0xc0a00000U;
    vlSelfRef.TB_gpnae__DOT__signal_sigmoid[1U] = 0xc094f72dU;
    vlSelfRef.TB_gpnae__DOT__signal_sigmoid[2U] = 0xc089ee59U;
    vlSelfRef.TB_gpnae__DOT__signal_sigmoid[3U] = 0xc07dcb09U;
    vlSelfRef.TB_gpnae__DOT__signal_sigmoid[4U] = 0xc067b961U;
    vlSelfRef.TB_gpnae__DOT__signal_sigmoid[5U] = 0xc051a7b9U;
    vlSelfRef.TB_gpnae__DOT__signal_sigmoid[6U] = 0xc03b9611U;
    vlSelfRef.TB_gpnae__DOT__signal_sigmoid[7U] = 0xc0258469U;
    vlSelfRef.TB_gpnae__DOT__signal_sigmoid[8U] = 0xc00f72c3U;
    vlSelfRef.TB_gpnae__DOT__signal_sigmoid[9U] = 0xbff2c235U;
    vlSelfRef.TB_gpnae__DOT__signal_sigmoid[0xaU] = 0xbfc69ee5U;
    vlSelfRef.TB_gpnae__DOT__signal_sigmoid[0xbU] = 0xbf9a7b97U;
    vlSelfRef.TB_gpnae__DOT__signal_sigmoid[0xcU] = 0xbf5cb08dU;
    vlSelfRef.TB_gpnae__DOT__signal_sigmoid[0xdU] = 0xbf0469efU;
    vlSelfRef.TB_gpnae__DOT__signal_sigmoid[0xeU] = 0xbe308d3dU;
    vlSelfRef.TB_gpnae__DOT__signal_sigmoid[0xfU] = 0x3e308d3dU;
    vlSelfRef.TB_gpnae__DOT__signal_sigmoid[0x10U] = 0x3f0469efU;
    vlSelfRef.TB_gpnae__DOT__signal_sigmoid[0x11U] = 0x3f5cb08dU;
    vlSelfRef.TB_gpnae__DOT__signal_sigmoid[0x12U] = 0x3f9a7b97U;
    vlSelfRef.TB_gpnae__DOT__signal_sigmoid[0x13U] = 0x3fc69ee5U;
    vlSelfRef.TB_gpnae__DOT__signal_sigmoid[0x14U] = 0x3ff2c235U;
    vlSelfRef.TB_gpnae__DOT__signal_sigmoid[0x15U] = 0x400f72c3U;
    vlSelfRef.TB_gpnae__DOT__signal_sigmoid[0x16U] = 0x40258469U;
    vlSelfRef.TB_gpnae__DOT__signal_sigmoid[0x17U] = 0x403b9611U;
    vlSelfRef.TB_gpnae__DOT__signal_sigmoid[0x18U] = 0x4051a7b9U;
    vlSelfRef.TB_gpnae__DOT__signal_sigmoid[0x19U] = 0x4067b961U;
    vlSelfRef.TB_gpnae__DOT__signal_sigmoid[0x1aU] = 0x407dcb09U;
    vlSelfRef.TB_gpnae__DOT__signal_sigmoid[0x1bU] = 0x4089ee59U;
    vlSelfRef.TB_gpnae__DOT__signal_sigmoid[0x1cU] = 0x4094f72dU;
    vlSelfRef.TB_gpnae__DOT__signal_sigmoid[0x1dU] = 0x40a00000U;
    vlSelfRef.TB_gpnae__DOT__signal_tanh[0U] = 0xc1200000U;
    vlSelfRef.TB_gpnae__DOT__signal_tanh[1U] = 0xc114f72dU;
    vlSelfRef.TB_gpnae__DOT__signal_tanh[2U] = 0xc109ee59U;
    vlSelfRef.TB_gpnae__DOT__signal_tanh[3U] = 0xc0fdcb09U;
    vlSelfRef.TB_gpnae__DOT__signal_tanh[4U] = 0xc0e7b961U;
    vlSelfRef.TB_gpnae__DOT__signal_tanh[5U] = 0xc0d1a7b9U;
    vlSelfRef.TB_gpnae__DOT__signal_tanh[6U] = 0xc0bb9611U;
    vlSelfRef.TB_gpnae__DOT__signal_tanh[7U] = 0xc0a58469U;
    vlSelfRef.TB_gpnae__DOT__signal_tanh[8U] = 0xc08f72c3U;
    vlSelfRef.TB_gpnae__DOT__signal_tanh[9U] = 0xc072c235U;
    vlSelfRef.TB_gpnae__DOT__signal_tanh[0xaU] = 0xc0469ee5U;
    vlSelfRef.TB_gpnae__DOT__signal_tanh[0xbU] = 0xc01a7b97U;
    vlSelfRef.TB_gpnae__DOT__signal_tanh[0xcU] = 0xbfdcb08dU;
    vlSelfRef.TB_gpnae__DOT__signal_tanh[0xdU] = 0xbf8469efU;
    vlSelfRef.TB_gpnae__DOT__signal_tanh[0xeU] = 0xbeb08d3dU;
    vlSelfRef.TB_gpnae__DOT__signal_tanh[0xfU] = 0x3eb08d3dU;
    vlSelfRef.TB_gpnae__DOT__signal_tanh[0x10U] = 0x3f8469efU;
    vlSelfRef.TB_gpnae__DOT__signal_tanh[0x11U] = 0x3fdcb08dU;
    vlSelfRef.TB_gpnae__DOT__signal_tanh[0x12U] = 0x401a7b97U;
    vlSelfRef.TB_gpnae__DOT__signal_tanh[0x13U] = 0x40469ee5U;
    vlSelfRef.TB_gpnae__DOT__signal_tanh[0x14U] = 0x4072c235U;
    vlSelfRef.TB_gpnae__DOT__signal_tanh[0x15U] = 0x408f72c3U;
    vlSelfRef.TB_gpnae__DOT__signal_tanh[0x16U] = 0x40a58469U;
    vlSelfRef.TB_gpnae__DOT__signal_tanh[0x17U] = 0x40bb9611U;
    vlSelfRef.TB_gpnae__DOT__signal_tanh[0x18U] = 0x40d1a7b9U;
    vlSelfRef.TB_gpnae__DOT__signal_tanh[0x19U] = 0x40e7b961U;
    vlSelfRef.TB_gpnae__DOT__signal_tanh[0x1aU] = 0x40fdcb09U;
    vlSelfRef.TB_gpnae__DOT__signal_tanh[0x1bU] = 0x4109ee59U;
    vlSelfRef.TB_gpnae__DOT__signal_tanh[0x1cU] = 0x4114f72dU;
    vlSelfRef.TB_gpnae__DOT__signal_tanh[0x1dU] = 0x41200000U;
}

VL_ATTR_COLD void VTB_gpnae___024root___eval_final(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___eval_final\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_gpnae___024root___dump_triggers__stl(VTB_gpnae___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VTB_gpnae___024root___eval_phase__stl(VTB_gpnae___024root* vlSelf);

VL_ATTR_COLD void VTB_gpnae___024root___eval_settle(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___eval_settle\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VTB_gpnae___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/admin/Desktop/SIENNA/GNAE/testbenches/TB_gpnae.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VTB_gpnae___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_gpnae___024root___dump_triggers__stl(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___dump_triggers__stl\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTB_gpnae___024root___eval_triggers__stl(VTB_gpnae___024root* vlSelf);
VL_ATTR_COLD void VTB_gpnae___024root___eval_stl(VTB_gpnae___024root* vlSelf);

VL_ATTR_COLD bool VTB_gpnae___024root___eval_phase__stl(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___eval_phase__stl\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VTB_gpnae___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VTB_gpnae___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_gpnae___024root___dump_triggers__act(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___dump_triggers__act\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge TB_gpnae.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge TB_gpnae.rstn_i)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge TB_gpnae.dut.selu_clk)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge TB_gpnae.dut.selu_inst.__Vcellinp__fp32_down_inst__clk_i)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge TB_gpnae.dut.mac_clk)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(negedge TB_gpnae.dut.mac_inst.datapath_reset_n)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @(posedge TB_gpnae.dut.sigtan_clk)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @( TB_gpnae.idle_o)\n");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_gpnae___024root___dump_triggers__nba(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___dump_triggers__nba\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge TB_gpnae.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge TB_gpnae.rstn_i)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge TB_gpnae.dut.selu_clk)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge TB_gpnae.dut.selu_inst.__Vcellinp__fp32_down_inst__clk_i)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge TB_gpnae.dut.mac_clk)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(negedge TB_gpnae.dut.mac_inst.datapath_reset_n)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @(posedge TB_gpnae.dut.sigtan_clk)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @( TB_gpnae.idle_o)\n");
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTB_gpnae___024root____Vm_traceActivitySetAll(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root____Vm_traceActivitySetAll\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x47U)) {
        vlSelfRef.__Vm_traceActivity[__Vilp1] = 1U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
}

VL_ATTR_COLD void VTB_gpnae___024root___ctor_var_reset(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___ctor_var_reset\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->TB_gpnae__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__rstn_i = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__signal_i = VL_RAND_RESET_I(32);
    vlSelf->TB_gpnae__DOT__wr_en_i = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__last_i = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__start_i = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__terms_i = VL_RAND_RESET_I(5);
    vlSelf->TB_gpnae__DOT__control_word_i = VL_RAND_RESET_I(2);
    vlSelf->TB_gpnae__DOT__idle_o = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__final_result_o = VL_RAND_RESET_I(32);
    vlSelf->TB_gpnae__DOT__done_o = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__processed_signals = VL_RAND_RESET_I(32);
    vlSelf->TB_gpnae__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->TB_gpnae__DOT__current_state = VL_RAND_RESET_I(2);
    vlSelf->TB_gpnae__DOT__num_sig = VL_RAND_RESET_I(5);
    vlSelf->TB_gpnae__DOT__buffer_write_start_cycle = VL_RAND_RESET_I(32);
    vlSelf->TB_gpnae__DOT__buffer_write_end_cycle = VL_RAND_RESET_I(32);
    vlSelf->TB_gpnae__DOT__processing_start_cycle = VL_RAND_RESET_I(32);
    vlSelf->TB_gpnae__DOT__processing_end_cycle = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TB_gpnae__DOT__cycles_per_input[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->TB_gpnae__DOT__total_buffer_write_cycles = VL_RAND_RESET_I(32);
    vlSelf->TB_gpnae__DOT__total_processing_cycles = VL_RAND_RESET_I(32);
    vlSelf->TB_gpnae__DOT__total_operation_cycles = VL_RAND_RESET_I(32);
    vlSelf->TB_gpnae__DOT__total_input_cycles = VL_RAND_RESET_I(32);
    vlSelf->TB_gpnae__DOT__avg_cycles_per_input = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 30; ++__Vi0) {
        vlSelf->TB_gpnae__DOT__signal_sigmoid[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 30; ++__Vi0) {
        vlSelf->TB_gpnae__DOT__signal_tanh[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->TB_gpnae__DOT__current_phase = 0;
    vlSelf->TB_gpnae__DOT__write_signal__Vstatic__unnamedblk2__DOT__start_cycle = VL_RAND_RESET_I(32);
    vlSelf->TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->TB_gpnae__DOT__wait_for_processing__Vstatic__unnamedblk4__DOT__processed = VL_RAND_RESET_I(32);
    vlSelf->TB_gpnae__DOT__wait_for_processing__Vstatic__unnamedblk4__DOT__last_done_cycle = VL_RAND_RESET_I(32);
    vlSelf->TB_gpnae__DOT__wait_for_processing__Vstatic__unnamedblk4__DOT__current_done_cycle = VL_RAND_RESET_I(32);
    vlSelf->TB_gpnae__DOT__dut__DOT__current_state = VL_RAND_RESET_I(3);
    vlSelf->TB_gpnae__DOT__dut__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->TB_gpnae__DOT__dut__DOT__rd_en_signal = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__fsm_rd_en = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_rd_en = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__selu_result = VL_RAND_RESET_I(32);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_result = VL_RAND_RESET_I(32);
    vlSelf->TB_gpnae__DOT__dut__DOT__done_selu = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__selu_enable = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_enable = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_enable = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__selu_clk = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_clk = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_clk = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__select_sigtan = VL_RAND_RESET_I(2);
    vlSelf->TB_gpnae__DOT__dut__DOT__selu_valid = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_valid = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__done_delay = VL_RAND_RESET_I(3);
    vlSelf->TB_gpnae__DOT__dut__DOT__fifo_data_registered = VL_RAND_RESET_I(32);
    vlSelf->TB_gpnae__DOT__dut__DOT__is_positive_selu = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__selu_input = VL_RAND_RESET_I(32);
    vlSelf->TB_gpnae__DOT__dut__DOT__selu_const = VL_RAND_RESET_I(32);
    vlSelf->TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status = VL_RAND_RESET_I(32);
    vlSelf->TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__wr_ptr = VL_RAND_RESET_I(5);
    vlSelf->TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__rd_ptr = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__FIFO__DOT__BRAM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__FIFO__DOT__ram_data_b = VL_RAND_RESET_I(32);
    vlSelf->TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__FIFO__DOT__doutb_reg = VL_RAND_RESET_I(32);
    vlSelf->TB_gpnae__DOT__dut__DOT__selu_inst__DOT__valid_multiply = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__selu_inst__DOT____Vcellinp__fp32_down_inst__valid_i = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__selu_inst__DOT____Vcellinp__fp32_down_inst__clk_i = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__selu_inst__DOT____Vcellinp__multiply_32_inst__A = VL_RAND_RESET_I(32);
    vlSelf->TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__zerocount = VL_RAND_RESET_I(5);
    vlSelf->TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__Sign = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__Exponent = VL_RAND_RESET_I(8);
    vlSelf->TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__Mantissa = VL_RAND_RESET_I(23);
    vlSelf->TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__comp = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__magcheck = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__carry = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__check = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__BigExp = VL_RAND_RESET_I(8);
    vlSelf->TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__SmallExp = VL_RAND_RESET_I(8);
    vlSelf->TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__DifferenceExp = VL_RAND_RESET_I(8);
    vlSelf->TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__BigMan = VL_RAND_RESET_I(24);
    vlSelf->TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__SmallMan = VL_RAND_RESET_I(24);
    vlSelf->TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__Temp_SmallMan = VL_RAND_RESET_I(24);
    vlSelf->TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__TempMan = VL_RAND_RESET_I(24);
    vlSelf->TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__valid_stage1 = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__valid_stage2 = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__valid_stage3 = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__valid_stage4 = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__valid_stage5 = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__valid_stage6 = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__A_sign = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__C_sign = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__A_Exp = VL_RAND_RESET_I(8);
    vlSelf->TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__C_Exp = VL_RAND_RESET_I(8);
    vlSelf->TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__A_Man = VL_RAND_RESET_I(23);
    vlSelf->TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__C_Man = VL_RAND_RESET_I(23);
    vlSelf->TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__stage_31__DOT__cnt1 = VL_RAND_RESET_I(4);
    vlSelf->TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__stage_31__DOT__cnt2 = VL_RAND_RESET_I(4);
    vlSelf->TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__stage_31__DOT__cnt3 = VL_RAND_RESET_I(4);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__coeff_data = VL_RAND_RESET_I(32);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__rd_en_coeff = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__load_result = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__dp_reset_o = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__add_valid = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__mul_valid = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_reset_n = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__coeff_rom_inst__DOT__ROM__DOT__ROM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__mul_in1 = VL_RAND_RESET_I(32);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__mul_in2 = VL_RAND_RESET_I(32);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__add_in1 = VL_RAND_RESET_I(32);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__add_in2 = VL_RAND_RESET_I(32);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__adder_result = VL_RAND_RESET_I(32);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__zerocount = VL_RAND_RESET_I(5);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__Sign = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__Exponent = VL_RAND_RESET_I(8);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__Mantissa = VL_RAND_RESET_I(23);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__comp = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__magcheck = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__carry = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__check = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__check_delayed = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__check_delayed_delayed = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__BigExp = VL_RAND_RESET_I(8);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__BigExp_delayed = VL_RAND_RESET_I(8);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__BigExp_delayed_delayed = VL_RAND_RESET_I(8);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__BigExp_delayed_delayed_delayed = VL_RAND_RESET_I(8);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__SmallExp = VL_RAND_RESET_I(8);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__DifferenceExp = VL_RAND_RESET_I(8);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__BigMan = VL_RAND_RESET_I(24);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__BigMan_delayed = VL_RAND_RESET_I(24);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__BigMan_delayed_delayed = VL_RAND_RESET_I(24);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__SmallMan = VL_RAND_RESET_I(24);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__SmallMan_delayed = VL_RAND_RESET_I(24);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__Temp_SmallMan = VL_RAND_RESET_I(24);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__TempMan = VL_RAND_RESET_I(24);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__valid_stage1 = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__valid_stage2 = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__valid_stage3 = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__valid_stage4 = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__valid_stage5 = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__valid_stage6 = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__A_sign = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__B_sign = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__sign_delayed = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__sign_delayed_delayed = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__sign_delayed_delayed_delayed = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__A_Exp = VL_RAND_RESET_I(8);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__B_Exp = VL_RAND_RESET_I(8);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__A_Man = VL_RAND_RESET_I(23);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__B_Man = VL_RAND_RESET_I(23);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__stage_31__DOT__cnt1 = VL_RAND_RESET_I(4);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__stage_31__DOT__cnt2 = VL_RAND_RESET_I(4);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__stage_31__DOT__cnt3 = VL_RAND_RESET_I(4);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__reload_o = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state = VL_RAND_RESET_I(4);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__next_state = VL_RAND_RESET_I(4);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__term_count = VL_RAND_RESET_I(5);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__term_count_next = VL_RAND_RESET_I(5);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__done_comb = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__done_shift_reg = VL_RAND_RESET_I(5);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__add_result = VL_RAND_RESET_I(32);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__mux_output = VL_RAND_RESET_I(32);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__mux_output_reg = VL_RAND_RESET_I(32);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__zerocount1 = VL_RAND_RESET_I(5);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__zerocount2 = VL_RAND_RESET_I(5);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Sign1 = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Sign2 = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Exponent1 = VL_RAND_RESET_I(8);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Exponent2 = VL_RAND_RESET_I(8);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Mantissa1 = VL_RAND_RESET_I(23);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Mantissa2 = VL_RAND_RESET_I(23);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__comp2 = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__magcheck2 = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__carry1 = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__carry2 = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__check1 = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__check2 = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__BigExp1 = VL_RAND_RESET_I(8);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__BigExp2 = VL_RAND_RESET_I(8);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__SmallExp1 = VL_RAND_RESET_I(8);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__SmallExp2 = VL_RAND_RESET_I(8);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__DifferenceExp1 = VL_RAND_RESET_I(8);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__DifferenceExp2 = VL_RAND_RESET_I(8);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__BigMan1 = VL_RAND_RESET_I(24);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__BigMan2 = VL_RAND_RESET_I(24);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__SmallMan1 = VL_RAND_RESET_I(24);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__SmallMan2 = VL_RAND_RESET_I(24);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Temp_SmallMan1 = VL_RAND_RESET_I(24);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Temp_SmallMan2 = VL_RAND_RESET_I(24);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__TempMan1 = VL_RAND_RESET_I(24);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__TempMan2 = VL_RAND_RESET_I(24);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__valid_stage1 = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__valid_stage2 = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__valid_stage3 = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__valid_stage4 = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__valid_stage5 = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__valid_stage6 = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__A_sign = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__C1_sign = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__C2_sign = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__sign1 = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__sign2 = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__A_Exp = VL_RAND_RESET_I(8);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__C2_Exp = VL_RAND_RESET_I(8);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__A_Man = VL_RAND_RESET_I(23);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__C2_Man = VL_RAND_RESET_I(23);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__stage_31_1__DOT__cnt1 = VL_RAND_RESET_I(4);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__stage_31_1__DOT__cnt2 = VL_RAND_RESET_I(4);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__stage_31_1__DOT__cnt3 = VL_RAND_RESET_I(4);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__stage_31_2__DOT__cnt1 = VL_RAND_RESET_I(4);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__stage_31_2__DOT__cnt2 = VL_RAND_RESET_I(4);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__stage_31_2__DOT__cnt3 = VL_RAND_RESET_I(4);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__A_Mantissa = VL_RAND_RESET_I(24);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__B_Mantissa = VL_RAND_RESET_I(24);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__A_Exponent = VL_RAND_RESET_I(8);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__B_Exponent = VL_RAND_RESET_I(8);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__sign_A = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__sign_B = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__Temp_Exponent = VL_RAND_RESET_I(8);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__Temp_Mantissa = VL_RAND_RESET_I(24);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__intermediateMan = VL_RAND_RESET_I(23);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__intermediateExp = VL_RAND_RESET_I(8);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__intermediateSign = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 26; ++__Vi0) {
        vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__dbz = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__div_done = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__capture_valid = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__A_Exponent_reg = VL_RAND_RESET_I(8);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__B_Exponent_reg = VL_RAND_RESET_I(8);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__lowest_valid = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__second_valid = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__third_valid = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__final_valid = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__lowest_diff = VL_RAND_RESET_I(3);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__second_diff = VL_RAND_RESET_I(3);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__third_diff = VL_RAND_RESET_I(3);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__final_diff = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 24; ++__Vi0) {
        vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 24; ++__Vi0) {
        vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0 = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0 = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0 = VL_RAND_RESET_I(8);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__ovf = VL_RAND_RESET_I(1);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__b1 = VL_RAND_RESET_I(24);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__quo = VL_RAND_RESET_I(24);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__quo_next = VL_RAND_RESET_I(24);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__acc = VL_RAND_RESET_I(25);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__acc_next = VL_RAND_RESET_I(25);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT____Vconcswap_1_h526a3198__0 = VL_RAND_RESET_I(25);
    vlSelf->TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT____Vconcswap_1_h4878d48b__0 = VL_RAND_RESET_I(24);
    vlSelf->__Vdly__TB_gpnae__DOT__current_phase = 0;
    vlSelf->__Vdly__TB_gpnae__DOT__processed_signals = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__TB_gpnae__DOT__dut__DOT__is_positive_selu = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__TB_gpnae__DOT__dut__DOT__done_delay = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__TB_gpnae__DOT__dut__DOT__selu_inst__DOT__valid_multiply = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__TB_gpnae__DOT__dut__DOT__mac_result = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__done_shift_reg = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__FIFO__DOT__BRAM__v0 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyDim0__TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__FIFO__DOT__BRAM__v0 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__FIFO__DOT__BRAM__v0 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v0 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v0 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v1 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v1 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v2 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v2 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v3 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v3 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v4 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v4 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v5 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v5 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v6 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v6 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v7 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v7 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v8 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v8 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v9 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v9 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v10 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v10 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v11 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v11 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v12 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v12 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v13 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v13 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v14 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v14 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v15 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v15 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v16 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v16 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v17 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v17 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v18 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v18 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v19 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v19 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v20 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v20 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v21 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v21 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v22 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v22 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v23 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v23 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v24 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v24 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v25 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v25 = 0;
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v26 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v0 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v1 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v1 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v2 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v2 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v3 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v3 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v4 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v4 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v5 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v5 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v6 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v6 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v7 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v7 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v8 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v8 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v9 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v9 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v10 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v10 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v11 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v11 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v12 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v12 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v13 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v13 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v14 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v14 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v15 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v15 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v16 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v16 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v17 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v17 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v18 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v18 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v19 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v19 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v20 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v20 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v21 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v21 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v22 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v22 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v23 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v23 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v0 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v0 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v1 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v1 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v2 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v2 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v3 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v3 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v4 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v4 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v5 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v5 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v6 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v6 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v7 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v7 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v8 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v8 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v9 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v9 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v10 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v10 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v11 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v11 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v12 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v12 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v13 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v13 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v14 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v14 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v15 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v15 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v16 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v16 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v17 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v17 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v18 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v18 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v19 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v19 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v20 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v20 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v21 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v21 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v22 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v22 = 0;
    vlSelf->__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v23 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v23 = 0;
    vlSelf->__Vtrigprevexpr___TOP__TB_gpnae__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__TB_gpnae__DOT__rstn_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__TB_gpnae__DOT__dut__DOT__selu_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__TB_gpnae__DOT__dut__DOT__selu_inst__DOT____Vcellinp__fp32_down_inst__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__TB_gpnae__DOT__dut__DOT__mac_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_reset_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__TB_gpnae__DOT__dut__DOT__sigtan_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__TB_gpnae__DOT__idle_o__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 72; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
