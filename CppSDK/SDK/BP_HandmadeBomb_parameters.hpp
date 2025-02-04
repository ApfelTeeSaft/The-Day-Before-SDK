#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HandmadeBomb

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_HandmadeBomb.BP_HandmadeBomb_C.ExecuteUbergraph_BP_HandmadeBomb
// 0x0090 (0x0090 - 0x0000)
struct BP_HandmadeBomb_C_ExecuteUbergraph_BP_HandmadeBomb final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_Event_HitLocation;                          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0020(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_LabBombExplosion_C*                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HandmadeBomb_C_ExecuteUbergraph_BP_HandmadeBomb) == 0x000010, "Wrong alignment on BP_HandmadeBomb_C_ExecuteUbergraph_BP_HandmadeBomb");
static_assert(sizeof(BP_HandmadeBomb_C_ExecuteUbergraph_BP_HandmadeBomb) == 0x000090, "Wrong size on BP_HandmadeBomb_C_ExecuteUbergraph_BP_HandmadeBomb");
static_assert(offsetof(BP_HandmadeBomb_C_ExecuteUbergraph_BP_HandmadeBomb, EntryPoint) == 0x000000, "Member 'BP_HandmadeBomb_C_ExecuteUbergraph_BP_HandmadeBomb::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_HandmadeBomb_C_ExecuteUbergraph_BP_HandmadeBomb, K2Node_Event_HitLocation) == 0x000008, "Member 'BP_HandmadeBomb_C_ExecuteUbergraph_BP_HandmadeBomb::K2Node_Event_HitLocation' has a wrong offset!");
static_assert(offsetof(BP_HandmadeBomb_C_ExecuteUbergraph_BP_HandmadeBomb, CallFunc_MakeTransform_ReturnValue) == 0x000020, "Member 'BP_HandmadeBomb_C_ExecuteUbergraph_BP_HandmadeBomb::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HandmadeBomb_C_ExecuteUbergraph_BP_HandmadeBomb, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000080, "Member 'BP_HandmadeBomb_C_ExecuteUbergraph_BP_HandmadeBomb::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HandmadeBomb_C_ExecuteUbergraph_BP_HandmadeBomb, CallFunc_FinishSpawningActor_ReturnValue) == 0x000088, "Member 'BP_HandmadeBomb_C_ExecuteUbergraph_BP_HandmadeBomb::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

// Function BP_HandmadeBomb.BP_HandmadeBomb_C.HitAction
// 0x0018 (0x0018 - 0x0000)
struct BP_HandmadeBomb_C_HitAction final
{
public:
	struct FVector                                HitLocation;                                       // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HandmadeBomb_C_HitAction) == 0x000008, "Wrong alignment on BP_HandmadeBomb_C_HitAction");
static_assert(sizeof(BP_HandmadeBomb_C_HitAction) == 0x000018, "Wrong size on BP_HandmadeBomb_C_HitAction");
static_assert(offsetof(BP_HandmadeBomb_C_HitAction, HitLocation) == 0x000000, "Member 'BP_HandmadeBomb_C_HitAction::HitLocation' has a wrong offset!");

}

