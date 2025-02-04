#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DeactivateQuestZones

#include "Basic.hpp"

#include "QuestFramework_structs.hpp"


namespace SDK::Params
{

// Function DeactivateQuestZones.DeactivateQuestZones_C.ExecuteEvent
// 0x0028 (0x0028 - 0x0000)
struct DeactivateQuestZones_C_ExecuteEvent final
{
public:
	class UQuestContext*                          Context;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FQuestEventPayload                     Payload;                                           // 0x0008(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(DeactivateQuestZones_C_ExecuteEvent) == 0x000008, "Wrong alignment on DeactivateQuestZones_C_ExecuteEvent");
static_assert(sizeof(DeactivateQuestZones_C_ExecuteEvent) == 0x000028, "Wrong size on DeactivateQuestZones_C_ExecuteEvent");
static_assert(offsetof(DeactivateQuestZones_C_ExecuteEvent, Context) == 0x000000, "Member 'DeactivateQuestZones_C_ExecuteEvent::Context' has a wrong offset!");
static_assert(offsetof(DeactivateQuestZones_C_ExecuteEvent, Payload) == 0x000008, "Member 'DeactivateQuestZones_C_ExecuteEvent::Payload' has a wrong offset!");

// Function DeactivateQuestZones.DeactivateQuestZones_C.ExecuteUbergraph_DeactivateQuestZones
// 0x0048 (0x0048 - 0x0000)
struct DeactivateQuestZones_C_ExecuteUbergraph_DeactivateQuestZones final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UQuestContext*                          K2Node_Event_Context;                              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FQuestEventPayload                     K2Node_Event_Payload;                              // 0x0010(0x0020)(ConstParm, NoDestructor)
	class AController*                            CallFunc_GetOwnerController_ReturnValue;           // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASurvPC_C*                              K2Node_DynamicCast_AsSurv_PC;                      // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DeactivateQuestZones_C_ExecuteUbergraph_DeactivateQuestZones) == 0x000008, "Wrong alignment on DeactivateQuestZones_C_ExecuteUbergraph_DeactivateQuestZones");
static_assert(sizeof(DeactivateQuestZones_C_ExecuteUbergraph_DeactivateQuestZones) == 0x000048, "Wrong size on DeactivateQuestZones_C_ExecuteUbergraph_DeactivateQuestZones");
static_assert(offsetof(DeactivateQuestZones_C_ExecuteUbergraph_DeactivateQuestZones, EntryPoint) == 0x000000, "Member 'DeactivateQuestZones_C_ExecuteUbergraph_DeactivateQuestZones::EntryPoint' has a wrong offset!");
static_assert(offsetof(DeactivateQuestZones_C_ExecuteUbergraph_DeactivateQuestZones, K2Node_Event_Context) == 0x000008, "Member 'DeactivateQuestZones_C_ExecuteUbergraph_DeactivateQuestZones::K2Node_Event_Context' has a wrong offset!");
static_assert(offsetof(DeactivateQuestZones_C_ExecuteUbergraph_DeactivateQuestZones, K2Node_Event_Payload) == 0x000010, "Member 'DeactivateQuestZones_C_ExecuteUbergraph_DeactivateQuestZones::K2Node_Event_Payload' has a wrong offset!");
static_assert(offsetof(DeactivateQuestZones_C_ExecuteUbergraph_DeactivateQuestZones, CallFunc_GetOwnerController_ReturnValue) == 0x000030, "Member 'DeactivateQuestZones_C_ExecuteUbergraph_DeactivateQuestZones::CallFunc_GetOwnerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeactivateQuestZones_C_ExecuteUbergraph_DeactivateQuestZones, K2Node_DynamicCast_AsSurv_PC) == 0x000038, "Member 'DeactivateQuestZones_C_ExecuteUbergraph_DeactivateQuestZones::K2Node_DynamicCast_AsSurv_PC' has a wrong offset!");
static_assert(offsetof(DeactivateQuestZones_C_ExecuteUbergraph_DeactivateQuestZones, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'DeactivateQuestZones_C_ExecuteUbergraph_DeactivateQuestZones::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

