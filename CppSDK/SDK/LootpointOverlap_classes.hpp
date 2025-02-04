#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LootpointOverlap

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass LootpointOverlap.LootpointOverlap_C
// 0x0010 (0x02A0 - 0x0290)
class ALootpointOverlap_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       OverlapSphere;                                     // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ExecuteUbergraph_LootpointOverlap(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LootpointOverlap_C">();
	}
	static class ALootpointOverlap_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALootpointOverlap_C>();
	}
};
static_assert(alignof(ALootpointOverlap_C) == 0x000008, "Wrong alignment on ALootpointOverlap_C");
static_assert(sizeof(ALootpointOverlap_C) == 0x0002A0, "Wrong size on ALootpointOverlap_C");
static_assert(offsetof(ALootpointOverlap_C, UberGraphFrame) == 0x000290, "Member 'ALootpointOverlap_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ALootpointOverlap_C, OverlapSphere) == 0x000298, "Member 'ALootpointOverlap_C::OverlapSphere' has a wrong offset!");

}

