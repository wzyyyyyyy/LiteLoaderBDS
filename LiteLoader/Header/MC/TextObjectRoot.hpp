// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class TextObjectRoot {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TEXTOBJECTROOT
public:
    class TextObjectRoot& operator=(class TextObjectRoot const &) = delete;
    TextObjectRoot(class TextObjectRoot const &) = delete;
    TextObjectRoot() = delete;
#endif


public:
    /*0*/ virtual ~TextObjectRoot();
    /*1*/ virtual std::string asString() const;
    /*2*/ virtual class Json::Value asJsonValue() const;
    /*3*/ virtual class Json::Value resolve(struct ResolveData const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TEXTOBJECTROOT
#endif
    MCAPI void addChild(std::unique_ptr<class ITextObject>);
    MCAPI void clear();
    MCAPI bool isEmpty() const;
    MCAPI class ResolvedTextObject resolveRoot(class Actor const &, class Scoreboard const &) const;



};