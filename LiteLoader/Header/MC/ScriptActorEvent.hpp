// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ScriptActorEventAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ScriptActorEvent {
#include "Extra/ScriptActorEventAPI.hpp"

public:
    MCAPI ScriptActorEvent(class Scripting::WeakTypedObjectHandle<class ScriptActor>);

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptActorEvent> bind(struct Scripting::Version);
};