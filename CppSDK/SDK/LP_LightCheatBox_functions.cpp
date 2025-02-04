#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LP_LightCheatBox

#include "Basic.hpp"

#include "LP_LightCheatBox_classes.hpp"
#include "LP_LightCheatBox_parameters.hpp"


namespace SDK
{

// Function LP_LightCheatBox.LP_LightCheatBox_C.ExecuteUbergraph_LP_LightCheatBox
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALP_LightCheatBox_C::ExecuteUbergraph_LP_LightCheatBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LP_LightCheatBox_C", "ExecuteUbergraph_LP_LightCheatBox");

	Params::LP_LightCheatBox_C_ExecuteUbergraph_LP_LightCheatBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LP_LightCheatBox.LP_LightCheatBox_C.OpenDoorsAnimated
// (Public, BlueprintCallable, BlueprintEvent)

void ALP_LightCheatBox_C::OpenDoorsAnimated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LP_LightCheatBox_C", "OpenDoorsAnimated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LP_LightCheatBox.LP_LightCheatBox_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALP_LightCheatBox_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LP_LightCheatBox_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

