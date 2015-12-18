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

struct t1753;
struct t12;

#include "codegen/il2cpp-codegen.h"

extern "C" void m10519_gshared (t1753 * __this, const MethodInfo* method);
#define m10519(__this, method) (( void (*) (t1753 *, const MethodInfo*))m10519_gshared)(__this, method)
extern "C" void m10520_gshared (t12 * __this , const MethodInfo* method);
#define m10520(__this , method) (( void (*) (t12 * , const MethodInfo*))m10520_gshared)(__this , method)
extern "C" int32_t m10521_gshared (t1753 * __this, t12 * p0, t12 * p1, const MethodInfo* method);
#define m10521(__this, p0, p1, method) (( int32_t (*) (t1753 *, t12 *, t12 *, const MethodInfo*))m10521_gshared)(__this, p0, p1, method)
extern "C" t1753 * m10522_gshared (t12 * __this , const MethodInfo* method);
#define m10522(__this , method) (( t1753 * (*) (t12 * , const MethodInfo*))m10522_gshared)(__this , method)
