#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MenuBarShopSlot

#include "Basic.hpp"

#include "WBP_MenuBarShopSlot_classes.hpp"
#include "WBP_MenuBarShopSlot_parameters.hpp"


namespace SDK
{

// Function WBP_MenuBarShopSlot.WBP_MenuBarShopSlot_C.BndEvt__WBP_MenuBarShopSlot_SlotButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_MenuBarShopSlot_C::BndEvt__WBP_MenuBarShopSlot_SlotButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuBarShopSlot_C", "BndEvt__WBP_MenuBarShopSlot_SlotButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MenuBarShopSlot.WBP_MenuBarShopSlot_C.BndEvt__WBP_MenuBarShopSlot_SlotButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_MenuBarShopSlot_C::BndEvt__WBP_MenuBarShopSlot_SlotButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuBarShopSlot_C", "BndEvt__WBP_MenuBarShopSlot_SlotButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MenuBarShopSlot.WBP_MenuBarShopSlot_C.BndEvt__WBP_MenuBarShopSlot_SlotButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_MenuBarShopSlot_C::BndEvt__WBP_MenuBarShopSlot_SlotButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuBarShopSlot_C", "BndEvt__WBP_MenuBarShopSlot_SlotButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MenuBarShopSlot.WBP_MenuBarShopSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MenuBarShopSlot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuBarShopSlot_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MenuBarShopSlot.WBP_MenuBarShopSlot_C.ExecuteUbergraph_WBP_MenuBarShopSlot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuBarShopSlot_C::ExecuteUbergraph_WBP_MenuBarShopSlot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuBarShopSlot_C", "ExecuteUbergraph_WBP_MenuBarShopSlot");

	Params::WBP_MenuBarShopSlot_C_ExecuteUbergraph_WBP_MenuBarShopSlot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MenuBarShopSlot.WBP_MenuBarShopSlot_C.GetSlotInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FF_MenuBarShopItem               Param_InfoSlot                                         (Parm, OutParm, HasGetValueTypeHash)

void UWBP_MenuBarShopSlot_C::GetSlotInfo(struct FF_MenuBarShopItem* Param_InfoSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuBarShopSlot_C", "GetSlotInfo");

	Params::WBP_MenuBarShopSlot_C_GetSlotInfo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_InfoSlot != nullptr)
		*Param_InfoSlot = std::move(Parms.Param_InfoSlot);
}


// Function WBP_MenuBarShopSlot.WBP_MenuBarShopSlot_C.GetSlotStatus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_MenuBarShopSlot                       Param_SlotStatus                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuBarShopSlot_C::GetSlotStatus(E_MenuBarShopSlot* Param_SlotStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuBarShopSlot_C", "GetSlotStatus");

	Params::WBP_MenuBarShopSlot_C_GetSlotStatus Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_SlotStatus != nullptr)
		*Param_SlotStatus = Parms.Param_SlotStatus;
}


// Function WBP_MenuBarShopSlot.WBP_MenuBarShopSlot_C.OnSelectedSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_MenuBarShopSlot_C*           PressedMenuBarSlot                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuBarShopSlot_C::OnSelectedSlot__DelegateSignature(class UWBP_MenuBarShopSlot_C* PressedMenuBarSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuBarShopSlot_C", "OnSelectedSlot__DelegateSignature");

	Params::WBP_MenuBarShopSlot_C_OnSelectedSlot__DelegateSignature Parms{};

	Parms.PressedMenuBarSlot = PressedMenuBarSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MenuBarShopSlot.WBP_MenuBarShopSlot_C.OnShowErrorMessage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             ErrorMessage                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_MenuBarShopSlot_C::OnShowErrorMessage__DelegateSignature(const class FText& ErrorMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuBarShopSlot_C", "OnShowErrorMessage__DelegateSignature");

	Params::WBP_MenuBarShopSlot_C_OnShowErrorMessage__DelegateSignature Parms{};

	Parms.ErrorMessage = std::move(ErrorMessage);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MenuBarShopSlot.WBP_MenuBarShopSlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuBarShopSlot_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuBarShopSlot_C", "PreConstruct");

	Params::WBP_MenuBarShopSlot_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MenuBarShopSlot.WBP_MenuBarShopSlot_C.ResetTextForDeutchLocalization
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_MenuBarShopSlot_C::ResetTextForDeutchLocalization()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuBarShopSlot_C", "ResetTextForDeutchLocalization");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MenuBarShopSlot.WBP_MenuBarShopSlot_C.SetSlotDefault
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_MenuBarShopSlot_C::SetSlotDefault()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuBarShopSlot_C", "SetSlotDefault");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MenuBarShopSlot.WBP_MenuBarShopSlot_C.SetSlotEmpty
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_MenuBarShopSlot_C::SetSlotEmpty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuBarShopSlot_C", "SetSlotEmpty");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MenuBarShopSlot.WBP_MenuBarShopSlot_C.SetSlotInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FF_MenuBarShopItem               Param_InfoSlot                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_MenuBarShopSlot_C::SetSlotInfo(const struct FF_MenuBarShopItem& Param_InfoSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuBarShopSlot_C", "SetSlotInfo");

	Params::WBP_MenuBarShopSlot_C_SetSlotInfo Parms{};

	Parms.Param_InfoSlot = std::move(Param_InfoSlot);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MenuBarShopSlot.WBP_MenuBarShopSlot_C.SetSlotSelected
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_MenuBarShopSlot_C::SetSlotSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuBarShopSlot_C", "SetSlotSelected");

	UObject::ProcessEvent(Func, nullptr);
}

}
