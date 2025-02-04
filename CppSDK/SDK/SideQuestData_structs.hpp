#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SideQuestData

#include "Basic.hpp"

#include "QuestData_0_structs.hpp"


namespace SDK
{

// UserDefinedStruct SideQuestData.SideQuestData
// 0x0040 (0x0040 - 0x0000)
struct FSideQuestData final
{
public:
	class FString                                 ID_13_49EFDF094EB53B0E8A9D6F9508628521;            // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Name_3_B5B59193468B790801903E9BD7CCBA67;           // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 StartTrigger_5_5BB841604075C5C5B25CB3B226A6F4B4;   // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FQuestData>                     QuestsData_9_BBD6833E45A44B98E1940C99DFD1A847;     // 0x0030(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FSideQuestData) == 0x000008, "Wrong alignment on FSideQuestData");
static_assert(sizeof(FSideQuestData) == 0x000040, "Wrong size on FSideQuestData");
static_assert(offsetof(FSideQuestData, ID_13_49EFDF094EB53B0E8A9D6F9508628521) == 0x000000, "Member 'FSideQuestData::ID_13_49EFDF094EB53B0E8A9D6F9508628521' has a wrong offset!");
static_assert(offsetof(FSideQuestData, Name_3_B5B59193468B790801903E9BD7CCBA67) == 0x000010, "Member 'FSideQuestData::Name_3_B5B59193468B790801903E9BD7CCBA67' has a wrong offset!");
static_assert(offsetof(FSideQuestData, StartTrigger_5_5BB841604075C5C5B25CB3B226A6F4B4) == 0x000020, "Member 'FSideQuestData::StartTrigger_5_5BB841604075C5C5B25CB3B226A6F4B4' has a wrong offset!");
static_assert(offsetof(FSideQuestData, QuestsData_9_BBD6833E45A44B98E1940C99DFD1A847) == 0x000030, "Member 'FSideQuestData::QuestsData_9_BBD6833E45A44B98E1940C99DFD1A847' has a wrong offset!");

}

