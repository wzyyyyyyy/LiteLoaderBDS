// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class KeyFrameTransform {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_KEYFRAMETRANSFORM
public:
    class KeyFrameTransform& operator=(class KeyFrameTransform const &) = delete;
    KeyFrameTransform(class KeyFrameTransform const &) = delete;
    KeyFrameTransform() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_KEYFRAMETRANSFORM
#endif
    MCAPI KeyFrameTransform(float);
    MCAPI class KeyFrameLerpMode & getLerpMode();
    MCAPI class KeyFrameTransform & operator=(class KeyFrameTransform &&);
    MCAPI bool optimizeAndGetDataValues(class Vec3 &, class Vec3 &);
    MCAPI void set(class ExpressionNode const &);
    MCAPI void set(class ExpressionNode const &, class Vec3 const &);
    MCAPI void set(class ExpressionNode const &, int);
    MCAPI void setPost(class ExpressionNode const &, int);
    MCAPI void setPre(class ExpressionNode const &, int);
    MCAPI ~KeyFrameTransform();
    MCAPI static void computeCubicPolynomial(class KeyFrameTransform *, class KeyFrameTransform &, class KeyFrameTransform &, class KeyFrameTransform *);



};