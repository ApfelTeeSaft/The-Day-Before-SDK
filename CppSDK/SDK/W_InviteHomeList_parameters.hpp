#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_InviteHomeList

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "FMODStudio_structs.hpp"


namespace SDK::Params
{

// Function W_InviteHomeList.W_InviteHomeList_C.ExecuteUbergraph_W_InviteHomeList
// 0x0028 (0x0028 - 0x0000)
struct W_InviteHomeList_C_ExecuteUbergraph_W_InviteHomeList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0008(0x0018)()
	struct FFMODEventInstance                     CallFunc_PlayEvent2D_ReturnValue;                  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_InviteHomeList_C_ExecuteUbergraph_W_InviteHomeList) == 0x000008, "Wrong alignment on W_InviteHomeList_C_ExecuteUbergraph_W_InviteHomeList");
static_assert(sizeof(W_InviteHomeList_C_ExecuteUbergraph_W_InviteHomeList) == 0x000028, "Wrong size on W_InviteHomeList_C_ExecuteUbergraph_W_InviteHomeList");
static_assert(offsetof(W_InviteHomeList_C_ExecuteUbergraph_W_InviteHomeList, EntryPoint) == 0x000000, "Member 'W_InviteHomeList_C_ExecuteUbergraph_W_InviteHomeList::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_InviteHomeList_C_ExecuteUbergraph_W_InviteHomeList, K2Node_Event_IsDesignTime) == 0x000004, "Member 'W_InviteHomeList_C_ExecuteUbergraph_W_InviteHomeList::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(W_InviteHomeList_C_ExecuteUbergraph_W_InviteHomeList, CallFunc_Conv_StringToText_ReturnValue) == 0x000008, "Member 'W_InviteHomeList_C_ExecuteUbergraph_W_InviteHomeList::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_InviteHomeList_C_ExecuteUbergraph_W_InviteHomeList, CallFunc_PlayEvent2D_ReturnValue) == 0x000020, "Member 'W_InviteHomeList_C_ExecuteUbergraph_W_InviteHomeList::CallFunc_PlayEvent2D_ReturnValue' has a wrong offset!");

// Function W_InviteHomeList.W_InviteHomeList_C.OmUnhoveredInvite__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct W_InviteHomeList_C_OmUnhoveredInvite__DelegateSignature final
{
public:
	class UW_InviteHomeList_C*                    Ref;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_InviteHomeList_C_OmUnhoveredInvite__DelegateSignature) == 0x000008, "Wrong alignment on W_InviteHomeList_C_OmUnhoveredInvite__DelegateSignature");
static_assert(sizeof(W_InviteHomeList_C_OmUnhoveredInvite__DelegateSignature) == 0x000008, "Wrong size on W_InviteHomeList_C_OmUnhoveredInvite__DelegateSignature");
static_assert(offsetof(W_InviteHomeList_C_OmUnhoveredInvite__DelegateSignature, Ref) == 0x000000, "Member 'W_InviteHomeList_C_OmUnhoveredInvite__DelegateSignature::Ref' has a wrong offset!");

// Function W_InviteHomeList.W_InviteHomeList_C.OnHoveredInvite__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct W_InviteHomeList_C_OnHoveredInvite__DelegateSignature final
{
public:
	class UW_InviteHomeList_C*                    Ref;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_InviteHomeList_C_OnHoveredInvite__DelegateSignature) == 0x000008, "Wrong alignment on W_InviteHomeList_C_OnHoveredInvite__DelegateSignature");
static_assert(sizeof(W_InviteHomeList_C_OnHoveredInvite__DelegateSignature) == 0x000008, "Wrong size on W_InviteHomeList_C_OnHoveredInvite__DelegateSignature");
static_assert(offsetof(W_InviteHomeList_C_OnHoveredInvite__DelegateSignature, Ref) == 0x000000, "Member 'W_InviteHomeList_C_OnHoveredInvite__DelegateSignature::Ref' has a wrong offset!");

// Function W_InviteHomeList.W_InviteHomeList_C.OnPressedInvide__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct W_InviteHomeList_C_OnPressedInvide__DelegateSignature final
{
public:
	class APS_TDB_C*                              Param_PS;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_InviteHomeList_C_OnPressedInvide__DelegateSignature) == 0x000008, "Wrong alignment on W_InviteHomeList_C_OnPressedInvide__DelegateSignature");
static_assert(sizeof(W_InviteHomeList_C_OnPressedInvide__DelegateSignature) == 0x000008, "Wrong size on W_InviteHomeList_C_OnPressedInvide__DelegateSignature");
static_assert(offsetof(W_InviteHomeList_C_OnPressedInvide__DelegateSignature, Param_PS) == 0x000000, "Member 'W_InviteHomeList_C_OnPressedInvide__DelegateSignature::Param_PS' has a wrong offset!");

// Function W_InviteHomeList.W_InviteHomeList_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_InviteHomeList_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_InviteHomeList_C_PreConstruct) == 0x000001, "Wrong alignment on W_InviteHomeList_C_PreConstruct");
static_assert(sizeof(W_InviteHomeList_C_PreConstruct) == 0x000001, "Wrong size on W_InviteHomeList_C_PreConstruct");
static_assert(offsetof(W_InviteHomeList_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'W_InviteHomeList_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function W_InviteHomeList.W_InviteHomeList_C.SetHovered
// 0x0010 (0x0010 - 0x0000)
struct W_InviteHomeList_C_SetHovered final
{
public:
	bool                                          Hovered;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_InviteHomeList_C_SetHovered) == 0x000008, "Wrong alignment on W_InviteHomeList_C_SetHovered");
static_assert(sizeof(W_InviteHomeList_C_SetHovered) == 0x000010, "Wrong size on W_InviteHomeList_C_SetHovered");
static_assert(offsetof(W_InviteHomeList_C_SetHovered, Hovered) == 0x000000, "Member 'W_InviteHomeList_C_SetHovered::Hovered' has a wrong offset!");
static_assert(offsetof(W_InviteHomeList_C_SetHovered, Temp_bool_Variable) == 0x000001, "Member 'W_InviteHomeList_C_SetHovered::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_InviteHomeList_C_SetHovered, Temp_byte_Variable) == 0x000002, "Member 'W_InviteHomeList_C_SetHovered::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(W_InviteHomeList_C_SetHovered, Temp_byte_Variable_1) == 0x000003, "Member 'W_InviteHomeList_C_SetHovered::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(W_InviteHomeList_C_SetHovered, K2Node_Select_Default) == 0x000004, "Member 'W_InviteHomeList_C_SetHovered::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(W_InviteHomeList_C_SetHovered, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'W_InviteHomeList_C_SetHovered::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function W_InviteHomeList.W_InviteHomeList_C.SetIsAvaliable
// 0x0018 (0x0018 - 0x0000)
struct W_InviteHomeList_C_SetIsAvaliable final
{
public:
	bool                                          Avaliable_;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_InviteHomeList_C_SetIsAvaliable) == 0x000008, "Wrong alignment on W_InviteHomeList_C_SetIsAvaliable");
static_assert(sizeof(W_InviteHomeList_C_SetIsAvaliable) == 0x000018, "Wrong size on W_InviteHomeList_C_SetIsAvaliable");
static_assert(offsetof(W_InviteHomeList_C_SetIsAvaliable, Avaliable_) == 0x000000, "Member 'W_InviteHomeList_C_SetIsAvaliable::Avaliable_' has a wrong offset!");
static_assert(offsetof(W_InviteHomeList_C_SetIsAvaliable, CallFunc_SelectFloat_ReturnValue) == 0x000008, "Member 'W_InviteHomeList_C_SetIsAvaliable::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_InviteHomeList_C_SetIsAvaliable, CallFunc_SetRenderOpacity_InOpacity_ImplicitCast) == 0x000010, "Member 'W_InviteHomeList_C_SetIsAvaliable::CallFunc_SetRenderOpacity_InOpacity_ImplicitCast' has a wrong offset!");

}
