#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Task_All_SetRandomLocation

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Task_All_SetRandomLocation.Task_All_SetRandomLocation_C.ExecuteUbergraph_Task_All_SetRandomLocation
// 0x0088 (0x0088 - 0x0000)
struct Task_All_SetRandomLocation_C_ExecuteUbergraph_Task_All_SetRandomLocation final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetBlackboardValueAsVector_ReturnValue;   // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_Select_Default;                             // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation; // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue; // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x3];                                       // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_K2_GetRandomReachablePointInRadius_Radius_ImplicitCast; // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Task_All_SetRandomLocation_C_ExecuteUbergraph_Task_All_SetRandomLocation) == 0x000008, "Wrong alignment on Task_All_SetRandomLocation_C_ExecuteUbergraph_Task_All_SetRandomLocation");
static_assert(sizeof(Task_All_SetRandomLocation_C_ExecuteUbergraph_Task_All_SetRandomLocation) == 0x000088, "Wrong size on Task_All_SetRandomLocation_C_ExecuteUbergraph_Task_All_SetRandomLocation");
static_assert(offsetof(Task_All_SetRandomLocation_C_ExecuteUbergraph_Task_All_SetRandomLocation, EntryPoint) == 0x000000, "Member 'Task_All_SetRandomLocation_C_ExecuteUbergraph_Task_All_SetRandomLocation::EntryPoint' has a wrong offset!");
static_assert(offsetof(Task_All_SetRandomLocation_C_ExecuteUbergraph_Task_All_SetRandomLocation, K2Node_Event_OwnerController) == 0x000008, "Member 'Task_All_SetRandomLocation_C_ExecuteUbergraph_Task_All_SetRandomLocation::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(Task_All_SetRandomLocation_C_ExecuteUbergraph_Task_All_SetRandomLocation, K2Node_Event_ControlledPawn) == 0x000010, "Member 'Task_All_SetRandomLocation_C_ExecuteUbergraph_Task_All_SetRandomLocation::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(Task_All_SetRandomLocation_C_ExecuteUbergraph_Task_All_SetRandomLocation, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'Task_All_SetRandomLocation_C_ExecuteUbergraph_Task_All_SetRandomLocation::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Task_All_SetRandomLocation_C_ExecuteUbergraph_Task_All_SetRandomLocation, CallFunc_GetBlackboardValueAsVector_ReturnValue) == 0x000030, "Member 'Task_All_SetRandomLocation_C_ExecuteUbergraph_Task_All_SetRandomLocation::CallFunc_GetBlackboardValueAsVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Task_All_SetRandomLocation_C_ExecuteUbergraph_Task_All_SetRandomLocation, Temp_bool_Variable) == 0x000048, "Member 'Task_All_SetRandomLocation_C_ExecuteUbergraph_Task_All_SetRandomLocation::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Task_All_SetRandomLocation_C_ExecuteUbergraph_Task_All_SetRandomLocation, K2Node_Select_Default) == 0x000050, "Member 'Task_All_SetRandomLocation_C_ExecuteUbergraph_Task_All_SetRandomLocation::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Task_All_SetRandomLocation_C_ExecuteUbergraph_Task_All_SetRandomLocation, CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation) == 0x000068, "Member 'Task_All_SetRandomLocation_C_ExecuteUbergraph_Task_All_SetRandomLocation::CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation' has a wrong offset!");
static_assert(offsetof(Task_All_SetRandomLocation_C_ExecuteUbergraph_Task_All_SetRandomLocation, CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue) == 0x000080, "Member 'Task_All_SetRandomLocation_C_ExecuteUbergraph_Task_All_SetRandomLocation::CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue' has a wrong offset!");
static_assert(offsetof(Task_All_SetRandomLocation_C_ExecuteUbergraph_Task_All_SetRandomLocation, CallFunc_K2_GetRandomReachablePointInRadius_Radius_ImplicitCast) == 0x000084, "Member 'Task_All_SetRandomLocation_C_ExecuteUbergraph_Task_All_SetRandomLocation::CallFunc_K2_GetRandomReachablePointInRadius_Radius_ImplicitCast' has a wrong offset!");

// Function Task_All_SetRandomLocation.Task_All_SetRandomLocation_C.ReceiveExecuteAI
// 0x0010 (0x0010 - 0x0000)
struct Task_All_SetRandomLocation_C_ReceiveExecuteAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Task_All_SetRandomLocation_C_ReceiveExecuteAI) == 0x000008, "Wrong alignment on Task_All_SetRandomLocation_C_ReceiveExecuteAI");
static_assert(sizeof(Task_All_SetRandomLocation_C_ReceiveExecuteAI) == 0x000010, "Wrong size on Task_All_SetRandomLocation_C_ReceiveExecuteAI");
static_assert(offsetof(Task_All_SetRandomLocation_C_ReceiveExecuteAI, OwnerController) == 0x000000, "Member 'Task_All_SetRandomLocation_C_ReceiveExecuteAI::OwnerController' has a wrong offset!");
static_assert(offsetof(Task_All_SetRandomLocation_C_ReceiveExecuteAI, ControlledPawn) == 0x000008, "Member 'Task_All_SetRandomLocation_C_ReceiveExecuteAI::ControlledPawn' has a wrong offset!");

}

