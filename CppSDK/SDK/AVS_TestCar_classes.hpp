#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AVS_TestCar

#include "Basic.hpp"

#include "AVS_VehicleMaster_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass AVS_TestCar.AVS_TestCar_C
// 0x0060 (0x1050 - 0x0FF0)
class AAVS_TestCar_C final : public AAVS_VehicleMaster_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_AVS_TestCar_C;                      // 0x0FE8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      FlowmapBrush_NPC3;                                 // 0x0FF0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      FlowmapBrush_NPC2;                                 // 0x0FF8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      FlowmapBrush_NPC1;                                 // 0x1000(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      FlowmapBrush_NPC;                                  // 0x1008(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   DodgeChellenger_Body_Window;                       // 0x1010(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   DodgeChellenger_DoorL_Window;                      // 0x1018(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   DodgeChellenger_DoorR_Window;                      // 0x1020(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   DodgeChellenger_DoorR;                             // 0x1028(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   DodgeChellenger_DoorL;                             // 0x1030(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   DodgeChellenger_Body;                              // 0x1038(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Dodge_Burned_DoorR;                                // 0x1040(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Dodge_Burned_DoorL;                                // 0x1048(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AVS_TestCar(int32 EntryPoint);
	void GearChanged_1(int32 PreviousGear, int32 CurrentGear);
	void AttachDoorToBone();
	void AttachDoorToMainMesh();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetBoost(bool NewBoost, bool* Success);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AVS_TestCar_C">();
	}
	static class AAVS_TestCar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAVS_TestCar_C>();
	}
};
static_assert(alignof(AAVS_TestCar_C) == 0x000010, "Wrong alignment on AAVS_TestCar_C");
static_assert(sizeof(AAVS_TestCar_C) == 0x001050, "Wrong size on AAVS_TestCar_C");
static_assert(offsetof(AAVS_TestCar_C, UberGraphFrame_AVS_TestCar_C) == 0x000FE8, "Member 'AAVS_TestCar_C::UberGraphFrame_AVS_TestCar_C' has a wrong offset!");
static_assert(offsetof(AAVS_TestCar_C, FlowmapBrush_NPC3) == 0x000FF0, "Member 'AAVS_TestCar_C::FlowmapBrush_NPC3' has a wrong offset!");
static_assert(offsetof(AAVS_TestCar_C, FlowmapBrush_NPC2) == 0x000FF8, "Member 'AAVS_TestCar_C::FlowmapBrush_NPC2' has a wrong offset!");
static_assert(offsetof(AAVS_TestCar_C, FlowmapBrush_NPC1) == 0x001000, "Member 'AAVS_TestCar_C::FlowmapBrush_NPC1' has a wrong offset!");
static_assert(offsetof(AAVS_TestCar_C, FlowmapBrush_NPC) == 0x001008, "Member 'AAVS_TestCar_C::FlowmapBrush_NPC' has a wrong offset!");
static_assert(offsetof(AAVS_TestCar_C, DodgeChellenger_Body_Window) == 0x001010, "Member 'AAVS_TestCar_C::DodgeChellenger_Body_Window' has a wrong offset!");
static_assert(offsetof(AAVS_TestCar_C, DodgeChellenger_DoorL_Window) == 0x001018, "Member 'AAVS_TestCar_C::DodgeChellenger_DoorL_Window' has a wrong offset!");
static_assert(offsetof(AAVS_TestCar_C, DodgeChellenger_DoorR_Window) == 0x001020, "Member 'AAVS_TestCar_C::DodgeChellenger_DoorR_Window' has a wrong offset!");
static_assert(offsetof(AAVS_TestCar_C, DodgeChellenger_DoorR) == 0x001028, "Member 'AAVS_TestCar_C::DodgeChellenger_DoorR' has a wrong offset!");
static_assert(offsetof(AAVS_TestCar_C, DodgeChellenger_DoorL) == 0x001030, "Member 'AAVS_TestCar_C::DodgeChellenger_DoorL' has a wrong offset!");
static_assert(offsetof(AAVS_TestCar_C, DodgeChellenger_Body) == 0x001038, "Member 'AAVS_TestCar_C::DodgeChellenger_Body' has a wrong offset!");
static_assert(offsetof(AAVS_TestCar_C, Dodge_Burned_DoorR) == 0x001040, "Member 'AAVS_TestCar_C::Dodge_Burned_DoorR' has a wrong offset!");
static_assert(offsetof(AAVS_TestCar_C, Dodge_Burned_DoorL) == 0x001048, "Member 'AAVS_TestCar_C::Dodge_Burned_DoorL' has a wrong offset!");

}
