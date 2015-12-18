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

struct t1754;
struct t12;

#include "codegen/il2cpp-codegen.h"

extern "C" void m10523_gshared (t1754 * __this, const MethodInfo* method);
#define m10523(__this, method) (( void (*) (t1754 *, const MethodInfo*))m10523_gshared)(__this, method)
extern "C" int32_t m10524_gshared (t1754 * __this, t12 * p0, t12 * p1, const MethodInfo* method);
#define m10524(__this, p0, p1, method) (( int32_t (*) (t1754 *, t12 *, t12 *, const MethodInfo*))m10524_gshared)(__this, p0, p1, method)
