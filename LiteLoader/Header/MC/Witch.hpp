// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "HumanoidMonster.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Witch : public HumanoidMonster {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WITCH
public:
    class Witch& operator=(class Witch const &) = delete;
    Witch(class Witch const &) = delete;
    Witch() = delete;
#endif


public:
    /*14*/ virtual ~Witch();
    /*40*/ virtual void __unk_vfn_40();
    /*60*/ virtual void __unk_vfn_60();
    /*67*/ virtual void __unk_vfn_67();
    /*81*/ virtual void __unk_vfn_81();
    /*87*/ virtual void __unk_vfn_87();
    /*94*/ virtual void __unk_vfn_94();
    /*97*/ virtual void __unk_vfn_97();
    /*104*/ virtual void __unk_vfn_104();
    /*106*/ virtual void __unk_vfn_106();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*110*/ virtual bool canAttack(class Actor *, bool) const;
    /*115*/ virtual void performRangedAttack(class Actor &, float);
    /*140*/ virtual void handleEntityEvent(enum ActorEvent, int);
    /*180*/ virtual void __unk_vfn_180();
    /*194*/ virtual void __unk_vfn_194();
    /*219*/ virtual void __unk_vfn_219();
    /*220*/ virtual void __unk_vfn_220();
    /*245*/ virtual void __unk_vfn_245();
    /*248*/ virtual void __unk_vfn_248();
    /*262*/ virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /*264*/ virtual void __unk_vfn_264();
    /*272*/ virtual void __unk_vfn_272();
    /*280*/ virtual void _onSizeUpdated();
    /*281*/ virtual void __unk_vfn_281();
    /*297*/ virtual void aiStep();
    /*310*/ virtual void __unk_vfn_310();
    /*314*/ virtual void __unk_vfn_314();
    /*337*/ virtual float getDamageAfterEnchantReduction(class ActorDamageSource const &, float) const;
    /*348*/ virtual void __unk_vfn_348();
    /*362*/ virtual void __unk_vfn_362();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WITCH
#endif
    MCAPI Witch(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

//private:


private:
    MCAPI static class std::shared_ptr<class AttributeModifier> SPEED_MODIFIER_DRINKING;
    MCAPI static class mce::UUID const SPEED_MODIFIER_DRINKING_UUID;


};