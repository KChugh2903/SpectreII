// See LICENSE for license details.

#include "insn_template.h"
#include "insn_macros.h"

#define DECODE_MACRO_USAGE_LOGGED 0

reg_t fast_rv32i_vamoorei16_v(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VAMOOREI16_V));
  #include "insns/vamoorei16_v.h"
  trace_opcode(p,  MATCH_VAMOOREI16_V, insn);
  #undef xlen
  return npc;
}

reg_t fast_rv64i_vamoorei16_v(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VAMOOREI16_V));
  #include "insns/vamoorei16_v.h"
  trace_opcode(p,  MATCH_VAMOOREI16_V, insn);
  #undef xlen
  return npc;
}

#undef DECODE_MACRO_USAGE_LOGGED
#define DECODE_MACRO_USAGE_LOGGED 1

reg_t logged_rv32i_vamoorei16_v(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VAMOOREI16_V));
  #include "insns/vamoorei16_v.h"
  trace_opcode(p,  MATCH_VAMOOREI16_V, insn);
  #undef xlen
  return npc;
}

reg_t logged_rv64i_vamoorei16_v(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VAMOOREI16_V));
  #include "insns/vamoorei16_v.h"
  trace_opcode(p,  MATCH_VAMOOREI16_V, insn);
  #undef xlen
  return npc;
}

#undef CHECK_REG
#define CHECK_REG(reg) require((reg) < 16)

#undef DECODE_MACRO_USAGE_LOGGED
#define DECODE_MACRO_USAGE_LOGGED 0

reg_t fast_rv32e_vamoorei16_v(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VAMOOREI16_V));
  #include "insns/vamoorei16_v.h"
  trace_opcode(p,  MATCH_VAMOOREI16_V, insn);
  #undef xlen
  return npc;
}

reg_t fast_rv64e_vamoorei16_v(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VAMOOREI16_V));
  #include "insns/vamoorei16_v.h"
  trace_opcode(p,  MATCH_VAMOOREI16_V, insn);
  #undef xlen
  return npc;
}

#undef DECODE_MACRO_USAGE_LOGGED
#define DECODE_MACRO_USAGE_LOGGED 1

reg_t logged_rv32e_vamoorei16_v(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VAMOOREI16_V));
  #include "insns/vamoorei16_v.h"
  trace_opcode(p,  MATCH_VAMOOREI16_V, insn);
  #undef xlen
  return npc;
}

reg_t logged_rv64e_vamoorei16_v(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VAMOOREI16_V));
  #include "insns/vamoorei16_v.h"
  trace_opcode(p,  MATCH_VAMOOREI16_V, insn);
  #undef xlen
  return npc;
}
