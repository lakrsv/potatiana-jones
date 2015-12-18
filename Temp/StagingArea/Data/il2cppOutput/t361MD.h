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

struct t361;
struct t12;
struct t238;
struct t239;

#include "codegen/il2cpp-codegen.h"
#include "t78.h"

extern "C" void m1879_gshared (t361 * __this, t12 * p0, t78 p1, const MethodInfo* method);
#define m1879(__this, p0, p1, method) (( void (*) (t361 *, t12 *, t78, const MethodInfo*))m1879_gshared)(__this, p0, p1, method)
extern "C" void m12581_gshared (t361 * __this, float p0, const MethodInfo* method);
#define m12581(__this, p0, method) (( void (*) (t361 *, float, const MethodInfo*))m12581_gshared)(__this, p0, method)
extern "C" t12 * m12582_gshared (t361 * __this, float p0, t239 * p1, t12 * p2, const MethodInfo* method);
#define m12582(__this, p0, p1, p2, method) (( t12 * (*) (t361 *, float, t239 *, t12 *, const MethodInfo*))m12582_gshared)(__this, p0, p1, p2, method)
extern "C" void m12583_gshared (t361 * __this, t12 * p0, const MethodInfo* method);
#define m12583(__this, p0, method) (( void (*) (t361 *, t12 *, const MethodInfo*))m12583_gshared)(__this, p0, method)
