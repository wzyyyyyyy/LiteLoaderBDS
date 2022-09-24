/**
 * @file  ConsoleGameTestListener.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ConsoleGameTestListener.
 *
 */
class ConsoleGameTestListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONSOLEGAMETESTLISTENER
public:
    class ConsoleGameTestListener& operator=(class ConsoleGameTestListener const &) = delete;
    ConsoleGameTestListener(class ConsoleGameTestListener const &) = delete;
    ConsoleGameTestListener() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ConsoleGameTestListener();
    /**
     * @hash   -1294790593
     * @vftbl  1
     * @symbol ?onTestStructureLoaded@ConsoleGameTestListener@@UEAAXAEAVBaseGameTestInstance@gametest@@@Z
     */
    virtual void onTestStructureLoaded(class gametest::BaseGameTestInstance &);
    /**
     * @hash   -148455355
     * @vftbl  2
     * @symbol ?onTestPassed@ConsoleGameTestListener@@UEAAXAEAVBaseGameTestInstance@gametest@@@Z
     */
    virtual void onTestPassed(class gametest::BaseGameTestInstance &);
    /**
     * @hash   -746019560
     * @vftbl  3
     * @symbol ?onTestFailed@ConsoleGameTestListener@@UEAAXAEAVBaseGameTestInstance@gametest@@@Z
     */
    virtual void onTestFailed(class gametest::BaseGameTestInstance &);

};