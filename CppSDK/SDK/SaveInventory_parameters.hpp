#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SaveInventory

#include "Basic.hpp"

#include "QuestFramework_structs.hpp"


namespace SDK::Params
{

// Function SaveInventory.SaveInventory_C.ExecuteEvent
// 0x0028 (0x0028 - 0x0000)
struct SaveInventory_C_ExecuteEvent final
{
public:
	class UQuestContext*                          Context;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FQuestEventPayload                     Payload;                                           // 0x0008(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(SaveInventory_C_ExecuteEvent) == 0x000008, "Wrong alignment on SaveInventory_C_ExecuteEvent");
static_assert(sizeof(SaveInventory_C_ExecuteEvent) == 0x000028, "Wrong size on SaveInventory_C_ExecuteEvent");
static_assert(offsetof(SaveInventory_C_ExecuteEvent, Context) == 0x000000, "Member 'SaveInventory_C_ExecuteEvent::Context' has a wrong offset!");
static_assert(offsetof(SaveInventory_C_ExecuteEvent, Payload) == 0x000008, "Member 'SaveInventory_C_ExecuteEvent::Payload' has a wrong offset!");

// Function SaveInventory.SaveInventory_C.ExecuteUbergraph_SaveInventory
// 0x0060 (0x0060 - 0x0000)
struct SaveInventory_C_ExecuteUbergraph_SaveInventory final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UQuestContext*                          K2Node_Event_Context;                              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FQuestEventPayload                     K2Node_Event_Payload;                              // 0x0010(0x0020)(ConstParm, NoDestructor)
	class AController*                            CallFunc_GetOwnerController_ReturnValue;           // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASurvPC_C*                              K2Node_DynamicCast_AsSurv_PC;                      // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASurvivalPlayer_C*                      K2Node_DynamicCast_AsSurvival_Player;              // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SaveInventory_C_ExecuteUbergraph_SaveInventory) == 0x000008, "Wrong alignment on SaveInventory_C_ExecuteUbergraph_SaveInventory");
static_assert(sizeof(SaveInventory_C_ExecuteUbergraph_SaveInventory) == 0x000060, "Wrong size on SaveInventory_C_ExecuteUbergraph_SaveInventory");
static_assert(offsetof(SaveInventory_C_ExecuteUbergraph_SaveInventory, EntryPoint) == 0x000000, "Member 'SaveInventory_C_ExecuteUbergraph_SaveInventory::EntryPoint' has a wrong offset!");
static_assert(offsetof(SaveInventory_C_ExecuteUbergraph_SaveInventory, K2Node_Event_Context) == 0x000008, "Member 'SaveInventory_C_ExecuteUbergraph_SaveInventory::K2Node_Event_Context' has a wrong offset!");
static_assert(offsetof(SaveInventory_C_ExecuteUbergraph_SaveInventory, K2Node_Event_Payload) == 0x000010, "Member 'SaveInventory_C_ExecuteUbergraph_SaveInventory::K2Node_Event_Payload' has a wrong offset!");
static_assert(offsetof(SaveInventory_C_ExecuteUbergraph_SaveInventory, CallFunc_GetOwnerController_ReturnValue) == 0x000030, "Member 'SaveInventory_C_ExecuteUbergraph_SaveInventory::CallFunc_GetOwnerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(SaveInventory_C_ExecuteUbergraph_SaveInventory, K2Node_DynamicCast_AsSurv_PC) == 0x000038, "Member 'SaveInventory_C_ExecuteUbergraph_SaveInventory::K2Node_DynamicCast_AsSurv_PC' has a wrong offset!");
static_assert(offsetof(SaveInventory_C_ExecuteUbergraph_SaveInventory, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'SaveInventory_C_ExecuteUbergraph_SaveInventory::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SaveInventory_C_ExecuteUbergraph_SaveInventory, CallFunc_K2_GetPawn_ReturnValue) == 0x000048, "Member 'SaveInventory_C_ExecuteUbergraph_SaveInventory::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(SaveInventory_C_ExecuteUbergraph_SaveInventory, K2Node_DynamicCast_AsSurvival_Player) == 0x000050, "Member 'SaveInventory_C_ExecuteUbergraph_SaveInventory::K2Node_DynamicCast_AsSurvival_Player' has a wrong offset!");
static_assert(offsetof(SaveInventory_C_ExecuteUbergraph_SaveInventory, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'SaveInventory_C_ExecuteUbergraph_SaveInventory::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}
