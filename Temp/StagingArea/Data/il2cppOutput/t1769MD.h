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

struct t1769;
struct t12;
struct t238;
struct t239;

#include "codegen/il2cpp-codegen.h"
#include "t78.h"
#include "t1004.h"
#include "t18.h"

extern "C" void m10754_gshared (t1769 * __this, t12 * p0, t78 p1, const MethodInfo* method);
#define m10754(__this, p0, p1, method) (( void (*) (t1769 *, t12 *, t78, const MethodInfo*))m10754_gshared)(__this, p0, p1, method)
extern "C" t1004  m10755_gshared (t1769 * __this, int32_t p0, t12 * p1, const MethodInfo* method);
#define m10755(__this, p0, p1, method) (( t1004  (*) (t1769 *, int32_t, t12 *, const MethodInfo*))m10755_gshared)(__this, p0, p1, method)
extern "C" t12 * m10756_gshared (t1769 * __this, int32_t p0, t12 * p1, t239 * p2, t12 * p3, const MethodInfo* method);
#define m10756(__this, p0, p1, p2, p3, method) (( t12 * (*) (t1769 *, int32_t, t12 *, t239 *, t12 *, const MethodInfo*))m10756_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1004  m10757_gshared (t1769 * __this, t12 * p0, const MethodInfo* method);
#define m10757(__this, p0, method) (( t1004  (*) (t1769 *, t12 *, const MethodInfo*))m10757_gshared)(__this, p0, method)
