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

struct t2168;
struct t12;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16007_gshared (t2168 * __this, const MethodInfo* method);
#define m16007(__this, method) (( void (*) (t2168 *, const MethodInfo*))m16007_gshared)(__this, method)
extern "C" void m16008_gshared (t12 * __this , const MethodInfo* method);
#define m16008(__this , method) (( void (*) (t12 * , const MethodInfo*))m16008_gshared)(__this , method)
extern "C" int32_t m16009_gshared (t2168 * __this, t12 * p0, t12 * p1, const MethodInfo* method);
#define m16009(__this, p0, p1, method) (( int32_t (*) (t2168 *, t12 *, t12 *, const MethodInfo*))m16009_gshared)(__this, p0, p1, method)
extern "C" t2168 * m16010_gshared (t12 * __this , const MethodInfo* method);
#define m16010(__this , method) (( t2168 * (*) (t12 * , const MethodInfo*))m16010_gshared)(__this , method)
