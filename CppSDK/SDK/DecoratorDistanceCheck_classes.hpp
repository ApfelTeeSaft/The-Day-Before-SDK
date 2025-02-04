#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DecoratorDistanceCheck

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DecoratorDistanceCheck.DecoratorDistanceCheck_C
// 0x0040 (0x00E0 - 0x00A0)
class UDecoratorDistanceCheck_C final : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                 BB_Key;                                            // 0x00A0(0x0028)(Edit, BlueprintVisible)
	double                                        DistanceMax;                                       // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DistanceMin;                                       // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Enemy;                                             // 0x00D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DecoratorDistanceCheck_C">();
	}
	static class UDecoratorDistanceCheck_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDecoratorDistanceCheck_C>();
	}
};
static_assert(alignof(UDecoratorDistanceCheck_C) == 0x000008, "Wrong alignment on UDecoratorDistanceCheck_C");
static_assert(sizeof(UDecoratorDistanceCheck_C) == 0x0000E0, "Wrong size on UDecoratorDistanceCheck_C");
static_assert(offsetof(UDecoratorDistanceCheck_C, BB_Key) == 0x0000A0, "Member 'UDecoratorDistanceCheck_C::BB_Key' has a wrong offset!");
static_assert(offsetof(UDecoratorDistanceCheck_C, DistanceMax) == 0x0000C8, "Member 'UDecoratorDistanceCheck_C::DistanceMax' has a wrong offset!");
static_assert(offsetof(UDecoratorDistanceCheck_C, DistanceMin) == 0x0000D0, "Member 'UDecoratorDistanceCheck_C::DistanceMin' has a wrong offset!");
static_assert(offsetof(UDecoratorDistanceCheck_C, Enemy) == 0x0000D8, "Member 'UDecoratorDistanceCheck_C::Enemy' has a wrong offset!");

}

