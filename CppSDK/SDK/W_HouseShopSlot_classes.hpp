#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_HouseShopSlot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_CarShopSlot_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_HouseShopSlot.W_HouseShopSlot_C
// 0x0020 (0x0518 - 0x04F8)
class UW_HouseShopSlot_C final : public UWBP_CarShopSlot_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_W_HouseShopSlot_C;                  // 0x04F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_             OnHouseSelectedSlot;                               // 0x0500(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWBP_CarShopAcceptBuyWindow_C*          Window_Widget;                                     // 0x0510(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__W_HouseShopSlot_HouseButtonSlot_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__W_HouseShopSlot_HouseButtonSlot_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__W_HouseShopSlot_HouseButtonSlot_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void Construct();
	void CustomEvent();
	void CustomEvent_1();
	void CustomEvent_2();
	void Destruct();
	void ExecuteUbergraph_W_HouseShopSlot(int32 EntryPoint);
	void OnHouseSelectedSlot__DelegateSignature(class UW_HouseShopSlot_C* NewParam);
	void Remove_Money(class ASurvivalPlayer_C* Target, int32 Count);
	void SetHomeSelectedSlot();
	void SetHomeSlotDefault();
	void SetHomeSlotEmpty();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_HouseShopSlot_C">();
	}
	static class UW_HouseShopSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_HouseShopSlot_C>();
	}
};
static_assert(alignof(UW_HouseShopSlot_C) == 0x000008, "Wrong alignment on UW_HouseShopSlot_C");
static_assert(sizeof(UW_HouseShopSlot_C) == 0x000518, "Wrong size on UW_HouseShopSlot_C");
static_assert(offsetof(UW_HouseShopSlot_C, UberGraphFrame_W_HouseShopSlot_C) == 0x0004F8, "Member 'UW_HouseShopSlot_C::UberGraphFrame_W_HouseShopSlot_C' has a wrong offset!");
static_assert(offsetof(UW_HouseShopSlot_C, OnHouseSelectedSlot) == 0x000500, "Member 'UW_HouseShopSlot_C::OnHouseSelectedSlot' has a wrong offset!");
static_assert(offsetof(UW_HouseShopSlot_C, Window_Widget) == 0x000510, "Member 'UW_HouseShopSlot_C::Window_Widget' has a wrong offset!");

}

