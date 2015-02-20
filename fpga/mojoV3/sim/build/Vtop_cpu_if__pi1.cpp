// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_cpu_if__pi1.h"  // For This
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vtop_cpu_if__pi1) {
    VL_CELL (u1_cpu, Vtop_cpu__I10000000);
    // Reset internal values
    // Reset structure values
    __PVT__clk_i = VL_RAND_RESET_I(1);
    __PVT__rst_i = VL_RAND_RESET_I(1);
    __PVT__imem0_addr_o = VL_RAND_RESET_I(32);
    __PVT__imem0_data_i = VL_RAND_RESET_I(32);
    __PVT__imem0_sel_o = VL_RAND_RESET_I(4);
    __PVT__imem0_stb_o = VL_RAND_RESET_I(1);
    __PVT__imem0_cyc_o = VL_RAND_RESET_I(1);
    __PVT__imem0_cti_o = VL_RAND_RESET_I(3);
    __PVT__imem0_ack_i = VL_RAND_RESET_I(1);
    __PVT__imem0_stall_i = VL_RAND_RESET_I(1);
    __PVT__dmem0_addr_o = VL_RAND_RESET_I(32);
    __PVT__dmem0_data_o = VL_RAND_RESET_I(32);
    __PVT__dmem0_data_i = VL_RAND_RESET_I(32);
    __PVT__dmem0_sel_o = VL_RAND_RESET_I(4);
    __PVT__dmem0_we_o = VL_RAND_RESET_I(1);
    __PVT__dmem0_stb_o = VL_RAND_RESET_I(1);
    __PVT__dmem0_cyc_o = VL_RAND_RESET_I(1);
    __PVT__dmem0_cti_o = VL_RAND_RESET_I(3);
    __PVT__dmem0_ack_i = VL_RAND_RESET_I(1);
    __PVT__dmem0_stall_i = VL_RAND_RESET_I(1);
    __PVT__dmem1_addr_o = VL_RAND_RESET_I(32);
    __PVT__dmem1_data_o = VL_RAND_RESET_I(32);
    __PVT__dmem1_data_i = VL_RAND_RESET_I(32);
    __PVT__dmem1_sel_o = VL_RAND_RESET_I(4);
    __PVT__dmem1_we_o = VL_RAND_RESET_I(1);
    __PVT__dmem1_stb_o = VL_RAND_RESET_I(1);
    __PVT__dmem1_cyc_o = VL_RAND_RESET_I(1);
    __PVT__dmem1_cti_o = VL_RAND_RESET_I(3);
    __PVT__dmem1_ack_i = VL_RAND_RESET_I(1);
    __PVT__dmem1_stall_i = VL_RAND_RESET_I(1);
    __PVT__dmem2_addr_o = VL_RAND_RESET_I(32);
    __PVT__dmem2_data_o = VL_RAND_RESET_I(32);
    __PVT__dmem2_data_i = VL_RAND_RESET_I(32);
    __PVT__dmem2_sel_o = VL_RAND_RESET_I(4);
    __PVT__dmem2_we_o = VL_RAND_RESET_I(1);
    __PVT__dmem2_stb_o = VL_RAND_RESET_I(1);
    __PVT__dmem2_cyc_o = VL_RAND_RESET_I(1);
    __PVT__dmem2_cti_o = VL_RAND_RESET_I(3);
    __PVT__dmem2_ack_i = VL_RAND_RESET_I(1);
    __PVT__dmem2_stall_i = VL_RAND_RESET_I(1);
    __PVT__fault_o = VL_RAND_RESET_I(1);
    __PVT__break_o = VL_RAND_RESET_I(1);
    __PVT__intr_i = VL_RAND_RESET_I(1);
    __PVT__nmi_i = VL_RAND_RESET_I(1);
    __PVT__dmem_data_r = VL_RAND_RESET_I(32);
    __PVT__dmem_stall = VL_RAND_RESET_I(1);
    __PVT__dmem_ack = VL_RAND_RESET_I(1);
}

void Vtop_cpu_if__pi1::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtop_cpu_if__pi1::~Vtop_cpu_if__pi1() {
}

//--------------------
// Internal Methods

void Vtop_cpu_if__pi1::_settle__TOP__v__u_cpu__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_cpu_if__pi1::_settle__TOP__v__u_cpu__1\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_cpu__u1_cpu.imem_stall_i = 0;
    vlSymsp->TOP__v__u_cpu__u1_cpu.rst_i = vlSymsp->TOP__v.__PVT__reset;
    vlSymsp->TOP__v__u_cpu__u1_cpu.nmi_i = 0;
}

void Vtop_cpu_if__pi1::_combo__TOP__v__u_cpu__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_cpu_if__pi1::_combo__TOP__v__u_cpu__2\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_cpu__u1_cpu.rst_i = vlSymsp->TOP__v.__PVT__reset;
}

void Vtop_cpu_if__pi1::_combo__TOP__v__u_cpu__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_cpu_if__pi1::_combo__TOP__v__u_cpu__3\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_cpu__u1_cpu.clk_i = vlSymsp->TOP__v.clk;
}

void Vtop_cpu_if__pi1::_sequent__TOP__v__u_cpu__5(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_cpu_if__pi1::_sequent__TOP__v__u_cpu__5\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_cpu__u1_cpu.imem_ack_i = vlSymsp->TOP__v.__PVT__imem_ack;
}

void Vtop_cpu_if__pi1::_settle__TOP__v__u_cpu__6(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_cpu_if__pi1::_settle__TOP__v__u_cpu__6\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_cpu__u1_cpu.imem_ack_i = vlSymsp->TOP__v.__PVT__imem_ack;
    vlSymsp->TOP__v__u_cpu__u1_cpu.imem_dat_i = vlSymsp->TOP__v.__PVT__imem_data;
}

void Vtop_cpu_if__pi1::_sequent__TOP__v__u_cpu__7(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_cpu_if__pi1::_sequent__TOP__v__u_cpu__7\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_cpu__u1_cpu.imem_dat_i = vlSymsp->TOP__v.__PVT__imem_data;
}

void Vtop_cpu_if__pi1::_settle__TOP__v__u_cpu__8(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_cpu_if__pi1::_settle__TOP__v__u_cpu__8\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_cpu__u1_cpu.intr_i = vlSymsp->TOP__v__u_soc.intr_o;
    // ALWAYS at ../../../rtl/soc/dmem_mux3.v:164
    if ((0 == (3 & (vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_addr_o 
		    >> 0x18)))) {
	vlSymsp->TOP__v__u_cpu.__PVT__dmem_data_r = vlSymsp->TOP__v.__PVT__dmem_data_r;
	vlSymsp->TOP__v__u_cpu.__PVT__dmem_stall = 0;
	vlSymsp->TOP__v__u_cpu.__PVT__dmem_ack = vlSymsp->TOP__v.__PVT__dmem_ack;
    } else {
	if ((1 == (3 & (vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_addr_o 
			>> 0x18)))) {
	    vlSymsp->TOP__v__u_cpu.__PVT__dmem_data_r = 0;
	    vlSymsp->TOP__v__u_cpu.__PVT__dmem_stall = 0;
	    vlSymsp->TOP__v__u_cpu.__PVT__dmem_ack = 1;
	} else {
	    if ((2 == (3 & (vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_addr_o 
			    >> 0x18)))) {
		vlSymsp->TOP__v__u_cpu.__PVT__dmem_data_r 
		    = vlSymsp->TOP__v__u_soc.io_data_o;
		vlSymsp->TOP__v__u_cpu.__PVT__dmem_stall = 0;
		vlSymsp->TOP__v__u_cpu.__PVT__dmem_ack 
		    = vlSymsp->TOP__v__u_soc.io_ack_o;
	    } else {
		vlSymsp->TOP__v__u_cpu.__PVT__dmem_data_r = 0;
		vlSymsp->TOP__v__u_cpu.__PVT__dmem_stall = 0;
		vlSymsp->TOP__v__u_cpu.__PVT__dmem_ack = 0;
	    }
	}
    }
    // ALWAYS at ../../../rtl/soc/dmem_mux3.v:98
    vlSymsp->TOP__v__u_cpu.__PVT__dmem0_addr_o = 0;
    vlSymsp->TOP__v__u_cpu.__PVT__dmem0_data_o = 0;
    vlSymsp->TOP__v__u_cpu.__PVT__dmem0_sel_o = 0;
    vlSymsp->TOP__v__u_cpu.__PVT__dmem0_we_o = 0;
    vlSymsp->TOP__v__u_cpu.__PVT__dmem0_stb_o = 0;
    vlSymsp->TOP__v__u_cpu.__PVT__dmem0_cyc_o = 0;
    vlSymsp->TOP__v__u_cpu.__PVT__dmem0_cti_o = 0;
    vlSymsp->TOP__v__u_cpu.__PVT__dmem1_addr_o = 0;
    vlSymsp->TOP__v__u_cpu.__PVT__dmem1_data_o = 0;
    vlSymsp->TOP__v__u_cpu.__PVT__dmem1_sel_o = 0;
    vlSymsp->TOP__v__u_cpu.__PVT__dmem1_we_o = 0;
    vlSymsp->TOP__v__u_cpu.__PVT__dmem1_stb_o = 0;
    vlSymsp->TOP__v__u_cpu.__PVT__dmem1_cyc_o = 0;
    vlSymsp->TOP__v__u_cpu.__PVT__dmem1_cti_o = 0;
    vlSymsp->TOP__v__u_cpu.__PVT__dmem2_addr_o = 0;
    vlSymsp->TOP__v__u_cpu.__PVT__dmem2_data_o = 0;
    vlSymsp->TOP__v__u_cpu.__PVT__dmem2_sel_o = 0;
    vlSymsp->TOP__v__u_cpu.__PVT__dmem2_we_o = 0;
    vlSymsp->TOP__v__u_cpu.__PVT__dmem2_stb_o = 0;
    vlSymsp->TOP__v__u_cpu.__PVT__dmem2_cyc_o = 0;
    vlSymsp->TOP__v__u_cpu.__PVT__dmem2_cti_o = 0;
    if ((0 == (3 & (vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_addr_o 
		    >> 0x18)))) {
	vlSymsp->TOP__v__u_cpu.__PVT__dmem0_addr_o 
	    = vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_addr_o;
	vlSymsp->TOP__v__u_cpu.__PVT__dmem0_data_o 
	    = vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_dat_o;
	vlSymsp->TOP__v__u_cpu.__PVT__dmem0_sel_o = vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_sel_o;
	vlSymsp->TOP__v__u_cpu.__PVT__dmem0_we_o = vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_we_o;
	vlSymsp->TOP__v__u_cpu.__PVT__dmem0_stb_o = vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_stb_o;
	vlSymsp->TOP__v__u_cpu.__PVT__dmem0_cyc_o = vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_cyc_o;
	vlSymsp->TOP__v__u_cpu.__PVT__dmem0_cti_o = vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_cti_o;
    } else {
	if ((1 == (3 & (vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_addr_o 
			>> 0x18)))) {
	    vlSymsp->TOP__v__u_cpu.__PVT__dmem1_addr_o 
		= vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_addr_o;
	    vlSymsp->TOP__v__u_cpu.__PVT__dmem1_data_o 
		= vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_dat_o;
	    vlSymsp->TOP__v__u_cpu.__PVT__dmem1_sel_o 
		= vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_sel_o;
	    vlSymsp->TOP__v__u_cpu.__PVT__dmem1_we_o 
		= vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_we_o;
	    vlSymsp->TOP__v__u_cpu.__PVT__dmem1_stb_o 
		= vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_stb_o;
	    vlSymsp->TOP__v__u_cpu.__PVT__dmem1_cyc_o 
		= vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_cyc_o;
	    vlSymsp->TOP__v__u_cpu.__PVT__dmem1_cti_o 
		= vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_cti_o;
	} else {
	    if ((2 == (3 & (vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_addr_o 
			    >> 0x18)))) {
		vlSymsp->TOP__v__u_cpu.__PVT__dmem2_addr_o 
		    = vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_addr_o;
		vlSymsp->TOP__v__u_cpu.__PVT__dmem2_data_o 
		    = vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_dat_o;
		vlSymsp->TOP__v__u_cpu.__PVT__dmem2_sel_o 
		    = vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_sel_o;
		vlSymsp->TOP__v__u_cpu.__PVT__dmem2_we_o 
		    = vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_we_o;
		vlSymsp->TOP__v__u_cpu.__PVT__dmem2_stb_o 
		    = vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_stb_o;
		vlSymsp->TOP__v__u_cpu.__PVT__dmem2_cyc_o 
		    = vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_cyc_o;
		vlSymsp->TOP__v__u_cpu.__PVT__dmem2_cti_o 
		    = vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_cti_o;
	    }
	}
    }
}

void Vtop_cpu_if__pi1::_sequent__TOP__v__u_cpu__9(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_cpu_if__pi1::_sequent__TOP__v__u_cpu__9\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../rtl/soc/dmem_mux3.v:98
    vlSymsp->TOP__v__u_cpu.__PVT__dmem0_addr_o = 0;
    vlSymsp->TOP__v__u_cpu.__PVT__dmem0_data_o = 0;
    vlSymsp->TOP__v__u_cpu.__PVT__dmem0_sel_o = 0;
    vlSymsp->TOP__v__u_cpu.__PVT__dmem0_we_o = 0;
    vlSymsp->TOP__v__u_cpu.__PVT__dmem0_stb_o = 0;
    vlSymsp->TOP__v__u_cpu.__PVT__dmem0_cyc_o = 0;
    vlSymsp->TOP__v__u_cpu.__PVT__dmem0_cti_o = 0;
    vlSymsp->TOP__v__u_cpu.__PVT__dmem1_addr_o = 0;
    vlSymsp->TOP__v__u_cpu.__PVT__dmem1_data_o = 0;
    vlSymsp->TOP__v__u_cpu.__PVT__dmem1_sel_o = 0;
    vlSymsp->TOP__v__u_cpu.__PVT__dmem1_we_o = 0;
    vlSymsp->TOP__v__u_cpu.__PVT__dmem1_stb_o = 0;
    vlSymsp->TOP__v__u_cpu.__PVT__dmem1_cyc_o = 0;
    vlSymsp->TOP__v__u_cpu.__PVT__dmem1_cti_o = 0;
    vlSymsp->TOP__v__u_cpu.__PVT__dmem2_addr_o = 0;
    vlSymsp->TOP__v__u_cpu.__PVT__dmem2_data_o = 0;
    vlSymsp->TOP__v__u_cpu.__PVT__dmem2_sel_o = 0;
    vlSymsp->TOP__v__u_cpu.__PVT__dmem2_we_o = 0;
    vlSymsp->TOP__v__u_cpu.__PVT__dmem2_stb_o = 0;
    vlSymsp->TOP__v__u_cpu.__PVT__dmem2_cyc_o = 0;
    vlSymsp->TOP__v__u_cpu.__PVT__dmem2_cti_o = 0;
    if ((0 == (3 & (vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_addr_o 
		    >> 0x18)))) {
	vlSymsp->TOP__v__u_cpu.__PVT__dmem0_addr_o 
	    = vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_addr_o;
	vlSymsp->TOP__v__u_cpu.__PVT__dmem0_data_o 
	    = vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_dat_o;
	vlSymsp->TOP__v__u_cpu.__PVT__dmem0_sel_o = vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_sel_o;
	vlSymsp->TOP__v__u_cpu.__PVT__dmem0_we_o = vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_we_o;
	vlSymsp->TOP__v__u_cpu.__PVT__dmem0_stb_o = vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_stb_o;
	vlSymsp->TOP__v__u_cpu.__PVT__dmem0_cyc_o = vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_cyc_o;
	vlSymsp->TOP__v__u_cpu.__PVT__dmem0_cti_o = vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_cti_o;
    } else {
	if ((1 == (3 & (vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_addr_o 
			>> 0x18)))) {
	    vlSymsp->TOP__v__u_cpu.__PVT__dmem1_addr_o 
		= vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_addr_o;
	    vlSymsp->TOP__v__u_cpu.__PVT__dmem1_data_o 
		= vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_dat_o;
	    vlSymsp->TOP__v__u_cpu.__PVT__dmem1_sel_o 
		= vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_sel_o;
	    vlSymsp->TOP__v__u_cpu.__PVT__dmem1_we_o 
		= vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_we_o;
	    vlSymsp->TOP__v__u_cpu.__PVT__dmem1_stb_o 
		= vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_stb_o;
	    vlSymsp->TOP__v__u_cpu.__PVT__dmem1_cyc_o 
		= vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_cyc_o;
	    vlSymsp->TOP__v__u_cpu.__PVT__dmem1_cti_o 
		= vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_cti_o;
	} else {
	    if ((2 == (3 & (vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_addr_o 
			    >> 0x18)))) {
		vlSymsp->TOP__v__u_cpu.__PVT__dmem2_addr_o 
		    = vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_addr_o;
		vlSymsp->TOP__v__u_cpu.__PVT__dmem2_data_o 
		    = vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_dat_o;
		vlSymsp->TOP__v__u_cpu.__PVT__dmem2_sel_o 
		    = vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_sel_o;
		vlSymsp->TOP__v__u_cpu.__PVT__dmem2_we_o 
		    = vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_we_o;
		vlSymsp->TOP__v__u_cpu.__PVT__dmem2_stb_o 
		    = vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_stb_o;
		vlSymsp->TOP__v__u_cpu.__PVT__dmem2_cyc_o 
		    = vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_cyc_o;
		vlSymsp->TOP__v__u_cpu.__PVT__dmem2_cti_o 
		    = vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_cti_o;
	    }
	}
    }
}

void Vtop_cpu_if__pi1::_sequent__TOP__v__u_cpu__10(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_cpu_if__pi1::_sequent__TOP__v__u_cpu__10\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_cpu__u1_cpu.intr_i = vlSymsp->TOP__v__u_soc.intr_o;
}

void Vtop_cpu_if__pi1::_multiclk__TOP__v__u_cpu__11(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_cpu_if__pi1::_multiclk__TOP__v__u_cpu__11\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../rtl/soc/dmem_mux3.v:164
    if ((0 == (3 & (vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_addr_o 
		    >> 0x18)))) {
	vlSymsp->TOP__v__u_cpu.__PVT__dmem_data_r = vlSymsp->TOP__v.__PVT__dmem_data_r;
	vlSymsp->TOP__v__u_cpu.__PVT__dmem_stall = 0;
	vlSymsp->TOP__v__u_cpu.__PVT__dmem_ack = vlSymsp->TOP__v.__PVT__dmem_ack;
    } else {
	if ((1 == (3 & (vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_addr_o 
			>> 0x18)))) {
	    vlSymsp->TOP__v__u_cpu.__PVT__dmem_data_r = 0;
	    vlSymsp->TOP__v__u_cpu.__PVT__dmem_stall = 0;
	    vlSymsp->TOP__v__u_cpu.__PVT__dmem_ack = 1;
	} else {
	    if ((2 == (3 & (vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_addr_o 
			    >> 0x18)))) {
		vlSymsp->TOP__v__u_cpu.__PVT__dmem_data_r 
		    = vlSymsp->TOP__v__u_soc.io_data_o;
		vlSymsp->TOP__v__u_cpu.__PVT__dmem_stall = 0;
		vlSymsp->TOP__v__u_cpu.__PVT__dmem_ack 
		    = vlSymsp->TOP__v__u_soc.io_ack_o;
	    } else {
		vlSymsp->TOP__v__u_cpu.__PVT__dmem_data_r = 0;
		vlSymsp->TOP__v__u_cpu.__PVT__dmem_stall = 0;
		vlSymsp->TOP__v__u_cpu.__PVT__dmem_ack = 0;
	    }
	}
    }
    vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_stall_i = vlSymsp->TOP__v__u_cpu.__PVT__dmem_stall;
    vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_dat_i = vlSymsp->TOP__v__u_cpu.__PVT__dmem_data_r;
    vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_ack_i = vlSymsp->TOP__v__u_cpu.__PVT__dmem_ack;
}

void Vtop_cpu_if__pi1::_settle__TOP__v__u_cpu__12(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_cpu_if__pi1::_settle__TOP__v__u_cpu__12\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_stall_i = vlSymsp->TOP__v__u_cpu.__PVT__dmem_stall;
    vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_dat_i = vlSymsp->TOP__v__u_cpu.__PVT__dmem_data_r;
    vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_ack_i = vlSymsp->TOP__v__u_cpu.__PVT__dmem_ack;
}
