// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class ShieldItemUtils {

public:
    MCAPI static bool isBlockedDamageCause(class ActorDamageSource const&);

private:
    MCAPI static std::vector<enum ActorDamageCause> const mAlwaysBlockableDamageCauses;
};