// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class CommandFilePath {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDFILEPATH
public:
    class CommandFilePath& operator=(class CommandFilePath const &) = delete;
    CommandFilePath(class CommandFilePath const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMMANDFILEPATH
#endif
    MCAPI CommandFilePath();
    MCAPI int findInvalidCharacter() const;
    MCAPI std::string const & getText() const;
    MCAPI ~CommandFilePath();



};