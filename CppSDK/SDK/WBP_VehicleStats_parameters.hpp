#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_VehicleStats

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_VehicleStats.WBP_VehicleStats_C.DurabilityUpdate
// 0x0020 (0x0020 - 0x0000)
struct WBP_VehicleStats_C_DurabilityUpdate final
{
public:
	double                                        CurrentValue;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue;            // 0x0008(0x0018)()
};
static_assert(alignof(WBP_VehicleStats_C_DurabilityUpdate) == 0x000008, "Wrong alignment on WBP_VehicleStats_C_DurabilityUpdate");
static_assert(sizeof(WBP_VehicleStats_C_DurabilityUpdate) == 0x000020, "Wrong size on WBP_VehicleStats_C_DurabilityUpdate");
static_assert(offsetof(WBP_VehicleStats_C_DurabilityUpdate, CurrentValue) == 0x000000, "Member 'WBP_VehicleStats_C_DurabilityUpdate::CurrentValue' has a wrong offset!");
static_assert(offsetof(WBP_VehicleStats_C_DurabilityUpdate, CallFunc_Conv_DoubleToText_ReturnValue) == 0x000008, "Member 'WBP_VehicleStats_C_DurabilityUpdate::CallFunc_Conv_DoubleToText_ReturnValue' has a wrong offset!");

// Function WBP_VehicleStats.WBP_VehicleStats_C.ExecuteUbergraph_WBP_VehicleStats
// 0x0004 (0x0004 - 0x0000)
struct WBP_VehicleStats_C_ExecuteUbergraph_WBP_VehicleStats final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_VehicleStats_C_ExecuteUbergraph_WBP_VehicleStats) == 0x000004, "Wrong alignment on WBP_VehicleStats_C_ExecuteUbergraph_WBP_VehicleStats");
static_assert(sizeof(WBP_VehicleStats_C_ExecuteUbergraph_WBP_VehicleStats) == 0x000004, "Wrong size on WBP_VehicleStats_C_ExecuteUbergraph_WBP_VehicleStats");
static_assert(offsetof(WBP_VehicleStats_C_ExecuteUbergraph_WBP_VehicleStats, EntryPoint) == 0x000000, "Member 'WBP_VehicleStats_C_ExecuteUbergraph_WBP_VehicleStats::EntryPoint' has a wrong offset!");

// Function WBP_VehicleStats.WBP_VehicleStats_C.FuelUpdate
// 0x0028 (0x0028 - 0x0000)
struct WBP_VehicleStats_C_FuelUpdate final
{
public:
	double                                        CurrentValue;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(WBP_VehicleStats_C_FuelUpdate) == 0x000008, "Wrong alignment on WBP_VehicleStats_C_FuelUpdate");
static_assert(sizeof(WBP_VehicleStats_C_FuelUpdate) == 0x000028, "Wrong size on WBP_VehicleStats_C_FuelUpdate");
static_assert(offsetof(WBP_VehicleStats_C_FuelUpdate, CurrentValue) == 0x000000, "Member 'WBP_VehicleStats_C_FuelUpdate::CurrentValue' has a wrong offset!");
static_assert(offsetof(WBP_VehicleStats_C_FuelUpdate, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000008, "Member 'WBP_VehicleStats_C_FuelUpdate::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_VehicleStats_C_FuelUpdate, CallFunc_Conv_DoubleToText_ReturnValue) == 0x000010, "Member 'WBP_VehicleStats_C_FuelUpdate::CallFunc_Conv_DoubleToText_ReturnValue' has a wrong offset!");

// Function WBP_VehicleStats.WBP_VehicleStats_C.SetDurabilitylMaxLevel
// 0x0020 (0x0020 - 0x0000)
struct WBP_VehicleStats_C_SetDurabilitylMaxLevel final
{
public:
	double                                        DurabilityLevel;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue;            // 0x0008(0x0018)()
};
static_assert(alignof(WBP_VehicleStats_C_SetDurabilitylMaxLevel) == 0x000008, "Wrong alignment on WBP_VehicleStats_C_SetDurabilitylMaxLevel");
static_assert(sizeof(WBP_VehicleStats_C_SetDurabilitylMaxLevel) == 0x000020, "Wrong size on WBP_VehicleStats_C_SetDurabilitylMaxLevel");
static_assert(offsetof(WBP_VehicleStats_C_SetDurabilitylMaxLevel, DurabilityLevel) == 0x000000, "Member 'WBP_VehicleStats_C_SetDurabilitylMaxLevel::DurabilityLevel' has a wrong offset!");
static_assert(offsetof(WBP_VehicleStats_C_SetDurabilitylMaxLevel, CallFunc_Conv_DoubleToText_ReturnValue) == 0x000008, "Member 'WBP_VehicleStats_C_SetDurabilitylMaxLevel::CallFunc_Conv_DoubleToText_ReturnValue' has a wrong offset!");

// Function WBP_VehicleStats.WBP_VehicleStats_C.SetFuelMaxLevel
// 0x0028 (0x0028 - 0x0000)
struct WBP_VehicleStats_C_SetFuelMaxLevel final
{
public:
	double                                        FuelLevel;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue;            // 0x0008(0x0018)()
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_VehicleStats_C_SetFuelMaxLevel) == 0x000008, "Wrong alignment on WBP_VehicleStats_C_SetFuelMaxLevel");
static_assert(sizeof(WBP_VehicleStats_C_SetFuelMaxLevel) == 0x000028, "Wrong size on WBP_VehicleStats_C_SetFuelMaxLevel");
static_assert(offsetof(WBP_VehicleStats_C_SetFuelMaxLevel, FuelLevel) == 0x000000, "Member 'WBP_VehicleStats_C_SetFuelMaxLevel::FuelLevel' has a wrong offset!");
static_assert(offsetof(WBP_VehicleStats_C_SetFuelMaxLevel, CallFunc_Conv_DoubleToText_ReturnValue) == 0x000008, "Member 'WBP_VehicleStats_C_SetFuelMaxLevel::CallFunc_Conv_DoubleToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_VehicleStats_C_SetFuelMaxLevel, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000020, "Member 'WBP_VehicleStats_C_SetFuelMaxLevel::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");

// Function WBP_VehicleStats.WBP_VehicleStats_C.Show
// 0x0018 (0x0018 - 0x0000)
struct WBP_VehicleStats_C_Show final
{
public:
	bool                                          bShow;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_VehicleStats_C_Show) == 0x000008, "Wrong alignment on WBP_VehicleStats_C_Show");
static_assert(sizeof(WBP_VehicleStats_C_Show) == 0x000018, "Wrong size on WBP_VehicleStats_C_Show");
static_assert(offsetof(WBP_VehicleStats_C_Show, bShow) == 0x000000, "Member 'WBP_VehicleStats_C_Show::bShow' has a wrong offset!");
static_assert(offsetof(WBP_VehicleStats_C_Show, Temp_bool_Variable) == 0x000001, "Member 'WBP_VehicleStats_C_Show::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_VehicleStats_C_Show, Temp_byte_Variable) == 0x000002, "Member 'WBP_VehicleStats_C_Show::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_VehicleStats_C_Show, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_VehicleStats_C_Show::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_VehicleStats_C_Show, K2Node_Select_Default) == 0x000004, "Member 'WBP_VehicleStats_C_Show::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_VehicleStats_C_Show, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_VehicleStats_C_Show::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_VehicleStats_C_Show, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000010, "Member 'WBP_VehicleStats_C_Show::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

}
