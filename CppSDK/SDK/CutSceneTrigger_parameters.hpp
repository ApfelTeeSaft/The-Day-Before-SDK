#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CutSceneTrigger

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function CutSceneTrigger.CutSceneTrigger_C.ExecuteUbergraph_CutSceneTrigger
// 0x02F0 (0x02F0 - 0x0000)
struct CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_GameHUD_C>        K2Node_DynamicCast_AsBPI_Game_HUD;                 // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIW_PlayerMain_C*                      CallFunc_GetGUI_GUI;                               // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue_1;                     // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_GameHUD_C>        K2Node_DynamicCast_AsBPI_Game_HUD_1;               // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIW_PlayerMain_C*                      CallFunc_GetGUI_GUI_1;                             // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VEase_ReturnValue;                        // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_3;        // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue_2;                     // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_GameHUD_C>        K2Node_DynamicCast_AsBPI_Game_HUD_2;               // 0x00D0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_4;        // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUIW_PlayerMain_C*                      CallFunc_GetGUI_GUI_2;                             // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_1;         // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_5;        // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue_3;                     // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_2;         // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_GameHUD_C>        K2Node_DynamicCast_AsBPI_Game_HUD_3;               // 0x0118(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_129[0x7];                                      // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASurvivalPlayer_C*                      K2Node_DynamicCast_AsSurvival_Player;              // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_139[0x7];                                      // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIW_PlayerMain_C*                      CallFunc_GetGUI_GUI_3;                             // 0x0140(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_6;        // 0x0148(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0150(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0168(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0180(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_199[0x7];                                      // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x01A0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_289[0x7];                                      // 0x0289(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0290(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A9[0x7];                                      // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_7;        // 0x02B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASurvPC_C*                              K2Node_DynamicCast_AsSurv_PC;                      // 0x02B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C1[0x7];                                      // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFMODAudioComponent*                    CallFunc_PlayEventAttached_ReturnValue;            // 0x02C8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ASurvivalPlayer_C*                      CallFunc_Array_Get_Item;                           // 0x02D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x02D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x02DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2DD[0x3];                                      // 0x02DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_VEase_Alpha_ImplicitCast;                 // 0x02E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E4[0x4];                                      // 0x02E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x02E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger) == 0x000008, "Wrong alignment on CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger");
static_assert(sizeof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger) == 0x0002F0, "Wrong size on CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, EntryPoint) == 0x000000, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::EntryPoint' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, CallFunc_HasAuthority_ReturnValue) == 0x000004, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, Temp_int_Array_Index_Variable) == 0x000010, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, CallFunc_GetPlayerController_ReturnValue) == 0x000018, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000020, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, CallFunc_GetHUD_ReturnValue) == 0x000028, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, K2Node_DynamicCast_AsBPI_Game_HUD) == 0x000030, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::K2Node_DynamicCast_AsBPI_Game_HUD' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, CallFunc_GetGUI_GUI) == 0x000048, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::CallFunc_GetGUI_GUI' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, CallFunc_GetPlayerController_ReturnValue_1) == 0x000050, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, CallFunc_GetPlayerController_ReturnValue_2) == 0x000058, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, K2Node_Event_DeltaSeconds) == 0x000060, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, CallFunc_GetHUD_ReturnValue_1) == 0x000068, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::CallFunc_GetHUD_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, K2Node_DynamicCast_AsBPI_Game_HUD_1) == 0x000070, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::K2Node_DynamicCast_AsBPI_Game_HUD_1' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, K2Node_DynamicCast_bSuccess_1) == 0x000080, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, CallFunc_GetGUI_GUI_1) == 0x000088, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::CallFunc_GetGUI_GUI_1' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000090, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000098, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, CallFunc_FClamp_ReturnValue) == 0x0000A0, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, CallFunc_VEase_ReturnValue) == 0x0000A8, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::CallFunc_VEase_ReturnValue' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, CallFunc_GetPlayerController_ReturnValue_3) == 0x0000C0, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::CallFunc_GetPlayerController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, CallFunc_GetHUD_ReturnValue_2) == 0x0000C8, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::CallFunc_GetHUD_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, K2Node_DynamicCast_AsBPI_Game_HUD_2) == 0x0000D0, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::K2Node_DynamicCast_AsBPI_Game_HUD_2' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, K2Node_DynamicCast_bSuccess_2) == 0x0000E0, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, CallFunc_GetPlayerController_ReturnValue_4) == 0x0000E8, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::CallFunc_GetPlayerController_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, CallFunc_GetGUI_GUI_2) == 0x0000F0, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::CallFunc_GetGUI_GUI_2' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, CallFunc_GetPlayerCharacter_ReturnValue_1) == 0x0000F8, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::CallFunc_GetPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, CallFunc_GetPlayerController_ReturnValue_5) == 0x000100, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::CallFunc_GetPlayerController_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, CallFunc_GetHUD_ReturnValue_3) == 0x000108, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::CallFunc_GetHUD_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, CallFunc_GetPlayerCharacter_ReturnValue_2) == 0x000110, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::CallFunc_GetPlayerCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, K2Node_DynamicCast_AsBPI_Game_HUD_3) == 0x000118, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::K2Node_DynamicCast_AsBPI_Game_HUD_3' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, K2Node_DynamicCast_bSuccess_3) == 0x000128, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, K2Node_DynamicCast_AsSurvival_Player) == 0x000130, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::K2Node_DynamicCast_AsSurvival_Player' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, K2Node_DynamicCast_bSuccess_4) == 0x000138, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, CallFunc_GetGUI_GUI_3) == 0x000140, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::CallFunc_GetGUI_GUI_3' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, CallFunc_GetPlayerController_ReturnValue_6) == 0x000148, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::CallFunc_GetPlayerController_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, CallFunc_GetActorForwardVector_ReturnValue) == 0x000150, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000168, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000180, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000198, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x0001A0, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, CallFunc_K2_SetActorLocation_ReturnValue) == 0x000288, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, CallFunc_Add_VectorVector_ReturnValue) == 0x000290, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x0002A8, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, CallFunc_GetPlayerController_ReturnValue_7) == 0x0002B0, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::CallFunc_GetPlayerController_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, K2Node_DynamicCast_AsSurv_PC) == 0x0002B8, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::K2Node_DynamicCast_AsSurv_PC' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, K2Node_DynamicCast_bSuccess_5) == 0x0002C0, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, CallFunc_PlayEventAttached_ReturnValue) == 0x0002C8, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::CallFunc_PlayEventAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, CallFunc_Array_Get_Item) == 0x0002D0, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, CallFunc_Array_Length_ReturnValue) == 0x0002D8, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, CallFunc_Less_IntInt_ReturnValue) == 0x0002DC, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, CallFunc_VEase_Alpha_ImplicitCast) == 0x0002E0, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::CallFunc_VEase_Alpha_ImplicitCast' has a wrong offset!");
static_assert(offsetof(CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x0002E8, "Member 'CutSceneTrigger_C_ExecuteUbergraph_CutSceneTrigger::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function CutSceneTrigger.CutSceneTrigger_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct CutSceneTrigger_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CutSceneTrigger_C_ReceiveTick) == 0x000004, "Wrong alignment on CutSceneTrigger_C_ReceiveTick");
static_assert(sizeof(CutSceneTrigger_C_ReceiveTick) == 0x000004, "Wrong size on CutSceneTrigger_C_ReceiveTick");
static_assert(offsetof(CutSceneTrigger_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'CutSceneTrigger_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

