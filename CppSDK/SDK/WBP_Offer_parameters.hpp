#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Offer

#include "Basic.hpp"

#include "InputCore_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FMODStudio_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_Offer.WBP_Offer_C.ExecuteUbergraph_WBP_Offer
// 0x00F8 (0x00F8 - 0x0000)
struct WBP_Offer_C_ExecuteUbergraph_WBP_Offer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFMODEventInstance                     CallFunc_PlayEvent2D_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFMODEventInstance                     CallFunc_PlayEvent2D_ReturnValue_1;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class APawn*                                  CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASurvivalPlayer_C*                      K2Node_DynamicCast_AsSurvival_Player;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0040(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D[0x3];                                       // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FKey& Key)>       K2Node_CreateDelegate_OutputDelegate;              // 0x0080(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0090(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FKey& Key)>       K2Node_CreateDelegate_OutputDelegate_2;            // 0x00A0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x00B8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x00C8(0x0008)(NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_GameHUD_C*                          K2Node_DynamicCast_AsBP_Game_HUD;                  // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x3];                                       // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Offer_C_ExecuteUbergraph_WBP_Offer) == 0x000008, "Wrong alignment on WBP_Offer_C_ExecuteUbergraph_WBP_Offer");
static_assert(sizeof(WBP_Offer_C_ExecuteUbergraph_WBP_Offer) == 0x0000F8, "Wrong size on WBP_Offer_C_ExecuteUbergraph_WBP_Offer");
static_assert(offsetof(WBP_Offer_C_ExecuteUbergraph_WBP_Offer, EntryPoint) == 0x000000, "Member 'WBP_Offer_C_ExecuteUbergraph_WBP_Offer::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Offer_C_ExecuteUbergraph_WBP_Offer, CallFunc_PlayEvent2D_ReturnValue) == 0x000008, "Member 'WBP_Offer_C_ExecuteUbergraph_WBP_Offer::CallFunc_PlayEvent2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Offer_C_ExecuteUbergraph_WBP_Offer, CallFunc_PlayEvent2D_ReturnValue_1) == 0x000010, "Member 'WBP_Offer_C_ExecuteUbergraph_WBP_Offer::CallFunc_PlayEvent2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Offer_C_ExecuteUbergraph_WBP_Offer, CallFunc_GetOwningPlayerPawn_ReturnValue) == 0x000018, "Member 'WBP_Offer_C_ExecuteUbergraph_WBP_Offer::CallFunc_GetOwningPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Offer_C_ExecuteUbergraph_WBP_Offer, K2Node_DynamicCast_AsSurvival_Player) == 0x000020, "Member 'WBP_Offer_C_ExecuteUbergraph_WBP_Offer::K2Node_DynamicCast_AsSurvival_Player' has a wrong offset!");
static_assert(offsetof(WBP_Offer_C_ExecuteUbergraph_WBP_Offer, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WBP_Offer_C_ExecuteUbergraph_WBP_Offer::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Offer_C_ExecuteUbergraph_WBP_Offer, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000030, "Member 'WBP_Offer_C_ExecuteUbergraph_WBP_Offer::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Offer_C_ExecuteUbergraph_WBP_Offer, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000038, "Member 'WBP_Offer_C_ExecuteUbergraph_WBP_Offer::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Offer_C_ExecuteUbergraph_WBP_Offer, K2Node_Event_MyGeometry) == 0x000040, "Member 'WBP_Offer_C_ExecuteUbergraph_WBP_Offer::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Offer_C_ExecuteUbergraph_WBP_Offer, K2Node_Event_InDeltaTime) == 0x000078, "Member 'WBP_Offer_C_ExecuteUbergraph_WBP_Offer::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_Offer_C_ExecuteUbergraph_WBP_Offer, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x00007C, "Member 'WBP_Offer_C_ExecuteUbergraph_WBP_Offer::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Offer_C_ExecuteUbergraph_WBP_Offer, K2Node_CreateDelegate_OutputDelegate) == 0x000080, "Member 'WBP_Offer_C_ExecuteUbergraph_WBP_Offer::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Offer_C_ExecuteUbergraph_WBP_Offer, K2Node_CreateDelegate_OutputDelegate_1) == 0x000090, "Member 'WBP_Offer_C_ExecuteUbergraph_WBP_Offer::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_Offer_C_ExecuteUbergraph_WBP_Offer, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000A0, "Member 'WBP_Offer_C_ExecuteUbergraph_WBP_Offer::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_Offer_C_ExecuteUbergraph_WBP_Offer, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0000B0, "Member 'WBP_Offer_C_ExecuteUbergraph_WBP_Offer::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Offer_C_ExecuteUbergraph_WBP_Offer, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000B8, "Member 'WBP_Offer_C_ExecuteUbergraph_WBP_Offer::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_Offer_C_ExecuteUbergraph_WBP_Offer, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0000C8, "Member 'WBP_Offer_C_ExecuteUbergraph_WBP_Offer::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Offer_C_ExecuteUbergraph_WBP_Offer, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x0000D0, "Member 'WBP_Offer_C_ExecuteUbergraph_WBP_Offer::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Offer_C_ExecuteUbergraph_WBP_Offer, CallFunc_GetPlayerController_ReturnValue) == 0x0000D8, "Member 'WBP_Offer_C_ExecuteUbergraph_WBP_Offer::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Offer_C_ExecuteUbergraph_WBP_Offer, CallFunc_GetHUD_ReturnValue) == 0x0000E0, "Member 'WBP_Offer_C_ExecuteUbergraph_WBP_Offer::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Offer_C_ExecuteUbergraph_WBP_Offer, K2Node_DynamicCast_AsBP_Game_HUD) == 0x0000E8, "Member 'WBP_Offer_C_ExecuteUbergraph_WBP_Offer::K2Node_DynamicCast_AsBP_Game_HUD' has a wrong offset!");
static_assert(offsetof(WBP_Offer_C_ExecuteUbergraph_WBP_Offer, K2Node_DynamicCast_bSuccess_1) == 0x0000F0, "Member 'WBP_Offer_C_ExecuteUbergraph_WBP_Offer::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_Offer_C_ExecuteUbergraph_WBP_Offer, CallFunc_SetPercent_InPercent_ImplicitCast) == 0x0000F4, "Member 'WBP_Offer_C_ExecuteUbergraph_WBP_Offer::CallFunc_SetPercent_InPercent_ImplicitCast' has a wrong offset!");

// Function WBP_Offer.WBP_Offer_C.StartHold Interact
// 0x0020 (0x0020 - 0x0000)
struct WBP_Offer_C_StartHold_Interact final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Offer_C_StartHold_Interact) == 0x000008, "Wrong alignment on WBP_Offer_C_StartHold_Interact");
static_assert(sizeof(WBP_Offer_C_StartHold_Interact) == 0x000020, "Wrong size on WBP_Offer_C_StartHold_Interact");
static_assert(offsetof(WBP_Offer_C_StartHold_Interact, Key) == 0x000000, "Member 'WBP_Offer_C_StartHold_Interact::Key' has a wrong offset!");
static_assert(offsetof(WBP_Offer_C_StartHold_Interact, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x000018, "Member 'WBP_Offer_C_StartHold_Interact::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");

// Function WBP_Offer.WBP_Offer_C.StopHoldInteract
// 0x0020 (0x0020 - 0x0000)
struct WBP_Offer_C_StopHoldInteract final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Offer_C_StopHoldInteract) == 0x000008, "Wrong alignment on WBP_Offer_C_StopHoldInteract");
static_assert(sizeof(WBP_Offer_C_StopHoldInteract) == 0x000020, "Wrong size on WBP_Offer_C_StopHoldInteract");
static_assert(offsetof(WBP_Offer_C_StopHoldInteract, Key) == 0x000000, "Member 'WBP_Offer_C_StopHoldInteract::Key' has a wrong offset!");
static_assert(offsetof(WBP_Offer_C_StopHoldInteract, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x000018, "Member 'WBP_Offer_C_StopHoldInteract::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");

// Function WBP_Offer.WBP_Offer_C.Tick
// 0x003C (0x003C - 0x0000)
struct WBP_Offer_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Offer_C_Tick) == 0x000004, "Wrong alignment on WBP_Offer_C_Tick");
static_assert(sizeof(WBP_Offer_C_Tick) == 0x00003C, "Wrong size on WBP_Offer_C_Tick");
static_assert(offsetof(WBP_Offer_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_Offer_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Offer_C_Tick, InDeltaTime) == 0x000038, "Member 'WBP_Offer_C_Tick::InDeltaTime' has a wrong offset!");

}

