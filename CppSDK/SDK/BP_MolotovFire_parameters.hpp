#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MolotovFire

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_MolotovFire.BP_MolotovFire_C.ExecuteUbergraph_BP_MolotovFire
// 0x0090 (0x0090 - 0x0000)
struct BP_MolotovFire_C_ExecuteUbergraph_BP_MolotovFire final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFMODAudioComponent*                    CallFunc_PlayEventAttached_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue_1;               // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue_2;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0070(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_ApplyRadialDamage_ReturnValue;            // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x3];                                       // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_ApplyRadialDamage_BaseDamage_ImplicitCast; // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MolotovFire_C_ExecuteUbergraph_BP_MolotovFire) == 0x000008, "Wrong alignment on BP_MolotovFire_C_ExecuteUbergraph_BP_MolotovFire");
static_assert(sizeof(BP_MolotovFire_C_ExecuteUbergraph_BP_MolotovFire) == 0x000090, "Wrong size on BP_MolotovFire_C_ExecuteUbergraph_BP_MolotovFire");
static_assert(offsetof(BP_MolotovFire_C_ExecuteUbergraph_BP_MolotovFire, EntryPoint) == 0x000000, "Member 'BP_MolotovFire_C_ExecuteUbergraph_BP_MolotovFire::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MolotovFire_C_ExecuteUbergraph_BP_MolotovFire, CallFunc_PlayEventAttached_ReturnValue) == 0x000008, "Member 'BP_MolotovFire_C_ExecuteUbergraph_BP_MolotovFire::CallFunc_PlayEventAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MolotovFire_C_ExecuteUbergraph_BP_MolotovFire, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'BP_MolotovFire_C_ExecuteUbergraph_BP_MolotovFire::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_MolotovFire_C_ExecuteUbergraph_BP_MolotovFire, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'BP_MolotovFire_C_ExecuteUbergraph_BP_MolotovFire::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MolotovFire_C_ExecuteUbergraph_BP_MolotovFire, Temp_int_Array_Index_Variable) == 0x000018, "Member 'BP_MolotovFire_C_ExecuteUbergraph_BP_MolotovFire::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_MolotovFire_C_ExecuteUbergraph_BP_MolotovFire, CallFunc_HasAuthority_ReturnValue) == 0x00001C, "Member 'BP_MolotovFire_C_ExecuteUbergraph_BP_MolotovFire::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MolotovFire_C_ExecuteUbergraph_BP_MolotovFire, K2Node_Event_DeltaSeconds) == 0x000020, "Member 'BP_MolotovFire_C_ExecuteUbergraph_BP_MolotovFire::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_MolotovFire_C_ExecuteUbergraph_BP_MolotovFire, CallFunc_HasAuthority_ReturnValue_1) == 0x000024, "Member 'BP_MolotovFire_C_ExecuteUbergraph_BP_MolotovFire::CallFunc_HasAuthority_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MolotovFire_C_ExecuteUbergraph_BP_MolotovFire, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000028, "Member 'BP_MolotovFire_C_ExecuteUbergraph_BP_MolotovFire::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MolotovFire_C_ExecuteUbergraph_BP_MolotovFire, CallFunc_HasAuthority_ReturnValue_2) == 0x000040, "Member 'BP_MolotovFire_C_ExecuteUbergraph_BP_MolotovFire::CallFunc_HasAuthority_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MolotovFire_C_ExecuteUbergraph_BP_MolotovFire, CallFunc_Array_Get_Item) == 0x000048, "Member 'BP_MolotovFire_C_ExecuteUbergraph_BP_MolotovFire::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_MolotovFire_C_ExecuteUbergraph_BP_MolotovFire, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'BP_MolotovFire_C_ExecuteUbergraph_BP_MolotovFire::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MolotovFire_C_ExecuteUbergraph_BP_MolotovFire, CallFunc_Less_IntInt_ReturnValue) == 0x000054, "Member 'BP_MolotovFire_C_ExecuteUbergraph_BP_MolotovFire::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MolotovFire_C_ExecuteUbergraph_BP_MolotovFire, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000058, "Member 'BP_MolotovFire_C_ExecuteUbergraph_BP_MolotovFire::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MolotovFire_C_ExecuteUbergraph_BP_MolotovFire, Temp_object_Variable) == 0x000070, "Member 'BP_MolotovFire_C_ExecuteUbergraph_BP_MolotovFire::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_MolotovFire_C_ExecuteUbergraph_BP_MolotovFire, CallFunc_ApplyRadialDamage_ReturnValue) == 0x000080, "Member 'BP_MolotovFire_C_ExecuteUbergraph_BP_MolotovFire::CallFunc_ApplyRadialDamage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MolotovFire_C_ExecuteUbergraph_BP_MolotovFire, CallFunc_Delay_Duration_ImplicitCast) == 0x000084, "Member 'BP_MolotovFire_C_ExecuteUbergraph_BP_MolotovFire::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_MolotovFire_C_ExecuteUbergraph_BP_MolotovFire, CallFunc_ApplyRadialDamage_BaseDamage_ImplicitCast) == 0x000088, "Member 'BP_MolotovFire_C_ExecuteUbergraph_BP_MolotovFire::CallFunc_ApplyRadialDamage_BaseDamage_ImplicitCast' has a wrong offset!");

// Function BP_MolotovFire.BP_MolotovFire_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_MolotovFire_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MolotovFire_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_MolotovFire_C_ReceiveTick");
static_assert(sizeof(BP_MolotovFire_C_ReceiveTick) == 0x000004, "Wrong size on BP_MolotovFire_C_ReceiveTick");
static_assert(offsetof(BP_MolotovFire_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_MolotovFire_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_MolotovFire.BP_MolotovFire_C.SpawnParticleAt
// 0x0028 (0x0028 - 0x0000)
struct BP_MolotovFire_C_SpawnParticleAt final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MolotovFire_C_SpawnParticleAt) == 0x000008, "Wrong alignment on BP_MolotovFire_C_SpawnParticleAt");
static_assert(sizeof(BP_MolotovFire_C_SpawnParticleAt) == 0x000028, "Wrong size on BP_MolotovFire_C_SpawnParticleAt");
static_assert(offsetof(BP_MolotovFire_C_SpawnParticleAt, Location) == 0x000000, "Member 'BP_MolotovFire_C_SpawnParticleAt::Location' has a wrong offset!");
static_assert(offsetof(BP_MolotovFire_C_SpawnParticleAt, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000018, "Member 'BP_MolotovFire_C_SpawnParticleAt::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MolotovFire_C_SpawnParticleAt, CallFunc_Array_Add_ReturnValue) == 0x000020, "Member 'BP_MolotovFire_C_SpawnParticleAt::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function BP_MolotovFire.BP_MolotovFire_C.StopFires
// 0x0020 (0x0020 - 0x0000)
struct BP_MolotovFire_C_StopFires final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MolotovFire_C_StopFires) == 0x000008, "Wrong alignment on BP_MolotovFire_C_StopFires");
static_assert(sizeof(BP_MolotovFire_C_StopFires) == 0x000020, "Wrong size on BP_MolotovFire_C_StopFires");
static_assert(offsetof(BP_MolotovFire_C_StopFires, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_MolotovFire_C_StopFires::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_MolotovFire_C_StopFires, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_MolotovFire_C_StopFires::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_MolotovFire_C_StopFires, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_MolotovFire_C_StopFires::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MolotovFire_C_StopFires, CallFunc_Array_Length_ReturnValue) == 0x00000C, "Member 'BP_MolotovFire_C_StopFires::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MolotovFire_C_StopFires, CallFunc_Array_Get_Item) == 0x000010, "Member 'BP_MolotovFire_C_StopFires::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_MolotovFire_C_StopFires, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'BP_MolotovFire_C_StopFires::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}
