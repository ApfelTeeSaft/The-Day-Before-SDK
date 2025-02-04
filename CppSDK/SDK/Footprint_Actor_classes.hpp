#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Footprint_Actor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Footprint_Actor.Footprint_Actor_C
// 0x0020 (0x02B0 - 0x0290)
class AFootprint_Actor_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDecalComponent*                        FootprintDecal;                                    // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        Duration;                                          // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Footprint_Actor(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Footprint_Actor_C">();
	}
	static class AFootprint_Actor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFootprint_Actor_C>();
	}
};
static_assert(alignof(AFootprint_Actor_C) == 0x000008, "Wrong alignment on AFootprint_Actor_C");
static_assert(sizeof(AFootprint_Actor_C) == 0x0002B0, "Wrong size on AFootprint_Actor_C");
static_assert(offsetof(AFootprint_Actor_C, UberGraphFrame) == 0x000290, "Member 'AFootprint_Actor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AFootprint_Actor_C, FootprintDecal) == 0x000298, "Member 'AFootprint_Actor_C::FootprintDecal' has a wrong offset!");
static_assert(offsetof(AFootprint_Actor_C, DefaultSceneRoot) == 0x0002A0, "Member 'AFootprint_Actor_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AFootprint_Actor_C, Duration) == 0x0002A8, "Member 'AFootprint_Actor_C::Duration' has a wrong offset!");

}

