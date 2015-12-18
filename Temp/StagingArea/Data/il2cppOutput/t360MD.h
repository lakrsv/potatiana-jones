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

struct t360;
struct t12;
struct t238;
struct t239;

#include "codegen/il2cpp-codegen.h"
#include "t78.h"
#include "t19.h"

extern "C" void m1921_gshared (t360 * __this, t12 * p0, t78 p1, const MethodInfo* method);
#define m1921(__this, p0, p1, method) (( void (*) (t360 *, t12 *, t78, const MethodInfo*))m1921_gshared)(__this, p0, p1, method)
extern "C" void m12571_gshared (t360 * __this, t19  p0, const MethodInfo* method);
#define m12571(__this, p0, method) (( void (*) (t360 *, t19 , const MethodInfo*))m12571_gshared)(__this, p0, method)
extern "C" t12 * m12572_gshared (t360 * __this, t19  p0, t239 * p1, t12 * p2, const MethodInfo* method);
#define m12572(__this, p0, p1, p2, method) (( t12 * (*) (t360 *, t19 , t239 *, t12 *, const MethodInfo*))m12572_gshared)(__this, p0, p1, p2, method)
extern "C" void m12573_gshared (t360 * __this, t12 * p0, const MethodInfo* method);
#define m12573(__this, p0, method) (( void (*) (t360 *, t12 *, const MethodInfo*))m12573_gshared)(__this, p0, method)
