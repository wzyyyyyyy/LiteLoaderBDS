// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/MobEventAPI.hpp"
#undef EXTRA_INCLUDE_PART
class MobEvent {
#include "Extra/MobEventAPI.hpp"

public:
    MCAPI MobEvent(std::string, std::string, bool);
    MCAPI MobEvent(class MobEvent const&);
    MCAPI std::string const& getLocalizableName() const;
    MCAPI std::string const& getName() const;
    MCAPI bool isEnabled() const;
    MCAPI ~MobEvent();
};