#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ATPCCameraFOVObjectV2

#include "Basic.hpp"

#include "ATPCCameraFOVObjectV2_classes.hpp"
#include "ATPCCameraFOVObjectV2_parameters.hpp"


namespace SDK
{

// Function ATPCCameraFOVObjectV2.ATPCCameraFOVObjectV2_C.ExecuteUbergraph_ATPCCameraFOVObjectV2
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UATPCCameraFOVObjectV2_C::ExecuteUbergraph_ATPCCameraFOVObjectV2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ATPCCameraFOVObjectV2_C", "ExecuteUbergraph_ATPCCameraFOVObjectV2");

	Params::ATPCCameraFOVObjectV2_C_ExecuteUbergraph_ATPCCameraFOVObjectV2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ATPCCameraFOVObjectV2.ATPCCameraFOVObjectV2_C.K2_Tick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UATPCCameraFOVObjectV2_C::K2_Tick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ATPCCameraFOVObjectV2_C", "K2_Tick");

	Params::ATPCCameraFOVObjectV2_C_K2_Tick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ATPCCameraFOVObjectV2.ATPCCameraFOVObjectV2_C.K2_Validate
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bWithInterpolation                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UATPCCameraFOVObjectV2_C::K2_Validate(bool bWithInterpolation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ATPCCameraFOVObjectV2_C", "K2_Validate");

	Params::ATPCCameraFOVObjectV2_C_K2_Validate Parms{};

	Parms.bWithInterpolation = bWithInterpolation;

	UObject::ProcessEvent(Func, &Parms);
}

}
