// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "CaveFeature.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/HellCaveFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART
class HellCaveFeature : public CaveFeature {
#include "Extra/HellCaveFeatureAPI.hpp"
public:
    virtual ~HellCaveFeature();
    virtual void unk_vfn_1();
    virtual void addRoom(class IBlockWorldGenAPI&, struct CaveFeatureUtils::CarverConfiguration const&, class Random&, class ChunkPos const&, class Vec3 const&, class RenderParams&, struct CaveFeatureUtils::CarvingParameters const&);
    virtual void addTunnel(class IBlockWorldGenAPI&, struct CaveFeatureUtils::CarverConfiguration const&, class Random&, class ChunkPos const&, class Vec3 const&, float, float, float, int, int, float, class RenderParams&, struct CaveFeatureUtils::CarvingParameters const&);
    virtual void addFeature(class IBlockWorldGenAPI&, class ChunkPos, class Random&, class ChunkPos, class RenderParams&);
};