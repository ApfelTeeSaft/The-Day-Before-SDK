#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RobAnimationBlueprint

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function RobAnimationBlueprint.RobAnimationBlueprint_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct RobAnimationBlueprint_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(RobAnimationBlueprint_C_AnimGraph) == 0x000008, "Wrong alignment on RobAnimationBlueprint_C_AnimGraph");
static_assert(sizeof(RobAnimationBlueprint_C_AnimGraph) == 0x000010, "Wrong size on RobAnimationBlueprint_C_AnimGraph");
static_assert(offsetof(RobAnimationBlueprint_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'RobAnimationBlueprint_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function RobAnimationBlueprint.RobAnimationBlueprint_C.ExecuteUbergraph_RobAnimationBlueprint
// 0x0020 (0x0020 - 0x0000)
struct RobAnimationBlueprint_C_ExecuteUbergraph_RobAnimationBlueprint final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRelevantAnimTimeRemaining_ReturnValue; // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1; // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue_1;     // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E[0x2];                                        // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1;  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RobAnimationBlueprint_C_ExecuteUbergraph_RobAnimationBlueprint) == 0x000008, "Wrong alignment on RobAnimationBlueprint_C_ExecuteUbergraph_RobAnimationBlueprint");
static_assert(sizeof(RobAnimationBlueprint_C_ExecuteUbergraph_RobAnimationBlueprint) == 0x000020, "Wrong size on RobAnimationBlueprint_C_ExecuteUbergraph_RobAnimationBlueprint");
static_assert(offsetof(RobAnimationBlueprint_C_ExecuteUbergraph_RobAnimationBlueprint, EntryPoint) == 0x000000, "Member 'RobAnimationBlueprint_C_ExecuteUbergraph_RobAnimationBlueprint::EntryPoint' has a wrong offset!");
static_assert(offsetof(RobAnimationBlueprint_C_ExecuteUbergraph_RobAnimationBlueprint, CallFunc_GetRelevantAnimTimeRemaining_ReturnValue) == 0x000004, "Member 'RobAnimationBlueprint_C_ExecuteUbergraph_RobAnimationBlueprint::CallFunc_GetRelevantAnimTimeRemaining_ReturnValue' has a wrong offset!");
static_assert(offsetof(RobAnimationBlueprint_C_ExecuteUbergraph_RobAnimationBlueprint, CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1) == 0x000008, "Member 'RobAnimationBlueprint_C_ExecuteUbergraph_RobAnimationBlueprint::CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RobAnimationBlueprint_C_ExecuteUbergraph_RobAnimationBlueprint, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x00000C, "Member 'RobAnimationBlueprint_C_ExecuteUbergraph_RobAnimationBlueprint::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(RobAnimationBlueprint_C_ExecuteUbergraph_RobAnimationBlueprint, CallFunc_LessEqual_DoubleDouble_ReturnValue_1) == 0x00000D, "Member 'RobAnimationBlueprint_C_ExecuteUbergraph_RobAnimationBlueprint::CallFunc_LessEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RobAnimationBlueprint_C_ExecuteUbergraph_RobAnimationBlueprint, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast) == 0x000010, "Member 'RobAnimationBlueprint_C_ExecuteUbergraph_RobAnimationBlueprint::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(RobAnimationBlueprint_C_ExecuteUbergraph_RobAnimationBlueprint, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1) == 0x000018, "Member 'RobAnimationBlueprint_C_ExecuteUbergraph_RobAnimationBlueprint::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");

}

