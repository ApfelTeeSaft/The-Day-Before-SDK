#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_BottomHint

#include "Basic.hpp"

#include "W_BottomHint_classes.hpp"
#include "W_BottomHint_parameters.hpp"


namespace SDK
{

// Function W_BottomHint.W_BottomHint_C.ExecuteUbergraph_W_BottomHint
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_BottomHint_C::ExecuteUbergraph_W_BottomHint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_BottomHint_C", "ExecuteUbergraph_W_BottomHint");

	Params::W_BottomHint_C_ExecuteUbergraph_W_BottomHint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_BottomHint.W_BottomHint_C.SetHint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_BottomHint_C::SetHint(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_BottomHint_C", "SetHint");

	Params::W_BottomHint_C_SetHint Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

}
