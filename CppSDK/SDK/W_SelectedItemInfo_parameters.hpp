#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SelectedItemInfo

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FItemInfo_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "E_ItemColorTypes_structs.hpp"


namespace SDK::Params
{

// Function W_SelectedItemInfo.W_SelectedItemInfo_C.ExecuteUbergraph_W_SelectedItemInfo
// 0x0850 (0x0850 - 0x0000)
struct W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_2;                            // 0x0034(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_3;                            // 0x0044(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPaperSprite*                           K2Node_DynamicCast_AsPaper_Sprite;                 // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0xF];                                       // 0x0071(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            CallFunc_MakeBrushFromSprite_ReturnValue;          // 0x0080(0x00D0)()
	struct FSlateBrush                            CallFunc_MakeBrushFromSprite_ReturnValue_1;        // 0x0150(0x00D0)()
	struct FSlateBrush                            CallFunc_MakeBrushFromSprite_ReturnValue_2;        // 0x0220(0x00D0)()
	struct FSlateBrush                            CallFunc_MakeBrushFromSprite_ReturnValue_3;        // 0x02F0(0x00D0)()
	struct FSlateBrush                            CallFunc_MakeBrushFromSprite_ReturnValue_4;        // 0x03C0(0x00D0)()
	struct FLinearColor                           Temp_struct_Variable_4;                            // 0x0490(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_5;                            // 0x04A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_6;                            // 0x04B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_7;                            // 0x04C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x04D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFItemInfo                             K2Node_CustomEvent_ItemInfo;                       // 0x04D8(0x0220)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_WithAnim;                       // 0x06F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsBuyLayout_;                   // 0x06F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6FA[0x6];                                      // 0x06FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector2D_X;                          // 0x0700(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x0708(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue;            // 0x0710(0x0018)()
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x0728(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;    // 0x0729(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72A[0x6];                                      // 0x072A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector2D_X_1;                        // 0x0730(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y_1;                        // 0x0738(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0740(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue_2;    // 0x0741(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue_3;    // 0x0742(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_743[0x5];                                      // 0x0743(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector2D_X_2;                        // 0x0748(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y_2;                        // 0x0750(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0758(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue_4;    // 0x0759(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue_5;    // 0x075A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75B[0x5];                                      // 0x075B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector2D_X_3;                        // 0x0760(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y_3;                        // 0x0768(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0770(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue_6;    // 0x0771(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue_7;    // 0x0772(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_773[0x5];                                      // 0x0773(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector2D_X_4;                        // 0x0778(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y_4;                        // 0x0780(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x0788(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue_8;    // 0x0789(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue_9;    // 0x078A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_4;                 // 0x078B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78C[0x4];                                      // 0x078C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector2D_X_5;                        // 0x0790(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y_5;                        // 0x0798(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x07A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x07A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A9[0x7];                                      // 0x07A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue_1;          // 0x07B0(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x07C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x07C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7CA[0x6];                                      // 0x07CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x07D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_2;       // 0x07D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue_2;          // 0x07E0(0x0018)()
	struct FLinearColor                           Temp_struct_Variable_8;                            // 0x07F8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_9;                            // 0x0808(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ItemColorTypes                              Temp_byte_Variable;                                // 0x0818(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0819(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81A[0x2];                                      // 0x081A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x081C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x082C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x082D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x082E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x082F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x0830(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_831[0x7];                                      // 0x0831(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_3;       // 0x0838(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0840(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0841(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo) == 0x000010, "Wrong alignment on W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo");
static_assert(sizeof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo) == 0x000850, "Wrong size on W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, EntryPoint) == 0x000000, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, Temp_struct_Variable) == 0x000014, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, Temp_struct_Variable_1) == 0x000024, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, Temp_struct_Variable_2) == 0x000034, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, Temp_struct_Variable_3) == 0x000044, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, K2Node_CustomEvent_Loaded) == 0x000058, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, Temp_object_Variable) == 0x000060, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, K2Node_DynamicCast_AsPaper_Sprite) == 0x000068, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::K2Node_DynamicCast_AsPaper_Sprite' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, CallFunc_MakeBrushFromSprite_ReturnValue) == 0x000080, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::CallFunc_MakeBrushFromSprite_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, CallFunc_MakeBrushFromSprite_ReturnValue_1) == 0x000150, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::CallFunc_MakeBrushFromSprite_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, CallFunc_MakeBrushFromSprite_ReturnValue_2) == 0x000220, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::CallFunc_MakeBrushFromSprite_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, CallFunc_MakeBrushFromSprite_ReturnValue_3) == 0x0002F0, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::CallFunc_MakeBrushFromSprite_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, CallFunc_MakeBrushFromSprite_ReturnValue_4) == 0x0003C0, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::CallFunc_MakeBrushFromSprite_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, Temp_struct_Variable_4) == 0x000490, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::Temp_struct_Variable_4' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, Temp_struct_Variable_5) == 0x0004A0, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::Temp_struct_Variable_5' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, Temp_struct_Variable_6) == 0x0004B0, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::Temp_struct_Variable_6' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, Temp_struct_Variable_7) == 0x0004C0, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::Temp_struct_Variable_7' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, CallFunc_PlayAnimationForward_ReturnValue) == 0x0004D0, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, K2Node_CustomEvent_ItemInfo) == 0x0004D8, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::K2Node_CustomEvent_ItemInfo' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, K2Node_CustomEvent_WithAnim) == 0x0006F8, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::K2Node_CustomEvent_WithAnim' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, K2Node_CustomEvent_IsBuyLayout_) == 0x0006F9, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::K2Node_CustomEvent_IsBuyLayout_' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, CallFunc_BreakVector2D_X) == 0x000700, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, CallFunc_BreakVector2D_Y) == 0x000708, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, CallFunc_Conv_DoubleToText_ReturnValue) == 0x000710, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::CallFunc_Conv_DoubleToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x000728, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, CallFunc_EqualEqual_DoubleDouble_ReturnValue_1) == 0x000729, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::CallFunc_EqualEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, CallFunc_BreakVector2D_X_1) == 0x000730, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, CallFunc_BreakVector2D_Y_1) == 0x000738, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, CallFunc_BooleanAND_ReturnValue) == 0x000740, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, CallFunc_EqualEqual_DoubleDouble_ReturnValue_2) == 0x000741, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::CallFunc_EqualEqual_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, CallFunc_EqualEqual_DoubleDouble_ReturnValue_3) == 0x000742, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::CallFunc_EqualEqual_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, CallFunc_BreakVector2D_X_2) == 0x000748, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::CallFunc_BreakVector2D_X_2' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, CallFunc_BreakVector2D_Y_2) == 0x000750, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::CallFunc_BreakVector2D_Y_2' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, CallFunc_BooleanAND_ReturnValue_1) == 0x000758, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, CallFunc_EqualEqual_DoubleDouble_ReturnValue_4) == 0x000759, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::CallFunc_EqualEqual_DoubleDouble_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, CallFunc_EqualEqual_DoubleDouble_ReturnValue_5) == 0x00075A, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::CallFunc_EqualEqual_DoubleDouble_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, CallFunc_BreakVector2D_X_3) == 0x000760, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::CallFunc_BreakVector2D_X_3' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, CallFunc_BreakVector2D_Y_3) == 0x000768, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::CallFunc_BreakVector2D_Y_3' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, CallFunc_BooleanAND_ReturnValue_2) == 0x000770, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, CallFunc_EqualEqual_DoubleDouble_ReturnValue_6) == 0x000771, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::CallFunc_EqualEqual_DoubleDouble_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, CallFunc_EqualEqual_DoubleDouble_ReturnValue_7) == 0x000772, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::CallFunc_EqualEqual_DoubleDouble_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, CallFunc_BreakVector2D_X_4) == 0x000778, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::CallFunc_BreakVector2D_X_4' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, CallFunc_BreakVector2D_Y_4) == 0x000780, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::CallFunc_BreakVector2D_Y_4' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, CallFunc_BooleanAND_ReturnValue_3) == 0x000788, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, CallFunc_EqualEqual_DoubleDouble_ReturnValue_8) == 0x000789, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::CallFunc_EqualEqual_DoubleDouble_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, CallFunc_EqualEqual_DoubleDouble_ReturnValue_9) == 0x00078A, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::CallFunc_EqualEqual_DoubleDouble_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, CallFunc_BooleanAND_ReturnValue_4) == 0x00078B, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::CallFunc_BooleanAND_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, CallFunc_BreakVector2D_X_5) == 0x000790, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::CallFunc_BreakVector2D_X_5' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, CallFunc_BreakVector2D_Y_5) == 0x000798, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::CallFunc_BreakVector2D_Y_5' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0007A0, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0007A8, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, CallFunc_Conv_DoubleToText_ReturnValue_1) == 0x0007B0, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::CallFunc_Conv_DoubleToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0007C8, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, CallFunc_BooleanOR_ReturnValue) == 0x0007C9, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x0007D0, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, CallFunc_PlayAnimationForward_ReturnValue_2) == 0x0007D8, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::CallFunc_PlayAnimationForward_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, CallFunc_Conv_DoubleToText_ReturnValue_2) == 0x0007E0, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::CallFunc_Conv_DoubleToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, Temp_struct_Variable_8) == 0x0007F8, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::Temp_struct_Variable_8' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, Temp_struct_Variable_9) == 0x000808, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::Temp_struct_Variable_9' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, Temp_byte_Variable) == 0x000818, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, Temp_byte_Variable_1) == 0x000819, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, K2Node_Select_Default) == 0x00081C, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, Temp_byte_Variable_2) == 0x00082C, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, Temp_bool_Variable) == 0x00082D, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, Temp_byte_Variable_3) == 0x00082E, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, K2Node_Select_Default_1) == 0x00082F, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, Temp_byte_Variable_4) == 0x000830, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, CallFunc_PlayAnimationForward_ReturnValue_3) == 0x000838, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::CallFunc_PlayAnimationForward_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, Temp_bool_Variable_1) == 0x000840, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo, K2Node_Select_Default_2) == 0x000841, "Member 'W_SelectedItemInfo_C_ExecuteUbergraph_W_SelectedItemInfo::K2Node_Select_Default_2' has a wrong offset!");

// Function W_SelectedItemInfo.W_SelectedItemInfo_C.isHidden
// 0x0018 (0x0018 - 0x0000)
struct W_SelectedItemInfo_C_IsHidden final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetRenderOpacity_ReturnValue;             // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_SelectedItemInfo_C_IsHidden) == 0x000008, "Wrong alignment on W_SelectedItemInfo_C_IsHidden");
static_assert(sizeof(W_SelectedItemInfo_C_IsHidden) == 0x000018, "Wrong size on W_SelectedItemInfo_C_IsHidden");
static_assert(offsetof(W_SelectedItemInfo_C_IsHidden, ReturnValue) == 0x000000, "Member 'W_SelectedItemInfo_C_IsHidden::ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_IsHidden, CallFunc_GetRenderOpacity_ReturnValue) == 0x000004, "Member 'W_SelectedItemInfo_C_IsHidden::CallFunc_GetRenderOpacity_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_IsHidden, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000008, "Member 'W_SelectedItemInfo_C_IsHidden::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_IsHidden, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast) == 0x000010, "Member 'W_SelectedItemInfo_C_IsHidden::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function W_SelectedItemInfo.W_SelectedItemInfo_C.OnLoaded_9A6B6F934455094A7550DD8BAACECB9C
// 0x0008 (0x0008 - 0x0000)
struct W_SelectedItemInfo_C_OnLoaded_9A6B6F934455094A7550DD8BAACECB9C final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_SelectedItemInfo_C_OnLoaded_9A6B6F934455094A7550DD8BAACECB9C) == 0x000008, "Wrong alignment on W_SelectedItemInfo_C_OnLoaded_9A6B6F934455094A7550DD8BAACECB9C");
static_assert(sizeof(W_SelectedItemInfo_C_OnLoaded_9A6B6F934455094A7550DD8BAACECB9C) == 0x000008, "Wrong size on W_SelectedItemInfo_C_OnLoaded_9A6B6F934455094A7550DD8BAACECB9C");
static_assert(offsetof(W_SelectedItemInfo_C_OnLoaded_9A6B6F934455094A7550DD8BAACECB9C, Loaded) == 0x000000, "Member 'W_SelectedItemInfo_C_OnLoaded_9A6B6F934455094A7550DD8BAACECB9C::Loaded' has a wrong offset!");

// Function W_SelectedItemInfo.W_SelectedItemInfo_C.SetItemInfo
// 0x0228 (0x0228 - 0x0000)
struct W_SelectedItemInfo_C_SetItemInfo final
{
public:
	struct FFItemInfo                             ItemInfo;                                          // 0x0000(0x0220)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          WithAnim;                                          // 0x0220(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBuyLayout_;                                      // 0x0221(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_SelectedItemInfo_C_SetItemInfo) == 0x000008, "Wrong alignment on W_SelectedItemInfo_C_SetItemInfo");
static_assert(sizeof(W_SelectedItemInfo_C_SetItemInfo) == 0x000228, "Wrong size on W_SelectedItemInfo_C_SetItemInfo");
static_assert(offsetof(W_SelectedItemInfo_C_SetItemInfo, ItemInfo) == 0x000000, "Member 'W_SelectedItemInfo_C_SetItemInfo::ItemInfo' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_SetItemInfo, WithAnim) == 0x000220, "Member 'W_SelectedItemInfo_C_SetItemInfo::WithAnim' has a wrong offset!");
static_assert(offsetof(W_SelectedItemInfo_C_SetItemInfo, IsBuyLayout_) == 0x000221, "Member 'W_SelectedItemInfo_C_SetItemInfo::IsBuyLayout_' has a wrong offset!");

}

