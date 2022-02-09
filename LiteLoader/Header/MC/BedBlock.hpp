// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BedBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDBLOCK
public:
    class BedBlock& operator=(class BedBlock const&) = delete;
    BedBlock(class BedBlock const&) = delete;
    BedBlock() = delete;
#endif

public:
    /*0*/ virtual ~BedBlock();
    /*3*/ virtual class Block const* getNextBlockPermutation(class Block const&) const;
    /*19*/ virtual void __unk_vfn_19();
    /*27*/ virtual void __unk_vfn_27();
    /*28*/ virtual void __unk_vfn_28();
    /*29*/ virtual void __unk_vfn_29();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
    /*34*/ virtual void __unk_vfn_34();
    /*35*/ virtual void __unk_vfn_35();
    /*36*/ virtual void __unk_vfn_36();
    /*37*/ virtual void __unk_vfn_37();
    /*39*/ virtual void __unk_vfn_39();
    /*40*/ virtual void __unk_vfn_40();
    /*41*/ virtual void __unk_vfn_41();
    /*42*/ virtual void __unk_vfn_42();
    /*43*/ virtual void __unk_vfn_43();
    /*44*/ virtual void __unk_vfn_44();
    /*46*/ virtual void __unk_vfn_46();
    /*50*/ virtual bool canFillAtPos(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*51*/ virtual class Block const& sanitizeFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*52*/ virtual void onFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*54*/ virtual void __unk_vfn_54();
    /*55*/ virtual void __unk_vfn_55();
    /*62*/ virtual bool checkIsPathable(class Actor&, class BlockPos const&, class BlockPos const&) const;
    /*68*/ virtual void __unk_vfn_68();
    /*74*/ virtual void updateEntityAfterFallOn(class BlockPos const&, struct IActorMovementProxy&) const;
    /*75*/ virtual void __unk_vfn_75();
    /*77*/ virtual void __unk_vfn_77();
    /*86*/ virtual bool mayPlaceOn(class BlockSource&, class BlockPos const&) const;
    /*91*/ virtual bool playerWillDestroy(class Player&, class BlockPos const&, class Block const&) const;
    /*93*/ virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*94*/ virtual bool getSecondPart(class BlockSource const&, class BlockPos const&, class BlockPos&) const;
    /*97*/ virtual class ItemInstance asItemInstance(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*98*/ virtual void spawnResources(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, std::vector<class Item const* >*, float, int) const;
    /*100*/ virtual void __unk_vfn_100();
    /*120*/ virtual void __unk_vfn_120();
    /*122*/ virtual void __unk_vfn_122();
    /*123*/ virtual void __unk_vfn_123();
    /*126*/ virtual bool canSpawnAt(class BlockSource const&, class BlockPos const&) const;
    /*128*/ virtual void __unk_vfn_128();
    /*142*/ virtual int telemetryVariant(class BlockSource&, class BlockPos const&) const;
    /*143*/ virtual int getVariant(class Block const&) const;
    /*144*/ virtual void __unk_vfn_144();
    /*146*/ virtual unsigned char getMappedFace(unsigned char, class Block const&) const;
    /*161*/ virtual void __unk_vfn_161();
    /*171*/ virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*) const;
    /*172*/ virtual void onStandOn(class EntityContext&, class BlockPos const&) const;
    /*173*/ virtual void onStepOn(class Actor&, class BlockPos const&) const;
    /*174*/ virtual void __unk_vfn_174();
    /*175*/ virtual void __unk_vfn_175();
    /*176*/ virtual void onPlace(class BlockSource&, class BlockPos const&) const;
    /*177*/ virtual void onFallOn(class BlockSource&, class BlockPos const&, class Actor&, float) const;
    /*179*/ virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*182*/ virtual void __unk_vfn_182();
    /*184*/ virtual bool use(class Player&, class BlockPos const&, unsigned char) const;
    /*185*/ virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;
    /*188*/ virtual void __unk_vfn_188();
    /*191*/ virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&) const;
    /*192*/ virtual void __unk_vfn_192();
    /*193*/ virtual void __unk_vfn_193();
    /*
    inline bool canBeSilkTouched() const{
        bool (BedBlock::*rv)() const;
        *((void**)&rv) = dlsym("?canBeSilkTouched@BedBlock@@MEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isInteractiveBlock() const{
        bool (BedBlock::*rv)() const;
        *((void**)&rv) = dlsym("?isInteractiveBlock@BedBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isBounceBlock() const{
        bool (BedBlock::*rv)() const;
        *((void**)&rv) = dlsym("?isBounceBlock@BedBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI BedBlock(std::string const&, int);
    MCAPI static unsigned short const HEAD_PIECE_DATA;
    MCAPI static unsigned short const OCCUPIED_DATA;
    MCAPI static class std::optional<class BlockPos> findWakeupPosition(class BlockSource&, class BlockPos const&, bool, class std::optional<class Vec3> const&);
    MCAPI static bool isDangerousSpawnBlock(class BlockSource&, class BlockPos const&);
    MCAPI static bool isValidStandUpPosition(class BlockSource&, class BlockPos const&);
    MCAPI static void setOccupied(class BlockSource&, class BlockPos const&, bool);

protected:

private:

};