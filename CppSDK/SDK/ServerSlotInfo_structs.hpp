#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ServerSlotInfo

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct ServerSlotInfo.ServerSlotInfo
// 0x000C (0x000C - 0x0000)
struct FServerSlotInfo final
{
public:
	int32                                         SlotIndex_6_F4FBC5A540C0051D28A25FB780BE9C85;      // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Empty_1_837A097C463AA10B4D48AFB48DBCEEE1;          // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         HostingID_4_170955EB41F38490334C068515F5BD61;      // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FServerSlotInfo) == 0x000004, "Wrong alignment on FServerSlotInfo");
static_assert(sizeof(FServerSlotInfo) == 0x00000C, "Wrong size on FServerSlotInfo");
static_assert(offsetof(FServerSlotInfo, SlotIndex_6_F4FBC5A540C0051D28A25FB780BE9C85) == 0x000000, "Member 'FServerSlotInfo::SlotIndex_6_F4FBC5A540C0051D28A25FB780BE9C85' has a wrong offset!");
static_assert(offsetof(FServerSlotInfo, Empty_1_837A097C463AA10B4D48AFB48DBCEEE1) == 0x000004, "Member 'FServerSlotInfo::Empty_1_837A097C463AA10B4D48AFB48DBCEEE1' has a wrong offset!");
static_assert(offsetof(FServerSlotInfo, HostingID_4_170955EB41F38490334C068515F5BD61) == 0x000008, "Member 'FServerSlotInfo::HostingID_4_170955EB41F38490334C068515F5BD61' has a wrong offset!");

}

