#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuestEventListener

#include "Basic.hpp"


namespace SDK::Params
{

// Function QuestEventListener.QuestEventListener_C.OnCompleteCurrentQuest
// 0x0004 (0x0004 - 0x0000)
struct QuestEventListener_C_OnCompleteCurrentQuest final
{
public:
	int32                                         QuestID;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestEventListener_C_OnCompleteCurrentQuest) == 0x000004, "Wrong alignment on QuestEventListener_C_OnCompleteCurrentQuest");
static_assert(sizeof(QuestEventListener_C_OnCompleteCurrentQuest) == 0x000004, "Wrong size on QuestEventListener_C_OnCompleteCurrentQuest");
static_assert(offsetof(QuestEventListener_C_OnCompleteCurrentQuest, QuestID) == 0x000000, "Member 'QuestEventListener_C_OnCompleteCurrentQuest::QuestID' has a wrong offset!");

// Function QuestEventListener.QuestEventListener_C.OnQuestEvent
// 0x0010 (0x0010 - 0x0000)
struct QuestEventListener_C_OnQuestEvent final
{
public:
	class FString                                 QuestEvent;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestEventListener_C_OnQuestEvent) == 0x000008, "Wrong alignment on QuestEventListener_C_OnQuestEvent");
static_assert(sizeof(QuestEventListener_C_OnQuestEvent) == 0x000010, "Wrong size on QuestEventListener_C_OnQuestEvent");
static_assert(offsetof(QuestEventListener_C_OnQuestEvent, QuestEvent) == 0x000000, "Member 'QuestEventListener_C_OnQuestEvent::QuestEvent' has a wrong offset!");

// Function QuestEventListener.QuestEventListener_C.OnQuestEventServerSide
// 0x0010 (0x0010 - 0x0000)
struct QuestEventListener_C_OnQuestEventServerSide final
{
public:
	class FString                                 Trigger;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestEventListener_C_OnQuestEventServerSide) == 0x000008, "Wrong alignment on QuestEventListener_C_OnQuestEventServerSide");
static_assert(sizeof(QuestEventListener_C_OnQuestEventServerSide) == 0x000010, "Wrong size on QuestEventListener_C_OnQuestEventServerSide");
static_assert(offsetof(QuestEventListener_C_OnQuestEventServerSide, Trigger) == 0x000000, "Member 'QuestEventListener_C_OnQuestEventServerSide::Trigger' has a wrong offset!");

}

