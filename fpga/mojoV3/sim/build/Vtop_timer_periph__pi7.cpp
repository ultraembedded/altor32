// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_timer_periph__pi7.h" // For This
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vtop_timer_periph__pi7) {
    // Reset internal values
    // Reset structure values
    clk_i = VL_RAND_RESET_I(1);
    rst_i = VL_RAND_RESET_I(1);
    intr_systick_o = VL_RAND_RESET_I(1);
    intr_hires_o = VL_RAND_RESET_I(1);
    addr_i = VL_RAND_RESET_I(8);
    data_o = VL_RAND_RESET_I(32);
    data_i = VL_RAND_RESET_I(32);
    we_i = VL_RAND_RESET_I(1);
    stb_i = VL_RAND_RESET_I(1);
    __PVT__systick_count = VL_RAND_RESET_I(32);
}

void Vtop_timer_periph__pi7::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtop_timer_periph__pi7::~Vtop_timer_periph__pi7() {
}

//--------------------
// Internal Methods

void Vtop_timer_periph__pi7::_initial__TOP__v__u_soc__u_timer(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vtop_timer_periph__pi7::_initial__TOP__v__u_soc__u_timer\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at ../../../rtl/peripheral/timer_periph.v:175
    vlSymsp->TOP__v__u_soc__u_timer.intr_systick_o = 0;
    // INITIAL at ../../../rtl/peripheral/timer_periph.v:219
    vlSymsp->TOP__v__u_soc__u_timer.intr_hires_o = 0;
}

void Vtop_timer_periph__pi7::_sequent__TOP__v__u_soc__u_timer__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vtop_timer_periph__pi7::_sequent__TOP__v__u_soc__u_timer__1\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../rtl/peripheral/timer_periph.v:167
    vlSymsp->TOP__v__u_soc__u_timer.__PVT__systick_count = 0;
}

void Vtop_timer_periph__pi7::_combo__TOP__v__u_soc__u_timer__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vtop_timer_periph__pi7::_combo__TOP__v__u_soc__u_timer__2\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../rtl/peripheral/timer_periph.v:251
    vlSymsp->TOP__v__u_soc__u_timer.data_o = ((0 == (IData)(vlSymsp->TOP__v__u_soc__u_timer.addr_i))
					       ? vlSymsp->TOP__v__u_soc__u_timer.__PVT__systick_count
					       : ((4 
						   == (IData)(vlSymsp->TOP__v__u_soc__u_timer.addr_i))
						   ? vlSymsp->TOP__v__u_soc__u_timer.__PVT__systick_count
						   : 0));
}
