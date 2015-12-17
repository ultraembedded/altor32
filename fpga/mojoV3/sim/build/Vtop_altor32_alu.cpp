// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_altor32_alu.h"  // For This
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vtop_altor32_alu) {
    // Reset internal values
    // Reset structure values
    op_i = VL_RAND_RESET_I(4);
    a_i = VL_RAND_RESET_I(32);
    b_i = VL_RAND_RESET_I(32);
    c_i = VL_RAND_RESET_I(1);
    p_o = VL_RAND_RESET_I(32);
    c_o = VL_RAND_RESET_I(1);
    c_update_o = VL_RAND_RESET_I(1);
    equal_o = VL_RAND_RESET_I(1);
    greater_than_signed_o = VL_RAND_RESET_I(1);
    greater_than_o = VL_RAND_RESET_I(1);
    less_than_signed_o = VL_RAND_RESET_I(1);
    less_than_o = VL_RAND_RESET_I(1);
    flag_update_o = VL_RAND_RESET_I(1);
    __PVT__result_r = VL_RAND_RESET_I(32);
    __PVT__shift_right_fill_r = VL_RAND_RESET_I(16);
    __PVT__shift_right_1_r = VL_RAND_RESET_I(32);
    __PVT__shift_right_2_r = VL_RAND_RESET_I(32);
    __PVT__shift_right_4_r = VL_RAND_RESET_I(32);
    __PVT__shift_right_8_r = VL_RAND_RESET_I(32);
    __PVT__shift_left_1_r = VL_RAND_RESET_I(32);
    __PVT__shift_left_2_r = VL_RAND_RESET_I(32);
    __PVT__shift_left_4_r = VL_RAND_RESET_I(32);
    __PVT__shift_left_8_r = VL_RAND_RESET_I(32);
    __Vfunc_less_than_signed__0__Vfuncout = VL_RAND_RESET_I(1);
    __Vfunc_less_than_signed__0__x = VL_RAND_RESET_I(32);
    __Vfunc_less_than_signed__0__y = VL_RAND_RESET_I(32);
    __Vfunc_less_than_signed__0__v = VL_RAND_RESET_I(32);
}

void Vtop_altor32_alu::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtop_altor32_alu::~Vtop_altor32_alu() {
}

//--------------------
// Internal Methods

void Vtop_altor32_alu::_settle__TOP__v__u_cpu__u1_cpu__u_exec__alu__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("              Vtop_altor32_alu::_settle__TOP__v__u_cpu__u1_cpu__u_exec__alu__1\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.flag_update_o 
	= (0xa == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.op_i));
    // ALWAYS at ../../../rtl/cpu_lite/altor32_alu.v:92
    if ((8 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.op_i))) {
	if ((4 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.op_i))) {
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__result_r 
		= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.a_i;
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_o = 0;
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_update_o = 0;
	} else {
	    if ((2 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.op_i))) {
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__result_r 
		    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.a_i;
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_o = 0;
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_update_o = 0;
	    } else {
		if ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.op_i))) {
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__result_r 
			= (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.a_i 
			   ^ vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i);
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_o = 0;
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_update_o = 0;
		} else {
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__result_r 
			= (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.a_i 
			   | vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i);
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_o = 0;
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_update_o = 0;
		}
	    }
	}
    } else {
	if ((4 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.op_i))) {
	    if ((2 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.op_i))) {
		if ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.op_i))) {
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__result_r 
			= (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.a_i 
			   & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i);
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_o = 0;
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_update_o = 0;
		} else {
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__result_r 
			= (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.a_i 
			   - vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i);
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_o = 0;
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_update_o = 0;
		}
	    } else {
		if ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.op_i))) {
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_o 
			= (1 & (IData)(((VL_ULL(0x1ffffffff) 
					 & (((QData)((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.a_i)) 
					     + (QData)((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i))) 
					    + (QData)((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_i)))) 
					>> 0x20)));
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__result_r 
			= ((vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.a_i 
			    + vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i) 
			   + (IData)((QData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_i)));
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_update_o = 1;
		} else {
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_o 
			= (1 & (IData)(((VL_ULL(0x1ffffffff) 
					 & ((QData)((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.a_i)) 
					    + (QData)((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i)))) 
					>> 0x20)));
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__result_r 
			= (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.a_i 
			   + vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i);
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_update_o = 1;
		}
	    }
	} else {
	    if ((2 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.op_i))) {
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_right_fill_r 
		    = (((vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.a_i 
			 >> 0x1f) & (3 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.op_i)))
		        ? 0xffff : 0);
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_right_1_r 
		    = ((1 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i)
		        ? ((0x80000000 & ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_right_fill_r) 
					  << 0x10)) 
			   | (0x7fffffff & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.a_i 
					    >> 1)))
		        : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.a_i);
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_right_2_r 
		    = ((2 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i)
		        ? ((0xc0000000 & ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_right_fill_r) 
					  << 0x10)) 
			   | (0x3fffffff & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_right_1_r 
					    >> 2)))
		        : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_right_1_r);
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_right_4_r 
		    = ((4 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i)
		        ? ((0xf0000000 & ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_right_fill_r) 
					  << 0x10)) 
			   | (0xfffffff & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_right_2_r 
					   >> 4))) : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_right_2_r);
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_right_8_r 
		    = ((8 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i)
		        ? ((0xff000000 & ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_right_fill_r) 
					  << 0x10)) 
			   | (0xffffff & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_right_4_r 
					  >> 8))) : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_right_4_r);
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__result_r 
		    = ((0x10 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i)
		        ? (((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_right_fill_r) 
			    << 0x10) | (0xffff & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_right_8_r 
						  >> 0x10)))
		        : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_right_8_r);
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_o = 0;
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_update_o = 0;
	    } else {
		if ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.op_i))) {
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_left_1_r 
			= ((1 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i)
			    ? (0xfffffffe & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.a_i 
					     << 1))
			    : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.a_i);
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_left_2_r 
			= ((2 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i)
			    ? (0xfffffffc & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_left_1_r 
					     << 2))
			    : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_left_1_r);
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_left_4_r 
			= ((4 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i)
			    ? (0xfffffff0 & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_left_2_r 
					     << 4))
			    : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_left_2_r);
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_left_8_r 
			= ((8 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i)
			    ? (0xffffff00 & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_left_4_r 
					     << 8))
			    : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_left_4_r);
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__result_r 
			= ((0x10 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i)
			    ? (0xffff0000 & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_left_8_r 
					     << 0x10))
			    : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_left_8_r);
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_o = 0;
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_update_o = 0;
		} else {
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__result_r 
			= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.a_i;
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_o = 0;
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_update_o = 0;
		}
	    }
	}
    }
    // ALWAYS at ../../../rtl/cpu_lite/altor32_alu.v:224
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.equal_o 
	= (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.a_i 
	   == vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i);
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.less_than_o 
	= (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.a_i 
	   < vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i);
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.greater_than_o 
	= (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.a_i 
	   > vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i);
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__Vfunc_less_than_signed__0__y 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__Vfunc_less_than_signed__0__x 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.a_i;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__Vfunc_less_than_signed__0__v 
	= (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__Vfunc_less_than_signed__0__x 
	   - vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__Vfunc_less_than_signed__0__y);
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__Vfunc_less_than_signed__0__Vfuncout 
	= (1 & (((1 & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__Vfunc_less_than_signed__0__x 
		       >> 0x1f)) != (1 & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__Vfunc_less_than_signed__0__y 
					  >> 0x1f)))
		 ? (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__Vfunc_less_than_signed__0__x 
		    >> 0x1f) : (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__Vfunc_less_than_signed__0__v 
				>> 0x1f)));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.less_than_signed_o 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__Vfunc_less_than_signed__0__Vfuncout;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.greater_than_signed_o 
	= (1 & (~ ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.less_than_signed_o) 
		   | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.equal_o))));
}

void Vtop_altor32_alu::_combo__TOP__v__u_cpu__u1_cpu__u_exec__alu__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("              Vtop_altor32_alu::_combo__TOP__v__u_cpu__u1_cpu__u_exec__alu__2\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.flag_update_o 
	= (0xa == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.op_i));
    // ALWAYS at ../../../rtl/cpu_lite/altor32_alu.v:92
    if ((8 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.op_i))) {
	if ((4 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.op_i))) {
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__result_r 
		= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.a_i;
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_o = 0;
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_update_o = 0;
	} else {
	    if ((2 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.op_i))) {
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__result_r 
		    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.a_i;
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_o = 0;
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_update_o = 0;
	    } else {
		if ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.op_i))) {
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__result_r 
			= (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.a_i 
			   ^ vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i);
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_o = 0;
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_update_o = 0;
		} else {
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__result_r 
			= (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.a_i 
			   | vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i);
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_o = 0;
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_update_o = 0;
		}
	    }
	}
    } else {
	if ((4 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.op_i))) {
	    if ((2 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.op_i))) {
		if ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.op_i))) {
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__result_r 
			= (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.a_i 
			   & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i);
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_o = 0;
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_update_o = 0;
		} else {
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__result_r 
			= (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.a_i 
			   - vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i);
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_o = 0;
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_update_o = 0;
		}
	    } else {
		if ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.op_i))) {
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_o 
			= (1 & (IData)(((VL_ULL(0x1ffffffff) 
					 & (((QData)((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.a_i)) 
					     + (QData)((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i))) 
					    + (QData)((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_i)))) 
					>> 0x20)));
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__result_r 
			= ((vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.a_i 
			    + vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i) 
			   + (IData)((QData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_i)));
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_update_o = 1;
		} else {
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_o 
			= (1 & (IData)(((VL_ULL(0x1ffffffff) 
					 & ((QData)((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.a_i)) 
					    + (QData)((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i)))) 
					>> 0x20)));
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__result_r 
			= (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.a_i 
			   + vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i);
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_update_o = 1;
		}
	    }
	} else {
	    if ((2 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.op_i))) {
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_right_fill_r 
		    = (((vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.a_i 
			 >> 0x1f) & (3 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.op_i)))
		        ? 0xffff : 0);
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_right_1_r 
		    = ((1 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i)
		        ? ((0x80000000 & ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_right_fill_r) 
					  << 0x10)) 
			   | (0x7fffffff & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.a_i 
					    >> 1)))
		        : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.a_i);
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_right_2_r 
		    = ((2 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i)
		        ? ((0xc0000000 & ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_right_fill_r) 
					  << 0x10)) 
			   | (0x3fffffff & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_right_1_r 
					    >> 2)))
		        : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_right_1_r);
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_right_4_r 
		    = ((4 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i)
		        ? ((0xf0000000 & ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_right_fill_r) 
					  << 0x10)) 
			   | (0xfffffff & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_right_2_r 
					   >> 4))) : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_right_2_r);
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_right_8_r 
		    = ((8 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i)
		        ? ((0xff000000 & ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_right_fill_r) 
					  << 0x10)) 
			   | (0xffffff & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_right_4_r 
					  >> 8))) : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_right_4_r);
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__result_r 
		    = ((0x10 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i)
		        ? (((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_right_fill_r) 
			    << 0x10) | (0xffff & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_right_8_r 
						  >> 0x10)))
		        : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_right_8_r);
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_o = 0;
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_update_o = 0;
	    } else {
		if ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.op_i))) {
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_left_1_r 
			= ((1 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i)
			    ? (0xfffffffe & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.a_i 
					     << 1))
			    : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.a_i);
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_left_2_r 
			= ((2 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i)
			    ? (0xfffffffc & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_left_1_r 
					     << 2))
			    : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_left_1_r);
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_left_4_r 
			= ((4 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i)
			    ? (0xfffffff0 & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_left_2_r 
					     << 4))
			    : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_left_2_r);
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_left_8_r 
			= ((8 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i)
			    ? (0xffffff00 & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_left_4_r 
					     << 8))
			    : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_left_4_r);
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__result_r 
			= ((0x10 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i)
			    ? (0xffff0000 & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_left_8_r 
					     << 0x10))
			    : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__shift_left_8_r);
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_o = 0;
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_update_o = 0;
		} else {
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__result_r 
			= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.a_i;
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_o = 0;
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_update_o = 0;
		}
	    }
	}
    }
    // ALWAYS at ../../../rtl/cpu_lite/altor32_alu.v:224
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.equal_o 
	= (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.a_i 
	   == vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i);
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.less_than_o 
	= (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.a_i 
	   < vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i);
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.greater_than_o 
	= (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.a_i 
	   > vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i);
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__Vfunc_less_than_signed__0__y 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__Vfunc_less_than_signed__0__x 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.a_i;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__Vfunc_less_than_signed__0__v 
	= (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__Vfunc_less_than_signed__0__x 
	   - vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__Vfunc_less_than_signed__0__y);
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__Vfunc_less_than_signed__0__Vfuncout 
	= (1 & (((1 & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__Vfunc_less_than_signed__0__x 
		       >> 0x1f)) != (1 & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__Vfunc_less_than_signed__0__y 
					  >> 0x1f)))
		 ? (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__Vfunc_less_than_signed__0__x 
		    >> 0x1f) : (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__Vfunc_less_than_signed__0__v 
				>> 0x1f)));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.less_than_signed_o 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__Vfunc_less_than_signed__0__Vfuncout;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.greater_than_signed_o 
	= (1 & (~ ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.less_than_signed_o) 
		   | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.equal_o))));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.p_o 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__result_r;
}

void Vtop_altor32_alu::_settle__TOP__v__u_cpu__u1_cpu__u_exec__alu__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("              Vtop_altor32_alu::_settle__TOP__v__u_cpu__u1_cpu__u_exec__alu__3\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.p_o 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.__PVT__result_r;
}
