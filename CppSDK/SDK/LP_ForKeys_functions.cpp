#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LP_ForKeys

#include "Basic.hpp"

#include "LP_ForKeys_classes.hpp"
#include "LP_ForKeys_parameters.hpp"


namespace SDK
{

// Function LP_ForKeys.LP_ForKeys_C.ExecuteUbergraph_LP_ForKeys
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALP_ForKeys_C::ExecuteUbergraph_LP_ForKeys(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LP_ForKeys_C", "ExecuteUbergraph_LP_ForKeys");

	Params::LP_ForKeys_C_ExecuteUbergraph_LP_ForKeys Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LP_ForKeys.LP_ForKeys_C.NewFunction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ALP_ForKeys_C::NewFunction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LP_ForKeys_C", "NewFunction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LP_ForKeys.LP_ForKeys_C.OpenDoorsAnimated
// (Public, BlueprintCallable, BlueprintEvent)

void ALP_ForKeys_C::OpenDoorsAnimated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LP_ForKeys_C", "OpenDoorsAnimated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LP_ForKeys.LP_ForKeys_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALP_ForKeys_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LP_ForKeys_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

