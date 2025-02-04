#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_CraftItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_CraftItem.W_CraftItem_C
// 0x00A8 (0x0328 - 0x0280)
class UW_CraftItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       SuccessfulCraftAnim;                               // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       DeselectAnim;                                      // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       SelectAnim;                                        // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HoverAnim;                                         // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       CantCraftAnim;                                     // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FillAnim;                                          // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                Button_Item;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BG;                                          // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_IconSprite;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_SelectionFrame;                              // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_SelectionFrame_Bad;                          // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Count;                                   // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FMargin                                IconOffsets;                                       // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsSelected;                                        // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F9[0x3];                                      // 0x02F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CraftItemName;                                     // 0x02FC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_304[0x4];                                      // 0x0304(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UPaperSprite*                           HoverImage;                                        // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPaperSprite*                           DefaultImage;                                      // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__Button_Item_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Item_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Item_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void CantCraftAnimPlay();
	void CustomClicked();
	void CustomHovered();
	void ExecuteUbergraph_W_CraftItem(int32 EntryPoint);
	void InitedClick();
	void OnClicked__DelegateSignature(class UW_CraftItem_C* Clicked);
	void OnInitialized();
	void PlaySuccessfulAnimation(EUMGSequencePlayMode PlayMode);
	void PreConstruct(bool IsDesignTime);
	void SequenceEvent__ENTRYPOINTW_CraftItem();
	void SequenceEvent__ENTRYPOINTW_CraftItem_0();
	void SequenceEvent__ENTRYPOINTW_CraftItem_1();
	void SequenceEvent__ENTRYPOINTW_CraftItem_2();
	void SetHoveredBrush();
	void SetItemsCount(int32 Count);
	void SetSelectedBrush();
	void StartFilling(double PlaybackSpeed);
	void StopFilling();
	void Unselect();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_CraftItem_C">();
	}
	static class UW_CraftItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_CraftItem_C>();
	}
};
static_assert(alignof(UW_CraftItem_C) == 0x000008, "Wrong alignment on UW_CraftItem_C");
static_assert(sizeof(UW_CraftItem_C) == 0x000328, "Wrong size on UW_CraftItem_C");
static_assert(offsetof(UW_CraftItem_C, UberGraphFrame) == 0x000280, "Member 'UW_CraftItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_CraftItem_C, SuccessfulCraftAnim) == 0x000288, "Member 'UW_CraftItem_C::SuccessfulCraftAnim' has a wrong offset!");
static_assert(offsetof(UW_CraftItem_C, DeselectAnim) == 0x000290, "Member 'UW_CraftItem_C::DeselectAnim' has a wrong offset!");
static_assert(offsetof(UW_CraftItem_C, SelectAnim) == 0x000298, "Member 'UW_CraftItem_C::SelectAnim' has a wrong offset!");
static_assert(offsetof(UW_CraftItem_C, HoverAnim) == 0x0002A0, "Member 'UW_CraftItem_C::HoverAnim' has a wrong offset!");
static_assert(offsetof(UW_CraftItem_C, CantCraftAnim) == 0x0002A8, "Member 'UW_CraftItem_C::CantCraftAnim' has a wrong offset!");
static_assert(offsetof(UW_CraftItem_C, FillAnim) == 0x0002B0, "Member 'UW_CraftItem_C::FillAnim' has a wrong offset!");
static_assert(offsetof(UW_CraftItem_C, Button_Item) == 0x0002B8, "Member 'UW_CraftItem_C::Button_Item' has a wrong offset!");
static_assert(offsetof(UW_CraftItem_C, Image_BG) == 0x0002C0, "Member 'UW_CraftItem_C::Image_BG' has a wrong offset!");
static_assert(offsetof(UW_CraftItem_C, Image_IconSprite) == 0x0002C8, "Member 'UW_CraftItem_C::Image_IconSprite' has a wrong offset!");
static_assert(offsetof(UW_CraftItem_C, Image_SelectionFrame) == 0x0002D0, "Member 'UW_CraftItem_C::Image_SelectionFrame' has a wrong offset!");
static_assert(offsetof(UW_CraftItem_C, Image_SelectionFrame_Bad) == 0x0002D8, "Member 'UW_CraftItem_C::Image_SelectionFrame_Bad' has a wrong offset!");
static_assert(offsetof(UW_CraftItem_C, TextBlock_Count) == 0x0002E0, "Member 'UW_CraftItem_C::TextBlock_Count' has a wrong offset!");
static_assert(offsetof(UW_CraftItem_C, IconOffsets) == 0x0002E8, "Member 'UW_CraftItem_C::IconOffsets' has a wrong offset!");
static_assert(offsetof(UW_CraftItem_C, IsSelected) == 0x0002F8, "Member 'UW_CraftItem_C::IsSelected' has a wrong offset!");
static_assert(offsetof(UW_CraftItem_C, CraftItemName) == 0x0002FC, "Member 'UW_CraftItem_C::CraftItemName' has a wrong offset!");
static_assert(offsetof(UW_CraftItem_C, OnClicked) == 0x000308, "Member 'UW_CraftItem_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UW_CraftItem_C, HoverImage) == 0x000318, "Member 'UW_CraftItem_C::HoverImage' has a wrong offset!");
static_assert(offsetof(UW_CraftItem_C, DefaultImage) == 0x000320, "Member 'UW_CraftItem_C::DefaultImage' has a wrong offset!");

}

