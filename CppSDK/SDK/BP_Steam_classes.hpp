#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Steam

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Steam.BP_Steam_C
// 0x00A0 (0x0330 - 0x0290)
class ABP_Steam_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFMODAudioComponent*                    FMODAudio;                                         // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Particle;                                          // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        ActiveDiration;                                    // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        InActiveDuration;                                  // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Accum;                                             // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsActive;                                          // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D1[0x7];                                      // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        ColliderTimeout;                                   // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ColliderAccum;                                     // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                InitialBoxExtent;                                  // 0x02E8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                InitialBoxLocation;                                // 0x0300(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ColliderDelay;                                     // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ElectricDoorBox_C*                  ElectricBox;                                       // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDynamic;                                         // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Activate();
	void CauseDamage(const class AActor* Actor);
	void Deactivate();
	void ExecuteUbergraph_BP_Steam(int32 EntryPoint);
	void GetEmptyHitInfo(struct FHitResult* HitInfo);
	void OnActivate();
	void OnBreak();
	void OnDeactivate();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Steam_C">();
	}
	static class ABP_Steam_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Steam_C>();
	}
};
static_assert(alignof(ABP_Steam_C) == 0x000008, "Wrong alignment on ABP_Steam_C");
static_assert(sizeof(ABP_Steam_C) == 0x000330, "Wrong size on ABP_Steam_C");
static_assert(offsetof(ABP_Steam_C, UberGraphFrame) == 0x000290, "Member 'ABP_Steam_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Steam_C, FMODAudio) == 0x000298, "Member 'ABP_Steam_C::FMODAudio' has a wrong offset!");
static_assert(offsetof(ABP_Steam_C, Box) == 0x0002A0, "Member 'ABP_Steam_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_Steam_C, DefaultSceneRoot) == 0x0002A8, "Member 'ABP_Steam_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Steam_C, Particle) == 0x0002B0, "Member 'ABP_Steam_C::Particle' has a wrong offset!");
static_assert(offsetof(ABP_Steam_C, ActiveDiration) == 0x0002B8, "Member 'ABP_Steam_C::ActiveDiration' has a wrong offset!");
static_assert(offsetof(ABP_Steam_C, InActiveDuration) == 0x0002C0, "Member 'ABP_Steam_C::InActiveDuration' has a wrong offset!");
static_assert(offsetof(ABP_Steam_C, Accum) == 0x0002C8, "Member 'ABP_Steam_C::Accum' has a wrong offset!");
static_assert(offsetof(ABP_Steam_C, IsActive) == 0x0002D0, "Member 'ABP_Steam_C::IsActive' has a wrong offset!");
static_assert(offsetof(ABP_Steam_C, ColliderTimeout) == 0x0002D8, "Member 'ABP_Steam_C::ColliderTimeout' has a wrong offset!");
static_assert(offsetof(ABP_Steam_C, ColliderAccum) == 0x0002E0, "Member 'ABP_Steam_C::ColliderAccum' has a wrong offset!");
static_assert(offsetof(ABP_Steam_C, InitialBoxExtent) == 0x0002E8, "Member 'ABP_Steam_C::InitialBoxExtent' has a wrong offset!");
static_assert(offsetof(ABP_Steam_C, InitialBoxLocation) == 0x000300, "Member 'ABP_Steam_C::InitialBoxLocation' has a wrong offset!");
static_assert(offsetof(ABP_Steam_C, ColliderDelay) == 0x000318, "Member 'ABP_Steam_C::ColliderDelay' has a wrong offset!");
static_assert(offsetof(ABP_Steam_C, ElectricBox) == 0x000320, "Member 'ABP_Steam_C::ElectricBox' has a wrong offset!");
static_assert(offsetof(ABP_Steam_C, IsDynamic) == 0x000328, "Member 'ABP_Steam_C::IsDynamic' has a wrong offset!");

}

