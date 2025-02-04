#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Explosion_Smoke

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Explosion_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Explosion_Smoke.Explosion_Smoke_C
// 0x0120 (0x03E0 - 0x02C0)
class AExplosion_Smoke_C final : public AExplosion_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Explosion_Smoke_C;                  // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      NS_Smoke;                                          // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_FLASH;                                          // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Timeline_0_NewTrack_1_E10221814454721168EBD09271FBEEED; // 0x02D8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_NewTrack_0_E10221814454721168EBD09271FBEEED; // 0x02E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_E10221814454721168EBD09271FBEEED; // 0x02EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2ED[0x3];                                      // 0x02ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F8[0x8];                                      // 0x02F8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             TransformGrenade;                                  // 0x0300(0x0060)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FTransform                             SmokeTransform;                                    // 0x0360(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                VelocityGrenade;                                   // 0x03C0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Explosion_Smoke(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Explosion_Smoke_C">();
	}
	static class AExplosion_Smoke_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AExplosion_Smoke_C>();
	}
};
static_assert(alignof(AExplosion_Smoke_C) == 0x000010, "Wrong alignment on AExplosion_Smoke_C");
static_assert(sizeof(AExplosion_Smoke_C) == 0x0003E0, "Wrong size on AExplosion_Smoke_C");
static_assert(offsetof(AExplosion_Smoke_C, UberGraphFrame_Explosion_Smoke_C) == 0x0002C0, "Member 'AExplosion_Smoke_C::UberGraphFrame_Explosion_Smoke_C' has a wrong offset!");
static_assert(offsetof(AExplosion_Smoke_C, NS_Smoke) == 0x0002C8, "Member 'AExplosion_Smoke_C::NS_Smoke' has a wrong offset!");
static_assert(offsetof(AExplosion_Smoke_C, NS_FLASH) == 0x0002D0, "Member 'AExplosion_Smoke_C::NS_FLASH' has a wrong offset!");
static_assert(offsetof(AExplosion_Smoke_C, Timeline_0_NewTrack_1_E10221814454721168EBD09271FBEEED) == 0x0002D8, "Member 'AExplosion_Smoke_C::Timeline_0_NewTrack_1_E10221814454721168EBD09271FBEEED' has a wrong offset!");
static_assert(offsetof(AExplosion_Smoke_C, Timeline_0_NewTrack_0_E10221814454721168EBD09271FBEEED) == 0x0002E8, "Member 'AExplosion_Smoke_C::Timeline_0_NewTrack_0_E10221814454721168EBD09271FBEEED' has a wrong offset!");
static_assert(offsetof(AExplosion_Smoke_C, Timeline_0__Direction_E10221814454721168EBD09271FBEEED) == 0x0002EC, "Member 'AExplosion_Smoke_C::Timeline_0__Direction_E10221814454721168EBD09271FBEEED' has a wrong offset!");
static_assert(offsetof(AExplosion_Smoke_C, Timeline_0) == 0x0002F0, "Member 'AExplosion_Smoke_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(AExplosion_Smoke_C, TransformGrenade) == 0x000300, "Member 'AExplosion_Smoke_C::TransformGrenade' has a wrong offset!");
static_assert(offsetof(AExplosion_Smoke_C, SmokeTransform) == 0x000360, "Member 'AExplosion_Smoke_C::SmokeTransform' has a wrong offset!");
static_assert(offsetof(AExplosion_Smoke_C, VelocityGrenade) == 0x0003C0, "Member 'AExplosion_Smoke_C::VelocityGrenade' has a wrong offset!");

}

