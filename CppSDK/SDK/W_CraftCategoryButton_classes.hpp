#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_CraftCategoryButton

#include "Basic.hpp"

#include "W_ShopCategoryButton_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_CraftCategoryButton.W_CraftCategoryButton_C
// 0x0008 (0x0360 - 0x0358)
class UW_CraftCategoryButton_C final : public UW_ShopCategoryButton_C
{
public:
	class FName                                   CategoryName_;                                     // 0x0354(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void GetCategoryName(class FName* Param_CategoryName_);
	void InitCategory();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_CraftCategoryButton_C">();
	}
	static class UW_CraftCategoryButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_CraftCategoryButton_C>();
	}
};
static_assert(alignof(UW_CraftCategoryButton_C) == 0x000008, "Wrong alignment on UW_CraftCategoryButton_C");
static_assert(sizeof(UW_CraftCategoryButton_C) == 0x000360, "Wrong size on UW_CraftCategoryButton_C");
static_assert(offsetof(UW_CraftCategoryButton_C, CategoryName_) == 0x000354, "Member 'UW_CraftCategoryButton_C::CategoryName_' has a wrong offset!");

}
