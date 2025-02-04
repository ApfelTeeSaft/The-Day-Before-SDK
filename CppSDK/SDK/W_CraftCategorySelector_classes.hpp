#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_CraftCategorySelector

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "W_ShopCategorySelector_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_CraftCategorySelector.W_CraftCategorySelector_C
// 0x0018 (0x02E8 - 0x02D0)
class UW_CraftCategorySelector_C final : public UW_ShopCategorySelector_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_W_CraftCategorySelector_C;          // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class FName>                           CategoriesArray;                                   // 0x02D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_W_CraftCategorySelector(int32 EntryPoint);
	void SetCategoriesArray(TArray<class FName>& Param_CategoriesArray);
	void PreConstruct(bool IsDesignTime);
	void SetCategories(TArray<class FName>& CategoryTypes);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_CraftCategorySelector_C">();
	}
	static class UW_CraftCategorySelector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_CraftCategorySelector_C>();
	}
};
static_assert(alignof(UW_CraftCategorySelector_C) == 0x000008, "Wrong alignment on UW_CraftCategorySelector_C");
static_assert(sizeof(UW_CraftCategorySelector_C) == 0x0002E8, "Wrong size on UW_CraftCategorySelector_C");
static_assert(offsetof(UW_CraftCategorySelector_C, UberGraphFrame_W_CraftCategorySelector_C) == 0x0002D0, "Member 'UW_CraftCategorySelector_C::UberGraphFrame_W_CraftCategorySelector_C' has a wrong offset!");
static_assert(offsetof(UW_CraftCategorySelector_C, CategoriesArray) == 0x0002D8, "Member 'UW_CraftCategorySelector_C::CategoriesArray' has a wrong offset!");

}

