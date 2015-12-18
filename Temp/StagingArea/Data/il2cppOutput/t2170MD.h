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

struct t2170;
struct t12;
struct t238;
struct t239;

#include "codegen/il2cpp-codegen.h"
#include "t78.h"
#include "t420.h"

extern "C" void m16013_gshared (t2170 * __this, t12 * p0, t78 p1, const MethodInfo* method);
#define m16013(__this, p0, p1, method) (( void (*) (t2170 *, t12 *, t78, const MethodInfo*))m16013_gshared)(__this, p0, p1, method)
extern "C" int32_t m16014_gshared (t2170 * __this, t420  p0, t420  p1, const MethodInfo* method);
#define m16014(__this, p0, p1, method) (( int32_t (*) (t2170 *, t420 , t420 , const MethodInfo*))m16014_gshared)(__this, p0, p1, method)
extern "C" t12 * m16015_gshared (t2170 * __this, t420  p0, t420  p1, t239 * p2, t12 * p3, const MethodInfo* method);
#define m16015(__this, p0, p1, p2, p3, method) (( t12 * (*) (t2170 *, t420 , t420 , t239 *, t12 *, const MethodInfo*))m16015_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m16016_gshared (t2170 * __this, t12 * p0, const MethodInfo* method);
#define m16016(__this, p0, method) (( int32_t (*) (t2170 *, t12 *, const MethodInfo*))m16016_gshared)(__this, p0, method)
