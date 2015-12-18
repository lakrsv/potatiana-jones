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

struct t2270;
struct t12;

#include "codegen/il2cpp-codegen.h"

extern "C" void m17018_gshared (t2270 * __this, const MethodInfo* method);
#define m17018(__this, method) (( void (*) (t2270 *, const MethodInfo*))m17018_gshared)(__this, method)
extern "C" int32_t m17019_gshared (t2270 * __this, t12 * p0, const MethodInfo* method);
#define m17019(__this, p0, method) (( int32_t (*) (t2270 *, t12 *, const MethodInfo*))m17019_gshared)(__this, p0, method)
extern "C" bool m17020_gshared (t2270 * __this, t12 * p0, t12 * p1, const MethodInfo* method);
#define m17020(__this, p0, p1, method) (( bool (*) (t2270 *, t12 *, t12 *, const MethodInfo*))m17020_gshared)(__this, p0, p1, method)
