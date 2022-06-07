// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "InventoryTransactionItemGroup.hpp"
#include "InventoryAction.hpp"

#undef BEFORE_EXTRA

class InventoryTransaction {

#define AFTER_EXTRA
// Add Member There
public:
    std::unordered_map<class InventorySource, std::vector<class InventoryAction>> actions; // 0x0
    std::vector<class InventoryTransactionItemGroup> items;                                // 0x40

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVENTORYTRANSACTION
public:
    class InventoryTransaction& operator=(class InventoryTransaction const &) = delete;
    InventoryTransaction() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INVENTORYTRANSACTION
#endif
    MCAPI InventoryTransaction(class InventoryTransaction const &);
    MCAPI void _logTransaction(bool) const;
    MCAPI void addAction(class InventoryAction const &);
    MCAPI enum InventoryTransactionError executeFull(class Player &, bool) const;
    MCAPI void forceBalanceTransaction();
    MCAPI std::vector<class InventoryAction> const & getActions(class InventorySource const &) const;
    MCAPI class std::function<enum InventoryTransactionError (class Player &, class InventoryAction const &, bool)> getVerifyFunction(class InventorySource const &) const;
    MCAPI void postLoadItems(class BlockPalette &, bool);
    MCAPI void serialize(class BinaryStream &, bool) const;
    MCAPI bool verifyBalance() const;
    MCAPI enum InventoryTransactionError verifyFull(class Player &, bool) const;
    MCAPI ~InventoryTransaction();
    MCAPI static class InventoryTransaction deserialize(class ReadOnlyBinaryStream &);
    MCAPI static std::string const getInventoryTransactionErrorName(enum InventoryTransactionError);

//private:
    MCAPI void _dropCreatedItems(class Player &) const;
    MCAPI void addItemToContent(class ItemStack const &, int);


private:
    MCAPI static class BidirectionalUnorderedMap<enum InventoryTransactionError, std::string> const inventoryTransactionErrorMap;


};