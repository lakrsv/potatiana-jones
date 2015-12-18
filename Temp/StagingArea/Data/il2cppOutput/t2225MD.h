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

struct t2225;
struct t12;
struct t238;
struct t239;

#include "codegen/il2cpp-codegen.h"
#include "t78.h"
#include "t1004.h"

extern "C" void m16725_gshared (t2225 * __this, t12 * p0, t78 p1, const MethodInfo* method);
#define m16725(__this, p0, p1, method) (( void (*) (t2225 *, t12 *, t78, const MethodInfo*))m16725_gshared)(__this, p0, p1, method)
extern "C" t1004  m16726_gshared (t2225 * __this, t12 * p0, bool p1, const MethodInfo* method);
#define m16726(__this, p0, p1, method) (( t1004  (*) (t2225 *, t12 *, bool, const MethodInfo*))m16726_gshared)(__this, p0, p1, method)
extern "C" t12 * m16727_gshared (t2225 * __this, t12 * p0, bool p1, t239 * p2, t12 * p3, const MethodInfo* method);
#define m16727(__this, p0, p1, p2, p3, method) (( t12 * (*) (t2225 *, t12 *, bool, t239 *, t12 *, const MethodInfo*))m16727_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1004  m16728_gshared (t2225 * __this, t12 * p0, const MethodInfo* method);
#define m16728(__this, p0, method) (( t1004  (*) (t2225 *, t12 *, const MethodInfo*))m16728_gshared)(__this, p0, method)
