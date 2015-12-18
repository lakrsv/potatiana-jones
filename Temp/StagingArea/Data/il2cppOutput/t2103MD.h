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

struct t2103;
struct t12;

#include "codegen/il2cpp-codegen.h"

extern "C" void m15300_gshared (t2103 * __this, const MethodInfo* method);
#define m15300(__this, method) (( void (*) (t2103 *, const MethodInfo*))m15300_gshared)(__this, method)
extern "C" void m15301_gshared (t12 * __this , const MethodInfo* method);
#define m15301(__this , method) (( void (*) (t12 * , const MethodInfo*))m15301_gshared)(__this , method)
extern "C" int32_t m15302_gshared (t2103 * __this, t12 * p0, t12 * p1, const MethodInfo* method);
#define m15302(__this, p0, p1, method) (( int32_t (*) (t2103 *, t12 *, t12 *, const MethodInfo*))m15302_gshared)(__this, p0, p1, method)
extern "C" t2103 * m15303_gshared (t12 * __this , const MethodInfo* method);
#define m15303(__this , method) (( t2103 * (*) (t12 * , const MethodInfo*))m15303_gshared)(__this , method)
