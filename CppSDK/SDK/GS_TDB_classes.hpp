#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GS_TDB

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "DayCycleState_structs.hpp"
#include "PlayerStatesArray_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "E_Works_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GS_TDB.GS_TDB_C
// 0x01D0 (0x04B8 - 0x02E8)
class AGS_TDB_C final : public AGameStateBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQuestSystemV3_C*                       QuestSystem;                                       // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentQuestID;                                    // 0x0300(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOnSideBranch;                                    // 0x0304(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_305[0x3];                                      // 0x0305(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CurrentSideBranchID;                               // 0x0308(0x0010)(Edit, BlueprintVisible, Net, ZeroConstructor, HasGetValueTypeHash)
	int32                                         CurrentSideQuestID;                                // 0x0318(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOnSideBranchV2;                                  // 0x031C(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasPendingBranch;                                  // 0x031D(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31E[0x2];                                      // 0x031E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 PendingBranch;                                     // 0x0320(0x0010)(Edit, BlueprintVisible, Net, ZeroConstructor, HasGetValueTypeHash)
	class UBunkerSystem_C*                        BunkerSystem;                                      // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FString                                 BunkerID;                                          // 0x0338(0x0010)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          IsShopOpened;                                      // 0x0348(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_349[0x7];                                      // 0x0349(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFMODEvent*                             OMSound;                                           // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                             OSSound;                                           // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                             CSSound;                                           // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<int32, struct FPlayerStatesArray>        Squads;                                            // 0x0368(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         LastSquadIndex;                                    // 0x03B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxSquadQuantity;                                  // 0x03BC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACustomSkyLight_C*                      Sun;                                               // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ADirectionalLight*                      Light;                                             // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        DayTimeInMinutes;                                  // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_QuestZone_C*>                RPQuestZones;                                      // 0x03D8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                         TutorialQuestActors;                               // 0x03E8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_QuestItemsSpawnZone_C*>      LootZones;                                         // 0x03F8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_QuestZone_Towers_C*>         TowersZones;                                       // 0x0408(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	EDayCycleState                                DayState;                                          // 0x0418(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_419[0x7];                                      // 0x0419(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             DayStateChanged;                                   // 0x0420(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FDateTime                              CurrentDate;                                       // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             CurrentDateUpdated;                                // 0x0438(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         Delta_Seconds;                                     // 0x0448(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44C[0x4];                                      // 0x044C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UQuest*>                         RadioTowersQuests;                                 // 0x0450(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Players_Count;                                     // 0x0460(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_464[0x4];                                      // 0x0464(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              ServerTime;                                        // 0x0468(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             NewDay;                                            // 0x0470(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class ASurvivalPlayer_V2_C*>           Out_Actors;                                        // 0x0480(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          DebugBool;                                         // 0x0490(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_491[0x7];                                      // 0x0491(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        NewVar;                                            // 0x0498(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         DayOfWeek;                                         // 0x04A8(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InitializedQuestBPS;                               // 0x04AC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AD[0x3];                                      // 0x04AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Zombies_Count;                                     // 0x04B0(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Sleeping_Zombies_Count;                            // 0x04B4(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AddItem(const class FString& ItemName);
	void AddItemCount(const class FString& ItemName, int32 Count);
	void AddToSquad(int32 Squad, class APS_TDB_C* PlayerState, bool* Added);
	void BunkerDone(const class FString& Suka);
	void BunkerLoaded(class ABunkerElevatorReciever_C* Elevator);
	void CalculateServerTime();
	void ChangeClientQuest(class UQuestV2_C* Quest);
	void ChangeClientQuestV2();
	void ChangeQuestHintMulti(const class FString& Hint);
	void ClearMarkers();
	void CreateBunkerSystem();
	void CreateQuestSystem();
	void CurrentDateUpdated__DelegateSignature();
	void DayStateChanged__DelegateSignature(EDayCycleState NewDayState);
	void DebugForChars();
	void EndPLay_Event(class AActor* Actor, EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_GS_TDB(int32 EntryPoint);
	void Fire(const class FString& Command);
	void GameStateTimers();
	void GenerateNewSquad(class APS_TDB_C* SurvPC, int32* SquadId);
	void GetBunkerSystem(class UBunkerSystem_C** Param_BunkerSystem);
	void GetExchangeRate(double* TodayExchangeRate, double* PrevExchangeRate);
	void GetLootZonesByQuests(const TArray<class UQuest*>& Quests, TArray<class ABP_QuestItemsSpawnZone_C*>* Zones);
	void GetPlayerController(class APlayerController** PlayerController);
	void GetQuestActor(class FName Tag, class UClass* ActorClass, class AActor** Actor);
	void GetQuestSystem(class UQuestSystemV3_C** Param_QuestSystem);
	void GetQuestZone(class UQuest* Quest, class ABP_QuestItemsSpawnZone_C** Zone);
	void GetQuestZoneByJobName(E_Works JobType, TArray<class ABP_QuestZone_C*>* Zones, TArray<class ABP_QuestZone_C*>* ProgressZones);
	void GetSquadsMaxPlayersQuantity(int32* Param_MaxSquadQuantity);
	void GetTowersZones(class UQuest* TowerQuestAsset, TArray<class ABP_QuestZone_C*>* Zones);
	void InitLootZones(class ABP_QuestItemsSpawnZone_C* LootZpawnZone);
	void InitQuestActor(class AActor* ActorRef);
	void InitQuestZone(class ABP_QuestZone_C* QuestZone);
	void InitTowerZone(class ABP_QuestZone_Towers_C* Zone);
	void NewDay__DelegateSignature();
	void NewDayMulti();
	void OnEnterBunkerArea(const class FString& Param_BunkerID);
	void OnFinishQuestRemotely(int32 ID);
	void OnLeaveBunkerArea();
	void OnPlayerSpawned(class AActor* Player);
	void OnQuestTrigger(const class FString& QuestTrigger);
	void OnSwitchQuest();
	void PlayCS();
	void PlayCSSound();
	void PlayerSpawnedClientSide();
	void PlayOM();
	void PlayOMSound();
	void PlayOS();
	void PlayOSSound();
	void PlayShopSound(class UFMODEvent* Sound);
	void ProcessSpawnedPlayer(class AActor* PlayerActor);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void RemoveFromSquad(const class APS_TDB_C*& Item);
	void RemoveSquad(const int32& Key);
	void SetMarkersMulti(const TArray<struct FVector>& Markers);
	void SetNewDayState(EDayCycleState NewDayState);
	void SetShopOpened(bool IsOpened);
	void Spawn();
	void SwitchNext();
	void SyncQuests();
	void SyncQuestSystemSilent();
	void UpdateSkyLight(double DeltaTime);
	void UpdateSquadListForAllPlayers(int32 SquadId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GS_TDB_C">();
	}
	static class AGS_TDB_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGS_TDB_C>();
	}
};
static_assert(alignof(AGS_TDB_C) == 0x000008, "Wrong alignment on AGS_TDB_C");
static_assert(sizeof(AGS_TDB_C) == 0x0004B8, "Wrong size on AGS_TDB_C");
static_assert(offsetof(AGS_TDB_C, UberGraphFrame) == 0x0002E8, "Member 'AGS_TDB_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGS_TDB_C, DefaultSceneRoot) == 0x0002F0, "Member 'AGS_TDB_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AGS_TDB_C, QuestSystem) == 0x0002F8, "Member 'AGS_TDB_C::QuestSystem' has a wrong offset!");
static_assert(offsetof(AGS_TDB_C, CurrentQuestID) == 0x000300, "Member 'AGS_TDB_C::CurrentQuestID' has a wrong offset!");
static_assert(offsetof(AGS_TDB_C, IsOnSideBranch) == 0x000304, "Member 'AGS_TDB_C::IsOnSideBranch' has a wrong offset!");
static_assert(offsetof(AGS_TDB_C, CurrentSideBranchID) == 0x000308, "Member 'AGS_TDB_C::CurrentSideBranchID' has a wrong offset!");
static_assert(offsetof(AGS_TDB_C, CurrentSideQuestID) == 0x000318, "Member 'AGS_TDB_C::CurrentSideQuestID' has a wrong offset!");
static_assert(offsetof(AGS_TDB_C, IsOnSideBranchV2) == 0x00031C, "Member 'AGS_TDB_C::IsOnSideBranchV2' has a wrong offset!");
static_assert(offsetof(AGS_TDB_C, HasPendingBranch) == 0x00031D, "Member 'AGS_TDB_C::HasPendingBranch' has a wrong offset!");
static_assert(offsetof(AGS_TDB_C, PendingBranch) == 0x000320, "Member 'AGS_TDB_C::PendingBranch' has a wrong offset!");
static_assert(offsetof(AGS_TDB_C, BunkerSystem) == 0x000330, "Member 'AGS_TDB_C::BunkerSystem' has a wrong offset!");
static_assert(offsetof(AGS_TDB_C, BunkerID) == 0x000338, "Member 'AGS_TDB_C::BunkerID' has a wrong offset!");
static_assert(offsetof(AGS_TDB_C, IsShopOpened) == 0x000348, "Member 'AGS_TDB_C::IsShopOpened' has a wrong offset!");
static_assert(offsetof(AGS_TDB_C, OMSound) == 0x000350, "Member 'AGS_TDB_C::OMSound' has a wrong offset!");
static_assert(offsetof(AGS_TDB_C, OSSound) == 0x000358, "Member 'AGS_TDB_C::OSSound' has a wrong offset!");
static_assert(offsetof(AGS_TDB_C, CSSound) == 0x000360, "Member 'AGS_TDB_C::CSSound' has a wrong offset!");
static_assert(offsetof(AGS_TDB_C, Squads) == 0x000368, "Member 'AGS_TDB_C::Squads' has a wrong offset!");
static_assert(offsetof(AGS_TDB_C, LastSquadIndex) == 0x0003B8, "Member 'AGS_TDB_C::LastSquadIndex' has a wrong offset!");
static_assert(offsetof(AGS_TDB_C, MaxSquadQuantity) == 0x0003BC, "Member 'AGS_TDB_C::MaxSquadQuantity' has a wrong offset!");
static_assert(offsetof(AGS_TDB_C, Sun) == 0x0003C0, "Member 'AGS_TDB_C::Sun' has a wrong offset!");
static_assert(offsetof(AGS_TDB_C, Light) == 0x0003C8, "Member 'AGS_TDB_C::Light' has a wrong offset!");
static_assert(offsetof(AGS_TDB_C, DayTimeInMinutes) == 0x0003D0, "Member 'AGS_TDB_C::DayTimeInMinutes' has a wrong offset!");
static_assert(offsetof(AGS_TDB_C, RPQuestZones) == 0x0003D8, "Member 'AGS_TDB_C::RPQuestZones' has a wrong offset!");
static_assert(offsetof(AGS_TDB_C, TutorialQuestActors) == 0x0003E8, "Member 'AGS_TDB_C::TutorialQuestActors' has a wrong offset!");
static_assert(offsetof(AGS_TDB_C, LootZones) == 0x0003F8, "Member 'AGS_TDB_C::LootZones' has a wrong offset!");
static_assert(offsetof(AGS_TDB_C, TowersZones) == 0x000408, "Member 'AGS_TDB_C::TowersZones' has a wrong offset!");
static_assert(offsetof(AGS_TDB_C, DayState) == 0x000418, "Member 'AGS_TDB_C::DayState' has a wrong offset!");
static_assert(offsetof(AGS_TDB_C, DayStateChanged) == 0x000420, "Member 'AGS_TDB_C::DayStateChanged' has a wrong offset!");
static_assert(offsetof(AGS_TDB_C, CurrentDate) == 0x000430, "Member 'AGS_TDB_C::CurrentDate' has a wrong offset!");
static_assert(offsetof(AGS_TDB_C, CurrentDateUpdated) == 0x000438, "Member 'AGS_TDB_C::CurrentDateUpdated' has a wrong offset!");
static_assert(offsetof(AGS_TDB_C, Delta_Seconds) == 0x000448, "Member 'AGS_TDB_C::Delta_Seconds' has a wrong offset!");
static_assert(offsetof(AGS_TDB_C, RadioTowersQuests) == 0x000450, "Member 'AGS_TDB_C::RadioTowersQuests' has a wrong offset!");
static_assert(offsetof(AGS_TDB_C, Players_Count) == 0x000460, "Member 'AGS_TDB_C::Players_Count' has a wrong offset!");
static_assert(offsetof(AGS_TDB_C, ServerTime) == 0x000468, "Member 'AGS_TDB_C::ServerTime' has a wrong offset!");
static_assert(offsetof(AGS_TDB_C, NewDay) == 0x000470, "Member 'AGS_TDB_C::NewDay' has a wrong offset!");
static_assert(offsetof(AGS_TDB_C, Out_Actors) == 0x000480, "Member 'AGS_TDB_C::Out_Actors' has a wrong offset!");
static_assert(offsetof(AGS_TDB_C, DebugBool) == 0x000490, "Member 'AGS_TDB_C::DebugBool' has a wrong offset!");
static_assert(offsetof(AGS_TDB_C, NewVar) == 0x000498, "Member 'AGS_TDB_C::NewVar' has a wrong offset!");
static_assert(offsetof(AGS_TDB_C, DayOfWeek) == 0x0004A8, "Member 'AGS_TDB_C::DayOfWeek' has a wrong offset!");
static_assert(offsetof(AGS_TDB_C, InitializedQuestBPS) == 0x0004AC, "Member 'AGS_TDB_C::InitializedQuestBPS' has a wrong offset!");
static_assert(offsetof(AGS_TDB_C, Zombies_Count) == 0x0004B0, "Member 'AGS_TDB_C::Zombies_Count' has a wrong offset!");
static_assert(offsetof(AGS_TDB_C, Sleeping_Zombies_Count) == 0x0004B4, "Member 'AGS_TDB_C::Sleeping_Zombies_Count' has a wrong offset!");

}

