#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TakeItemTutorial

#include "Basic.hpp"

#include "ContainerPickupsInfo_structs.hpp"
#include "FItemInfo_structs.hpp"
#include "AttachmentInfo_structs.hpp"
#include "PickupAttachments_structs.hpp"


namespace SDK::Params
{

// Function TakeItemTutorial.TakeItemTutorial_C.CompletetQuest_Serv
// 0x0008 (0x0008 - 0x0000)
struct TakeItemTutorial_C_CompletetQuest_Serv final
{
public:
	class APlayerController*                      PlayerController;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TakeItemTutorial_C_CompletetQuest_Serv) == 0x000008, "Wrong alignment on TakeItemTutorial_C_CompletetQuest_Serv");
static_assert(sizeof(TakeItemTutorial_C_CompletetQuest_Serv) == 0x000008, "Wrong size on TakeItemTutorial_C_CompletetQuest_Serv");
static_assert(offsetof(TakeItemTutorial_C_CompletetQuest_Serv, PlayerController) == 0x000000, "Member 'TakeItemTutorial_C_CompletetQuest_Serv::PlayerController' has a wrong offset!");

// Function TakeItemTutorial.TakeItemTutorial_C.ExecuteAction
// 0x0010 (0x0010 - 0x0000)
struct TakeItemTutorial_C_ExecuteAction final
{
public:
	class APlayerController*                      PlayerController;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAGSGraphNode*                          NodeOwner;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TakeItemTutorial_C_ExecuteAction) == 0x000008, "Wrong alignment on TakeItemTutorial_C_ExecuteAction");
static_assert(sizeof(TakeItemTutorial_C_ExecuteAction) == 0x000010, "Wrong size on TakeItemTutorial_C_ExecuteAction");
static_assert(offsetof(TakeItemTutorial_C_ExecuteAction, PlayerController) == 0x000000, "Member 'TakeItemTutorial_C_ExecuteAction::PlayerController' has a wrong offset!");
static_assert(offsetof(TakeItemTutorial_C_ExecuteAction, NodeOwner) == 0x000008, "Member 'TakeItemTutorial_C_ExecuteAction::NodeOwner' has a wrong offset!");

// Function TakeItemTutorial.TakeItemTutorial_C.ExecuteUbergraph_TakeItemTutorial
// 0x0760 (0x0760 - 0x0000)
struct TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CallFunc_Map_Values_Values;                        // 0x0008(0x0010)(ReferenceParm)
	TArray<class FName>                           CallFunc_Map_Keys_Keys;                            // 0x0018(0x0010)(ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFItemInfo                             CallFunc_GetDataTableRowFromName_OutRow;           // 0x0038(0x0220)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_259[0x7];                                      // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFItemInfo                             K2Node_SetFieldsInStruct_StructOut;                // 0x0260(0x0220)(ContainsInstancedReference, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0480(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0484(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0485(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_486[0x2];                                      // 0x0486(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0488(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48C[0x4];                                      // 0x048C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      K2Node_Event_playerController;                     // 0x0490(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAGSGraphNode*                          K2Node_Event_nodeOwner;                            // 0x0498(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASurvPC_C*                              K2Node_DynamicCast_AsSurv_PC;                      // 0x04A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x04A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x04A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AA[0x6];                                      // 0x04AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FContainerPickupsInfo>          K2Node_MakeArray_Array;                            // 0x04B0(0x0010)(ReferenceParm, ContainsInstancedReference)
	class APlayerController*                      K2Node_CustomEvent_PlayerController;               // 0x04C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAttachmentInfo                        K2Node_MakeStruct_AttachmentInfo;                  // 0x04C8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASurvPC_C*                              K2Node_DynamicCast_AsSurv_PC_1;                    // 0x04D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x04E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E1[0x7];                                      // 0x04E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_SurvPC_C>         CallFunc_GetPlayerRef_self_CastInput;              // 0x04E8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASurvivalPlayer_C*                      CallFunc_GetPlayerRef_SurvivalPlayer;              // 0x04F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_JSAddItem_Ad;                             // 0x0500(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0501(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_502[0x2];                                      // 0x0502(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAttachmentInfo                        K2Node_MakeStruct_AttachmentInfo_1;                // 0x0504(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_514[0x4];                                      // 0x0514(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FAttachmentInfo>                K2Node_MakeArray_Array_1;                          // 0x0518(0x0010)(ReferenceParm)
	struct FPickupAttachments                     K2Node_MakeStruct_PickupAttachments;               // 0x0528(0x0010)(HasGetValueTypeHash)
	struct FFItemInfo                             K2Node_SetFieldsInStruct_StructOut_1;              // 0x0538(0x0220)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_JSAddItem_Ad_1;                           // 0x0758(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial) == 0x000008, "Wrong alignment on TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial");
static_assert(sizeof(TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial) == 0x000760, "Wrong size on TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial");
static_assert(offsetof(TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial, EntryPoint) == 0x000000, "Member 'TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial::EntryPoint' has a wrong offset!");
static_assert(offsetof(TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial, CallFunc_Map_Values_Values) == 0x000008, "Member 'TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial::CallFunc_Map_Values_Values' has a wrong offset!");
static_assert(offsetof(TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial, CallFunc_Map_Keys_Keys) == 0x000018, "Member 'TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial, Temp_int_Array_Index_Variable) == 0x000028, "Member 'TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial, CallFunc_Array_Get_Item) == 0x000030, "Member 'TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial, CallFunc_GetDataTableRowFromName_OutRow) == 0x000038, "Member 'TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000258, "Member 'TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial, K2Node_SetFieldsInStruct_StructOut) == 0x000260, "Member 'TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");
static_assert(offsetof(TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial, Temp_int_Loop_Counter_Variable) == 0x000480, "Member 'TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000484, "Member 'TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial, CallFunc_Less_IntInt_ReturnValue) == 0x000485, "Member 'TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial, CallFunc_Add_IntInt_ReturnValue) == 0x000488, "Member 'TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial, K2Node_Event_playerController) == 0x000490, "Member 'TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial::K2Node_Event_playerController' has a wrong offset!");
static_assert(offsetof(TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial, K2Node_Event_nodeOwner) == 0x000498, "Member 'TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial::K2Node_Event_nodeOwner' has a wrong offset!");
static_assert(offsetof(TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial, K2Node_DynamicCast_AsSurv_PC) == 0x0004A0, "Member 'TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial::K2Node_DynamicCast_AsSurv_PC' has a wrong offset!");
static_assert(offsetof(TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial, K2Node_DynamicCast_bSuccess) == 0x0004A8, "Member 'TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial, CallFunc_IsValid_ReturnValue) == 0x0004A9, "Member 'TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial, K2Node_MakeArray_Array) == 0x0004B0, "Member 'TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial, K2Node_CustomEvent_PlayerController) == 0x0004C0, "Member 'TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial::K2Node_CustomEvent_PlayerController' has a wrong offset!");
static_assert(offsetof(TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial, K2Node_MakeStruct_AttachmentInfo) == 0x0004C8, "Member 'TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial::K2Node_MakeStruct_AttachmentInfo' has a wrong offset!");
static_assert(offsetof(TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial, K2Node_DynamicCast_AsSurv_PC_1) == 0x0004D8, "Member 'TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial::K2Node_DynamicCast_AsSurv_PC_1' has a wrong offset!");
static_assert(offsetof(TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial, K2Node_DynamicCast_bSuccess_1) == 0x0004E0, "Member 'TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial, CallFunc_GetPlayerRef_self_CastInput) == 0x0004E8, "Member 'TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial::CallFunc_GetPlayerRef_self_CastInput' has a wrong offset!");
static_assert(offsetof(TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial, CallFunc_GetPlayerRef_SurvivalPlayer) == 0x0004F8, "Member 'TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial::CallFunc_GetPlayerRef_SurvivalPlayer' has a wrong offset!");
static_assert(offsetof(TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial, CallFunc_JSAddItem_Ad) == 0x000500, "Member 'TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial::CallFunc_JSAddItem_Ad' has a wrong offset!");
static_assert(offsetof(TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial, CallFunc_IsEmpty_ReturnValue) == 0x000501, "Member 'TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial, K2Node_MakeStruct_AttachmentInfo_1) == 0x000504, "Member 'TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial::K2Node_MakeStruct_AttachmentInfo_1' has a wrong offset!");
static_assert(offsetof(TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial, K2Node_MakeArray_Array_1) == 0x000518, "Member 'TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial, K2Node_MakeStruct_PickupAttachments) == 0x000528, "Member 'TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial::K2Node_MakeStruct_PickupAttachments' has a wrong offset!");
static_assert(offsetof(TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial, K2Node_SetFieldsInStruct_StructOut_1) == 0x000538, "Member 'TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial::K2Node_SetFieldsInStruct_StructOut_1' has a wrong offset!");
static_assert(offsetof(TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial, CallFunc_JSAddItem_Ad_1) == 0x000758, "Member 'TakeItemTutorial_C_ExecuteUbergraph_TakeItemTutorial::CallFunc_JSAddItem_Ad_1' has a wrong offset!");

}

