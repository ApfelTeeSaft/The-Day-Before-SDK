#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_ShopItemList

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct S_ShopItemList.S_ShopItemList
// 0x0030 (0x0030 - 0x0000)
struct FS_ShopItemList final
{
public:
	int32                                         ItemID_2_6A3DEFFC446DF7041E2D12AF7F28E9BF;         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Count_5_6EBADC044273A8C80A28EC8CB0A8DCC3;          // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 CountInStack_9_CA77619E46E0250EC65A7797A8126861;   // 0x0008(0x0010)(Edit, BlueprintVisible)
	class FName                                   CategoryName_27_03479D654DF2F51AE60B9591AD400CE8;  // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 ItemBP_30_25FDB7974F0DBF0E54B406912060F5CB;        // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         RP_Point_33_792267A148F44564640EDEA7C912060C;      // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAliases_35_484DFD5D40C39194F4104D89FA051BDB;     // 0x002C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_ShopItemList) == 0x000008, "Wrong alignment on FS_ShopItemList");
static_assert(sizeof(FS_ShopItemList) == 0x000030, "Wrong size on FS_ShopItemList");
static_assert(offsetof(FS_ShopItemList, ItemID_2_6A3DEFFC446DF7041E2D12AF7F28E9BF) == 0x000000, "Member 'FS_ShopItemList::ItemID_2_6A3DEFFC446DF7041E2D12AF7F28E9BF' has a wrong offset!");
static_assert(offsetof(FS_ShopItemList, Count_5_6EBADC044273A8C80A28EC8CB0A8DCC3) == 0x000004, "Member 'FS_ShopItemList::Count_5_6EBADC044273A8C80A28EC8CB0A8DCC3' has a wrong offset!");
static_assert(offsetof(FS_ShopItemList, CountInStack_9_CA77619E46E0250EC65A7797A8126861) == 0x000008, "Member 'FS_ShopItemList::CountInStack_9_CA77619E46E0250EC65A7797A8126861' has a wrong offset!");
static_assert(offsetof(FS_ShopItemList, CategoryName_27_03479D654DF2F51AE60B9591AD400CE8) == 0x000018, "Member 'FS_ShopItemList::CategoryName_27_03479D654DF2F51AE60B9591AD400CE8' has a wrong offset!");
static_assert(offsetof(FS_ShopItemList, ItemBP_30_25FDB7974F0DBF0E54B406912060F5CB) == 0x000020, "Member 'FS_ShopItemList::ItemBP_30_25FDB7974F0DBF0E54B406912060F5CB' has a wrong offset!");
static_assert(offsetof(FS_ShopItemList, RP_Point_33_792267A148F44564640EDEA7C912060C) == 0x000028, "Member 'FS_ShopItemList::RP_Point_33_792267A148F44564640EDEA7C912060C' has a wrong offset!");
static_assert(offsetof(FS_ShopItemList, IsAliases_35_484DFD5D40C39194F4104D89FA051BDB) == 0x00002C, "Member 'FS_ShopItemList::IsAliases_35_484DFD5D40C39194F4104D89FA051BDB' has a wrong offset!");

}
