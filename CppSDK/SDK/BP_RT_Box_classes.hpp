#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RT_Box

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_RT_Box.BP_RT_Box_C
// 0x0018 (0x02A8 - 0x0290)
class ABP_RT_Box_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Box;                                               // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_RT_Box(int32 EntryPoint);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveActorEndOverlap(class AActor* OtherActor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RT_Box_C">();
	}
	static class ABP_RT_Box_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_RT_Box_C>();
	}
};
static_assert(alignof(ABP_RT_Box_C) == 0x000008, "Wrong alignment on ABP_RT_Box_C");
static_assert(sizeof(ABP_RT_Box_C) == 0x0002A8, "Wrong size on ABP_RT_Box_C");
static_assert(offsetof(ABP_RT_Box_C, UberGraphFrame) == 0x000290, "Member 'ABP_RT_Box_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_RT_Box_C, Box) == 0x000298, "Member 'ABP_RT_Box_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_RT_Box_C, DefaultSceneRoot) == 0x0002A0, "Member 'ABP_RT_Box_C::DefaultSceneRoot' has a wrong offset!");

}

