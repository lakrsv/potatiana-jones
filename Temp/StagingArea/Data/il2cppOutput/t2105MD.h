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

struct t2105;
struct t12;
struct t238;
struct t239;

#include "codegen/il2cpp-codegen.h"
#include "t78.h"
#include "t36.h"

extern "C" void m15306_gshared (t2105 * __this, t12 * p0, t78 p1, const MethodInfo* method);
#define m15306(__this, p0, p1, method) (( void (*) (t2105 *, t12 *, t78, const MethodInfo*))m15306_gshared)(__this, p0, p1, method)
extern "C" int32_t m15307_gshared (t2105 * __this, t36  p0, t36  p1, const MethodInfo* method);
#define m15307(__this, p0, p1, method) (( int32_t (*) (t2105 *, t36 , t36 , const MethodInfo*))m15307_gshared)(__this, p0, p1, method)
extern "C" t12 * m15308_gshared (t2105 * __this, t36  p0, t36  p1, t239 * p2, t12 * p3, const MethodInfo* method);
#define m15308(__this, p0, p1, p2, p3, method) (( t12 * (*) (t2105 *, t36 , t36 , t239 *, t12 *, const MethodInfo*))m15308_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m15309_gshared (t2105 * __this, t12 * p0, const MethodInfo* method);
#define m15309(__this, p0, method) (( int32_t (*) (t2105 *, t12 *, const MethodInfo*))m15309_gshared)(__this, p0, method)
