#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_MapItem

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BPI_MapItem.BPI_MapItem_C.GetMapIconData
// 0x0070 (0x0070 - 0x0000)
struct BPI_MapItem_C_GetMapIconData final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Icon;                                              // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              IconSize;                                          // 0x0020(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RotationYaw;                                       // 0x0030(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 WorldActor;                                        // 0x0038(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   Param_Name;                                        // 0x0040(0x0018)(Parm, OutParm)
	class FText                                   Description;                                       // 0x0058(0x0018)(Parm, OutParm)
};
static_assert(alignof(BPI_MapItem_C_GetMapIconData) == 0x000008, "Wrong alignment on BPI_MapItem_C_GetMapIconData");
static_assert(sizeof(BPI_MapItem_C_GetMapIconData) == 0x000070, "Wrong size on BPI_MapItem_C_GetMapIconData");
static_assert(offsetof(BPI_MapItem_C_GetMapIconData, Location) == 0x000000, "Member 'BPI_MapItem_C_GetMapIconData::Location' has a wrong offset!");
static_assert(offsetof(BPI_MapItem_C_GetMapIconData, Icon) == 0x000018, "Member 'BPI_MapItem_C_GetMapIconData::Icon' has a wrong offset!");
static_assert(offsetof(BPI_MapItem_C_GetMapIconData, IconSize) == 0x000020, "Member 'BPI_MapItem_C_GetMapIconData::IconSize' has a wrong offset!");
static_assert(offsetof(BPI_MapItem_C_GetMapIconData, RotationYaw) == 0x000030, "Member 'BPI_MapItem_C_GetMapIconData::RotationYaw' has a wrong offset!");
static_assert(offsetof(BPI_MapItem_C_GetMapIconData, WorldActor) == 0x000038, "Member 'BPI_MapItem_C_GetMapIconData::WorldActor' has a wrong offset!");
static_assert(offsetof(BPI_MapItem_C_GetMapIconData, Param_Name) == 0x000040, "Member 'BPI_MapItem_C_GetMapIconData::Param_Name' has a wrong offset!");
static_assert(offsetof(BPI_MapItem_C_GetMapIconData, Description) == 0x000058, "Member 'BPI_MapItem_C_GetMapIconData::Description' has a wrong offset!");

}
