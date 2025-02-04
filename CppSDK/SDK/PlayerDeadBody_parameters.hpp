#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerDeadBody

#include "Basic.hpp"

#include "EquipmentData_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function PlayerDeadBody.PlayerDeadBody_C.AddImpulse
// 0x0038 (0x0038 - 0x0000)
struct PlayerDeadBody_C_AddImpulse final
{
public:
	struct FVector                                Param_Impulse;                                     // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Param_Location;                                    // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   BoneName;                                          // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerDeadBody_C_AddImpulse) == 0x000008, "Wrong alignment on PlayerDeadBody_C_AddImpulse");
static_assert(sizeof(PlayerDeadBody_C_AddImpulse) == 0x000038, "Wrong size on PlayerDeadBody_C_AddImpulse");
static_assert(offsetof(PlayerDeadBody_C_AddImpulse, Param_Impulse) == 0x000000, "Member 'PlayerDeadBody_C_AddImpulse::Param_Impulse' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_AddImpulse, Param_Location) == 0x000018, "Member 'PlayerDeadBody_C_AddImpulse::Param_Location' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_AddImpulse, BoneName) == 0x000030, "Member 'PlayerDeadBody_C_AddImpulse::BoneName' has a wrong offset!");

// Function PlayerDeadBody.PlayerDeadBody_C.ApplyPhysic
// 0x0001 (0x0001 - 0x0000)
struct PlayerDeadBody_C_ApplyPhysic final
{
public:
	bool                                          IsBlend;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerDeadBody_C_ApplyPhysic) == 0x000001, "Wrong alignment on PlayerDeadBody_C_ApplyPhysic");
static_assert(sizeof(PlayerDeadBody_C_ApplyPhysic) == 0x000001, "Wrong size on PlayerDeadBody_C_ApplyPhysic");
static_assert(offsetof(PlayerDeadBody_C_ApplyPhysic, IsBlend) == 0x000000, "Member 'PlayerDeadBody_C_ApplyPhysic::IsBlend' has a wrong offset!");

// Function PlayerDeadBody.PlayerDeadBody_C.CustomEvent_1
// 0x0008 (0x0008 - 0x0000)
struct PlayerDeadBody_C_CustomEvent_1 final
{
public:
	class FName                                   NewParam;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerDeadBody_C_CustomEvent_1) == 0x000004, "Wrong alignment on PlayerDeadBody_C_CustomEvent_1");
static_assert(sizeof(PlayerDeadBody_C_CustomEvent_1) == 0x000008, "Wrong size on PlayerDeadBody_C_CustomEvent_1");
static_assert(offsetof(PlayerDeadBody_C_CustomEvent_1, NewParam) == 0x000000, "Member 'PlayerDeadBody_C_CustomEvent_1::NewParam' has a wrong offset!");

// Function PlayerDeadBody.PlayerDeadBody_C.DamageImpulseMulti
// 0x0038 (0x0038 - 0x0000)
struct PlayerDeadBody_C_DamageImpulseMulti final
{
public:
	struct FVector                                Direction;                                         // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Param_Location;                                    // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   BoneName;                                          // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerDeadBody_C_DamageImpulseMulti) == 0x000008, "Wrong alignment on PlayerDeadBody_C_DamageImpulseMulti");
static_assert(sizeof(PlayerDeadBody_C_DamageImpulseMulti) == 0x000038, "Wrong size on PlayerDeadBody_C_DamageImpulseMulti");
static_assert(offsetof(PlayerDeadBody_C_DamageImpulseMulti, Direction) == 0x000000, "Member 'PlayerDeadBody_C_DamageImpulseMulti::Direction' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_DamageImpulseMulti, Param_Location) == 0x000018, "Member 'PlayerDeadBody_C_DamageImpulseMulti::Param_Location' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_DamageImpulseMulti, BoneName) == 0x000030, "Member 'PlayerDeadBody_C_DamageImpulseMulti::BoneName' has a wrong offset!");

// Function PlayerDeadBody.PlayerDeadBody_C.ExecuteUbergraph_PlayerDeadBody
// 0x0120 (0x0120 - 0x0000)
struct PlayerDeadBody_C_ExecuteUbergraph_PlayerDeadBody final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NewParam;                       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UABP_DeadBody_C*                        K2Node_DynamicCast_AsABP_Dead_Body;                // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_CustomEvent_Direction;                      // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_Location_1;                     // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_BoneName_1;                     // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_Impulse;                        // 0x00C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_Location;                       // 0x00D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_BoneName;                       // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NewParam)>         K2Node_CreateDelegate_OutputDelegate;              // 0x00F8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_isBlend;                        // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_109[0x7];                                      // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_BoolToDouble_ReturnValue;            // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetAllBodiesBelowPhysicsBlendWeight_PhysicsBlendWeight_ImplicitCast; // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerDeadBody_C_ExecuteUbergraph_PlayerDeadBody) == 0x000008, "Wrong alignment on PlayerDeadBody_C_ExecuteUbergraph_PlayerDeadBody");
static_assert(sizeof(PlayerDeadBody_C_ExecuteUbergraph_PlayerDeadBody) == 0x000120, "Wrong size on PlayerDeadBody_C_ExecuteUbergraph_PlayerDeadBody");
static_assert(offsetof(PlayerDeadBody_C_ExecuteUbergraph_PlayerDeadBody, EntryPoint) == 0x000000, "Member 'PlayerDeadBody_C_ExecuteUbergraph_PlayerDeadBody::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_ExecuteUbergraph_PlayerDeadBody, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000008, "Member 'PlayerDeadBody_C_ExecuteUbergraph_PlayerDeadBody::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_ExecuteUbergraph_PlayerDeadBody, K2Node_CustomEvent_NewParam) == 0x000020, "Member 'PlayerDeadBody_C_ExecuteUbergraph_PlayerDeadBody::K2Node_CustomEvent_NewParam' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_ExecuteUbergraph_PlayerDeadBody, CallFunc_GetAnimInstance_ReturnValue) == 0x000028, "Member 'PlayerDeadBody_C_ExecuteUbergraph_PlayerDeadBody::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_ExecuteUbergraph_PlayerDeadBody, K2Node_DynamicCast_AsABP_Dead_Body) == 0x000030, "Member 'PlayerDeadBody_C_ExecuteUbergraph_PlayerDeadBody::K2Node_DynamicCast_AsABP_Dead_Body' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_ExecuteUbergraph_PlayerDeadBody, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'PlayerDeadBody_C_ExecuteUbergraph_PlayerDeadBody::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_ExecuteUbergraph_PlayerDeadBody, K2Node_CustomEvent_Direction) == 0x000040, "Member 'PlayerDeadBody_C_ExecuteUbergraph_PlayerDeadBody::K2Node_CustomEvent_Direction' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_ExecuteUbergraph_PlayerDeadBody, K2Node_CustomEvent_Location_1) == 0x000058, "Member 'PlayerDeadBody_C_ExecuteUbergraph_PlayerDeadBody::K2Node_CustomEvent_Location_1' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_ExecuteUbergraph_PlayerDeadBody, K2Node_CustomEvent_BoneName_1) == 0x000070, "Member 'PlayerDeadBody_C_ExecuteUbergraph_PlayerDeadBody::K2Node_CustomEvent_BoneName_1' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_ExecuteUbergraph_PlayerDeadBody, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000078, "Member 'PlayerDeadBody_C_ExecuteUbergraph_PlayerDeadBody::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_ExecuteUbergraph_PlayerDeadBody, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000090, "Member 'PlayerDeadBody_C_ExecuteUbergraph_PlayerDeadBody::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_ExecuteUbergraph_PlayerDeadBody, CallFunc_Add_VectorVector_ReturnValue) == 0x0000A8, "Member 'PlayerDeadBody_C_ExecuteUbergraph_PlayerDeadBody::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_ExecuteUbergraph_PlayerDeadBody, K2Node_CustomEvent_Impulse) == 0x0000C0, "Member 'PlayerDeadBody_C_ExecuteUbergraph_PlayerDeadBody::K2Node_CustomEvent_Impulse' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_ExecuteUbergraph_PlayerDeadBody, K2Node_CustomEvent_Location) == 0x0000D8, "Member 'PlayerDeadBody_C_ExecuteUbergraph_PlayerDeadBody::K2Node_CustomEvent_Location' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_ExecuteUbergraph_PlayerDeadBody, K2Node_CustomEvent_BoneName) == 0x0000F0, "Member 'PlayerDeadBody_C_ExecuteUbergraph_PlayerDeadBody::K2Node_CustomEvent_BoneName' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_ExecuteUbergraph_PlayerDeadBody, K2Node_CreateDelegate_OutputDelegate) == 0x0000F8, "Member 'PlayerDeadBody_C_ExecuteUbergraph_PlayerDeadBody::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_ExecuteUbergraph_PlayerDeadBody, K2Node_CustomEvent_isBlend) == 0x000108, "Member 'PlayerDeadBody_C_ExecuteUbergraph_PlayerDeadBody::K2Node_CustomEvent_isBlend' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_ExecuteUbergraph_PlayerDeadBody, CallFunc_Conv_BoolToDouble_ReturnValue) == 0x000110, "Member 'PlayerDeadBody_C_ExecuteUbergraph_PlayerDeadBody::CallFunc_Conv_BoolToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_ExecuteUbergraph_PlayerDeadBody, CallFunc_SetAllBodiesBelowPhysicsBlendWeight_PhysicsBlendWeight_ImplicitCast) == 0x000118, "Member 'PlayerDeadBody_C_ExecuteUbergraph_PlayerDeadBody::CallFunc_SetAllBodiesBelowPhysicsBlendWeight_PhysicsBlendWeight_ImplicitCast' has a wrong offset!");

// Function PlayerDeadBody.PlayerDeadBody_C.Take Off Clothes
// 0x0220 (0x0220 - 0x0000)
struct PlayerDeadBody_C_Take_Off_Clothes final
{
public:
	class FName                                   Param_Name;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEquipmentData                         CallFunc_GetDataTableRowFromName_OutRow;           // 0x0008(0x0180)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_189[0x7];                                      // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0190(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                          CallFunc_GetSkeletalMeshAsset_ReturnValue;         // 0x0198(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                          K2Node_DynamicCast_AsSkeletal_Mesh;                // 0x01A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x01A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1AA[0x6];                                      // 0x01AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1; // 0x01B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                          K2Node_DynamicCast_AsSkeletal_Mesh_1;              // 0x01B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C1[0x7];                                      // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2; // 0x01C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_3; // 0x01D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                          K2Node_DynamicCast_AsSkeletal_Mesh_2;              // 0x01D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E1[0x7];                                      // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMesh*                          K2Node_DynamicCast_AsSkeletal_Mesh_3;              // 0x01E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F1[0x7];                                      // 0x01F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMesh*                          CallFunc_GetSkeletalMeshAsset_ReturnValue_1;       // 0x01F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                          CallFunc_GetSkeletalMeshAsset_ReturnValue_2;       // 0x0200(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_2;    // 0x0209(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_20A[0x6];                                      // 0x020A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMesh*                          CallFunc_GetSkeletalMeshAsset_ReturnValue_3;       // 0x0210(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_3;    // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerDeadBody_C_Take_Off_Clothes) == 0x000008, "Wrong alignment on PlayerDeadBody_C_Take_Off_Clothes");
static_assert(sizeof(PlayerDeadBody_C_Take_Off_Clothes) == 0x000220, "Wrong size on PlayerDeadBody_C_Take_Off_Clothes");
static_assert(offsetof(PlayerDeadBody_C_Take_Off_Clothes, Param_Name) == 0x000000, "Member 'PlayerDeadBody_C_Take_Off_Clothes::Param_Name' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_Take_Off_Clothes, CallFunc_GetDataTableRowFromName_OutRow) == 0x000008, "Member 'PlayerDeadBody_C_Take_Off_Clothes::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_Take_Off_Clothes, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000188, "Member 'PlayerDeadBody_C_Take_Off_Clothes::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_Take_Off_Clothes, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000190, "Member 'PlayerDeadBody_C_Take_Off_Clothes::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_Take_Off_Clothes, CallFunc_GetSkeletalMeshAsset_ReturnValue) == 0x000198, "Member 'PlayerDeadBody_C_Take_Off_Clothes::CallFunc_GetSkeletalMeshAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_Take_Off_Clothes, K2Node_DynamicCast_AsSkeletal_Mesh) == 0x0001A0, "Member 'PlayerDeadBody_C_Take_Off_Clothes::K2Node_DynamicCast_AsSkeletal_Mesh' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_Take_Off_Clothes, K2Node_DynamicCast_bSuccess) == 0x0001A8, "Member 'PlayerDeadBody_C_Take_Off_Clothes::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_Take_Off_Clothes, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0001A9, "Member 'PlayerDeadBody_C_Take_Off_Clothes::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_Take_Off_Clothes, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1) == 0x0001B0, "Member 'PlayerDeadBody_C_Take_Off_Clothes::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_Take_Off_Clothes, K2Node_DynamicCast_AsSkeletal_Mesh_1) == 0x0001B8, "Member 'PlayerDeadBody_C_Take_Off_Clothes::K2Node_DynamicCast_AsSkeletal_Mesh_1' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_Take_Off_Clothes, K2Node_DynamicCast_bSuccess_1) == 0x0001C0, "Member 'PlayerDeadBody_C_Take_Off_Clothes::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_Take_Off_Clothes, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2) == 0x0001C8, "Member 'PlayerDeadBody_C_Take_Off_Clothes::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_Take_Off_Clothes, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_3) == 0x0001D0, "Member 'PlayerDeadBody_C_Take_Off_Clothes::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_Take_Off_Clothes, K2Node_DynamicCast_AsSkeletal_Mesh_2) == 0x0001D8, "Member 'PlayerDeadBody_C_Take_Off_Clothes::K2Node_DynamicCast_AsSkeletal_Mesh_2' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_Take_Off_Clothes, K2Node_DynamicCast_bSuccess_2) == 0x0001E0, "Member 'PlayerDeadBody_C_Take_Off_Clothes::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_Take_Off_Clothes, K2Node_DynamicCast_AsSkeletal_Mesh_3) == 0x0001E8, "Member 'PlayerDeadBody_C_Take_Off_Clothes::K2Node_DynamicCast_AsSkeletal_Mesh_3' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_Take_Off_Clothes, K2Node_DynamicCast_bSuccess_3) == 0x0001F0, "Member 'PlayerDeadBody_C_Take_Off_Clothes::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_Take_Off_Clothes, CallFunc_GetSkeletalMeshAsset_ReturnValue_1) == 0x0001F8, "Member 'PlayerDeadBody_C_Take_Off_Clothes::CallFunc_GetSkeletalMeshAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_Take_Off_Clothes, CallFunc_GetSkeletalMeshAsset_ReturnValue_2) == 0x000200, "Member 'PlayerDeadBody_C_Take_Off_Clothes::CallFunc_GetSkeletalMeshAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_Take_Off_Clothes, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x000208, "Member 'PlayerDeadBody_C_Take_Off_Clothes::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_Take_Off_Clothes, CallFunc_EqualEqual_ObjectObject_ReturnValue_2) == 0x000209, "Member 'PlayerDeadBody_C_Take_Off_Clothes::CallFunc_EqualEqual_ObjectObject_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_Take_Off_Clothes, CallFunc_GetSkeletalMeshAsset_ReturnValue_3) == 0x000210, "Member 'PlayerDeadBody_C_Take_Off_Clothes::CallFunc_GetSkeletalMeshAsset_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_Take_Off_Clothes, CallFunc_EqualEqual_ObjectObject_ReturnValue_3) == 0x000218, "Member 'PlayerDeadBody_C_Take_Off_Clothes::CallFunc_EqualEqual_ObjectObject_ReturnValue_3' has a wrong offset!");

// Function PlayerDeadBody.PlayerDeadBody_C.UpdateMeshView
// 0x0070 (0x0070 - 0x0000)
struct PlayerDeadBody_C_UpdateMeshView final
{
public:
	class USkeletalMeshComponent*                 EquipmentSlot;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                          NewMesh;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                              NewMaterial;                                       // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSkeletalMaterial>              CallFunc_GetMaterials_ReturnValue;                 // 0x0020(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSkeletalMaterial                      CallFunc_Array_Get_Item;                           // 0x0040(0x0028)(NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerDeadBody_C_UpdateMeshView) == 0x000008, "Wrong alignment on PlayerDeadBody_C_UpdateMeshView");
static_assert(sizeof(PlayerDeadBody_C_UpdateMeshView) == 0x000070, "Wrong size on PlayerDeadBody_C_UpdateMeshView");
static_assert(offsetof(PlayerDeadBody_C_UpdateMeshView, EquipmentSlot) == 0x000000, "Member 'PlayerDeadBody_C_UpdateMeshView::EquipmentSlot' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_UpdateMeshView, NewMesh) == 0x000008, "Member 'PlayerDeadBody_C_UpdateMeshView::NewMesh' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_UpdateMeshView, NewMaterial) == 0x000010, "Member 'PlayerDeadBody_C_UpdateMeshView::NewMaterial' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_UpdateMeshView, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'PlayerDeadBody_C_UpdateMeshView::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_UpdateMeshView, CallFunc_GetMaterials_ReturnValue) == 0x000020, "Member 'PlayerDeadBody_C_UpdateMeshView::CallFunc_GetMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_UpdateMeshView, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'PlayerDeadBody_C_UpdateMeshView::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_UpdateMeshView, Temp_int_Array_Index_Variable) == 0x000034, "Member 'PlayerDeadBody_C_UpdateMeshView::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_UpdateMeshView, Temp_int_Loop_Counter_Variable) == 0x000038, "Member 'PlayerDeadBody_C_UpdateMeshView::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_UpdateMeshView, CallFunc_Array_Get_Item) == 0x000040, "Member 'PlayerDeadBody_C_UpdateMeshView::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_UpdateMeshView, CallFunc_Less_IntInt_ReturnValue) == 0x000068, "Member 'PlayerDeadBody_C_UpdateMeshView::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerDeadBody_C_UpdateMeshView, CallFunc_Add_IntInt_ReturnValue) == 0x00006C, "Member 'PlayerDeadBody_C_UpdateMeshView::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

}

