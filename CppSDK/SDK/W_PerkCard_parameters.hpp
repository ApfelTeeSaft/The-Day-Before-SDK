#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PerkCard

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "WS_CharaterPerks_structs.hpp"
#include "FMODStudio_structs.hpp"


namespace SDK::Params
{

// Function W_PerkCard.W_PerkCard_C.ExecuteUbergraph_W_PerkCard
// 0x0068 (0x0068 - 0x0000)
struct W_PerkCard_C_ExecuteUbergraph_W_PerkCard final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFMODEventInstance                     CallFunc_PlayEvent2D_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_Select;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33[0x5];                                       // 0x0033(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AHUD_MainMenu_C*                        K2Node_DynamicCast_AsHUD_Main_Menu;                // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PerkInfo_C*                        CallFunc_GetPerkInfo_PerkInfo;                     // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_PerkCard_C_ExecuteUbergraph_W_PerkCard) == 0x000008, "Wrong alignment on W_PerkCard_C_ExecuteUbergraph_W_PerkCard");
static_assert(sizeof(W_PerkCard_C_ExecuteUbergraph_W_PerkCard) == 0x000068, "Wrong size on W_PerkCard_C_ExecuteUbergraph_W_PerkCard");
static_assert(offsetof(W_PerkCard_C_ExecuteUbergraph_W_PerkCard, EntryPoint) == 0x000000, "Member 'W_PerkCard_C_ExecuteUbergraph_W_PerkCard::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_ExecuteUbergraph_W_PerkCard, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'W_PerkCard_C_ExecuteUbergraph_W_PerkCard::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_ExecuteUbergraph_W_PerkCard, K2Node_Event_IsDesignTime) == 0x000005, "Member 'W_PerkCard_C_ExecuteUbergraph_W_PerkCard::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_ExecuteUbergraph_W_PerkCard, CallFunc_PlayEvent2D_ReturnValue) == 0x000008, "Member 'W_PerkCard_C_ExecuteUbergraph_W_PerkCard::CallFunc_PlayEvent2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_ExecuteUbergraph_W_PerkCard, K2Node_CustomEvent_Select) == 0x000010, "Member 'W_PerkCard_C_ExecuteUbergraph_W_PerkCard::K2Node_CustomEvent_Select' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_ExecuteUbergraph_W_PerkCard, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000011, "Member 'W_PerkCard_C_ExecuteUbergraph_W_PerkCard::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_ExecuteUbergraph_W_PerkCard, CallFunc_IsValid_ReturnValue_1) == 0x000012, "Member 'W_PerkCard_C_ExecuteUbergraph_W_PerkCard::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_ExecuteUbergraph_W_PerkCard, Temp_byte_Variable) == 0x000013, "Member 'W_PerkCard_C_ExecuteUbergraph_W_PerkCard::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_ExecuteUbergraph_W_PerkCard, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'W_PerkCard_C_ExecuteUbergraph_W_PerkCard::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_ExecuteUbergraph_W_PerkCard, Temp_byte_Variable_1) == 0x000020, "Member 'W_PerkCard_C_ExecuteUbergraph_W_PerkCard::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_ExecuteUbergraph_W_PerkCard, CallFunc_PlayAnimation_ReturnValue_1) == 0x000028, "Member 'W_PerkCard_C_ExecuteUbergraph_W_PerkCard::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_ExecuteUbergraph_W_PerkCard, CallFunc_Not_PreBool_ReturnValue) == 0x000030, "Member 'W_PerkCard_C_ExecuteUbergraph_W_PerkCard::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_ExecuteUbergraph_W_PerkCard, CallFunc_Not_PreBool_ReturnValue_1) == 0x000031, "Member 'W_PerkCard_C_ExecuteUbergraph_W_PerkCard::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_ExecuteUbergraph_W_PerkCard, CallFunc_BooleanAND_ReturnValue) == 0x000032, "Member 'W_PerkCard_C_ExecuteUbergraph_W_PerkCard::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_ExecuteUbergraph_W_PerkCard, CallFunc_GetPlayerController_ReturnValue) == 0x000038, "Member 'W_PerkCard_C_ExecuteUbergraph_W_PerkCard::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_ExecuteUbergraph_W_PerkCard, CallFunc_GetHUD_ReturnValue) == 0x000040, "Member 'W_PerkCard_C_ExecuteUbergraph_W_PerkCard::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_ExecuteUbergraph_W_PerkCard, K2Node_DynamicCast_AsHUD_Main_Menu) == 0x000048, "Member 'W_PerkCard_C_ExecuteUbergraph_W_PerkCard::K2Node_DynamicCast_AsHUD_Main_Menu' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_ExecuteUbergraph_W_PerkCard, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'W_PerkCard_C_ExecuteUbergraph_W_PerkCard::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_ExecuteUbergraph_W_PerkCard, CallFunc_GetPerkInfo_PerkInfo) == 0x000058, "Member 'W_PerkCard_C_ExecuteUbergraph_W_PerkCard::CallFunc_GetPerkInfo_PerkInfo' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_ExecuteUbergraph_W_PerkCard, Temp_bool_Variable) == 0x000060, "Member 'W_PerkCard_C_ExecuteUbergraph_W_PerkCard::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_ExecuteUbergraph_W_PerkCard, K2Node_Select_Default) == 0x000061, "Member 'W_PerkCard_C_ExecuteUbergraph_W_PerkCard::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_ExecuteUbergraph_W_PerkCard, CallFunc_Not_PreBool_ReturnValue_2) == 0x000062, "Member 'W_PerkCard_C_ExecuteUbergraph_W_PerkCard::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_ExecuteUbergraph_W_PerkCard, CallFunc_Not_PreBool_ReturnValue_3) == 0x000063, "Member 'W_PerkCard_C_ExecuteUbergraph_W_PerkCard::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");

// Function W_PerkCard.W_PerkCard_C.GetIsSelected
// 0x0001 (0x0001 - 0x0000)
struct W_PerkCard_C_GetIsSelected final
{
public:
	bool                                          Param_bSelected;                                   // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_PerkCard_C_GetIsSelected) == 0x000001, "Wrong alignment on W_PerkCard_C_GetIsSelected");
static_assert(sizeof(W_PerkCard_C_GetIsSelected) == 0x000001, "Wrong size on W_PerkCard_C_GetIsSelected");
static_assert(offsetof(W_PerkCard_C_GetIsSelected, Param_bSelected) == 0x000000, "Member 'W_PerkCard_C_GetIsSelected::Param_bSelected' has a wrong offset!");

// Function W_PerkCard.W_PerkCard_C.GetName
// 0x0008 (0x0008 - 0x0000)
struct W_PerkCard_C_GetName final
{
public:
	class FName                                   Param_Name;                                        // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_PerkCard_C_GetName) == 0x000004, "Wrong alignment on W_PerkCard_C_GetName");
static_assert(sizeof(W_PerkCard_C_GetName) == 0x000008, "Wrong size on W_PerkCard_C_GetName");
static_assert(offsetof(W_PerkCard_C_GetName, Param_Name) == 0x000000, "Member 'W_PerkCard_C_GetName::Param_Name' has a wrong offset!");

// Function W_PerkCard.W_PerkCard_C.GetPerkInfo
// 0x00B8 (0x00B8 - 0x0000)
struct W_PerkCard_C_GetPerkInfo final
{
public:
	struct FWS_CharaterPerks                      Param_PerkInfo;                                    // 0x0000(0x00B8)(Parm, OutParm, HasGetValueTypeHash)
};
static_assert(alignof(W_PerkCard_C_GetPerkInfo) == 0x000008, "Wrong alignment on W_PerkCard_C_GetPerkInfo");
static_assert(sizeof(W_PerkCard_C_GetPerkInfo) == 0x0000B8, "Wrong size on W_PerkCard_C_GetPerkInfo");
static_assert(offsetof(W_PerkCard_C_GetPerkInfo, Param_PerkInfo) == 0x000000, "Member 'W_PerkCard_C_GetPerkInfo::Param_PerkInfo' has a wrong offset!");

// Function W_PerkCard.W_PerkCard_C.GetPriceReal
// 0x0004 (0x0004 - 0x0000)
struct W_PerkCard_C_GetPriceReal final
{
public:
	int32                                         Param_Price_Real;                                  // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_PerkCard_C_GetPriceReal) == 0x000004, "Wrong alignment on W_PerkCard_C_GetPriceReal");
static_assert(sizeof(W_PerkCard_C_GetPriceReal) == 0x000004, "Wrong size on W_PerkCard_C_GetPriceReal");
static_assert(offsetof(W_PerkCard_C_GetPriceReal, Param_Price_Real) == 0x000000, "Member 'W_PerkCard_C_GetPriceReal::Param_Price_Real' has a wrong offset!");

// Function W_PerkCard.W_PerkCard_C.Init
// 0x0370 (0x0370 - 0x0000)
struct W_PerkCard_C_Init final
{
public:
	class FText                                   Temp_text_Variable;                                // 0x0000(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0018(0x0018)()
	double                                        CallFunc_BreakVector2D_X;                          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue_1;                     // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X_1;                        // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y_1;                        // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58[0x8];                                       // 0x0058(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            CallFunc_MakeBrushFromSprite_ReturnValue;          // 0x0060(0x00D0)()
	bool                                          Temp_bool_Variable;                                // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_131[0x7];                                      // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPaperSprite*                           Temp_object_Variable;                              // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPaperSprite*                           Temp_object_Variable_1;                            // 0x0140(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_149[0x7];                                      // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPaperSprite*                           K2Node_Select_Default;                             // 0x0150(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_Select_Default_1;                           // 0x0158(0x0018)()
	struct FSlateBrush                            CallFunc_MakeBrushFromSprite_ReturnValue_1;        // 0x0170(0x00D0)()
	struct FSlateBrush                            CallFunc_MakeBrushFromSprite_ReturnValue_2;        // 0x0240(0x00D0)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_311[0x3];                                      // 0x0311(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0314(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0318(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31C[0x4];                                      // 0x031C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0320(0x0018)()
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0338(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0339(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x033A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x033B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x033C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x034C(0x0014)()
	float                                         CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast; // 0x0360(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast; // 0x0364(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_PerkCard_C_Init) == 0x000010, "Wrong alignment on W_PerkCard_C_Init");
static_assert(sizeof(W_PerkCard_C_Init) == 0x000370, "Wrong size on W_PerkCard_C_Init");
static_assert(offsetof(W_PerkCard_C_Init, Temp_text_Variable) == 0x000000, "Member 'W_PerkCard_C_Init::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_Init, Temp_text_Variable_1) == 0x000018, "Member 'W_PerkCard_C_Init::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_Init, CallFunc_BreakVector2D_X) == 0x000030, "Member 'W_PerkCard_C_Init::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_Init, CallFunc_BreakVector2D_Y) == 0x000038, "Member 'W_PerkCard_C_Init::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_Init, CallFunc_FTrunc_ReturnValue) == 0x000040, "Member 'W_PerkCard_C_Init::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_Init, CallFunc_FTrunc_ReturnValue_1) == 0x000044, "Member 'W_PerkCard_C_Init::CallFunc_FTrunc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_Init, CallFunc_BreakVector2D_X_1) == 0x000048, "Member 'W_PerkCard_C_Init::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_Init, CallFunc_BreakVector2D_Y_1) == 0x000050, "Member 'W_PerkCard_C_Init::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_Init, CallFunc_MakeBrushFromSprite_ReturnValue) == 0x000060, "Member 'W_PerkCard_C_Init::CallFunc_MakeBrushFromSprite_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_Init, Temp_bool_Variable) == 0x000130, "Member 'W_PerkCard_C_Init::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_Init, Temp_object_Variable) == 0x000138, "Member 'W_PerkCard_C_Init::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_Init, Temp_object_Variable_1) == 0x000140, "Member 'W_PerkCard_C_Init::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_Init, Temp_bool_Variable_1) == 0x000148, "Member 'W_PerkCard_C_Init::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_Init, K2Node_Select_Default) == 0x000150, "Member 'W_PerkCard_C_Init::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_Init, K2Node_Select_Default_1) == 0x000158, "Member 'W_PerkCard_C_Init::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_Init, CallFunc_MakeBrushFromSprite_ReturnValue_1) == 0x000170, "Member 'W_PerkCard_C_Init::CallFunc_MakeBrushFromSprite_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_Init, CallFunc_MakeBrushFromSprite_ReturnValue_2) == 0x000240, "Member 'W_PerkCard_C_Init::CallFunc_MakeBrushFromSprite_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_Init, CallFunc_IsValid_ReturnValue) == 0x000310, "Member 'W_PerkCard_C_Init::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_Init, CallFunc_Multiply_IntInt_ReturnValue) == 0x000314, "Member 'W_PerkCard_C_Init::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_Init, CallFunc_SelectInt_ReturnValue) == 0x000318, "Member 'W_PerkCard_C_Init::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_Init, CallFunc_Conv_IntToText_ReturnValue) == 0x000320, "Member 'W_PerkCard_C_Init::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_Init, Temp_byte_Variable) == 0x000338, "Member 'W_PerkCard_C_Init::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_Init, Temp_byte_Variable_1) == 0x000339, "Member 'W_PerkCard_C_Init::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_Init, Temp_bool_Variable_2) == 0x00033A, "Member 'W_PerkCard_C_Init::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_Init, K2Node_Select_Default_2) == 0x00033B, "Member 'W_PerkCard_C_Init::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_Init, CallFunc_SelectColor_ReturnValue) == 0x00033C, "Member 'W_PerkCard_C_Init::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_Init, K2Node_MakeStruct_SlateColor) == 0x00034C, "Member 'W_PerkCard_C_Init::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_Init, CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast) == 0x000360, "Member 'W_PerkCard_C_Init::CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_Init, CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast) == 0x000364, "Member 'W_PerkCard_C_Init::CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast' has a wrong offset!");

// Function W_PerkCard.W_PerkCard_C.OnHovered__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct W_PerkCard_C_OnHovered__DelegateSignature final
{
public:
	class UW_PerkCard_C*                          PerkCardRef;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Show;                                              // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_PerkCard_C_OnHovered__DelegateSignature) == 0x000008, "Wrong alignment on W_PerkCard_C_OnHovered__DelegateSignature");
static_assert(sizeof(W_PerkCard_C_OnHovered__DelegateSignature) == 0x000010, "Wrong size on W_PerkCard_C_OnHovered__DelegateSignature");
static_assert(offsetof(W_PerkCard_C_OnHovered__DelegateSignature, PerkCardRef) == 0x000000, "Member 'W_PerkCard_C_OnHovered__DelegateSignature::PerkCardRef' has a wrong offset!");
static_assert(offsetof(W_PerkCard_C_OnHovered__DelegateSignature, Show) == 0x000008, "Member 'W_PerkCard_C_OnHovered__DelegateSignature::Show' has a wrong offset!");

// Function W_PerkCard.W_PerkCard_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_PerkCard_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_PerkCard_C_PreConstruct) == 0x000001, "Wrong alignment on W_PerkCard_C_PreConstruct");
static_assert(sizeof(W_PerkCard_C_PreConstruct) == 0x000001, "Wrong size on W_PerkCard_C_PreConstruct");
static_assert(offsetof(W_PerkCard_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'W_PerkCard_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function W_PerkCard.W_PerkCard_C.PressedPerkButton_ED__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct W_PerkCard_C_PressedPerkButton_ED__DelegateSignature final
{
public:
	class UW_PerkCard_C*                          GivenPerkCard;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_PerkCard_C_PressedPerkButton_ED__DelegateSignature) == 0x000008, "Wrong alignment on W_PerkCard_C_PressedPerkButton_ED__DelegateSignature");
static_assert(sizeof(W_PerkCard_C_PressedPerkButton_ED__DelegateSignature) == 0x000008, "Wrong size on W_PerkCard_C_PressedPerkButton_ED__DelegateSignature");
static_assert(offsetof(W_PerkCard_C_PressedPerkButton_ED__DelegateSignature, GivenPerkCard) == 0x000000, "Member 'W_PerkCard_C_PressedPerkButton_ED__DelegateSignature::GivenPerkCard' has a wrong offset!");

// Function W_PerkCard.W_PerkCard_C.Select
// 0x0001 (0x0001 - 0x0000)
struct W_PerkCard_C_Select final
{
public:
	bool                                          Param_Select;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_PerkCard_C_Select) == 0x000001, "Wrong alignment on W_PerkCard_C_Select");
static_assert(sizeof(W_PerkCard_C_Select) == 0x000001, "Wrong size on W_PerkCard_C_Select");
static_assert(offsetof(W_PerkCard_C_Select, Param_Select) == 0x000000, "Member 'W_PerkCard_C_Select::Param_Select' has a wrong offset!");

}
