#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

struct t2114;
struct t12;

#include "codegen/il2cpp-codegen.h"

extern "C" void m15450_gshared (t2114 * __this, const MethodInfo* method);
#define m15450(__this, method) (( void (*) (t2114 *, const MethodInfo*))m15450_gshared)(__this, method)
extern "C" void m15451_gshared (t12 * __this , const MethodInfo* method);
#define m15451(__this , method) (( void (*) (t12 * , const MethodInfo*))m15451_gshared)(__this , method)
extern "C" int32_t m15452_gshared (t2114 * __this, t12 * p0, t12 * p1, const MethodInfo* method);
#define m15452(__this, p0, p1, method) (( int32_t (*) (t2114 *, t12 *, t12 *, const MethodInfo*))m15452_gshared)(__this, p0, p1, method)
extern "C" t2114 * m15453_gshared (t12 * __this , const MethodInfo* method);
#define m15453(__this , method) (( t2114 * (*) (t12 * , const MethodInfo*))m15453_gshared)(__this , method)
