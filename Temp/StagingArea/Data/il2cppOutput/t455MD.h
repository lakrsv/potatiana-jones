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

struct t455;
struct t455_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m2499 (t455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2500 (t455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2501 (t455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t455_marshal(const t455& unmarshaled, t455_marshaled& marshaled);
extern "C" void t455_marshal_back(const t455_marshaled& marshaled, t455& unmarshaled);
extern "C" void t455_marshal_cleanup(t455_marshaled& marshaled);
