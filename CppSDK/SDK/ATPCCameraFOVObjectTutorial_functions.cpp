#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ATPCCameraFOVObjectTutorial

#include "Basic.hpp"

#include "ATPCCameraFOVObjectTutorial_classes.hpp"
#include "ATPCCameraFOVObjectTutorial_parameters.hpp"


namespace SDK
{

// Function ATPCCameraFOVObjectTutorial.ATPCCameraFOVObjectTutorial_C.ExecuteUbergraph_ATPCCameraFOVObjectTutorial
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UATPCCameraFOVObjectTutorial_C::ExecuteUbergraph_ATPCCameraFOVObjectTutorial(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ATPCCameraFOVObjectTutorial_C", "ExecuteUbergraph_ATPCCameraFOVObjectTutorial");

	Params::ATPCCameraFOVObjectTutorial_C_ExecuteUbergraph_ATPCCameraFOVObjectTutorial Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ATPCCameraFOVObjectTutorial.ATPCCameraFOVObjectTutorial_C.K2_Tick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UATPCCameraFOVObjectTutorial_C::K2_Tick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ATPCCameraFOVObjectTutorial_C", "K2_Tick");

	Params::ATPCCameraFOVObjectTutorial_C_K2_Tick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ATPCCameraFOVObjectTutorial.ATPCCameraFOVObjectTutorial_C.K2_Validate
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bWithInterpolation                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UATPCCameraFOVObjectTutorial_C::K2_Validate(bool bWithInterpolation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ATPCCameraFOVObjectTutorial_C", "K2_Validate");

	Params::ATPCCameraFOVObjectTutorial_C_K2_Validate Parms{};

	Parms.bWithInterpolation = bWithInterpolation;

	UObject::ProcessEvent(Func, &Parms);
}

}
