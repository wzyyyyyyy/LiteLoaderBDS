// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Localization {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOCALIZATION
public:
    class Localization& operator=(class Localization const &) = delete;
    Localization(class Localization const &) = delete;
    Localization() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LOCALIZATION
#endif
    MCAPI Localization(std::string const &);
    MCAPI Localization(std::string const &, class Localization *);
    MCAPI void appendTranslations(class Localization const &);
    MCAPI void appendTranslations(std::string const &, std::vector<std::string> const &, std::vector<std::string> const &, std::string const &);
    MCAPI bool get(std::string const &, std::string &, std::vector<std::string> const &) const;
    MCAPI std::string getFullLanguageCode() const;
    MCAPI bool getStringIdExists(std::string const &) const;
    MCAPI void loadFromPack(std::string const &, class PackAccessStrategy const &, std::vector<std::string> const &);
    MCAPI void loadFromResourcePackManager(class ResourcePackManager &, std::vector<std::string> const &);
    MCAPI ~Localization();
    MCAPI static std::string getLanguageCode(std::string const &);

//protected:
    MCAPI struct OptionalString _get(std::string const &, std::vector<std::string> const &) const;
    MCAPI class Core::PathBuffer<std::string> _getLangFilePath(std::string const &);
    MCAPI struct OptionalString _getSimple(std::string const &) const;
    MCAPI struct OptionalString _parseFormattedString(std::string const &) const;
    MCAPI void _replaceTokens(std::string &, std::vector<std::string> const &) const;
    MCAPI static bool _isCommaSeperatedLanguage(std::string const &);


protected:


};