#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Play3DFMod

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "QuestFramework_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Play3DFMod.Play3DFMod_C
// 0x0028 (0x0060 - 0x0038)
class UPlay3DFMod_C final : public UQuestEvent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0038(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFMODEvent*                             Event;                                             // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          StopEvent;                                         // 0x0048(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Tag;                                               // 0x004C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Row;                                               // 0x0054(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteEvent(class UQuestContext* Context, const struct FQuestEventPayload& Payload);
	void ExecuteUbergraph_Play3DFMod(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Play3DFMod_C">();
	}
	static class UPlay3DFMod_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlay3DFMod_C>();
	}
};
static_assert(alignof(UPlay3DFMod_C) == 0x000008, "Wrong alignment on UPlay3DFMod_C");
static_assert(sizeof(UPlay3DFMod_C) == 0x000060, "Wrong size on UPlay3DFMod_C");
static_assert(offsetof(UPlay3DFMod_C, UberGraphFrame) == 0x000038, "Member 'UPlay3DFMod_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlay3DFMod_C, Event) == 0x000040, "Member 'UPlay3DFMod_C::Event' has a wrong offset!");
static_assert(offsetof(UPlay3DFMod_C, StopEvent) == 0x000048, "Member 'UPlay3DFMod_C::StopEvent' has a wrong offset!");
static_assert(offsetof(UPlay3DFMod_C, Tag) == 0x00004C, "Member 'UPlay3DFMod_C::Tag' has a wrong offset!");
static_assert(offsetof(UPlay3DFMod_C, Row) == 0x000054, "Member 'UPlay3DFMod_C::Row' has a wrong offset!");

}
