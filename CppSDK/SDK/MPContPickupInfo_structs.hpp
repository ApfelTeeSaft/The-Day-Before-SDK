#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MPContPickupInfo

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct MPContPickupInfo.MPContPickupInfo
// 0x0038 (0x0038 - 0x0000)
struct FMPContPickupInfo final
{
public:
	int32                                         UniqServerID_16_23B656AB4301FAFCD123249398106B34;  // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ItemName_18_04CB0FB44C13EA915E7CF98974DF8662;      // 0x0004(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Count_21_C71CA0494B62A5B22F5151AA38613902;         // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Price_27_DD94BEDD482FD0DB3DFE40998A2E4D62;         // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCont_5_2BCE41334388BD983418F3844A7B7383;         // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ContMotherID_8_21D985B8489CADE4196A18B8A9CFEDB2;   // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SlotIndex_10_BED39999492FB1BBADF484A1682B8C07;     // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 HostedByIndexes_13_063855B0453AE9282C0ACAA13BEB98D6; // 0x0028(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FMPContPickupInfo) == 0x000008, "Wrong alignment on FMPContPickupInfo");
static_assert(sizeof(FMPContPickupInfo) == 0x000038, "Wrong size on FMPContPickupInfo");
static_assert(offsetof(FMPContPickupInfo, UniqServerID_16_23B656AB4301FAFCD123249398106B34) == 0x000000, "Member 'FMPContPickupInfo::UniqServerID_16_23B656AB4301FAFCD123249398106B34' has a wrong offset!");
static_assert(offsetof(FMPContPickupInfo, ItemName_18_04CB0FB44C13EA915E7CF98974DF8662) == 0x000004, "Member 'FMPContPickupInfo::ItemName_18_04CB0FB44C13EA915E7CF98974DF8662' has a wrong offset!");
static_assert(offsetof(FMPContPickupInfo, Count_21_C71CA0494B62A5B22F5151AA38613902) == 0x00000C, "Member 'FMPContPickupInfo::Count_21_C71CA0494B62A5B22F5151AA38613902' has a wrong offset!");
static_assert(offsetof(FMPContPickupInfo, Price_27_DD94BEDD482FD0DB3DFE40998A2E4D62) == 0x000010, "Member 'FMPContPickupInfo::Price_27_DD94BEDD482FD0DB3DFE40998A2E4D62' has a wrong offset!");
static_assert(offsetof(FMPContPickupInfo, IsCont_5_2BCE41334388BD983418F3844A7B7383) == 0x000018, "Member 'FMPContPickupInfo::IsCont_5_2BCE41334388BD983418F3844A7B7383' has a wrong offset!");
static_assert(offsetof(FMPContPickupInfo, ContMotherID_8_21D985B8489CADE4196A18B8A9CFEDB2) == 0x00001C, "Member 'FMPContPickupInfo::ContMotherID_8_21D985B8489CADE4196A18B8A9CFEDB2' has a wrong offset!");
static_assert(offsetof(FMPContPickupInfo, SlotIndex_10_BED39999492FB1BBADF484A1682B8C07) == 0x000020, "Member 'FMPContPickupInfo::SlotIndex_10_BED39999492FB1BBADF484A1682B8C07' has a wrong offset!");
static_assert(offsetof(FMPContPickupInfo, HostedByIndexes_13_063855B0453AE9282C0ACAA13BEB98D6) == 0x000028, "Member 'FMPContPickupInfo::HostedByIndexes_13_063855B0453AE9282C0ACAA13BEB98D6' has a wrong offset!");

}

