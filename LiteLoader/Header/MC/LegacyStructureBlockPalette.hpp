// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/LegacyStructureBlockPaletteAPI.hpp"
#undef EXTRA_INCLUDE_PART
class LegacyStructureBlockPalette {
#include "Extra/LegacyStructureBlockPaletteAPI.hpp"

public:
    MCAPI LegacyStructureBlockPalette();
    MCAPI class Block const& getBlock(int);
    MCAPI ~LegacyStructureBlockPalette();
};