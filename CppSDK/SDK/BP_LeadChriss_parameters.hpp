#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LeadChriss

#include "Basic.hpp"

#include "E_ActorType_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_LeadChriss.BP_LeadChriss_C.ExecuteUbergraph_BP_LeadChriss
// 0x0050 (0x0050 - 0x0000)
struct BP_LeadChriss_C_ExecuteUbergraph_BP_LeadChriss final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASurvivalPlayer_C*                      CallFunc_GetCachedReferences_InteractingPawn;      // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASurvPC_C*                              CallFunc_GetCachedReferences_Controller;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_GameHUD_C*                          CallFunc_GetCachedReferences_HUD;                  // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UW_Dialogue_C*                          CallFunc_GetCachedReferences_DialogueWidget;       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_Shop_C*                              CallFunc_GetCachedReferences_ShopWidget;           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33[0x1];                                       // 0x0033(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0034(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0048(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LeadChriss_C_ExecuteUbergraph_BP_LeadChriss) == 0x000008, "Wrong alignment on BP_LeadChriss_C_ExecuteUbergraph_BP_LeadChriss");
static_assert(sizeof(BP_LeadChriss_C_ExecuteUbergraph_BP_LeadChriss) == 0x000050, "Wrong size on BP_LeadChriss_C_ExecuteUbergraph_BP_LeadChriss");
static_assert(offsetof(BP_LeadChriss_C_ExecuteUbergraph_BP_LeadChriss, EntryPoint) == 0x000000, "Member 'BP_LeadChriss_C_ExecuteUbergraph_BP_LeadChriss::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_LeadChriss_C_ExecuteUbergraph_BP_LeadChriss, CallFunc_GetCachedReferences_InteractingPawn) == 0x000008, "Member 'BP_LeadChriss_C_ExecuteUbergraph_BP_LeadChriss::CallFunc_GetCachedReferences_InteractingPawn' has a wrong offset!");
static_assert(offsetof(BP_LeadChriss_C_ExecuteUbergraph_BP_LeadChriss, CallFunc_GetCachedReferences_Controller) == 0x000010, "Member 'BP_LeadChriss_C_ExecuteUbergraph_BP_LeadChriss::CallFunc_GetCachedReferences_Controller' has a wrong offset!");
static_assert(offsetof(BP_LeadChriss_C_ExecuteUbergraph_BP_LeadChriss, CallFunc_GetCachedReferences_HUD) == 0x000018, "Member 'BP_LeadChriss_C_ExecuteUbergraph_BP_LeadChriss::CallFunc_GetCachedReferences_HUD' has a wrong offset!");
static_assert(offsetof(BP_LeadChriss_C_ExecuteUbergraph_BP_LeadChriss, CallFunc_GetCachedReferences_DialogueWidget) == 0x000020, "Member 'BP_LeadChriss_C_ExecuteUbergraph_BP_LeadChriss::CallFunc_GetCachedReferences_DialogueWidget' has a wrong offset!");
static_assert(offsetof(BP_LeadChriss_C_ExecuteUbergraph_BP_LeadChriss, CallFunc_GetCachedReferences_ShopWidget) == 0x000028, "Member 'BP_LeadChriss_C_ExecuteUbergraph_BP_LeadChriss::CallFunc_GetCachedReferences_ShopWidget' has a wrong offset!");
static_assert(offsetof(BP_LeadChriss_C_ExecuteUbergraph_BP_LeadChriss, Temp_bool_Has_Been_Initd_Variable) == 0x000030, "Member 'BP_LeadChriss_C_ExecuteUbergraph_BP_LeadChriss::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_LeadChriss_C_ExecuteUbergraph_BP_LeadChriss, CallFunc_IsValid_ReturnValue) == 0x000031, "Member 'BP_LeadChriss_C_ExecuteUbergraph_BP_LeadChriss::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LeadChriss_C_ExecuteUbergraph_BP_LeadChriss, Temp_bool_IsClosed_Variable) == 0x000032, "Member 'BP_LeadChriss_C_ExecuteUbergraph_BP_LeadChriss::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_LeadChriss_C_ExecuteUbergraph_BP_LeadChriss, K2Node_CreateDelegate_OutputDelegate) == 0x000034, "Member 'BP_LeadChriss_C_ExecuteUbergraph_BP_LeadChriss::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_LeadChriss_C_ExecuteUbergraph_BP_LeadChriss, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000048, "Member 'BP_LeadChriss_C_ExecuteUbergraph_BP_LeadChriss::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

// Function BP_LeadChriss.BP_LeadChriss_C.GetActorType
// 0x0001 (0x0001 - 0x0000)
struct BP_LeadChriss_C_GetActorType final
{
public:
	E_ActorType                                   ActorType;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LeadChriss_C_GetActorType) == 0x000001, "Wrong alignment on BP_LeadChriss_C_GetActorType");
static_assert(sizeof(BP_LeadChriss_C_GetActorType) == 0x000001, "Wrong size on BP_LeadChriss_C_GetActorType");
static_assert(offsetof(BP_LeadChriss_C_GetActorType, ActorType) == 0x000000, "Member 'BP_LeadChriss_C_GetActorType::ActorType' has a wrong offset!");

// Function BP_LeadChriss.BP_LeadChriss_C.IsLocked?
// 0x0001 (0x0001 - 0x0000)
struct BP_LeadChriss_C_IsLocked_ final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LeadChriss_C_IsLocked_) == 0x000001, "Wrong alignment on BP_LeadChriss_C_IsLocked_");
static_assert(sizeof(BP_LeadChriss_C_IsLocked_) == 0x000001, "Wrong size on BP_LeadChriss_C_IsLocked_");
static_assert(offsetof(BP_LeadChriss_C_IsLocked_, Result) == 0x000000, "Member 'BP_LeadChriss_C_IsLocked_::Result' has a wrong offset!");

}
