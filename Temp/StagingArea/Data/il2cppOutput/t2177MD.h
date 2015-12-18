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

struct t2177;
struct t12;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16151_gshared (t2177 * __this, const MethodInfo* method);
#define m16151(__this, method) (( void (*) (t2177 *, const MethodInfo*))m16151_gshared)(__this, method)
extern "C" void m16152_gshared (t12 * __this , const MethodInfo* method);
#define m16152(__this , method) (( void (*) (t12 * , const MethodInfo*))m16152_gshared)(__this , method)
extern "C" int32_t m16153_gshared (t2177 * __this, t12 * p0, t12 * p1, const MethodInfo* method);
#define m16153(__this, p0, p1, method) (( int32_t (*) (t2177 *, t12 *, t12 *, const MethodInfo*))m16153_gshared)(__this, p0, p1, method)
extern "C" t2177 * m16154_gshared (t12 * __this , const MethodInfo* method);
#define m16154(__this , method) (( t2177 * (*) (t12 * , const MethodInfo*))m16154_gshared)(__this , method)
