// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BucketItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BUCKETITEM
public:
    class BucketItem& operator=(class BucketItem const&) = delete;
    BucketItem(class BucketItem const&) = delete;
    BucketItem() = delete;
#endif

public:
    /*0*/ virtual ~BucketItem();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void __unk_vfn_5();
    /*7*/ virtual void __unk_vfn_7();
    /*10*/ virtual void __unk_vfn_10();
    /*12*/ virtual void __unk_vfn_12();
    /*24*/ virtual class FuelItemComponent* getFuel() const;
    /*47*/ virtual void __unk_vfn_47();
    /*48*/ virtual void __unk_vfn_48();
    /*49*/ virtual void __unk_vfn_49();
    /*52*/ virtual bool isDestructive(int) const;
    /*53*/ virtual bool isLiquidClipItem(int) const;
    /*61*/ virtual void __unk_vfn_61();
    /*62*/ virtual bool isValidAuxValue(int) const;
    /*64*/ virtual void __unk_vfn_64();
    /*65*/ virtual void __unk_vfn_65();
    /*66*/ virtual void __unk_vfn_66();
    /*67*/ virtual void __unk_vfn_67();
    /*70*/ virtual void __unk_vfn_70();
    /*72*/ virtual void __unk_vfn_72();
    /*73*/ virtual void __unk_vfn_73();
    /*74*/ virtual void __unk_vfn_74();
    /*75*/ virtual void __unk_vfn_75();
    /*77*/ virtual void __unk_vfn_77();
    /*78*/ virtual void __unk_vfn_78();
    /*80*/ virtual bool canUseOnSimTick() const;
    /*81*/ virtual class ItemStack& use(class ItemStack&, class Player&) const;
    /*82*/ virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const;
    /*83*/ virtual enum ItemUseMethod useTimeDepleted(class ItemStack&, class Level*, class Player*) const;
    /*84*/ virtual void releaseUsing(class ItemStack&, class Player*, int) const;
    /*92*/ virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;
    /*97*/ virtual unsigned char getMaxStackSize(class ItemDescriptor const&) const;
    /*108*/ virtual bool validFishInteraction(int) const;
    /*114*/ virtual struct Brightness getLightEmission(int) const;
    /*115*/ virtual struct TextureUVCoordinateSet const& getIcon(class ItemStackBase const&, int, bool) const;
    /*117*/ virtual class Item& setIcon(std::string const&, int);
    /*122*/ virtual void __unk_vfn_122();
    /*125*/ virtual std::string getAuxValuesDescription() const;
    /*127*/ virtual bool _calculatePlacePos(class ItemStackBase&, class Actor&, unsigned char&, class BlockPos&) const;
    /*128*/ virtual bool _useOn(class ItemStack&, class Actor&, class BlockPos, unsigned char, class Vec3 const&) const;
    /*
    inline bool uniqueAuxValues() const{
        bool (BucketItem::*rv)() const;
        *((void**)&rv) = dlsym("?uniqueAuxValues@BucketItem@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isBucket() const{
        bool (BucketItem::*rv)() const;
        *((void**)&rv) = dlsym("?isBucket@BucketItem@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI BucketItem(std::string const&, int, enum BucketFillType);
    MCAPI static int const DRINK_DURATION;

protected:
    MCAPI void addBucketEntitySaveData(class Actor&, class ItemStack&) const;
    MCAPI bool readBucketEntitySaveData(class BlockSource&, class Actor*, unsigned char, class BlockPos, class ItemInstance const&) const;

private:
    MCAPI bool _emptyBucket(class BlockSource&, class Block const&, class BlockPos const&, class Actor*, class ItemStack const&, unsigned char) const;
    MCAPI bool _takeLiquid(class ItemStack&, class Actor&, class BlockPos const&) const;
    MCAPI bool _takePowderSnow(class ItemStack&, class Actor&, class BlockPos const&) const;
    MCAPI static std::vector<struct std::pair<enum BucketFillType, enum ActorType>> const mFillTypeToEntityType;

};