#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InputHints

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "ENUM_ButtonHintType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_InputHints.WBP_InputHints_C
// 0x00A8 (0x0328 - 0x0280)
class UWBP_InputHints_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Show_Anim;                                         // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_0;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_ActionText;                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_ActionType;                              // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_KeyIcon_C*                         WBP_KeyIcon;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Showed;                                            // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B1[0x7];                                      // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_GameHUD_C*                          HUD;                                               // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                   Input_Action;                                      // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, class FText>                HintContent;                                       // 0x02C8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          TempShowStatus;                                    // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_319[0x7];                                      // 0x0319(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASurvPC_C*                              As_Surv_PC;                                        // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_InputHints(int32 EntryPoint);
	void GetInputAction(class FName* Param_Input_Action);
	void HintByTutorialStageIndex(const class FString& QuestStage);
	void HintDismiss();
	void InstantHide();
	void OnCloseHint();
	void OnOpenHint();
	void OnSlidesIsShow();
	void OnTimerDismiss();
	void PreConstruct(bool IsDesignTime);
	void SetInfo(class FName InputAction);
	void Show(bool Param_Show);
	void ShowAfterSlides();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_InputHints_C">();
	}
	static class UWBP_InputHints_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_InputHints_C>();
	}
};
static_assert(alignof(UWBP_InputHints_C) == 0x000008, "Wrong alignment on UWBP_InputHints_C");
static_assert(sizeof(UWBP_InputHints_C) == 0x000328, "Wrong size on UWBP_InputHints_C");
static_assert(offsetof(UWBP_InputHints_C, UberGraphFrame) == 0x000280, "Member 'UWBP_InputHints_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_InputHints_C, Show_Anim) == 0x000288, "Member 'UWBP_InputHints_C::Show_Anim' has a wrong offset!");
static_assert(offsetof(UWBP_InputHints_C, SizeBox_0) == 0x000290, "Member 'UWBP_InputHints_C::SizeBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_InputHints_C, TextBlock_ActionText) == 0x000298, "Member 'UWBP_InputHints_C::TextBlock_ActionText' has a wrong offset!");
static_assert(offsetof(UWBP_InputHints_C, TextBlock_ActionType) == 0x0002A0, "Member 'UWBP_InputHints_C::TextBlock_ActionType' has a wrong offset!");
static_assert(offsetof(UWBP_InputHints_C, WBP_KeyIcon) == 0x0002A8, "Member 'UWBP_InputHints_C::WBP_KeyIcon' has a wrong offset!");
static_assert(offsetof(UWBP_InputHints_C, Showed) == 0x0002B0, "Member 'UWBP_InputHints_C::Showed' has a wrong offset!");
static_assert(offsetof(UWBP_InputHints_C, HUD) == 0x0002B8, "Member 'UWBP_InputHints_C::HUD' has a wrong offset!");
static_assert(offsetof(UWBP_InputHints_C, Input_Action) == 0x0002C0, "Member 'UWBP_InputHints_C::Input_Action' has a wrong offset!");
static_assert(offsetof(UWBP_InputHints_C, HintContent) == 0x0002C8, "Member 'UWBP_InputHints_C::HintContent' has a wrong offset!");
static_assert(offsetof(UWBP_InputHints_C, TempShowStatus) == 0x000318, "Member 'UWBP_InputHints_C::TempShowStatus' has a wrong offset!");
static_assert(offsetof(UWBP_InputHints_C, As_Surv_PC) == 0x000320, "Member 'UWBP_InputHints_C::As_Surv_PC' has a wrong offset!");

}
