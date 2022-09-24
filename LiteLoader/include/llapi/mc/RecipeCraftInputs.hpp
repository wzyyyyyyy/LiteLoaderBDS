/**
 * @file  RecipeCraftInputs.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class RecipeCraftInputs.
 *
 */
class RecipeCraftInputs {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RECIPECRAFTINPUTS
public:
    class RecipeCraftInputs& operator=(class RecipeCraftInputs const &) = delete;
    RecipeCraftInputs(class RecipeCraftInputs const &) = delete;
    RecipeCraftInputs() = delete;
#endif

public:
    /**
     * @hash   478790139
     * @symbol ??0RecipeCraftInputs@@QEAA@AEBV?$TypedServerNetId@URecipeNetIdTag@@I$0A@@@@Z
     */
    MCAPI RecipeCraftInputs(class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const &);
    /**
     * @hash   396685687
     * @symbol ??1RecipeCraftInputs@@QEAA@XZ
     */
    MCAPI ~RecipeCraftInputs();

};