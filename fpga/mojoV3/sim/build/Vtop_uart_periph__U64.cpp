// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_uart_periph__U64.h" // For This
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vtop_uart_periph__U64) {
    VL_CELL (u1_uart, Vtop_uart__U64);
    // Reset internal values
    // Reset structure values
    clk_i = VL_RAND_RESET_I(1);
    rst_i = VL_RAND_RESET_I(1);
    intr_o = VL_RAND_RESET_I(1);
    tx_o = VL_RAND_RESET_I(1);
    rx_i = VL_RAND_RESET_I(1);
    addr_i = VL_RAND_RESET_I(8);
    data_o = VL_RAND_RESET_I(32);
    data_i = VL_RAND_RESET_I(32);
    we_i = VL_RAND_RESET_I(1);
    stb_i = VL_RAND_RESET_I(1);
    __PVT__uart_tx_data_q = VL_RAND_RESET_I(8);
    __PVT__uart_wr_q = VL_RAND_RESET_I(1);
    __PVT__uart_rd_q = VL_RAND_RESET_I(1);
}

void Vtop_uart_periph__U64::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtop_uart_periph__U64::~Vtop_uart_periph__U64() {
}

//--------------------
// Internal Methods

void Vtop_uart_periph__U64::_combo__TOP__v__u_soc__u_uart__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vtop_uart_periph__U64::_combo__TOP__v__u_soc__u_uart__1\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.clk_i = vlSymsp->TOP__v__u_soc__u_uart.clk_i;
}

void Vtop_uart_periph__U64::_sequent__TOP__v__u_soc__u_uart__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vtop_uart_periph__U64::_sequent__TOP__v__u_soc__u_uart__3\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../rtl/peripheral/uart_periph.v:159
    vlSymsp->TOP__v__u_soc__u_uart.__PVT__uart_rd_q 
	= ((~ (IData)(vlSymsp->TOP__v__u_soc__u_uart.rst_i)) 
	   & (((~ (IData)(vlSymsp->TOP__v__u_soc__u_uart.we_i)) 
	       & (IData)(vlSymsp->TOP__v__u_soc__u_uart.stb_i)) 
	      & (8 == (IData)(vlSymsp->TOP__v__u_soc__u_uart.addr_i))));
    // ALWAYS at ../../../rtl/peripheral/uart_periph.v:108
    if (vlSymsp->TOP__v__u_soc__u_uart.rst_i) {
	vlSymsp->TOP__v__u_soc__u_uart.__PVT__uart_tx_data_q = 0;
	vlSymsp->TOP__v__u_soc__u_uart.__PVT__uart_wr_q = 0;
    } else {
	vlSymsp->TOP__v__u_soc__u_uart.__PVT__uart_wr_q = 0;
	if (((IData)(vlSymsp->TOP__v__u_soc__u_uart.we_i) 
	     & (IData)(vlSymsp->TOP__v__u_soc__u_uart.stb_i))) {
	    if ((8 == (IData)(vlSymsp->TOP__v__u_soc__u_uart.addr_i))) {
		vlSymsp->TOP__v__u_soc__u_uart.__PVT__uart_tx_data_q 
		    = (0xff & vlSymsp->TOP__v__u_soc__u_uart.data_i);
		vlSymsp->TOP__v__u_soc__u_uart.__PVT__uart_wr_q = 1;
	    }
	}
    }
}

void Vtop_uart_periph__U64::_sequent__TOP__v__u_soc__u_uart__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vtop_uart_periph__U64::_sequent__TOP__v__u_soc__u_uart__4\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_soc__u_uart.intr_o = vlSymsp->TOP__v__u_soc__u_uart__u1_uart.rx_ready_o;
    vlSymsp->TOP__v__u_soc__u_uart.tx_o = vlSymsp->TOP__v__u_soc__u_uart__u1_uart.txd_o;
}

void Vtop_uart_periph__U64::_settle__TOP__v__u_soc__u_uart__5(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vtop_uart_periph__U64::_settle__TOP__v__u_soc__u_uart__5\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.rd_i = vlSymsp->TOP__v__u_soc__u_uart.__PVT__uart_rd_q;
    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.data_i 
	= vlSymsp->TOP__v__u_soc__u_uart.__PVT__uart_tx_data_q;
    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.wr_i = vlSymsp->TOP__v__u_soc__u_uart.__PVT__uart_wr_q;
    vlSymsp->TOP__v__u_soc__u_uart.intr_o = vlSymsp->TOP__v__u_soc__u_uart__u1_uart.rx_ready_o;
    vlSymsp->TOP__v__u_soc__u_uart.tx_o = vlSymsp->TOP__v__u_soc__u_uart__u1_uart.txd_o;
    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.rst_i = vlSymsp->TOP__v__u_soc__u_uart.rst_i;
    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.rxd_i = vlSymsp->TOP__v__u_soc__u_uart.rx_i;
}

void Vtop_uart_periph__U64::_sequent__TOP__v__u_soc__u_uart__6(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vtop_uart_periph__U64::_sequent__TOP__v__u_soc__u_uart__6\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.rd_i = vlSymsp->TOP__v__u_soc__u_uart.__PVT__uart_rd_q;
    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.data_i 
	= vlSymsp->TOP__v__u_soc__u_uart.__PVT__uart_tx_data_q;
    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.wr_i = vlSymsp->TOP__v__u_soc__u_uart.__PVT__uart_wr_q;
}

void Vtop_uart_periph__U64::_combo__TOP__v__u_soc__u_uart__7(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vtop_uart_periph__U64::_combo__TOP__v__u_soc__u_uart__7\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.rst_i = vlSymsp->TOP__v__u_soc__u_uart.rst_i;
    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.rxd_i = vlSymsp->TOP__v__u_soc__u_uart.rx_i;
}

void Vtop_uart_periph__U64::_combo__TOP__v__u_soc__u_uart__8(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vtop_uart_periph__U64::_combo__TOP__v__u_soc__u_uart__8\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../rtl/peripheral/uart_periph.v:140
    vlSymsp->TOP__v__u_soc__u_uart.data_o = 0;
    if ((4 == (IData)(vlSymsp->TOP__v__u_soc__u_uart.addr_i))) {
	vlSymsp->TOP__v__u_soc__u_uart.data_o = ((0xfffffffe 
						  & vlSymsp->TOP__v__u_soc__u_uart.data_o) 
						 | (IData)(vlSymsp->TOP__v__u_soc__u_uart__u1_uart.rx_ready_o));
	vlSymsp->TOP__v__u_soc__u_uart.data_o = ((0xfffffff7 
						  & vlSymsp->TOP__v__u_soc__u_uart.data_o) 
						 | ((IData)(vlSymsp->TOP__v__u_soc__u_uart__u1_uart.tx_busy_o) 
						    << 3));
    } else {
	vlSymsp->TOP__v__u_soc__u_uart.data_o = ((8 
						  == (IData)(vlSymsp->TOP__v__u_soc__u_uart.addr_i))
						  ? 
						 ((0xffffff00 
						   & vlSymsp->TOP__v__u_soc__u_uart.data_o) 
						  | (IData)(vlSymsp->TOP__v__u_soc__u_uart__u1_uart.data_o))
						  : 0);
    }
}
