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

struct t2102;
struct t12;
struct t238;
struct t239;

#include "codegen/il2cpp-codegen.h"
#include "t78.h"
#include "t36.h"

extern "C" void m15296_gshared (t2102 * __this, t12 * p0, t78 p1, const MethodInfo* method);
#define m15296(__this, p0, p1, method) (( void (*) (t2102 *, t12 *, t78, const MethodInfo*))m15296_gshared)(__this, p0, p1, method)
extern "C" bool m15297_gshared (t2102 * __this, t36  p0, const MethodInfo* method);
#define m15297(__this, p0, method) (( bool (*) (t2102 *, t36 , const MethodInfo*))m15297_gshared)(__this, p0, method)
extern "C" t12 * m15298_gshared (t2102 * __this, t36  p0, t239 * p1, t12 * p2, const MethodInfo* method);
#define m15298(__this, p0, p1, p2, method) (( t12 * (*) (t2102 *, t36 , t239 *, t12 *, const MethodInfo*))m15298_gshared)(__this, p0, p1, p2, method)
extern "C" bool m15299_gshared (t2102 * __this, t12 * p0, const MethodInfo* method);
#define m15299(__this, p0, method) (( bool (*) (t2102 *, t12 *, const MethodInfo*))m15299_gshared)(__this, p0, method)
