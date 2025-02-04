#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ProcDecalExplosion

#include "Basic.hpp"

#include "BP_ProcDecalExplosion_classes.hpp"
#include "BP_ProcDecalExplosion_parameters.hpp"


namespace SDK
{

// Function BP_ProcDecalExplosion.BP_ProcDecalExplosion_C.ExecuteUbergraph_BP_ProcDecalExplosion
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProcDecalExplosion_C::ExecuteUbergraph_BP_ProcDecalExplosion(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ProcDecalExplosion_C", "ExecuteUbergraph_BP_ProcDecalExplosion");

	Params::BP_ProcDecalExplosion_C_ExecuteUbergraph_BP_ProcDecalExplosion Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ProcDecalExplosion.BP_ProcDecalExplosion_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ProcDecalExplosion_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ProcDecalExplosion_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

