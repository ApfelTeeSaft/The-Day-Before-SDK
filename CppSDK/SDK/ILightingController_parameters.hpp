#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ILightingController

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ILightingController.ILightingController_C.SetPlayerInHUB
// 0x0001 (0x0001 - 0x0000)
struct ILightingController_C_SetPlayerInHUB final
{
public:
	bool                                          InHub;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ILightingController_C_SetPlayerInHUB) == 0x000001, "Wrong alignment on ILightingController_C_SetPlayerInHUB");
static_assert(sizeof(ILightingController_C_SetPlayerInHUB) == 0x000001, "Wrong size on ILightingController_C_SetPlayerInHUB");
static_assert(offsetof(ILightingController_C_SetPlayerInHUB, InHub) == 0x000000, "Member 'ILightingController_C_SetPlayerInHUB::InHub' has a wrong offset!");

// Function ILightingController.ILightingController_C.SetSkyLightColor
// 0x0010 (0x0010 - 0x0000)
struct ILightingController_C_SetSkyLightColor final
{
public:
	struct FLinearColor                           Color;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ILightingController_C_SetSkyLightColor) == 0x000004, "Wrong alignment on ILightingController_C_SetSkyLightColor");
static_assert(sizeof(ILightingController_C_SetSkyLightColor) == 0x000010, "Wrong size on ILightingController_C_SetSkyLightColor");
static_assert(offsetof(ILightingController_C_SetSkyLightColor, Color) == 0x000000, "Member 'ILightingController_C_SetSkyLightColor::Color' has a wrong offset!");

// Function ILightingController.ILightingController_C.SetSkylightOffset
// 0x0008 (0x0008 - 0x0000)
struct ILightingController_C_SetSkylightOffset final
{
public:
	double                                        Offset;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ILightingController_C_SetSkylightOffset) == 0x000008, "Wrong alignment on ILightingController_C_SetSkylightOffset");
static_assert(sizeof(ILightingController_C_SetSkylightOffset) == 0x000008, "Wrong size on ILightingController_C_SetSkylightOffset");
static_assert(offsetof(ILightingController_C_SetSkylightOffset, Offset) == 0x000000, "Member 'ILightingController_C_SetSkylightOffset::Offset' has a wrong offset!");

}

