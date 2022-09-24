/**
 * @file  SideBySideValidationFailure.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SideBySideValidationFailure.
 *
 */
class SideBySideValidationFailure {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIDEBYSIDEVALIDATIONFAILURE
public:
    class SideBySideValidationFailure& operator=(class SideBySideValidationFailure const &) = delete;
    SideBySideValidationFailure(class SideBySideValidationFailure const &) = delete;
    SideBySideValidationFailure() = delete;
#endif

public:
    /**
     * @hash   87366145
     * @symbol ?generateMessage@SideBySideValidationFailure@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N00AEBV23@AEBVVec3@@@Z
     */
    MCAPI std::string generateMessage(bool, bool, bool, std::string const &, class Vec3 const &) const;
    /**
     * @hash   1285012024
     * @symbol ??1SideBySideValidationFailure@@QEAA@XZ
     */
    MCAPI ~SideBySideValidationFailure();
    /**
     * @hash   2137667796
     * @symbol ?toString@SideBySideValidationFailure@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4FailureReason@1@@Z
     */
    MCAPI static std::string toString(enum SideBySideValidationFailure::FailureReason);

};