#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Illumination

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct Illumination.Illumination
// 0x0008 (0x0008 - 0x0000)
struct FIllumination final
{
public:
	float                                         Intensity_6_17F46BB04257A6C40C96D986CBF655F6;      // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 LightColor_9_5F6DE88C483C0B11F86A5BB605B1778F;     // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FIllumination) == 0x000004, "Wrong alignment on FIllumination");
static_assert(sizeof(FIllumination) == 0x000008, "Wrong size on FIllumination");
static_assert(offsetof(FIllumination, Intensity_6_17F46BB04257A6C40C96D986CBF655F6) == 0x000000, "Member 'FIllumination::Intensity_6_17F46BB04257A6C40C96D986CBF655F6' has a wrong offset!");
static_assert(offsetof(FIllumination, LightColor_9_5F6DE88C483C0B11F86A5BB605B1778F) == 0x000004, "Member 'FIllumination::LightColor_9_5F6DE88C483C0B11F86A5BB605B1778F' has a wrong offset!");

}
