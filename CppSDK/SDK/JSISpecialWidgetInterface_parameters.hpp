#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: JSISpecialWidgetInterface

#include "Basic.hpp"


namespace SDK::Params
{

// Function JSISpecialWidgetInterface.JSISpecialWidgetInterface_C.GetListOfContainers
// 0x0010 (0x0010 - 0x0000)
struct JSISpecialWidgetInterface_C_GetListOfContainers final
{
public:
	TArray<class UJSIContainer_C*>                Containers;                                        // 0x0000(0x0010)(Parm, OutParm, ContainsInstancedReference)
};
static_assert(alignof(JSISpecialWidgetInterface_C_GetListOfContainers) == 0x000008, "Wrong alignment on JSISpecialWidgetInterface_C_GetListOfContainers");
static_assert(sizeof(JSISpecialWidgetInterface_C_GetListOfContainers) == 0x000010, "Wrong size on JSISpecialWidgetInterface_C_GetListOfContainers");
static_assert(offsetof(JSISpecialWidgetInterface_C_GetListOfContainers, Containers) == 0x000000, "Member 'JSISpecialWidgetInterface_C_GetListOfContainers::Containers' has a wrong offset!");

// Function JSISpecialWidgetInterface.JSISpecialWidgetInterface_C.SetItemReference
// 0x0008 (0x0008 - 0x0000)
struct JSISpecialWidgetInterface_C_SetItemReference final
{
public:
	class UJSI_Slot_C*                            ItemRef;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(JSISpecialWidgetInterface_C_SetItemReference) == 0x000008, "Wrong alignment on JSISpecialWidgetInterface_C_SetItemReference");
static_assert(sizeof(JSISpecialWidgetInterface_C_SetItemReference) == 0x000008, "Wrong size on JSISpecialWidgetInterface_C_SetItemReference");
static_assert(offsetof(JSISpecialWidgetInterface_C_SetItemReference, ItemRef) == 0x000000, "Member 'JSISpecialWidgetInterface_C_SetItemReference::ItemRef' has a wrong offset!");

}
