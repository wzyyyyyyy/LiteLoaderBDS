// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Social.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PacketViolationDetectedTelemetryData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKETVIOLATIONDETECTEDTELEMETRYDATA
public:
    class PacketViolationDetectedTelemetryData& operator=(class PacketViolationDetectedTelemetryData const &) = delete;
    PacketViolationDetectedTelemetryData(class PacketViolationDetectedTelemetryData const &) = delete;
    PacketViolationDetectedTelemetryData() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PACKETVIOLATIONDETECTEDTELEMETRYDATA
#endif
    MCAPI PacketViolationDetectedTelemetryData(struct ExtendedStreamReadResult const &, enum PacketViolationResponse, enum MinecraftPacketIds, class NetworkIdentifier const &);
    MCAPI void WriteEventData(class Social::Events::Event &) const;
    MCAPI ~PacketViolationDetectedTelemetryData();

//private:


private:
    MCAPI static std::string const mEventName;


};