#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_FPFunctions

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "StanceState_structs.hpp"
#include "BPE_Weapon_Type_structs.hpp"


namespace SDK::Params
{

// Function BI_FPFunctions.BI_FPFunctions_C.ArmBrakeChangeMultiplier
// 0x0008 (0x0008 - 0x0000)
struct BI_FPFunctions_C_ArmBrakeChangeMultiplier final
{
public:
	double                                        Input;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_FPFunctions_C_ArmBrakeChangeMultiplier) == 0x000008, "Wrong alignment on BI_FPFunctions_C_ArmBrakeChangeMultiplier");
static_assert(sizeof(BI_FPFunctions_C_ArmBrakeChangeMultiplier) == 0x000008, "Wrong size on BI_FPFunctions_C_ArmBrakeChangeMultiplier");
static_assert(offsetof(BI_FPFunctions_C_ArmBrakeChangeMultiplier, Input) == 0x000000, "Member 'BI_FPFunctions_C_ArmBrakeChangeMultiplier::Input' has a wrong offset!");

// Function BI_FPFunctions.BI_FPFunctions_C.BobcycleIdleMultiplierFPP
// 0x0008 (0x0008 - 0x0000)
struct BI_FPFunctions_C_BobcycleIdleMultiplierFPP final
{
public:
	double                                        BobcycleIdle;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_FPFunctions_C_BobcycleIdleMultiplierFPP) == 0x000008, "Wrong alignment on BI_FPFunctions_C_BobcycleIdleMultiplierFPP");
static_assert(sizeof(BI_FPFunctions_C_BobcycleIdleMultiplierFPP) == 0x000008, "Wrong size on BI_FPFunctions_C_BobcycleIdleMultiplierFPP");
static_assert(offsetof(BI_FPFunctions_C_BobcycleIdleMultiplierFPP, BobcycleIdle) == 0x000000, "Member 'BI_FPFunctions_C_BobcycleIdleMultiplierFPP::BobcycleIdle' has a wrong offset!");

// Function BI_FPFunctions.BI_FPFunctions_C.ChangeStanceState
// 0x0001 (0x0001 - 0x0000)
struct BI_FPFunctions_C_ChangeStanceState final
{
public:
	EStanceState                                  Stance;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_FPFunctions_C_ChangeStanceState) == 0x000001, "Wrong alignment on BI_FPFunctions_C_ChangeStanceState");
static_assert(sizeof(BI_FPFunctions_C_ChangeStanceState) == 0x000001, "Wrong size on BI_FPFunctions_C_ChangeStanceState");
static_assert(offsetof(BI_FPFunctions_C_ChangeStanceState, Stance) == 0x000000, "Member 'BI_FPFunctions_C_ChangeStanceState::Stance' has a wrong offset!");

// Function BI_FPFunctions.BI_FPFunctions_C.GetFireMontage
// 0x0008 (0x0008 - 0x0000)
struct BI_FPFunctions_C_GetFireMontage final
{
public:
	class UAnimMontage*                           Montage;                                           // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_FPFunctions_C_GetFireMontage) == 0x000008, "Wrong alignment on BI_FPFunctions_C_GetFireMontage");
static_assert(sizeof(BI_FPFunctions_C_GetFireMontage) == 0x000008, "Wrong size on BI_FPFunctions_C_GetFireMontage");
static_assert(offsetof(BI_FPFunctions_C_GetFireMontage, Montage) == 0x000000, "Member 'BI_FPFunctions_C_GetFireMontage::Montage' has a wrong offset!");

// Function BI_FPFunctions.BI_FPFunctions_C.GetWallBlock
// 0x0001 (0x0001 - 0x0000)
struct BI_FPFunctions_C_GetWallBlock final
{
public:
	bool                                          WallBlock_;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_FPFunctions_C_GetWallBlock) == 0x000001, "Wrong alignment on BI_FPFunctions_C_GetWallBlock");
static_assert(sizeof(BI_FPFunctions_C_GetWallBlock) == 0x000001, "Wrong size on BI_FPFunctions_C_GetWallBlock");
static_assert(offsetof(BI_FPFunctions_C_GetWallBlock, WallBlock_) == 0x000000, "Member 'BI_FPFunctions_C_GetWallBlock::WallBlock_' has a wrong offset!");

// Function BI_FPFunctions.BI_FPFunctions_C.GetYawPitch
// 0x0010 (0x0010 - 0x0000)
struct BI_FPFunctions_C_GetYawPitch final
{
public:
	double                                        Yaw;                                               // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Pitch;                                             // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_FPFunctions_C_GetYawPitch) == 0x000008, "Wrong alignment on BI_FPFunctions_C_GetYawPitch");
static_assert(sizeof(BI_FPFunctions_C_GetYawPitch) == 0x000010, "Wrong size on BI_FPFunctions_C_GetYawPitch");
static_assert(offsetof(BI_FPFunctions_C_GetYawPitch, Yaw) == 0x000000, "Member 'BI_FPFunctions_C_GetYawPitch::Yaw' has a wrong offset!");
static_assert(offsetof(BI_FPFunctions_C_GetYawPitch, Pitch) == 0x000008, "Member 'BI_FPFunctions_C_GetYawPitch::Pitch' has a wrong offset!");

// Function BI_FPFunctions.BI_FPFunctions_C.Set Aim Punch Rotation
// 0x0018 (0x0018 - 0x0000)
struct BI_FPFunctions_C_Set_Aim_Punch_Rotation final
{
public:
	struct FVector                                Value;                                             // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_FPFunctions_C_Set_Aim_Punch_Rotation) == 0x000008, "Wrong alignment on BI_FPFunctions_C_Set_Aim_Punch_Rotation");
static_assert(sizeof(BI_FPFunctions_C_Set_Aim_Punch_Rotation) == 0x000018, "Wrong size on BI_FPFunctions_C_Set_Aim_Punch_Rotation");
static_assert(offsetof(BI_FPFunctions_C_Set_Aim_Punch_Rotation, Value) == 0x000000, "Member 'BI_FPFunctions_C_Set_Aim_Punch_Rotation::Value' has a wrong offset!");

// Function BI_FPFunctions.BI_FPFunctions_C.SetAnims
// 0x0058 (0x0058 - 0x0000)
struct BI_FPFunctions_C_SetAnims final
{
public:
	class UAnimSequence*                          Idle;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          Equip;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          UnEquip;                                           // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          Move;                                              // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           Fire;                                              // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           FingerIdle;                                        // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          WallOffset_Up;                                     // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          WallOffset_Down;                                   // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 WeaponMesh;                                        // 0x0040(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EBPE_Weapon_Type                              WeaponType;                                        // 0x0048(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   WeaponName;                                        // 0x004C(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EStanceState                                  Stance;                                            // 0x0054(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_FPFunctions_C_SetAnims) == 0x000008, "Wrong alignment on BI_FPFunctions_C_SetAnims");
static_assert(sizeof(BI_FPFunctions_C_SetAnims) == 0x000058, "Wrong size on BI_FPFunctions_C_SetAnims");
static_assert(offsetof(BI_FPFunctions_C_SetAnims, Idle) == 0x000000, "Member 'BI_FPFunctions_C_SetAnims::Idle' has a wrong offset!");
static_assert(offsetof(BI_FPFunctions_C_SetAnims, Equip) == 0x000008, "Member 'BI_FPFunctions_C_SetAnims::Equip' has a wrong offset!");
static_assert(offsetof(BI_FPFunctions_C_SetAnims, UnEquip) == 0x000010, "Member 'BI_FPFunctions_C_SetAnims::UnEquip' has a wrong offset!");
static_assert(offsetof(BI_FPFunctions_C_SetAnims, Move) == 0x000018, "Member 'BI_FPFunctions_C_SetAnims::Move' has a wrong offset!");
static_assert(offsetof(BI_FPFunctions_C_SetAnims, Fire) == 0x000020, "Member 'BI_FPFunctions_C_SetAnims::Fire' has a wrong offset!");
static_assert(offsetof(BI_FPFunctions_C_SetAnims, FingerIdle) == 0x000028, "Member 'BI_FPFunctions_C_SetAnims::FingerIdle' has a wrong offset!");
static_assert(offsetof(BI_FPFunctions_C_SetAnims, WallOffset_Up) == 0x000030, "Member 'BI_FPFunctions_C_SetAnims::WallOffset_Up' has a wrong offset!");
static_assert(offsetof(BI_FPFunctions_C_SetAnims, WallOffset_Down) == 0x000038, "Member 'BI_FPFunctions_C_SetAnims::WallOffset_Down' has a wrong offset!");
static_assert(offsetof(BI_FPFunctions_C_SetAnims, WeaponMesh) == 0x000040, "Member 'BI_FPFunctions_C_SetAnims::WeaponMesh' has a wrong offset!");
static_assert(offsetof(BI_FPFunctions_C_SetAnims, WeaponType) == 0x000048, "Member 'BI_FPFunctions_C_SetAnims::WeaponType' has a wrong offset!");
static_assert(offsetof(BI_FPFunctions_C_SetAnims, WeaponName) == 0x00004C, "Member 'BI_FPFunctions_C_SetAnims::WeaponName' has a wrong offset!");
static_assert(offsetof(BI_FPFunctions_C_SetAnims, Stance) == 0x000054, "Member 'BI_FPFunctions_C_SetAnims::Stance' has a wrong offset!");

// Function BI_FPFunctions.BI_FPFunctions_C.SetBobcycleMultiplier
// 0x0008 (0x0008 - 0x0000)
struct BI_FPFunctions_C_SetBobcycleMultiplier final
{
public:
	double                                        Value;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_FPFunctions_C_SetBobcycleMultiplier) == 0x000008, "Wrong alignment on BI_FPFunctions_C_SetBobcycleMultiplier");
static_assert(sizeof(BI_FPFunctions_C_SetBobcycleMultiplier) == 0x000008, "Wrong size on BI_FPFunctions_C_SetBobcycleMultiplier");
static_assert(offsetof(BI_FPFunctions_C_SetBobcycleMultiplier, Value) == 0x000000, "Member 'BI_FPFunctions_C_SetBobcycleMultiplier::Value' has a wrong offset!");

// Function BI_FPFunctions.BI_FPFunctions_C.SetCrouchingWepOffset
// 0x0018 (0x0018 - 0x0000)
struct BI_FPFunctions_C_SetCrouchingWepOffset final
{
public:
	struct FVector                                Value;                                             // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_FPFunctions_C_SetCrouchingWepOffset) == 0x000008, "Wrong alignment on BI_FPFunctions_C_SetCrouchingWepOffset");
static_assert(sizeof(BI_FPFunctions_C_SetCrouchingWepOffset) == 0x000018, "Wrong size on BI_FPFunctions_C_SetCrouchingWepOffset");
static_assert(offsetof(BI_FPFunctions_C_SetCrouchingWepOffset, Value) == 0x000000, "Member 'BI_FPFunctions_C_SetCrouchingWepOffset::Value' has a wrong offset!");

// Function BI_FPFunctions.BI_FPFunctions_C.SetCrouchPitch
// 0x0008 (0x0008 - 0x0000)
struct BI_FPFunctions_C_SetCrouchPitch final
{
public:
	double                                        Pitch;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_FPFunctions_C_SetCrouchPitch) == 0x000008, "Wrong alignment on BI_FPFunctions_C_SetCrouchPitch");
static_assert(sizeof(BI_FPFunctions_C_SetCrouchPitch) == 0x000008, "Wrong size on BI_FPFunctions_C_SetCrouchPitch");
static_assert(offsetof(BI_FPFunctions_C_SetCrouchPitch, Pitch) == 0x000000, "Member 'BI_FPFunctions_C_SetCrouchPitch::Pitch' has a wrong offset!");

// Function BI_FPFunctions.BI_FPFunctions_C.SetPitchYaw
// 0x0018 (0x0018 - 0x0000)
struct BI_FPFunctions_C_SetPitchYaw final
{
public:
	double                                        Pitch;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Yaw;                                               // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ApplyCustomMultiplier;                             // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_FPFunctions_C_SetPitchYaw) == 0x000008, "Wrong alignment on BI_FPFunctions_C_SetPitchYaw");
static_assert(sizeof(BI_FPFunctions_C_SetPitchYaw) == 0x000018, "Wrong size on BI_FPFunctions_C_SetPitchYaw");
static_assert(offsetof(BI_FPFunctions_C_SetPitchYaw, Pitch) == 0x000000, "Member 'BI_FPFunctions_C_SetPitchYaw::Pitch' has a wrong offset!");
static_assert(offsetof(BI_FPFunctions_C_SetPitchYaw, Yaw) == 0x000008, "Member 'BI_FPFunctions_C_SetPitchYaw::Yaw' has a wrong offset!");
static_assert(offsetof(BI_FPFunctions_C_SetPitchYaw, ApplyCustomMultiplier) == 0x000010, "Member 'BI_FPFunctions_C_SetPitchYaw::ApplyCustomMultiplier' has a wrong offset!");

// Function BI_FPFunctions.BI_FPFunctions_C.SetRecoilRotation
// 0x0018 (0x0018 - 0x0000)
struct BI_FPFunctions_C_SetRecoilRotation final
{
public:
	struct FVector                                Value;                                             // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_FPFunctions_C_SetRecoilRotation) == 0x000008, "Wrong alignment on BI_FPFunctions_C_SetRecoilRotation");
static_assert(sizeof(BI_FPFunctions_C_SetRecoilRotation) == 0x000018, "Wrong size on BI_FPFunctions_C_SetRecoilRotation");
static_assert(offsetof(BI_FPFunctions_C_SetRecoilRotation, Value) == 0x000000, "Member 'BI_FPFunctions_C_SetRecoilRotation::Value' has a wrong offset!");

// Function BI_FPFunctions.BI_FPFunctions_C.SetRotationSettings
// 0x0018 (0x0018 - 0x0000)
struct BI_FPFunctions_C_SetRotationSettings final
{
public:
	double                                        RotationMultiplier;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RotationAnchor;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RotationLimit;                                     // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_FPFunctions_C_SetRotationSettings) == 0x000008, "Wrong alignment on BI_FPFunctions_C_SetRotationSettings");
static_assert(sizeof(BI_FPFunctions_C_SetRotationSettings) == 0x000018, "Wrong size on BI_FPFunctions_C_SetRotationSettings");
static_assert(offsetof(BI_FPFunctions_C_SetRotationSettings, RotationMultiplier) == 0x000000, "Member 'BI_FPFunctions_C_SetRotationSettings::RotationMultiplier' has a wrong offset!");
static_assert(offsetof(BI_FPFunctions_C_SetRotationSettings, RotationAnchor) == 0x000008, "Member 'BI_FPFunctions_C_SetRotationSettings::RotationAnchor' has a wrong offset!");
static_assert(offsetof(BI_FPFunctions_C_SetRotationSettings, RotationLimit) == 0x000010, "Member 'BI_FPFunctions_C_SetRotationSettings::RotationLimit' has a wrong offset!");

// Function BI_FPFunctions.BI_FPFunctions_C.SetScopeInPos
// 0x0001 (0x0001 - 0x0000)
struct BI_FPFunctions_C_SetScopeInPos final
{
public:
	bool                                          ScopeInPos;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_FPFunctions_C_SetScopeInPos) == 0x000001, "Wrong alignment on BI_FPFunctions_C_SetScopeInPos");
static_assert(sizeof(BI_FPFunctions_C_SetScopeInPos) == 0x000001, "Wrong size on BI_FPFunctions_C_SetScopeInPos");
static_assert(offsetof(BI_FPFunctions_C_SetScopeInPos, ScopeInPos) == 0x000000, "Member 'BI_FPFunctions_C_SetScopeInPos::ScopeInPos' has a wrong offset!");

}
