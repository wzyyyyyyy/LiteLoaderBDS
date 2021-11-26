// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "CraftHandlerBase.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/CraftHandlerGrindstoneAPI.hpp"
#undef EXTRA_INCLUDE_PART
class CraftHandlerGrindstone : public CraftHandlerBase {
#include "Extra/CraftHandlerGrindstoneAPI.hpp"
public:
    virtual ~CraftHandlerGrindstone();
    virtual void unk_vfn_2();
    virtual void endRequestBatch();
    virtual int /*enum ItemStackNetResult*/ _handleCraftAction(class ItemStackRequestActionCraftBase const&);
    virtual void _postCraftRequest(bool);

public:
    MCAPI CraftHandlerGrindstone(class ItemStackRequestActionCraftHandler&);


private:
    MCAPI class ItemStack _createResultItem(class ItemStack const&, class ItemStack const&);
    MCAPI class ItemStack _getResultItemWithNoEnchants(std::vector<class ItemStack> const&, bool&);
    MCAPI bool _resolveNetIdAndValidate(enum ContainerEnumName, unsigned char, struct ItemStackNetIdVariant const&);
};