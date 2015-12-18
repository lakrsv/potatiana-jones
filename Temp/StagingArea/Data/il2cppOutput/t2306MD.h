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

struct t2306;
struct t12;

#include "codegen/il2cpp-codegen.h"

extern "C" void m17431_gshared (t2306 * __this, const MethodInfo* method);
#define m17431(__this, method) (( void (*) (t2306 *, const MethodInfo*))m17431_gshared)(__this, method)
extern "C" void m17432_gshared (t12 * __this , const MethodInfo* method);
#define m17432(__this , method) (( void (*) (t12 * , const MethodInfo*))m17432_gshared)(__this , method)
extern "C" int32_t m17433_gshared (t2306 * __this, t12 * p0, t12 * p1, const MethodInfo* method);
#define m17433(__this, p0, p1, method) (( int32_t (*) (t2306 *, t12 *, t12 *, const MethodInfo*))m17433_gshared)(__this, p0, p1, method)
extern "C" t2306 * m17434_gshared (t12 * __this , const MethodInfo* method);
#define m17434(__this , method) (( t2306 * (*) (t12 * , const MethodInfo*))m17434_gshared)(__this , method)
