#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InitTowersZones

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "QuestFramework_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass InitTowersZones.InitTowersZones_C
// 0x0010 (0x0048 - 0x0038)
class UInitTowersZones_C final : public UQuestEvent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0038(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ASurvPC_C*                              As_Surv_PC;                                        // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteEvent(class UQuestContext* Context, const struct FQuestEventPayload& Payload);
	void ExecuteUbergraph_InitTowersZones(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InitTowersZones_C">();
	}
	static class UInitTowersZones_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInitTowersZones_C>();
	}
};
static_assert(alignof(UInitTowersZones_C) == 0x000008, "Wrong alignment on UInitTowersZones_C");
static_assert(sizeof(UInitTowersZones_C) == 0x000048, "Wrong size on UInitTowersZones_C");
static_assert(offsetof(UInitTowersZones_C, UberGraphFrame) == 0x000038, "Member 'UInitTowersZones_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UInitTowersZones_C, As_Surv_PC) == 0x000040, "Member 'UInitTowersZones_C::As_Surv_PC' has a wrong offset!");

}
