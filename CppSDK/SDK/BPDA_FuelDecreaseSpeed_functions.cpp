#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPDA_FuelDecreaseSpeed

#include "Basic.hpp"

#include "BPDA_FuelDecreaseSpeed_classes.hpp"
#include "BPDA_FuelDecreaseSpeed_parameters.hpp"


namespace SDK
{

// Function BPDA_FuelDecreaseSpeed.BPDA_FuelDecreaseSpeed_C.ExecuteUbergraph_BPDA_FuelDecreaseSpeed
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPDA_FuelDecreaseSpeed_C::ExecuteUbergraph_BPDA_FuelDecreaseSpeed(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPDA_FuelDecreaseSpeed_C", "ExecuteUbergraph_BPDA_FuelDecreaseSpeed");

	Params::BPDA_FuelDecreaseSpeed_C_ExecuteUbergraph_BPDA_FuelDecreaseSpeed Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPDA_FuelDecreaseSpeed.BPDA_FuelDecreaseSpeed_C.SetUpgrade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_RB_Vehicle_C*                 Vehicle                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBPDA_FuelDecreaseSpeed_C::SetUpgrade(class ABP_RB_Vehicle_C* Vehicle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPDA_FuelDecreaseSpeed_C", "SetUpgrade");

	Params::BPDA_FuelDecreaseSpeed_C_SetUpgrade Parms{};

	Parms.Vehicle = Vehicle;

	UObject::ProcessEvent(Func, &Parms);
}

}
