// See LICENSE for license details.

#include "insn_template.h"
#include "insn_macros.h"

#define DECODE_MACRO_USAGE_LOGGED 0

reg_t fast_rv32i_vwmul_vv(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VWMUL_VV));
  #include "insns/vwmul_vv.h"
  trace_opcode(p,  MATCH_VWMUL_VV, insn);
  #undef xlen
  return npc;
}

reg_t fast_rv64i_vwmul_vv(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VWMUL_VV));
  #include "insns/vwmul_vv.h"
  trace_opcode(p,  MATCH_VWMUL_VV, insn);
  #undef xlen
  return npc;
}

#undef DECODE_MACRO_USAGE_LOGGED
#define DECODE_MACRO_USAGE_LOGGED 1

reg_t logged_rv32i_vwmul_vv(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VWMUL_VV));
  #include "insns/vwmul_vv.h"
  trace_opcode(p,  MATCH_VWMUL_VV, insn);
  #undef xlen
  return npc;
}

reg_t logged_rv64i_vwmul_vv(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VWMUL_VV));
  #include "insns/vwmul_vv.h"
  trace_opcode(p,  MATCH_VWMUL_VV, insn);
  #undef xlen
  return npc;
}

#undef CHECK_REG
#define CHECK_REG(reg) require((reg) < 16)

#undef DECODE_MACRO_USAGE_LOGGED
#define DECODE_MACRO_USAGE_LOGGED 0

reg_t fast_rv32e_vwmul_vv(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VWMUL_VV));
  #include "insns/vwmul_vv.h"
  trace_opcode(p,  MATCH_VWMUL_VV, insn);
  #undef xlen
  return npc;
}

reg_t fast_rv64e_vwmul_vv(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VWMUL_VV));
  #include "insns/vwmul_vv.h"
  trace_opcode(p,  MATCH_VWMUL_VV, insn);
  #undef xlen
  return npc;
}

#undef DECODE_MACRO_USAGE_LOGGED
#define DECODE_MACRO_USAGE_LOGGED 1

reg_t logged_rv32e_vwmul_vv(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VWMUL_VV));
  #include "insns/vwmul_vv.h"
  trace_opcode(p,  MATCH_VWMUL_VV, insn);
  #undef xlen
  return npc;
}

reg_t logged_rv64e_vwmul_vv(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VWMUL_VV));
  #include "insns/vwmul_vv.h"
  trace_opcode(p,  MATCH_VWMUL_VV, insn);
  #undef xlen
  return npc;
}
