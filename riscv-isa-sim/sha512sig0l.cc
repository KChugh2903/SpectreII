// See LICENSE for license details.

#include "insn_template.h"
#include "insn_macros.h"

#define DECODE_MACRO_USAGE_LOGGED 0

reg_t fast_rv32i_sha512sig0l(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_SHA512SIG0L));
  #include "insns/sha512sig0l.h"
  trace_opcode(p,  MATCH_SHA512SIG0L, insn);
  #undef xlen
  return npc;
}

reg_t fast_rv64i_sha512sig0l(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_SHA512SIG0L));
  #include "insns/sha512sig0l.h"
  trace_opcode(p,  MATCH_SHA512SIG0L, insn);
  #undef xlen
  return npc;
}

#undef DECODE_MACRO_USAGE_LOGGED
#define DECODE_MACRO_USAGE_LOGGED 1

reg_t logged_rv32i_sha512sig0l(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_SHA512SIG0L));
  #include "insns/sha512sig0l.h"
  trace_opcode(p,  MATCH_SHA512SIG0L, insn);
  #undef xlen
  return npc;
}

reg_t logged_rv64i_sha512sig0l(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_SHA512SIG0L));
  #include "insns/sha512sig0l.h"
  trace_opcode(p,  MATCH_SHA512SIG0L, insn);
  #undef xlen
  return npc;
}

#undef CHECK_REG
#define CHECK_REG(reg) require((reg) < 16)

#undef DECODE_MACRO_USAGE_LOGGED
#define DECODE_MACRO_USAGE_LOGGED 0

reg_t fast_rv32e_sha512sig0l(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_SHA512SIG0L));
  #include "insns/sha512sig0l.h"
  trace_opcode(p,  MATCH_SHA512SIG0L, insn);
  #undef xlen
  return npc;
}

reg_t fast_rv64e_sha512sig0l(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_SHA512SIG0L));
  #include "insns/sha512sig0l.h"
  trace_opcode(p,  MATCH_SHA512SIG0L, insn);
  #undef xlen
  return npc;
}

#undef DECODE_MACRO_USAGE_LOGGED
#define DECODE_MACRO_USAGE_LOGGED 1

reg_t logged_rv32e_sha512sig0l(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_SHA512SIG0L));
  #include "insns/sha512sig0l.h"
  trace_opcode(p,  MATCH_SHA512SIG0L, insn);
  #undef xlen
  return npc;
}

reg_t logged_rv64e_sha512sig0l(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_SHA512SIG0L));
  #include "insns/sha512sig0l.h"
  trace_opcode(p,  MATCH_SHA512SIG0L, insn);
  #undef xlen
  return npc;
}
