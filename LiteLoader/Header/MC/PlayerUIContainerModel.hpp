// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "PlayerUIContainerModelBase.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/PlayerUIContainerModelAPI.hpp"
#undef EXTRA_INCLUDE_PART
class PlayerUIContainerModel : public PlayerUIContainerModelBase {
#include "Extra/PlayerUIContainerModelAPI.hpp"
public:
    virtual ~PlayerUIContainerModel();
    virtual void releaseResources();
    virtual void unk_vfn_6();
    virtual void unk_vfn_9();
    virtual void unk_vfn_11();
    virtual void unk_vfn_12();
    virtual bool isValid();
    virtual void unk_vfn_15();
    virtual void unk_vfn_16();
    virtual void unk_vfn_17();
    virtual void unk_vfn_18();
    virtual void unk_vfn_19();
    virtual int _getContainerOffset();

public:
    MCAPI PlayerUIContainerModel(enum ContainerEnumName, class Player&);
};