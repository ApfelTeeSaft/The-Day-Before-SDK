#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CloseWorkRP

#include "Basic.hpp"


namespace SDK::Params
{

// Function CloseWorkRP.CloseWorkRP_C.ExecuteAction
// 0x0010 (0x0010 - 0x0000)
struct CloseWorkRP_C_ExecuteAction final
{
public:
	class APlayerController*                      PlayerController;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAGSGraphNode*                          NodeOwner;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CloseWorkRP_C_ExecuteAction) == 0x000008, "Wrong alignment on CloseWorkRP_C_ExecuteAction");
static_assert(sizeof(CloseWorkRP_C_ExecuteAction) == 0x000010, "Wrong size on CloseWorkRP_C_ExecuteAction");
static_assert(offsetof(CloseWorkRP_C_ExecuteAction, PlayerController) == 0x000000, "Member 'CloseWorkRP_C_ExecuteAction::PlayerController' has a wrong offset!");
static_assert(offsetof(CloseWorkRP_C_ExecuteAction, NodeOwner) == 0x000008, "Member 'CloseWorkRP_C_ExecuteAction::NodeOwner' has a wrong offset!");

// Function CloseWorkRP.CloseWorkRP_C.ExecuteUbergraph_CloseWorkRP
// 0x0028 (0x0028 - 0x0000)
struct CloseWorkRP_C_ExecuteUbergraph_CloseWorkRP final
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
static_assert(alignof(CloseWorkRP_C_ExecuteUbergraph_CloseWorkRP) == 0x000008, "Wrong alignment on CloseWorkRP_C_ExecuteUbergraph_CloseWorkRP");
static_assert(sizeof(CloseWorkRP_C_ExecuteUbergraph_CloseWorkRP) == 0x000028, "Wrong size on CloseWorkRP_C_ExecuteUbergraph_CloseWorkRP");
static_assert(offsetof(CloseWorkRP_C_ExecuteUbergraph_CloseWorkRP, EntryPoint) == 0x000000, "Member 'CloseWorkRP_C_ExecuteUbergraph_CloseWorkRP::EntryPoint' has a wrong offset!");
static_assert(offsetof(CloseWorkRP_C_ExecuteUbergraph_CloseWorkRP, K2Node_Event_playerController) == 0x000008, "Member 'CloseWorkRP_C_ExecuteUbergraph_CloseWorkRP::K2Node_Event_playerController' has a wrong offset!");
static_assert(offsetof(CloseWorkRP_C_ExecuteUbergraph_CloseWorkRP, K2Node_Event_nodeOwner) == 0x000010, "Member 'CloseWorkRP_C_ExecuteUbergraph_CloseWorkRP::K2Node_Event_nodeOwner' has a wrong offset!");
static_assert(offsetof(CloseWorkRP_C_ExecuteUbergraph_CloseWorkRP, K2Node_DynamicCast_AsSurv_PC) == 0x000018, "Member 'CloseWorkRP_C_ExecuteUbergraph_CloseWorkRP::K2Node_DynamicCast_AsSurv_PC' has a wrong offset!");
static_assert(offsetof(CloseWorkRP_C_ExecuteUbergraph_CloseWorkRP, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'CloseWorkRP_C_ExecuteUbergraph_CloseWorkRP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CloseWorkRP_C_ExecuteUbergraph_CloseWorkRP, CallFunc_IsValid_ReturnValue) == 0x000021, "Member 'CloseWorkRP_C_ExecuteUbergraph_CloseWorkRP::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}
