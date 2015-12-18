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

struct t1780;
struct t12;
struct t238;
struct t239;

#include "codegen/il2cpp-codegen.h"
#include "t78.h"
#include "t1770.h"
#include "t18.h"

extern "C" void m10764_gshared (t1780 * __this, t12 * p0, t78 p1, const MethodInfo* method);
#define m10764(__this, p0, p1, method) (( void (*) (t1780 *, t12 *, t78, const MethodInfo*))m10764_gshared)(__this, p0, p1, method)
extern "C" t1770  m10765_gshared (t1780 * __this, int32_t p0, t12 * p1, const MethodInfo* method);
#define m10765(__this, p0, p1, method) (( t1770  (*) (t1780 *, int32_t, t12 *, const MethodInfo*))m10765_gshared)(__this, p0, p1, method)
extern "C" t12 * m10766_gshared (t1780 * __this, int32_t p0, t12 * p1, t239 * p2, t12 * p3, const MethodInfo* method);
#define m10766(__this, p0, p1, p2, p3, method) (( t12 * (*) (t1780 *, int32_t, t12 *, t239 *, t12 *, const MethodInfo*))m10766_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1770  m10767_gshared (t1780 * __this, t12 * p0, const MethodInfo* method);
#define m10767(__this, p0, method) (( t1770  (*) (t1780 *, t12 *, const MethodInfo*))m10767_gshared)(__this, p0, method)
