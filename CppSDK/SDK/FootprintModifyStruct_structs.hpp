#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FootprintModifyStruct

#include "Basic.hpp"

#include "EFootprintStyle_structs.hpp"


namespace SDK
{

// UserDefinedStruct FootprintModifyStruct.FootprintModifyStruct
// 0x0010 (0x0010 - 0x0000)
struct FFootprintModifyStruct final
{
public:
	EFootprintStyle                               Style_2_C0B8CBB8490E86D0DB2A87ADB7CF5608;          // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Right_4_599019384F3282386CE0889979E1D8FB;          // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Left_6_F66B2F394C8371594897548C72F1FA78;           // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstance*                      MaterialInterface_13_A1F6447E444635066DF15CA45C3A026A; // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FFootprintModifyStruct) == 0x000008, "Wrong alignment on FFootprintModifyStruct");
static_assert(sizeof(FFootprintModifyStruct) == 0x000010, "Wrong size on FFootprintModifyStruct");
static_assert(offsetof(FFootprintModifyStruct, Style_2_C0B8CBB8490E86D0DB2A87ADB7CF5608) == 0x000000, "Member 'FFootprintModifyStruct::Style_2_C0B8CBB8490E86D0DB2A87ADB7CF5608' has a wrong offset!");
static_assert(offsetof(FFootprintModifyStruct, Right_4_599019384F3282386CE0889979E1D8FB) == 0x000001, "Member 'FFootprintModifyStruct::Right_4_599019384F3282386CE0889979E1D8FB' has a wrong offset!");
static_assert(offsetof(FFootprintModifyStruct, Left_6_F66B2F394C8371594897548C72F1FA78) == 0x000002, "Member 'FFootprintModifyStruct::Left_6_F66B2F394C8371594897548C72F1FA78' has a wrong offset!");
static_assert(offsetof(FFootprintModifyStruct, MaterialInterface_13_A1F6447E444635066DF15CA45C3A026A) == 0x000008, "Member 'FFootprintModifyStruct::MaterialInterface_13_A1F6447E444635066DF15CA45C3A026A' has a wrong offset!");

}

