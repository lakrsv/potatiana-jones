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

struct t1990;

#include "codegen/il2cpp-codegen.h"
#include "t252.h"

extern "C" void m13599_gshared (t1990 * __this, const MethodInfo* method);
#define m13599(__this, method) (( void (*) (t1990 *, const MethodInfo*))m13599_gshared)(__this, method)
extern "C" int32_t m13600_gshared (t1990 * __this, t252  p0, t252  p1, const MethodInfo* method);
#define m13600(__this, p0, p1, method) (( int32_t (*) (t1990 *, t252 , t252 , const MethodInfo*))m13600_gshared)(__this, p0, p1, method)
