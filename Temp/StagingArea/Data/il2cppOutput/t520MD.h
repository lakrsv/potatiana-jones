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


#include "codegen/il2cpp-codegen.h"

extern "C" void t520_marshal(const t520& unmarshaled, t520_marshaled& marshaled);
extern "C" void t520_marshal_back(const t520_marshaled& marshaled, t520& unmarshaled);
extern "C" void t520_marshal_cleanup(t520_marshaled& marshaled);
