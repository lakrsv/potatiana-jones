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

struct t2337;
struct t12;

#include "codegen/il2cpp-codegen.h"

extern "C" void m17670_gshared (t2337 * __this, const MethodInfo* method);
#define m17670(__this, method) (( void (*) (t2337 *, const MethodInfo*))m17670_gshared)(__this, method)
extern "C" void m17671_gshared (t12 * __this , const MethodInfo* method);
#define m17671(__this , method) (( void (*) (t12 * , const MethodInfo*))m17671_gshared)(__this , method)
extern "C" int32_t m17672_gshared (t2337 * __this, t12 * p0, t12 * p1, const MethodInfo* method);
#define m17672(__this, p0, p1, method) (( int32_t (*) (t2337 *, t12 *, t12 *, const MethodInfo*))m17672_gshared)(__this, p0, p1, method)
extern "C" t2337 * m17673_gshared (t12 * __this , const MethodInfo* method);
#define m17673(__this , method) (( t2337 * (*) (t12 * , const MethodInfo*))m17673_gshared)(__this , method)
