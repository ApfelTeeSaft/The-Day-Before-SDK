#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PerkBaseObjectReborn

#include "Basic.hpp"

#include "WS_CharaterPerks_structs.hpp"


namespace SDK::Params
{

// Function PerkBaseObjectReborn.PerkBaseObjectReborn_C.ExecuteUbergraph_PerkBaseObjectReborn
// 0x0198 (0x0198 - 0x0000)
struct PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0008(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FWS_CharaterPerks                      CallFunc_GetDataTableRowFromName_OutRow;           // 0x0030(0x00B8)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EA[0x2];                                       // 0x00EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x3];                                       // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetOuterObject_ReturnValue;               // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class II_StatsInterface_C>   K2Node_DynamicCast_AsI_Stats_Interface;            // 0x0110(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_121[0x7];                                      // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   CallFunc_Conv_ClassToSoftClassReference_ReturnValue; // 0x0128(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	class UBPC_PlayerStatsComponent_C*            CallFunc_GetStatsComponent_PlayerStats;            // 0x0158(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_SoftClassReference_ReturnValue; // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_161[0x7];                                      // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_DoubleToString_ReturnValue;          // 0x0178(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0188(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn) == 0x000008, "Wrong alignment on PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn");
static_assert(sizeof(PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn) == 0x000198, "Wrong size on PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn");
static_assert(offsetof(PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn, EntryPoint) == 0x000000, "Member 'PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn::EntryPoint' has a wrong offset!");
static_assert(offsetof(PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000008, "Member 'PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn, Temp_bool_True_if_break_was_hit_Variable) == 0x00001C, "Member 'PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn, Temp_int_Array_Index_Variable) == 0x000020, "Member 'PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn, CallFunc_Array_Get_Item) == 0x000024, "Member 'PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn, CallFunc_GetDataTableRowFromName_OutRow) == 0x000030, "Member 'PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000E8, "Member 'PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn, CallFunc_Not_PreBool_ReturnValue) == 0x0000E9, "Member 'PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn, Temp_int_Loop_Counter_Variable) == 0x0000EC, "Member 'PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn, CallFunc_Less_IntInt_ReturnValue) == 0x0000F0, "Member 'PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn, CallFunc_Add_IntInt_ReturnValue) == 0x0000F4, "Member 'PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn, CallFunc_BooleanAND_ReturnValue) == 0x0000F8, "Member 'PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn, CallFunc_GetOuterObject_ReturnValue) == 0x000100, "Member 'PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn::CallFunc_GetOuterObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn, CallFunc_GetObjectClass_ReturnValue) == 0x000108, "Member 'PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn, K2Node_DynamicCast_AsI_Stats_Interface) == 0x000110, "Member 'PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn::K2Node_DynamicCast_AsI_Stats_Interface' has a wrong offset!");
static_assert(offsetof(PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn, K2Node_DynamicCast_bSuccess) == 0x000120, "Member 'PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn, CallFunc_Conv_ClassToSoftClassReference_ReturnValue) == 0x000128, "Member 'PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn::CallFunc_Conv_ClassToSoftClassReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn, CallFunc_GetStatsComponent_PlayerStats) == 0x000158, "Member 'PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn::CallFunc_GetStatsComponent_PlayerStats' has a wrong offset!");
static_assert(offsetof(PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn, CallFunc_EqualEqual_SoftClassReference_ReturnValue) == 0x000160, "Member 'PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn::CallFunc_EqualEqual_SoftClassReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn, CallFunc_Conv_TextToString_ReturnValue) == 0x000168, "Member 'PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn, CallFunc_Conv_DoubleToString_ReturnValue) == 0x000178, "Member 'PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn::CallFunc_Conv_DoubleToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn, CallFunc_Concat_StrStr_ReturnValue) == 0x000188, "Member 'PerkBaseObjectReborn_C_ExecuteUbergraph_PerkBaseObjectReborn::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");

}
