#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BaseAttachment

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_BaseAttachment.BP_BaseAttachment_C.ExecuteUbergraph_BP_BaseAttachment
// 0x0048 (0x0048 - 0x0000)
struct BP_BaseAttachment_C_ExecuteUbergraph_BP_BaseAttachment final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* DestroyedActor)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_DestroyedActor;                 // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASurvivalPlayer_C*                      K2Node_DynamicCast_AsSurvival_Player;              // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BaseAttachment_C_ExecuteUbergraph_BP_BaseAttachment) == 0x000008, "Wrong alignment on BP_BaseAttachment_C_ExecuteUbergraph_BP_BaseAttachment");
static_assert(sizeof(BP_BaseAttachment_C_ExecuteUbergraph_BP_BaseAttachment) == 0x000048, "Wrong size on BP_BaseAttachment_C_ExecuteUbergraph_BP_BaseAttachment");
static_assert(offsetof(BP_BaseAttachment_C_ExecuteUbergraph_BP_BaseAttachment, EntryPoint) == 0x000000, "Member 'BP_BaseAttachment_C_ExecuteUbergraph_BP_BaseAttachment::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BaseAttachment_C_ExecuteUbergraph_BP_BaseAttachment, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_BaseAttachment_C_ExecuteUbergraph_BP_BaseAttachment::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_BaseAttachment_C_ExecuteUbergraph_BP_BaseAttachment, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'BP_BaseAttachment_C_ExecuteUbergraph_BP_BaseAttachment::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_BaseAttachment_C_ExecuteUbergraph_BP_BaseAttachment, CallFunc_IsValid_ReturnValue) == 0x000024, "Member 'BP_BaseAttachment_C_ExecuteUbergraph_BP_BaseAttachment::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BaseAttachment_C_ExecuteUbergraph_BP_BaseAttachment, K2Node_CustomEvent_DestroyedActor) == 0x000028, "Member 'BP_BaseAttachment_C_ExecuteUbergraph_BP_BaseAttachment::K2Node_CustomEvent_DestroyedActor' has a wrong offset!");
static_assert(offsetof(BP_BaseAttachment_C_ExecuteUbergraph_BP_BaseAttachment, CallFunc_GetPlayerPawn_ReturnValue) == 0x000030, "Member 'BP_BaseAttachment_C_ExecuteUbergraph_BP_BaseAttachment::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BaseAttachment_C_ExecuteUbergraph_BP_BaseAttachment, K2Node_DynamicCast_AsSurvival_Player) == 0x000038, "Member 'BP_BaseAttachment_C_ExecuteUbergraph_BP_BaseAttachment::K2Node_DynamicCast_AsSurvival_Player' has a wrong offset!");
static_assert(offsetof(BP_BaseAttachment_C_ExecuteUbergraph_BP_BaseAttachment, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BP_BaseAttachment_C_ExecuteUbergraph_BP_BaseAttachment::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_BaseAttachment_C_ExecuteUbergraph_BP_BaseAttachment, CallFunc_Array_Add_ReturnValue) == 0x000044, "Member 'BP_BaseAttachment_C_ExecuteUbergraph_BP_BaseAttachment::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function BP_BaseAttachment.BP_BaseAttachment_C.OnDestroyedEvent
// 0x0008 (0x0008 - 0x0000)
struct BP_BaseAttachment_C_OnDestroyedEvent final
{
public:
	class AActor*                                 DestroyedActor;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BaseAttachment_C_OnDestroyedEvent) == 0x000008, "Wrong alignment on BP_BaseAttachment_C_OnDestroyedEvent");
static_assert(sizeof(BP_BaseAttachment_C_OnDestroyedEvent) == 0x000008, "Wrong size on BP_BaseAttachment_C_OnDestroyedEvent");
static_assert(offsetof(BP_BaseAttachment_C_OnDestroyedEvent, DestroyedActor) == 0x000000, "Member 'BP_BaseAttachment_C_OnDestroyedEvent::DestroyedActor' has a wrong offset!");

}
