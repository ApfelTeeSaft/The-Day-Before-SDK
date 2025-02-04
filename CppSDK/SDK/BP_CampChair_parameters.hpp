#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CampChair

#include "Basic.hpp"

#include "E_ActorType_structs.hpp"
#include "E_InteractType_structs.hpp"


namespace SDK::Params
{

// Function BP_CampChair.BP_CampChair_C.ExecuteUbergraph_BP_CampChair
// 0x0070 (0x0070 - 0x0000)
struct BP_CampChair_C_ExecuteUbergraph_BP_CampChair final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_Player_4;                             // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_Player_3;                             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_Player_2;                             // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_Player_1;                             // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_Visible_1;                            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_Visible;                              // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_Player;                               // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_CampClient_C*                       CallFunc_GetComponentByClass_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABP_Camp_C*                             CallFunc_GetCamp_Camp;                             // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_Player_5;                             // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_SitIndex;                             // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_SkipAnimation;                        // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_Player_6;                             // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_Player_7;                             // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_Player_8;                             // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampChair_C_ExecuteUbergraph_BP_CampChair) == 0x000008, "Wrong alignment on BP_CampChair_C_ExecuteUbergraph_BP_CampChair");
static_assert(sizeof(BP_CampChair_C_ExecuteUbergraph_BP_CampChair) == 0x000070, "Wrong size on BP_CampChair_C_ExecuteUbergraph_BP_CampChair");
static_assert(offsetof(BP_CampChair_C_ExecuteUbergraph_BP_CampChair, EntryPoint) == 0x000000, "Member 'BP_CampChair_C_ExecuteUbergraph_BP_CampChair::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_CampChair_C_ExecuteUbergraph_BP_CampChair, K2Node_Event_Player_4) == 0x000008, "Member 'BP_CampChair_C_ExecuteUbergraph_BP_CampChair::K2Node_Event_Player_4' has a wrong offset!");
static_assert(offsetof(BP_CampChair_C_ExecuteUbergraph_BP_CampChair, K2Node_Event_Player_3) == 0x000010, "Member 'BP_CampChair_C_ExecuteUbergraph_BP_CampChair::K2Node_Event_Player_3' has a wrong offset!");
static_assert(offsetof(BP_CampChair_C_ExecuteUbergraph_BP_CampChair, K2Node_Event_Player_2) == 0x000018, "Member 'BP_CampChair_C_ExecuteUbergraph_BP_CampChair::K2Node_Event_Player_2' has a wrong offset!");
static_assert(offsetof(BP_CampChair_C_ExecuteUbergraph_BP_CampChair, K2Node_Event_Player_1) == 0x000020, "Member 'BP_CampChair_C_ExecuteUbergraph_BP_CampChair::K2Node_Event_Player_1' has a wrong offset!");
static_assert(offsetof(BP_CampChair_C_ExecuteUbergraph_BP_CampChair, K2Node_Event_Visible_1) == 0x000028, "Member 'BP_CampChair_C_ExecuteUbergraph_BP_CampChair::K2Node_Event_Visible_1' has a wrong offset!");
static_assert(offsetof(BP_CampChair_C_ExecuteUbergraph_BP_CampChair, K2Node_Event_Visible) == 0x000029, "Member 'BP_CampChair_C_ExecuteUbergraph_BP_CampChair::K2Node_Event_Visible' has a wrong offset!");
static_assert(offsetof(BP_CampChair_C_ExecuteUbergraph_BP_CampChair, K2Node_Event_Player) == 0x000030, "Member 'BP_CampChair_C_ExecuteUbergraph_BP_CampChair::K2Node_Event_Player' has a wrong offset!");
static_assert(offsetof(BP_CampChair_C_ExecuteUbergraph_BP_CampChair, CallFunc_GetComponentByClass_ReturnValue) == 0x000038, "Member 'BP_CampChair_C_ExecuteUbergraph_BP_CampChair::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CampChair_C_ExecuteUbergraph_BP_CampChair, CallFunc_GetCamp_Camp) == 0x000040, "Member 'BP_CampChair_C_ExecuteUbergraph_BP_CampChair::CallFunc_GetCamp_Camp' has a wrong offset!");
static_assert(offsetof(BP_CampChair_C_ExecuteUbergraph_BP_CampChair, K2Node_Event_Player_5) == 0x000048, "Member 'BP_CampChair_C_ExecuteUbergraph_BP_CampChair::K2Node_Event_Player_5' has a wrong offset!");
static_assert(offsetof(BP_CampChair_C_ExecuteUbergraph_BP_CampChair, K2Node_Event_SitIndex) == 0x000050, "Member 'BP_CampChair_C_ExecuteUbergraph_BP_CampChair::K2Node_Event_SitIndex' has a wrong offset!");
static_assert(offsetof(BP_CampChair_C_ExecuteUbergraph_BP_CampChair, K2Node_Event_SkipAnimation) == 0x000054, "Member 'BP_CampChair_C_ExecuteUbergraph_BP_CampChair::K2Node_Event_SkipAnimation' has a wrong offset!");
static_assert(offsetof(BP_CampChair_C_ExecuteUbergraph_BP_CampChair, K2Node_Event_Player_6) == 0x000058, "Member 'BP_CampChair_C_ExecuteUbergraph_BP_CampChair::K2Node_Event_Player_6' has a wrong offset!");
static_assert(offsetof(BP_CampChair_C_ExecuteUbergraph_BP_CampChair, K2Node_Event_Player_7) == 0x000060, "Member 'BP_CampChair_C_ExecuteUbergraph_BP_CampChair::K2Node_Event_Player_7' has a wrong offset!");
static_assert(offsetof(BP_CampChair_C_ExecuteUbergraph_BP_CampChair, K2Node_Event_Player_8) == 0x000068, "Member 'BP_CampChair_C_ExecuteUbergraph_BP_CampChair::K2Node_Event_Player_8' has a wrong offset!");

// Function BP_CampChair.BP_CampChair_C.GetActorType
// 0x0001 (0x0001 - 0x0000)
struct BP_CampChair_C_GetActorType final
{
public:
	E_ActorType                                   ActorType;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampChair_C_GetActorType) == 0x000001, "Wrong alignment on BP_CampChair_C_GetActorType");
static_assert(sizeof(BP_CampChair_C_GetActorType) == 0x000001, "Wrong size on BP_CampChair_C_GetActorType");
static_assert(offsetof(BP_CampChair_C_GetActorType, ActorType) == 0x000000, "Member 'BP_CampChair_C_GetActorType::ActorType' has a wrong offset!");

// Function BP_CampChair.BP_CampChair_C.HasPlayer
// 0x0002 (0x0002 - 0x0000)
struct BP_CampChair_C_HasPlayer final
{
public:
	bool                                          Has;                                               // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampChair_C_HasPlayer) == 0x000001, "Wrong alignment on BP_CampChair_C_HasPlayer");
static_assert(sizeof(BP_CampChair_C_HasPlayer) == 0x000002, "Wrong size on BP_CampChair_C_HasPlayer");
static_assert(offsetof(BP_CampChair_C_HasPlayer, Has) == 0x000000, "Member 'BP_CampChair_C_HasPlayer::Has' has a wrong offset!");
static_assert(offsetof(BP_CampChair_C_HasPlayer, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'BP_CampChair_C_HasPlayer::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_CampChair.BP_CampChair_C.IsLocked?
// 0x0001 (0x0001 - 0x0000)
struct BP_CampChair_C_IsLocked_ final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampChair_C_IsLocked_) == 0x000001, "Wrong alignment on BP_CampChair_C_IsLocked_");
static_assert(sizeof(BP_CampChair_C_IsLocked_) == 0x000001, "Wrong size on BP_CampChair_C_IsLocked_");
static_assert(offsetof(BP_CampChair_C_IsLocked_, Result) == 0x000000, "Member 'BP_CampChair_C_IsLocked_::Result' has a wrong offset!");

// Function BP_CampChair.BP_CampChair_C.OnBeginInteract
// 0x0008 (0x0008 - 0x0000)
struct BP_CampChair_C_OnBeginInteract final
{
public:
	class APawn*                                  Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampChair_C_OnBeginInteract) == 0x000008, "Wrong alignment on BP_CampChair_C_OnBeginInteract");
static_assert(sizeof(BP_CampChair_C_OnBeginInteract) == 0x000008, "Wrong size on BP_CampChair_C_OnBeginInteract");
static_assert(offsetof(BP_CampChair_C_OnBeginInteract, Player) == 0x000000, "Member 'BP_CampChair_C_OnBeginInteract::Player' has a wrong offset!");

// Function BP_CampChair.BP_CampChair_C.OnFocused
// 0x0058 (0x0058 - 0x0000)
struct BP_CampChair_C_OnFocused final
{
public:
	class APawn*                                  Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 HighlightActor;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UActorComponent*                        HighlightActorComponent;                           // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	E_InteractType                                InteractType;                                      // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        LateTime;                                          // 0x0020(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_GameHUD_C>        K2Node_DynamicCast_AsBPI_Game_HUD;                 // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIW_PlayerMain_C*                      CallFunc_GetGUI_GUI;                               // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampChair_C_OnFocused) == 0x000008, "Wrong alignment on BP_CampChair_C_OnFocused");
static_assert(sizeof(BP_CampChair_C_OnFocused) == 0x000058, "Wrong size on BP_CampChair_C_OnFocused");
static_assert(offsetof(BP_CampChair_C_OnFocused, Player) == 0x000000, "Member 'BP_CampChair_C_OnFocused::Player' has a wrong offset!");
static_assert(offsetof(BP_CampChair_C_OnFocused, HighlightActor) == 0x000008, "Member 'BP_CampChair_C_OnFocused::HighlightActor' has a wrong offset!");
static_assert(offsetof(BP_CampChair_C_OnFocused, HighlightActorComponent) == 0x000010, "Member 'BP_CampChair_C_OnFocused::HighlightActorComponent' has a wrong offset!");
static_assert(offsetof(BP_CampChair_C_OnFocused, InteractType) == 0x000018, "Member 'BP_CampChair_C_OnFocused::InteractType' has a wrong offset!");
static_assert(offsetof(BP_CampChair_C_OnFocused, LateTime) == 0x000020, "Member 'BP_CampChair_C_OnFocused::LateTime' has a wrong offset!");
static_assert(offsetof(BP_CampChair_C_OnFocused, CallFunc_GetPlayerController_ReturnValue) == 0x000028, "Member 'BP_CampChair_C_OnFocused::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CampChair_C_OnFocused, CallFunc_GetHUD_ReturnValue) == 0x000030, "Member 'BP_CampChair_C_OnFocused::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CampChair_C_OnFocused, K2Node_DynamicCast_AsBPI_Game_HUD) == 0x000038, "Member 'BP_CampChair_C_OnFocused::K2Node_DynamicCast_AsBPI_Game_HUD' has a wrong offset!");
static_assert(offsetof(BP_CampChair_C_OnFocused, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BP_CampChair_C_OnFocused::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_CampChair_C_OnFocused, CallFunc_GetGUI_GUI) == 0x000050, "Member 'BP_CampChair_C_OnFocused::CallFunc_GetGUI_GUI' has a wrong offset!");

// Function BP_CampChair.BP_CampChair_C.OnInteract
// 0x0008 (0x0008 - 0x0000)
struct BP_CampChair_C_OnInteract final
{
public:
	class APawn*                                  Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampChair_C_OnInteract) == 0x000008, "Wrong alignment on BP_CampChair_C_OnInteract");
static_assert(sizeof(BP_CampChair_C_OnInteract) == 0x000008, "Wrong size on BP_CampChair_C_OnInteract");
static_assert(offsetof(BP_CampChair_C_OnInteract, Player) == 0x000000, "Member 'BP_CampChair_C_OnInteract::Player' has a wrong offset!");

// Function BP_CampChair.BP_CampChair_C.OnInteract2
// 0x0008 (0x0008 - 0x0000)
struct BP_CampChair_C_OnInteract2 final
{
public:
	class APawn*                                  Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampChair_C_OnInteract2) == 0x000008, "Wrong alignment on BP_CampChair_C_OnInteract2");
static_assert(sizeof(BP_CampChair_C_OnInteract2) == 0x000008, "Wrong size on BP_CampChair_C_OnInteract2");
static_assert(offsetof(BP_CampChair_C_OnInteract2, Player) == 0x000000, "Member 'BP_CampChair_C_OnInteract2::Player' has a wrong offset!");

// Function BP_CampChair.BP_CampChair_C.OnInteract3
// 0x0008 (0x0008 - 0x0000)
struct BP_CampChair_C_OnInteract3 final
{
public:
	class APawn*                                  Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampChair_C_OnInteract3) == 0x000008, "Wrong alignment on BP_CampChair_C_OnInteract3");
static_assert(sizeof(BP_CampChair_C_OnInteract3) == 0x000008, "Wrong size on BP_CampChair_C_OnInteract3");
static_assert(offsetof(BP_CampChair_C_OnInteract3, Player) == 0x000000, "Member 'BP_CampChair_C_OnInteract3::Player' has a wrong offset!");

// Function BP_CampChair.BP_CampChair_C.OnInteractVehicle
// 0x0010 (0x0010 - 0x0000)
struct BP_CampChair_C_OnInteractVehicle final
{
public:
	class APawn*                                  Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         SitIndex;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SkipAnimation;                                     // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampChair_C_OnInteractVehicle) == 0x000008, "Wrong alignment on BP_CampChair_C_OnInteractVehicle");
static_assert(sizeof(BP_CampChair_C_OnInteractVehicle) == 0x000010, "Wrong size on BP_CampChair_C_OnInteractVehicle");
static_assert(offsetof(BP_CampChair_C_OnInteractVehicle, Player) == 0x000000, "Member 'BP_CampChair_C_OnInteractVehicle::Player' has a wrong offset!");
static_assert(offsetof(BP_CampChair_C_OnInteractVehicle, SitIndex) == 0x000008, "Member 'BP_CampChair_C_OnInteractVehicle::SitIndex' has a wrong offset!");
static_assert(offsetof(BP_CampChair_C_OnInteractVehicle, SkipAnimation) == 0x00000C, "Member 'BP_CampChair_C_OnInteractVehicle::SkipAnimation' has a wrong offset!");

// Function BP_CampChair.BP_CampChair_C.OnLocalInteract
// 0x0008 (0x0008 - 0x0000)
struct BP_CampChair_C_OnLocalInteract final
{
public:
	class APawn*                                  Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampChair_C_OnLocalInteract) == 0x000008, "Wrong alignment on BP_CampChair_C_OnLocalInteract");
static_assert(sizeof(BP_CampChair_C_OnLocalInteract) == 0x000008, "Wrong size on BP_CampChair_C_OnLocalInteract");
static_assert(offsetof(BP_CampChair_C_OnLocalInteract, Player) == 0x000000, "Member 'BP_CampChair_C_OnLocalInteract::Player' has a wrong offset!");

// Function BP_CampChair.BP_CampChair_C.OnLostFocus
// 0x0008 (0x0008 - 0x0000)
struct BP_CampChair_C_OnLostFocus final
{
public:
	class APawn*                                  Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampChair_C_OnLostFocus) == 0x000008, "Wrong alignment on BP_CampChair_C_OnLostFocus");
static_assert(sizeof(BP_CampChair_C_OnLostFocus) == 0x000008, "Wrong size on BP_CampChair_C_OnLostFocus");
static_assert(offsetof(BP_CampChair_C_OnLostFocus, Player) == 0x000000, "Member 'BP_CampChair_C_OnLostFocus::Player' has a wrong offset!");

// Function BP_CampChair.BP_CampChair_C.OnSeen
// 0x0008 (0x0008 - 0x0000)
struct BP_CampChair_C_OnSeen final
{
public:
	class APawn*                                  Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampChair_C_OnSeen) == 0x000008, "Wrong alignment on BP_CampChair_C_OnSeen");
static_assert(sizeof(BP_CampChair_C_OnSeen) == 0x000008, "Wrong size on BP_CampChair_C_OnSeen");
static_assert(offsetof(BP_CampChair_C_OnSeen, Player) == 0x000000, "Member 'BP_CampChair_C_OnSeen::Player' has a wrong offset!");

// Function BP_CampChair.BP_CampChair_C.OnStopInteract
// 0x0008 (0x0008 - 0x0000)
struct BP_CampChair_C_OnStopInteract final
{
public:
	class APawn*                                  Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampChair_C_OnStopInteract) == 0x000008, "Wrong alignment on BP_CampChair_C_OnStopInteract");
static_assert(sizeof(BP_CampChair_C_OnStopInteract) == 0x000008, "Wrong size on BP_CampChair_C_OnStopInteract");
static_assert(offsetof(BP_CampChair_C_OnStopInteract, Player) == 0x000000, "Member 'BP_CampChair_C_OnStopInteract::Player' has a wrong offset!");

// Function BP_CampChair.BP_CampChair_C.Set3DWidgetVisibility
// 0x0001 (0x0001 - 0x0000)
struct BP_CampChair_C_Set3DWidgetVisibility final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampChair_C_Set3DWidgetVisibility) == 0x000001, "Wrong alignment on BP_CampChair_C_Set3DWidgetVisibility");
static_assert(sizeof(BP_CampChair_C_Set3DWidgetVisibility) == 0x000001, "Wrong size on BP_CampChair_C_Set3DWidgetVisibility");
static_assert(offsetof(BP_CampChair_C_Set3DWidgetVisibility, Visible) == 0x000000, "Member 'BP_CampChair_C_Set3DWidgetVisibility::Visible' has a wrong offset!");

// Function BP_CampChair.BP_CampChair_C.SetPlayer
// 0x0008 (0x0008 - 0x0000)
struct BP_CampChair_C_SetPlayer final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampChair_C_SetPlayer) == 0x000008, "Wrong alignment on BP_CampChair_C_SetPlayer");
static_assert(sizeof(BP_CampChair_C_SetPlayer) == 0x000008, "Wrong size on BP_CampChair_C_SetPlayer");
static_assert(offsetof(BP_CampChair_C_SetPlayer, Actor) == 0x000000, "Member 'BP_CampChair_C_SetPlayer::Actor' has a wrong offset!");

// Function BP_CampChair.BP_CampChair_C.SetTutorial3DWidgetVisibility
// 0x0001 (0x0001 - 0x0000)
struct BP_CampChair_C_SetTutorial3DWidgetVisibility final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampChair_C_SetTutorial3DWidgetVisibility) == 0x000001, "Wrong alignment on BP_CampChair_C_SetTutorial3DWidgetVisibility");
static_assert(sizeof(BP_CampChair_C_SetTutorial3DWidgetVisibility) == 0x000001, "Wrong size on BP_CampChair_C_SetTutorial3DWidgetVisibility");
static_assert(offsetof(BP_CampChair_C_SetTutorial3DWidgetVisibility, Visible) == 0x000000, "Member 'BP_CampChair_C_SetTutorial3DWidgetVisibility::Visible' has a wrong offset!");

}

