#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AVS_Lambo

#include "Basic.hpp"

#include "AVS_Lambo_classes.hpp"
#include "AVS_Lambo_parameters.hpp"


namespace SDK
{

// Function AVS_Lambo.AVS_Lambo_C.ExecuteUbergraph_AVS_Lambo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAVS_Lambo_C::ExecuteUbergraph_AVS_Lambo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AVS_Lambo_C", "ExecuteUbergraph_AVS_Lambo");

	Params::AVS_Lambo_C_ExecuteUbergraph_AVS_Lambo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AVS_Lambo.AVS_Lambo_C.GearChanged_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PreviousGear                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CurrentGear                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAVS_Lambo_C::GearChanged_1(int32 PreviousGear, int32 CurrentGear)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AVS_Lambo_C", "GearChanged_1");

	Params::AVS_Lambo_C_GearChanged_1 Parms{};

	Parms.PreviousGear = PreviousGear;
	Parms.CurrentGear = CurrentGear;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AVS_Lambo.AVS_Lambo_C.AttachDoorToBone
// (BlueprintCallable, BlueprintEvent)

void AAVS_Lambo_C::AttachDoorToBone()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AVS_Lambo_C", "AttachDoorToBone");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AVS_Lambo.AVS_Lambo_C.AttachDoorToMainMesh
// (BlueprintCallable, BlueprintEvent)

void AAVS_Lambo_C::AttachDoorToMainMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AVS_Lambo_C", "AttachDoorToMainMesh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AVS_Lambo.AVS_Lambo_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAVS_Lambo_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AVS_Lambo_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AVS_Lambo.AVS_Lambo_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AAVS_Lambo_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AVS_Lambo_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

