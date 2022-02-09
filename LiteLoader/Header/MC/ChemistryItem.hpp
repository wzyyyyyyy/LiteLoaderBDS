// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ChemistryItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHEMISTRYITEM
public:
    class ChemistryItem& operator=(class ChemistryItem const&) = delete;
    ChemistryItem(class ChemistryItem const&) = delete;
    ChemistryItem() = delete;
#endif

public:
    /*0*/ virtual ~ChemistryItem();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void __unk_vfn_5();
    /*7*/ virtual void __unk_vfn_7();
    /*10*/ virtual void __unk_vfn_10();
    /*12*/ virtual void __unk_vfn_12();
    /*24*/ virtual class FuelItemComponent* getFuel() const;
    /*47*/ virtual void __unk_vfn_47();
    /*48*/ virtual void __unk_vfn_48();
    /*49*/ virtual void __unk_vfn_49();
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
    /*102*/ virtual void fixupCommon(class ItemStackBase&) const;
    /*122*/ virtual void __unk_vfn_122();
    /*127*/ virtual bool _calculatePlacePos(class ItemStackBase&, class Actor&, unsigned char&, class BlockPos&) const;
    /*
    inline  ~ChemistryItem(){
         (ChemistryItem::*rv)();
        *((void**)&rv) = dlsym("??1ChemistryItem@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI static void validate(class ItemStackBase&);

protected:

private:

};