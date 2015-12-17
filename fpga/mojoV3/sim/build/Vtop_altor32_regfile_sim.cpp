// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_altor32_regfile_sim.h" // For This
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vtop_altor32_regfile_sim) {
    // Reset internal values
    // Reset structure values
    clk_i = VL_RAND_RESET_I(1);
    rst_i = VL_RAND_RESET_I(1);
    wr_i = VL_RAND_RESET_I(1);
    ra_i = VL_RAND_RESET_I(5);
    rb_i = VL_RAND_RESET_I(5);
    rd_i = VL_RAND_RESET_I(5);
    reg_ra_o = VL_RAND_RESET_I(32);
    reg_rb_o = VL_RAND_RESET_I(32);
    reg_rd_i = VL_RAND_RESET_I(32);
    __PVT__reg_r1_sp = VL_RAND_RESET_I(32);
    __PVT__reg_r2_fp = VL_RAND_RESET_I(32);
    __PVT__reg_r3 = VL_RAND_RESET_I(32);
    __PVT__reg_r4 = VL_RAND_RESET_I(32);
    __PVT__reg_r5 = VL_RAND_RESET_I(32);
    __PVT__reg_r6 = VL_RAND_RESET_I(32);
    __PVT__reg_r7 = VL_RAND_RESET_I(32);
    __PVT__reg_r8 = VL_RAND_RESET_I(32);
    __PVT__reg_r9_lr = VL_RAND_RESET_I(32);
    __PVT__reg_r10 = VL_RAND_RESET_I(32);
    __PVT__reg_r11 = VL_RAND_RESET_I(32);
    __PVT__reg_r12 = VL_RAND_RESET_I(32);
    __PVT__reg_r13 = VL_RAND_RESET_I(32);
    __PVT__reg_r14 = VL_RAND_RESET_I(32);
    __PVT__reg_r15 = VL_RAND_RESET_I(32);
    __PVT__reg_r16 = VL_RAND_RESET_I(32);
    __PVT__reg_r17 = VL_RAND_RESET_I(32);
    __PVT__reg_r18 = VL_RAND_RESET_I(32);
    __PVT__reg_r19 = VL_RAND_RESET_I(32);
    __PVT__reg_r20 = VL_RAND_RESET_I(32);
    __PVT__reg_r21 = VL_RAND_RESET_I(32);
    __PVT__reg_r22 = VL_RAND_RESET_I(32);
    __PVT__reg_r23 = VL_RAND_RESET_I(32);
    __PVT__reg_r24 = VL_RAND_RESET_I(32);
    __PVT__reg_r25 = VL_RAND_RESET_I(32);
    __PVT__reg_r26 = VL_RAND_RESET_I(32);
    __PVT__reg_r27 = VL_RAND_RESET_I(32);
    __PVT__reg_r28 = VL_RAND_RESET_I(32);
    __PVT__reg_r29 = VL_RAND_RESET_I(32);
    __PVT__reg_r30 = VL_RAND_RESET_I(32);
    __PVT__reg_r31 = VL_RAND_RESET_I(32);
}

void Vtop_altor32_regfile_sim::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtop_altor32_regfile_sim::~Vtop_altor32_regfile_sim() {
}

//--------------------
// Internal Methods

void Vtop_altor32_regfile_sim::_sequent__TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("              Vtop_altor32_regfile_sim::_sequent__TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank__1\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../rtl/cpu_lite/altor32_regfile_sim.v:106
    if (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rst_i) {
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r1_sp = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r2_fp = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r3 = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r4 = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r5 = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r6 = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r7 = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r8 = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r9_lr = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r10 = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r11 = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r12 = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r13 = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r14 = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r15 = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r16 = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r17 = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r18 = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r19 = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r20 = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r21 = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r22 = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r23 = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r24 = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r25 = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r26 = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r27 = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r28 = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r29 = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r30 = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r31 = 0;
    } else {
	if (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.wr_i) {
	    if ((0x10 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rd_i))) {
		if ((8 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rd_i))) {
		    if ((4 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rd_i))) {
			if ((2 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rd_i))) {
			    if ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rd_i))) {
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r31 
				    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rd_i;
			    } else {
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r30 
				    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rd_i;
			    }
			} else {
			    if ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rd_i))) {
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r29 
				    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rd_i;
			    } else {
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r28 
				    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rd_i;
			    }
			}
		    } else {
			if ((2 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rd_i))) {
			    if ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rd_i))) {
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r27 
				    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rd_i;
			    } else {
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r26 
				    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rd_i;
			    }
			} else {
			    if ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rd_i))) {
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r25 
				    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rd_i;
			    } else {
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r24 
				    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rd_i;
			    }
			}
		    }
		} else {
		    if ((4 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rd_i))) {
			if ((2 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rd_i))) {
			    if ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rd_i))) {
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r23 
				    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rd_i;
			    } else {
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r22 
				    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rd_i;
			    }
			} else {
			    if ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rd_i))) {
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r21 
				    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rd_i;
			    } else {
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r20 
				    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rd_i;
			    }
			}
		    } else {
			if ((2 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rd_i))) {
			    if ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rd_i))) {
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r19 
				    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rd_i;
			    } else {
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r18 
				    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rd_i;
			    }
			} else {
			    if ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rd_i))) {
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r17 
				    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rd_i;
			    } else {
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r16 
				    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rd_i;
			    }
			}
		    }
		}
	    } else {
		if ((8 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rd_i))) {
		    if ((4 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rd_i))) {
			if ((2 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rd_i))) {
			    if ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rd_i))) {
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r15 
				    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rd_i;
			    } else {
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r14 
				    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rd_i;
			    }
			} else {
			    if ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rd_i))) {
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r13 
				    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rd_i;
			    } else {
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r12 
				    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rd_i;
			    }
			}
		    } else {
			if ((2 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rd_i))) {
			    if ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rd_i))) {
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r11 
				    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rd_i;
			    } else {
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r10 
				    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rd_i;
			    }
			} else {
			    if ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rd_i))) {
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r9_lr 
				    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rd_i;
			    } else {
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r8 
				    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rd_i;
			    }
			}
		    }
		} else {
		    if ((4 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rd_i))) {
			if ((2 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rd_i))) {
			    if ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rd_i))) {
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r7 
				    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rd_i;
			    } else {
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r6 
				    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rd_i;
			    }
			} else {
			    if ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rd_i))) {
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r5 
				    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rd_i;
			    } else {
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r4 
				    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rd_i;
			    }
			}
		    } else {
			if ((2 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rd_i))) {
			    if ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rd_i))) {
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r3 
				    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rd_i;
			    } else {
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r2_fp 
				    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rd_i;
			    }
			} else {
			    if ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rd_i))) {
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r1_sp 
				    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rd_i;
			    }
			}
		    }
		}
	    }
	}
    }
}

void Vtop_altor32_regfile_sim::_settle__TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("              Vtop_altor32_regfile_sim::_settle__TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank__2\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../rtl/cpu_lite/altor32_regfile_sim.v:218
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o 
	= ((0x10 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.ra_i))
	    ? ((8 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.ra_i))
	        ? ((4 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.ra_i))
		    ? ((2 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.ra_i))
		        ? ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.ra_i))
			    ? vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r31
			    : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r30)
		        : ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.ra_i))
			    ? vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r29
			    : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r28))
		    : ((2 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.ra_i))
		        ? ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.ra_i))
			    ? vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r27
			    : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r26)
		        : ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.ra_i))
			    ? vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r25
			    : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r24)))
	        : ((4 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.ra_i))
		    ? ((2 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.ra_i))
		        ? ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.ra_i))
			    ? vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r23
			    : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r22)
		        : ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.ra_i))
			    ? vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r21
			    : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r20))
		    : ((2 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.ra_i))
		        ? ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.ra_i))
			    ? vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r19
			    : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r18)
		        : ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.ra_i))
			    ? vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r17
			    : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r16))))
	    : ((8 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.ra_i))
	        ? ((4 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.ra_i))
		    ? ((2 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.ra_i))
		        ? ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.ra_i))
			    ? vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r15
			    : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r14)
		        : ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.ra_i))
			    ? vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r13
			    : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r12))
		    : ((2 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.ra_i))
		        ? ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.ra_i))
			    ? vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r11
			    : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r10)
		        : ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.ra_i))
			    ? vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r9_lr
			    : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r8)))
	        : ((4 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.ra_i))
		    ? ((2 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.ra_i))
		        ? ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.ra_i))
			    ? vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r7
			    : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r6)
		        : ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.ra_i))
			    ? vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r5
			    : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r4))
		    : ((2 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.ra_i))
		        ? ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.ra_i))
			    ? vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r3
			    : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r2_fp)
		        : ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.ra_i))
			    ? vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r1_sp
			    : 0)))));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o 
	= ((0x10 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rb_i))
	    ? ((8 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rb_i))
	        ? ((4 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rb_i))
		    ? ((2 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rb_i))
		        ? ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rb_i))
			    ? vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r31
			    : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r30)
		        : ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rb_i))
			    ? vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r29
			    : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r28))
		    : ((2 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rb_i))
		        ? ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rb_i))
			    ? vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r27
			    : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r26)
		        : ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rb_i))
			    ? vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r25
			    : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r24)))
	        : ((4 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rb_i))
		    ? ((2 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rb_i))
		        ? ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rb_i))
			    ? vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r23
			    : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r22)
		        : ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rb_i))
			    ? vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r21
			    : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r20))
		    : ((2 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rb_i))
		        ? ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rb_i))
			    ? vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r19
			    : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r18)
		        : ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rb_i))
			    ? vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r17
			    : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r16))))
	    : ((8 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rb_i))
	        ? ((4 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rb_i))
		    ? ((2 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rb_i))
		        ? ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rb_i))
			    ? vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r15
			    : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r14)
		        : ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rb_i))
			    ? vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r13
			    : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r12))
		    : ((2 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rb_i))
		        ? ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rb_i))
			    ? vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r11
			    : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r10)
		        : ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rb_i))
			    ? vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r9_lr
			    : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r8)))
	        : ((4 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rb_i))
		    ? ((2 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rb_i))
		        ? ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rb_i))
			    ? vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r7
			    : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r6)
		        : ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rb_i))
			    ? vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r5
			    : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r4))
		    : ((2 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rb_i))
		        ? ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rb_i))
			    ? vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r3
			    : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r2_fp)
		        : ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rb_i))
			    ? vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__PVT__reg_r1_sp
			    : 0)))));
}
