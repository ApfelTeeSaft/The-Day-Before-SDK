#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GrenadeF1ShakeDefault

#include "Basic.hpp"

#include "GrenadeF1ShakeDefault_classes.hpp"
#include "GrenadeF1ShakeDefault_parameters.hpp"


namespace SDK
{

// Function GrenadeF1ShakeDefault.GrenadeF1ShakeDefault_C.ExecuteUbergraph_GrenadeF1ShakeDefault
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGrenadeF1ShakeDefault_C::ExecuteUbergraph_GrenadeF1ShakeDefault(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GrenadeF1ShakeDefault_C", "ExecuteUbergraph_GrenadeF1ShakeDefault");

	Params::GrenadeF1ShakeDefault_C_ExecuteUbergraph_GrenadeF1ShakeDefault Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GrenadeF1ShakeDefault.GrenadeF1ShakeDefault_C.Update Settings Rot Oscillation
// (BlueprintCallable, BlueprintEvent)

void UGrenadeF1ShakeDefault_C::Update_Settings_Rot_Oscillation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GrenadeF1ShakeDefault_C", "Update Settings Rot Oscillation");

	UObject::ProcessEvent(Func, nullptr);
}

}
