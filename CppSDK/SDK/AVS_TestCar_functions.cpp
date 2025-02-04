#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AVS_TestCar

#include "Basic.hpp"

#include "AVS_TestCar_classes.hpp"
#include "AVS_TestCar_parameters.hpp"


namespace SDK
{

// Function AVS_TestCar.AVS_TestCar_C.ExecuteUbergraph_AVS_TestCar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAVS_TestCar_C::ExecuteUbergraph_AVS_TestCar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AVS_TestCar_C", "ExecuteUbergraph_AVS_TestCar");

	Params::AVS_TestCar_C_ExecuteUbergraph_AVS_TestCar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AVS_TestCar.AVS_TestCar_C.GearChanged_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PreviousGear                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CurrentGear                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAVS_TestCar_C::GearChanged_1(int32 PreviousGear, int32 CurrentGear)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AVS_TestCar_C", "GearChanged_1");

	Params::AVS_TestCar_C_GearChanged_1 Parms{};

	Parms.PreviousGear = PreviousGear;
	Parms.CurrentGear = CurrentGear;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AVS_TestCar.AVS_TestCar_C.AttachDoorToBone
// (BlueprintCallable, BlueprintEvent)

void AAVS_TestCar_C::AttachDoorToBone()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AVS_TestCar_C", "AttachDoorToBone");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AVS_TestCar.AVS_TestCar_C.AttachDoorToMainMesh
// (BlueprintCallable, BlueprintEvent)

void AAVS_TestCar_C::AttachDoorToMainMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AVS_TestCar_C", "AttachDoorToMainMesh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AVS_TestCar.AVS_TestCar_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAVS_TestCar_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AVS_TestCar_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AVS_TestCar.AVS_TestCar_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAVS_TestCar_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AVS_TestCar_C", "ReceiveTick");

	Params::AVS_TestCar_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AVS_TestCar.AVS_TestCar_C.SetBoost
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewBoost                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAVS_TestCar_C::SetBoost(bool NewBoost, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AVS_TestCar_C", "SetBoost");

	Params::AVS_TestCar_C_SetBoost Parms{};

	Parms.NewBoost = NewBoost;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function AVS_TestCar.AVS_TestCar_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAVS_TestCar_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AVS_TestCar_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

