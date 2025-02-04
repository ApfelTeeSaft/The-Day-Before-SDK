#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_RepairRow

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "FItemInfo_structs.hpp"
#include "ContainerPickupsInfo_structs.hpp"


namespace SDK::Params
{

// Function WBP_RepairRow.WBP_RepairRow_C.DeselectAll
// 0x0020 (0x0020 - 0x0000)
struct WBP_RepairRow_C_DeselectAll final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_RepairWeapon_C*                    CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_RepairRow_C_DeselectAll) == 0x000008, "Wrong alignment on WBP_RepairRow_C_DeselectAll");
static_assert(sizeof(WBP_RepairRow_C_DeselectAll) == 0x000020, "Wrong size on WBP_RepairRow_C_DeselectAll");
static_assert(offsetof(WBP_RepairRow_C_DeselectAll, Temp_int_Array_Index_Variable) == 0x000000, "Member 'WBP_RepairRow_C_DeselectAll::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_DeselectAll, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WBP_RepairRow_C_DeselectAll::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_DeselectAll, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WBP_RepairRow_C_DeselectAll::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_DeselectAll, CallFunc_Array_Length_ReturnValue) == 0x00000C, "Member 'WBP_RepairRow_C_DeselectAll::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_DeselectAll, CallFunc_Array_Get_Item) == 0x000010, "Member 'WBP_RepairRow_C_DeselectAll::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_DeselectAll, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'WBP_RepairRow_C_DeselectAll::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_RepairRow.WBP_RepairRow_C.ExecuteUbergraph_WBP_RepairRow
// 0x0010 (0x0010 - 0x0000)
struct WBP_RepairRow_C_ExecuteUbergraph_WBP_RepairRow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_Category;                       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_RepairRow_C_ExecuteUbergraph_WBP_RepairRow) == 0x000004, "Wrong alignment on WBP_RepairRow_C_ExecuteUbergraph_WBP_RepairRow");
static_assert(sizeof(WBP_RepairRow_C_ExecuteUbergraph_WBP_RepairRow) == 0x000010, "Wrong size on WBP_RepairRow_C_ExecuteUbergraph_WBP_RepairRow");
static_assert(offsetof(WBP_RepairRow_C_ExecuteUbergraph_WBP_RepairRow, EntryPoint) == 0x000000, "Member 'WBP_RepairRow_C_ExecuteUbergraph_WBP_RepairRow::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_ExecuteUbergraph_WBP_RepairRow, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_RepairRow_C_ExecuteUbergraph_WBP_RepairRow::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_ExecuteUbergraph_WBP_RepairRow, K2Node_CustomEvent_Category) == 0x000008, "Member 'WBP_RepairRow_C_ExecuteUbergraph_WBP_RepairRow::K2Node_CustomEvent_Category' has a wrong offset!");

// Function WBP_RepairRow.WBP_RepairRow_C.FindItemSelect
// 0x0038 (0x0038 - 0x0000)
struct WBP_RepairRow_C_FindItemSelect final
{
public:
	class UWBP_RepairWeapon_C*                    SelectCurrent;                                     // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Array_Index;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_RepairWeapon_C*                    CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F[0x1];                                       // 0x002F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_RepairRow_C_FindItemSelect) == 0x000008, "Wrong alignment on WBP_RepairRow_C_FindItemSelect");
static_assert(sizeof(WBP_RepairRow_C_FindItemSelect) == 0x000038, "Wrong size on WBP_RepairRow_C_FindItemSelect");
static_assert(offsetof(WBP_RepairRow_C_FindItemSelect, SelectCurrent) == 0x000000, "Member 'WBP_RepairRow_C_FindItemSelect::SelectCurrent' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_FindItemSelect, Array_Index) == 0x000008, "Member 'WBP_RepairRow_C_FindItemSelect::Array_Index' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_FindItemSelect, Temp_bool_True_if_break_was_hit_Variable) == 0x00000C, "Member 'WBP_RepairRow_C_FindItemSelect::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_FindItemSelect, Temp_int_Array_Index_Variable) == 0x000010, "Member 'WBP_RepairRow_C_FindItemSelect::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_FindItemSelect, CallFunc_Not_PreBool_ReturnValue) == 0x000014, "Member 'WBP_RepairRow_C_FindItemSelect::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_FindItemSelect, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'WBP_RepairRow_C_FindItemSelect::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_FindItemSelect, CallFunc_Array_Get_Item) == 0x000020, "Member 'WBP_RepairRow_C_FindItemSelect::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_FindItemSelect, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'WBP_RepairRow_C_FindItemSelect::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_FindItemSelect, CallFunc_Less_IntInt_ReturnValue) == 0x00002C, "Member 'WBP_RepairRow_C_FindItemSelect::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_FindItemSelect, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x00002D, "Member 'WBP_RepairRow_C_FindItemSelect::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_FindItemSelect, CallFunc_BooleanAND_ReturnValue) == 0x00002E, "Member 'WBP_RepairRow_C_FindItemSelect::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_FindItemSelect, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'WBP_RepairRow_C_FindItemSelect::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_RepairRow.WBP_RepairRow_C.Init
// 0x0008 (0x0008 - 0x0000)
struct WBP_RepairRow_C_Init final
{
public:
	class FName                                   Category;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_RepairRow_C_Init) == 0x000004, "Wrong alignment on WBP_RepairRow_C_Init");
static_assert(sizeof(WBP_RepairRow_C_Init) == 0x000008, "Wrong size on WBP_RepairRow_C_Init");
static_assert(offsetof(WBP_RepairRow_C_Init, Category) == 0x000000, "Member 'WBP_RepairRow_C_Init::Category' has a wrong offset!");

// Function WBP_RepairRow.WBP_RepairRow_C.InitWeapon
// 0x0330 (0x0330 - 0x0000)
struct WBP_RepairRow_C_InitWeapon final
{
public:
	class FName                                   Category;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x2];                                        // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E[0x2];                                       // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FContainerPickupsInfo>          CallFunc_getItemsInventory_ContainerItems;         // 0x0038(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<struct FContainerPickupsInfo>          CallFunc_getItemsInventory_ContainersData;         // 0x0048(0x0010)(ReferenceParm, ContainsInstancedReference)
	class ASurvPC_C*                              K2Node_DynamicCast_AsSurv_PC;                      // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FContainerPickupsInfo                  CallFunc_Array_Get_Item;                           // 0x0068(0x0068)(ContainsInstancedReference, HasGetValueTypeHash)
	struct FFItemInfo                             CallFunc_ConvertPickupItemToItemInfoFunc_ItemInfo; // 0x00D0(0x0220)(ContainsInstancedReference, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x02F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x02F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x02F5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x02F6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x02F7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x02F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x02F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x02FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x02FB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2FC[0x4];                                      // 0x02FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x0300(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_RepairWeapon_C*                    CallFunc_Create_ReturnValue;                       // 0x0308(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0310(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_314[0x4];                                      // 0x0314(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0318(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       K2Node_DynamicCast_AsVertical_Box_Slot;            // 0x0320(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0328(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_RepairRow_C_InitWeapon) == 0x000008, "Wrong alignment on WBP_RepairRow_C_InitWeapon");
static_assert(sizeof(WBP_RepairRow_C_InitWeapon) == 0x000330, "Wrong size on WBP_RepairRow_C_InitWeapon");
static_assert(offsetof(WBP_RepairRow_C_InitWeapon, Category) == 0x000000, "Member 'WBP_RepairRow_C_InitWeapon::Category' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_InitWeapon, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000008, "Member 'WBP_RepairRow_C_InitWeapon::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_InitWeapon, CallFunc_EqualEqual_NameName_ReturnValue_1) == 0x000009, "Member 'WBP_RepairRow_C_InitWeapon::CallFunc_EqualEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_InitWeapon, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'WBP_RepairRow_C_InitWeapon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_InitWeapon, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'WBP_RepairRow_C_InitWeapon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_InitWeapon, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'WBP_RepairRow_C_InitWeapon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_InitWeapon, K2Node_MakeStruct_Margin) == 0x000018, "Member 'WBP_RepairRow_C_InitWeapon::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_InitWeapon, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'WBP_RepairRow_C_InitWeapon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_InitWeapon, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00002C, "Member 'WBP_RepairRow_C_InitWeapon::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_InitWeapon, CallFunc_Not_PreBool_ReturnValue) == 0x00002D, "Member 'WBP_RepairRow_C_InitWeapon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_InitWeapon, CallFunc_GetOwningPlayer_ReturnValue) == 0x000030, "Member 'WBP_RepairRow_C_InitWeapon::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_InitWeapon, CallFunc_getItemsInventory_ContainerItems) == 0x000038, "Member 'WBP_RepairRow_C_InitWeapon::CallFunc_getItemsInventory_ContainerItems' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_InitWeapon, CallFunc_getItemsInventory_ContainersData) == 0x000048, "Member 'WBP_RepairRow_C_InitWeapon::CallFunc_getItemsInventory_ContainersData' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_InitWeapon, K2Node_DynamicCast_AsSurv_PC) == 0x000058, "Member 'WBP_RepairRow_C_InitWeapon::K2Node_DynamicCast_AsSurv_PC' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_InitWeapon, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'WBP_RepairRow_C_InitWeapon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_InitWeapon, CallFunc_Array_Get_Item) == 0x000068, "Member 'WBP_RepairRow_C_InitWeapon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_InitWeapon, CallFunc_ConvertPickupItemToItemInfoFunc_ItemInfo) == 0x0000D0, "Member 'WBP_RepairRow_C_InitWeapon::CallFunc_ConvertPickupItemToItemInfoFunc_ItemInfo' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_InitWeapon, CallFunc_Array_Length_ReturnValue_1) == 0x0002F0, "Member 'WBP_RepairRow_C_InitWeapon::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_InitWeapon, CallFunc_Less_IntInt_ReturnValue) == 0x0002F4, "Member 'WBP_RepairRow_C_InitWeapon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_InitWeapon, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0002F5, "Member 'WBP_RepairRow_C_InitWeapon::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_InitWeapon, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0002F6, "Member 'WBP_RepairRow_C_InitWeapon::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_InitWeapon, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0002F7, "Member 'WBP_RepairRow_C_InitWeapon::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_InitWeapon, K2Node_SwitchEnum_CmpSuccess) == 0x0002F8, "Member 'WBP_RepairRow_C_InitWeapon::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_InitWeapon, CallFunc_BooleanOR_ReturnValue) == 0x0002F9, "Member 'WBP_RepairRow_C_InitWeapon::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_InitWeapon, K2Node_SwitchEnum_CmpSuccess_1) == 0x0002FA, "Member 'WBP_RepairRow_C_InitWeapon::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_InitWeapon, CallFunc_BooleanOR_ReturnValue_1) == 0x0002FB, "Member 'WBP_RepairRow_C_InitWeapon::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_InitWeapon, CallFunc_GetOwningPlayer_ReturnValue_1) == 0x000300, "Member 'WBP_RepairRow_C_InitWeapon::CallFunc_GetOwningPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_InitWeapon, CallFunc_Create_ReturnValue) == 0x000308, "Member 'WBP_RepairRow_C_InitWeapon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_InitWeapon, CallFunc_Array_AddUnique_ReturnValue) == 0x000310, "Member 'WBP_RepairRow_C_InitWeapon::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_InitWeapon, CallFunc_AddChild_ReturnValue) == 0x000318, "Member 'WBP_RepairRow_C_InitWeapon::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_InitWeapon, K2Node_DynamicCast_AsVertical_Box_Slot) == 0x000320, "Member 'WBP_RepairRow_C_InitWeapon::K2Node_DynamicCast_AsVertical_Box_Slot' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_InitWeapon, K2Node_DynamicCast_bSuccess_1) == 0x000328, "Member 'WBP_RepairRow_C_InitWeapon::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function WBP_RepairRow.WBP_RepairRow_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_RepairRow_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_RepairRow_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_RepairRow_C_PreConstruct");
static_assert(sizeof(WBP_RepairRow_C_PreConstruct) == 0x000001, "Wrong size on WBP_RepairRow_C_PreConstruct");
static_assert(offsetof(WBP_RepairRow_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_RepairRow_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_RepairRow.WBP_RepairRow_C.UpdateInfo
// 0x0020 (0x0020 - 0x0000)
struct WBP_RepairRow_C_UpdateInfo final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_RepairWeapon_C*                    CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_RepairRow_C_UpdateInfo) == 0x000008, "Wrong alignment on WBP_RepairRow_C_UpdateInfo");
static_assert(sizeof(WBP_RepairRow_C_UpdateInfo) == 0x000020, "Wrong size on WBP_RepairRow_C_UpdateInfo");
static_assert(offsetof(WBP_RepairRow_C_UpdateInfo, Temp_int_Array_Index_Variable) == 0x000000, "Member 'WBP_RepairRow_C_UpdateInfo::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_UpdateInfo, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WBP_RepairRow_C_UpdateInfo::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_UpdateInfo, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WBP_RepairRow_C_UpdateInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_UpdateInfo, CallFunc_Array_Length_ReturnValue) == 0x00000C, "Member 'WBP_RepairRow_C_UpdateInfo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_UpdateInfo, CallFunc_Array_Get_Item) == 0x000010, "Member 'WBP_RepairRow_C_UpdateInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_RepairRow_C_UpdateInfo, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'WBP_RepairRow_C_UpdateInfo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

