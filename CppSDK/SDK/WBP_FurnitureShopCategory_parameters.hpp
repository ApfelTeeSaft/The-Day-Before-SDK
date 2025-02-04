#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_FurnitureShopCategory

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FMODStudio_structs.hpp"


namespace SDK::Params
{

// Function WBP_FurnitureShopCategory.WBP_FurnitureShopCategory_C.ButtonHover
// 0x0010 (0x0010 - 0x0000)
struct WBP_FurnitureShopCategory_C_ButtonHover final
{
public:
	bool                                          bHovered;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bWithAnim;                                         // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable_1;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_FurnitureShopCategory_C_ButtonHover) == 0x000008, "Wrong alignment on WBP_FurnitureShopCategory_C_ButtonHover");
static_assert(sizeof(WBP_FurnitureShopCategory_C_ButtonHover) == 0x000010, "Wrong size on WBP_FurnitureShopCategory_C_ButtonHover");
static_assert(offsetof(WBP_FurnitureShopCategory_C_ButtonHover, bHovered) == 0x000000, "Member 'WBP_FurnitureShopCategory_C_ButtonHover::bHovered' has a wrong offset!");
static_assert(offsetof(WBP_FurnitureShopCategory_C_ButtonHover, bWithAnim) == 0x000001, "Member 'WBP_FurnitureShopCategory_C_ButtonHover::bWithAnim' has a wrong offset!");
static_assert(offsetof(WBP_FurnitureShopCategory_C_ButtonHover, Temp_bool_Variable) == 0x000002, "Member 'WBP_FurnitureShopCategory_C_ButtonHover::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_FurnitureShopCategory_C_ButtonHover, Temp_byte_Variable) == 0x000003, "Member 'WBP_FurnitureShopCategory_C_ButtonHover::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_FurnitureShopCategory_C_ButtonHover, Temp_byte_Variable_1) == 0x000004, "Member 'WBP_FurnitureShopCategory_C_ButtonHover::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_FurnitureShopCategory_C_ButtonHover, K2Node_Select_Default) == 0x000005, "Member 'WBP_FurnitureShopCategory_C_ButtonHover::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_FurnitureShopCategory_C_ButtonHover, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_FurnitureShopCategory_C_ButtonHover::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WBP_FurnitureShopCategory.WBP_FurnitureShopCategory_C.ExecuteUbergraph_WBP_FurnitureShopCategory
// 0x0078 (0x0078 - 0x0000)
struct WBP_FurnitureShopCategory_C_ExecuteUbergraph_WBP_FurnitureShopCategory final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFMODEventInstance                     CallFunc_PlayEvent2D_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0038(0x0018)()
	struct FFocusEvent                            K2Node_Event_InFocusEvent;                         // 0x0050(0x0008)(NoDestructor)
	struct FFMODEventInstance                     CallFunc_PlayEvent2D_ReturnValue_1;                // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0060(0x0014)()
};
static_assert(alignof(WBP_FurnitureShopCategory_C_ExecuteUbergraph_WBP_FurnitureShopCategory) == 0x000008, "Wrong alignment on WBP_FurnitureShopCategory_C_ExecuteUbergraph_WBP_FurnitureShopCategory");
static_assert(sizeof(WBP_FurnitureShopCategory_C_ExecuteUbergraph_WBP_FurnitureShopCategory) == 0x000078, "Wrong size on WBP_FurnitureShopCategory_C_ExecuteUbergraph_WBP_FurnitureShopCategory");
static_assert(offsetof(WBP_FurnitureShopCategory_C_ExecuteUbergraph_WBP_FurnitureShopCategory, EntryPoint) == 0x000000, "Member 'WBP_FurnitureShopCategory_C_ExecuteUbergraph_WBP_FurnitureShopCategory::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_FurnitureShopCategory_C_ExecuteUbergraph_WBP_FurnitureShopCategory, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_FurnitureShopCategory_C_ExecuteUbergraph_WBP_FurnitureShopCategory::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_FurnitureShopCategory_C_ExecuteUbergraph_WBP_FurnitureShopCategory, CallFunc_BooleanAND_ReturnValue) == 0x000005, "Member 'WBP_FurnitureShopCategory_C_ExecuteUbergraph_WBP_FurnitureShopCategory::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FurnitureShopCategory_C_ExecuteUbergraph_WBP_FurnitureShopCategory, CallFunc_PlayEvent2D_ReturnValue) == 0x000008, "Member 'WBP_FurnitureShopCategory_C_ExecuteUbergraph_WBP_FurnitureShopCategory::CallFunc_PlayEvent2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FurnitureShopCategory_C_ExecuteUbergraph_WBP_FurnitureShopCategory, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000010, "Member 'WBP_FurnitureShopCategory_C_ExecuteUbergraph_WBP_FurnitureShopCategory::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FurnitureShopCategory_C_ExecuteUbergraph_WBP_FurnitureShopCategory, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'WBP_FurnitureShopCategory_C_ExecuteUbergraph_WBP_FurnitureShopCategory::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FurnitureShopCategory_C_ExecuteUbergraph_WBP_FurnitureShopCategory, CallFunc_GetText_ReturnValue) == 0x000038, "Member 'WBP_FurnitureShopCategory_C_ExecuteUbergraph_WBP_FurnitureShopCategory::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FurnitureShopCategory_C_ExecuteUbergraph_WBP_FurnitureShopCategory, K2Node_Event_InFocusEvent) == 0x000050, "Member 'WBP_FurnitureShopCategory_C_ExecuteUbergraph_WBP_FurnitureShopCategory::K2Node_Event_InFocusEvent' has a wrong offset!");
static_assert(offsetof(WBP_FurnitureShopCategory_C_ExecuteUbergraph_WBP_FurnitureShopCategory, CallFunc_PlayEvent2D_ReturnValue_1) == 0x000058, "Member 'WBP_FurnitureShopCategory_C_ExecuteUbergraph_WBP_FurnitureShopCategory::CallFunc_PlayEvent2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_FurnitureShopCategory_C_ExecuteUbergraph_WBP_FurnitureShopCategory, K2Node_MakeStruct_SlateColor) == 0x000060, "Member 'WBP_FurnitureShopCategory_C_ExecuteUbergraph_WBP_FurnitureShopCategory::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function WBP_FurnitureShopCategory.WBP_FurnitureShopCategory_C.OnAddedToFocusPath
// 0x0008 (0x0008 - 0x0000)
struct WBP_FurnitureShopCategory_C_OnAddedToFocusPath final
{
public:
	struct FFocusEvent                            InFocusEvent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(WBP_FurnitureShopCategory_C_OnAddedToFocusPath) == 0x000004, "Wrong alignment on WBP_FurnitureShopCategory_C_OnAddedToFocusPath");
static_assert(sizeof(WBP_FurnitureShopCategory_C_OnAddedToFocusPath) == 0x000008, "Wrong size on WBP_FurnitureShopCategory_C_OnAddedToFocusPath");
static_assert(offsetof(WBP_FurnitureShopCategory_C_OnAddedToFocusPath, InFocusEvent) == 0x000000, "Member 'WBP_FurnitureShopCategory_C_OnAddedToFocusPath::InFocusEvent' has a wrong offset!");

// Function WBP_FurnitureShopCategory.WBP_FurnitureShopCategory_C.OnCategorySelected__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct WBP_FurnitureShopCategory_C_OnCategorySelected__DelegateSignature final
{
public:
	class FText                                   NewSelectedCategoryName;                           // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UWBP_FurnitureShopCategory_C*           FurnitureShopCategory;                             // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_FurnitureShopCategory_C_OnCategorySelected__DelegateSignature) == 0x000008, "Wrong alignment on WBP_FurnitureShopCategory_C_OnCategorySelected__DelegateSignature");
static_assert(sizeof(WBP_FurnitureShopCategory_C_OnCategorySelected__DelegateSignature) == 0x000020, "Wrong size on WBP_FurnitureShopCategory_C_OnCategorySelected__DelegateSignature");
static_assert(offsetof(WBP_FurnitureShopCategory_C_OnCategorySelected__DelegateSignature, NewSelectedCategoryName) == 0x000000, "Member 'WBP_FurnitureShopCategory_C_OnCategorySelected__DelegateSignature::NewSelectedCategoryName' has a wrong offset!");
static_assert(offsetof(WBP_FurnitureShopCategory_C_OnCategorySelected__DelegateSignature, FurnitureShopCategory) == 0x000018, "Member 'WBP_FurnitureShopCategory_C_OnCategorySelected__DelegateSignature::FurnitureShopCategory' has a wrong offset!");

// Function WBP_FurnitureShopCategory.WBP_FurnitureShopCategory_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_FurnitureShopCategory_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_FurnitureShopCategory_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_FurnitureShopCategory_C_PreConstruct");
static_assert(sizeof(WBP_FurnitureShopCategory_C_PreConstruct) == 0x000001, "Wrong size on WBP_FurnitureShopCategory_C_PreConstruct");
static_assert(offsetof(WBP_FurnitureShopCategory_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_FurnitureShopCategory_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_FurnitureShopCategory.WBP_FurnitureShopCategory_C.SetButtonEnabled
// 0x0001 (0x0001 - 0x0000)
struct WBP_FurnitureShopCategory_C_SetButtonEnabled final
{
public:
	bool                                          IsEnabled;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_FurnitureShopCategory_C_SetButtonEnabled) == 0x000001, "Wrong alignment on WBP_FurnitureShopCategory_C_SetButtonEnabled");
static_assert(sizeof(WBP_FurnitureShopCategory_C_SetButtonEnabled) == 0x000001, "Wrong size on WBP_FurnitureShopCategory_C_SetButtonEnabled");
static_assert(offsetof(WBP_FurnitureShopCategory_C_SetButtonEnabled, IsEnabled) == 0x000000, "Member 'WBP_FurnitureShopCategory_C_SetButtonEnabled::IsEnabled' has a wrong offset!");

// Function WBP_FurnitureShopCategory.WBP_FurnitureShopCategory_C.SetButtonSelected
// 0x002C (0x002C - 0x0000)
struct WBP_FurnitureShopCategory_C_SetButtonSelected final
{
public:
	bool                                          Param_bIsSelected;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0004(0x0014)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0018(0x0014)()
};
static_assert(alignof(WBP_FurnitureShopCategory_C_SetButtonSelected) == 0x000004, "Wrong alignment on WBP_FurnitureShopCategory_C_SetButtonSelected");
static_assert(sizeof(WBP_FurnitureShopCategory_C_SetButtonSelected) == 0x00002C, "Wrong size on WBP_FurnitureShopCategory_C_SetButtonSelected");
static_assert(offsetof(WBP_FurnitureShopCategory_C_SetButtonSelected, Param_bIsSelected) == 0x000000, "Member 'WBP_FurnitureShopCategory_C_SetButtonSelected::Param_bIsSelected' has a wrong offset!");
static_assert(offsetof(WBP_FurnitureShopCategory_C_SetButtonSelected, K2Node_MakeStruct_SlateColor) == 0x000004, "Member 'WBP_FurnitureShopCategory_C_SetButtonSelected::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WBP_FurnitureShopCategory_C_SetButtonSelected, K2Node_MakeStruct_SlateColor_1) == 0x000018, "Member 'WBP_FurnitureShopCategory_C_SetButtonSelected::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

}

