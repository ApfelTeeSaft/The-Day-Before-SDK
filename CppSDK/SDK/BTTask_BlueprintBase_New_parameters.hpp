#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_BlueprintBase_New

#include "Basic.hpp"


namespace SDK::Params
{

// Function BTTask_BlueprintBase_New.BTTask_BlueprintBase_New_C.ExecuteUbergraph_BTTask_BlueprintBase_New
// 0x0030 (0x0030 - 0x0000)
struct BTTask_BlueprintBase_New_C_ExecuteUbergraph_BTTask_BlueprintBase_New final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASurvivalPlayer_C*                      K2Node_DynamicCast_AsSurvival_Player;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTTask_BlueprintBase_New_C_ExecuteUbergraph_BTTask_BlueprintBase_New) == 0x000008, "Wrong alignment on BTTask_BlueprintBase_New_C_ExecuteUbergraph_BTTask_BlueprintBase_New");
static_assert(sizeof(BTTask_BlueprintBase_New_C_ExecuteUbergraph_BTTask_BlueprintBase_New) == 0x000030, "Wrong size on BTTask_BlueprintBase_New_C_ExecuteUbergraph_BTTask_BlueprintBase_New");
static_assert(offsetof(BTTask_BlueprintBase_New_C_ExecuteUbergraph_BTTask_BlueprintBase_New, EntryPoint) == 0x000000, "Member 'BTTask_BlueprintBase_New_C_ExecuteUbergraph_BTTask_BlueprintBase_New::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTTask_BlueprintBase_New_C_ExecuteUbergraph_BTTask_BlueprintBase_New, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000008, "Member 'BTTask_BlueprintBase_New_C_ExecuteUbergraph_BTTask_BlueprintBase_New::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_BlueprintBase_New_C_ExecuteUbergraph_BTTask_BlueprintBase_New, K2Node_DynamicCast_AsSurvival_Player) == 0x000010, "Member 'BTTask_BlueprintBase_New_C_ExecuteUbergraph_BTTask_BlueprintBase_New::K2Node_DynamicCast_AsSurvival_Player' has a wrong offset!");
static_assert(offsetof(BTTask_BlueprintBase_New_C_ExecuteUbergraph_BTTask_BlueprintBase_New, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BTTask_BlueprintBase_New_C_ExecuteUbergraph_BTTask_BlueprintBase_New::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BTTask_BlueprintBase_New_C_ExecuteUbergraph_BTTask_BlueprintBase_New, K2Node_Event_OwnerController) == 0x000020, "Member 'BTTask_BlueprintBase_New_C_ExecuteUbergraph_BTTask_BlueprintBase_New::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTTask_BlueprintBase_New_C_ExecuteUbergraph_BTTask_BlueprintBase_New, K2Node_Event_ControlledPawn) == 0x000028, "Member 'BTTask_BlueprintBase_New_C_ExecuteUbergraph_BTTask_BlueprintBase_New::K2Node_Event_ControlledPawn' has a wrong offset!");

// Function BTTask_BlueprintBase_New.BTTask_BlueprintBase_New_C.ReceiveExecuteAI
// 0x0010 (0x0010 - 0x0000)
struct BTTask_BlueprintBase_New_C_ReceiveExecuteAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTTask_BlueprintBase_New_C_ReceiveExecuteAI) == 0x000008, "Wrong alignment on BTTask_BlueprintBase_New_C_ReceiveExecuteAI");
static_assert(sizeof(BTTask_BlueprintBase_New_C_ReceiveExecuteAI) == 0x000010, "Wrong size on BTTask_BlueprintBase_New_C_ReceiveExecuteAI");
static_assert(offsetof(BTTask_BlueprintBase_New_C_ReceiveExecuteAI, OwnerController) == 0x000000, "Member 'BTTask_BlueprintBase_New_C_ReceiveExecuteAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTTask_BlueprintBase_New_C_ReceiveExecuteAI, ControlledPawn) == 0x000008, "Member 'BTTask_BlueprintBase_New_C_ReceiveExecuteAI::ControlledPawn' has a wrong offset!");

}
