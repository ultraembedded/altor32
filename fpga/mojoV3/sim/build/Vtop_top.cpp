// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_top.h"          // For This
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vtop_top) {
    VL_CELL (u_cpu, Vtop_cpu_if__pi1);
    VL_CELL (u_soc, Vtop_soc__pi2);
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
    __PVT__reset = VL_RAND_RESET_I(1);
    __PVT__dmem_data_r = VL_RAND_RESET_I(32);
    __PVT__dmem_ack = VL_RAND_RESET_I(1);
    __PVT__imem_data = VL_RAND_RESET_I(32);
    __PVT__imem_ack = VL_RAND_RESET_I(1);
    __PVT__dmem_web = VL_RAND_RESET_I(4);
    tx__out = VL_RAND_RESET_I(1);
    tx__en = VL_RAND_RESET_I(1);
    W1A__out = VL_RAND_RESET_I(16);
    W1A__en = VL_RAND_RESET_I(16);
    W1B__out = VL_RAND_RESET_I(16);
    W1B__en = VL_RAND_RESET_I(16);
    W2C__out = VL_RAND_RESET_I(16);
    W2C__en = VL_RAND_RESET_I(16);
    __PVT__u_cclk_detector__DOT__ctr_d = VL_RAND_RESET_I(10);
    __PVT__u_cclk_detector__DOT__ctr_q = VL_RAND_RESET_I(10);
    __PVT__u_cclk_detector__DOT__ready_d = VL_RAND_RESET_I(1);
    __PVT__u_cclk_detector__DOT__ready_q = VL_RAND_RESET_I(1);
    u_ram__DOT____Vcellout__dp8_0__datab_o = VL_RAND_RESET_I(8);
    u_ram__DOT____Vcellout__dp8_0__dataa_o = VL_RAND_RESET_I(8);
    u_ram__DOT____Vcellout__dp8_1__datab_o = VL_RAND_RESET_I(8);
    u_ram__DOT____Vcellout__dp8_1__dataa_o = VL_RAND_RESET_I(8);
    u_ram__DOT____Vcellout__dp8_2__datab_o = VL_RAND_RESET_I(8);
    u_ram__DOT____Vcellout__dp8_2__dataa_o = VL_RAND_RESET_I(8);
    u_ram__DOT____Vcellout__dp8_3__datab_o = VL_RAND_RESET_I(8);
    u_ram__DOT____Vcellout__dp8_3__dataa_o = VL_RAND_RESET_I(8);
    { int __Vi0=0; for (; __Vi0<6000; ++__Vi0) {
	    __PVT__u_ram__DOT__dp8_0__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }}
    u_ram__DOT__dp8_0__DOT____Vlvbound2 = VL_RAND_RESET_I(8);
    { int __Vi0=0; for (; __Vi0<6000; ++__Vi0) {
	    __PVT__u_ram__DOT__dp8_1__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }}
    u_ram__DOT__dp8_1__DOT____Vlvbound2 = VL_RAND_RESET_I(8);
    { int __Vi0=0; for (; __Vi0<6000; ++__Vi0) {
	    __PVT__u_ram__DOT__dp8_2__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }}
    u_ram__DOT__dp8_2__DOT____Vlvbound2 = VL_RAND_RESET_I(8);
    { int __Vi0=0; for (; __Vi0<6000; ++__Vi0) {
	    __PVT__u_ram__DOT__dp8_3__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }}
    u_ram__DOT__dp8_3__DOT____Vlvbound2 = VL_RAND_RESET_I(8);
    __Vdlyvdim0__u_ram__DOT__dp8_0__DOT__mem__v0 = VL_RAND_RESET_I(13);
    __Vdlyvval__u_ram__DOT__dp8_0__DOT__mem__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__u_ram__DOT__dp8_0__DOT__mem__v0 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__u_ram__DOT__dp8_1__DOT__mem__v0 = VL_RAND_RESET_I(13);
    __Vdlyvval__u_ram__DOT__dp8_1__DOT__mem__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__u_ram__DOT__dp8_1__DOT__mem__v0 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__u_ram__DOT__dp8_2__DOT__mem__v0 = VL_RAND_RESET_I(13);
    __Vdlyvval__u_ram__DOT__dp8_2__DOT__mem__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__u_ram__DOT__dp8_2__DOT__mem__v0 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__u_ram__DOT__dp8_3__DOT__mem__v0 = VL_RAND_RESET_I(13);
    __Vdlyvval__u_ram__DOT__dp8_3__DOT__mem__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__u_ram__DOT__dp8_3__DOT__mem__v0 = VL_RAND_RESET_I(1);
}

void Vtop_top::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtop_top::~Vtop_top() {
}

//--------------------
// Internal Methods

void Vtop_top::_initial__TOP__v(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vtop_top::_initial__TOP__v\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    //char	__VpadToAlign4[4];
    VL_SIGW(__Vtemp1,95,0,3);
    //char	__VpadToAlign20[4];
    VL_SIGW(__Vtemp2,95,0,3);
    //char	__VpadToAlign36[4];
    VL_SIGW(__Vtemp3,95,0,3);
    //char	__VpadToAlign52[4];
    VL_SIGW(__Vtemp4,95,0,3);
    // Body
    // INITIAL at ../top.v:96
    vlSymsp->TOP__v.__PVT__reset = 1;
    // INITIAL at ../top.v:299
    vlSymsp->TOP__v.flash_cs = 0;
    // INITIAL at ../top.v:300
    vlSymsp->TOP__v.flash_sck = 0;
    // INITIAL at ../top.v:301
    vlSymsp->TOP__v.flash_si = 0;
    // INITIAL at ../ram.v:128
    __Vtemp1[0] = 0x2e686578;
    __Vtemp1[1] = 0x656d5f30;
    __Vtemp1[2] = 0x73772f6d;
    VL_READMEM_W (true,8,6000, 0,3, __Vtemp1, vlSymsp->TOP__v.__PVT__u_ram__DOT__dp8_0__DOT__mem
		  ,0,~0);
    // INITIAL at ../ram.v:128
    __Vtemp2[0] = 0x2e686578;
    __Vtemp2[1] = 0x656d5f31;
    __Vtemp2[2] = 0x73772f6d;
    VL_READMEM_W (true,8,6000, 0,3, __Vtemp2, vlSymsp->TOP__v.__PVT__u_ram__DOT__dp8_1__DOT__mem
		  ,0,~0);
    // INITIAL at ../ram.v:128
    __Vtemp3[0] = 0x2e686578;
    __Vtemp3[1] = 0x656d5f32;
    __Vtemp3[2] = 0x73772f6d;
    VL_READMEM_W (true,8,6000, 0,3, __Vtemp3, vlSymsp->TOP__v.__PVT__u_ram__DOT__dp8_2__DOT__mem
		  ,0,~0);
    // INITIAL at ../ram.v:128
    __Vtemp4[0] = 0x2e686578;
    __Vtemp4[1] = 0x656d5f33;
    __Vtemp4[2] = 0x73772f6d;
    VL_READMEM_W (true,8,6000, 0,3, __Vtemp4, vlSymsp->TOP__v.__PVT__u_ram__DOT__dp8_3__DOT__mem
		  ,0,~0);
}

void Vtop_top::_settle__TOP__v__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vtop_top::_settle__TOP__v__1\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_soc.ext_intr_i = 0;
}

void Vtop_top::_combo__TOP__v__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vtop_top::_combo__TOP__v__2\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_soc.uart_rx_i = vlSymsp->TOP__v.rx;
    vlSymsp->TOP__v__u_soc.clk_i = vlSymsp->TOP__v.clk;
}

void Vtop_top::_sequent__TOP__v__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vtop_top::_sequent__TOP__v__4\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__Vdlyvset__u_ram__DOT__dp8_0__DOT__mem__v0 = 0;
    vlSymsp->TOP__v.__Vdlyvset__u_ram__DOT__dp8_1__DOT__mem__v0 = 0;
    vlSymsp->TOP__v.__Vdlyvset__u_ram__DOT__dp8_2__DOT__mem__v0 = 0;
    vlSymsp->TOP__v.__Vdlyvset__u_ram__DOT__dp8_3__DOT__mem__v0 = 0;
    // ALWAYS at ../ram.v:111
    vlSymsp->TOP__v.u_ram__DOT____Vcellout__dp8_0__dataa_o 
	= ((0x176f >= (0x1fff & (vlSymsp->TOP__v__u_cpu__u1_cpu.imem_addr_o 
				 >> 2))) ? (IData)(vlSymsp->TOP__v.__PVT__u_ram__DOT__dp8_0__DOT__mem)
	   [(0x1fff & (vlSymsp->TOP__v__u_cpu__u1_cpu.imem_addr_o 
		       >> 2))] : 0);
    // ALWAYS at ../ram.v:111
    vlSymsp->TOP__v.u_ram__DOT____Vcellout__dp8_1__dataa_o 
	= ((0x176f >= (0x1fff & (vlSymsp->TOP__v__u_cpu__u1_cpu.imem_addr_o 
				 >> 2))) ? (IData)(vlSymsp->TOP__v.__PVT__u_ram__DOT__dp8_1__DOT__mem)
	   [(0x1fff & (vlSymsp->TOP__v__u_cpu__u1_cpu.imem_addr_o 
		       >> 2))] : 0);
    // ALWAYS at ../ram.v:111
    vlSymsp->TOP__v.u_ram__DOT____Vcellout__dp8_2__dataa_o 
	= ((0x176f >= (0x1fff & (vlSymsp->TOP__v__u_cpu__u1_cpu.imem_addr_o 
				 >> 2))) ? (IData)(vlSymsp->TOP__v.__PVT__u_ram__DOT__dp8_2__DOT__mem)
	   [(0x1fff & (vlSymsp->TOP__v__u_cpu__u1_cpu.imem_addr_o 
		       >> 2))] : 0);
    // ALWAYS at ../ram.v:111
    vlSymsp->TOP__v.u_ram__DOT____Vcellout__dp8_3__dataa_o 
	= ((0x176f >= (0x1fff & (vlSymsp->TOP__v__u_cpu__u1_cpu.imem_addr_o 
				 >> 2))) ? (IData)(vlSymsp->TOP__v.__PVT__u_ram__DOT__dp8_3__DOT__mem)
	   [(0x1fff & (vlSymsp->TOP__v__u_cpu__u1_cpu.imem_addr_o 
		       >> 2))] : 0);
    // ALWAYS at ../cclk_detector.v:32
    if (vlSymsp->TOP__v.__PVT__reset) {
	vlSymsp->TOP__v.__PVT__u_cclk_detector__DOT__ctr_q = 0;
	vlSymsp->TOP__v.__PVT__u_cclk_detector__DOT__ready_q = 0;
    } else {
	vlSymsp->TOP__v.__PVT__u_cclk_detector__DOT__ctr_q 
	    = vlSymsp->TOP__v.__PVT__u_cclk_detector__DOT__ctr_d;
	vlSymsp->TOP__v.__PVT__u_cclk_detector__DOT__ready_q 
	    = vlSymsp->TOP__v.__PVT__u_cclk_detector__DOT__ready_d;
    }
    // ALWAYS at ../ram.v:120
    vlSymsp->TOP__v.u_ram__DOT____Vcellout__dp8_0__datab_o 
	= ((0x176f >= (0x1fff & (vlSymsp->TOP__v__u_cpu.__PVT__dmem0_addr_o 
				 >> 2))) ? (IData)(vlSymsp->TOP__v.__PVT__u_ram__DOT__dp8_0__DOT__mem)
	   [(0x1fff & (vlSymsp->TOP__v__u_cpu.__PVT__dmem0_addr_o 
		       >> 2))] : 0);
    if ((1 & (IData)(vlSymsp->TOP__v.__PVT__dmem_web))) {
	vlSymsp->TOP__v.u_ram__DOT__dp8_0__DOT____Vlvbound2 
	    = (0xff & (vlSymsp->TOP__v__u_cpu.__PVT__dmem0_data_o 
		       >> 0x18));
	vlSymsp->TOP__v.u_ram__DOT____Vcellout__dp8_0__datab_o 
	    = (0xff & (vlSymsp->TOP__v__u_cpu.__PVT__dmem0_data_o 
		       >> 0x18));
	if ((0x176f >= (0x1fff & (vlSymsp->TOP__v__u_cpu.__PVT__dmem0_addr_o 
				  >> 2)))) {
	    vlSymsp->TOP__v.__Vdlyvval__u_ram__DOT__dp8_0__DOT__mem__v0 
		= vlSymsp->TOP__v.u_ram__DOT__dp8_0__DOT____Vlvbound2;
	    vlSymsp->TOP__v.__Vdlyvset__u_ram__DOT__dp8_0__DOT__mem__v0 = 1;
	    vlSymsp->TOP__v.__Vdlyvdim0__u_ram__DOT__dp8_0__DOT__mem__v0 
		= (0x1fff & (vlSymsp->TOP__v__u_cpu.__PVT__dmem0_addr_o 
			     >> 2));
	}
    }
    // ALWAYS at ../ram.v:120
    vlSymsp->TOP__v.u_ram__DOT____Vcellout__dp8_1__datab_o 
	= ((0x176f >= (0x1fff & (vlSymsp->TOP__v__u_cpu.__PVT__dmem0_addr_o 
				 >> 2))) ? (IData)(vlSymsp->TOP__v.__PVT__u_ram__DOT__dp8_1__DOT__mem)
	   [(0x1fff & (vlSymsp->TOP__v__u_cpu.__PVT__dmem0_addr_o 
		       >> 2))] : 0);
    if ((2 & (IData)(vlSymsp->TOP__v.__PVT__dmem_web))) {
	vlSymsp->TOP__v.u_ram__DOT__dp8_1__DOT____Vlvbound2 
	    = (0xff & (vlSymsp->TOP__v__u_cpu.__PVT__dmem0_data_o 
		       >> 0x10));
	vlSymsp->TOP__v.u_ram__DOT____Vcellout__dp8_1__datab_o 
	    = (0xff & (vlSymsp->TOP__v__u_cpu.__PVT__dmem0_data_o 
		       >> 0x10));
	if ((0x176f >= (0x1fff & (vlSymsp->TOP__v__u_cpu.__PVT__dmem0_addr_o 
				  >> 2)))) {
	    vlSymsp->TOP__v.__Vdlyvval__u_ram__DOT__dp8_1__DOT__mem__v0 
		= vlSymsp->TOP__v.u_ram__DOT__dp8_1__DOT____Vlvbound2;
	    vlSymsp->TOP__v.__Vdlyvset__u_ram__DOT__dp8_1__DOT__mem__v0 = 1;
	    vlSymsp->TOP__v.__Vdlyvdim0__u_ram__DOT__dp8_1__DOT__mem__v0 
		= (0x1fff & (vlSymsp->TOP__v__u_cpu.__PVT__dmem0_addr_o 
			     >> 2));
	}
    }
    // ALWAYS at ../ram.v:120
    vlSymsp->TOP__v.u_ram__DOT____Vcellout__dp8_2__datab_o 
	= ((0x176f >= (0x1fff & (vlSymsp->TOP__v__u_cpu.__PVT__dmem0_addr_o 
				 >> 2))) ? (IData)(vlSymsp->TOP__v.__PVT__u_ram__DOT__dp8_2__DOT__mem)
	   [(0x1fff & (vlSymsp->TOP__v__u_cpu.__PVT__dmem0_addr_o 
		       >> 2))] : 0);
    if ((4 & (IData)(vlSymsp->TOP__v.__PVT__dmem_web))) {
	vlSymsp->TOP__v.u_ram__DOT__dp8_2__DOT____Vlvbound2 
	    = (0xff & (vlSymsp->TOP__v__u_cpu.__PVT__dmem0_data_o 
		       >> 8));
	vlSymsp->TOP__v.u_ram__DOT____Vcellout__dp8_2__datab_o 
	    = (0xff & (vlSymsp->TOP__v__u_cpu.__PVT__dmem0_data_o 
		       >> 8));
	if ((0x176f >= (0x1fff & (vlSymsp->TOP__v__u_cpu.__PVT__dmem0_addr_o 
				  >> 2)))) {
	    vlSymsp->TOP__v.__Vdlyvval__u_ram__DOT__dp8_2__DOT__mem__v0 
		= vlSymsp->TOP__v.u_ram__DOT__dp8_2__DOT____Vlvbound2;
	    vlSymsp->TOP__v.__Vdlyvset__u_ram__DOT__dp8_2__DOT__mem__v0 = 1;
	    vlSymsp->TOP__v.__Vdlyvdim0__u_ram__DOT__dp8_2__DOT__mem__v0 
		= (0x1fff & (vlSymsp->TOP__v__u_cpu.__PVT__dmem0_addr_o 
			     >> 2));
	}
    }
    // ALWAYS at ../ram.v:120
    vlSymsp->TOP__v.u_ram__DOT____Vcellout__dp8_3__datab_o 
	= ((0x176f >= (0x1fff & (vlSymsp->TOP__v__u_cpu.__PVT__dmem0_addr_o 
				 >> 2))) ? (IData)(vlSymsp->TOP__v.__PVT__u_ram__DOT__dp8_3__DOT__mem)
	   [(0x1fff & (vlSymsp->TOP__v__u_cpu.__PVT__dmem0_addr_o 
		       >> 2))] : 0);
    if ((8 & (IData)(vlSymsp->TOP__v.__PVT__dmem_web))) {
	vlSymsp->TOP__v.u_ram__DOT__dp8_3__DOT____Vlvbound2 
	    = (0xff & vlSymsp->TOP__v__u_cpu.__PVT__dmem0_data_o);
	vlSymsp->TOP__v.u_ram__DOT____Vcellout__dp8_3__datab_o 
	    = (0xff & vlSymsp->TOP__v__u_cpu.__PVT__dmem0_data_o);
	if ((0x176f >= (0x1fff & (vlSymsp->TOP__v__u_cpu.__PVT__dmem0_addr_o 
				  >> 2)))) {
	    vlSymsp->TOP__v.__Vdlyvval__u_ram__DOT__dp8_3__DOT__mem__v0 
		= vlSymsp->TOP__v.u_ram__DOT__dp8_3__DOT____Vlvbound2;
	    vlSymsp->TOP__v.__Vdlyvset__u_ram__DOT__dp8_3__DOT__mem__v0 = 1;
	    vlSymsp->TOP__v.__Vdlyvdim0__u_ram__DOT__dp8_3__DOT__mem__v0 
		= (0x1fff & (vlSymsp->TOP__v__u_cpu.__PVT__dmem0_addr_o 
			     >> 2));
	}
    }
    // ALWAYSPOST at ../ram.v:124
    if (vlSymsp->TOP__v.__Vdlyvset__u_ram__DOT__dp8_0__DOT__mem__v0) {
	vlSymsp->TOP__v.__PVT__u_ram__DOT__dp8_0__DOT__mem[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__u_ram__DOT__dp8_0__DOT__mem__v0)] 
	    = vlSymsp->TOP__v.__Vdlyvval__u_ram__DOT__dp8_0__DOT__mem__v0;
    }
    // ALWAYSPOST at ../ram.v:124
    if (vlSymsp->TOP__v.__Vdlyvset__u_ram__DOT__dp8_1__DOT__mem__v0) {
	vlSymsp->TOP__v.__PVT__u_ram__DOT__dp8_1__DOT__mem[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__u_ram__DOT__dp8_1__DOT__mem__v0)] 
	    = vlSymsp->TOP__v.__Vdlyvval__u_ram__DOT__dp8_1__DOT__mem__v0;
    }
    // ALWAYSPOST at ../ram.v:124
    if (vlSymsp->TOP__v.__Vdlyvset__u_ram__DOT__dp8_2__DOT__mem__v0) {
	vlSymsp->TOP__v.__PVT__u_ram__DOT__dp8_2__DOT__mem[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__u_ram__DOT__dp8_2__DOT__mem__v0)] 
	    = vlSymsp->TOP__v.__Vdlyvval__u_ram__DOT__dp8_2__DOT__mem__v0;
    }
    // ALWAYSPOST at ../ram.v:124
    if (vlSymsp->TOP__v.__Vdlyvset__u_ram__DOT__dp8_3__DOT__mem__v0) {
	vlSymsp->TOP__v.__PVT__u_ram__DOT__dp8_3__DOT__mem[(IData)(vlSymsp->TOP__v.__Vdlyvdim0__u_ram__DOT__dp8_3__DOT__mem__v0)] 
	    = vlSymsp->TOP__v.__Vdlyvval__u_ram__DOT__dp8_3__DOT__mem__v0;
    }
    vlSymsp->TOP__v.__PVT__imem_data = ((0xffffff & vlSymsp->TOP__v.__PVT__imem_data) 
					| ((IData)(vlSymsp->TOP__v.u_ram__DOT____Vcellout__dp8_0__dataa_o) 
					   << 0x18));
    vlSymsp->TOP__v.__PVT__imem_data = ((0xff00ffff 
					 & vlSymsp->TOP__v.__PVT__imem_data) 
					| ((IData)(vlSymsp->TOP__v.u_ram__DOT____Vcellout__dp8_1__dataa_o) 
					   << 0x10));
    vlSymsp->TOP__v.__PVT__imem_data = ((0xffff00ff 
					 & vlSymsp->TOP__v.__PVT__imem_data) 
					| ((IData)(vlSymsp->TOP__v.u_ram__DOT____Vcellout__dp8_2__dataa_o) 
					   << 8));
    vlSymsp->TOP__v.__PVT__imem_data = ((0xffffff00 
					 & vlSymsp->TOP__v.__PVT__imem_data) 
					| (IData)(vlSymsp->TOP__v.u_ram__DOT____Vcellout__dp8_3__dataa_o));
    vlSymsp->TOP__v.__PVT__dmem_data_r = ((0xffffff 
					   & vlSymsp->TOP__v.__PVT__dmem_data_r) 
					  | ((IData)(vlSymsp->TOP__v.u_ram__DOT____Vcellout__dp8_0__datab_o) 
					     << 0x18));
    vlSymsp->TOP__v.__PVT__dmem_data_r = ((0xff00ffff 
					   & vlSymsp->TOP__v.__PVT__dmem_data_r) 
					  | ((IData)(vlSymsp->TOP__v.u_ram__DOT____Vcellout__dp8_1__datab_o) 
					     << 0x10));
    vlSymsp->TOP__v.__PVT__dmem_data_r = ((0xffff00ff 
					   & vlSymsp->TOP__v.__PVT__dmem_data_r) 
					  | ((IData)(vlSymsp->TOP__v.u_ram__DOT____Vcellout__dp8_2__datab_o) 
					     << 8));
    vlSymsp->TOP__v.__PVT__dmem_data_r = ((0xffffff00 
					   & vlSymsp->TOP__v.__PVT__dmem_data_r) 
					  | (IData)(vlSymsp->TOP__v.u_ram__DOT____Vcellout__dp8_3__datab_o));
}

void Vtop_top::_sequent__TOP__v__5(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vtop_top::_sequent__TOP__v__5\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../top.v:285
    vlSymsp->TOP__v.__PVT__imem_ack = ((~ (IData)(vlSymsp->TOP__v.__PVT__reset)) 
				       & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu.imem_stb_o));
    // ALWAYS at ../top.v:278
    vlSymsp->TOP__v.__PVT__dmem_ack = ((~ (IData)(vlSymsp->TOP__v.__PVT__reset)) 
				       & (IData)(vlSymsp->TOP__v__u_cpu.__PVT__dmem0_stb_o));
}

void Vtop_top::_combo__TOP__v__6(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vtop_top::_combo__TOP__v__6\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../cclk_detector.v:19
    vlSymsp->TOP__v.__PVT__u_cclk_detector__DOT__ready_d = 0;
    if (vlTOPp->cclk) {
	if ((0x3ff != (IData)(vlSymsp->TOP__v.__PVT__u_cclk_detector__DOT__ctr_q))) {
	    vlSymsp->TOP__v.__PVT__u_cclk_detector__DOT__ctr_d 
		= (0x3ff & ((IData)(1) + (IData)(vlSymsp->TOP__v.__PVT__u_cclk_detector__DOT__ctr_q)));
	} else {
	    vlSymsp->TOP__v.__PVT__u_cclk_detector__DOT__ctr_d 
		= vlSymsp->TOP__v.__PVT__u_cclk_detector__DOT__ctr_q;
	    vlSymsp->TOP__v.__PVT__u_cclk_detector__DOT__ready_d = 1;
	}
    } else {
	vlSymsp->TOP__v.__PVT__u_cclk_detector__DOT__ctr_d = 0;
    }
}

void Vtop_top::_settle__TOP__v__7(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vtop_top::_settle__TOP__v__7\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__imem_data = ((0xffffff & vlSymsp->TOP__v.__PVT__imem_data) 
					| ((IData)(vlSymsp->TOP__v.u_ram__DOT____Vcellout__dp8_0__dataa_o) 
					   << 0x18));
    vlSymsp->TOP__v.__PVT__imem_data = ((0xff00ffff 
					 & vlSymsp->TOP__v.__PVT__imem_data) 
					| ((IData)(vlSymsp->TOP__v.u_ram__DOT____Vcellout__dp8_1__dataa_o) 
					   << 0x10));
    vlSymsp->TOP__v.__PVT__imem_data = ((0xffff00ff 
					 & vlSymsp->TOP__v.__PVT__imem_data) 
					| ((IData)(vlSymsp->TOP__v.u_ram__DOT____Vcellout__dp8_2__dataa_o) 
					   << 8));
    vlSymsp->TOP__v.__PVT__imem_data = ((0xffffff00 
					 & vlSymsp->TOP__v.__PVT__imem_data) 
					| (IData)(vlSymsp->TOP__v.u_ram__DOT____Vcellout__dp8_3__dataa_o));
    // ALWAYS at ../cclk_detector.v:19
    vlSymsp->TOP__v.__PVT__u_cclk_detector__DOT__ready_d = 0;
    if (vlTOPp->cclk) {
	if ((0x3ff != (IData)(vlSymsp->TOP__v.__PVT__u_cclk_detector__DOT__ctr_q))) {
	    vlSymsp->TOP__v.__PVT__u_cclk_detector__DOT__ctr_d 
		= (0x3ff & ((IData)(1) + (IData)(vlSymsp->TOP__v.__PVT__u_cclk_detector__DOT__ctr_q)));
	} else {
	    vlSymsp->TOP__v.__PVT__u_cclk_detector__DOT__ctr_d 
		= vlSymsp->TOP__v.__PVT__u_cclk_detector__DOT__ctr_q;
	    vlSymsp->TOP__v.__PVT__u_cclk_detector__DOT__ready_d = 1;
	}
    } else {
	vlSymsp->TOP__v.__PVT__u_cclk_detector__DOT__ctr_d = 0;
    }
    vlSymsp->TOP__v.__PVT__dmem_data_r = ((0xffffff 
					   & vlSymsp->TOP__v.__PVT__dmem_data_r) 
					  | ((IData)(vlSymsp->TOP__v.u_ram__DOT____Vcellout__dp8_0__datab_o) 
					     << 0x18));
    vlSymsp->TOP__v.__PVT__dmem_data_r = ((0xff00ffff 
					   & vlSymsp->TOP__v.__PVT__dmem_data_r) 
					  | ((IData)(vlSymsp->TOP__v.u_ram__DOT____Vcellout__dp8_1__datab_o) 
					     << 0x10));
    vlSymsp->TOP__v.__PVT__dmem_data_r = ((0xffff00ff 
					   & vlSymsp->TOP__v.__PVT__dmem_data_r) 
					  | ((IData)(vlSymsp->TOP__v.u_ram__DOT____Vcellout__dp8_2__datab_o) 
					     << 8));
    vlSymsp->TOP__v.__PVT__dmem_data_r = ((0xffffff00 
					   & vlSymsp->TOP__v.__PVT__dmem_data_r) 
					  | (IData)(vlSymsp->TOP__v.u_ram__DOT____Vcellout__dp8_3__datab_o));
    vlSymsp->TOP__v__u_soc.rst_i = vlSymsp->TOP__v.__PVT__reset;
}

void Vtop_top::_sequent__TOP__v__8(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vtop_top::_sequent__TOP__v__8\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../top.v:271
    vlSymsp->TOP__v.__PVT__reset = (1 & (~ (IData)(vlTOPp->rst_n)));
}

void Vtop_top::_combo__TOP__v__9(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vtop_top::_combo__TOP__v__9\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_soc.rst_i = vlSymsp->TOP__v.__PVT__reset;
}

void Vtop_top::_sequent__TOP__v__10(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vtop_top::_sequent__TOP__v__10\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__dmem_web = (((IData)(vlSymsp->TOP__v__u_cpu.__PVT__dmem0_stb_o) 
					& (IData)(vlSymsp->TOP__v__u_cpu.__PVT__dmem0_we_o))
				        ? (IData)(vlSymsp->TOP__v__u_cpu.__PVT__dmem0_sel_o)
				        : 0);
    vlSymsp->TOP__v__u_soc.io_data_i = vlSymsp->TOP__v__u_cpu.__PVT__dmem2_data_o;
    vlSymsp->TOP__v__u_soc.io_we_i = vlSymsp->TOP__v__u_cpu.__PVT__dmem2_we_o;
    vlSymsp->TOP__v__u_soc.io_stb_i = vlSymsp->TOP__v__u_cpu.__PVT__dmem2_stb_o;
    vlSymsp->TOP__v__u_soc.io_addr_i = vlSymsp->TOP__v__u_cpu.__PVT__dmem2_addr_o;
}
