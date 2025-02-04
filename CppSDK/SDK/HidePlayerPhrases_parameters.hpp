#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HidePlayerPhrases

#include "Basic.hpp"


namespace SDK::Params
{

// Function HidePlayerPhrases.HidePlayerPhrases_C.ExecuteAction
// 0x0010 (0x0010 - 0x0000)
struct HidePlayerPhrases_C_ExecuteAction final
{
public:
	class APlayerController*                      PlayerController;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAGSGraphNode*                          NodeOwner;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HidePlayerPhrases_C_ExecuteAction) == 0x000008, "Wrong alignment on HidePlayerPhrases_C_ExecuteAction");
static_assert(sizeof(HidePlayerPhrases_C_ExecuteAction) == 0x000010, "Wrong size on HidePlayerPhrases_C_ExecuteAction");
static_assert(offsetof(HidePlayerPhrases_C_ExecuteAction, PlayerController) == 0x000000, "Member 'HidePlayerPhrases_C_ExecuteAction::PlayerController' has a wrong offset!");
static_assert(offsetof(HidePlayerPhrases_C_ExecuteAction, NodeOwner) == 0x000008, "Member 'HidePlayerPhrases_C_ExecuteAction::NodeOwner' has a wrong offset!");

// Function HidePlayerPhrases.HidePlayerPhrases_C.ExecuteUbergraph_HidePlayerPhrases
// 0x0028 (0x0028 - 0x0000)
struct HidePlayerPhrases_C_ExecuteUbergraph_HidePlayerPhrases final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      K2Node_Event_playerController;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAGSGraphNode*                          K2Node_Event_nodeOwner;                            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASurvPC_C*                              K2Node_DynamicCast_AsSurv_PC;                      // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HidePlayerPhrases_C_ExecuteUbergraph_HidePlayerPhrases) == 0x000008, "Wrong alignment on HidePlayerPhrases_C_ExecuteUbergraph_HidePlayerPhrases");
static_assert(sizeof(HidePlayerPhrases_C_ExecuteUbergraph_HidePlayerPhrases) == 0x000028, "Wrong size on HidePlayerPhrases_C_ExecuteUbergraph_HidePlayerPhrases");
static_assert(offsetof(HidePlayerPhrases_C_ExecuteUbergraph_HidePlayerPhrases, EntryPoint) == 0x000000, "Member 'HidePlayerPhrases_C_ExecuteUbergraph_HidePlayerPhrases::EntryPoint' has a wrong offset!");
static_assert(offsetof(HidePlayerPhrases_C_ExecuteUbergraph_HidePlayerPhrases, K2Node_Event_playerController) == 0x000008, "Member 'HidePlayerPhrases_C_ExecuteUbergraph_HidePlayerPhrases::K2Node_Event_playerController' has a wrong offset!");
static_assert(offsetof(HidePlayerPhrases_C_ExecuteUbergraph_HidePlayerPhrases, K2Node_Event_nodeOwner) == 0x000010, "Member 'HidePlayerPhrases_C_ExecuteUbergraph_HidePlayerPhrases::K2Node_Event_nodeOwner' has a wrong offset!");
static_assert(offsetof(HidePlayerPhrases_C_ExecuteUbergraph_HidePlayerPhrases, K2Node_DynamicCast_AsSurv_PC) == 0x000018, "Member 'HidePlayerPhrases_C_ExecuteUbergraph_HidePlayerPhrases::K2Node_DynamicCast_AsSurv_PC' has a wrong offset!");
static_assert(offsetof(HidePlayerPhrases_C_ExecuteUbergraph_HidePlayerPhrases, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'HidePlayerPhrases_C_ExecuteUbergraph_HidePlayerPhrases::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(HidePlayerPhrases_C_ExecuteUbergraph_HidePlayerPhrases, CallFunc_IsValid_ReturnValue) == 0x000021, "Member 'HidePlayerPhrases_C_ExecuteUbergraph_HidePlayerPhrases::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

