#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ShopDialogue

#include "Basic.hpp"

#include "AttachmentInfo_structs.hpp"
#include "Engine_structs.hpp"
#include "FItemInfo_structs.hpp"
#include "FMODStudio_structs.hpp"
#include "JSItemType_structs.hpp"


namespace SDK::Params
{

// Function WBP_ShopDialogue.WBP_ShopDialogue_C.BndEvt__WBP_ShopDialogue_Slider_Main_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct WBP_ShopDialogue_C_BndEvt__WBP_ShopDialogue_Slider_Main_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ShopDialogue_C_BndEvt__WBP_ShopDialogue_Slider_Main_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong alignment on WBP_ShopDialogue_C_BndEvt__WBP_ShopDialogue_Slider_Main_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature");
static_assert(sizeof(WBP_ShopDialogue_C_BndEvt__WBP_ShopDialogue_Slider_Main_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong size on WBP_ShopDialogue_C_BndEvt__WBP_ShopDialogue_Slider_Main_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature");
static_assert(offsetof(WBP_ShopDialogue_C_BndEvt__WBP_ShopDialogue_Slider_Main_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature, Value) == 0x000000, "Member 'WBP_ShopDialogue_C_BndEvt__WBP_ShopDialogue_Slider_Main_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature::Value' has a wrong offset!");

// Function WBP_ShopDialogue.WBP_ShopDialogue_C.ExecuteUbergraph_WBP_ShopDialogue
// 0x00C8 (0x00C8 - 0x0000)
struct WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_Value;                  // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue;                        // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue_1;                      // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_2;           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62[0x6];                                       // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFMODEventInstance                     CallFunc_PlayEvent2D_ReturnValue;                  // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFMODEventInstance                     CallFunc_PlayEvent2D_ReturnValue_1;                // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFMODEventInstance                     CallFunc_PlayEvent2D_ReturnValue_2;                // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        CallFunc_GetPrice_ReturnValue;                     // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue_2;                      // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0090(0x0018)()
	double                                        CallFunc_Round_A_ImplicitCast;                     // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetMaxValue_InValue_ImplicitCast;         // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_VariableSet_Slider_Value_ImplicitCast;      // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Round_A_ImplicitCast_1;                   // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_VariableSet_Slider_Value_ImplicitCast_1;    // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue) == 0x000008, "Wrong alignment on WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue");
static_assert(sizeof(WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue) == 0x0000C8, "Wrong size on WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue");
static_assert(offsetof(WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue, EntryPoint) == 0x000000, "Member 'WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue, K2Node_ComponentBoundEvent_Value) == 0x000004, "Member 'WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue::K2Node_ComponentBoundEvent_Value' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue, CallFunc_Round_ReturnValue) == 0x000008, "Member 'WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000028, "Member 'WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000030, "Member 'WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue, CallFunc_Subtract_IntInt_ReturnValue) == 0x000038, "Member 'WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00003C, "Member 'WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000044, "Member 'WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue, CallFunc_Conv_IntToDouble_ReturnValue_1) == 0x000048, "Member 'WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue::CallFunc_Conv_IntToDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue, CallFunc_Round_ReturnValue_1) == 0x000050, "Member 'WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue::CallFunc_Round_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000054, "Member 'WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue, CallFunc_Conv_IntToDouble_ReturnValue_2) == 0x000058, "Member 'WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue::CallFunc_Conv_IntToDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue, CallFunc_Greater_IntInt_ReturnValue) == 0x000060, "Member 'WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000061, "Member 'WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue, CallFunc_PlayEvent2D_ReturnValue) == 0x000068, "Member 'WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue::CallFunc_PlayEvent2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue, CallFunc_PlayEvent2D_ReturnValue_1) == 0x000070, "Member 'WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue::CallFunc_PlayEvent2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue, CallFunc_PlayEvent2D_ReturnValue_2) == 0x000078, "Member 'WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue::CallFunc_PlayEvent2D_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue, CallFunc_GetPrice_ReturnValue) == 0x000080, "Member 'WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue::CallFunc_GetPrice_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue, CallFunc_Round_ReturnValue_2) == 0x000088, "Member 'WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue::CallFunc_Round_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000090, "Member 'WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue, CallFunc_Round_A_ImplicitCast) == 0x0000A8, "Member 'WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue::CallFunc_Round_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue, CallFunc_SetMaxValue_InValue_ImplicitCast) == 0x0000B0, "Member 'WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue::CallFunc_SetMaxValue_InValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue, K2Node_VariableSet_Slider_Value_ImplicitCast) == 0x0000B4, "Member 'WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue::K2Node_VariableSet_Slider_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue, CallFunc_Round_A_ImplicitCast_1) == 0x0000B8, "Member 'WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue::CallFunc_Round_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue, K2Node_VariableSet_Slider_Value_ImplicitCast_1) == 0x0000C0, "Member 'WBP_ShopDialogue_C_ExecuteUbergraph_WBP_ShopDialogue::K2Node_VariableSet_Slider_Value_ImplicitCast_1' has a wrong offset!");

// Function WBP_ShopDialogue.WBP_ShopDialogue_C.GetCurrentCount
// 0x0004 (0x0004 - 0x0000)
struct WBP_ShopDialogue_C_GetCurrentCount final
{
public:
	int32                                         Param_CurrentValue;                                // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ShopDialogue_C_GetCurrentCount) == 0x000004, "Wrong alignment on WBP_ShopDialogue_C_GetCurrentCount");
static_assert(sizeof(WBP_ShopDialogue_C_GetCurrentCount) == 0x000004, "Wrong size on WBP_ShopDialogue_C_GetCurrentCount");
static_assert(offsetof(WBP_ShopDialogue_C_GetCurrentCount, Param_CurrentValue) == 0x000000, "Member 'WBP_ShopDialogue_C_GetCurrentCount::Param_CurrentValue' has a wrong offset!");

// Function WBP_ShopDialogue.WBP_ShopDialogue_C.getPrice
// 0x0508 (0x0508 - 0x0000)
struct WBP_ShopDialogue_C_GetPrice final
{
public:
	double                                        ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Price;                                             // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable;                                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable_1;                              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable_2;                              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable_3;                              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x2];                                       // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable_4;                              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASurvivalPlayer_C*                      K2Node_DynamicCast_AsSurvival_Player;              // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJSItemType                                   Temp_byte_Variable;                                // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62[0x6];                                       // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_Select_Default;                             // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default_1;                           // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72[0x6];                                       // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFItemInfo                             CallFunc_GetDataTableRowFromName_OutRow;           // 0x0078(0x0220)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_299[0x3];                                      // 0x0299(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAttachmentInfo                        CallFunc_Array_Get_Item;                           // 0x029C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x02AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B1[0x7];                                      // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFItemInfo                             CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x02B8(0x0220)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x04D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D9[0x7];                                      // 0x04D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x04E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x04E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x04F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x04F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0500(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ShopDialogue_C_GetPrice) == 0x000008, "Wrong alignment on WBP_ShopDialogue_C_GetPrice");
static_assert(sizeof(WBP_ShopDialogue_C_GetPrice) == 0x000508, "Wrong size on WBP_ShopDialogue_C_GetPrice");
static_assert(offsetof(WBP_ShopDialogue_C_GetPrice, ReturnValue) == 0x000000, "Member 'WBP_ShopDialogue_C_GetPrice::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_GetPrice, Price) == 0x000008, "Member 'WBP_ShopDialogue_C_GetPrice::Price' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_GetPrice, Temp_real_Variable) == 0x000010, "Member 'WBP_ShopDialogue_C_GetPrice::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_GetPrice, Temp_real_Variable_1) == 0x000018, "Member 'WBP_ShopDialogue_C_GetPrice::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_GetPrice, Temp_real_Variable_2) == 0x000020, "Member 'WBP_ShopDialogue_C_GetPrice::Temp_real_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_GetPrice, Temp_real_Variable_3) == 0x000028, "Member 'WBP_ShopDialogue_C_GetPrice::Temp_real_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_GetPrice, Temp_bool_Variable) == 0x000030, "Member 'WBP_ShopDialogue_C_GetPrice::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_GetPrice, Temp_bool_Variable_1) == 0x000031, "Member 'WBP_ShopDialogue_C_GetPrice::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_GetPrice, Temp_int_Array_Index_Variable) == 0x000034, "Member 'WBP_ShopDialogue_C_GetPrice::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_GetPrice, Temp_int_Loop_Counter_Variable) == 0x000038, "Member 'WBP_ShopDialogue_C_GetPrice::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_GetPrice, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'WBP_ShopDialogue_C_GetPrice::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_GetPrice, CallFunc_GetPlayerController_ReturnValue) == 0x000040, "Member 'WBP_ShopDialogue_C_GetPrice::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_GetPrice, Temp_real_Variable_4) == 0x000048, "Member 'WBP_ShopDialogue_C_GetPrice::Temp_real_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_GetPrice, CallFunc_K2_GetPawn_ReturnValue) == 0x000050, "Member 'WBP_ShopDialogue_C_GetPrice::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_GetPrice, K2Node_DynamicCast_AsSurvival_Player) == 0x000058, "Member 'WBP_ShopDialogue_C_GetPrice::K2Node_DynamicCast_AsSurvival_Player' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_GetPrice, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'WBP_ShopDialogue_C_GetPrice::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_GetPrice, Temp_byte_Variable) == 0x000061, "Member 'WBP_ShopDialogue_C_GetPrice::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_GetPrice, K2Node_Select_Default) == 0x000068, "Member 'WBP_ShopDialogue_C_GetPrice::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_GetPrice, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000070, "Member 'WBP_ShopDialogue_C_GetPrice::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_GetPrice, K2Node_Select_Default_1) == 0x000071, "Member 'WBP_ShopDialogue_C_GetPrice::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_GetPrice, CallFunc_GetDataTableRowFromName_OutRow) == 0x000078, "Member 'WBP_ShopDialogue_C_GetPrice::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_GetPrice, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000298, "Member 'WBP_ShopDialogue_C_GetPrice::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_GetPrice, CallFunc_Array_Get_Item) == 0x00029C, "Member 'WBP_ShopDialogue_C_GetPrice::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_GetPrice, CallFunc_Array_Length_ReturnValue) == 0x0002AC, "Member 'WBP_ShopDialogue_C_GetPrice::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_GetPrice, CallFunc_Less_IntInt_ReturnValue) == 0x0002B0, "Member 'WBP_ShopDialogue_C_GetPrice::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_GetPrice, CallFunc_GetDataTableRowFromName_OutRow_1) == 0x0002B8, "Member 'WBP_ShopDialogue_C_GetPrice::CallFunc_GetDataTableRowFromName_OutRow_1' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_GetPrice, CallFunc_GetDataTableRowFromName_ReturnValue_1) == 0x0004D8, "Member 'WBP_ShopDialogue_C_GetPrice::CallFunc_GetDataTableRowFromName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_GetPrice, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0004E0, "Member 'WBP_ShopDialogue_C_GetPrice::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_GetPrice, CallFunc_SelectFloat_ReturnValue) == 0x0004E8, "Member 'WBP_ShopDialogue_C_GetPrice::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_GetPrice, CallFunc_SelectFloat_ReturnValue_1) == 0x0004F0, "Member 'WBP_ShopDialogue_C_GetPrice::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_GetPrice, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x0004F8, "Member 'WBP_ShopDialogue_C_GetPrice::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_GetPrice, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000500, "Member 'WBP_ShopDialogue_C_GetPrice::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");

// Function WBP_ShopDialogue.WBP_ShopDialogue_C.GetSlotRef
// 0x0008 (0x0008 - 0x0000)
struct WBP_ShopDialogue_C_GetSlotRef final
{
public:
	class UJSI_Slot_C*                            Param_SlotRef;                                     // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ShopDialogue_C_GetSlotRef) == 0x000008, "Wrong alignment on WBP_ShopDialogue_C_GetSlotRef");
static_assert(sizeof(WBP_ShopDialogue_C_GetSlotRef) == 0x000008, "Wrong size on WBP_ShopDialogue_C_GetSlotRef");
static_assert(offsetof(WBP_ShopDialogue_C_GetSlotRef, Param_SlotRef) == 0x000000, "Member 'WBP_ShopDialogue_C_GetSlotRef::Param_SlotRef' has a wrong offset!");

// Function WBP_ShopDialogue.WBP_ShopDialogue_C.OnPressedAccept__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_ShopDialogue_C_OnPressedAccept__DelegateSignature final
{
public:
	int32                                         Count;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UJSI_Slot_C*                            Ref_slot;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ShopDialogue_C_OnPressedAccept__DelegateSignature) == 0x000008, "Wrong alignment on WBP_ShopDialogue_C_OnPressedAccept__DelegateSignature");
static_assert(sizeof(WBP_ShopDialogue_C_OnPressedAccept__DelegateSignature) == 0x000010, "Wrong size on WBP_ShopDialogue_C_OnPressedAccept__DelegateSignature");
static_assert(offsetof(WBP_ShopDialogue_C_OnPressedAccept__DelegateSignature, Count) == 0x000000, "Member 'WBP_ShopDialogue_C_OnPressedAccept__DelegateSignature::Count' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_OnPressedAccept__DelegateSignature, Ref_slot) == 0x000008, "Member 'WBP_ShopDialogue_C_OnPressedAccept__DelegateSignature::Ref_slot' has a wrong offset!");

// Function WBP_ShopDialogue.WBP_ShopDialogue_C.SetText
// 0x0058 (0x0058 - 0x0000)
struct WBP_ShopDialogue_C_SetText final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	double                                        CallFunc_GetPrice_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue;                        // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0040(0x0018)()
};
static_assert(alignof(WBP_ShopDialogue_C_SetText) == 0x000008, "Wrong alignment on WBP_ShopDialogue_C_SetText");
static_assert(sizeof(WBP_ShopDialogue_C_SetText) == 0x000058, "Wrong size on WBP_ShopDialogue_C_SetText");
static_assert(offsetof(WBP_ShopDialogue_C_SetText, Value) == 0x000000, "Member 'WBP_ShopDialogue_C_SetText::Value' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_SetText, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'WBP_ShopDialogue_C_SetText::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_SetText, CallFunc_GetPrice_ReturnValue) == 0x000020, "Member 'WBP_ShopDialogue_C_SetText::CallFunc_GetPrice_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_SetText, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000028, "Member 'WBP_ShopDialogue_C_SetText::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_SetText, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000030, "Member 'WBP_ShopDialogue_C_SetText::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_SetText, CallFunc_Round_ReturnValue) == 0x000038, "Member 'WBP_ShopDialogue_C_SetText::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_SetText, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000040, "Member 'WBP_ShopDialogue_C_SetText::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");

// Function WBP_ShopDialogue.WBP_ShopDialogue_C.SetTextV2
// 0x0368 (0x0368 - 0x0000)
struct WBP_ShopDialogue_C_SetTextV2 final
{
public:
	struct FFItemInfo                             FItemInfo;                                         // 0x0000(0x0220)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	double                                        Price;                                             // 0x0220(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RPoints;                                           // 0x0228(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22C[0x4];                                      // 0x022C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue;            // 0x0238(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0250(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x02A0(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x02F0(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0340(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0350(0x0018)()
};
static_assert(alignof(WBP_ShopDialogue_C_SetTextV2) == 0x000008, "Wrong alignment on WBP_ShopDialogue_C_SetTextV2");
static_assert(sizeof(WBP_ShopDialogue_C_SetTextV2) == 0x000368, "Wrong size on WBP_ShopDialogue_C_SetTextV2");
static_assert(offsetof(WBP_ShopDialogue_C_SetTextV2, FItemInfo) == 0x000000, "Member 'WBP_ShopDialogue_C_SetTextV2::FItemInfo' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_SetTextV2, Price) == 0x000220, "Member 'WBP_ShopDialogue_C_SetTextV2::Price' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_SetTextV2, RPoints) == 0x000228, "Member 'WBP_ShopDialogue_C_SetTextV2::RPoints' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_SetTextV2, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000230, "Member 'WBP_ShopDialogue_C_SetTextV2::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_SetTextV2, CallFunc_Conv_DoubleToText_ReturnValue) == 0x000238, "Member 'WBP_ShopDialogue_C_SetTextV2::CallFunc_Conv_DoubleToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_SetTextV2, K2Node_MakeStruct_FormatArgumentData) == 0x000250, "Member 'WBP_ShopDialogue_C_SetTextV2::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_SetTextV2, K2Node_MakeStruct_FormatArgumentData_1) == 0x0002A0, "Member 'WBP_ShopDialogue_C_SetTextV2::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_SetTextV2, K2Node_MakeStruct_FormatArgumentData_2) == 0x0002F0, "Member 'WBP_ShopDialogue_C_SetTextV2::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_SetTextV2, K2Node_MakeArray_Array) == 0x000340, "Member 'WBP_ShopDialogue_C_SetTextV2::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_ShopDialogue_C_SetTextV2, CallFunc_Format_ReturnValue) == 0x000350, "Member 'WBP_ShopDialogue_C_SetTextV2::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function WBP_ShopDialogue.WBP_ShopDialogue_C.SetWidgetSwitcher
// 0x0004 (0x0004 - 0x0000)
struct WBP_ShopDialogue_C_SetWidgetSwitcher final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ShopDialogue_C_SetWidgetSwitcher) == 0x000004, "Wrong alignment on WBP_ShopDialogue_C_SetWidgetSwitcher");
static_assert(sizeof(WBP_ShopDialogue_C_SetWidgetSwitcher) == 0x000004, "Wrong size on WBP_ShopDialogue_C_SetWidgetSwitcher");
static_assert(offsetof(WBP_ShopDialogue_C_SetWidgetSwitcher, Param_Index) == 0x000000, "Member 'WBP_ShopDialogue_C_SetWidgetSwitcher::Param_Index' has a wrong offset!");

}
