#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SleepingBagBase

#include "Basic.hpp"

#include "BP_SleepingBagBase_classes.hpp"
#include "BP_SleepingBagBase_parameters.hpp"


namespace SDK
{

// Function BP_SleepingBagBase.BP_SleepingBagBase_C.ExecuteUbergraph_BP_SleepingBagBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SleepingBagBase_C::ExecuteUbergraph_BP_SleepingBagBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SleepingBagBase_C", "ExecuteUbergraph_BP_SleepingBagBase");

	Params::BP_SleepingBagBase_C_ExecuteUbergraph_BP_SleepingBagBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SleepingBagBase.BP_SleepingBagBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SleepingBagBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SleepingBagBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

