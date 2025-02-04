#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TutorialQuest3DTracker

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TutorialQuest3DTracker.WBP_TutorialQuest3DTracker_C
// 0x0020 (0x02A0 - 0x0280)
class UWBP_TutorialQuest3DTracker_C final : public UUserWidget
{
public:
	class UTextBlock*                             TextBlock_Distance;                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetComponent*                       WidgetComponent;                                   // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           DistanceCheckTimer;                                // 0x0290(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           LoadCheck;                                         // 0x0298(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void CheckDistance();
	void Enable(bool Param_Enable);
	void EnableLoadingCheck();
	int32 GetDistance();
	void SetWidgetComponent(class UWidgetComponent* Param_WidgetComponent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TutorialQuest3DTracker_C">();
	}
	static class UWBP_TutorialQuest3DTracker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TutorialQuest3DTracker_C>();
	}
};
static_assert(alignof(UWBP_TutorialQuest3DTracker_C) == 0x000008, "Wrong alignment on UWBP_TutorialQuest3DTracker_C");
static_assert(sizeof(UWBP_TutorialQuest3DTracker_C) == 0x0002A0, "Wrong size on UWBP_TutorialQuest3DTracker_C");
static_assert(offsetof(UWBP_TutorialQuest3DTracker_C, TextBlock_Distance) == 0x000280, "Member 'UWBP_TutorialQuest3DTracker_C::TextBlock_Distance' has a wrong offset!");
static_assert(offsetof(UWBP_TutorialQuest3DTracker_C, WidgetComponent) == 0x000288, "Member 'UWBP_TutorialQuest3DTracker_C::WidgetComponent' has a wrong offset!");
static_assert(offsetof(UWBP_TutorialQuest3DTracker_C, DistanceCheckTimer) == 0x000290, "Member 'UWBP_TutorialQuest3DTracker_C::DistanceCheckTimer' has a wrong offset!");
static_assert(offsetof(UWBP_TutorialQuest3DTracker_C, LoadCheck) == 0x000298, "Member 'UWBP_TutorialQuest3DTracker_C::LoadCheck' has a wrong offset!");

}

