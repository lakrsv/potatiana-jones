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

struct t2340;

#include "codegen/il2cpp-codegen.h"
#include "t1611.h"

extern "C" void m17683_gshared (t2340 * __this, const MethodInfo* method);
#define m17683(__this, method) (( void (*) (t2340 *, const MethodInfo*))m17683_gshared)(__this, method)
extern "C" int32_t m17684_gshared (t2340 * __this, t1611  p0, const MethodInfo* method);
#define m17684(__this, p0, method) (( int32_t (*) (t2340 *, t1611 , const MethodInfo*))m17684_gshared)(__this, p0, method)
extern "C" bool m17685_gshared (t2340 * __this, t1611  p0, t1611  p1, const MethodInfo* method);
#define m17685(__this, p0, p1, method) (( bool (*) (t2340 *, t1611 , t1611 , const MethodInfo*))m17685_gshared)(__this, p0, p1, method)
