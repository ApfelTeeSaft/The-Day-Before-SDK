#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Explosion_CraftSmoke

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Explosion_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Explosion_CraftSmoke.Explosion_CraftSmoke_C
// 0x0040 (0x0300 - 0x02C0)
class AExplosion_CraftSmoke_C final : public AExplosion_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Explosion_CraftSmoke_C;             // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                   PointLight;                                        // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere_0;                                          // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Niagara;                                           // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Timeline_0_NewTrack_1_0FC318CA46C6F8396D331090F1A84669; // 0x02E0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_NewTrack_0_0FC318CA46C6F8396D331090F1A84669; // 0x02F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_0FC318CA46C6F8396D331090F1A84669; // 0x02F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F5[0x3];                                      // 0x02F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__Explosion_Smoke_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_Explosion_CraftSmoke(int32 EntryPoint);
	void ReceiveBeginPlay();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Explosion_CraftSmoke_C">();
	}
	static class AExplosion_CraftSmoke_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AExplosion_CraftSmoke_C>();
	}
};
static_assert(alignof(AExplosion_CraftSmoke_C) == 0x000008, "Wrong alignment on AExplosion_CraftSmoke_C");
static_assert(sizeof(AExplosion_CraftSmoke_C) == 0x000300, "Wrong size on AExplosion_CraftSmoke_C");
static_assert(offsetof(AExplosion_CraftSmoke_C, UberGraphFrame_Explosion_CraftSmoke_C) == 0x0002C0, "Member 'AExplosion_CraftSmoke_C::UberGraphFrame_Explosion_CraftSmoke_C' has a wrong offset!");
static_assert(offsetof(AExplosion_CraftSmoke_C, PointLight) == 0x0002C8, "Member 'AExplosion_CraftSmoke_C::PointLight' has a wrong offset!");
static_assert(offsetof(AExplosion_CraftSmoke_C, Sphere_0) == 0x0002D0, "Member 'AExplosion_CraftSmoke_C::Sphere_0' has a wrong offset!");
static_assert(offsetof(AExplosion_CraftSmoke_C, Niagara) == 0x0002D8, "Member 'AExplosion_CraftSmoke_C::Niagara' has a wrong offset!");
static_assert(offsetof(AExplosion_CraftSmoke_C, Timeline_0_NewTrack_1_0FC318CA46C6F8396D331090F1A84669) == 0x0002E0, "Member 'AExplosion_CraftSmoke_C::Timeline_0_NewTrack_1_0FC318CA46C6F8396D331090F1A84669' has a wrong offset!");
static_assert(offsetof(AExplosion_CraftSmoke_C, Timeline_0_NewTrack_0_0FC318CA46C6F8396D331090F1A84669) == 0x0002F0, "Member 'AExplosion_CraftSmoke_C::Timeline_0_NewTrack_0_0FC318CA46C6F8396D331090F1A84669' has a wrong offset!");
static_assert(offsetof(AExplosion_CraftSmoke_C, Timeline_0__Direction_0FC318CA46C6F8396D331090F1A84669) == 0x0002F4, "Member 'AExplosion_CraftSmoke_C::Timeline_0__Direction_0FC318CA46C6F8396D331090F1A84669' has a wrong offset!");
static_assert(offsetof(AExplosion_CraftSmoke_C, Timeline_0) == 0x0002F8, "Member 'AExplosion_CraftSmoke_C::Timeline_0' has a wrong offset!");

}
