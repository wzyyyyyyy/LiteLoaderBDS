// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MobEffectPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBEFFECTPACKET
public:
    class MobEffectPacket& operator=(class MobEffectPacket const&) = delete;
    MobEffectPacket(class MobEffectPacket const&) = delete;
#endif

public:
    /*0*/ virtual ~MobEffectPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream&) const;
    /*4*/ virtual bool disallowBatching() const;
    /*5*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream&);
    /*
    inline  ~MobEffectPacket(){
         (MobEffectPacket::*rv)();
        *((void**)&rv) = dlsym("??1MobEffectPacket@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI MobEffectPacket(class ActorRuntimeID, enum MobEffectPacket::Event, int, int, int, bool);
    MCAPI MobEffectPacket();

protected:

private:

};