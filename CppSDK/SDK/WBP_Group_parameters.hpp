#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Group

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_Group.WBP_Group_C.BindEmptyClick
// 0x0008 (0x0008 - 0x0000)
struct WBP_Group_C_BindEmptyClick final
{
public:
	class UW_PauseMenu_C*                         PauseWidget;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Group_C_BindEmptyClick) == 0x000008, "Wrong alignment on WBP_Group_C_BindEmptyClick");
static_assert(sizeof(WBP_Group_C_BindEmptyClick) == 0x000008, "Wrong size on WBP_Group_C_BindEmptyClick");
static_assert(offsetof(WBP_Group_C_BindEmptyClick, PauseWidget) == 0x000000, "Member 'WBP_Group_C_BindEmptyClick::PauseWidget' has a wrong offset!");

// Function WBP_Group.WBP_Group_C.ExecuteUbergraph_WBP_Group
// 0x0190 (0x0190 - 0x0000)
struct WBP_Group_C_ExecuteUbergraph_WBP_Group final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16[0x2];                                       // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x2];                                       // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x002C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Show_1;                         // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue_1;                // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Show;                           // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue_1;          // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53[0x1];                                       // 0x0053(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0054(0x0038)(IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;                         // 0x0090(0x0078)(ConstParm)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x0108(0x0078)(ConstParm)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0182(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_183[0x5];                                      // 0x0183(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_PauseMenu_C*                         K2Node_CustomEvent_PauseWidget;                    // 0x0188(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Group_C_ExecuteUbergraph_WBP_Group) == 0x000008, "Wrong alignment on WBP_Group_C_ExecuteUbergraph_WBP_Group");
static_assert(sizeof(WBP_Group_C_ExecuteUbergraph_WBP_Group) == 0x000190, "Wrong size on WBP_Group_C_ExecuteUbergraph_WBP_Group");
static_assert(offsetof(WBP_Group_C_ExecuteUbergraph_WBP_Group, EntryPoint) == 0x000000, "Member 'WBP_Group_C_ExecuteUbergraph_WBP_Group::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_ExecuteUbergraph_WBP_Group, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_Group_C_ExecuteUbergraph_WBP_Group::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_ExecuteUbergraph_WBP_Group, CallFunc_Not_PreBool_ReturnValue) == 0x000014, "Member 'WBP_Group_C_ExecuteUbergraph_WBP_Group::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_ExecuteUbergraph_WBP_Group, K2Node_Event_IsDesignTime) == 0x000015, "Member 'WBP_Group_C_ExecuteUbergraph_WBP_Group::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_ExecuteUbergraph_WBP_Group, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'WBP_Group_C_ExecuteUbergraph_WBP_Group::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_ExecuteUbergraph_WBP_Group, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'WBP_Group_C_ExecuteUbergraph_WBP_Group::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_ExecuteUbergraph_WBP_Group, CallFunc_Not_PreBool_ReturnValue_1) == 0x000029, "Member 'WBP_Group_C_ExecuteUbergraph_WBP_Group::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_ExecuteUbergraph_WBP_Group, CallFunc_SelectColor_ReturnValue) == 0x00002C, "Member 'WBP_Group_C_ExecuteUbergraph_WBP_Group::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_ExecuteUbergraph_WBP_Group, K2Node_CustomEvent_Show_1) == 0x00003C, "Member 'WBP_Group_C_ExecuteUbergraph_WBP_Group::K2Node_CustomEvent_Show_1' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_ExecuteUbergraph_WBP_Group, CallFunc_SelectColor_ReturnValue_1) == 0x000040, "Member 'WBP_Group_C_ExecuteUbergraph_WBP_Group::CallFunc_SelectColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_ExecuteUbergraph_WBP_Group, K2Node_CustomEvent_Show) == 0x000050, "Member 'WBP_Group_C_ExecuteUbergraph_WBP_Group::K2Node_CustomEvent_Show' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_ExecuteUbergraph_WBP_Group, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000051, "Member 'WBP_Group_C_ExecuteUbergraph_WBP_Group::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_ExecuteUbergraph_WBP_Group, CallFunc_NotEqual_BoolBool_ReturnValue_1) == 0x000052, "Member 'WBP_Group_C_ExecuteUbergraph_WBP_Group::CallFunc_NotEqual_BoolBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_ExecuteUbergraph_WBP_Group, K2Node_Event_MyGeometry) == 0x000054, "Member 'WBP_Group_C_ExecuteUbergraph_WBP_Group::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_ExecuteUbergraph_WBP_Group, K2Node_Event_MouseEvent_1) == 0x000090, "Member 'WBP_Group_C_ExecuteUbergraph_WBP_Group::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_ExecuteUbergraph_WBP_Group, K2Node_Event_MouseEvent) == 0x000108, "Member 'WBP_Group_C_ExecuteUbergraph_WBP_Group::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_ExecuteUbergraph_WBP_Group, CallFunc_Not_PreBool_ReturnValue_2) == 0x000180, "Member 'WBP_Group_C_ExecuteUbergraph_WBP_Group::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_ExecuteUbergraph_WBP_Group, CallFunc_Not_PreBool_ReturnValue_3) == 0x000181, "Member 'WBP_Group_C_ExecuteUbergraph_WBP_Group::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_ExecuteUbergraph_WBP_Group, CallFunc_BooleanAND_ReturnValue) == 0x000182, "Member 'WBP_Group_C_ExecuteUbergraph_WBP_Group::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_ExecuteUbergraph_WBP_Group, K2Node_CustomEvent_PauseWidget) == 0x000188, "Member 'WBP_Group_C_ExecuteUbergraph_WBP_Group::K2Node_CustomEvent_PauseWidget' has a wrong offset!");

// Function WBP_Group.WBP_Group_C.ExpandHover
// 0x0020 (0x0020 - 0x0000)
struct WBP_Group_C_ExpandHover final
{
public:
	bool                                          Show;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;  // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetMaxDesiredHeight_InMaxDesiredHeight_ImplicitCast; // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Group_C_ExpandHover) == 0x000008, "Wrong alignment on WBP_Group_C_ExpandHover");
static_assert(sizeof(WBP_Group_C_ExpandHover) == 0x000020, "Wrong size on WBP_Group_C_ExpandHover");
static_assert(offsetof(WBP_Group_C_ExpandHover, Show) == 0x000000, "Member 'WBP_Group_C_ExpandHover::Show' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_ExpandHover, CallFunc_SelectFloat_ReturnValue) == 0x000008, "Member 'WBP_Group_C_ExpandHover::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_ExpandHover, CallFunc_SelectFloat_ReturnValue_1) == 0x000010, "Member 'WBP_Group_C_ExpandHover::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_ExpandHover, CallFunc_SetRenderOpacity_InOpacity_ImplicitCast) == 0x000018, "Member 'WBP_Group_C_ExpandHover::CallFunc_SetRenderOpacity_InOpacity_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_ExpandHover, CallFunc_SetMaxDesiredHeight_InMaxDesiredHeight_ImplicitCast) == 0x00001C, "Member 'WBP_Group_C_ExpandHover::CallFunc_SetMaxDesiredHeight_InMaxDesiredHeight_ImplicitCast' has a wrong offset!");

// Function WBP_Group.WBP_Group_C.ExpandOption
// 0x0018 (0x0018 - 0x0000)
struct WBP_Group_C_ExpandOption final
{
public:
	bool                                          Show;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetMaxDesiredHeight_InMaxDesiredHeight_ImplicitCast; // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Group_C_ExpandOption) == 0x000008, "Wrong alignment on WBP_Group_C_ExpandOption");
static_assert(sizeof(WBP_Group_C_ExpandOption) == 0x000018, "Wrong size on WBP_Group_C_ExpandOption");
static_assert(offsetof(WBP_Group_C_ExpandOption, Show) == 0x000000, "Member 'WBP_Group_C_ExpandOption::Show' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_ExpandOption, CallFunc_SelectFloat_ReturnValue) == 0x000008, "Member 'WBP_Group_C_ExpandOption::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_ExpandOption, CallFunc_SetMaxDesiredHeight_InMaxDesiredHeight_ImplicitCast) == 0x000010, "Member 'WBP_Group_C_ExpandOption::CallFunc_SetMaxDesiredHeight_InMaxDesiredHeight_ImplicitCast' has a wrong offset!");

// Function WBP_Group.WBP_Group_C.GetEmpty
// 0x0001 (0x0001 - 0x0000)
struct WBP_Group_C_GetEmpty final
{
public:
	bool                                          Param_IsEmpty;                                     // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Group_C_GetEmpty) == 0x000001, "Wrong alignment on WBP_Group_C_GetEmpty");
static_assert(sizeof(WBP_Group_C_GetEmpty) == 0x000001, "Wrong size on WBP_Group_C_GetEmpty");
static_assert(offsetof(WBP_Group_C_GetEmpty, Param_IsEmpty) == 0x000000, "Member 'WBP_Group_C_GetEmpty::Param_IsEmpty' has a wrong offset!");

// Function WBP_Group.WBP_Group_C.GetIsOptionShowed
// 0x0001 (0x0001 - 0x0000)
struct WBP_Group_C_GetIsOptionShowed final
{
public:
	bool                                          Param_OptionsShowed;                               // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Group_C_GetIsOptionShowed) == 0x000001, "Wrong alignment on WBP_Group_C_GetIsOptionShowed");
static_assert(sizeof(WBP_Group_C_GetIsOptionShowed) == 0x000001, "Wrong size on WBP_Group_C_GetIsOptionShowed");
static_assert(offsetof(WBP_Group_C_GetIsOptionShowed, Param_OptionsShowed) == 0x000000, "Member 'WBP_Group_C_GetIsOptionShowed::Param_OptionsShowed' has a wrong offset!");

// Function WBP_Group.WBP_Group_C.GetPlayerState
// 0x0008 (0x0008 - 0x0000)
struct WBP_Group_C_GetPlayerState final
{
public:
	class APS_TDB_C*                              Param_PlayerState;                                 // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Group_C_GetPlayerState) == 0x000008, "Wrong alignment on WBP_Group_C_GetPlayerState");
static_assert(sizeof(WBP_Group_C_GetPlayerState) == 0x000008, "Wrong size on WBP_Group_C_GetPlayerState");
static_assert(offsetof(WBP_Group_C_GetPlayerState, Param_PlayerState) == 0x000000, "Member 'WBP_Group_C_GetPlayerState::Param_PlayerState' has a wrong offset!");

// Function WBP_Group.WBP_Group_C.GetSolo
// 0x0001 (0x0001 - 0x0000)
struct WBP_Group_C_GetSolo final
{
public:
	bool                                          Param_Solo;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Group_C_GetSolo) == 0x000001, "Wrong alignment on WBP_Group_C_GetSolo");
static_assert(sizeof(WBP_Group_C_GetSolo) == 0x000001, "Wrong size on WBP_Group_C_GetSolo");
static_assert(offsetof(WBP_Group_C_GetSolo, Param_Solo) == 0x000000, "Member 'WBP_Group_C_GetSolo::Param_Solo' has a wrong offset!");

// Function WBP_Group.WBP_Group_C.Init
// 0x0090 (0x0090 - 0x0000)
struct WBP_Group_C_Init final
{
public:
	class APS_TDB_C*                              Param_PlayerState;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          bSolo;                                             // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bEmpty;                                            // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E[0x2];                                        // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0040(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0058(0x0018)()
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_73[0x1];                                       // 0x0073(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0074(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0085(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0086(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_87[0x1];                                       // 0x0087(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Group_C_Init) == 0x000008, "Wrong alignment on WBP_Group_C_Init");
static_assert(sizeof(WBP_Group_C_Init) == 0x000090, "Wrong size on WBP_Group_C_Init");
static_assert(offsetof(WBP_Group_C_Init, Param_PlayerState) == 0x000000, "Member 'WBP_Group_C_Init::Param_PlayerState' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_Init, bSolo) == 0x000008, "Member 'WBP_Group_C_Init::bSolo' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_Init, bEmpty) == 0x000009, "Member 'WBP_Group_C_Init::bEmpty' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_Init, Temp_byte_Variable) == 0x00000A, "Member 'WBP_Group_C_Init::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_Init, Temp_byte_Variable_1) == 0x00000B, "Member 'WBP_Group_C_Init::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_Init, Temp_bool_Variable) == 0x00000C, "Member 'WBP_Group_C_Init::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_Init, Temp_bool_Variable_1) == 0x00000D, "Member 'WBP_Group_C_Init::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_Init, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'WBP_Group_C_Init::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_Init, CallFunc_GetDisplayName_ReturnValue) == 0x000028, "Member 'WBP_Group_C_Init::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_Init, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'WBP_Group_C_Init::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_Init, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000040, "Member 'WBP_Group_C_Init::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_Init, K2Node_Select_Default) == 0x000058, "Member 'WBP_Group_C_Init::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_Init, Temp_byte_Variable_2) == 0x000070, "Member 'WBP_Group_C_Init::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_Init, Temp_byte_Variable_3) == 0x000071, "Member 'WBP_Group_C_Init::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_Init, K2Node_Select_Default_1) == 0x000072, "Member 'WBP_Group_C_Init::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_Init, K2Node_CreateDelegate_OutputDelegate) == 0x000074, "Member 'WBP_Group_C_Init::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_Init, Temp_bool_Variable_2) == 0x000084, "Member 'WBP_Group_C_Init::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_Init, K2Node_Select_Default_2) == 0x000085, "Member 'WBP_Group_C_Init::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_Init, CallFunc_Not_PreBool_ReturnValue) == 0x000086, "Member 'WBP_Group_C_Init::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_Init, CallFunc_SelectInt_ReturnValue) == 0x000088, "Member 'WBP_Group_C_Init::CallFunc_SelectInt_ReturnValue' has a wrong offset!");

// Function WBP_Group.WBP_Group_C.InitOptionsButtons
// 0x0030 (0x0030 - 0x0000)
struct WBP_Group_C_InitOptionsButtons final
{
public:
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APS_TDB_C*                              K2Node_DynamicCast_AsPS_TDB;                       // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Group_C_InitOptionsButtons) == 0x000008, "Wrong alignment on WBP_Group_C_InitOptionsButtons");
static_assert(sizeof(WBP_Group_C_InitOptionsButtons) == 0x000030, "Wrong size on WBP_Group_C_InitOptionsButtons");
static_assert(offsetof(WBP_Group_C_InitOptionsButtons, CallFunc_Not_PreBool_ReturnValue) == 0x000000, "Member 'WBP_Group_C_InitOptionsButtons::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_InitOptionsButtons, CallFunc_Not_PreBool_ReturnValue_1) == 0x000001, "Member 'WBP_Group_C_InitOptionsButtons::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_InitOptionsButtons, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'WBP_Group_C_InitOptionsButtons::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_InitOptionsButtons, CallFunc_BooleanAND_ReturnValue) == 0x000010, "Member 'WBP_Group_C_InitOptionsButtons::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_InitOptionsButtons, K2Node_DynamicCast_AsPS_TDB) == 0x000018, "Member 'WBP_Group_C_InitOptionsButtons::K2Node_DynamicCast_AsPS_TDB' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_InitOptionsButtons, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WBP_Group_C_InitOptionsButtons::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_InitOptionsButtons, CallFunc_SelectInt_ReturnValue) == 0x000024, "Member 'WBP_Group_C_InitOptionsButtons::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_InitOptionsButtons, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000028, "Member 'WBP_Group_C_InitOptionsButtons::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function WBP_Group.WBP_Group_C.OnClickedExit__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_Group_C_OnClickedExit__DelegateSignature final
{
public:
	class APS_TDB_C*                              Param_PlayerState;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Group_C_OnClickedExit__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Group_C_OnClickedExit__DelegateSignature");
static_assert(sizeof(WBP_Group_C_OnClickedExit__DelegateSignature) == 0x000008, "Wrong size on WBP_Group_C_OnClickedExit__DelegateSignature");
static_assert(offsetof(WBP_Group_C_OnClickedExit__DelegateSignature, Param_PlayerState) == 0x000000, "Member 'WBP_Group_C_OnClickedExit__DelegateSignature::Param_PlayerState' has a wrong offset!");

// Function WBP_Group.WBP_Group_C.OnClickedKick__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_Group_C_OnClickedKick__DelegateSignature final
{
public:
	class APS_TDB_C*                              Param_PlayerState;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Group_C_OnClickedKick__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Group_C_OnClickedKick__DelegateSignature");
static_assert(sizeof(WBP_Group_C_OnClickedKick__DelegateSignature) == 0x000008, "Wrong size on WBP_Group_C_OnClickedKick__DelegateSignature");
static_assert(offsetof(WBP_Group_C_OnClickedKick__DelegateSignature, Param_PlayerState) == 0x000000, "Member 'WBP_Group_C_OnClickedKick__DelegateSignature::Param_PlayerState' has a wrong offset!");

// Function WBP_Group.WBP_Group_C.OnClickOptions__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_Group_C_OnClickOptions__DelegateSignature final
{
public:
	class UWBP_Group_C*                           GroupEntry;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Group_C_OnClickOptions__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Group_C_OnClickOptions__DelegateSignature");
static_assert(sizeof(WBP_Group_C_OnClickOptions__DelegateSignature) == 0x000008, "Wrong size on WBP_Group_C_OnClickOptions__DelegateSignature");
static_assert(offsetof(WBP_Group_C_OnClickOptions__DelegateSignature, GroupEntry) == 0x000000, "Member 'WBP_Group_C_OnClickOptions__DelegateSignature::GroupEntry' has a wrong offset!");

// Function WBP_Group.WBP_Group_C.OnHovered__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_Group_C_OnHovered__DelegateSignature final
{
public:
	class UWBP_Group_C*                           Ref;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Group_C_OnHovered__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Group_C_OnHovered__DelegateSignature");
static_assert(sizeof(WBP_Group_C_OnHovered__DelegateSignature) == 0x000008, "Wrong size on WBP_Group_C_OnHovered__DelegateSignature");
static_assert(offsetof(WBP_Group_C_OnHovered__DelegateSignature, Ref) == 0x000000, "Member 'WBP_Group_C_OnHovered__DelegateSignature::Ref' has a wrong offset!");

// Function WBP_Group.WBP_Group_C.OnMakeLeader__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_Group_C_OnMakeLeader__DelegateSignature final
{
public:
	class APS_TDB_C*                              Param_PlayerState;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Group_C_OnMakeLeader__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Group_C_OnMakeLeader__DelegateSignature");
static_assert(sizeof(WBP_Group_C_OnMakeLeader__DelegateSignature) == 0x000008, "Wrong size on WBP_Group_C_OnMakeLeader__DelegateSignature");
static_assert(offsetof(WBP_Group_C_OnMakeLeader__DelegateSignature, Param_PlayerState) == 0x000000, "Member 'WBP_Group_C_OnMakeLeader__DelegateSignature::Param_PlayerState' has a wrong offset!");

// Function WBP_Group.WBP_Group_C.OnMouseEnter
// 0x00B0 (0x00B0 - 0x0000)
struct WBP_Group_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_Group_C_OnMouseEnter) == 0x000008, "Wrong alignment on WBP_Group_C_OnMouseEnter");
static_assert(sizeof(WBP_Group_C_OnMouseEnter) == 0x0000B0, "Wrong size on WBP_Group_C_OnMouseEnter");
static_assert(offsetof(WBP_Group_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'WBP_Group_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'WBP_Group_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function WBP_Group.WBP_Group_C.OnMouseLeave
// 0x0078 (0x0078 - 0x0000)
struct WBP_Group_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_Group_C_OnMouseLeave) == 0x000008, "Wrong alignment on WBP_Group_C_OnMouseLeave");
static_assert(sizeof(WBP_Group_C_OnMouseLeave) == 0x000078, "Wrong size on WBP_Group_C_OnMouseLeave");
static_assert(offsetof(WBP_Group_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'WBP_Group_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function WBP_Group.WBP_Group_C.OnUnhovered__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_Group_C_OnUnhovered__DelegateSignature final
{
public:
	class UWBP_Group_C*                           Ref;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Group_C_OnUnhovered__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Group_C_OnUnhovered__DelegateSignature");
static_assert(sizeof(WBP_Group_C_OnUnhovered__DelegateSignature) == 0x000008, "Wrong size on WBP_Group_C_OnUnhovered__DelegateSignature");
static_assert(offsetof(WBP_Group_C_OnUnhovered__DelegateSignature, Ref) == 0x000000, "Member 'WBP_Group_C_OnUnhovered__DelegateSignature::Ref' has a wrong offset!");

// Function WBP_Group.WBP_Group_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_Group_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Group_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_Group_C_PreConstruct");
static_assert(sizeof(WBP_Group_C_PreConstruct) == 0x000001, "Wrong size on WBP_Group_C_PreConstruct");
static_assert(offsetof(WBP_Group_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_Group_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_Group.WBP_Group_C.SetOwner
// 0x0050 (0x0050 - 0x0000)
struct WBP_Group_C_SetOwner final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0020(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0038(0x0018)()
};
static_assert(alignof(WBP_Group_C_SetOwner) == 0x000008, "Wrong alignment on WBP_Group_C_SetOwner");
static_assert(sizeof(WBP_Group_C_SetOwner) == 0x000050, "Wrong size on WBP_Group_C_SetOwner");
static_assert(offsetof(WBP_Group_C_SetOwner, Temp_bool_Variable) == 0x000000, "Member 'WBP_Group_C_SetOwner::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_SetOwner, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'WBP_Group_C_SetOwner::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_SetOwner, Temp_text_Variable) == 0x000008, "Member 'WBP_Group_C_SetOwner::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_SetOwner, Temp_text_Variable_1) == 0x000020, "Member 'WBP_Group_C_SetOwner::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Group_C_SetOwner, K2Node_Select_Default) == 0x000038, "Member 'WBP_Group_C_SetOwner::K2Node_Select_Default' has a wrong offset!");

// Function WBP_Group.WBP_Group_C.ShowNickName
// 0x0001 (0x0001 - 0x0000)
struct WBP_Group_C_ShowNickName final
{
public:
	bool                                          Show;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Group_C_ShowNickName) == 0x000001, "Wrong alignment on WBP_Group_C_ShowNickName");
static_assert(sizeof(WBP_Group_C_ShowNickName) == 0x000001, "Wrong size on WBP_Group_C_ShowNickName");
static_assert(offsetof(WBP_Group_C_ShowNickName, Show) == 0x000000, "Member 'WBP_Group_C_ShowNickName::Show' has a wrong offset!");

// Function WBP_Group.WBP_Group_C.ShowOptions
// 0x0001 (0x0001 - 0x0000)
struct WBP_Group_C_ShowOptions final
{
public:
	bool                                          Show;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Group_C_ShowOptions) == 0x000001, "Wrong alignment on WBP_Group_C_ShowOptions");
static_assert(sizeof(WBP_Group_C_ShowOptions) == 0x000001, "Wrong size on WBP_Group_C_ShowOptions");
static_assert(offsetof(WBP_Group_C_ShowOptions, Show) == 0x000000, "Member 'WBP_Group_C_ShowOptions::Show' has a wrong offset!");

}
