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

struct t2122;
struct t12;

#include "codegen/il2cpp-codegen.h"

extern "C" void m15586_gshared (t2122 * __this, const MethodInfo* method);
#define m15586(__this, method) (( void (*) (t2122 *, const MethodInfo*))m15586_gshared)(__this, method)
extern "C" void m15587_gshared (t12 * __this , const MethodInfo* method);
#define m15587(__this , method) (( void (*) (t12 * , const MethodInfo*))m15587_gshared)(__this , method)
extern "C" int32_t m15588_gshared (t2122 * __this, t12 * p0, t12 * p1, const MethodInfo* method);
#define m15588(__this, p0, p1, method) (( int32_t (*) (t2122 *, t12 *, t12 *, const MethodInfo*))m15588_gshared)(__this, p0, p1, method)
extern "C" t2122 * m15589_gshared (t12 * __this , const MethodInfo* method);
#define m15589(__this , method) (( t2122 * (*) (t12 * , const MethodInfo*))m15589_gshared)(__this , method)
