#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Light_MASTER

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Light_MASTER.BP_Light_MASTER_C
// 0x0010 (0x02A0 - 0x0290)
class ABP_Light_MASTER_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Light_MASTER(int32 EntryPoint);
	void TurnOff(class UStaticMeshComponent* StaticMesh, class URectLightComponent* RectLight, class UParticleSystemComponent* Particle);
	void TurnOffTheLights();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Light_MASTER_C">();
	}
	static class ABP_Light_MASTER_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Light_MASTER_C>();
	}
};
static_assert(alignof(ABP_Light_MASTER_C) == 0x000008, "Wrong alignment on ABP_Light_MASTER_C");
static_assert(sizeof(ABP_Light_MASTER_C) == 0x0002A0, "Wrong size on ABP_Light_MASTER_C");
static_assert(offsetof(ABP_Light_MASTER_C, UberGraphFrame) == 0x000290, "Member 'ABP_Light_MASTER_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Light_MASTER_C, DefaultSceneRoot) == 0x000298, "Member 'ABP_Light_MASTER_C::DefaultSceneRoot' has a wrong offset!");

}
