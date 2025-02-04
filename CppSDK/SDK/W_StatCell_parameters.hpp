#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_StatCell

#include "Basic.hpp"

#include "E_StatEndGame_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function W_StatCell.W_StatCell_C.ExecuteUbergraph_W_StatCell
// 0x0008 (0x0008 - 0x0000)
struct W_StatCell_C_ExecuteUbergraph_W_StatCell final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_StatCell_C_ExecuteUbergraph_W_StatCell) == 0x000004, "Wrong alignment on W_StatCell_C_ExecuteUbergraph_W_StatCell");
static_assert(sizeof(W_StatCell_C_ExecuteUbergraph_W_StatCell) == 0x000008, "Wrong size on W_StatCell_C_ExecuteUbergraph_W_StatCell");
static_assert(offsetof(W_StatCell_C_ExecuteUbergraph_W_StatCell, EntryPoint) == 0x000000, "Member 'W_StatCell_C_ExecuteUbergraph_W_StatCell::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_StatCell_C_ExecuteUbergraph_W_StatCell, K2Node_Event_IsDesignTime) == 0x000004, "Member 'W_StatCell_C_ExecuteUbergraph_W_StatCell::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function W_StatCell.W_StatCell_C.GetStatsType
// 0x0001 (0x0001 - 0x0000)
struct W_StatCell_C_GetStatsType final
{
public:
	E_StatEndGame                                 Param_StatType;                                    // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_StatCell_C_GetStatsType) == 0x000001, "Wrong alignment on W_StatCell_C_GetStatsType");
static_assert(sizeof(W_StatCell_C_GetStatsType) == 0x000001, "Wrong size on W_StatCell_C_GetStatsType");
static_assert(offsetof(W_StatCell_C_GetStatsType, Param_StatType) == 0x000000, "Member 'W_StatCell_C_GetStatsType::Param_StatType' has a wrong offset!");

// Function W_StatCell.W_StatCell_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_StatCell_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_StatCell_C_PreConstruct) == 0x000001, "Wrong alignment on W_StatCell_C_PreConstruct");
static_assert(sizeof(W_StatCell_C_PreConstruct) == 0x000001, "Wrong size on W_StatCell_C_PreConstruct");
static_assert(offsetof(W_StatCell_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'W_StatCell_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function W_StatCell.W_StatCell_C.SetStatCount
// 0x0228 (0x0228 - 0x0000)
struct W_StatCell_C_SetStatCount final
{
public:
	int64                                         Count;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0008(0x0050)(HasGetValueTypeHash)
	int64                                         CallFunc_Divide_Int64Int64_ReturnValue;            // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0060(0x0010)(ReferenceParm)
	int32                                         CallFunc_Conv_Int64ToInt_ReturnValue;              // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0078(0x0018)()
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0098(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x00E8(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0138(0x0010)(ReferenceParm)
	int64                                         CallFunc_Percent_Int64Int64_ReturnValue;           // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0150(0x0018)()
	int32                                         CallFunc_Conv_Int64ToInt_ReturnValue_1;            // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16C[0x4];                                      // 0x016C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_Int64ToText_ReturnValue;             // 0x0170(0x0018)()
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_StatEndGame                                 Temp_byte_Variable;                                // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_191[0x7];                                      // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x0198(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x01E8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_2;                     // 0x01F8(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0210(0x0018)()
};
static_assert(alignof(W_StatCell_C_SetStatCount) == 0x000008, "Wrong alignment on W_StatCell_C_SetStatCount");
static_assert(sizeof(W_StatCell_C_SetStatCount) == 0x000228, "Wrong size on W_StatCell_C_SetStatCount");
static_assert(offsetof(W_StatCell_C_SetStatCount, Count) == 0x000000, "Member 'W_StatCell_C_SetStatCount::Count' has a wrong offset!");
static_assert(offsetof(W_StatCell_C_SetStatCount, K2Node_MakeStruct_FormatArgumentData) == 0x000008, "Member 'W_StatCell_C_SetStatCount::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(W_StatCell_C_SetStatCount, CallFunc_Divide_Int64Int64_ReturnValue) == 0x000058, "Member 'W_StatCell_C_SetStatCount::CallFunc_Divide_Int64Int64_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_StatCell_C_SetStatCount, K2Node_MakeArray_Array) == 0x000060, "Member 'W_StatCell_C_SetStatCount::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(W_StatCell_C_SetStatCount, CallFunc_Conv_Int64ToInt_ReturnValue) == 0x000070, "Member 'W_StatCell_C_SetStatCount::CallFunc_Conv_Int64ToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_StatCell_C_SetStatCount, CallFunc_Format_ReturnValue) == 0x000078, "Member 'W_StatCell_C_SetStatCount::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_StatCell_C_SetStatCount, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000090, "Member 'W_StatCell_C_SetStatCount::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_StatCell_C_SetStatCount, K2Node_MakeStruct_FormatArgumentData_1) == 0x000098, "Member 'W_StatCell_C_SetStatCount::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(W_StatCell_C_SetStatCount, K2Node_MakeStruct_FormatArgumentData_2) == 0x0000E8, "Member 'W_StatCell_C_SetStatCount::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(W_StatCell_C_SetStatCount, K2Node_MakeArray_Array_1) == 0x000138, "Member 'W_StatCell_C_SetStatCount::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(W_StatCell_C_SetStatCount, CallFunc_Percent_Int64Int64_ReturnValue) == 0x000148, "Member 'W_StatCell_C_SetStatCount::CallFunc_Percent_Int64Int64_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_StatCell_C_SetStatCount, CallFunc_Format_ReturnValue_1) == 0x000150, "Member 'W_StatCell_C_SetStatCount::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_StatCell_C_SetStatCount, CallFunc_Conv_Int64ToInt_ReturnValue_1) == 0x000168, "Member 'W_StatCell_C_SetStatCount::CallFunc_Conv_Int64ToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_StatCell_C_SetStatCount, CallFunc_Conv_Int64ToText_ReturnValue) == 0x000170, "Member 'W_StatCell_C_SetStatCount::CallFunc_Conv_Int64ToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_StatCell_C_SetStatCount, CallFunc_Conv_IntToInt64_ReturnValue_1) == 0x000188, "Member 'W_StatCell_C_SetStatCount::CallFunc_Conv_IntToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_StatCell_C_SetStatCount, Temp_byte_Variable) == 0x000190, "Member 'W_StatCell_C_SetStatCount::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(W_StatCell_C_SetStatCount, K2Node_MakeStruct_FormatArgumentData_3) == 0x000198, "Member 'W_StatCell_C_SetStatCount::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(W_StatCell_C_SetStatCount, K2Node_MakeArray_Array_2) == 0x0001E8, "Member 'W_StatCell_C_SetStatCount::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(W_StatCell_C_SetStatCount, CallFunc_Format_ReturnValue_2) == 0x0001F8, "Member 'W_StatCell_C_SetStatCount::CallFunc_Format_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(W_StatCell_C_SetStatCount, K2Node_Select_Default) == 0x000210, "Member 'W_StatCell_C_SetStatCount::K2Node_Select_Default' has a wrong offset!");

}

