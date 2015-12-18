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

struct t2210;
struct t585;
struct t48;
struct t12;
struct t561;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16517_gshared (t2210 * __this, const MethodInfo* method);
#define m16517(__this, method) (( void (*) (t2210 *, const MethodInfo*))m16517_gshared)(__this, method)
extern "C" t585 * m16518_gshared (t2210 * __this, t48* p0, t12 * p1, const MethodInfo* method);
#define m16518(__this, p0, p1, method) (( t585 * (*) (t2210 *, t48*, t12 *, const MethodInfo*))m16518_gshared)(__this, p0, p1, method)
extern "C" t561 * m16519_gshared (t2210 * __this, t12 * p0, t585 * p1, const MethodInfo* method);
#define m16519(__this, p0, p1, method) (( t561 * (*) (t2210 *, t12 *, t585 *, const MethodInfo*))m16519_gshared)(__this, p0, p1, method)
