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

struct t605;
struct t74;
struct t74_marshaled;
struct t585;
struct t377;

#include "codegen/il2cpp-codegen.h"

extern "C" void m3071_gshared (t605 * __this, t74 * p0, t585 * p1, float p2, const MethodInfo* method);
#define m3071(__this, p0, p1, p2, method) (( void (*) (t605 *, t74 *, t585 *, float, const MethodInfo*))m3071_gshared)(__this, p0, p1, p2, method)
extern "C" void m16327_gshared (t605 * __this, t377* p0, const MethodInfo* method);
#define m16327(__this, p0, method) (( void (*) (t605 *, t377*, const MethodInfo*))m16327_gshared)(__this, p0, method)
