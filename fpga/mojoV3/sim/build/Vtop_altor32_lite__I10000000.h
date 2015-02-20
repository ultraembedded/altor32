// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef _Vtop_altor32_lite__I10000000_H_
#define _Vtop_altor32_lite__I10000000_H_

#include "verilated.h"
#include "Vtop__Dpi.h"

class Vtop__Syms;
class Vtop_altor32_alu;
class Vtop_altor32_regfile_sim;

//----------

VL_MODULE(Vtop_altor32_lite__I10000000) {
  public:
    // CELLS
    Vtop_altor32_alu*  	alu;
    Vtop_altor32_regfile_sim*	genblk1__DOT__REGFILE_SIM__DOT__reg_bank;
    
    // PORTS
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_i,0,0);
    VL_IN8(intr_i,0,0);
    VL_IN8(nmi_i,0,0);
    VL_IN8(enable_i,0,0);
    VL_OUT8(fault_o,0,0);
    VL_OUT8(break_o,0,0);
    VL_OUT8(mem_cti_o,2,0);
    VL_OUT8(mem_cyc_o,0,0);
    VL_OUT8(mem_stb_o,0,0);
    VL_OUT8(mem_we_o,0,0);
    VL_OUT8(mem_sel_o,3,0);
    VL_IN8(mem_stall_i,0,0);
    VL_IN8(mem_ack_i,0,0);
    //char	__VpadToAlign14[2];
    VL_OUT(mem_addr_o,31,0);
    VL_IN(mem_dat_i,31,0);
    VL_OUT(mem_dat_o,31,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__ex_rd_q,4,0);
    VL_SIG8(__PVT__ex_alu_func_q,3,0);
    VL_SIG8(__PVT__nmi_q,0,0);
    VL_SIG8(__PVT__ra_w,4,0);
    VL_SIG8(__PVT__mem_offset_q,1,0);
    VL_SIG8(__PVT__state_q,3,0);
    VL_SIG8(__PVT__w_write_en,0,0);
    VL_SIG8(__PVT__alu_op_r,7,0);
    VL_SIG8(__PVT__inst_add_w,0,0);
    VL_SIG8(__PVT__inst_addc_w,0,0);
    VL_SIG8(__PVT__inst_and_w,0,0);
    VL_SIG8(__PVT__inst_or_w,0,0);
    VL_SIG8(__PVT__inst_sll_w,0,0);
    VL_SIG8(__PVT__inst_sw_ra,0,0);
    VL_SIG8(__PVT__inst_srl_w,0,0);
    VL_SIG8(__PVT__inst_sub_w,0,0);
    VL_SIG8(__PVT__inst_xor_w,0,0);
    VL_SIG8(__PVT__inst_mul_w,0,0);
    VL_SIG8(__PVT__inst_mulu_w,0,0);
    VL_SIG8(__PVT__inst_slli_w,0,0);
    VL_SIG8(__PVT__inst_srai_w,0,0);
    VL_SIG8(__PVT__inst_srli_w,0,0);
    VL_SIG8(__PVT__inst_sfges_w,0,0);
    VL_SIG8(__PVT__inst_sfgeu_w,0,0);
    VL_SIG8(__PVT__inst_sfgts_w,0,0);
    VL_SIG8(__PVT__inst_sfgtu_w,0,0);
    VL_SIG8(__PVT__inst_sfles_w,0,0);
    VL_SIG8(__PVT__inst_sfleu_w,0,0);
    VL_SIG8(__PVT__inst_sflts_w,0,0);
    VL_SIG8(__PVT__inst_sfltu_w,0,0);
    VL_SIG8(__PVT__inst_sfne_w,0,0);
    VL_SIG8(__PVT__inst_sys_w,0,0);
    VL_SIG8(__PVT__inst_trap_w,0,0);
    VL_SIG8(__PVT__load_inst_r,0,0);
    VL_SIG8(__PVT__store_inst_r,0,0);
    VL_SIG8(__PVT__next_state_r,3,0);
    VL_SIG8(__PVT__compare_result_r,0,0);
    VL_SIG8(__PVT__alu_func_r,3,0);
    VL_SIG8(__PVT__write_rd_r,0,0);
    VL_SIG8(__PVT__branch_r,0,0);
    VL_SIG8(__PVT__branch_link_r,0,0);
    VL_SIG8(__PVT__branch_except_r,0,0);
    VL_SIG8(__PVT__invalid_inst_r,0,0);
    //char	__VpadToAlign75[1];
    VL_SIG16(__PVT__mxspr_uint16_r,15,0);
    //char	__VpadToAlign78[2];
    VL_SIG(__PVT__pc_q,31,0);
    VL_SIG(__PVT__epc_q,31,0);
    VL_SIG(__PVT__sr_q,31,0);
    VL_SIG(__PVT__esr_q,31,0);
    VL_SIG(__PVT__ex_alu_a_q,31,0);
    VL_SIG(__PVT__ex_alu_b_q,31,0);
    VL_SIG(__PVT__opcode_q,31,0);
    VL_SIG(__PVT__load_result_r,31,0);
    VL_SIG(__PVT__uint32_r,31,0);
    VL_SIG(__PVT__int32_r,31,0);
    VL_SIG(__PVT__store_int32_r,31,0);
    VL_SIG(__PVT__target_int26_r,31,0);
    VL_SIG(__PVT__mem_addr_r,31,0);
    VL_SIG(__PVT__next_sr_r,31,0);
    VL_SIG(__PVT__next_epc_r,31,0);
    VL_SIG(__PVT__next_esr_r,31,0);
    VL_SIG(__PVT__alu_input_a_r,31,0);
    VL_SIG(__PVT__alu_input_b_r,31,0);
    VL_SIG(__PVT__branch_target_r,31,0);
    
    // LOCAL VARIABLES
    static VL_ST_SIG8(__Vtable1___PVT__next_state_r[256],3,0);
    VL_SIG8(__Vtableidx1,7,0);
    VL_SIG8(__Vdly__nmi_q,0,0);
    VL_SIG16(__Vfunc_sign_extend_imm16__1__x,15,0);
    VL_SIG16(__Vfunc_sign_extend_imm16__2__x,15,0);
    VL_SIG16(__Vfunc_extend_imm16__3__x,15,0);
    VL_SIG(__Vfunc_sign_extend_imm26__0__Vfuncout,31,0);
    VL_SIG(__Vfunc_sign_extend_imm26__0__x,25,0);
    VL_SIG(__Vfunc_sign_extend_imm26__0__y,31,0);
    VL_SIG(__Vfunc_sign_extend_imm16__1__Vfuncout,31,0);
    VL_SIG(__Vfunc_sign_extend_imm16__1__y,31,0);
    VL_SIG(__Vfunc_sign_extend_imm16__2__Vfuncout,31,0);
    VL_SIG(__Vfunc_sign_extend_imm16__2__y,31,0);
    VL_SIG(__Vfunc_extend_imm16__3__Vfuncout,31,0);
    VL_SIG(__Vdly__opcode_q,31,0);
    VL_SIG(__Vdly__pc_q,31,0);
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign212[4];
    Vtop__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vtop_altor32_lite__I10000000& operator= (const Vtop_altor32_lite__I10000000&);	///< Copying not allowed
    Vtop_altor32_lite__I10000000(const Vtop_altor32_lite__I10000000&);	///< Copying not allowed
  public:
    Vtop_altor32_lite__I10000000(const char* name="TOP");
    ~Vtop_altor32_lite__I10000000();
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
    static void	_combo__TOP__v__u_cpu__u1_cpu__u_exec__1(Vtop__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__u_cpu__u1_cpu__u_exec__11(Vtop__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__u_cpu__u1_cpu__u_exec__5(Vtop__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__u_cpu__u1_cpu__u_exec__6(Vtop__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__u_cpu__u1_cpu__u_exec__9(Vtop__Syms* __restrict vlSymsp);
    static void	_initial__TOP__v__u_cpu__u1_cpu__u_exec(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_cpu__u1_cpu__u_exec__3(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_cpu__u1_cpu__u_exec__7(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_cpu__u1_cpu__u_exec__10(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_cpu__u1_cpu__u_exec__12(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_cpu__u1_cpu__u_exec__4(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_cpu__u1_cpu__u_exec__8(Vtop__Syms* __restrict vlSymsp);
    uint32_t	get_opcode_ex();
    uint32_t	get_pc_ex();
    uint32_t	get_putc();
    uint32_t	get_reg_ra();
    uint32_t	get_reg_ra_value();
    uint32_t	get_reg_rb();
    uint32_t	get_reg_rb_value();
    bool	get_reg_valid();
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
