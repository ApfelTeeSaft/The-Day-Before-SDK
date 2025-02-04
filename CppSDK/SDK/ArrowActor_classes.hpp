#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ArrowActor

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ArrowActor.ArrowActor_C
// 0x0010 (0x02A0 - 0x0290)
class AArrowActor_C final : public AActor
{
public:
	class UArrowComponent*                        Arrow;                                             // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ArrowActor_C">();
	}
	static class AArrowActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AArrowActor_C>();
	}
};
static_assert(alignof(AArrowActor_C) == 0x000008, "Wrong alignment on AArrowActor_C");
static_assert(sizeof(AArrowActor_C) == 0x0002A0, "Wrong size on AArrowActor_C");
static_assert(offsetof(AArrowActor_C, Arrow) == 0x000290, "Member 'AArrowActor_C::Arrow' has a wrong offset!");
static_assert(offsetof(AArrowActor_C, DefaultSceneRoot) == 0x000298, "Member 'AArrowActor_C::DefaultSceneRoot' has a wrong offset!");

}

