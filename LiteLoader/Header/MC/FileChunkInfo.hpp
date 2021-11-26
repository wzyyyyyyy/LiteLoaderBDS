// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/FileChunkInfoAPI.hpp"
#undef EXTRA_INCLUDE_PART
class FileChunkInfo {
#include "Extra/FileChunkInfoAPI.hpp"

public:
    MCAPI FileChunkInfo(int, unsigned __int64, unsigned __int64);
    MCAPI bool isValid() const;
    MCAPI int size() const;
};