#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPC_TickIntervalController

#include "Basic.hpp"

#include "BPC_TickIntervalController_classes.hpp"
#include "BPC_TickIntervalController_parameters.hpp"


namespace SDK
{

// Function BPC_TickIntervalController.BPC_TickIntervalController_C.ExecuteUbergraph_BPC_TickIntervalController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_TickIntervalController_C::ExecuteUbergraph_BPC_TickIntervalController(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_TickIntervalController_C", "ExecuteUbergraph_BPC_TickIntervalController");

	Params::BPC_TickIntervalController_C_ExecuteUbergraph_BPC_TickIntervalController Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_TickIntervalController.BPC_TickIntervalController_C.GetCurrentLODValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  LODValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_TickIntervalController_C::GetCurrentLODValue(double* LODValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_TickIntervalController_C", "GetCurrentLODValue");

	Params::BPC_TickIntervalController_C_GetCurrentLODValue Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (LODValue != nullptr)
		*LODValue = Parms.LODValue;
}


// Function BPC_TickIntervalController.BPC_TickIntervalController_C.GetDistanceToCamera
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UBPC_TickIntervalController_C::GetDistanceToCamera()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_TickIntervalController_C", "GetDistanceToCamera");

	Params::BPC_TickIntervalController_C_GetDistanceToCamera Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPC_TickIntervalController.BPC_TickIntervalController_C.NeedChangeLOD?
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBPC_TickIntervalController_C::NeedChangeLOD_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_TickIntervalController_C", "NeedChangeLOD?");

	Params::BPC_TickIntervalController_C_NeedChangeLOD_ Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPC_TickIntervalController.BPC_TickIntervalController_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPC_TickIntervalController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_TickIntervalController_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPC_TickIntervalController.BPC_TickIntervalController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_TickIntervalController_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_TickIntervalController_C", "ReceiveTick");

	Params::BPC_TickIntervalController_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}
