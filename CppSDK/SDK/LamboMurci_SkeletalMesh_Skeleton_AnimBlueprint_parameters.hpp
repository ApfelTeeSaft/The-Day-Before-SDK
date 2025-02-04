#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint.LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C_AnimGraph) == 0x000008, "Wrong alignment on LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C_AnimGraph");
static_assert(sizeof(LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C_AnimGraph) == 0x000010, "Wrong size on LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C_AnimGraph");
static_assert(offsetof(LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint.LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation");
static_assert(sizeof(LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation");
static_assert(offsetof(LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint.LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C.ExecuteUbergraph_LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint
// 0x0018 (0x0018 - 0x0000)
struct LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C_ExecuteUbergraph_LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_GetOwningComponent_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C_ExecuteUbergraph_LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint) == 0x000008, "Wrong alignment on LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C_ExecuteUbergraph_LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint");
static_assert(sizeof(LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C_ExecuteUbergraph_LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint) == 0x000018, "Wrong size on LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C_ExecuteUbergraph_LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint");
static_assert(offsetof(LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C_ExecuteUbergraph_LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint, EntryPoint) == 0x000000, "Member 'LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C_ExecuteUbergraph_LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint::EntryPoint' has a wrong offset!");
static_assert(offsetof(LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C_ExecuteUbergraph_LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint, K2Node_Event_DeltaTimeX) == 0x000004, "Member 'LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C_ExecuteUbergraph_LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C_ExecuteUbergraph_LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint, CallFunc_GetOwningComponent_ReturnValue) == 0x000008, "Member 'LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C_ExecuteUbergraph_LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint::CallFunc_GetOwningComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C_ExecuteUbergraph_LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C_ExecuteUbergraph_LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

