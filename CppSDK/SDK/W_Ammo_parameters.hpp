#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Ammo

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "BPE_FireMode_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function W_Ammo.W_Ammo_C.ExecuteUbergraph_W_Ammo
// 0x00C0 (0x00C0 - 0x0000)
struct W_Ammo_C_ExecuteUbergraph_W_Ammo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Enabled;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PlayAnimation__ByCondition__Result;       // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PlayAnimation__ByCondition__Result_1;     // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PlayAnimation__ByCondition__Result_2;     // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PlayAnimation__ByCondition__Result_3;     // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PlayAnimation__ByCondition__Result_4;     // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B[0x5];                                        // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0010(0x0018)()
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
	TArray<class UWidgetAnimation*>               K2Node_MakeArray_Array;                            // 0x0030(0x0010)(ReferenceParm)
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_1;            // 0x0040(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_2;            // 0x0070(0x0018)()
	bool                                          CallFunc_K2_TimerExistsHandle_ReturnValue;         // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBPE_FireMode                                 K2Node_CustomEvent_FireMode;                       // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PlayAnimation__ByCondition__Result_5;     // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBPE_FireMode                                 Temp_byte_Variable;                                // 0x008B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0090(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_1;       // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue_1;         // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Ammo_C_ExecuteUbergraph_W_Ammo) == 0x000008, "Wrong alignment on W_Ammo_C_ExecuteUbergraph_W_Ammo");
static_assert(sizeof(W_Ammo_C_ExecuteUbergraph_W_Ammo) == 0x0000C0, "Wrong size on W_Ammo_C_ExecuteUbergraph_W_Ammo");
static_assert(offsetof(W_Ammo_C_ExecuteUbergraph_W_Ammo, EntryPoint) == 0x000000, "Member 'W_Ammo_C_ExecuteUbergraph_W_Ammo::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_ExecuteUbergraph_W_Ammo, K2Node_CustomEvent_Enabled) == 0x000004, "Member 'W_Ammo_C_ExecuteUbergraph_W_Ammo::K2Node_CustomEvent_Enabled' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_ExecuteUbergraph_W_Ammo, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000005, "Member 'W_Ammo_C_ExecuteUbergraph_W_Ammo::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_ExecuteUbergraph_W_Ammo, CallFunc_PlayAnimation__ByCondition__Result) == 0x000006, "Member 'W_Ammo_C_ExecuteUbergraph_W_Ammo::CallFunc_PlayAnimation__ByCondition__Result' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_ExecuteUbergraph_W_Ammo, CallFunc_PlayAnimation__ByCondition__Result_1) == 0x000007, "Member 'W_Ammo_C_ExecuteUbergraph_W_Ammo::CallFunc_PlayAnimation__ByCondition__Result_1' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_ExecuteUbergraph_W_Ammo, CallFunc_PlayAnimation__ByCondition__Result_2) == 0x000008, "Member 'W_Ammo_C_ExecuteUbergraph_W_Ammo::CallFunc_PlayAnimation__ByCondition__Result_2' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_ExecuteUbergraph_W_Ammo, CallFunc_PlayAnimation__ByCondition__Result_3) == 0x000009, "Member 'W_Ammo_C_ExecuteUbergraph_W_Ammo::CallFunc_PlayAnimation__ByCondition__Result_3' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_ExecuteUbergraph_W_Ammo, CallFunc_PlayAnimation__ByCondition__Result_4) == 0x00000A, "Member 'W_Ammo_C_ExecuteUbergraph_W_Ammo::CallFunc_PlayAnimation__ByCondition__Result_4' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_ExecuteUbergraph_W_Ammo, CallFunc_MakeLiteralText_ReturnValue) == 0x000010, "Member 'W_Ammo_C_ExecuteUbergraph_W_Ammo::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_ExecuteUbergraph_W_Ammo, CallFunc_K2_SetTimer_ReturnValue) == 0x000028, "Member 'W_Ammo_C_ExecuteUbergraph_W_Ammo::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_ExecuteUbergraph_W_Ammo, K2Node_MakeArray_Array) == 0x000030, "Member 'W_Ammo_C_ExecuteUbergraph_W_Ammo::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_ExecuteUbergraph_W_Ammo, CallFunc_MakeLiteralText_ReturnValue_1) == 0x000040, "Member 'W_Ammo_C_ExecuteUbergraph_W_Ammo::CallFunc_MakeLiteralText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_ExecuteUbergraph_W_Ammo, CallFunc_PlayAnimationForward_ReturnValue) == 0x000058, "Member 'W_Ammo_C_ExecuteUbergraph_W_Ammo::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_ExecuteUbergraph_W_Ammo, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000060, "Member 'W_Ammo_C_ExecuteUbergraph_W_Ammo::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_ExecuteUbergraph_W_Ammo, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000068, "Member 'W_Ammo_C_ExecuteUbergraph_W_Ammo::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_ExecuteUbergraph_W_Ammo, CallFunc_MakeLiteralText_ReturnValue_2) == 0x000070, "Member 'W_Ammo_C_ExecuteUbergraph_W_Ammo::CallFunc_MakeLiteralText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_ExecuteUbergraph_W_Ammo, CallFunc_K2_TimerExistsHandle_ReturnValue) == 0x000088, "Member 'W_Ammo_C_ExecuteUbergraph_W_Ammo::CallFunc_K2_TimerExistsHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_ExecuteUbergraph_W_Ammo, K2Node_CustomEvent_FireMode) == 0x000089, "Member 'W_Ammo_C_ExecuteUbergraph_W_Ammo::K2Node_CustomEvent_FireMode' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_ExecuteUbergraph_W_Ammo, CallFunc_PlayAnimation__ByCondition__Result_5) == 0x00008A, "Member 'W_Ammo_C_ExecuteUbergraph_W_Ammo::CallFunc_PlayAnimation__ByCondition__Result_5' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_ExecuteUbergraph_W_Ammo, Temp_byte_Variable) == 0x00008B, "Member 'W_Ammo_C_ExecuteUbergraph_W_Ammo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_ExecuteUbergraph_W_Ammo, K2Node_Select_Default) == 0x000090, "Member 'W_Ammo_C_ExecuteUbergraph_W_Ammo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_ExecuteUbergraph_W_Ammo, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x0000A8, "Member 'W_Ammo_C_ExecuteUbergraph_W_Ammo::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_ExecuteUbergraph_W_Ammo, CallFunc_PlayAnimationReverse_ReturnValue_1) == 0x0000B0, "Member 'W_Ammo_C_ExecuteUbergraph_W_Ammo::CallFunc_PlayAnimationReverse_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_ExecuteUbergraph_W_Ammo, CallFunc_IsAnimationPlaying_ReturnValue_1) == 0x0000B8, "Member 'W_Ammo_C_ExecuteUbergraph_W_Ammo::CallFunc_IsAnimationPlaying_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_ExecuteUbergraph_W_Ammo, K2Node_Event_IsDesignTime) == 0x0000B9, "Member 'W_Ammo_C_ExecuteUbergraph_W_Ammo::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function W_Ammo.W_Ammo_C.ForcedAllStat
// 0x0001 (0x0001 - 0x0000)
struct W_Ammo_C_ForcedAllStat final
{
public:
	bool                                          Enabled;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Ammo_C_ForcedAllStat) == 0x000001, "Wrong alignment on W_Ammo_C_ForcedAllStat");
static_assert(sizeof(W_Ammo_C_ForcedAllStat) == 0x000001, "Wrong size on W_Ammo_C_ForcedAllStat");
static_assert(offsetof(W_Ammo_C_ForcedAllStat, Enabled) == 0x000000, "Member 'W_Ammo_C_ForcedAllStat::Enabled' has a wrong offset!");

// Function W_Ammo.W_Ammo_C.PlayAnimation (ByCondition)
// 0x0020 (0x0020 - 0x0000)
struct W_Ammo_C_PlayAnimation__ByCondition_ final
{
public:
	class UWidgetAnimation*                       Animation;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          PlayMode;                                          // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RestoreState;                                      // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x000A(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FunctionResult;                                    // 0x000B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Ammo_C_PlayAnimation__ByCondition_) == 0x000008, "Wrong alignment on W_Ammo_C_PlayAnimation__ByCondition_");
static_assert(sizeof(W_Ammo_C_PlayAnimation__ByCondition_) == 0x000020, "Wrong size on W_Ammo_C_PlayAnimation__ByCondition_");
static_assert(offsetof(W_Ammo_C_PlayAnimation__ByCondition_, Animation) == 0x000000, "Member 'W_Ammo_C_PlayAnimation__ByCondition_::Animation' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_PlayAnimation__ByCondition_, PlayMode) == 0x000008, "Member 'W_Ammo_C_PlayAnimation__ByCondition_::PlayMode' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_PlayAnimation__ByCondition_, RestoreState) == 0x000009, "Member 'W_Ammo_C_PlayAnimation__ByCondition_::RestoreState' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_PlayAnimation__ByCondition_, Result) == 0x00000A, "Member 'W_Ammo_C_PlayAnimation__ByCondition_::Result' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_PlayAnimation__ByCondition_, FunctionResult) == 0x00000B, "Member 'W_Ammo_C_PlayAnimation__ByCondition_::FunctionResult' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_PlayAnimation__ByCondition_, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'W_Ammo_C_PlayAnimation__ByCondition_::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_PlayAnimation__ByCondition_, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000018, "Member 'W_Ammo_C_PlayAnimation__ByCondition_::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_PlayAnimation__ByCondition_, CallFunc_BooleanOR_ReturnValue) == 0x000019, "Member 'W_Ammo_C_PlayAnimation__ByCondition_::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function W_Ammo.W_Ammo_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_Ammo_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Ammo_C_PreConstruct) == 0x000001, "Wrong alignment on W_Ammo_C_PreConstruct");
static_assert(sizeof(W_Ammo_C_PreConstruct) == 0x000001, "Wrong size on W_Ammo_C_PreConstruct");
static_assert(offsetof(W_Ammo_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'W_Ammo_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function W_Ammo.W_Ammo_C.SetWeaponStated
// 0x0084 (0x0084 - 0x0000)
struct W_Ammo_C_SetWeaponStated final
{
public:
	bool                                          Damaged;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Color_Undamaged;                                   // 0x0004(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Color_Damaged;                                     // 0x0014(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0034(0x0014)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0048(0x0014)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x005C(0x0014)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x0070(0x0014)()
};
static_assert(alignof(W_Ammo_C_SetWeaponStated) == 0x000004, "Wrong alignment on W_Ammo_C_SetWeaponStated");
static_assert(sizeof(W_Ammo_C_SetWeaponStated) == 0x000084, "Wrong size on W_Ammo_C_SetWeaponStated");
static_assert(offsetof(W_Ammo_C_SetWeaponStated, Damaged) == 0x000000, "Member 'W_Ammo_C_SetWeaponStated::Damaged' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_SetWeaponStated, Color_Undamaged) == 0x000004, "Member 'W_Ammo_C_SetWeaponStated::Color_Undamaged' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_SetWeaponStated, Color_Damaged) == 0x000014, "Member 'W_Ammo_C_SetWeaponStated::Color_Damaged' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_SetWeaponStated, CallFunc_SelectColor_ReturnValue) == 0x000024, "Member 'W_Ammo_C_SetWeaponStated::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_SetWeaponStated, K2Node_MakeStruct_SlateColor) == 0x000034, "Member 'W_Ammo_C_SetWeaponStated::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_SetWeaponStated, K2Node_MakeStruct_SlateColor_1) == 0x000048, "Member 'W_Ammo_C_SetWeaponStated::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_SetWeaponStated, K2Node_MakeStruct_SlateColor_2) == 0x00005C, "Member 'W_Ammo_C_SetWeaponStated::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_SetWeaponStated, K2Node_MakeStruct_SlateColor_3) == 0x000070, "Member 'W_Ammo_C_SetWeaponStated::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");

// Function W_Ammo.W_Ammo_C.ShowAmmoClass
// 0x0018 (0x0018 - 0x0000)
struct W_Ammo_C_ShowAmmoClass final
{
public:
	bool                                          Show;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Ammo_C_ShowAmmoClass) == 0x000008, "Wrong alignment on W_Ammo_C_ShowAmmoClass");
static_assert(sizeof(W_Ammo_C_ShowAmmoClass) == 0x000018, "Wrong size on W_Ammo_C_ShowAmmoClass");
static_assert(offsetof(W_Ammo_C_ShowAmmoClass, Show) == 0x000000, "Member 'W_Ammo_C_ShowAmmoClass::Show' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_ShowAmmoClass, Temp_bool_Variable) == 0x000001, "Member 'W_Ammo_C_ShowAmmoClass::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_ShowAmmoClass, Temp_byte_Variable) == 0x000002, "Member 'W_Ammo_C_ShowAmmoClass::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_ShowAmmoClass, Temp_byte_Variable_1) == 0x000003, "Member 'W_Ammo_C_ShowAmmoClass::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_ShowAmmoClass, K2Node_Select_Default) == 0x000004, "Member 'W_Ammo_C_ShowAmmoClass::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_ShowAmmoClass, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'W_Ammo_C_ShowAmmoClass::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_ShowAmmoClass, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000010, "Member 'W_Ammo_C_ShowAmmoClass::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

// Function W_Ammo.W_Ammo_C.StopAnimations
// 0x0030 (0x0030 - 0x0000)
struct W_Ammo_C_StopAnimations final
{
public:
	TArray<class UWidgetAnimation*>               Animations;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Ammo_C_StopAnimations) == 0x000008, "Wrong alignment on W_Ammo_C_StopAnimations");
static_assert(sizeof(W_Ammo_C_StopAnimations) == 0x000030, "Wrong size on W_Ammo_C_StopAnimations");
static_assert(offsetof(W_Ammo_C_StopAnimations, Animations) == 0x000000, "Member 'W_Ammo_C_StopAnimations::Animations' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_StopAnimations, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'W_Ammo_C_StopAnimations::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_StopAnimations, Temp_int_Array_Index_Variable) == 0x000014, "Member 'W_Ammo_C_StopAnimations::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_StopAnimations, CallFunc_Array_Get_Item) == 0x000018, "Member 'W_Ammo_C_StopAnimations::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_StopAnimations, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'W_Ammo_C_StopAnimations::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_StopAnimations, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'W_Ammo_C_StopAnimations::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_StopAnimations, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'W_Ammo_C_StopAnimations::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Ammo_C_StopAnimations, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'W_Ammo_C_StopAnimations::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function W_Ammo.W_Ammo_C.SwitchFireType
// 0x0001 (0x0001 - 0x0000)
struct W_Ammo_C_SwitchFireType final
{
public:
	EBPE_FireMode                                 Param_FireMode;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Ammo_C_SwitchFireType) == 0x000001, "Wrong alignment on W_Ammo_C_SwitchFireType");
static_assert(sizeof(W_Ammo_C_SwitchFireType) == 0x000001, "Wrong size on W_Ammo_C_SwitchFireType");
static_assert(offsetof(W_Ammo_C_SwitchFireType, Param_FireMode) == 0x000000, "Member 'W_Ammo_C_SwitchFireType::Param_FireMode' has a wrong offset!");

}
