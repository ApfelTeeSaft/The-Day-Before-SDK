#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SellerNPC_AnimBP

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "SellerNPC_AnimBP_structs.hpp"
#include "E_NPCState_structs.hpp"
#include "E_NPCIdle_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass SellerNPC_AnimBP.SellerNPC_AnimBP_C
// 0x0610 (0x0960 - 0x0350)
class USellerNPC_AnimBP_C final : public UAnimInstance
{
public:
	uint8                                         Pad_348[0x8];                                      // 0x0348(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct SellerNPC_AnimBP::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x0358(0x0005)(HasGetValueTypeHash)
	uint8                                         Pad_35D[0x3];                                      // 0x035D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0360(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0368(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0370(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x0390(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x03B8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x03E0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0408(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0430(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0458(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x0480(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_7;                    // 0x04A0(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_6;                    // 0x04E8(0x0048)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_3;                   // 0x0530(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x0578(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x0598(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x05E0(0x0048)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_2;                   // 0x0628(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0670(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x0690(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x06D8(0x0048)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_1;                   // 0x0720(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0768(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0788(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x07D0(0x0048)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum;                     // 0x0818(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0860(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0880(0x00C8)()
	E_NPCState                                    AnimState;                                         // 0x0948(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_NPCIdle                                     Idle;                                              // 0x0949(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94A[0x6];                                      // 0x094A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AInventoryStash_C*                      NPC;                                               // 0x0950(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void BlueprintInitializeAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SellerNPC_AnimBP_AnimGraphNode_BlendListByEnum_275BC3DC4CFD48EC9E7B749329DA8C47();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SellerNPC_AnimBP_AnimGraphNode_BlendListByEnum_CB0F7E5C4A7D8BDB6F19E8A40C217A26();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SellerNPC_AnimBP_AnimGraphNode_BlendListByEnum_DA46E6F8405CE96DF6A42DB16715B608();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SellerNPC_AnimBP_AnimGraphNode_BlendListByEnum_DDEADEEA4EE017D448B970B81B1672FF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SellerNPC_AnimBP_AnimGraphNode_TransitionResult_234BCA674580D4E8931F778AFFCC24A2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SellerNPC_AnimBP_AnimGraphNode_TransitionResult_8BB11C8647C6CCD43EE40DA96C59C744();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SellerNPC_AnimBP_AnimGraphNode_TransitionResult_AD63E8B7493BFECF2DF9BABF71EB2E2C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SellerNPC_AnimBP_AnimGraphNode_TransitionResult_CA822ECC44B679924F6C88BE3A4896A5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SellerNPC_AnimBP_AnimGraphNode_TransitionResult_FF80A30944EB4384BCE193BA01CB98EE();
	void ExecuteUbergraph_SellerNPC_AnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SellerNPC_AnimBP_C">();
	}
	static class USellerNPC_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USellerNPC_AnimBP_C>();
	}
};
static_assert(alignof(USellerNPC_AnimBP_C) == 0x000010, "Wrong alignment on USellerNPC_AnimBP_C");
static_assert(sizeof(USellerNPC_AnimBP_C) == 0x000960, "Wrong size on USellerNPC_AnimBP_C");
static_assert(offsetof(USellerNPC_AnimBP_C, UberGraphFrame) == 0x000350, "Member 'USellerNPC_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USellerNPC_AnimBP_C, __AnimBlueprintMutables) == 0x000358, "Member 'USellerNPC_AnimBP_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(USellerNPC_AnimBP_C, AnimBlueprintExtension_PropertyAccess) == 0x000360, "Member 'USellerNPC_AnimBP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(USellerNPC_AnimBP_C, AnimBlueprintExtension_Base) == 0x000368, "Member 'USellerNPC_AnimBP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(USellerNPC_AnimBP_C, AnimGraphNode_Root) == 0x000370, "Member 'USellerNPC_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(USellerNPC_AnimBP_C, AnimGraphNode_TransitionResult_5) == 0x000390, "Member 'USellerNPC_AnimBP_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(USellerNPC_AnimBP_C, AnimGraphNode_TransitionResult_4) == 0x0003B8, "Member 'USellerNPC_AnimBP_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(USellerNPC_AnimBP_C, AnimGraphNode_TransitionResult_3) == 0x0003E0, "Member 'USellerNPC_AnimBP_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(USellerNPC_AnimBP_C, AnimGraphNode_TransitionResult_2) == 0x000408, "Member 'USellerNPC_AnimBP_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(USellerNPC_AnimBP_C, AnimGraphNode_TransitionResult_1) == 0x000430, "Member 'USellerNPC_AnimBP_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(USellerNPC_AnimBP_C, AnimGraphNode_TransitionResult) == 0x000458, "Member 'USellerNPC_AnimBP_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(USellerNPC_AnimBP_C, AnimGraphNode_StateResult_4) == 0x000480, "Member 'USellerNPC_AnimBP_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(USellerNPC_AnimBP_C, AnimGraphNode_SequencePlayer_7) == 0x0004A0, "Member 'USellerNPC_AnimBP_C::AnimGraphNode_SequencePlayer_7' has a wrong offset!");
static_assert(offsetof(USellerNPC_AnimBP_C, AnimGraphNode_SequencePlayer_6) == 0x0004E8, "Member 'USellerNPC_AnimBP_C::AnimGraphNode_SequencePlayer_6' has a wrong offset!");
static_assert(offsetof(USellerNPC_AnimBP_C, AnimGraphNode_BlendListByEnum_3) == 0x000530, "Member 'USellerNPC_AnimBP_C::AnimGraphNode_BlendListByEnum_3' has a wrong offset!");
static_assert(offsetof(USellerNPC_AnimBP_C, AnimGraphNode_StateResult_3) == 0x000578, "Member 'USellerNPC_AnimBP_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(USellerNPC_AnimBP_C, AnimGraphNode_SequencePlayer_5) == 0x000598, "Member 'USellerNPC_AnimBP_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(USellerNPC_AnimBP_C, AnimGraphNode_SequencePlayer_4) == 0x0005E0, "Member 'USellerNPC_AnimBP_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(USellerNPC_AnimBP_C, AnimGraphNode_BlendListByEnum_2) == 0x000628, "Member 'USellerNPC_AnimBP_C::AnimGraphNode_BlendListByEnum_2' has a wrong offset!");
static_assert(offsetof(USellerNPC_AnimBP_C, AnimGraphNode_StateResult_2) == 0x000670, "Member 'USellerNPC_AnimBP_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(USellerNPC_AnimBP_C, AnimGraphNode_SequencePlayer_3) == 0x000690, "Member 'USellerNPC_AnimBP_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(USellerNPC_AnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x0006D8, "Member 'USellerNPC_AnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(USellerNPC_AnimBP_C, AnimGraphNode_BlendListByEnum_1) == 0x000720, "Member 'USellerNPC_AnimBP_C::AnimGraphNode_BlendListByEnum_1' has a wrong offset!");
static_assert(offsetof(USellerNPC_AnimBP_C, AnimGraphNode_StateResult_1) == 0x000768, "Member 'USellerNPC_AnimBP_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(USellerNPC_AnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x000788, "Member 'USellerNPC_AnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(USellerNPC_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x0007D0, "Member 'USellerNPC_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(USellerNPC_AnimBP_C, AnimGraphNode_BlendListByEnum) == 0x000818, "Member 'USellerNPC_AnimBP_C::AnimGraphNode_BlendListByEnum' has a wrong offset!");
static_assert(offsetof(USellerNPC_AnimBP_C, AnimGraphNode_StateResult) == 0x000860, "Member 'USellerNPC_AnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(USellerNPC_AnimBP_C, AnimGraphNode_StateMachine) == 0x000880, "Member 'USellerNPC_AnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(USellerNPC_AnimBP_C, AnimState) == 0x000948, "Member 'USellerNPC_AnimBP_C::AnimState' has a wrong offset!");
static_assert(offsetof(USellerNPC_AnimBP_C, Idle) == 0x000949, "Member 'USellerNPC_AnimBP_C::Idle' has a wrong offset!");
static_assert(offsetof(USellerNPC_AnimBP_C, NPC) == 0x000950, "Member 'USellerNPC_AnimBP_C::NPC' has a wrong offset!");

}

