#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CompassFP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CompassFP.BP_CompassFP_C
// 0x0068 (0x02F8 - 0x0290)
class ABP_CompassFP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Kompass_strelka1;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Kompass_strelka2;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Compas;                                            // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ASurvivalPlayer_C*                      SurvRef;                                           // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_TeleportToRegion_C*                 HubRef;                                            // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_DoorTeleport_C*                     StreetDoorRef;                                     // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CompassMat;                                        // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Strelka1;                                          // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Strelka2;                                          // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                North;                                             // 0x02E0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_CompassFP(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CompassFP_C">();
	}
	static class ABP_CompassFP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CompassFP_C>();
	}
};
static_assert(alignof(ABP_CompassFP_C) == 0x000008, "Wrong alignment on ABP_CompassFP_C");
static_assert(sizeof(ABP_CompassFP_C) == 0x0002F8, "Wrong size on ABP_CompassFP_C");
static_assert(offsetof(ABP_CompassFP_C, UberGraphFrame) == 0x000290, "Member 'ABP_CompassFP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_CompassFP_C, Kompass_strelka1) == 0x000298, "Member 'ABP_CompassFP_C::Kompass_strelka1' has a wrong offset!");
static_assert(offsetof(ABP_CompassFP_C, Kompass_strelka2) == 0x0002A0, "Member 'ABP_CompassFP_C::Kompass_strelka2' has a wrong offset!");
static_assert(offsetof(ABP_CompassFP_C, Compas) == 0x0002A8, "Member 'ABP_CompassFP_C::Compas' has a wrong offset!");
static_assert(offsetof(ABP_CompassFP_C, SurvRef) == 0x0002B0, "Member 'ABP_CompassFP_C::SurvRef' has a wrong offset!");
static_assert(offsetof(ABP_CompassFP_C, HubRef) == 0x0002B8, "Member 'ABP_CompassFP_C::HubRef' has a wrong offset!");
static_assert(offsetof(ABP_CompassFP_C, StreetDoorRef) == 0x0002C0, "Member 'ABP_CompassFP_C::StreetDoorRef' has a wrong offset!");
static_assert(offsetof(ABP_CompassFP_C, CompassMat) == 0x0002C8, "Member 'ABP_CompassFP_C::CompassMat' has a wrong offset!");
static_assert(offsetof(ABP_CompassFP_C, Strelka1) == 0x0002D0, "Member 'ABP_CompassFP_C::Strelka1' has a wrong offset!");
static_assert(offsetof(ABP_CompassFP_C, Strelka2) == 0x0002D8, "Member 'ABP_CompassFP_C::Strelka2' has a wrong offset!");
static_assert(offsetof(ABP_CompassFP_C, North) == 0x0002E0, "Member 'ABP_CompassFP_C::North' has a wrong offset!");

}

