#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_TranzitZoneSlot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_TranzitZoneSlot.W_TranzitZoneSlot_C
// 0x00A8 (0x0328 - 0x0280)
class UW_TranzitZoneSlot_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Hover2;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hover;                                             // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                Button_TranzitZoneSlot;                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BG;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BG_Current;                                  // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Hovered;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Hovered_Current;                             // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Icon;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Icon_Current;                                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Current;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_TripName;                                     // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_TripName_Current;                             // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_0;                                  // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   TripName;                                          // 0x02F0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UPaperSprite*                           ImageSprite_Icon;                                  // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSelected;                                        // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                   PlayerRoomName;                                    // 0x0320(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BndEvt__W_TranzitZoneSlot_Button_TranzitZoneSlot_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__W_TranzitZoneSlot_Button_TranzitZoneSlot_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__W_TranzitZoneSlot_Button_TranzitZoneSlot_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_W_TranzitZoneSlot(int32 EntryPoint);
	void Init();
	void OnSelected__DelegateSignature(class UW_TranzitZoneSlot_C* Ref);
	void PreConstruct(bool IsDesignTime);
	void SetHovered(bool With_Anim, bool Hovered);
	void SetHovered_Current(bool With_Anim, bool Hovered);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_TranzitZoneSlot_C">();
	}
	static class UW_TranzitZoneSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_TranzitZoneSlot_C>();
	}
};
static_assert(alignof(UW_TranzitZoneSlot_C) == 0x000008, "Wrong alignment on UW_TranzitZoneSlot_C");
static_assert(sizeof(UW_TranzitZoneSlot_C) == 0x000328, "Wrong size on UW_TranzitZoneSlot_C");
static_assert(offsetof(UW_TranzitZoneSlot_C, UberGraphFrame) == 0x000280, "Member 'UW_TranzitZoneSlot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_TranzitZoneSlot_C, Hover2) == 0x000288, "Member 'UW_TranzitZoneSlot_C::Hover2' has a wrong offset!");
static_assert(offsetof(UW_TranzitZoneSlot_C, Hover) == 0x000290, "Member 'UW_TranzitZoneSlot_C::Hover' has a wrong offset!");
static_assert(offsetof(UW_TranzitZoneSlot_C, Button_TranzitZoneSlot) == 0x000298, "Member 'UW_TranzitZoneSlot_C::Button_TranzitZoneSlot' has a wrong offset!");
static_assert(offsetof(UW_TranzitZoneSlot_C, Image_BG) == 0x0002A0, "Member 'UW_TranzitZoneSlot_C::Image_BG' has a wrong offset!");
static_assert(offsetof(UW_TranzitZoneSlot_C, Image_BG_Current) == 0x0002A8, "Member 'UW_TranzitZoneSlot_C::Image_BG_Current' has a wrong offset!");
static_assert(offsetof(UW_TranzitZoneSlot_C, Image_Hovered) == 0x0002B0, "Member 'UW_TranzitZoneSlot_C::Image_Hovered' has a wrong offset!");
static_assert(offsetof(UW_TranzitZoneSlot_C, Image_Hovered_Current) == 0x0002B8, "Member 'UW_TranzitZoneSlot_C::Image_Hovered_Current' has a wrong offset!");
static_assert(offsetof(UW_TranzitZoneSlot_C, Image_Icon) == 0x0002C0, "Member 'UW_TranzitZoneSlot_C::Image_Icon' has a wrong offset!");
static_assert(offsetof(UW_TranzitZoneSlot_C, Image_Icon_Current) == 0x0002C8, "Member 'UW_TranzitZoneSlot_C::Image_Icon_Current' has a wrong offset!");
static_assert(offsetof(UW_TranzitZoneSlot_C, SizeBox_Current) == 0x0002D0, "Member 'UW_TranzitZoneSlot_C::SizeBox_Current' has a wrong offset!");
static_assert(offsetof(UW_TranzitZoneSlot_C, Text_TripName) == 0x0002D8, "Member 'UW_TranzitZoneSlot_C::Text_TripName' has a wrong offset!");
static_assert(offsetof(UW_TranzitZoneSlot_C, Text_TripName_Current) == 0x0002E0, "Member 'UW_TranzitZoneSlot_C::Text_TripName_Current' has a wrong offset!");
static_assert(offsetof(UW_TranzitZoneSlot_C, WidgetSwitcher_0) == 0x0002E8, "Member 'UW_TranzitZoneSlot_C::WidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UW_TranzitZoneSlot_C, TripName) == 0x0002F0, "Member 'UW_TranzitZoneSlot_C::TripName' has a wrong offset!");
static_assert(offsetof(UW_TranzitZoneSlot_C, ImageSprite_Icon) == 0x000308, "Member 'UW_TranzitZoneSlot_C::ImageSprite_Icon' has a wrong offset!");
static_assert(offsetof(UW_TranzitZoneSlot_C, OnSelected) == 0x000310, "Member 'UW_TranzitZoneSlot_C::OnSelected' has a wrong offset!");
static_assert(offsetof(UW_TranzitZoneSlot_C, PlayerRoomName) == 0x000320, "Member 'UW_TranzitZoneSlot_C::PlayerRoomName' has a wrong offset!");

}
