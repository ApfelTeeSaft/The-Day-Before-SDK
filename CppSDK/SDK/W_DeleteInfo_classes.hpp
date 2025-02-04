#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_DeleteInfo

#include "Basic.hpp"

#include "ModalWindows_Action_enum_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_DeleteInfo.W_DeleteInfo_C
// 0x0168 (0x03E8 - 0x0280)
class UW_DeleteInfo_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_Minus_1;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_Modal;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_Plus_1;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_Components;                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_Money;                               // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_175;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_230;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BG1;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_item;                                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Money;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                                Slider_Craft;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_CurrentCounter;                               // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_ItemDescription;                              // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_ItemName;                                     // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_TotalMoney;                                   // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Desription;                              // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_ItemName;                                // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Money;                                   // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_BaseDialogueButton_C*                W_BaseDialogueButton_Accept;                       // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_BaseDialogueButton_C*                W_BaseDialogueButton_Cancel;                       // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_BaseDialogueButton_C*                W_BaseDialogueButton_Craft;                        // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_BaseDialogueButton_C*                W_BaseDialogueButton_Decline;                      // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_HintButtonNew_C*                     W_HintButtonNew_Accept;                            // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_HintButtonNew_C*                     W_HintButtonNew_Close;                             // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_0;                                  // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             EventClose;                                        // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnAccept;                                          // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                   ItemName;                                          // 0x0370(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   AcceptButtonText;                                  // 0x0388(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   ActionText;                                        // 0x03A0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UPaperSprite*                           Image;                                             // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	EModalWindows_Action_enum                     TypeOfAction;                                      // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_3C1[0x7];                                      // 0x03C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   DescriptionText;                                   // 0x03C8(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	double                                        Price;                                             // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BndEvt__W_DeleteInfo_Button_168_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__W_DeleteInfo_W_BaseDialogueButton_Accept_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature();
	void BndEvt__W_DeleteInfo_W_BaseDialogueButton_Cancel_K2Node_ComponentBoundEvent_6_OnPressed__DelegateSignature();
	void BndEvt__W_DeleteInfo_W_BaseDialogueButton_Craft_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature();
	void BndEvt__W_DeleteInfo_W_BaseDialogueButton_Decline_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature();
	void BndEvt__W_DeleteInfo_W_HintButtonNew_Accept_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
	void BndEvt__W_DeleteInfo_W_HintButtonNew_Close_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void EventClose__DelegateSignature();
	void ExecuteUbergraph_W_DeleteInfo(int32 EntryPoint);
	void OnAccept__DelegateSignature();
	void OnUpdate(const struct FFItemInfo& Item, bool* Result);
	void PreConstruct(bool IsDesignTime);
	void SetText(const class FText& Param_Name);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_DeleteInfo_C">();
	}
	static class UW_DeleteInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_DeleteInfo_C>();
	}
};
static_assert(alignof(UW_DeleteInfo_C) == 0x000008, "Wrong alignment on UW_DeleteInfo_C");
static_assert(sizeof(UW_DeleteInfo_C) == 0x0003E8, "Wrong size on UW_DeleteInfo_C");
static_assert(offsetof(UW_DeleteInfo_C, UberGraphFrame) == 0x000280, "Member 'UW_DeleteInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_DeleteInfo_C, Button_Minus_1) == 0x000288, "Member 'UW_DeleteInfo_C::Button_Minus_1' has a wrong offset!");
static_assert(offsetof(UW_DeleteInfo_C, Button_Modal) == 0x000290, "Member 'UW_DeleteInfo_C::Button_Modal' has a wrong offset!");
static_assert(offsetof(UW_DeleteInfo_C, Button_Plus_1) == 0x000298, "Member 'UW_DeleteInfo_C::Button_Plus_1' has a wrong offset!");
static_assert(offsetof(UW_DeleteInfo_C, HorizontalBox_Components) == 0x0002A0, "Member 'UW_DeleteInfo_C::HorizontalBox_Components' has a wrong offset!");
static_assert(offsetof(UW_DeleteInfo_C, HorizontalBox_Money) == 0x0002A8, "Member 'UW_DeleteInfo_C::HorizontalBox_Money' has a wrong offset!");
static_assert(offsetof(UW_DeleteInfo_C, Image_175) == 0x0002B0, "Member 'UW_DeleteInfo_C::Image_175' has a wrong offset!");
static_assert(offsetof(UW_DeleteInfo_C, Image_230) == 0x0002B8, "Member 'UW_DeleteInfo_C::Image_230' has a wrong offset!");
static_assert(offsetof(UW_DeleteInfo_C, Image_BG1) == 0x0002C0, "Member 'UW_DeleteInfo_C::Image_BG1' has a wrong offset!");
static_assert(offsetof(UW_DeleteInfo_C, Image_item) == 0x0002C8, "Member 'UW_DeleteInfo_C::Image_item' has a wrong offset!");
static_assert(offsetof(UW_DeleteInfo_C, Image_Money) == 0x0002D0, "Member 'UW_DeleteInfo_C::Image_Money' has a wrong offset!");
static_assert(offsetof(UW_DeleteInfo_C, Slider_Craft) == 0x0002D8, "Member 'UW_DeleteInfo_C::Slider_Craft' has a wrong offset!");
static_assert(offsetof(UW_DeleteInfo_C, Text_CurrentCounter) == 0x0002E0, "Member 'UW_DeleteInfo_C::Text_CurrentCounter' has a wrong offset!");
static_assert(offsetof(UW_DeleteInfo_C, Text_ItemDescription) == 0x0002E8, "Member 'UW_DeleteInfo_C::Text_ItemDescription' has a wrong offset!");
static_assert(offsetof(UW_DeleteInfo_C, Text_ItemName) == 0x0002F0, "Member 'UW_DeleteInfo_C::Text_ItemName' has a wrong offset!");
static_assert(offsetof(UW_DeleteInfo_C, Text_TotalMoney) == 0x0002F8, "Member 'UW_DeleteInfo_C::Text_TotalMoney' has a wrong offset!");
static_assert(offsetof(UW_DeleteInfo_C, TextBlock_Desription) == 0x000300, "Member 'UW_DeleteInfo_C::TextBlock_Desription' has a wrong offset!");
static_assert(offsetof(UW_DeleteInfo_C, TextBlock_ItemName) == 0x000308, "Member 'UW_DeleteInfo_C::TextBlock_ItemName' has a wrong offset!");
static_assert(offsetof(UW_DeleteInfo_C, TextBlock_Money) == 0x000310, "Member 'UW_DeleteInfo_C::TextBlock_Money' has a wrong offset!");
static_assert(offsetof(UW_DeleteInfo_C, W_BaseDialogueButton_Accept) == 0x000318, "Member 'UW_DeleteInfo_C::W_BaseDialogueButton_Accept' has a wrong offset!");
static_assert(offsetof(UW_DeleteInfo_C, W_BaseDialogueButton_Cancel) == 0x000320, "Member 'UW_DeleteInfo_C::W_BaseDialogueButton_Cancel' has a wrong offset!");
static_assert(offsetof(UW_DeleteInfo_C, W_BaseDialogueButton_Craft) == 0x000328, "Member 'UW_DeleteInfo_C::W_BaseDialogueButton_Craft' has a wrong offset!");
static_assert(offsetof(UW_DeleteInfo_C, W_BaseDialogueButton_Decline) == 0x000330, "Member 'UW_DeleteInfo_C::W_BaseDialogueButton_Decline' has a wrong offset!");
static_assert(offsetof(UW_DeleteInfo_C, W_HintButtonNew_Accept) == 0x000338, "Member 'UW_DeleteInfo_C::W_HintButtonNew_Accept' has a wrong offset!");
static_assert(offsetof(UW_DeleteInfo_C, W_HintButtonNew_Close) == 0x000340, "Member 'UW_DeleteInfo_C::W_HintButtonNew_Close' has a wrong offset!");
static_assert(offsetof(UW_DeleteInfo_C, WidgetSwitcher_0) == 0x000348, "Member 'UW_DeleteInfo_C::WidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UW_DeleteInfo_C, EventClose) == 0x000350, "Member 'UW_DeleteInfo_C::EventClose' has a wrong offset!");
static_assert(offsetof(UW_DeleteInfo_C, OnAccept) == 0x000360, "Member 'UW_DeleteInfo_C::OnAccept' has a wrong offset!");
static_assert(offsetof(UW_DeleteInfo_C, ItemName) == 0x000370, "Member 'UW_DeleteInfo_C::ItemName' has a wrong offset!");
static_assert(offsetof(UW_DeleteInfo_C, AcceptButtonText) == 0x000388, "Member 'UW_DeleteInfo_C::AcceptButtonText' has a wrong offset!");
static_assert(offsetof(UW_DeleteInfo_C, ActionText) == 0x0003A0, "Member 'UW_DeleteInfo_C::ActionText' has a wrong offset!");
static_assert(offsetof(UW_DeleteInfo_C, Image) == 0x0003B8, "Member 'UW_DeleteInfo_C::Image' has a wrong offset!");
static_assert(offsetof(UW_DeleteInfo_C, TypeOfAction) == 0x0003C0, "Member 'UW_DeleteInfo_C::TypeOfAction' has a wrong offset!");
static_assert(offsetof(UW_DeleteInfo_C, DescriptionText) == 0x0003C8, "Member 'UW_DeleteInfo_C::DescriptionText' has a wrong offset!");
static_assert(offsetof(UW_DeleteInfo_C, Price) == 0x0003E0, "Member 'UW_DeleteInfo_C::Price' has a wrong offset!");

}

