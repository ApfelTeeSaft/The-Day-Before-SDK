#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AimActionShake

#include "Basic.hpp"

#include "IdleShake_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AimActionShake.AimActionShake_C
// 0x0000 (0x0100 - 0x0100)
class UAimActionShake_C final : public UIdleShake_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AimActionShake_C">();
	}
	static class UAimActionShake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAimActionShake_C>();
	}
};
static_assert(alignof(UAimActionShake_C) == 0x000010, "Wrong alignment on UAimActionShake_C");
static_assert(sizeof(UAimActionShake_C) == 0x000100, "Wrong size on UAimActionShake_C");

}

