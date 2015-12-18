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

struct t2212;
struct t585;
struct t48;
struct t12;
struct t561;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16523_gshared (t2212 * __this, const MethodInfo* method);
#define m16523(__this, method) (( void (*) (t2212 *, const MethodInfo*))m16523_gshared)(__this, method)
extern "C" t585 * m16524_gshared (t2212 * __this, t48* p0, t12 * p1, const MethodInfo* method);
#define m16524(__this, p0, p1, method) (( t585 * (*) (t2212 *, t48*, t12 *, const MethodInfo*))m16524_gshared)(__this, p0, p1, method)
extern "C" t561 * m16525_gshared (t2212 * __this, t12 * p0, t585 * p1, const MethodInfo* method);
#define m16525(__this, p0, p1, method) (( t561 * (*) (t2212 *, t12 *, t585 *, const MethodInfo*))m16525_gshared)(__this, p0, p1, method)
