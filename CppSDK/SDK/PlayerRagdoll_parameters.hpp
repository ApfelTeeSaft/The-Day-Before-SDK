#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerRagdoll

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function PlayerRagdoll.PlayerRagdoll_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct PlayerRagdoll_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(PlayerRagdoll_C_AnimGraph) == 0x000008, "Wrong alignment on PlayerRagdoll_C_AnimGraph");
static_assert(sizeof(PlayerRagdoll_C_AnimGraph) == 0x000010, "Wrong size on PlayerRagdoll_C_AnimGraph");
static_assert(offsetof(PlayerRagdoll_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'PlayerRagdoll_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function PlayerRagdoll.PlayerRagdoll_C.ExecuteUbergraph_PlayerRagdoll
// 0x0040 (0x0040 - 0x0000)
struct PlayerRagdoll_C_ExecuteUbergraph_PlayerRagdoll final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPoseSnapshot                          K2Node_CustomEvent_SurvPlayerlastSnapshot;         // 0x0008(0x0038)()
};
static_assert(alignof(PlayerRagdoll_C_ExecuteUbergraph_PlayerRagdoll) == 0x000008, "Wrong alignment on PlayerRagdoll_C_ExecuteUbergraph_PlayerRagdoll");
static_assert(sizeof(PlayerRagdoll_C_ExecuteUbergraph_PlayerRagdoll) == 0x000040, "Wrong size on PlayerRagdoll_C_ExecuteUbergraph_PlayerRagdoll");
static_assert(offsetof(PlayerRagdoll_C_ExecuteUbergraph_PlayerRagdoll, EntryPoint) == 0x000000, "Member 'PlayerRagdoll_C_ExecuteUbergraph_PlayerRagdoll::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlayerRagdoll_C_ExecuteUbergraph_PlayerRagdoll, K2Node_CustomEvent_SurvPlayerlastSnapshot) == 0x000008, "Member 'PlayerRagdoll_C_ExecuteUbergraph_PlayerRagdoll::K2Node_CustomEvent_SurvPlayerlastSnapshot' has a wrong offset!");

// Function PlayerRagdoll.PlayerRagdoll_C.Start
// 0x0038 (0x0038 - 0x0000)
struct PlayerRagdoll_C_Start final
{
public:
	struct FPoseSnapshot                          Param_SurvPlayerlastSnapshot;                      // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(PlayerRagdoll_C_Start) == 0x000008, "Wrong alignment on PlayerRagdoll_C_Start");
static_assert(sizeof(PlayerRagdoll_C_Start) == 0x000038, "Wrong size on PlayerRagdoll_C_Start");
static_assert(offsetof(PlayerRagdoll_C_Start, Param_SurvPlayerlastSnapshot) == 0x000000, "Member 'PlayerRagdoll_C_Start::Param_SurvPlayerlastSnapshot' has a wrong offset!");

}
