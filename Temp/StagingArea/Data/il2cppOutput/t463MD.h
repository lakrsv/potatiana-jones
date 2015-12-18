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

struct t463;
struct t463_marshaled;
struct t48;
struct t383;

#include "codegen/il2cpp-codegen.h"

extern "C" void m2265 (t463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2266 (t12 * __this , t463 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t463 * m2267 (t12 * __this , t48* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t463 * m2268 (t12 * __this , t383 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t463 * m2269 (t12 * __this , t383 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t463_marshal(const t463& unmarshaled, t463_marshaled& marshaled);
extern "C" void t463_marshal_back(const t463_marshaled& marshaled, t463& unmarshaled);
extern "C" void t463_marshal_cleanup(t463_marshaled& marshaled);
