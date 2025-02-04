#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WalkingArea

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_WalkingArea.BP_WalkingArea_C
// 0x0018 (0x02A8 - 0x0290)
class ABP_WalkingArea_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Box;                                               // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_WalkingArea_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BP_WalkingArea_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ExecuteUbergraph_BP_WalkingArea(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_WalkingArea_C">();
	}
	static class ABP_WalkingArea_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_WalkingArea_C>();
	}
};
static_assert(alignof(ABP_WalkingArea_C) == 0x000008, "Wrong alignment on ABP_WalkingArea_C");
static_assert(sizeof(ABP_WalkingArea_C) == 0x0002A8, "Wrong size on ABP_WalkingArea_C");
static_assert(offsetof(ABP_WalkingArea_C, UberGraphFrame) == 0x000290, "Member 'ABP_WalkingArea_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_WalkingArea_C, Box) == 0x000298, "Member 'ABP_WalkingArea_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_WalkingArea_C, DefaultSceneRoot) == 0x0002A0, "Member 'ABP_WalkingArea_C::DefaultSceneRoot' has a wrong offset!");

}

