#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_EatItemInformation

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_EatItemInformation.S_EatItemInformation
// 0x0140 (0x0140 - 0x0000)
struct FS_EatItemInformation final
{
public:
	TSoftObjectPtr<class UAnimSequence>           Animation_56_F32FC94A4EE55A21FE24EBAECF356C25;     // 0x0000(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class USkeletalMesh>           SkeletalMesh_55_10AEEE8D43C36D1CAA99A1B7AE35BF71;  // 0x0030(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>             CustomMesh_54_79946AD24D0957C2BA89D1B0876E81B4;    // 0x0060(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FTransform                             CustomTransform_28_C93ED0384C70BDDC86E0E896AFA91790; // 0x0090(0x0060)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Destroy_29_3DDBF6DC476A8E614F18ACA120297B1E;       // 0x00F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Special_30_408D8DBB4F2411FAF5DE73A2DD45F88B;       // 0x00F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F2[0x6];                                       // 0x00F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        ItemLifeTime_33_98A663EB4BB65A5A1B2FC99F695C200D;  // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ItemAnimDelay_36_177A8C1746EBC9B7DDAF6384842917B2; // 0x0100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ItemDissappearDelay_39_220D3D0A4EC28EEFE8ECC09EF1E71AAA; // 0x0108(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ItemVisibilityDelay_42_86D28B5F4D863A05EDA5B2A5F56F9C31; // 0x0110(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ItemUsingDuration_47_5C713AD041BDC6D3BF7A71A3A9B7E240; // 0x0118(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ItemRightHand_44_3F1B85964D8BED75DB6412811BF946C2; // 0x0120(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_121[0x7];                                      // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TSoftObjectPtr<class UMaterialInstance>> CustomMaterials_53_607C59EA49D32A9FCCC8F384D9E81642; // 0x0128(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FS_EatItemInformation) == 0x000010, "Wrong alignment on FS_EatItemInformation");
static_assert(sizeof(FS_EatItemInformation) == 0x000140, "Wrong size on FS_EatItemInformation");
static_assert(offsetof(FS_EatItemInformation, Animation_56_F32FC94A4EE55A21FE24EBAECF356C25) == 0x000000, "Member 'FS_EatItemInformation::Animation_56_F32FC94A4EE55A21FE24EBAECF356C25' has a wrong offset!");
static_assert(offsetof(FS_EatItemInformation, SkeletalMesh_55_10AEEE8D43C36D1CAA99A1B7AE35BF71) == 0x000030, "Member 'FS_EatItemInformation::SkeletalMesh_55_10AEEE8D43C36D1CAA99A1B7AE35BF71' has a wrong offset!");
static_assert(offsetof(FS_EatItemInformation, CustomMesh_54_79946AD24D0957C2BA89D1B0876E81B4) == 0x000060, "Member 'FS_EatItemInformation::CustomMesh_54_79946AD24D0957C2BA89D1B0876E81B4' has a wrong offset!");
static_assert(offsetof(FS_EatItemInformation, CustomTransform_28_C93ED0384C70BDDC86E0E896AFA91790) == 0x000090, "Member 'FS_EatItemInformation::CustomTransform_28_C93ED0384C70BDDC86E0E896AFA91790' has a wrong offset!");
static_assert(offsetof(FS_EatItemInformation, Destroy_29_3DDBF6DC476A8E614F18ACA120297B1E) == 0x0000F0, "Member 'FS_EatItemInformation::Destroy_29_3DDBF6DC476A8E614F18ACA120297B1E' has a wrong offset!");
static_assert(offsetof(FS_EatItemInformation, Special_30_408D8DBB4F2411FAF5DE73A2DD45F88B) == 0x0000F1, "Member 'FS_EatItemInformation::Special_30_408D8DBB4F2411FAF5DE73A2DD45F88B' has a wrong offset!");
static_assert(offsetof(FS_EatItemInformation, ItemLifeTime_33_98A663EB4BB65A5A1B2FC99F695C200D) == 0x0000F8, "Member 'FS_EatItemInformation::ItemLifeTime_33_98A663EB4BB65A5A1B2FC99F695C200D' has a wrong offset!");
static_assert(offsetof(FS_EatItemInformation, ItemAnimDelay_36_177A8C1746EBC9B7DDAF6384842917B2) == 0x000100, "Member 'FS_EatItemInformation::ItemAnimDelay_36_177A8C1746EBC9B7DDAF6384842917B2' has a wrong offset!");
static_assert(offsetof(FS_EatItemInformation, ItemDissappearDelay_39_220D3D0A4EC28EEFE8ECC09EF1E71AAA) == 0x000108, "Member 'FS_EatItemInformation::ItemDissappearDelay_39_220D3D0A4EC28EEFE8ECC09EF1E71AAA' has a wrong offset!");
static_assert(offsetof(FS_EatItemInformation, ItemVisibilityDelay_42_86D28B5F4D863A05EDA5B2A5F56F9C31) == 0x000110, "Member 'FS_EatItemInformation::ItemVisibilityDelay_42_86D28B5F4D863A05EDA5B2A5F56F9C31' has a wrong offset!");
static_assert(offsetof(FS_EatItemInformation, ItemUsingDuration_47_5C713AD041BDC6D3BF7A71A3A9B7E240) == 0x000118, "Member 'FS_EatItemInformation::ItemUsingDuration_47_5C713AD041BDC6D3BF7A71A3A9B7E240' has a wrong offset!");
static_assert(offsetof(FS_EatItemInformation, ItemRightHand_44_3F1B85964D8BED75DB6412811BF946C2) == 0x000120, "Member 'FS_EatItemInformation::ItemRightHand_44_3F1B85964D8BED75DB6412811BF946C2' has a wrong offset!");
static_assert(offsetof(FS_EatItemInformation, CustomMaterials_53_607C59EA49D32A9FCCC8F384D9E81642) == 0x000128, "Member 'FS_EatItemInformation::CustomMaterials_53_607C59EA49D32A9FCCC8F384D9E81642' has a wrong offset!");

}
