// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_intr_periph__E0.h" // For This
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vtop_intr_periph__E0) {
    // Reset internal values
    // Reset structure values
    clk_i = VL_RAND_RESET_I(1);
    rst_i = VL_RAND_RESET_I(1);
    intr_o = VL_RAND_RESET_I(1);
    intr0_i = VL_RAND_RESET_I(1);
    intr1_i = VL_RAND_RESET_I(1);
    intr2_i = VL_RAND_RESET_I(1);
    intr3_i = VL_RAND_RESET_I(1);
    intr4_i = VL_RAND_RESET_I(1);
    intr5_i = VL_RAND_RESET_I(1);
    intr6_i = VL_RAND_RESET_I(1);
    intr7_i = VL_RAND_RESET_I(1);
    intr_ext_i = VL_RAND_RESET_I(2);
    addr_i = VL_RAND_RESET_I(8);
    data_o = VL_RAND_RESET_I(32);
    data_i = VL_RAND_RESET_I(32);
    we_i = VL_RAND_RESET_I(1);
    stb_i = VL_RAND_RESET_I(1);
    __PVT__irq_status = VL_RAND_RESET_I(8);
    __PVT__irq_mask = VL_RAND_RESET_I(8);
    __PVT__v_irq_status = VL_RAND_RESET_I(8);
    __Vdly__irq_status = VL_RAND_RESET_I(8);
    __Vdly__irq_mask = VL_RAND_RESET_I(8);
}

void Vtop_intr_periph__E0::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtop_intr_periph__E0::~Vtop_intr_periph__E0() {
}

//--------------------
// Internal Methods

void Vtop_intr_periph__E0::_sequent__TOP__v__u_soc__u_intr__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vtop_intr_periph__E0::_sequent__TOP__v__u_soc__u_intr__1\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_soc__u_intr.__Vdly__irq_status 
	= vlSymsp->TOP__v__u_soc__u_intr.__PVT__irq_status;
    vlSymsp->TOP__v__u_soc__u_intr.__Vdly__irq_mask 
	= vlSymsp->TOP__v__u_soc__u_intr.__PVT__irq_mask;
    // ALWAYS at ../../../rtl/peripheral/intr_periph.v:115
    if (vlSymsp->TOP__v__u_soc__u_intr.rst_i) {
	vlSymsp->TOP__v__u_soc__u_intr.__Vdly__irq_status = 0;
	vlSymsp->TOP__v__u_soc__u_intr.__Vdly__irq_mask = 0;
	vlSymsp->TOP__v__u_soc__u_intr.intr_o = 0;
    } else {
	vlSymsp->TOP__v__u_soc__u_intr.__PVT__v_irq_status 
	    = vlSymsp->TOP__v__u_soc__u_intr.__PVT__irq_status;
	if (vlSymsp->TOP__v__u_soc__u_intr.intr0_i) {
	    vlSymsp->TOP__v__u_soc__u_intr.__PVT__v_irq_status 
		= (1 | (IData)(vlSymsp->TOP__v__u_soc__u_intr.__PVT__v_irq_status));
	}
	if (vlSymsp->TOP__v__u_soc__u_intr.intr1_i) {
	    vlSymsp->TOP__v__u_soc__u_intr.__PVT__v_irq_status 
		= (2 | (IData)(vlSymsp->TOP__v__u_soc__u_intr.__PVT__v_irq_status));
	}
	if (vlSymsp->TOP__v__u_soc__u_intr.intr2_i) {
	    vlSymsp->TOP__v__u_soc__u_intr.__PVT__v_irq_status 
		= (4 | (IData)(vlSymsp->TOP__v__u_soc__u_intr.__PVT__v_irq_status));
	}
	if (vlSymsp->TOP__v__u_soc__u_intr.intr3_i) {
	    vlSymsp->TOP__v__u_soc__u_intr.__PVT__v_irq_status 
		= (8 | (IData)(vlSymsp->TOP__v__u_soc__u_intr.__PVT__v_irq_status));
	}
	if (vlSymsp->TOP__v__u_soc__u_intr.intr4_i) {
	    vlSymsp->TOP__v__u_soc__u_intr.__PVT__v_irq_status 
		= (0x10 | (IData)(vlSymsp->TOP__v__u_soc__u_intr.__PVT__v_irq_status));
	}
	if (vlSymsp->TOP__v__u_soc__u_intr.intr5_i) {
	    vlSymsp->TOP__v__u_soc__u_intr.__PVT__v_irq_status 
		= (0x20 | (IData)(vlSymsp->TOP__v__u_soc__u_intr.__PVT__v_irq_status));
	}
	if (vlSymsp->TOP__v__u_soc__u_intr.intr6_i) {
	    vlSymsp->TOP__v__u_soc__u_intr.__PVT__v_irq_status 
		= (0x40 | (IData)(vlSymsp->TOP__v__u_soc__u_intr.__PVT__v_irq_status));
	}
	if (vlSymsp->TOP__v__u_soc__u_intr.intr7_i) {
	    vlSymsp->TOP__v__u_soc__u_intr.__PVT__v_irq_status 
		= (0x80 | (IData)(vlSymsp->TOP__v__u_soc__u_intr.__PVT__v_irq_status));
	}
	vlSymsp->TOP__v__u_soc__u_intr.__Vdly__irq_status 
	    = vlSymsp->TOP__v__u_soc__u_intr.__PVT__v_irq_status;
	vlSymsp->TOP__v__u_soc__u_intr.intr_o = (0 
						 != 
						 ((IData)(vlSymsp->TOP__v__u_soc__u_intr.__PVT__v_irq_status) 
						  & (IData)(vlSymsp->TOP__v__u_soc__u_intr.__PVT__irq_mask)));
	if (((IData)(vlSymsp->TOP__v__u_soc__u_intr.we_i) 
	     & (IData)(vlSymsp->TOP__v__u_soc__u_intr.stb_i))) {
	    if ((0 == (IData)(vlSymsp->TOP__v__u_soc__u_intr.addr_i))) {
		vlSymsp->TOP__v__u_soc__u_intr.__Vdly__irq_mask 
		    = (0xff & ((IData)(vlSymsp->TOP__v__u_soc__u_intr.__PVT__irq_mask) 
			       | vlSymsp->TOP__v__u_soc__u_intr.data_i));
	    } else {
		if ((4 == (IData)(vlSymsp->TOP__v__u_soc__u_intr.addr_i))) {
		    vlSymsp->TOP__v__u_soc__u_intr.__Vdly__irq_mask 
			= ((IData)(vlSymsp->TOP__v__u_soc__u_intr.__PVT__irq_mask) 
			   & (~ vlSymsp->TOP__v__u_soc__u_intr.data_i));
		} else {
		    if ((8 == (IData)(vlSymsp->TOP__v__u_soc__u_intr.addr_i))) {
			vlSymsp->TOP__v__u_soc__u_intr.__Vdly__irq_status 
			    = ((IData)(vlSymsp->TOP__v__u_soc__u_intr.__PVT__v_irq_status) 
			       & (~ vlSymsp->TOP__v__u_soc__u_intr.data_i));
		    }
		}
	    }
	}
    }
    vlSymsp->TOP__v__u_soc__u_intr.__PVT__irq_status 
	= vlSymsp->TOP__v__u_soc__u_intr.__Vdly__irq_status;
    vlSymsp->TOP__v__u_soc__u_intr.__PVT__irq_mask 
	= vlSymsp->TOP__v__u_soc__u_intr.__Vdly__irq_mask;
}

void Vtop_intr_periph__E0::_combo__TOP__v__u_soc__u_intr__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vtop_intr_periph__E0::_combo__TOP__v__u_soc__u_intr__2\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../rtl/peripheral/intr_periph.v:201
    vlSymsp->TOP__v__u_soc__u_intr.data_o = ((0 == (IData)(vlSymsp->TOP__v__u_soc__u_intr.addr_i))
					      ? (IData)(vlSymsp->TOP__v__u_soc__u_intr.__PVT__irq_mask)
					      : ((4 
						  == (IData)(vlSymsp->TOP__v__u_soc__u_intr.addr_i))
						  ? (IData)(vlSymsp->TOP__v__u_soc__u_intr.__PVT__irq_mask)
						  : 
						 ((8 
						   == (IData)(vlSymsp->TOP__v__u_soc__u_intr.addr_i))
						   ? (IData)(vlSymsp->TOP__v__u_soc__u_intr.__PVT__irq_status)
						   : 0)));
}
