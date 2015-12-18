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

struct t2338;

#include "codegen/il2cpp-codegen.h"
#include "t1611.h"

extern "C" void m17674_gshared (t2338 * __this, const MethodInfo* method);
#define m17674(__this, method) (( void (*) (t2338 *, const MethodInfo*))m17674_gshared)(__this, method)
extern "C" int32_t m17675_gshared (t2338 * __this, t1611  p0, t1611  p1, const MethodInfo* method);
#define m17675(__this, p0, p1, method) (( int32_t (*) (t2338 *, t1611 , t1611 , const MethodInfo*))m17675_gshared)(__this, p0, p1, method)
