// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"              // For This
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vtop) {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(this, name());
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL (v, Vtop_top);
    // Reset internal values
    
    // Reset structure values
    clk = VL_RAND_RESET_I(1);
    rst_n = VL_RAND_RESET_I(1);
    cclk = VL_RAND_RESET_I(1);
    rx = VL_RAND_RESET_I(1);
    tx = VL_RAND_RESET_I(1);
    W1A = VL_RAND_RESET_I(16);
    W1B = VL_RAND_RESET_I(16);
    W2C = VL_RAND_RESET_I(16);
    LED = VL_RAND_RESET_I(8);
    flash_cs = VL_RAND_RESET_I(1);
    flash_si = VL_RAND_RESET_I(1);
    flash_so = VL_RAND_RESET_I(1);
    flash_sck = VL_RAND_RESET_I(1);
    __VinpClk__TOP__v____PVT__reset = VL_RAND_RESET_I(1);
    __VinpClk__TOP__v__u_soc__rst_i = VL_RAND_RESET_I(1);
    __VinpClk__TOP__v__u_soc__u_intr__rst_i = VL_RAND_RESET_I(1);
    __VinpClk__TOP__v__u_soc__u_uart__rst_i = VL_RAND_RESET_I(1);
    __VinpClk__TOP__v__u_cpu__u1_cpu__u_exec__rst_i = VL_RAND_RESET_I(1);
    __VinpClk__TOP__v__u_soc__u_uart__u1_uart__rst_i = VL_RAND_RESET_I(1);
    __VinpClk__TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank__rst_i = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__v____PVT__reset = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u_soc__clk_i = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__v__u_soc__rst_i = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u_soc__u_timer__clk_i = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u_soc__u_timer__rst_i = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u_soc__u_intr__clk_i = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__v__u_soc__u_intr__rst_i = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u_soc__u_uart__clk_i = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__v__u_soc__u_uart__rst_i = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u_cpu__u1_cpu__u_exec__clk_i = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__v__u_cpu__u1_cpu__u_exec__rst_i = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u_soc__u_uart__u1_uart__clk_i = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__v__u_soc__u_uart__u1_uart__rst_i = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank__clk_i = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank__rst_i = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__reset = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__u_soc__rst_i = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__u_soc__u_uart__rst_i = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__u_soc__u_intr__rst_i = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__u_cpu__u1_cpu__u_exec__rst_i = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__u_soc__u_uart__u1_uart__rst_i = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank__rst_i = VL_RAND_RESET_I(1);
}

void Vtop::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtop::~Vtop() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vtop::eval() {
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate Vtop::eval\n"); );
    int __VclockLoop = 0;
    IData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_PRINTF(" Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void Vtop::_eval_initial_loop(Vtop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    IData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

void Vtop::_settle__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_settle__TOP__1\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->flash_cs = vlSymsp->TOP__v.flash_cs;
    vlTOPp->flash_si = vlSymsp->TOP__v.flash_si;
    vlTOPp->flash_sck = vlSymsp->TOP__v.flash_sck;
    vlTOPp->W1A = 0;
    vlTOPp->W2C = 0;
    vlTOPp->W1B = 0;
    vlSymsp->TOP__v.flash_so = vlTOPp->flash_so;
    vlSymsp->TOP__v.rx = vlTOPp->rx;
    vlSymsp->TOP__v.clk = vlTOPp->clk;
    vlSymsp->TOP__v.W1A = vlTOPp->W1A;
    vlSymsp->TOP__v.W2C = vlTOPp->W2C;
    vlSymsp->TOP__v.W1B = vlTOPp->W1B;
}

void Vtop::_combo__TOP__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_combo__TOP__2\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.flash_so = vlTOPp->flash_so;
    vlSymsp->TOP__v.rx = vlTOPp->rx;
    vlSymsp->TOP__v.clk = vlTOPp->clk;
    vlSymsp->TOP__v.W1A = vlTOPp->W1A;
    vlSymsp->TOP__v.W2C = vlTOPp->W2C;
    vlSymsp->TOP__v.W1B = vlTOPp->W1B;
}

void Vtop::_sequent__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__3\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LED = vlSymsp->TOP__v__u_soc.__PVT__u_gpio0__DOT__line;
}

void Vtop::_settle__TOP__5(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_settle__TOP__5\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->tx = ((((IData)(vlSymsp->TOP__v.__PVT__u_cclk_detector__DOT__ready_q) 
		    & (IData)(vlSymsp->TOP__v__u_soc.uart_tx_o)) 
		   & (IData)(vlSymsp->TOP__v.__PVT__u_cclk_detector__DOT__ready_q)) 
		  & (IData)(vlSymsp->TOP__v.__PVT__u_cclk_detector__DOT__ready_q));
}

void Vtop::_multiclk__TOP__6(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_multiclk__TOP__6\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->tx = ((((IData)(vlSymsp->TOP__v.__PVT__u_cclk_detector__DOT__ready_q) 
		    & (IData)(vlSymsp->TOP__v__u_soc.uart_tx_o)) 
		   & (IData)(vlSymsp->TOP__v.__PVT__u_cclk_detector__DOT__ready_q)) 
		  & (IData)(vlSymsp->TOP__v.__PVT__u_cclk_detector__DOT__ready_q));
    vlSymsp->TOP__v.tx = vlTOPp->tx;
}

void Vtop::_settle__TOP__7(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_settle__TOP__7\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.tx = vlTOPp->tx;
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_eval\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_cpu._combo__TOP__v__u_cpu__2(vlSymsp);
    vlSymsp->TOP__v__u_soc._settle__TOP__v__u_soc__1(vlSymsp);
    vlTOPp->_combo__TOP__2(vlSymsp);
    vlSymsp->TOP__v._combo__TOP__v__2(vlSymsp);
    vlSymsp->TOP__v__u_cpu._combo__TOP__v__u_cpu__3(vlSymsp);
    if (((IData)(vlSymsp->TOP__v.clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__v__clk)))) {
	vlSymsp->TOP__v._sequent__TOP__v__4(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__v____PVT__reset) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v____PVT__reset))) 
	 | ((IData)(vlSymsp->TOP__v.clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__v__clk))))) {
	vlSymsp->TOP__v._sequent__TOP__v__5(vlSymsp);
	vlSymsp->TOP__v__u_cpu._sequent__TOP__v__u_cpu__5(vlSymsp);
    }
    vlSymsp->TOP__v__u_soc._settle__TOP__v__u_soc__3(vlSymsp);
    vlSymsp->TOP__v__u_cpu__u1_cpu._settle__TOP__v__u_cpu__u1_cpu__2(vlSymsp);
    vlSymsp->TOP__v._combo__TOP__v__6(vlSymsp);
    vlSymsp->TOP__v__u_soc__u_uart._combo__TOP__v__u_soc__u_uart__1(vlSymsp);
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec._combo__TOP__v__u_cpu__u1_cpu__u_exec__1(vlSymsp);
    if (((IData)(vlSymsp->TOP__v__u_soc.clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_soc__clk_i)))) {
	vlSymsp->TOP__v__u_soc._sequent__TOP__v__u_soc__5(vlSymsp);
	vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    if ((((IData)(vlSymsp->TOP__v__u_soc.clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_soc__clk_i))) 
	 | ((IData)(vlTOPp->__VinpClk__TOP__v__u_soc__rst_i) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__u_soc__rst_i))))) {
	vlSymsp->TOP__v__u_soc._sequent__TOP__v__u_soc__6(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v.clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__v__clk)))) {
	vlSymsp->TOP__v._sequent__TOP__v__8(vlSymsp);
	vlSymsp->TOP__v__u_cpu._sequent__TOP__v__u_cpu__7(vlSymsp);
    }
    if ((((IData)(vlSymsp->TOP__v__u_soc__u_timer.clk_i) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_soc__u_timer__clk_i))) 
	 | ((IData)(vlSymsp->TOP__v__u_soc__u_timer.rst_i) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_soc__u_timer__rst_i))))) {
	vlSymsp->TOP__v__u_soc__u_timer._sequent__TOP__v__u_soc__u_timer__1(vlSymsp);
    }
    if ((((IData)(vlSymsp->TOP__v__u_soc__u_intr.clk_i) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_soc__u_intr__clk_i))) 
	 | ((IData)(vlTOPp->__VinpClk__TOP__v__u_soc__u_intr__rst_i) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__u_soc__u_intr__rst_i))))) {
	vlSymsp->TOP__v__u_soc__u_intr._sequent__TOP__v__u_soc__u_intr__1(vlSymsp);
	vlSymsp->TOP__v__u_soc._sequent__TOP__v__u_soc__8(vlSymsp);
    }
    if ((((IData)(vlSymsp->TOP__v__u_soc__u_uart.clk_i) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_soc__u_uart__clk_i))) 
	 | ((IData)(vlTOPp->__VinpClk__TOP__v__u_soc__u_uart__rst_i) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__u_soc__u_uart__rst_i))))) {
	vlSymsp->TOP__v__u_soc__u_uart._sequent__TOP__v__u_soc__u_uart__3(vlSymsp);
    }
    if ((((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.clk_i) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_cpu__u1_cpu__u_exec__clk_i))) 
	 | ((IData)(vlTOPp->__VinpClk__TOP__v__u_cpu__u1_cpu__u_exec__rst_i) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__u_cpu__u1_cpu__u_exec__rst_i))))) {
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec._sequent__TOP__v__u_cpu__u1_cpu__u_exec__3(vlSymsp);
	vlSymsp->TOP__v__u_cpu__u1_cpu._sequent__TOP__v__u_cpu__u1_cpu__4(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_soc.clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_soc__clk_i)))) {
	vlSymsp->TOP__v__u_soc._settle__TOP__v__u_soc__7(vlSymsp);
    }
    vlSymsp->TOP__v._combo__TOP__v__9(vlSymsp);
    vlSymsp->TOP__v__u_soc._combo__TOP__v__u_soc__10(vlSymsp);
    vlSymsp->TOP__v__u_cpu__u1_cpu._combo__TOP__v__u_cpu__u1_cpu__5(vlSymsp);
    if ((((IData)(vlSymsp->TOP__v__u_soc__u_uart__u1_uart.clk_i) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_soc__u_uart__u1_uart__clk_i))) 
	 | ((IData)(vlTOPp->__VinpClk__TOP__v__u_soc__u_uart__u1_uart__rst_i) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__u_soc__u_uart__u1_uart__rst_i))))) {
	vlSymsp->TOP__v__u_soc__u_uart__u1_uart._sequent__TOP__v__u_soc__u_uart__u1_uart__1(vlSymsp);
	vlSymsp->TOP__v__u_soc__u_uart._sequent__TOP__v__u_soc__u_uart__4(vlSymsp);
    }
    if ((((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.clk_i) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank__clk_i))) 
	 | ((IData)(vlTOPp->__VinpClk__TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank__rst_i) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank__rst_i))))) {
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank._sequent__TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank__1(vlSymsp);
    }
    if ((((IData)(vlSymsp->TOP__v__u_soc__u_uart.clk_i) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_soc__u_uart__clk_i))) 
	 | ((IData)(vlTOPp->__VinpClk__TOP__v__u_soc__u_uart__rst_i) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__u_soc__u_uart__rst_i))))) {
	vlSymsp->TOP__v__u_soc__u_uart._sequent__TOP__v__u_soc__u_uart__6(vlSymsp);
    }
    vlSymsp->TOP__v__u_soc__u_uart._combo__TOP__v__u_soc__u_uart__7(vlSymsp);
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec._combo__TOP__v__u_cpu__u1_cpu__u_exec__5(vlSymsp);
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu._combo__TOP__v__u_cpu__u1_cpu__u_exec__alu__2(vlSymsp);
    vlSymsp->TOP__v__u_soc__u_uart__u1_uart._combo__TOP__v__u_soc__u_uart__u1_uart__2(vlSymsp);
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec._combo__TOP__v__u_cpu__u1_cpu__u_exec__6(vlSymsp);
    if ((((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.clk_i) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_cpu__u1_cpu__u_exec__clk_i))) 
	 | ((IData)(vlTOPp->__VinpClk__TOP__v__u_cpu__u1_cpu__u_exec__rst_i) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__u_cpu__u1_cpu__u_exec__rst_i))))) {
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec._sequent__TOP__v__u_cpu__u1_cpu__u_exec__7(vlSymsp);
	vlSymsp->TOP__v__u_cpu._sequent__TOP__v__u_cpu__9(vlSymsp);
	vlSymsp->TOP__v._sequent__TOP__v__10(vlSymsp);
    }
    if ((((IData)(vlSymsp->TOP__v__u_soc__u_intr.clk_i) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_soc__u_intr__clk_i))) 
	 | ((IData)(vlTOPp->__VinpClk__TOP__v__u_soc__u_intr__rst_i) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__u_soc__u_intr__rst_i))))) {
	vlSymsp->TOP__v__u_cpu._sequent__TOP__v__u_cpu__10(vlSymsp);
    }
    if ((((((((IData)(vlTOPp->__VinpClk__TOP__v____PVT__reset) 
	      & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v____PVT__reset))) 
	     | ((IData)(vlSymsp->TOP__v.clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__v__clk)))) 
	    | ((IData)(vlSymsp->TOP__v__u_soc.clk_i) 
	       & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_soc__clk_i)))) 
	   | ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.clk_i) 
	      & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_cpu__u1_cpu__u_exec__clk_i)))) 
	  | ((IData)(vlTOPp->__VinpClk__TOP__v__u_soc__rst_i) 
	     & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__u_soc__rst_i)))) 
	 | ((IData)(vlTOPp->__VinpClk__TOP__v__u_cpu__u1_cpu__u_exec__rst_i) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__u_cpu__u1_cpu__u_exec__rst_i))))) {
	vlSymsp->TOP__v__u_cpu._multiclk__TOP__v__u_cpu__11(vlSymsp);
    }
    if ((((IData)(vlSymsp->TOP__v__u_soc__u_uart__u1_uart.clk_i) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_soc__u_uart__u1_uart__clk_i))) 
	 | ((IData)(vlTOPp->__VinpClk__TOP__v__u_soc__u_uart__u1_uart__rst_i) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__u_soc__u_uart__u1_uart__rst_i))))) {
	vlSymsp->TOP__v__u_soc._settle__TOP__v__u_soc__12(vlSymsp);
    }
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank._settle__TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank__2(vlSymsp);
    vlSymsp->TOP__v__u_cpu__u1_cpu._combo__TOP__v__u_cpu__u1_cpu__9(vlSymsp);
    vlSymsp->TOP__v__u_soc._combo__TOP__v__u_soc__15(vlSymsp);
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec._combo__TOP__v__u_cpu__u1_cpu__u_exec__9(vlSymsp);
    vlSymsp->TOP__v__u_soc__u_timer._combo__TOP__v__u_soc__u_timer__2(vlSymsp);
    vlSymsp->TOP__v__u_soc__u_intr._combo__TOP__v__u_soc__u_intr__2(vlSymsp);
    vlSymsp->TOP__v__u_soc__u_uart._combo__TOP__v__u_soc__u_uart__8(vlSymsp);
    if (((((IData)(vlSymsp->TOP__v.clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__v__clk))) 
	  | ((IData)(vlSymsp->TOP__v__u_soc__u_uart__u1_uart.clk_i) 
	     & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_soc__u_uart__u1_uart__clk_i)))) 
	 | ((IData)(vlTOPp->__VinpClk__TOP__v__u_soc__u_uart__u1_uart__rst_i) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__u_soc__u_uart__u1_uart__rst_i))))) {
	vlTOPp->_multiclk__TOP__6(vlSymsp);
    }
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec._combo__TOP__v__u_cpu__u1_cpu__u_exec__11(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__v__clk = vlSymsp->TOP__v.clk;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__v____PVT__reset 
	= vlTOPp->__VinpClk__TOP__v____PVT__reset;
    vlTOPp->__Vclklast__TOP__v__u_soc__clk_i = vlSymsp->TOP__v__u_soc.clk_i;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__u_soc__rst_i 
	= vlTOPp->__VinpClk__TOP__v__u_soc__rst_i;
    vlTOPp->__Vclklast__TOP__v__u_soc__u_timer__clk_i 
	= vlSymsp->TOP__v__u_soc__u_timer.clk_i;
    vlTOPp->__Vclklast__TOP__v__u_soc__u_timer__rst_i 
	= vlSymsp->TOP__v__u_soc__u_timer.rst_i;
    vlTOPp->__Vclklast__TOP__v__u_soc__u_intr__clk_i 
	= vlSymsp->TOP__v__u_soc__u_intr.clk_i;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__u_soc__u_intr__rst_i 
	= vlTOPp->__VinpClk__TOP__v__u_soc__u_intr__rst_i;
    vlTOPp->__Vclklast__TOP__v__u_soc__u_uart__clk_i 
	= vlSymsp->TOP__v__u_soc__u_uart.clk_i;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__u_soc__u_uart__rst_i 
	= vlTOPp->__VinpClk__TOP__v__u_soc__u_uart__rst_i;
    vlTOPp->__Vclklast__TOP__v__u_cpu__u1_cpu__u_exec__clk_i 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.clk_i;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__u_cpu__u1_cpu__u_exec__rst_i 
	= vlTOPp->__VinpClk__TOP__v__u_cpu__u1_cpu__u_exec__rst_i;
    vlTOPp->__Vclklast__TOP__v__u_soc__u_uart__u1_uart__clk_i 
	= vlSymsp->TOP__v__u_soc__u_uart__u1_uart.clk_i;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__u_soc__u_uart__u1_uart__rst_i 
	= vlTOPp->__VinpClk__TOP__v__u_soc__u_uart__u1_uart__rst_i;
    vlTOPp->__Vclklast__TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank__clk_i 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.clk_i;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank__rst_i 
	= vlTOPp->__VinpClk__TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank__rst_i;
    vlTOPp->__VinpClk__TOP__v____PVT__reset = vlSymsp->TOP__v.__PVT__reset;
    vlTOPp->__VinpClk__TOP__v__u_soc__rst_i = vlSymsp->TOP__v__u_soc.rst_i;
    vlTOPp->__VinpClk__TOP__v__u_soc__u_intr__rst_i 
	= vlSymsp->TOP__v__u_soc__u_intr.rst_i;
    vlTOPp->__VinpClk__TOP__v__u_soc__u_uart__rst_i 
	= vlSymsp->TOP__v__u_soc__u_uart.rst_i;
    vlTOPp->__VinpClk__TOP__v__u_cpu__u1_cpu__u_exec__rst_i 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.rst_i;
    vlTOPp->__VinpClk__TOP__v__u_soc__u_uart__u1_uart__rst_i 
	= vlSymsp->TOP__v__u_soc__u_uart__u1_uart.rst_i;
    vlTOPp->__VinpClk__TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank__rst_i 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rst_i;
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_eval_initial\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v._initial__TOP__v(vlSymsp);
    vlSymsp->TOP__v__u_cpu__u1_cpu._initial__TOP__v__u_cpu__u1_cpu(vlSymsp);
    vlSymsp->TOP__v__u_soc__u_timer._initial__TOP__v__u_soc__u_timer(vlSymsp);
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec._initial__TOP__v__u_cpu__u1_cpu__u_exec(vlSymsp);
}

void Vtop::final() {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::final\n"); );
    // Variables
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::_eval_settle(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_eval_settle\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_cpu._settle__TOP__v__u_cpu__1(vlSymsp);
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__1(vlSymsp);
    vlSymsp->TOP__v__u_soc._settle__TOP__v__u_soc__1(vlSymsp);
    vlSymsp->TOP__v__u_cpu__u1_cpu._settle__TOP__v__u_cpu__u1_cpu__1(vlSymsp);
    vlSymsp->TOP__v._combo__TOP__v__2(vlSymsp);
    vlSymsp->TOP__v__u_cpu._combo__TOP__v__u_cpu__3(vlSymsp);
    vlSymsp->TOP__v__u_soc._settle__TOP__v__u_soc__3(vlSymsp);
    vlSymsp->TOP__v__u_cpu__u1_cpu._settle__TOP__v__u_cpu__u1_cpu__2(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__7(vlSymsp);
    vlSymsp->TOP__v__u_cpu._settle__TOP__v__u_cpu__6(vlSymsp);
    vlSymsp->TOP__v__u_soc__u_uart._combo__TOP__v__u_soc__u_uart__1(vlSymsp);
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec._combo__TOP__v__u_cpu__u1_cpu__u_exec__1(vlSymsp);
    vlTOPp->_sequent__TOP__3(vlSymsp);
    vlSymsp->TOP__v__u_soc._settle__TOP__v__u_soc__7(vlSymsp);
    vlSymsp->TOP__v__u_soc._settle__TOP__v__u_soc__11(vlSymsp);
    vlSymsp->TOP__v__u_cpu__u1_cpu._settle__TOP__v__u_cpu__u1_cpu__6(vlSymsp);
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec._settle__TOP__v__u_cpu__u1_cpu__u_exec__4(vlSymsp);
    vlSymsp->TOP__v__u_soc__u_uart._settle__TOP__v__u_soc__u_uart__5(vlSymsp);
    vlSymsp->TOP__v__u_cpu._settle__TOP__v__u_cpu__8(vlSymsp);
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu._settle__TOP__v__u_cpu__u1_cpu__u_exec__alu__1(vlSymsp);
    vlSymsp->TOP__v__u_soc._settle__TOP__v__u_soc__12(vlSymsp);
    vlSymsp->TOP__v__u_soc__u_uart__u1_uart._combo__TOP__v__u_soc__u_uart__u1_uart__2(vlSymsp);
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu._settle__TOP__v__u_cpu__u1_cpu__u_exec__alu__3(vlSymsp);
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec._settle__TOP__v__u_cpu__u1_cpu__u_exec__8(vlSymsp);
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank._settle__TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank__2(vlSymsp);
    vlSymsp->TOP__v._sequent__TOP__v__10(vlSymsp);
    vlSymsp->TOP__v__u_cpu__u1_cpu._settle__TOP__v__u_cpu__u1_cpu__7(vlSymsp);
    vlSymsp->TOP__v__u_cpu._settle__TOP__v__u_cpu__12(vlSymsp);
    vlTOPp->_settle__TOP__5(vlSymsp);
    vlSymsp->TOP__v__u_soc._settle__TOP__v__u_soc__14(vlSymsp);
    vlSymsp->TOP__v__u_cpu__u1_cpu._settle__TOP__v__u_cpu__u1_cpu__8(vlSymsp);
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec._settle__TOP__v__u_cpu__u1_cpu__u_exec__10(vlSymsp);
    vlSymsp->TOP__v__u_soc__u_timer._combo__TOP__v__u_soc__u_timer__2(vlSymsp);
    vlSymsp->TOP__v__u_soc__u_intr._combo__TOP__v__u_soc__u_intr__2(vlSymsp);
    vlSymsp->TOP__v__u_soc__u_uart._combo__TOP__v__u_soc__u_uart__8(vlSymsp);
    vlSymsp->TOP__v__u_soc._settle__TOP__v__u_soc__16(vlSymsp);
    vlTOPp->_settle__TOP__7(vlSymsp);
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec._settle__TOP__v__u_cpu__u1_cpu__u_exec__12(vlSymsp);
}

IData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_change_request\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    IData __req = false;  // Logically a bool
    __req |= ((vlSymsp->TOP__v.__PVT__reset ^ vlTOPp->__Vchglast__TOP__v__reset)
	 | (vlSymsp->TOP__v__u_soc.rst_i ^ vlTOPp->__Vchglast__TOP__v__u_soc__rst_i)
	 | (vlSymsp->TOP__v__u_soc__u_uart.rst_i ^ vlTOPp->__Vchglast__TOP__v__u_soc__u_uart__rst_i)
	 | (vlSymsp->TOP__v__u_soc__u_intr.rst_i ^ vlTOPp->__Vchglast__TOP__v__u_soc__u_intr__rst_i)
	 | (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.rst_i ^ vlTOPp->__Vchglast__TOP__v__u_cpu__u1_cpu__u_exec__rst_i)
	 | (vlSymsp->TOP__v__u_soc__u_uart__u1_uart.rst_i ^ vlTOPp->__Vchglast__TOP__v__u_soc__u_uart__u1_uart__rst_i)
	 | (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rst_i ^ vlTOPp->__Vchglast__TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank__rst_i));
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__v.__PVT__reset ^ vlTOPp->__Vchglast__TOP__v__reset))) VL_PRINTF("	CHANGE: ../top.v:96: reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__v__u_soc.rst_i ^ vlTOPp->__Vchglast__TOP__v__u_soc__rst_i))) VL_PRINTF("	CHANGE: ../../../rtl/soc/soc.v:79: rst_i\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__v__u_soc__u_uart.rst_i ^ vlTOPp->__Vchglast__TOP__v__u_soc__u_uart__rst_i))) VL_PRINTF("	CHANGE: ../../../rtl/peripheral/uart_periph.v:50: rst_i\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__v__u_soc__u_intr.rst_i ^ vlTOPp->__Vchglast__TOP__v__u_soc__u_intr__rst_i))) VL_PRINTF("	CHANGE: ../../../rtl/peripheral/intr_periph.v:82: rst_i\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.rst_i ^ vlTOPp->__Vchglast__TOP__v__u_cpu__u1_cpu__u_exec__rst_i))) VL_PRINTF("	CHANGE: ../../../rtl/cpu_lite/altor32_lite.v:53: rst_i\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__v__u_soc__u_uart__u1_uart.rst_i ^ vlTOPp->__Vchglast__TOP__v__u_soc__u_uart__u1_uart__rst_i))) VL_PRINTF("	CHANGE: ../../../rtl/peripheral/uart.v:68: rst_i\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rst_i ^ vlTOPp->__Vchglast__TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank__rst_i))) VL_PRINTF("	CHANGE: ../../../rtl/cpu_lite/altor32_regfile_sim.v:49: rst_i\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__v__reset = vlSymsp->TOP__v.__PVT__reset;
    vlTOPp->__Vchglast__TOP__v__u_soc__rst_i = vlSymsp->TOP__v__u_soc.rst_i;
    vlTOPp->__Vchglast__TOP__v__u_soc__u_uart__rst_i 
	= vlSymsp->TOP__v__u_soc__u_uart.rst_i;
    vlTOPp->__Vchglast__TOP__v__u_soc__u_intr__rst_i 
	= vlSymsp->TOP__v__u_soc__u_intr.rst_i;
    vlTOPp->__Vchglast__TOP__v__u_cpu__u1_cpu__u_exec__rst_i 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.rst_i;
    vlTOPp->__Vchglast__TOP__v__u_soc__u_uart__u1_uart__rst_i 
	= vlSymsp->TOP__v__u_soc__u_uart__u1_uart.rst_i;
    vlTOPp->__Vchglast__TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank__rst_i 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rst_i;
    return __req;
}
