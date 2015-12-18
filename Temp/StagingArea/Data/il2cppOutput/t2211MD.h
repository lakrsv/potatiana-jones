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

struct t2211;
struct t585;
struct t48;
struct t12;
struct t561;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16520_gshared (t2211 * __this, const MethodInfo* method);
#define m16520(__this, method) (( void (*) (t2211 *, const MethodInfo*))m16520_gshared)(__this, method)
extern "C" t585 * m16521_gshared (t2211 * __this, t48* p0, t12 * p1, const MethodInfo* method);
#define m16521(__this, p0, p1, method) (( t585 * (*) (t2211 *, t48*, t12 *, const MethodInfo*))m16521_gshared)(__this, p0, p1, method)
extern "C" t561 * m16522_gshared (t2211 * __this, t12 * p0, t585 * p1, const MethodInfo* method);
#define m16522(__this, p0, p1, method) (( t561 * (*) (t2211 *, t12 *, t585 *, const MethodInfo*))m16522_gshared)(__this, p0, p1, method)
