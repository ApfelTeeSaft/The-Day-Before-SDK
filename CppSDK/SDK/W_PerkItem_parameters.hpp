#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PerkItem

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function W_PerkItem.W_PerkItem_C.bLocked
// 0x0001 (0x0001 - 0x0000)
struct W_PerkItem_C_bLocked final
{
public:
	bool                                          Param_PerkBlocked;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_PerkItem_C_bLocked) == 0x000001, "Wrong alignment on W_PerkItem_C_bLocked");
static_assert(sizeof(W_PerkItem_C_bLocked) == 0x000001, "Wrong size on W_PerkItem_C_bLocked");
static_assert(offsetof(W_PerkItem_C_bLocked, Param_PerkBlocked) == 0x000000, "Member 'W_PerkItem_C_bLocked::Param_PerkBlocked' has a wrong offset!");

// Function W_PerkItem.W_PerkItem_C.ExecuteUbergraph_W_PerkItem
// 0x0008 (0x0008 - 0x0000)
struct W_PerkItem_C_ExecuteUbergraph_W_PerkItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_PerkBlocked;                    // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_PerkItem_C_ExecuteUbergraph_W_PerkItem) == 0x000004, "Wrong alignment on W_PerkItem_C_ExecuteUbergraph_W_PerkItem");
static_assert(sizeof(W_PerkItem_C_ExecuteUbergraph_W_PerkItem) == 0x000008, "Wrong size on W_PerkItem_C_ExecuteUbergraph_W_PerkItem");
static_assert(offsetof(W_PerkItem_C_ExecuteUbergraph_W_PerkItem, EntryPoint) == 0x000000, "Member 'W_PerkItem_C_ExecuteUbergraph_W_PerkItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_PerkItem_C_ExecuteUbergraph_W_PerkItem, K2Node_CustomEvent_PerkBlocked) == 0x000004, "Member 'W_PerkItem_C_ExecuteUbergraph_W_PerkItem::K2Node_CustomEvent_PerkBlocked' has a wrong offset!");

// Function W_PerkItem.W_PerkItem_C.On_PerkSprite_MouseButtonDown_0
// 0x0228 (0x0228 - 0x0000)
struct W_PerkItem_C_On_PerkSprite_MouseButtonDown_0 final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00B0(0x00B8)(Parm, OutParm, ReturnParm)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_169[0x7];                                      // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0170(0x00B8)()
};
static_assert(alignof(W_PerkItem_C_On_PerkSprite_MouseButtonDown_0) == 0x000008, "Wrong alignment on W_PerkItem_C_On_PerkSprite_MouseButtonDown_0");
static_assert(sizeof(W_PerkItem_C_On_PerkSprite_MouseButtonDown_0) == 0x000228, "Wrong size on W_PerkItem_C_On_PerkSprite_MouseButtonDown_0");
static_assert(offsetof(W_PerkItem_C_On_PerkSprite_MouseButtonDown_0, MyGeometry) == 0x000000, "Member 'W_PerkItem_C_On_PerkSprite_MouseButtonDown_0::MyGeometry' has a wrong offset!");
static_assert(offsetof(W_PerkItem_C_On_PerkSprite_MouseButtonDown_0, MouseEvent) == 0x000038, "Member 'W_PerkItem_C_On_PerkSprite_MouseButtonDown_0::MouseEvent' has a wrong offset!");
static_assert(offsetof(W_PerkItem_C_On_PerkSprite_MouseButtonDown_0, ReturnValue) == 0x0000B0, "Member 'W_PerkItem_C_On_PerkSprite_MouseButtonDown_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PerkItem_C_On_PerkSprite_MouseButtonDown_0, CallFunc_Not_PreBool_ReturnValue) == 0x000168, "Member 'W_PerkItem_C_On_PerkSprite_MouseButtonDown_0::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PerkItem_C_On_PerkSprite_MouseButtonDown_0, CallFunc_Handled_ReturnValue) == 0x000170, "Member 'W_PerkItem_C_On_PerkSprite_MouseButtonDown_0::CallFunc_Handled_ReturnValue' has a wrong offset!");

}

