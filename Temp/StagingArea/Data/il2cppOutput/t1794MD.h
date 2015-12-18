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

struct t1794;
struct t12;
struct t238;
struct t239;

#include "codegen/il2cpp-codegen.h"
#include "t78.h"
#include "t1788.h"
#include "t18.h"

extern "C" void m10918_gshared (t1794 * __this, t12 * p0, t78 p1, const MethodInfo* method);
#define m10918(__this, p0, p1, method) (( void (*) (t1794 *, t12 *, t78, const MethodInfo*))m10918_gshared)(__this, p0, p1, method)
extern "C" t1788  m10919_gshared (t1794 * __this, int32_t p0, int32_t p1, const MethodInfo* method);
#define m10919(__this, p0, p1, method) (( t1788  (*) (t1794 *, int32_t, int32_t, const MethodInfo*))m10919_gshared)(__this, p0, p1, method)
extern "C" t12 * m10920_gshared (t1794 * __this, int32_t p0, int32_t p1, t239 * p2, t12 * p3, const MethodInfo* method);
#define m10920(__this, p0, p1, p2, p3, method) (( t12 * (*) (t1794 *, int32_t, int32_t, t239 *, t12 *, const MethodInfo*))m10920_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1788  m10921_gshared (t1794 * __this, t12 * p0, const MethodInfo* method);
#define m10921(__this, p0, method) (( t1788  (*) (t1794 *, t12 *, const MethodInfo*))m10921_gshared)(__this, p0, method)
