// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/EduSharedUriResourceAPI.hpp"
#undef EXTRA_INCLUDE_PART
class EduSharedUriResource {
#include "Extra/EduSharedUriResourceAPI.hpp"

public:
    MCAPI EduSharedUriResource();
    MCAPI EduSharedUriResource(class CompoundTag const&);
    MCAPI ~EduSharedUriResource();

    MCAPI static std::unique_ptr<class CompoundTag> toTag(struct EduSharedUriResource const&);
};