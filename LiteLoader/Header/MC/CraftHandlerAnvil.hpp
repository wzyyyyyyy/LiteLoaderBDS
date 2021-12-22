// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "CraftHandlerBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CraftHandlerAnvil : public CraftHandlerBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTHANDLERANVIL
public:
    class CraftHandlerAnvil& operator=(class CraftHandlerAnvil const&) = delete;
    CraftHandlerAnvil(class CraftHandlerAnvil const&) = delete;
    CraftHandlerAnvil() = delete;
#endif

public:
    /*0*/ virtual ~CraftHandlerAnvil();
    /*1*/ virtual enum ItemStackNetResult preHandleAction(enum ItemStackRequestActionType);
    /*2*/ virtual void endRequestBatch();
    /*3*/ virtual enum ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const&);
    /*4*/ virtual void _postCraftRequest(bool);
    /*5*/ virtual class Recipes const* _getLevelRecipes() const;
    MCAPI CraftHandlerAnvil(class Player&, class ItemStackRequestActionCraftHandler&);

protected:

private:

};