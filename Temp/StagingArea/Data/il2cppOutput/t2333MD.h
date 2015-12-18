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

struct t2333;
struct t12;

#include "codegen/il2cpp-codegen.h"

extern "C" void m17649_gshared (t2333 * __this, const MethodInfo* method);
#define m17649(__this, method) (( void (*) (t2333 *, const MethodInfo*))m17649_gshared)(__this, method)
extern "C" void m17650_gshared (t12 * __this , const MethodInfo* method);
#define m17650(__this , method) (( void (*) (t12 * , const MethodInfo*))m17650_gshared)(__this , method)
extern "C" int32_t m17651_gshared (t2333 * __this, t12 * p0, t12 * p1, const MethodInfo* method);
#define m17651(__this, p0, p1, method) (( int32_t (*) (t2333 *, t12 *, t12 *, const MethodInfo*))m17651_gshared)(__this, p0, p1, method)
extern "C" t2333 * m17652_gshared (t12 * __this , const MethodInfo* method);
#define m17652(__this , method) (( t2333 * (*) (t12 * , const MethodInfo*))m17652_gshared)(__this , method)
