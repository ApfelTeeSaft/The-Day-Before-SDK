#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_RepairTab

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FItemInfo_structs.hpp"
#include "UMG_classes.hpp"
#include "JSItemType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_RepairTab.WBP_RepairTab_C
// 0x0100 (0x0380 - 0x0280)
class UWBP_RepairTab_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUniformGridPanel*                      UniformGridPanel_Items;                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RepairEntry_C*                     WBP_RepairEntry_1;                                 // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RepairEntry_C*                     WBP_RepairEntry_2;                                 // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RepairEntry_C*                     WBP_RepairEntry_3;                                 // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RepairEntry_C*                     WBP_RepairEntry_4;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RepairEntry_C*                     WBP_RepairEntry_5;                                 // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RepairEntry_C*                     WBP_RepairEntry_6;                                 // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RepairEntry_C*                     WBP_RepairEntry_7;                                 // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RepairEntry_C*                     WBP_RepairEntry_8;                                 // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RepairEntry_C*                     WBP_RepairEntry_9;                                 // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RepairEntry_C*                     WBP_RepairEntry_10;                                // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RepairEntry_C*                     WBP_RepairEntry_11;                                // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RepairEntry_C*                     WBP_RepairEntry_12;                                // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         ItemsPerRow;                                       // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MinEntriesCount;                                   // 0x02F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_RepairEntry_C*>             EntryList;                                         // 0x02F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             OnRecalculateRepairAllPrice;                       // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<int32, double>                           ItemsMap;                                          // 0x0318(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FFItemInfo>                     ValidItems;                                        // 0x0368(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          bHaveItemsToRepair;                                // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_RepairTab(int32 EntryPoint);
	void GetEntries(TArray<class UWBP_RepairEntry_C*>* Param_EntryList);
	void GetHaveItemsToRepair(bool* Param_bHaveItemsToRepair);
	void Init();
	void OnRecalculateRepairAllPrice__DelegateSignature(bool bEnoughMoney);
	void RepairAll();
	void Sort();
	void SortIteration(int32 First, int32 Last);
	void SortSetPivot(int32 First, int32 Last, int32* PivotIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_RepairTab_C">();
	}
	static class UWBP_RepairTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_RepairTab_C>();
	}
};
static_assert(alignof(UWBP_RepairTab_C) == 0x000008, "Wrong alignment on UWBP_RepairTab_C");
static_assert(sizeof(UWBP_RepairTab_C) == 0x000380, "Wrong size on UWBP_RepairTab_C");
static_assert(offsetof(UWBP_RepairTab_C, UberGraphFrame) == 0x000280, "Member 'UWBP_RepairTab_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_RepairTab_C, UniformGridPanel_Items) == 0x000288, "Member 'UWBP_RepairTab_C::UniformGridPanel_Items' has a wrong offset!");
static_assert(offsetof(UWBP_RepairTab_C, WBP_RepairEntry_1) == 0x000290, "Member 'UWBP_RepairTab_C::WBP_RepairEntry_1' has a wrong offset!");
static_assert(offsetof(UWBP_RepairTab_C, WBP_RepairEntry_2) == 0x000298, "Member 'UWBP_RepairTab_C::WBP_RepairEntry_2' has a wrong offset!");
static_assert(offsetof(UWBP_RepairTab_C, WBP_RepairEntry_3) == 0x0002A0, "Member 'UWBP_RepairTab_C::WBP_RepairEntry_3' has a wrong offset!");
static_assert(offsetof(UWBP_RepairTab_C, WBP_RepairEntry_4) == 0x0002A8, "Member 'UWBP_RepairTab_C::WBP_RepairEntry_4' has a wrong offset!");
static_assert(offsetof(UWBP_RepairTab_C, WBP_RepairEntry_5) == 0x0002B0, "Member 'UWBP_RepairTab_C::WBP_RepairEntry_5' has a wrong offset!");
static_assert(offsetof(UWBP_RepairTab_C, WBP_RepairEntry_6) == 0x0002B8, "Member 'UWBP_RepairTab_C::WBP_RepairEntry_6' has a wrong offset!");
static_assert(offsetof(UWBP_RepairTab_C, WBP_RepairEntry_7) == 0x0002C0, "Member 'UWBP_RepairTab_C::WBP_RepairEntry_7' has a wrong offset!");
static_assert(offsetof(UWBP_RepairTab_C, WBP_RepairEntry_8) == 0x0002C8, "Member 'UWBP_RepairTab_C::WBP_RepairEntry_8' has a wrong offset!");
static_assert(offsetof(UWBP_RepairTab_C, WBP_RepairEntry_9) == 0x0002D0, "Member 'UWBP_RepairTab_C::WBP_RepairEntry_9' has a wrong offset!");
static_assert(offsetof(UWBP_RepairTab_C, WBP_RepairEntry_10) == 0x0002D8, "Member 'UWBP_RepairTab_C::WBP_RepairEntry_10' has a wrong offset!");
static_assert(offsetof(UWBP_RepairTab_C, WBP_RepairEntry_11) == 0x0002E0, "Member 'UWBP_RepairTab_C::WBP_RepairEntry_11' has a wrong offset!");
static_assert(offsetof(UWBP_RepairTab_C, WBP_RepairEntry_12) == 0x0002E8, "Member 'UWBP_RepairTab_C::WBP_RepairEntry_12' has a wrong offset!");
static_assert(offsetof(UWBP_RepairTab_C, ItemsPerRow) == 0x0002F0, "Member 'UWBP_RepairTab_C::ItemsPerRow' has a wrong offset!");
static_assert(offsetof(UWBP_RepairTab_C, MinEntriesCount) == 0x0002F4, "Member 'UWBP_RepairTab_C::MinEntriesCount' has a wrong offset!");
static_assert(offsetof(UWBP_RepairTab_C, EntryList) == 0x0002F8, "Member 'UWBP_RepairTab_C::EntryList' has a wrong offset!");
static_assert(offsetof(UWBP_RepairTab_C, OnRecalculateRepairAllPrice) == 0x000308, "Member 'UWBP_RepairTab_C::OnRecalculateRepairAllPrice' has a wrong offset!");
static_assert(offsetof(UWBP_RepairTab_C, ItemsMap) == 0x000318, "Member 'UWBP_RepairTab_C::ItemsMap' has a wrong offset!");
static_assert(offsetof(UWBP_RepairTab_C, ValidItems) == 0x000368, "Member 'UWBP_RepairTab_C::ValidItems' has a wrong offset!");
static_assert(offsetof(UWBP_RepairTab_C, bHaveItemsToRepair) == 0x000378, "Member 'UWBP_RepairTab_C::bHaveItemsToRepair' has a wrong offset!");

}

