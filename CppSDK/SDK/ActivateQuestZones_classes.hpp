#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ActivateQuestZones

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "QuestFramework_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ActivateQuestZones.ActivateQuestZones_C
// 0x0010 (0x0048 - 0x0038)
class UActivateQuestZones_C final : public UQuestEvent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0038(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          Progreess_Zone;                                    // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Random;                                            // 0x0041(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteEvent(class UQuestContext* Context, const struct FQuestEventPayload& Payload);
	void ExecuteUbergraph_ActivateQuestZones(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ActivateQuestZones_C">();
	}
	static class UActivateQuestZones_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UActivateQuestZones_C>();
	}
};
static_assert(alignof(UActivateQuestZones_C) == 0x000008, "Wrong alignment on UActivateQuestZones_C");
static_assert(sizeof(UActivateQuestZones_C) == 0x000048, "Wrong size on UActivateQuestZones_C");
static_assert(offsetof(UActivateQuestZones_C, UberGraphFrame) == 0x000038, "Member 'UActivateQuestZones_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UActivateQuestZones_C, Progreess_Zone) == 0x000040, "Member 'UActivateQuestZones_C::Progreess_Zone' has a wrong offset!");
static_assert(offsetof(UActivateQuestZones_C, Random) == 0x000041, "Member 'UActivateQuestZones_C::Random' has a wrong offset!");

}
