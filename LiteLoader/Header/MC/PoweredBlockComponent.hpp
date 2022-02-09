// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BaseCircuitComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PoweredBlockComponent : public BaseCircuitComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POWEREDBLOCKCOMPONENT
public:
    class PoweredBlockComponent& operator=(class PoweredBlockComponent const&) = delete;
    PoweredBlockComponent(class PoweredBlockComponent const&) = delete;
    PoweredBlockComponent() = delete;
#endif

public:
    /*0*/ virtual ~PoweredBlockComponent();
    /*1*/ virtual int getStrength() const;
    /*7*/ virtual void __unk_vfn_7();
    /*11*/ virtual bool addSource(class CircuitSceneGraph&, class CircuitTrackingInfo const&, int&, bool&);
    /*12*/ virtual bool allowConnection(class CircuitSceneGraph&, class CircuitTrackingInfo const&, bool&);
    /*14*/ virtual bool evaluate(class CircuitSystem&, class BlockPos const&);
    /*17*/ virtual void __unk_vfn_17();
    /*18*/ virtual void __unk_vfn_18();
    /*20*/ virtual void __unk_vfn_20();
    /*21*/ virtual void __unk_vfn_21();
    /*22*/ virtual enum CircuitComponentType getCircuitComponentType() const;
    /*
    inline bool canConsumerPower() const{
        bool (PoweredBlockComponent::*rv)() const;
        *((void**)&rv) = dlsym("?canConsumerPower@PoweredBlockComponent@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool hasChildrenSource() const{
        bool (PoweredBlockComponent::*rv)() const;
        *((void**)&rv) = dlsym("?hasChildrenSource@PoweredBlockComponent@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI PoweredBlockComponent(unsigned char);

protected:

private:

};