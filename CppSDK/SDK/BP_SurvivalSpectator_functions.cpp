#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SurvivalSpectator

#include "Basic.hpp"

#include "BP_SurvivalSpectator_classes.hpp"
#include "BP_SurvivalSpectator_parameters.hpp"


namespace SDK
{

// Function BP_SurvivalSpectator.BP_SurvivalSpectator_C.ChangeSpeed
// (BlueprintCallable, BlueprintEvent)

void ABP_SurvivalSpectator_C::ChangeSpeed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SurvivalSpectator_C", "ChangeSpeed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SurvivalSpectator.BP_SurvivalSpectator_C.ExecuteUbergraph_BP_SurvivalSpectator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SurvivalSpectator_C::ExecuteUbergraph_BP_SurvivalSpectator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SurvivalSpectator_C", "ExecuteUbergraph_BP_SurvivalSpectator");

	Params::BP_SurvivalSpectator_C_ExecuteUbergraph_BP_SurvivalSpectator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SurvivalSpectator.BP_SurvivalSpectator_C.InpActEvt_BackSpace_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_SurvivalSpectator_C::InpActEvt_BackSpace_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SurvivalSpectator_C", "InpActEvt_BackSpace_K2Node_InputKeyEvent_3");

	Params::BP_SurvivalSpectator_C_InpActEvt_BackSpace_K2Node_InputKeyEvent_3 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SurvivalSpectator.BP_SurvivalSpectator_C.InpActEvt_E_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_SurvivalSpectator_C::InpActEvt_E_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SurvivalSpectator_C", "InpActEvt_E_K2Node_InputKeyEvent_4");

	Params::BP_SurvivalSpectator_C_InpActEvt_E_K2Node_InputKeyEvent_4 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SurvivalSpectator.BP_SurvivalSpectator_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_SurvivalSpectator_C::InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SurvivalSpectator_C", "InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_0");

	Params::BP_SurvivalSpectator_C_InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SurvivalSpectator.BP_SurvivalSpectator_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_SurvivalSpectator_C::InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SurvivalSpectator_C", "InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1");

	Params::BP_SurvivalSpectator_C_InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SurvivalSpectator.BP_SurvivalSpectator_C.InpActEvt_Q_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_SurvivalSpectator_C::InpActEvt_Q_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SurvivalSpectator_C", "InpActEvt_Q_K2Node_InputKeyEvent_2");

	Params::BP_SurvivalSpectator_C_InpActEvt_Q_K2Node_InputKeyEvent_2 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SurvivalSpectator.BP_SurvivalSpectator_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SurvivalSpectator_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SurvivalSpectator_C", "ReceiveTick");

	Params::BP_SurvivalSpectator_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}
