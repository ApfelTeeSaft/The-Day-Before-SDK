#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BasicDecals_BP

#include "Basic.hpp"

#include "BasicDecals_BP_classes.hpp"
#include "BasicDecals_BP_parameters.hpp"


namespace SDK
{

// Function BasicDecals_BP.BasicDecals_BP_C.ExecuteUbergraph_BasicDecals_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABasicDecals_BP_C::ExecuteUbergraph_BasicDecals_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasicDecals_BP_C", "ExecuteUbergraph_BasicDecals_BP");

	Params::BasicDecals_BP_C_ExecuteUbergraph_BasicDecals_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BasicDecals_BP.BasicDecals_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABasicDecals_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasicDecals_BP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BasicDecals_BP.BasicDecals_BP_C.SetParams
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABasicDecals_BP_C::SetParams()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasicDecals_BP_C", "SetParams");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BasicDecals_BP.BasicDecals_BP_C.UpdateDecal
// (BlueprintCallable, BlueprintEvent)

void ABasicDecals_BP_C::UpdateDecal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasicDecals_BP_C", "UpdateDecal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BasicDecals_BP.BasicDecals_BP_C.UpdateTransforms
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABasicDecals_BP_C::UpdateTransforms()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasicDecals_BP_C", "UpdateTransforms");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BasicDecals_BP.BasicDecals_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABasicDecals_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasicDecals_BP_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

