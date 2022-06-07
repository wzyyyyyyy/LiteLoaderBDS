// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BaseCircuitComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ConsumerComponent : public BaseCircuitComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONSUMERCOMPONENT
public:
    class ConsumerComponent& operator=(class ConsumerComponent const &) = delete;
    ConsumerComponent(class ConsumerComponent const &) = delete;
#endif


public:
    /*0*/ virtual ~ConsumerComponent();
    /*7*/ virtual bool canConsumerPower() const;
    /*11*/ virtual bool addSource(class CircuitSceneGraph &, class CircuitTrackingInfo const &, int &, bool &);
    /*12*/ virtual bool allowConnection(class CircuitSceneGraph &, class CircuitTrackingInfo const &, bool &);
    /*14*/ virtual bool evaluate(class CircuitSystem &, class BlockPos const &);
    /*17*/ virtual void __unk_vfn_17();
    /*20*/ virtual void __unk_vfn_20();
    /*21*/ virtual bool isSecondaryPowered() const;
    /*22*/ virtual enum CircuitComponentType getCircuitComponentType() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONSUMERCOMPONENT
#endif
    MCAPI ConsumerComponent();



};