#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BreathSystemInterface

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BreathSystemInterface.BreathSystemInterface_C
// 0x0000 (0x0028 - 0x0028)
class IBreathSystemInterface_C final : public IInterface
{
public:
	void CallBreathStateChange(const struct FBreathStateMachineStruct& NewState, double CurrentStamina, bool DamagedChest, bool DamagedBelly, bool Painkiller);
	void OnBreathStateChanged(const struct FBreathStateChangedStruct& State);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BreathSystemInterface_C">();
	}
	static class IBreathSystemInterface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBreathSystemInterface_C>();
	}
};
static_assert(alignof(IBreathSystemInterface_C) == 0x000008, "Wrong alignment on IBreathSystemInterface_C");
static_assert(sizeof(IBreathSystemInterface_C) == 0x000028, "Wrong size on IBreathSystemInterface_C");

}

