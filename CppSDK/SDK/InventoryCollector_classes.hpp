#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InventoryCollector

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass InventoryCollector.InventoryCollector_C
// 0x0008 (0x00A8 - 0x00A0)
class UInventoryCollector_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void CollectInventory(TArray<class FString>* Data, TArray<struct FFItemInfo>* ContainersData, TArray<struct FFItemInfo>* ContainerItems, bool* Succes_);
	void DebugPlaceInventory();
	void ExecuteUbergraph_InventoryCollector(int32 EntryPoint);
	void PlaceInventory(TArray<class FString>& Data);
	void ProtectiveToString(TArray<class UJSI_Slot_C*>& Ref, TArray<class FString>* Str);
	void ReceiveBeginPlay();
	void StringListToStructArray(TArray<class FString>& StringList, TArray<struct FDefaultItemInfo>* Result);
	void StructArrayToStringList(TArray<struct FContainerPickupsInfo>& Data, TArray<class FString>* Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InventoryCollector_C">();
	}
	static class UInventoryCollector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInventoryCollector_C>();
	}
};
static_assert(alignof(UInventoryCollector_C) == 0x000008, "Wrong alignment on UInventoryCollector_C");
static_assert(sizeof(UInventoryCollector_C) == 0x0000A8, "Wrong size on UInventoryCollector_C");
static_assert(offsetof(UInventoryCollector_C, UberGraphFrame) == 0x0000A0, "Member 'UInventoryCollector_C::UberGraphFrame' has a wrong offset!");

}

