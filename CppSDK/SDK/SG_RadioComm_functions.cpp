#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SG_RadioComm

#include "Basic.hpp"

#include "SG_RadioComm_classes.hpp"
#include "SG_RadioComm_parameters.hpp"


namespace SDK
{

// Function SG_RadioComm.SG_RadioComm_C.SetCompleted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsCompleted                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USG_RadioComm_C::SetCompleted(bool Param_IsCompleted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SG_RadioComm_C", "SetCompleted");

	Params::SG_RadioComm_C_SetCompleted Parms{};

	Parms.Param_IsCompleted = Param_IsCompleted;

	UObject::ProcessEvent(Func, &Parms);
}

}
