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

struct t606;
struct t74;
struct t74_marshaled;
struct t585;
struct t377;

#include "codegen/il2cpp-codegen.h"

extern "C" void m3072_gshared (t606 * __this, t74 * p0, t585 * p1, int32_t p2, const MethodInfo* method);
#define m3072(__this, p0, p1, p2, method) (( void (*) (t606 *, t74 *, t585 *, int32_t, const MethodInfo*))m3072_gshared)(__this, p0, p1, p2, method)
extern "C" void m16328_gshared (t606 * __this, t377* p0, const MethodInfo* method);
#define m16328(__this, p0, method) (( void (*) (t606 *, t377*, const MethodInfo*))m16328_gshared)(__this, p0, method)
