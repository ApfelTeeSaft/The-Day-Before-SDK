#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ObjCollection

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_ObjCollection.BP_ObjCollection_C.ActivateObjective
// 0x0008 (0x0008 - 0x0000)
struct BP_ObjCollection_C_ActivateObjective final
{
public:
	class AHUD*                                   Param_HUD;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ObjCollection_C_ActivateObjective) == 0x000008, "Wrong alignment on BP_ObjCollection_C_ActivateObjective");
static_assert(sizeof(BP_ObjCollection_C_ActivateObjective) == 0x000008, "Wrong size on BP_ObjCollection_C_ActivateObjective");
static_assert(offsetof(BP_ObjCollection_C_ActivateObjective, Param_HUD) == 0x000000, "Member 'BP_ObjCollection_C_ActivateObjective::Param_HUD' has a wrong offset!");

// Function BP_ObjCollection.BP_ObjCollection_C.AddObjective
// 0x0010 (0x0010 - 0x0000)
struct BP_ObjCollection_C_AddObjective final
{
public:
	class UBP_Objective_C*                        Objective;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ObjCollection_C_AddObjective) == 0x000008, "Wrong alignment on BP_ObjCollection_C_AddObjective");
static_assert(sizeof(BP_ObjCollection_C_AddObjective) == 0x000010, "Wrong size on BP_ObjCollection_C_AddObjective");
static_assert(offsetof(BP_ObjCollection_C_AddObjective, Objective) == 0x000000, "Member 'BP_ObjCollection_C_AddObjective::Objective' has a wrong offset!");
static_assert(offsetof(BP_ObjCollection_C_AddObjective, CallFunc_Array_Add_ReturnValue) == 0x000008, "Member 'BP_ObjCollection_C_AddObjective::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function BP_ObjCollection.BP_ObjCollection_C.CheckOnCompleted
// 0x0001 (0x0001 - 0x0000)
struct BP_ObjCollection_C_CheckOnCompleted final
{
public:
	bool                                          CallFunc_GetIsComplete_IsComplete;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ObjCollection_C_CheckOnCompleted) == 0x000001, "Wrong alignment on BP_ObjCollection_C_CheckOnCompleted");
static_assert(sizeof(BP_ObjCollection_C_CheckOnCompleted) == 0x000001, "Wrong size on BP_ObjCollection_C_CheckOnCompleted");
static_assert(offsetof(BP_ObjCollection_C_CheckOnCompleted, CallFunc_GetIsComplete_IsComplete) == 0x000000, "Member 'BP_ObjCollection_C_CheckOnCompleted::CallFunc_GetIsComplete_IsComplete' has a wrong offset!");

// Function BP_ObjCollection.BP_ObjCollection_C.CustomEvent_1
// 0x0008 (0x0008 - 0x0000)
struct BP_ObjCollection_C_CustomEvent_1 final
{
public:
	class UBP_Objective_C*                        Objective;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ObjCollection_C_CustomEvent_1) == 0x000008, "Wrong alignment on BP_ObjCollection_C_CustomEvent_1");
static_assert(sizeof(BP_ObjCollection_C_CustomEvent_1) == 0x000008, "Wrong size on BP_ObjCollection_C_CustomEvent_1");
static_assert(offsetof(BP_ObjCollection_C_CustomEvent_1, Objective) == 0x000000, "Member 'BP_ObjCollection_C_CustomEvent_1::Objective' has a wrong offset!");

// Function BP_ObjCollection.BP_ObjCollection_C.ExecuteUbergraph_BP_ObjCollection
// 0x00C0 (0x00C0 - 0x0000)
struct BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   K2Node_Event_HUD;                                  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_Objective_C*                        CallFunc_FindNextIncompleteObjective_NextObjective; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_Objective_C*                        K2Node_CustomEvent_Objective_3;                    // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UBP_Objective_C* Objective)> K2Node_CreateDelegate_OutputDelegate;              // 0x0024(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Objective_C*                        K2Node_CustomEvent_Objective_2;                    // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UBP_Objective_C* Objective)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_Objective_C*                        CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UBP_Objective_C* Objective)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0058(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Objective_C*                        CallFunc_Array_Get_Item_1;                         // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_Objective_C*                        CallFunc_Array_Get_Item_2;                         // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Objective_C*                        K2Node_CustomEvent_Objective_1;                    // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_92[0x2];                                       // 0x0092(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Objective_C*                        K2Node_CustomEvent_Objective;                      // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A5[0x3];                                       // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UBP_Objective_C* Objective)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x00A8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection) == 0x000008, "Wrong alignment on BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection");
static_assert(sizeof(BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection) == 0x0000C0, "Wrong size on BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection");
static_assert(offsetof(BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection, EntryPoint) == 0x000000, "Member 'BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection, K2Node_Event_HUD) == 0x000008, "Member 'BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection::K2Node_Event_HUD' has a wrong offset!");
static_assert(offsetof(BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection, CallFunc_FindNextIncompleteObjective_NextObjective) == 0x000010, "Member 'BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection::CallFunc_FindNextIncompleteObjective_NextObjective' has a wrong offset!");
static_assert(offsetof(BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection, K2Node_CustomEvent_Objective_3) == 0x000018, "Member 'BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection::K2Node_CustomEvent_Objective_3' has a wrong offset!");
static_assert(offsetof(BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection, K2Node_CreateDelegate_OutputDelegate) == 0x000024, "Member 'BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection, Temp_int_Variable) == 0x000034, "Member 'BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection, K2Node_CustomEvent_Objective_2) == 0x000038, "Member 'BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection::K2Node_CustomEvent_Objective_2' has a wrong offset!");
static_assert(offsetof(BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection, K2Node_CreateDelegate_OutputDelegate_1) == 0x000040, "Member 'BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection, CallFunc_Array_Get_Item) == 0x000050, "Member 'BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection, K2Node_CreateDelegate_OutputDelegate_2) == 0x000058, "Member 'BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection, CallFunc_IsValid_ReturnValue_1) == 0x000068, "Member 'BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection, Temp_int_Variable_1) == 0x00006C, "Member 'BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection, CallFunc_Array_Get_Item_1) == 0x000070, "Member 'BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection, CallFunc_Array_Get_Item_2) == 0x000078, "Member 'BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection, CallFunc_Add_IntInt_ReturnValue) == 0x000080, "Member 'BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection, CallFunc_Array_LastIndex_ReturnValue) == 0x000084, "Member 'BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection, K2Node_CustomEvent_Objective_1) == 0x000088, "Member 'BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection::K2Node_CustomEvent_Objective_1' has a wrong offset!");
static_assert(offsetof(BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000090, "Member 'BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection, CallFunc_BooleanAND_ReturnValue) == 0x000091, "Member 'BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection, CallFunc_Add_IntInt_ReturnValue_1) == 0x000094, "Member 'BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection, K2Node_CustomEvent_Objective) == 0x000098, "Member 'BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection::K2Node_CustomEvent_Objective' has a wrong offset!");
static_assert(offsetof(BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection, CallFunc_Array_Add_ReturnValue) == 0x0000A0, "Member 'BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection, CallFunc_Array_RemoveItem_ReturnValue) == 0x0000A4, "Member 'BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000A8, "Member 'BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection, CallFunc_Array_Length_ReturnValue) == 0x0000B8, "Member 'BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000BC, "Member 'BP_ObjCollection_C_ExecuteUbergraph_BP_ObjCollection::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_ObjCollection.BP_ObjCollection_C.FindNextIncompleteObjective
// 0x0028 (0x0028 - 0x0000)
struct BP_ObjCollection_C_FindNextIncompleteObjective final
{
public:
	class UBP_Objective_C*                        NextObjective;                                     // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Objective_C*                        CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsComplete_IsComplete;                 // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ObjCollection_C_FindNextIncompleteObjective) == 0x000008, "Wrong alignment on BP_ObjCollection_C_FindNextIncompleteObjective");
static_assert(sizeof(BP_ObjCollection_C_FindNextIncompleteObjective) == 0x000028, "Wrong size on BP_ObjCollection_C_FindNextIncompleteObjective");
static_assert(offsetof(BP_ObjCollection_C_FindNextIncompleteObjective, NextObjective) == 0x000000, "Member 'BP_ObjCollection_C_FindNextIncompleteObjective::NextObjective' has a wrong offset!");
static_assert(offsetof(BP_ObjCollection_C_FindNextIncompleteObjective, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BP_ObjCollection_C_FindNextIncompleteObjective::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ObjCollection_C_FindNextIncompleteObjective, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'BP_ObjCollection_C_FindNextIncompleteObjective::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ObjCollection_C_FindNextIncompleteObjective, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'BP_ObjCollection_C_FindNextIncompleteObjective::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ObjCollection_C_FindNextIncompleteObjective, CallFunc_Array_Length_ReturnValue) == 0x000014, "Member 'BP_ObjCollection_C_FindNextIncompleteObjective::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ObjCollection_C_FindNextIncompleteObjective, CallFunc_Array_Get_Item) == 0x000018, "Member 'BP_ObjCollection_C_FindNextIncompleteObjective::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ObjCollection_C_FindNextIncompleteObjective, CallFunc_Less_IntInt_ReturnValue) == 0x000020, "Member 'BP_ObjCollection_C_FindNextIncompleteObjective::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ObjCollection_C_FindNextIncompleteObjective, CallFunc_GetIsComplete_IsComplete) == 0x000021, "Member 'BP_ObjCollection_C_FindNextIncompleteObjective::CallFunc_GetIsComplete_IsComplete' has a wrong offset!");
static_assert(offsetof(BP_ObjCollection_C_FindNextIncompleteObjective, CallFunc_Not_PreBool_ReturnValue) == 0x000022, "Member 'BP_ObjCollection_C_FindNextIncompleteObjective::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function BP_ObjCollection.BP_ObjCollection_C.OnCompleted_Event
// 0x0008 (0x0008 - 0x0000)
struct BP_ObjCollection_C_OnCompleted_Event final
{
public:
	class UBP_Objective_C*                        Objective;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ObjCollection_C_OnCompleted_Event) == 0x000008, "Wrong alignment on BP_ObjCollection_C_OnCompleted_Event");
static_assert(sizeof(BP_ObjCollection_C_OnCompleted_Event) == 0x000008, "Wrong size on BP_ObjCollection_C_OnCompleted_Event");
static_assert(offsetof(BP_ObjCollection_C_OnCompleted_Event, Objective) == 0x000000, "Member 'BP_ObjCollection_C_OnCompleted_Event::Objective' has a wrong offset!");

// Function BP_ObjCollection.BP_ObjCollection_C.OnCompletedObjective
// 0x0008 (0x0008 - 0x0000)
struct BP_ObjCollection_C_OnCompletedObjective final
{
public:
	class UBP_Objective_C*                        Objective;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ObjCollection_C_OnCompletedObjective) == 0x000008, "Wrong alignment on BP_ObjCollection_C_OnCompletedObjective");
static_assert(sizeof(BP_ObjCollection_C_OnCompletedObjective) == 0x000008, "Wrong size on BP_ObjCollection_C_OnCompletedObjective");
static_assert(offsetof(BP_ObjCollection_C_OnCompletedObjective, Objective) == 0x000000, "Member 'BP_ObjCollection_C_OnCompletedObjective::Objective' has a wrong offset!");

// Function BP_ObjCollection.BP_ObjCollection_C.OnSimultaneousObjectiveCompleted
// 0x0008 (0x0008 - 0x0000)
struct BP_ObjCollection_C_OnSimultaneousObjectiveCompleted final
{
public:
	class UBP_Objective_C*                        Objective;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ObjCollection_C_OnSimultaneousObjectiveCompleted) == 0x000008, "Wrong alignment on BP_ObjCollection_C_OnSimultaneousObjectiveCompleted");
static_assert(sizeof(BP_ObjCollection_C_OnSimultaneousObjectiveCompleted) == 0x000008, "Wrong size on BP_ObjCollection_C_OnSimultaneousObjectiveCompleted");
static_assert(offsetof(BP_ObjCollection_C_OnSimultaneousObjectiveCompleted, Objective) == 0x000000, "Member 'BP_ObjCollection_C_OnSimultaneousObjectiveCompleted::Objective' has a wrong offset!");

// Function BP_ObjCollection.BP_ObjCollection_C.GetIsComplete
// 0x0020 (0x0020 - 0x0000)
struct BP_ObjCollection_C_GetIsComplete final
{
public:
	bool                                          Param_IsComplete;                                  // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Objective_C*                        CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsComplete_IsComplete;                 // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ObjCollection_C_GetIsComplete) == 0x000008, "Wrong alignment on BP_ObjCollection_C_GetIsComplete");
static_assert(sizeof(BP_ObjCollection_C_GetIsComplete) == 0x000020, "Wrong size on BP_ObjCollection_C_GetIsComplete");
static_assert(offsetof(BP_ObjCollection_C_GetIsComplete, Param_IsComplete) == 0x000000, "Member 'BP_ObjCollection_C_GetIsComplete::Param_IsComplete' has a wrong offset!");
static_assert(offsetof(BP_ObjCollection_C_GetIsComplete, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_ObjCollection_C_GetIsComplete::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ObjCollection_C_GetIsComplete, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_ObjCollection_C_GetIsComplete::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ObjCollection_C_GetIsComplete, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_ObjCollection_C_GetIsComplete::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ObjCollection_C_GetIsComplete, CallFunc_Array_Get_Item) == 0x000010, "Member 'BP_ObjCollection_C_GetIsComplete::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ObjCollection_C_GetIsComplete, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'BP_ObjCollection_C_GetIsComplete::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ObjCollection_C_GetIsComplete, CallFunc_GetIsComplete_IsComplete) == 0x00001C, "Member 'BP_ObjCollection_C_GetIsComplete::CallFunc_GetIsComplete_IsComplete' has a wrong offset!");
static_assert(offsetof(BP_ObjCollection_C_GetIsComplete, CallFunc_Less_IntInt_ReturnValue) == 0x00001D, "Member 'BP_ObjCollection_C_GetIsComplete::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ObjCollection_C_GetIsComplete, CallFunc_Not_PreBool_ReturnValue) == 0x00001E, "Member 'BP_ObjCollection_C_GetIsComplete::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

}
