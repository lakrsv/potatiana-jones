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

struct t12;
struct t48;

#include "codegen/il2cpp-codegen.h"
#include "t2226.h"

extern "C" void m16675_gshared (t2226 * __this, t12 * p0, bool p1, const MethodInfo* method);
#define m16675(__this, p0, p1, method) (( void (*) (t2226 *, t12 *, bool, const MethodInfo*))m16675_gshared)(__this, p0, p1, method)
extern "C" t12 * m16676_gshared (t2226 * __this, const MethodInfo* method);
#define m16676(__this, method) (( t12 * (*) (t2226 *, const MethodInfo*))m16676_gshared)(__this, method)
extern "C" void m16677_gshared (t2226 * __this, t12 * p0, const MethodInfo* method);
#define m16677(__this, p0, method) (( void (*) (t2226 *, t12 *, const MethodInfo*))m16677_gshared)(__this, p0, method)
extern "C" bool m16678_gshared (t2226 * __this, const MethodInfo* method);
#define m16678(__this, method) (( bool (*) (t2226 *, const MethodInfo*))m16678_gshared)(__this, method)
extern "C" void m16679_gshared (t2226 * __this, bool p0, const MethodInfo* method);
#define m16679(__this, p0, method) (( void (*) (t2226 *, bool, const MethodInfo*))m16679_gshared)(__this, p0, method)
extern "C" t48* m16680_gshared (t2226 * __this, const MethodInfo* method);
#define m16680(__this, method) (( t48* (*) (t2226 *, const MethodInfo*))m16680_gshared)(__this, method)
