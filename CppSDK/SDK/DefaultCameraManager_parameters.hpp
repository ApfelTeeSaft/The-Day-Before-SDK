#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DefaultCameraManager

#include "Basic.hpp"


namespace SDK::Params
{

// Function DefaultCameraManager.DefaultCameraManager_C.ExecuteUbergraph_DefaultCameraManager
// 0x0018 (0x0018 - 0x0000)
struct DefaultCameraManager_C_ExecuteUbergraph_DefaultCameraManager final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DefaultCameraManager_C_ExecuteUbergraph_DefaultCameraManager) == 0x000008, "Wrong alignment on DefaultCameraManager_C_ExecuteUbergraph_DefaultCameraManager");
static_assert(sizeof(DefaultCameraManager_C_ExecuteUbergraph_DefaultCameraManager) == 0x000018, "Wrong size on DefaultCameraManager_C_ExecuteUbergraph_DefaultCameraManager");
static_assert(offsetof(DefaultCameraManager_C_ExecuteUbergraph_DefaultCameraManager, EntryPoint) == 0x000000, "Member 'DefaultCameraManager_C_ExecuteUbergraph_DefaultCameraManager::EntryPoint' has a wrong offset!");
static_assert(offsetof(DefaultCameraManager_C_ExecuteUbergraph_DefaultCameraManager, K2Node_Event_OtherActor) == 0x000008, "Member 'DefaultCameraManager_C_ExecuteUbergraph_DefaultCameraManager::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(DefaultCameraManager_C_ExecuteUbergraph_DefaultCameraManager, K2Node_Event_DeltaSeconds) == 0x000010, "Member 'DefaultCameraManager_C_ExecuteUbergraph_DefaultCameraManager::K2Node_Event_DeltaSeconds' has a wrong offset!");

// Function DefaultCameraManager.DefaultCameraManager_C.ReceiveActorBeginOverlap
// 0x0008 (0x0008 - 0x0000)
struct DefaultCameraManager_C_ReceiveActorBeginOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DefaultCameraManager_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong alignment on DefaultCameraManager_C_ReceiveActorBeginOverlap");
static_assert(sizeof(DefaultCameraManager_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong size on DefaultCameraManager_C_ReceiveActorBeginOverlap");
static_assert(offsetof(DefaultCameraManager_C_ReceiveActorBeginOverlap, OtherActor) == 0x000000, "Member 'DefaultCameraManager_C_ReceiveActorBeginOverlap::OtherActor' has a wrong offset!");

// Function DefaultCameraManager.DefaultCameraManager_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct DefaultCameraManager_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DefaultCameraManager_C_ReceiveTick) == 0x000004, "Wrong alignment on DefaultCameraManager_C_ReceiveTick");
static_assert(sizeof(DefaultCameraManager_C_ReceiveTick) == 0x000004, "Wrong size on DefaultCameraManager_C_ReceiveTick");
static_assert(offsetof(DefaultCameraManager_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'DefaultCameraManager_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

