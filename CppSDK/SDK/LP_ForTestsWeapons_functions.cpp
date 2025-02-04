#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LP_ForTestsWeapons

#include "Basic.hpp"

#include "LP_ForTestsWeapons_classes.hpp"
#include "LP_ForTestsWeapons_parameters.hpp"


namespace SDK
{

// Function LP_ForTestsWeapons.LP_ForTestsWeapons_C.ExecuteUbergraph_LP_ForTestsWeapons
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALP_ForTestsWeapons_C::ExecuteUbergraph_LP_ForTestsWeapons(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LP_ForTestsWeapons_C", "ExecuteUbergraph_LP_ForTestsWeapons");

	Params::LP_ForTestsWeapons_C_ExecuteUbergraph_LP_ForTestsWeapons Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LP_ForTestsWeapons.LP_ForTestsWeapons_C.OpenDoorsAnimated
// (Public, BlueprintCallable, BlueprintEvent)

void ALP_ForTestsWeapons_C::OpenDoorsAnimated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LP_ForTestsWeapons_C", "OpenDoorsAnimated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LP_ForTestsWeapons.LP_ForTestsWeapons_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALP_ForTestsWeapons_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LP_ForTestsWeapons_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

