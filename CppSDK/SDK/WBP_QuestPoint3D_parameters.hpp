#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_QuestPoint3D

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_QuestPoint3D.WBP_QuestPoint3D_C.ExecuteUbergraph_WBP_QuestPoint3D
// 0x0020 (0x0020 - 0x0000)
struct WBP_QuestPoint3D_C_ExecuteUbergraph_WBP_QuestPoint3D final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Toggle;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0010(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimer_Time_ImplicitCast;            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_QuestPoint3D_C_ExecuteUbergraph_WBP_QuestPoint3D) == 0x000008, "Wrong alignment on WBP_QuestPoint3D_C_ExecuteUbergraph_WBP_QuestPoint3D");
static_assert(sizeof(WBP_QuestPoint3D_C_ExecuteUbergraph_WBP_QuestPoint3D) == 0x000020, "Wrong size on WBP_QuestPoint3D_C_ExecuteUbergraph_WBP_QuestPoint3D");
static_assert(offsetof(WBP_QuestPoint3D_C_ExecuteUbergraph_WBP_QuestPoint3D, EntryPoint) == 0x000000, "Member 'WBP_QuestPoint3D_C_ExecuteUbergraph_WBP_QuestPoint3D::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_QuestPoint3D_C_ExecuteUbergraph_WBP_QuestPoint3D, K2Node_CustomEvent_Toggle) == 0x000004, "Member 'WBP_QuestPoint3D_C_ExecuteUbergraph_WBP_QuestPoint3D::K2Node_CustomEvent_Toggle' has a wrong offset!");
static_assert(offsetof(WBP_QuestPoint3D_C_ExecuteUbergraph_WBP_QuestPoint3D, CallFunc_SelectFloat_ReturnValue) == 0x000008, "Member 'WBP_QuestPoint3D_C_ExecuteUbergraph_WBP_QuestPoint3D::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestPoint3D_C_ExecuteUbergraph_WBP_QuestPoint3D, CallFunc_K2_SetTimer_ReturnValue) == 0x000010, "Member 'WBP_QuestPoint3D_C_ExecuteUbergraph_WBP_QuestPoint3D::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestPoint3D_C_ExecuteUbergraph_WBP_QuestPoint3D, CallFunc_K2_SetTimer_Time_ImplicitCast) == 0x000018, "Member 'WBP_QuestPoint3D_C_ExecuteUbergraph_WBP_QuestPoint3D::CallFunc_K2_SetTimer_Time_ImplicitCast' has a wrong offset!");

// Function WBP_QuestPoint3D.WBP_QuestPoint3D_C.GetDistance
// 0x0050 (0x0050 - 0x0000)
struct WBP_QuestPoint3D_C_GetDistance final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Vector_Distance_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_QuestPoint3D_C_GetDistance) == 0x000008, "Wrong alignment on WBP_QuestPoint3D_C_GetDistance");
static_assert(sizeof(WBP_QuestPoint3D_C_GetDistance) == 0x000050, "Wrong size on WBP_QuestPoint3D_C_GetDistance");
static_assert(offsetof(WBP_QuestPoint3D_C_GetDistance, ReturnValue) == 0x000000, "Member 'WBP_QuestPoint3D_C_GetDistance::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestPoint3D_C_GetDistance, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000008, "Member 'WBP_QuestPoint3D_C_GetDistance::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestPoint3D_C_GetDistance, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000010, "Member 'WBP_QuestPoint3D_C_GetDistance::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestPoint3D_C_GetDistance, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000028, "Member 'WBP_QuestPoint3D_C_GetDistance::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestPoint3D_C_GetDistance, CallFunc_Vector_Distance_ReturnValue) == 0x000040, "Member 'WBP_QuestPoint3D_C_GetDistance::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestPoint3D_C_GetDistance, CallFunc_FTrunc_ReturnValue) == 0x000048, "Member 'WBP_QuestPoint3D_C_GetDistance::CallFunc_FTrunc_ReturnValue' has a wrong offset!");

// Function WBP_QuestPoint3D.WBP_QuestPoint3D_C.Init
// 0x00A8 (0x00A8 - 0x0000)
struct WBP_QuestPoint3D_C_Init final
{
public:
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetDistance_ReturnValue;                  // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x2];                                        // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetDistance_ReturnValue_1;                // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0018(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0030(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0080(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0090(0x0018)()
};
static_assert(alignof(WBP_QuestPoint3D_C_Init) == 0x000008, "Wrong alignment on WBP_QuestPoint3D_C_Init");
static_assert(sizeof(WBP_QuestPoint3D_C_Init) == 0x0000A8, "Wrong size on WBP_QuestPoint3D_C_Init");
static_assert(offsetof(WBP_QuestPoint3D_C_Init, Temp_byte_Variable) == 0x000000, "Member 'WBP_QuestPoint3D_C_Init::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_QuestPoint3D_C_Init, Temp_byte_Variable_1) == 0x000001, "Member 'WBP_QuestPoint3D_C_Init::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_QuestPoint3D_C_Init, CallFunc_GetDistance_ReturnValue) == 0x000004, "Member 'WBP_QuestPoint3D_C_Init::CallFunc_GetDistance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestPoint3D_C_Init, Temp_bool_Variable) == 0x000008, "Member 'WBP_QuestPoint3D_C_Init::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_QuestPoint3D_C_Init, CallFunc_Less_IntInt_ReturnValue) == 0x000009, "Member 'WBP_QuestPoint3D_C_Init::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestPoint3D_C_Init, CallFunc_GetDistance_ReturnValue_1) == 0x00000C, "Member 'WBP_QuestPoint3D_C_Init::CallFunc_GetDistance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_QuestPoint3D_C_Init, CallFunc_Divide_IntInt_ReturnValue) == 0x000010, "Member 'WBP_QuestPoint3D_C_Init::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestPoint3D_C_Init, K2Node_Select_Default) == 0x000014, "Member 'WBP_QuestPoint3D_C_Init::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_QuestPoint3D_C_Init, CallFunc_Conv_IntToText_ReturnValue) == 0x000018, "Member 'WBP_QuestPoint3D_C_Init::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestPoint3D_C_Init, K2Node_MakeStruct_FormatArgumentData) == 0x000030, "Member 'WBP_QuestPoint3D_C_Init::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_QuestPoint3D_C_Init, K2Node_MakeArray_Array) == 0x000080, "Member 'WBP_QuestPoint3D_C_Init::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_QuestPoint3D_C_Init, CallFunc_Format_ReturnValue) == 0x000090, "Member 'WBP_QuestPoint3D_C_Init::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function WBP_QuestPoint3D.WBP_QuestPoint3D_C.SetVisibilityW
// 0x0001 (0x0001 - 0x0000)
struct WBP_QuestPoint3D_C_SetVisibilityW final
{
public:
	bool                                          Param_Index;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_QuestPoint3D_C_SetVisibilityW) == 0x000001, "Wrong alignment on WBP_QuestPoint3D_C_SetVisibilityW");
static_assert(sizeof(WBP_QuestPoint3D_C_SetVisibilityW) == 0x000001, "Wrong size on WBP_QuestPoint3D_C_SetVisibilityW");
static_assert(offsetof(WBP_QuestPoint3D_C_SetVisibilityW, Param_Index) == 0x000000, "Member 'WBP_QuestPoint3D_C_SetVisibilityW::Param_Index' has a wrong offset!");

// Function WBP_QuestPoint3D.WBP_QuestPoint3D_C.Toggle
// 0x0001 (0x0001 - 0x0000)
struct WBP_QuestPoint3D_C_Toggle final
{
public:
	bool                                          Param_Toggle;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_QuestPoint3D_C_Toggle) == 0x000001, "Wrong alignment on WBP_QuestPoint3D_C_Toggle");
static_assert(sizeof(WBP_QuestPoint3D_C_Toggle) == 0x000001, "Wrong size on WBP_QuestPoint3D_C_Toggle");
static_assert(offsetof(WBP_QuestPoint3D_C_Toggle, Param_Toggle) == 0x000000, "Member 'WBP_QuestPoint3D_C_Toggle::Param_Toggle' has a wrong offset!");

}
