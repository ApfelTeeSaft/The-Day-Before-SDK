#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Head_Traider_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Head_Traider_Skeleton_AnimBlueprint.Head_Traider_Skeleton_AnimBlueprint_C
// 0x03C0 (0x0710 - 0x0350)
class UHead_Traider_Skeleton_AnimBlueprint_C final : public UAnimInstance
{
public:
	uint8                                         Pad_348[0x8];                                      // 0x0348(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0358(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0360(0x0008)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh;                    // 0x0368(0x01D8)(ContainsInstancedReference)
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x0540(0x00E0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0620(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0668(0x0048)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x06B0(0x0020)()
	struct FVector                                __CustomProperty_LookTargetLocation_8500432D4BF8E8250C7D7599F47770EC; // 0x06D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 OwnerSkeletal;                                     // 0x06E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        EyeContactAlpha;                                   // 0x06F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Look_Target_Location;                              // 0x06F8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void BlueprintInitializeAnimation();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_Head_Traider_Skeleton_AnimBlueprint(int32 EntryPoint);
	void StartDialogue(bool Start);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Head_Traider_Skeleton_AnimBlueprint_C">();
	}
	static class UHead_Traider_Skeleton_AnimBlueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHead_Traider_Skeleton_AnimBlueprint_C>();
	}
};
static_assert(alignof(UHead_Traider_Skeleton_AnimBlueprint_C) == 0x000010, "Wrong alignment on UHead_Traider_Skeleton_AnimBlueprint_C");
static_assert(sizeof(UHead_Traider_Skeleton_AnimBlueprint_C) == 0x000710, "Wrong size on UHead_Traider_Skeleton_AnimBlueprint_C");
static_assert(offsetof(UHead_Traider_Skeleton_AnimBlueprint_C, UberGraphFrame) == 0x000350, "Member 'UHead_Traider_Skeleton_AnimBlueprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHead_Traider_Skeleton_AnimBlueprint_C, AnimBlueprintExtension_PropertyAccess) == 0x000358, "Member 'UHead_Traider_Skeleton_AnimBlueprint_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UHead_Traider_Skeleton_AnimBlueprint_C, AnimBlueprintExtension_Base) == 0x000360, "Member 'UHead_Traider_Skeleton_AnimBlueprint_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UHead_Traider_Skeleton_AnimBlueprint_C, AnimGraphNode_CopyPoseFromMesh) == 0x000368, "Member 'UHead_Traider_Skeleton_AnimBlueprint_C::AnimGraphNode_CopyPoseFromMesh' has a wrong offset!");
static_assert(offsetof(UHead_Traider_Skeleton_AnimBlueprint_C, AnimGraphNode_LayeredBoneBlend) == 0x000540, "Member 'UHead_Traider_Skeleton_AnimBlueprint_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UHead_Traider_Skeleton_AnimBlueprint_C, AnimGraphNode_SequencePlayer) == 0x000620, "Member 'UHead_Traider_Skeleton_AnimBlueprint_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UHead_Traider_Skeleton_AnimBlueprint_C, AnimGraphNode_Slot) == 0x000668, "Member 'UHead_Traider_Skeleton_AnimBlueprint_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UHead_Traider_Skeleton_AnimBlueprint_C, AnimGraphNode_Root) == 0x0006B0, "Member 'UHead_Traider_Skeleton_AnimBlueprint_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UHead_Traider_Skeleton_AnimBlueprint_C, __CustomProperty_LookTargetLocation_8500432D4BF8E8250C7D7599F47770EC) == 0x0006D0, "Member 'UHead_Traider_Skeleton_AnimBlueprint_C::__CustomProperty_LookTargetLocation_8500432D4BF8E8250C7D7599F47770EC' has a wrong offset!");
static_assert(offsetof(UHead_Traider_Skeleton_AnimBlueprint_C, OwnerSkeletal) == 0x0006E8, "Member 'UHead_Traider_Skeleton_AnimBlueprint_C::OwnerSkeletal' has a wrong offset!");
static_assert(offsetof(UHead_Traider_Skeleton_AnimBlueprint_C, EyeContactAlpha) == 0x0006F0, "Member 'UHead_Traider_Skeleton_AnimBlueprint_C::EyeContactAlpha' has a wrong offset!");
static_assert(offsetof(UHead_Traider_Skeleton_AnimBlueprint_C, Look_Target_Location) == 0x0006F8, "Member 'UHead_Traider_Skeleton_AnimBlueprint_C::Look_Target_Location' has a wrong offset!");

}

