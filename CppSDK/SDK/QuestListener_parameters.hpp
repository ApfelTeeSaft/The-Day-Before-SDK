#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuestListener

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function QuestListener.QuestListener_C.AksForHighlightableActorsWithTag
// 0x0020 (0x0020 - 0x0000)
struct QuestListener_C_AksForHighlightableActorsWithTag final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<TScriptInterface<class II_Highlightable_C>> Result;                                            // 0x0010(0x0010)(Parm, OutParm)
};
static_assert(alignof(QuestListener_C_AksForHighlightableActorsWithTag) == 0x000008, "Wrong alignment on QuestListener_C_AksForHighlightableActorsWithTag");
static_assert(sizeof(QuestListener_C_AksForHighlightableActorsWithTag) == 0x000020, "Wrong size on QuestListener_C_AksForHighlightableActorsWithTag");
static_assert(offsetof(QuestListener_C_AksForHighlightableActorsWithTag, Tag) == 0x000000, "Member 'QuestListener_C_AksForHighlightableActorsWithTag::Tag' has a wrong offset!");
static_assert(offsetof(QuestListener_C_AksForHighlightableActorsWithTag, Result) == 0x000010, "Member 'QuestListener_C_AksForHighlightableActorsWithTag::Result' has a wrong offset!");

// Function QuestListener.QuestListener_C.AskForHighlightableActors
// 0x0010 (0x0010 - 0x0000)
struct QuestListener_C_AskForHighlightableActors final
{
public:
	TArray<TScriptInterface<class II_Highlightable_C>> FoundActors;                                       // 0x0000(0x0010)(Parm, OutParm)
};
static_assert(alignof(QuestListener_C_AskForHighlightableActors) == 0x000008, "Wrong alignment on QuestListener_C_AskForHighlightableActors");
static_assert(sizeof(QuestListener_C_AskForHighlightableActors) == 0x000010, "Wrong size on QuestListener_C_AskForHighlightableActors");
static_assert(offsetof(QuestListener_C_AskForHighlightableActors, FoundActors) == 0x000000, "Member 'QuestListener_C_AskForHighlightableActors::FoundActors' has a wrong offset!");

// Function QuestListener.QuestListener_C.ChangeQuestHint
// 0x0010 (0x0010 - 0x0000)
struct QuestListener_C_ChangeQuestHint final
{
public:
	class FString                                 Hint;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestListener_C_ChangeQuestHint) == 0x000008, "Wrong alignment on QuestListener_C_ChangeQuestHint");
static_assert(sizeof(QuestListener_C_ChangeQuestHint) == 0x000010, "Wrong size on QuestListener_C_ChangeQuestHint");
static_assert(offsetof(QuestListener_C_ChangeQuestHint, Hint) == 0x000000, "Member 'QuestListener_C_ChangeQuestHint::Hint' has a wrong offset!");

// Function QuestListener.QuestListener_C.CreateTimeoutTrigger
// 0x0018 (0x0018 - 0x0000)
struct QuestListener_C_CreateTimeoutTrigger final
{
public:
	class FString                                 Trigger;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	double                                        Duration;                                          // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestListener_C_CreateTimeoutTrigger) == 0x000008, "Wrong alignment on QuestListener_C_CreateTimeoutTrigger");
static_assert(sizeof(QuestListener_C_CreateTimeoutTrigger) == 0x000018, "Wrong size on QuestListener_C_CreateTimeoutTrigger");
static_assert(offsetof(QuestListener_C_CreateTimeoutTrigger, Trigger) == 0x000000, "Member 'QuestListener_C_CreateTimeoutTrigger::Trigger' has a wrong offset!");
static_assert(offsetof(QuestListener_C_CreateTimeoutTrigger, Duration) == 0x000010, "Member 'QuestListener_C_CreateTimeoutTrigger::Duration' has a wrong offset!");

// Function QuestListener.QuestListener_C.OnQuestCompleted
// 0x0008 (0x0008 - 0x0000)
struct QuestListener_C_OnQuestCompleted final
{
public:
	class UQuestV2_C*                             CompletedQuest;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestListener_C_OnQuestCompleted) == 0x000008, "Wrong alignment on QuestListener_C_OnQuestCompleted");
static_assert(sizeof(QuestListener_C_OnQuestCompleted) == 0x000008, "Wrong size on QuestListener_C_OnQuestCompleted");
static_assert(offsetof(QuestListener_C_OnQuestCompleted, CompletedQuest) == 0x000000, "Member 'QuestListener_C_OnQuestCompleted::CompletedQuest' has a wrong offset!");

// Function QuestListener.QuestListener_C.SetMarkers
// 0x0010 (0x0010 - 0x0000)
struct QuestListener_C_SetMarkers final
{
public:
	TArray<struct FVector>                        Markers;                                           // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(QuestListener_C_SetMarkers) == 0x000008, "Wrong alignment on QuestListener_C_SetMarkers");
static_assert(sizeof(QuestListener_C_SetMarkers) == 0x000010, "Wrong size on QuestListener_C_SetMarkers");
static_assert(offsetof(QuestListener_C_SetMarkers, Markers) == 0x000000, "Member 'QuestListener_C_SetMarkers::Markers' has a wrong offset!");

}

