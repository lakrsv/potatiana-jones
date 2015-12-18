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

struct t2342;
struct t12;

#include "codegen/il2cpp-codegen.h"

extern "C" void m17723_gshared (t2342 * __this, const MethodInfo* method);
#define m17723(__this, method) (( void (*) (t2342 *, const MethodInfo*))m17723_gshared)(__this, method)
extern "C" void m17724_gshared (t12 * __this , const MethodInfo* method);
#define m17724(__this , method) (( void (*) (t12 * , const MethodInfo*))m17724_gshared)(__this , method)
extern "C" int32_t m17725_gshared (t2342 * __this, t12 * p0, t12 * p1, const MethodInfo* method);
#define m17725(__this, p0, p1, method) (( int32_t (*) (t2342 *, t12 *, t12 *, const MethodInfo*))m17725_gshared)(__this, p0, p1, method)
extern "C" t2342 * m17726_gshared (t12 * __this , const MethodInfo* method);
#define m17726(__this , method) (( t2342 * (*) (t12 * , const MethodInfo*))m17726_gshared)(__this , method)
