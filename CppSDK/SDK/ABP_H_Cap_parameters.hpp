#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_H_Cap

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ABP_H_Cap.ABP_H_Cap_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ABP_H_Cap_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_H_Cap_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_H_Cap_C_AnimGraph");
static_assert(sizeof(ABP_H_Cap_C_AnimGraph) == 0x000010, "Wrong size on ABP_H_Cap_C_AnimGraph");
static_assert(offsetof(ABP_H_Cap_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'ABP_H_Cap_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function ABP_H_Cap.ABP_H_Cap_C.ExecuteUbergraph_ABP_H_Cap
// 0x0020 (0x0020 - 0x0000)
struct ABP_H_Cap_C_ExecuteUbergraph_ABP_H_Cap final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             K2Node_DynamicCast_AsCharacter;                    // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_H_Cap_C_ExecuteUbergraph_ABP_H_Cap) == 0x000008, "Wrong alignment on ABP_H_Cap_C_ExecuteUbergraph_ABP_H_Cap");
static_assert(sizeof(ABP_H_Cap_C_ExecuteUbergraph_ABP_H_Cap) == 0x000020, "Wrong size on ABP_H_Cap_C_ExecuteUbergraph_ABP_H_Cap");
static_assert(offsetof(ABP_H_Cap_C_ExecuteUbergraph_ABP_H_Cap, EntryPoint) == 0x000000, "Member 'ABP_H_Cap_C_ExecuteUbergraph_ABP_H_Cap::EntryPoint' has a wrong offset!");
static_assert(offsetof(ABP_H_Cap_C_ExecuteUbergraph_ABP_H_Cap, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000008, "Member 'ABP_H_Cap_C_ExecuteUbergraph_ABP_H_Cap::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_H_Cap_C_ExecuteUbergraph_ABP_H_Cap, K2Node_DynamicCast_AsCharacter) == 0x000010, "Member 'ABP_H_Cap_C_ExecuteUbergraph_ABP_H_Cap::K2Node_DynamicCast_AsCharacter' has a wrong offset!");
static_assert(offsetof(ABP_H_Cap_C_ExecuteUbergraph_ABP_H_Cap, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'ABP_H_Cap_C_ExecuteUbergraph_ABP_H_Cap::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}
