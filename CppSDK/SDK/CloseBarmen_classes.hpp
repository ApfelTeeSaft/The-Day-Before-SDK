#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CloseBarmen

#include "Basic.hpp"

#include "AGSGraphRuntime_classes.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass CloseBarmen.CloseBarmen_C
// 0x0030 (0x0060 - 0x0030)
class UCloseBarmen_C final : public UAGSAction
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                           QuestGameplay_Tag;                                 // 0x0038(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowBigSlides;                                     // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   SlideName;                                         // 0x0044(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 StageName;                                         // 0x0050(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteAction(class APlayerController* PlayerController, class UAGSGraphNode* NodeOwner);
	void ExecuteUbergraph_CloseBarmen(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CloseBarmen_C">();
	}
	static class UCloseBarmen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCloseBarmen_C>();
	}
};
static_assert(alignof(UCloseBarmen_C) == 0x000008, "Wrong alignment on UCloseBarmen_C");
static_assert(sizeof(UCloseBarmen_C) == 0x000060, "Wrong size on UCloseBarmen_C");
static_assert(offsetof(UCloseBarmen_C, UberGraphFrame) == 0x000030, "Member 'UCloseBarmen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCloseBarmen_C, QuestGameplay_Tag) == 0x000038, "Member 'UCloseBarmen_C::QuestGameplay_Tag' has a wrong offset!");
static_assert(offsetof(UCloseBarmen_C, ShowBigSlides) == 0x000040, "Member 'UCloseBarmen_C::ShowBigSlides' has a wrong offset!");
static_assert(offsetof(UCloseBarmen_C, SlideName) == 0x000044, "Member 'UCloseBarmen_C::SlideName' has a wrong offset!");
static_assert(offsetof(UCloseBarmen_C, StageName) == 0x000050, "Member 'UCloseBarmen_C::StageName' has a wrong offset!");

}

