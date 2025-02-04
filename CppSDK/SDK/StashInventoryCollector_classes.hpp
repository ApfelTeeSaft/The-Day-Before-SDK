#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StashInventoryCollector

#include "Basic.hpp"

#include "InventoryCollector_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass StashInventoryCollector.StashInventoryCollector_C
// 0x0000 (0x00A8 - 0x00A8)
class UStashInventoryCollector_C final : public UInventoryCollector_C
{
public:
	void CollectInventory(TArray<class FString>* Data, TArray<struct FFItemInfo>* ContainersData, TArray<struct FFItemInfo>* ContainerItems, bool* Succes_);
	void PlaceInventory(TArray<class FString>& Data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StashInventoryCollector_C">();
	}
	static class UStashInventoryCollector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStashInventoryCollector_C>();
	}
};
static_assert(alignof(UStashInventoryCollector_C) == 0x000008, "Wrong alignment on UStashInventoryCollector_C");
static_assert(sizeof(UStashInventoryCollector_C) == 0x0000A8, "Wrong size on UStashInventoryCollector_C");

}

