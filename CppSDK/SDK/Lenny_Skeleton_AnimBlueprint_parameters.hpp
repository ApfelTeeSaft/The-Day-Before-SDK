#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lenny_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Lenny_Skeleton_AnimBlueprint.Lenny_Skeleton_AnimBlueprint_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct Lenny_Skeleton_AnimBlueprint_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(Lenny_Skeleton_AnimBlueprint_C_AnimGraph) == 0x000008, "Wrong alignment on Lenny_Skeleton_AnimBlueprint_C_AnimGraph");
static_assert(sizeof(Lenny_Skeleton_AnimBlueprint_C_AnimGraph) == 0x000010, "Wrong size on Lenny_Skeleton_AnimBlueprint_C_AnimGraph");
static_assert(offsetof(Lenny_Skeleton_AnimBlueprint_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'Lenny_Skeleton_AnimBlueprint_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function Lenny_Skeleton_AnimBlueprint.Lenny_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Lenny_Skeleton_AnimBlueprint
// 0x0048 (0x0048 - 0x0000)
struct Lenny_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Lenny_Skeleton_AnimBlueprint final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRelevantAnimTimeRemaining_ReturnValue; // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1; // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue_1;     // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 CallFunc_GetOwningComponent_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_GetOwningComponent_ReturnValue_1;         // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                    CallFunc_FMODPlayEventAttachedBullet_ReturnValue;  // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                    CallFunc_FMODPlayEventAttachedBullet_ReturnValue_1; // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1;  // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Lenny_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Lenny_Skeleton_AnimBlueprint) == 0x000008, "Wrong alignment on Lenny_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Lenny_Skeleton_AnimBlueprint");
static_assert(sizeof(Lenny_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Lenny_Skeleton_AnimBlueprint) == 0x000048, "Wrong size on Lenny_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Lenny_Skeleton_AnimBlueprint");
static_assert(offsetof(Lenny_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Lenny_Skeleton_AnimBlueprint, EntryPoint) == 0x000000, "Member 'Lenny_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Lenny_Skeleton_AnimBlueprint::EntryPoint' has a wrong offset!");
static_assert(offsetof(Lenny_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Lenny_Skeleton_AnimBlueprint, CallFunc_GetRelevantAnimTimeRemaining_ReturnValue) == 0x000004, "Member 'Lenny_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Lenny_Skeleton_AnimBlueprint::CallFunc_GetRelevantAnimTimeRemaining_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lenny_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Lenny_Skeleton_AnimBlueprint, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000008, "Member 'Lenny_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Lenny_Skeleton_AnimBlueprint::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lenny_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Lenny_Skeleton_AnimBlueprint, CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1) == 0x00000C, "Member 'Lenny_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Lenny_Skeleton_AnimBlueprint::CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Lenny_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Lenny_Skeleton_AnimBlueprint, CallFunc_LessEqual_DoubleDouble_ReturnValue_1) == 0x000010, "Member 'Lenny_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Lenny_Skeleton_AnimBlueprint::CallFunc_LessEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Lenny_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Lenny_Skeleton_AnimBlueprint, CallFunc_GetOwningComponent_ReturnValue) == 0x000018, "Member 'Lenny_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Lenny_Skeleton_AnimBlueprint::CallFunc_GetOwningComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lenny_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Lenny_Skeleton_AnimBlueprint, CallFunc_GetOwningComponent_ReturnValue_1) == 0x000020, "Member 'Lenny_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Lenny_Skeleton_AnimBlueprint::CallFunc_GetOwningComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Lenny_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Lenny_Skeleton_AnimBlueprint, CallFunc_FMODPlayEventAttachedBullet_ReturnValue) == 0x000028, "Member 'Lenny_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Lenny_Skeleton_AnimBlueprint::CallFunc_FMODPlayEventAttachedBullet_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lenny_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Lenny_Skeleton_AnimBlueprint, CallFunc_FMODPlayEventAttachedBullet_ReturnValue_1) == 0x000030, "Member 'Lenny_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Lenny_Skeleton_AnimBlueprint::CallFunc_FMODPlayEventAttachedBullet_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Lenny_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Lenny_Skeleton_AnimBlueprint, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast) == 0x000038, "Member 'Lenny_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Lenny_Skeleton_AnimBlueprint::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Lenny_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Lenny_Skeleton_AnimBlueprint, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1) == 0x000040, "Member 'Lenny_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Lenny_Skeleton_AnimBlueprint::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");

}
