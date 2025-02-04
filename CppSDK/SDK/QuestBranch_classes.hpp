#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuestBranch

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass QuestBranch.QuestBranch_C
// 0x0058 (0x0080 - 0x0028)
class UQuestBranch_C : public UObject
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0028(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FString                                 ID;                                                // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UQuestV2_C*>                     Quests;                                            // 0x0040(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UQuestV2_C*                             CurrentQuest;                                      // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCompleted;                                       // 0x0058(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AQuestManager_C*                        Manager;                                           // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UQuestSystemV3_C*                       Parent;                                            // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FString                                 Name2;                                             // 0x0070(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void AddQuest(class UQuestV2_C* Quest);
	void ExecuteUbergraph_QuestBranch(int32 EntryPoint);
	void GetNextQuest(class UQuestV2_C** NextQuest);
	void GetNextQuestByID(int32 Param_ID, class UQuestV2_C** NextQuest);
	void GetQuestByID(int32 Param_ID, class UQuestV2_C** Quest);
	void HasNextQuest(int32 Param_ID, bool* HasNext);
	void Initialize(const class FString& Param_ID, class AQuestManager_C* Param_Manager, class UQuestSystemV3_C* QuestSystem);
	void InitializeV2(const class FString& Param_ID, class UQuestSystemV3_C* QuestSystem);
	void OnQuestCompleted(class UQuestV2_C* CompletedQuest);
	void ProcessLocalTrigger(const class FString& Trigger, bool* HasCompletedQuest, class UQuestV2_C** CompletedQuest);
	void ProcessQuestTrigger(const class FString& Trigger);
	void StartBranch();
	void SwitchQuest(class UQuestV2_C* Quest);
	void SwitchQuestSilent(class UQuestV2_C* Quest);
	void SwitchToNextQuest();
	void SwitchToNextQuestByID(int32 Param_ID);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestBranch_C">();
	}
	static class UQuestBranch_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestBranch_C>();
	}
};
static_assert(alignof(UQuestBranch_C) == 0x000008, "Wrong alignment on UQuestBranch_C");
static_assert(sizeof(UQuestBranch_C) == 0x000080, "Wrong size on UQuestBranch_C");
static_assert(offsetof(UQuestBranch_C, UberGraphFrame) == 0x000028, "Member 'UQuestBranch_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UQuestBranch_C, ID) == 0x000030, "Member 'UQuestBranch_C::ID' has a wrong offset!");
static_assert(offsetof(UQuestBranch_C, Quests) == 0x000040, "Member 'UQuestBranch_C::Quests' has a wrong offset!");
static_assert(offsetof(UQuestBranch_C, CurrentQuest) == 0x000050, "Member 'UQuestBranch_C::CurrentQuest' has a wrong offset!");
static_assert(offsetof(UQuestBranch_C, IsCompleted) == 0x000058, "Member 'UQuestBranch_C::IsCompleted' has a wrong offset!");
static_assert(offsetof(UQuestBranch_C, Manager) == 0x000060, "Member 'UQuestBranch_C::Manager' has a wrong offset!");
static_assert(offsetof(UQuestBranch_C, Parent) == 0x000068, "Member 'UQuestBranch_C::Parent' has a wrong offset!");
static_assert(offsetof(UQuestBranch_C, Name2) == 0x000070, "Member 'UQuestBranch_C::Name2' has a wrong offset!");

}

