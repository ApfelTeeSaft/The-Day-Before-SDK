#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EndTutor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "QuestFramework_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass EndTutor.EndTutor_C
// 0x0018 (0x0050 - 0x0038)
class UEndTutor_C final : public UQuestEvent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0038(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UQuestContext*                          Context;                                           // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UQuestData_C*                           As_Quest_Data;                                     // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteEvent(class UQuestContext* Param_Context, const struct FQuestEventPayload& Payload);
	void ExecuteUbergraph_EndTutor(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EndTutor_C">();
	}
	static class UEndTutor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEndTutor_C>();
	}
};
static_assert(alignof(UEndTutor_C) == 0x000008, "Wrong alignment on UEndTutor_C");
static_assert(sizeof(UEndTutor_C) == 0x000050, "Wrong size on UEndTutor_C");
static_assert(offsetof(UEndTutor_C, UberGraphFrame) == 0x000038, "Member 'UEndTutor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEndTutor_C, Context) == 0x000040, "Member 'UEndTutor_C::Context' has a wrong offset!");
static_assert(offsetof(UEndTutor_C, As_Quest_Data) == 0x000048, "Member 'UEndTutor_C::As_Quest_Data' has a wrong offset!");

}
