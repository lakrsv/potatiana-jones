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

struct t2233;
struct t12;
struct t238;
struct t239;

#include "codegen/il2cpp-codegen.h"
#include "t78.h"
#include "t2226.h"

extern "C" void m16729_gshared (t2233 * __this, t12 * p0, t78 p1, const MethodInfo* method);
#define m16729(__this, p0, p1, method) (( void (*) (t2233 *, t12 *, t78, const MethodInfo*))m16729_gshared)(__this, p0, p1, method)
extern "C" t2226  m16730_gshared (t2233 * __this, t12 * p0, bool p1, const MethodInfo* method);
#define m16730(__this, p0, p1, method) (( t2226  (*) (t2233 *, t12 *, bool, const MethodInfo*))m16730_gshared)(__this, p0, p1, method)
extern "C" t12 * m16731_gshared (t2233 * __this, t12 * p0, bool p1, t239 * p2, t12 * p3, const MethodInfo* method);
#define m16731(__this, p0, p1, p2, p3, method) (( t12 * (*) (t2233 *, t12 *, bool, t239 *, t12 *, const MethodInfo*))m16731_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2226  m16732_gshared (t2233 * __this, t12 * p0, const MethodInfo* method);
#define m16732(__this, p0, method) (( t2226  (*) (t2233 *, t12 *, const MethodInfo*))m16732_gshared)(__this, p0, method)
