// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BannerBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BANNERBLOCKACTOR
public:
    class BannerBlockActor& operator=(class BannerBlockActor const&) = delete;
    BannerBlockActor(class BannerBlockActor const&) = delete;
    BannerBlockActor() = delete;
#endif

public:
    /*0*/ virtual ~BannerBlockActor();
    /*1*/ virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&);
    /*2*/ virtual bool save(class CompoundTag&) const;
    /*7*/ virtual void tick(class BlockSource&);
    /*11*/ virtual void onPlace(class BlockSource&);
    /*12*/ virtual void __unk_vfn_12();
    /*16*/ virtual void __unk_vfn_16();
    /*17*/ virtual void __unk_vfn_17();
    /*28*/ virtual void __unk_vfn_28();
    /*29*/ virtual void __unk_vfn_29();
    /*30*/ virtual void __unk_vfn_30();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
    /*34*/ virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);
    /*35*/ virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&);
    MCAPI unsigned char getBaseColorInt() const;
    MCAPI void setItemValues(class ItemStackBase const&);
    MCAPI static int const MAX_PATTERNS;
    MCAPI static std::string const TAG_BASE_COLOR;
    MCAPI static std::string const TAG_COLOR;
    MCAPI static std::string const TAG_PATTERN;
    MCAPI static std::string const TAG_PATTERNS;
    MCAPI static std::string const TAG_TYPE;
    MCAPI static enum BannerBlockType getBannerType(class CompoundTag const*);
    MCAPI static int getBaseColor(class ItemStack const&);
    MCAPI static int getPatternCount(class CompoundTag const*);
    MCAPI static bool isDefaultBanner(class ItemStackBase const&);
    MCAPI static bool removeLastPattern(class ItemStack&, class Player&);

protected:

private:

};