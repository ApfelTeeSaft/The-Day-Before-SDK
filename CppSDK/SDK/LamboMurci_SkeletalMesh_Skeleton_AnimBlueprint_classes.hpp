#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FGearPlugin_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint.LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C
// 0x0E30 (0x1190 - 0x0360)
class ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C final : public UFGearAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0368(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0370(0x0008)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x0378(0x00E0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x0458(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x0480(0x0028)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x04A8(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x04F0(0x0048)()
	struct FAnimNode_MeshSpaceRefPose             AnimGraphNode_MeshRefPose;                         // 0x0538(0x0010)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0548(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_4;                        // 0x0568(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_3;                        // 0x0690(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x07B8(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x08E0(0x0128)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0A08(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x0A28(0x0128)()
	struct FAnimNode_LookAt                       AnimGraphNode_LookAt_1;                            // 0x0B50(0x0250)()
	struct FAnimNode_LookAt                       AnimGraphNode_LookAt;                              // 0x0DA0(0x0250)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x0FF0(0x0108)()
	class USkeletalMeshComponent*                 LamboMesh;                                         // 0x10F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                L_F_Wheel;                                         // 0x1100(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                R_F_Wheel;                                         // 0x1118(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                L_B_Wheel;                                         // 0x1130(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                R_B_Wheel;                                         // 0x1148(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               R_F_Wheel_rot;                                     // 0x1160(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               L_F_Wheel_rot;                                     // 0x1178(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void BlueprintInitializeAnimation();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_114E1A8B43FADD9AEF4985BE7E7757B6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_787EEBF0418E476EBF9D4A8AC5177FAD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_8CC33AC443F07A7090FEFEB690A4D224();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_CDF44D6A489ED8687214A1AEFF655773();
	void ExecuteUbergraph_LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C">();
	}
	static class ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C>();
	}
};
static_assert(alignof(ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C) == 0x000010, "Wrong alignment on ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C");
static_assert(sizeof(ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C) == 0x001190, "Wrong size on ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C");
static_assert(offsetof(ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C, UberGraphFrame) == 0x000360, "Member 'ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C, AnimBlueprintExtension_PropertyAccess) == 0x000368, "Member 'ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C, AnimBlueprintExtension_Base) == 0x000370, "Member 'ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C, AnimGraphNode_LayeredBoneBlend) == 0x000378, "Member 'ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C, AnimGraphNode_UseCachedPose_1) == 0x000458, "Member 'ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C, AnimGraphNode_UseCachedPose) == 0x000480, "Member 'ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C, AnimGraphNode_Slot_1) == 0x0004A8, "Member 'ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C, AnimGraphNode_Slot) == 0x0004F0, "Member 'ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C, AnimGraphNode_MeshRefPose) == 0x000538, "Member 'ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C::AnimGraphNode_MeshRefPose' has a wrong offset!");
static_assert(offsetof(ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C, AnimGraphNode_Root) == 0x000548, "Member 'ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C, AnimGraphNode_ModifyBone_4) == 0x000568, "Member 'ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C::AnimGraphNode_ModifyBone_4' has a wrong offset!");
static_assert(offsetof(ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C, AnimGraphNode_ModifyBone_3) == 0x000690, "Member 'ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C::AnimGraphNode_ModifyBone_3' has a wrong offset!");
static_assert(offsetof(ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C, AnimGraphNode_ModifyBone_2) == 0x0007B8, "Member 'ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C, AnimGraphNode_ModifyBone_1) == 0x0008E0, "Member 'ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C, AnimGraphNode_ComponentToLocalSpace) == 0x000A08, "Member 'ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C, AnimGraphNode_ModifyBone) == 0x000A28, "Member 'ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C, AnimGraphNode_LookAt_1) == 0x000B50, "Member 'ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C::AnimGraphNode_LookAt_1' has a wrong offset!");
static_assert(offsetof(ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C, AnimGraphNode_LookAt) == 0x000DA0, "Member 'ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C::AnimGraphNode_LookAt' has a wrong offset!");
static_assert(offsetof(ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C, AnimGraphNode_SaveCachedPose) == 0x000FF0, "Member 'ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C, LamboMesh) == 0x0010F8, "Member 'ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C::LamboMesh' has a wrong offset!");
static_assert(offsetof(ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C, L_F_Wheel) == 0x001100, "Member 'ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C::L_F_Wheel' has a wrong offset!");
static_assert(offsetof(ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C, R_F_Wheel) == 0x001118, "Member 'ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C::R_F_Wheel' has a wrong offset!");
static_assert(offsetof(ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C, L_B_Wheel) == 0x001130, "Member 'ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C::L_B_Wheel' has a wrong offset!");
static_assert(offsetof(ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C, R_B_Wheel) == 0x001148, "Member 'ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C::R_B_Wheel' has a wrong offset!");
static_assert(offsetof(ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C, R_F_Wheel_rot) == 0x001160, "Member 'ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C::R_F_Wheel_rot' has a wrong offset!");
static_assert(offsetof(ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C, L_F_Wheel_rot) == 0x001178, "Member 'ULamboMurci_SkeletalMesh_Skeleton_AnimBlueprint_C::L_F_Wheel_rot' has a wrong offset!");

}
