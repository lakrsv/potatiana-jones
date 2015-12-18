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

struct t2100;
struct t12;

#include "codegen/il2cpp-codegen.h"

extern "C" void m15288_gshared (t2100 * __this, const MethodInfo* method);
#define m15288(__this, method) (( void (*) (t2100 *, const MethodInfo*))m15288_gshared)(__this, method)
extern "C" void m15289_gshared (t12 * __this , const MethodInfo* method);
#define m15289(__this , method) (( void (*) (t12 * , const MethodInfo*))m15289_gshared)(__this , method)
extern "C" int32_t m15290_gshared (t2100 * __this, t12 * p0, const MethodInfo* method);
#define m15290(__this, p0, method) (( int32_t (*) (t2100 *, t12 *, const MethodInfo*))m15290_gshared)(__this, p0, method)
extern "C" bool m15291_gshared (t2100 * __this, t12 * p0, t12 * p1, const MethodInfo* method);
#define m15291(__this, p0, p1, method) (( bool (*) (t2100 *, t12 *, t12 *, const MethodInfo*))m15291_gshared)(__this, p0, p1, method)
extern "C" t2100 * m15292_gshared (t12 * __this , const MethodInfo* method);
#define m15292(__this , method) (( t2100 * (*) (t12 * , const MethodInfo*))m15292_gshared)(__this , method)
