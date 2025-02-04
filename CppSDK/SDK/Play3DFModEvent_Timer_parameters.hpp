#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Play3DFModEvent_Timer

#include "Basic.hpp"

#include "QuestFramework_structs.hpp"


namespace SDK::Params
{

// Function Play3DFModEvent_Timer.Play3DFModEvent_Timer_C.ExecuteEvent
// 0x0028 (0x0028 - 0x0000)
struct Play3DFModEvent_Timer_C_ExecuteEvent final
{
public:
	class UQuestContext*                          Context;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FQuestEventPayload                     Payload;                                           // 0x0008(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(Play3DFModEvent_Timer_C_ExecuteEvent) == 0x000008, "Wrong alignment on Play3DFModEvent_Timer_C_ExecuteEvent");
static_assert(sizeof(Play3DFModEvent_Timer_C_ExecuteEvent) == 0x000028, "Wrong size on Play3DFModEvent_Timer_C_ExecuteEvent");
static_assert(offsetof(Play3DFModEvent_Timer_C_ExecuteEvent, Context) == 0x000000, "Member 'Play3DFModEvent_Timer_C_ExecuteEvent::Context' has a wrong offset!");
static_assert(offsetof(Play3DFModEvent_Timer_C_ExecuteEvent, Payload) == 0x000008, "Member 'Play3DFModEvent_Timer_C_ExecuteEvent::Payload' has a wrong offset!");

// Function Play3DFModEvent_Timer.Play3DFModEvent_Timer_C.ExecuteUbergraph_Play3DFModEvent_Timer
// 0x0068 (0x0068 - 0x0000)
struct Play3DFModEvent_Timer_C_ExecuteUbergraph_Play3DFModEvent_Timer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UQuestContext*                          K2Node_Event_Context;                              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FQuestEventPayload                     K2Node_Event_Payload;                              // 0x0010(0x0020)(ConstParm, NoDestructor)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_GS_TDB_C>         K2Node_DynamicCast_AsBPI_GS_TDB;                   // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetQuestActor_Actor;                      // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Shops_C*                            K2Node_DynamicCast_AsBP_Shops;                     // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Play3DFModEvent_Timer_C_ExecuteUbergraph_Play3DFModEvent_Timer) == 0x000008, "Wrong alignment on Play3DFModEvent_Timer_C_ExecuteUbergraph_Play3DFModEvent_Timer");
static_assert(sizeof(Play3DFModEvent_Timer_C_ExecuteUbergraph_Play3DFModEvent_Timer) == 0x000068, "Wrong size on Play3DFModEvent_Timer_C_ExecuteUbergraph_Play3DFModEvent_Timer");
static_assert(offsetof(Play3DFModEvent_Timer_C_ExecuteUbergraph_Play3DFModEvent_Timer, EntryPoint) == 0x000000, "Member 'Play3DFModEvent_Timer_C_ExecuteUbergraph_Play3DFModEvent_Timer::EntryPoint' has a wrong offset!");
static_assert(offsetof(Play3DFModEvent_Timer_C_ExecuteUbergraph_Play3DFModEvent_Timer, K2Node_Event_Context) == 0x000008, "Member 'Play3DFModEvent_Timer_C_ExecuteUbergraph_Play3DFModEvent_Timer::K2Node_Event_Context' has a wrong offset!");
static_assert(offsetof(Play3DFModEvent_Timer_C_ExecuteUbergraph_Play3DFModEvent_Timer, K2Node_Event_Payload) == 0x000010, "Member 'Play3DFModEvent_Timer_C_ExecuteUbergraph_Play3DFModEvent_Timer::K2Node_Event_Payload' has a wrong offset!");
static_assert(offsetof(Play3DFModEvent_Timer_C_ExecuteUbergraph_Play3DFModEvent_Timer, CallFunc_GetGameState_ReturnValue) == 0x000030, "Member 'Play3DFModEvent_Timer_C_ExecuteUbergraph_Play3DFModEvent_Timer::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(Play3DFModEvent_Timer_C_ExecuteUbergraph_Play3DFModEvent_Timer, K2Node_DynamicCast_AsBPI_GS_TDB) == 0x000038, "Member 'Play3DFModEvent_Timer_C_ExecuteUbergraph_Play3DFModEvent_Timer::K2Node_DynamicCast_AsBPI_GS_TDB' has a wrong offset!");
static_assert(offsetof(Play3DFModEvent_Timer_C_ExecuteUbergraph_Play3DFModEvent_Timer, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'Play3DFModEvent_Timer_C_ExecuteUbergraph_Play3DFModEvent_Timer::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Play3DFModEvent_Timer_C_ExecuteUbergraph_Play3DFModEvent_Timer, CallFunc_GetQuestActor_Actor) == 0x000050, "Member 'Play3DFModEvent_Timer_C_ExecuteUbergraph_Play3DFModEvent_Timer::CallFunc_GetQuestActor_Actor' has a wrong offset!");
static_assert(offsetof(Play3DFModEvent_Timer_C_ExecuteUbergraph_Play3DFModEvent_Timer, K2Node_DynamicCast_AsBP_Shops) == 0x000058, "Member 'Play3DFModEvent_Timer_C_ExecuteUbergraph_Play3DFModEvent_Timer::K2Node_DynamicCast_AsBP_Shops' has a wrong offset!");
static_assert(offsetof(Play3DFModEvent_Timer_C_ExecuteUbergraph_Play3DFModEvent_Timer, K2Node_DynamicCast_bSuccess_1) == 0x000060, "Member 'Play3DFModEvent_Timer_C_ExecuteUbergraph_Play3DFModEvent_Timer::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}

