// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/LegacyBodyControlAPI.hpp"
#undef EXTRA_INCLUDE_PART
class LegacyBodyControl {
#include "Extra/LegacyBodyControlAPI.hpp"
public:
    virtual ~LegacyBodyControl();
    virtual void clientTick(class Mob&);

public:
    MCAPI LegacyBodyControl();
};