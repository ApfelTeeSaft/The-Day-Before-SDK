#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BaseMessage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WE_MessageTypes_structs.hpp"


namespace SDK::Params
{

// Function WBP_BaseMessage.WBP_BaseMessage_C.ExecuteUbergraph_WBP_BaseMessage
// 0x0028 (0x0028 - 0x0000)
struct WBP_BaseMessage_C_ExecuteUbergraph_WBP_BaseMessage final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Map_Find_Value;                           // 0x0008(0x0018)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BaseMessage_C_ExecuteUbergraph_WBP_BaseMessage) == 0x000008, "Wrong alignment on WBP_BaseMessage_C_ExecuteUbergraph_WBP_BaseMessage");
static_assert(sizeof(WBP_BaseMessage_C_ExecuteUbergraph_WBP_BaseMessage) == 0x000028, "Wrong size on WBP_BaseMessage_C_ExecuteUbergraph_WBP_BaseMessage");
static_assert(offsetof(WBP_BaseMessage_C_ExecuteUbergraph_WBP_BaseMessage, EntryPoint) == 0x000000, "Member 'WBP_BaseMessage_C_ExecuteUbergraph_WBP_BaseMessage::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_BaseMessage_C_ExecuteUbergraph_WBP_BaseMessage, CallFunc_Map_Find_Value) == 0x000008, "Member 'WBP_BaseMessage_C_ExecuteUbergraph_WBP_BaseMessage::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_BaseMessage_C_ExecuteUbergraph_WBP_BaseMessage, CallFunc_Map_Find_ReturnValue) == 0x000020, "Member 'WBP_BaseMessage_C_ExecuteUbergraph_WBP_BaseMessage::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BaseMessage_C_ExecuteUbergraph_WBP_BaseMessage, K2Node_Event_IsDesignTime) == 0x000021, "Member 'WBP_BaseMessage_C_ExecuteUbergraph_WBP_BaseMessage::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function WBP_BaseMessage.WBP_BaseMessage_C.OnPushMessage
// 0x0080 (0x0080 - 0x0000)
struct WBP_BaseMessage_C_OnPushMessage final
{
public:
	EWE_MessageTypes                              Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Text;                                              // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	double                                        Duration;                                          // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Map_Find_Value;                           // 0x0028(0x0018)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52[0x6];                                       // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_Select_Default;                             // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0060(0x0008)(NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimer_Time_ImplicitCast;            // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PlayAnimationForward_PlaybackSpeed_ImplicitCast; // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BaseMessage_C_OnPushMessage) == 0x000008, "Wrong alignment on WBP_BaseMessage_C_OnPushMessage");
static_assert(sizeof(WBP_BaseMessage_C_OnPushMessage) == 0x000080, "Wrong size on WBP_BaseMessage_C_OnPushMessage");
static_assert(offsetof(WBP_BaseMessage_C_OnPushMessage, Type) == 0x000000, "Member 'WBP_BaseMessage_C_OnPushMessage::Type' has a wrong offset!");
static_assert(offsetof(WBP_BaseMessage_C_OnPushMessage, Text) == 0x000008, "Member 'WBP_BaseMessage_C_OnPushMessage::Text' has a wrong offset!");
static_assert(offsetof(WBP_BaseMessage_C_OnPushMessage, Duration) == 0x000020, "Member 'WBP_BaseMessage_C_OnPushMessage::Duration' has a wrong offset!");
static_assert(offsetof(WBP_BaseMessage_C_OnPushMessage, CallFunc_Map_Find_Value) == 0x000028, "Member 'WBP_BaseMessage_C_OnPushMessage::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_BaseMessage_C_OnPushMessage, CallFunc_Map_Find_ReturnValue) == 0x000040, "Member 'WBP_BaseMessage_C_OnPushMessage::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BaseMessage_C_OnPushMessage, CallFunc_PlayAnimationForward_ReturnValue) == 0x000048, "Member 'WBP_BaseMessage_C_OnPushMessage::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BaseMessage_C_OnPushMessage, Temp_bool_Variable) == 0x000050, "Member 'WBP_BaseMessage_C_OnPushMessage::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_BaseMessage_C_OnPushMessage, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000051, "Member 'WBP_BaseMessage_C_OnPushMessage::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BaseMessage_C_OnPushMessage, K2Node_Select_Default) == 0x000058, "Member 'WBP_BaseMessage_C_OnPushMessage::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_BaseMessage_C_OnPushMessage, CallFunc_K2_SetTimer_ReturnValue) == 0x000060, "Member 'WBP_BaseMessage_C_OnPushMessage::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BaseMessage_C_OnPushMessage, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000068, "Member 'WBP_BaseMessage_C_OnPushMessage::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BaseMessage_C_OnPushMessage, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000070, "Member 'WBP_BaseMessage_C_OnPushMessage::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BaseMessage_C_OnPushMessage, CallFunc_K2_SetTimer_Time_ImplicitCast) == 0x000078, "Member 'WBP_BaseMessage_C_OnPushMessage::CallFunc_K2_SetTimer_Time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_BaseMessage_C_OnPushMessage, CallFunc_PlayAnimationForward_PlaybackSpeed_ImplicitCast) == 0x00007C, "Member 'WBP_BaseMessage_C_OnPushMessage::CallFunc_PlayAnimationForward_PlaybackSpeed_ImplicitCast' has a wrong offset!");

// Function WBP_BaseMessage.WBP_BaseMessage_C.OnResetMessage
// 0x0018 (0x0018 - 0x0000)
struct WBP_BaseMessage_C_OnResetMessage final
{
public:
	float                                         CallFunc_GetEndTime_ReturnValue;                   // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0008(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BaseMessage_C_OnResetMessage) == 0x000008, "Wrong alignment on WBP_BaseMessage_C_OnResetMessage");
static_assert(sizeof(WBP_BaseMessage_C_OnResetMessage) == 0x000018, "Wrong size on WBP_BaseMessage_C_OnResetMessage");
static_assert(offsetof(WBP_BaseMessage_C_OnResetMessage, CallFunc_GetEndTime_ReturnValue) == 0x000000, "Member 'WBP_BaseMessage_C_OnResetMessage::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BaseMessage_C_OnResetMessage, CallFunc_K2_SetTimer_ReturnValue) == 0x000008, "Member 'WBP_BaseMessage_C_OnResetMessage::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BaseMessage_C_OnResetMessage, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000010, "Member 'WBP_BaseMessage_C_OnResetMessage::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");

// Function WBP_BaseMessage.WBP_BaseMessage_C.OnToggleVisibility
// 0x0001 (0x0001 - 0x0000)
struct WBP_BaseMessage_C_OnToggleVisibility final
{
public:
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BaseMessage_C_OnToggleVisibility) == 0x000001, "Wrong alignment on WBP_BaseMessage_C_OnToggleVisibility");
static_assert(sizeof(WBP_BaseMessage_C_OnToggleVisibility) == 0x000001, "Wrong size on WBP_BaseMessage_C_OnToggleVisibility");
static_assert(offsetof(WBP_BaseMessage_C_OnToggleVisibility, CallFunc_Not_PreBool_ReturnValue) == 0x000000, "Member 'WBP_BaseMessage_C_OnToggleVisibility::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function WBP_BaseMessage.WBP_BaseMessage_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_BaseMessage_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BaseMessage_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_BaseMessage_C_PreConstruct");
static_assert(sizeof(WBP_BaseMessage_C_PreConstruct) == 0x000001, "Wrong size on WBP_BaseMessage_C_PreConstruct");
static_assert(offsetof(WBP_BaseMessage_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_BaseMessage_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
