// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "BehaviorDefinition.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/MoveDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART
class MoveDefinition : public BehaviorDefinition {
#include "Extra/MoveDefinitionAPI.hpp"
public:
    virtual ~MoveDefinition();
    virtual void load(class Json::Value, class BehaviorFactory const&);
};