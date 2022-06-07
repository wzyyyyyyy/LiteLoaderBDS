// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Direction.hpp"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BellBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BELLBLOCKACTOR
public:
    class BellBlockActor& operator=(class BellBlockActor const &) = delete;
    BellBlockActor(class BellBlockActor const &) = delete;
    BellBlockActor() = delete;
#endif


public:
    /*0*/ virtual ~BellBlockActor();
    /*1*/ virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /*2*/ virtual bool save(class CompoundTag &) const;
    /*7*/ virtual void tick(class BlockSource &);
    /*12*/ virtual void __unk_vfn_12();
    /*16*/ virtual void __unk_vfn_16();
    /*28*/ virtual void __unk_vfn_28();
    /*29*/ virtual void __unk_vfn_29();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
    /*34*/ virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /*35*/ virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BELLBLOCKACTOR
#endif
    MCAPI BellBlockActor(class BlockPos const &);
    MCAPI void ejectItem(class BlockPos const &, class Actor &) const;
    MCAPI bool isRinging() const;
    MCAPI bool ring(enum Direction::Type, class BlockSource &, class Actor *, bool);



};