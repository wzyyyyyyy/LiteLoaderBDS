// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ITickingSystem.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/LeashableSystemAPI.hpp"
#undef EXTRA_INCLUDE_PART
class LeashableSystem : public ITickingSystem {
#include "Extra/LeashableSystemAPI.hpp"
public:
    virtual ~LeashableSystem();
    virtual void unk_vfn_1();
    virtual void tick(class EntityRegistry&);
};