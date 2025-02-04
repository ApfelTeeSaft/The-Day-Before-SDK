#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RespawnArea

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function RespawnArea.RespawnArea_C.ExecuteUbergraph_RespawnArea
// 0x0040 (0x0040 - 0x0000)
struct RespawnArea_C_ExecuteUbergraph_RespawnArea final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_OtherActor_1;                         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASurvivalPlayer_C*                      K2Node_Event_Player;                               // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue_1;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RespawnArea_C_ExecuteUbergraph_RespawnArea) == 0x000008, "Wrong alignment on RespawnArea_C_ExecuteUbergraph_RespawnArea");
static_assert(sizeof(RespawnArea_C_ExecuteUbergraph_RespawnArea) == 0x000040, "Wrong size on RespawnArea_C_ExecuteUbergraph_RespawnArea");
static_assert(offsetof(RespawnArea_C_ExecuteUbergraph_RespawnArea, EntryPoint) == 0x000000, "Member 'RespawnArea_C_ExecuteUbergraph_RespawnArea::EntryPoint' has a wrong offset!");
static_assert(offsetof(RespawnArea_C_ExecuteUbergraph_RespawnArea, CallFunc_HasAuthority_ReturnValue) == 0x000004, "Member 'RespawnArea_C_ExecuteUbergraph_RespawnArea::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(RespawnArea_C_ExecuteUbergraph_RespawnArea, K2Node_Event_OtherActor_1) == 0x000008, "Member 'RespawnArea_C_ExecuteUbergraph_RespawnArea::K2Node_Event_OtherActor_1' has a wrong offset!");
static_assert(offsetof(RespawnArea_C_ExecuteUbergraph_RespawnArea, K2Node_Event_Player) == 0x000010, "Member 'RespawnArea_C_ExecuteUbergraph_RespawnArea::K2Node_Event_Player' has a wrong offset!");
static_assert(offsetof(RespawnArea_C_ExecuteUbergraph_RespawnArea, CallFunc_HasAuthority_ReturnValue_1) == 0x000018, "Member 'RespawnArea_C_ExecuteUbergraph_RespawnArea::CallFunc_HasAuthority_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RespawnArea_C_ExecuteUbergraph_RespawnArea, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000020, "Member 'RespawnArea_C_ExecuteUbergraph_RespawnArea::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(RespawnArea_C_ExecuteUbergraph_RespawnArea, K2Node_Event_OtherActor) == 0x000038, "Member 'RespawnArea_C_ExecuteUbergraph_RespawnArea::K2Node_Event_OtherActor' has a wrong offset!");

// Function RespawnArea.RespawnArea_C.OnPlayerDead
// 0x0008 (0x0008 - 0x0000)
struct RespawnArea_C_OnPlayerDead final
{
public:
	class ASurvivalPlayer_C*                      Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RespawnArea_C_OnPlayerDead) == 0x000008, "Wrong alignment on RespawnArea_C_OnPlayerDead");
static_assert(sizeof(RespawnArea_C_OnPlayerDead) == 0x000008, "Wrong size on RespawnArea_C_OnPlayerDead");
static_assert(offsetof(RespawnArea_C_OnPlayerDead, Player) == 0x000000, "Member 'RespawnArea_C_OnPlayerDead::Player' has a wrong offset!");

// Function RespawnArea.RespawnArea_C.ProcessActorBeginOverlap
// 0x0028 (0x0028 - 0x0000)
struct RespawnArea_C_ProcessActorBeginOverlap final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASurvivalPlayer_C*                      K2Node_DynamicCast_AsSurvival_Player;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISurvivalPlayerListener_C> CallFunc_AddPlayerListener_Listener_CastInput;     // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RespawnArea_C_ProcessActorBeginOverlap) == 0x000008, "Wrong alignment on RespawnArea_C_ProcessActorBeginOverlap");
static_assert(sizeof(RespawnArea_C_ProcessActorBeginOverlap) == 0x000028, "Wrong size on RespawnArea_C_ProcessActorBeginOverlap");
static_assert(offsetof(RespawnArea_C_ProcessActorBeginOverlap, Actor) == 0x000000, "Member 'RespawnArea_C_ProcessActorBeginOverlap::Actor' has a wrong offset!");
static_assert(offsetof(RespawnArea_C_ProcessActorBeginOverlap, K2Node_DynamicCast_AsSurvival_Player) == 0x000008, "Member 'RespawnArea_C_ProcessActorBeginOverlap::K2Node_DynamicCast_AsSurvival_Player' has a wrong offset!");
static_assert(offsetof(RespawnArea_C_ProcessActorBeginOverlap, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'RespawnArea_C_ProcessActorBeginOverlap::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(RespawnArea_C_ProcessActorBeginOverlap, CallFunc_AddPlayerListener_Listener_CastInput) == 0x000018, "Member 'RespawnArea_C_ProcessActorBeginOverlap::CallFunc_AddPlayerListener_Listener_CastInput' has a wrong offset!");

// Function RespawnArea.RespawnArea_C.ProcessActorEndOverlap
// 0x0028 (0x0028 - 0x0000)
struct RespawnArea_C_ProcessActorEndOverlap final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASurvivalPlayer_C*                      K2Node_DynamicCast_AsSurvival_Player;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISurvivalPlayerListener_C> CallFunc_RemovePlayerListener_Listener_CastInput;  // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RespawnArea_C_ProcessActorEndOverlap) == 0x000008, "Wrong alignment on RespawnArea_C_ProcessActorEndOverlap");
static_assert(sizeof(RespawnArea_C_ProcessActorEndOverlap) == 0x000028, "Wrong size on RespawnArea_C_ProcessActorEndOverlap");
static_assert(offsetof(RespawnArea_C_ProcessActorEndOverlap, Actor) == 0x000000, "Member 'RespawnArea_C_ProcessActorEndOverlap::Actor' has a wrong offset!");
static_assert(offsetof(RespawnArea_C_ProcessActorEndOverlap, K2Node_DynamicCast_AsSurvival_Player) == 0x000008, "Member 'RespawnArea_C_ProcessActorEndOverlap::K2Node_DynamicCast_AsSurvival_Player' has a wrong offset!");
static_assert(offsetof(RespawnArea_C_ProcessActorEndOverlap, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'RespawnArea_C_ProcessActorEndOverlap::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(RespawnArea_C_ProcessActorEndOverlap, CallFunc_RemovePlayerListener_Listener_CastInput) == 0x000018, "Member 'RespawnArea_C_ProcessActorEndOverlap::CallFunc_RemovePlayerListener_Listener_CastInput' has a wrong offset!");

// Function RespawnArea.RespawnArea_C.ReceiveActorBeginOverlap
// 0x0008 (0x0008 - 0x0000)
struct RespawnArea_C_ReceiveActorBeginOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RespawnArea_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong alignment on RespawnArea_C_ReceiveActorBeginOverlap");
static_assert(sizeof(RespawnArea_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong size on RespawnArea_C_ReceiveActorBeginOverlap");
static_assert(offsetof(RespawnArea_C_ReceiveActorBeginOverlap, OtherActor) == 0x000000, "Member 'RespawnArea_C_ReceiveActorBeginOverlap::OtherActor' has a wrong offset!");

// Function RespawnArea.RespawnArea_C.ReceiveActorEndOverlap
// 0x0008 (0x0008 - 0x0000)
struct RespawnArea_C_ReceiveActorEndOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RespawnArea_C_ReceiveActorEndOverlap) == 0x000008, "Wrong alignment on RespawnArea_C_ReceiveActorEndOverlap");
static_assert(sizeof(RespawnArea_C_ReceiveActorEndOverlap) == 0x000008, "Wrong size on RespawnArea_C_ReceiveActorEndOverlap");
static_assert(offsetof(RespawnArea_C_ReceiveActorEndOverlap, OtherActor) == 0x000000, "Member 'RespawnArea_C_ReceiveActorEndOverlap::OtherActor' has a wrong offset!");

}

