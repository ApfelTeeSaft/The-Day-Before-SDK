#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ILightingController

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ILightingController.ILightingController_C
// 0x0000 (0x0028 - 0x0028)
class IILightingController_C final : public IInterface
{
public:
	void SetPlayerInHUB(bool InHub);
	void SetSkyLightColor(const struct FLinearColor& Color);
	void SetSkylightOffset(double Offset);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ILightingController_C">();
	}
	static class IILightingController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IILightingController_C>();
	}
};
static_assert(alignof(IILightingController_C) == 0x000008, "Wrong alignment on IILightingController_C");
static_assert(sizeof(IILightingController_C) == 0x000028, "Wrong size on IILightingController_C");

}

