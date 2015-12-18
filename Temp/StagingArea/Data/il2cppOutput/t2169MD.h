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

struct t2169;

#include "codegen/il2cpp-codegen.h"
#include "t420.h"

extern "C" void m16011_gshared (t2169 * __this, const MethodInfo* method);
#define m16011(__this, method) (( void (*) (t2169 *, const MethodInfo*))m16011_gshared)(__this, method)
extern "C" int32_t m16012_gshared (t2169 * __this, t420  p0, t420  p1, const MethodInfo* method);
#define m16012(__this, p0, p1, method) (( int32_t (*) (t2169 *, t420 , t420 , const MethodInfo*))m16012_gshared)(__this, p0, p1, method)
