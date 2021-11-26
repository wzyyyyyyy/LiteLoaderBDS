// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/CommandContextAPI.hpp"
#undef EXTRA_INCLUDE_PART
class CommandContext {
#include "Extra/CommandContextAPI.hpp"

public:
    MCAPI CommandContext(std::string const&, std::unique_ptr<class CommandOrigin>, int);
    MCAPI class CommandOrigin const& getCommandOrigin() const;
};