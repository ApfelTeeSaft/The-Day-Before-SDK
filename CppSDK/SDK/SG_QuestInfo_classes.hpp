#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SG_QuestInfo

#include "Basic.hpp"

#include "QuestSaveStructure_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SG_QuestInfo.SG_QuestInfo_C
// 0x0050 (0x0078 - 0x0028)
class USG_QuestInfo_C final : public USaveGame
{
public:
	TMap<int32, struct FQuestSaveStructure>       QuestsInfo;                                        // 0x0028(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SG_QuestInfo_C">();
	}
	static class USG_QuestInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USG_QuestInfo_C>();
	}
};
static_assert(alignof(USG_QuestInfo_C) == 0x000008, "Wrong alignment on USG_QuestInfo_C");
static_assert(sizeof(USG_QuestInfo_C) == 0x000078, "Wrong size on USG_QuestInfo_C");
static_assert(offsetof(USG_QuestInfo_C, QuestsInfo) == 0x000028, "Member 'USG_QuestInfo_C::QuestsInfo' has a wrong offset!");

}
