// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_cpu__I10000000.h" // For This
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vtop_cpu__I10000000) {
    VL_CELL (u_exec, Vtop_altor32_lite__I10000000);
    // Reset internal values
    // Reset structure values
    clk_i = VL_RAND_RESET_I(1);
    rst_i = VL_RAND_RESET_I(1);
    intr_i = VL_RAND_RESET_I(1);
    nmi_i = VL_RAND_RESET_I(1);
    fault_o = VL_RAND_RESET_I(1);
    break_o = VL_RAND_RESET_I(1);
    imem_addr_o = VL_RAND_RESET_I(32);
    imem_dat_i = VL_RAND_RESET_I(32);
    imem_cti_o = VL_RAND_RESET_I(3);
    imem_cyc_o = VL_RAND_RESET_I(1);
    imem_stb_o = VL_RAND_RESET_I(1);
    imem_stall_i = VL_RAND_RESET_I(1);
    imem_ack_i = VL_RAND_RESET_I(1);
    dmem_addr_o = VL_RAND_RESET_I(32);
    dmem_dat_i = VL_RAND_RESET_I(32);
    dmem_dat_o = VL_RAND_RESET_I(32);
    dmem_cti_o = VL_RAND_RESET_I(3);
    dmem_cyc_o = VL_RAND_RESET_I(1);
    dmem_stb_o = VL_RAND_RESET_I(1);
    dmem_we_o = VL_RAND_RESET_I(1);
    dmem_sel_o = VL_RAND_RESET_I(4);
    dmem_stall_i = VL_RAND_RESET_I(1);
    dmem_ack_i = VL_RAND_RESET_I(1);
}

void Vtop_cpu__I10000000::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtop_cpu__I10000000::~Vtop_cpu__I10000000() {
}

//--------------------
// Internal Methods

void Vtop_cpu__I10000000::_initial__TOP__v__u_cpu__u1_cpu(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vtop_cpu__I10000000::_initial__TOP__v__u_cpu__u1_cpu\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at ../../../rtl/cpu_lite/altor32.v:125
    vlSymsp->TOP__v__u_cpu__u1_cpu.imem_addr_o = 0;
    // INITIAL at ../../../rtl/cpu_lite/altor32.v:126
    vlSymsp->TOP__v__u_cpu__u1_cpu.imem_cti_o = 0;
    // INITIAL at ../../../rtl/cpu_lite/altor32.v:127
    vlSymsp->TOP__v__u_cpu__u1_cpu.imem_cyc_o = 0;
    // INITIAL at ../../../rtl/cpu_lite/altor32.v:128
    vlSymsp->TOP__v__u_cpu__u1_cpu.imem_stb_o = 0;
}

void Vtop_cpu__I10000000::_settle__TOP__v__u_cpu__u1_cpu__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vtop_cpu__I10000000::_settle__TOP__v__u_cpu__u1_cpu__1\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_cti_o = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_cti_o;
}

void Vtop_cpu__I10000000::_settle__TOP__v__u_cpu__u1_cpu__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vtop_cpu__I10000000::_settle__TOP__v__u_cpu__u1_cpu__2\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.clk_i = vlSymsp->TOP__v__u_cpu__u1_cpu.clk_i;
}

void Vtop_cpu__I10000000::_sequent__TOP__v__u_cpu__u1_cpu__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vtop_cpu__I10000000::_sequent__TOP__v__u_cpu__u1_cpu__4\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_cpu__u1_cpu.break_o = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.break_o;
    vlSymsp->TOP__v__u_cpu__u1_cpu.fault_o = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.fault_o;
    vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_dat_o = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_dat_o;
    vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_sel_o = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_sel_o;
    vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_we_o = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_we_o;
    vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_stb_o = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_stb_o;
    vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_cyc_o = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_cyc_o;
    vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_addr_o = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_addr_o;
}

void Vtop_cpu__I10000000::_combo__TOP__v__u_cpu__u1_cpu__5(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vtop_cpu__I10000000::_combo__TOP__v__u_cpu__u1_cpu__5\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.nmi_i = vlSymsp->TOP__v__u_cpu__u1_cpu.nmi_i;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.rst_i = vlSymsp->TOP__v__u_cpu__u1_cpu.rst_i;
}

void Vtop_cpu__I10000000::_settle__TOP__v__u_cpu__u1_cpu__6(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vtop_cpu__I10000000::_settle__TOP__v__u_cpu__u1_cpu__6\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.nmi_i = vlSymsp->TOP__v__u_cpu__u1_cpu.nmi_i;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.enable_i = 1;
    vlSymsp->TOP__v__u_cpu__u1_cpu.break_o = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.break_o;
    vlSymsp->TOP__v__u_cpu__u1_cpu.fault_o = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.fault_o;
    vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_dat_o = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_dat_o;
    vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_sel_o = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_sel_o;
    vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_we_o = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_we_o;
    vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_stb_o = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_stb_o;
    vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_cyc_o = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_cyc_o;
    vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_addr_o = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_addr_o;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.rst_i = vlSymsp->TOP__v__u_cpu__u1_cpu.rst_i;
}

void Vtop_cpu__I10000000::_settle__TOP__v__u_cpu__u1_cpu__7(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vtop_cpu__I10000000::_settle__TOP__v__u_cpu__u1_cpu__7\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.intr_i = vlSymsp->TOP__v__u_cpu__u1_cpu.intr_i;
}

void Vtop_cpu__I10000000::_settle__TOP__v__u_cpu__u1_cpu__8(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vtop_cpu__I10000000::_settle__TOP__v__u_cpu__u1_cpu__8\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_stall_i 
	= vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_stall_i;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_dat_i 
	= vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_dat_i;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_ack_i 
	= vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_ack_i;
}

void Vtop_cpu__I10000000::_combo__TOP__v__u_cpu__u1_cpu__9(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vtop_cpu__I10000000::_combo__TOP__v__u_cpu__u1_cpu__9\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.intr_i = vlSymsp->TOP__v__u_cpu__u1_cpu.intr_i;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_stall_i 
	= vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_stall_i;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_dat_i 
	= vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_dat_i;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_ack_i 
	= vlSymsp->TOP__v__u_cpu__u1_cpu.dmem_ack_i;
}
