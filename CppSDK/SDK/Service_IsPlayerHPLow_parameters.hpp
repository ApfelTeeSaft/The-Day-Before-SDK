#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Service_IsPlayerHPLow

#include "Basic.hpp"


namespace SDK::Params
{

// Function Service_IsPlayerHPLow.Service_IsPlayerHPLow_C.ExecuteUbergraph_Service_IsPlayerHPLow
// 0x0088 (0x0088 - 0x0000)
struct Service_IsPlayerHPLow_C_ExecuteUbergraph_Service_IsPlayerHPLow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlackboardComponent*                   CallFunc_GetBlackboard_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBlackboardComponent*                   CallFunc_GetBlackboard_ReturnValue_1;              // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetStat_Value;                            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_1;            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_2;            // 0x004C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_OwnerActor;                           // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBlackboardComponent*                   CallFunc_GetBlackboard_ReturnValue_2;              // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetValueAsObject_ReturnValue;             // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASurvivalPlayer_C*                      K2Node_DynamicCast_AsSurvival_Player;              // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Service_IsPlayerHPLow_C_ExecuteUbergraph_Service_IsPlayerHPLow) == 0x000008, "Wrong alignment on Service_IsPlayerHPLow_C_ExecuteUbergraph_Service_IsPlayerHPLow");
static_assert(sizeof(Service_IsPlayerHPLow_C_ExecuteUbergraph_Service_IsPlayerHPLow) == 0x000088, "Wrong size on Service_IsPlayerHPLow_C_ExecuteUbergraph_Service_IsPlayerHPLow");
static_assert(offsetof(Service_IsPlayerHPLow_C_ExecuteUbergraph_Service_IsPlayerHPLow, EntryPoint) == 0x000000, "Member 'Service_IsPlayerHPLow_C_ExecuteUbergraph_Service_IsPlayerHPLow::EntryPoint' has a wrong offset!");
static_assert(offsetof(Service_IsPlayerHPLow_C_ExecuteUbergraph_Service_IsPlayerHPLow, CallFunc_MakeLiteralName_ReturnValue) == 0x000004, "Member 'Service_IsPlayerHPLow_C_ExecuteUbergraph_Service_IsPlayerHPLow::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Service_IsPlayerHPLow_C_ExecuteUbergraph_Service_IsPlayerHPLow, K2Node_Event_OwnerController) == 0x000010, "Member 'Service_IsPlayerHPLow_C_ExecuteUbergraph_Service_IsPlayerHPLow::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(Service_IsPlayerHPLow_C_ExecuteUbergraph_Service_IsPlayerHPLow, K2Node_Event_ControlledPawn) == 0x000018, "Member 'Service_IsPlayerHPLow_C_ExecuteUbergraph_Service_IsPlayerHPLow::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(Service_IsPlayerHPLow_C_ExecuteUbergraph_Service_IsPlayerHPLow, K2Node_Event_DeltaSeconds) == 0x000020, "Member 'Service_IsPlayerHPLow_C_ExecuteUbergraph_Service_IsPlayerHPLow::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Service_IsPlayerHPLow_C_ExecuteUbergraph_Service_IsPlayerHPLow, CallFunc_GetBlackboard_ReturnValue) == 0x000028, "Member 'Service_IsPlayerHPLow_C_ExecuteUbergraph_Service_IsPlayerHPLow::CallFunc_GetBlackboard_ReturnValue' has a wrong offset!");
static_assert(offsetof(Service_IsPlayerHPLow_C_ExecuteUbergraph_Service_IsPlayerHPLow, CallFunc_GetBlackboard_ReturnValue_1) == 0x000030, "Member 'Service_IsPlayerHPLow_C_ExecuteUbergraph_Service_IsPlayerHPLow::CallFunc_GetBlackboard_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Service_IsPlayerHPLow_C_ExecuteUbergraph_Service_IsPlayerHPLow, CallFunc_GetStat_Value) == 0x000038, "Member 'Service_IsPlayerHPLow_C_ExecuteUbergraph_Service_IsPlayerHPLow::CallFunc_GetStat_Value' has a wrong offset!");
static_assert(offsetof(Service_IsPlayerHPLow_C_ExecuteUbergraph_Service_IsPlayerHPLow, CallFunc_MakeLiteralName_ReturnValue_1) == 0x000040, "Member 'Service_IsPlayerHPLow_C_ExecuteUbergraph_Service_IsPlayerHPLow::CallFunc_MakeLiteralName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Service_IsPlayerHPLow_C_ExecuteUbergraph_Service_IsPlayerHPLow, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000048, "Member 'Service_IsPlayerHPLow_C_ExecuteUbergraph_Service_IsPlayerHPLow::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Service_IsPlayerHPLow_C_ExecuteUbergraph_Service_IsPlayerHPLow, CallFunc_MakeLiteralName_ReturnValue_2) == 0x00004C, "Member 'Service_IsPlayerHPLow_C_ExecuteUbergraph_Service_IsPlayerHPLow::CallFunc_MakeLiteralName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Service_IsPlayerHPLow_C_ExecuteUbergraph_Service_IsPlayerHPLow, K2Node_Event_OwnerActor) == 0x000058, "Member 'Service_IsPlayerHPLow_C_ExecuteUbergraph_Service_IsPlayerHPLow::K2Node_Event_OwnerActor' has a wrong offset!");
static_assert(offsetof(Service_IsPlayerHPLow_C_ExecuteUbergraph_Service_IsPlayerHPLow, CallFunc_GetBlackboard_ReturnValue_2) == 0x000060, "Member 'Service_IsPlayerHPLow_C_ExecuteUbergraph_Service_IsPlayerHPLow::CallFunc_GetBlackboard_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Service_IsPlayerHPLow_C_ExecuteUbergraph_Service_IsPlayerHPLow, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'Service_IsPlayerHPLow_C_ExecuteUbergraph_Service_IsPlayerHPLow::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Service_IsPlayerHPLow_C_ExecuteUbergraph_Service_IsPlayerHPLow, CallFunc_GetValueAsObject_ReturnValue) == 0x000070, "Member 'Service_IsPlayerHPLow_C_ExecuteUbergraph_Service_IsPlayerHPLow::CallFunc_GetValueAsObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Service_IsPlayerHPLow_C_ExecuteUbergraph_Service_IsPlayerHPLow, K2Node_DynamicCast_AsSurvival_Player) == 0x000078, "Member 'Service_IsPlayerHPLow_C_ExecuteUbergraph_Service_IsPlayerHPLow::K2Node_DynamicCast_AsSurvival_Player' has a wrong offset!");
static_assert(offsetof(Service_IsPlayerHPLow_C_ExecuteUbergraph_Service_IsPlayerHPLow, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'Service_IsPlayerHPLow_C_ExecuteUbergraph_Service_IsPlayerHPLow::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function Service_IsPlayerHPLow.Service_IsPlayerHPLow_C.ReceiveActivation
// 0x0008 (0x0008 - 0x0000)
struct Service_IsPlayerHPLow_C_ReceiveActivation final
{
public:
	class AActor*                                 OwnerActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Service_IsPlayerHPLow_C_ReceiveActivation) == 0x000008, "Wrong alignment on Service_IsPlayerHPLow_C_ReceiveActivation");
static_assert(sizeof(Service_IsPlayerHPLow_C_ReceiveActivation) == 0x000008, "Wrong size on Service_IsPlayerHPLow_C_ReceiveActivation");
static_assert(offsetof(Service_IsPlayerHPLow_C_ReceiveActivation, OwnerActor) == 0x000000, "Member 'Service_IsPlayerHPLow_C_ReceiveActivation::OwnerActor' has a wrong offset!");

// Function Service_IsPlayerHPLow.Service_IsPlayerHPLow_C.ReceiveTickAI
// 0x0018 (0x0018 - 0x0000)
struct Service_IsPlayerHPLow_C_ReceiveTickAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Service_IsPlayerHPLow_C_ReceiveTickAI) == 0x000008, "Wrong alignment on Service_IsPlayerHPLow_C_ReceiveTickAI");
static_assert(sizeof(Service_IsPlayerHPLow_C_ReceiveTickAI) == 0x000018, "Wrong size on Service_IsPlayerHPLow_C_ReceiveTickAI");
static_assert(offsetof(Service_IsPlayerHPLow_C_ReceiveTickAI, OwnerController) == 0x000000, "Member 'Service_IsPlayerHPLow_C_ReceiveTickAI::OwnerController' has a wrong offset!");
static_assert(offsetof(Service_IsPlayerHPLow_C_ReceiveTickAI, ControlledPawn) == 0x000008, "Member 'Service_IsPlayerHPLow_C_ReceiveTickAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(Service_IsPlayerHPLow_C_ReceiveTickAI, DeltaSeconds) == 0x000010, "Member 'Service_IsPlayerHPLow_C_ReceiveTickAI::DeltaSeconds' has a wrong offset!");

}
