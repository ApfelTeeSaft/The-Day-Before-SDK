#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TutorialQuest3DTracker

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_TutorialQuest3DTracker.WBP_TutorialQuest3DTracker_C.CheckDistance
// 0x00E0 (0x00E0 - 0x0000)
struct WBP_TutorialQuest3DTracker_C_CheckDistance final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x1];                                        // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetDistance_ReturnValue;                  // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0068(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00B8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00C8(0x0018)()
};
static_assert(alignof(WBP_TutorialQuest3DTracker_C_CheckDistance) == 0x000008, "Wrong alignment on WBP_TutorialQuest3DTracker_C_CheckDistance");
static_assert(sizeof(WBP_TutorialQuest3DTracker_C_CheckDistance) == 0x0000E0, "Wrong size on WBP_TutorialQuest3DTracker_C_CheckDistance");
static_assert(offsetof(WBP_TutorialQuest3DTracker_C_CheckDistance, Temp_bool_Variable) == 0x000000, "Member 'WBP_TutorialQuest3DTracker_C_CheckDistance::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_TutorialQuest3DTracker_C_CheckDistance, Temp_byte_Variable) == 0x000001, "Member 'WBP_TutorialQuest3DTracker_C_CheckDistance::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_TutorialQuest3DTracker_C_CheckDistance, Temp_byte_Variable_1) == 0x000002, "Member 'WBP_TutorialQuest3DTracker_C_CheckDistance::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_TutorialQuest3DTracker_C_CheckDistance, CallFunc_GetDistance_ReturnValue) == 0x000004, "Member 'WBP_TutorialQuest3DTracker_C_CheckDistance::CallFunc_GetDistance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutorialQuest3DTracker_C_CheckDistance, CallFunc_Less_IntInt_ReturnValue) == 0x000008, "Member 'WBP_TutorialQuest3DTracker_C_CheckDistance::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutorialQuest3DTracker_C_CheckDistance, CallFunc_Divide_IntInt_ReturnValue) == 0x00000C, "Member 'WBP_TutorialQuest3DTracker_C_CheckDistance::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutorialQuest3DTracker_C_CheckDistance, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'WBP_TutorialQuest3DTracker_C_CheckDistance::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutorialQuest3DTracker_C_CheckDistance, K2Node_Select_Default) == 0x000028, "Member 'WBP_TutorialQuest3DTracker_C_CheckDistance::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_TutorialQuest3DTracker_C_CheckDistance, CallFunc_Conv_TextToString_ReturnValue) == 0x000030, "Member 'WBP_TutorialQuest3DTracker_C_CheckDistance::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutorialQuest3DTracker_C_CheckDistance, CallFunc_Replace_ReturnValue) == 0x000040, "Member 'WBP_TutorialQuest3DTracker_C_CheckDistance::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutorialQuest3DTracker_C_CheckDistance, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'WBP_TutorialQuest3DTracker_C_CheckDistance::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutorialQuest3DTracker_C_CheckDistance, K2Node_MakeStruct_FormatArgumentData) == 0x000068, "Member 'WBP_TutorialQuest3DTracker_C_CheckDistance::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_TutorialQuest3DTracker_C_CheckDistance, K2Node_MakeArray_Array) == 0x0000B8, "Member 'WBP_TutorialQuest3DTracker_C_CheckDistance::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_TutorialQuest3DTracker_C_CheckDistance, CallFunc_Format_ReturnValue) == 0x0000C8, "Member 'WBP_TutorialQuest3DTracker_C_CheckDistance::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function WBP_TutorialQuest3DTracker.WBP_TutorialQuest3DTracker_C.Enable
// 0x0038 (0x0038 - 0x0000)
struct WBP_TutorialQuest3DTracker_C_Enable final
{
public:
	bool                                          Param_Enable;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0008(0x0008)(NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASurvivalPlayer_V2_C*                   K2Node_DynamicCast_AsSurvival_Player_V2;           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B[0x5];                                       // 0x002B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue_1;                // 0x0030(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TutorialQuest3DTracker_C_Enable) == 0x000008, "Wrong alignment on WBP_TutorialQuest3DTracker_C_Enable");
static_assert(sizeof(WBP_TutorialQuest3DTracker_C_Enable) == 0x000038, "Wrong size on WBP_TutorialQuest3DTracker_C_Enable");
static_assert(offsetof(WBP_TutorialQuest3DTracker_C_Enable, Param_Enable) == 0x000000, "Member 'WBP_TutorialQuest3DTracker_C_Enable::Param_Enable' has a wrong offset!");
static_assert(offsetof(WBP_TutorialQuest3DTracker_C_Enable, CallFunc_K2_SetTimer_ReturnValue) == 0x000008, "Member 'WBP_TutorialQuest3DTracker_C_Enable::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutorialQuest3DTracker_C_Enable, CallFunc_GetPlayerController_ReturnValue) == 0x000010, "Member 'WBP_TutorialQuest3DTracker_C_Enable::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutorialQuest3DTracker_C_Enable, CallFunc_K2_GetPawn_ReturnValue) == 0x000018, "Member 'WBP_TutorialQuest3DTracker_C_Enable::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutorialQuest3DTracker_C_Enable, K2Node_DynamicCast_AsSurvival_Player_V2) == 0x000020, "Member 'WBP_TutorialQuest3DTracker_C_Enable::K2Node_DynamicCast_AsSurvival_Player_V2' has a wrong offset!");
static_assert(offsetof(WBP_TutorialQuest3DTracker_C_Enable, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WBP_TutorialQuest3DTracker_C_Enable::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_TutorialQuest3DTracker_C_Enable, CallFunc_Not_PreBool_ReturnValue) == 0x000029, "Member 'WBP_TutorialQuest3DTracker_C_Enable::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutorialQuest3DTracker_C_Enable, CallFunc_BooleanAND_ReturnValue) == 0x00002A, "Member 'WBP_TutorialQuest3DTracker_C_Enable::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutorialQuest3DTracker_C_Enable, CallFunc_K2_SetTimer_ReturnValue_1) == 0x000030, "Member 'WBP_TutorialQuest3DTracker_C_Enable::CallFunc_K2_SetTimer_ReturnValue_1' has a wrong offset!");

// Function WBP_TutorialQuest3DTracker.WBP_TutorialQuest3DTracker_C.GetDistance
// 0x0050 (0x0050 - 0x0000)
struct WBP_TutorialQuest3DTracker_C_GetDistance final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Vector_Distance_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TutorialQuest3DTracker_C_GetDistance) == 0x000008, "Wrong alignment on WBP_TutorialQuest3DTracker_C_GetDistance");
static_assert(sizeof(WBP_TutorialQuest3DTracker_C_GetDistance) == 0x000050, "Wrong size on WBP_TutorialQuest3DTracker_C_GetDistance");
static_assert(offsetof(WBP_TutorialQuest3DTracker_C_GetDistance, ReturnValue) == 0x000000, "Member 'WBP_TutorialQuest3DTracker_C_GetDistance::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutorialQuest3DTracker_C_GetDistance, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000008, "Member 'WBP_TutorialQuest3DTracker_C_GetDistance::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutorialQuest3DTracker_C_GetDistance, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'WBP_TutorialQuest3DTracker_C_GetDistance::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutorialQuest3DTracker_C_GetDistance, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000028, "Member 'WBP_TutorialQuest3DTracker_C_GetDistance::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutorialQuest3DTracker_C_GetDistance, CallFunc_Vector_Distance_ReturnValue) == 0x000040, "Member 'WBP_TutorialQuest3DTracker_C_GetDistance::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutorialQuest3DTracker_C_GetDistance, CallFunc_FTrunc_ReturnValue) == 0x000048, "Member 'WBP_TutorialQuest3DTracker_C_GetDistance::CallFunc_FTrunc_ReturnValue' has a wrong offset!");

// Function WBP_TutorialQuest3DTracker.WBP_TutorialQuest3DTracker_C.SetWidgetComponent
// 0x0008 (0x0008 - 0x0000)
struct WBP_TutorialQuest3DTracker_C_SetWidgetComponent final
{
public:
	class UWidgetComponent*                       Param_WidgetComponent;                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TutorialQuest3DTracker_C_SetWidgetComponent) == 0x000008, "Wrong alignment on WBP_TutorialQuest3DTracker_C_SetWidgetComponent");
static_assert(sizeof(WBP_TutorialQuest3DTracker_C_SetWidgetComponent) == 0x000008, "Wrong size on WBP_TutorialQuest3DTracker_C_SetWidgetComponent");
static_assert(offsetof(WBP_TutorialQuest3DTracker_C_SetWidgetComponent, Param_WidgetComponent) == 0x000000, "Member 'WBP_TutorialQuest3DTracker_C_SetWidgetComponent::Param_WidgetComponent' has a wrong offset!");

}

