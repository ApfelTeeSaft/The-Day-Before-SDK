#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PlayerTotalStats

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PlayerTotalStats.WBP_PlayerTotalStats_C
// 0x0038 (0x02B8 - 0x0280)
class UWBP_PlayerTotalStats_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         HorizontalBox_Stats;                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Stat_C*                            WBP_Stat_Cold;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Stat_C*                            WBP_Stat_HP;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Stat_C*                            WBP_Stat_Hunger;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Stat_C*                            WBP_Stat_Thirst;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBPC_PlayerStatsComponent_C*            PlayerStatsComponent_Ref;                          // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_PlayerTotalStats(int32 EntryPoint);
	void UpdateStats();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PlayerTotalStats_C">();
	}
	static class UWBP_PlayerTotalStats_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PlayerTotalStats_C>();
	}
};
static_assert(alignof(UWBP_PlayerTotalStats_C) == 0x000008, "Wrong alignment on UWBP_PlayerTotalStats_C");
static_assert(sizeof(UWBP_PlayerTotalStats_C) == 0x0002B8, "Wrong size on UWBP_PlayerTotalStats_C");
static_assert(offsetof(UWBP_PlayerTotalStats_C, UberGraphFrame) == 0x000280, "Member 'UWBP_PlayerTotalStats_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerTotalStats_C, HorizontalBox_Stats) == 0x000288, "Member 'UWBP_PlayerTotalStats_C::HorizontalBox_Stats' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerTotalStats_C, WBP_Stat_Cold) == 0x000290, "Member 'UWBP_PlayerTotalStats_C::WBP_Stat_Cold' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerTotalStats_C, WBP_Stat_HP) == 0x000298, "Member 'UWBP_PlayerTotalStats_C::WBP_Stat_HP' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerTotalStats_C, WBP_Stat_Hunger) == 0x0002A0, "Member 'UWBP_PlayerTotalStats_C::WBP_Stat_Hunger' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerTotalStats_C, WBP_Stat_Thirst) == 0x0002A8, "Member 'UWBP_PlayerTotalStats_C::WBP_Stat_Thirst' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerTotalStats_C, PlayerStatsComponent_Ref) == 0x0002B0, "Member 'UWBP_PlayerTotalStats_C::PlayerStatsComponent_Ref' has a wrong offset!");

}
