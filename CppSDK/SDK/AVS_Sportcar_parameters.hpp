#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AVS_Sportcar

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AVS_Sportcar.AVS_Sportcar_C.ExecuteUbergraph_AVS_Sportcar
// 0x0040 (0x0040 - 0x0000)
struct AVS_Sportcar_C_ExecuteUbergraph_AVS_Sportcar final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue_1;       // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_PreviousGear;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_CurrentGear;                          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFMODAudioComponent*                    CallFunc_FMODPlayEventAttachedBullet_ReturnValue;  // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                    CallFunc_FMODPlayEventAttachedBullet_ReturnValue_1; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue_2;       // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue_3;       // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UNiagaraComponent*>              K2Node_MakeArray_Array;                            // 0x0030(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(AVS_Sportcar_C_ExecuteUbergraph_AVS_Sportcar) == 0x000008, "Wrong alignment on AVS_Sportcar_C_ExecuteUbergraph_AVS_Sportcar");
static_assert(sizeof(AVS_Sportcar_C_ExecuteUbergraph_AVS_Sportcar) == 0x000040, "Wrong size on AVS_Sportcar_C_ExecuteUbergraph_AVS_Sportcar");
static_assert(offsetof(AVS_Sportcar_C_ExecuteUbergraph_AVS_Sportcar, EntryPoint) == 0x000000, "Member 'AVS_Sportcar_C_ExecuteUbergraph_AVS_Sportcar::EntryPoint' has a wrong offset!");
static_assert(offsetof(AVS_Sportcar_C_ExecuteUbergraph_AVS_Sportcar, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000004, "Member 'AVS_Sportcar_C_ExecuteUbergraph_AVS_Sportcar::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(AVS_Sportcar_C_ExecuteUbergraph_AVS_Sportcar, CallFunc_K2_AttachToComponent_ReturnValue_1) == 0x000005, "Member 'AVS_Sportcar_C_ExecuteUbergraph_AVS_Sportcar::CallFunc_K2_AttachToComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AVS_Sportcar_C_ExecuteUbergraph_AVS_Sportcar, K2Node_Event_PreviousGear) == 0x000008, "Member 'AVS_Sportcar_C_ExecuteUbergraph_AVS_Sportcar::K2Node_Event_PreviousGear' has a wrong offset!");
static_assert(offsetof(AVS_Sportcar_C_ExecuteUbergraph_AVS_Sportcar, K2Node_Event_CurrentGear) == 0x00000C, "Member 'AVS_Sportcar_C_ExecuteUbergraph_AVS_Sportcar::K2Node_Event_CurrentGear' has a wrong offset!");
static_assert(offsetof(AVS_Sportcar_C_ExecuteUbergraph_AVS_Sportcar, CallFunc_Greater_IntInt_ReturnValue) == 0x000010, "Member 'AVS_Sportcar_C_ExecuteUbergraph_AVS_Sportcar::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AVS_Sportcar_C_ExecuteUbergraph_AVS_Sportcar, CallFunc_FMODPlayEventAttachedBullet_ReturnValue) == 0x000018, "Member 'AVS_Sportcar_C_ExecuteUbergraph_AVS_Sportcar::CallFunc_FMODPlayEventAttachedBullet_ReturnValue' has a wrong offset!");
static_assert(offsetof(AVS_Sportcar_C_ExecuteUbergraph_AVS_Sportcar, CallFunc_FMODPlayEventAttachedBullet_ReturnValue_1) == 0x000020, "Member 'AVS_Sportcar_C_ExecuteUbergraph_AVS_Sportcar::CallFunc_FMODPlayEventAttachedBullet_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AVS_Sportcar_C_ExecuteUbergraph_AVS_Sportcar, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000028, "Member 'AVS_Sportcar_C_ExecuteUbergraph_AVS_Sportcar::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AVS_Sportcar_C_ExecuteUbergraph_AVS_Sportcar, CallFunc_Greater_IntInt_ReturnValue_2) == 0x000029, "Member 'AVS_Sportcar_C_ExecuteUbergraph_AVS_Sportcar::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AVS_Sportcar_C_ExecuteUbergraph_AVS_Sportcar, CallFunc_K2_AttachToComponent_ReturnValue_2) == 0x00002A, "Member 'AVS_Sportcar_C_ExecuteUbergraph_AVS_Sportcar::CallFunc_K2_AttachToComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AVS_Sportcar_C_ExecuteUbergraph_AVS_Sportcar, CallFunc_K2_AttachToComponent_ReturnValue_3) == 0x00002B, "Member 'AVS_Sportcar_C_ExecuteUbergraph_AVS_Sportcar::CallFunc_K2_AttachToComponent_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AVS_Sportcar_C_ExecuteUbergraph_AVS_Sportcar, K2Node_MakeArray_Array) == 0x000030, "Member 'AVS_Sportcar_C_ExecuteUbergraph_AVS_Sportcar::K2Node_MakeArray_Array' has a wrong offset!");

// Function AVS_Sportcar.AVS_Sportcar_C.GearChanged_1
// 0x0008 (0x0008 - 0x0000)
struct AVS_Sportcar_C_GearChanged_1 final
{
public:
	int32                                         PreviousGear;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentGear;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AVS_Sportcar_C_GearChanged_1) == 0x000004, "Wrong alignment on AVS_Sportcar_C_GearChanged_1");
static_assert(sizeof(AVS_Sportcar_C_GearChanged_1) == 0x000008, "Wrong size on AVS_Sportcar_C_GearChanged_1");
static_assert(offsetof(AVS_Sportcar_C_GearChanged_1, PreviousGear) == 0x000000, "Member 'AVS_Sportcar_C_GearChanged_1::PreviousGear' has a wrong offset!");
static_assert(offsetof(AVS_Sportcar_C_GearChanged_1, CurrentGear) == 0x000004, "Member 'AVS_Sportcar_C_GearChanged_1::CurrentGear' has a wrong offset!");

// Function AVS_Sportcar.AVS_Sportcar_C.UserConstructionScript
// 0x01E8 (0x01E8 - 0x0000)
struct AVS_Sportcar_C_UserConstructionScript final
{
public:
	struct FHitResult                             CallFunc_K2_AddRelativeLocation_SweepHitResult;    // 0x0000(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_AddRelativeLocation_SweepHitResult_1;  // 0x00E8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	TArray<class UStaticMeshComponent*>           K2Node_MakeArray_Array;                            // 0x01D0(0x0010)(ConstParm, ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue_1;       // 0x01E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AVS_Sportcar_C_UserConstructionScript) == 0x000008, "Wrong alignment on AVS_Sportcar_C_UserConstructionScript");
static_assert(sizeof(AVS_Sportcar_C_UserConstructionScript) == 0x0001E8, "Wrong size on AVS_Sportcar_C_UserConstructionScript");
static_assert(offsetof(AVS_Sportcar_C_UserConstructionScript, CallFunc_K2_AddRelativeLocation_SweepHitResult) == 0x000000, "Member 'AVS_Sportcar_C_UserConstructionScript::CallFunc_K2_AddRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(AVS_Sportcar_C_UserConstructionScript, CallFunc_K2_AddRelativeLocation_SweepHitResult_1) == 0x0000E8, "Member 'AVS_Sportcar_C_UserConstructionScript::CallFunc_K2_AddRelativeLocation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(AVS_Sportcar_C_UserConstructionScript, K2Node_MakeArray_Array) == 0x0001D0, "Member 'AVS_Sportcar_C_UserConstructionScript::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(AVS_Sportcar_C_UserConstructionScript, CallFunc_K2_AttachToComponent_ReturnValue) == 0x0001E0, "Member 'AVS_Sportcar_C_UserConstructionScript::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(AVS_Sportcar_C_UserConstructionScript, CallFunc_K2_AttachToComponent_ReturnValue_1) == 0x0001E1, "Member 'AVS_Sportcar_C_UserConstructionScript::CallFunc_K2_AttachToComponent_ReturnValue_1' has a wrong offset!");

}
