#pragma once

#include <stdint.h>
#include <stdbool.h>

bool getcf(void);
bool getpf(void);
bool getaf(void);
bool getzf(void);
bool getsf(void);
bool getof(void);

bool test_o(void);
bool test_b(void);
bool test_z(void);
bool test_s(void);
bool test_p(void);
bool test_be(void);
bool test_l(void);
bool test_le(void);

void jmp_rel16(int32_t rel16);
void jmpcc8(bool condition, int32_t imm8);
void jmpcc16(bool condition, int32_t imm16);
void jmpcc32(bool condition, int32_t imm32);
void loope(int32_t imm8s);
void loopne(int32_t imm8s);
void loop(int32_t imm8s);
void jcxz(int32_t imm8s);

void cmovcc16(bool condition, int32_t value, int32_t r);
void cmovcc32(bool condition, int32_t value, int32_t r);
int32_t get_stack_pointer(int32_t offset);
void adjust_stack_reg(int32_t adjustment);
void push16(int32_t imm16);
void push32(int32_t imm32);
int32_t pop16(void);
int32_t pop32s(void);
void pusha16(void);
void pusha32(void);
void setcc_reg(bool condition, int32_t r);
void setcc_mem(bool condition, int32_t addr);
void fxsave(uint32_t addr);
void fxrstor(uint32_t addr);
int32_t xchg8(int32_t data, int32_t r8);
int32_t xchg16(int32_t data, int32_t r16);
void xchg16r(int32_t r16);
int32_t xchg32(int32_t data, int32_t r32);
void xchg32r(int32_t r32);
