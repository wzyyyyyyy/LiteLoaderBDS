// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Player.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "Player.hpp"

#undef BEFORE_EXTRA

class ServerPlayer : public Player {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERPLAYER
public:
    class ServerPlayer& operator=(class ServerPlayer const&) = delete;
    ServerPlayer(class ServerPlayer const&) = delete;
    ServerPlayer() = delete;
#endif

public:
    /*10*/ virtual void initializeComponents(enum Actor::InitializationMethod, class VariantParameterList const&);
    /*12*/ virtual void _serverInitItemStackIds();
    /*14*/ virtual ~ServerPlayer();
    /*41*/ virtual void __unk_vfn_41();
    /*48*/ virtual void normalTick();
    /*61*/ virtual void __unk_vfn_61();
    /*68*/ virtual void __unk_vfn_68();
    /*82*/ virtual void __unk_vfn_82();
    /*87*/ virtual void __unk_vfn_87();
    /*94*/ virtual void __unk_vfn_94();
    /*97*/ virtual void __unk_vfn_97();
    /*104*/ virtual void __unk_vfn_104();
    /*106*/ virtual void __unk_vfn_106();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*112*/ virtual class Actor* findAttackTarget();
    /*113*/ virtual bool isValidTarget(class Actor*) const;
    /*142*/ virtual void handleEntityEvent(enum ActorEvent, int);
    /*153*/ virtual void setArmor(enum ArmorSlot, class ItemStack const&);
    /*163*/ virtual void setOffhandSlot(class ItemStack const&);
    /*168*/ virtual bool load(class CompoundTag const&, class DataLoadHelper&);
    /*172*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*181*/ virtual bool canChangeDimensions() const;
    /*182*/ virtual void __unk_vfn_182();
    /*183*/ virtual void changeDimension(class AutomaticID<class Dimension, int>, bool);
    /*184*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*185*/ virtual void checkFallDamage(float, bool);
    /*187*/ virtual void handleFallDistanceOnServer(float, float, bool);
    /*196*/ virtual void __unk_vfn_196();
    /*214*/ virtual void onEffectAdded(class MobEffectInstance&);
    /*215*/ virtual void onEffectUpdated(class MobEffectInstance&);
    /*216*/ virtual void onEffectRemoved(class MobEffectInstance&);
    /*221*/ virtual void __unk_vfn_221();
    /*222*/ virtual void __unk_vfn_222();
    /*242*/ virtual void __unk_vfn_242();
    /*245*/ virtual void __unk_vfn_245();
    /*247*/ virtual void die(class ActorDamageSource const&);
    /*257*/ virtual void __unk_vfn_257();
    /*265*/ virtual void __unk_vfn_265();
    /*274*/ virtual void __unk_vfn_274();
    /*275*/ virtual void knockback(class Actor*, int, float, float, float, float, float);
    /*290*/ virtual void aiStep();
    /*303*/ virtual void __unk_vfn_303();
    /*307*/ virtual void __unk_vfn_307();
    /*314*/ virtual void hurtArmorSlots(class ActorDamageSource const&, int, class std::bitset<4> const&);
    /*315*/ virtual void setDamagedArmor(enum ArmorSlot, class ItemStack const&);
    /*316*/ virtual void sendArmorDamage(class std::bitset<4> const&);
    /*317*/ virtual void sendArmor(class std::bitset<4> const&);
    /*327*/ virtual void clearVanishEnchantedItemsOnDeath();
    /*328*/ virtual void sendInventory(bool);
    /*336*/ virtual float _getWalkTargetValue(class BlockPos const&);
    /*338*/ virtual void __unk_vfn_338();
    /*348*/ virtual void _serverAiMobStep();
    /*354*/ virtual void __unk_vfn_354();
    /*356*/ virtual void prepareRegion(class ChunkSource&);
    /*357*/ virtual void destroyRegion();
    /*358*/ virtual void suspendRegion();
    /*359*/ virtual void resendAllChunks();
    /*362*/ virtual void changeDimensionWithCredits(class AutomaticID<class Dimension, int>);
    /*363*/ virtual void tickWorld(struct Tick const&);
    /*364*/ virtual void __unk_vfn_364();
    /*368*/ virtual void checkMovementStats(class Vec3 const&);
    /*369*/ virtual void __unk_vfn_369();
    /*370*/ virtual void __unk_vfn_370();
    /*372*/ virtual void __unk_vfn_372();
    /*374*/ virtual void __unk_vfn_374();
    /*377*/ virtual void setPermissions(enum CommandPermissionLevel);
    /*380*/ virtual void __unk_vfn_380();
    /*381*/ virtual void __unk_vfn_381();
    /*382*/ virtual void openTrading(struct ActorUniqueID const&, bool);
    /*384*/ virtual void __unk_vfn_384();
    /*385*/ virtual void __unk_vfn_385();
    /*386*/ virtual void openInventory();
    /*387*/ virtual void __unk_vfn_387();
    /*388*/ virtual void __unk_vfn_388();
    /*389*/ virtual void displayTextObjectMessage(class TextObjectRoot const&, std::string const&, std::string const&);
    /*390*/ virtual void displayTextObjectWhisperMessage(class ResolvedTextObject const&, std::string const&, std::string const&);
    /*391*/ virtual void displayWhisperMessage(std::string const&, std::string const&, std::string const&, std::string const&);
    /*393*/ virtual void stopSleepInBed(bool, bool);
    /*397*/ virtual void __unk_vfn_397();
    /*398*/ virtual void __unk_vfn_398();
    /*399*/ virtual bool isHostingPlayer() const;
    /*400*/ virtual bool isLoading() const;
    /*401*/ virtual bool isPlayerInitialized() const;
    /*402*/ virtual void __unk_vfn_402();
    /*405*/ virtual void setPlayerGameType(enum GameType);
    /*409*/ virtual void __unk_vfn_409();
    /*413*/ virtual void setContainerData(class IContainerManager&, int, int);
    /*414*/ virtual void slotChanged(class IContainerManager&, class Container&, int, class ItemStack const&, class ItemStack const&, bool);
    /*416*/ virtual void refreshContainer(class IContainerManager&);
    /*419*/ virtual bool is2DPositionRelevant(class AutomaticID<class Dimension, int>, class BlockPos const&);
    /*420*/ virtual bool isActorRelevant(class Actor const&);
    /*421*/ virtual bool isTeacher() const;
    /*422*/ virtual void onSuspension();
    /*423*/ virtual void onLinkedSlotsChanged();
    /*429*/ virtual void sendInventoryTransaction(class InventoryTransaction const&) const;
    /*430*/ virtual void sendComplexInventoryTransaction(std::unique_ptr<class ComplexInventoryTransaction>) const;
    /*431*/ virtual void sendNetworkPacket(class Packet&) const;
    /*432*/ virtual class PlayerEventCoordinator& getPlayerEventCoordinator();
    /*433*/ virtual class MoveInputHandler* getMoveInputHandler();
    /*434*/ virtual enum InputMode getInputMode() const;
    /*435*/ virtual enum ClientPlayMode getPlayMode() const;
    /*436*/ virtual void reportMovementTelemetry(enum MovementEventType);
    /*437*/ virtual void __unk_vfn_437();
    /*442*/ virtual int _getSpawnChunkLimit() const;
    /*443*/ virtual void _updateChunkPublisherView(class Vec3 const&, float);
    /*
    inline void frameUpdate(class FrameUpdateContextBase& a0){
        void (ServerPlayer::*rv)(class FrameUpdateContextBase&);
        *((void**)&rv) = dlsym("?frameUpdate@ServerPlayer@@UEAAXAEAVFrameUpdateContextBase@@@Z");
        return (this->*rv)(std::forward<class FrameUpdateContextBase&>(a0));
    }
    inline void openPortfolio(){
        void (ServerPlayer::*rv)();
        *((void**)&rv) = dlsym("?openPortfolio@ServerPlayer@@UEAAXXZ");
        return (this->*rv)();
    }
    inline  ~ServerPlayer(){
         (ServerPlayer::*rv)();
        *((void**)&rv) = dlsym("??1ServerPlayer@@UEAA@XZ");
        return (this->*rv)();
    }
    inline void openNpcInteractScreen(class std::shared_ptr<struct INpcDialogueData> a0){
        void (ServerPlayer::*rv)(class std::shared_ptr<struct INpcDialogueData>);
        *((void**)&rv) = dlsym("?openNpcInteractScreen@ServerPlayer@@UEAAXV?$shared_ptr@UINpcDialogueData@@@std@@@Z");
        return (this->*rv)(std::forward<class std::shared_ptr<struct INpcDialogueData>>(a0));
    }
    */
    MCAPI ServerPlayer(class Level&, class PacketSender&, class NetworkHandler&, class ClientBlobCache::Server::ActiveTransfersManager&, enum GameType, class NetworkIdentifier const&, unsigned char, class std::function<void (class ServerPlayer& )>, class mce::UUID, std::string const&, std::unique_ptr<class Certificate>, int, bool, class EntityContext&);
    MCAPI void checkCheating(class Vec3 const&);
    MCAPI void disconnect();
    MCAPI void doDeleteContainerManager(bool);
    MCAPI class ItemStackNetManagerServer& getItemStackNetManagerServer();
    MCAPI class ServerMoveInputHandler* getServerMoveInputHandler();
    MCAPI void handleActorPickRequestOnServer(class Actor&, bool, bool);
    MCAPI void handleBlockPickRequestOnServer(class BlockPos const&, bool);
    MCAPI enum ContainerID openUnmanagedContainer();
    MCAPI void postLoad(bool);
    MCAPI void selectItem(class ItemStack const&);
    MCAPI void sendMobEffectPackets();
    MCAPI void setClientChunkRadius(unsigned int);
    MCAPI void setInputMode(enum InputMode const&);
    MCAPI void setLocalPlayerAsInitialized();
    MCAPI void setPlayMode(enum ClientPlayMode const&);
    MCAPI void setPlayerInput(float, float, bool, bool);
    MCAPI void setSyncTimeIfClientServerPositionMatches(class Vec3 const&);
    MCAPI void triggerRespawnFromCompletingTheEnd();
    MCAPI static class ServerPlayer* tryGetFromEntity(class EntityContext&, bool);

protected:

private:
    MCAPI void _logCDEvent(enum CrashDumpLogStringID, enum CrashDumpLogStringID, enum CrashDumpLogStringID, enum CrashDumpLogStringID);
    MCAPI enum ContainerID _nextContainerCounter();
    MCAPI void _removeNearbyEntities();
    MCAPI void _scanForNearbyActors();
    MCAPI void _setContainerManager(class std::shared_ptr<class IContainerManager>);
    MCAPI void _updateNearbyActors();

};