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

struct t1925;
struct t12;
struct t238;
struct t239;

#include "codegen/il2cpp-codegen.h"
#include "t78.h"
#include "t1919.h"

extern "C" void m12717_gshared (t1925 * __this, t12 * p0, t78 p1, const MethodInfo* method);
#define m12717(__this, p0, p1, method) (( void (*) (t1925 *, t12 *, t78, const MethodInfo*))m12717_gshared)(__this, p0, p1, method)
extern "C" t1919  m12718_gshared (t1925 * __this, t12 * p0, int32_t p1, const MethodInfo* method);
#define m12718(__this, p0, p1, method) (( t1919  (*) (t1925 *, t12 *, int32_t, const MethodInfo*))m12718_gshared)(__this, p0, p1, method)
extern "C" t12 * m12719_gshared (t1925 * __this, t12 * p0, int32_t p1, t239 * p2, t12 * p3, const MethodInfo* method);
#define m12719(__this, p0, p1, p2, p3, method) (( t12 * (*) (t1925 *, t12 *, int32_t, t239 *, t12 *, const MethodInfo*))m12719_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1919  m12720_gshared (t1925 * __this, t12 * p0, const MethodInfo* method);
#define m12720(__this, p0, method) (( t1919  (*) (t1925 *, t12 *, const MethodInfo*))m12720_gshared)(__this, p0, method)
