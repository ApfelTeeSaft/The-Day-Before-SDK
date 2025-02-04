#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tiger_SkeletalMesh_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "FGearPlugin_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Tiger_SkeletalMesh_Skeleton_AnimBlueprint.Tiger_SkeletalMesh_Skeleton_AnimBlueprint_C
// 0x07D0 (0x0B30 - 0x0360)
class UTiger_SkeletalMesh_Skeleton_AnimBlueprint_C final : public UFGearAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0368(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0370(0x0008)()
	struct FAnimNode_MeshSpaceRefPose             AnimGraphNode_MeshRefPose;                         // 0x0378(0x0010)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0388(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_3;                        // 0x03A8(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x04D0(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x05F8(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x0720(0x0128)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x0848(0x0048)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0890(0x0020)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x08B0(0x0108)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x09B8(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x09E0(0x0028)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x0A08(0x00E0)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0AE8(0x0048)()

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Tiger_SkeletalMesh_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_05B72DEF4C4A60FD14E7589A89374F6E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Tiger_SkeletalMesh_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_3EA8CE414091AEFC64AEDB92B3AEE661();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Tiger_SkeletalMesh_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_6C82591E4BBE827832566EBD9EF4C675();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Tiger_SkeletalMesh_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_B0CF4E3F432164F66AE916A0E171A3D7();
	void ExecuteUbergraph_Tiger_SkeletalMesh_Skeleton_AnimBlueprint(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Tiger_SkeletalMesh_Skeleton_AnimBlueprint_C">();
	}
	static class UTiger_SkeletalMesh_Skeleton_AnimBlueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTiger_SkeletalMesh_Skeleton_AnimBlueprint_C>();
	}
};
static_assert(alignof(UTiger_SkeletalMesh_Skeleton_AnimBlueprint_C) == 0x000010, "Wrong alignment on UTiger_SkeletalMesh_Skeleton_AnimBlueprint_C");
static_assert(sizeof(UTiger_SkeletalMesh_Skeleton_AnimBlueprint_C) == 0x000B30, "Wrong size on UTiger_SkeletalMesh_Skeleton_AnimBlueprint_C");
static_assert(offsetof(UTiger_SkeletalMesh_Skeleton_AnimBlueprint_C, UberGraphFrame) == 0x000360, "Member 'UTiger_SkeletalMesh_Skeleton_AnimBlueprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTiger_SkeletalMesh_Skeleton_AnimBlueprint_C, AnimBlueprintExtension_PropertyAccess) == 0x000368, "Member 'UTiger_SkeletalMesh_Skeleton_AnimBlueprint_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UTiger_SkeletalMesh_Skeleton_AnimBlueprint_C, AnimBlueprintExtension_Base) == 0x000370, "Member 'UTiger_SkeletalMesh_Skeleton_AnimBlueprint_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UTiger_SkeletalMesh_Skeleton_AnimBlueprint_C, AnimGraphNode_MeshRefPose) == 0x000378, "Member 'UTiger_SkeletalMesh_Skeleton_AnimBlueprint_C::AnimGraphNode_MeshRefPose' has a wrong offset!");
static_assert(offsetof(UTiger_SkeletalMesh_Skeleton_AnimBlueprint_C, AnimGraphNode_Root) == 0x000388, "Member 'UTiger_SkeletalMesh_Skeleton_AnimBlueprint_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UTiger_SkeletalMesh_Skeleton_AnimBlueprint_C, AnimGraphNode_ModifyBone_3) == 0x0003A8, "Member 'UTiger_SkeletalMesh_Skeleton_AnimBlueprint_C::AnimGraphNode_ModifyBone_3' has a wrong offset!");
static_assert(offsetof(UTiger_SkeletalMesh_Skeleton_AnimBlueprint_C, AnimGraphNode_ModifyBone_2) == 0x0004D0, "Member 'UTiger_SkeletalMesh_Skeleton_AnimBlueprint_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(UTiger_SkeletalMesh_Skeleton_AnimBlueprint_C, AnimGraphNode_ModifyBone_1) == 0x0005F8, "Member 'UTiger_SkeletalMesh_Skeleton_AnimBlueprint_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UTiger_SkeletalMesh_Skeleton_AnimBlueprint_C, AnimGraphNode_ModifyBone) == 0x000720, "Member 'UTiger_SkeletalMesh_Skeleton_AnimBlueprint_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UTiger_SkeletalMesh_Skeleton_AnimBlueprint_C, AnimGraphNode_Slot_1) == 0x000848, "Member 'UTiger_SkeletalMesh_Skeleton_AnimBlueprint_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UTiger_SkeletalMesh_Skeleton_AnimBlueprint_C, AnimGraphNode_ComponentToLocalSpace) == 0x000890, "Member 'UTiger_SkeletalMesh_Skeleton_AnimBlueprint_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UTiger_SkeletalMesh_Skeleton_AnimBlueprint_C, AnimGraphNode_SaveCachedPose) == 0x0008B0, "Member 'UTiger_SkeletalMesh_Skeleton_AnimBlueprint_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UTiger_SkeletalMesh_Skeleton_AnimBlueprint_C, AnimGraphNode_UseCachedPose_1) == 0x0009B8, "Member 'UTiger_SkeletalMesh_Skeleton_AnimBlueprint_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UTiger_SkeletalMesh_Skeleton_AnimBlueprint_C, AnimGraphNode_UseCachedPose) == 0x0009E0, "Member 'UTiger_SkeletalMesh_Skeleton_AnimBlueprint_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UTiger_SkeletalMesh_Skeleton_AnimBlueprint_C, AnimGraphNode_LayeredBoneBlend) == 0x000A08, "Member 'UTiger_SkeletalMesh_Skeleton_AnimBlueprint_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UTiger_SkeletalMesh_Skeleton_AnimBlueprint_C, AnimGraphNode_Slot) == 0x000AE8, "Member 'UTiger_SkeletalMesh_Skeleton_AnimBlueprint_C::AnimGraphNode_Slot' has a wrong offset!");

}

