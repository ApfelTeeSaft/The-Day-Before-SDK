#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ZombieReturn_TriggerBox

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ZombieReturn_TriggerBox.ZombieReturn_TriggerBox_C.ExecuteUbergraph_ZombieReturn_TriggerBox
// 0x0028 (0x0028 - 0x0000)
struct ZombieReturn_TriggerBox_C_ExecuteUbergraph_ZombieReturn_TriggerBox final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AZombie_C*                              K2Node_DynamicCast_AsZombie;                       // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ZombieReturn_TriggerBox_C_ExecuteUbergraph_ZombieReturn_TriggerBox) == 0x000008, "Wrong alignment on ZombieReturn_TriggerBox_C_ExecuteUbergraph_ZombieReturn_TriggerBox");
static_assert(sizeof(ZombieReturn_TriggerBox_C_ExecuteUbergraph_ZombieReturn_TriggerBox) == 0x000028, "Wrong size on ZombieReturn_TriggerBox_C_ExecuteUbergraph_ZombieReturn_TriggerBox");
static_assert(offsetof(ZombieReturn_TriggerBox_C_ExecuteUbergraph_ZombieReturn_TriggerBox, EntryPoint) == 0x000000, "Member 'ZombieReturn_TriggerBox_C_ExecuteUbergraph_ZombieReturn_TriggerBox::EntryPoint' has a wrong offset!");
static_assert(offsetof(ZombieReturn_TriggerBox_C_ExecuteUbergraph_ZombieReturn_TriggerBox, K2Node_Event_OtherActor) == 0x000008, "Member 'ZombieReturn_TriggerBox_C_ExecuteUbergraph_ZombieReturn_TriggerBox::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(ZombieReturn_TriggerBox_C_ExecuteUbergraph_ZombieReturn_TriggerBox, CallFunc_HasAuthority_ReturnValue) == 0x000010, "Member 'ZombieReturn_TriggerBox_C_ExecuteUbergraph_ZombieReturn_TriggerBox::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(ZombieReturn_TriggerBox_C_ExecuteUbergraph_ZombieReturn_TriggerBox, K2Node_DynamicCast_AsZombie) == 0x000018, "Member 'ZombieReturn_TriggerBox_C_ExecuteUbergraph_ZombieReturn_TriggerBox::K2Node_DynamicCast_AsZombie' has a wrong offset!");
static_assert(offsetof(ZombieReturn_TriggerBox_C_ExecuteUbergraph_ZombieReturn_TriggerBox, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'ZombieReturn_TriggerBox_C_ExecuteUbergraph_ZombieReturn_TriggerBox::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function ZombieReturn_TriggerBox.ZombieReturn_TriggerBox_C.ReceiveActorBeginOverlap
// 0x0008 (0x0008 - 0x0000)
struct ZombieReturn_TriggerBox_C_ReceiveActorBeginOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ZombieReturn_TriggerBox_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong alignment on ZombieReturn_TriggerBox_C_ReceiveActorBeginOverlap");
static_assert(sizeof(ZombieReturn_TriggerBox_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong size on ZombieReturn_TriggerBox_C_ReceiveActorBeginOverlap");
static_assert(offsetof(ZombieReturn_TriggerBox_C_ReceiveActorBeginOverlap, OtherActor) == 0x000000, "Member 'ZombieReturn_TriggerBox_C_ReceiveActorBeginOverlap::OtherActor' has a wrong offset!");

// Function ZombieReturn_TriggerBox.ZombieReturn_TriggerBox_C.UserConstructionScript
// 0x00F0 (0x00F0 - 0x0000)
struct ZombieReturn_TriggerBox_C_UserConstructionScript final
{
public:
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0000(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ZombieReturn_TriggerBox_C_UserConstructionScript) == 0x000008, "Wrong alignment on ZombieReturn_TriggerBox_C_UserConstructionScript");
static_assert(sizeof(ZombieReturn_TriggerBox_C_UserConstructionScript) == 0x0000F0, "Wrong size on ZombieReturn_TriggerBox_C_UserConstructionScript");
static_assert(offsetof(ZombieReturn_TriggerBox_C_UserConstructionScript, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000000, "Member 'ZombieReturn_TriggerBox_C_UserConstructionScript::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(ZombieReturn_TriggerBox_C_UserConstructionScript, CallFunc_K2_SetActorLocation_ReturnValue) == 0x0000E8, "Member 'ZombieReturn_TriggerBox_C_UserConstructionScript::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");

}
