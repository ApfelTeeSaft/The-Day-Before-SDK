#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MainCategorySelectorEntryV2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_MainCategorySelectorEntryV2.WBP_MainCategorySelectorEntryV2_C
// 0x0090 (0x0310 - 0x0280)
class UWBP_MainCategorySelectorEntryV2_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Deselect_Hovered;                                  // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Select_Hovered;                                    // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Deselect;                                          // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Select;                                            // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hover;                                             // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                Button;                                            // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             EntryText;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BG;                                          // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Hover;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bDisabled;                                         // 0x02D0(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_2D1[0x3];                                      // 0x02D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Index_WBP_MainCategorySelectorEntryV2_C;           // 0x02D4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x02D8(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn)
	bool                                          bSelected;                                         // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHovered;                                          // 0x02F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F2[0x6];                                      // 0x02F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnEntrySelected;                                   // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bToggle;                                           // 0x0308(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BndEvt__WBP_MainCategorySelectorEntryV2_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__WBP_MainCategorySelectorEntryV2_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_MainCategorySelectorEntryV2_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_MainCategorySelectorEntryV2(int32 EntryPoint);
	void GetText(class FText* Param_Text);
	void OnEntrySelected__DelegateSignature(int32 Param_Index);
	void PreConstruct(bool IsDesignTime);
	void SelectEntry(bool Param_Select);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MainCategorySelectorEntryV2_C">();
	}
	static class UWBP_MainCategorySelectorEntryV2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MainCategorySelectorEntryV2_C>();
	}
};
static_assert(alignof(UWBP_MainCategorySelectorEntryV2_C) == 0x000008, "Wrong alignment on UWBP_MainCategorySelectorEntryV2_C");
static_assert(sizeof(UWBP_MainCategorySelectorEntryV2_C) == 0x000310, "Wrong size on UWBP_MainCategorySelectorEntryV2_C");
static_assert(offsetof(UWBP_MainCategorySelectorEntryV2_C, UberGraphFrame) == 0x000280, "Member 'UWBP_MainCategorySelectorEntryV2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_MainCategorySelectorEntryV2_C, Deselect_Hovered) == 0x000288, "Member 'UWBP_MainCategorySelectorEntryV2_C::Deselect_Hovered' has a wrong offset!");
static_assert(offsetof(UWBP_MainCategorySelectorEntryV2_C, Select_Hovered) == 0x000290, "Member 'UWBP_MainCategorySelectorEntryV2_C::Select_Hovered' has a wrong offset!");
static_assert(offsetof(UWBP_MainCategorySelectorEntryV2_C, Deselect) == 0x000298, "Member 'UWBP_MainCategorySelectorEntryV2_C::Deselect' has a wrong offset!");
static_assert(offsetof(UWBP_MainCategorySelectorEntryV2_C, Select) == 0x0002A0, "Member 'UWBP_MainCategorySelectorEntryV2_C::Select' has a wrong offset!");
static_assert(offsetof(UWBP_MainCategorySelectorEntryV2_C, Hover) == 0x0002A8, "Member 'UWBP_MainCategorySelectorEntryV2_C::Hover' has a wrong offset!");
static_assert(offsetof(UWBP_MainCategorySelectorEntryV2_C, Button) == 0x0002B0, "Member 'UWBP_MainCategorySelectorEntryV2_C::Button' has a wrong offset!");
static_assert(offsetof(UWBP_MainCategorySelectorEntryV2_C, EntryText) == 0x0002B8, "Member 'UWBP_MainCategorySelectorEntryV2_C::EntryText' has a wrong offset!");
static_assert(offsetof(UWBP_MainCategorySelectorEntryV2_C, Image_BG) == 0x0002C0, "Member 'UWBP_MainCategorySelectorEntryV2_C::Image_BG' has a wrong offset!");
static_assert(offsetof(UWBP_MainCategorySelectorEntryV2_C, Overlay_Hover) == 0x0002C8, "Member 'UWBP_MainCategorySelectorEntryV2_C::Overlay_Hover' has a wrong offset!");
static_assert(offsetof(UWBP_MainCategorySelectorEntryV2_C, bDisabled) == 0x0002D0, "Member 'UWBP_MainCategorySelectorEntryV2_C::bDisabled' has a wrong offset!");
static_assert(offsetof(UWBP_MainCategorySelectorEntryV2_C, Index_WBP_MainCategorySelectorEntryV2_C) == 0x0002D4, "Member 'UWBP_MainCategorySelectorEntryV2_C::Index_WBP_MainCategorySelectorEntryV2_C' has a wrong offset!");
static_assert(offsetof(UWBP_MainCategorySelectorEntryV2_C, Text) == 0x0002D8, "Member 'UWBP_MainCategorySelectorEntryV2_C::Text' has a wrong offset!");
static_assert(offsetof(UWBP_MainCategorySelectorEntryV2_C, bSelected) == 0x0002F0, "Member 'UWBP_MainCategorySelectorEntryV2_C::bSelected' has a wrong offset!");
static_assert(offsetof(UWBP_MainCategorySelectorEntryV2_C, bHovered) == 0x0002F1, "Member 'UWBP_MainCategorySelectorEntryV2_C::bHovered' has a wrong offset!");
static_assert(offsetof(UWBP_MainCategorySelectorEntryV2_C, OnEntrySelected) == 0x0002F8, "Member 'UWBP_MainCategorySelectorEntryV2_C::OnEntrySelected' has a wrong offset!");
static_assert(offsetof(UWBP_MainCategorySelectorEntryV2_C, bToggle) == 0x000308, "Member 'UWBP_MainCategorySelectorEntryV2_C::bToggle' has a wrong offset!");

}

