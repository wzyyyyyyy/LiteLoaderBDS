/**
 * @file  ActorHasRangedWeaponTest.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorHasRangedWeaponTest.
 *
 */
class ActorHasRangedWeaponTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORHASRANGEDWEAPONTEST
public:
    class ActorHasRangedWeaponTest& operator=(class ActorHasRangedWeaponTest const &) = delete;
    ActorHasRangedWeaponTest(class ActorHasRangedWeaponTest const &) = delete;
    ActorHasRangedWeaponTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ActorHasRangedWeaponTest();
    /**
     * @hash   -1050272052
     * @vftbl  2
     * @symbol ?evaluate@ActorHasRangedWeaponTest@@UEBA_NAEBUFilterContext@@@Z
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @hash   -1423653994
     * @vftbl  4
     * @symbol ?getName@ActorHasRangedWeaponTest@@UEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};