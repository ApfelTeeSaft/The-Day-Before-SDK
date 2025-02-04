#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Invite

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_Invite.WBP_Invite_C.ExecuteUbergraph_WBP_Invite
// 0x00C0 (0x00C0 - 0x0000)
struct WBP_Invite_C_ExecuteUbergraph_WBP_Invite final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0008(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0020(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0070(0x0010)(ReferenceParm)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0088(0x0018)()
	class ASurvPC_C*                              K2Node_DynamicCast_AsSurv_PC;                      // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AB[0x5];                                       // 0x00AB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Invite_C_ExecuteUbergraph_WBP_Invite) == 0x000008, "Wrong alignment on WBP_Invite_C_ExecuteUbergraph_WBP_Invite");
static_assert(sizeof(WBP_Invite_C_ExecuteUbergraph_WBP_Invite) == 0x0000C0, "Wrong size on WBP_Invite_C_ExecuteUbergraph_WBP_Invite");
static_assert(offsetof(WBP_Invite_C_ExecuteUbergraph_WBP_Invite, EntryPoint) == 0x000000, "Member 'WBP_Invite_C_ExecuteUbergraph_WBP_Invite::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Invite_C_ExecuteUbergraph_WBP_Invite, CallFunc_Conv_StringToText_ReturnValue) == 0x000008, "Member 'WBP_Invite_C_ExecuteUbergraph_WBP_Invite::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Invite_C_ExecuteUbergraph_WBP_Invite, K2Node_MakeStruct_FormatArgumentData) == 0x000020, "Member 'WBP_Invite_C_ExecuteUbergraph_WBP_Invite::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_Invite_C_ExecuteUbergraph_WBP_Invite, K2Node_MakeArray_Array) == 0x000070, "Member 'WBP_Invite_C_ExecuteUbergraph_WBP_Invite::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_Invite_C_ExecuteUbergraph_WBP_Invite, CallFunc_GetOwningPlayer_ReturnValue) == 0x000080, "Member 'WBP_Invite_C_ExecuteUbergraph_WBP_Invite::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Invite_C_ExecuteUbergraph_WBP_Invite, CallFunc_Format_ReturnValue) == 0x000088, "Member 'WBP_Invite_C_ExecuteUbergraph_WBP_Invite::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Invite_C_ExecuteUbergraph_WBP_Invite, K2Node_DynamicCast_AsSurv_PC) == 0x0000A0, "Member 'WBP_Invite_C_ExecuteUbergraph_WBP_Invite::K2Node_DynamicCast_AsSurv_PC' has a wrong offset!");
static_assert(offsetof(WBP_Invite_C_ExecuteUbergraph_WBP_Invite, K2Node_DynamicCast_bSuccess) == 0x0000A8, "Member 'WBP_Invite_C_ExecuteUbergraph_WBP_Invite::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Invite_C_ExecuteUbergraph_WBP_Invite, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0000A9, "Member 'WBP_Invite_C_ExecuteUbergraph_WBP_Invite::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Invite_C_ExecuteUbergraph_WBP_Invite, Temp_bool_IsClosed_Variable) == 0x0000AA, "Member 'WBP_Invite_C_ExecuteUbergraph_WBP_Invite::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Invite_C_ExecuteUbergraph_WBP_Invite, CallFunc_PlayAnimation_ReturnValue) == 0x0000B0, "Member 'WBP_Invite_C_ExecuteUbergraph_WBP_Invite::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Invite_C_ExecuteUbergraph_WBP_Invite, Temp_bool_Has_Been_Initd_Variable) == 0x0000B8, "Member 'WBP_Invite_C_ExecuteUbergraph_WBP_Invite::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");

}

