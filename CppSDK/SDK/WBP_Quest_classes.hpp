#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Quest

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Quest.WBP_Quest_C
// 0x0020 (0x02A0 - 0x0280)
class UWBP_Quest_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_35;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTreeView*                              QuestTreeView;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ASurvPC_C*                              Player;                                            // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Quest(int32 EntryPoint);
	void OnActivatedQuest(class UBP_Objective_C* RootObjectiveCollection);
	void OnCompletedQuest(class UBP_Objective_C* Objective);
	void OnInitialized();
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Quest_C">();
	}
	static class UWBP_Quest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Quest_C>();
	}
};
static_assert(alignof(UWBP_Quest_C) == 0x000008, "Wrong alignment on UWBP_Quest_C");
static_assert(sizeof(UWBP_Quest_C) == 0x0002A0, "Wrong size on UWBP_Quest_C");
static_assert(offsetof(UWBP_Quest_C, UberGraphFrame) == 0x000280, "Member 'UWBP_Quest_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Quest_C, Image_35) == 0x000288, "Member 'UWBP_Quest_C::Image_35' has a wrong offset!");
static_assert(offsetof(UWBP_Quest_C, QuestTreeView) == 0x000290, "Member 'UWBP_Quest_C::QuestTreeView' has a wrong offset!");
static_assert(offsetof(UWBP_Quest_C, Player) == 0x000298, "Member 'UWBP_Quest_C::Player' has a wrong offset!");

}
