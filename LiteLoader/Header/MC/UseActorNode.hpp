// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/UseActorNodeAPI.hpp"
#undef EXTRA_INCLUDE_PART
class UseActorNode {
#include "Extra/UseActorNodeAPI.hpp"
public:
    virtual ~UseActorNode();
    virtual int /*enum BehaviorStatus*/ tick(class Actor&);
    virtual void unk_vfn_2();

public:
    MCAPI UseActorNode();
};