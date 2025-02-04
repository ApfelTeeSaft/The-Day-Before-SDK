#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RoadTrap

#include "Basic.hpp"

#include "BP_RoadTrap_classes.hpp"
#include "BP_RoadTrap_parameters.hpp"


namespace SDK
{

// Function BP_RoadTrap.BP_RoadTrap_C.ExecuteUbergraph_BP_RoadTrap
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RoadTrap_C::ExecuteUbergraph_BP_RoadTrap(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RoadTrap_C", "ExecuteUbergraph_BP_RoadTrap");

	Params::BP_RoadTrap_C_ExecuteUbergraph_BP_RoadTrap Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RoadTrap.BP_RoadTrap_C.OnCatch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_RoadTrap_C::OnCatch(class APawn* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RoadTrap_C", "OnCatch");

	Params::BP_RoadTrap_C_OnCatch Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RoadTrap.BP_RoadTrap_C.OnCatchMulti
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_RoadTrap_C::OnCatchMulti(class APawn* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RoadTrap_C", "OnCatchMulti");

	Params::BP_RoadTrap_C_OnCatchMulti Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}

}

