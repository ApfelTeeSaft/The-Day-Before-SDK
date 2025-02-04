#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AimWalkNegEffTPPShake

#include "Basic.hpp"

#include "AimWalkNegEffTPPShake_classes.hpp"
#include "AimWalkNegEffTPPShake_parameters.hpp"


namespace SDK
{

// Function AimWalkNegEffTPPShake.AimWalkNegEffTPPShake_C.ExecuteUbergraph_AimWalkNegEffTPPShake
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAimWalkNegEffTPPShake_C::ExecuteUbergraph_AimWalkNegEffTPPShake(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AimWalkNegEffTPPShake_C", "ExecuteUbergraph_AimWalkNegEffTPPShake");

	Params::AimWalkNegEffTPPShake_C_ExecuteUbergraph_AimWalkNegEffTPPShake Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AimWalkNegEffTPPShake.AimWalkNegEffTPPShake_C.ReceivePlayShake_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Scale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAimWalkNegEffTPPShake_C::ReceivePlayShake_2(float Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AimWalkNegEffTPPShake_C", "ReceivePlayShake_2");

	Params::AimWalkNegEffTPPShake_C_ReceivePlayShake_2 Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);
}

}

