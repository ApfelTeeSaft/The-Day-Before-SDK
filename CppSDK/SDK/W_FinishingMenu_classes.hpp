#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_FinishingMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "InputCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_FinishingMenu.W_FinishingMenu_C
// 0x00B0 (0x0330 - 0x0280)
class UW_FinishingMenu_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ShowAnim;                                          // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HideAnim;                                          // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Interact_C*                          CatchUpInteract;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Interact_C*                          FinishInteract;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FKey                                   FinishKey;                                         // 0x02B0(0x0018)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FKey                                   CatchUpKey;                                        // 0x02C8(0x0018)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                          IsHidden;                                          // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E1[0x7];                                      // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        DeltaTime;                                         // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FinishValue;                                       // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CatchUpValue;                                      // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FinishPressed;                                     // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CatchUpPressed;                                    // 0x0301(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_302[0x6];                                      // 0x0302(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASurvivalPlayer_C*                      Player;                                            // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        CatchUpTimeMultiplier;                             // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Bandit_Mannequin;                               // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_319[0x7];                                      // 0x0319(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABandit_Mannequin_C*                    Is_Bandit_Mannequin_0;                             // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSelfTarget;                                      // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_W_FinishingMenu(int32 EntryPoint);
	void Hide();
	void Show(class ASurvivalPlayer_C* Param_Player, class ABandit_Mannequin_C* IsBanditMannequin, bool Param_IsSelfTarget);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_FinishingMenu_C">();
	}
	static class UW_FinishingMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_FinishingMenu_C>();
	}
};
static_assert(alignof(UW_FinishingMenu_C) == 0x000008, "Wrong alignment on UW_FinishingMenu_C");
static_assert(sizeof(UW_FinishingMenu_C) == 0x000330, "Wrong size on UW_FinishingMenu_C");
static_assert(offsetof(UW_FinishingMenu_C, UberGraphFrame) == 0x000280, "Member 'UW_FinishingMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_FinishingMenu_C, ShowAnim) == 0x000288, "Member 'UW_FinishingMenu_C::ShowAnim' has a wrong offset!");
static_assert(offsetof(UW_FinishingMenu_C, HideAnim) == 0x000290, "Member 'UW_FinishingMenu_C::HideAnim' has a wrong offset!");
static_assert(offsetof(UW_FinishingMenu_C, CanvasPanel_0) == 0x000298, "Member 'UW_FinishingMenu_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UW_FinishingMenu_C, CatchUpInteract) == 0x0002A0, "Member 'UW_FinishingMenu_C::CatchUpInteract' has a wrong offset!");
static_assert(offsetof(UW_FinishingMenu_C, FinishInteract) == 0x0002A8, "Member 'UW_FinishingMenu_C::FinishInteract' has a wrong offset!");
static_assert(offsetof(UW_FinishingMenu_C, FinishKey) == 0x0002B0, "Member 'UW_FinishingMenu_C::FinishKey' has a wrong offset!");
static_assert(offsetof(UW_FinishingMenu_C, CatchUpKey) == 0x0002C8, "Member 'UW_FinishingMenu_C::CatchUpKey' has a wrong offset!");
static_assert(offsetof(UW_FinishingMenu_C, IsHidden) == 0x0002E0, "Member 'UW_FinishingMenu_C::IsHidden' has a wrong offset!");
static_assert(offsetof(UW_FinishingMenu_C, DeltaTime) == 0x0002E8, "Member 'UW_FinishingMenu_C::DeltaTime' has a wrong offset!");
static_assert(offsetof(UW_FinishingMenu_C, FinishValue) == 0x0002F0, "Member 'UW_FinishingMenu_C::FinishValue' has a wrong offset!");
static_assert(offsetof(UW_FinishingMenu_C, CatchUpValue) == 0x0002F8, "Member 'UW_FinishingMenu_C::CatchUpValue' has a wrong offset!");
static_assert(offsetof(UW_FinishingMenu_C, FinishPressed) == 0x000300, "Member 'UW_FinishingMenu_C::FinishPressed' has a wrong offset!");
static_assert(offsetof(UW_FinishingMenu_C, CatchUpPressed) == 0x000301, "Member 'UW_FinishingMenu_C::CatchUpPressed' has a wrong offset!");
static_assert(offsetof(UW_FinishingMenu_C, Player) == 0x000308, "Member 'UW_FinishingMenu_C::Player' has a wrong offset!");
static_assert(offsetof(UW_FinishingMenu_C, CatchUpTimeMultiplier) == 0x000310, "Member 'UW_FinishingMenu_C::CatchUpTimeMultiplier' has a wrong offset!");
static_assert(offsetof(UW_FinishingMenu_C, Is_Bandit_Mannequin) == 0x000318, "Member 'UW_FinishingMenu_C::Is_Bandit_Mannequin' has a wrong offset!");
static_assert(offsetof(UW_FinishingMenu_C, Is_Bandit_Mannequin_0) == 0x000320, "Member 'UW_FinishingMenu_C::Is_Bandit_Mannequin_0' has a wrong offset!");
static_assert(offsetof(UW_FinishingMenu_C, IsSelfTarget) == 0x000328, "Member 'UW_FinishingMenu_C::IsSelfTarget' has a wrong offset!");

}

