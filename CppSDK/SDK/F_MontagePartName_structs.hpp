#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_MontagePartName

#include "Basic.hpp"

#include "E_AdditiveDamage_structs.hpp"


namespace SDK
{

// UserDefinedStruct F_MontagePartName.F_MontagePartName
// 0x000C (0x000C - 0x0000)
struct FF_MontagePartName final
{
public:
	E_AdditiveDamage                              Part_3_3682AE404D0ECE59DDA1369A9AAB6EFF;           // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   MontageSectionName_5_232255B341850599421A93847AC9720A; // 0x0004(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FF_MontagePartName) == 0x000004, "Wrong alignment on FF_MontagePartName");
static_assert(sizeof(FF_MontagePartName) == 0x00000C, "Wrong size on FF_MontagePartName");
static_assert(offsetof(FF_MontagePartName, Part_3_3682AE404D0ECE59DDA1369A9AAB6EFF) == 0x000000, "Member 'FF_MontagePartName::Part_3_3682AE404D0ECE59DDA1369A9AAB6EFF' has a wrong offset!");
static_assert(offsetof(FF_MontagePartName, MontageSectionName_5_232255B341850599421A93847AC9720A) == 0x000004, "Member 'FF_MontagePartName::MontageSectionName_5_232255B341850599421A93847AC9720A' has a wrong offset!");

}
