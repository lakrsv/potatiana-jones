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

struct t2329;
struct t12;

#include "codegen/il2cpp-codegen.h"

extern "C" void m17632_gshared (t2329 * __this, const MethodInfo* method);
#define m17632(__this, method) (( void (*) (t2329 *, const MethodInfo*))m17632_gshared)(__this, method)
extern "C" void m17633_gshared (t12 * __this , const MethodInfo* method);
#define m17633(__this , method) (( void (*) (t12 * , const MethodInfo*))m17633_gshared)(__this , method)
extern "C" int32_t m17634_gshared (t2329 * __this, t12 * p0, t12 * p1, const MethodInfo* method);
#define m17634(__this, p0, p1, method) (( int32_t (*) (t2329 *, t12 *, t12 *, const MethodInfo*))m17634_gshared)(__this, p0, p1, method)
extern "C" t2329 * m17635_gshared (t12 * __this , const MethodInfo* method);
#define m17635(__this , method) (( t2329 * (*) (t12 * , const MethodInfo*))m17635_gshared)(__this , method)
