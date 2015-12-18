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

struct t1902;
struct t12;
struct t238;
struct t239;

#include "codegen/il2cpp-codegen.h"
#include "t78.h"
#include "t1896.h"

extern "C" void m12411_gshared (t1902 * __this, t12 * p0, t78 p1, const MethodInfo* method);
#define m12411(__this, p0, p1, method) (( void (*) (t1902 *, t12 *, t78, const MethodInfo*))m12411_gshared)(__this, p0, p1, method)
extern "C" t1896  m12412_gshared (t1902 * __this, int32_t p0, t12 * p1, const MethodInfo* method);
#define m12412(__this, p0, p1, method) (( t1896  (*) (t1902 *, int32_t, t12 *, const MethodInfo*))m12412_gshared)(__this, p0, p1, method)
extern "C" t12 * m12413_gshared (t1902 * __this, int32_t p0, t12 * p1, t239 * p2, t12 * p3, const MethodInfo* method);
#define m12413(__this, p0, p1, p2, p3, method) (( t12 * (*) (t1902 *, int32_t, t12 *, t239 *, t12 *, const MethodInfo*))m12413_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1896  m12414_gshared (t1902 * __this, t12 * p0, const MethodInfo* method);
#define m12414(__this, p0, method) (( t1896  (*) (t1902 *, t12 *, const MethodInfo*))m12414_gshared)(__this, p0, method)
