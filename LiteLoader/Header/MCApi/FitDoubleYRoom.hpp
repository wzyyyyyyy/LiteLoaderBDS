// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class FitDoubleYRoom {
public:
    virtual ~FitDoubleYRoom();
    virtual bool fits(class RoomDefinition const&);
    virtual std::unique_ptr<class OceanMonumentPiece> create(int&, class std::shared_ptr<class RoomDefinition>, class Random&);
};