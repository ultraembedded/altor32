// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_soc__pi2.h"     // For This
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vtop_soc__pi2) {
    VL_CELL (u_uart, Vtop_uart_periph__U64);
    VL_CELL (u_timer, Vtop_timer_periph__pi7);
    VL_CELL (u_intr, Vtop_intr_periph__E0);
    // Reset internal values
    // Reset structure values
    clk_i = VL_RAND_RESET_I(1);
    rst_i = VL_RAND_RESET_I(1);
    ext_intr_i = VL_RAND_RESET_I(2);
    intr_o = VL_RAND_RESET_I(1);
    uart_tx_o = VL_RAND_RESET_I(1);
    uart_rx_i = VL_RAND_RESET_I(1);
    io_addr_i = VL_RAND_RESET_I(32);
    io_data_i = VL_RAND_RESET_I(32);
    io_data_o = VL_RAND_RESET_I(32);
    io_we_i = VL_RAND_RESET_I(1);
    io_stb_i = VL_RAND_RESET_I(1);
    io_ack_o = VL_RAND_RESET_I(1);
    __PVT__gpio = VL_RAND_RESET_I(8);
    __PVT__uart0_we = VL_RAND_RESET_I(1);
    __PVT__uart0_stb = VL_RAND_RESET_I(1);
    __PVT__timer_we = VL_RAND_RESET_I(1);
    __PVT__timer_stb = VL_RAND_RESET_I(1);
    __PVT__intr_we = VL_RAND_RESET_I(1);
    __PVT__intr_stb = VL_RAND_RESET_I(1);
    __PVT__gpio0_data_r = VL_RAND_RESET_I(32);
    __PVT__gpio0_we = VL_RAND_RESET_I(1);
    __PVT__gpio0_stb = VL_RAND_RESET_I(1);
    __Vcellout__u_gpio0__dat_o = VL_RAND_RESET_I(8);
    __PVT__u_gpio0__DOT__ctrl = VL_RAND_RESET_I(8);
    __PVT__u_gpio0__DOT__line = VL_RAND_RESET_I(8);
    __PVT__u_gpio0__DOT__llgpio = VL_RAND_RESET_I(8);
}

void Vtop_soc__pi2::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtop_soc__pi2::~Vtop_soc__pi2() {
}

//--------------------
// Internal Methods

bool Vtop_soc__pi2::get_uart_wr() {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_soc__pi2::get_uart_wr\n"); );
    // Variables
    VL_OUT8(get_uart_wr__Vfuncrtn,0,0);
    //char	__VpadToAlign5[3];
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    get_uart_wr__Vfuncrtn = ((IData)(vlSymsp->TOP__v__u_soc.__PVT__uart0_stb) 
			     & (IData)(vlSymsp->TOP__v__u_soc.__PVT__uart0_we));
    // Final
    return (get_uart_wr__Vfuncrtn);
}

uint32_t Vtop_soc__pi2::get_uart_data() {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_soc__pi2::get_uart_data\n"); );
    // Variables
    VL_OUT8(get_uart_data__Vfuncrtn,7,0);
    //char	__VpadToAlign29[3];
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    get_uart_data__Vfuncrtn = (0xff & vlSymsp->TOP__v__u_soc.io_data_i);
    // Final
    return (get_uart_data__Vfuncrtn);
}

void Vtop_soc__pi2::_settle__TOP__v__u_soc__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_soc__pi2::_settle__TOP__v__u_soc__1\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_soc__u_timer.rst_i = vlSymsp->TOP__v__u_soc.rst_i;
    vlSymsp->TOP__v__u_soc__u_intr.intr_ext_i = vlSymsp->TOP__v__u_soc.ext_intr_i;
}

void Vtop_soc__pi2::_settle__TOP__v__u_soc__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_soc__pi2::_settle__TOP__v__u_soc__3\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_soc__u_uart.rx_i = vlSymsp->TOP__v__u_soc.uart_rx_i;
    vlSymsp->TOP__v__u_soc__u_timer.clk_i = vlSymsp->TOP__v__u_soc.clk_i;
    vlSymsp->TOP__v__u_soc__u_intr.clk_i = vlSymsp->TOP__v__u_soc.clk_i;
    vlSymsp->TOP__v__u_soc__u_uart.clk_i = vlSymsp->TOP__v__u_soc.clk_i;
}

void Vtop_soc__pi2::_sequent__TOP__v__u_soc__5(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_soc__pi2::_sequent__TOP__v__u_soc__5\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../rtl/peripheral/gpio.v:136
    vlSymsp->TOP__v__u_soc.__Vcellout__u_gpio0__dat_o 
	= ((4 & vlSymsp->TOP__v__u_soc.io_addr_i) ? (IData)(vlSymsp->TOP__v__u_soc.__PVT__u_gpio0__DOT__llgpio)
	    : (IData)(vlSymsp->TOP__v__u_soc.__PVT__u_gpio0__DOT__ctrl));
    // ALWAYS at ../../../rtl/peripheral/gpio.v:122
    if (vlSymsp->TOP__v__u_soc.rst_i) {
	vlSymsp->TOP__v__u_soc.__PVT__u_gpio0__DOT__ctrl = 0;
	vlSymsp->TOP__v__u_soc.__PVT__u_gpio0__DOT__line = 0;
    } else {
	if (((IData)(vlSymsp->TOP__v__u_soc.__PVT__gpio0_stb) 
	     & (IData)(vlSymsp->TOP__v__u_soc.__PVT__gpio0_we))) {
	    if ((4 & vlSymsp->TOP__v__u_soc.io_addr_i)) {
		vlSymsp->TOP__v__u_soc.__PVT__u_gpio0__DOT__line 
		    = (0xff & vlSymsp->TOP__v__u_soc.io_data_i);
	    } else {
		vlSymsp->TOP__v__u_soc.__PVT__u_gpio0__DOT__ctrl 
		    = (0xff & vlSymsp->TOP__v__u_soc.io_data_i);
	    }
	}
    }
}

void Vtop_soc__pi2::_sequent__TOP__v__u_soc__6(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_soc__pi2::_sequent__TOP__v__u_soc__6\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../rtl/soc/soc_pif8.v:208
    if (vlSymsp->TOP__v__u_soc.rst_i) {
	vlSymsp->TOP__v__u_soc.io_data_o = 0;
	vlSymsp->TOP__v__u_soc.io_ack_o = 0;
    } else {
	if (vlSymsp->TOP__v__u_soc.io_stb_i) {
	    vlSymsp->TOP__v__u_soc.io_data_o = ((0x800 
						 & vlSymsp->TOP__v__u_soc.io_addr_i)
						 ? 0
						 : 
						((0x400 
						  & vlSymsp->TOP__v__u_soc.io_addr_i)
						  ? 0
						  : 
						 ((0x200 
						   & vlSymsp->TOP__v__u_soc.io_addr_i)
						   ? 
						  ((0x100 
						    & vlSymsp->TOP__v__u_soc.io_addr_i)
						    ? vlSymsp->TOP__v__u_soc.__PVT__gpio0_data_r
						    : vlSymsp->TOP__v__u_soc__u_intr.data_o)
						   : 
						  ((0x100 
						    & vlSymsp->TOP__v__u_soc.io_addr_i)
						    ? vlSymsp->TOP__v__u_soc__u_timer.data_o
						    : vlSymsp->TOP__v__u_soc__u_uart.data_o))));
	}
	vlSymsp->TOP__v__u_soc.io_ack_o = vlSymsp->TOP__v__u_soc.io_stb_i;
    }
}

void Vtop_soc__pi2::_settle__TOP__v__u_soc__7(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_soc__pi2::_settle__TOP__v__u_soc__7\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_soc.__PVT__gpio0_data_r = ((0xffffff00 
						   & vlSymsp->TOP__v__u_soc.__PVT__gpio0_data_r) 
						  | (IData)(vlSymsp->TOP__v__u_soc.__Vcellout__u_gpio0__dat_o));
}

void Vtop_soc__pi2::_sequent__TOP__v__u_soc__8(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_soc__pi2::_sequent__TOP__v__u_soc__8\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_soc.intr_o = vlSymsp->TOP__v__u_soc__u_intr.intr_o;
}

void Vtop_soc__pi2::_combo__TOP__v__u_soc__10(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_soc__pi2::_combo__TOP__v__u_soc__10\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_soc__u_intr.rst_i = vlSymsp->TOP__v__u_soc.rst_i;
    vlSymsp->TOP__v__u_soc__u_uart.rst_i = vlSymsp->TOP__v__u_soc.rst_i;
}

void Vtop_soc__pi2::_settle__TOP__v__u_soc__11(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_soc__pi2::_settle__TOP__v__u_soc__11\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_soc__u_intr.rst_i = vlSymsp->TOP__v__u_soc.rst_i;
    vlSymsp->TOP__v__u_soc__u_intr.intr3_i = 0;
    vlSymsp->TOP__v__u_soc__u_intr.intr4_i = 0;
    vlSymsp->TOP__v__u_soc__u_intr.intr5_i = 0;
    vlSymsp->TOP__v__u_soc__u_intr.intr6_i = 0;
    vlSymsp->TOP__v__u_soc__u_intr.intr7_i = 0;
    vlSymsp->TOP__v__u_soc__u_intr.intr1_i = vlSymsp->TOP__v__u_soc__u_timer.intr_systick_o;
    vlSymsp->TOP__v__u_soc__u_intr.intr2_i = vlSymsp->TOP__v__u_soc__u_timer.intr_hires_o;
    vlSymsp->TOP__v__u_soc.intr_o = vlSymsp->TOP__v__u_soc__u_intr.intr_o;
    vlSymsp->TOP__v__u_soc__u_uart.rst_i = vlSymsp->TOP__v__u_soc.rst_i;
}

void Vtop_soc__pi2::_settle__TOP__v__u_soc__12(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_soc__pi2::_settle__TOP__v__u_soc__12\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_soc__u_intr.intr0_i = vlSymsp->TOP__v__u_soc__u_uart.intr_o;
    vlSymsp->TOP__v__u_soc.uart_tx_o = vlSymsp->TOP__v__u_soc__u_uart.tx_o;
}

void Vtop_soc__pi2::_settle__TOP__v__u_soc__14(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_soc__pi2::_settle__TOP__v__u_soc__14\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_soc__u_uart.data_i = vlSymsp->TOP__v__u_soc.io_data_i;
    vlSymsp->TOP__v__u_soc__u_timer.data_i = vlSymsp->TOP__v__u_soc.io_data_i;
    vlSymsp->TOP__v__u_soc__u_intr.data_i = vlSymsp->TOP__v__u_soc.io_data_i;
    vlSymsp->TOP__v__u_soc__u_timer.addr_i = (0xff 
					      & vlSymsp->TOP__v__u_soc.io_addr_i);
    vlSymsp->TOP__v__u_soc__u_intr.addr_i = (0xff & vlSymsp->TOP__v__u_soc.io_addr_i);
    vlSymsp->TOP__v__u_soc__u_uart.addr_i = (0xff & vlSymsp->TOP__v__u_soc.io_addr_i);
    // ALWAYS at ../../../rtl/soc/soc_pif8.v:128
    vlSymsp->TOP__v__u_soc.__PVT__uart0_we = 0;
    vlSymsp->TOP__v__u_soc.__PVT__uart0_stb = 0;
    vlSymsp->TOP__v__u_soc.__PVT__timer_we = 0;
    vlSymsp->TOP__v__u_soc.__PVT__timer_stb = 0;
    vlSymsp->TOP__v__u_soc.__PVT__intr_we = 0;
    vlSymsp->TOP__v__u_soc.__PVT__intr_stb = 0;
    vlSymsp->TOP__v__u_soc.__PVT__gpio0_we = 0;
    vlSymsp->TOP__v__u_soc.__PVT__gpio0_stb = 0;
    if ((1 & (~ (vlSymsp->TOP__v__u_soc.io_addr_i >> 0xb)))) {
	if ((1 & (~ (vlSymsp->TOP__v__u_soc.io_addr_i 
		     >> 0xa)))) {
	    if ((0x200 & vlSymsp->TOP__v__u_soc.io_addr_i)) {
		if ((0x100 & vlSymsp->TOP__v__u_soc.io_addr_i)) {
		    vlSymsp->TOP__v__u_soc.__PVT__gpio0_we 
			= vlSymsp->TOP__v__u_soc.io_we_i;
		    vlSymsp->TOP__v__u_soc.__PVT__gpio0_stb 
			= vlSymsp->TOP__v__u_soc.io_stb_i;
		} else {
		    vlSymsp->TOP__v__u_soc.__PVT__intr_we 
			= vlSymsp->TOP__v__u_soc.io_we_i;
		    vlSymsp->TOP__v__u_soc.__PVT__intr_stb 
			= vlSymsp->TOP__v__u_soc.io_stb_i;
		}
	    } else {
		if ((0x100 & vlSymsp->TOP__v__u_soc.io_addr_i)) {
		    vlSymsp->TOP__v__u_soc.__PVT__timer_we 
			= vlSymsp->TOP__v__u_soc.io_we_i;
		    vlSymsp->TOP__v__u_soc.__PVT__timer_stb 
			= vlSymsp->TOP__v__u_soc.io_stb_i;
		} else {
		    vlSymsp->TOP__v__u_soc.__PVT__uart0_we 
			= vlSymsp->TOP__v__u_soc.io_we_i;
		    vlSymsp->TOP__v__u_soc.__PVT__uart0_stb 
			= vlSymsp->TOP__v__u_soc.io_stb_i;
		}
	    }
	}
    }
}

void Vtop_soc__pi2::_combo__TOP__v__u_soc__15(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_soc__pi2::_combo__TOP__v__u_soc__15\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_soc__u_uart.data_i = vlSymsp->TOP__v__u_soc.io_data_i;
    vlSymsp->TOP__v__u_soc__u_timer.data_i = vlSymsp->TOP__v__u_soc.io_data_i;
    vlSymsp->TOP__v__u_soc__u_intr.data_i = vlSymsp->TOP__v__u_soc.io_data_i;
    vlSymsp->TOP__v__u_soc__u_timer.addr_i = (0xff 
					      & vlSymsp->TOP__v__u_soc.io_addr_i);
    vlSymsp->TOP__v__u_soc__u_intr.addr_i = (0xff & vlSymsp->TOP__v__u_soc.io_addr_i);
    vlSymsp->TOP__v__u_soc__u_uart.addr_i = (0xff & vlSymsp->TOP__v__u_soc.io_addr_i);
    // ALWAYS at ../../../rtl/soc/soc_pif8.v:128
    vlSymsp->TOP__v__u_soc.__PVT__uart0_we = 0;
    vlSymsp->TOP__v__u_soc.__PVT__uart0_stb = 0;
    vlSymsp->TOP__v__u_soc.__PVT__timer_we = 0;
    vlSymsp->TOP__v__u_soc.__PVT__timer_stb = 0;
    vlSymsp->TOP__v__u_soc.__PVT__intr_we = 0;
    vlSymsp->TOP__v__u_soc.__PVT__intr_stb = 0;
    vlSymsp->TOP__v__u_soc.__PVT__gpio0_we = 0;
    vlSymsp->TOP__v__u_soc.__PVT__gpio0_stb = 0;
    if ((1 & (~ (vlSymsp->TOP__v__u_soc.io_addr_i >> 0xb)))) {
	if ((1 & (~ (vlSymsp->TOP__v__u_soc.io_addr_i 
		     >> 0xa)))) {
	    if ((0x200 & vlSymsp->TOP__v__u_soc.io_addr_i)) {
		if ((0x100 & vlSymsp->TOP__v__u_soc.io_addr_i)) {
		    vlSymsp->TOP__v__u_soc.__PVT__gpio0_we 
			= vlSymsp->TOP__v__u_soc.io_we_i;
		    vlSymsp->TOP__v__u_soc.__PVT__gpio0_stb 
			= vlSymsp->TOP__v__u_soc.io_stb_i;
		} else {
		    vlSymsp->TOP__v__u_soc.__PVT__intr_we 
			= vlSymsp->TOP__v__u_soc.io_we_i;
		    vlSymsp->TOP__v__u_soc.__PVT__intr_stb 
			= vlSymsp->TOP__v__u_soc.io_stb_i;
		}
	    } else {
		if ((0x100 & vlSymsp->TOP__v__u_soc.io_addr_i)) {
		    vlSymsp->TOP__v__u_soc.__PVT__timer_we 
			= vlSymsp->TOP__v__u_soc.io_we_i;
		    vlSymsp->TOP__v__u_soc.__PVT__timer_stb 
			= vlSymsp->TOP__v__u_soc.io_stb_i;
		} else {
		    vlSymsp->TOP__v__u_soc.__PVT__uart0_we 
			= vlSymsp->TOP__v__u_soc.io_we_i;
		    vlSymsp->TOP__v__u_soc.__PVT__uart0_stb 
			= vlSymsp->TOP__v__u_soc.io_stb_i;
		}
	    }
	}
    }
    vlSymsp->TOP__v__u_soc__u_uart.we_i = vlSymsp->TOP__v__u_soc.__PVT__uart0_we;
    vlSymsp->TOP__v__u_soc__u_uart.stb_i = vlSymsp->TOP__v__u_soc.__PVT__uart0_stb;
    vlSymsp->TOP__v__u_soc__u_timer.we_i = vlSymsp->TOP__v__u_soc.__PVT__timer_we;
    vlSymsp->TOP__v__u_soc__u_timer.stb_i = vlSymsp->TOP__v__u_soc.__PVT__timer_stb;
    vlSymsp->TOP__v__u_soc__u_intr.we_i = vlSymsp->TOP__v__u_soc.__PVT__intr_we;
    vlSymsp->TOP__v__u_soc__u_intr.stb_i = vlSymsp->TOP__v__u_soc.__PVT__intr_stb;
}

void Vtop_soc__pi2::_settle__TOP__v__u_soc__16(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_soc__pi2::_settle__TOP__v__u_soc__16\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_soc__u_uart.we_i = vlSymsp->TOP__v__u_soc.__PVT__uart0_we;
    vlSymsp->TOP__v__u_soc__u_uart.stb_i = vlSymsp->TOP__v__u_soc.__PVT__uart0_stb;
    vlSymsp->TOP__v__u_soc__u_timer.we_i = vlSymsp->TOP__v__u_soc.__PVT__timer_we;
    vlSymsp->TOP__v__u_soc__u_timer.stb_i = vlSymsp->TOP__v__u_soc.__PVT__timer_stb;
    vlSymsp->TOP__v__u_soc__u_intr.we_i = vlSymsp->TOP__v__u_soc.__PVT__intr_we;
    vlSymsp->TOP__v__u_soc__u_intr.stb_i = vlSymsp->TOP__v__u_soc.__PVT__intr_stb;
}
