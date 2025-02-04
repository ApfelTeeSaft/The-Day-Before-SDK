#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_TranzitZoneSlider

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_TranzitZoneSlider.W_TranzitZoneSlider_C
// 0x0040 (0x02C0 - 0x0280)
class UW_TranzitZoneSlider_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Hovered;                                           // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                Button_Slider;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BG;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox;                                         // 0x02A0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         New_Scroll_Offset;                                 // 0x02A8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_2AC[0x4];                                      // 0x02AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSelectedSlider;                                  // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__W_TranzitZoneSlider_Button_134_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__W_TranzitZoneSlider_Button_Slider_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__W_TranzitZoneSlider_Button_Slider_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_W_TranzitZoneSlider(int32 EntryPoint);
	void OnSelectedSlider__DelegateSignature(class UW_TranzitZoneSlider_C* Ref);
	void PreConstruct(bool IsDesignTime);
	void SetHovered(bool WithAnim, bool Param_Hovered);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_TranzitZoneSlider_C">();
	}
	static class UW_TranzitZoneSlider_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_TranzitZoneSlider_C>();
	}
};
static_assert(alignof(UW_TranzitZoneSlider_C) == 0x000008, "Wrong alignment on UW_TranzitZoneSlider_C");
static_assert(sizeof(UW_TranzitZoneSlider_C) == 0x0002C0, "Wrong size on UW_TranzitZoneSlider_C");
static_assert(offsetof(UW_TranzitZoneSlider_C, UberGraphFrame) == 0x000280, "Member 'UW_TranzitZoneSlider_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_TranzitZoneSlider_C, Hovered) == 0x000288, "Member 'UW_TranzitZoneSlider_C::Hovered' has a wrong offset!");
static_assert(offsetof(UW_TranzitZoneSlider_C, Button_Slider) == 0x000290, "Member 'UW_TranzitZoneSlider_C::Button_Slider' has a wrong offset!");
static_assert(offsetof(UW_TranzitZoneSlider_C, Image_BG) == 0x000298, "Member 'UW_TranzitZoneSlider_C::Image_BG' has a wrong offset!");
static_assert(offsetof(UW_TranzitZoneSlider_C, ScrollBox) == 0x0002A0, "Member 'UW_TranzitZoneSlider_C::ScrollBox' has a wrong offset!");
static_assert(offsetof(UW_TranzitZoneSlider_C, New_Scroll_Offset) == 0x0002A8, "Member 'UW_TranzitZoneSlider_C::New_Scroll_Offset' has a wrong offset!");
static_assert(offsetof(UW_TranzitZoneSlider_C, OnSelectedSlider) == 0x0002B0, "Member 'UW_TranzitZoneSlider_C::OnSelectedSlider' has a wrong offset!");

}

