#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PickupComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "ContainerPickupsInfo_structs.hpp"
#include "FItemInfo_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass PickupComponent.PickupComponent_C
// 0x0290 (0x0330 - 0x00A0)
class UPickupComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDataTable*                             DataSource;                                        // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                   Item_ID;                                           // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FFItemInfo                             PickupItemInfo;                                    // 0x00B8(0x0220)(Edit, BlueprintVisible, Net, ContainsInstancedReference, HasGetValueTypeHash)
	class UJSIContainer_C*                        ContainerRef;                                      // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Equipped;                                          // 0x02E0(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E1[0x7];                                      // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FContainerPickupsInfo>          ContainersData;                                    // 0x02E8(0x0010)(Edit, BlueprintVisible, Net, ContainsInstancedReference)
	TArray<struct FContainerPickupsInfo>          ContainerItems;                                    // 0x02F8(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	bool                                          HasUniqueID_;                                      // 0x0308(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_309[0x3];                                      // 0x0309(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PlayerID;                                          // 0x030C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FContainerPickupsInfo>          MPContainersData;                                  // 0x0310(0x0010)(Edit, BlueprintVisible, Net, ContainsInstancedReference)
	TArray<struct FContainerPickupsInfo>          MPContainerItems;                                  // 0x0320(0x0010)(Edit, BlueprintVisible, Net, ContainsInstancedReference)

public:
	void AddContainer(const struct FContainerPickupsInfo& Container, bool* Added);
	void AddContainerItem(const struct FContainerPickupsInfo& ContainerItem, bool* Added);
	void ClearContainerContent(bool* Cleared);
	void ExecuteUbergraph_PickupComponent(int32 EntryPoint);
	void GetContainer(class UJSIContainer_C** Param_ContainerRef);
	void GetCount(int32* Count);
	void GetInfo(struct FFItemInfo* ItemInfo);
	void GetItemNameCount(class FText* Param_Name);
	void GetSpecialContainer(TSoftClassPtr<class UClass>* SpecialContainerWidget);
	void HasUniqueID(bool* Param_HasUniqueID_);
	void Init();
	bool JustaDummyFunc();
	void OnRep_PickupItemInfo();
	void ReceiveBeginPlay();
	void SetContainer(class UJSIContainer_C* Param_ContainerRef, bool* Done);
	void SetPickupInfo(const struct FFItemInfo& Param_PickupItemInfo, bool* Updated);
	void SetUniqueID(int32 ID, bool* Success);
	void UpdateCount(int32 Count, bool* Updated);
	void UpdateEquipped(bool Param_Equipped, bool* IsEquipped);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PickupComponent_C">();
	}
	static class UPickupComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPickupComponent_C>();
	}
};
static_assert(alignof(UPickupComponent_C) == 0x000008, "Wrong alignment on UPickupComponent_C");
static_assert(sizeof(UPickupComponent_C) == 0x000330, "Wrong size on UPickupComponent_C");
static_assert(offsetof(UPickupComponent_C, UberGraphFrame) == 0x0000A0, "Member 'UPickupComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPickupComponent_C, DataSource) == 0x0000A8, "Member 'UPickupComponent_C::DataSource' has a wrong offset!");
static_assert(offsetof(UPickupComponent_C, Item_ID) == 0x0000B0, "Member 'UPickupComponent_C::Item_ID' has a wrong offset!");
static_assert(offsetof(UPickupComponent_C, PickupItemInfo) == 0x0000B8, "Member 'UPickupComponent_C::PickupItemInfo' has a wrong offset!");
static_assert(offsetof(UPickupComponent_C, ContainerRef) == 0x0002D8, "Member 'UPickupComponent_C::ContainerRef' has a wrong offset!");
static_assert(offsetof(UPickupComponent_C, Equipped) == 0x0002E0, "Member 'UPickupComponent_C::Equipped' has a wrong offset!");
static_assert(offsetof(UPickupComponent_C, ContainersData) == 0x0002E8, "Member 'UPickupComponent_C::ContainersData' has a wrong offset!");
static_assert(offsetof(UPickupComponent_C, ContainerItems) == 0x0002F8, "Member 'UPickupComponent_C::ContainerItems' has a wrong offset!");
static_assert(offsetof(UPickupComponent_C, HasUniqueID_) == 0x000308, "Member 'UPickupComponent_C::HasUniqueID_' has a wrong offset!");
static_assert(offsetof(UPickupComponent_C, PlayerID) == 0x00030C, "Member 'UPickupComponent_C::PlayerID' has a wrong offset!");
static_assert(offsetof(UPickupComponent_C, MPContainersData) == 0x000310, "Member 'UPickupComponent_C::MPContainersData' has a wrong offset!");
static_assert(offsetof(UPickupComponent_C, MPContainerItems) == 0x000320, "Member 'UPickupComponent_C::MPContainerItems' has a wrong offset!");

}
