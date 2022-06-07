// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Explosion {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPLOSION
public:
    class Explosion& operator=(class Explosion const &) = delete;
    Explosion(class Explosion const &) = delete;
    Explosion() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_EXPLOSION
#endif
    MCAPI Explosion(class BlockSource &, class Actor *, class Vec3 const &, float);
    MCAPI void explode();
    MCAPI void overrideInWater(bool);
    MCAPI void setAllowUnderwater(bool);
    MCAPI void setBreaking(bool);
    MCAPI void setFire(bool);
    MCAPI void setMaxResistance(float);
    MCAPI ~Explosion();



};