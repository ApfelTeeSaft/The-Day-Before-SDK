#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_ChoosePoint

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function W_ChoosePoint.W_ChoosePoint_C.ExecuteUbergraph_W_ChoosePoint
// 0x00D0 (0x00D0 - 0x0000)
struct W_ChoosePoint_C_ExecuteUbergraph_W_ChoosePoint final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInventoryWorker_C*                     CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_Region_1;                       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_Region;                         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0050(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class II_GI_Survival_C>      K2Node_DynamicCast_AsI_GI_Survival;                // 0x0098(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_1;            // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class II_GI_Survival_C>      K2Node_DynamicCast_AsI_GI_Survival_1;              // 0x00B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_ChoosePoint_C_ExecuteUbergraph_W_ChoosePoint) == 0x000008, "Wrong alignment on W_ChoosePoint_C_ExecuteUbergraph_W_ChoosePoint");
static_assert(sizeof(W_ChoosePoint_C_ExecuteUbergraph_W_ChoosePoint) == 0x0000D0, "Wrong size on W_ChoosePoint_C_ExecuteUbergraph_W_ChoosePoint");
static_assert(offsetof(W_ChoosePoint_C_ExecuteUbergraph_W_ChoosePoint, EntryPoint) == 0x000000, "Member 'W_ChoosePoint_C_ExecuteUbergraph_W_ChoosePoint::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_ChoosePoint_C_ExecuteUbergraph_W_ChoosePoint, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'W_ChoosePoint_C_ExecuteUbergraph_W_ChoosePoint::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ChoosePoint_C_ExecuteUbergraph_W_ChoosePoint, CallFunc_K2_GetPawn_ReturnValue) == 0x000010, "Member 'W_ChoosePoint_C_ExecuteUbergraph_W_ChoosePoint::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ChoosePoint_C_ExecuteUbergraph_W_ChoosePoint, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'W_ChoosePoint_C_ExecuteUbergraph_W_ChoosePoint::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ChoosePoint_C_ExecuteUbergraph_W_ChoosePoint, CallFunc_GetPlayerController_ReturnValue_1) == 0x000020, "Member 'W_ChoosePoint_C_ExecuteUbergraph_W_ChoosePoint::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_ChoosePoint_C_ExecuteUbergraph_W_ChoosePoint, CallFunc_GetPlayerController_ReturnValue_2) == 0x000028, "Member 'W_ChoosePoint_C_ExecuteUbergraph_W_ChoosePoint::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(W_ChoosePoint_C_ExecuteUbergraph_W_ChoosePoint, K2Node_CustomEvent_Region_1) == 0x000030, "Member 'W_ChoosePoint_C_ExecuteUbergraph_W_ChoosePoint::K2Node_CustomEvent_Region_1' has a wrong offset!");
static_assert(offsetof(W_ChoosePoint_C_ExecuteUbergraph_W_ChoosePoint, CallFunc_Conv_NameToString_ReturnValue) == 0x000038, "Member 'W_ChoosePoint_C_ExecuteUbergraph_W_ChoosePoint::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ChoosePoint_C_ExecuteUbergraph_W_ChoosePoint, K2Node_CustomEvent_Region) == 0x000048, "Member 'W_ChoosePoint_C_ExecuteUbergraph_W_ChoosePoint::K2Node_CustomEvent_Region' has a wrong offset!");
static_assert(offsetof(W_ChoosePoint_C_ExecuteUbergraph_W_ChoosePoint, K2Node_Event_MyGeometry) == 0x000050, "Member 'W_ChoosePoint_C_ExecuteUbergraph_W_ChoosePoint::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(W_ChoosePoint_C_ExecuteUbergraph_W_ChoosePoint, K2Node_Event_InDeltaTime) == 0x000088, "Member 'W_ChoosePoint_C_ExecuteUbergraph_W_ChoosePoint::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(W_ChoosePoint_C_ExecuteUbergraph_W_ChoosePoint, CallFunc_GetGameInstance_ReturnValue) == 0x000090, "Member 'W_ChoosePoint_C_ExecuteUbergraph_W_ChoosePoint::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ChoosePoint_C_ExecuteUbergraph_W_ChoosePoint, K2Node_DynamicCast_AsI_GI_Survival) == 0x000098, "Member 'W_ChoosePoint_C_ExecuteUbergraph_W_ChoosePoint::K2Node_DynamicCast_AsI_GI_Survival' has a wrong offset!");
static_assert(offsetof(W_ChoosePoint_C_ExecuteUbergraph_W_ChoosePoint, K2Node_DynamicCast_bSuccess) == 0x0000A8, "Member 'W_ChoosePoint_C_ExecuteUbergraph_W_ChoosePoint::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(W_ChoosePoint_C_ExecuteUbergraph_W_ChoosePoint, CallFunc_GetGameInstance_ReturnValue_1) == 0x0000B0, "Member 'W_ChoosePoint_C_ExecuteUbergraph_W_ChoosePoint::CallFunc_GetGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_ChoosePoint_C_ExecuteUbergraph_W_ChoosePoint, K2Node_DynamicCast_AsI_GI_Survival_1) == 0x0000B8, "Member 'W_ChoosePoint_C_ExecuteUbergraph_W_ChoosePoint::K2Node_DynamicCast_AsI_GI_Survival_1' has a wrong offset!");
static_assert(offsetof(W_ChoosePoint_C_ExecuteUbergraph_W_ChoosePoint, K2Node_DynamicCast_bSuccess_1) == 0x0000C8, "Member 'W_ChoosePoint_C_ExecuteUbergraph_W_ChoosePoint::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function W_ChoosePoint.W_ChoosePoint_C.OnChooseRegion
// 0x0008 (0x0008 - 0x0000)
struct W_ChoosePoint_C_OnChooseRegion final
{
public:
	class FName                                   Region;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_ChoosePoint_C_OnChooseRegion) == 0x000004, "Wrong alignment on W_ChoosePoint_C_OnChooseRegion");
static_assert(sizeof(W_ChoosePoint_C_OnChooseRegion) == 0x000008, "Wrong size on W_ChoosePoint_C_OnChooseRegion");
static_assert(offsetof(W_ChoosePoint_C_OnChooseRegion, Region) == 0x000000, "Member 'W_ChoosePoint_C_OnChooseRegion::Region' has a wrong offset!");

// Function W_ChoosePoint.W_ChoosePoint_C.OnClickRegion
// 0x0008 (0x0008 - 0x0000)
struct W_ChoosePoint_C_OnClickRegion final
{
public:
	class FName                                   Region;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_ChoosePoint_C_OnClickRegion) == 0x000004, "Wrong alignment on W_ChoosePoint_C_OnClickRegion");
static_assert(sizeof(W_ChoosePoint_C_OnClickRegion) == 0x000008, "Wrong size on W_ChoosePoint_C_OnClickRegion");
static_assert(offsetof(W_ChoosePoint_C_OnClickRegion, Region) == 0x000000, "Member 'W_ChoosePoint_C_OnClickRegion::Region' has a wrong offset!");

// Function W_ChoosePoint.W_ChoosePoint_C.SetHint
// 0x0018 (0x0018 - 0x0000)
struct W_ChoosePoint_C_SetHint final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(W_ChoosePoint_C_SetHint) == 0x000008, "Wrong alignment on W_ChoosePoint_C_SetHint");
static_assert(sizeof(W_ChoosePoint_C_SetHint) == 0x000018, "Wrong size on W_ChoosePoint_C_SetHint");
static_assert(offsetof(W_ChoosePoint_C_SetHint, InText) == 0x000000, "Member 'W_ChoosePoint_C_SetHint::InText' has a wrong offset!");

// Function W_ChoosePoint.W_ChoosePoint_C.Tick
// 0x003C (0x003C - 0x0000)
struct W_ChoosePoint_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_ChoosePoint_C_Tick) == 0x000004, "Wrong alignment on W_ChoosePoint_C_Tick");
static_assert(sizeof(W_ChoosePoint_C_Tick) == 0x00003C, "Wrong size on W_ChoosePoint_C_Tick");
static_assert(offsetof(W_ChoosePoint_C_Tick, MyGeometry) == 0x000000, "Member 'W_ChoosePoint_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(W_ChoosePoint_C_Tick, InDeltaTime) == 0x000038, "Member 'W_ChoosePoint_C_Tick::InDeltaTime' has a wrong offset!");

}
