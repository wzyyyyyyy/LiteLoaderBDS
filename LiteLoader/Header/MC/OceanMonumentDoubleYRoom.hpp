// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "OceanMonumentPiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class OceanMonumentDoubleYRoom : public OceanMonumentPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCEANMONUMENTDOUBLEYROOM
public:
    class OceanMonumentDoubleYRoom& operator=(class OceanMonumentDoubleYRoom const&) = delete;
    OceanMonumentDoubleYRoom(class OceanMonumentDoubleYRoom const&) = delete;
    OceanMonumentDoubleYRoom() = delete;
#endif

public:
    /*0*/ virtual ~OceanMonumentDoubleYRoom();
    /*3*/ virtual enum StructurePieceType getType() const;
    /*5*/ virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);

protected:

private:

};