#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CampTent

#include "Basic.hpp"

#include "E_ActorType_structs.hpp"
#include "E_InteractType_structs.hpp"


namespace SDK::Params
{

// Function BP_CampTent.BP_CampTent_C.AddPlayer
// 0x0010 (0x0010 - 0x0000)
struct BP_CampTent_C_AddPlayer final
{
public:
	class AActor*                                 Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampTent_C_AddPlayer) == 0x000008, "Wrong alignment on BP_CampTent_C_AddPlayer");
static_assert(sizeof(BP_CampTent_C_AddPlayer) == 0x000010, "Wrong size on BP_CampTent_C_AddPlayer");
static_assert(offsetof(BP_CampTent_C_AddPlayer, Player) == 0x000000, "Member 'BP_CampTent_C_AddPlayer::Player' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_AddPlayer, CallFunc_Array_AddUnique_ReturnValue) == 0x000008, "Member 'BP_CampTent_C_AddPlayer::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");

// Function BP_CampTent.BP_CampTent_C.CanAdd
// 0x000C (0x000C - 0x0000)
struct BP_CampTent_C_CanAdd final
{
public:
	bool                                          Can;                                               // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampTent_C_CanAdd) == 0x000004, "Wrong alignment on BP_CampTent_C_CanAdd");
static_assert(sizeof(BP_CampTent_C_CanAdd) == 0x00000C, "Wrong size on BP_CampTent_C_CanAdd");
static_assert(offsetof(BP_CampTent_C_CanAdd, Can) == 0x000000, "Member 'BP_CampTent_C_CanAdd::Can' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_CanAdd, CallFunc_Array_Length_ReturnValue) == 0x000004, "Member 'BP_CampTent_C_CanAdd::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_CanAdd, CallFunc_Less_IntInt_ReturnValue) == 0x000008, "Member 'BP_CampTent_C_CanAdd::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_CampTent.BP_CampTent_C.DoHeal
// 0x0008 (0x0008 - 0x0000)
struct BP_CampTent_C_DoHeal final
{
public:
	class AActor*                                 NewParam;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampTent_C_DoHeal) == 0x000008, "Wrong alignment on BP_CampTent_C_DoHeal");
static_assert(sizeof(BP_CampTent_C_DoHeal) == 0x000008, "Wrong size on BP_CampTent_C_DoHeal");
static_assert(offsetof(BP_CampTent_C_DoHeal, NewParam) == 0x000000, "Member 'BP_CampTent_C_DoHeal::NewParam' has a wrong offset!");

// Function BP_CampTent.BP_CampTent_C.ExecuteUbergraph_BP_CampTent
// 0x0110 (0x0110 - 0x0000)
struct BP_CampTent_C_ExecuteUbergraph_BP_CampTent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_Player_8;                             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_Player_7;                             // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_Player_6;                             // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_Player_5;                             // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_SitIndex;                             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_SkipAnimation;                        // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_Player_4;                             // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_Player_3;                             // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_Player_2;                             // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_Player_1;                             // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_Visible_1;                            // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_Visible;                              // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A[0x6];                                       // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_Player;                               // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_GeneralInterface_C> K2Node_DynamicCast_AsBPI_General_Interface;        // 0x0068(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_CampClient_C*                       CallFunc_GetComponentByClass_ReturnValue;          // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABP_Camp_C*                             CallFunc_GetCamp_Camp;                             // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanAdd_Can;                               // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x3];                                       // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_NewParam;                       // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBPC_PlayerStatsComponent_C*            CallFunc_GetComponentByClass_ReturnValue_1;        // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetStat_Value;                            // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SetStat_ReturnValue;                      // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E4[0x4];                                       // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASurvivalPlayer_C*                      K2Node_CustomEvent_Player;                         // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_CampClient_C*                       CallFunc_GetComponentByClass_ReturnValue_2;        // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors;   // 0x00F8(0x0010)(ReferenceParm)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampTent_C_ExecuteUbergraph_BP_CampTent) == 0x000008, "Wrong alignment on BP_CampTent_C_ExecuteUbergraph_BP_CampTent");
static_assert(sizeof(BP_CampTent_C_ExecuteUbergraph_BP_CampTent) == 0x000110, "Wrong size on BP_CampTent_C_ExecuteUbergraph_BP_CampTent");
static_assert(offsetof(BP_CampTent_C_ExecuteUbergraph_BP_CampTent, EntryPoint) == 0x000000, "Member 'BP_CampTent_C_ExecuteUbergraph_BP_CampTent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_ExecuteUbergraph_BP_CampTent, CallFunc_HasAuthority_ReturnValue) == 0x000004, "Member 'BP_CampTent_C_ExecuteUbergraph_BP_CampTent::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_ExecuteUbergraph_BP_CampTent, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BP_CampTent_C_ExecuteUbergraph_BP_CampTent::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_ExecuteUbergraph_BP_CampTent, K2Node_Event_Player_8) == 0x000010, "Member 'BP_CampTent_C_ExecuteUbergraph_BP_CampTent::K2Node_Event_Player_8' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_ExecuteUbergraph_BP_CampTent, K2Node_Event_Player_7) == 0x000018, "Member 'BP_CampTent_C_ExecuteUbergraph_BP_CampTent::K2Node_Event_Player_7' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_ExecuteUbergraph_BP_CampTent, K2Node_Event_Player_6) == 0x000020, "Member 'BP_CampTent_C_ExecuteUbergraph_BP_CampTent::K2Node_Event_Player_6' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_ExecuteUbergraph_BP_CampTent, K2Node_Event_Player_5) == 0x000028, "Member 'BP_CampTent_C_ExecuteUbergraph_BP_CampTent::K2Node_Event_Player_5' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_ExecuteUbergraph_BP_CampTent, K2Node_Event_SitIndex) == 0x000030, "Member 'BP_CampTent_C_ExecuteUbergraph_BP_CampTent::K2Node_Event_SitIndex' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_ExecuteUbergraph_BP_CampTent, K2Node_Event_SkipAnimation) == 0x000034, "Member 'BP_CampTent_C_ExecuteUbergraph_BP_CampTent::K2Node_Event_SkipAnimation' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_ExecuteUbergraph_BP_CampTent, K2Node_Event_Player_4) == 0x000038, "Member 'BP_CampTent_C_ExecuteUbergraph_BP_CampTent::K2Node_Event_Player_4' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_ExecuteUbergraph_BP_CampTent, K2Node_Event_Player_3) == 0x000040, "Member 'BP_CampTent_C_ExecuteUbergraph_BP_CampTent::K2Node_Event_Player_3' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_ExecuteUbergraph_BP_CampTent, K2Node_Event_Player_2) == 0x000048, "Member 'BP_CampTent_C_ExecuteUbergraph_BP_CampTent::K2Node_Event_Player_2' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_ExecuteUbergraph_BP_CampTent, K2Node_Event_Player_1) == 0x000050, "Member 'BP_CampTent_C_ExecuteUbergraph_BP_CampTent::K2Node_Event_Player_1' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_ExecuteUbergraph_BP_CampTent, K2Node_Event_Visible_1) == 0x000058, "Member 'BP_CampTent_C_ExecuteUbergraph_BP_CampTent::K2Node_Event_Visible_1' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_ExecuteUbergraph_BP_CampTent, K2Node_Event_Visible) == 0x000059, "Member 'BP_CampTent_C_ExecuteUbergraph_BP_CampTent::K2Node_Event_Visible' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_ExecuteUbergraph_BP_CampTent, K2Node_Event_Player) == 0x000060, "Member 'BP_CampTent_C_ExecuteUbergraph_BP_CampTent::K2Node_Event_Player' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_ExecuteUbergraph_BP_CampTent, K2Node_DynamicCast_AsBPI_General_Interface) == 0x000068, "Member 'BP_CampTent_C_ExecuteUbergraph_BP_CampTent::K2Node_DynamicCast_AsBPI_General_Interface' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_ExecuteUbergraph_BP_CampTent, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'BP_CampTent_C_ExecuteUbergraph_BP_CampTent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_ExecuteUbergraph_BP_CampTent, CallFunc_GetComponentByClass_ReturnValue) == 0x000080, "Member 'BP_CampTent_C_ExecuteUbergraph_BP_CampTent::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_ExecuteUbergraph_BP_CampTent, CallFunc_GetCamp_Camp) == 0x000088, "Member 'BP_CampTent_C_ExecuteUbergraph_BP_CampTent::CallFunc_GetCamp_Camp' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_ExecuteUbergraph_BP_CampTent, CallFunc_CanAdd_Can) == 0x000090, "Member 'BP_CampTent_C_ExecuteUbergraph_BP_CampTent::CallFunc_CanAdd_Can' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_ExecuteUbergraph_BP_CampTent, K2Node_Event_DeltaSeconds) == 0x000094, "Member 'BP_CampTent_C_ExecuteUbergraph_BP_CampTent::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_ExecuteUbergraph_BP_CampTent, CallFunc_Array_Get_Item) == 0x000098, "Member 'BP_CampTent_C_ExecuteUbergraph_BP_CampTent::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_ExecuteUbergraph_BP_CampTent, CallFunc_Array_Length_ReturnValue) == 0x0000A0, "Member 'BP_CampTent_C_ExecuteUbergraph_BP_CampTent::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_ExecuteUbergraph_BP_CampTent, K2Node_CustomEvent_NewParam) == 0x0000A8, "Member 'BP_CampTent_C_ExecuteUbergraph_BP_CampTent::K2Node_CustomEvent_NewParam' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_ExecuteUbergraph_BP_CampTent, Temp_int_Loop_Counter_Variable) == 0x0000B0, "Member 'BP_CampTent_C_ExecuteUbergraph_BP_CampTent::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_ExecuteUbergraph_BP_CampTent, CallFunc_GetComponentByClass_ReturnValue_1) == 0x0000B8, "Member 'BP_CampTent_C_ExecuteUbergraph_BP_CampTent::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_ExecuteUbergraph_BP_CampTent, CallFunc_GetStat_Value) == 0x0000C0, "Member 'BP_CampTent_C_ExecuteUbergraph_BP_CampTent::CallFunc_GetStat_Value' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_ExecuteUbergraph_BP_CampTent, CallFunc_Less_IntInt_ReturnValue) == 0x0000C8, "Member 'BP_CampTent_C_ExecuteUbergraph_BP_CampTent::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_ExecuteUbergraph_BP_CampTent, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0000D0, "Member 'BP_CampTent_C_ExecuteUbergraph_BP_CampTent::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_ExecuteUbergraph_BP_CampTent, CallFunc_SetStat_ReturnValue) == 0x0000D8, "Member 'BP_CampTent_C_ExecuteUbergraph_BP_CampTent::CallFunc_SetStat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_ExecuteUbergraph_BP_CampTent, CallFunc_Add_IntInt_ReturnValue) == 0x0000E0, "Member 'BP_CampTent_C_ExecuteUbergraph_BP_CampTent::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_ExecuteUbergraph_BP_CampTent, K2Node_CustomEvent_Player) == 0x0000E8, "Member 'BP_CampTent_C_ExecuteUbergraph_BP_CampTent::K2Node_CustomEvent_Player' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_ExecuteUbergraph_BP_CampTent, CallFunc_GetComponentByClass_ReturnValue_2) == 0x0000F0, "Member 'BP_CampTent_C_ExecuteUbergraph_BP_CampTent::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_ExecuteUbergraph_BP_CampTent, CallFunc_GetOverlappingActors_OverlappingActors) == 0x0000F8, "Member 'BP_CampTent_C_ExecuteUbergraph_BP_CampTent::CallFunc_GetOverlappingActors_OverlappingActors' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_ExecuteUbergraph_BP_CampTent, CallFunc_Array_Contains_ReturnValue) == 0x000108, "Member 'BP_CampTent_C_ExecuteUbergraph_BP_CampTent::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");

// Function BP_CampTent.BP_CampTent_C.GetActorType
// 0x0001 (0x0001 - 0x0000)
struct BP_CampTent_C_GetActorType final
{
public:
	E_ActorType                                   ActorType;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampTent_C_GetActorType) == 0x000001, "Wrong alignment on BP_CampTent_C_GetActorType");
static_assert(sizeof(BP_CampTent_C_GetActorType) == 0x000001, "Wrong size on BP_CampTent_C_GetActorType");
static_assert(offsetof(BP_CampTent_C_GetActorType, ActorType) == 0x000000, "Member 'BP_CampTent_C_GetActorType::ActorType' has a wrong offset!");

// Function BP_CampTent.BP_CampTent_C.IsLocked?
// 0x0001 (0x0001 - 0x0000)
struct BP_CampTent_C_IsLocked_ final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampTent_C_IsLocked_) == 0x000001, "Wrong alignment on BP_CampTent_C_IsLocked_");
static_assert(sizeof(BP_CampTent_C_IsLocked_) == 0x000001, "Wrong size on BP_CampTent_C_IsLocked_");
static_assert(offsetof(BP_CampTent_C_IsLocked_, Result) == 0x000000, "Member 'BP_CampTent_C_IsLocked_::Result' has a wrong offset!");

// Function BP_CampTent.BP_CampTent_C.OnBeginInteract
// 0x0008 (0x0008 - 0x0000)
struct BP_CampTent_C_OnBeginInteract final
{
public:
	class APawn*                                  Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampTent_C_OnBeginInteract) == 0x000008, "Wrong alignment on BP_CampTent_C_OnBeginInteract");
static_assert(sizeof(BP_CampTent_C_OnBeginInteract) == 0x000008, "Wrong size on BP_CampTent_C_OnBeginInteract");
static_assert(offsetof(BP_CampTent_C_OnBeginInteract, Player) == 0x000000, "Member 'BP_CampTent_C_OnBeginInteract::Player' has a wrong offset!");

// Function BP_CampTent.BP_CampTent_C.OnFocused
// 0x0078 (0x0078 - 0x0000)
struct BP_CampTent_C_OnFocused final
{
public:
	class APawn*                                  Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 HighlightActor;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UActorComponent*                        HighlightActorComponent;                           // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	E_InteractType                                InteractType;                                      // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        LateTime;                                          // 0x0020(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_GameHUD_C>        K2Node_DynamicCast_AsBPI_Game_HUD;                 // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIW_PlayerMain_C*                      CallFunc_GetGUI_GUI;                               // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors;   // 0x0060(0x0010)(ReferenceParm)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampTent_C_OnFocused) == 0x000008, "Wrong alignment on BP_CampTent_C_OnFocused");
static_assert(sizeof(BP_CampTent_C_OnFocused) == 0x000078, "Wrong size on BP_CampTent_C_OnFocused");
static_assert(offsetof(BP_CampTent_C_OnFocused, Player) == 0x000000, "Member 'BP_CampTent_C_OnFocused::Player' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_OnFocused, HighlightActor) == 0x000008, "Member 'BP_CampTent_C_OnFocused::HighlightActor' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_OnFocused, HighlightActorComponent) == 0x000010, "Member 'BP_CampTent_C_OnFocused::HighlightActorComponent' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_OnFocused, InteractType) == 0x000018, "Member 'BP_CampTent_C_OnFocused::InteractType' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_OnFocused, LateTime) == 0x000020, "Member 'BP_CampTent_C_OnFocused::LateTime' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_OnFocused, CallFunc_GetPlayerController_ReturnValue) == 0x000028, "Member 'BP_CampTent_C_OnFocused::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_OnFocused, CallFunc_IsLocallyControlled_ReturnValue) == 0x000030, "Member 'BP_CampTent_C_OnFocused::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_OnFocused, CallFunc_GetHUD_ReturnValue) == 0x000038, "Member 'BP_CampTent_C_OnFocused::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_OnFocused, K2Node_DynamicCast_AsBPI_Game_HUD) == 0x000040, "Member 'BP_CampTent_C_OnFocused::K2Node_DynamicCast_AsBPI_Game_HUD' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_OnFocused, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'BP_CampTent_C_OnFocused::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_OnFocused, CallFunc_GetGUI_GUI) == 0x000058, "Member 'BP_CampTent_C_OnFocused::CallFunc_GetGUI_GUI' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_OnFocused, CallFunc_GetOverlappingActors_OverlappingActors) == 0x000060, "Member 'BP_CampTent_C_OnFocused::CallFunc_GetOverlappingActors_OverlappingActors' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_OnFocused, CallFunc_Array_Contains_ReturnValue) == 0x000070, "Member 'BP_CampTent_C_OnFocused::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");

// Function BP_CampTent.BP_CampTent_C.OnInteract
// 0x0008 (0x0008 - 0x0000)
struct BP_CampTent_C_OnInteract final
{
public:
	class APawn*                                  Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampTent_C_OnInteract) == 0x000008, "Wrong alignment on BP_CampTent_C_OnInteract");
static_assert(sizeof(BP_CampTent_C_OnInteract) == 0x000008, "Wrong size on BP_CampTent_C_OnInteract");
static_assert(offsetof(BP_CampTent_C_OnInteract, Player) == 0x000000, "Member 'BP_CampTent_C_OnInteract::Player' has a wrong offset!");

// Function BP_CampTent.BP_CampTent_C.OnInteract2
// 0x0008 (0x0008 - 0x0000)
struct BP_CampTent_C_OnInteract2 final
{
public:
	class APawn*                                  Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampTent_C_OnInteract2) == 0x000008, "Wrong alignment on BP_CampTent_C_OnInteract2");
static_assert(sizeof(BP_CampTent_C_OnInteract2) == 0x000008, "Wrong size on BP_CampTent_C_OnInteract2");
static_assert(offsetof(BP_CampTent_C_OnInteract2, Player) == 0x000000, "Member 'BP_CampTent_C_OnInteract2::Player' has a wrong offset!");

// Function BP_CampTent.BP_CampTent_C.OnInteract3
// 0x0008 (0x0008 - 0x0000)
struct BP_CampTent_C_OnInteract3 final
{
public:
	class APawn*                                  Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampTent_C_OnInteract3) == 0x000008, "Wrong alignment on BP_CampTent_C_OnInteract3");
static_assert(sizeof(BP_CampTent_C_OnInteract3) == 0x000008, "Wrong size on BP_CampTent_C_OnInteract3");
static_assert(offsetof(BP_CampTent_C_OnInteract3, Player) == 0x000000, "Member 'BP_CampTent_C_OnInteract3::Player' has a wrong offset!");

// Function BP_CampTent.BP_CampTent_C.OnInteractVehicle
// 0x0010 (0x0010 - 0x0000)
struct BP_CampTent_C_OnInteractVehicle final
{
public:
	class APawn*                                  Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         SitIndex;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SkipAnimation;                                     // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampTent_C_OnInteractVehicle) == 0x000008, "Wrong alignment on BP_CampTent_C_OnInteractVehicle");
static_assert(sizeof(BP_CampTent_C_OnInteractVehicle) == 0x000010, "Wrong size on BP_CampTent_C_OnInteractVehicle");
static_assert(offsetof(BP_CampTent_C_OnInteractVehicle, Player) == 0x000000, "Member 'BP_CampTent_C_OnInteractVehicle::Player' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_OnInteractVehicle, SitIndex) == 0x000008, "Member 'BP_CampTent_C_OnInteractVehicle::SitIndex' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_OnInteractVehicle, SkipAnimation) == 0x00000C, "Member 'BP_CampTent_C_OnInteractVehicle::SkipAnimation' has a wrong offset!");

// Function BP_CampTent.BP_CampTent_C.OnLocalInteract
// 0x0008 (0x0008 - 0x0000)
struct BP_CampTent_C_OnLocalInteract final
{
public:
	class APawn*                                  Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampTent_C_OnLocalInteract) == 0x000008, "Wrong alignment on BP_CampTent_C_OnLocalInteract");
static_assert(sizeof(BP_CampTent_C_OnLocalInteract) == 0x000008, "Wrong size on BP_CampTent_C_OnLocalInteract");
static_assert(offsetof(BP_CampTent_C_OnLocalInteract, Player) == 0x000000, "Member 'BP_CampTent_C_OnLocalInteract::Player' has a wrong offset!");

// Function BP_CampTent.BP_CampTent_C.OnLostFocus
// 0x0008 (0x0008 - 0x0000)
struct BP_CampTent_C_OnLostFocus final
{
public:
	class APawn*                                  Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampTent_C_OnLostFocus) == 0x000008, "Wrong alignment on BP_CampTent_C_OnLostFocus");
static_assert(sizeof(BP_CampTent_C_OnLostFocus) == 0x000008, "Wrong size on BP_CampTent_C_OnLostFocus");
static_assert(offsetof(BP_CampTent_C_OnLostFocus, Player) == 0x000000, "Member 'BP_CampTent_C_OnLostFocus::Player' has a wrong offset!");

// Function BP_CampTent.BP_CampTent_C.OnPlayerQuit
// 0x0008 (0x0008 - 0x0000)
struct BP_CampTent_C_OnPlayerQuit final
{
public:
	class ASurvivalPlayer_C*                      Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampTent_C_OnPlayerQuit) == 0x000008, "Wrong alignment on BP_CampTent_C_OnPlayerQuit");
static_assert(sizeof(BP_CampTent_C_OnPlayerQuit) == 0x000008, "Wrong size on BP_CampTent_C_OnPlayerQuit");
static_assert(offsetof(BP_CampTent_C_OnPlayerQuit, Player) == 0x000000, "Member 'BP_CampTent_C_OnPlayerQuit::Player' has a wrong offset!");

// Function BP_CampTent.BP_CampTent_C.OnSeen
// 0x0008 (0x0008 - 0x0000)
struct BP_CampTent_C_OnSeen final
{
public:
	class APawn*                                  Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampTent_C_OnSeen) == 0x000008, "Wrong alignment on BP_CampTent_C_OnSeen");
static_assert(sizeof(BP_CampTent_C_OnSeen) == 0x000008, "Wrong size on BP_CampTent_C_OnSeen");
static_assert(offsetof(BP_CampTent_C_OnSeen, Player) == 0x000000, "Member 'BP_CampTent_C_OnSeen::Player' has a wrong offset!");

// Function BP_CampTent.BP_CampTent_C.OnStopInteract
// 0x0008 (0x0008 - 0x0000)
struct BP_CampTent_C_OnStopInteract final
{
public:
	class APawn*                                  Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampTent_C_OnStopInteract) == 0x000008, "Wrong alignment on BP_CampTent_C_OnStopInteract");
static_assert(sizeof(BP_CampTent_C_OnStopInteract) == 0x000008, "Wrong size on BP_CampTent_C_OnStopInteract");
static_assert(offsetof(BP_CampTent_C_OnStopInteract, Player) == 0x000000, "Member 'BP_CampTent_C_OnStopInteract::Player' has a wrong offset!");

// Function BP_CampTent.BP_CampTent_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_CampTent_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampTent_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_CampTent_C_ReceiveTick");
static_assert(sizeof(BP_CampTent_C_ReceiveTick) == 0x000004, "Wrong size on BP_CampTent_C_ReceiveTick");
static_assert(offsetof(BP_CampTent_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_CampTent_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_CampTent.BP_CampTent_C.RemovePlayer
// 0x0010 (0x0010 - 0x0000)
struct BP_CampTent_C_RemovePlayer final
{
public:
	class AActor*                                 Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampTent_C_RemovePlayer) == 0x000008, "Wrong alignment on BP_CampTent_C_RemovePlayer");
static_assert(sizeof(BP_CampTent_C_RemovePlayer) == 0x000010, "Wrong size on BP_CampTent_C_RemovePlayer");
static_assert(offsetof(BP_CampTent_C_RemovePlayer, Player) == 0x000000, "Member 'BP_CampTent_C_RemovePlayer::Player' has a wrong offset!");
static_assert(offsetof(BP_CampTent_C_RemovePlayer, CallFunc_Array_RemoveItem_ReturnValue) == 0x000008, "Member 'BP_CampTent_C_RemovePlayer::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");

// Function BP_CampTent.BP_CampTent_C.Set3DWidgetVisibility
// 0x0001 (0x0001 - 0x0000)
struct BP_CampTent_C_Set3DWidgetVisibility final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampTent_C_Set3DWidgetVisibility) == 0x000001, "Wrong alignment on BP_CampTent_C_Set3DWidgetVisibility");
static_assert(sizeof(BP_CampTent_C_Set3DWidgetVisibility) == 0x000001, "Wrong size on BP_CampTent_C_Set3DWidgetVisibility");
static_assert(offsetof(BP_CampTent_C_Set3DWidgetVisibility, Visible) == 0x000000, "Member 'BP_CampTent_C_Set3DWidgetVisibility::Visible' has a wrong offset!");

// Function BP_CampTent.BP_CampTent_C.SetTutorial3DWidgetVisibility
// 0x0001 (0x0001 - 0x0000)
struct BP_CampTent_C_SetTutorial3DWidgetVisibility final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampTent_C_SetTutorial3DWidgetVisibility) == 0x000001, "Wrong alignment on BP_CampTent_C_SetTutorial3DWidgetVisibility");
static_assert(sizeof(BP_CampTent_C_SetTutorial3DWidgetVisibility) == 0x000001, "Wrong size on BP_CampTent_C_SetTutorial3DWidgetVisibility");
static_assert(offsetof(BP_CampTent_C_SetTutorial3DWidgetVisibility, Visible) == 0x000000, "Member 'BP_CampTent_C_SetTutorial3DWidgetVisibility::Visible' has a wrong offset!");

}
