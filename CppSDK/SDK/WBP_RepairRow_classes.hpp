#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_RepairRow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_RepairRow.WBP_RepairRow_C
// 0x0070 (0x02F0 - 0x0280)
class UWBP_RepairRow_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           VerticalBox_27;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RepairWeapon_C*                    WBP_RepairWeapon;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_WorkbenchRepairTab_C*              Parent_Ref;                                        // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ASurvivalPlayer_C*                      PlayerRef;                                         // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ASurvPC_C*                              ControllerRef;                                     // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<class UWBP_RepairWeapon_C*>            AllRows;                                           // 0x02B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class FName>                           RowName;                                           // 0x02C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWBP_RepairCategoryNew_C*               PapaRef;                                           // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnNoItemsCategroy;                                 // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          HasItems;                                          // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void DeselectAll();
	void ExecuteUbergraph_WBP_RepairRow(int32 EntryPoint);
	void FindItemSelect(class UWBP_RepairWeapon_C** SelectCurrent, int32* Array_Index);
	void FindSelectionItemEvent();
	void Init(class FName Category);
	void InitWeapon(class FName Category);
	void OnNoItemsCategroy__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void UpdateInfo();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_RepairRow_C">();
	}
	static class UWBP_RepairRow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_RepairRow_C>();
	}
};
static_assert(alignof(UWBP_RepairRow_C) == 0x000008, "Wrong alignment on UWBP_RepairRow_C");
static_assert(sizeof(UWBP_RepairRow_C) == 0x0002F0, "Wrong size on UWBP_RepairRow_C");
static_assert(offsetof(UWBP_RepairRow_C, UberGraphFrame) == 0x000280, "Member 'UWBP_RepairRow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_RepairRow_C, VerticalBox_27) == 0x000288, "Member 'UWBP_RepairRow_C::VerticalBox_27' has a wrong offset!");
static_assert(offsetof(UWBP_RepairRow_C, WBP_RepairWeapon) == 0x000290, "Member 'UWBP_RepairRow_C::WBP_RepairWeapon' has a wrong offset!");
static_assert(offsetof(UWBP_RepairRow_C, Parent_Ref) == 0x000298, "Member 'UWBP_RepairRow_C::Parent_Ref' has a wrong offset!");
static_assert(offsetof(UWBP_RepairRow_C, PlayerRef) == 0x0002A0, "Member 'UWBP_RepairRow_C::PlayerRef' has a wrong offset!");
static_assert(offsetof(UWBP_RepairRow_C, ControllerRef) == 0x0002A8, "Member 'UWBP_RepairRow_C::ControllerRef' has a wrong offset!");
static_assert(offsetof(UWBP_RepairRow_C, AllRows) == 0x0002B0, "Member 'UWBP_RepairRow_C::AllRows' has a wrong offset!");
static_assert(offsetof(UWBP_RepairRow_C, RowName) == 0x0002C0, "Member 'UWBP_RepairRow_C::RowName' has a wrong offset!");
static_assert(offsetof(UWBP_RepairRow_C, PapaRef) == 0x0002D0, "Member 'UWBP_RepairRow_C::PapaRef' has a wrong offset!");
static_assert(offsetof(UWBP_RepairRow_C, OnNoItemsCategroy) == 0x0002D8, "Member 'UWBP_RepairRow_C::OnNoItemsCategroy' has a wrong offset!");
static_assert(offsetof(UWBP_RepairRow_C, HasItems) == 0x0002E8, "Member 'UWBP_RepairRow_C::HasItems' has a wrong offset!");

}
