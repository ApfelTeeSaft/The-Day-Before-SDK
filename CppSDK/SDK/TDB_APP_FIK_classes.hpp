#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TDB_APP_FIK

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "TDB_APP_FIK_structs.hpp"
#include "ControlRig_structs.hpp"
#include "BPE_Weapon_Type_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass TDB_APP_FIK.TDB_APP_FIK_C
// 0x28B0 (0x2C00 - 0x0350)
class UTDB_APP_FIK_C final : public UAnimInstance
{
public:
	uint8                                         Pad_348[0x8];                                      // 0x0348(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct TDB_APP_FIK::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x0358(0x0020)(HasGetValueTypeHash)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0378(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0380(0x0008)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;             // 0x0388(0x0020)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_4;                    // 0x03A8(0x0108)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_3;                    // 0x04B0(0x0108)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_3;                   // 0x05B8(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_8;                     // 0x0600(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_7;                     // 0x0628(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_6;                     // 0x0650(0x0028)()
	struct FAnimNode_ModifyCurve                  AnimGraphNode_ModifyCurve;                         // 0x0678(0x0100)()
	uint8                                         Pad_778[0x8];                                      // 0x0778(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_TwoBoneIK                    AnimGraphNode_TwoBoneIK_1;                         // 0x0780(0x0280)()
	struct FAnimNode_TwoBoneIK                    AnimGraphNode_TwoBoneIK;                           // 0x0A00(0x0280)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_4;                        // 0x0C80(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_3;                        // 0x0DA8(0x0128)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_2;                   // 0x0ED0(0x0048)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_2;                    // 0x0F18(0x0108)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_5;                     // 0x1020(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_4;                     // 0x1048(0x0028)()
	struct FAnimNode_CopyBone                     AnimGraphNode_CopyBone_3;                          // 0x1070(0x00F0)()
	struct FAnimNode_CopyBone                     AnimGraphNode_CopyBone_2;                          // 0x1160(0x00F0)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x1250(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x1378(0x0128)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;             // 0x14A0(0x0020)()
	struct FAnimNode_CopyBone                     AnimGraphNode_CopyBone_1;                          // 0x14C0(0x00F0)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x15B0(0x0020)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x15D0(0x0020)()
	struct FAnimNode_ControlRig                   AnimGraphNode_ControlRig_2;                        // 0x15F0(0x0470)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x1A60(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x1A80(0x00C8)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x1B48(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x1B90(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x1BB8(0x0028)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x1BE0(0x0128)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x1D08(0x0048)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x1D50(0x0020)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x1D70(0x0108)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x1E78(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x1EA0(0x0028)()
	struct FAnimNode_CopyBone                     AnimGraphNode_CopyBone;                            // 0x1EC8(0x00F0)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x1FB8(0x0020)()
	struct FAnimNode_ControlRig                   AnimGraphNode_ControlRig_1;                        // 0x1FD8(0x0470)()
	struct FAnimNode_ControlRig                   AnimGraphNode_ControlRig;                          // 0x2448(0x0470)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x28B8(0x0108)()
	float                                         K2Node_PropertyAccess_2;                           // 0x29C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_PropertyAccess_1;                           // 0x29C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBPE_Weapon_Type                              K2Node_PropertyAccess;                             // 0x29C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __CustomProperty_Aiming_2ED94FE14872279158503086BDDF0FC9; // 0x29C6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29C7[0x1];                                     // 0x29C7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        __CustomProperty_Weight_2ED94FE14872279158503086BDDF0FC9; // 0x29C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __CustomProperty_ShotgunArm_2ED94FE14872279158503086BDDF0FC9; // 0x29D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __CustomProperty_Aiming_BB42BFE34ED39217D3AB898AEDDCF9B5; // 0x29D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29D2[0x6];                                     // 0x29D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        __CustomProperty_Weight_BB42BFE34ED39217D3AB898AEDDCF9B5; // 0x29D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __CustomProperty_ShotgunArm_BB42BFE34ED39217D3AB898AEDDCF9B5; // 0x29E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __CustomProperty_Aiming_DF974B054F1815DF9742EFA0F94BC53E; // 0x29E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29E2[0x6];                                     // 0x29E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        __CustomProperty_Weight_DF974B054F1815DF9742EFA0F94BC53E; // 0x29E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __CustomProperty_ShotgunArm_DF974B054F1815DF9742EFA0F94BC53E; // 0x29F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29F1[0x7];                                     // 0x29F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                __CustomProperty_PelvisOffset_6E4B1963474AC02669F579AE2BD0EFED; // 0x29F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          As_Survive_Animator_2;                             // 0x2A10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          HasSurvAnim;                                       // 0x2A18(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A19[0x7];                                     // 0x2A19(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASurvivalPlayer_C*                      As_Survival_Player;                                // 0x2A20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        DeltaTimeX;                                        // 0x2A28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             Character;                                         // 0x2A30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Eating;                                            // 0x2A38(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BlockLeftEffector;                                 // 0x2A39(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalPlayer;                                       // 0x2A3A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A3B[0x5];                                     // 0x2A3B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Velocity;                                          // 0x2A40(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Reloading;                                      // 0x2A58(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Play_Spine_Montage;                                // 0x2A59(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A5A[0x6];                                     // 0x2A5A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        FootLockAlpha_R;                                   // 0x2A60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FootLockLocation_R;                                // 0x2A68(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               FoorLockRotation_R;                                // 0x2A80(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         LeftHandAlpha;                                     // 0x2A98(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A9C[0x4];                                     // 0x2A9C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               FootLockRotation_L;                                // 0x2AA0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                FootLockLocation_L;                                // 0x2AB8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FootLockAlpha_L;                                   // 0x2AD0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasLeftHandEffector;                               // 0x2AD8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EnableIK;                                          // 0x2AD9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2ADA[0x6];                                     // 0x2ADA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        PP_PelvisHeight;                                   // 0x2AE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PelvisOffset;                                      // 0x2AE8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Shotgun_;                                          // 0x2B00(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TacticalGripActive;                                // 0x2B01(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B02[0xE];                                     // 0x2B02(0x000E)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Grip_Offset;                                       // 0x2B10(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        GripWeight;                                        // 0x2B70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Aiming;                                            // 0x2B78(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B79[0x7];                                     // 0x2B79(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        MovingAlpha;                                       // 0x2B80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B88[0x8];                                     // 0x2B88(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             LeftHandEffTransform;                              // 0x2B90(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Incline;                                           // 0x2BF0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* Param_AnimGraph);
	void BlueprintInitializeAnimation();
	void BlueprintThreadSafeUpdateAnimation(float DeltaTime);
	void BlueprintUpdateAnimation(float Param_DeltaTimeX);
	bool CheckEquipAnim();
	bool CheckWeaponData();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TDB_APP_FIK_AnimGraphNode_BlendListByBool_61615EC64BEA87425F6E1DB0D3107DDE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TDB_APP_FIK_AnimGraphNode_BlendListByBool_A0DB71844C24815A752885822C96AD0F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TDB_APP_FIK_AnimGraphNode_ModifyBone_42EC520E46F8122748A2D5BD22674472();
	void ExecuteUbergraph_TDB_APP_FIK(int32 EntryPoint);
	void SetFootLocking(class FName FootLockCurve, class FName IKFootBone, double& CurrentFootLockAlpha, struct FVector& CurrentFootLockLocation, struct FRotator& CurrentFootLockRotation);
	void SetFootLockOffsets(struct FVector& LocalLocation, struct FRotator& LocalRotation);
	void SetMovingAlpha();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TDB_APP_FIK_C">();
	}
	static class UTDB_APP_FIK_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTDB_APP_FIK_C>();
	}
};
static_assert(alignof(UTDB_APP_FIK_C) == 0x000010, "Wrong alignment on UTDB_APP_FIK_C");
static_assert(sizeof(UTDB_APP_FIK_C) == 0x002C00, "Wrong size on UTDB_APP_FIK_C");
static_assert(offsetof(UTDB_APP_FIK_C, UberGraphFrame) == 0x000350, "Member 'UTDB_APP_FIK_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, __AnimBlueprintMutables) == 0x000358, "Member 'UTDB_APP_FIK_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, AnimBlueprintExtension_PropertyAccess) == 0x000378, "Member 'UTDB_APP_FIK_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, AnimBlueprintExtension_Base) == 0x000380, "Member 'UTDB_APP_FIK_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, AnimGraphNode_ComponentToLocalSpace_2) == 0x000388, "Member 'UTDB_APP_FIK_C::AnimGraphNode_ComponentToLocalSpace_2' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, AnimGraphNode_SaveCachedPose_4) == 0x0003A8, "Member 'UTDB_APP_FIK_C::AnimGraphNode_SaveCachedPose_4' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, AnimGraphNode_SaveCachedPose_3) == 0x0004B0, "Member 'UTDB_APP_FIK_C::AnimGraphNode_SaveCachedPose_3' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, AnimGraphNode_BlendListByBool_3) == 0x0005B8, "Member 'UTDB_APP_FIK_C::AnimGraphNode_BlendListByBool_3' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, AnimGraphNode_UseCachedPose_8) == 0x000600, "Member 'UTDB_APP_FIK_C::AnimGraphNode_UseCachedPose_8' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, AnimGraphNode_UseCachedPose_7) == 0x000628, "Member 'UTDB_APP_FIK_C::AnimGraphNode_UseCachedPose_7' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, AnimGraphNode_UseCachedPose_6) == 0x000650, "Member 'UTDB_APP_FIK_C::AnimGraphNode_UseCachedPose_6' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, AnimGraphNode_ModifyCurve) == 0x000678, "Member 'UTDB_APP_FIK_C::AnimGraphNode_ModifyCurve' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, AnimGraphNode_TwoBoneIK_1) == 0x000780, "Member 'UTDB_APP_FIK_C::AnimGraphNode_TwoBoneIK_1' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, AnimGraphNode_TwoBoneIK) == 0x000A00, "Member 'UTDB_APP_FIK_C::AnimGraphNode_TwoBoneIK' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, AnimGraphNode_ModifyBone_4) == 0x000C80, "Member 'UTDB_APP_FIK_C::AnimGraphNode_ModifyBone_4' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, AnimGraphNode_ModifyBone_3) == 0x000DA8, "Member 'UTDB_APP_FIK_C::AnimGraphNode_ModifyBone_3' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, AnimGraphNode_BlendListByBool_2) == 0x000ED0, "Member 'UTDB_APP_FIK_C::AnimGraphNode_BlendListByBool_2' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, AnimGraphNode_SaveCachedPose_2) == 0x000F18, "Member 'UTDB_APP_FIK_C::AnimGraphNode_SaveCachedPose_2' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, AnimGraphNode_UseCachedPose_5) == 0x001020, "Member 'UTDB_APP_FIK_C::AnimGraphNode_UseCachedPose_5' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, AnimGraphNode_UseCachedPose_4) == 0x001048, "Member 'UTDB_APP_FIK_C::AnimGraphNode_UseCachedPose_4' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, AnimGraphNode_CopyBone_3) == 0x001070, "Member 'UTDB_APP_FIK_C::AnimGraphNode_CopyBone_3' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, AnimGraphNode_CopyBone_2) == 0x001160, "Member 'UTDB_APP_FIK_C::AnimGraphNode_CopyBone_2' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, AnimGraphNode_ModifyBone_2) == 0x001250, "Member 'UTDB_APP_FIK_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, AnimGraphNode_ModifyBone_1) == 0x001378, "Member 'UTDB_APP_FIK_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, AnimGraphNode_LocalToComponentSpace_2) == 0x0014A0, "Member 'UTDB_APP_FIK_C::AnimGraphNode_LocalToComponentSpace_2' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, AnimGraphNode_CopyBone_1) == 0x0014C0, "Member 'UTDB_APP_FIK_C::AnimGraphNode_CopyBone_1' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, AnimGraphNode_ComponentToLocalSpace_1) == 0x0015B0, "Member 'UTDB_APP_FIK_C::AnimGraphNode_ComponentToLocalSpace_1' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, AnimGraphNode_LocalToComponentSpace_1) == 0x0015D0, "Member 'UTDB_APP_FIK_C::AnimGraphNode_LocalToComponentSpace_1' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, AnimGraphNode_ControlRig_2) == 0x0015F0, "Member 'UTDB_APP_FIK_C::AnimGraphNode_ControlRig_2' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, AnimGraphNode_LocalToComponentSpace) == 0x001A60, "Member 'UTDB_APP_FIK_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, AnimGraphNode_LinkedInputPose) == 0x001A80, "Member 'UTDB_APP_FIK_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, AnimGraphNode_BlendListByBool_1) == 0x001B48, "Member 'UTDB_APP_FIK_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, AnimGraphNode_UseCachedPose_3) == 0x001B90, "Member 'UTDB_APP_FIK_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, AnimGraphNode_UseCachedPose_2) == 0x001BB8, "Member 'UTDB_APP_FIK_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, AnimGraphNode_ModifyBone) == 0x001BE0, "Member 'UTDB_APP_FIK_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, AnimGraphNode_BlendListByBool) == 0x001D08, "Member 'UTDB_APP_FIK_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, AnimGraphNode_ComponentToLocalSpace) == 0x001D50, "Member 'UTDB_APP_FIK_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, AnimGraphNode_SaveCachedPose_1) == 0x001D70, "Member 'UTDB_APP_FIK_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, AnimGraphNode_UseCachedPose_1) == 0x001E78, "Member 'UTDB_APP_FIK_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, AnimGraphNode_UseCachedPose) == 0x001EA0, "Member 'UTDB_APP_FIK_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, AnimGraphNode_CopyBone) == 0x001EC8, "Member 'UTDB_APP_FIK_C::AnimGraphNode_CopyBone' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, AnimGraphNode_Root) == 0x001FB8, "Member 'UTDB_APP_FIK_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, AnimGraphNode_ControlRig_1) == 0x001FD8, "Member 'UTDB_APP_FIK_C::AnimGraphNode_ControlRig_1' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, AnimGraphNode_ControlRig) == 0x002448, "Member 'UTDB_APP_FIK_C::AnimGraphNode_ControlRig' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, AnimGraphNode_SaveCachedPose) == 0x0028B8, "Member 'UTDB_APP_FIK_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, K2Node_PropertyAccess_2) == 0x0029C0, "Member 'UTDB_APP_FIK_C::K2Node_PropertyAccess_2' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, K2Node_PropertyAccess_1) == 0x0029C4, "Member 'UTDB_APP_FIK_C::K2Node_PropertyAccess_1' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, K2Node_PropertyAccess) == 0x0029C5, "Member 'UTDB_APP_FIK_C::K2Node_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, __CustomProperty_Aiming_2ED94FE14872279158503086BDDF0FC9) == 0x0029C6, "Member 'UTDB_APP_FIK_C::__CustomProperty_Aiming_2ED94FE14872279158503086BDDF0FC9' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, __CustomProperty_Weight_2ED94FE14872279158503086BDDF0FC9) == 0x0029C8, "Member 'UTDB_APP_FIK_C::__CustomProperty_Weight_2ED94FE14872279158503086BDDF0FC9' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, __CustomProperty_ShotgunArm_2ED94FE14872279158503086BDDF0FC9) == 0x0029D0, "Member 'UTDB_APP_FIK_C::__CustomProperty_ShotgunArm_2ED94FE14872279158503086BDDF0FC9' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, __CustomProperty_Aiming_BB42BFE34ED39217D3AB898AEDDCF9B5) == 0x0029D1, "Member 'UTDB_APP_FIK_C::__CustomProperty_Aiming_BB42BFE34ED39217D3AB898AEDDCF9B5' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, __CustomProperty_Weight_BB42BFE34ED39217D3AB898AEDDCF9B5) == 0x0029D8, "Member 'UTDB_APP_FIK_C::__CustomProperty_Weight_BB42BFE34ED39217D3AB898AEDDCF9B5' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, __CustomProperty_ShotgunArm_BB42BFE34ED39217D3AB898AEDDCF9B5) == 0x0029E0, "Member 'UTDB_APP_FIK_C::__CustomProperty_ShotgunArm_BB42BFE34ED39217D3AB898AEDDCF9B5' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, __CustomProperty_Aiming_DF974B054F1815DF9742EFA0F94BC53E) == 0x0029E1, "Member 'UTDB_APP_FIK_C::__CustomProperty_Aiming_DF974B054F1815DF9742EFA0F94BC53E' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, __CustomProperty_Weight_DF974B054F1815DF9742EFA0F94BC53E) == 0x0029E8, "Member 'UTDB_APP_FIK_C::__CustomProperty_Weight_DF974B054F1815DF9742EFA0F94BC53E' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, __CustomProperty_ShotgunArm_DF974B054F1815DF9742EFA0F94BC53E) == 0x0029F0, "Member 'UTDB_APP_FIK_C::__CustomProperty_ShotgunArm_DF974B054F1815DF9742EFA0F94BC53E' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, __CustomProperty_PelvisOffset_6E4B1963474AC02669F579AE2BD0EFED) == 0x0029F8, "Member 'UTDB_APP_FIK_C::__CustomProperty_PelvisOffset_6E4B1963474AC02669F579AE2BD0EFED' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, As_Survive_Animator_2) == 0x002A10, "Member 'UTDB_APP_FIK_C::As_Survive_Animator_2' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, HasSurvAnim) == 0x002A18, "Member 'UTDB_APP_FIK_C::HasSurvAnim' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, As_Survival_Player) == 0x002A20, "Member 'UTDB_APP_FIK_C::As_Survival_Player' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, DeltaTimeX) == 0x002A28, "Member 'UTDB_APP_FIK_C::DeltaTimeX' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, Character) == 0x002A30, "Member 'UTDB_APP_FIK_C::Character' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, Eating) == 0x002A38, "Member 'UTDB_APP_FIK_C::Eating' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, BlockLeftEffector) == 0x002A39, "Member 'UTDB_APP_FIK_C::BlockLeftEffector' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, LocalPlayer) == 0x002A3A, "Member 'UTDB_APP_FIK_C::LocalPlayer' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, Velocity) == 0x002A40, "Member 'UTDB_APP_FIK_C::Velocity' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, Is_Reloading) == 0x002A58, "Member 'UTDB_APP_FIK_C::Is_Reloading' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, Play_Spine_Montage) == 0x002A59, "Member 'UTDB_APP_FIK_C::Play_Spine_Montage' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, FootLockAlpha_R) == 0x002A60, "Member 'UTDB_APP_FIK_C::FootLockAlpha_R' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, FootLockLocation_R) == 0x002A68, "Member 'UTDB_APP_FIK_C::FootLockLocation_R' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, FoorLockRotation_R) == 0x002A80, "Member 'UTDB_APP_FIK_C::FoorLockRotation_R' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, LeftHandAlpha) == 0x002A98, "Member 'UTDB_APP_FIK_C::LeftHandAlpha' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, FootLockRotation_L) == 0x002AA0, "Member 'UTDB_APP_FIK_C::FootLockRotation_L' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, FootLockLocation_L) == 0x002AB8, "Member 'UTDB_APP_FIK_C::FootLockLocation_L' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, FootLockAlpha_L) == 0x002AD0, "Member 'UTDB_APP_FIK_C::FootLockAlpha_L' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, HasLeftHandEffector) == 0x002AD8, "Member 'UTDB_APP_FIK_C::HasLeftHandEffector' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, EnableIK) == 0x002AD9, "Member 'UTDB_APP_FIK_C::EnableIK' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, PP_PelvisHeight) == 0x002AE0, "Member 'UTDB_APP_FIK_C::PP_PelvisHeight' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, PelvisOffset) == 0x002AE8, "Member 'UTDB_APP_FIK_C::PelvisOffset' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, Shotgun_) == 0x002B00, "Member 'UTDB_APP_FIK_C::Shotgun_' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, TacticalGripActive) == 0x002B01, "Member 'UTDB_APP_FIK_C::TacticalGripActive' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, Grip_Offset) == 0x002B10, "Member 'UTDB_APP_FIK_C::Grip_Offset' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, GripWeight) == 0x002B70, "Member 'UTDB_APP_FIK_C::GripWeight' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, Aiming) == 0x002B78, "Member 'UTDB_APP_FIK_C::Aiming' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, MovingAlpha) == 0x002B80, "Member 'UTDB_APP_FIK_C::MovingAlpha' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, LeftHandEffTransform) == 0x002B90, "Member 'UTDB_APP_FIK_C::LeftHandEffTransform' has a wrong offset!");
static_assert(offsetof(UTDB_APP_FIK_C, Incline) == 0x002BF0, "Member 'UTDB_APP_FIK_C::Incline' has a wrong offset!");

}

