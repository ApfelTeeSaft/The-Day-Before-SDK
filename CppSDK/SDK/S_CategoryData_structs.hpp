#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_CategoryData

#include "Basic.hpp"

#include "InfoType_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_CategoryData.S_CategoryData
// 0x0048 (0x0048 - 0x0000)
struct FS_CategoryData final
{
public:
	class FName                                   CategoryName_6_41F11EA4427988A49ACAC0B6F7534D23;   // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CategoryDisplayName_7_7ED884F3462CD6EC5F453A93D481BEB4; // 0x0008(0x0018)(Edit, BlueprintVisible)
	TArray<EInfoType>                             ItemTypes_9_B39C73334CEC6D450EF570A36B91CE75;      // 0x0020(0x0010)(Edit, BlueprintVisible)
	TArray<class FName>                           ItemNames_12_67724F74447CFFC8395909BB2FCDC8CD;     // 0x0030(0x0010)(Edit, BlueprintVisible)
	class UPaperSprite*                           CategoryIcon_15_E7F754C849EC4B8AB83121BA9EABD356;  // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_CategoryData) == 0x000008, "Wrong alignment on FS_CategoryData");
static_assert(sizeof(FS_CategoryData) == 0x000048, "Wrong size on FS_CategoryData");
static_assert(offsetof(FS_CategoryData, CategoryName_6_41F11EA4427988A49ACAC0B6F7534D23) == 0x000000, "Member 'FS_CategoryData::CategoryName_6_41F11EA4427988A49ACAC0B6F7534D23' has a wrong offset!");
static_assert(offsetof(FS_CategoryData, CategoryDisplayName_7_7ED884F3462CD6EC5F453A93D481BEB4) == 0x000008, "Member 'FS_CategoryData::CategoryDisplayName_7_7ED884F3462CD6EC5F453A93D481BEB4' has a wrong offset!");
static_assert(offsetof(FS_CategoryData, ItemTypes_9_B39C73334CEC6D450EF570A36B91CE75) == 0x000020, "Member 'FS_CategoryData::ItemTypes_9_B39C73334CEC6D450EF570A36B91CE75' has a wrong offset!");
static_assert(offsetof(FS_CategoryData, ItemNames_12_67724F74447CFFC8395909BB2FCDC8CD) == 0x000030, "Member 'FS_CategoryData::ItemNames_12_67724F74447CFFC8395909BB2FCDC8CD' has a wrong offset!");
static_assert(offsetof(FS_CategoryData, CategoryIcon_15_E7F754C849EC4B8AB83121BA9EABD356) == 0x000040, "Member 'FS_CategoryData::CategoryIcon_15_E7F754C849EC4B8AB83121BA9EABD356' has a wrong offset!");

}
