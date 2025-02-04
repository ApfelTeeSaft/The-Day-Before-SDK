#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ClearTowersIndexes

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "QuestFramework_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ClearTowersIndexes.ClearTowersIndexes_C
// 0x0008 (0x0040 - 0x0038)
class UClearTowersIndexes_C final : public UQuestEvent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0038(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteEvent(class UQuestContext* Context, const struct FQuestEventPayload& Payload);
	void ExecuteUbergraph_ClearTowersIndexes(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ClearTowersIndexes_C">();
	}
	static class UClearTowersIndexes_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClearTowersIndexes_C>();
	}
};
static_assert(alignof(UClearTowersIndexes_C) == 0x000008, "Wrong alignment on UClearTowersIndexes_C");
static_assert(sizeof(UClearTowersIndexes_C) == 0x000040, "Wrong size on UClearTowersIndexes_C");
static_assert(offsetof(UClearTowersIndexes_C, UberGraphFrame) == 0x000038, "Member 'UClearTowersIndexes_C::UberGraphFrame' has a wrong offset!");

}

