#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PlayerName3DWidget

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_PlayerName3DWidget.WBP_PlayerName3DWidget_C.3DMemberVisibility
// 0x0030 (0x0030 - 0x0000)
struct WBP_PlayerName3DWidget_C_ThreeDMemberVisibility final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASurvPC_C*                              K2Node_DynamicCast_AsSurv_PC;                      // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APS_TDB_C*                              K2Node_DynamicCast_AsPS_TDB;                       // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerName3DWidget_C_ThreeDMemberVisibility) == 0x000008, "Wrong alignment on WBP_PlayerName3DWidget_C_ThreeDMemberVisibility");
static_assert(sizeof(WBP_PlayerName3DWidget_C_ThreeDMemberVisibility) == 0x000030, "Wrong size on WBP_PlayerName3DWidget_C_ThreeDMemberVisibility");
static_assert(offsetof(WBP_PlayerName3DWidget_C_ThreeDMemberVisibility, Temp_bool_Variable) == 0x000000, "Member 'WBP_PlayerName3DWidget_C_ThreeDMemberVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_ThreeDMemberVisibility, Temp_byte_Variable) == 0x000001, "Member 'WBP_PlayerName3DWidget_C_ThreeDMemberVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_ThreeDMemberVisibility, Temp_byte_Variable_1) == 0x000002, "Member 'WBP_PlayerName3DWidget_C_ThreeDMemberVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_ThreeDMemberVisibility, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'WBP_PlayerName3DWidget_C_ThreeDMemberVisibility::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_ThreeDMemberVisibility, K2Node_DynamicCast_AsSurv_PC) == 0x000010, "Member 'WBP_PlayerName3DWidget_C_ThreeDMemberVisibility::K2Node_DynamicCast_AsSurv_PC' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_ThreeDMemberVisibility, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_PlayerName3DWidget_C_ThreeDMemberVisibility::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_ThreeDMemberVisibility, K2Node_DynamicCast_AsPS_TDB) == 0x000020, "Member 'WBP_PlayerName3DWidget_C_ThreeDMemberVisibility::K2Node_DynamicCast_AsPS_TDB' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_ThreeDMemberVisibility, K2Node_DynamicCast_bSuccess_1) == 0x000028, "Member 'WBP_PlayerName3DWidget_C_ThreeDMemberVisibility::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_ThreeDMemberVisibility, CallFunc_Greater_IntInt_ReturnValue) == 0x000029, "Member 'WBP_PlayerName3DWidget_C_ThreeDMemberVisibility::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_ThreeDMemberVisibility, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00002A, "Member 'WBP_PlayerName3DWidget_C_ThreeDMemberVisibility::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_ThreeDMemberVisibility, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00002B, "Member 'WBP_PlayerName3DWidget_C_ThreeDMemberVisibility::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_ThreeDMemberVisibility, CallFunc_BooleanOR_ReturnValue) == 0x00002C, "Member 'WBP_PlayerName3DWidget_C_ThreeDMemberVisibility::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_ThreeDMemberVisibility, CallFunc_BooleanAND_ReturnValue) == 0x00002D, "Member 'WBP_PlayerName3DWidget_C_ThreeDMemberVisibility::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_ThreeDMemberVisibility, K2Node_Select_Default) == 0x00002E, "Member 'WBP_PlayerName3DWidget_C_ThreeDMemberVisibility::K2Node_Select_Default' has a wrong offset!");

// Function WBP_PlayerName3DWidget.WBP_PlayerName3DWidget_C.Bind
// 0x0010 (0x0010 - 0x0000)
struct WBP_PlayerName3DWidget_C_Bind final
{
public:
	TDelegate<void(class AActor* Other_Actor_Ref)> K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerName3DWidget_C_Bind) == 0x000004, "Wrong alignment on WBP_PlayerName3DWidget_C_Bind");
static_assert(sizeof(WBP_PlayerName3DWidget_C_Bind) == 0x000010, "Wrong size on WBP_PlayerName3DWidget_C_Bind");
static_assert(offsetof(WBP_PlayerName3DWidget_C_Bind, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_PlayerName3DWidget_C_Bind::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function WBP_PlayerName3DWidget.WBP_PlayerName3DWidget_C.CheckStat
// 0x0005 (0x0005 - 0x0000)
struct WBP_PlayerName3DWidget_C_CheckStat final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsWithEditor_ReturnValue;                 // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default;                             // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerName3DWidget_C_CheckStat) == 0x000001, "Wrong alignment on WBP_PlayerName3DWidget_C_CheckStat");
static_assert(sizeof(WBP_PlayerName3DWidget_C_CheckStat) == 0x000005, "Wrong size on WBP_PlayerName3DWidget_C_CheckStat");
static_assert(offsetof(WBP_PlayerName3DWidget_C_CheckStat, Temp_bool_Variable) == 0x000000, "Member 'WBP_PlayerName3DWidget_C_CheckStat::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_CheckStat, Temp_bool_Variable_1) == 0x000001, "Member 'WBP_PlayerName3DWidget_C_CheckStat::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_CheckStat, CallFunc_IsWithEditor_ReturnValue) == 0x000002, "Member 'WBP_PlayerName3DWidget_C_CheckStat::CallFunc_IsWithEditor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_CheckStat, K2Node_Select_Default) == 0x000003, "Member 'WBP_PlayerName3DWidget_C_CheckStat::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_CheckStat, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'WBP_PlayerName3DWidget_C_CheckStat::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_PlayerName3DWidget.WBP_PlayerName3DWidget_C.ExecuteUbergraph_WBP_PlayerName3DWidget
// 0x0090 (0x0090 - 0x0000)
struct WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_Chat_text;                      // 0x0008(0x0018)()
	class FText                                   K2Node_CustomEvent_Sender_;                        // 0x0020(0x0018)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0038(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASurvPC_C*                              K2Node_DynamicCast_AsSurv_PC;                      // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APS_TDB_C*                              K2Node_DynamicCast_AsPS_TDB;                       // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72[0x6];                                       // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASurvivalPlayer_Test_C*                 K2Node_DynamicCast_AsSurvival_Player_Test;         // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x3];                                       // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default;                             // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget) == 0x000008, "Wrong alignment on WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget");
static_assert(sizeof(WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget) == 0x000090, "Wrong size on WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget");
static_assert(offsetof(WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget, EntryPoint) == 0x000000, "Member 'WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget, Temp_bool_Variable) == 0x000004, "Member 'WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget, Temp_bool_Variable_1) == 0x000005, "Member 'WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget, Temp_bool_Variable_2) == 0x000006, "Member 'WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget, K2Node_CustomEvent_Chat_text) == 0x000008, "Member 'WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget::K2Node_CustomEvent_Chat_text' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget, K2Node_CustomEvent_Sender_) == 0x000020, "Member 'WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget::K2Node_CustomEvent_Sender_' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000038, "Member 'WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget, CallFunc_GetPlayerController_ReturnValue) == 0x000050, "Member 'WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget, K2Node_DynamicCast_AsSurv_PC) == 0x000058, "Member 'WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget::K2Node_DynamicCast_AsSurv_PC' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget, K2Node_DynamicCast_AsPS_TDB) == 0x000068, "Member 'WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget::K2Node_DynamicCast_AsPS_TDB' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget, K2Node_DynamicCast_bSuccess_1) == 0x000070, "Member 'WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000071, "Member 'WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget, K2Node_DynamicCast_AsSurvival_Player_Test) == 0x000078, "Member 'WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget::K2Node_DynamicCast_AsSurvival_Player_Test' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget, K2Node_DynamicCast_bSuccess_2) == 0x000080, "Member 'WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget, CallFunc_Array_Find_ReturnValue) == 0x000084, "Member 'WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x000088, "Member 'WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget, CallFunc_BooleanAND_ReturnValue) == 0x000089, "Member 'WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget, K2Node_Select_Default) == 0x00008A, "Member 'WBP_PlayerName3DWidget_C_ExecuteUbergraph_WBP_PlayerName3DWidget::K2Node_Select_Default' has a wrong offset!");

// Function WBP_PlayerName3DWidget.WBP_PlayerName3DWidget_C.GetAliases
// 0x0038 (0x0038 - 0x0000)
struct WBP_PlayerName3DWidget_C_GetAliases final
{
public:
	class FString                                 Result;                                            // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0010(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerName3DWidget_C_GetAliases) == 0x000008, "Wrong alignment on WBP_PlayerName3DWidget_C_GetAliases");
static_assert(sizeof(WBP_PlayerName3DWidget_C_GetAliases) == 0x000038, "Wrong size on WBP_PlayerName3DWidget_C_GetAliases");
static_assert(offsetof(WBP_PlayerName3DWidget_C_GetAliases, Result) == 0x000000, "Member 'WBP_PlayerName3DWidget_C_GetAliases::Result' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_GetAliases, CallFunc_GetText_ReturnValue) == 0x000010, "Member 'WBP_PlayerName3DWidget_C_GetAliases::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_GetAliases, CallFunc_Conv_TextToString_ReturnValue) == 0x000028, "Member 'WBP_PlayerName3DWidget_C_GetAliases::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

// Function WBP_PlayerName3DWidget.WBP_PlayerName3DWidget_C.HideChat
// 0x0008 (0x0008 - 0x0000)
struct WBP_PlayerName3DWidget_C_HideChat final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerName3DWidget_C_HideChat) == 0x000008, "Wrong alignment on WBP_PlayerName3DWidget_C_HideChat");
static_assert(sizeof(WBP_PlayerName3DWidget_C_HideChat) == 0x000008, "Wrong size on WBP_PlayerName3DWidget_C_HideChat");
static_assert(offsetof(WBP_PlayerName3DWidget_C_HideChat, Actor) == 0x000000, "Member 'WBP_PlayerName3DWidget_C_HideChat::Actor' has a wrong offset!");

// Function WBP_PlayerName3DWidget.WBP_PlayerName3DWidget_C.IsHaveName
// 0x0001 (0x0001 - 0x0000)
struct WBP_PlayerName3DWidget_C_IsHaveName final
{
public:
	bool                                          Have;                                              // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerName3DWidget_C_IsHaveName) == 0x000001, "Wrong alignment on WBP_PlayerName3DWidget_C_IsHaveName");
static_assert(sizeof(WBP_PlayerName3DWidget_C_IsHaveName) == 0x000001, "Wrong size on WBP_PlayerName3DWidget_C_IsHaveName");
static_assert(offsetof(WBP_PlayerName3DWidget_C_IsHaveName, Have) == 0x000000, "Member 'WBP_PlayerName3DWidget_C_IsHaveName::Have' has a wrong offset!");

// Function WBP_PlayerName3DWidget.WBP_PlayerName3DWidget_C.OnColorPlayerName__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WBP_PlayerName3DWidget_C_OnColorPlayerName__DelegateSignature final
{
public:
	bool                                          IsSquad;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerName3DWidget_C_OnColorPlayerName__DelegateSignature) == 0x000001, "Wrong alignment on WBP_PlayerName3DWidget_C_OnColorPlayerName__DelegateSignature");
static_assert(sizeof(WBP_PlayerName3DWidget_C_OnColorPlayerName__DelegateSignature) == 0x000001, "Wrong size on WBP_PlayerName3DWidget_C_OnColorPlayerName__DelegateSignature");
static_assert(offsetof(WBP_PlayerName3DWidget_C_OnColorPlayerName__DelegateSignature, IsSquad) == 0x000000, "Member 'WBP_PlayerName3DWidget_C_OnColorPlayerName__DelegateSignature::IsSquad' has a wrong offset!");

// Function WBP_PlayerName3DWidget.WBP_PlayerName3DWidget_C.SavePlayerState
// 0x0008 (0x0008 - 0x0000)
struct WBP_PlayerName3DWidget_C_SavePlayerState final
{
public:
	class APS_TDB_C*                              PlayerState;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerName3DWidget_C_SavePlayerState) == 0x000008, "Wrong alignment on WBP_PlayerName3DWidget_C_SavePlayerState");
static_assert(sizeof(WBP_PlayerName3DWidget_C_SavePlayerState) == 0x000008, "Wrong size on WBP_PlayerName3DWidget_C_SavePlayerState");
static_assert(offsetof(WBP_PlayerName3DWidget_C_SavePlayerState, PlayerState) == 0x000000, "Member 'WBP_PlayerName3DWidget_C_SavePlayerState::PlayerState' has a wrong offset!");

// Function WBP_PlayerName3DWidget.WBP_PlayerName3DWidget_C.Set3DMember
// 0x0010 (0x0010 - 0x0000)
struct WBP_PlayerName3DWidget_C_Set3DMember final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0008(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerName3DWidget_C_Set3DMember) == 0x000008, "Wrong alignment on WBP_PlayerName3DWidget_C_Set3DMember");
static_assert(sizeof(WBP_PlayerName3DWidget_C_Set3DMember) == 0x000010, "Wrong size on WBP_PlayerName3DWidget_C_Set3DMember");
static_assert(offsetof(WBP_PlayerName3DWidget_C_Set3DMember, Param_Index) == 0x000000, "Member 'WBP_PlayerName3DWidget_C_Set3DMember::Param_Index' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_Set3DMember, CallFunc_K2_SetTimer_ReturnValue) == 0x000008, "Member 'WBP_PlayerName3DWidget_C_Set3DMember::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");

// Function WBP_PlayerName3DWidget.WBP_PlayerName3DWidget_C.SetAliases
// 0x0028 (0x0028 - 0x0000)
struct WBP_PlayerName3DWidget_C_SetAliases final
{
public:
	class FString                                 InString;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(WBP_PlayerName3DWidget_C_SetAliases) == 0x000008, "Wrong alignment on WBP_PlayerName3DWidget_C_SetAliases");
static_assert(sizeof(WBP_PlayerName3DWidget_C_SetAliases) == 0x000028, "Wrong size on WBP_PlayerName3DWidget_C_SetAliases");
static_assert(offsetof(WBP_PlayerName3DWidget_C_SetAliases, InString) == 0x000000, "Member 'WBP_PlayerName3DWidget_C_SetAliases::InString' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_SetAliases, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'WBP_PlayerName3DWidget_C_SetAliases::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function WBP_PlayerName3DWidget.WBP_PlayerName3DWidget_C.SetColor
// 0x0040 (0x0040 - 0x0000)
struct WBP_PlayerName3DWidget_C_SetColor final
{
public:
	bool                                          Param_Index;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0004(0x0014)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0018(0x0014)()
	struct FSlateColor                            K2Node_Select_Default;                             // 0x002C(0x0014)()
};
static_assert(alignof(WBP_PlayerName3DWidget_C_SetColor) == 0x000004, "Wrong alignment on WBP_PlayerName3DWidget_C_SetColor");
static_assert(sizeof(WBP_PlayerName3DWidget_C_SetColor) == 0x000040, "Wrong size on WBP_PlayerName3DWidget_C_SetColor");
static_assert(offsetof(WBP_PlayerName3DWidget_C_SetColor, Param_Index) == 0x000000, "Member 'WBP_PlayerName3DWidget_C_SetColor::Param_Index' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_SetColor, Temp_bool_Variable) == 0x000001, "Member 'WBP_PlayerName3DWidget_C_SetColor::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_SetColor, K2Node_MakeStruct_SlateColor) == 0x000004, "Member 'WBP_PlayerName3DWidget_C_SetColor::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_SetColor, K2Node_MakeStruct_SlateColor_1) == 0x000018, "Member 'WBP_PlayerName3DWidget_C_SetColor::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_SetColor, K2Node_Select_Default) == 0x00002C, "Member 'WBP_PlayerName3DWidget_C_SetColor::K2Node_Select_Default' has a wrong offset!");

// Function WBP_PlayerName3DWidget.WBP_PlayerName3DWidget_C.SetPlayerName
// 0x0018 (0x0018 - 0x0000)
struct WBP_PlayerName3DWidget_C_SetPlayerName final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_PlayerName3DWidget_C_SetPlayerName) == 0x000008, "Wrong alignment on WBP_PlayerName3DWidget_C_SetPlayerName");
static_assert(sizeof(WBP_PlayerName3DWidget_C_SetPlayerName) == 0x000018, "Wrong size on WBP_PlayerName3DWidget_C_SetPlayerName");
static_assert(offsetof(WBP_PlayerName3DWidget_C_SetPlayerName, InText) == 0x000000, "Member 'WBP_PlayerName3DWidget_C_SetPlayerName::InText' has a wrong offset!");

// Function WBP_PlayerName3DWidget.WBP_PlayerName3DWidget_C.Show 
// 0x0018 (0x0018 - 0x0000)
struct WBP_PlayerName3DWidget_C_Show_ final
{
public:
	bool                                          Param_Show;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerName3DWidget_C_Show_) == 0x000008, "Wrong alignment on WBP_PlayerName3DWidget_C_Show_");
static_assert(sizeof(WBP_PlayerName3DWidget_C_Show_) == 0x000018, "Wrong size on WBP_PlayerName3DWidget_C_Show_");
static_assert(offsetof(WBP_PlayerName3DWidget_C_Show_, Param_Show) == 0x000000, "Member 'WBP_PlayerName3DWidget_C_Show_::Param_Show' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_Show_, Temp_bool_Variable) == 0x000001, "Member 'WBP_PlayerName3DWidget_C_Show_::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_Show_, Temp_byte_Variable) == 0x000002, "Member 'WBP_PlayerName3DWidget_C_Show_::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_Show_, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_PlayerName3DWidget_C_Show_::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_Show_, K2Node_Select_Default) == 0x000004, "Member 'WBP_PlayerName3DWidget_C_Show_::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_Show_, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_PlayerName3DWidget_C_Show_::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_Show_, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000010, "Member 'WBP_PlayerName3DWidget_C_Show_::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

// Function WBP_PlayerName3DWidget.WBP_PlayerName3DWidget_C.ShowChat
// 0x0008 (0x0008 - 0x0000)
struct WBP_PlayerName3DWidget_C_ShowChat final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerName3DWidget_C_ShowChat) == 0x000008, "Wrong alignment on WBP_PlayerName3DWidget_C_ShowChat");
static_assert(sizeof(WBP_PlayerName3DWidget_C_ShowChat) == 0x000008, "Wrong size on WBP_PlayerName3DWidget_C_ShowChat");
static_assert(offsetof(WBP_PlayerName3DWidget_C_ShowChat, Actor) == 0x000000, "Member 'WBP_PlayerName3DWidget_C_ShowChat::Actor' has a wrong offset!");

// Function WBP_PlayerName3DWidget.WBP_PlayerName3DWidget_C.UpdateChat
// 0x0030 (0x0030 - 0x0000)
struct WBP_PlayerName3DWidget_C_UpdateChat final
{
public:
	class FText                                   Chat_text;                                         // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   Sender_;                                           // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_PlayerName3DWidget_C_UpdateChat) == 0x000008, "Wrong alignment on WBP_PlayerName3DWidget_C_UpdateChat");
static_assert(sizeof(WBP_PlayerName3DWidget_C_UpdateChat) == 0x000030, "Wrong size on WBP_PlayerName3DWidget_C_UpdateChat");
static_assert(offsetof(WBP_PlayerName3DWidget_C_UpdateChat, Chat_text) == 0x000000, "Member 'WBP_PlayerName3DWidget_C_UpdateChat::Chat_text' has a wrong offset!");
static_assert(offsetof(WBP_PlayerName3DWidget_C_UpdateChat, Sender_) == 0x000018, "Member 'WBP_PlayerName3DWidget_C_UpdateChat::Sender_' has a wrong offset!");

}

