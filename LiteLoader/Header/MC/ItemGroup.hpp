// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ItemGroupAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ItemGroup {
#include "Extra/ItemGroupAPI.hpp"

public:
    MCAPI ItemGroup(class ItemInstance const&);
    MCAPI bool isEmpty() const;
    MCAPI class ItemGroup& operator=(class ItemGroup&&);
    MCAPI ~ItemGroup();
};