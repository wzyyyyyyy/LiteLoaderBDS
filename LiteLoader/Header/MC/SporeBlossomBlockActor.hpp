// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SporeBlossomBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPOREBLOSSOMBLOCKACTOR
public:
    class SporeBlossomBlockActor& operator=(class SporeBlossomBlockActor const&) = delete;
    SporeBlossomBlockActor(class SporeBlossomBlockActor const&) = delete;
    SporeBlossomBlockActor() = delete;
#endif

public:
    /*0*/ virtual ~SporeBlossomBlockActor();
    /*7*/ virtual void tick(class BlockSource&);
    /*12*/ virtual void __unk_vfn_12();
    /*16*/ virtual void __unk_vfn_16();
    /*17*/ virtual void __unk_vfn_17();
    /*28*/ virtual void __unk_vfn_28();
    /*29*/ virtual void __unk_vfn_29();
    /*30*/ virtual void __unk_vfn_30();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
    MCAPI SporeBlossomBlockActor(class BlockPos const&);

protected:

private:

};