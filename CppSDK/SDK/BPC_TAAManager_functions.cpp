#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPC_TAAManager

#include "Basic.hpp"

#include "BPC_TAAManager_classes.hpp"
#include "BPC_TAAManager_parameters.hpp"


namespace SDK
{

// Function BPC_TAAManager.BPC_TAAManager_C.ExecuteUbergraph_BPC_TAAManager
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_TAAManager_C::ExecuteUbergraph_BPC_TAAManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_TAAManager_C", "ExecuteUbergraph_BPC_TAAManager");

	Params::BPC_TAAManager_C_ExecuteUbergraph_BPC_TAAManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_TAAManager.BPC_TAAManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_TAAManager_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_TAAManager_C", "ReceiveTick");

	Params::BPC_TAAManager_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}
