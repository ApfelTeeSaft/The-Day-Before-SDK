#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DecreasePlayerStatsOnTutorialStart

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "QuestFramework_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DecreasePlayerStatsOnTutorialStart.DecreasePlayerStatsOnTutorialStart_C
// 0x0010 (0x0048 - 0x0038)
class UDecreasePlayerStatsOnTutorialStart_C final : public UQuestEvent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0038(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        RequiredThirst;                                    // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteEvent(class UQuestContext* Context, const struct FQuestEventPayload& Payload);
	void ExecuteUbergraph_DecreasePlayerStatsOnTutorialStart(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DecreasePlayerStatsOnTutorialStart_C">();
	}
	static class UDecreasePlayerStatsOnTutorialStart_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDecreasePlayerStatsOnTutorialStart_C>();
	}
};
static_assert(alignof(UDecreasePlayerStatsOnTutorialStart_C) == 0x000008, "Wrong alignment on UDecreasePlayerStatsOnTutorialStart_C");
static_assert(sizeof(UDecreasePlayerStatsOnTutorialStart_C) == 0x000048, "Wrong size on UDecreasePlayerStatsOnTutorialStart_C");
static_assert(offsetof(UDecreasePlayerStatsOnTutorialStart_C, UberGraphFrame) == 0x000038, "Member 'UDecreasePlayerStatsOnTutorialStart_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDecreasePlayerStatsOnTutorialStart_C, RequiredThirst) == 0x000040, "Member 'UDecreasePlayerStatsOnTutorialStart_C::RequiredThirst' has a wrong offset!");

}
