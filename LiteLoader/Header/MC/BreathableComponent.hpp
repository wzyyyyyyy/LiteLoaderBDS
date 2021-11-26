// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/BreathableComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class BreathableComponent {
#include "Extra/BreathableComponentAPI.hpp"

public:
    MCAPI BreathableComponent();
    MCAPI void addAdditionalSaveData(class CompoundTag&);
    MCAPI bool canBreathe(class Actor const&) const;
    MCAPI bool generatesBubbles() const;
    MCAPI class BreathableComponent& operator=(class BreathableComponent&&);
    MCAPI int getAirRegenPerTick() const;
    MCAPI short getAirSupply() const;
    MCAPI enum BreathableComponent::BreathableState& getBreathableState();
    MCAPI float getInhaleTime() const;
    MCAPI short getMaxAirSupply() const;
    MCAPI int getSuffocateTime() const;
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&);
    MCAPI void setAirSupply(short);
    MCAPI void updateBreathableState(class Actor&);
};