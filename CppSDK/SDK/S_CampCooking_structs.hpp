#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_CampCooking

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct S_CampCooking.S_CampCooking
// 0x00A0 (0x00A0 - 0x0000)
struct FS_CampCooking final
{
public:
	class FText                                   Name_5_5AA26EFB46B83F1EA9B06C983227AD0E;           // 0x0000(0x0018)(Edit, BlueprintVisible)
	int32                                         CookTime_8_5C7EE7AB45CCDC28269C8F8C201295F2;       // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, int32>                    Ingredients_28_AE8CDB9D4444FA3108C5409CFE6A5125;   // 0x0020(0x0050)(Edit, BlueprintVisible)
	class FText                                   Result_20_B91265634D815FE3D9C1ED8BD7859F10;        // 0x0070(0x0018)(Edit, BlueprintVisible)
	int32                                         Count_22_C249DB174E1334DB5552D0B47B9FD9A3;         // 0x0088(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Advanced_30_B1EDEF404922174924C1A58531D04DB6;      // 0x008C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D[0x3];                                       // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         Sets_34_F288F21F4894C8D0A353A78EABFB525B;          // 0x0090(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FS_CampCooking) == 0x000008, "Wrong alignment on FS_CampCooking");
static_assert(sizeof(FS_CampCooking) == 0x0000A0, "Wrong size on FS_CampCooking");
static_assert(offsetof(FS_CampCooking, Name_5_5AA26EFB46B83F1EA9B06C983227AD0E) == 0x000000, "Member 'FS_CampCooking::Name_5_5AA26EFB46B83F1EA9B06C983227AD0E' has a wrong offset!");
static_assert(offsetof(FS_CampCooking, CookTime_8_5C7EE7AB45CCDC28269C8F8C201295F2) == 0x000018, "Member 'FS_CampCooking::CookTime_8_5C7EE7AB45CCDC28269C8F8C201295F2' has a wrong offset!");
static_assert(offsetof(FS_CampCooking, Ingredients_28_AE8CDB9D4444FA3108C5409CFE6A5125) == 0x000020, "Member 'FS_CampCooking::Ingredients_28_AE8CDB9D4444FA3108C5409CFE6A5125' has a wrong offset!");
static_assert(offsetof(FS_CampCooking, Result_20_B91265634D815FE3D9C1ED8BD7859F10) == 0x000070, "Member 'FS_CampCooking::Result_20_B91265634D815FE3D9C1ED8BD7859F10' has a wrong offset!");
static_assert(offsetof(FS_CampCooking, Count_22_C249DB174E1334DB5552D0B47B9FD9A3) == 0x000088, "Member 'FS_CampCooking::Count_22_C249DB174E1334DB5552D0B47B9FD9A3' has a wrong offset!");
static_assert(offsetof(FS_CampCooking, Advanced_30_B1EDEF404922174924C1A58531D04DB6) == 0x00008C, "Member 'FS_CampCooking::Advanced_30_B1EDEF404922174924C1A58531D04DB6' has a wrong offset!");
static_assert(offsetof(FS_CampCooking, Sets_34_F288F21F4894C8D0A353A78EABFB525B) == 0x000090, "Member 'FS_CampCooking::Sets_34_F288F21F4894C8D0A353A78EABFB525B' has a wrong offset!");

}
