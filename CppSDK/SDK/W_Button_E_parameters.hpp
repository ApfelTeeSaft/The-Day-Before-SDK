#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Button_E

#include "Basic.hpp"


namespace SDK::Params
{

// Function W_Button_E.W_Button_E_C.ExecuteUbergraph_W_Button_E
// 0x0038 (0x0038 - 0x0000)
struct W_Button_E_C_ExecuteUbergraph_W_Button_E final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvas*                                K2Node_CustomEvent_Canvas;                         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Width;                          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Height;                         // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UCanvas* Canvas, int32 Width, int32 Height)> K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Button_E_C_ExecuteUbergraph_W_Button_E) == 0x000008, "Wrong alignment on W_Button_E_C_ExecuteUbergraph_W_Button_E");
static_assert(sizeof(W_Button_E_C_ExecuteUbergraph_W_Button_E) == 0x000038, "Wrong size on W_Button_E_C_ExecuteUbergraph_W_Button_E");
static_assert(offsetof(W_Button_E_C_ExecuteUbergraph_W_Button_E, EntryPoint) == 0x000000, "Member 'W_Button_E_C_ExecuteUbergraph_W_Button_E::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_Button_E_C_ExecuteUbergraph_W_Button_E, K2Node_CustomEvent_Canvas) == 0x000008, "Member 'W_Button_E_C_ExecuteUbergraph_W_Button_E::K2Node_CustomEvent_Canvas' has a wrong offset!");
static_assert(offsetof(W_Button_E_C_ExecuteUbergraph_W_Button_E, K2Node_CustomEvent_Width) == 0x000010, "Member 'W_Button_E_C_ExecuteUbergraph_W_Button_E::K2Node_CustomEvent_Width' has a wrong offset!");
static_assert(offsetof(W_Button_E_C_ExecuteUbergraph_W_Button_E, K2Node_CustomEvent_Height) == 0x000014, "Member 'W_Button_E_C_ExecuteUbergraph_W_Button_E::K2Node_CustomEvent_Height' has a wrong offset!");
static_assert(offsetof(W_Button_E_C_ExecuteUbergraph_W_Button_E, K2Node_Event_IsDesignTime) == 0x000018, "Member 'W_Button_E_C_ExecuteUbergraph_W_Button_E::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(W_Button_E_C_ExecuteUbergraph_W_Button_E, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'W_Button_E_C_ExecuteUbergraph_W_Button_E::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(W_Button_E_C_ExecuteUbergraph_W_Button_E, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000030, "Member 'W_Button_E_C_ExecuteUbergraph_W_Button_E::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

// Function W_Button_E.W_Button_E_C.OnCanvasRenderTargetUpdate
// 0x0010 (0x0010 - 0x0000)
struct W_Button_E_C_OnCanvasRenderTargetUpdate final
{
public:
	class UCanvas*                                Canvas;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Width;                                             // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Height;                                            // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Button_E_C_OnCanvasRenderTargetUpdate) == 0x000008, "Wrong alignment on W_Button_E_C_OnCanvasRenderTargetUpdate");
static_assert(sizeof(W_Button_E_C_OnCanvasRenderTargetUpdate) == 0x000010, "Wrong size on W_Button_E_C_OnCanvasRenderTargetUpdate");
static_assert(offsetof(W_Button_E_C_OnCanvasRenderTargetUpdate, Canvas) == 0x000000, "Member 'W_Button_E_C_OnCanvasRenderTargetUpdate::Canvas' has a wrong offset!");
static_assert(offsetof(W_Button_E_C_OnCanvasRenderTargetUpdate, Width) == 0x000008, "Member 'W_Button_E_C_OnCanvasRenderTargetUpdate::Width' has a wrong offset!");
static_assert(offsetof(W_Button_E_C_OnCanvasRenderTargetUpdate, Height) == 0x00000C, "Member 'W_Button_E_C_OnCanvasRenderTargetUpdate::Height' has a wrong offset!");

// Function W_Button_E.W_Button_E_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_Button_E_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Button_E_C_PreConstruct) == 0x000001, "Wrong alignment on W_Button_E_C_PreConstruct");
static_assert(sizeof(W_Button_E_C_PreConstruct) == 0x000001, "Wrong size on W_Button_E_C_PreConstruct");
static_assert(offsetof(W_Button_E_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'W_Button_E_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
