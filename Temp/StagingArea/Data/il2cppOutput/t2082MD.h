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

struct t2082;
struct t12;

#include "codegen/il2cpp-codegen.h"

extern "C" void m15006_gshared (t2082 * __this, const MethodInfo* method);
#define m15006(__this, method) (( void (*) (t2082 *, const MethodInfo*))m15006_gshared)(__this, method)
extern "C" void m15007_gshared (t12 * __this , const MethodInfo* method);
#define m15007(__this , method) (( void (*) (t12 * , const MethodInfo*))m15007_gshared)(__this , method)
extern "C" int32_t m15008_gshared (t2082 * __this, t12 * p0, t12 * p1, const MethodInfo* method);
#define m15008(__this, p0, p1, method) (( int32_t (*) (t2082 *, t12 *, t12 *, const MethodInfo*))m15008_gshared)(__this, p0, p1, method)
extern "C" t2082 * m15009_gshared (t12 * __this , const MethodInfo* method);
#define m15009(__this , method) (( t2082 * (*) (t12 * , const MethodInfo*))m15009_gshared)(__this , method)
