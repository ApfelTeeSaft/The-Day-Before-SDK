#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerRoomItemsStructure

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct PlayerRoomItemsStructure.PlayerRoomItemsStructure
// 0x0020 (0x0020 - 0x0000)
struct FPlayerRoomItemsStructure final
{
public:
	TArray<class FName>                           ItemsInside_8_9F643F9848549D098AB164A0320C3FD8;    // 0x0000(0x0010)(Edit, BlueprintVisible)
	TArray<struct FTransform>                     ItemsInsideTransform_7_D73F878A44B01A83359ABC9D54A11B0D; // 0x0010(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FPlayerRoomItemsStructure) == 0x000008, "Wrong alignment on FPlayerRoomItemsStructure");
static_assert(sizeof(FPlayerRoomItemsStructure) == 0x000020, "Wrong size on FPlayerRoomItemsStructure");
static_assert(offsetof(FPlayerRoomItemsStructure, ItemsInside_8_9F643F9848549D098AB164A0320C3FD8) == 0x000000, "Member 'FPlayerRoomItemsStructure::ItemsInside_8_9F643F9848549D098AB164A0320C3FD8' has a wrong offset!");
static_assert(offsetof(FPlayerRoomItemsStructure, ItemsInsideTransform_7_D73F878A44B01A83359ABC9D54A11B0D) == 0x000010, "Member 'FPlayerRoomItemsStructure::ItemsInsideTransform_7_D73F878A44B01A83359ABC9D54A11B0D' has a wrong offset!");

}

