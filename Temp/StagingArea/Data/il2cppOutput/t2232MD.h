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

struct t2232;
struct t12;
struct t238;
struct t239;

#include "codegen/il2cpp-codegen.h"
#include "t78.h"

extern "C" void m16721_gshared (t2232 * __this, t12 * p0, t78 p1, const MethodInfo* method);
#define m16721(__this, p0, p1, method) (( void (*) (t2232 *, t12 *, t78, const MethodInfo*))m16721_gshared)(__this, p0, p1, method)
extern "C" bool m16722_gshared (t2232 * __this, t12 * p0, bool p1, const MethodInfo* method);
#define m16722(__this, p0, p1, method) (( bool (*) (t2232 *, t12 *, bool, const MethodInfo*))m16722_gshared)(__this, p0, p1, method)
extern "C" t12 * m16723_gshared (t2232 * __this, t12 * p0, bool p1, t239 * p2, t12 * p3, const MethodInfo* method);
#define m16723(__this, p0, p1, p2, p3, method) (( t12 * (*) (t2232 *, t12 *, bool, t239 *, t12 *, const MethodInfo*))m16723_gshared)(__this, p0, p1, p2, p3, method)
extern "C" bool m16724_gshared (t2232 * __this, t12 * p0, const MethodInfo* method);
#define m16724(__this, p0, method) (( bool (*) (t2232 *, t12 *, const MethodInfo*))m16724_gshared)(__this, p0, method)
