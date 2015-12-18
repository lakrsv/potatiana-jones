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

struct t2312;
struct t12;
struct t238;
struct t239;

#include "codegen/il2cpp-codegen.h"
#include "t78.h"

extern "C" void m17467_gshared (t2312 * __this, t12 * p0, t78 p1, const MethodInfo* method);
#define m17467(__this, p0, p1, method) (( void (*) (t2312 *, t12 *, t78, const MethodInfo*))m17467_gshared)(__this, p0, p1, method)
extern "C" t12 * m17468_gshared (t2312 * __this, const MethodInfo* method);
#define m17468(__this, method) (( t12 * (*) (t2312 *, const MethodInfo*))m17468_gshared)(__this, method)
extern "C" t12 * m17469_gshared (t2312 * __this, t239 * p0, t12 * p1, const MethodInfo* method);
#define m17469(__this, p0, p1, method) (( t12 * (*) (t2312 *, t239 *, t12 *, const MethodInfo*))m17469_gshared)(__this, p0, p1, method)
extern "C" t12 * m17470_gshared (t2312 * __this, t12 * p0, const MethodInfo* method);
#define m17470(__this, p0, method) (( t12 * (*) (t2312 *, t12 *, const MethodInfo*))m17470_gshared)(__this, p0, method)
