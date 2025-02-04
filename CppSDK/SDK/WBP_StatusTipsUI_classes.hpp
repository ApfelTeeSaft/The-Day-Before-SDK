#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_StatusTipsUI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_StatusTipsUI.WBP_StatusTipsUI_C
// 0x0078 (0x02F8 - 0x0280)
class UWBP_StatusTipsUI_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border_Title;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_MessageIcon;                                 // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_WarningText;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextAfterCoin;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBeforeCoin;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TipActualText_1;                                   // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TipNameText;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_isWarning;                          // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Tip_Name;                                          // 0x02C8(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   Actual_Tip;                                        // 0x02E0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void ExecuteUbergraph_WBP_StatusTipsUI(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void TipVisible(const class FText& TipName, const class FText& ActualTip, float Duration);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_StatusTipsUI_C">();
	}
	static class UWBP_StatusTipsUI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_StatusTipsUI_C>();
	}
};
static_assert(alignof(UWBP_StatusTipsUI_C) == 0x000008, "Wrong alignment on UWBP_StatusTipsUI_C");
static_assert(sizeof(UWBP_StatusTipsUI_C) == 0x0002F8, "Wrong size on UWBP_StatusTipsUI_C");
static_assert(offsetof(UWBP_StatusTipsUI_C, UberGraphFrame) == 0x000280, "Member 'UWBP_StatusTipsUI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_StatusTipsUI_C, Border_Title) == 0x000288, "Member 'UWBP_StatusTipsUI_C::Border_Title' has a wrong offset!");
static_assert(offsetof(UWBP_StatusTipsUI_C, Image_MessageIcon) == 0x000290, "Member 'UWBP_StatusTipsUI_C::Image_MessageIcon' has a wrong offset!");
static_assert(offsetof(UWBP_StatusTipsUI_C, Text_WarningText) == 0x000298, "Member 'UWBP_StatusTipsUI_C::Text_WarningText' has a wrong offset!");
static_assert(offsetof(UWBP_StatusTipsUI_C, TextAfterCoin) == 0x0002A0, "Member 'UWBP_StatusTipsUI_C::TextAfterCoin' has a wrong offset!");
static_assert(offsetof(UWBP_StatusTipsUI_C, TextBeforeCoin) == 0x0002A8, "Member 'UWBP_StatusTipsUI_C::TextBeforeCoin' has a wrong offset!");
static_assert(offsetof(UWBP_StatusTipsUI_C, TipActualText_1) == 0x0002B0, "Member 'UWBP_StatusTipsUI_C::TipActualText_1' has a wrong offset!");
static_assert(offsetof(UWBP_StatusTipsUI_C, TipNameText) == 0x0002B8, "Member 'UWBP_StatusTipsUI_C::TipNameText' has a wrong offset!");
static_assert(offsetof(UWBP_StatusTipsUI_C, WidgetSwitcher_isWarning) == 0x0002C0, "Member 'UWBP_StatusTipsUI_C::WidgetSwitcher_isWarning' has a wrong offset!");
static_assert(offsetof(UWBP_StatusTipsUI_C, Tip_Name) == 0x0002C8, "Member 'UWBP_StatusTipsUI_C::Tip_Name' has a wrong offset!");
static_assert(offsetof(UWBP_StatusTipsUI_C, Actual_Tip) == 0x0002E0, "Member 'UWBP_StatusTipsUI_C::Actual_Tip' has a wrong offset!");

}

