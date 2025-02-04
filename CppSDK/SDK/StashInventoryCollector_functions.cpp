#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StashInventoryCollector

#include "Basic.hpp"

#include "StashInventoryCollector_classes.hpp"
#include "StashInventoryCollector_parameters.hpp"


namespace SDK
{

// Function StashInventoryCollector.StashInventoryCollector_C.CollectInventory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   Data                                                   (Parm, OutParm)
// TArray<struct FFItemInfo>               ContainersData                                         (Parm, OutParm, ContainsInstancedReference)
// TArray<struct FFItemInfo>               ContainerItems                                         (Parm, OutParm, ContainsInstancedReference)
// bool                                    Succes_                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStashInventoryCollector_C::CollectInventory(TArray<class FString>* Data, TArray<struct FFItemInfo>* ContainersData, TArray<struct FFItemInfo>* ContainerItems, bool* Succes_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StashInventoryCollector_C", "CollectInventory");

	Params::StashInventoryCollector_C_CollectInventory Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);

	if (ContainersData != nullptr)
		*ContainersData = std::move(Parms.ContainersData);

	if (ContainerItems != nullptr)
		*ContainerItems = std::move(Parms.ContainerItems);

	if (Succes_ != nullptr)
		*Succes_ = Parms.Succes_;
}


// Function StashInventoryCollector.StashInventoryCollector_C.PlaceInventory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UStashInventoryCollector_C::PlaceInventory(TArray<class FString>& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StashInventoryCollector_C", "PlaceInventory");

	Params::StashInventoryCollector_C_PlaceInventory Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);

	Data = std::move(Parms.Data);
}

}

