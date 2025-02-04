#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_CoinStart

#include "Basic.hpp"

#include "W_CoinStart_classes.hpp"
#include "W_CoinStart_parameters.hpp"


namespace SDK
{

// Function W_CoinStart.W_CoinStart_C.Close
// (BlueprintCallable, BlueprintEvent)

void UW_CoinStart_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CoinStart_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_CoinStart.W_CoinStart_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)

void UW_CoinStart_C::CustomEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CoinStart_C", "CustomEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_CoinStart.W_CoinStart_C.EShowLogo2
// (BlueprintCallable, BlueprintEvent)

void UW_CoinStart_C::EShowLogo2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CoinStart_C", "EShowLogo2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_CoinStart.W_CoinStart_C.ExecuteUbergraph_W_CoinStart
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CoinStart_C::ExecuteUbergraph_W_CoinStart(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CoinStart_C", "ExecuteUbergraph_W_CoinStart");

	Params::W_CoinStart_C_ExecuteUbergraph_W_CoinStart Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_CoinStart.W_CoinStart_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UW_CoinStart_C::InpActEvt_AnyKey_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CoinStart_C", "InpActEvt_AnyKey_K2Node_InputKeyEvent_0");

	Params::W_CoinStart_C_InpActEvt_AnyKey_K2Node_InputKeyEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_CoinStart.W_CoinStart_C.ResetPressAnyKey
// (BlueprintCallable, BlueprintEvent)

void UW_CoinStart_C::ResetPressAnyKey()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CoinStart_C", "ResetPressAnyKey");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_CoinStart.W_CoinStart_C.ShowAnim
// (BlueprintCallable, BlueprintEvent)

void UW_CoinStart_C::ShowAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CoinStart_C", "ShowAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_CoinStart.W_CoinStart_C.SkipMovie
// (Public, BlueprintCallable, BlueprintEvent)

void UW_CoinStart_C::SkipMovie()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CoinStart_C", "SkipMovie");

	UObject::ProcessEvent(Func, nullptr);
}

}

