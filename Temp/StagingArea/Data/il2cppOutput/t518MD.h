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

struct t518;
struct t518_marshaled;
struct t12;

#include "codegen/il2cpp-codegen.h"

extern "C" bool m2953 (t518 * __this, t12 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m2954 (t518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m2955 (t12 * __this , t518 * p0, t518 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t518_marshal(const t518& unmarshaled, t518_marshaled& marshaled);
extern "C" void t518_marshal_back(const t518_marshaled& marshaled, t518& unmarshaled);
extern "C" void t518_marshal_cleanup(t518_marshaled& marshaled);
