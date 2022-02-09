// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FireworksItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FIREWORKSITEM
public:
    class FireworksItem& operator=(class FireworksItem const&) = delete;
    FireworksItem(class FireworksItem const&) = delete;
    FireworksItem() = delete;
#endif

public:
    /*0*/ virtual ~FireworksItem();
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
    /*56*/ virtual void appendFormattedHovertext(class ItemStackBase const&, class Level&, std::string&, bool) const;
    /*61*/ virtual void __unk_vfn_61();
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
    /*81*/ virtual class ItemStack& use(class ItemStack&, class Player&) const;
    /*82*/ virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const;
    /*122*/ virtual void __unk_vfn_122();
    /*127*/ virtual bool _calculatePlacePos(class ItemStackBase&, class Actor&, unsigned char&, class BlockPos&) const;
    /*128*/ virtual bool _useOn(class ItemStack&, class Actor&, class BlockPos, unsigned char, class Vec3 const&) const;
    MCAPI FireworksItem(std::string const&, int);
    MCAPI static std::string const TAG_EXPLOSIONS;
    MCAPI static std::string const TAG_E_FLIGHT;
    MCAPI static std::string const TAG_FIREWORKS;
    MCAPI static class ItemInstance const& initFireworksRocketItem(class ItemInstance&, std::vector<class ItemInstance> const&, int);
    MCAPI static class ItemStack const& initFireworksRocketItem(class ItemStack&, std::vector<class ItemStack> const&, int);

protected:

private:

};