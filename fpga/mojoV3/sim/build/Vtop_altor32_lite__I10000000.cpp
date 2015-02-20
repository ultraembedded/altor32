// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_altor32_lite__I10000000.h" // For This
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//--------------------
// STATIC VARIABLES

VL_ST_SIG8(Vtop_altor32_lite__I10000000::__Vtable1___PVT__next_state_r[256],3,0);

//--------------------

VL_CTOR_IMP(Vtop_altor32_lite__I10000000) {
    VL_CELL (alu, Vtop_altor32_alu);
    VL_CELL (genblk1__DOT__REGFILE_SIM__DOT__reg_bank, Vtop_altor32_regfile_sim);
    // Reset internal values
    // Reset structure values
    clk_i = VL_RAND_RESET_I(1);
    rst_i = VL_RAND_RESET_I(1);
    intr_i = VL_RAND_RESET_I(1);
    nmi_i = VL_RAND_RESET_I(1);
    enable_i = VL_RAND_RESET_I(1);
    fault_o = VL_RAND_RESET_I(1);
    break_o = VL_RAND_RESET_I(1);
    mem_addr_o = VL_RAND_RESET_I(32);
    mem_dat_i = VL_RAND_RESET_I(32);
    mem_dat_o = VL_RAND_RESET_I(32);
    mem_cti_o = VL_RAND_RESET_I(3);
    mem_cyc_o = VL_RAND_RESET_I(1);
    mem_stb_o = VL_RAND_RESET_I(1);
    mem_we_o = VL_RAND_RESET_I(1);
    mem_sel_o = VL_RAND_RESET_I(4);
    mem_stall_i = VL_RAND_RESET_I(1);
    mem_ack_i = VL_RAND_RESET_I(1);
    __PVT__pc_q = VL_RAND_RESET_I(32);
    __PVT__epc_q = VL_RAND_RESET_I(32);
    __PVT__sr_q = VL_RAND_RESET_I(32);
    __PVT__esr_q = VL_RAND_RESET_I(32);
    __PVT__ex_rd_q = VL_RAND_RESET_I(5);
    __PVT__ex_alu_a_q = VL_RAND_RESET_I(32);
    __PVT__ex_alu_b_q = VL_RAND_RESET_I(32);
    __PVT__ex_alu_func_q = VL_RAND_RESET_I(4);
    __PVT__nmi_q = VL_RAND_RESET_I(1);
    __PVT__ra_w = VL_RAND_RESET_I(5);
    __PVT__opcode_q = VL_RAND_RESET_I(32);
    __PVT__load_result_r = VL_RAND_RESET_I(32);
    __PVT__mem_offset_q = VL_RAND_RESET_I(2);
    __PVT__state_q = VL_RAND_RESET_I(4);
    __PVT__w_write_en = VL_RAND_RESET_I(1);
    __PVT__alu_op_r = VL_RAND_RESET_I(8);
    __PVT__uint32_r = VL_RAND_RESET_I(32);
    __PVT__int32_r = VL_RAND_RESET_I(32);
    __PVT__store_int32_r = VL_RAND_RESET_I(32);
    __PVT__mxspr_uint16_r = VL_RAND_RESET_I(16);
    __PVT__target_int26_r = VL_RAND_RESET_I(32);
    __PVT__inst_add_w = VL_RAND_RESET_I(1);
    __PVT__inst_addc_w = VL_RAND_RESET_I(1);
    __PVT__inst_and_w = VL_RAND_RESET_I(1);
    __PVT__inst_or_w = VL_RAND_RESET_I(1);
    __PVT__inst_sll_w = VL_RAND_RESET_I(1);
    __PVT__inst_sw_ra = VL_RAND_RESET_I(1);
    __PVT__inst_srl_w = VL_RAND_RESET_I(1);
    __PVT__inst_sub_w = VL_RAND_RESET_I(1);
    __PVT__inst_xor_w = VL_RAND_RESET_I(1);
    __PVT__inst_mul_w = VL_RAND_RESET_I(1);
    __PVT__inst_mulu_w = VL_RAND_RESET_I(1);
    __PVT__inst_slli_w = VL_RAND_RESET_I(1);
    __PVT__inst_srai_w = VL_RAND_RESET_I(1);
    __PVT__inst_srli_w = VL_RAND_RESET_I(1);
    __PVT__inst_sfges_w = VL_RAND_RESET_I(1);
    __PVT__inst_sfgeu_w = VL_RAND_RESET_I(1);
    __PVT__inst_sfgts_w = VL_RAND_RESET_I(1);
    __PVT__inst_sfgtu_w = VL_RAND_RESET_I(1);
    __PVT__inst_sfles_w = VL_RAND_RESET_I(1);
    __PVT__inst_sfleu_w = VL_RAND_RESET_I(1);
    __PVT__inst_sflts_w = VL_RAND_RESET_I(1);
    __PVT__inst_sfltu_w = VL_RAND_RESET_I(1);
    __PVT__inst_sfne_w = VL_RAND_RESET_I(1);
    __PVT__inst_sys_w = VL_RAND_RESET_I(1);
    __PVT__inst_trap_w = VL_RAND_RESET_I(1);
    __PVT__load_inst_r = VL_RAND_RESET_I(1);
    __PVT__store_inst_r = VL_RAND_RESET_I(1);
    __PVT__mem_addr_r = VL_RAND_RESET_I(32);
    __PVT__next_state_r = VL_RAND_RESET_I(4);
    __PVT__next_sr_r = VL_RAND_RESET_I(32);
    __PVT__compare_result_r = VL_RAND_RESET_I(1);
    __PVT__next_epc_r = VL_RAND_RESET_I(32);
    __PVT__next_esr_r = VL_RAND_RESET_I(32);
    __PVT__alu_func_r = VL_RAND_RESET_I(4);
    __PVT__alu_input_a_r = VL_RAND_RESET_I(32);
    __PVT__alu_input_b_r = VL_RAND_RESET_I(32);
    __PVT__write_rd_r = VL_RAND_RESET_I(1);
    __PVT__branch_r = VL_RAND_RESET_I(1);
    __PVT__branch_link_r = VL_RAND_RESET_I(1);
    __PVT__branch_target_r = VL_RAND_RESET_I(32);
    __PVT__branch_except_r = VL_RAND_RESET_I(1);
    __PVT__invalid_inst_r = VL_RAND_RESET_I(1);
    __Vfunc_sign_extend_imm26__0__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_sign_extend_imm26__0__x = VL_RAND_RESET_I(26);
    __Vfunc_sign_extend_imm26__0__y = VL_RAND_RESET_I(32);
    __Vfunc_sign_extend_imm16__1__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_sign_extend_imm16__1__x = VL_RAND_RESET_I(16);
    __Vfunc_sign_extend_imm16__1__y = VL_RAND_RESET_I(32);
    __Vfunc_sign_extend_imm16__2__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_sign_extend_imm16__2__x = VL_RAND_RESET_I(16);
    __Vfunc_sign_extend_imm16__2__y = VL_RAND_RESET_I(32);
    __Vfunc_extend_imm16__3__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_extend_imm16__3__x = VL_RAND_RESET_I(16);
    __Vtableidx1 = VL_RAND_RESET_I(8);
    __Vtable1___PVT__next_state_r[0] = 0;
    __Vtable1___PVT__next_state_r[1] = 2;
    __Vtable1___PVT__next_state_r[2] = 2;
    __Vtable1___PVT__next_state_r[3] = 5;
    __Vtable1___PVT__next_state_r[4] = 4;
    __Vtable1___PVT__next_state_r[5] = 5;
    __Vtable1___PVT__next_state_r[6] = 6;
    __Vtable1___PVT__next_state_r[7] = 7;
    __Vtable1___PVT__next_state_r[8] = 8;
    __Vtable1___PVT__next_state_r[9] = 9;
    __Vtable1___PVT__next_state_r[10] = 0xa;
    __Vtable1___PVT__next_state_r[11] = 0xb;
    __Vtable1___PVT__next_state_r[12] = 0xc;
    __Vtable1___PVT__next_state_r[13] = 0xd;
    __Vtable1___PVT__next_state_r[14] = 0xe;
    __Vtable1___PVT__next_state_r[15] = 0xf;
    __Vtable1___PVT__next_state_r[16] = 1;
    __Vtable1___PVT__next_state_r[17] = 2;
    __Vtable1___PVT__next_state_r[18] = 2;
    __Vtable1___PVT__next_state_r[19] = 5;
    __Vtable1___PVT__next_state_r[20] = 4;
    __Vtable1___PVT__next_state_r[21] = 1;
    __Vtable1___PVT__next_state_r[22] = 6;
    __Vtable1___PVT__next_state_r[23] = 7;
    __Vtable1___PVT__next_state_r[24] = 8;
    __Vtable1___PVT__next_state_r[25] = 9;
    __Vtable1___PVT__next_state_r[26] = 0xa;
    __Vtable1___PVT__next_state_r[27] = 0xb;
    __Vtable1___PVT__next_state_r[28] = 0xc;
    __Vtable1___PVT__next_state_r[29] = 0xd;
    __Vtable1___PVT__next_state_r[30] = 0xe;
    __Vtable1___PVT__next_state_r[31] = 0xf;
    __Vtable1___PVT__next_state_r[32] = 0;
    __Vtable1___PVT__next_state_r[33] = 2;
    __Vtable1___PVT__next_state_r[34] = 3;
    __Vtable1___PVT__next_state_r[35] = 5;
    __Vtable1___PVT__next_state_r[36] = 1;
    __Vtable1___PVT__next_state_r[37] = 5;
    __Vtable1___PVT__next_state_r[38] = 6;
    __Vtable1___PVT__next_state_r[39] = 7;
    __Vtable1___PVT__next_state_r[40] = 8;
    __Vtable1___PVT__next_state_r[41] = 9;
    __Vtable1___PVT__next_state_r[42] = 0xa;
    __Vtable1___PVT__next_state_r[43] = 0xb;
    __Vtable1___PVT__next_state_r[44] = 0xc;
    __Vtable1___PVT__next_state_r[45] = 0xd;
    __Vtable1___PVT__next_state_r[46] = 0xe;
    __Vtable1___PVT__next_state_r[47] = 0xf;
    __Vtable1___PVT__next_state_r[48] = 1;
    __Vtable1___PVT__next_state_r[49] = 2;
    __Vtable1___PVT__next_state_r[50] = 3;
    __Vtable1___PVT__next_state_r[51] = 5;
    __Vtable1___PVT__next_state_r[52] = 1;
    __Vtable1___PVT__next_state_r[53] = 1;
    __Vtable1___PVT__next_state_r[54] = 6;
    __Vtable1___PVT__next_state_r[55] = 7;
    __Vtable1___PVT__next_state_r[56] = 8;
    __Vtable1___PVT__next_state_r[57] = 9;
    __Vtable1___PVT__next_state_r[58] = 0xa;
    __Vtable1___PVT__next_state_r[59] = 0xb;
    __Vtable1___PVT__next_state_r[60] = 0xc;
    __Vtable1___PVT__next_state_r[61] = 0xd;
    __Vtable1___PVT__next_state_r[62] = 0xe;
    __Vtable1___PVT__next_state_r[63] = 0xf;
    __Vtable1___PVT__next_state_r[64] = 0;
    __Vtable1___PVT__next_state_r[65] = 2;
    __Vtable1___PVT__next_state_r[66] = 2;
    __Vtable1___PVT__next_state_r[67] = 4;
    __Vtable1___PVT__next_state_r[68] = 4;
    __Vtable1___PVT__next_state_r[69] = 5;
    __Vtable1___PVT__next_state_r[70] = 6;
    __Vtable1___PVT__next_state_r[71] = 7;
    __Vtable1___PVT__next_state_r[72] = 8;
    __Vtable1___PVT__next_state_r[73] = 9;
    __Vtable1___PVT__next_state_r[74] = 0xa;
    __Vtable1___PVT__next_state_r[75] = 0xb;
    __Vtable1___PVT__next_state_r[76] = 0xc;
    __Vtable1___PVT__next_state_r[77] = 0xd;
    __Vtable1___PVT__next_state_r[78] = 0xe;
    __Vtable1___PVT__next_state_r[79] = 0xf;
    __Vtable1___PVT__next_state_r[80] = 1;
    __Vtable1___PVT__next_state_r[81] = 2;
    __Vtable1___PVT__next_state_r[82] = 2;
    __Vtable1___PVT__next_state_r[83] = 4;
    __Vtable1___PVT__next_state_r[84] = 4;
    __Vtable1___PVT__next_state_r[85] = 1;
    __Vtable1___PVT__next_state_r[86] = 6;
    __Vtable1___PVT__next_state_r[87] = 7;
    __Vtable1___PVT__next_state_r[88] = 8;
    __Vtable1___PVT__next_state_r[89] = 9;
    __Vtable1___PVT__next_state_r[90] = 0xa;
    __Vtable1___PVT__next_state_r[91] = 0xb;
    __Vtable1___PVT__next_state_r[92] = 0xc;
    __Vtable1___PVT__next_state_r[93] = 0xd;
    __Vtable1___PVT__next_state_r[94] = 0xe;
    __Vtable1___PVT__next_state_r[95] = 0xf;
    __Vtable1___PVT__next_state_r[96] = 0;
    __Vtable1___PVT__next_state_r[97] = 2;
    __Vtable1___PVT__next_state_r[98] = 3;
    __Vtable1___PVT__next_state_r[99] = 4;
    __Vtable1___PVT__next_state_r[100] = 1;
    __Vtable1___PVT__next_state_r[101] = 5;
    __Vtable1___PVT__next_state_r[102] = 6;
    __Vtable1___PVT__next_state_r[103] = 7;
    __Vtable1___PVT__next_state_r[104] = 8;
    __Vtable1___PVT__next_state_r[105] = 9;
    __Vtable1___PVT__next_state_r[106] = 0xa;
    __Vtable1___PVT__next_state_r[107] = 0xb;
    __Vtable1___PVT__next_state_r[108] = 0xc;
    __Vtable1___PVT__next_state_r[109] = 0xd;
    __Vtable1___PVT__next_state_r[110] = 0xe;
    __Vtable1___PVT__next_state_r[111] = 0xf;
    __Vtable1___PVT__next_state_r[112] = 1;
    __Vtable1___PVT__next_state_r[113] = 2;
    __Vtable1___PVT__next_state_r[114] = 3;
    __Vtable1___PVT__next_state_r[115] = 4;
    __Vtable1___PVT__next_state_r[116] = 1;
    __Vtable1___PVT__next_state_r[117] = 1;
    __Vtable1___PVT__next_state_r[118] = 6;
    __Vtable1___PVT__next_state_r[119] = 7;
    __Vtable1___PVT__next_state_r[120] = 8;
    __Vtable1___PVT__next_state_r[121] = 9;
    __Vtable1___PVT__next_state_r[122] = 0xa;
    __Vtable1___PVT__next_state_r[123] = 0xb;
    __Vtable1___PVT__next_state_r[124] = 0xc;
    __Vtable1___PVT__next_state_r[125] = 0xd;
    __Vtable1___PVT__next_state_r[126] = 0xe;
    __Vtable1___PVT__next_state_r[127] = 0xf;
    __Vtable1___PVT__next_state_r[128] = 0;
    __Vtable1___PVT__next_state_r[129] = 2;
    __Vtable1___PVT__next_state_r[130] = 2;
    __Vtable1___PVT__next_state_r[131] = 4;
    __Vtable1___PVT__next_state_r[132] = 4;
    __Vtable1___PVT__next_state_r[133] = 5;
    __Vtable1___PVT__next_state_r[134] = 6;
    __Vtable1___PVT__next_state_r[135] = 7;
    __Vtable1___PVT__next_state_r[136] = 8;
    __Vtable1___PVT__next_state_r[137] = 9;
    __Vtable1___PVT__next_state_r[138] = 0xa;
    __Vtable1___PVT__next_state_r[139] = 0xb;
    __Vtable1___PVT__next_state_r[140] = 0xc;
    __Vtable1___PVT__next_state_r[141] = 0xd;
    __Vtable1___PVT__next_state_r[142] = 0xe;
    __Vtable1___PVT__next_state_r[143] = 0xf;
    __Vtable1___PVT__next_state_r[144] = 1;
    __Vtable1___PVT__next_state_r[145] = 2;
    __Vtable1___PVT__next_state_r[146] = 2;
    __Vtable1___PVT__next_state_r[147] = 4;
    __Vtable1___PVT__next_state_r[148] = 4;
    __Vtable1___PVT__next_state_r[149] = 1;
    __Vtable1___PVT__next_state_r[150] = 6;
    __Vtable1___PVT__next_state_r[151] = 7;
    __Vtable1___PVT__next_state_r[152] = 8;
    __Vtable1___PVT__next_state_r[153] = 9;
    __Vtable1___PVT__next_state_r[154] = 0xa;
    __Vtable1___PVT__next_state_r[155] = 0xb;
    __Vtable1___PVT__next_state_r[156] = 0xc;
    __Vtable1___PVT__next_state_r[157] = 0xd;
    __Vtable1___PVT__next_state_r[158] = 0xe;
    __Vtable1___PVT__next_state_r[159] = 0xf;
    __Vtable1___PVT__next_state_r[160] = 0;
    __Vtable1___PVT__next_state_r[161] = 2;
    __Vtable1___PVT__next_state_r[162] = 3;
    __Vtable1___PVT__next_state_r[163] = 4;
    __Vtable1___PVT__next_state_r[164] = 1;
    __Vtable1___PVT__next_state_r[165] = 5;
    __Vtable1___PVT__next_state_r[166] = 6;
    __Vtable1___PVT__next_state_r[167] = 7;
    __Vtable1___PVT__next_state_r[168] = 8;
    __Vtable1___PVT__next_state_r[169] = 9;
    __Vtable1___PVT__next_state_r[170] = 0xa;
    __Vtable1___PVT__next_state_r[171] = 0xb;
    __Vtable1___PVT__next_state_r[172] = 0xc;
    __Vtable1___PVT__next_state_r[173] = 0xd;
    __Vtable1___PVT__next_state_r[174] = 0xe;
    __Vtable1___PVT__next_state_r[175] = 0xf;
    __Vtable1___PVT__next_state_r[176] = 1;
    __Vtable1___PVT__next_state_r[177] = 2;
    __Vtable1___PVT__next_state_r[178] = 3;
    __Vtable1___PVT__next_state_r[179] = 4;
    __Vtable1___PVT__next_state_r[180] = 1;
    __Vtable1___PVT__next_state_r[181] = 1;
    __Vtable1___PVT__next_state_r[182] = 6;
    __Vtable1___PVT__next_state_r[183] = 7;
    __Vtable1___PVT__next_state_r[184] = 8;
    __Vtable1___PVT__next_state_r[185] = 9;
    __Vtable1___PVT__next_state_r[186] = 0xa;
    __Vtable1___PVT__next_state_r[187] = 0xb;
    __Vtable1___PVT__next_state_r[188] = 0xc;
    __Vtable1___PVT__next_state_r[189] = 0xd;
    __Vtable1___PVT__next_state_r[190] = 0xe;
    __Vtable1___PVT__next_state_r[191] = 0xf;
    __Vtable1___PVT__next_state_r[192] = 0;
    __Vtable1___PVT__next_state_r[193] = 2;
    __Vtable1___PVT__next_state_r[194] = 2;
    __Vtable1___PVT__next_state_r[195] = 4;
    __Vtable1___PVT__next_state_r[196] = 4;
    __Vtable1___PVT__next_state_r[197] = 5;
    __Vtable1___PVT__next_state_r[198] = 6;
    __Vtable1___PVT__next_state_r[199] = 7;
    __Vtable1___PVT__next_state_r[200] = 8;
    __Vtable1___PVT__next_state_r[201] = 9;
    __Vtable1___PVT__next_state_r[202] = 0xa;
    __Vtable1___PVT__next_state_r[203] = 0xb;
    __Vtable1___PVT__next_state_r[204] = 0xc;
    __Vtable1___PVT__next_state_r[205] = 0xd;
    __Vtable1___PVT__next_state_r[206] = 0xe;
    __Vtable1___PVT__next_state_r[207] = 0xf;
    __Vtable1___PVT__next_state_r[208] = 1;
    __Vtable1___PVT__next_state_r[209] = 2;
    __Vtable1___PVT__next_state_r[210] = 2;
    __Vtable1___PVT__next_state_r[211] = 4;
    __Vtable1___PVT__next_state_r[212] = 4;
    __Vtable1___PVT__next_state_r[213] = 1;
    __Vtable1___PVT__next_state_r[214] = 6;
    __Vtable1___PVT__next_state_r[215] = 7;
    __Vtable1___PVT__next_state_r[216] = 8;
    __Vtable1___PVT__next_state_r[217] = 9;
    __Vtable1___PVT__next_state_r[218] = 0xa;
    __Vtable1___PVT__next_state_r[219] = 0xb;
    __Vtable1___PVT__next_state_r[220] = 0xc;
    __Vtable1___PVT__next_state_r[221] = 0xd;
    __Vtable1___PVT__next_state_r[222] = 0xe;
    __Vtable1___PVT__next_state_r[223] = 0xf;
    __Vtable1___PVT__next_state_r[224] = 0;
    __Vtable1___PVT__next_state_r[225] = 2;
    __Vtable1___PVT__next_state_r[226] = 3;
    __Vtable1___PVT__next_state_r[227] = 4;
    __Vtable1___PVT__next_state_r[228] = 1;
    __Vtable1___PVT__next_state_r[229] = 5;
    __Vtable1___PVT__next_state_r[230] = 6;
    __Vtable1___PVT__next_state_r[231] = 7;
    __Vtable1___PVT__next_state_r[232] = 8;
    __Vtable1___PVT__next_state_r[233] = 9;
    __Vtable1___PVT__next_state_r[234] = 0xa;
    __Vtable1___PVT__next_state_r[235] = 0xb;
    __Vtable1___PVT__next_state_r[236] = 0xc;
    __Vtable1___PVT__next_state_r[237] = 0xd;
    __Vtable1___PVT__next_state_r[238] = 0xe;
    __Vtable1___PVT__next_state_r[239] = 0xf;
    __Vtable1___PVT__next_state_r[240] = 1;
    __Vtable1___PVT__next_state_r[241] = 2;
    __Vtable1___PVT__next_state_r[242] = 3;
    __Vtable1___PVT__next_state_r[243] = 4;
    __Vtable1___PVT__next_state_r[244] = 1;
    __Vtable1___PVT__next_state_r[245] = 1;
    __Vtable1___PVT__next_state_r[246] = 6;
    __Vtable1___PVT__next_state_r[247] = 7;
    __Vtable1___PVT__next_state_r[248] = 8;
    __Vtable1___PVT__next_state_r[249] = 9;
    __Vtable1___PVT__next_state_r[250] = 0xa;
    __Vtable1___PVT__next_state_r[251] = 0xb;
    __Vtable1___PVT__next_state_r[252] = 0xc;
    __Vtable1___PVT__next_state_r[253] = 0xd;
    __Vtable1___PVT__next_state_r[254] = 0xe;
    __Vtable1___PVT__next_state_r[255] = 0xf;
    __Vdly__opcode_q = VL_RAND_RESET_I(32);
    __Vdly__pc_q = VL_RAND_RESET_I(32);
    __Vdly__nmi_q = VL_RAND_RESET_I(1);
}

void Vtop_altor32_lite__I10000000::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtop_altor32_lite__I10000000::~Vtop_altor32_lite__I10000000() {
}

//--------------------
// Internal Methods

uint32_t Vtop_altor32_lite__I10000000::get_opcode_ex() {
    VL_DEBUG_IF(VL_PRINTF("            Vtop_altor32_lite__I10000000::get_opcode_ex\n"); );
    // Variables
    VL_OUT(get_opcode_ex__Vfuncrtn,31,0);
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    get_opcode_ex__Vfuncrtn = ((3 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__state_q))
			        ? vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q
			        : 0xfc000000);
    // Final
    return (get_opcode_ex__Vfuncrtn);
}

uint32_t Vtop_altor32_lite__I10000000::get_pc_ex() {
    VL_DEBUG_IF(VL_PRINTF("            Vtop_altor32_lite__I10000000::get_pc_ex\n"); );
    // Variables
    VL_OUT(get_pc_ex__Vfuncrtn,31,0);
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    get_pc_ex__Vfuncrtn = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__pc_q;
    // Final
    return (get_pc_ex__Vfuncrtn);
}

uint32_t Vtop_altor32_lite__I10000000::get_putc() {
    VL_DEBUG_IF(VL_PRINTF("            Vtop_altor32_lite__I10000000::get_putc\n"); );
    // Variables
    VL_OUT8(get_putc__Vfuncrtn,7,0);
    //char	__VpadToAlign53[3];
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    get_putc__Vfuncrtn = 0;
    // Final
    return (0);
}

bool Vtop_altor32_lite__I10000000::get_reg_valid() {
    VL_DEBUG_IF(VL_PRINTF("            Vtop_altor32_lite__I10000000::get_reg_valid\n"); );
    // Variables
    VL_OUT8(get_reg_valid__Vfuncrtn,0,0);
    //char	__VpadToAlign77[3];
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    get_reg_valid__Vfuncrtn = (3 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__state_q));
    // Final
    return (get_reg_valid__Vfuncrtn);
}

uint32_t Vtop_altor32_lite__I10000000::get_reg_ra() {
    VL_DEBUG_IF(VL_PRINTF("            Vtop_altor32_lite__I10000000::get_reg_ra\n"); );
    // Variables
    VL_OUT8(get_reg_ra__Vfuncrtn,4,0);
    //char	__VpadToAlign101[3];
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    get_reg_ra__Vfuncrtn = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__ra_w;
    // Final
    return (get_reg_ra__Vfuncrtn);
}

uint32_t Vtop_altor32_lite__I10000000::get_reg_ra_value() {
    VL_DEBUG_IF(VL_PRINTF("            Vtop_altor32_lite__I10000000::get_reg_ra_value\n"); );
    // Variables
    VL_OUT(get_reg_ra_value__Vfuncrtn,31,0);
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    get_reg_ra_value__Vfuncrtn = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o;
    // Final
    return (get_reg_ra_value__Vfuncrtn);
}

uint32_t Vtop_altor32_lite__I10000000::get_reg_rb() {
    VL_DEBUG_IF(VL_PRINTF("            Vtop_altor32_lite__I10000000::get_reg_rb\n"); );
    // Variables
    VL_OUT8(get_reg_rb__Vfuncrtn,4,0);
    //char	__VpadToAlign149[3];
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    get_reg_rb__Vfuncrtn = (0x1f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				    >> 0xb));
    // Final
    return (get_reg_rb__Vfuncrtn);
}

uint32_t Vtop_altor32_lite__I10000000::get_reg_rb_value() {
    VL_DEBUG_IF(VL_PRINTF("            Vtop_altor32_lite__I10000000::get_reg_rb_value\n"); );
    // Variables
    VL_OUT(get_reg_rb_value__Vfuncrtn,31,0);
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    get_reg_rb_value__Vfuncrtn = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o;
    // Final
    return (get_reg_rb_value__Vfuncrtn);
}

void Vtop_altor32_lite__I10000000::_initial__TOP__v__u_cpu__u1_cpu__u_exec(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            Vtop_altor32_lite__I10000000::_initial__TOP__v__u_cpu__u1_cpu__u_exec\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at ../../../rtl/cpu_lite/altor32_lite.v:666
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_cti_o = 7;
}

void Vtop_altor32_lite__I10000000::_combo__TOP__v__u_cpu__u1_cpu__u_exec__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            Vtop_altor32_lite__I10000000::_combo__TOP__v__u_cpu__u1_cpu__u_exec__1\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.clk_i 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.clk_i;
}

void Vtop_altor32_lite__I10000000::_sequent__TOP__v__u_cpu__u1_cpu__u_exec__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            Vtop_altor32_lite__I10000000::_sequent__TOP__v__u_cpu__u1_cpu__u_exec__3\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vdly__nmi_q 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__nmi_q;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vdly__pc_q 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__pc_q;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vdly__opcode_q 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q;
    // ALWAYS at ../../../rtl/cpu_lite/altor32_lite.v:1424
    if ((1 & (~ (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.rst_i)))) {
	if (((5 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			    >> 0x1a))) & (3 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__state_q)))) {
	    if (VL_UNLIKELY((4 == (0xffff & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q)))) {
		VL_WRITEF("%c",8,(0xff & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o));
	    }
	}
    }
    // ALWAYS at ../../../rtl/cpu_lite/altor32_lite.v:1401
    if (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.rst_i) {
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.break_o = 0;
    } else {
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.break_o = 0;
	if (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_trap_w) {
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.break_o = 1;
	}
    }
    // ALWAYS at ../../../rtl/cpu_lite/altor32_lite.v:1207
    if (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.rst_i) {
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vdly__pc_q = 0x100;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__epc_q = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__sr_q = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__esr_q = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.fault_o = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vdly__nmi_q = 0;
    } else {
	if (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.nmi_i) {
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vdly__nmi_q = 1;
	}
	if (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.enable_i) {
	    if (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__w_write_en) {
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__sr_q 
		    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r;
		if (((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__invalid_inst_r) 
		     | (0 != (3 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__pc_q)))) {
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__epc_q 
			= ((IData)(4) + vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__pc_q);
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__esr_q 
			= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r;
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__sr_q = 0;
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.fault_o = 1;
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vdly__pc_q 
			= ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__invalid_inst_r)
			    ? 0x10000200 : 0x10000800);
		} else {
		    if (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_except_r) {
			vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__epc_q 
			    = ((IData)(4) + vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__pc_q);
			vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__esr_q 
			    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r;
			vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__sr_q = 0;
			vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vdly__pc_q 
			    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_target_r;
		    } else {
			if (((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.nmi_i) 
			     | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__nmi_q))) {
			    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vdly__nmi_q = 0;
			    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__epc_q 
				= ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_r)
				    ? vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_target_r
				    : ((IData)(4) + vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__pc_q));
			    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__esr_q 
				= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r;
			    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__sr_q = 0;
			    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vdly__pc_q = 0x10000700;
			} else {
			    if (((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.intr_i) 
				 & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r 
				    >> 2))) {
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__epc_q 
				    = ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_r)
				        ? vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_target_r
				        : ((IData)(4) 
					   + vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__pc_q));
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__esr_q 
				    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r;
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__sr_q = 0;
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vdly__pc_q = 0x10000300;
			    } else {
				if (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_r) {
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vdly__pc_q 
					= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_target_r;
				} else {
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vdly__pc_q 
					= ((IData)(4) 
					   + vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__pc_q);
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__epc_q 
					= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_epc_r;
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__esr_q 
					= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_esr_r;
				}
			    }
			}
		    }
		}
	    }
	} else {
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vdly__pc_q = 0x100;
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__epc_q = 0;
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__sr_q = 0;
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__esr_q = 0;
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.fault_o = 0;
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vdly__nmi_q = 0;
	}
    }
    // ALWAYS at ../../../rtl/cpu_lite/altor32_lite.v:1177
    if (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.rst_i) {
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__ex_alu_func_q = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__ex_alu_a_q = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__ex_alu_b_q = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__ex_rd_q = 0;
    } else {
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__ex_alu_func_q 
	    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_func_r;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__ex_alu_a_q 
	    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__ex_alu_b_q 
	    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_b_r;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__ex_rd_q 
	    = (0x1f & ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_link_r)
		        ? 9 : ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r)
			        ? (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				   >> 0x15) : 0)));
    }
    // ALWAYS at ../../../rtl/cpu_lite/altor32_lite.v:490
    if (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.rst_i) {
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_addr_o = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vdly__opcode_q = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mem_offset_q = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_dat_o = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_sel_o = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_we_o = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_stb_o = 0;
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_cyc_o = 0;
    } else {
	if ((1 & (~ (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_stall_i)))) {
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_stb_o = 0;
	}
	if ((1 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__state_q))) {
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_addr_o 
		= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__pc_q;
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_stb_o = 1;
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_we_o = 0;
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_cyc_o = 1;
	} else {
	    if ((2 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__state_q))) {
		if (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_ack_i) {
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vdly__opcode_q 
			= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_dat_i;
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_cyc_o = 0;
		}
	    } else {
		if ((3 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__state_q))) {
		    if (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__load_inst_r) {
			vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_addr_o 
			    = (0xfffffffc & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mem_addr_r);
			vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mem_offset_q 
			    = (3 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mem_addr_r);
			vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_dat_o = 0;
			vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_sel_o = 0xf;
			vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_we_o = 0;
			vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_stb_o = 1;
			vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_cyc_o = 1;
		    } else {
			if ((0x36 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					      >> 0x1a)))) {
			    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_addr_o 
				= (0xfffffffc & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mem_addr_r);
			    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mem_offset_q 
				= (3 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mem_addr_r);
			    if ((2 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mem_addr_r)) {
				if ((1 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mem_addr_r)) {
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_dat_o 
					= (0xff & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o);
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_sel_o = 1;
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_we_o = 1;
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_stb_o = 1;
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_cyc_o = 1;
				} else {
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_dat_o 
					= (0xff00 & 
					   (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o 
					    << 8));
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_sel_o = 2;
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_we_o = 1;
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_stb_o = 1;
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_cyc_o = 1;
				}
			    } else {
				if ((1 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mem_addr_r)) {
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_dat_o 
					= (0xff0000 
					   & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o 
					      << 0x10));
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_sel_o = 4;
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_we_o = 1;
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_stb_o = 1;
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_cyc_o = 1;
				} else {
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_dat_o 
					= (0xff000000 
					   & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o 
					      << 0x18));
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_sel_o = 8;
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_we_o = 1;
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_stb_o = 1;
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_cyc_o = 1;
				}
			    }
			} else {
			    if ((0x37 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						  >> 0x1a)))) {
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_addr_o 
				    = (0xfffffffc & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mem_addr_r);
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mem_offset_q 
				    = (3 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mem_addr_r);
				if ((0 == (3 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mem_addr_r))) {
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_dat_o 
					= (0xffff0000 
					   & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o 
					      << 0x10));
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_sel_o = 0xc;
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_we_o = 1;
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_stb_o = 1;
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_cyc_o = 1;
				} else {
				    if ((2 == (3 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mem_addr_r))) {
					vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_dat_o 
					    = (0xffff 
					       & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o);
					vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_sel_o = 3;
					vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_we_o = 1;
					vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_stb_o = 1;
					vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_cyc_o = 1;
				    }
				}
			    } else {
				if ((0x35 == (0x3f 
					      & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						 >> 0x1a)))) {
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_addr_o 
					= (0xfffffffc 
					   & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mem_addr_r);
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mem_offset_q 
					= (3 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mem_addr_r);
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_dat_o 
					= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o;
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_sel_o = 0xf;
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_we_o = 1;
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_stb_o = 1;
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_cyc_o = 1;
				}
			    }
			}
		    }
		} else {
		    if ((4 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__state_q))) {
			if (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_ack_i) {
			    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_cyc_o = 0;
			}
		    }
		}
	    }
	}
    }
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__nmi_q 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vdly__nmi_q;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__pc_q 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vdly__pc_q;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vdly__opcode_q;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_i 
	= (1 & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__sr_q 
		>> 0xa));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.op_i 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__ex_alu_func_q;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.a_i 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__ex_alu_a_q;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__ex_alu_b_q;
    // ALWAYS at ../../../rtl/cpu_lite/altor32_lite.v:479
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__state_q 
	= ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.rst_i)
	    ? 0 : (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_state_r));
    // ALWAYS at ../../../rtl/cpu_lite/altor32_lite.v:405
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__load_inst_r 
	= ((((((0x24 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				 >> 0x1a))) | (0x26 
					       == (0x3f 
						   & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						      >> 0x1a)))) 
	      | (0x22 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				  >> 0x1a)))) | (0x23 
						 == 
						 (0x3f 
						  & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						     >> 0x1a)))) 
	    | (0x25 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				>> 0x1a)))) | (0x21 
					       == (0x3f 
						   & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						      >> 0x1a))));
    // ALWAYS at ../../../rtl/cpu_lite/altor32_lite.v:309
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm26__0__x 
	= (0x3ffffff & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q);
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm26__0__y 
	= ((0x2000000 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm26__0__x)
	    ? (0xfc000000 | vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm26__0__y)
	    : (0x3ffffff & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm26__0__y));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm26__0__y 
	= ((0xfc000000 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm26__0__y) 
	   | vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm26__0__x);
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm26__0__Vfuncout 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm26__0__y;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__target_int26_r 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm26__0__Vfuncout;
    // ALWAYS at ../../../rtl/cpu_lite/altor32_lite.v:312
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__1__x 
	= ((0xf800 & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
		      >> 0xa)) | (0x7ff & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__1__y 
	= ((0x8000 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__1__x))
	    ? (0xffff0000 | vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__1__y)
	    : (0xffff & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__1__y));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__1__y 
	= ((0xffff0000 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__1__y) 
	   | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__1__x));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__1__Vfuncout 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__1__y;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__store_int32_r 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__1__Vfuncout;
    // ALWAYS at ../../../rtl/cpu_lite/altor32_lite.v:317
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_extend_imm16__3__x 
	= (0xffff & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q);
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_extend_imm16__3__Vfuncout 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_extend_imm16__3__x;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__uint32_r 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_extend_imm16__3__Vfuncout;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sys_w 
	= ((8 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			  >> 0x1a))) & (0x20 == (0xff 
						 & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						    >> 0x18))));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_trap_w 
	= ((8 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			  >> 0x1a))) & (0x21 == (0xff 
						 & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						    >> 0x18))));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_slli_w 
	= ((0x2e == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			     >> 0x1a))) & (0 == (3 
						 & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						    >> 6))));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_srai_w 
	= ((0x2e == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			     >> 0x1a))) & (2 == (3 
						 & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						    >> 6))));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_srli_w 
	= ((0x2e == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			     >> 0x1a))) & (1 == (3 
						 & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						    >> 6))));
    // ALWAYS at ../../../rtl/cpu_lite/altor32_lite.v:316
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__2__x 
	= (0xffff & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q);
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__2__y 
	= ((0x8000 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__2__x))
	    ? (0xffff0000 | vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__2__y)
	    : (0xffff & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__2__y));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__2__y 
	= ((0xffff0000 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__2__y) 
	   | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__2__x));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__2__Vfuncout 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__2__y;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__int32_r 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__2__Vfuncout;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfges_w 
	= (((0x39 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			      >> 0x1a))) | (0x2f == 
					    (0x3f & 
					     (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					      >> 0x1a)))) 
	   & (0x52b == (0x53f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				 >> 0x15))));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfgeu_w 
	= (((0x39 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			      >> 0x1a))) | (0x2f == 
					    (0x3f & 
					     (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					      >> 0x1a)))) 
	   & (0x523 == (0x53f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				 >> 0x15))));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfgts_w 
	= (((0x39 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			      >> 0x1a))) | (0x2f == 
					    (0x3f & 
					     (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					      >> 0x1a)))) 
	   & (0x52a == (0x53f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				 >> 0x15))));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfgtu_w 
	= (((0x39 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			      >> 0x1a))) | (0x2f == 
					    (0x3f & 
					     (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					      >> 0x1a)))) 
	   & (0x522 == (0x53f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				 >> 0x15))));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfles_w 
	= (((0x39 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			      >> 0x1a))) | (0x2f == 
					    (0x3f & 
					     (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					      >> 0x1a)))) 
	   & (0x52d == (0x53f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				 >> 0x15))));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfleu_w 
	= (((0x39 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			      >> 0x1a))) | (0x2f == 
					    (0x3f & 
					     (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					      >> 0x1a)))) 
	   & (0x525 == (0x53f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				 >> 0x15))));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sflts_w 
	= (((0x39 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			      >> 0x1a))) | (0x2f == 
					    (0x3f & 
					     (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					      >> 0x1a)))) 
	   & (0x52c == (0x53f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				 >> 0x15))));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfltu_w 
	= (((0x39 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			      >> 0x1a))) | (0x2f == 
					    (0x3f & 
					     (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					      >> 0x1a)))) 
	   & (0x524 == (0x53f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				 >> 0x15))));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfne_w 
	= (((0x39 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			      >> 0x1a))) | (0x2f == 
					    (0x3f & 
					     (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					      >> 0x1a)))) 
	   & (0x521 == (0x53f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				 >> 0x15))));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rb_i 
	= (0x1f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
		   >> 0xb));
    // ALWAYS at ../../../rtl/cpu_lite/altor32_lite.v:304
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_op_r 
	= ((0xf0 & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
		    >> 2)) | (0xf & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__ra_w 
	= (0x1f & ((5 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				  >> 0x1a))) ? 3 : 
		   (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
		    >> 0x10)));
}

void Vtop_altor32_lite__I10000000::_settle__TOP__v__u_cpu__u1_cpu__u_exec__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            Vtop_altor32_lite__I10000000::_settle__TOP__v__u_cpu__u1_cpu__u_exec__4\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_i 
	= (1 & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__sr_q 
		>> 0xa));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.op_i 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__ex_alu_func_q;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.a_i 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__ex_alu_a_q;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.b_i 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__ex_alu_b_q;
    // ALWAYS at ../../../rtl/cpu_lite/altor32_lite.v:405
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__load_inst_r 
	= ((((((0x24 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				 >> 0x1a))) | (0x26 
					       == (0x3f 
						   & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						      >> 0x1a)))) 
	      | (0x22 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				  >> 0x1a)))) | (0x23 
						 == 
						 (0x3f 
						  & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						     >> 0x1a)))) 
	    | (0x25 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				>> 0x1a)))) | (0x21 
					       == (0x3f 
						   & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						      >> 0x1a))));
    // ALWAYS at ../../../rtl/cpu_lite/altor32_lite.v:309
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm26__0__x 
	= (0x3ffffff & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q);
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm26__0__y 
	= ((0x2000000 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm26__0__x)
	    ? (0xfc000000 | vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm26__0__y)
	    : (0x3ffffff & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm26__0__y));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm26__0__y 
	= ((0xfc000000 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm26__0__y) 
	   | vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm26__0__x);
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm26__0__Vfuncout 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm26__0__y;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__target_int26_r 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm26__0__Vfuncout;
    // ALWAYS at ../../../rtl/cpu_lite/altor32_lite.v:312
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__1__x 
	= ((0xf800 & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
		      >> 0xa)) | (0x7ff & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__1__y 
	= ((0x8000 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__1__x))
	    ? (0xffff0000 | vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__1__y)
	    : (0xffff & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__1__y));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__1__y 
	= ((0xffff0000 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__1__y) 
	   | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__1__x));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__1__Vfuncout 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__1__y;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__store_int32_r 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__1__Vfuncout;
    // ALWAYS at ../../../rtl/cpu_lite/altor32_lite.v:317
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_extend_imm16__3__x 
	= (0xffff & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q);
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_extend_imm16__3__Vfuncout 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_extend_imm16__3__x;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__uint32_r 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_extend_imm16__3__Vfuncout;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sys_w 
	= ((8 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			  >> 0x1a))) & (0x20 == (0xff 
						 & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						    >> 0x18))));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_trap_w 
	= ((8 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			  >> 0x1a))) & (0x21 == (0xff 
						 & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						    >> 0x18))));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_slli_w 
	= ((0x2e == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			     >> 0x1a))) & (0 == (3 
						 & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						    >> 6))));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_srai_w 
	= ((0x2e == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			     >> 0x1a))) & (2 == (3 
						 & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						    >> 6))));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_srli_w 
	= ((0x2e == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			     >> 0x1a))) & (1 == (3 
						 & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						    >> 6))));
    // ALWAYS at ../../../rtl/cpu_lite/altor32_lite.v:316
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__2__x 
	= (0xffff & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q);
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__2__y 
	= ((0x8000 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__2__x))
	    ? (0xffff0000 | vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__2__y)
	    : (0xffff & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__2__y));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__2__y 
	= ((0xffff0000 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__2__y) 
	   | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__2__x));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__2__Vfuncout 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__2__y;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__int32_r 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vfunc_sign_extend_imm16__2__Vfuncout;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfges_w 
	= (((0x39 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			      >> 0x1a))) | (0x2f == 
					    (0x3f & 
					     (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					      >> 0x1a)))) 
	   & (0x52b == (0x53f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				 >> 0x15))));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfgeu_w 
	= (((0x39 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			      >> 0x1a))) | (0x2f == 
					    (0x3f & 
					     (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					      >> 0x1a)))) 
	   & (0x523 == (0x53f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				 >> 0x15))));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfgts_w 
	= (((0x39 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			      >> 0x1a))) | (0x2f == 
					    (0x3f & 
					     (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					      >> 0x1a)))) 
	   & (0x52a == (0x53f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				 >> 0x15))));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfgtu_w 
	= (((0x39 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			      >> 0x1a))) | (0x2f == 
					    (0x3f & 
					     (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					      >> 0x1a)))) 
	   & (0x522 == (0x53f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				 >> 0x15))));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfles_w 
	= (((0x39 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			      >> 0x1a))) | (0x2f == 
					    (0x3f & 
					     (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					      >> 0x1a)))) 
	   & (0x52d == (0x53f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				 >> 0x15))));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfleu_w 
	= (((0x39 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			      >> 0x1a))) | (0x2f == 
					    (0x3f & 
					     (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					      >> 0x1a)))) 
	   & (0x525 == (0x53f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				 >> 0x15))));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sflts_w 
	= (((0x39 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			      >> 0x1a))) | (0x2f == 
					    (0x3f & 
					     (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					      >> 0x1a)))) 
	   & (0x52c == (0x53f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				 >> 0x15))));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfltu_w 
	= (((0x39 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			      >> 0x1a))) | (0x2f == 
					    (0x3f & 
					     (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					      >> 0x1a)))) 
	   & (0x524 == (0x53f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				 >> 0x15))));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfne_w 
	= (((0x39 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			      >> 0x1a))) | (0x2f == 
					    (0x3f & 
					     (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					      >> 0x1a)))) 
	   & (0x521 == (0x53f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				 >> 0x15))));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rb_i 
	= (0x1f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
		   >> 0xb));
    // ALWAYS at ../../../rtl/cpu_lite/altor32_lite.v:304
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_op_r 
	= ((0xf0 & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
		    >> 2)) | (0xf & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__ra_w 
	= (0x1f & ((5 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				  >> 0x1a))) ? 3 : 
		   (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
		    >> 0x10)));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rst_i 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.rst_i;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rd_i 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__ex_rd_q;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_mul_w 
	= ((0x38 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			     >> 0x1a))) & (0xc6 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_op_r)));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_mulu_w 
	= ((0x38 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			     >> 0x1a))) & (0xcb == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_op_r)));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_add_w 
	= ((0x38 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			     >> 0x1a))) & (0 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_op_r)));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_addc_w 
	= ((0x38 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			     >> 0x1a))) & (1 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_op_r)));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_and_w 
	= ((0x38 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			     >> 0x1a))) & (3 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_op_r)));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_or_w 
	= ((0x38 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			     >> 0x1a))) & (4 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_op_r)));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sll_w 
	= ((0x38 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			     >> 0x1a))) & (8 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_op_r)));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sw_ra 
	= ((0x38 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			     >> 0x1a))) & (0x28 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_op_r)));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_srl_w 
	= ((0x38 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			     >> 0x1a))) & (0x18 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_op_r)));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sub_w 
	= ((0x38 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			     >> 0x1a))) & (2 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_op_r)));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_xor_w 
	= ((0x38 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			     >> 0x1a))) & (5 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_op_r)));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.ra_i 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__ra_w;
}

void Vtop_altor32_lite__I10000000::_combo__TOP__v__u_cpu__u1_cpu__u_exec__5(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            Vtop_altor32_lite__I10000000::_combo__TOP__v__u_cpu__u1_cpu__u_exec__5\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rst_i 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.rst_i;
}

void Vtop_altor32_lite__I10000000::_combo__TOP__v__u_cpu__u1_cpu__u_exec__6(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            Vtop_altor32_lite__I10000000::_combo__TOP__v__u_cpu__u1_cpu__u_exec__6\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../rtl/cpu_lite/altor32_lite.v:1003
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__compare_result_r 
	= (1 & (((((((((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfges_w) 
		       | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfgeu_w)) 
		      | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfgts_w)) 
		     | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfgtu_w)) 
		    | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfles_w)) 
		   | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfleu_w)) 
		  | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sflts_w)) 
		 | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfltu_w))
		 ? ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfges_w)
		     ? ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.greater_than_signed_o) 
			| (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.equal_o))
		     : ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfgeu_w)
			 ? ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.greater_than_o) 
			    | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.equal_o))
			 : ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfgts_w)
			     ? (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.greater_than_signed_o)
			     : ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfgtu_w)
				 ? (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.greater_than_o)
				 : ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfles_w)
				     ? ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.less_than_signed_o) 
					| (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.equal_o))
				     : ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfleu_w)
					 ? ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.less_than_o) 
					    | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.equal_o))
					 : ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sflts_w)
					     ? (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.less_than_signed_o)
					     : (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.less_than_o))))))))
		 : ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfne_w)
		     ? (~ (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.equal_o))
		     : (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.equal_o))));
}

void Vtop_altor32_lite__I10000000::_sequent__TOP__v__u_cpu__u1_cpu__u_exec__7(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            Vtop_altor32_lite__I10000000::_sequent__TOP__v__u_cpu__u1_cpu__u_exec__7\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.rd_i 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__ex_rd_q;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_mul_w 
	= ((0x38 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			     >> 0x1a))) & (0xc6 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_op_r)));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_mulu_w 
	= ((0x38 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			     >> 0x1a))) & (0xcb == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_op_r)));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_add_w 
	= ((0x38 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			     >> 0x1a))) & (0 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_op_r)));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_addc_w 
	= ((0x38 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			     >> 0x1a))) & (1 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_op_r)));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_and_w 
	= ((0x38 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			     >> 0x1a))) & (3 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_op_r)));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_or_w 
	= ((0x38 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			     >> 0x1a))) & (4 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_op_r)));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sll_w 
	= ((0x38 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			     >> 0x1a))) & (8 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_op_r)));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sw_ra 
	= ((0x38 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			     >> 0x1a))) & (0x28 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_op_r)));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_srl_w 
	= ((0x38 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			     >> 0x1a))) & (0x18 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_op_r)));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sub_w 
	= ((0x38 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			     >> 0x1a))) & (2 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_op_r)));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_xor_w 
	= ((0x38 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			     >> 0x1a))) & (5 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_op_r)));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.ra_i 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__ra_w;
    // ALWAYS at ../../../rtl/cpu_lite/altor32_lite.v:1117
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__invalid_inst_r 
	= (1 & (~ (((((((((((((((((((((((((((((((((
						   (((((((((((((((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_add_w) 
								 | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_addc_w)) 
								| (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_and_w)) 
							       | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_or_w)) 
							      | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sll_w)) 
							     | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sw_ra)) 
							    | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_srl_w)) 
							   | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sub_w)) 
							  | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_xor_w)) 
							 | (0x27 
							    == 
							    (0x3f 
							     & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
								>> 0x1a)))) 
							| (0x29 
							   == 
							   (0x3f 
							    & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
							       >> 0x1a)))) 
						       | (4 
							  == 
							  (0x3f 
							   & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
							      >> 0x1a)))) 
						      | (3 
							 == 
							 (0x3f 
							  & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
							     >> 0x1a)))) 
						     | (0 
							== 
							(0x3f 
							 & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
							    >> 0x1a)))) 
						    | (1 
						       == 
						       (0x3f 
							& (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
							   >> 0x1a)))) 
						   | (0x12 
						      == 
						      (0x3f 
						       & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
							  >> 0x1a)))) 
						  | (0x11 
						     == 
						     (0x3f 
						      & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
							 >> 0x1a)))) 
						 | (0x24 
						    == 
						    (0x3f 
						     & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
							>> 0x1a)))) 
						| (0x26 
						   == 
						   (0x3f 
						    & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						       >> 0x1a)))) 
					       | (0x22 
						  == 
						  (0x3f 
						   & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						      >> 0x1a)))) 
					      | (0x23 
						 == 
						 (0x3f 
						  & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						     >> 0x1a)))) 
					     | (0x25 
						== 
						(0x3f 
						 & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						    >> 0x1a)))) 
					    | (0x21 
					       == (0x3f 
						   & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						      >> 0x1a)))) 
					   | (0x2d 
					      == (0x3f 
						  & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						     >> 0x1a)))) 
					  | (0x30 == 
					     (0x3f 
					      & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						 >> 0x1a)))) 
					 | (6 == (0x3f 
						  & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						     >> 0x1a)))) 
					| (5 == (0x3f 
						 & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						    >> 0x1a)))) 
				       | (0x2a == (0x3f 
						   & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						      >> 0x1a)))) 
				      | (9 == (0x3f 
					       & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						  >> 0x1a)))) 
				     | (0x36 == (0x3f 
						 & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						    >> 0x1a)))) 
				    | (0x37 == (0x3f 
						& (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						   >> 0x1a)))) 
				   | (0x35 == (0x3f 
					       & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						  >> 0x1a)))) 
				  | (0x2b == (0x3f 
					      & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						 >> 0x1a)))) 
				 | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_slli_w)) 
				| (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_srai_w)) 
			       | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_srli_w)) 
			      | (((0x39 == (0x3f & 
					    (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					     >> 0x1a))) 
				  | (0x2f == (0x3f 
					      & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						 >> 0x1a)))) 
				 & (0x520 == (0x53f 
					      & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						 >> 0x15))))) 
			     | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfges_w)) 
			    | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfgeu_w)) 
			   | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfgts_w)) 
			  | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfgtu_w)) 
			 | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfles_w)) 
			| (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfleu_w)) 
		       | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sflts_w)) 
		      | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfltu_w)) 
		     | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfne_w)) 
		    | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sys_w)) 
		   | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_trap_w))));
}

void Vtop_altor32_lite__I10000000::_settle__TOP__v__u_cpu__u1_cpu__u_exec__8(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            Vtop_altor32_lite__I10000000::_settle__TOP__v__u_cpu__u1_cpu__u_exec__8\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../rtl/cpu_lite/altor32_lite.v:1003
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__compare_result_r 
	= (1 & (((((((((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfges_w) 
		       | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfgeu_w)) 
		      | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfgts_w)) 
		     | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfgtu_w)) 
		    | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfles_w)) 
		   | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfleu_w)) 
		  | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sflts_w)) 
		 | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfltu_w))
		 ? ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfges_w)
		     ? ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.greater_than_signed_o) 
			| (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.equal_o))
		     : ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfgeu_w)
			 ? ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.greater_than_o) 
			    | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.equal_o))
			 : ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfgts_w)
			     ? (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.greater_than_signed_o)
			     : ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfgtu_w)
				 ? (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.greater_than_o)
				 : ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfles_w)
				     ? ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.less_than_signed_o) 
					| (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.equal_o))
				     : ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfleu_w)
					 ? ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.less_than_o) 
					    | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.equal_o))
					 : ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sflts_w)
					     ? (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.less_than_signed_o)
					     : (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.less_than_o))))))))
		 : ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfne_w)
		     ? (~ (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.equal_o))
		     : (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.equal_o))));
    // ALWAYS at ../../../rtl/cpu_lite/altor32_lite.v:1117
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__invalid_inst_r 
	= (1 & (~ (((((((((((((((((((((((((((((((((
						   (((((((((((((((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_add_w) 
								 | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_addc_w)) 
								| (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_and_w)) 
							       | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_or_w)) 
							      | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sll_w)) 
							     | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sw_ra)) 
							    | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_srl_w)) 
							   | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sub_w)) 
							  | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_xor_w)) 
							 | (0x27 
							    == 
							    (0x3f 
							     & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
								>> 0x1a)))) 
							| (0x29 
							   == 
							   (0x3f 
							    & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
							       >> 0x1a)))) 
						       | (4 
							  == 
							  (0x3f 
							   & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
							      >> 0x1a)))) 
						      | (3 
							 == 
							 (0x3f 
							  & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
							     >> 0x1a)))) 
						     | (0 
							== 
							(0x3f 
							 & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
							    >> 0x1a)))) 
						    | (1 
						       == 
						       (0x3f 
							& (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
							   >> 0x1a)))) 
						   | (0x12 
						      == 
						      (0x3f 
						       & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
							  >> 0x1a)))) 
						  | (0x11 
						     == 
						     (0x3f 
						      & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
							 >> 0x1a)))) 
						 | (0x24 
						    == 
						    (0x3f 
						     & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
							>> 0x1a)))) 
						| (0x26 
						   == 
						   (0x3f 
						    & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						       >> 0x1a)))) 
					       | (0x22 
						  == 
						  (0x3f 
						   & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						      >> 0x1a)))) 
					      | (0x23 
						 == 
						 (0x3f 
						  & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						     >> 0x1a)))) 
					     | (0x25 
						== 
						(0x3f 
						 & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						    >> 0x1a)))) 
					    | (0x21 
					       == (0x3f 
						   & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						      >> 0x1a)))) 
					   | (0x2d 
					      == (0x3f 
						  & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						     >> 0x1a)))) 
					  | (0x30 == 
					     (0x3f 
					      & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						 >> 0x1a)))) 
					 | (6 == (0x3f 
						  & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						     >> 0x1a)))) 
					| (5 == (0x3f 
						 & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						    >> 0x1a)))) 
				       | (0x2a == (0x3f 
						   & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						      >> 0x1a)))) 
				      | (9 == (0x3f 
					       & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						  >> 0x1a)))) 
				     | (0x36 == (0x3f 
						 & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						    >> 0x1a)))) 
				    | (0x37 == (0x3f 
						& (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						   >> 0x1a)))) 
				   | (0x35 == (0x3f 
					       & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						  >> 0x1a)))) 
				  | (0x2b == (0x3f 
					      & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						 >> 0x1a)))) 
				 | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_slli_w)) 
				| (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_srai_w)) 
			       | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_srli_w)) 
			      | (((0x39 == (0x3f & 
					    (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					     >> 0x1a))) 
				  | (0x2f == (0x3f 
					      & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						 >> 0x1a)))) 
				 & (0x520 == (0x53f 
					      & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						 >> 0x15))))) 
			     | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfges_w)) 
			    | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfgeu_w)) 
			   | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfgts_w)) 
			  | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfgtu_w)) 
			 | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfles_w)) 
			| (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfleu_w)) 
		       | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sflts_w)) 
		      | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfltu_w)) 
		     | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sfne_w)) 
		    | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sys_w)) 
		   | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_trap_w))));
}

void Vtop_altor32_lite__I10000000::_combo__TOP__v__u_cpu__u1_cpu__u_exec__9(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            Vtop_altor32_lite__I10000000::_combo__TOP__v__u_cpu__u1_cpu__u_exec__9\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../rtl/cpu_lite/altor32_lite.v:1046
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_r = 0;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_link_r = 0;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_except_r = 0;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_target_r 
	= (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__pc_q 
	   + (0xfffffffc & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__target_int26_r 
			    << 2)));
    if (((((((((4 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			      >> 0x1a))) | (3 == (0x3f 
						  & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						     >> 0x1a)))) 
	      | (0 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			       >> 0x1a)))) | (1 == 
					      (0x3f 
					       & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						  >> 0x1a)))) 
	    | (0x12 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				>> 0x1a)))) | (0x11 
					       == (0x3f 
						   & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						      >> 0x1a)))) 
	  | (9 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			   >> 0x1a)))) | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sys_w))) {
	if ((4 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			   >> 0x1a)))) {
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_r 
		= (1 & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__sr_q 
			>> 9));
	} else {
	    if ((3 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			       >> 0x1a)))) {
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_r 
		    = (1 & (~ (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__sr_q 
			       >> 9)));
	    } else {
		if ((0 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				   >> 0x1a)))) {
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_r = 1;
		} else {
		    if ((1 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				       >> 0x1a)))) {
			vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_link_r = 1;
			vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_r = 1;
		    } else {
			if ((0x12 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					      >> 0x1a)))) {
			    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_link_r = 1;
			    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_r = 1;
			    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_target_r 
				= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o;
			} else {
			    if ((0x11 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						  >> 0x1a)))) {
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_r = 1;
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_target_r 
				    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o;
			    } else {
				if ((9 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						   >> 0x1a)))) {
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_r = 1;
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_target_r 
					= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__epc_q;
				} else {
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_r = 1;
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_except_r = 1;
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_target_r = 0x10000400;
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	if (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_trap_w) {
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_r = 1;
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_except_r = 1;
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_target_r = 0x10000600;
	}
    }
    // ALWAYS at ../../../rtl/cpu_lite/altor32_lite.v:407
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__store_inst_r 
	= (((0x36 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			      >> 0x1a))) | (0x37 == 
					    (0x3f & 
					     (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					      >> 0x1a)))) 
	   | (0x35 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			       >> 0x1a))));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mem_addr_r 
	= (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o 
	   + ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__store_inst_r)
	       ? vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__store_int32_r
	       : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__int32_r));
    // ALWAYS at ../../../rtl/cpu_lite/altor32_lite.v:330
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mxspr_uint16_r 
	= (0xffff & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o 
		     | (0x7ff & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q)));
    // ALWAYS at ../../../rtl/cpu_lite/altor32_lite.v:1356
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__load_result_r = 0;
    if (((0x24 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			   >> 0x1a))) | (0x23 == (0x3f 
						  & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						     >> 0x1a))))) {
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__load_result_r 
	    = ((2 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mem_offset_q))
	        ? ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mem_offset_q))
		    ? ((0xffffff00 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__load_result_r) 
		       | (0xff & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_dat_i))
		    : ((0xffffff00 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__load_result_r) 
		       | (0xff & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_dat_i 
				  >> 8)))) : ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mem_offset_q))
					       ? ((0xffffff00 
						   & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__load_result_r) 
						  | (0xff 
						     & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_dat_i 
							>> 0x10)))
					       : ((0xffffff00 
						   & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__load_result_r) 
						  | (0xff 
						     & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_dat_i 
							>> 0x18)))));
	if (((0x24 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			       >> 0x1a))) & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__load_result_r 
					     >> 7))) {
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__load_result_r 
		= (0xffffff00 | vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__load_result_r);
	}
    } else {
	if (((0x26 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			       >> 0x1a))) | (0x25 == 
					     (0x3f 
					      & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						 >> 0x1a))))) {
	    if ((0 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mem_offset_q))) {
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__load_result_r 
		    = ((0xffff0000 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__load_result_r) 
		       | (0xffff & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_dat_i 
				    >> 0x10)));
	    } else {
		if ((2 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mem_offset_q))) {
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__load_result_r 
			= ((0xffff0000 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__load_result_r) 
			   | (0xffff & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_dat_i));
		}
	    }
	    if (((0x26 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				   >> 0x1a))) & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__load_result_r 
						 >> 0xf))) {
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__load_result_r 
		    = (0xffff0000 | vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__load_result_r);
	    }
	} else {
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__load_result_r 
		= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_dat_i;
	}
    }
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__w_write_en 
	= (((4 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__state_q)) 
	    & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_ack_i)) 
	   | (5 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__state_q)));
}

void Vtop_altor32_lite__I10000000::_settle__TOP__v__u_cpu__u1_cpu__u_exec__10(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            Vtop_altor32_lite__I10000000::_settle__TOP__v__u_cpu__u1_cpu__u_exec__10\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../rtl/cpu_lite/altor32_lite.v:1046
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_r = 0;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_link_r = 0;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_except_r = 0;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_target_r 
	= (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__pc_q 
	   + (0xfffffffc & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__target_int26_r 
			    << 2)));
    if (((((((((4 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			      >> 0x1a))) | (3 == (0x3f 
						  & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						     >> 0x1a)))) 
	      | (0 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			       >> 0x1a)))) | (1 == 
					      (0x3f 
					       & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						  >> 0x1a)))) 
	    | (0x12 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				>> 0x1a)))) | (0x11 
					       == (0x3f 
						   & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						      >> 0x1a)))) 
	  | (9 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			   >> 0x1a)))) | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sys_w))) {
	if ((4 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			   >> 0x1a)))) {
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_r 
		= (1 & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__sr_q 
			>> 9));
	} else {
	    if ((3 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			       >> 0x1a)))) {
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_r 
		    = (1 & (~ (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__sr_q 
			       >> 9)));
	    } else {
		if ((0 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				   >> 0x1a)))) {
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_r = 1;
		} else {
		    if ((1 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				       >> 0x1a)))) {
			vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_link_r = 1;
			vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_r = 1;
		    } else {
			if ((0x12 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					      >> 0x1a)))) {
			    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_link_r = 1;
			    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_r = 1;
			    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_target_r 
				= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o;
			} else {
			    if ((0x11 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						  >> 0x1a)))) {
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_r = 1;
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_target_r 
				    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o;
			    } else {
				if ((9 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						   >> 0x1a)))) {
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_r = 1;
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_target_r 
					= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__epc_q;
				} else {
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_r = 1;
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_except_r = 1;
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_target_r = 0x10000400;
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	if (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_trap_w) {
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_r = 1;
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_except_r = 1;
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__branch_target_r = 0x10000600;
	}
    }
    // ALWAYS at ../../../rtl/cpu_lite/altor32_lite.v:407
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__store_inst_r 
	= (((0x36 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			      >> 0x1a))) | (0x37 == 
					    (0x3f & 
					     (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					      >> 0x1a)))) 
	   | (0x35 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			       >> 0x1a))));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mem_addr_r 
	= (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o 
	   + ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__store_inst_r)
	       ? vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__store_int32_r
	       : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__int32_r));
    // ALWAYS at ../../../rtl/cpu_lite/altor32_lite.v:330
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mxspr_uint16_r 
	= (0xffff & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o 
		     | (0x7ff & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q)));
    // ALWAYS at ../../../rtl/cpu_lite/altor32_lite.v:1356
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__load_result_r = 0;
    if (((0x24 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			   >> 0x1a))) | (0x23 == (0x3f 
						  & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						     >> 0x1a))))) {
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__load_result_r 
	    = ((2 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mem_offset_q))
	        ? ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mem_offset_q))
		    ? ((0xffffff00 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__load_result_r) 
		       | (0xff & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_dat_i))
		    : ((0xffffff00 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__load_result_r) 
		       | (0xff & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_dat_i 
				  >> 8)))) : ((1 & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mem_offset_q))
					       ? ((0xffffff00 
						   & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__load_result_r) 
						  | (0xff 
						     & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_dat_i 
							>> 0x10)))
					       : ((0xffffff00 
						   & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__load_result_r) 
						  | (0xff 
						     & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_dat_i 
							>> 0x18)))));
	if (((0x24 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			       >> 0x1a))) & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__load_result_r 
					     >> 7))) {
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__load_result_r 
		= (0xffffff00 | vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__load_result_r);
	}
    } else {
	if (((0x26 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			       >> 0x1a))) | (0x25 == 
					     (0x3f 
					      & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						 >> 0x1a))))) {
	    if ((0 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mem_offset_q))) {
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__load_result_r 
		    = ((0xffff0000 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__load_result_r) 
		       | (0xffff & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_dat_i 
				    >> 0x10)));
	    } else {
		if ((2 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mem_offset_q))) {
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__load_result_r 
			= ((0xffff0000 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__load_result_r) 
			   | (0xffff & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_dat_i));
		}
	    }
	    if (((0x26 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				   >> 0x1a))) & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__load_result_r 
						 >> 0xf))) {
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__load_result_r 
		    = (0xffff0000 | vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__load_result_r);
	    }
	} else {
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__load_result_r 
		= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_dat_i;
	}
    }
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__w_write_en 
	= (((4 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__state_q)) 
	    & (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_ack_i)) 
	   | (5 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__state_q)));
    // ALWAYS at ../../../rtl/cpu_lite/altor32_lite.v:417
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vtableidx1 
	= (((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__store_inst_r) 
	    << 7) | (((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__load_inst_r) 
		      << 6) | (((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_ack_i) 
				<< 5) | (((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.enable_i) 
					  << 4) | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__state_q)))));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_state_r 
	= (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vtable1___PVT__next_state_r)
	[(IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vtableidx1)];
    // ALWAYS at ../../../rtl/cpu_lite/altor32_lite.v:743
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_epc_r 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__epc_q;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_esr_r 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__esr_q;
    if ((0x30 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			  >> 0x1a)))) {
	if ((0x20 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mxspr_uint16_r))) {
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_epc_r 
		= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o;
	} else {
	    if ((0x40 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mxspr_uint16_r))) {
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_esr_r 
		    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o;
	    }
	}
    }
    // ALWAYS at ../../../rtl/cpu_lite/altor32_lite.v:696
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__sr_q;
    if (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.flag_update_o) {
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r 
	    = ((0xfffffdff & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r) 
	       | ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__compare_result_r) 
		  << 9));
    }
    if (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_update_o) {
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r 
	    = ((0xfffffbff & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r) 
	       | ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_o) 
		  << 0xa));
    }
    if ((0x30 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			  >> 0x1a)))) {
	if ((0x11 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mxspr_uint16_r))) {
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r 
		= ((0xfffffdff & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r) 
		   | (0x200 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o));
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r 
		= ((0xfffffbff & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r) 
		   | (0x400 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o));
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r 
		= ((0xfffffffb & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r) 
		   | (4 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o));
	}
    } else {
	if ((9 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			   >> 0x1a)))) {
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r 
		= ((0xfffffdff & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r) 
		   | (0x200 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__esr_q));
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r 
		= ((0xfffffbff & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r) 
		   | (0x400 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__esr_q));
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r 
		= ((0xfffffffb & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r) 
		   | (4 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__esr_q));
	} else {
	    if (((0x39 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				   >> 0x1a))) | (0x2f 
						 == 
						 (0x3f 
						  & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						     >> 0x1a))))) {
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r 
		    = ((0xfffffdff & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r) 
		       | ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__compare_result_r) 
			  << 9));
	    }
	}
    }
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rd_i 
	= ((4 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__state_q))
	    ? vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__load_result_r
	    : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.p_o);
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.wr_i 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__w_write_en;
}

void Vtop_altor32_lite__I10000000::_combo__TOP__v__u_cpu__u1_cpu__u_exec__11(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            Vtop_altor32_lite__I10000000::_combo__TOP__v__u_cpu__u1_cpu__u_exec__11\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../rtl/cpu_lite/altor32_lite.v:417
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vtableidx1 
	= (((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__store_inst_r) 
	    << 7) | (((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__load_inst_r) 
		      << 6) | (((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.mem_ack_i) 
				<< 5) | (((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.enable_i) 
					  << 4) | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__state_q)))));
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_state_r 
	= (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vtable1___PVT__next_state_r)
	[(IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__Vtableidx1)];
    // ALWAYS at ../../../rtl/cpu_lite/altor32_lite.v:743
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_epc_r 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__epc_q;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_esr_r 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__esr_q;
    if ((0x30 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			  >> 0x1a)))) {
	if ((0x20 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mxspr_uint16_r))) {
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_epc_r 
		= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o;
	} else {
	    if ((0x40 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mxspr_uint16_r))) {
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_esr_r 
		    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o;
	    }
	}
    }
    // ALWAYS at ../../../rtl/cpu_lite/altor32_lite.v:696
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__sr_q;
    if (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.flag_update_o) {
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r 
	    = ((0xfffffdff & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r) 
	       | ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__compare_result_r) 
		  << 9));
    }
    if (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_update_o) {
	vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r 
	    = ((0xfffffbff & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r) 
	       | ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.c_o) 
		  << 0xa));
    }
    if ((0x30 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			  >> 0x1a)))) {
	if ((0x11 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mxspr_uint16_r))) {
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r 
		= ((0xfffffdff & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r) 
		   | (0x200 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o));
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r 
		= ((0xfffffbff & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r) 
		   | (0x400 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o));
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r 
		= ((0xfffffffb & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r) 
		   | (4 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o));
	}
    } else {
	if ((9 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			   >> 0x1a)))) {
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r 
		= ((0xfffffdff & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r) 
		   | (0x200 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__esr_q));
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r 
		= ((0xfffffbff & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r) 
		   | (0x400 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__esr_q));
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r 
		= ((0xfffffffb & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r) 
		   | (4 & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__esr_q));
	} else {
	    if (((0x39 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				   >> 0x1a))) | (0x2f 
						 == 
						 (0x3f 
						  & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						     >> 0x1a))))) {
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r 
		    = ((0xfffffdff & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r) 
		       | ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__compare_result_r) 
			  << 9));
	    }
	}
    }
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rd_i 
	= ((4 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__state_q))
	    ? vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__load_result_r
	    : vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__alu.p_o);
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.wr_i 
	= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__w_write_en;
    // ALWAYS at ../../../rtl/cpu_lite/altor32_lite.v:776
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_func_r = 0;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r = 0;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_b_r = 0;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 0;
    if (((((((((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_add_w) 
	       | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_addc_w)) 
	      | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_and_w)) 
	     | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_or_w)) 
	    | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sll_w)) 
	   | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sw_ra)) 
	  | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_srl_w)) 
	 | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sub_w))) {
	if (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_add_w) {
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_func_r = 4;
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
		= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o;
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_b_r 
		= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o;
	} else {
	    if (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_addc_w) {
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_func_r = 5;
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
		    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o;
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_b_r 
		    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o;
	    } else {
		if (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_and_w) {
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_func_r = 7;
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
			= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o;
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_b_r 
			= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o;
		} else {
		    if (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_or_w) {
			vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_func_r = 8;
			vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
			    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o;
			vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
			vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_b_r 
			    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o;
		    } else {
			if (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sll_w) {
			    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_func_r = 1;
			    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
				= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o;
			    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
			    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_b_r 
				= (0x3f & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o);
			} else {
			    if (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sw_ra) {
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_func_r = 3;
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
				    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o;
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_b_r 
				    = (0x3f & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o);
			    } else {
				if (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_srl_w) {
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_func_r = 2;
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
					= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o;
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_b_r 
					= (0x3f & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o);
				} else {
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_func_r = 6;
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
					= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o;
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_b_r 
					= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o;
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	if (((((((((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_xor_w) 
		   | ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_mul_w) 
		      | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_mulu_w))) 
		  | (0x27 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				      >> 0x1a)))) | 
		 (0x29 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				   >> 0x1a)))) | (1 
						  == 
						  (0x3f 
						   & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						      >> 0x1a)))) 
	       | (0x12 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				   >> 0x1a)))) | (0x2d 
						  == 
						  (0x3f 
						   & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						      >> 0x1a)))) 
	     | (6 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			      >> 0x1a))))) {
	    if (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_xor_w) {
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_func_r = 9;
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
		    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o;
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_b_r 
		    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o;
	    } else {
		if (((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_mul_w) 
		     | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_mulu_w))) {
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
		} else {
		    if ((0x27 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					  >> 0x1a)))) {
			vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_func_r = 4;
			vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
			    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o;
			vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_b_r 
			    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__int32_r;
			vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
		    } else {
			if ((0x29 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					      >> 0x1a)))) {
			    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_func_r = 7;
			    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
				= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o;
			    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_b_r 
				= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__uint32_r;
			    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
			} else {
			    if ((1 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					       >> 0x1a)))) {
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
				    = ((IData)(4) + vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__pc_q);
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
			    } else {
				if ((0x12 == (0x3f 
					      & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						 >> 0x1a)))) {
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
					= ((IData)(4) 
					   + vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__pc_q);
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
				} else {
				    if ((0x2d == (0x3f 
						  & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						     >> 0x1a)))) {
					if ((0x11 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mxspr_uint16_r))) {
					    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r = 0;
					    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
					    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
						= (
						   (0xfffffdff 
						    & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r) 
						   | (0x200 
						      & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r));
					    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
						= (
						   (0xfffffbff 
						    & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r) 
						   | (0x400 
						      & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r));
					    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
						= (
						   (0xfffffffb 
						    & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r) 
						   | (4 
						      & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r));
					} else {
					    if ((0x20 
						 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mxspr_uint16_r))) {
						vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
						    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__epc_q;
						vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
					    } else {
						if (
						    (0x40 
						     == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mxspr_uint16_r))) {
						    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r = 0;
						    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
						    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
							= 
							((0xfffffdff 
							  & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r) 
							 | (0x200 
							    & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__esr_q));
						    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
							= 
							((0xfffffbff 
							  & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r) 
							 | (0x400 
							    & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__esr_q));
						    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
							= 
							((0xfffffffb 
							  & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r) 
							 | (4 
							    & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__esr_q));
						}
					    }
					}
				    } else {
					vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
					    = (0xffff0000 
					       & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						  << 0x10));
					vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
				    }
				}
			    }
			}
		    }
		}
	    }
	} else {
	    if (((((((((0x2a == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					 >> 0x1a))) 
		       | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_slli_w)) 
		      | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_srai_w)) 
		     | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_srli_w)) 
		    | (0x2f == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					>> 0x1a)))) 
		   | (0x39 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				       >> 0x1a)))) 
		  | ((((((0x24 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					   >> 0x1a))) 
			 | (0x26 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					     >> 0x1a)))) 
			| (0x22 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					    >> 0x1a)))) 
		       | (0x23 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					   >> 0x1a)))) 
		      | (0x25 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					  >> 0x1a)))) 
		     | (0x21 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					 >> 0x1a))))) 
		 | (0x2b == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				     >> 0x1a))))) {
		if ((0x2a == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				      >> 0x1a)))) {
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_func_r = 8;
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
			= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o;
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_b_r 
			= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__uint32_r;
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
		} else {
		    if (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_slli_w) {
			vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_func_r = 1;
			vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
			    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o;
			vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_b_r 
			    = (0x3f & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q);
			vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
		    } else {
			if (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_srai_w) {
			    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_func_r = 3;
			    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
				= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o;
			    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_b_r 
				= (0x3f & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q);
			    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
			} else {
			    if (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_srli_w) {
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_func_r = 2;
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
				    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o;
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_b_r 
				    = (0x3f & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q);
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
			    } else {
				if ((0x2f == (0x3f 
					      & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						 >> 0x1a)))) {
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_func_r = 0xa;
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
					= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o;
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_b_r 
					= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__int32_r;
				} else {
				    if ((0x39 == (0x3f 
						  & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						     >> 0x1a)))) {
					vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_func_r = 0xa;
					vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
					    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o;
					vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_b_r 
					    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o;
				    } else {
					if (((((((0x24 
						  == 
						  (0x3f 
						   & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						      >> 0x1a))) 
						 | (0x26 
						    == 
						    (0x3f 
						     & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
							>> 0x1a)))) 
						| (0x22 
						   == 
						   (0x3f 
						    & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						       >> 0x1a)))) 
					       | (0x23 
						  == 
						  (0x3f 
						   & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						      >> 0x1a)))) 
					      | (0x25 
						 == 
						 (0x3f 
						  & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						     >> 0x1a)))) 
					     | (0x21 
						== 
						(0x3f 
						 & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						    >> 0x1a))))) {
					    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
					} else {
					    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_func_r = 9;
					    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
						= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o;
					    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_b_r 
						= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__int32_r;
					    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
}

void Vtop_altor32_lite__I10000000::_settle__TOP__v__u_cpu__u1_cpu__u_exec__12(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            Vtop_altor32_lite__I10000000::_settle__TOP__v__u_cpu__u1_cpu__u_exec__12\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../rtl/cpu_lite/altor32_lite.v:776
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_func_r = 0;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r = 0;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_b_r = 0;
    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 0;
    if (((((((((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_add_w) 
	       | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_addc_w)) 
	      | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_and_w)) 
	     | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_or_w)) 
	    | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sll_w)) 
	   | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sw_ra)) 
	  | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_srl_w)) 
	 | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sub_w))) {
	if (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_add_w) {
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_func_r = 4;
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
		= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o;
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
	    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_b_r 
		= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o;
	} else {
	    if (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_addc_w) {
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_func_r = 5;
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
		    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o;
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_b_r 
		    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o;
	    } else {
		if (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_and_w) {
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_func_r = 7;
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
			= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o;
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_b_r 
			= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o;
		} else {
		    if (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_or_w) {
			vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_func_r = 8;
			vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
			    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o;
			vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
			vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_b_r 
			    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o;
		    } else {
			if (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sll_w) {
			    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_func_r = 1;
			    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
				= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o;
			    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
			    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_b_r 
				= (0x3f & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o);
			} else {
			    if (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_sw_ra) {
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_func_r = 3;
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
				    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o;
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_b_r 
				    = (0x3f & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o);
			    } else {
				if (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_srl_w) {
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_func_r = 2;
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
					= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o;
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_b_r 
					= (0x3f & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o);
				} else {
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_func_r = 6;
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
					= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o;
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_b_r 
					= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o;
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	if (((((((((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_xor_w) 
		   | ((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_mul_w) 
		      | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_mulu_w))) 
		  | (0x27 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				      >> 0x1a)))) | 
		 (0x29 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				   >> 0x1a)))) | (1 
						  == 
						  (0x3f 
						   & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						      >> 0x1a)))) 
	       | (0x12 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				   >> 0x1a)))) | (0x2d 
						  == 
						  (0x3f 
						   & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						      >> 0x1a)))) 
	     | (6 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
			      >> 0x1a))))) {
	    if (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_xor_w) {
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_func_r = 9;
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
		    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o;
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
		vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_b_r 
		    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o;
	    } else {
		if (((IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_mul_w) 
		     | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_mulu_w))) {
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
		} else {
		    if ((0x27 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					  >> 0x1a)))) {
			vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_func_r = 4;
			vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
			    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o;
			vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_b_r 
			    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__int32_r;
			vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
		    } else {
			if ((0x29 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					      >> 0x1a)))) {
			    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_func_r = 7;
			    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
				= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o;
			    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_b_r 
				= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__uint32_r;
			    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
			} else {
			    if ((1 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					       >> 0x1a)))) {
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
				    = ((IData)(4) + vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__pc_q);
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
			    } else {
				if ((0x12 == (0x3f 
					      & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						 >> 0x1a)))) {
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
					= ((IData)(4) 
					   + vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__pc_q);
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
				} else {
				    if ((0x2d == (0x3f 
						  & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						     >> 0x1a)))) {
					if ((0x11 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mxspr_uint16_r))) {
					    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r = 0;
					    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
					    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
						= (
						   (0xfffffdff 
						    & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r) 
						   | (0x200 
						      & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r));
					    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
						= (
						   (0xfffffbff 
						    & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r) 
						   | (0x400 
						      & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r));
					    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
						= (
						   (0xfffffffb 
						    & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r) 
						   | (4 
						      & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__next_sr_r));
					} else {
					    if ((0x20 
						 == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mxspr_uint16_r))) {
						vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
						    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__epc_q;
						vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
					    } else {
						if (
						    (0x40 
						     == (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__mxspr_uint16_r))) {
						    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r = 0;
						    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
						    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
							= 
							((0xfffffdff 
							  & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r) 
							 | (0x200 
							    & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__esr_q));
						    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
							= 
							((0xfffffbff 
							  & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r) 
							 | (0x400 
							    & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__esr_q));
						    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
							= 
							((0xfffffffb 
							  & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r) 
							 | (4 
							    & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__esr_q));
						}
					    }
					}
				    } else {
					vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
					    = (0xffff0000 
					       & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						  << 0x10));
					vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
				    }
				}
			    }
			}
		    }
		}
	    }
	} else {
	    if (((((((((0x2a == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					 >> 0x1a))) 
		       | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_slli_w)) 
		      | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_srai_w)) 
		     | (IData)(vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_srli_w)) 
		    | (0x2f == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					>> 0x1a)))) 
		   | (0x39 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				       >> 0x1a)))) 
		  | ((((((0x24 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					   >> 0x1a))) 
			 | (0x26 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					     >> 0x1a)))) 
			| (0x22 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					    >> 0x1a)))) 
		       | (0x23 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					   >> 0x1a)))) 
		      | (0x25 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					  >> 0x1a)))) 
		     | (0x21 == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
					 >> 0x1a))))) 
		 | (0x2b == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				     >> 0x1a))))) {
		if ((0x2a == (0x3f & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
				      >> 0x1a)))) {
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_func_r = 8;
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
			= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o;
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_b_r 
			= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__uint32_r;
		    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
		} else {
		    if (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_slli_w) {
			vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_func_r = 1;
			vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
			    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o;
			vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_b_r 
			    = (0x3f & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q);
			vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
		    } else {
			if (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_srai_w) {
			    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_func_r = 3;
			    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
				= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o;
			    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_b_r 
				= (0x3f & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q);
			    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
			} else {
			    if (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__inst_srli_w) {
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_func_r = 2;
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
				    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o;
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_b_r 
				    = (0x3f & vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q);
				vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
			    } else {
				if ((0x2f == (0x3f 
					      & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						 >> 0x1a)))) {
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_func_r = 0xa;
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
					= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o;
				    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_b_r 
					= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__int32_r;
				} else {
				    if ((0x39 == (0x3f 
						  & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						     >> 0x1a)))) {
					vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_func_r = 0xa;
					vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
					    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o;
					vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_b_r 
					    = vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_rb_o;
				    } else {
					if (((((((0x24 
						  == 
						  (0x3f 
						   & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						      >> 0x1a))) 
						 | (0x26 
						    == 
						    (0x3f 
						     & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
							>> 0x1a)))) 
						| (0x22 
						   == 
						   (0x3f 
						    & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						       >> 0x1a)))) 
					       | (0x23 
						  == 
						  (0x3f 
						   & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						      >> 0x1a)))) 
					      | (0x25 
						 == 
						 (0x3f 
						  & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						     >> 0x1a)))) 
					     | (0x21 
						== 
						(0x3f 
						 & (vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__opcode_q 
						    >> 0x1a))))) {
					    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
					} else {
					    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_func_r = 9;
					    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_a_r 
						= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec__genblk1__DOT__REGFILE_SIM__DOT__reg_bank.reg_ra_o;
					    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__alu_input_b_r 
						= vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__int32_r;
					    vlSymsp->TOP__v__u_cpu__u1_cpu__u_exec.__PVT__write_rd_r = 1;
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
}
