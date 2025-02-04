#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WorkbenchActor

#include "Basic.hpp"

#include "BP_WorkbenchActor_classes.hpp"
#include "BP_WorkbenchActor_parameters.hpp"


namespace SDK
{

// Function BP_WorkbenchActor.BP_WorkbenchActor_C.ExecuteUbergraph_BP_WorkbenchActor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WorkbenchActor_C::ExecuteUbergraph_BP_WorkbenchActor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WorkbenchActor_C", "ExecuteUbergraph_BP_WorkbenchActor");

	Params::BP_WorkbenchActor_C_ExecuteUbergraph_BP_WorkbenchActor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WorkbenchActor.BP_WorkbenchActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WorkbenchActor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WorkbenchActor_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WorkbenchActor.BP_WorkbenchActor_C.Remove Model
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WorkbenchActor_C::Remove_Model()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WorkbenchActor_C", "Remove Model");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WorkbenchActor.BP_WorkbenchActor_C.SetNewModelByWeaponInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFItemInfo                       WeaponInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)

void ABP_WorkbenchActor_C::SetNewModelByWeaponInfo(const struct FFItemInfo& WeaponInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WorkbenchActor_C", "SetNewModelByWeaponInfo");

	Params::BP_WorkbenchActor_C_SetNewModelByWeaponInfo Parms{};

	Parms.WeaponInfo = std::move(WeaponInfo);

	UObject::ProcessEvent(Func, &Parms);
}

}

