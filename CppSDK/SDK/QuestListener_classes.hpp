#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuestListener

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass QuestListener.QuestListener_C
// 0x0000 (0x0028 - 0x0028)
class IQuestListener_C final : public IInterface
{
public:
	void AksForHighlightableActorsWithTag(const class FString& Tag, TArray<TScriptInterface<class II_Highlightable_C>>* Result);
	void AskForHighlightableActors(TArray<TScriptInterface<class II_Highlightable_C>>* FoundActors);
	void ChangeQuestHint(const class FString& Hint);
	void CreateTimeoutTrigger(const class FString& Trigger, double Duration);
	void OnQuestCompleted(class UQuestV2_C* CompletedQuest);
	void SetMarkers(const TArray<struct FVector>& Markers);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestListener_C">();
	}
	static class IQuestListener_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IQuestListener_C>();
	}
};
static_assert(alignof(IQuestListener_C) == 0x000008, "Wrong alignment on IQuestListener_C");
static_assert(sizeof(IQuestListener_C) == 0x000028, "Wrong size on IQuestListener_C");

}

