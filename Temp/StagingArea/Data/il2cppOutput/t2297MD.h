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

struct t2297;
struct t12;
struct t238;
struct t239;

#include "codegen/il2cpp-codegen.h"
#include "t78.h"
#include "t1275.h"

extern "C" void m17270_gshared (t2297 * __this, t12 * p0, t78 p1, const MethodInfo* method);
#define m17270(__this, p0, p1, method) (( void (*) (t2297 *, t12 *, t78, const MethodInfo*))m17270_gshared)(__this, p0, p1, method)
extern "C" int32_t m17271_gshared (t2297 * __this, t1275  p0, t1275  p1, const MethodInfo* method);
#define m17271(__this, p0, p1, method) (( int32_t (*) (t2297 *, t1275 , t1275 , const MethodInfo*))m17271_gshared)(__this, p0, p1, method)
extern "C" t12 * m17272_gshared (t2297 * __this, t1275  p0, t1275  p1, t239 * p2, t12 * p3, const MethodInfo* method);
#define m17272(__this, p0, p1, p2, p3, method) (( t12 * (*) (t2297 *, t1275 , t1275 , t239 *, t12 *, const MethodInfo*))m17272_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m17273_gshared (t2297 * __this, t12 * p0, const MethodInfo* method);
#define m17273(__this, p0, method) (( int32_t (*) (t2297 *, t12 *, const MethodInfo*))m17273_gshared)(__this, p0, method)
