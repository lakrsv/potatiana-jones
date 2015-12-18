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

struct t2198;
struct t74;
struct t74_marshaled;
struct t585;
struct t12;
struct t377;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16325_gshared (t2198 * __this, t74 * p0, t585 * p1, t12 * p2, const MethodInfo* method);
#define m16325(__this, p0, p1, p2, method) (( void (*) (t2198 *, t74 *, t585 *, t12 *, const MethodInfo*))m16325_gshared)(__this, p0, p1, p2, method)
extern "C" void m16326_gshared (t2198 * __this, t377* p0, const MethodInfo* method);
#define m16326(__this, p0, method) (( void (*) (t2198 *, t377*, const MethodInfo*))m16326_gshared)(__this, p0, method)
