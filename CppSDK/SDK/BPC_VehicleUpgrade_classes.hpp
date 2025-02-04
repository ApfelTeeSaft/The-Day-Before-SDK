#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPC_VehicleUpgrade

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPC_VehicleUpgrade.BPC_VehicleUpgrade_C
// 0x00B0 (0x0150 - 0x00A0)
class UBPC_VehicleUpgrade_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_RB_Vehicle_C*                       Vehicle;                                           // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UBPDA_Acceleration_C*>           DA_Acceleration;                                   // 0x00B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UBPDA_AdditionalLight_C*>        DA_AdditionalLight;                                // 0x00C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UBPDA_Armor_C*>                  DA_Armor;                                          // 0x00D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UBPDA_Boost_C*>                  DA_Boost;                                          // 0x00E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UBPDA_FuelMax_C*>                DA_FuelMax;                                        // 0x00F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UBPDA_FuelDecreaseSpeed_C*>      DA_FuelDecreaseSpeed;                              // 0x0100(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UBPDA_Inventory_C*>              DA_Inventory;                                      // 0x0110(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UBPDA_Isolation_C*>              DA_Isolation;                                      // 0x0120(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         NextIndexArmor;                                    // 0x0130(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NextIndexBoost;                                    // 0x0134(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NextIndexFuelMax;                                  // 0x0138(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NextIndexFuelDecreaseSpeed;                        // 0x013C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NextIndexInventory;                                // 0x0140(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NextIndexAcceleration;                             // 0x0144(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NextIndexAdditionalLights;                         // 0x0148(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NextIndexIsolation;                                // 0x014C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPC_VehicleUpgrade(int32 EntryPoint);
	void GetAccelerationInfo(class UBPDA_Acceleration_C** Info, int32* Level, bool* IsFullyUpgraded);
	void GetAdditionalLightInfo(class UBPDA_AdditionalLight_C** Info, int32* Level, bool* IsFullyUpgraded);
	void GetArmorInfo(class UBPDA_Armor_C** Info, int32* Level, bool* IsFullyUpgraded);
	void GetBoostInfo(class UBPDA_Boost_C** Info, int32* Level, bool* IsFullyUpgraded);
	void GetFuelDecreaseSpeedInfo(class UBPDA_FuelDecreaseSpeed_C** Output, int32* Level, bool* IsFullyUpgraded);
	void GetFuelMaxInfo(class UBPDA_FuelMax_C** Info, int32* Level, bool* IsFullyUpgraded);
	void GetInventoryInfo(class UBPDA_Inventory_C** Info, int32* Level, bool* IsFullyUpgraded);
	void GetIsolationInfo(class UBPDA_Isolation_C** Info, int32* Level, bool* IsFullyUpgraded);
	void ReceiveBeginPlay();
	void RemoveMetal(int32 Count);
	void Upgrade(const TArray<class UBPDA_BaseUpgrade_C*>& UpgradeArray, int32 UpgradeIndex, bool* Success);
	void UpgradeAcceleration();
	void UpgradeAdditionalLight();
	void UpgradeArmor();
	void UpgradeBoost();
	void UpgradeFuelDecreaseSpeed();
	void UpgradeFuelMax();
	void UpgradeInventory();
	void UpgradeIsolation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPC_VehicleUpgrade_C">();
	}
	static class UBPC_VehicleUpgrade_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPC_VehicleUpgrade_C>();
	}
};
static_assert(alignof(UBPC_VehicleUpgrade_C) == 0x000008, "Wrong alignment on UBPC_VehicleUpgrade_C");
static_assert(sizeof(UBPC_VehicleUpgrade_C) == 0x000150, "Wrong size on UBPC_VehicleUpgrade_C");
static_assert(offsetof(UBPC_VehicleUpgrade_C, UberGraphFrame) == 0x0000A0, "Member 'UBPC_VehicleUpgrade_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBPC_VehicleUpgrade_C, Vehicle) == 0x0000A8, "Member 'UBPC_VehicleUpgrade_C::Vehicle' has a wrong offset!");
static_assert(offsetof(UBPC_VehicleUpgrade_C, DA_Acceleration) == 0x0000B0, "Member 'UBPC_VehicleUpgrade_C::DA_Acceleration' has a wrong offset!");
static_assert(offsetof(UBPC_VehicleUpgrade_C, DA_AdditionalLight) == 0x0000C0, "Member 'UBPC_VehicleUpgrade_C::DA_AdditionalLight' has a wrong offset!");
static_assert(offsetof(UBPC_VehicleUpgrade_C, DA_Armor) == 0x0000D0, "Member 'UBPC_VehicleUpgrade_C::DA_Armor' has a wrong offset!");
static_assert(offsetof(UBPC_VehicleUpgrade_C, DA_Boost) == 0x0000E0, "Member 'UBPC_VehicleUpgrade_C::DA_Boost' has a wrong offset!");
static_assert(offsetof(UBPC_VehicleUpgrade_C, DA_FuelMax) == 0x0000F0, "Member 'UBPC_VehicleUpgrade_C::DA_FuelMax' has a wrong offset!");
static_assert(offsetof(UBPC_VehicleUpgrade_C, DA_FuelDecreaseSpeed) == 0x000100, "Member 'UBPC_VehicleUpgrade_C::DA_FuelDecreaseSpeed' has a wrong offset!");
static_assert(offsetof(UBPC_VehicleUpgrade_C, DA_Inventory) == 0x000110, "Member 'UBPC_VehicleUpgrade_C::DA_Inventory' has a wrong offset!");
static_assert(offsetof(UBPC_VehicleUpgrade_C, DA_Isolation) == 0x000120, "Member 'UBPC_VehicleUpgrade_C::DA_Isolation' has a wrong offset!");
static_assert(offsetof(UBPC_VehicleUpgrade_C, NextIndexArmor) == 0x000130, "Member 'UBPC_VehicleUpgrade_C::NextIndexArmor' has a wrong offset!");
static_assert(offsetof(UBPC_VehicleUpgrade_C, NextIndexBoost) == 0x000134, "Member 'UBPC_VehicleUpgrade_C::NextIndexBoost' has a wrong offset!");
static_assert(offsetof(UBPC_VehicleUpgrade_C, NextIndexFuelMax) == 0x000138, "Member 'UBPC_VehicleUpgrade_C::NextIndexFuelMax' has a wrong offset!");
static_assert(offsetof(UBPC_VehicleUpgrade_C, NextIndexFuelDecreaseSpeed) == 0x00013C, "Member 'UBPC_VehicleUpgrade_C::NextIndexFuelDecreaseSpeed' has a wrong offset!");
static_assert(offsetof(UBPC_VehicleUpgrade_C, NextIndexInventory) == 0x000140, "Member 'UBPC_VehicleUpgrade_C::NextIndexInventory' has a wrong offset!");
static_assert(offsetof(UBPC_VehicleUpgrade_C, NextIndexAcceleration) == 0x000144, "Member 'UBPC_VehicleUpgrade_C::NextIndexAcceleration' has a wrong offset!");
static_assert(offsetof(UBPC_VehicleUpgrade_C, NextIndexAdditionalLights) == 0x000148, "Member 'UBPC_VehicleUpgrade_C::NextIndexAdditionalLights' has a wrong offset!");
static_assert(offsetof(UBPC_VehicleUpgrade_C, NextIndexIsolation) == 0x00014C, "Member 'UBPC_VehicleUpgrade_C::NextIndexIsolation' has a wrong offset!");

}

