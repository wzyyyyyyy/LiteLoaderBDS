// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ChemistryTableBlockActorAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ChemistryTableBlockActor {
#include "Extra/ChemistryTableBlockActorAPI.hpp"

public:
    MCAPI bool isSameType(enum ChemistryTableType) const;
    MCAPI void playerOpenLabTable(class Player&);
    MCAPI void reset(class BlockSource&);
    MCAPI void serverCombine(class BlockSource&, std::vector<class ItemStack> const&);
    MCAPI void serverLabTablePacket_DEPRECATED(class LabTablePacket const&, class BlockSource&);


private:
    MCAPI void _popPendingReactionOutput(class BlockSource&);
    MCAPI enum ChemistryTableType _updateType(class BlockSource&);
};