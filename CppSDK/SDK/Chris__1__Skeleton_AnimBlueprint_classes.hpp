#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Chris__1__Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Chris__1__Skeleton_AnimBlueprint_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Chris__1__Skeleton_AnimBlueprint.Chris__1__Skeleton_AnimBlueprint_C
// 0x05D0 (0x0920 - 0x0350)
class UChris__1__Skeleton_AnimBlueprint_C final : public UAnimInstance
{
public:
	uint8                                         Pad_348[0x8];                                      // 0x0348(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct Chris__1__Skeleton_AnimBlueprint::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x0358(0x0002)(HasGetValueTypeHash)
	uint8                                         Pad_35A[0x6];                                      // 0x035A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0360(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0368(0x0008)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0370(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x0398(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x03E0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0400(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0448(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x0468(0x00C8)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0530(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0558(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x05A0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x05C0(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0608(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0628(0x00C8)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x06F0(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x0738(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0780(0x0048)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x07C8(0x0108)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x08D0(0x0020)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x08F0(0x0028)()
	bool                                          bSurvInteracted;                                   // 0x0918(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Chris__1__Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_45CD4DED4A225470F39513B638B4EB13();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Chris__1__Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_8DCEAA2344ED27A263E24BBAFFB429C4();
	void ExecuteUbergraph_Chris__1__Skeleton_AnimBlueprint(int32 EntryPoint);
	void OnInteracted();
	void StopInteracting();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Chris__1__Skeleton_AnimBlueprint_C">();
	}
	static class UChris__1__Skeleton_AnimBlueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChris__1__Skeleton_AnimBlueprint_C>();
	}
};
static_assert(alignof(UChris__1__Skeleton_AnimBlueprint_C) == 0x000010, "Wrong alignment on UChris__1__Skeleton_AnimBlueprint_C");
static_assert(sizeof(UChris__1__Skeleton_AnimBlueprint_C) == 0x000920, "Wrong size on UChris__1__Skeleton_AnimBlueprint_C");
static_assert(offsetof(UChris__1__Skeleton_AnimBlueprint_C, UberGraphFrame) == 0x000350, "Member 'UChris__1__Skeleton_AnimBlueprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UChris__1__Skeleton_AnimBlueprint_C, __AnimBlueprintMutables) == 0x000358, "Member 'UChris__1__Skeleton_AnimBlueprint_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UChris__1__Skeleton_AnimBlueprint_C, AnimBlueprintExtension_PropertyAccess) == 0x000360, "Member 'UChris__1__Skeleton_AnimBlueprint_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UChris__1__Skeleton_AnimBlueprint_C, AnimBlueprintExtension_Base) == 0x000368, "Member 'UChris__1__Skeleton_AnimBlueprint_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UChris__1__Skeleton_AnimBlueprint_C, AnimGraphNode_TransitionResult_1) == 0x000370, "Member 'UChris__1__Skeleton_AnimBlueprint_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UChris__1__Skeleton_AnimBlueprint_C, AnimGraphNode_SequencePlayer_3) == 0x000398, "Member 'UChris__1__Skeleton_AnimBlueprint_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UChris__1__Skeleton_AnimBlueprint_C, AnimGraphNode_StateResult_3) == 0x0003E0, "Member 'UChris__1__Skeleton_AnimBlueprint_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UChris__1__Skeleton_AnimBlueprint_C, AnimGraphNode_SequencePlayer_2) == 0x000400, "Member 'UChris__1__Skeleton_AnimBlueprint_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UChris__1__Skeleton_AnimBlueprint_C, AnimGraphNode_StateResult_2) == 0x000448, "Member 'UChris__1__Skeleton_AnimBlueprint_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UChris__1__Skeleton_AnimBlueprint_C, AnimGraphNode_StateMachine_1) == 0x000468, "Member 'UChris__1__Skeleton_AnimBlueprint_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UChris__1__Skeleton_AnimBlueprint_C, AnimGraphNode_TransitionResult) == 0x000530, "Member 'UChris__1__Skeleton_AnimBlueprint_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UChris__1__Skeleton_AnimBlueprint_C, AnimGraphNode_SequencePlayer_1) == 0x000558, "Member 'UChris__1__Skeleton_AnimBlueprint_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UChris__1__Skeleton_AnimBlueprint_C, AnimGraphNode_StateResult_1) == 0x0005A0, "Member 'UChris__1__Skeleton_AnimBlueprint_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UChris__1__Skeleton_AnimBlueprint_C, AnimGraphNode_SequencePlayer) == 0x0005C0, "Member 'UChris__1__Skeleton_AnimBlueprint_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UChris__1__Skeleton_AnimBlueprint_C, AnimGraphNode_StateResult) == 0x000608, "Member 'UChris__1__Skeleton_AnimBlueprint_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UChris__1__Skeleton_AnimBlueprint_C, AnimGraphNode_StateMachine) == 0x000628, "Member 'UChris__1__Skeleton_AnimBlueprint_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UChris__1__Skeleton_AnimBlueprint_C, AnimGraphNode_BlendListByBool) == 0x0006F0, "Member 'UChris__1__Skeleton_AnimBlueprint_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UChris__1__Skeleton_AnimBlueprint_C, AnimGraphNode_Slot_1) == 0x000738, "Member 'UChris__1__Skeleton_AnimBlueprint_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UChris__1__Skeleton_AnimBlueprint_C, AnimGraphNode_Slot) == 0x000780, "Member 'UChris__1__Skeleton_AnimBlueprint_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UChris__1__Skeleton_AnimBlueprint_C, AnimGraphNode_SaveCachedPose) == 0x0007C8, "Member 'UChris__1__Skeleton_AnimBlueprint_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UChris__1__Skeleton_AnimBlueprint_C, AnimGraphNode_Root) == 0x0008D0, "Member 'UChris__1__Skeleton_AnimBlueprint_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UChris__1__Skeleton_AnimBlueprint_C, AnimGraphNode_UseCachedPose) == 0x0008F0, "Member 'UChris__1__Skeleton_AnimBlueprint_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UChris__1__Skeleton_AnimBlueprint_C, bSurvInteracted) == 0x000918, "Member 'UChris__1__Skeleton_AnimBlueprint_C::bSurvInteracted' has a wrong offset!");

}
