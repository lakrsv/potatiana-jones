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

struct t2269;
struct t12;

#include "codegen/il2cpp-codegen.h"

extern "C" void m17016_gshared (t2269 * __this, const MethodInfo* method);
#define m17016(__this, method) (( void (*) (t2269 *, const MethodInfo*))m17016_gshared)(__this, method)
extern "C" int32_t m17017_gshared (t2269 * __this, t12 * p0, t12 * p1, const MethodInfo* method);
#define m17017(__this, p0, p1, method) (( int32_t (*) (t2269 *, t12 *, t12 *, const MethodInfo*))m17017_gshared)(__this, p0, p1, method)
