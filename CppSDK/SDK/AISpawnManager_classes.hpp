#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AISpawnManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AISpawnZoneType_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass AISpawnManager.AISpawnManager_C
// 0x0078 (0x0308 - 0x0290)
class AAISpawnManager_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         TotalZombieLimit;                                  // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A4[0x4];                                      // 0x02A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         AllAIs;                                            // 0x02A8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          CanSpawn_;                                         // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B9[0x7];                                      // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<bool>                                  _;                                                 // 0x02C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         BlueTypeZone;                                      // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         GreenTypeZone;                                     // 0x02D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         YellowTypeZone;                                    // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RedTypeZone;                                       // 0x02DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BlueZoneLimit;                                     // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         GreenZoneLimit;                                    // 0x02E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         YellowZoneLimit;                                   // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RedZoneLimit;                                      // 0x02EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BanditSpawnCount;                                  // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F4[0x4];                                      // 0x02F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 SpawnZoneMap;                                      // 0x02F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_AISpawnManager(int32 EntryPoint);
	EAISpawnZoneType GetSpawnTypeZone(const struct FVector& WorldLocation);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AISpawnManager_C">();
	}
	static class AAISpawnManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAISpawnManager_C>();
	}
};
static_assert(alignof(AAISpawnManager_C) == 0x000008, "Wrong alignment on AAISpawnManager_C");
static_assert(sizeof(AAISpawnManager_C) == 0x000308, "Wrong size on AAISpawnManager_C");
static_assert(offsetof(AAISpawnManager_C, UberGraphFrame) == 0x000290, "Member 'AAISpawnManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AAISpawnManager_C, DefaultSceneRoot) == 0x000298, "Member 'AAISpawnManager_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AAISpawnManager_C, TotalZombieLimit) == 0x0002A0, "Member 'AAISpawnManager_C::TotalZombieLimit' has a wrong offset!");
static_assert(offsetof(AAISpawnManager_C, AllAIs) == 0x0002A8, "Member 'AAISpawnManager_C::AllAIs' has a wrong offset!");
static_assert(offsetof(AAISpawnManager_C, CanSpawn_) == 0x0002B8, "Member 'AAISpawnManager_C::CanSpawn_' has a wrong offset!");
static_assert(offsetof(AAISpawnManager_C, _) == 0x0002C0, "Member 'AAISpawnManager_C::_' has a wrong offset!");
static_assert(offsetof(AAISpawnManager_C, BlueTypeZone) == 0x0002D0, "Member 'AAISpawnManager_C::BlueTypeZone' has a wrong offset!");
static_assert(offsetof(AAISpawnManager_C, GreenTypeZone) == 0x0002D4, "Member 'AAISpawnManager_C::GreenTypeZone' has a wrong offset!");
static_assert(offsetof(AAISpawnManager_C, YellowTypeZone) == 0x0002D8, "Member 'AAISpawnManager_C::YellowTypeZone' has a wrong offset!");
static_assert(offsetof(AAISpawnManager_C, RedTypeZone) == 0x0002DC, "Member 'AAISpawnManager_C::RedTypeZone' has a wrong offset!");
static_assert(offsetof(AAISpawnManager_C, BlueZoneLimit) == 0x0002E0, "Member 'AAISpawnManager_C::BlueZoneLimit' has a wrong offset!");
static_assert(offsetof(AAISpawnManager_C, GreenZoneLimit) == 0x0002E4, "Member 'AAISpawnManager_C::GreenZoneLimit' has a wrong offset!");
static_assert(offsetof(AAISpawnManager_C, YellowZoneLimit) == 0x0002E8, "Member 'AAISpawnManager_C::YellowZoneLimit' has a wrong offset!");
static_assert(offsetof(AAISpawnManager_C, RedZoneLimit) == 0x0002EC, "Member 'AAISpawnManager_C::RedZoneLimit' has a wrong offset!");
static_assert(offsetof(AAISpawnManager_C, BanditSpawnCount) == 0x0002F0, "Member 'AAISpawnManager_C::BanditSpawnCount' has a wrong offset!");
static_assert(offsetof(AAISpawnManager_C, SpawnZoneMap) == 0x0002F8, "Member 'AAISpawnManager_C::SpawnZoneMap' has a wrong offset!");

}
