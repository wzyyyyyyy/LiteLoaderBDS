// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Monster.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Piglin : public Monster {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PIGLIN
public:
    class Piglin& operator=(class Piglin const&) = delete;
    Piglin(class Piglin const&) = delete;
    Piglin() = delete;
#endif

public:
    /*14*/ virtual ~Piglin();
    /*41*/ virtual void __unk_vfn_41();
    /*52*/ virtual float getRidingHeight();
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
    /*140*/ virtual void onBounceStarted(class BlockPos const&, class Block const&);
    /*172*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*182*/ virtual void __unk_vfn_182();
    /*196*/ virtual void __unk_vfn_196();
    /*221*/ virtual void __unk_vfn_221();
    /*222*/ virtual void __unk_vfn_222();
    /*228*/ virtual void __unk_vfn_228();
    /*232*/ virtual bool getInteraction(class Player&, class ActorInteraction&, class Vec3 const&);
    /*242*/ virtual void __unk_vfn_242();
    /*245*/ virtual void __unk_vfn_245();
    /*255*/ virtual void updateEntitySpecificMolangVariables(class RenderParams&);
    /*257*/ virtual void __unk_vfn_257();
    /*261*/ virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);
    /*262*/ virtual void addAdditionalSaveData(class CompoundTag&);
    /*265*/ virtual void __unk_vfn_265();
    /*274*/ virtual void __unk_vfn_274();
    /*303*/ virtual void __unk_vfn_303();
    /*307*/ virtual void __unk_vfn_307();
    /*338*/ virtual void __unk_vfn_338();
    /*348*/ virtual void _serverAiMobStep();
    /*354*/ virtual void __unk_vfn_354();
    /*
    inline bool canExistInPeaceful() const{
        bool (Piglin::*rv)() const;
        *((void**)&rv) = dlsym("?canExistInPeaceful@Piglin@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI Piglin(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

protected:

private:

};