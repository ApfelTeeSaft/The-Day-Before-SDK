#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InterpSpeedsResetScript

#include "Basic.hpp"


namespace SDK::Params
{

// Function InterpSpeedsResetScript.InterpSpeedsResetScript_C.ExecuteUbergraph_InterpSpeedsResetScript
// 0x0030 (0x0030 - 0x0000)
struct InterpSpeedsResetScript_C_ExecuteUbergraph_InterpSpeedsResetScript final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UATPCCameraComponent*                   K2Node_Event_Camera;                               // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UATPCCameraComponent*                   K2Node_Event_Camera_1;                             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UATPCCameraLocationObject*              CallFunc_GetCameraLocationObject_ReturnValue;      // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USurvCameraLocationObject*              K2Node_DynamicCast_AsSurv_Camera_Location_Object;  // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InterpSpeedsResetScript_C_ExecuteUbergraph_InterpSpeedsResetScript) == 0x000008, "Wrong alignment on InterpSpeedsResetScript_C_ExecuteUbergraph_InterpSpeedsResetScript");
static_assert(sizeof(InterpSpeedsResetScript_C_ExecuteUbergraph_InterpSpeedsResetScript) == 0x000030, "Wrong size on InterpSpeedsResetScript_C_ExecuteUbergraph_InterpSpeedsResetScript");
static_assert(offsetof(InterpSpeedsResetScript_C_ExecuteUbergraph_InterpSpeedsResetScript, EntryPoint) == 0x000000, "Member 'InterpSpeedsResetScript_C_ExecuteUbergraph_InterpSpeedsResetScript::EntryPoint' has a wrong offset!");
static_assert(offsetof(InterpSpeedsResetScript_C_ExecuteUbergraph_InterpSpeedsResetScript, K2Node_Event_Camera) == 0x000008, "Member 'InterpSpeedsResetScript_C_ExecuteUbergraph_InterpSpeedsResetScript::K2Node_Event_Camera' has a wrong offset!");
static_assert(offsetof(InterpSpeedsResetScript_C_ExecuteUbergraph_InterpSpeedsResetScript, K2Node_Event_Camera_1) == 0x000010, "Member 'InterpSpeedsResetScript_C_ExecuteUbergraph_InterpSpeedsResetScript::K2Node_Event_Camera_1' has a wrong offset!");
static_assert(offsetof(InterpSpeedsResetScript_C_ExecuteUbergraph_InterpSpeedsResetScript, CallFunc_GetCameraLocationObject_ReturnValue) == 0x000018, "Member 'InterpSpeedsResetScript_C_ExecuteUbergraph_InterpSpeedsResetScript::CallFunc_GetCameraLocationObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(InterpSpeedsResetScript_C_ExecuteUbergraph_InterpSpeedsResetScript, K2Node_DynamicCast_AsSurv_Camera_Location_Object) == 0x000020, "Member 'InterpSpeedsResetScript_C_ExecuteUbergraph_InterpSpeedsResetScript::K2Node_DynamicCast_AsSurv_Camera_Location_Object' has a wrong offset!");
static_assert(offsetof(InterpSpeedsResetScript_C_ExecuteUbergraph_InterpSpeedsResetScript, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'InterpSpeedsResetScript_C_ExecuteUbergraph_InterpSpeedsResetScript::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function InterpSpeedsResetScript.InterpSpeedsResetScript_C.K2_OnEnterCameraMode
// 0x0008 (0x0008 - 0x0000)
struct InterpSpeedsResetScript_C_K2_OnEnterCameraMode final
{
public:
	class UATPCCameraComponent*                   Camera;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InterpSpeedsResetScript_C_K2_OnEnterCameraMode) == 0x000008, "Wrong alignment on InterpSpeedsResetScript_C_K2_OnEnterCameraMode");
static_assert(sizeof(InterpSpeedsResetScript_C_K2_OnEnterCameraMode) == 0x000008, "Wrong size on InterpSpeedsResetScript_C_K2_OnEnterCameraMode");
static_assert(offsetof(InterpSpeedsResetScript_C_K2_OnEnterCameraMode, Camera) == 0x000000, "Member 'InterpSpeedsResetScript_C_K2_OnEnterCameraMode::Camera' has a wrong offset!");

// Function InterpSpeedsResetScript.InterpSpeedsResetScript_C.K2_OnExitCameraMode
// 0x0008 (0x0008 - 0x0000)
struct InterpSpeedsResetScript_C_K2_OnExitCameraMode final
{
public:
	class UATPCCameraComponent*                   Camera;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InterpSpeedsResetScript_C_K2_OnExitCameraMode) == 0x000008, "Wrong alignment on InterpSpeedsResetScript_C_K2_OnExitCameraMode");
static_assert(sizeof(InterpSpeedsResetScript_C_K2_OnExitCameraMode) == 0x000008, "Wrong size on InterpSpeedsResetScript_C_K2_OnExitCameraMode");
static_assert(offsetof(InterpSpeedsResetScript_C_K2_OnExitCameraMode, Camera) == 0x000000, "Member 'InterpSpeedsResetScript_C_K2_OnExitCameraMode::Camera' has a wrong offset!");

}
