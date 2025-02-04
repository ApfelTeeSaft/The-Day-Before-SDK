#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TimeoutTrigger

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "QuestTriggerV2_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TimeoutTrigger.TimeoutTrigger_C
// 0x0030 (0x02D8 - 0x02A8)
class ATimeoutTrigger_C final : public AQuestTriggerV2_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        Duration;                                          // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SpentTime;                                         // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsWorking;                                         // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C1[0x7];                                      // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 QuestEvent;                                        // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TimeoutTrigger(int32 EntryPoint);
	void Initialize(const class FString& Param_QuestEvent, double Param_Duration);
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TimeoutTrigger_C">();
	}
	static class ATimeoutTrigger_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATimeoutTrigger_C>();
	}
};
static_assert(alignof(ATimeoutTrigger_C) == 0x000008, "Wrong alignment on ATimeoutTrigger_C");
static_assert(sizeof(ATimeoutTrigger_C) == 0x0002D8, "Wrong size on ATimeoutTrigger_C");
static_assert(offsetof(ATimeoutTrigger_C, UberGraphFrame) == 0x0002A8, "Member 'ATimeoutTrigger_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ATimeoutTrigger_C, Duration) == 0x0002B0, "Member 'ATimeoutTrigger_C::Duration' has a wrong offset!");
static_assert(offsetof(ATimeoutTrigger_C, SpentTime) == 0x0002B8, "Member 'ATimeoutTrigger_C::SpentTime' has a wrong offset!");
static_assert(offsetof(ATimeoutTrigger_C, IsWorking) == 0x0002C0, "Member 'ATimeoutTrigger_C::IsWorking' has a wrong offset!");
static_assert(offsetof(ATimeoutTrigger_C, QuestEvent) == 0x0002C8, "Member 'ATimeoutTrigger_C::QuestEvent' has a wrong offset!");

}

