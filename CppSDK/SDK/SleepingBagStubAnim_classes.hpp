#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SleepingBagStubAnim

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass SleepingBagStubAnim.SleepingBagStubAnim_C
// 0x0230 (0x0580 - 0x0350)
class USleepingBagStubAnim_C final : public UAnimInstance
{
public:
	uint8                                         Pad_348[0x8];                                      // 0x0348(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0358(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0360(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0368(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0388(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x03B0(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x03D8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0420(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0440(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0488(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x04A8(0x00C8)()
	bool                                          IsPlacing;                                         // 0x0570(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsStopping;                                        // 0x0571(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_SleepingBagStubAnim(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SleepingBagStubAnim_C">();
	}
	static class USleepingBagStubAnim_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USleepingBagStubAnim_C>();
	}
};
static_assert(alignof(USleepingBagStubAnim_C) == 0x000010, "Wrong alignment on USleepingBagStubAnim_C");
static_assert(sizeof(USleepingBagStubAnim_C) == 0x000580, "Wrong size on USleepingBagStubAnim_C");
static_assert(offsetof(USleepingBagStubAnim_C, UberGraphFrame) == 0x000350, "Member 'USleepingBagStubAnim_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USleepingBagStubAnim_C, AnimBlueprintExtension_PropertyAccess) == 0x000358, "Member 'USleepingBagStubAnim_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(USleepingBagStubAnim_C, AnimBlueprintExtension_Base) == 0x000360, "Member 'USleepingBagStubAnim_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(USleepingBagStubAnim_C, AnimGraphNode_Root) == 0x000368, "Member 'USleepingBagStubAnim_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(USleepingBagStubAnim_C, AnimGraphNode_TransitionResult_1) == 0x000388, "Member 'USleepingBagStubAnim_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(USleepingBagStubAnim_C, AnimGraphNode_TransitionResult) == 0x0003B0, "Member 'USleepingBagStubAnim_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(USleepingBagStubAnim_C, AnimGraphNode_SequencePlayer_1) == 0x0003D8, "Member 'USleepingBagStubAnim_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(USleepingBagStubAnim_C, AnimGraphNode_StateResult_1) == 0x000420, "Member 'USleepingBagStubAnim_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(USleepingBagStubAnim_C, AnimGraphNode_SequencePlayer) == 0x000440, "Member 'USleepingBagStubAnim_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(USleepingBagStubAnim_C, AnimGraphNode_StateResult) == 0x000488, "Member 'USleepingBagStubAnim_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(USleepingBagStubAnim_C, AnimGraphNode_StateMachine) == 0x0004A8, "Member 'USleepingBagStubAnim_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(USleepingBagStubAnim_C, IsPlacing) == 0x000570, "Member 'USleepingBagStubAnim_C::IsPlacing' has a wrong offset!");
static_assert(offsetof(USleepingBagStubAnim_C, IsStopping) == 0x000571, "Member 'USleepingBagStubAnim_C::IsStopping' has a wrong offset!");

}
