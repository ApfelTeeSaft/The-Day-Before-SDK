#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemIdGenerateChance

#include "Basic.hpp"

#include "CountChance_structs.hpp"


namespace SDK
{

// UserDefinedStruct ItemIdGenerateChance.ItemIdGenerateChance
// 0x0020 (0x0020 - 0x0000)
struct FItemIdGenerateChance final
{
public:
	class FName                                   ID_2_5784D2564D6905932AE1E9AAE43B4DE6;             // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Chance_10_B57622FC4E53D0884965AC9BB946BE1E;        // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FCountChance>                   Count_6_A0A9EAB843FA974478EA7AB6E495703A;          // 0x0010(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FItemIdGenerateChance) == 0x000008, "Wrong alignment on FItemIdGenerateChance");
static_assert(sizeof(FItemIdGenerateChance) == 0x000020, "Wrong size on FItemIdGenerateChance");
static_assert(offsetof(FItemIdGenerateChance, ID_2_5784D2564D6905932AE1E9AAE43B4DE6) == 0x000000, "Member 'FItemIdGenerateChance::ID_2_5784D2564D6905932AE1E9AAE43B4DE6' has a wrong offset!");
static_assert(offsetof(FItemIdGenerateChance, Chance_10_B57622FC4E53D0884965AC9BB946BE1E) == 0x000008, "Member 'FItemIdGenerateChance::Chance_10_B57622FC4E53D0884965AC9BB946BE1E' has a wrong offset!");
static_assert(offsetof(FItemIdGenerateChance, Count_6_A0A9EAB843FA974478EA7AB6E495703A) == 0x000010, "Member 'FItemIdGenerateChance::Count_6_A0A9EAB843FA974478EA7AB6E495703A' has a wrong offset!");

}
