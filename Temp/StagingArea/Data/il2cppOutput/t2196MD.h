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

struct t2196;
struct t12;
struct t585;
struct t377;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16318_gshared (t2196 * __this, t12 * p0, t585 * p1, const MethodInfo* method);
#define m16318(__this, p0, p1, method) (( void (*) (t2196 *, t12 *, t585 *, const MethodInfo*))m16318_gshared)(__this, p0, p1, method)
extern "C" void m16319_gshared (t2196 * __this, t377* p0, const MethodInfo* method);
#define m16319(__this, p0, method) (( void (*) (t2196 *, t377*, const MethodInfo*))m16319_gshared)(__this, p0, method)
extern "C" bool m16320_gshared (t2196 * __this, t12 * p0, t585 * p1, const MethodInfo* method);
#define m16320(__this, p0, p1, method) (( bool (*) (t2196 *, t12 *, t585 *, const MethodInfo*))m16320_gshared)(__this, p0, p1, method)
