// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class OceanRuinStart {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCEANRUINSTART
public:
    class OceanRuinStart& operator=(class OceanRuinStart const&) = delete;
    OceanRuinStart(class OceanRuinStart const&) = delete;
    OceanRuinStart() = delete;
#endif

public:
    /*0*/ virtual ~OceanRuinStart();
    /*1*/ virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    /*2*/ virtual void __unk_vfn_0();
    /*3*/ virtual enum StructureFeatureType getType() const;
    MCAPI void createRuin(class Dimension&, class OverworldGenerator&, class Random&, int, int);

protected:

private:

};