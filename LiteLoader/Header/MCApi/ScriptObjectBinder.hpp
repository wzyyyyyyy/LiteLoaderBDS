// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class ScriptObjectBinder {

public:
    MCAPI bool serialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle&) const;

    MCAPI static std::string const TYPE_TAG;
    MCAPI static std::unique_ptr<class ScriptObjectBinder> extract(class ScriptEngine&, class ScriptApi::ScriptObjectHandle const&);

private:
    MCAPI unsigned int _getComponentIndex(unsigned short) const;
    MCAPI bool _hasComponent(unsigned short) const;
};