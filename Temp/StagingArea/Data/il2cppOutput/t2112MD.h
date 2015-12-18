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

struct t2112;

#include "codegen/il2cpp-codegen.h"
#include "t328.h"

extern "C" void m15443_gshared (t2112 * __this, const MethodInfo* method);
#define m15443(__this, method) (( void (*) (t2112 *, const MethodInfo*))m15443_gshared)(__this, method)
extern "C" int32_t m15444_gshared (t2112 * __this, t328  p0, const MethodInfo* method);
#define m15444(__this, p0, method) (( int32_t (*) (t2112 *, t328 , const MethodInfo*))m15444_gshared)(__this, p0, method)
extern "C" bool m15445_gshared (t2112 * __this, t328  p0, t328  p1, const MethodInfo* method);
#define m15445(__this, p0, p1, method) (( bool (*) (t2112 *, t328 , t328 , const MethodInfo*))m15445_gshared)(__this, p0, p1, method)
