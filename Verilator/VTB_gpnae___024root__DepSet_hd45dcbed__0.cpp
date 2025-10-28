// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTB_gpnae.h for the primary calling header

#include "VTB_gpnae__pch.h"
#include "VTB_gpnae___024root.h"

VL_INLINE_OPT VlCoroutine VTB_gpnae___024root___eval_initial__TOP__Vtiming__0(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___eval_initial__TOP__Vtiming__0\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vtask_TB_gpnae__DOT__perform_test__0__test_control_word;
    __Vtask_TB_gpnae__DOT__perform_test__0__test_control_word = 0;
    std::string __Vtask_TB_gpnae__DOT__perform_test__0__test_name;
    IData/*31:0*/ __Vtask_TB_gpnae__DOT__write_signal__2__sig_data;
    __Vtask_TB_gpnae__DOT__write_signal__2__sig_data = 0;
    CData/*0:0*/ __Vtask_TB_gpnae__DOT__write_signal__2__last;
    __Vtask_TB_gpnae__DOT__write_signal__2__last = 0;
    IData/*31:0*/ __Vtask_TB_gpnae__DOT__write_signal__2__signal_index;
    __Vtask_TB_gpnae__DOT__write_signal__2__signal_index = 0;
    IData/*31:0*/ __Vtask_TB_gpnae__DOT__wait_for_processing__3__signals_to_process;
    __Vtask_TB_gpnae__DOT__wait_for_processing__3__signals_to_process = 0;
    CData/*1:0*/ __Vtask_TB_gpnae__DOT__perform_test__4__test_control_word;
    __Vtask_TB_gpnae__DOT__perform_test__4__test_control_word = 0;
    std::string __Vtask_TB_gpnae__DOT__perform_test__4__test_name;
    IData/*31:0*/ __Vtask_TB_gpnae__DOT__reset_sequence__5__unnamedblk1__DOT__i;
    __Vtask_TB_gpnae__DOT__reset_sequence__5__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vtask_TB_gpnae__DOT__write_signal__6__sig_data;
    __Vtask_TB_gpnae__DOT__write_signal__6__sig_data = 0;
    CData/*0:0*/ __Vtask_TB_gpnae__DOT__write_signal__6__last;
    __Vtask_TB_gpnae__DOT__write_signal__6__last = 0;
    IData/*31:0*/ __Vtask_TB_gpnae__DOT__write_signal__6__signal_index;
    __Vtask_TB_gpnae__DOT__write_signal__6__signal_index = 0;
    IData/*31:0*/ __Vtask_TB_gpnae__DOT__wait_for_processing__7__signals_to_process;
    __Vtask_TB_gpnae__DOT__wait_for_processing__7__signals_to_process = 0;
    CData/*1:0*/ __Vtask_TB_gpnae__DOT__perform_test__8__test_control_word;
    __Vtask_TB_gpnae__DOT__perform_test__8__test_control_word = 0;
    std::string __Vtask_TB_gpnae__DOT__perform_test__8__test_name;
    IData/*31:0*/ __Vtask_TB_gpnae__DOT__reset_sequence__9__unnamedblk1__DOT__i;
    __Vtask_TB_gpnae__DOT__reset_sequence__9__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vtask_TB_gpnae__DOT__write_signal__10__sig_data;
    __Vtask_TB_gpnae__DOT__write_signal__10__sig_data = 0;
    CData/*0:0*/ __Vtask_TB_gpnae__DOT__write_signal__10__last;
    __Vtask_TB_gpnae__DOT__write_signal__10__last = 0;
    IData/*31:0*/ __Vtask_TB_gpnae__DOT__write_signal__10__signal_index;
    __Vtask_TB_gpnae__DOT__write_signal__10__signal_index = 0;
    IData/*31:0*/ __Vtask_TB_gpnae__DOT__wait_for_processing__11__signals_to_process;
    __Vtask_TB_gpnae__DOT__wait_for_processing__11__signals_to_process = 0;
    // Body
    vlSelfRef.TB_gpnae__DOT__clk = 0U;
    vlSelfRef.TB_gpnae__DOT__processed_signals = 0U;
    vlSelfRef.TB_gpnae__DOT__current_phase = 0U;
    vlSelfRef.TB_gpnae__DOT__terms_i = 0x1eU;
    vlSelfRef.TB_gpnae__DOT__num_sig = 0x1eU;
    __Vtask_TB_gpnae__DOT__perform_test__0__test_name = 
        std::string{"SELU"};
    __Vtask_TB_gpnae__DOT__perform_test__0__test_control_word = 1U;
    VL_WRITEF_NX("\nStarting SELU test\n",0);
    vlSelfRef.TB_gpnae__DOT__rstn_i = 0U;
    vlSelfRef.TB_gpnae__DOT__wr_en_i = 0U;
    vlSelfRef.TB_gpnae__DOT__last_i = 0U;
    vlSelfRef.TB_gpnae__DOT__start_i = 0U;
    vlSelfRef.TB_gpnae__DOT__control_word_i = 0U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0U] = 0U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[1U] = 0U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[2U] = 0U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[3U] = 0U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[4U] = 0U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[5U] = 0U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[6U] = 0U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[7U] = 0U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[8U] = 0U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[9U] = 0U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0xaU] = 0U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0xbU] = 0U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0xcU] = 0U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0xdU] = 0U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0xeU] = 0U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0xfU] = 0U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x10U] = 0U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x11U] = 0U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x12U] = 0U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x13U] = 0U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x14U] = 0U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x15U] = 0U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x16U] = 0U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x17U] = 0U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x18U] = 0U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x19U] = 0U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x1aU] = 0U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x1bU] = 0U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x1cU] = 0U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x1dU] = 0U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x1eU] = 0U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x1fU] = 0U;
    vlSelfRef.TB_gpnae__DOT__total_buffer_write_cycles = 0U;
    vlSelfRef.TB_gpnae__DOT__total_processing_cycles = 0U;
    vlSelfRef.TB_gpnae__DOT__total_operation_cycles = 0U;
    vlSelfRef.TB_gpnae__DOT__total_input_cycles = 0U;
    co_await vlSelfRef.__VtrigSched_h322a045f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_gpnae.clk)", 
                                                         "/home/admin/Desktop/SIENNA/GNAE/testbenches/TB_gpnae.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h322a045f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_gpnae.clk)", 
                                                         "/home/admin/Desktop/SIENNA/GNAE/testbenches/TB_gpnae.sv", 
                                                         112);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_gpnae__DOT__rstn_i = 1U;
    co_await vlSelfRef.__VtrigSched_h322a045f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_gpnae.clk)", 
                                                         "/home/admin/Desktop/SIENNA/GNAE/testbenches/TB_gpnae.sv", 
                                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_gpnae__DOT__control_word_i = __Vtask_TB_gpnae__DOT__perform_test__0__test_control_word;
    vlSelfRef.TB_gpnae__DOT__buffer_write_start_cycle 
        = vlSelfRef.TB_gpnae__DOT__cycle_counter;
    vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i = 0U;
    while ((vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i 
            < (IData)(vlSelfRef.TB_gpnae__DOT__num_sig))) {
        __Vtask_TB_gpnae__DOT__write_signal__2__signal_index 
            = vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i;
        __Vtask_TB_gpnae__DOT__write_signal__2__last 
            = (vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i 
               == ((IData)(vlSelfRef.TB_gpnae__DOT__num_sig) 
                   - (IData)(1U)));
        __Vtask_TB_gpnae__DOT__write_signal__2__sig_data 
            = ((3U == (IData)(__Vtask_TB_gpnae__DOT__perform_test__0__test_control_word))
                ? ((0x1dU >= (0x1fU & vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i))
                    ? vlSelfRef.TB_gpnae__DOT__signal_tanh
                   [(0x1fU & vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i)]
                    : 0U) : ((0x1dU >= (0x1fU & vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i))
                              ? vlSelfRef.TB_gpnae__DOT__signal_sigmoid
                             [(0x1fU & vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i)]
                              : 0U));
        while ((1U & (~ (IData)(vlSelfRef.TB_gpnae__DOT__idle_o)))) {
            co_await vlSelfRef.__VtrigSched_h89661d45__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( TB_gpnae.idle_o)", 
                                                                 "/home/admin/Desktop/SIENNA/GNAE/testbenches/TB_gpnae.sv", 
                                                                 126);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        vlSelfRef.TB_gpnae__DOT__write_signal__Vstatic__unnamedblk2__DOT__start_cycle 
            = vlSelfRef.TB_gpnae__DOT__cycle_counter;
        co_await vlSelfRef.__VtrigSched_h322a045f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_gpnae.clk)", 
                                                             "/home/admin/Desktop/SIENNA/GNAE/testbenches/TB_gpnae.sv", 
                                                             129);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.TB_gpnae__DOT__signal_i = __Vtask_TB_gpnae__DOT__write_signal__2__sig_data;
        vlSelfRef.TB_gpnae__DOT__wr_en_i = 1U;
        co_await vlSelfRef.__VtrigSched_h322a045f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_gpnae.clk)", 
                                                             "/home/admin/Desktop/SIENNA/GNAE/testbenches/TB_gpnae.sv", 
                                                             132);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.TB_gpnae__DOT__wr_en_i = 0U;
        co_await vlSelfRef.__VtrigSched_h322a045f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_gpnae.clk)", 
                                                             "/home/admin/Desktop/SIENNA/GNAE/testbenches/TB_gpnae.sv", 
                                                             134);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.TB_gpnae__DOT__last_i = __Vtask_TB_gpnae__DOT__write_signal__2__last;
        vlSelfRef.TB_gpnae__DOT__start_i = __Vtask_TB_gpnae__DOT__write_signal__2__last;
        co_await vlSelfRef.__VtrigSched_h322a045f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_gpnae.clk)", 
                                                             "/home/admin/Desktop/SIENNA/GNAE/testbenches/TB_gpnae.sv", 
                                                             137);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.TB_gpnae__DOT__last_i = 0U;
        vlSelfRef.TB_gpnae__DOT__cycles_per_input[(0x1fU 
                                                   & __Vtask_TB_gpnae__DOT__write_signal__2__signal_index)] 
            = (vlSelfRef.TB_gpnae__DOT__cycle_counter 
               - vlSelfRef.TB_gpnae__DOT__write_signal__Vstatic__unnamedblk2__DOT__start_cycle);
        VL_WRITEF_NX("Signal %0d: Took %0d cycles to write\n",0,
                     32,__Vtask_TB_gpnae__DOT__write_signal__2__signal_index,
                     32,vlSelfRef.TB_gpnae__DOT__cycles_per_input
                     [(0x1fU & __Vtask_TB_gpnae__DOT__write_signal__2__signal_index)]);
        vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i 
            = ((IData)(1U) + vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i);
    }
    vlSelfRef.TB_gpnae__DOT__buffer_write_end_cycle 
        = vlSelfRef.TB_gpnae__DOT__cycle_counter;
    vlSelfRef.TB_gpnae__DOT__total_buffer_write_cycles 
        = (vlSelfRef.TB_gpnae__DOT__buffer_write_end_cycle 
           - vlSelfRef.TB_gpnae__DOT__buffer_write_start_cycle);
    VL_WRITEF_NX("Buffer writing completed in %0d cycles\n",0,
                 32,vlSelfRef.TB_gpnae__DOT__total_buffer_write_cycles);
    vlSelfRef.TB_gpnae__DOT__processing_start_cycle 
        = vlSelfRef.TB_gpnae__DOT__cycle_counter;
    __Vtask_TB_gpnae__DOT__wait_for_processing__3__signals_to_process 
        = vlSelfRef.TB_gpnae__DOT__num_sig;
    vlSelfRef.TB_gpnae__DOT__wait_for_processing__Vstatic__unnamedblk4__DOT__processed = 0U;
    vlSelfRef.TB_gpnae__DOT__wait_for_processing__Vstatic__unnamedblk4__DOT__last_done_cycle 
        = vlSelfRef.TB_gpnae__DOT__cycle_counter;
    while (VL_LTS_III(32, vlSelfRef.TB_gpnae__DOT__wait_for_processing__Vstatic__unnamedblk4__DOT__processed, __Vtask_TB_gpnae__DOT__wait_for_processing__3__signals_to_process)) {
        co_await vlSelfRef.__VtrigSched_h322a045f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_gpnae.clk)", 
                                                             "/home/admin/Desktop/SIENNA/GNAE/testbenches/TB_gpnae.sv", 
                                                             205);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if (VL_UNLIKELY((vlSelfRef.TB_gpnae__DOT__done_o))) {
            vlSelfRef.TB_gpnae__DOT__wait_for_processing__Vstatic__unnamedblk4__DOT__processed 
                = ((IData)(1U) + vlSelfRef.TB_gpnae__DOT__wait_for_processing__Vstatic__unnamedblk4__DOT__processed);
            vlSelfRef.TB_gpnae__DOT__wait_for_processing__Vstatic__unnamedblk4__DOT__current_done_cycle 
                = vlSelfRef.TB_gpnae__DOT__cycle_counter;
            VL_WRITEF_NX("Time=%0t: Processed=%0d, Done_o=%0b, Took %0d cycles since last done\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,32,vlSelfRef.TB_gpnae__DOT__wait_for_processing__Vstatic__unnamedblk4__DOT__processed,
                         1,(IData)(vlSelfRef.TB_gpnae__DOT__done_o),
                         32,(vlSelfRef.TB_gpnae__DOT__wait_for_processing__Vstatic__unnamedblk4__DOT__current_done_cycle 
                             - vlSelfRef.TB_gpnae__DOT__wait_for_processing__Vstatic__unnamedblk4__DOT__last_done_cycle));
            vlSelfRef.TB_gpnae__DOT__wait_for_processing__Vstatic__unnamedblk4__DOT__last_done_cycle 
                = vlSelfRef.TB_gpnae__DOT__wait_for_processing__Vstatic__unnamedblk4__DOT__current_done_cycle;
        }
    }
    vlSelfRef.TB_gpnae__DOT__processing_end_cycle = vlSelfRef.TB_gpnae__DOT__cycle_counter;
    vlSelfRef.TB_gpnae__DOT__total_processing_cycles 
        = (vlSelfRef.TB_gpnae__DOT__processing_end_cycle 
           - vlSelfRef.TB_gpnae__DOT__processing_start_cycle);
    vlSelfRef.TB_gpnae__DOT__total_operation_cycles 
        = (vlSelfRef.TB_gpnae__DOT__processing_end_cycle 
           - vlSelfRef.TB_gpnae__DOT__buffer_write_start_cycle);
    vlSelfRef.TB_gpnae__DOT__total_input_cycles = 0U;
    vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i = 0U;
    while ((vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i 
            < (IData)(vlSelfRef.TB_gpnae__DOT__num_sig))) {
        vlSelfRef.TB_gpnae__DOT__total_input_cycles 
            = (vlSelfRef.TB_gpnae__DOT__total_input_cycles 
               + vlSelfRef.TB_gpnae__DOT__cycles_per_input
               [(0x1fU & vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i)]);
        vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i 
            = ((IData)(1U) + vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i);
    }
    vlSelfRef.TB_gpnae__DOT__avg_cycles_per_input = 
        VL_DIV_III(32, vlSelfRef.TB_gpnae__DOT__total_input_cycles, (IData)(vlSelfRef.TB_gpnae__DOT__num_sig));
    VL_WRITEF_NX("%@ test completed\nBuffer write time: %0d cycles\nProcessing time (without buffer write): %0d cycles\nTotal operation time (with buffer write): %0d cycles\nAverage cycles per input: %0d cycles\n",0,
                 -1,&(__Vtask_TB_gpnae__DOT__perform_test__0__test_name),
                 32,vlSelfRef.TB_gpnae__DOT__total_buffer_write_cycles,
                 32,vlSelfRef.TB_gpnae__DOT__total_processing_cycles,
                 32,vlSelfRef.TB_gpnae__DOT__total_operation_cycles,
                 32,vlSelfRef.TB_gpnae__DOT__avg_cycles_per_input);
    __Vtask_TB_gpnae__DOT__perform_test__4__test_name = 
        std::string{"Sigmoid"};
    __Vtask_TB_gpnae__DOT__perform_test__4__test_control_word = 2U;
    VL_WRITEF_NX("\nStarting %@ test\n",0,-1,&(__Vtask_TB_gpnae__DOT__perform_test__4__test_name));
    __Vtask_TB_gpnae__DOT__reset_sequence__5__unnamedblk1__DOT__i = 0;
    vlSelfRef.TB_gpnae__DOT__rstn_i = 0U;
    vlSelfRef.TB_gpnae__DOT__wr_en_i = 0U;
    vlSelfRef.TB_gpnae__DOT__last_i = 0U;
    vlSelfRef.TB_gpnae__DOT__start_i = 0U;
    vlSelfRef.TB_gpnae__DOT__control_word_i = 0U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0U] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__5__unnamedblk1__DOT__i = 1U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[1U] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__5__unnamedblk1__DOT__i = 2U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[2U] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__5__unnamedblk1__DOT__i = 3U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[3U] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__5__unnamedblk1__DOT__i = 4U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[4U] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__5__unnamedblk1__DOT__i = 5U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[5U] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__5__unnamedblk1__DOT__i = 6U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[6U] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__5__unnamedblk1__DOT__i = 7U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[7U] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__5__unnamedblk1__DOT__i = 8U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[8U] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__5__unnamedblk1__DOT__i = 9U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[9U] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__5__unnamedblk1__DOT__i = 0xaU;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0xaU] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__5__unnamedblk1__DOT__i = 0xbU;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0xbU] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__5__unnamedblk1__DOT__i = 0xcU;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0xcU] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__5__unnamedblk1__DOT__i = 0xdU;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0xdU] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__5__unnamedblk1__DOT__i = 0xeU;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0xeU] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__5__unnamedblk1__DOT__i = 0xfU;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0xfU] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__5__unnamedblk1__DOT__i = 0x10U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x10U] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__5__unnamedblk1__DOT__i = 0x11U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x11U] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__5__unnamedblk1__DOT__i = 0x12U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x12U] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__5__unnamedblk1__DOT__i = 0x13U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x13U] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__5__unnamedblk1__DOT__i = 0x14U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x14U] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__5__unnamedblk1__DOT__i = 0x15U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x15U] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__5__unnamedblk1__DOT__i = 0x16U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x16U] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__5__unnamedblk1__DOT__i = 0x17U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x17U] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__5__unnamedblk1__DOT__i = 0x18U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x18U] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__5__unnamedblk1__DOT__i = 0x19U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x19U] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__5__unnamedblk1__DOT__i = 0x1aU;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x1aU] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__5__unnamedblk1__DOT__i = 0x1bU;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x1bU] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__5__unnamedblk1__DOT__i = 0x1cU;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x1cU] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__5__unnamedblk1__DOT__i = 0x1dU;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x1dU] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__5__unnamedblk1__DOT__i = 0x1eU;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x1eU] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__5__unnamedblk1__DOT__i = 0x1fU;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x1fU] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__5__unnamedblk1__DOT__i = 0x20U;
    vlSelfRef.TB_gpnae__DOT__total_buffer_write_cycles = 0U;
    vlSelfRef.TB_gpnae__DOT__total_processing_cycles = 0U;
    vlSelfRef.TB_gpnae__DOT__total_operation_cycles = 0U;
    vlSelfRef.TB_gpnae__DOT__total_input_cycles = 0U;
    co_await vlSelfRef.__VtrigSched_h322a045f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_gpnae.clk)", 
                                                         "/home/admin/Desktop/SIENNA/GNAE/testbenches/TB_gpnae.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h322a045f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_gpnae.clk)", 
                                                         "/home/admin/Desktop/SIENNA/GNAE/testbenches/TB_gpnae.sv", 
                                                         112);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_gpnae__DOT__rstn_i = 1U;
    co_await vlSelfRef.__VtrigSched_h322a045f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_gpnae.clk)", 
                                                         "/home/admin/Desktop/SIENNA/GNAE/testbenches/TB_gpnae.sv", 
                                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_gpnae__DOT__control_word_i = __Vtask_TB_gpnae__DOT__perform_test__4__test_control_word;
    vlSelfRef.TB_gpnae__DOT__buffer_write_start_cycle 
        = vlSelfRef.TB_gpnae__DOT__cycle_counter;
    vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i = 0U;
    while ((vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i 
            < (IData)(vlSelfRef.TB_gpnae__DOT__num_sig))) {
        __Vtask_TB_gpnae__DOT__write_signal__6__signal_index 
            = vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i;
        __Vtask_TB_gpnae__DOT__write_signal__6__last 
            = (vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i 
               == ((IData)(vlSelfRef.TB_gpnae__DOT__num_sig) 
                   - (IData)(1U)));
        __Vtask_TB_gpnae__DOT__write_signal__6__sig_data 
            = ((3U == (IData)(__Vtask_TB_gpnae__DOT__perform_test__4__test_control_word))
                ? ((0x1dU >= (0x1fU & vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i))
                    ? vlSelfRef.TB_gpnae__DOT__signal_tanh
                   [(0x1fU & vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i)]
                    : 0U) : ((0x1dU >= (0x1fU & vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i))
                              ? vlSelfRef.TB_gpnae__DOT__signal_sigmoid
                             [(0x1fU & vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i)]
                              : 0U));
        while ((1U & (~ (IData)(vlSelfRef.TB_gpnae__DOT__idle_o)))) {
            co_await vlSelfRef.__VtrigSched_h89661d45__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( TB_gpnae.idle_o)", 
                                                                 "/home/admin/Desktop/SIENNA/GNAE/testbenches/TB_gpnae.sv", 
                                                                 126);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        vlSelfRef.TB_gpnae__DOT__write_signal__Vstatic__unnamedblk2__DOT__start_cycle 
            = vlSelfRef.TB_gpnae__DOT__cycle_counter;
        co_await vlSelfRef.__VtrigSched_h322a045f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_gpnae.clk)", 
                                                             "/home/admin/Desktop/SIENNA/GNAE/testbenches/TB_gpnae.sv", 
                                                             129);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.TB_gpnae__DOT__signal_i = __Vtask_TB_gpnae__DOT__write_signal__6__sig_data;
        vlSelfRef.TB_gpnae__DOT__wr_en_i = 1U;
        co_await vlSelfRef.__VtrigSched_h322a045f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_gpnae.clk)", 
                                                             "/home/admin/Desktop/SIENNA/GNAE/testbenches/TB_gpnae.sv", 
                                                             132);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.TB_gpnae__DOT__wr_en_i = 0U;
        co_await vlSelfRef.__VtrigSched_h322a045f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_gpnae.clk)", 
                                                             "/home/admin/Desktop/SIENNA/GNAE/testbenches/TB_gpnae.sv", 
                                                             134);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.TB_gpnae__DOT__last_i = __Vtask_TB_gpnae__DOT__write_signal__6__last;
        vlSelfRef.TB_gpnae__DOT__start_i = __Vtask_TB_gpnae__DOT__write_signal__6__last;
        co_await vlSelfRef.__VtrigSched_h322a045f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_gpnae.clk)", 
                                                             "/home/admin/Desktop/SIENNA/GNAE/testbenches/TB_gpnae.sv", 
                                                             137);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.TB_gpnae__DOT__last_i = 0U;
        vlSelfRef.TB_gpnae__DOT__cycles_per_input[(0x1fU 
                                                   & __Vtask_TB_gpnae__DOT__write_signal__6__signal_index)] 
            = (vlSelfRef.TB_gpnae__DOT__cycle_counter 
               - vlSelfRef.TB_gpnae__DOT__write_signal__Vstatic__unnamedblk2__DOT__start_cycle);
        VL_WRITEF_NX("Signal %0d: Took %0d cycles to write\n",0,
                     32,__Vtask_TB_gpnae__DOT__write_signal__6__signal_index,
                     32,vlSelfRef.TB_gpnae__DOT__cycles_per_input
                     [(0x1fU & __Vtask_TB_gpnae__DOT__write_signal__6__signal_index)]);
        vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i 
            = ((IData)(1U) + vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i);
    }
    vlSelfRef.TB_gpnae__DOT__buffer_write_end_cycle 
        = vlSelfRef.TB_gpnae__DOT__cycle_counter;
    vlSelfRef.TB_gpnae__DOT__total_buffer_write_cycles 
        = (vlSelfRef.TB_gpnae__DOT__buffer_write_end_cycle 
           - vlSelfRef.TB_gpnae__DOT__buffer_write_start_cycle);
    VL_WRITEF_NX("Buffer writing completed in %0d cycles\n",0,
                 32,vlSelfRef.TB_gpnae__DOT__total_buffer_write_cycles);
    vlSelfRef.TB_gpnae__DOT__processing_start_cycle 
        = vlSelfRef.TB_gpnae__DOT__cycle_counter;
    __Vtask_TB_gpnae__DOT__wait_for_processing__7__signals_to_process 
        = vlSelfRef.TB_gpnae__DOT__num_sig;
    vlSelfRef.TB_gpnae__DOT__wait_for_processing__Vstatic__unnamedblk4__DOT__processed = 0U;
    vlSelfRef.TB_gpnae__DOT__wait_for_processing__Vstatic__unnamedblk4__DOT__last_done_cycle 
        = vlSelfRef.TB_gpnae__DOT__cycle_counter;
    while (VL_LTS_III(32, vlSelfRef.TB_gpnae__DOT__wait_for_processing__Vstatic__unnamedblk4__DOT__processed, __Vtask_TB_gpnae__DOT__wait_for_processing__7__signals_to_process)) {
        co_await vlSelfRef.__VtrigSched_h322a045f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_gpnae.clk)", 
                                                             "/home/admin/Desktop/SIENNA/GNAE/testbenches/TB_gpnae.sv", 
                                                             205);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if (VL_UNLIKELY((vlSelfRef.TB_gpnae__DOT__done_o))) {
            vlSelfRef.TB_gpnae__DOT__wait_for_processing__Vstatic__unnamedblk4__DOT__processed 
                = ((IData)(1U) + vlSelfRef.TB_gpnae__DOT__wait_for_processing__Vstatic__unnamedblk4__DOT__processed);
            vlSelfRef.TB_gpnae__DOT__wait_for_processing__Vstatic__unnamedblk4__DOT__current_done_cycle 
                = vlSelfRef.TB_gpnae__DOT__cycle_counter;
            VL_WRITEF_NX("Time=%0t: Processed=%0d, Done_o=%0b, Took %0d cycles since last done\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,32,vlSelfRef.TB_gpnae__DOT__wait_for_processing__Vstatic__unnamedblk4__DOT__processed,
                         1,(IData)(vlSelfRef.TB_gpnae__DOT__done_o),
                         32,(vlSelfRef.TB_gpnae__DOT__wait_for_processing__Vstatic__unnamedblk4__DOT__current_done_cycle 
                             - vlSelfRef.TB_gpnae__DOT__wait_for_processing__Vstatic__unnamedblk4__DOT__last_done_cycle));
            vlSelfRef.TB_gpnae__DOT__wait_for_processing__Vstatic__unnamedblk4__DOT__last_done_cycle 
                = vlSelfRef.TB_gpnae__DOT__wait_for_processing__Vstatic__unnamedblk4__DOT__current_done_cycle;
        }
    }
    vlSelfRef.TB_gpnae__DOT__processing_end_cycle = vlSelfRef.TB_gpnae__DOT__cycle_counter;
    vlSelfRef.TB_gpnae__DOT__total_processing_cycles 
        = (vlSelfRef.TB_gpnae__DOT__processing_end_cycle 
           - vlSelfRef.TB_gpnae__DOT__processing_start_cycle);
    vlSelfRef.TB_gpnae__DOT__total_operation_cycles 
        = (vlSelfRef.TB_gpnae__DOT__processing_end_cycle 
           - vlSelfRef.TB_gpnae__DOT__buffer_write_start_cycle);
    vlSelfRef.TB_gpnae__DOT__total_input_cycles = 0U;
    vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i = 0U;
    while ((vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i 
            < (IData)(vlSelfRef.TB_gpnae__DOT__num_sig))) {
        vlSelfRef.TB_gpnae__DOT__total_input_cycles 
            = (vlSelfRef.TB_gpnae__DOT__total_input_cycles 
               + vlSelfRef.TB_gpnae__DOT__cycles_per_input
               [(0x1fU & vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i)]);
        vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i 
            = ((IData)(1U) + vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i);
    }
    vlSelfRef.TB_gpnae__DOT__avg_cycles_per_input = 
        VL_DIV_III(32, vlSelfRef.TB_gpnae__DOT__total_input_cycles, (IData)(vlSelfRef.TB_gpnae__DOT__num_sig));
    VL_WRITEF_NX("%@ test completed\nBuffer write time: %0d cycles\nProcessing time (without buffer write): %0d cycles\nTotal operation time (with buffer write): %0d cycles\nAverage cycles per input: %0d cycles\n",0,
                 -1,&(__Vtask_TB_gpnae__DOT__perform_test__4__test_name),
                 32,vlSelfRef.TB_gpnae__DOT__total_buffer_write_cycles,
                 32,vlSelfRef.TB_gpnae__DOT__total_processing_cycles,
                 32,vlSelfRef.TB_gpnae__DOT__total_operation_cycles,
                 32,vlSelfRef.TB_gpnae__DOT__avg_cycles_per_input);
    __Vtask_TB_gpnae__DOT__perform_test__8__test_name = 
        std::string{"Tanh"};
    __Vtask_TB_gpnae__DOT__perform_test__8__test_control_word = 3U;
    VL_WRITEF_NX("\nStarting %@ test\n",0,-1,&(__Vtask_TB_gpnae__DOT__perform_test__8__test_name));
    __Vtask_TB_gpnae__DOT__reset_sequence__9__unnamedblk1__DOT__i = 0;
    vlSelfRef.TB_gpnae__DOT__rstn_i = 0U;
    vlSelfRef.TB_gpnae__DOT__wr_en_i = 0U;
    vlSelfRef.TB_gpnae__DOT__last_i = 0U;
    vlSelfRef.TB_gpnae__DOT__start_i = 0U;
    vlSelfRef.TB_gpnae__DOT__control_word_i = 0U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0U] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__9__unnamedblk1__DOT__i = 1U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[1U] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__9__unnamedblk1__DOT__i = 2U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[2U] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__9__unnamedblk1__DOT__i = 3U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[3U] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__9__unnamedblk1__DOT__i = 4U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[4U] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__9__unnamedblk1__DOT__i = 5U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[5U] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__9__unnamedblk1__DOT__i = 6U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[6U] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__9__unnamedblk1__DOT__i = 7U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[7U] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__9__unnamedblk1__DOT__i = 8U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[8U] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__9__unnamedblk1__DOT__i = 9U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[9U] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__9__unnamedblk1__DOT__i = 0xaU;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0xaU] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__9__unnamedblk1__DOT__i = 0xbU;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0xbU] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__9__unnamedblk1__DOT__i = 0xcU;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0xcU] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__9__unnamedblk1__DOT__i = 0xdU;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0xdU] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__9__unnamedblk1__DOT__i = 0xeU;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0xeU] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__9__unnamedblk1__DOT__i = 0xfU;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0xfU] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__9__unnamedblk1__DOT__i = 0x10U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x10U] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__9__unnamedblk1__DOT__i = 0x11U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x11U] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__9__unnamedblk1__DOT__i = 0x12U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x12U] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__9__unnamedblk1__DOT__i = 0x13U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x13U] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__9__unnamedblk1__DOT__i = 0x14U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x14U] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__9__unnamedblk1__DOT__i = 0x15U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x15U] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__9__unnamedblk1__DOT__i = 0x16U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x16U] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__9__unnamedblk1__DOT__i = 0x17U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x17U] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__9__unnamedblk1__DOT__i = 0x18U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x18U] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__9__unnamedblk1__DOT__i = 0x19U;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x19U] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__9__unnamedblk1__DOT__i = 0x1aU;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x1aU] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__9__unnamedblk1__DOT__i = 0x1bU;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x1bU] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__9__unnamedblk1__DOT__i = 0x1cU;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x1cU] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__9__unnamedblk1__DOT__i = 0x1dU;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x1dU] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__9__unnamedblk1__DOT__i = 0x1eU;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x1eU] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__9__unnamedblk1__DOT__i = 0x1fU;
    vlSelfRef.TB_gpnae__DOT__cycles_per_input[0x1fU] = 0U;
    __Vtask_TB_gpnae__DOT__reset_sequence__9__unnamedblk1__DOT__i = 0x20U;
    vlSelfRef.TB_gpnae__DOT__total_buffer_write_cycles = 0U;
    vlSelfRef.TB_gpnae__DOT__total_processing_cycles = 0U;
    vlSelfRef.TB_gpnae__DOT__total_operation_cycles = 0U;
    vlSelfRef.TB_gpnae__DOT__total_input_cycles = 0U;
    co_await vlSelfRef.__VtrigSched_h322a045f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_gpnae.clk)", 
                                                         "/home/admin/Desktop/SIENNA/GNAE/testbenches/TB_gpnae.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h322a045f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_gpnae.clk)", 
                                                         "/home/admin/Desktop/SIENNA/GNAE/testbenches/TB_gpnae.sv", 
                                                         112);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_gpnae__DOT__rstn_i = 1U;
    co_await vlSelfRef.__VtrigSched_h322a045f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_gpnae.clk)", 
                                                         "/home/admin/Desktop/SIENNA/GNAE/testbenches/TB_gpnae.sv", 
                                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_gpnae__DOT__control_word_i = __Vtask_TB_gpnae__DOT__perform_test__8__test_control_word;
    vlSelfRef.TB_gpnae__DOT__buffer_write_start_cycle 
        = vlSelfRef.TB_gpnae__DOT__cycle_counter;
    vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i = 0U;
    while ((vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i 
            < (IData)(vlSelfRef.TB_gpnae__DOT__num_sig))) {
        __Vtask_TB_gpnae__DOT__write_signal__10__signal_index 
            = vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i;
        __Vtask_TB_gpnae__DOT__write_signal__10__last 
            = (vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i 
               == ((IData)(vlSelfRef.TB_gpnae__DOT__num_sig) 
                   - (IData)(1U)));
        __Vtask_TB_gpnae__DOT__write_signal__10__sig_data 
            = ((3U == (IData)(__Vtask_TB_gpnae__DOT__perform_test__8__test_control_word))
                ? ((0x1dU >= (0x1fU & vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i))
                    ? vlSelfRef.TB_gpnae__DOT__signal_tanh
                   [(0x1fU & vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i)]
                    : 0U) : ((0x1dU >= (0x1fU & vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i))
                              ? vlSelfRef.TB_gpnae__DOT__signal_sigmoid
                             [(0x1fU & vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i)]
                              : 0U));
        while ((1U & (~ (IData)(vlSelfRef.TB_gpnae__DOT__idle_o)))) {
            co_await vlSelfRef.__VtrigSched_h89661d45__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( TB_gpnae.idle_o)", 
                                                                 "/home/admin/Desktop/SIENNA/GNAE/testbenches/TB_gpnae.sv", 
                                                                 126);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        vlSelfRef.TB_gpnae__DOT__write_signal__Vstatic__unnamedblk2__DOT__start_cycle 
            = vlSelfRef.TB_gpnae__DOT__cycle_counter;
        co_await vlSelfRef.__VtrigSched_h322a045f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_gpnae.clk)", 
                                                             "/home/admin/Desktop/SIENNA/GNAE/testbenches/TB_gpnae.sv", 
                                                             129);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.TB_gpnae__DOT__signal_i = __Vtask_TB_gpnae__DOT__write_signal__10__sig_data;
        vlSelfRef.TB_gpnae__DOT__wr_en_i = 1U;
        co_await vlSelfRef.__VtrigSched_h322a045f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_gpnae.clk)", 
                                                             "/home/admin/Desktop/SIENNA/GNAE/testbenches/TB_gpnae.sv", 
                                                             132);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.TB_gpnae__DOT__wr_en_i = 0U;
        co_await vlSelfRef.__VtrigSched_h322a045f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_gpnae.clk)", 
                                                             "/home/admin/Desktop/SIENNA/GNAE/testbenches/TB_gpnae.sv", 
                                                             134);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.TB_gpnae__DOT__last_i = __Vtask_TB_gpnae__DOT__write_signal__10__last;
        vlSelfRef.TB_gpnae__DOT__start_i = __Vtask_TB_gpnae__DOT__write_signal__10__last;
        co_await vlSelfRef.__VtrigSched_h322a045f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_gpnae.clk)", 
                                                             "/home/admin/Desktop/SIENNA/GNAE/testbenches/TB_gpnae.sv", 
                                                             137);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.TB_gpnae__DOT__last_i = 0U;
        vlSelfRef.TB_gpnae__DOT__cycles_per_input[(0x1fU 
                                                   & __Vtask_TB_gpnae__DOT__write_signal__10__signal_index)] 
            = (vlSelfRef.TB_gpnae__DOT__cycle_counter 
               - vlSelfRef.TB_gpnae__DOT__write_signal__Vstatic__unnamedblk2__DOT__start_cycle);
        VL_WRITEF_NX("Signal %0d: Took %0d cycles to write\n",0,
                     32,__Vtask_TB_gpnae__DOT__write_signal__10__signal_index,
                     32,vlSelfRef.TB_gpnae__DOT__cycles_per_input
                     [(0x1fU & __Vtask_TB_gpnae__DOT__write_signal__10__signal_index)]);
        vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i 
            = ((IData)(1U) + vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i);
    }
    vlSelfRef.TB_gpnae__DOT__buffer_write_end_cycle 
        = vlSelfRef.TB_gpnae__DOT__cycle_counter;
    vlSelfRef.TB_gpnae__DOT__total_buffer_write_cycles 
        = (vlSelfRef.TB_gpnae__DOT__buffer_write_end_cycle 
           - vlSelfRef.TB_gpnae__DOT__buffer_write_start_cycle);
    VL_WRITEF_NX("Buffer writing completed in %0d cycles\n",0,
                 32,vlSelfRef.TB_gpnae__DOT__total_buffer_write_cycles);
    vlSelfRef.TB_gpnae__DOT__processing_start_cycle 
        = vlSelfRef.TB_gpnae__DOT__cycle_counter;
    __Vtask_TB_gpnae__DOT__wait_for_processing__11__signals_to_process 
        = vlSelfRef.TB_gpnae__DOT__num_sig;
    vlSelfRef.TB_gpnae__DOT__wait_for_processing__Vstatic__unnamedblk4__DOT__processed = 0U;
    vlSelfRef.TB_gpnae__DOT__wait_for_processing__Vstatic__unnamedblk4__DOT__last_done_cycle 
        = vlSelfRef.TB_gpnae__DOT__cycle_counter;
    while (VL_LTS_III(32, vlSelfRef.TB_gpnae__DOT__wait_for_processing__Vstatic__unnamedblk4__DOT__processed, __Vtask_TB_gpnae__DOT__wait_for_processing__11__signals_to_process)) {
        co_await vlSelfRef.__VtrigSched_h322a045f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_gpnae.clk)", 
                                                             "/home/admin/Desktop/SIENNA/GNAE/testbenches/TB_gpnae.sv", 
                                                             205);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if (VL_UNLIKELY((vlSelfRef.TB_gpnae__DOT__done_o))) {
            vlSelfRef.TB_gpnae__DOT__wait_for_processing__Vstatic__unnamedblk4__DOT__processed 
                = ((IData)(1U) + vlSelfRef.TB_gpnae__DOT__wait_for_processing__Vstatic__unnamedblk4__DOT__processed);
            vlSelfRef.TB_gpnae__DOT__wait_for_processing__Vstatic__unnamedblk4__DOT__current_done_cycle 
                = vlSelfRef.TB_gpnae__DOT__cycle_counter;
            VL_WRITEF_NX("Time=%0t: Processed=%0d, Done_o=%0b, Took %0d cycles since last done\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,32,vlSelfRef.TB_gpnae__DOT__wait_for_processing__Vstatic__unnamedblk4__DOT__processed,
                         1,(IData)(vlSelfRef.TB_gpnae__DOT__done_o),
                         32,(vlSelfRef.TB_gpnae__DOT__wait_for_processing__Vstatic__unnamedblk4__DOT__current_done_cycle 
                             - vlSelfRef.TB_gpnae__DOT__wait_for_processing__Vstatic__unnamedblk4__DOT__last_done_cycle));
            vlSelfRef.TB_gpnae__DOT__wait_for_processing__Vstatic__unnamedblk4__DOT__last_done_cycle 
                = vlSelfRef.TB_gpnae__DOT__wait_for_processing__Vstatic__unnamedblk4__DOT__current_done_cycle;
        }
    }
    vlSelfRef.TB_gpnae__DOT__processing_end_cycle = vlSelfRef.TB_gpnae__DOT__cycle_counter;
    vlSelfRef.TB_gpnae__DOT__total_processing_cycles 
        = (vlSelfRef.TB_gpnae__DOT__processing_end_cycle 
           - vlSelfRef.TB_gpnae__DOT__processing_start_cycle);
    vlSelfRef.TB_gpnae__DOT__total_operation_cycles 
        = (vlSelfRef.TB_gpnae__DOT__processing_end_cycle 
           - vlSelfRef.TB_gpnae__DOT__buffer_write_start_cycle);
    vlSelfRef.TB_gpnae__DOT__total_input_cycles = 0U;
    vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i = 0U;
    while ((vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i 
            < (IData)(vlSelfRef.TB_gpnae__DOT__num_sig))) {
        vlSelfRef.TB_gpnae__DOT__total_input_cycles 
            = (vlSelfRef.TB_gpnae__DOT__total_input_cycles 
               + vlSelfRef.TB_gpnae__DOT__cycles_per_input
               [(0x1fU & vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i)]);
        vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i 
            = ((IData)(1U) + vlSelfRef.TB_gpnae__DOT__perform_test__Vstatic__unnamedblk3__DOT__i);
    }
    vlSelfRef.TB_gpnae__DOT__avg_cycles_per_input = 
        VL_DIV_III(32, vlSelfRef.TB_gpnae__DOT__total_input_cycles, (IData)(vlSelfRef.TB_gpnae__DOT__num_sig));
    VL_WRITEF_NX("%@ test completed\nBuffer write time: %0d cycles\nProcessing time (without buffer write): %0d cycles\nTotal operation time (with buffer write): %0d cycles\nAverage cycles per input: %0d cycles\n\nTest Summary:\nTotal signals processed: %0#\nTotal clock cycles: %0d\n",0,
                 -1,&(__Vtask_TB_gpnae__DOT__perform_test__8__test_name),
                 32,vlSelfRef.TB_gpnae__DOT__total_buffer_write_cycles,
                 32,vlSelfRef.TB_gpnae__DOT__total_processing_cycles,
                 32,vlSelfRef.TB_gpnae__DOT__total_operation_cycles,
                 32,vlSelfRef.TB_gpnae__DOT__avg_cycles_per_input,
                 5,(IData)(vlSelfRef.TB_gpnae__DOT__num_sig),
                 32,vlSelfRef.TB_gpnae__DOT__cycle_counter);
    vlSelfRef.TB_gpnae__DOT__current_phase = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "/home/admin/Desktop/SIENNA/GNAE/testbenches/TB_gpnae.sv", 
                                         245);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("/home/admin/Desktop/SIENNA/GNAE/testbenches/TB_gpnae.sv", 245, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine VTB_gpnae___024root___eval_initial__TOP__Vtiming__2(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___eval_initial__TOP__Vtiming__2\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "/home/admin/Desktop/SIENNA/GNAE/testbenches/TB_gpnae.sv", 
                                             92);
        vlSelfRef.TB_gpnae__DOT__clk = (1U & (~ (IData)(vlSelfRef.TB_gpnae__DOT__clk)));
    }
}

void VTB_gpnae___024root___act_comb__TOP__0(VTB_gpnae___024root* vlSelf);

void VTB_gpnae___024root___eval_act(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___eval_act\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x181ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VTB_gpnae___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__0(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__0\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v4 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__1(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__1\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v5 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__2(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__2\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v6 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__3(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__3\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v7 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__4(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__4\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v8 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__5(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__5\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v9 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__6(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__6\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v10 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__7(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__7\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v11 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__8(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__8\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v12 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__9(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__9\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v13 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__10(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__10\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v14 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__11(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__11\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v15 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__12(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__12\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v16 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__13(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__13\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v17 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__14(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__14\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v18 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__15(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__15\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v19 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__16(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__16\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v20 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__17(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__17\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v21 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__18(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__18\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v22 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__19(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__19\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v23 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__20(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__20\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v0 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__21(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__21\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v1 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__22(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__22\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v2 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__23(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__23\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v3 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__24(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__24\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v4 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__25(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__25\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v5 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__26(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__26\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v6 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__27(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__27\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v7 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__28(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__28\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v8 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__29(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__29\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v9 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__30(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__30\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v10 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__31(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__31\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v11 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__32(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__32\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v12 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__33(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__33\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v13 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__34(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__34\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v14 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__35(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__35\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v15 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__36(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__36\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v16 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__37(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__37\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v17 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__38(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__38\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v18 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__39(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__39\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v19 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__40(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__40\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v20 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__41(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__41\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v21 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__42(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__42\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v22 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__43(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__43\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v23 = 0U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__44(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__44\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__TB_gpnae__DOT__processed_signals 
        = vlSelfRef.TB_gpnae__DOT__processed_signals;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__45(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__45\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__i 
        = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__i;
    vlSelfRef.__Vdly__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__busy 
        = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__busy;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__46(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__46\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__TB_gpnae__DOT__dut__DOT__done_delay 
        = vlSelfRef.TB_gpnae__DOT__dut__DOT__done_delay;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__47(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__47\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__valid_stage6 
        = ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_reset_n) 
           && (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__valid_stage5));
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__48(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__48\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__FIFO__DOT__BRAM__v0 = 0U;
    if ((1U & (~ (vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status 
                  >> 0x1fU)))) {
        if (vlSelfRef.TB_gpnae__DOT__wr_en_i) {
            vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__FIFO__DOT__BRAM__v0 
                = vlSelfRef.TB_gpnae__DOT__signal_i;
            vlSelfRef.__VdlyDim0__TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__FIFO__DOT__BRAM__v0 
                = vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__wr_ptr;
            vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__FIFO__DOT__BRAM__v0 = 1U;
        }
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__49(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__49\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status 
        = vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status;
    vlSelfRef.__Vdly__TB_gpnae__DOT__dut__DOT__is_positive_selu 
        = vlSelfRef.TB_gpnae__DOT__dut__DOT__is_positive_selu;
    if (vlSelfRef.TB_gpnae__DOT__rstn_i) {
        if (vlSelfRef.TB_gpnae__DOT__wr_en_i) {
            if ((1U & (~ (vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status 
                          >> (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__wr_ptr))))) {
                vlSelfRef.__Vdly__TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status 
                    = (((~ ((IData)(1U) << (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__wr_ptr))) 
                        & vlSelfRef.__Vdly__TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status) 
                       | (0xffffffffULL & ((1U & (~ 
                                                  (vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status 
                                                   >> (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__wr_ptr)))) 
                                           << (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__wr_ptr))));
            }
        } else if (vlSelfRef.TB_gpnae__DOT__dut__DOT__rd_en_signal) {
            if ((1U & (vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status 
                       >> (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__rd_ptr)))) {
                vlSelfRef.__Vdly__TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status 
                    = (((~ ((IData)(1U) << (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__rd_ptr))) 
                        & vlSelfRef.__Vdly__TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status) 
                       | (0xffffffffULL & ((1U & (~ 
                                                  (vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status 
                                                   >> (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__rd_ptr)))) 
                                           << (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__rd_ptr))));
            }
        }
        if (vlSelfRef.TB_gpnae__DOT__dut__DOT__rd_en_signal) {
            vlSelfRef.__Vdly__TB_gpnae__DOT__dut__DOT__is_positive_selu 
                = (1U & ((~ (vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__FIFO__DOT__doutb_reg 
                             >> 0x1fU)) | (0U == (0x7fffffffU 
                                                  & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__FIFO__DOT__doutb_reg))));
            vlSelfRef.TB_gpnae__DOT__dut__DOT__fifo_data_registered 
                = vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__FIFO__DOT__doutb_reg;
        }
    } else {
        vlSelfRef.__Vdly__TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status = 0U;
        vlSelfRef.__Vdly__TB_gpnae__DOT__dut__DOT__is_positive_selu = 0U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__fifo_data_registered = 0U;
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__50(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__50\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__TB_gpnae__DOT__dut__DOT__selu_inst__DOT__valid_multiply 
        = vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__valid_multiply;
    if (vlSelfRef.TB_gpnae__DOT__rstn_i) {
        if (((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__is_positive_selu) 
             & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_valid))) {
            vlSelfRef.__Vdly__TB_gpnae__DOT__dut__DOT__selu_inst__DOT__valid_multiply = 1U;
        }
        if (((~ (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__is_positive_selu)) 
             & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__valid_stage6))) {
            vlSelfRef.__Vdly__TB_gpnae__DOT__dut__DOT__selu_inst__DOT__valid_multiply = 1U;
        }
        if (vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__valid_multiply) {
            vlSelfRef.__Vdly__TB_gpnae__DOT__dut__DOT__selu_inst__DOT__valid_multiply = 0U;
        }
    } else {
        vlSelfRef.__Vdly__TB_gpnae__DOT__dut__DOT__selu_inst__DOT__valid_multiply = 0U;
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__51(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__51\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TB_gpnae__DOT__rstn_i) {
        if (vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__valid_stage5) {
            vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__Sign 
                = vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__sign;
        }
    } else {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__Sign = 0U;
    }
    vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__valid_stage6 
        = ((IData)(vlSelfRef.TB_gpnae__DOT__rstn_i) 
           && (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__valid_stage5));
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__52(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__52\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__valid_stage1) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__sign 
            = (((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__comp) 
                | (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__magcheck))
                ? (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__A_sign)
                : ((~ (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__zero)) 
                   & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__C_sign)));
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__53(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__53\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v0 = 0U;
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v1 = 0U;
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v2 = 0U;
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v3 = 0U;
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [1U]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__sign;
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v0 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [2U]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign
            [0U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v1 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v1 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [3U]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign
            [1U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v2 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v2 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [4U]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign
            [2U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v3 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v3 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [5U]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign
            [3U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v4 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v4 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [6U]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign
            [4U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v5 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v5 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [7U]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign
            [5U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v6 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v6 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [8U]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign
            [6U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v7 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v7 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [9U]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign
            [7U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v8 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v8 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [0xaU]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign
            [8U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v9 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v9 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [0xbU]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign
            [9U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v10 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v10 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [0xcU]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign
            [0xaU];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v11 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v11 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [0xdU]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign
            [0xbU];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v12 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v12 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [0xeU]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign
            [0xcU];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v13 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v13 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [0xfU]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign
            [0xdU];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v14 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v14 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [0x10U]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign
            [0xeU];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v15 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v15 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [0x11U]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign
            [0xfU];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v16 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v16 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [0x12U]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign
            [0x10U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v17 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v17 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [0x13U]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign
            [0x11U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v18 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v18 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [0x14U]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign
            [0x12U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v19 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v19 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [0x15U]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign
            [0x13U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v20 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v20 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [0x16U]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign
            [0x14U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v21 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v21 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [0x17U]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign
            [0x15U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v22 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v22 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [0x18U]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign
            [0x16U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v23 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_hfc9c0bb5__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v23 = 1U;
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__54(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__54\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__cycle_counter = ((IData)(vlSelfRef.TB_gpnae__DOT__rstn_i)
                                               ? ((IData)(1U) 
                                                  + vlSelfRef.TB_gpnae__DOT__cycle_counter)
                                               : 0U);
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__55(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__55\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [1U]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__Temp_Exponent;
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v0 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [2U]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent
            [0U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v1 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v1 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [3U]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent
            [1U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v2 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v2 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [4U]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent
            [2U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v3 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v3 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [5U]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent
            [3U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v4 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v4 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [6U]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent
            [4U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v5 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v5 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [7U]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent
            [5U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v6 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v6 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [8U]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent
            [6U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v7 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v7 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [9U]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent
            [7U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v8 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v8 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [0xaU]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent
            [8U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v9 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v9 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [0xbU]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent
            [9U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v10 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v10 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [0xcU]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent
            [0xaU];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v11 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v11 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [0xdU]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent
            [0xbU];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v12 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v12 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [0xeU]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent
            [0xcU];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v13 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v13 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [0xfU]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent
            [0xdU];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v14 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v14 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [0x10U]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent
            [0xeU];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v15 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v15 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [0x11U]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent
            [0xfU];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v16 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v16 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [0x12U]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent
            [0x10U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v17 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v17 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [0x13U]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent
            [0x11U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v18 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v18 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [0x14U]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent
            [0x12U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v19 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v19 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [0x15U]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent
            [0x13U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v20 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v20 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [0x16U]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent
            [0x14U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v21 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v21 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [0x17U]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent
            [0x15U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v22 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v22 = 1U;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [0x18U]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent
            [0x16U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v23 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h3ecb4378__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v23 = 1U;
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__56(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__56\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__TB_gpnae__DOT__current_phase 
        = vlSelfRef.TB_gpnae__DOT__current_phase;
    if (((IData)(vlSelfRef.TB_gpnae__DOT__current_state) 
         != (IData)(vlSelfRef.TB_gpnae__DOT__control_word_i))) {
        if ((2U & (IData)(vlSelfRef.TB_gpnae__DOT__control_word_i))) {
            if ((1U & (IData)(vlSelfRef.TB_gpnae__DOT__control_word_i))) {
                VL_WRITEF_NX("Time=%0t: State changed to Tanh\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9);
            } else {
                VL_WRITEF_NX("Time=%0t: State changed to Sigmoid\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9);
            }
        } else if ((1U & (IData)(vlSelfRef.TB_gpnae__DOT__control_word_i))) {
            VL_WRITEF_NX("Time=%0t: State changed to SELU\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9);
        } else {
            VL_WRITEF_NX("Time=%0t: State changed to IDLE\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9);
        }
        vlSelfRef.TB_gpnae__DOT__current_state = vlSelfRef.TB_gpnae__DOT__control_word_i;
    }
    if ((0U == vlSelfRef.TB_gpnae__DOT__current_phase)) {
        if (VL_UNLIKELY(((1U != vlSelfRef.TB_gpnae__DOT__current_phase)))) {
            VL_WRITEF_NX("Time=%0t: Reset phase completed\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9);
            vlSelfRef.__Vdly__TB_gpnae__DOT__current_phase = 1U;
        }
    } else if ((1U == vlSelfRef.TB_gpnae__DOT__current_phase)) {
        if (VL_UNLIKELY((vlSelfRef.TB_gpnae__DOT__last_i))) {
            VL_WRITEF_NX("Time=%0t: All signals loaded\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9);
            vlSelfRef.__Vdly__TB_gpnae__DOT__current_phase = 2U;
        }
    } else if ((2U == vlSelfRef.TB_gpnae__DOT__current_phase)) {
        if (VL_UNLIKELY((vlSelfRef.TB_gpnae__DOT__done_o))) {
            VL_WRITEF_NX("Time=%0t: Processing complete, Final result = %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,32,vlSelfRef.TB_gpnae__DOT__final_result_o);
            vlSelfRef.__Vdly__TB_gpnae__DOT__processed_signals 
                = ((IData)(1U) + vlSelfRef.TB_gpnae__DOT__processed_signals);
            if ((vlSelfRef.TB_gpnae__DOT__processed_signals 
                 == ((IData)(vlSelfRef.TB_gpnae__DOT__num_sig) 
                     - (IData)(1U)))) {
                vlSelfRef.__Vdly__TB_gpnae__DOT__current_phase = 3U;
            }
        }
    } else if ((3U == vlSelfRef.TB_gpnae__DOT__current_phase)) {
        if (VL_UNLIKELY(((0U != vlSelfRef.TB_gpnae__DOT__current_phase)))) {
            VL_WRITEF_NX("Time=%0t: Test completed\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9);
            vlSelfRef.__Vdly__TB_gpnae__DOT__current_phase = 0U;
        }
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__57(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__57\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v2 = 0U;
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v3 = 0U;
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v4 = 0U;
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v5 = 0U;
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v6 = 0U;
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v7 = 0U;
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v8 = 0U;
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v9 = 0U;
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v10 = 0U;
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v11 = 0U;
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v12 = 0U;
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v13 = 0U;
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v14 = 0U;
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v15 = 0U;
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v16 = 0U;
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v17 = 0U;
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v18 = 0U;
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v19 = 0U;
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v20 = 0U;
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v21 = 0U;
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v22 = 0U;
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v23 = 0U;
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v24 = 0U;
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v25 = 0U;
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v26 = 0U;
    vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v1 
        = ((IData)(vlSelfRef.TB_gpnae__DOT__rstn_i) 
           && (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__final_valid));
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v1 = 1U;
    vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v0 
        = ((IData)(vlSelfRef.TB_gpnae__DOT__rstn_i) 
           && (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__valid_stage6));
    vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v0 = 1U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__58(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__58\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [0U]) {
        if ((0U != vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__B_Mantissa)) {
            vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__b1 
                = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__B_Mantissa;
        }
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__59(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__59\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TB_gpnae__DOT__rstn_i) {
        if (vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__valid_stage5) {
            if (vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__carry) {
                vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__Mantissa 
                    = (0x7fffffU & (vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__TempMan 
                                    >> 1U));
                vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__Exponent 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__BigExp)));
            } else if ((0U != (0x7fffffU & vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__TempMan))) {
                vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__Mantissa 
                    = (0x7fffffU & (vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__TempMan 
                                    << (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__zerocount)));
                vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__Exponent 
                    = (0xffU & ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__BigExp) 
                                - (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__zerocount)));
            } else {
                vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__Mantissa 
                    = (0x7fffffU & vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__TempMan);
                vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__Exponent 
                    = (0xffU & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__BigExp));
            }
        }
    } else {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__Mantissa = 0U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__Exponent = 0U;
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__60(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__60\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__valid_stage4) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__carry 
            = (1U & (((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__check)
                       ? (vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__BigMan 
                          - vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__Temp_SmallMan)
                       : (vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__BigMan 
                          + vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__Temp_SmallMan)) 
                     >> 0x18U));
        vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__TempMan 
            = (0xffffffU & ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__check)
                             ? (vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__BigMan 
                                - vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__Temp_SmallMan)
                             : (vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__BigMan 
                                + vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__Temp_SmallMan)));
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__valid_stage3) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__Temp_SmallMan 
            = (0xffffffU & VL_SHIFTR_III(24,24,8, vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__SmallMan, (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__DifferenceExp)));
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__valid_stage2) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__DifferenceExp 
            = (0xffU & ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__BigExp) 
                        - (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__SmallExp)));
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__61(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__61\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TB_gpnae__DOT__rstn_i) {
        if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__valid_stage5) {
            if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__carry1) {
                vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Mantissa1 
                    = (0x7fffffU & (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__TempMan1 
                                    >> 1U));
                vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Exponent1 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__BigExp1)));
            } else if ((0U != (0x7fffffU & vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__TempMan1))) {
                vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Mantissa1 
                    = (0x7fffffU & (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__TempMan1 
                                    << (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__zerocount1)));
                vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Exponent1 
                    = (0xffU & ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__BigExp1) 
                                - (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__zerocount1)));
            } else {
                vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Mantissa1 
                    = (0x7fffffU & vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__TempMan1);
                vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Exponent1 
                    = (0xffU & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__BigExp1));
            }
            if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__carry2) {
                vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Mantissa2 
                    = (0x7fffffU & (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__TempMan2 
                                    >> 1U));
                vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Exponent2 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__BigExp2)));
            } else if ((0U != (0x7fffffU & vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__TempMan2))) {
                vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Mantissa2 
                    = (0x7fffffU & (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__TempMan2 
                                    << (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__zerocount2)));
                vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Exponent2 
                    = (0xffU & ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__BigExp2) 
                                - (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__zerocount2)));
            } else {
                vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Mantissa2 
                    = (0x7fffffU & vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__TempMan2);
                vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Exponent2 
                    = (0xffU & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__BigExp2));
            }
        }
    } else {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Mantissa1 = 0U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Mantissa2 = 0U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Exponent1 = 0U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Exponent2 = 0U;
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__62(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__62\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__valid_stage4) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__carry1 
            = (1U & (((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__check1)
                       ? (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__BigMan1 
                          - vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Temp_SmallMan1)
                       : (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__BigMan1 
                          + vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Temp_SmallMan1)) 
                     >> 0x18U));
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__TempMan1 
            = (0xffffffU & ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__check1)
                             ? (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__BigMan1 
                                - vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Temp_SmallMan1)
                             : (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__BigMan1 
                                + vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Temp_SmallMan1)));
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__carry2 
            = (1U & (((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__check2)
                       ? (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__BigMan2 
                          - vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Temp_SmallMan2)
                       : (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__BigMan2 
                          + vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Temp_SmallMan2)) 
                     >> 0x18U));
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__TempMan2 
            = (0xffffffU & ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__check2)
                             ? (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__BigMan2 
                                - vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Temp_SmallMan2)
                             : (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__BigMan2 
                                + vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Temp_SmallMan2)));
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__63(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__63\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_reset_n) {
        if (vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__valid_stage5) {
            if (vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__carry) {
                vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__Mantissa 
                    = (0x7fffffU & (vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__TempMan 
                                    >> 1U));
                vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__Exponent 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__BigExp_delayed_delayed_delayed)));
            } else if ((0U != (0x7fffffU & vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__TempMan))) {
                vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__Mantissa 
                    = (0x7fffffU & (vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__TempMan 
                                    << (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__zerocount)));
                vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__Exponent 
                    = (0xffU & ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__BigExp_delayed_delayed_delayed) 
                                - (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__zerocount)));
            } else {
                vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__Mantissa 
                    = (0x7fffffU & vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__TempMan);
                vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__Exponent 
                    = (0xffU & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__BigExp_delayed_delayed_delayed));
            }
        }
    } else {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__Mantissa = 0U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__Exponent = 0U;
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__64(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__64\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__valid_stage4) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__carry 
            = (1U & (((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__check_delayed_delayed)
                       ? (vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__BigMan_delayed_delayed 
                          - vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__Temp_SmallMan)
                       : (vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__BigMan_delayed_delayed 
                          + vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__Temp_SmallMan)) 
                     >> 0x18U));
        vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__TempMan 
            = (0xffffffU & ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__check_delayed_delayed)
                             ? (vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__BigMan_delayed_delayed 
                                - vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__Temp_SmallMan)
                             : (vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__BigMan_delayed_delayed 
                                + vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__Temp_SmallMan)));
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__valid_stage3) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__Temp_SmallMan 
            = (0xffffffU & VL_SHIFTR_III(24,24,8, vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__SmallMan_delayed, (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__DifferenceExp)));
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__valid_stage2) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__DifferenceExp 
            = (0xffU & ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__BigExp) 
                        - (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__SmallExp)));
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__67(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__67\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [0U]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__sign 
            = ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__sign_A) 
               ^ (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__sign_B));
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__68(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__68\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__final_valid) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__Temp_Exponent 
            = (0xffU & ((IData)(0x7fU) + (((0xc0U & 
                                            ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__final_diff) 
                                             << 6U)) 
                                           | (0x30U 
                                              & ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__third_diff) 
                                                 << 4U))) 
                                          | ((0xcU 
                                              & ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__second_diff) 
                                                 << 2U)) 
                                             | (3U 
                                                & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__lowest_diff))))));
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__69(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__69\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TB_gpnae__DOT__rstn_i) {
        if ((0U == (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__current_state))) {
            vlSelfRef.__Vdly__TB_gpnae__DOT__dut__DOT__done_delay = 0U;
            vlSelfRef.TB_gpnae__DOT__done_o = 0U;
            vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_enable = 0U;
            vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_enable = 0U;
            vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_enable = 0U;
        } else if ((1U == (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__current_state))) {
            vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_enable = 1U;
            if ((1U == (IData)(vlSelfRef.TB_gpnae__DOT__control_word_i))) {
                vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_enable = 1U;
            } else if (((2U == (IData)(vlSelfRef.TB_gpnae__DOT__control_word_i)) 
                        || (3U == (IData)(vlSelfRef.TB_gpnae__DOT__control_word_i)))) {
                vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_enable = 1U;
            }
        } else if ((3U == (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__current_state))) {
            if (vlSelfRef.TB_gpnae__DOT__dut__DOT__is_positive_selu) {
                vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_enable = 0U;
            }
        } else if ((4U == (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__current_state))) {
            if (vlSelfRef.TB_gpnae__DOT__dut__DOT__done_selu) {
                vlSelfRef.TB_gpnae__DOT__final_result_o 
                    = vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_result;
                vlSelfRef.__Vdly__TB_gpnae__DOT__dut__DOT__done_delay = 1U;
            }
        } else if ((5U == (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__current_state))) {
            if (vlSelfRef.TB_gpnae__DOT__dut__DOT__done_selu) {
                vlSelfRef.TB_gpnae__DOT__final_result_o 
                    = vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_result;
                vlSelfRef.__Vdly__TB_gpnae__DOT__dut__DOT__done_delay = 1U;
            }
        } else if (((6U == (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__current_state)) 
                    || (7U == (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__current_state)))) {
            if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__div_done) {
                vlSelfRef.TB_gpnae__DOT__final_result_o 
                    = (((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__intermediateSign) 
                        << 0x1fU) | (((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__intermediateExp) 
                                      << 0x17U) | vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__intermediateMan));
                vlSelfRef.__Vdly__TB_gpnae__DOT__dut__DOT__done_delay = 1U;
            }
        }
        if ((0U != (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__done_delay))) {
            vlSelfRef.__Vdly__TB_gpnae__DOT__dut__DOT__done_delay 
                = (6U & ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__done_delay) 
                         << 1U));
        }
        vlSelfRef.TB_gpnae__DOT__done_o = (1U & ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__done_delay) 
                                                 >> 2U));
    } else {
        vlSelfRef.__Vdly__TB_gpnae__DOT__dut__DOT__done_delay = 0U;
        vlSelfRef.TB_gpnae__DOT__final_result_o = 0U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_enable = 0U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_enable = 0U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_enable = 0U;
        vlSelfRef.TB_gpnae__DOT__done_o = 0U;
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__70(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__70\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__TB_gpnae__DOT__dut__DOT__mac_result 
        = vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_result;
    vlSelfRef.__Vdly__TB_gpnae__DOT__dut__DOT__mac_result 
        = ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__load_result)
            ? vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__adder_result
            : vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_result);
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__71(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__71\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__done_shift_reg 
        = vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__done_shift_reg;
    if (vlSelfRef.TB_gpnae__DOT__rstn_i) {
        vlSelfRef.__Vdly__TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__done_shift_reg 
            = ((0x1eU & ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__done_shift_reg) 
                         << 1U)) | (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__done_comb));
        vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__next_state;
    } else {
        vlSelfRef.__Vdly__TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__done_shift_reg = 0U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state = 0U;
    }
    vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__load_result = 0U;
    if ((8U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state))) {
                    vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__load_result = 1U;
                }
            }
        }
    }
    vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__dp_reset_o = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state))) {
                    vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__dp_reset_o = 1U;
                }
            }
        }
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__72(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__72\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TB_gpnae__DOT__rstn_i) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__unnamedblk2__DOT__i = 0x19U;
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__75(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__75\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__final_valid 
        = ((IData)(vlSelfRef.TB_gpnae__DOT__rstn_i) 
           && (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__third_valid));
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__76(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__76\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__div_done) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__intermediateSign 
            = ((1U & (~ (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__dbz))) 
               && vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign
               [0x17U]);
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__77(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__77\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__div_done) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__intermediateMan 
            = ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__dbz)
                ? 0U : (0x7fffffU & ((0x800000U & vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__Temp_Mantissa)
                                      ? vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__Temp_Mantissa
                                      : VL_SHIFTL_III(23,23,32, vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__Temp_Mantissa, 1U))));
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__78(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__78\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__div_done) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__intermediateExp 
            = ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__dbz)
                ? 0U : (0xffU & ((0x800000U & vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__Temp_Mantissa)
                                  ? vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent
                                 [0x17U] : (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent
                                            [0x17U] 
                                            - (IData)(1U)))));
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__79(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__79\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__third_valid) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__final_diff 
            = (0x1fU & (((3U & ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__A_Exponent_reg) 
                                >> 6U)) - (3U & ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__B_Exponent_reg) 
                                                 >> 6U))) 
                        - (1U & ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__third_diff) 
                                 >> 2U))));
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__80(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__80\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v0) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent[0U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v0;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v1) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent[1U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v1;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v2) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent[2U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v2;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v3) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent[3U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v3;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v4) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent[4U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v4;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v5) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent[5U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v5;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v6) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent[6U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v6;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v7) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent[7U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v7;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v8) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent[8U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v8;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v9) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent[9U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v9;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v10) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent[0xaU] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v10;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v11) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent[0xbU] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v11;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v12) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent[0xcU] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v12;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v13) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent[0xdU] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v13;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v14) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent[0xeU] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v14;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v15) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent[0xfU] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v15;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v16) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent[0x10U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v16;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v17) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent[0x11U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v17;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v18) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent[0x12U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v18;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v19) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent[0x13U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v19;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v20) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent[0x14U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v20;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v21) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent[0x15U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v21;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v22) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent[0x16U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v22;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v23) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent[0x17U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_Exponent__v23;
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__81(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__81\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v0) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign[0U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v0;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v1) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign[1U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v1;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v2) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign[2U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v2;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v3) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign[3U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v3;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v4) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign[4U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v4;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v5) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign[5U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v5;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v6) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign[6U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v6;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v7) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign[7U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v7;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v8) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign[8U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v8;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v9) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign[9U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v9;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v10) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign[0xaU] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v10;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v11) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign[0xbU] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v11;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v12) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign[0xcU] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v12;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v13) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign[0xdU] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v13;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v14) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign[0xeU] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v14;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v15) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign[0xfU] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v15;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v16) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign[0x10U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v16;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v17) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign[0x11U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v17;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v18) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign[0x12U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v18;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v19) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign[0x13U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v19;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v20) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign[0x14U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v20;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v21) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign[0x15U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v21;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v22) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign[0x16U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v22;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v23) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign[0x17U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__pipe_sign__v23;
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__85(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__85\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__third_valid 
        = ((IData)(vlSelfRef.TB_gpnae__DOT__rstn_i) 
           && (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__second_valid));
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__86(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__86\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [0U]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__dbz 
            = (0U == vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__B_Mantissa);
    }
    if ((1U & (~ (IData)(vlSelfRef.TB_gpnae__DOT__rstn_i)))) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__dbz = 0U;
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__87(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__87\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__div_done = 0U;
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [0U]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__valid = 0U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__ovf = 0U;
        vlSelfRef.__Vdly__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__i = 0U;
        if ((0U == vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__B_Mantissa)) {
            vlSelfRef.__Vdly__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__busy = 0U;
            vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__div_done = 1U;
        } else {
            vlSelfRef.__Vdly__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__busy = 1U;
            vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__acc 
                = (0x1ffffffU & (IData)(((QData)((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__A_Mantissa)) 
                                         >> 0x17U)));
            vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__quo 
                = (0xfffffeU & ((IData)((QData)((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__A_Mantissa))) 
                                << 1U));
        }
    } else if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__busy) {
        if ((0x2eU == (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__i))) {
            vlSelfRef.__Vdly__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__busy = 0U;
            vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__div_done = 1U;
            vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__valid = 1U;
            vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__Temp_Mantissa 
                = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__quo_next;
        } else if (((0x17U == (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__i)) 
                    & (0U != (0x7fffffU & (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__quo_next 
                                           >> 1U))))) {
            vlSelfRef.__Vdly__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__busy = 0U;
            vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__div_done = 1U;
            vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__ovf = 1U;
            vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__Temp_Mantissa = 0U;
        } else {
            vlSelfRef.__Vdly__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__i 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__i)));
            vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__acc 
                = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__acc_next;
            vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__quo 
                = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__quo_next;
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.TB_gpnae__DOT__rstn_i)))) {
        vlSelfRef.__Vdly__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__busy = 0U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__div_done = 0U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__valid = 0U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__ovf = 0U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__Temp_Mantissa = 0U;
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__88(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__88\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__second_valid) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__third_diff 
            = (7U & (((3U & ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__A_Exponent_reg) 
                             >> 4U)) - (3U & ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__B_Exponent_reg) 
                                              >> 4U))) 
                     - (1U & ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__second_diff) 
                              >> 2U))));
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__89(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__89\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TB_gpnae__DOT__rstn_i) {
        if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__valid_stage5) {
            vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Sign1 
                = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__sign1;
            vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Sign2 
                = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__sign2;
        }
    } else {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Sign1 = 0U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Sign2 = 0U;
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__90(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__90\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__valid_stage1) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__check2 
            = ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__A_sign) 
               ^ (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__C2_sign));
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__check1 
            = ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__A_sign) 
               ^ (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__C1_sign));
        if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__zero) {
            vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__BigMan2 = 0U;
            vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__BigMan1 = 0U;
        } else {
            vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__BigMan2 
                = (0x800000U | (((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__comp2) 
                                 | (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__magcheck2))
                                 ? vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__A_Man
                                 : vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__C2_Man));
            vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__BigMan1 
                = (0x800000U | (((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__comp2) 
                                 | (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__magcheck2))
                                 ? vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__A_Man
                                 : vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__C2_Man));
        }
        if (((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__comp2) 
             | (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__magcheck2))) {
            vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__sign1 
                = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__A_sign;
            vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__sign2 
                = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__A_sign;
        } else {
            vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__sign1 
                = ((~ (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__zero)) 
                   & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__C1_sign));
            vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__sign2 
                = ((~ (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__zero)) 
                   & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__C2_sign));
        }
    }
    if ((0x10U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__done_shift_reg))) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__C1_sign = 0U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__C2_sign = 1U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__A_sign 
            = (vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_result 
               >> 0x1fU);
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__93(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__93\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__valid_stage5 
        = ((IData)(vlSelfRef.TB_gpnae__DOT__rstn_i) 
           && (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__valid_stage4));
    vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__valid_stage4 
        = ((IData)(vlSelfRef.TB_gpnae__DOT__rstn_i) 
           && (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__valid_stage3));
    vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__valid_stage3 
        = ((IData)(vlSelfRef.TB_gpnae__DOT__rstn_i) 
           && (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__valid_stage2));
    vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__valid_stage2 
        = ((IData)(vlSelfRef.TB_gpnae__DOT__rstn_i) 
           && (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__valid_stage1));
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__95(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__95\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__valid_stage1) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__check 
            = ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__A_sign) 
               ^ (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__C_sign));
        if (vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__zero) {
            vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__BigMan = 0U;
            vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__SmallMan = 0U;
            vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__BigExp = 0U;
            vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__SmallExp = 0U;
        } else {
            vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__BigMan 
                = (0x800000U | (((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__comp) 
                                 | (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__magcheck))
                                 ? vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__A_Man
                                 : vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__C_Man));
            vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__SmallMan 
                = (0x800000U | (((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__comp) 
                                 | (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__magcheck))
                                 ? vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__C_Man
                                 : vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__A_Man));
            if (vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__comp) {
                vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__BigExp 
                    = vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__A_Exp;
                vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__SmallExp 
                    = vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__C_Exp;
            } else {
                vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__BigExp 
                    = vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__C_Exp;
                vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__SmallExp 
                    = vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__A_Exp;
            }
        }
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT____Vcellinp__fp32_down_inst__valid_i) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__C_sign = 1U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__A_sign 
            = (vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_input 
               >> 0x1fU);
        vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__A_Man 
            = (0x7fffffU & vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_input);
        vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__C_Exp = 0x7fU;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__A_Exp 
            = (0xffU & (vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_input 
                        >> 0x17U));
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__96(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__96\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__valid_stage1 
        = ((IData)(vlSelfRef.TB_gpnae__DOT__rstn_i) 
           && (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT____Vcellinp__fp32_down_inst__valid_i));
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__97(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__97\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__second_valid 
        = ((IData)(vlSelfRef.TB_gpnae__DOT__rstn_i) 
           && (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__lowest_valid));
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__98(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__98\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__valid_stage6) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__sign_A 
            = ((1U & (~ ((~ (IData)((0U != (0x7fffffffU 
                                            & vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__mux_output)))) 
                         | (~ (IData)((0U != (0x7fffffffU 
                                              & vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__add_result))))))) 
               && (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__mux_output 
                   >> 0x1fU));
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__sign_B 
            = ((1U & (~ ((~ (IData)((0U != (0x7fffffffU 
                                            & vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__mux_output)))) 
                         | (~ (IData)((0U != (0x7fffffffU 
                                              & vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__add_result))))))) 
               && (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__add_result 
                   >> 0x1fU));
        if ((1U & ((~ (IData)((0U != (0x7fffffffU & vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__mux_output)))) 
                   | (~ (IData)((0U != (0x7fffffffU 
                                        & vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__add_result))))))) {
            vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__A_Mantissa = 0U;
            vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__B_Mantissa = 0U;
        } else {
            vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__A_Mantissa 
                = (0x800000U | (0x7fffffU & vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__mux_output));
            vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__B_Mantissa 
                = (0x800000U | (0x7fffffU & vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__add_result));
        }
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__100(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__100\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__lowest_valid) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__second_diff 
            = (7U & (((3U & ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__A_Exponent_reg) 
                             >> 2U)) - (3U & ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__B_Exponent_reg) 
                                              >> 2U))) 
                     - (1U & ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__lowest_diff) 
                              >> 2U))));
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__101(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__101\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__valid_stage3) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Temp_SmallMan1 
            = (0xffffffU & VL_SHIFTR_III(24,24,8, vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__SmallMan1, (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__DifferenceExp1)));
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Temp_SmallMan2 
            = (0xffffffU & VL_SHIFTR_III(24,24,8, vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__SmallMan2, (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__DifferenceExp2)));
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__valid_stage2) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__DifferenceExp1 
            = (0xffU & ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__BigExp1) 
                        - (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__SmallExp1)));
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__DifferenceExp2 
            = (0xffU & ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__BigExp2) 
                        - (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__SmallExp2)));
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__valid_stage1) {
        if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__zero) {
            vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__SmallMan1 = 0U;
            vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__SmallMan2 = 0U;
            vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__SmallExp1 = 0U;
            vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__BigExp1 = 0U;
            vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__SmallExp2 = 0U;
            vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__BigExp2 = 0U;
        } else {
            vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__SmallMan1 
                = (0x800000U | (((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__comp2) 
                                 | (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__magcheck2))
                                 ? vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__C2_Man
                                 : vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__A_Man));
            vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__SmallMan2 
                = (0x800000U | (((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__comp2) 
                                 | (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__magcheck2))
                                 ? vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__C2_Man
                                 : vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__A_Man));
            if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__comp2) {
                vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__SmallExp1 
                    = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__C2_Exp;
                vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__BigExp1 
                    = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__A_Exp;
                vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__SmallExp2 
                    = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__C2_Exp;
                vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__BigExp2 
                    = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__A_Exp;
            } else {
                vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__SmallExp1 
                    = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__A_Exp;
                vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__BigExp1 
                    = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__C2_Exp;
                vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__SmallExp2 
                    = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__A_Exp;
                vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__BigExp2 
                    = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__C2_Exp;
            }
        }
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__102(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__102\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__valid_stage3) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__BigMan_delayed_delayed 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__BigMan_delayed;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__valid_stage2) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__SmallMan_delayed 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__SmallMan;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__BigMan_delayed 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__BigMan;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__valid_stage1) {
        if (vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__zero) {
            vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__SmallMan = 0U;
            vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__BigMan = 0U;
        } else {
            vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__SmallMan 
                = (0x800000U | (((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__comp) 
                                 | (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__magcheck))
                                 ? vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__B_Man
                                 : vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__A_Man));
            vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__BigMan 
                = (0x800000U | (((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__comp) 
                                 | (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__magcheck))
                                 ? vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__A_Man
                                 : vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__B_Man));
        }
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__103(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__103\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__valid_stage4) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__BigExp_delayed_delayed_delayed 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__BigExp_delayed_delayed;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__valid_stage3) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__BigExp_delayed_delayed 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__BigExp_delayed;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__valid_stage2) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__BigExp_delayed 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__BigExp;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__valid_stage1) {
        if (vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__zero) {
            vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__SmallExp = 0U;
            vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__BigExp = 0U;
        } else if (vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__comp) {
            vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__SmallExp 
                = vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__B_Exp;
            vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__BigExp 
                = vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__A_Exp;
        } else {
            vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__SmallExp 
                = vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__A_Exp;
            vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__BigExp 
                = vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__B_Exp;
        }
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__add_valid) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__B_Exp 
            = (0xffU & (vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__add_in2 
                        >> 0x17U));
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__106(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__106\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__lowest_valid 
        = ((IData)(vlSelfRef.TB_gpnae__DOT__rstn_i) 
           && (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__capture_valid));
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__107(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__107\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__capture_valid) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__lowest_diff 
            = (7U & ((3U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__A_Exponent_reg)) 
                     - (3U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__B_Exponent_reg))));
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__109(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__109\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x10U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__done_shift_reg))) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__C2_Man = 0U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__A_Man 
            = (0x7fffffU & vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_result);
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__C2_Exp = 0x7fU;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__A_Exp 
            = (0xffU & (vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_result 
                        >> 0x17U));
    }
    vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__zero 
        = (1U & (~ ((0U != (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__A_Exp)) 
                    | (0U != vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__A_Man))));
    vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__comp2 
        = ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__A_Exp) 
           > (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__C2_Exp));
    vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__magcheck2 
        = ((~ (IData)((0U != ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__A_Exp) 
                              ^ (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__C2_Exp))))) 
           & (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__A_Man 
              > vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__C2_Man));
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__110(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__110\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_result = vlSelfRef.__Vdly__TB_gpnae__DOT__dut__DOT__mac_result;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__114(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__114\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__capture_valid 
        = ((IData)(vlSelfRef.TB_gpnae__DOT__rstn_i) 
           && vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
           [0U]);
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__115(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__115\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [0U]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__A_Exponent_reg 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__A_Exponent;
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__116(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__116\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
        [0U]) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__B_Exponent_reg 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__B_Exponent;
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__117(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__117\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__valid_stage6) {
        if ((1U & ((~ (IData)((0U != (0x7fffffffU & vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__mux_output)))) 
                   | (~ (IData)((0U != (0x7fffffffU 
                                        & vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__add_result))))))) {
            vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__A_Exponent = 0U;
            vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__B_Exponent = 0U;
        } else {
            vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__A_Exponent 
                = (0xffU & (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__mux_output 
                            >> 0x17U));
            vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__B_Exponent 
                = (0xffU & (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__add_result 
                            >> 0x17U));
        }
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__118(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__118\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__valid_stage6 
        = ((IData)(vlSelfRef.TB_gpnae__DOT__rstn_i) 
           && (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__valid_stage5));
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__119(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__119\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__mul_in1 
        = vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__FIFO__DOT__doutb_reg;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__120(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__120\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TB_gpnae__DOT__rstn_i) {
        if (vlSelfRef.TB_gpnae__DOT__dut__DOT__rd_en_signal) {
            vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__FIFO__DOT__doutb_reg 
                = vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__FIFO__DOT__ram_data_b;
        }
    } else {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__FIFO__DOT__doutb_reg = 0U;
    }
    if ((1U & (vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status 
               >> (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__rd_ptr)))) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__FIFO__DOT__ram_data_b 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__FIFO__DOT__BRAM
            [vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__rd_ptr];
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__121(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__121\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status 
        = vlSelfRef.__Vdly__TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__122(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__122\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__dut__DOT__done_delay = vlSelfRef.__Vdly__TB_gpnae__DOT__dut__DOT__done_delay;
    vlSelfRef.TB_gpnae__DOT__dut__DOT__rd_en_signal 
        = ((IData)(vlSelfRef.TB_gpnae__DOT__rstn_i) 
           && (((4U == (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__current_state)) 
                & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__is_positive_selu))
                ? (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__fsm_rd_en)
                : (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_rd_en)));
    vlSelfRef.TB_gpnae__DOT__dut__DOT__is_positive_selu 
        = vlSelfRef.__Vdly__TB_gpnae__DOT__dut__DOT__is_positive_selu;
    vlSelfRef.TB_gpnae__DOT__dut__DOT__current_state 
        = ((IData)(vlSelfRef.TB_gpnae__DOT__rstn_i)
            ? (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__next_state)
            : 0U);
    vlSelfRef.TB_gpnae__DOT__dut__DOT__select_sigtan = 3U;
    if ((4U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__current_state))) {
        if ((2U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__current_state))) {
            vlSelfRef.TB_gpnae__DOT__dut__DOT__select_sigtan 
                = ((1U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__current_state))
                    ? 1U : 0U);
        }
    }
    vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_valid = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__current_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__current_state))) {
            if ((1U & (~ (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__current_state)))) {
                vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_valid = 1U;
            }
        }
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_comb__TOP__0(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_comb__TOP__0\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__idle_o = (1U & (~ ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__rd_en_signal) 
                                                | (IData)(vlSelfRef.TB_gpnae__DOT__wr_en_i))));
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__124(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__124\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__valid_stage5 
        = ((IData)(vlSelfRef.TB_gpnae__DOT__rstn_i) 
           && (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__valid_stage4));
    vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__valid_stage4 
        = ((IData)(vlSelfRef.TB_gpnae__DOT__rstn_i) 
           && (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__valid_stage3));
    vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__valid_stage3 
        = ((IData)(vlSelfRef.TB_gpnae__DOT__rstn_i) 
           && (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__valid_stage2));
    vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__valid_stage2 
        = ((IData)(vlSelfRef.TB_gpnae__DOT__rstn_i) 
           && (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__valid_stage1));
    vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__valid_stage1 
        = ((IData)(vlSelfRef.TB_gpnae__DOT__rstn_i) 
           && (1U & ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__done_shift_reg) 
                     >> 4U)));
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__125(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__125\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__done_shift_reg 
        = vlSelfRef.__Vdly__TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__done_shift_reg;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__126(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__126\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__wr_ptr 
        = (((((((((1U == (1U & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))) 
                  | (2U == (3U & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))) 
                 | (4U == (7U & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))) 
                | (8U == (0xfU & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))) 
               | (0x10U == (0x1fU & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))) 
              | (0x20U == (0x3fU & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))) 
             | (0x40U == (0x7fU & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))) 
            | (0x80U == (0xffU & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))))
            ? ((1U == (1U & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))
                ? 0U : ((2U == (3U & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))
                         ? 1U : ((4U == (7U & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))
                                  ? 2U : ((8U == (0xfU 
                                                  & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))
                                           ? 3U : (
                                                   (0x10U 
                                                    == 
                                                    (0x1fU 
                                                     & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))
                                                    ? 4U
                                                    : 
                                                   ((0x20U 
                                                     == 
                                                     (0x3fU 
                                                      & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))
                                                     ? 5U
                                                     : 
                                                    ((0x40U 
                                                      == 
                                                      (0x7fU 
                                                       & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))
                                                      ? 6U
                                                      : 7U)))))))
            : (((((((((0x100U == (0x1ffU & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))) 
                      | (0x200U == (0x3ffU & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))) 
                     | (0x400U == (0x7ffU & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))) 
                    | (0x800U == (0xfffU & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))) 
                   | (0x1000U == (0x1fffU & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))) 
                  | (0x2000U == (0x3fffU & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))) 
                 | (0x4000U == (0x7fffU & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))) 
                | (0x8000U == (0xffffU & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))))
                ? ((0x100U == (0x1ffU & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))
                    ? 8U : ((0x200U == (0x3ffU & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))
                             ? 9U : ((0x400U == (0x7ffU 
                                                 & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))
                                      ? 0xaU : ((0x800U 
                                                 == 
                                                 (0xfffU 
                                                  & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))
                                                 ? 0xbU
                                                 : 
                                                ((0x1000U 
                                                  == 
                                                  (0x1fffU 
                                                   & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))
                                                  ? 0xcU
                                                  : 
                                                 ((0x2000U 
                                                   == 
                                                   (0x3fffU 
                                                    & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))
                                                   ? 0xdU
                                                   : 
                                                  ((0x4000U 
                                                    == 
                                                    (0x7fffU 
                                                     & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))
                                                    ? 0xeU
                                                    : 0xfU)))))))
                : (((((((((0x10000U == (0x1ffffU & 
                                        (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))) 
                          | (0x20000U == (0x3ffffU 
                                          & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))) 
                         | (0x40000U == (0x7ffffU & 
                                         (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))) 
                        | (0x80000U == (0xfffffU & 
                                        (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))) 
                       | (0x100000U == (0x1fffffU & 
                                        (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))) 
                      | (0x200000U == (0x3fffffU & 
                                       (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))) 
                     | (0x400000U == (0x7fffffU & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))) 
                    | (0x800000U == (0xffffffU & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))))
                    ? ((0x10000U == (0x1ffffU & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))
                        ? 0x10U : ((0x20000U == (0x3ffffU 
                                                 & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))
                                    ? 0x11U : ((0x40000U 
                                                == 
                                                (0x7ffffU 
                                                 & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))
                                                ? 0x12U
                                                : (
                                                   (0x80000U 
                                                    == 
                                                    (0xfffffU 
                                                     & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))
                                                    ? 0x13U
                                                    : 
                                                   ((0x100000U 
                                                     == 
                                                     (0x1fffffU 
                                                      & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))
                                                     ? 0x14U
                                                     : 
                                                    ((0x200000U 
                                                      == 
                                                      (0x3fffffU 
                                                       & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))
                                                      ? 0x15U
                                                      : 
                                                     ((0x400000U 
                                                       == 
                                                       (0x7fffffU 
                                                        & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))
                                                       ? 0x16U
                                                       : 0x17U)))))))
                    : (((((((((0x1000000U == (0x1ffffffU 
                                              & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))) 
                              | (0x2000000U == (0x3ffffffU 
                                                & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))) 
                             | (0x4000000U == (0x7ffffffU 
                                               & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))) 
                            | (0x8000000U == (0xfffffffU 
                                              & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))) 
                           | (0x10000000U == (0x1fffffffU 
                                              & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))) 
                          | (0x20000000U == (0x3fffffffU 
                                             & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))) 
                         | (0x40000000U == (0x7fffffffU 
                                            & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))) 
                        | (0x80000000U == (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))
                        ? ((0x1000000U == (0x1ffffffU 
                                           & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))
                            ? 0x18U : ((0x2000000U 
                                        == (0x3ffffffU 
                                            & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))
                                        ? 0x19U : (
                                                   (0x4000000U 
                                                    == 
                                                    (0x7ffffffU 
                                                     & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))
                                                    ? 0x1aU
                                                    : 
                                                   ((0x8000000U 
                                                     == 
                                                     (0xfffffffU 
                                                      & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))
                                                     ? 0x1bU
                                                     : 
                                                    ((0x10000000U 
                                                      == 
                                                      (0x1fffffffU 
                                                       & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))
                                                      ? 0x1cU
                                                      : 
                                                     ((0x20000000U 
                                                       == 
                                                       (0x3fffffffU 
                                                        & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))
                                                       ? 0x1dU
                                                       : 
                                                      ((0x40000000U 
                                                        == 
                                                        (0x7fffffffU 
                                                         & (~ vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))
                                                        ? 0x1eU
                                                        : 0x1fU)))))))
                        : 0U))));
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__127(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__127\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__FIFO__DOT__BRAM__v0) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__FIFO__DOT__BRAM[vlSelfRef.__VdlyDim0__TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__FIFO__DOT__BRAM__v0] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__FIFO__DOT__BRAM__v0;
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__128(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__128\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__rd_ptr 
        = (((((((((1U == (1U & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)) 
                  | (2U == (3U & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))) 
                 | (4U == (7U & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))) 
                | (8U == (0xfU & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))) 
               | (0x10U == (0x1fU & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))) 
              | (0x20U == (0x3fU & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))) 
             | (0x40U == (0x7fU & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))) 
            | (0x80U == (0xffU & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))
            ? ((1U == (1U & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))
                ? 0U : ((2U == (3U & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))
                         ? 1U : ((4U == (7U & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))
                                  ? 2U : ((8U == (0xfU 
                                                  & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))
                                           ? 3U : (
                                                   (0x10U 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))
                                                    ? 4U
                                                    : 
                                                   ((0x20U 
                                                     == 
                                                     (0x3fU 
                                                      & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))
                                                     ? 5U
                                                     : 
                                                    ((0x40U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))
                                                      ? 6U
                                                      : 7U)))))))
            : (((((((((0x100U == (0x1ffU & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)) 
                      | (0x200U == (0x3ffU & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))) 
                     | (0x400U == (0x7ffU & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))) 
                    | (0x800U == (0xfffU & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))) 
                   | (0x1000U == (0x1fffU & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))) 
                  | (0x2000U == (0x3fffU & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))) 
                 | (0x4000U == (0x7fffU & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))) 
                | (0x8000U == (0xffffU & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))
                ? ((0x100U == (0x1ffU & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))
                    ? 8U : ((0x200U == (0x3ffU & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))
                             ? 9U : ((0x400U == (0x7ffU 
                                                 & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))
                                      ? 0xaU : ((0x800U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))
                                                 ? 0xbU
                                                 : 
                                                ((0x1000U 
                                                  == 
                                                  (0x1fffU 
                                                   & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))
                                                  ? 0xcU
                                                  : 
                                                 ((0x2000U 
                                                   == 
                                                   (0x3fffU 
                                                    & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))
                                                   ? 0xdU
                                                   : 
                                                  ((0x4000U 
                                                    == 
                                                    (0x7fffU 
                                                     & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))
                                                    ? 0xeU
                                                    : 0xfU)))))))
                : (((((((((0x10000U == (0x1ffffU & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)) 
                          | (0x20000U == (0x3ffffU 
                                          & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))) 
                         | (0x40000U == (0x7ffffU & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))) 
                        | (0x80000U == (0xfffffU & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))) 
                       | (0x100000U == (0x1fffffU & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))) 
                      | (0x200000U == (0x3fffffU & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))) 
                     | (0x400000U == (0x7fffffU & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))) 
                    | (0x800000U == (0xffffffU & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)))
                    ? ((0x10000U == (0x1ffffU & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))
                        ? 0x10U : ((0x20000U == (0x3ffffU 
                                                 & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))
                                    ? 0x11U : ((0x40000U 
                                                == 
                                                (0x7ffffU 
                                                 & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))
                                                ? 0x12U
                                                : (
                                                   (0x80000U 
                                                    == 
                                                    (0xfffffU 
                                                     & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))
                                                    ? 0x13U
                                                    : 
                                                   ((0x100000U 
                                                     == 
                                                     (0x1fffffU 
                                                      & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))
                                                     ? 0x14U
                                                     : 
                                                    ((0x200000U 
                                                      == 
                                                      (0x3fffffU 
                                                       & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))
                                                      ? 0x15U
                                                      : 
                                                     ((0x400000U 
                                                       == 
                                                       (0x7fffffU 
                                                        & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))
                                                       ? 0x16U
                                                       : 0x17U)))))))
                    : (((((((((0x1000000U == (0x1ffffffU 
                                              & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)) 
                              | (0x2000000U == (0x3ffffffU 
                                                & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))) 
                             | (0x4000000U == (0x7ffffffU 
                                               & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))) 
                            | (0x8000000U == (0xfffffffU 
                                              & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))) 
                           | (0x10000000U == (0x1fffffffU 
                                              & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))) 
                          | (0x20000000U == (0x3fffffffU 
                                             & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))) 
                         | (0x40000000U == (0x7fffffffU 
                                            & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))) 
                        | (0x80000000U == vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))
                        ? ((0x1000000U == (0x1ffffffU 
                                           & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))
                            ? 0x18U : ((0x2000000U 
                                        == (0x3ffffffU 
                                            & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))
                                        ? 0x19U : (
                                                   (0x4000000U 
                                                    == 
                                                    (0x7ffffffU 
                                                     & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))
                                                    ? 0x1aU
                                                    : 
                                                   ((0x8000000U 
                                                     == 
                                                     (0xfffffffU 
                                                      & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))
                                                     ? 0x1bU
                                                     : 
                                                    ((0x10000000U 
                                                      == 
                                                      (0x1fffffffU 
                                                       & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))
                                                      ? 0x1cU
                                                      : 
                                                     ((0x20000000U 
                                                       == 
                                                       (0x3fffffffU 
                                                        & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))
                                                       ? 0x1dU
                                                       : 
                                                      ((0x40000000U 
                                                        == 
                                                        (0x7fffffffU 
                                                         & vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status))
                                                        ? 0x1eU
                                                        : 0x1fU)))))))
                        : 0U))));
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_comb__TOP__1(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_comb__TOP__1\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_input = 
        ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__is_positive_selu)
          ? vlSelfRef.TB_gpnae__DOT__dut__DOT__fifo_data_registered
          : vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_result);
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_comb__TOP__2(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_comb__TOP__2\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__dut__DOT__next_state = 0U;
    if ((4U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__current_state))) {
        if ((2U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__current_state))) {
            vlSelfRef.TB_gpnae__DOT__dut__DOT__next_state 
                = ((1U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__current_state))
                    ? ((4U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__done_delay))
                        ? 2U : 7U) : ((4U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__done_delay))
                                       ? 2U : 6U));
        } else if ((1U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__current_state))) {
            vlSelfRef.TB_gpnae__DOT__dut__DOT__next_state 
                = ((4U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__done_delay))
                    ? 2U : 5U);
        } else if ((4U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__done_delay))) {
            vlSelfRef.TB_gpnae__DOT__dut__DOT__next_state = 2U;
        }
    } else {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__next_state 
            = ((2U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__current_state))
                ? ((1U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__current_state))
                    ? ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__is_positive_selu)
                        ? 4U : 5U) : ((1U == (IData)(vlSelfRef.TB_gpnae__DOT__control_word_i))
                                       ? 3U : ((2U 
                                                == (IData)(vlSelfRef.TB_gpnae__DOT__control_word_i))
                                                ? 6U
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelfRef.TB_gpnae__DOT__control_word_i))
                                                    ? 7U
                                                    : 0U))))
                : ((1U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__current_state))
                    ? 2U : ((IData)(vlSelfRef.TB_gpnae__DOT__start_i)
                             ? 1U : 0U)));
    }
    vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_clk = ((IData)(vlSelfRef.TB_gpnae__DOT__clk) 
                                                   & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_enable));
    vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT____Vcellinp__fp32_down_inst__clk_i 
        = ((~ (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__is_positive_selu)) 
           & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_clk));
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__130(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__130\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_const = 
        ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__is_positive_selu)
          ? 0x3f867d5fU : 0x3fd62d7dU);
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__131(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__131\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__valid_multiply 
        = vlSelfRef.__Vdly__TB_gpnae__DOT__dut__DOT__selu_inst__DOT__valid_multiply;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_comb__TOP__3(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_comb__TOP__3\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT____Vcellinp__multiply_32_inst__A 
        = ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__is_positive_selu)
            ? vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_input
            : (((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__Sign) 
                << 0x1fU) | (((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__Exponent) 
                              << 0x17U) | vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__Mantissa)));
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__132(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__132\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TB_gpnae__DOT__rstn_i) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
            [1U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v2 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v2 = 1U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
            [2U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v3 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v3 = 1U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
            [3U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v4 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v4 = 1U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
            [4U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v5 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v5 = 1U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
            [5U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v6 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v6 = 1U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
            [6U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v7 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v7 = 1U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
            [7U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v8 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v8 = 1U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
            [8U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v9 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v9 = 1U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
            [9U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v10 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v10 = 1U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
            [0xaU];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v11 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v11 = 1U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
            [0xbU];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v12 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v12 = 1U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
            [0xcU];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v13 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v13 = 1U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
            [0xdU];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v14 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v14 = 1U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
            [0xeU];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v15 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v15 = 1U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
            [0xfU];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v16 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v16 = 1U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
            [0x10U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v17 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v17 = 1U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
            [0x11U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v18 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v18 = 1U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
            [0x12U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v19 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v19 = 1U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
            [0x13U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v20 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v20 = 1U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
            [0x14U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v21 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v21 = 1U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
            [0x15U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v22 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v22 = 1U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
            [0x16U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v23 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v23 = 1U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
            [0x17U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v24 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v24 = 1U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage
            [0x18U];
        vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v25 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT____Vlvbound_h72d54774__0;
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v25 = 1U;
    } else {
        vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v26 = 1U;
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__133(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__133\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_reset_n) {
        if (vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__valid_stage5) {
            vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__Sign 
                = vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__sign_delayed_delayed_delayed;
        }
    } else {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__Sign = 0U;
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__134(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__134\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__valid_stage4) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__sign_delayed_delayed_delayed 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__sign_delayed_delayed;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__valid_stage3) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__check_delayed_delayed 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__check_delayed;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__sign_delayed_delayed 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__sign_delayed;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__valid_stage2) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__check_delayed 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__check;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__sign_delayed 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__sign;
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__valid_stage1) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__check 
            = ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__A_sign) 
               ^ (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__B_sign));
        vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__sign 
            = (((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__comp) 
                | (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__magcheck))
                ? (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__A_sign)
                : ((~ (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__zero)) 
                   & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__B_sign)));
    }
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__add_valid) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__B_sign 
            = (vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__add_in2 
               >> 0x1fU);
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__135(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__135\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__unnamedblk3__DOT__i = 0x19U;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__136(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__136\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.TB_gpnae__DOT__rstn_i)))) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__unnamedblk1__DOT__i = 0x19U;
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__137(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__137\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__current_phase = vlSelfRef.__Vdly__TB_gpnae__DOT__current_phase;
    vlSelfRef.TB_gpnae__DOT__processed_signals = vlSelfRef.__Vdly__TB_gpnae__DOT__processed_signals;
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_comb__TOP__4(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_comb__TOP__4\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_clk = ((IData)(vlSelfRef.TB_gpnae__DOT__clk) 
                                                  & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_enable));
    vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_clk = 
        ((IData)(vlSelfRef.TB_gpnae__DOT__clk) & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_enable));
}

extern const VlUnpacked<CData/*3:0*/, 256> VTB_gpnae__ConstPool__TABLE_hf1fe9241_0;

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__139(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__139\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*7:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__comp 
        = ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__A_Exp) 
           > (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__C_Exp));
    vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__zero 
        = (1U & (~ ((0U != (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__A_Exp)) 
                    | (0U != vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__A_Man))));
    __Vtableidx1 = (0xffU & vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__TempMan);
    vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__stage_31__DOT__cnt1 
        = VTB_gpnae__ConstPool__TABLE_hf1fe9241_0[__Vtableidx1];
    __Vtableidx2 = (0xffU & (vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__TempMan 
                             >> 8U));
    vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__stage_31__DOT__cnt2 
        = VTB_gpnae__ConstPool__TABLE_hf1fe9241_0[__Vtableidx2];
    __Vtableidx3 = (0xffU & (vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__TempMan 
                             >> 0x10U));
    vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__stage_31__DOT__cnt3 
        = VTB_gpnae__ConstPool__TABLE_hf1fe9241_0[__Vtableidx3];
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT____Vcellinp__fp32_down_inst__valid_i) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__C_Man = 0U;
    }
    vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__zerocount 
        = (0x1fU & ((8U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__stage_31__DOT__cnt3))
                     ? ((8U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__stage_31__DOT__cnt2))
                         ? ((IData)(0x10U) + (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__stage_31__DOT__cnt1))
                         : ((IData)(8U) + (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__stage_31__DOT__cnt2)))
                     : (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__stage_31__DOT__cnt3)));
    vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__magcheck 
        = ((~ (IData)((0U != ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__A_Exp) 
                              ^ (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__C_Exp))))) 
           & (vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__A_Man 
              > vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT__fp32_down_inst__DOT__C_Man));
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__142(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__142\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*7:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*7:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    CData/*7:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    CData/*7:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    CData/*7:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    // Body
    __Vtableidx7 = (0xffU & vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__TempMan1);
    vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__stage_31_1__DOT__cnt1 
        = VTB_gpnae__ConstPool__TABLE_hf1fe9241_0[__Vtableidx7];
    __Vtableidx8 = (0xffU & (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__TempMan1 
                             >> 8U));
    vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__stage_31_1__DOT__cnt2 
        = VTB_gpnae__ConstPool__TABLE_hf1fe9241_0[__Vtableidx8];
    __Vtableidx9 = (0xffU & (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__TempMan1 
                             >> 0x10U));
    vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__stage_31_1__DOT__cnt3 
        = VTB_gpnae__ConstPool__TABLE_hf1fe9241_0[__Vtableidx9];
    __Vtableidx10 = (0xffU & vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__TempMan2);
    vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__stage_31_2__DOT__cnt1 
        = VTB_gpnae__ConstPool__TABLE_hf1fe9241_0[__Vtableidx10];
    __Vtableidx11 = (0xffU & (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__TempMan2 
                              >> 8U));
    vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__stage_31_2__DOT__cnt2 
        = VTB_gpnae__ConstPool__TABLE_hf1fe9241_0[__Vtableidx11];
    __Vtableidx12 = (0xffU & (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__TempMan2 
                              >> 0x10U));
    vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__stage_31_2__DOT__cnt3 
        = VTB_gpnae__ConstPool__TABLE_hf1fe9241_0[__Vtableidx12];
    vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__zerocount1 
        = (0x1fU & ((8U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__stage_31_1__DOT__cnt3))
                     ? ((8U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__stage_31_1__DOT__cnt2))
                         ? ((IData)(0x10U) + (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__stage_31_1__DOT__cnt1))
                         : ((IData)(8U) + (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__stage_31_1__DOT__cnt2)))
                     : (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__stage_31_1__DOT__cnt3)));
    vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__zerocount2 
        = (0x1fU & ((8U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__stage_31_2__DOT__cnt3))
                     ? ((8U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__stage_31_2__DOT__cnt2))
                         ? ((IData)(0x10U) + (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__stage_31_2__DOT__cnt1))
                         : ((IData)(8U) + (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__stage_31_2__DOT__cnt2)))
                     : (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__stage_31_2__DOT__cnt3)));
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__143(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__143\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__i 
        = vlSelfRef.__Vdly__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__i;
    vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__busy 
        = vlSelfRef.__Vdly__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__busy;
    if ((vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__acc 
         >= vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__b1)) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__acc_next 
            = (0x1ffffffU & (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__acc 
                             - vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__b1));
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT____Vconcswap_1_h526a3198__0 
            = ((0x1fffffeU & (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__acc_next 
                              << 1U)) | (1U & (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__quo 
                                               >> 0x17U)));
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__acc_next 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT____Vconcswap_1_h526a3198__0;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT____Vconcswap_1_h4878d48b__0 
            = (1U | (0xfffffeU & (vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__quo 
                                  << 1U)));
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__quo_next 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT____Vconcswap_1_h4878d48b__0;
    } else {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__acc_next 
            = (0x1ffffffU & (IData)((0x1ffffffULL & 
                                     (VL_SHIFTL_QQI(49,49,32, 
                                                    (((QData)((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__acc)) 
                                                      << 0x18U) 
                                                     | (QData)((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__quo))), 1U) 
                                      >> 0x18U))));
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__quo_next 
            = (0xffffffU & (IData)((0x1ffffffffffffULL 
                                    & VL_SHIFTL_QQI(49,49,32, 
                                                    (((QData)((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__acc)) 
                                                      << 0x18U) 
                                                     | (QData)((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__divu_mantissa__DOT__quo))), 1U))));
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__145(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__145\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__valid_stage5 
        = ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_reset_n) 
           && (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__valid_stage4));
    vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__valid_stage4 
        = ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_reset_n) 
           && (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__valid_stage3));
    vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__valid_stage3 
        = ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_reset_n) 
           && (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__valid_stage2));
    vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__valid_stage2 
        = ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_reset_n) 
           && (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__valid_stage1));
    vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__valid_stage1 
        = ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_reset_n) 
           && (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__add_valid));
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__147(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__147\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v0) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[0U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v0;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v1) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[1U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v1;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v2) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[2U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v2;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v3) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[3U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v3;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v4) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[4U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v4;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v5) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[5U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v5;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v6) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[6U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v6;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v7) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[7U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v7;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v8) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[8U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v8;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v9) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[9U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v9;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v10) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[0xaU] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v10;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v11) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[0xbU] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v11;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v12) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[0xcU] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v12;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v13) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[0xdU] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v13;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v14) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[0xeU] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v14;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v15) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[0xfU] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v15;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v16) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[0x10U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v16;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v17) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[0x11U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v17;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v18) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[0x12U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v18;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v19) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[0x13U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v19;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v20) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[0x14U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v20;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v21) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[0x15U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v21;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v22) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[0x16U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v22;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v23) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[0x17U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v23;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v24) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[0x18U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v24;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v25) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[0x19U] 
            = vlSelfRef.__VdlyVal__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v25;
    }
    if (vlSelfRef.__VdlySet__TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage__v26) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[2U] = 0U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[3U] = 0U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[4U] = 0U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[5U] = 0U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[6U] = 0U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[7U] = 0U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[8U] = 0U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[9U] = 0U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[0xaU] = 0U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[0xbU] = 0U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[0xcU] = 0U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[0xdU] = 0U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[0xeU] = 0U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[0xfU] = 0U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[0x10U] = 0U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[0x11U] = 0U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[0x12U] = 0U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[0x13U] = 0U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[0x14U] = 0U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[0x15U] = 0U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[0x16U] = 0U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[0x17U] = 0U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[0x18U] = 0U;
        vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__u_divide_32__DOT__valid_stage[0x19U] = 0U;
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__148(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__148\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__add_valid) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__A_sign 
            = (vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__add_in1 
               >> 0x1fU);
        vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__A_Man 
            = (0x7fffffU & vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__add_in1);
        vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__A_Exp 
            = (0xffU & (vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__add_in1 
                        >> 0x17U));
    }
    vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__add_in1 
        = vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__coeff_data;
    if (vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__rd_en_coeff) {
        vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__coeff_data 
            = vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__coeff_rom_inst__DOT__ROM__DOT__ROM
            [(0x1fU & ((1U & ((~ (IData)(vlSelfRef.TB_gpnae__DOT__rstn_i)) 
                              | (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__reload_o)))
                        ? (IData)(vlSelfRef.TB_gpnae__DOT__terms_i)
                        : ((IData)(vlSelfRef.TB_gpnae__DOT__terms_i) 
                           - (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__term_count))))];
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__149(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__149\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__term_count 
        = ((IData)(vlSelfRef.TB_gpnae__DOT__rstn_i)
            ? (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__term_count_next)
            : 0U);
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__152(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__152\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_rd_en = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state))) {
                if ((1U & (~ (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state)))) {
                    vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_rd_en = 1U;
                }
            }
        }
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_comb__TOP__5(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_comb__TOP__5\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__done_comb = 0U;
    if ((8U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state))) {
                    if ((1U & (~ (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_valid)))) {
                        vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__done_comb = 1U;
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_comb__TOP__6(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_comb__TOP__6\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__dut__DOT__fsm_rd_en = 0U;
    if ((4U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__current_state)))) {
                if (vlSelfRef.TB_gpnae__DOT__dut__DOT__done_selu) {
                    vlSelfRef.TB_gpnae__DOT__dut__DOT__fsm_rd_en = 1U;
                }
            }
        }
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_comb__TOP__7(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_comb__TOP__7\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__reload_o = 0U;
    if ((8U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state))) {
                    if ((1U & (~ (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_valid)))) {
                        if ((0U != vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)) {
                            vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__reload_o = 1U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state) 
                         >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state)))) {
                vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__reload_o = 1U;
            }
        }
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_comb__TOP__8(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_comb__TOP__8\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__term_count_next 
        = vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__term_count;
    if ((8U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state))) {
                    if ((1U & (~ (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_valid)))) {
                        if ((0U != vlSelfRef.TB_gpnae__DOT__dut__DOT__input_fifo_inst__DOT__status)) {
                            vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__term_count_next = 0U;
                        }
                    }
                } else if (((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__term_count) 
                            < ((0x1fU & ((IData)(1U) 
                                         + (IData)(vlSelfRef.TB_gpnae__DOT__terms_i))) 
                               - (IData)(1U)))) {
                    vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__term_count_next 
                        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__term_count)));
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state) 
                         >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state)))) {
                vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__term_count_next = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_comb__TOP__9(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_comb__TOP__9\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_valid = 0U;
    if ((4U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__current_state))) {
                if ((0x10U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__done_shift_reg))) {
                    vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_valid = 1U;
                }
            }
        }
    } else if ((2U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__current_state))) {
        if ((1U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__current_state))) {
            if (vlSelfRef.TB_gpnae__DOT__dut__DOT__is_positive_selu) {
                vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_valid = 1U;
            }
        }
    }
    vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_inst__DOT____Vcellinp__fp32_down_inst__valid_i 
        = ((~ (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__is_positive_selu)) 
           & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__selu_valid));
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__154(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__154\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*7:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    __Vtableidx4 = (0xffU & vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__TempMan);
    vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__stage_31__DOT__cnt1 
        = VTB_gpnae__ConstPool__TABLE_hf1fe9241_0[__Vtableidx4];
    __Vtableidx5 = (0xffU & (vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__TempMan 
                             >> 8U));
    vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__stage_31__DOT__cnt2 
        = VTB_gpnae__ConstPool__TABLE_hf1fe9241_0[__Vtableidx5];
    __Vtableidx6 = (0xffU & (vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__TempMan 
                             >> 0x10U));
    vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__stage_31__DOT__cnt3 
        = VTB_gpnae__ConstPool__TABLE_hf1fe9241_0[__Vtableidx6];
    vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__mul_in2 
        = vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__adder_result;
    vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__zerocount 
        = (0x1fU & ((8U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__stage_31__DOT__cnt3))
                     ? ((8U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__stage_31__DOT__cnt2))
                         ? ((IData)(0x10U) + (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__stage_31__DOT__cnt1))
                         : ((IData)(8U) + (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__stage_31__DOT__cnt2)))
                     : (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__stage_31__DOT__cnt3)));
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__155(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__155\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__mul_valid = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state)))) {
                    vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__mul_valid = 1U;
                }
            }
        }
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__156(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__156\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__adder_result 
        = (((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__Sign) 
            << 0x1fU) | (((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__Exponent) 
                          << 0x17U) | vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__Mantissa));
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__157(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__157\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__add_valid = 0U;
    vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__rd_en_coeff = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state))) {
            if ((2U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state))) {
                if ((1U & (~ (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state)))) {
                    vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__add_valid = 1U;
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state))) {
                if ((1U & (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__controller_inst__DOT__current_state))) {
                    vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__rd_en_coeff = 1U;
                }
            }
        }
    }
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__158(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__158\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__comp 
        = ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__A_Exp) 
           > (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__B_Exp));
    vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__magcheck 
        = ((~ (IData)((0U != ((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__A_Exp) 
                              ^ (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__B_Exp))))) 
           & (vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__A_Man 
              > vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__B_Man));
    vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__zero 
        = (1U & (~ ((0U != (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__A_Exp)) 
                    | ((0U != vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__A_Man) 
                       | ((0U != (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__B_Exp)) 
                          | (0U != vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_inst__DOT__ADD__DOT__B_Man))))));
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_sequent__TOP__160(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_sequent__TOP__160\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__add_result 
        = (((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Sign1) 
            << 0x1fU) | (((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Exponent1) 
                          << 0x17U) | vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Mantissa1));
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_comb__TOP__10(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_comb__TOP__10\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__mux_output 
        = ((((0U == (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__select_sigtan))
              ? vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_result
              : 0U) & ((0U == (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__select_sigtan))
                        ? 0xffffffffU : 0U)) | (((1U 
                                                  == (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__select_sigtan))
                                                  ? 
                                                 (((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Sign2) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Exponent2) 
                                                      << 0x17U) 
                                                     | vlSelfRef.TB_gpnae__DOT__dut__DOT__sigtan_inst__DOT__fp32_add_sub_inst__DOT__Mantissa2))
                                                  : 0U) 
                                                & ((1U 
                                                    == (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__select_sigtan))
                                                    ? 0xffffffffU
                                                    : 0U)));
}

VL_INLINE_OPT void VTB_gpnae___024root___nba_comb__TOP__12(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___nba_comb__TOP__12\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__datapath_reset_n 
        = ((~ (IData)(vlSelfRef.TB_gpnae__DOT__dut__DOT__mac_inst__DOT__dp_reset_o)) 
           & (IData)(vlSelfRef.TB_gpnae__DOT__rstn_i));
}

void VTB_gpnae___024root___timing_resume(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___timing_resume\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h322a045f__0.resume(
                                                   "@(posedge TB_gpnae.clk)");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h89661d45__0.resume(
                                                   "@( TB_gpnae.idle_o)");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VTB_gpnae___024root___timing_commit(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___timing_commit\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h322a045f__0.commit(
                                                   "@(posedge TB_gpnae.clk)");
    }
    if ((! (0x80ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h89661d45__0.commit(
                                                   "@( TB_gpnae.idle_o)");
    }
}

void VTB_gpnae___024root___eval_triggers__act(VTB_gpnae___024root* vlSelf);

bool VTB_gpnae___024root___eval_phase__act(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___eval_phase__act\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<9> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VTB_gpnae___024root___eval_triggers__act(vlSelf);
    VTB_gpnae___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VTB_gpnae___024root___timing_resume(vlSelf);
        VTB_gpnae___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void VTB_gpnae___024root___eval_nba(VTB_gpnae___024root* vlSelf);

bool VTB_gpnae___024root___eval_phase__nba(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___eval_phase__nba\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VTB_gpnae___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_gpnae___024root___dump_triggers__nba(VTB_gpnae___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_gpnae___024root___dump_triggers__act(VTB_gpnae___024root* vlSelf);
#endif  // VL_DEBUG

void VTB_gpnae___024root___eval(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___eval\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VTB_gpnae___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/admin/Desktop/SIENNA/GNAE/testbenches/TB_gpnae.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VTB_gpnae___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/admin/Desktop/SIENNA/GNAE/testbenches/TB_gpnae.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VTB_gpnae___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VTB_gpnae___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VTB_gpnae___024root___eval_debug_assertions(VTB_gpnae___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_gpnae___024root___eval_debug_assertions\n"); );
    VTB_gpnae__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
