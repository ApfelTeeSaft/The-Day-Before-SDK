#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_VehicleSit

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct S_VehicleSit.S_VehicleSit
// 0x0010 (0x0010 - 0x0000)
struct FS_VehicleSit final
{
public:
	bool                                          IsBusy_2_B75AF9B24F5F3F1F0BB98EAC43E202DD;         // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  Sitter_5_5DFE1C3C4B6381B5FACA4F88A2A7A208;         // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_VehicleSit) == 0x000008, "Wrong alignment on FS_VehicleSit");
static_assert(sizeof(FS_VehicleSit) == 0x000010, "Wrong size on FS_VehicleSit");
static_assert(offsetof(FS_VehicleSit, IsBusy_2_B75AF9B24F5F3F1F0BB98EAC43E202DD) == 0x000000, "Member 'FS_VehicleSit::IsBusy_2_B75AF9B24F5F3F1F0BB98EAC43E202DD' has a wrong offset!");
static_assert(offsetof(FS_VehicleSit, Sitter_5_5DFE1C3C4B6381B5FACA4F88A2A7A208) == 0x000008, "Member 'FS_VehicleSit::Sitter_5_5DFE1C3C4B6381B5FACA4F88A2A7A208' has a wrong offset!");

}

