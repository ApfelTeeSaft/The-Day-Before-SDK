#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MolotovFire

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MolotovFire.BP_MolotovFire_C
// 0x0058 (0x02E8 - 0x0290)
class ABP_MolotovFire_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        P4;                                                // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        P3;                                                // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        P2;                                                // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        P1;                                                // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UParticleSystemComponent*>       Fires;                                             // 0x02C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          DoDamage;                                          // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D1[0x7];                                      // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Duration;                                          // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Damage;                                            // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_MolotovFire(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SpawnParticleAt(const struct FVector& Location);
	void Stop();
	void StopFires();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MolotovFire_C">();
	}
	static class ABP_MolotovFire_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MolotovFire_C>();
	}
};
static_assert(alignof(ABP_MolotovFire_C) == 0x000008, "Wrong alignment on ABP_MolotovFire_C");
static_assert(sizeof(ABP_MolotovFire_C) == 0x0002E8, "Wrong size on ABP_MolotovFire_C");
static_assert(offsetof(ABP_MolotovFire_C, UberGraphFrame) == 0x000290, "Member 'ABP_MolotovFire_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_MolotovFire_C, P4) == 0x000298, "Member 'ABP_MolotovFire_C::P4' has a wrong offset!");
static_assert(offsetof(ABP_MolotovFire_C, P3) == 0x0002A0, "Member 'ABP_MolotovFire_C::P3' has a wrong offset!");
static_assert(offsetof(ABP_MolotovFire_C, P2) == 0x0002A8, "Member 'ABP_MolotovFire_C::P2' has a wrong offset!");
static_assert(offsetof(ABP_MolotovFire_C, P1) == 0x0002B0, "Member 'ABP_MolotovFire_C::P1' has a wrong offset!");
static_assert(offsetof(ABP_MolotovFire_C, DefaultSceneRoot) == 0x0002B8, "Member 'ABP_MolotovFire_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_MolotovFire_C, Fires) == 0x0002C0, "Member 'ABP_MolotovFire_C::Fires' has a wrong offset!");
static_assert(offsetof(ABP_MolotovFire_C, DoDamage) == 0x0002D0, "Member 'ABP_MolotovFire_C::DoDamage' has a wrong offset!");
static_assert(offsetof(ABP_MolotovFire_C, Duration) == 0x0002D8, "Member 'ABP_MolotovFire_C::Duration' has a wrong offset!");
static_assert(offsetof(ABP_MolotovFire_C, Damage) == 0x0002E0, "Member 'ABP_MolotovFire_C::Damage' has a wrong offset!");

}
