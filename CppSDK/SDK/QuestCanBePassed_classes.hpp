#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuestCanBePassed

#include "Basic.hpp"

#include "AGSGraphRuntime_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass QuestCanBePassed.QuestCanBePassed_C
// 0x0000 (0x0038 - 0x0038)
class UQuestCanBePassed_C final : public UAGSCondition
{
public:
	bool VerifyCondition(class APlayerController* PlayerController) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestCanBePassed_C">();
	}
	static class UQuestCanBePassed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestCanBePassed_C>();
	}
};
static_assert(alignof(UQuestCanBePassed_C) == 0x000008, "Wrong alignment on UQuestCanBePassed_C");
static_assert(sizeof(UQuestCanBePassed_C) == 0x000038, "Wrong size on UQuestCanBePassed_C");

}
