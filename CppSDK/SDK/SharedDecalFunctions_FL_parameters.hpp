#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SharedDecalFunctions_FL

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function SharedDecalFunctions_FL.SharedDecalFunctions_FL_C.NewFunction_0
// 0x0008 (0x0008 - 0x0000)
struct SharedDecalFunctions_FL_C_NewFunction_0 final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SharedDecalFunctions_FL_C_NewFunction_0) == 0x000008, "Wrong alignment on SharedDecalFunctions_FL_C_NewFunction_0");
static_assert(sizeof(SharedDecalFunctions_FL_C_NewFunction_0) == 0x000008, "Wrong size on SharedDecalFunctions_FL_C_NewFunction_0");
static_assert(offsetof(SharedDecalFunctions_FL_C_NewFunction_0, __WorldContext) == 0x000000, "Member 'SharedDecalFunctions_FL_C_NewFunction_0::__WorldContext' has a wrong offset!");

// Function SharedDecalFunctions_FL.SharedDecalFunctions_FL_C.AlignDecalToSurface
// 0x0428 (0x0428 - 0x0000)
struct SharedDecalFunctions_FL_C_AlignDecalToSurface final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DecalComponent;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        _DecalComponentRef;                                // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 _ActorRef;                                         // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0028(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue_1;      // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetUpVector_ReturnValue;                  // 0x00E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetRightVector_ReturnValue;               // 0x00F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array;                            // 0x0110(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x0120(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x0138(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingleForObjects_OutHit;         // 0x0150(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingleForObjects_ReturnValue;    // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0239(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x023A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23B[0x1];                                      // 0x023B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x023C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_244[0x4];                                      // 0x0244(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0248(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0260(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0278(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0290(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x02A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x02B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x02B8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x02C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x02C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x02D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x02D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2DC[0x4];                                      // 0x02DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x02E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x02F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_2;       // 0x0310(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotationFromAxes_ReturnValue;         // 0x0328(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult; // 0x0340(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(SharedDecalFunctions_FL_C_AlignDecalToSurface) == 0x000008, "Wrong alignment on SharedDecalFunctions_FL_C_AlignDecalToSurface");
static_assert(sizeof(SharedDecalFunctions_FL_C_AlignDecalToSurface) == 0x000428, "Wrong size on SharedDecalFunctions_FL_C_AlignDecalToSurface");
static_assert(offsetof(SharedDecalFunctions_FL_C_AlignDecalToSurface, Actor) == 0x000000, "Member 'SharedDecalFunctions_FL_C_AlignDecalToSurface::Actor' has a wrong offset!");
static_assert(offsetof(SharedDecalFunctions_FL_C_AlignDecalToSurface, DecalComponent) == 0x000008, "Member 'SharedDecalFunctions_FL_C_AlignDecalToSurface::DecalComponent' has a wrong offset!");
static_assert(offsetof(SharedDecalFunctions_FL_C_AlignDecalToSurface, __WorldContext) == 0x000010, "Member 'SharedDecalFunctions_FL_C_AlignDecalToSurface::__WorldContext' has a wrong offset!");
static_assert(offsetof(SharedDecalFunctions_FL_C_AlignDecalToSurface, _DecalComponentRef) == 0x000018, "Member 'SharedDecalFunctions_FL_C_AlignDecalToSurface::_DecalComponentRef' has a wrong offset!");
static_assert(offsetof(SharedDecalFunctions_FL_C_AlignDecalToSurface, _ActorRef) == 0x000020, "Member 'SharedDecalFunctions_FL_C_AlignDecalToSurface::_ActorRef' has a wrong offset!");
static_assert(offsetof(SharedDecalFunctions_FL_C_AlignDecalToSurface, Temp_object_Variable) == 0x000028, "Member 'SharedDecalFunctions_FL_C_AlignDecalToSurface::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(SharedDecalFunctions_FL_C_AlignDecalToSurface, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000038, "Member 'SharedDecalFunctions_FL_C_AlignDecalToSurface::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SharedDecalFunctions_FL_C_AlignDecalToSurface, CallFunc_GetActorForwardVector_ReturnValue) == 0x000050, "Member 'SharedDecalFunctions_FL_C_AlignDecalToSurface::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(SharedDecalFunctions_FL_C_AlignDecalToSurface, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000068, "Member 'SharedDecalFunctions_FL_C_AlignDecalToSurface::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SharedDecalFunctions_FL_C_AlignDecalToSurface, CallFunc_GetActorForwardVector_ReturnValue_1) == 0x000080, "Member 'SharedDecalFunctions_FL_C_AlignDecalToSurface::CallFunc_GetActorForwardVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SharedDecalFunctions_FL_C_AlignDecalToSurface, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x000098, "Member 'SharedDecalFunctions_FL_C_AlignDecalToSurface::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SharedDecalFunctions_FL_C_AlignDecalToSurface, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x0000B0, "Member 'SharedDecalFunctions_FL_C_AlignDecalToSurface::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SharedDecalFunctions_FL_C_AlignDecalToSurface, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0000C8, "Member 'SharedDecalFunctions_FL_C_AlignDecalToSurface::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(SharedDecalFunctions_FL_C_AlignDecalToSurface, CallFunc_GetUpVector_ReturnValue) == 0x0000E0, "Member 'SharedDecalFunctions_FL_C_AlignDecalToSurface::CallFunc_GetUpVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(SharedDecalFunctions_FL_C_AlignDecalToSurface, CallFunc_GetRightVector_ReturnValue) == 0x0000F8, "Member 'SharedDecalFunctions_FL_C_AlignDecalToSurface::CallFunc_GetRightVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(SharedDecalFunctions_FL_C_AlignDecalToSurface, K2Node_MakeArray_Array) == 0x000110, "Member 'SharedDecalFunctions_FL_C_AlignDecalToSurface::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(SharedDecalFunctions_FL_C_AlignDecalToSurface, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x000120, "Member 'SharedDecalFunctions_FL_C_AlignDecalToSurface::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SharedDecalFunctions_FL_C_AlignDecalToSurface, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x000138, "Member 'SharedDecalFunctions_FL_C_AlignDecalToSurface::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SharedDecalFunctions_FL_C_AlignDecalToSurface, CallFunc_LineTraceSingleForObjects_OutHit) == 0x000150, "Member 'SharedDecalFunctions_FL_C_AlignDecalToSurface::CallFunc_LineTraceSingleForObjects_OutHit' has a wrong offset!");
static_assert(offsetof(SharedDecalFunctions_FL_C_AlignDecalToSurface, CallFunc_LineTraceSingleForObjects_ReturnValue) == 0x000238, "Member 'SharedDecalFunctions_FL_C_AlignDecalToSurface::CallFunc_LineTraceSingleForObjects_ReturnValue' has a wrong offset!");
static_assert(offsetof(SharedDecalFunctions_FL_C_AlignDecalToSurface, CallFunc_BreakHitResult_bBlockingHit) == 0x000239, "Member 'SharedDecalFunctions_FL_C_AlignDecalToSurface::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(SharedDecalFunctions_FL_C_AlignDecalToSurface, CallFunc_BreakHitResult_bInitialOverlap) == 0x00023A, "Member 'SharedDecalFunctions_FL_C_AlignDecalToSurface::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(SharedDecalFunctions_FL_C_AlignDecalToSurface, CallFunc_BreakHitResult_Time) == 0x00023C, "Member 'SharedDecalFunctions_FL_C_AlignDecalToSurface::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(SharedDecalFunctions_FL_C_AlignDecalToSurface, CallFunc_BreakHitResult_Distance) == 0x000240, "Member 'SharedDecalFunctions_FL_C_AlignDecalToSurface::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(SharedDecalFunctions_FL_C_AlignDecalToSurface, CallFunc_BreakHitResult_Location) == 0x000248, "Member 'SharedDecalFunctions_FL_C_AlignDecalToSurface::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(SharedDecalFunctions_FL_C_AlignDecalToSurface, CallFunc_BreakHitResult_ImpactPoint) == 0x000260, "Member 'SharedDecalFunctions_FL_C_AlignDecalToSurface::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(SharedDecalFunctions_FL_C_AlignDecalToSurface, CallFunc_BreakHitResult_Normal) == 0x000278, "Member 'SharedDecalFunctions_FL_C_AlignDecalToSurface::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(SharedDecalFunctions_FL_C_AlignDecalToSurface, CallFunc_BreakHitResult_ImpactNormal) == 0x000290, "Member 'SharedDecalFunctions_FL_C_AlignDecalToSurface::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(SharedDecalFunctions_FL_C_AlignDecalToSurface, CallFunc_BreakHitResult_PhysMat) == 0x0002A8, "Member 'SharedDecalFunctions_FL_C_AlignDecalToSurface::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(SharedDecalFunctions_FL_C_AlignDecalToSurface, CallFunc_BreakHitResult_HitActor) == 0x0002B0, "Member 'SharedDecalFunctions_FL_C_AlignDecalToSurface::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(SharedDecalFunctions_FL_C_AlignDecalToSurface, CallFunc_BreakHitResult_HitComponent) == 0x0002B8, "Member 'SharedDecalFunctions_FL_C_AlignDecalToSurface::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(SharedDecalFunctions_FL_C_AlignDecalToSurface, CallFunc_BreakHitResult_HitBoneName) == 0x0002C0, "Member 'SharedDecalFunctions_FL_C_AlignDecalToSurface::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(SharedDecalFunctions_FL_C_AlignDecalToSurface, CallFunc_BreakHitResult_BoneName) == 0x0002C8, "Member 'SharedDecalFunctions_FL_C_AlignDecalToSurface::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(SharedDecalFunctions_FL_C_AlignDecalToSurface, CallFunc_BreakHitResult_HitItem) == 0x0002D0, "Member 'SharedDecalFunctions_FL_C_AlignDecalToSurface::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(SharedDecalFunctions_FL_C_AlignDecalToSurface, CallFunc_BreakHitResult_ElementIndex) == 0x0002D4, "Member 'SharedDecalFunctions_FL_C_AlignDecalToSurface::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(SharedDecalFunctions_FL_C_AlignDecalToSurface, CallFunc_BreakHitResult_FaceIndex) == 0x0002D8, "Member 'SharedDecalFunctions_FL_C_AlignDecalToSurface::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(SharedDecalFunctions_FL_C_AlignDecalToSurface, CallFunc_BreakHitResult_TraceStart) == 0x0002E0, "Member 'SharedDecalFunctions_FL_C_AlignDecalToSurface::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(SharedDecalFunctions_FL_C_AlignDecalToSurface, CallFunc_BreakHitResult_TraceEnd) == 0x0002F8, "Member 'SharedDecalFunctions_FL_C_AlignDecalToSurface::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(SharedDecalFunctions_FL_C_AlignDecalToSurface, CallFunc_Multiply_VectorFloat_ReturnValue_2) == 0x000310, "Member 'SharedDecalFunctions_FL_C_AlignDecalToSurface::CallFunc_Multiply_VectorFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SharedDecalFunctions_FL_C_AlignDecalToSurface, CallFunc_MakeRotationFromAxes_ReturnValue) == 0x000328, "Member 'SharedDecalFunctions_FL_C_AlignDecalToSurface::CallFunc_MakeRotationFromAxes_ReturnValue' has a wrong offset!");
static_assert(offsetof(SharedDecalFunctions_FL_C_AlignDecalToSurface, CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult) == 0x000340, "Member 'SharedDecalFunctions_FL_C_AlignDecalToSurface::CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult' has a wrong offset!");

}

