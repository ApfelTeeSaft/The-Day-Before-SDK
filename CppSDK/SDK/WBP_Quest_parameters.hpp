#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Quest

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_Quest.WBP_Quest_C.ExecuteUbergraph_WBP_Quest
// 0x00D0 (0x00D0 - 0x0000)
struct WBP_Quest_C_ExecuteUbergraph_WBP_Quest final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Objective_C*                        K2Node_CustomEvent_RootObjectiveCollection;        // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UBP_Objective_C* Objective)> K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UBP_Objective_C* Objective)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UBP_Objective_C* RootObjectiveCollection)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_Objective_C*                        K2Node_CustomEvent_Objective;                      // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UBP_ObjCollection_C*>            CallFunc_Map_Values_Values;                        // 0x0060(0x0010)(ReferenceParm)
	class ASurvPC_C*                              K2Node_DynamicCast_AsSurv_PC;                      // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x3];                                       // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x3];                                       // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_ObjCollection_C*                    CallFunc_Array_Get_Item;                           // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsComplete_IsComplete;                 // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0093(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0094(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Quest_C_ExecuteUbergraph_WBP_Quest) == 0x000008, "Wrong alignment on WBP_Quest_C_ExecuteUbergraph_WBP_Quest");
static_assert(sizeof(WBP_Quest_C_ExecuteUbergraph_WBP_Quest) == 0x0000D0, "Wrong size on WBP_Quest_C_ExecuteUbergraph_WBP_Quest");
static_assert(offsetof(WBP_Quest_C_ExecuteUbergraph_WBP_Quest, EntryPoint) == 0x000000, "Member 'WBP_Quest_C_ExecuteUbergraph_WBP_Quest::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Quest_C_ExecuteUbergraph_WBP_Quest, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WBP_Quest_C_ExecuteUbergraph_WBP_Quest::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Quest_C_ExecuteUbergraph_WBP_Quest, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WBP_Quest_C_ExecuteUbergraph_WBP_Quest::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Quest_C_ExecuteUbergraph_WBP_Quest, K2Node_CustomEvent_RootObjectiveCollection) == 0x000010, "Member 'WBP_Quest_C_ExecuteUbergraph_WBP_Quest::K2Node_CustomEvent_RootObjectiveCollection' has a wrong offset!");
static_assert(offsetof(WBP_Quest_C_ExecuteUbergraph_WBP_Quest, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'WBP_Quest_C_ExecuteUbergraph_WBP_Quest::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Quest_C_ExecuteUbergraph_WBP_Quest, K2Node_CreateDelegate_OutputDelegate_1) == 0x000028, "Member 'WBP_Quest_C_ExecuteUbergraph_WBP_Quest::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_Quest_C_ExecuteUbergraph_WBP_Quest, K2Node_CreateDelegate_OutputDelegate_2) == 0x000038, "Member 'WBP_Quest_C_ExecuteUbergraph_WBP_Quest::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_Quest_C_ExecuteUbergraph_WBP_Quest, K2Node_CustomEvent_Objective) == 0x000048, "Member 'WBP_Quest_C_ExecuteUbergraph_WBP_Quest::K2Node_CustomEvent_Objective' has a wrong offset!");
static_assert(offsetof(WBP_Quest_C_ExecuteUbergraph_WBP_Quest, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'WBP_Quest_C_ExecuteUbergraph_WBP_Quest::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Quest_C_ExecuteUbergraph_WBP_Quest, CallFunc_GetOwningPlayer_ReturnValue) == 0x000058, "Member 'WBP_Quest_C_ExecuteUbergraph_WBP_Quest::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Quest_C_ExecuteUbergraph_WBP_Quest, CallFunc_Map_Values_Values) == 0x000060, "Member 'WBP_Quest_C_ExecuteUbergraph_WBP_Quest::CallFunc_Map_Values_Values' has a wrong offset!");
static_assert(offsetof(WBP_Quest_C_ExecuteUbergraph_WBP_Quest, K2Node_DynamicCast_AsSurv_PC) == 0x000070, "Member 'WBP_Quest_C_ExecuteUbergraph_WBP_Quest::K2Node_DynamicCast_AsSurv_PC' has a wrong offset!");
static_assert(offsetof(WBP_Quest_C_ExecuteUbergraph_WBP_Quest, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'WBP_Quest_C_ExecuteUbergraph_WBP_Quest::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Quest_C_ExecuteUbergraph_WBP_Quest, CallFunc_Array_Length_ReturnValue) == 0x00007C, "Member 'WBP_Quest_C_ExecuteUbergraph_WBP_Quest::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Quest_C_ExecuteUbergraph_WBP_Quest, CallFunc_Less_IntInt_ReturnValue) == 0x000080, "Member 'WBP_Quest_C_ExecuteUbergraph_WBP_Quest::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Quest_C_ExecuteUbergraph_WBP_Quest, Temp_int_Array_Index_Variable) == 0x000084, "Member 'WBP_Quest_C_ExecuteUbergraph_WBP_Quest::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Quest_C_ExecuteUbergraph_WBP_Quest, CallFunc_Array_Get_Item) == 0x000088, "Member 'WBP_Quest_C_ExecuteUbergraph_WBP_Quest::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Quest_C_ExecuteUbergraph_WBP_Quest, CallFunc_GetIsComplete_IsComplete) == 0x000090, "Member 'WBP_Quest_C_ExecuteUbergraph_WBP_Quest::CallFunc_GetIsComplete_IsComplete' has a wrong offset!");
static_assert(offsetof(WBP_Quest_C_ExecuteUbergraph_WBP_Quest, CallFunc_IsValid_ReturnValue_1) == 0x000091, "Member 'WBP_Quest_C_ExecuteUbergraph_WBP_Quest::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Quest_C_ExecuteUbergraph_WBP_Quest, CallFunc_Not_PreBool_ReturnValue) == 0x000092, "Member 'WBP_Quest_C_ExecuteUbergraph_WBP_Quest::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Quest_C_ExecuteUbergraph_WBP_Quest, CallFunc_BooleanAND_ReturnValue) == 0x000093, "Member 'WBP_Quest_C_ExecuteUbergraph_WBP_Quest::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Quest_C_ExecuteUbergraph_WBP_Quest, K2Node_Event_MyGeometry) == 0x000094, "Member 'WBP_Quest_C_ExecuteUbergraph_WBP_Quest::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Quest_C_ExecuteUbergraph_WBP_Quest, K2Node_Event_InDeltaTime) == 0x0000CC, "Member 'WBP_Quest_C_ExecuteUbergraph_WBP_Quest::K2Node_Event_InDeltaTime' has a wrong offset!");

// Function WBP_Quest.WBP_Quest_C.OnActivatedQuest
// 0x0008 (0x0008 - 0x0000)
struct WBP_Quest_C_OnActivatedQuest final
{
public:
	class UBP_Objective_C*                        RootObjectiveCollection;                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Quest_C_OnActivatedQuest) == 0x000008, "Wrong alignment on WBP_Quest_C_OnActivatedQuest");
static_assert(sizeof(WBP_Quest_C_OnActivatedQuest) == 0x000008, "Wrong size on WBP_Quest_C_OnActivatedQuest");
static_assert(offsetof(WBP_Quest_C_OnActivatedQuest, RootObjectiveCollection) == 0x000000, "Member 'WBP_Quest_C_OnActivatedQuest::RootObjectiveCollection' has a wrong offset!");

// Function WBP_Quest.WBP_Quest_C.OnCompletedQuest
// 0x0008 (0x0008 - 0x0000)
struct WBP_Quest_C_OnCompletedQuest final
{
public:
	class UBP_Objective_C*                        Objective;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Quest_C_OnCompletedQuest) == 0x000008, "Wrong alignment on WBP_Quest_C_OnCompletedQuest");
static_assert(sizeof(WBP_Quest_C_OnCompletedQuest) == 0x000008, "Wrong size on WBP_Quest_C_OnCompletedQuest");
static_assert(offsetof(WBP_Quest_C_OnCompletedQuest, Objective) == 0x000000, "Member 'WBP_Quest_C_OnCompletedQuest::Objective' has a wrong offset!");

// Function WBP_Quest.WBP_Quest_C.OnMouseButtonDown
// 0x0220 (0x0220 - 0x0000)
struct WBP_Quest_C_OnMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00B0(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0168(0x00B8)()
};
static_assert(alignof(WBP_Quest_C_OnMouseButtonDown) == 0x000008, "Wrong alignment on WBP_Quest_C_OnMouseButtonDown");
static_assert(sizeof(WBP_Quest_C_OnMouseButtonDown) == 0x000220, "Wrong size on WBP_Quest_C_OnMouseButtonDown");
static_assert(offsetof(WBP_Quest_C_OnMouseButtonDown, MyGeometry) == 0x000000, "Member 'WBP_Quest_C_OnMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Quest_C_OnMouseButtonDown, MouseEvent) == 0x000038, "Member 'WBP_Quest_C_OnMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(WBP_Quest_C_OnMouseButtonDown, ReturnValue) == 0x0000B0, "Member 'WBP_Quest_C_OnMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Quest_C_OnMouseButtonDown, CallFunc_Handled_ReturnValue) == 0x000168, "Member 'WBP_Quest_C_OnMouseButtonDown::CallFunc_Handled_ReturnValue' has a wrong offset!");

// Function WBP_Quest.WBP_Quest_C.Tick
// 0x003C (0x003C - 0x0000)
struct WBP_Quest_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Quest_C_Tick) == 0x000004, "Wrong alignment on WBP_Quest_C_Tick");
static_assert(sizeof(WBP_Quest_C_Tick) == 0x00003C, "Wrong size on WBP_Quest_C_Tick");
static_assert(offsetof(WBP_Quest_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_Quest_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Quest_C_Tick, InDeltaTime) == 0x000038, "Member 'WBP_Quest_C_Tick::InDeltaTime' has a wrong offset!");

}

