// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BushBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DoublePlantBlock : public BushBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DOUBLEPLANTBLOCK
public:
    class DoublePlantBlock& operator=(class DoublePlantBlock const&) = delete;
    DoublePlantBlock(class DoublePlantBlock const&) = delete;
    DoublePlantBlock() = delete;
#endif

public:
    /*0*/ virtual ~DoublePlantBlock();
    /*3*/ virtual class Block const* getNextBlockPermutation(class Block const&) const;
    /*7*/ virtual class Vec3 randomlyModifyPosition(class BlockPos const&, int&) const;
    /*8*/ virtual class Vec3 randomlyModifyPosition(class BlockPos const&) const;
    /*10*/ virtual class AABB const& getAABB(class BlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool) const;
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
    /*54*/ virtual void __unk_vfn_54();
    /*55*/ virtual void __unk_vfn_55();
    /*56*/ virtual bool canContainLiquid() const;
    /*68*/ virtual void __unk_vfn_68();
    /*72*/ virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;
    /*75*/ virtual void __unk_vfn_75();
    /*77*/ virtual void __unk_vfn_77();
    /*79*/ virtual bool onFertilized(class BlockSource&, class BlockPos const&, class Actor*, enum FertilizerType) const;
    /*81*/ virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*84*/ virtual bool mayPlace(class BlockSource&, class BlockPos const&, unsigned char) const;
    /*85*/ virtual bool mayPlace(class BlockSource&, class BlockPos const&) const;
    /*91*/ virtual bool playerWillDestroy(class Player&, class BlockPos const&, class Block const&) const;
    /*94*/ virtual bool getSecondPart(class BlockSource const&, class BlockPos const&, class BlockPos&) const;
    /*95*/ virtual int getResourceCount(class Randomize&, class Block const&, int) const;
    /*96*/ virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int) const;
    /*97*/ virtual class ItemInstance asItemInstance(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*98*/ virtual void spawnResources(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, std::vector<class Item const* >*, float, int) const;
    /*100*/ virtual void __unk_vfn_100();
    /*111*/ virtual bool canBeBuiltOver(class BlockSource&, class BlockPos const&) const;
    /*120*/ virtual void __unk_vfn_120();
    /*122*/ virtual void __unk_vfn_122();
    /*123*/ virtual void __unk_vfn_123();
    /*128*/ virtual void __unk_vfn_128();
    /*130*/ virtual std::string buildDescriptionId(class Block const&) const;
    /*131*/ virtual bool isAuxValueRelevantForPicking() const;
    /*133*/ virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*135*/ virtual int getColorForParticle(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*140*/ virtual class AABB const& getVisualShape(class Block const&, class AABB&, bool) const;
    /*143*/ virtual int getVariant(class Block const&) const;
    /*144*/ virtual void __unk_vfn_144();
    /*161*/ virtual void __unk_vfn_161();
    /*171*/ virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*) const;
    /*172*/ virtual void onStandOn(class EntityContext&, class BlockPos const&) const;
    /*173*/ virtual void onStepOn(class Actor&, class BlockPos const&) const;
    /*174*/ virtual void __unk_vfn_174();
    /*175*/ virtual void __unk_vfn_175();
    /*176*/ virtual void onPlace(class BlockSource&, class BlockPos const&) const;
    /*178*/ virtual void playerDestroy(class Player&, class BlockPos const&, class Block const&) const;
    /*179*/ virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*182*/ virtual void __unk_vfn_182();
    /*184*/ virtual bool use(class Player&, class BlockPos const&, unsigned char) const;
    /*185*/ virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;
    /*186*/ virtual enum BlockRenderLayer getRenderLayer() const;
    /*187*/ virtual enum BlockRenderLayer getRenderLayer(class Block const&, class BlockSource&, class BlockPos const&) const;
    /*188*/ virtual void __unk_vfn_188();
    /*191*/ virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&) const;
    /*192*/ virtual void __unk_vfn_192();
    /*193*/ virtual void __unk_vfn_193();
    /*197*/ virtual void checkAlive(class BlockSource&, class BlockPos const&) const;
    /*
    inline bool canBeSilkTouched() const{
        bool (DoublePlantBlock::*rv)() const;
        *((void**)&rv) = dlsym("?canBeSilkTouched@DoublePlantBlock@@MEBA_NXZ");
        return (this->*rv)();
    }
    inline enum BlockRenderLayer getRenderLayer() const{
        enum BlockRenderLayer (DoublePlantBlock::*rv)() const;
        *((void**)&rv) = dlsym("?getRenderLayer@DoublePlantBlock@@UEBA?AW4BlockRenderLayer@@XZ");
        return (this->*rv)();
    }
    inline enum BlockRenderLayer getRenderLayer(class Block const& a0, class BlockSource& a1, class BlockPos const& a2) const{
        enum BlockRenderLayer (DoublePlantBlock::*rv)(class Block const&, class BlockSource&, class BlockPos const&) const;
        *((void**)&rv) = dlsym("?getRenderLayer@DoublePlantBlock@@UEBA?AW4BlockRenderLayer@@AEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class Block const&>(a0), std::forward<class BlockSource&>(a1), std::forward<class BlockPos const&>(a2));
    }
    */
    MCAPI DoublePlantBlock(std::string const&, int);
    MCAPI int getType(class BlockSource&, class BlockPos const&, class Block const&) const;
    MCAPI bool placeAt(class BlockSource&, class BlockPos const&, enum DoublePlantType, int, class Actor*) const;

protected:

private:

};