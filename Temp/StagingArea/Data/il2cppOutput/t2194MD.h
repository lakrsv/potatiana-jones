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

struct t2194;
struct t12;
struct t585;
struct t377;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16311_gshared (t2194 * __this, t12 * p0, t585 * p1, const MethodInfo* method);
#define m16311(__this, p0, p1, method) (( void (*) (t2194 *, t12 *, t585 *, const MethodInfo*))m16311_gshared)(__this, p0, p1, method)
extern "C" void m16312_gshared (t2194 * __this, t377* p0, const MethodInfo* method);
#define m16312(__this, p0, method) (( void (*) (t2194 *, t377*, const MethodInfo*))m16312_gshared)(__this, p0, method)
extern "C" bool m16313_gshared (t2194 * __this, t12 * p0, t585 * p1, const MethodInfo* method);
#define m16313(__this, p0, p1, method) (( bool (*) (t2194 *, t12 *, t585 *, const MethodInfo*))m16313_gshared)(__this, p0, p1, method)
