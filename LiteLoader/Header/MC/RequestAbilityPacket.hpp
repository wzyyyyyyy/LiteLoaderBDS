// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class RequestAbilityPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REQUESTABILITYPACKET
public:
    class RequestAbilityPacket& operator=(class RequestAbilityPacket const &) = delete;
    RequestAbilityPacket(class RequestAbilityPacket const &) = delete;
#endif


public:
    /*0*/ virtual ~RequestAbilityPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_REQUESTABILITYPACKET
#endif
    MCAPI RequestAbilityPacket(enum AbilitiesIndex, bool);
    MCAPI RequestAbilityPacket();
    MCAPI enum AbilitiesIndex getAbility() const;
    MCAPI bool tryGetBool(bool &) const;



};