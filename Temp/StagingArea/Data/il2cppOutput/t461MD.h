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

struct t461;
struct t461_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m2628 (t461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t461_marshal(const t461& unmarshaled, t461_marshaled& marshaled);
extern "C" void t461_marshal_back(const t461_marshaled& marshaled, t461& unmarshaled);
extern "C" void t461_marshal_cleanup(t461_marshaled& marshaled);
