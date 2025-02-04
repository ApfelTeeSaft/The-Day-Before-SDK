#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_QuestZone_Towers

#include "Basic.hpp"

#include "E_InteractType_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_QuestZone_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_QuestZone_Towers.BP_QuestZone_Towers_C
// 0x0078 (0x0348 - 0x02D0)
class ABP_QuestZone_Towers_C final : public ABP_QuestZone_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_QuestZone_Towers_C;              // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UIconComponent_C*                       IconComponent;                                     // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         TowerIndex;                                        // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E4[0x4];                                      // 0x02E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UQuest*>                         TowerQuest;                                        // 0x02E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector2D                              Icon_Size;                                         // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Name_BP_QuestZone_Towers_C;                        // 0x0308(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UTexture2D*                             Icon;                                              // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IconHiden;                                         // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_329[0x7];                                      // 0x0329(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Loacation;                                         // 0x0330(0x0018)(Edit, BlueprintVisible)

public:
	void Active_3DPoint_Widget(bool Toggle);
	void ExecuteUbergraph_BP_QuestZone_Towers(int32 EntryPoint);
	void GetMapIconData(struct FVector* Location, class UTexture2D** Param_Icon, struct FVector2D* IconSize, double* RotationYaw, class AActor** WorldActor, class FText* Param_Name, class FText* Description);
	void UpdateIconPosition(const struct FVector2D& Position);
	void Zoom(bool Out);
	void OnFocused(class APawn* Player, class AActor* HighlightActor, class UActorComponent* HighlightActorComponent, E_InteractType* InteractType, double* LateTime);
	void OnLocalInteract(class APawn* Player);
	void ReceiveBeginPlay();
	void Set3DWidgetVisibility(bool Visible);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_QuestZone_Towers_C">();
	}
	static class ABP_QuestZone_Towers_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_QuestZone_Towers_C>();
	}
};
static_assert(alignof(ABP_QuestZone_Towers_C) == 0x000008, "Wrong alignment on ABP_QuestZone_Towers_C");
static_assert(sizeof(ABP_QuestZone_Towers_C) == 0x000348, "Wrong size on ABP_QuestZone_Towers_C");
static_assert(offsetof(ABP_QuestZone_Towers_C, UberGraphFrame_BP_QuestZone_Towers_C) == 0x0002D0, "Member 'ABP_QuestZone_Towers_C::UberGraphFrame_BP_QuestZone_Towers_C' has a wrong offset!");
static_assert(offsetof(ABP_QuestZone_Towers_C, IconComponent) == 0x0002D8, "Member 'ABP_QuestZone_Towers_C::IconComponent' has a wrong offset!");
static_assert(offsetof(ABP_QuestZone_Towers_C, TowerIndex) == 0x0002E0, "Member 'ABP_QuestZone_Towers_C::TowerIndex' has a wrong offset!");
static_assert(offsetof(ABP_QuestZone_Towers_C, TowerQuest) == 0x0002E8, "Member 'ABP_QuestZone_Towers_C::TowerQuest' has a wrong offset!");
static_assert(offsetof(ABP_QuestZone_Towers_C, Icon_Size) == 0x0002F8, "Member 'ABP_QuestZone_Towers_C::Icon_Size' has a wrong offset!");
static_assert(offsetof(ABP_QuestZone_Towers_C, Name_BP_QuestZone_Towers_C) == 0x000308, "Member 'ABP_QuestZone_Towers_C::Name_BP_QuestZone_Towers_C' has a wrong offset!");
static_assert(offsetof(ABP_QuestZone_Towers_C, Icon) == 0x000320, "Member 'ABP_QuestZone_Towers_C::Icon' has a wrong offset!");
static_assert(offsetof(ABP_QuestZone_Towers_C, IconHiden) == 0x000328, "Member 'ABP_QuestZone_Towers_C::IconHiden' has a wrong offset!");
static_assert(offsetof(ABP_QuestZone_Towers_C, Loacation) == 0x000330, "Member 'ABP_QuestZone_Towers_C::Loacation' has a wrong offset!");

}

