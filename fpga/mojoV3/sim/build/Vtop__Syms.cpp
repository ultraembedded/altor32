// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__Syms.h"
#include "Vtop.h"
#include "Vtop_top.h"
#include "Vtop_cpu_if__pi1.h"
#include "Vtop_soc__pi2.h"
#include "Vtop_cpu__I10000000.h"
#include "Vtop_uart_periph__U64.h"
#include "Vtop_timer_periph__pi7.h"
#include "Vtop_intr_periph__E0.h"
#include "Vtop_altor32_lite__I10000000.h"
#include "Vtop_uart__U64.h"
#include "Vtop_altor32_alu.h"
#include "Vtop_altor32_regfile_sim.h"

// FUNCTIONS
Vtop__Syms::Vtop__Syms(Vtop* topp, const char* namep)
	// Setup locals
	: __Vm_namep(namep)
	, __Vm_activity(false)
	, __Vm_didInit(false)
	// Setup submodule names
	, TOP__v                         (Verilated::catName(topp->name(),"v"))
	, TOP__v__u_cpu                  (Verilated::catName(topp->name(),"v.u_cpu"))
	, TOP__v__u_cpu__u1_cpu          (Verilated::catName(topp->name(),"v.u_cpu.u1_cpu"))
	, TOP__v__u_cpu__u1_cpu__u_exec  (Verilated::catName(topp->name(),"v.u_cpu.u1_cpu.u_exec"))
	, TOP__v__u_cpu__u1_cpu__u_exec__alu (Verilated::catName(topp->name(),"v.u_cpu.u1_cpu.u_exec.alu"))
	, TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank (Verilated::catName(topp->name(),"v.u_cpu.u1_cpu.u_exec.genblk1.REGFILE_SIM.reg_bank"))
	, TOP__v__u_soc                  (Verilated::catName(topp->name(),"v.u_soc"))
	, TOP__v__u_soc__u_intr          (Verilated::catName(topp->name(),"v.u_soc.u_intr"))
	, TOP__v__u_soc__u_timer         (Verilated::catName(topp->name(),"v.u_soc.u_timer"))
	, TOP__v__u_soc__u_uart          (Verilated::catName(topp->name(),"v.u_soc.u_uart"))
	, TOP__v__u_soc__u_uart__u1_uart (Verilated::catName(topp->name(),"v.u_soc.u_uart.u1_uart"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->v                         = &TOP__v;
    TOPp->v->u_cpu                  = &TOP__v__u_cpu;
    TOPp->v->u_cpu->u1_cpu          = &TOP__v__u_cpu__u1_cpu;
    TOPp->v->u_cpu->u1_cpu->u_exec  = &TOP__v__u_cpu__u1_cpu__u_exec;
    TOPp->v->u_cpu->u1_cpu->u_exec->alu  = &TOP__v__u_cpu__u1_cpu__u_exec__alu;
    TOPp->v->u_cpu->u1_cpu->u_exec->genblk1__DOT__REGFILE_SIM__DOT__reg_bank  = &TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank;
    TOPp->v->u_soc                  = &TOP__v__u_soc;
    TOPp->v->u_soc->u_intr          = &TOP__v__u_soc__u_intr;
    TOPp->v->u_soc->u_timer         = &TOP__v__u_soc__u_timer;
    TOPp->v->u_soc->u_uart          = &TOP__v__u_soc__u_uart;
    TOPp->v->u_soc->u_uart->u1_uart  = &TOP__v__u_soc__u_uart__u1_uart;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__v.__Vconfigure(this, true);
    TOP__v__u_cpu.__Vconfigure(this, true);
    TOP__v__u_cpu__u1_cpu.__Vconfigure(this, true);
    TOP__v__u_cpu__u1_cpu__u_exec.__Vconfigure(this, true);
    TOP__v__u_cpu__u1_cpu__u_exec__alu.__Vconfigure(this, true);
    TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.__Vconfigure(this, true);
    TOP__v__u_soc.__Vconfigure(this, true);
    TOP__v__u_soc__u_intr.__Vconfigure(this, true);
    TOP__v__u_soc__u_timer.__Vconfigure(this, true);
    TOP__v__u_soc__u_uart.__Vconfigure(this, true);
    TOP__v__u_soc__u_uart__u1_uart.__Vconfigure(this, true);
    // Setup scope names
    __Vscope_TOP.configure(this,name(),"TOP");
    __Vscope_v.configure(this,name(),"v");
    __Vscope_v__u_cpu__u1_cpu.configure(this,name(),"v.u_cpu.u1_cpu");
    __Vscope_v__u_cpu__u1_cpu__u_exec.configure(this,name(),"v.u_cpu.u1_cpu.u_exec");
    __Vscope_v__u_cpu__u1_cpu__u_exec__alu.configure(this,name(),"v.u_cpu.u1_cpu.u_exec.alu");
    __Vscope_v__u_cpu__u1_cpu__u_exec__genblk1__REGFILE_SIM__reg_bank.configure(this,name(),"v.u_cpu.u1_cpu.u_exec.genblk1.REGFILE_SIM.reg_bank");
    __Vscope_v__u_soc.configure(this,name(),"v.u_soc");
    __Vscope_v__u_soc__u_intr.configure(this,name(),"v.u_soc.u_intr");
    __Vscope_v__u_soc__u_timer.configure(this,name(),"v.u_soc.u_timer");
    __Vscope_v__u_soc__u_uart.configure(this,name(),"v.u_soc.u_uart");
    __Vscope_v__u_soc__u_uart__u1_uart.configure(this,name(),"v.u_soc.u_uart.u1_uart");
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
	__Vscope_TOP.varInsert(__Vfinal,"W1A", &(TOPp->W1A), VLVT_UINT16,VLVD_INOUT|VLVF_PUB_RW,1 ,15,0);
	__Vscope_TOP.varInsert(__Vfinal,"W1B", &(TOPp->W1B), VLVT_UINT16,VLVD_INOUT|VLVF_PUB_RW,1 ,15,0);
	__Vscope_TOP.varInsert(__Vfinal,"W2C", &(TOPp->W2C), VLVT_UINT16,VLVD_INOUT|VLVF_PUB_RW,1 ,15,0);
	__Vscope_TOP.varInsert(__Vfinal,"clk", &(TOPp->clk), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_TOP.varInsert(__Vfinal,"flash_cs", &(TOPp->flash_cs), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
	__Vscope_TOP.varInsert(__Vfinal,"flash_sck", &(TOPp->flash_sck), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
	__Vscope_TOP.varInsert(__Vfinal,"flash_si", &(TOPp->flash_si), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
	__Vscope_TOP.varInsert(__Vfinal,"flash_so", &(TOPp->flash_so), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_TOP.varInsert(__Vfinal,"rx", &(TOPp->rx), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_TOP.varInsert(__Vfinal,"tx", &(TOPp->tx), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
	__Vscope_v.varInsert(__Vfinal,"W1A", &(TOP__v.W1A), VLVT_UINT16,VLVD_IN|VLVF_PUB_RW,1 ,15,0);
	__Vscope_v.varInsert(__Vfinal,"W1B", &(TOP__v.W1B), VLVT_UINT16,VLVD_IN|VLVF_PUB_RW,1 ,15,0);
	__Vscope_v.varInsert(__Vfinal,"W2C", &(TOP__v.W2C), VLVT_UINT16,VLVD_IN|VLVF_PUB_RW,1 ,15,0);
	__Vscope_v.varInsert(__Vfinal,"clk", &(TOP__v.clk), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v.varInsert(__Vfinal,"flash_cs", &(TOP__v.flash_cs), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
	__Vscope_v.varInsert(__Vfinal,"flash_sck", &(TOP__v.flash_sck), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
	__Vscope_v.varInsert(__Vfinal,"flash_si", &(TOP__v.flash_si), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
	__Vscope_v.varInsert(__Vfinal,"flash_so", &(TOP__v.flash_so), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v.varInsert(__Vfinal,"rx", &(TOP__v.rx), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v.varInsert(__Vfinal,"tx", &(TOP__v.tx), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_cpu__u1_cpu.varInsert(__Vfinal,"break_o", &(TOP__v__u_cpu__u1_cpu.break_o), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
	__Vscope_v__u_cpu__u1_cpu.varInsert(__Vfinal,"clk_i", &(TOP__v__u_cpu__u1_cpu.clk_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_cpu__u1_cpu.varInsert(__Vfinal,"dmem_ack_i", &(TOP__v__u_cpu__u1_cpu.dmem_ack_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_cpu__u1_cpu.varInsert(__Vfinal,"dmem_addr_o", &(TOP__v__u_cpu__u1_cpu.dmem_addr_o), VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
	__Vscope_v__u_cpu__u1_cpu.varInsert(__Vfinal,"dmem_cti_o", &(TOP__v__u_cpu__u1_cpu.dmem_cti_o), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,2,0);
	__Vscope_v__u_cpu__u1_cpu.varInsert(__Vfinal,"dmem_cyc_o", &(TOP__v__u_cpu__u1_cpu.dmem_cyc_o), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
	__Vscope_v__u_cpu__u1_cpu.varInsert(__Vfinal,"dmem_dat_i", &(TOP__v__u_cpu__u1_cpu.dmem_dat_i), VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,1 ,31,0);
	__Vscope_v__u_cpu__u1_cpu.varInsert(__Vfinal,"dmem_dat_o", &(TOP__v__u_cpu__u1_cpu.dmem_dat_o), VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
	__Vscope_v__u_cpu__u1_cpu.varInsert(__Vfinal,"dmem_sel_o", &(TOP__v__u_cpu__u1_cpu.dmem_sel_o), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,3,0);
	__Vscope_v__u_cpu__u1_cpu.varInsert(__Vfinal,"dmem_stall_i", &(TOP__v__u_cpu__u1_cpu.dmem_stall_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_cpu__u1_cpu.varInsert(__Vfinal,"dmem_stb_o", &(TOP__v__u_cpu__u1_cpu.dmem_stb_o), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
	__Vscope_v__u_cpu__u1_cpu.varInsert(__Vfinal,"dmem_we_o", &(TOP__v__u_cpu__u1_cpu.dmem_we_o), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
	__Vscope_v__u_cpu__u1_cpu.varInsert(__Vfinal,"fault_o", &(TOP__v__u_cpu__u1_cpu.fault_o), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
	__Vscope_v__u_cpu__u1_cpu.varInsert(__Vfinal,"imem_ack_i", &(TOP__v__u_cpu__u1_cpu.imem_ack_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_cpu__u1_cpu.varInsert(__Vfinal,"imem_addr_o", &(TOP__v__u_cpu__u1_cpu.imem_addr_o), VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
	__Vscope_v__u_cpu__u1_cpu.varInsert(__Vfinal,"imem_cti_o", &(TOP__v__u_cpu__u1_cpu.imem_cti_o), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,2,0);
	__Vscope_v__u_cpu__u1_cpu.varInsert(__Vfinal,"imem_cyc_o", &(TOP__v__u_cpu__u1_cpu.imem_cyc_o), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
	__Vscope_v__u_cpu__u1_cpu.varInsert(__Vfinal,"imem_dat_i", &(TOP__v__u_cpu__u1_cpu.imem_dat_i), VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,1 ,31,0);
	__Vscope_v__u_cpu__u1_cpu.varInsert(__Vfinal,"imem_stall_i", &(TOP__v__u_cpu__u1_cpu.imem_stall_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_cpu__u1_cpu.varInsert(__Vfinal,"imem_stb_o", &(TOP__v__u_cpu__u1_cpu.imem_stb_o), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
	__Vscope_v__u_cpu__u1_cpu.varInsert(__Vfinal,"intr_i", &(TOP__v__u_cpu__u1_cpu.intr_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_cpu__u1_cpu.varInsert(__Vfinal,"nmi_i", &(TOP__v__u_cpu__u1_cpu.nmi_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_cpu__u1_cpu.varInsert(__Vfinal,"rst_i", &(TOP__v__u_cpu__u1_cpu.rst_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_cpu__u1_cpu__u_exec.varInsert(__Vfinal,"break_o", &(TOP__v__u_cpu__u1_cpu__u_exec.break_o), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
	__Vscope_v__u_cpu__u1_cpu__u_exec.varInsert(__Vfinal,"clk_i", &(TOP__v__u_cpu__u1_cpu__u_exec.clk_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_cpu__u1_cpu__u_exec.varInsert(__Vfinal,"enable_i", &(TOP__v__u_cpu__u1_cpu__u_exec.enable_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_cpu__u1_cpu__u_exec.varInsert(__Vfinal,"fault_o", &(TOP__v__u_cpu__u1_cpu__u_exec.fault_o), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
	__Vscope_v__u_cpu__u1_cpu__u_exec.varInsert(__Vfinal,"intr_i", &(TOP__v__u_cpu__u1_cpu__u_exec.intr_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_cpu__u1_cpu__u_exec.varInsert(__Vfinal,"mem_ack_i", &(TOP__v__u_cpu__u1_cpu__u_exec.mem_ack_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_cpu__u1_cpu__u_exec.varInsert(__Vfinal,"mem_addr_o", &(TOP__v__u_cpu__u1_cpu__u_exec.mem_addr_o), VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
	__Vscope_v__u_cpu__u1_cpu__u_exec.varInsert(__Vfinal,"mem_cti_o", &(TOP__v__u_cpu__u1_cpu__u_exec.mem_cti_o), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,2,0);
	__Vscope_v__u_cpu__u1_cpu__u_exec.varInsert(__Vfinal,"mem_cyc_o", &(TOP__v__u_cpu__u1_cpu__u_exec.mem_cyc_o), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
	__Vscope_v__u_cpu__u1_cpu__u_exec.varInsert(__Vfinal,"mem_dat_i", &(TOP__v__u_cpu__u1_cpu__u_exec.mem_dat_i), VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,1 ,31,0);
	__Vscope_v__u_cpu__u1_cpu__u_exec.varInsert(__Vfinal,"mem_dat_o", &(TOP__v__u_cpu__u1_cpu__u_exec.mem_dat_o), VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
	__Vscope_v__u_cpu__u1_cpu__u_exec.varInsert(__Vfinal,"mem_sel_o", &(TOP__v__u_cpu__u1_cpu__u_exec.mem_sel_o), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,3,0);
	__Vscope_v__u_cpu__u1_cpu__u_exec.varInsert(__Vfinal,"mem_stall_i", &(TOP__v__u_cpu__u1_cpu__u_exec.mem_stall_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_cpu__u1_cpu__u_exec.varInsert(__Vfinal,"mem_stb_o", &(TOP__v__u_cpu__u1_cpu__u_exec.mem_stb_o), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
	__Vscope_v__u_cpu__u1_cpu__u_exec.varInsert(__Vfinal,"mem_we_o", &(TOP__v__u_cpu__u1_cpu__u_exec.mem_we_o), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
	__Vscope_v__u_cpu__u1_cpu__u_exec.varInsert(__Vfinal,"nmi_i", &(TOP__v__u_cpu__u1_cpu__u_exec.nmi_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_cpu__u1_cpu__u_exec.varInsert(__Vfinal,"rst_i", &(TOP__v__u_cpu__u1_cpu__u_exec.rst_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_cpu__u1_cpu__u_exec__alu.varInsert(__Vfinal,"a_i", &(TOP__v__u_cpu__u1_cpu__u_exec__alu.a_i), VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,1 ,31,0);
	__Vscope_v__u_cpu__u1_cpu__u_exec__alu.varInsert(__Vfinal,"b_i", &(TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i), VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,1 ,31,0);
	__Vscope_v__u_cpu__u1_cpu__u_exec__alu.varInsert(__Vfinal,"c_i", &(TOP__v__u_cpu__u1_cpu__u_exec__alu.c_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_cpu__u1_cpu__u_exec__alu.varInsert(__Vfinal,"c_o", &(TOP__v__u_cpu__u1_cpu__u_exec__alu.c_o), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
	__Vscope_v__u_cpu__u1_cpu__u_exec__alu.varInsert(__Vfinal,"c_update_o", &(TOP__v__u_cpu__u1_cpu__u_exec__alu.c_update_o), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
	__Vscope_v__u_cpu__u1_cpu__u_exec__alu.varInsert(__Vfinal,"equal_o", &(TOP__v__u_cpu__u1_cpu__u_exec__alu.equal_o), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
	__Vscope_v__u_cpu__u1_cpu__u_exec__alu.varInsert(__Vfinal,"flag_update_o", &(TOP__v__u_cpu__u1_cpu__u_exec__alu.flag_update_o), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
	__Vscope_v__u_cpu__u1_cpu__u_exec__alu.varInsert(__Vfinal,"greater_than_o", &(TOP__v__u_cpu__u1_cpu__u_exec__alu.greater_than_o), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
	__Vscope_v__u_cpu__u1_cpu__u_exec__alu.varInsert(__Vfinal,"greater_than_signed_o", &(TOP__v__u_cpu__u1_cpu__u_exec__alu.greater_than_signed_o), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
	__Vscope_v__u_cpu__u1_cpu__u_exec__alu.varInsert(__Vfinal,"less_than_o", &(TOP__v__u_cpu__u1_cpu__u_exec__alu.less_than_o), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
	__Vscope_v__u_cpu__u1_cpu__u_exec__alu.varInsert(__Vfinal,"less_than_signed_o", &(TOP__v__u_cpu__u1_cpu__u_exec__alu.less_than_signed_o), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
	__Vscope_v__u_cpu__u1_cpu__u_exec__alu.varInsert(__Vfinal,"op_i", &(TOP__v__u_cpu__u1_cpu__u_exec__alu.op_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1 ,3,0);
	__Vscope_v__u_cpu__u1_cpu__u_exec__alu.varInsert(__Vfinal,"p_o", &(TOP__v__u_cpu__u1_cpu__u_exec__alu.p_o), VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
	__Vscope_v__u_cpu__u1_cpu__u_exec__genblk1__REGFILE_SIM__reg_bank.varInsert(__Vfinal,"clk_i", &(TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.clk_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_cpu__u1_cpu__u_exec__genblk1__REGFILE_SIM__reg_bank.varInsert(__Vfinal,"ra_i", &(TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.ra_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1 ,4,0);
	__Vscope_v__u_cpu__u1_cpu__u_exec__genblk1__REGFILE_SIM__reg_bank.varInsert(__Vfinal,"rb_i", &(TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rb_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1 ,4,0);
	__Vscope_v__u_cpu__u1_cpu__u_exec__genblk1__REGFILE_SIM__reg_bank.varInsert(__Vfinal,"rd_i", &(TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rd_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1 ,4,0);
	__Vscope_v__u_cpu__u1_cpu__u_exec__genblk1__REGFILE_SIM__reg_bank.varInsert(__Vfinal,"reg_ra_o", &(TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o), VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
	__Vscope_v__u_cpu__u1_cpu__u_exec__genblk1__REGFILE_SIM__reg_bank.varInsert(__Vfinal,"reg_rb_o", &(TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o), VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
	__Vscope_v__u_cpu__u1_cpu__u_exec__genblk1__REGFILE_SIM__reg_bank.varInsert(__Vfinal,"reg_rd_i", &(TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rd_i), VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,1 ,31,0);
	__Vscope_v__u_cpu__u1_cpu__u_exec__genblk1__REGFILE_SIM__reg_bank.varInsert(__Vfinal,"rst_i", &(TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rst_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_cpu__u1_cpu__u_exec__genblk1__REGFILE_SIM__reg_bank.varInsert(__Vfinal,"wr_i", &(TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.wr_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_soc.varInsert(__Vfinal,"clk_i", &(TOP__v__u_soc.clk_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_soc.varInsert(__Vfinal,"ext_intr_i", &(TOP__v__u_soc.ext_intr_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1 ,0,-1);
	__Vscope_v__u_soc.varInsert(__Vfinal,"intr_o", &(TOP__v__u_soc.intr_o), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
	__Vscope_v__u_soc.varInsert(__Vfinal,"io_ack_o", &(TOP__v__u_soc.io_ack_o), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
	__Vscope_v__u_soc.varInsert(__Vfinal,"io_addr_i", &(TOP__v__u_soc.io_addr_i), VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,1 ,31,0);
	__Vscope_v__u_soc.varInsert(__Vfinal,"io_data_i", &(TOP__v__u_soc.io_data_i), VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,1 ,31,0);
	__Vscope_v__u_soc.varInsert(__Vfinal,"io_data_o", &(TOP__v__u_soc.io_data_o), VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
	__Vscope_v__u_soc.varInsert(__Vfinal,"io_stb_i", &(TOP__v__u_soc.io_stb_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_soc.varInsert(__Vfinal,"io_we_i", &(TOP__v__u_soc.io_we_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_soc.varInsert(__Vfinal,"rst_i", &(TOP__v__u_soc.rst_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_soc.varInsert(__Vfinal,"uart_rx_i", &(TOP__v__u_soc.uart_rx_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_soc.varInsert(__Vfinal,"uart_tx_o", &(TOP__v__u_soc.uart_tx_o), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
	__Vscope_v__u_soc__u_intr.varInsert(__Vfinal,"addr_i", &(TOP__v__u_soc__u_intr.addr_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1 ,7,0);
	__Vscope_v__u_soc__u_intr.varInsert(__Vfinal,"clk_i", &(TOP__v__u_soc__u_intr.clk_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_soc__u_intr.varInsert(__Vfinal,"data_i", &(TOP__v__u_soc__u_intr.data_i), VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,1 ,31,0);
	__Vscope_v__u_soc__u_intr.varInsert(__Vfinal,"data_o", &(TOP__v__u_soc__u_intr.data_o), VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
	__Vscope_v__u_soc__u_intr.varInsert(__Vfinal,"intr0_i", &(TOP__v__u_soc__u_intr.intr0_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_soc__u_intr.varInsert(__Vfinal,"intr1_i", &(TOP__v__u_soc__u_intr.intr1_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_soc__u_intr.varInsert(__Vfinal,"intr2_i", &(TOP__v__u_soc__u_intr.intr2_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_soc__u_intr.varInsert(__Vfinal,"intr3_i", &(TOP__v__u_soc__u_intr.intr3_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_soc__u_intr.varInsert(__Vfinal,"intr4_i", &(TOP__v__u_soc__u_intr.intr4_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_soc__u_intr.varInsert(__Vfinal,"intr5_i", &(TOP__v__u_soc__u_intr.intr5_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_soc__u_intr.varInsert(__Vfinal,"intr6_i", &(TOP__v__u_soc__u_intr.intr6_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_soc__u_intr.varInsert(__Vfinal,"intr7_i", &(TOP__v__u_soc__u_intr.intr7_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_soc__u_intr.varInsert(__Vfinal,"intr_ext_i", &(TOP__v__u_soc__u_intr.intr_ext_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1 ,0,-1);
	__Vscope_v__u_soc__u_intr.varInsert(__Vfinal,"intr_o", &(TOP__v__u_soc__u_intr.intr_o), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
	__Vscope_v__u_soc__u_intr.varInsert(__Vfinal,"rst_i", &(TOP__v__u_soc__u_intr.rst_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_soc__u_intr.varInsert(__Vfinal,"stb_i", &(TOP__v__u_soc__u_intr.stb_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_soc__u_intr.varInsert(__Vfinal,"we_i", &(TOP__v__u_soc__u_intr.we_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_soc__u_timer.varInsert(__Vfinal,"addr_i", &(TOP__v__u_soc__u_timer.addr_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1 ,7,0);
	__Vscope_v__u_soc__u_timer.varInsert(__Vfinal,"clk_i", &(TOP__v__u_soc__u_timer.clk_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_soc__u_timer.varInsert(__Vfinal,"data_i", &(TOP__v__u_soc__u_timer.data_i), VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,1 ,31,0);
	__Vscope_v__u_soc__u_timer.varInsert(__Vfinal,"data_o", &(TOP__v__u_soc__u_timer.data_o), VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
	__Vscope_v__u_soc__u_timer.varInsert(__Vfinal,"intr_hires_o", &(TOP__v__u_soc__u_timer.intr_hires_o), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
	__Vscope_v__u_soc__u_timer.varInsert(__Vfinal,"intr_systick_o", &(TOP__v__u_soc__u_timer.intr_systick_o), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
	__Vscope_v__u_soc__u_timer.varInsert(__Vfinal,"rst_i", &(TOP__v__u_soc__u_timer.rst_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_soc__u_timer.varInsert(__Vfinal,"stb_i", &(TOP__v__u_soc__u_timer.stb_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_soc__u_timer.varInsert(__Vfinal,"we_i", &(TOP__v__u_soc__u_timer.we_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_soc__u_uart.varInsert(__Vfinal,"addr_i", &(TOP__v__u_soc__u_uart.addr_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1 ,7,0);
	__Vscope_v__u_soc__u_uart.varInsert(__Vfinal,"clk_i", &(TOP__v__u_soc__u_uart.clk_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_soc__u_uart.varInsert(__Vfinal,"data_i", &(TOP__v__u_soc__u_uart.data_i), VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,1 ,31,0);
	__Vscope_v__u_soc__u_uart.varInsert(__Vfinal,"data_o", &(TOP__v__u_soc__u_uart.data_o), VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
	__Vscope_v__u_soc__u_uart.varInsert(__Vfinal,"intr_o", &(TOP__v__u_soc__u_uart.intr_o), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
	__Vscope_v__u_soc__u_uart.varInsert(__Vfinal,"rst_i", &(TOP__v__u_soc__u_uart.rst_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_soc__u_uart.varInsert(__Vfinal,"rx_i", &(TOP__v__u_soc__u_uart.rx_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_soc__u_uart.varInsert(__Vfinal,"stb_i", &(TOP__v__u_soc__u_uart.stb_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_soc__u_uart.varInsert(__Vfinal,"tx_o", &(TOP__v__u_soc__u_uart.tx_o), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
	__Vscope_v__u_soc__u_uart.varInsert(__Vfinal,"we_i", &(TOP__v__u_soc__u_uart.we_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_soc__u_uart__u1_uart.varInsert(__Vfinal,"break_o", &(TOP__v__u_soc__u_uart__u1_uart.break_o), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
	__Vscope_v__u_soc__u_uart__u1_uart.varInsert(__Vfinal,"clk_i", &(TOP__v__u_soc__u_uart__u1_uart.clk_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_soc__u_uart__u1_uart.varInsert(__Vfinal,"data_i", &(TOP__v__u_soc__u_uart__u1_uart.data_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1 ,7,0);
	__Vscope_v__u_soc__u_uart__u1_uart.varInsert(__Vfinal,"data_o", &(TOP__v__u_soc__u_uart__u1_uart.data_o), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,7,0);
	__Vscope_v__u_soc__u_uart__u1_uart.varInsert(__Vfinal,"rd_i", &(TOP__v__u_soc__u_uart__u1_uart.rd_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_soc__u_uart__u1_uart.varInsert(__Vfinal,"rst_i", &(TOP__v__u_soc__u_uart__u1_uart.rst_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_soc__u_uart__u1_uart.varInsert(__Vfinal,"rx_ready_o", &(TOP__v__u_soc__u_uart__u1_uart.rx_ready_o), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
	__Vscope_v__u_soc__u_uart__u1_uart.varInsert(__Vfinal,"rxd_i", &(TOP__v__u_soc__u_uart__u1_uart.rxd_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
	__Vscope_v__u_soc__u_uart__u1_uart.varInsert(__Vfinal,"tx_busy_o", &(TOP__v__u_soc__u_uart__u1_uart.tx_busy_o), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
	__Vscope_v__u_soc__u_uart__u1_uart.varInsert(__Vfinal,"txd_o", &(TOP__v__u_soc__u_uart__u1_uart.txd_o), VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
	__Vscope_v__u_soc__u_uart__u1_uart.varInsert(__Vfinal,"wr_i", &(TOP__v__u_soc__u_uart__u1_uart.wr_i), VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
    }
}
