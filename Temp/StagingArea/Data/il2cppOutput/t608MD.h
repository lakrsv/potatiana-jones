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

struct t608;
struct t74;
struct t74_marshaled;
struct t585;
struct t377;

#include "codegen/il2cpp-codegen.h"

extern "C" void m3074_gshared (t608 * __this, t74 * p0, t585 * p1, bool p2, const MethodInfo* method);
#define m3074(__this, p0, p1, p2, method) (( void (*) (t608 *, t74 *, t585 *, bool, const MethodInfo*))m3074_gshared)(__this, p0, p1, p2, method)
extern "C" void m16334_gshared (t608 * __this, t377* p0, const MethodInfo* method);
#define m16334(__this, p0, method) (( void (*) (t608 *, t377*, const MethodInfo*))m16334_gshared)(__this, p0, method)
