#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Notification

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function W_Notification.W_Notification_C.ExecuteUbergraph_W_Notification
// 0x00E0 (0x00E0 - 0x0000)
struct W_Notification_C_ExecuteUbergraph_W_Notification final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0xB];                                        // 0x0005(0x000B)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            CallFunc_MakeBrushFromSprite_ReturnValue;          // 0x0010(0x00D0)()
};
static_assert(alignof(W_Notification_C_ExecuteUbergraph_W_Notification) == 0x000010, "Wrong alignment on W_Notification_C_ExecuteUbergraph_W_Notification");
static_assert(sizeof(W_Notification_C_ExecuteUbergraph_W_Notification) == 0x0000E0, "Wrong size on W_Notification_C_ExecuteUbergraph_W_Notification");
static_assert(offsetof(W_Notification_C_ExecuteUbergraph_W_Notification, EntryPoint) == 0x000000, "Member 'W_Notification_C_ExecuteUbergraph_W_Notification::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_Notification_C_ExecuteUbergraph_W_Notification, K2Node_Event_IsDesignTime) == 0x000004, "Member 'W_Notification_C_ExecuteUbergraph_W_Notification::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(W_Notification_C_ExecuteUbergraph_W_Notification, CallFunc_MakeBrushFromSprite_ReturnValue) == 0x000010, "Member 'W_Notification_C_ExecuteUbergraph_W_Notification::CallFunc_MakeBrushFromSprite_ReturnValue' has a wrong offset!");

// Function W_Notification.W_Notification_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_Notification_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Notification_C_PreConstruct) == 0x000001, "Wrong alignment on W_Notification_C_PreConstruct");
static_assert(sizeof(W_Notification_C_PreConstruct) == 0x000001, "Wrong size on W_Notification_C_PreConstruct");
static_assert(offsetof(W_Notification_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'W_Notification_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
