#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Effect

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "EffectType_structs.hpp"
#include "StatType_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Effect.Effect_C
// 0x0060 (0x0088 - 0x0028)
class UEffect_C final : public UObject
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0028(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        ActiveTime;                                        // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TickDuration;                                      // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EffectType                                    EffectType;                                        // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EStatType                                     StatType;                                          // 0x0041(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        StatValue;                                         // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Duration;                                          // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Actor;                                             // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Activated;                                         // 0x0060(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           ActionTimer;                                       // 0x0068(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UEffectMain_C*                          EffectMain;                                        // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        CacheValue;                                        // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TargetValue;                                       // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Action();
	double AddStatValue(class AActor* Param_Actor, EStatType Param_StatType, double NewValue, bool* Result);
	void CheckArenalinEffect(class UBPC_PlayerStatsComponent_C* PlayerStats, EStatType StatsType, bool* Find);
	void ExecuteUbergraph_Effect(int32 EntryPoint);
	void ManualStop();
	void Start(class AActor* Param_Actor, EffectType Param_EffectType, EStatType Param_StatType, double Param_StatValue, double Param_Duration);
	void Stop();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Effect_C">();
	}
	static class UEffect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEffect_C>();
	}
};
static_assert(alignof(UEffect_C) == 0x000008, "Wrong alignment on UEffect_C");
static_assert(sizeof(UEffect_C) == 0x000088, "Wrong size on UEffect_C");
static_assert(offsetof(UEffect_C, UberGraphFrame) == 0x000028, "Member 'UEffect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEffect_C, ActiveTime) == 0x000030, "Member 'UEffect_C::ActiveTime' has a wrong offset!");
static_assert(offsetof(UEffect_C, TickDuration) == 0x000038, "Member 'UEffect_C::TickDuration' has a wrong offset!");
static_assert(offsetof(UEffect_C, EffectType) == 0x000040, "Member 'UEffect_C::EffectType' has a wrong offset!");
static_assert(offsetof(UEffect_C, StatType) == 0x000041, "Member 'UEffect_C::StatType' has a wrong offset!");
static_assert(offsetof(UEffect_C, StatValue) == 0x000048, "Member 'UEffect_C::StatValue' has a wrong offset!");
static_assert(offsetof(UEffect_C, Duration) == 0x000050, "Member 'UEffect_C::Duration' has a wrong offset!");
static_assert(offsetof(UEffect_C, Actor) == 0x000058, "Member 'UEffect_C::Actor' has a wrong offset!");
static_assert(offsetof(UEffect_C, Activated) == 0x000060, "Member 'UEffect_C::Activated' has a wrong offset!");
static_assert(offsetof(UEffect_C, ActionTimer) == 0x000068, "Member 'UEffect_C::ActionTimer' has a wrong offset!");
static_assert(offsetof(UEffect_C, EffectMain) == 0x000070, "Member 'UEffect_C::EffectMain' has a wrong offset!");
static_assert(offsetof(UEffect_C, CacheValue) == 0x000078, "Member 'UEffect_C::CacheValue' has a wrong offset!");
static_assert(offsetof(UEffect_C, TargetValue) == 0x000080, "Member 'UEffect_C::TargetValue' has a wrong offset!");

}

