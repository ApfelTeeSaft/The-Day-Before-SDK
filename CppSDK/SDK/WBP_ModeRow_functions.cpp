#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ModeRow

#include "Basic.hpp"

#include "WBP_ModeRow_classes.hpp"
#include "WBP_ModeRow_parameters.hpp"


namespace SDK
{

// Function WBP_ModeRow.WBP_ModeRow_C.BndEvt__WBP_ModeRow_Button_Mode_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ModeRow_C::BndEvt__WBP_ModeRow_Button_Mode_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModeRow_C", "BndEvt__WBP_ModeRow_Button_Mode_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModeRow.WBP_ModeRow_C.BndEvt__WBP_ModeRow_Button_Mode_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ModeRow_C::BndEvt__WBP_ModeRow_Button_Mode_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModeRow_C", "BndEvt__WBP_ModeRow_Button_Mode_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModeRow.WBP_ModeRow_C.BndEvt__WBP_WeaponMode_Button_Mode_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ModeRow_C::BndEvt__WBP_WeaponMode_Button_Mode_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModeRow_C", "BndEvt__WBP_WeaponMode_Button_Mode_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModeRow.WBP_ModeRow_C.Click
// (BlueprintCallable, BlueprintEvent)

void UWBP_ModeRow_C::Click()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModeRow_C", "Click");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModeRow.WBP_ModeRow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ModeRow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModeRow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModeRow.WBP_ModeRow_C.Deselect
// (BlueprintCallable, BlueprintEvent)

void UWBP_ModeRow_C::Deselect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModeRow_C", "Deselect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModeRow.WBP_ModeRow_C.ExecuteUbergraph_WBP_ModeRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModeRow_C::ExecuteUbergraph_WBP_ModeRow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModeRow_C", "ExecuteUbergraph_WBP_ModeRow");

	Params::WBP_ModeRow_C_ExecuteUbergraph_WBP_ModeRow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModeRow.WBP_ModeRow_C.IsDefaultMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsNoneMode                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModeRow_C::IsDefaultMode(bool* IsNoneMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModeRow_C", "IsDefaultMode");

	Params::WBP_ModeRow_C_IsDefaultMode Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsNoneMode != nullptr)
		*IsNoneMode = Parms.IsNoneMode;
}


// Function WBP_ModeRow.WBP_ModeRow_C.OnActiveModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_ModeRow_C*                   ModeWidgetRef                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FFItemInfo                       ModeInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)

void UWBP_ModeRow_C::OnActiveModeChanged(class UWBP_ModeRow_C* ModeWidgetRef, const struct FFItemInfo& ModeInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModeRow_C", "OnActiveModeChanged");

	Params::WBP_ModeRow_C_OnActiveModeChanged Parms{};

	Parms.ModeWidgetRef = ModeWidgetRef;
	Parms.ModeInfo = std::move(ModeInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModeRow.WBP_ModeRow_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_ModeRow_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModeRow_C", "OnKeyDown");

	Params::WBP_ModeRow_C_OnKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

