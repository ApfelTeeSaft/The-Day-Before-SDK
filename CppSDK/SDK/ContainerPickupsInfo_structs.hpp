#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ContainerPickupsInfo

#include "Basic.hpp"

#include "PickupAttachments_structs.hpp"


namespace SDK
{

// UserDefinedStruct ContainerPickupsInfo.ContainerPickupsInfo
// 0x0068 (0x0068 - 0x0000)
struct FContainerPickupsInfo final
{
public:
	int32                                         UniqueServerID_17_C49AE0DA449ACAE3BE4633A263303B68; // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ItemName_27_4082F0E14C2C9C8DEEA71CAD0FE1A1DE;      // 0x0004(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Count_30_3E65AE454D385E42A00C0B80BA377053;         // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Durability_36_A2286DB1453E802D6EBA6F8C1F88BE45;    // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Price_33_4198BD364CCDDF5B5C057793EBB6B62B;         // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsContainer_14_0198F62E4F1B93DD8B4D6E92B7E3EA45;   // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ContainerMotherID_12_33D59C5047C31FF0367835AAF5ABE05D; // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SlotIndex_6_8ED1F34A4AF1D565616883B80192E3DD;      // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Rotated_9_3CFE5D9342A81FB1FF17DEB7B491CE56;        // 0x002C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 HostedByIndexes_24_0340D561440141A13C19C6B2CEE1E7DA; // 0x0030(0x0010)(Edit, BlueprintVisible)
	double                                        SellPrice_39_2ED03A98495B5434C7FA02960F6E2819;     // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxDurability_42_F2490B3C49B1A16B80DDC4ACC3F6E1D1; // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         WeaponAmmoCount_45_C682C76C43D7CCCC6F51C2825FE6A2F4; // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPickupAttachments                     AttachmentsInfo_48_563559D847364EBE4B183C8E373D950C; // 0x0058(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
};
static_assert(alignof(FContainerPickupsInfo) == 0x000008, "Wrong alignment on FContainerPickupsInfo");
static_assert(sizeof(FContainerPickupsInfo) == 0x000068, "Wrong size on FContainerPickupsInfo");
static_assert(offsetof(FContainerPickupsInfo, UniqueServerID_17_C49AE0DA449ACAE3BE4633A263303B68) == 0x000000, "Member 'FContainerPickupsInfo::UniqueServerID_17_C49AE0DA449ACAE3BE4633A263303B68' has a wrong offset!");
static_assert(offsetof(FContainerPickupsInfo, ItemName_27_4082F0E14C2C9C8DEEA71CAD0FE1A1DE) == 0x000004, "Member 'FContainerPickupsInfo::ItemName_27_4082F0E14C2C9C8DEEA71CAD0FE1A1DE' has a wrong offset!");
static_assert(offsetof(FContainerPickupsInfo, Count_30_3E65AE454D385E42A00C0B80BA377053) == 0x00000C, "Member 'FContainerPickupsInfo::Count_30_3E65AE454D385E42A00C0B80BA377053' has a wrong offset!");
static_assert(offsetof(FContainerPickupsInfo, Durability_36_A2286DB1453E802D6EBA6F8C1F88BE45) == 0x000010, "Member 'FContainerPickupsInfo::Durability_36_A2286DB1453E802D6EBA6F8C1F88BE45' has a wrong offset!");
static_assert(offsetof(FContainerPickupsInfo, Price_33_4198BD364CCDDF5B5C057793EBB6B62B) == 0x000018, "Member 'FContainerPickupsInfo::Price_33_4198BD364CCDDF5B5C057793EBB6B62B' has a wrong offset!");
static_assert(offsetof(FContainerPickupsInfo, IsContainer_14_0198F62E4F1B93DD8B4D6E92B7E3EA45) == 0x000020, "Member 'FContainerPickupsInfo::IsContainer_14_0198F62E4F1B93DD8B4D6E92B7E3EA45' has a wrong offset!");
static_assert(offsetof(FContainerPickupsInfo, ContainerMotherID_12_33D59C5047C31FF0367835AAF5ABE05D) == 0x000024, "Member 'FContainerPickupsInfo::ContainerMotherID_12_33D59C5047C31FF0367835AAF5ABE05D' has a wrong offset!");
static_assert(offsetof(FContainerPickupsInfo, SlotIndex_6_8ED1F34A4AF1D565616883B80192E3DD) == 0x000028, "Member 'FContainerPickupsInfo::SlotIndex_6_8ED1F34A4AF1D565616883B80192E3DD' has a wrong offset!");
static_assert(offsetof(FContainerPickupsInfo, Rotated_9_3CFE5D9342A81FB1FF17DEB7B491CE56) == 0x00002C, "Member 'FContainerPickupsInfo::Rotated_9_3CFE5D9342A81FB1FF17DEB7B491CE56' has a wrong offset!");
static_assert(offsetof(FContainerPickupsInfo, HostedByIndexes_24_0340D561440141A13C19C6B2CEE1E7DA) == 0x000030, "Member 'FContainerPickupsInfo::HostedByIndexes_24_0340D561440141A13C19C6B2CEE1E7DA' has a wrong offset!");
static_assert(offsetof(FContainerPickupsInfo, SellPrice_39_2ED03A98495B5434C7FA02960F6E2819) == 0x000040, "Member 'FContainerPickupsInfo::SellPrice_39_2ED03A98495B5434C7FA02960F6E2819' has a wrong offset!");
static_assert(offsetof(FContainerPickupsInfo, MaxDurability_42_F2490B3C49B1A16B80DDC4ACC3F6E1D1) == 0x000048, "Member 'FContainerPickupsInfo::MaxDurability_42_F2490B3C49B1A16B80DDC4ACC3F6E1D1' has a wrong offset!");
static_assert(offsetof(FContainerPickupsInfo, WeaponAmmoCount_45_C682C76C43D7CCCC6F51C2825FE6A2F4) == 0x000050, "Member 'FContainerPickupsInfo::WeaponAmmoCount_45_C682C76C43D7CCCC6F51C2825FE6A2F4' has a wrong offset!");
static_assert(offsetof(FContainerPickupsInfo, AttachmentsInfo_48_563559D847364EBE4B183C8E373D950C) == 0x000058, "Member 'FContainerPickupsInfo::AttachmentsInfo_48_563559D847364EBE4B183C8E373D950C' has a wrong offset!");

}

