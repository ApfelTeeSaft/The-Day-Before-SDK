#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_BackpackMid

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CraftState_structs.hpp"


namespace SDK::Params
{

// Function ABP_BackpackMid.ABP_BackpackMid_C.AnimGraph
// 0x0020 (0x0020 - 0x0000)
struct ABP_BackpackMid_C_AnimGraph final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_BackpackMid_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_BackpackMid_C_AnimGraph");
static_assert(sizeof(ABP_BackpackMid_C_AnimGraph) == 0x000020, "Wrong size on ABP_BackpackMid_C_AnimGraph");
static_assert(offsetof(ABP_BackpackMid_C_AnimGraph, InPose) == 0x000000, "Member 'ABP_BackpackMid_C_AnimGraph::InPose' has a wrong offset!");
static_assert(offsetof(ABP_BackpackMid_C_AnimGraph, Param_AnimGraph) == 0x000010, "Member 'ABP_BackpackMid_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function ABP_BackpackMid.ABP_BackpackMid_C.BackpackSetCraftState
// 0x0001 (0x0001 - 0x0000)
struct ABP_BackpackMid_C_BackpackSetCraftState final
{
public:
	ECraftState                                   State;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_BackpackMid_C_BackpackSetCraftState) == 0x000001, "Wrong alignment on ABP_BackpackMid_C_BackpackSetCraftState");
static_assert(sizeof(ABP_BackpackMid_C_BackpackSetCraftState) == 0x000001, "Wrong size on ABP_BackpackMid_C_BackpackSetCraftState");
static_assert(offsetof(ABP_BackpackMid_C_BackpackSetCraftState, State) == 0x000000, "Member 'ABP_BackpackMid_C_BackpackSetCraftState::State' has a wrong offset!");

// Function ABP_BackpackMid.ABP_BackpackMid_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct ABP_BackpackMid_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_BackpackMid_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on ABP_BackpackMid_C_BlueprintUpdateAnimation");
static_assert(sizeof(ABP_BackpackMid_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on ABP_BackpackMid_C_BlueprintUpdateAnimation");
static_assert(offsetof(ABP_BackpackMid_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'ABP_BackpackMid_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function ABP_BackpackMid.ABP_BackpackMid_C.ExecuteUbergraph_ABP_BackpackMid
// 0x0030 (0x0030 - 0x0000)
struct ABP_BackpackMid_C_ExecuteUbergraph_ABP_BackpackMid final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ECraftState                                   K2Node_Event_State;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASurvivalPlayer_C*                      K2Node_DynamicCast_AsSurvival_Player;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_BackpackMid_C_ExecuteUbergraph_ABP_BackpackMid) == 0x000008, "Wrong alignment on ABP_BackpackMid_C_ExecuteUbergraph_ABP_BackpackMid");
static_assert(sizeof(ABP_BackpackMid_C_ExecuteUbergraph_ABP_BackpackMid) == 0x000030, "Wrong size on ABP_BackpackMid_C_ExecuteUbergraph_ABP_BackpackMid");
static_assert(offsetof(ABP_BackpackMid_C_ExecuteUbergraph_ABP_BackpackMid, EntryPoint) == 0x000000, "Member 'ABP_BackpackMid_C_ExecuteUbergraph_ABP_BackpackMid::EntryPoint' has a wrong offset!");
static_assert(offsetof(ABP_BackpackMid_C_ExecuteUbergraph_ABP_BackpackMid, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000004, "Member 'ABP_BackpackMid_C_ExecuteUbergraph_ABP_BackpackMid::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_BackpackMid_C_ExecuteUbergraph_ABP_BackpackMid, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000005, "Member 'ABP_BackpackMid_C_ExecuteUbergraph_ABP_BackpackMid::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_BackpackMid_C_ExecuteUbergraph_ABP_BackpackMid, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000006, "Member 'ABP_BackpackMid_C_ExecuteUbergraph_ABP_BackpackMid::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ABP_BackpackMid_C_ExecuteUbergraph_ABP_BackpackMid, K2Node_Event_DeltaTimeX) == 0x000008, "Member 'ABP_BackpackMid_C_ExecuteUbergraph_ABP_BackpackMid::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(ABP_BackpackMid_C_ExecuteUbergraph_ABP_BackpackMid, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000010, "Member 'ABP_BackpackMid_C_ExecuteUbergraph_ABP_BackpackMid::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_BackpackMid_C_ExecuteUbergraph_ABP_BackpackMid, K2Node_Event_State) == 0x000018, "Member 'ABP_BackpackMid_C_ExecuteUbergraph_ABP_BackpackMid::K2Node_Event_State' has a wrong offset!");
static_assert(offsetof(ABP_BackpackMid_C_ExecuteUbergraph_ABP_BackpackMid, K2Node_DynamicCast_AsSurvival_Player) == 0x000020, "Member 'ABP_BackpackMid_C_ExecuteUbergraph_ABP_BackpackMid::K2Node_DynamicCast_AsSurvival_Player' has a wrong offset!");
static_assert(offsetof(ABP_BackpackMid_C_ExecuteUbergraph_ABP_BackpackMid, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'ABP_BackpackMid_C_ExecuteUbergraph_ABP_BackpackMid::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ABP_BackpackMid_C_ExecuteUbergraph_ABP_BackpackMid, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'ABP_BackpackMid_C_ExecuteUbergraph_ABP_BackpackMid::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

