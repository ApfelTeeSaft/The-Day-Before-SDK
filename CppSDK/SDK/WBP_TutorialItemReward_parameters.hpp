#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TutorialItemReward

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "S_TutorialSlides_structs.hpp"
#include "FMODStudio_structs.hpp"


namespace SDK::Params
{

// Function WBP_TutorialItemReward.WBP_TutorialItemReward_C.ExecuteUbergraph_WBP_TutorialItemReward
// 0x0078 (0x0078 - 0x0000)
struct WBP_TutorialItemReward_C_ExecuteUbergraph_WBP_TutorialItemReward final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_GameHUD_C>        K2Node_DynamicCast_AsBPI_Game_HUD;                 // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGUIHidden_Hidden;                      // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A[0x2];                                       // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x005C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFMODEventInstance                     CallFunc_PlayEvent2D_ReturnValue;                  // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_TutorialItemReward_C_ExecuteUbergraph_WBP_TutorialItemReward) == 0x000008, "Wrong alignment on WBP_TutorialItemReward_C_ExecuteUbergraph_WBP_TutorialItemReward");
static_assert(sizeof(WBP_TutorialItemReward_C_ExecuteUbergraph_WBP_TutorialItemReward) == 0x000078, "Wrong size on WBP_TutorialItemReward_C_ExecuteUbergraph_WBP_TutorialItemReward");
static_assert(offsetof(WBP_TutorialItemReward_C_ExecuteUbergraph_WBP_TutorialItemReward, EntryPoint) == 0x000000, "Member 'WBP_TutorialItemReward_C_ExecuteUbergraph_WBP_TutorialItemReward::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_TutorialItemReward_C_ExecuteUbergraph_WBP_TutorialItemReward, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_TutorialItemReward_C_ExecuteUbergraph_WBP_TutorialItemReward::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_TutorialItemReward_C_ExecuteUbergraph_WBP_TutorialItemReward, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000005, "Member 'WBP_TutorialItemReward_C_ExecuteUbergraph_WBP_TutorialItemReward::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutorialItemReward_C_ExecuteUbergraph_WBP_TutorialItemReward, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_TutorialItemReward_C_ExecuteUbergraph_WBP_TutorialItemReward::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_TutorialItemReward_C_ExecuteUbergraph_WBP_TutorialItemReward, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x000018, "Member 'WBP_TutorialItemReward_C_ExecuteUbergraph_WBP_TutorialItemReward::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(WBP_TutorialItemReward_C_ExecuteUbergraph_WBP_TutorialItemReward, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x000020, "Member 'WBP_TutorialItemReward_C_ExecuteUbergraph_WBP_TutorialItemReward::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutorialItemReward_C_ExecuteUbergraph_WBP_TutorialItemReward, CallFunc_GetPlayerController_ReturnValue) == 0x000028, "Member 'WBP_TutorialItemReward_C_ExecuteUbergraph_WBP_TutorialItemReward::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutorialItemReward_C_ExecuteUbergraph_WBP_TutorialItemReward, CallFunc_K2_GetPawn_ReturnValue) == 0x000030, "Member 'WBP_TutorialItemReward_C_ExecuteUbergraph_WBP_TutorialItemReward::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutorialItemReward_C_ExecuteUbergraph_WBP_TutorialItemReward, CallFunc_GetHUD_ReturnValue) == 0x000038, "Member 'WBP_TutorialItemReward_C_ExecuteUbergraph_WBP_TutorialItemReward::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutorialItemReward_C_ExecuteUbergraph_WBP_TutorialItemReward, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'WBP_TutorialItemReward_C_ExecuteUbergraph_WBP_TutorialItemReward::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutorialItemReward_C_ExecuteUbergraph_WBP_TutorialItemReward, K2Node_DynamicCast_AsBPI_Game_HUD) == 0x000048, "Member 'WBP_TutorialItemReward_C_ExecuteUbergraph_WBP_TutorialItemReward::K2Node_DynamicCast_AsBPI_Game_HUD' has a wrong offset!");
static_assert(offsetof(WBP_TutorialItemReward_C_ExecuteUbergraph_WBP_TutorialItemReward, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'WBP_TutorialItemReward_C_ExecuteUbergraph_WBP_TutorialItemReward::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_TutorialItemReward_C_ExecuteUbergraph_WBP_TutorialItemReward, CallFunc_GetGUIHidden_Hidden) == 0x000059, "Member 'WBP_TutorialItemReward_C_ExecuteUbergraph_WBP_TutorialItemReward::CallFunc_GetGUIHidden_Hidden' has a wrong offset!");
static_assert(offsetof(WBP_TutorialItemReward_C_ExecuteUbergraph_WBP_TutorialItemReward, K2Node_CreateDelegate_OutputDelegate_1) == 0x00005C, "Member 'WBP_TutorialItemReward_C_ExecuteUbergraph_WBP_TutorialItemReward::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_TutorialItemReward_C_ExecuteUbergraph_WBP_TutorialItemReward, CallFunc_PlayEvent2D_ReturnValue) == 0x000070, "Member 'WBP_TutorialItemReward_C_ExecuteUbergraph_WBP_TutorialItemReward::CallFunc_PlayEvent2D_ReturnValue' has a wrong offset!");

// Function WBP_TutorialItemReward.WBP_TutorialItemReward_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_TutorialItemReward_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TutorialItemReward_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_TutorialItemReward_C_PreConstruct");
static_assert(sizeof(WBP_TutorialItemReward_C_PreConstruct) == 0x000001, "Wrong size on WBP_TutorialItemReward_C_PreConstruct");
static_assert(offsetof(WBP_TutorialItemReward_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_TutorialItemReward_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_TutorialItemReward.WBP_TutorialItemReward_C.SetInfo
// 0x00D0 (0x00D0 - 0x0000)
struct WBP_TutorialItemReward_C_SetInfo final
{
public:
	class FName                                   SlideName;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_TutorialSlides                      CallFunc_GetDataTableRowFromName_OutRow;           // 0x0010(0x0060)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFMODEvent*                             Temp_object_Variable;                              // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                             Temp_object_Variable_1;                            // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                             K2Node_Select_Default;                             // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFMODEventInstance                     CallFunc_PlayEvent2D_ReturnValue;                  // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_GameHUD_C>        K2Node_DynamicCast_AsBPI_Game_HUD;                 // 0x00B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGUIHidden_Hidden;                      // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C2[0x6];                                       // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TutorialItemReward_C_SetInfo) == 0x000008, "Wrong alignment on WBP_TutorialItemReward_C_SetInfo");
static_assert(sizeof(WBP_TutorialItemReward_C_SetInfo) == 0x0000D0, "Wrong size on WBP_TutorialItemReward_C_SetInfo");
static_assert(offsetof(WBP_TutorialItemReward_C_SetInfo, SlideName) == 0x000000, "Member 'WBP_TutorialItemReward_C_SetInfo::SlideName' has a wrong offset!");
static_assert(offsetof(WBP_TutorialItemReward_C_SetInfo, Temp_bool_Variable) == 0x000008, "Member 'WBP_TutorialItemReward_C_SetInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_TutorialItemReward_C_SetInfo, CallFunc_GetDataTableRowFromName_OutRow) == 0x000010, "Member 'WBP_TutorialItemReward_C_SetInfo::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(WBP_TutorialItemReward_C_SetInfo, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000070, "Member 'WBP_TutorialItemReward_C_SetInfo::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutorialItemReward_C_SetInfo, Temp_object_Variable) == 0x000078, "Member 'WBP_TutorialItemReward_C_SetInfo::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_TutorialItemReward_C_SetInfo, Temp_object_Variable_1) == 0x000080, "Member 'WBP_TutorialItemReward_C_SetInfo::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_TutorialItemReward_C_SetInfo, CallFunc_GetPlayerController_ReturnValue) == 0x000088, "Member 'WBP_TutorialItemReward_C_SetInfo::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutorialItemReward_C_SetInfo, CallFunc_K2_GetPawn_ReturnValue) == 0x000090, "Member 'WBP_TutorialItemReward_C_SetInfo::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutorialItemReward_C_SetInfo, K2Node_Select_Default) == 0x000098, "Member 'WBP_TutorialItemReward_C_SetInfo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_TutorialItemReward_C_SetInfo, CallFunc_PlayEvent2D_ReturnValue) == 0x0000A0, "Member 'WBP_TutorialItemReward_C_SetInfo::CallFunc_PlayEvent2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutorialItemReward_C_SetInfo, CallFunc_GetHUD_ReturnValue) == 0x0000A8, "Member 'WBP_TutorialItemReward_C_SetInfo::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutorialItemReward_C_SetInfo, K2Node_DynamicCast_AsBPI_Game_HUD) == 0x0000B0, "Member 'WBP_TutorialItemReward_C_SetInfo::K2Node_DynamicCast_AsBPI_Game_HUD' has a wrong offset!");
static_assert(offsetof(WBP_TutorialItemReward_C_SetInfo, K2Node_DynamicCast_bSuccess) == 0x0000C0, "Member 'WBP_TutorialItemReward_C_SetInfo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_TutorialItemReward_C_SetInfo, CallFunc_GetGUIHidden_Hidden) == 0x0000C1, "Member 'WBP_TutorialItemReward_C_SetInfo::CallFunc_GetGUIHidden_Hidden' has a wrong offset!");
static_assert(offsetof(WBP_TutorialItemReward_C_SetInfo, CallFunc_PlayAnimation_ReturnValue) == 0x0000C8, "Member 'WBP_TutorialItemReward_C_SetInfo::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WBP_TutorialItemReward.WBP_TutorialItemReward_C.SetInputButtonContent
// 0x0030 (0x0030 - 0x0000)
struct WBP_TutorialItemReward_C_SetInputButtonContent final
{
public:
	class FName                                   Input;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UInputSettings*                         CallFunc_GetInputSettings_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInputActionKeyMapping>         CallFunc_GetActionMappingByName_OutMappings;       // 0x0018(0x0010)(ReferenceParm)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TutorialItemReward_C_SetInputButtonContent) == 0x000008, "Wrong alignment on WBP_TutorialItemReward_C_SetInputButtonContent");
static_assert(sizeof(WBP_TutorialItemReward_C_SetInputButtonContent) == 0x000030, "Wrong size on WBP_TutorialItemReward_C_SetInputButtonContent");
static_assert(offsetof(WBP_TutorialItemReward_C_SetInputButtonContent, Input) == 0x000000, "Member 'WBP_TutorialItemReward_C_SetInputButtonContent::Input' has a wrong offset!");
static_assert(offsetof(WBP_TutorialItemReward_C_SetInputButtonContent, Temp_byte_Variable) == 0x000008, "Member 'WBP_TutorialItemReward_C_SetInputButtonContent::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_TutorialItemReward_C_SetInputButtonContent, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000009, "Member 'WBP_TutorialItemReward_C_SetInputButtonContent::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutorialItemReward_C_SetInputButtonContent, CallFunc_Not_PreBool_ReturnValue) == 0x00000A, "Member 'WBP_TutorialItemReward_C_SetInputButtonContent::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutorialItemReward_C_SetInputButtonContent, Temp_byte_Variable_1) == 0x00000B, "Member 'WBP_TutorialItemReward_C_SetInputButtonContent::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_TutorialItemReward_C_SetInputButtonContent, Temp_bool_Variable) == 0x00000C, "Member 'WBP_TutorialItemReward_C_SetInputButtonContent::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_TutorialItemReward_C_SetInputButtonContent, CallFunc_GetInputSettings_ReturnValue) == 0x000010, "Member 'WBP_TutorialItemReward_C_SetInputButtonContent::CallFunc_GetInputSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutorialItemReward_C_SetInputButtonContent, CallFunc_GetActionMappingByName_OutMappings) == 0x000018, "Member 'WBP_TutorialItemReward_C_SetInputButtonContent::CallFunc_GetActionMappingByName_OutMappings' has a wrong offset!");
static_assert(offsetof(WBP_TutorialItemReward_C_SetInputButtonContent, K2Node_Select_Default) == 0x000028, "Member 'WBP_TutorialItemReward_C_SetInputButtonContent::K2Node_Select_Default' has a wrong offset!");

}
