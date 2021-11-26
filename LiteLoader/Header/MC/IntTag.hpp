// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Tag.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/IntTagAPI.hpp"
#undef EXTRA_INCLUDE_PART
class IntTag : public Tag {
#include "Extra/IntTagAPI.hpp"
public:
    virtual ~IntTag();
    virtual void deleteChildren();
    virtual void write(class IDataOutput&);
    virtual void load(class IDataInput&);
    virtual std::string toString();
    virtual void unk_vfn_5();
    virtual bool equals(class Tag const&);
    virtual std::unique_ptr<class Tag> copy();
    virtual unsigned __int64 hash();

public:
    MCAPI IntTag();
    MCAPI IntTag(int);
};