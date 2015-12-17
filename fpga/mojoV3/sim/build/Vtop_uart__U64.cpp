// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_uart__U64.h"    // For This
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vtop_uart__U64) {
    // Reset internal values
    // Reset structure values
    clk_i = VL_RAND_RESET_I(1);
    rst_i = VL_RAND_RESET_I(1);
    data_i = VL_RAND_RESET_I(8);
    data_o = VL_RAND_RESET_I(8);
    wr_i = VL_RAND_RESET_I(1);
    rd_i = VL_RAND_RESET_I(1);
    tx_busy_o = VL_RAND_RESET_I(1);
    rx_ready_o = VL_RAND_RESET_I(1);
    break_o = VL_RAND_RESET_I(1);
    rxd_i = VL_RAND_RESET_I(1);
    txd_o = VL_RAND_RESET_I(1);
    __PVT__tx_buf = VL_RAND_RESET_I(8);
    __PVT__tx_buf_full = VL_RAND_RESET_I(1);
    __PVT__tx_busy = VL_RAND_RESET_I(1);
    __PVT__tx_bits = VL_RAND_RESET_I(4);
    __PVT__tx_count = VL_RAND_RESET_I(32);
    __PVT__tx_shift_reg = VL_RAND_RESET_I(8);
    __PVT__i_rxd = VL_RAND_RESET_I(1);
    __PVT__rx_bits = VL_RAND_RESET_I(4);
    __PVT__rx_count = VL_RAND_RESET_I(32);
    __PVT__rx_shift_reg = VL_RAND_RESET_I(8);
    __Vdly__rx_bits = VL_RAND_RESET_I(4);
    __Vdly__rx_count = VL_RAND_RESET_I(32);
    __Vdly__rx_shift_reg = VL_RAND_RESET_I(8);
    __Vdly__tx_count = VL_RAND_RESET_I(32);
    __Vdly__tx_bits = VL_RAND_RESET_I(4);
    __Vdly__tx_shift_reg = VL_RAND_RESET_I(8);
    __Vdly__tx_buf = VL_RAND_RESET_I(8);
    __Vdly__tx_buf_full = VL_RAND_RESET_I(1);
}

void Vtop_uart__U64::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtop_uart__U64::~Vtop_uart__U64() {
}

//--------------------
// Internal Methods

void Vtop_uart__U64::_sequent__TOP__v__u_soc__u_uart__u1_uart__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            Vtop_uart__U64::_sequent__TOP__v__u_soc__u_uart__u1_uart__1\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__rx_bits 
	= vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__rx_bits;
    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__rx_count 
	= vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__rx_count;
    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__rx_shift_reg 
	= vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__rx_shift_reg;
    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__tx_count 
	= vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__tx_count;
    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__tx_bits 
	= vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__tx_bits;
    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__tx_shift_reg 
	= vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__tx_shift_reg;
    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__tx_buf 
	= vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__tx_buf;
    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__tx_buf_full 
	= vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__tx_buf_full;
    // ALWAYS at ../../../rtl/peripheral/uart.v:117
    if (vlSymsp->TOP__v__u_soc__u_uart__u1_uart.rst_i) {
	vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__rx_bits = 0;
	vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__rx_count = 0;
	vlSymsp->TOP__v__u_soc__u_uart__u1_uart.rx_ready_o = 0;
	vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__rx_shift_reg = 0;
	vlSymsp->TOP__v__u_soc__u_uart__u1_uart.data_o = 0;
	vlSymsp->TOP__v__u_soc__u_uart__u1_uart.break_o = 0;
    } else {
	if (vlSymsp->TOP__v__u_soc__u_uart__u1_uart.rd_i) {
	    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.rx_ready_o = 0;
	}
	if ((0 != vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__rx_count)) {
	    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__rx_count 
		= (vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__rx_count 
		   - (IData)(1));
	} else {
	    if ((0 == (IData)(vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__rx_bits))) {
		vlSymsp->TOP__v__u_soc__u_uart__u1_uart.break_o = 0;
		if ((1 & (~ (IData)(vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__i_rxd)))) {
		    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__rx_count = 0x32;
		    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__rx_bits = 1;
		}
	    } else {
		if ((1 == (IData)(vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__rx_bits))) {
		    if (vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__i_rxd) {
			vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__rx_bits = 0;
		    } else {
			vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__rx_bits 
			    = (0xf & ((IData)(1) + (IData)(vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__rx_bits)));
			vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__rx_count = 0x64;
			vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__rx_shift_reg = 0;
		    }
		} else {
		    if ((0xa == (IData)(vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__rx_bits))) {
			if (vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__i_rxd) {
			    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__rx_count = 0;
			    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__rx_bits = 0;
			    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.data_o 
				= vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__rx_shift_reg;
			    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.rx_ready_o = 1;
			} else {
			    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__rx_count = 0x64;
			    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__rx_bits = 0;
			    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.break_o = 1;
			}
		    } else {
			vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__rx_bits 
			    = (0xf & ((IData)(1) + (IData)(vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__rx_bits)));
			vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__rx_shift_reg 
			    = ((0x7f & (IData)(vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__rx_shift_reg)) 
			       | ((IData)(vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__i_rxd) 
				  << 7));
			vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__rx_shift_reg 
			    = ((0x80 & (IData)(vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__rx_shift_reg)) 
			       | (0x7f & ((IData)(vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__rx_shift_reg) 
					  >> 1)));
			vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__rx_count = 0x64;
		    }
		}
	    }
	}
    }
    // ALWAYS at ../../../rtl/peripheral/uart.v:214
    if (vlSymsp->TOP__v__u_soc__u_uart__u1_uart.rst_i) {
	vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__tx_count = 0;
	vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__tx_bits = 0;
	vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__tx_busy = 0;
	vlSymsp->TOP__v__u_soc__u_uart__u1_uart.txd_o = 1;
	vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__tx_shift_reg = 0;
	vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__tx_buf = 0;
	vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__tx_buf_full = 0;
    } else {
	if (vlSymsp->TOP__v__u_soc__u_uart__u1_uart.wr_i) {
	    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__tx_buf 
		= vlSymsp->TOP__v__u_soc__u_uart__u1_uart.data_i;
	    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__tx_buf_full = 1;
	}
	if ((0 != vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__tx_count)) {
	    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__tx_count 
		= (vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__tx_count 
		   - (IData)(1));
	} else {
	    if ((0 == (IData)(vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__tx_bits))) {
		vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__tx_busy = 0;
		if (vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__tx_buf_full) {
		    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__tx_shift_reg 
			= vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__tx_buf;
		    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__tx_busy = 1;
		    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.txd_o = 0;
		    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__tx_buf_full = 0;
		    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__tx_bits = 1;
		    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__tx_count = 0x64;
		}
	    } else {
		if ((9 == (IData)(vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__tx_bits))) {
		    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.txd_o = 1;
		    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__tx_bits = 0;
		    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__tx_count = 0x64;
		} else {
		    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__tx_bits 
			= (0xf & ((IData)(1) + (IData)(vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__tx_bits)));
		    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.txd_o 
			= (1 & (IData)(vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__tx_shift_reg));
		    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__tx_count = 0x64;
		    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__tx_shift_reg 
			= ((0x80 & (IData)(vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__tx_shift_reg)) 
			   | (0x7f & ((IData)(vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__tx_shift_reg) 
				      >> 1)));
		}
	    }
	}
    }
    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__rx_count 
	= vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__rx_count;
    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__rx_bits 
	= vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__rx_bits;
    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__rx_shift_reg 
	= vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__rx_shift_reg;
    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__tx_count 
	= vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__tx_count;
    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__tx_bits 
	= vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__tx_bits;
    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__tx_buf 
	= vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__tx_buf;
    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__tx_shift_reg 
	= vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__tx_shift_reg;
    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__tx_buf_full 
	= vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__Vdly__tx_buf_full;
    // ALWAYS at ../../../rtl/peripheral/uart.v:106
    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__i_rxd 
	= ((IData)(vlSymsp->TOP__v__u_soc__u_uart__u1_uart.rst_i) 
	   | (IData)(vlSymsp->TOP__v__u_soc__u_uart__u1_uart.rxd_i));
}

void Vtop_uart__U64::_combo__TOP__v__u_soc__u_uart__u1_uart__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            Vtop_uart__U64::_combo__TOP__v__u_soc__u_uart__u1_uart__2\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_soc__u_uart__u1_uart.tx_busy_o 
	= (((IData)(vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__tx_busy) 
	    | (IData)(vlSymsp->TOP__v__u_soc__u_uart__u1_uart.__PVT__tx_buf_full)) 
	   | (IData)(vlSymsp->TOP__v__u_soc__u_uart__u1_uart.wr_i));
}
