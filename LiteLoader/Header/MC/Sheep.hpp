// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Animal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Sheep : public Animal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHEEP
public:
    class Sheep& operator=(class Sheep const&) = delete;
    Sheep(class Sheep const&) = delete;
    Sheep() = delete;
#endif

public:
    /*14*/ virtual ~Sheep();
    /*41*/ virtual void __unk_vfn_41();
    /*61*/ virtual void __unk_vfn_61();
    /*68*/ virtual void __unk_vfn_68();
    /*82*/ virtual void __unk_vfn_82();
    /*87*/ virtual void __unk_vfn_87();
    /*94*/ virtual void __unk_vfn_94();
    /*97*/ virtual void __unk_vfn_97();
    /*104*/ virtual void __unk_vfn_104();
    /*106*/ virtual void __unk_vfn_106();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*112*/ virtual class Actor* findAttackTarget();
    /*140*/ virtual void onBounceStarted(class BlockPos const&, class Block const&);
    /*142*/ virtual void handleEntityEvent(enum ActorEvent, int);
    /*172*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*182*/ virtual void __unk_vfn_182();
    /*196*/ virtual void __unk_vfn_196();
    /*221*/ virtual void __unk_vfn_221();
    /*222*/ virtual void __unk_vfn_222();
    /*228*/ virtual void __unk_vfn_228();
    /*242*/ virtual void __unk_vfn_242();
    /*245*/ virtual void __unk_vfn_245();
    /*257*/ virtual void __unk_vfn_257();
    /*265*/ virtual void __unk_vfn_265();
    /*274*/ virtual void __unk_vfn_274();
    /*290*/ virtual void aiStep();
    /*303*/ virtual void __unk_vfn_303();
    /*307*/ virtual void __unk_vfn_307();
    /*338*/ virtual void __unk_vfn_338();
    /*344*/ virtual void jumpFromGround();
    /*347*/ virtual void newServerAiStep();
    /*348*/ virtual void _serverAiMobStep();
    /*354*/ virtual void __unk_vfn_354();
    /*
    inline bool useNewAi() const{
        bool (Sheep::*rv)() const;
        *((void**)&rv) = dlsym("?useNewAi@Sheep@@MEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI Sheep(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);
    MCAPI bool isGrazing() const;

protected:

private:
    MCAPI static int const EAT_ANIMATION_TICKS;

};