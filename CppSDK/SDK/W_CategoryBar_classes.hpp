#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_CategoryBar

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_CategoryBar.W_CategoryBar_C
// 0x0068 (0x02E8 - 0x0280)
class UW_CategoryBar_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_CategoryButton_C*                    W_CategoryButton_Aids;                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_CategoryButton_C*                    W_CategoryButton_All;                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_CategoryButton_C*                    W_CategoryButton_ClothArmor;                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_CategoryButton_C*                    W_CategoryButton_Exchangeable;                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_CategoryButton_C*                    W_CategoryButton_FoodDrinks;                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_CategoryButton_C*                    W_CategoryButton_Resources;                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_CategoryButton_C*                    W_CategoryButton_WeaponAmmo;                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UW_CategoryButton_C*>            ButtonsArray;                                      // 0x02C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UW_CategoryButton_C*                    SelectedCategory;                                  // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickedCategoryButton;                           // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void Construct();
	void Destruct();
	void ExecuteUbergraph_W_CategoryBar(int32 EntryPoint);
	void OnCategoryClicked(class UW_CategoryButton_C* ClickedWidget);
	void OnClickedCategoryButton__DelegateSignature(class UW_CategoryButton_C* Button);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_CategoryBar_C">();
	}
	static class UW_CategoryBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_CategoryBar_C>();
	}
};
static_assert(alignof(UW_CategoryBar_C) == 0x000008, "Wrong alignment on UW_CategoryBar_C");
static_assert(sizeof(UW_CategoryBar_C) == 0x0002E8, "Wrong size on UW_CategoryBar_C");
static_assert(offsetof(UW_CategoryBar_C, UberGraphFrame) == 0x000280, "Member 'UW_CategoryBar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_CategoryBar_C, W_CategoryButton_Aids) == 0x000288, "Member 'UW_CategoryBar_C::W_CategoryButton_Aids' has a wrong offset!");
static_assert(offsetof(UW_CategoryBar_C, W_CategoryButton_All) == 0x000290, "Member 'UW_CategoryBar_C::W_CategoryButton_All' has a wrong offset!");
static_assert(offsetof(UW_CategoryBar_C, W_CategoryButton_ClothArmor) == 0x000298, "Member 'UW_CategoryBar_C::W_CategoryButton_ClothArmor' has a wrong offset!");
static_assert(offsetof(UW_CategoryBar_C, W_CategoryButton_Exchangeable) == 0x0002A0, "Member 'UW_CategoryBar_C::W_CategoryButton_Exchangeable' has a wrong offset!");
static_assert(offsetof(UW_CategoryBar_C, W_CategoryButton_FoodDrinks) == 0x0002A8, "Member 'UW_CategoryBar_C::W_CategoryButton_FoodDrinks' has a wrong offset!");
static_assert(offsetof(UW_CategoryBar_C, W_CategoryButton_Resources) == 0x0002B0, "Member 'UW_CategoryBar_C::W_CategoryButton_Resources' has a wrong offset!");
static_assert(offsetof(UW_CategoryBar_C, W_CategoryButton_WeaponAmmo) == 0x0002B8, "Member 'UW_CategoryBar_C::W_CategoryButton_WeaponAmmo' has a wrong offset!");
static_assert(offsetof(UW_CategoryBar_C, ButtonsArray) == 0x0002C0, "Member 'UW_CategoryBar_C::ButtonsArray' has a wrong offset!");
static_assert(offsetof(UW_CategoryBar_C, SelectedCategory) == 0x0002D0, "Member 'UW_CategoryBar_C::SelectedCategory' has a wrong offset!");
static_assert(offsetof(UW_CategoryBar_C, OnClickedCategoryButton) == 0x0002D8, "Member 'UW_CategoryBar_C::OnClickedCategoryButton' has a wrong offset!");

}
