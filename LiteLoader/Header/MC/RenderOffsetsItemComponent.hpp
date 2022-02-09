// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class RenderOffsetsItemComponent {

#define AFTER_EXTRA
// Add Member There
public:
struct TRS {
    TRS() = delete;
    TRS(TRS const&) = delete;
    TRS(TRS const&&) = delete;
};
struct ItemTransforms {
    ItemTransforms() = delete;
    ItemTransforms(ItemTransforms const&) = delete;
    ItemTransforms(ItemTransforms const&&) = delete;
};

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RENDEROFFSETSITEMCOMPONENT
public:
    class RenderOffsetsItemComponent& operator=(class RenderOffsetsItemComponent const&) = delete;
    RenderOffsetsItemComponent(class RenderOffsetsItemComponent const&) = delete;
    RenderOffsetsItemComponent() = delete;
#endif

public:
    /*0*/ virtual ~RenderOffsetsItemComponent();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /*6*/ virtual void initializeFromNetwork(class CompoundTag const&);
    /*
    inline bool isNetworkComponent() const{
        bool (RenderOffsetsItemComponent::*rv)() const;
        *((void**)&rv) = dlsym("?isNetworkComponent@RenderOffsetsItemComponent@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI static void bindType();
    MCAPI static class HashedString const& getIdentifier();

protected:

private:
    MCAPI std::unique_ptr<class CompoundTag> _buildTRSTag(struct RenderOffsetsItemComponent::TRS const&) const;
    MCAPI std::unique_ptr<class CompoundTag> _buildVector3Tag(class std::array<float, 3> const&) const;
    MCAPI void _trsFromTag(class CompoundTag const&, struct RenderOffsetsItemComponent::TRS&);
    MCAPI static struct RenderOffsetsItemComponent::ItemTransforms Main_Hand_Defaults;
    MCAPI static struct RenderOffsetsItemComponent::ItemTransforms Off_Hand_Defaults;

};