#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_UsageRequest

#include "Basic.hpp"

#include "W_UsageRequest_classes.hpp"
#include "W_UsageRequest_parameters.hpp"


namespace SDK
{

// Function W_UsageRequest.W_UsageRequest_C.BndEvt__ThrewAwayButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_UsageRequest_C::BndEvt__ThrewAwayButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_UsageRequest_C", "BndEvt__ThrewAwayButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_UsageRequest.W_UsageRequest_C.BndEvt__UseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_UsageRequest_C::BndEvt__UseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_UsageRequest_C", "BndEvt__UseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_UsageRequest.W_UsageRequest_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_UsageRequest_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_UsageRequest_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_UsageRequest.W_UsageRequest_C.ExecuteUbergraph_W_UsageRequest
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_UsageRequest_C::ExecuteUbergraph_W_UsageRequest(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_UsageRequest_C", "ExecuteUbergraph_W_UsageRequest");

	Params::W_UsageRequest_C_ExecuteUbergraph_W_UsageRequest Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_UsageRequest.W_UsageRequest_C.On_Background_MouseButtonDown
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UW_UsageRequest_C::On_Background_MouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_UsageRequest_C", "On_Background_MouseButtonDown");

	Params::W_UsageRequest_C_On_Background_MouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function W_UsageRequest.W_UsageRequest_C.ToggleVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Visibility                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_UsageRequest_C::ToggleVisibility(bool Param_Visibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_UsageRequest_C", "ToggleVisibility");

	Params::W_UsageRequest_C_ToggleVisibility Parms{};

	Parms.Param_Visibility = Param_Visibility;

	UObject::ProcessEvent(Func, &Parms);
}

}

