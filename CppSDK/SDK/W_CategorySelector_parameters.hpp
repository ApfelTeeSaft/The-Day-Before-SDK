#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_CategorySelector

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function W_CategorySelector.W_CategorySelector_C.CreateMark
// 0x0038 (0x0038 - 0x0000)
struct W_CategorySelector_C_CreateMark final
{
public:
	class UImage*                                 MarkWidget;                                        // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FSlateChildSize                        K2Node_MakeStruct_SlateChildSize;                  // 0x0008(0x0008)(NoDestructor)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     K2Node_DynamicCast_AsHorizontal_Box_Slot;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UImage*                                 CallFunc_SpawnObject_ReturnValue;                  // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CategorySelector_C_CreateMark) == 0x000008, "Wrong alignment on W_CategorySelector_C_CreateMark");
static_assert(sizeof(W_CategorySelector_C_CreateMark) == 0x000038, "Wrong size on W_CategorySelector_C_CreateMark");
static_assert(offsetof(W_CategorySelector_C_CreateMark, MarkWidget) == 0x000000, "Member 'W_CategorySelector_C_CreateMark::MarkWidget' has a wrong offset!");
static_assert(offsetof(W_CategorySelector_C_CreateMark, K2Node_MakeStruct_SlateChildSize) == 0x000008, "Member 'W_CategorySelector_C_CreateMark::K2Node_MakeStruct_SlateChildSize' has a wrong offset!");
static_assert(offsetof(W_CategorySelector_C_CreateMark, CallFunc_Array_Add_ReturnValue) == 0x000010, "Member 'W_CategorySelector_C_CreateMark::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CategorySelector_C_CreateMark, CallFunc_AddChild_ReturnValue) == 0x000018, "Member 'W_CategorySelector_C_CreateMark::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CategorySelector_C_CreateMark, K2Node_DynamicCast_AsHorizontal_Box_Slot) == 0x000020, "Member 'W_CategorySelector_C_CreateMark::K2Node_DynamicCast_AsHorizontal_Box_Slot' has a wrong offset!");
static_assert(offsetof(W_CategorySelector_C_CreateMark, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'W_CategorySelector_C_CreateMark::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(W_CategorySelector_C_CreateMark, CallFunc_SpawnObject_ReturnValue) == 0x000030, "Member 'W_CategorySelector_C_CreateMark::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");

// Function W_CategorySelector.W_CategorySelector_C.ExecuteUbergraph_W_CategorySelector
// 0x0004 (0x0004 - 0x0000)
struct W_CategorySelector_C_ExecuteUbergraph_W_CategorySelector final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CategorySelector_C_ExecuteUbergraph_W_CategorySelector) == 0x000004, "Wrong alignment on W_CategorySelector_C_ExecuteUbergraph_W_CategorySelector");
static_assert(sizeof(W_CategorySelector_C_ExecuteUbergraph_W_CategorySelector) == 0x000004, "Wrong size on W_CategorySelector_C_ExecuteUbergraph_W_CategorySelector");
static_assert(offsetof(W_CategorySelector_C_ExecuteUbergraph_W_CategorySelector, EntryPoint) == 0x000000, "Member 'W_CategorySelector_C_ExecuteUbergraph_W_CategorySelector::EntryPoint' has a wrong offset!");

// Function W_CategorySelector.W_CategorySelector_C.GetNumCategories
// 0x0008 (0x0008 - 0x0000)
struct W_CategorySelector_C_GetNumCategories final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CategorySelector_C_GetNumCategories) == 0x000004, "Wrong alignment on W_CategorySelector_C_GetNumCategories");
static_assert(sizeof(W_CategorySelector_C_GetNumCategories) == 0x000008, "Wrong size on W_CategorySelector_C_GetNumCategories");
static_assert(offsetof(W_CategorySelector_C_GetNumCategories, ReturnValue) == 0x000000, "Member 'W_CategorySelector_C_GetNumCategories::ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CategorySelector_C_GetNumCategories, CallFunc_Array_Length_ReturnValue) == 0x000004, "Member 'W_CategorySelector_C_GetNumCategories::CallFunc_Array_Length_ReturnValue' has a wrong offset!");

// Function W_CategorySelector.W_CategorySelector_C.Init
// 0x0014 (0x0014 - 0x0000)
struct W_CategorySelector_C_Init final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CategorySelector_C_Init) == 0x000004, "Wrong alignment on W_CategorySelector_C_Init");
static_assert(sizeof(W_CategorySelector_C_Init) == 0x000014, "Wrong size on W_CategorySelector_C_Init");
static_assert(offsetof(W_CategorySelector_C_Init, Temp_int_Array_Index_Variable) == 0x000000, "Member 'W_CategorySelector_C_Init::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(W_CategorySelector_C_Init, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'W_CategorySelector_C_Init::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(W_CategorySelector_C_Init, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'W_CategorySelector_C_Init::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CategorySelector_C_Init, CallFunc_Array_Length_ReturnValue) == 0x00000C, "Member 'W_CategorySelector_C_Init::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_CategorySelector_C_Init, CallFunc_Less_IntInt_ReturnValue) == 0x000010, "Member 'W_CategorySelector_C_Init::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function W_CategorySelector.W_CategorySelector_C.NextCategory
// 0x0004 (0x0004 - 0x0000)
struct W_CategorySelector_C_NextCategory final
{
public:
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CategorySelector_C_NextCategory) == 0x000004, "Wrong alignment on W_CategorySelector_C_NextCategory");
static_assert(sizeof(W_CategorySelector_C_NextCategory) == 0x000004, "Wrong size on W_CategorySelector_C_NextCategory");
static_assert(offsetof(W_CategorySelector_C_NextCategory, CallFunc_Add_IntInt_ReturnValue) == 0x000000, "Member 'W_CategorySelector_C_NextCategory::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function W_CategorySelector.W_CategorySelector_C.OnCategoryChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct W_CategorySelector_C_OnCategoryChanged__DelegateSignature final
{
public:
	int32                                         CategoryIndex;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CategorySelector_C_OnCategoryChanged__DelegateSignature) == 0x000004, "Wrong alignment on W_CategorySelector_C_OnCategoryChanged__DelegateSignature");
static_assert(sizeof(W_CategorySelector_C_OnCategoryChanged__DelegateSignature) == 0x000004, "Wrong size on W_CategorySelector_C_OnCategoryChanged__DelegateSignature");
static_assert(offsetof(W_CategorySelector_C_OnCategoryChanged__DelegateSignature, CategoryIndex) == 0x000000, "Member 'W_CategorySelector_C_OnCategoryChanged__DelegateSignature::CategoryIndex' has a wrong offset!");

// Function W_CategorySelector.W_CategorySelector_C.PrevCategory
// 0x0004 (0x0004 - 0x0000)
struct W_CategorySelector_C_PrevCategory final
{
public:
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CategorySelector_C_PrevCategory) == 0x000004, "Wrong alignment on W_CategorySelector_C_PrevCategory");
static_assert(sizeof(W_CategorySelector_C_PrevCategory) == 0x000004, "Wrong size on W_CategorySelector_C_PrevCategory");
static_assert(offsetof(W_CategorySelector_C_PrevCategory, CallFunc_Add_IntInt_ReturnValue) == 0x000000, "Member 'W_CategorySelector_C_PrevCategory::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function W_CategorySelector.W_CategorySelector_C.SelectCategory
// 0x0020 (0x0020 - 0x0000)
struct W_CategorySelector_C_SelectCategory final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UImage*                                 CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 CallFunc_Array_Get_Item_1;                         // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CategorySelector_C_SelectCategory) == 0x000008, "Wrong alignment on W_CategorySelector_C_SelectCategory");
static_assert(sizeof(W_CategorySelector_C_SelectCategory) == 0x000020, "Wrong size on W_CategorySelector_C_SelectCategory");
static_assert(offsetof(W_CategorySelector_C_SelectCategory, Param_Index) == 0x000000, "Member 'W_CategorySelector_C_SelectCategory::Param_Index' has a wrong offset!");
static_assert(offsetof(W_CategorySelector_C_SelectCategory, CallFunc_Array_Get_Item) == 0x000008, "Member 'W_CategorySelector_C_SelectCategory::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(W_CategorySelector_C_SelectCategory, CallFunc_Array_Get_Item_1) == 0x000010, "Member 'W_CategorySelector_C_SelectCategory::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(W_CategorySelector_C_SelectCategory, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000018, "Member 'W_CategorySelector_C_SelectCategory::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");

// Function W_CategorySelector.W_CategorySelector_C.SetCategoryArray
// 0x0010 (0x0010 - 0x0000)
struct W_CategorySelector_C_SetCategoryArray final
{
public:
	TArray<class FText>                           CategoriesArray;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(W_CategorySelector_C_SetCategoryArray) == 0x000008, "Wrong alignment on W_CategorySelector_C_SetCategoryArray");
static_assert(sizeof(W_CategorySelector_C_SetCategoryArray) == 0x000010, "Wrong size on W_CategorySelector_C_SetCategoryArray");
static_assert(offsetof(W_CategorySelector_C_SetCategoryArray, CategoriesArray) == 0x000000, "Member 'W_CategorySelector_C_SetCategoryArray::CategoriesArray' has a wrong offset!");

}
