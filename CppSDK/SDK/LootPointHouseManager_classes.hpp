#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LootPointHouseManager

#include "Basic.hpp"

#include "AmountLootPercent_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "HouseManagerEnum_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass LootPointHouseManager.LootPointHouseManager_C
// 0x0258 (0x04E8 - 0x0290)
class ALootPointHouseManager_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          BoxCheckPlayerDebug;                               // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class ALootPoint_C*>                   LootpointsToHandle;                                // 0x02A8(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<EObjectTypeQuery>                      PlayerType;                                        // 0x02B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                           TimerResetLoot;                                    // 0x02C8(0x0008)(Edit, BlueprintVisible, Net, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        TimeReset;                                         // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CheckPlayerTime;                                   // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentAllItems;                                   // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxAllItems;                                       // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        PercentCurrentItems;                               // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Time_0_10;                                         // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Time_10_50;                                        // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Time_50_80;                                        // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Time_80_99;                                        // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BeforePlayerItems;                                 // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AfterPlayerItems;                                  // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasPlayer;                                         // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasOpenedLoot;                                     // 0x0329(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32A[0x6];                                      // 0x032A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, class FName>                AfterUniqueItemsContainer;                         // 0x0330(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, class FName>                BeforeUniqueItemsContainer;                        // 0x0380(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                VectorScaleCheckBox;                               // 0x03D0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHouseManagerEnum                             TypeRandom;                                        // 0x03E8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E9[0x3];                                      // 0x03E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MinLootPoint;                                      // 0x03EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxLootPoint;                                      // 0x03F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentLootPoint;                                  // 0x03F4(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AllLootPoints;                                     // 0x03F8(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HiddenLootPoints;                                  // 0x03FC(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FAmountLootPercent                     PercentLoot;                                       // 0x0400(0x0040)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<int32>                                 LootPointDiapozon;                                 // 0x0440(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         RandomPercent;                                     // 0x0450(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NotHiddenLoopPoint;                                // 0x0454(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LenghtDiapozon;                                    // 0x0458(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentLenghtDiapozon;                             // 0x045C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Chance60;                                          // 0x0460(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Chance80;                                          // 0x0464(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Chance95;                                          // 0x0468(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          WasReset;                                          // 0x046C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46D[0x3];                                      // 0x046D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        AllHiddenLootTimeReset;                            // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NeedDebagBox;                                      // 0x0478(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UsePartOfLootpoints;                               // 0x0479(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47A[0x2];                                      // 0x047A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NumLootPoints;                                     // 0x047C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ALootPoint_C*>                   OverlappingLootpoints;                             // 0x0480(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          NeedVisibleDebugBox;                               // 0x0490(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_491[0x7];                                      // 0x0491(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ALootPoint_C*>                   DeleteActors;                                      // 0x0498(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          NeedDebug;                                         // 0x04A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A9[0x7];                                      // 0x04A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                LootBoxPlayerDebug;                                // 0x04B0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        PercentRandom;                                     // 0x04C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ALootPoint_C*>                   LootpointsInside;                                  // 0x04D0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	double                                        PrevProcent;                                       // 0x04E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ActivateLootpoints(TArray<class ALootPoint_C*>& Array, int32 Param_HiddenLootPoints);
	void BndEvt__LootPointHouseManager_BoxCheckPlayerDebug_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__LootPointHouseManager_BoxCheckPlayerDebug_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ChooseLootPointsServer();
	void CloseAllLootPoints();
	void Deactivate();
	void EventCheckPlayersServer();
	void EventTimerResetLoot();
	void ExcludeLootpoints();
	void ExecuteUbergraph_LootPointHouseManager(int32 EntryPoint);
	void GetLootpointsInBox(TArray<class ALootPoint_C*>* Result);
	void HiddenLootClient(int32 Param_HiddenLootPoints);
	void HiddenLootMulti(int32 Param_HiddenLootPoints);
	void HiddenLootServer();
	void InitChanceLootPoints();
	void InitLootpoints();
	void Multicast_CloseAllDoors();
	void MultiReset(bool NeedReset);
	void OnRep_BeforePlayerItems();
	void OnRep_HiddenLootPoints();
	void OpenAllDoors_Client();
	void PercentCurrentItemsFunc(double* Output_Get);
	void PercentNotHidden();
	void RandomSpawnLootPoints();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ResetLootpoints(bool NeedReset);
	void ResetTimer();
	void RunTimersOnServer();
	void TimeToReset();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LootPointHouseManager_C">();
	}
	static class ALootPointHouseManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALootPointHouseManager_C>();
	}
};
static_assert(alignof(ALootPointHouseManager_C) == 0x000008, "Wrong alignment on ALootPointHouseManager_C");
static_assert(sizeof(ALootPointHouseManager_C) == 0x0004E8, "Wrong size on ALootPointHouseManager_C");
static_assert(offsetof(ALootPointHouseManager_C, UberGraphFrame) == 0x000290, "Member 'ALootPointHouseManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, BoxCheckPlayerDebug) == 0x000298, "Member 'ALootPointHouseManager_C::BoxCheckPlayerDebug' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, Box) == 0x0002A0, "Member 'ALootPointHouseManager_C::Box' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, LootpointsToHandle) == 0x0002A8, "Member 'ALootPointHouseManager_C::LootpointsToHandle' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, PlayerType) == 0x0002B8, "Member 'ALootPointHouseManager_C::PlayerType' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, TimerResetLoot) == 0x0002C8, "Member 'ALootPointHouseManager_C::TimerResetLoot' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, TimeReset) == 0x0002D0, "Member 'ALootPointHouseManager_C::TimeReset' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, CheckPlayerTime) == 0x0002D8, "Member 'ALootPointHouseManager_C::CheckPlayerTime' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, CurrentAllItems) == 0x0002E0, "Member 'ALootPointHouseManager_C::CurrentAllItems' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, MaxAllItems) == 0x0002E8, "Member 'ALootPointHouseManager_C::MaxAllItems' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, PercentCurrentItems) == 0x0002F0, "Member 'ALootPointHouseManager_C::PercentCurrentItems' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, Time_0_10) == 0x0002F8, "Member 'ALootPointHouseManager_C::Time_0_10' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, Time_10_50) == 0x000300, "Member 'ALootPointHouseManager_C::Time_10_50' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, Time_50_80) == 0x000308, "Member 'ALootPointHouseManager_C::Time_50_80' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, Time_80_99) == 0x000310, "Member 'ALootPointHouseManager_C::Time_80_99' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, BeforePlayerItems) == 0x000318, "Member 'ALootPointHouseManager_C::BeforePlayerItems' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, AfterPlayerItems) == 0x000320, "Member 'ALootPointHouseManager_C::AfterPlayerItems' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, HasPlayer) == 0x000328, "Member 'ALootPointHouseManager_C::HasPlayer' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, HasOpenedLoot) == 0x000329, "Member 'ALootPointHouseManager_C::HasOpenedLoot' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, AfterUniqueItemsContainer) == 0x000330, "Member 'ALootPointHouseManager_C::AfterUniqueItemsContainer' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, BeforeUniqueItemsContainer) == 0x000380, "Member 'ALootPointHouseManager_C::BeforeUniqueItemsContainer' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, VectorScaleCheckBox) == 0x0003D0, "Member 'ALootPointHouseManager_C::VectorScaleCheckBox' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, TypeRandom) == 0x0003E8, "Member 'ALootPointHouseManager_C::TypeRandom' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, MinLootPoint) == 0x0003EC, "Member 'ALootPointHouseManager_C::MinLootPoint' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, MaxLootPoint) == 0x0003F0, "Member 'ALootPointHouseManager_C::MaxLootPoint' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, CurrentLootPoint) == 0x0003F4, "Member 'ALootPointHouseManager_C::CurrentLootPoint' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, AllLootPoints) == 0x0003F8, "Member 'ALootPointHouseManager_C::AllLootPoints' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, HiddenLootPoints) == 0x0003FC, "Member 'ALootPointHouseManager_C::HiddenLootPoints' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, PercentLoot) == 0x000400, "Member 'ALootPointHouseManager_C::PercentLoot' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, LootPointDiapozon) == 0x000440, "Member 'ALootPointHouseManager_C::LootPointDiapozon' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, RandomPercent) == 0x000450, "Member 'ALootPointHouseManager_C::RandomPercent' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, NotHiddenLoopPoint) == 0x000454, "Member 'ALootPointHouseManager_C::NotHiddenLoopPoint' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, LenghtDiapozon) == 0x000458, "Member 'ALootPointHouseManager_C::LenghtDiapozon' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, CurrentLenghtDiapozon) == 0x00045C, "Member 'ALootPointHouseManager_C::CurrentLenghtDiapozon' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, Chance60) == 0x000460, "Member 'ALootPointHouseManager_C::Chance60' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, Chance80) == 0x000464, "Member 'ALootPointHouseManager_C::Chance80' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, Chance95) == 0x000468, "Member 'ALootPointHouseManager_C::Chance95' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, WasReset) == 0x00046C, "Member 'ALootPointHouseManager_C::WasReset' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, AllHiddenLootTimeReset) == 0x000470, "Member 'ALootPointHouseManager_C::AllHiddenLootTimeReset' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, NeedDebagBox) == 0x000478, "Member 'ALootPointHouseManager_C::NeedDebagBox' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, UsePartOfLootpoints) == 0x000479, "Member 'ALootPointHouseManager_C::UsePartOfLootpoints' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, NumLootPoints) == 0x00047C, "Member 'ALootPointHouseManager_C::NumLootPoints' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, OverlappingLootpoints) == 0x000480, "Member 'ALootPointHouseManager_C::OverlappingLootpoints' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, NeedVisibleDebugBox) == 0x000490, "Member 'ALootPointHouseManager_C::NeedVisibleDebugBox' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, DeleteActors) == 0x000498, "Member 'ALootPointHouseManager_C::DeleteActors' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, NeedDebug) == 0x0004A8, "Member 'ALootPointHouseManager_C::NeedDebug' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, LootBoxPlayerDebug) == 0x0004B0, "Member 'ALootPointHouseManager_C::LootBoxPlayerDebug' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, PercentRandom) == 0x0004C8, "Member 'ALootPointHouseManager_C::PercentRandom' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, LootpointsInside) == 0x0004D0, "Member 'ALootPointHouseManager_C::LootpointsInside' has a wrong offset!");
static_assert(offsetof(ALootPointHouseManager_C, PrevProcent) == 0x0004E0, "Member 'ALootPointHouseManager_C::PrevProcent' has a wrong offset!");

}
