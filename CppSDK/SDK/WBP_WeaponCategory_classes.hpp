#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_WeaponCategory

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_WeaponCategory.WBP_WeaponCategory_C
// 0x0060 (0x02E0 - 0x0280)
class UWBP_WeaponCategory_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           VerticalBox_90;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_WeaponRow_C*                       WBP_WeaponRow;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ASurvivalPlayer_C*                      Player_Ref;                                        // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<class UWBP_WeaponRow_C*>               ArrayOfWeaponRow;                                  // 0x02A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          bHasWeapon;                                        // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B1[0x3];                                      // 0x02B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         IndexEquippedWeapon;                               // 0x02B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bWeaponIsEquipped;                                 // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B9[0x7];                                      // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        TempBox;                                           // 0x02C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UWBP_MainWeaponTab_C*                   Parent_Widget_Ref;                                 // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsFake;                                            // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_2D9[0x3];                                      // 0x02D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MaxEmptySlots;                                     // 0x02DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ActiveModeChange();
	void Construct();
	void CreateListWeapons();
	void ExecuteUbergraph_WBP_WeaponCategory(int32 EntryPoint);
	void FillListWithEmptySlots();
	void SelectCategory(int32 Param_Index);
	void SetEntryPadding(class UUserWidget* Entry);
	void ValidateWeaponRows();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_WeaponCategory_C">();
	}
	static class UWBP_WeaponCategory_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_WeaponCategory_C>();
	}
};
static_assert(alignof(UWBP_WeaponCategory_C) == 0x000008, "Wrong alignment on UWBP_WeaponCategory_C");
static_assert(sizeof(UWBP_WeaponCategory_C) == 0x0002E0, "Wrong size on UWBP_WeaponCategory_C");
static_assert(offsetof(UWBP_WeaponCategory_C, UberGraphFrame) == 0x000280, "Member 'UWBP_WeaponCategory_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_WeaponCategory_C, VerticalBox_90) == 0x000288, "Member 'UWBP_WeaponCategory_C::VerticalBox_90' has a wrong offset!");
static_assert(offsetof(UWBP_WeaponCategory_C, WBP_WeaponRow) == 0x000290, "Member 'UWBP_WeaponCategory_C::WBP_WeaponRow' has a wrong offset!");
static_assert(offsetof(UWBP_WeaponCategory_C, Player_Ref) == 0x000298, "Member 'UWBP_WeaponCategory_C::Player_Ref' has a wrong offset!");
static_assert(offsetof(UWBP_WeaponCategory_C, ArrayOfWeaponRow) == 0x0002A0, "Member 'UWBP_WeaponCategory_C::ArrayOfWeaponRow' has a wrong offset!");
static_assert(offsetof(UWBP_WeaponCategory_C, bHasWeapon) == 0x0002B0, "Member 'UWBP_WeaponCategory_C::bHasWeapon' has a wrong offset!");
static_assert(offsetof(UWBP_WeaponCategory_C, IndexEquippedWeapon) == 0x0002B4, "Member 'UWBP_WeaponCategory_C::IndexEquippedWeapon' has a wrong offset!");
static_assert(offsetof(UWBP_WeaponCategory_C, bWeaponIsEquipped) == 0x0002B8, "Member 'UWBP_WeaponCategory_C::bWeaponIsEquipped' has a wrong offset!");
static_assert(offsetof(UWBP_WeaponCategory_C, TempBox) == 0x0002C0, "Member 'UWBP_WeaponCategory_C::TempBox' has a wrong offset!");
static_assert(offsetof(UWBP_WeaponCategory_C, Parent_Widget_Ref) == 0x0002D0, "Member 'UWBP_WeaponCategory_C::Parent_Widget_Ref' has a wrong offset!");
static_assert(offsetof(UWBP_WeaponCategory_C, IsFake) == 0x0002D8, "Member 'UWBP_WeaponCategory_C::IsFake' has a wrong offset!");
static_assert(offsetof(UWBP_WeaponCategory_C, MaxEmptySlots) == 0x0002DC, "Member 'UWBP_WeaponCategory_C::MaxEmptySlots' has a wrong offset!");

}
