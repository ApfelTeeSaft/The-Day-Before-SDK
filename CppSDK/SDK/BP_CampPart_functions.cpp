#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CampPart

#include "Basic.hpp"

#include "BP_CampPart_classes.hpp"
#include "BP_CampPart_parameters.hpp"


namespace SDK
{

// Function BP_CampPart.BP_CampPart_C.BuildingStateUpd
// (BlueprintCallable, BlueprintEvent)

void ABP_CampPart_C::BuildingStateUpd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampPart_C", "BuildingStateUpd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CampPart.BP_CampPart_C.ExecuteUbergraph_BP_CampPart
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CampPart_C::ExecuteUbergraph_BP_CampPart(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampPart_C", "ExecuteUbergraph_BP_CampPart");

	Params::BP_CampPart_C_ExecuteUbergraph_BP_CampPart Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampPart.BP_CampPart_C.GetCamp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Camp_C*                       Camp                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CampPart_C::GetCamp(class ABP_Camp_C** Camp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampPart_C", "GetCamp");

	Params::BP_CampPart_C_GetCamp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Camp != nullptr)
		*Camp = Parms.Camp;
}


// Function BP_CampPart.BP_CampPart_C.OnBuildingState
// (BlueprintCallable, BlueprintEvent)

void ABP_CampPart_C::OnBuildingState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampPart_C", "OnBuildingState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CampPart.BP_CampPart_C.OnPlaceCamp
// (BlueprintCallable, BlueprintEvent)

void ABP_CampPart_C::OnPlaceCamp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampPart_C", "OnPlaceCamp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CampPart.BP_CampPart_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CampPart_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampPart_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

