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

struct t2192;
struct t12;
struct t585;
struct t377;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16304_gshared (t2192 * __this, t12 * p0, t585 * p1, const MethodInfo* method);
#define m16304(__this, p0, p1, method) (( void (*) (t2192 *, t12 *, t585 *, const MethodInfo*))m16304_gshared)(__this, p0, p1, method)
extern "C" void m16305_gshared (t2192 * __this, t377* p0, const MethodInfo* method);
#define m16305(__this, p0, method) (( void (*) (t2192 *, t377*, const MethodInfo*))m16305_gshared)(__this, p0, method)
extern "C" bool m16306_gshared (t2192 * __this, t12 * p0, t585 * p1, const MethodInfo* method);
#define m16306(__this, p0, p1, method) (( bool (*) (t2192 *, t12 *, t585 *, const MethodInfo*))m16306_gshared)(__this, p0, p1, method)
