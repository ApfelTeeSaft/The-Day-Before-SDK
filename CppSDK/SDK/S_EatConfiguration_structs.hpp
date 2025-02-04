#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_EatConfiguration

#include "Basic.hpp"

#include "S_EatPlayerInformation_structs.hpp"
#include "S_EatItemInformation_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_EatConfiguration.S_EatConfiguration
// 0x0400 (0x0400 - 0x0000)
struct FS_EatConfiguration final
{
public:
	struct FS_EatPlayerInformation                Player_30_D3BD59C4472B621D3D3F5BA644B6A05D;        // 0x0000(0x02B8)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                         Pad_2B8[0x8];                                      // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_EatItemInformation                  Item_33_A4E1663647C077255BA6DDBA7762B99D;          // 0x02C0(0x0140)(Edit, BlueprintVisible, HasGetValueTypeHash)
};
static_assert(alignof(FS_EatConfiguration) == 0x000010, "Wrong alignment on FS_EatConfiguration");
static_assert(sizeof(FS_EatConfiguration) == 0x000400, "Wrong size on FS_EatConfiguration");
static_assert(offsetof(FS_EatConfiguration, Player_30_D3BD59C4472B621D3D3F5BA644B6A05D) == 0x000000, "Member 'FS_EatConfiguration::Player_30_D3BD59C4472B621D3D3F5BA644B6A05D' has a wrong offset!");
static_assert(offsetof(FS_EatConfiguration, Item_33_A4E1663647C077255BA6DDBA7762B99D) == 0x0002C0, "Member 'FS_EatConfiguration::Item_33_A4E1663647C077255BA6DDBA7762B99D' has a wrong offset!");

}

