#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_QuestItemOld

#include "Basic.hpp"

#include "E_ActorType_structs.hpp"
#include "E_InteractType_structs.hpp"
#include "FItemInfo_structs.hpp"


namespace SDK::Params
{

// Function BP_QuestItemOld.BP_QuestItemOld_C.CreateItem
// 0x0008 (0x0008 - 0x0000)
struct BP_QuestItemOld_C_CreateItem final
{
public:
	class FName                                   Item_ID;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_QuestItemOld_C_CreateItem) == 0x000004, "Wrong alignment on BP_QuestItemOld_C_CreateItem");
static_assert(sizeof(BP_QuestItemOld_C_CreateItem) == 0x000008, "Wrong size on BP_QuestItemOld_C_CreateItem");
static_assert(offsetof(BP_QuestItemOld_C_CreateItem, Item_ID) == 0x000000, "Member 'BP_QuestItemOld_C_CreateItem::Item_ID' has a wrong offset!");

// Function BP_QuestItemOld.BP_QuestItemOld_C.ExecuteUbergraph_BP_QuestItemOld
// 0x05C0 (0x05C0 - 0x0000)
struct BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            K2Node_DynamicCast_AsStatic_Mesh;                  // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_Player_8;                             // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_Player_7;                             // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_Player_6;                             // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_Player_5;                             // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_SitIndex;                             // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_SkipAnimation;                        // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_Player_4;                             // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_Player_3;                             // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_Player_2;                             // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_Player_1;                             // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_Visible_1;                            // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_Visible;                              // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72[0x6];                                       // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_MedicShop_C*                        CallFunc_GetActorOfClass_ReturnValue;              // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_GameHUD_C>        K2Node_DynamicCast_AsBPI_Game_HUD;                 // 0x0090(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_GameHUD_C>        K2Node_DynamicCast_AsBPI_Game_HUD_1;               // 0x00A8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoveMark_Success;                       // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AddMark_Success;                          // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BB[0x5];                                       // 0x00BB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_Mark_C*                              CallFunc_AddMark_WMark;                            // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue_1;                     // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_GameHUD_C>        K2Node_DynamicCast_AsBPI_Game_HUD_2;               // 0x00E0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue_2;                     // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AddMark_Success_1;                        // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_101[0x7];                                      // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_Mark_C*                              CallFunc_AddMark_WMark_1;                          // 0x0108(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_GameHUD_C>        K2Node_DynamicCast_AsBPI_Game_HUD_3;               // 0x0110(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoveMark_Success_1;                     // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_122[0x6];                                      // 0x0122(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_Player;                               // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_Item_ID;                        // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_GeneralInterface_C> K2Node_DynamicCast_AsBPI_General_Interface;        // 0x0138(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14A[0x6];                                      // 0x014A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFItemInfo                             CallFunc_GetInfo_ItemInfo;                         // 0x0150(0x0220)(ContainsInstancedReference, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0370(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_374[0x4];                                      // 0x0374(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0378(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0388(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFItemInfo                             CallFunc_GetInfo_ItemInfo_1;                       // 0x0398(0x0220)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_PlayerAddItem_Added;                      // 0x05B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetUniqueID_Success;                      // 0x05B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld) == 0x000008, "Wrong alignment on BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld");
static_assert(sizeof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld) == 0x0005C0, "Wrong size on BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, EntryPoint) == 0x000000, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, K2Node_CustomEvent_Loaded) == 0x000008, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, Temp_object_Variable) == 0x000010, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, K2Node_DynamicCast_AsStatic_Mesh) == 0x000018, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::K2Node_DynamicCast_AsStatic_Mesh' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, K2Node_Event_Player_8) == 0x000028, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::K2Node_Event_Player_8' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, K2Node_Event_Player_7) == 0x000030, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::K2Node_Event_Player_7' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, K2Node_Event_Player_6) == 0x000038, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::K2Node_Event_Player_6' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, K2Node_Event_Player_5) == 0x000040, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::K2Node_Event_Player_5' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, K2Node_Event_SitIndex) == 0x000048, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::K2Node_Event_SitIndex' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, K2Node_Event_SkipAnimation) == 0x00004C, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::K2Node_Event_SkipAnimation' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, K2Node_Event_Player_4) == 0x000050, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::K2Node_Event_Player_4' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, K2Node_Event_Player_3) == 0x000058, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::K2Node_Event_Player_3' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, K2Node_Event_Player_2) == 0x000060, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::K2Node_Event_Player_2' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, K2Node_Event_Player_1) == 0x000068, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::K2Node_Event_Player_1' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, K2Node_Event_Visible_1) == 0x000070, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::K2Node_Event_Visible_1' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, K2Node_Event_Visible) == 0x000071, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::K2Node_Event_Visible' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, CallFunc_GetPlayerController_ReturnValue) == 0x000078, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, CallFunc_GetActorOfClass_ReturnValue) == 0x000080, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::CallFunc_GetActorOfClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, CallFunc_GetHUD_ReturnValue) == 0x000088, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, K2Node_DynamicCast_AsBPI_Game_HUD) == 0x000090, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::K2Node_DynamicCast_AsBPI_Game_HUD' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, K2Node_DynamicCast_bSuccess_1) == 0x0000A0, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, K2Node_DynamicCast_AsBPI_Game_HUD_1) == 0x0000A8, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::K2Node_DynamicCast_AsBPI_Game_HUD_1' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, K2Node_DynamicCast_bSuccess_2) == 0x0000B8, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, CallFunc_RemoveMark_Success) == 0x0000B9, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::CallFunc_RemoveMark_Success' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, CallFunc_AddMark_Success) == 0x0000BA, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::CallFunc_AddMark_Success' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, CallFunc_AddMark_WMark) == 0x0000C0, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::CallFunc_AddMark_WMark' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, CallFunc_GetPlayerController_ReturnValue_1) == 0x0000C8, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, CallFunc_GetHUD_ReturnValue_1) == 0x0000D0, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::CallFunc_GetHUD_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, CallFunc_GetPlayerController_ReturnValue_2) == 0x0000D8, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, K2Node_DynamicCast_AsBPI_Game_HUD_2) == 0x0000E0, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::K2Node_DynamicCast_AsBPI_Game_HUD_2' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, K2Node_DynamicCast_bSuccess_3) == 0x0000F0, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, CallFunc_GetHUD_ReturnValue_2) == 0x0000F8, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::CallFunc_GetHUD_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, CallFunc_AddMark_Success_1) == 0x000100, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::CallFunc_AddMark_Success_1' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, CallFunc_AddMark_WMark_1) == 0x000108, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::CallFunc_AddMark_WMark_1' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, K2Node_DynamicCast_AsBPI_Game_HUD_3) == 0x000110, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::K2Node_DynamicCast_AsBPI_Game_HUD_3' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, K2Node_DynamicCast_bSuccess_4) == 0x000120, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, CallFunc_RemoveMark_Success_1) == 0x000121, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::CallFunc_RemoveMark_Success_1' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, K2Node_Event_Player) == 0x000128, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::K2Node_Event_Player' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, K2Node_CustomEvent_Item_ID) == 0x000130, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::K2Node_CustomEvent_Item_ID' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, K2Node_DynamicCast_AsBPI_General_Interface) == 0x000138, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::K2Node_DynamicCast_AsBPI_General_Interface' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, K2Node_DynamicCast_bSuccess_5) == 0x000148, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, CallFunc_SetStaticMesh_ReturnValue) == 0x000149, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, CallFunc_GetInfo_ItemInfo) == 0x000150, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::CallFunc_GetInfo_ItemInfo' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, CallFunc_Add_IntInt_ReturnValue) == 0x000370, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, CallFunc_Conv_IntToString_ReturnValue) == 0x000378, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, K2Node_CreateDelegate_OutputDelegate) == 0x000388, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, CallFunc_GetInfo_ItemInfo_1) == 0x000398, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::CallFunc_GetInfo_ItemInfo_1' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, CallFunc_PlayerAddItem_Added) == 0x0005B8, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::CallFunc_PlayerAddItem_Added' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld, CallFunc_SetUniqueID_Success) == 0x0005B9, "Member 'BP_QuestItemOld_C_ExecuteUbergraph_BP_QuestItemOld::CallFunc_SetUniqueID_Success' has a wrong offset!");

// Function BP_QuestItemOld.BP_QuestItemOld_C.GetActorType
// 0x0001 (0x0001 - 0x0000)
struct BP_QuestItemOld_C_GetActorType final
{
public:
	E_ActorType                                   ActorType;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_QuestItemOld_C_GetActorType) == 0x000001, "Wrong alignment on BP_QuestItemOld_C_GetActorType");
static_assert(sizeof(BP_QuestItemOld_C_GetActorType) == 0x000001, "Wrong size on BP_QuestItemOld_C_GetActorType");
static_assert(offsetof(BP_QuestItemOld_C_GetActorType, ActorType) == 0x000000, "Member 'BP_QuestItemOld_C_GetActorType::ActorType' has a wrong offset!");

// Function BP_QuestItemOld.BP_QuestItemOld_C.IsLocked?
// 0x0001 (0x0001 - 0x0000)
struct BP_QuestItemOld_C_IsLocked_ final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_QuestItemOld_C_IsLocked_) == 0x000001, "Wrong alignment on BP_QuestItemOld_C_IsLocked_");
static_assert(sizeof(BP_QuestItemOld_C_IsLocked_) == 0x000001, "Wrong size on BP_QuestItemOld_C_IsLocked_");
static_assert(offsetof(BP_QuestItemOld_C_IsLocked_, Result) == 0x000000, "Member 'BP_QuestItemOld_C_IsLocked_::Result' has a wrong offset!");

// Function BP_QuestItemOld.BP_QuestItemOld_C.OnBeginInteract
// 0x0008 (0x0008 - 0x0000)
struct BP_QuestItemOld_C_OnBeginInteract final
{
public:
	class APawn*                                  Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_QuestItemOld_C_OnBeginInteract) == 0x000008, "Wrong alignment on BP_QuestItemOld_C_OnBeginInteract");
static_assert(sizeof(BP_QuestItemOld_C_OnBeginInteract) == 0x000008, "Wrong size on BP_QuestItemOld_C_OnBeginInteract");
static_assert(offsetof(BP_QuestItemOld_C_OnBeginInteract, Player) == 0x000000, "Member 'BP_QuestItemOld_C_OnBeginInteract::Player' has a wrong offset!");

// Function BP_QuestItemOld.BP_QuestItemOld_C.OnFocused
// 0x0058 (0x0058 - 0x0000)
struct BP_QuestItemOld_C_OnFocused final
{
public:
	class APawn*                                  Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 HighlightActor;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UActorComponent*                        HighlightActorComponent;                           // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	E_InteractType                                InteractType;                                      // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        LateTime;                                          // 0x0020(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_GameHUD_C>        K2Node_DynamicCast_AsBPI_Game_HUD;                 // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIW_PlayerMain_C*                      CallFunc_GetGUI_GUI;                               // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_QuestItemOld_C_OnFocused) == 0x000008, "Wrong alignment on BP_QuestItemOld_C_OnFocused");
static_assert(sizeof(BP_QuestItemOld_C_OnFocused) == 0x000058, "Wrong size on BP_QuestItemOld_C_OnFocused");
static_assert(offsetof(BP_QuestItemOld_C_OnFocused, Player) == 0x000000, "Member 'BP_QuestItemOld_C_OnFocused::Player' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_OnFocused, HighlightActor) == 0x000008, "Member 'BP_QuestItemOld_C_OnFocused::HighlightActor' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_OnFocused, HighlightActorComponent) == 0x000010, "Member 'BP_QuestItemOld_C_OnFocused::HighlightActorComponent' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_OnFocused, InteractType) == 0x000018, "Member 'BP_QuestItemOld_C_OnFocused::InteractType' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_OnFocused, LateTime) == 0x000020, "Member 'BP_QuestItemOld_C_OnFocused::LateTime' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_OnFocused, CallFunc_GetPlayerController_ReturnValue) == 0x000028, "Member 'BP_QuestItemOld_C_OnFocused::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_OnFocused, CallFunc_GetHUD_ReturnValue) == 0x000030, "Member 'BP_QuestItemOld_C_OnFocused::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_OnFocused, K2Node_DynamicCast_AsBPI_Game_HUD) == 0x000038, "Member 'BP_QuestItemOld_C_OnFocused::K2Node_DynamicCast_AsBPI_Game_HUD' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_OnFocused, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BP_QuestItemOld_C_OnFocused::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_OnFocused, CallFunc_GetGUI_GUI) == 0x000050, "Member 'BP_QuestItemOld_C_OnFocused::CallFunc_GetGUI_GUI' has a wrong offset!");

// Function BP_QuestItemOld.BP_QuestItemOld_C.OnInteract
// 0x0008 (0x0008 - 0x0000)
struct BP_QuestItemOld_C_OnInteract final
{
public:
	class APawn*                                  Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_QuestItemOld_C_OnInteract) == 0x000008, "Wrong alignment on BP_QuestItemOld_C_OnInteract");
static_assert(sizeof(BP_QuestItemOld_C_OnInteract) == 0x000008, "Wrong size on BP_QuestItemOld_C_OnInteract");
static_assert(offsetof(BP_QuestItemOld_C_OnInteract, Player) == 0x000000, "Member 'BP_QuestItemOld_C_OnInteract::Player' has a wrong offset!");

// Function BP_QuestItemOld.BP_QuestItemOld_C.OnInteract2
// 0x0008 (0x0008 - 0x0000)
struct BP_QuestItemOld_C_OnInteract2 final
{
public:
	class APawn*                                  Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_QuestItemOld_C_OnInteract2) == 0x000008, "Wrong alignment on BP_QuestItemOld_C_OnInteract2");
static_assert(sizeof(BP_QuestItemOld_C_OnInteract2) == 0x000008, "Wrong size on BP_QuestItemOld_C_OnInteract2");
static_assert(offsetof(BP_QuestItemOld_C_OnInteract2, Player) == 0x000000, "Member 'BP_QuestItemOld_C_OnInteract2::Player' has a wrong offset!");

// Function BP_QuestItemOld.BP_QuestItemOld_C.OnInteract3
// 0x0008 (0x0008 - 0x0000)
struct BP_QuestItemOld_C_OnInteract3 final
{
public:
	class APawn*                                  Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_QuestItemOld_C_OnInteract3) == 0x000008, "Wrong alignment on BP_QuestItemOld_C_OnInteract3");
static_assert(sizeof(BP_QuestItemOld_C_OnInteract3) == 0x000008, "Wrong size on BP_QuestItemOld_C_OnInteract3");
static_assert(offsetof(BP_QuestItemOld_C_OnInteract3, Player) == 0x000000, "Member 'BP_QuestItemOld_C_OnInteract3::Player' has a wrong offset!");

// Function BP_QuestItemOld.BP_QuestItemOld_C.OnInteractVehicle
// 0x0010 (0x0010 - 0x0000)
struct BP_QuestItemOld_C_OnInteractVehicle final
{
public:
	class APawn*                                  Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         SitIndex;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SkipAnimation;                                     // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_QuestItemOld_C_OnInteractVehicle) == 0x000008, "Wrong alignment on BP_QuestItemOld_C_OnInteractVehicle");
static_assert(sizeof(BP_QuestItemOld_C_OnInteractVehicle) == 0x000010, "Wrong size on BP_QuestItemOld_C_OnInteractVehicle");
static_assert(offsetof(BP_QuestItemOld_C_OnInteractVehicle, Player) == 0x000000, "Member 'BP_QuestItemOld_C_OnInteractVehicle::Player' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_OnInteractVehicle, SitIndex) == 0x000008, "Member 'BP_QuestItemOld_C_OnInteractVehicle::SitIndex' has a wrong offset!");
static_assert(offsetof(BP_QuestItemOld_C_OnInteractVehicle, SkipAnimation) == 0x00000C, "Member 'BP_QuestItemOld_C_OnInteractVehicle::SkipAnimation' has a wrong offset!");

// Function BP_QuestItemOld.BP_QuestItemOld_C.OnLoaded_A2789CAD4B7C1935C54F7F855D187AD0
// 0x0008 (0x0008 - 0x0000)
struct BP_QuestItemOld_C_OnLoaded_A2789CAD4B7C1935C54F7F855D187AD0 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_QuestItemOld_C_OnLoaded_A2789CAD4B7C1935C54F7F855D187AD0) == 0x000008, "Wrong alignment on BP_QuestItemOld_C_OnLoaded_A2789CAD4B7C1935C54F7F855D187AD0");
static_assert(sizeof(BP_QuestItemOld_C_OnLoaded_A2789CAD4B7C1935C54F7F855D187AD0) == 0x000008, "Wrong size on BP_QuestItemOld_C_OnLoaded_A2789CAD4B7C1935C54F7F855D187AD0");
static_assert(offsetof(BP_QuestItemOld_C_OnLoaded_A2789CAD4B7C1935C54F7F855D187AD0, Loaded) == 0x000000, "Member 'BP_QuestItemOld_C_OnLoaded_A2789CAD4B7C1935C54F7F855D187AD0::Loaded' has a wrong offset!");

// Function BP_QuestItemOld.BP_QuestItemOld_C.OnLocalInteract
// 0x0008 (0x0008 - 0x0000)
struct BP_QuestItemOld_C_OnLocalInteract final
{
public:
	class APawn*                                  Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_QuestItemOld_C_OnLocalInteract) == 0x000008, "Wrong alignment on BP_QuestItemOld_C_OnLocalInteract");
static_assert(sizeof(BP_QuestItemOld_C_OnLocalInteract) == 0x000008, "Wrong size on BP_QuestItemOld_C_OnLocalInteract");
static_assert(offsetof(BP_QuestItemOld_C_OnLocalInteract, Player) == 0x000000, "Member 'BP_QuestItemOld_C_OnLocalInteract::Player' has a wrong offset!");

// Function BP_QuestItemOld.BP_QuestItemOld_C.OnLostFocus
// 0x0008 (0x0008 - 0x0000)
struct BP_QuestItemOld_C_OnLostFocus final
{
public:
	class APawn*                                  Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_QuestItemOld_C_OnLostFocus) == 0x000008, "Wrong alignment on BP_QuestItemOld_C_OnLostFocus");
static_assert(sizeof(BP_QuestItemOld_C_OnLostFocus) == 0x000008, "Wrong size on BP_QuestItemOld_C_OnLostFocus");
static_assert(offsetof(BP_QuestItemOld_C_OnLostFocus, Player) == 0x000000, "Member 'BP_QuestItemOld_C_OnLostFocus::Player' has a wrong offset!");

// Function BP_QuestItemOld.BP_QuestItemOld_C.OnSeen
// 0x0008 (0x0008 - 0x0000)
struct BP_QuestItemOld_C_OnSeen final
{
public:
	class APawn*                                  Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_QuestItemOld_C_OnSeen) == 0x000008, "Wrong alignment on BP_QuestItemOld_C_OnSeen");
static_assert(sizeof(BP_QuestItemOld_C_OnSeen) == 0x000008, "Wrong size on BP_QuestItemOld_C_OnSeen");
static_assert(offsetof(BP_QuestItemOld_C_OnSeen, Player) == 0x000000, "Member 'BP_QuestItemOld_C_OnSeen::Player' has a wrong offset!");

// Function BP_QuestItemOld.BP_QuestItemOld_C.OnStopInteract
// 0x0008 (0x0008 - 0x0000)
struct BP_QuestItemOld_C_OnStopInteract final
{
public:
	class APawn*                                  Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_QuestItemOld_C_OnStopInteract) == 0x000008, "Wrong alignment on BP_QuestItemOld_C_OnStopInteract");
static_assert(sizeof(BP_QuestItemOld_C_OnStopInteract) == 0x000008, "Wrong size on BP_QuestItemOld_C_OnStopInteract");
static_assert(offsetof(BP_QuestItemOld_C_OnStopInteract, Player) == 0x000000, "Member 'BP_QuestItemOld_C_OnStopInteract::Player' has a wrong offset!");

// Function BP_QuestItemOld.BP_QuestItemOld_C.Set3DWidgetVisibility
// 0x0001 (0x0001 - 0x0000)
struct BP_QuestItemOld_C_Set3DWidgetVisibility final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_QuestItemOld_C_Set3DWidgetVisibility) == 0x000001, "Wrong alignment on BP_QuestItemOld_C_Set3DWidgetVisibility");
static_assert(sizeof(BP_QuestItemOld_C_Set3DWidgetVisibility) == 0x000001, "Wrong size on BP_QuestItemOld_C_Set3DWidgetVisibility");
static_assert(offsetof(BP_QuestItemOld_C_Set3DWidgetVisibility, Visible) == 0x000000, "Member 'BP_QuestItemOld_C_Set3DWidgetVisibility::Visible' has a wrong offset!");

// Function BP_QuestItemOld.BP_QuestItemOld_C.SetTutorial3DWidgetVisibility
// 0x0001 (0x0001 - 0x0000)
struct BP_QuestItemOld_C_SetTutorial3DWidgetVisibility final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_QuestItemOld_C_SetTutorial3DWidgetVisibility) == 0x000001, "Wrong alignment on BP_QuestItemOld_C_SetTutorial3DWidgetVisibility");
static_assert(sizeof(BP_QuestItemOld_C_SetTutorial3DWidgetVisibility) == 0x000001, "Wrong size on BP_QuestItemOld_C_SetTutorial3DWidgetVisibility");
static_assert(offsetof(BP_QuestItemOld_C_SetTutorial3DWidgetVisibility, Visible) == 0x000000, "Member 'BP_QuestItemOld_C_SetTutorial3DWidgetVisibility::Visible' has a wrong offset!");

}
