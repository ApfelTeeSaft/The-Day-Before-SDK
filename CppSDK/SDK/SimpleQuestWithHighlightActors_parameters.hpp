#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SimpleQuestWithHighlightActors

#include "Basic.hpp"

#include "QuestData_0_structs.hpp"
#include "CustomQuestData_structs.hpp"


namespace SDK::Params
{

// Function SimpleQuestWithHighlightActors.SimpleQuestWithHighlightActors_C.ExecuteUbergraph_SimpleQuestWithHighlightActors
// 0x00E0 (0x00E0 - 0x0000)
struct SimpleQuestWithHighlightActors_C_ExecuteUbergraph_SimpleQuestWithHighlightActors final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TScriptInterface<class II_Highlightable_C>> CallFunc_AksForHighlightableActorsWithTag_Result;  // 0x0020(0x0010)(ReferenceParm)
	TScriptInterface<class II_Highlightable_C>    CallFunc_Array_Get_Item;                           // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuestData                             K2Node_Event_Data;                                 // 0x0048(0x0058)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCustomQuestData                       CallFunc_Array_Get_Item_1;                         // 0x00A8(0x0020)(ZeroConstructor, HasGetValueTypeHash)
	TScriptInterface<class II_Highlightable_C>    CallFunc_Array_Get_Item_2;                         // 0x00C8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SimpleQuestWithHighlightActors_C_ExecuteUbergraph_SimpleQuestWithHighlightActors) == 0x000008, "Wrong alignment on SimpleQuestWithHighlightActors_C_ExecuteUbergraph_SimpleQuestWithHighlightActors");
static_assert(sizeof(SimpleQuestWithHighlightActors_C_ExecuteUbergraph_SimpleQuestWithHighlightActors) == 0x0000E0, "Wrong size on SimpleQuestWithHighlightActors_C_ExecuteUbergraph_SimpleQuestWithHighlightActors");
static_assert(offsetof(SimpleQuestWithHighlightActors_C_ExecuteUbergraph_SimpleQuestWithHighlightActors, EntryPoint) == 0x000000, "Member 'SimpleQuestWithHighlightActors_C_ExecuteUbergraph_SimpleQuestWithHighlightActors::EntryPoint' has a wrong offset!");
static_assert(offsetof(SimpleQuestWithHighlightActors_C_ExecuteUbergraph_SimpleQuestWithHighlightActors, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'SimpleQuestWithHighlightActors_C_ExecuteUbergraph_SimpleQuestWithHighlightActors::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SimpleQuestWithHighlightActors_C_ExecuteUbergraph_SimpleQuestWithHighlightActors, Temp_int_Array_Index_Variable) == 0x000008, "Member 'SimpleQuestWithHighlightActors_C_ExecuteUbergraph_SimpleQuestWithHighlightActors::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SimpleQuestWithHighlightActors_C_ExecuteUbergraph_SimpleQuestWithHighlightActors, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'SimpleQuestWithHighlightActors_C_ExecuteUbergraph_SimpleQuestWithHighlightActors::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SimpleQuestWithHighlightActors_C_ExecuteUbergraph_SimpleQuestWithHighlightActors, Temp_int_Loop_Counter_Variable_1) == 0x000010, "Member 'SimpleQuestWithHighlightActors_C_ExecuteUbergraph_SimpleQuestWithHighlightActors::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(SimpleQuestWithHighlightActors_C_ExecuteUbergraph_SimpleQuestWithHighlightActors, CallFunc_Add_IntInt_ReturnValue_1) == 0x000014, "Member 'SimpleQuestWithHighlightActors_C_ExecuteUbergraph_SimpleQuestWithHighlightActors::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SimpleQuestWithHighlightActors_C_ExecuteUbergraph_SimpleQuestWithHighlightActors, Temp_int_Array_Index_Variable_1) == 0x000018, "Member 'SimpleQuestWithHighlightActors_C_ExecuteUbergraph_SimpleQuestWithHighlightActors::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(SimpleQuestWithHighlightActors_C_ExecuteUbergraph_SimpleQuestWithHighlightActors, CallFunc_AksForHighlightableActorsWithTag_Result) == 0x000020, "Member 'SimpleQuestWithHighlightActors_C_ExecuteUbergraph_SimpleQuestWithHighlightActors::CallFunc_AksForHighlightableActorsWithTag_Result' has a wrong offset!");
static_assert(offsetof(SimpleQuestWithHighlightActors_C_ExecuteUbergraph_SimpleQuestWithHighlightActors, CallFunc_Array_Get_Item) == 0x000030, "Member 'SimpleQuestWithHighlightActors_C_ExecuteUbergraph_SimpleQuestWithHighlightActors::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SimpleQuestWithHighlightActors_C_ExecuteUbergraph_SimpleQuestWithHighlightActors, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'SimpleQuestWithHighlightActors_C_ExecuteUbergraph_SimpleQuestWithHighlightActors::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SimpleQuestWithHighlightActors_C_ExecuteUbergraph_SimpleQuestWithHighlightActors, K2Node_Event_Data) == 0x000048, "Member 'SimpleQuestWithHighlightActors_C_ExecuteUbergraph_SimpleQuestWithHighlightActors::K2Node_Event_Data' has a wrong offset!");
static_assert(offsetof(SimpleQuestWithHighlightActors_C_ExecuteUbergraph_SimpleQuestWithHighlightActors, CallFunc_Less_IntInt_ReturnValue) == 0x0000A0, "Member 'SimpleQuestWithHighlightActors_C_ExecuteUbergraph_SimpleQuestWithHighlightActors::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SimpleQuestWithHighlightActors_C_ExecuteUbergraph_SimpleQuestWithHighlightActors, CallFunc_Array_Get_Item_1) == 0x0000A8, "Member 'SimpleQuestWithHighlightActors_C_ExecuteUbergraph_SimpleQuestWithHighlightActors::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(SimpleQuestWithHighlightActors_C_ExecuteUbergraph_SimpleQuestWithHighlightActors, CallFunc_Array_Get_Item_2) == 0x0000C8, "Member 'SimpleQuestWithHighlightActors_C_ExecuteUbergraph_SimpleQuestWithHighlightActors::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(SimpleQuestWithHighlightActors_C_ExecuteUbergraph_SimpleQuestWithHighlightActors, CallFunc_Array_Length_ReturnValue_1) == 0x0000D8, "Member 'SimpleQuestWithHighlightActors_C_ExecuteUbergraph_SimpleQuestWithHighlightActors::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SimpleQuestWithHighlightActors_C_ExecuteUbergraph_SimpleQuestWithHighlightActors, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000DC, "Member 'SimpleQuestWithHighlightActors_C_ExecuteUbergraph_SimpleQuestWithHighlightActors::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function SimpleQuestWithHighlightActors.SimpleQuestWithHighlightActors_C.Initialize
// 0x0058 (0x0058 - 0x0000)
struct SimpleQuestWithHighlightActors_C_Initialize final
{
public:
	struct FQuestData                             Data;                                              // 0x0000(0x0058)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(SimpleQuestWithHighlightActors_C_Initialize) == 0x000008, "Wrong alignment on SimpleQuestWithHighlightActors_C_Initialize");
static_assert(sizeof(SimpleQuestWithHighlightActors_C_Initialize) == 0x000058, "Wrong size on SimpleQuestWithHighlightActors_C_Initialize");
static_assert(offsetof(SimpleQuestWithHighlightActors_C_Initialize, Data) == 0x000000, "Member 'SimpleQuestWithHighlightActors_C_Initialize::Data' has a wrong offset!");

}
