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

struct t2084;
struct t12;
struct t238;
struct t239;

#include "codegen/il2cpp-codegen.h"
#include "t78.h"
#include "t9.h"

extern "C" void m15012_gshared (t2084 * __this, t12 * p0, t78 p1, const MethodInfo* method);
#define m15012(__this, p0, p1, method) (( void (*) (t2084 *, t12 *, t78, const MethodInfo*))m15012_gshared)(__this, p0, p1, method)
extern "C" int32_t m15013_gshared (t2084 * __this, t9  p0, t9  p1, const MethodInfo* method);
#define m15013(__this, p0, p1, method) (( int32_t (*) (t2084 *, t9 , t9 , const MethodInfo*))m15013_gshared)(__this, p0, p1, method)
extern "C" t12 * m15014_gshared (t2084 * __this, t9  p0, t9  p1, t239 * p2, t12 * p3, const MethodInfo* method);
#define m15014(__this, p0, p1, p2, p3, method) (( t12 * (*) (t2084 *, t9 , t9 , t239 *, t12 *, const MethodInfo*))m15014_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m15015_gshared (t2084 * __this, t12 * p0, const MethodInfo* method);
#define m15015(__this, p0, method) (( int32_t (*) (t2084 *, t12 *, const MethodInfo*))m15015_gshared)(__this, p0, method)
