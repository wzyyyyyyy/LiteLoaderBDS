// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class HorseArmorItem : public Item {

#define AFTER_EXTRA
// Add Member There
public:
enum Tier;

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HORSEARMORITEM
public:
    class HorseArmorItem& operator=(class HorseArmorItem const &) = delete;
    HorseArmorItem(class HorseArmorItem const &) = delete;
    HorseArmorItem() = delete;
#endif


public:
    /*0*/ virtual ~HorseArmorItem();
    /*7*/ virtual void __unk_vfn_7();
    /*10*/ virtual void __unk_vfn_10();
    /*13*/ virtual void __unk_vfn_13();
    /*15*/ virtual void __unk_vfn_15();
    /*17*/ virtual bool isDyeable() const;
    /*51*/ virtual void __unk_vfn_51();
    /*53*/ virtual void __unk_vfn_53();
    /*60*/ virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /*64*/ virtual int getArmorValue() const;
    /*66*/ virtual void __unk_vfn_66();
    /*70*/ virtual void __unk_vfn_70();
    /*71*/ virtual void __unk_vfn_71();
    /*72*/ virtual void __unk_vfn_72();
    /*73*/ virtual class mce::Color getColor(class CompoundTag const *, class ItemDescriptor const &) const;
    /*74*/ virtual bool hasCustomColor(class CompoundTag const *) const;
    /*75*/ virtual void __unk_vfn_75();
    /*77*/ virtual void clearColor(class CompoundTag *) const;
    /*78*/ virtual void setColor(class ItemStackBase &, class mce::Color const &) const;
    /*79*/ virtual void __unk_vfn_79();
    /*80*/ virtual void __unk_vfn_80();
    /*85*/ virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HORSEARMORITEM
#endif
    MCAPI HorseArmorItem(std::string const &, int, int, enum HorseArmorItem::Tier);
    MCAPI enum HorseArmorItem::Tier getTier() const;
    MCAPI static int const mHealthPerTier[];



};