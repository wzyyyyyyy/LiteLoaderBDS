// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"
#include "ZipPackAccessStrategy.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ZipPackAccessStrategyOwningFileAccess : public ZipPackAccessStrategy {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ZIPPACKACCESSSTRATEGYOWNINGFILEACCESS
public:
    class ZipPackAccessStrategyOwningFileAccess& operator=(class ZipPackAccessStrategyOwningFileAccess const&) = delete;
    ZipPackAccessStrategyOwningFileAccess(class ZipPackAccessStrategyOwningFileAccess const&) = delete;
    ZipPackAccessStrategyOwningFileAccess() = delete;
#endif

public:
    /*0*/ virtual ~ZipPackAccessStrategyOwningFileAccess();
    MCAPI ZipPackAccessStrategyOwningFileAccess(class std::shared_ptr<class IFileAccess>, class ResourceLocation const&, class Core::Path const&);

protected:

private:

};