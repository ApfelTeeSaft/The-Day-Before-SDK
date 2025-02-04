#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Scroller

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_Scroller.WBP_Scroller_C.ExecuteUbergraph_WBP_Scroller
// 0x000C (0x000C - 0x0000)
struct WBP_Scroller_C_ExecuteUbergraph_WBP_Scroller final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Scroller_C_ExecuteUbergraph_WBP_Scroller) == 0x000004, "Wrong alignment on WBP_Scroller_C_ExecuteUbergraph_WBP_Scroller");
static_assert(sizeof(WBP_Scroller_C_ExecuteUbergraph_WBP_Scroller) == 0x00000C, "Wrong size on WBP_Scroller_C_ExecuteUbergraph_WBP_Scroller");
static_assert(offsetof(WBP_Scroller_C_ExecuteUbergraph_WBP_Scroller, EntryPoint) == 0x000000, "Member 'WBP_Scroller_C_ExecuteUbergraph_WBP_Scroller::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Scroller_C_ExecuteUbergraph_WBP_Scroller, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_Scroller_C_ExecuteUbergraph_WBP_Scroller::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_Scroller_C_ExecuteUbergraph_WBP_Scroller, CallFunc_SelectInt_ReturnValue) == 0x000008, "Member 'WBP_Scroller_C_ExecuteUbergraph_WBP_Scroller::CallFunc_SelectInt_ReturnValue' has a wrong offset!");

// Function WBP_Scroller.WBP_Scroller_C.InitScroller
// 0x00A8 (0x00A8 - 0x0000)
struct WBP_Scroller_C_InitScroller final
{
public:
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USizeBox*                               K2Node_DynamicCast_AsSize_Box;                     // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetDesiredSize_ReturnValue;               // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X;                          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              CallFunc_GetCachedGeometry_ReturnValue;            // 0x0038(0x0038)(ConstParm, IsPlainOldData, NoDestructor)
	struct FVector2D                              CallFunc_GetLocalSize_ReturnValue;                 // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X_1;                        // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y_1;                        // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9A[0x6];                                       // 0x009A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_A_ImplicitCast;               // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Scroller_C_InitScroller) == 0x000008, "Wrong alignment on WBP_Scroller_C_InitScroller");
static_assert(sizeof(WBP_Scroller_C_InitScroller) == 0x0000A8, "Wrong size on WBP_Scroller_C_InitScroller");
static_assert(offsetof(WBP_Scroller_C_InitScroller, Temp_byte_Variable) == 0x000000, "Member 'WBP_Scroller_C_InitScroller::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Scroller_C_InitScroller, Temp_bool_Variable) == 0x000001, "Member 'WBP_Scroller_C_InitScroller::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Scroller_C_InitScroller, CallFunc_IsValid_ReturnValue) == 0x000002, "Member 'WBP_Scroller_C_InitScroller::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Scroller_C_InitScroller, CallFunc_IsValid_ReturnValue_1) == 0x000003, "Member 'WBP_Scroller_C_InitScroller::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Scroller_C_InitScroller, CallFunc_BooleanAND_ReturnValue) == 0x000004, "Member 'WBP_Scroller_C_InitScroller::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Scroller_C_InitScroller, K2Node_DynamicCast_AsSize_Box) == 0x000008, "Member 'WBP_Scroller_C_InitScroller::K2Node_DynamicCast_AsSize_Box' has a wrong offset!");
static_assert(offsetof(WBP_Scroller_C_InitScroller, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'WBP_Scroller_C_InitScroller::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Scroller_C_InitScroller, CallFunc_GetDesiredSize_ReturnValue) == 0x000018, "Member 'WBP_Scroller_C_InitScroller::CallFunc_GetDesiredSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Scroller_C_InitScroller, CallFunc_BreakVector2D_X) == 0x000028, "Member 'WBP_Scroller_C_InitScroller::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WBP_Scroller_C_InitScroller, CallFunc_BreakVector2D_Y) == 0x000030, "Member 'WBP_Scroller_C_InitScroller::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WBP_Scroller_C_InitScroller, CallFunc_GetCachedGeometry_ReturnValue) == 0x000038, "Member 'WBP_Scroller_C_InitScroller::CallFunc_GetCachedGeometry_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Scroller_C_InitScroller, CallFunc_GetLocalSize_ReturnValue) == 0x000070, "Member 'WBP_Scroller_C_InitScroller::CallFunc_GetLocalSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Scroller_C_InitScroller, CallFunc_BreakVector2D_X_1) == 0x000080, "Member 'WBP_Scroller_C_InitScroller::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(WBP_Scroller_C_InitScroller, CallFunc_BreakVector2D_Y_1) == 0x000088, "Member 'WBP_Scroller_C_InitScroller::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(WBP_Scroller_C_InitScroller, CallFunc_SelectFloat_ReturnValue) == 0x000090, "Member 'WBP_Scroller_C_InitScroller::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Scroller_C_InitScroller, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000098, "Member 'WBP_Scroller_C_InitScroller::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Scroller_C_InitScroller, K2Node_Select_Default) == 0x000099, "Member 'WBP_Scroller_C_InitScroller::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Scroller_C_InitScroller, CallFunc_SelectFloat_A_ImplicitCast) == 0x0000A0, "Member 'WBP_Scroller_C_InitScroller::CallFunc_SelectFloat_A_ImplicitCast' has a wrong offset!");

// Function WBP_Scroller.WBP_Scroller_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_Scroller_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Scroller_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_Scroller_C_PreConstruct");
static_assert(sizeof(WBP_Scroller_C_PreConstruct) == 0x000001, "Wrong size on WBP_Scroller_C_PreConstruct");
static_assert(offsetof(WBP_Scroller_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_Scroller_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_Scroller.WBP_Scroller_C.SetServerCount
// 0x0030 (0x0030 - 0x0000)
struct WBP_Scroller_C_SetServerCount final
{
public:
	class FText                                   Current;                                           // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   Max;                                               // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_Scroller_C_SetServerCount) == 0x000008, "Wrong alignment on WBP_Scroller_C_SetServerCount");
static_assert(sizeof(WBP_Scroller_C_SetServerCount) == 0x000030, "Wrong size on WBP_Scroller_C_SetServerCount");
static_assert(offsetof(WBP_Scroller_C_SetServerCount, Current) == 0x000000, "Member 'WBP_Scroller_C_SetServerCount::Current' has a wrong offset!");
static_assert(offsetof(WBP_Scroller_C_SetServerCount, Max) == 0x000018, "Member 'WBP_Scroller_C_SetServerCount::Max' has a wrong offset!");

}

