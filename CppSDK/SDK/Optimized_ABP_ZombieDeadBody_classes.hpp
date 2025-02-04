#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Optimized_ABP_ZombieDeadBody

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Optimized_ABP_ZombieDeadBody_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Optimized_ABP_ZombieDeadBody.Optimized_ABP_ZombieDeadBody_C
// 0x0230 (0x0580 - 0x0350)
class UOptimized_ABP_ZombieDeadBody_C final : public UAnimInstance
{
public:
	uint8                                         Pad_348[0x8];                                      // 0x0348(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct Optimized_ABP_ZombieDeadBody::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x0358(0x0002)(HasGetValueTypeHash)
	uint8                                         Pad_35A[0x6];                                      // 0x035A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0360(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0368(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0370(0x0020)()
	struct FAnimNode_PoseSnapshot                 AnimGraphNode_PoseSnapshot_1;                      // 0x0390(0x0090)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x0420(0x0048)()
	struct FAnimNode_PoseSnapshot                 AnimGraphNode_PoseSnapshot;                        // 0x0468(0x0090)()
	struct FPoseSnapshot                          K2Node_PropertyAccess_2;                           // 0x04F8(0x0038)()
	bool                                          K2Node_PropertyAccess_1;                           // 0x0530(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_531[0x7];                                      // 0x0531(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPoseSnapshot                          K2Node_PropertyAccess;                             // 0x0538(0x0038)()
	class AZombie_C*                              Zombie;                                            // 0x0570(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AZombieDeadBody_C*                      ZombieDeadBody;                                    // 0x0578(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void BlueprintBeginPlay();
	void ExecuteUbergraph_Optimized_ABP_ZombieDeadBody(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Optimized_ABP_ZombieDeadBody_C">();
	}
	static class UOptimized_ABP_ZombieDeadBody_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOptimized_ABP_ZombieDeadBody_C>();
	}
};
static_assert(alignof(UOptimized_ABP_ZombieDeadBody_C) == 0x000010, "Wrong alignment on UOptimized_ABP_ZombieDeadBody_C");
static_assert(sizeof(UOptimized_ABP_ZombieDeadBody_C) == 0x000580, "Wrong size on UOptimized_ABP_ZombieDeadBody_C");
static_assert(offsetof(UOptimized_ABP_ZombieDeadBody_C, UberGraphFrame) == 0x000350, "Member 'UOptimized_ABP_ZombieDeadBody_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOptimized_ABP_ZombieDeadBody_C, __AnimBlueprintMutables) == 0x000358, "Member 'UOptimized_ABP_ZombieDeadBody_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UOptimized_ABP_ZombieDeadBody_C, AnimBlueprintExtension_PropertyAccess) == 0x000360, "Member 'UOptimized_ABP_ZombieDeadBody_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UOptimized_ABP_ZombieDeadBody_C, AnimBlueprintExtension_Base) == 0x000368, "Member 'UOptimized_ABP_ZombieDeadBody_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UOptimized_ABP_ZombieDeadBody_C, AnimGraphNode_Root) == 0x000370, "Member 'UOptimized_ABP_ZombieDeadBody_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UOptimized_ABP_ZombieDeadBody_C, AnimGraphNode_PoseSnapshot_1) == 0x000390, "Member 'UOptimized_ABP_ZombieDeadBody_C::AnimGraphNode_PoseSnapshot_1' has a wrong offset!");
static_assert(offsetof(UOptimized_ABP_ZombieDeadBody_C, AnimGraphNode_BlendListByBool) == 0x000420, "Member 'UOptimized_ABP_ZombieDeadBody_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UOptimized_ABP_ZombieDeadBody_C, AnimGraphNode_PoseSnapshot) == 0x000468, "Member 'UOptimized_ABP_ZombieDeadBody_C::AnimGraphNode_PoseSnapshot' has a wrong offset!");
static_assert(offsetof(UOptimized_ABP_ZombieDeadBody_C, K2Node_PropertyAccess_2) == 0x0004F8, "Member 'UOptimized_ABP_ZombieDeadBody_C::K2Node_PropertyAccess_2' has a wrong offset!");
static_assert(offsetof(UOptimized_ABP_ZombieDeadBody_C, K2Node_PropertyAccess_1) == 0x000530, "Member 'UOptimized_ABP_ZombieDeadBody_C::K2Node_PropertyAccess_1' has a wrong offset!");
static_assert(offsetof(UOptimized_ABP_ZombieDeadBody_C, K2Node_PropertyAccess) == 0x000538, "Member 'UOptimized_ABP_ZombieDeadBody_C::K2Node_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UOptimized_ABP_ZombieDeadBody_C, Zombie) == 0x000570, "Member 'UOptimized_ABP_ZombieDeadBody_C::Zombie' has a wrong offset!");
static_assert(offsetof(UOptimized_ABP_ZombieDeadBody_C, ZombieDeadBody) == 0x000578, "Member 'UOptimized_ABP_ZombieDeadBody_C::ZombieDeadBody' has a wrong offset!");

}

