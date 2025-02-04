#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InventoryCollectorStash

#include "Basic.hpp"

#include "InventoryCollectorStash_classes.hpp"
#include "InventoryCollectorStash_parameters.hpp"


namespace SDK
{

// Function InventoryCollectorStash.InventoryCollectorStash_C.CollectInventory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   Data                                                   (Parm, OutParm)
// TArray<struct FFItemInfo>               ContainersData                                         (Parm, OutParm, ContainsInstancedReference)
// TArray<struct FFItemInfo>               ContainerItems                                         (Parm, OutParm, ContainsInstancedReference)
// bool                                    Succes_                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryCollectorStash_C::CollectInventory(TArray<class FString>* Data, TArray<struct FFItemInfo>* ContainersData, TArray<struct FFItemInfo>* ContainerItems, bool* Succes_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryCollectorStash_C", "CollectInventory");

	Params::InventoryCollectorStash_C_CollectInventory Parms{};

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


// Function InventoryCollectorStash.InventoryCollectorStash_C.CreateAttachmentsInfo
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           Line                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FPickupAttachments               PickupAttachments                                      (Parm, OutParm, HasGetValueTypeHash)

void UInventoryCollectorStash_C::CreateAttachmentsInfo(const class FString& Line, struct FPickupAttachments* PickupAttachments)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryCollectorStash_C", "CreateAttachmentsInfo");

	Params::InventoryCollectorStash_C_CreateAttachmentsInfo Parms{};

	Parms.Line = std::move(Line);

	UObject::ProcessEvent(Func, &Parms);

	if (PickupAttachments != nullptr)
		*PickupAttachments = std::move(Parms.PickupAttachments);
}


// Function InventoryCollectorStash.InventoryCollectorStash_C.GetStashItems
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FString>                   Param_StashItems                                       (Parm, OutParm)

void UInventoryCollectorStash_C::GetStashItems(TArray<class FString>* Param_StashItems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryCollectorStash_C", "GetStashItems");

	Params::InventoryCollectorStash_C_GetStashItems Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_StashItems != nullptr)
		*Param_StashItems = std::move(Parms.Param_StashItems);
}


// Function InventoryCollectorStash.InventoryCollectorStash_C.PlaceInventory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UInventoryCollectorStash_C::PlaceInventory(TArray<class FString>& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryCollectorStash_C", "PlaceInventory");

	Params::InventoryCollectorStash_C_PlaceInventory Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);

	Data = std::move(Parms.Data);
}

}

