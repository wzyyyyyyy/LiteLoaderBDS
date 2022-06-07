// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ActorDefinitionGroup {

#define AFTER_EXTRA
// Add Member There
public:
struct LoadActorResult {
    LoadActorResult() = delete;
    LoadActorResult(LoadActorResult const&) = delete;
    LoadActorResult(LoadActorResult const&&) = delete;
};

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORDEFINITIONGROUP
public:
    class ActorDefinitionGroup& operator=(class ActorDefinitionGroup const &) = delete;
    ActorDefinitionGroup(class ActorDefinitionGroup const &) = delete;
    ActorDefinitionGroup() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORDEFINITIONGROUP
#endif
    MCAPI ActorDefinitionGroup(class Level &, class ResourcePackManager &, class IMinecraftEventing &, class Experiments const &);
    MCAPI std::vector<std::string> buildActorEventList() const;
    MCAPI class ActorComponentFactory * getComponentFactory();
    MCAPI void setComponentFactory(class ActorComponentFactory *);
    MCAPI class ActorDefinitionPtr tryGetDefinition(std::string const &);
    MCAPI class ActorDefinitionPtr tryGetDefinitionGroup(std::string const &, std::string const &);
    MCAPI static bool loadActorDefinitionIdentifier(class Json::Value const &, class SemVersion const &, std::string &);
    MCAPI static bool loadActorDefinitionRuntimeIdentifier(class Json::Value const &, class SemVersion const &, std::string &);
    MCAPI static bool tryReadEntityResourceFile(class PackInstance &, class Core::Path const &, class Json::Value &);

//protected:
    MCAPI void _addRef(class ActorDefinitionPtr &);
    MCAPI void _removeRef(class ActorDefinitionPtr &);

//private:
    MCAPI void _getResources(class Level &);
    MCAPI struct ActorDefinitionGroup::LoadActorResult _loadActorDefinition(class Level &, class SemVersion const &, std::string const &, enum CurrentCmdVersion const &, class Json::Value &, class std::unordered_set<std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<std::string>> &, enum LogArea);
    MCAPI bool _loadDefinitionFromJSON(class SemVersion const &, class SemVersion const &, enum CurrentCmdVersion const &, std::string const &, class Json::Value &, std::string const &, class Level &, enum LogArea);
    MCAPI void _loadTemplates(class Level &, std::string const &, struct DeserializeDataParams);
    MCAPI void _setupCommonResourceDefinitionMap(class ActorDefinition &, class Level &);
    MCAPI void _setupPropertyGroups(class Level &, class ActorDefinition const &);


protected:

private:


};