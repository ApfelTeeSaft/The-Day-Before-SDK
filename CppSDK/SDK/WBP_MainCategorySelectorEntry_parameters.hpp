#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MainCategorySelectorEntry

#include "Basic.hpp"

#include "FMODStudio_structs.hpp"


namespace SDK::Params
{

// Function WBP_MainCategorySelectorEntry.WBP_MainCategorySelectorEntry_C.ExecuteUbergraph_WBP_MainCategorySelectorEntry
// 0x0040 (0x0040 - 0x0000)
struct WBP_MainCategorySelectorEntry_C_ExecuteUbergraph_WBP_MainCategorySelectorEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_4;                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B[0x5];                                        // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFMODEventInstance                     CallFunc_PlayEvent2D_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFMODEventInstance                     CallFunc_PlayEvent2D_ReturnValue_1;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;  // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MainCategorySelectorEntry_C_ExecuteUbergraph_WBP_MainCategorySelectorEntry) == 0x000008, "Wrong alignment on WBP_MainCategorySelectorEntry_C_ExecuteUbergraph_WBP_MainCategorySelectorEntry");
static_assert(sizeof(WBP_MainCategorySelectorEntry_C_ExecuteUbergraph_WBP_MainCategorySelectorEntry) == 0x000040, "Wrong size on WBP_MainCategorySelectorEntry_C_ExecuteUbergraph_WBP_MainCategorySelectorEntry");
static_assert(offsetof(WBP_MainCategorySelectorEntry_C_ExecuteUbergraph_WBP_MainCategorySelectorEntry, EntryPoint) == 0x000000, "Member 'WBP_MainCategorySelectorEntry_C_ExecuteUbergraph_WBP_MainCategorySelectorEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_MainCategorySelectorEntry_C_ExecuteUbergraph_WBP_MainCategorySelectorEntry, CallFunc_Not_PreBool_ReturnValue) == 0x000004, "Member 'WBP_MainCategorySelectorEntry_C_ExecuteUbergraph_WBP_MainCategorySelectorEntry::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainCategorySelectorEntry_C_ExecuteUbergraph_WBP_MainCategorySelectorEntry, CallFunc_Not_PreBool_ReturnValue_1) == 0x000005, "Member 'WBP_MainCategorySelectorEntry_C_ExecuteUbergraph_WBP_MainCategorySelectorEntry::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MainCategorySelectorEntry_C_ExecuteUbergraph_WBP_MainCategorySelectorEntry, CallFunc_BooleanAND_ReturnValue) == 0x000006, "Member 'WBP_MainCategorySelectorEntry_C_ExecuteUbergraph_WBP_MainCategorySelectorEntry::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainCategorySelectorEntry_C_ExecuteUbergraph_WBP_MainCategorySelectorEntry, CallFunc_Not_PreBool_ReturnValue_2) == 0x000007, "Member 'WBP_MainCategorySelectorEntry_C_ExecuteUbergraph_WBP_MainCategorySelectorEntry::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_MainCategorySelectorEntry_C_ExecuteUbergraph_WBP_MainCategorySelectorEntry, CallFunc_Not_PreBool_ReturnValue_3) == 0x000008, "Member 'WBP_MainCategorySelectorEntry_C_ExecuteUbergraph_WBP_MainCategorySelectorEntry::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_MainCategorySelectorEntry_C_ExecuteUbergraph_WBP_MainCategorySelectorEntry, CallFunc_Not_PreBool_ReturnValue_4) == 0x000009, "Member 'WBP_MainCategorySelectorEntry_C_ExecuteUbergraph_WBP_MainCategorySelectorEntry::CallFunc_Not_PreBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_MainCategorySelectorEntry_C_ExecuteUbergraph_WBP_MainCategorySelectorEntry, CallFunc_BooleanAND_ReturnValue_1) == 0x00000A, "Member 'WBP_MainCategorySelectorEntry_C_ExecuteUbergraph_WBP_MainCategorySelectorEntry::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MainCategorySelectorEntry_C_ExecuteUbergraph_WBP_MainCategorySelectorEntry, CallFunc_PlayEvent2D_ReturnValue) == 0x000010, "Member 'WBP_MainCategorySelectorEntry_C_ExecuteUbergraph_WBP_MainCategorySelectorEntry::CallFunc_PlayEvent2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainCategorySelectorEntry_C_ExecuteUbergraph_WBP_MainCategorySelectorEntry, CallFunc_SelectFloat_ReturnValue) == 0x000018, "Member 'WBP_MainCategorySelectorEntry_C_ExecuteUbergraph_WBP_MainCategorySelectorEntry::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainCategorySelectorEntry_C_ExecuteUbergraph_WBP_MainCategorySelectorEntry, CallFunc_PlayEvent2D_ReturnValue_1) == 0x000020, "Member 'WBP_MainCategorySelectorEntry_C_ExecuteUbergraph_WBP_MainCategorySelectorEntry::CallFunc_PlayEvent2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MainCategorySelectorEntry_C_ExecuteUbergraph_WBP_MainCategorySelectorEntry, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'WBP_MainCategorySelectorEntry_C_ExecuteUbergraph_WBP_MainCategorySelectorEntry::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainCategorySelectorEntry_C_ExecuteUbergraph_WBP_MainCategorySelectorEntry, CallFunc_PlayAnimation_ReturnValue_1) == 0x000030, "Member 'WBP_MainCategorySelectorEntry_C_ExecuteUbergraph_WBP_MainCategorySelectorEntry::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MainCategorySelectorEntry_C_ExecuteUbergraph_WBP_MainCategorySelectorEntry, K2Node_Event_IsDesignTime) == 0x000038, "Member 'WBP_MainCategorySelectorEntry_C_ExecuteUbergraph_WBP_MainCategorySelectorEntry::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_MainCategorySelectorEntry_C_ExecuteUbergraph_WBP_MainCategorySelectorEntry, CallFunc_SetRenderOpacity_InOpacity_ImplicitCast) == 0x00003C, "Member 'WBP_MainCategorySelectorEntry_C_ExecuteUbergraph_WBP_MainCategorySelectorEntry::CallFunc_SetRenderOpacity_InOpacity_ImplicitCast' has a wrong offset!");

// Function WBP_MainCategorySelectorEntry.WBP_MainCategorySelectorEntry_C.GetText
// 0x0018 (0x0018 - 0x0000)
struct WBP_MainCategorySelectorEntry_C_GetText final
{
public:
	class FText                                   Param_Text;                                        // 0x0000(0x0018)(Parm, OutParm)
};
static_assert(alignof(WBP_MainCategorySelectorEntry_C_GetText) == 0x000008, "Wrong alignment on WBP_MainCategorySelectorEntry_C_GetText");
static_assert(sizeof(WBP_MainCategorySelectorEntry_C_GetText) == 0x000018, "Wrong size on WBP_MainCategorySelectorEntry_C_GetText");
static_assert(offsetof(WBP_MainCategorySelectorEntry_C_GetText, Param_Text) == 0x000000, "Member 'WBP_MainCategorySelectorEntry_C_GetText::Param_Text' has a wrong offset!");

// Function WBP_MainCategorySelectorEntry.WBP_MainCategorySelectorEntry_C.OnEntrySelected__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct WBP_MainCategorySelectorEntry_C_OnEntrySelected__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MainCategorySelectorEntry_C_OnEntrySelected__DelegateSignature) == 0x000004, "Wrong alignment on WBP_MainCategorySelectorEntry_C_OnEntrySelected__DelegateSignature");
static_assert(sizeof(WBP_MainCategorySelectorEntry_C_OnEntrySelected__DelegateSignature) == 0x000004, "Wrong size on WBP_MainCategorySelectorEntry_C_OnEntrySelected__DelegateSignature");
static_assert(offsetof(WBP_MainCategorySelectorEntry_C_OnEntrySelected__DelegateSignature, Param_Index) == 0x000000, "Member 'WBP_MainCategorySelectorEntry_C_OnEntrySelected__DelegateSignature::Param_Index' has a wrong offset!");

// Function WBP_MainCategorySelectorEntry.WBP_MainCategorySelectorEntry_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_MainCategorySelectorEntry_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MainCategorySelectorEntry_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_MainCategorySelectorEntry_C_PreConstruct");
static_assert(sizeof(WBP_MainCategorySelectorEntry_C_PreConstruct) == 0x000001, "Wrong size on WBP_MainCategorySelectorEntry_C_PreConstruct");
static_assert(offsetof(WBP_MainCategorySelectorEntry_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_MainCategorySelectorEntry_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_MainCategorySelectorEntry.WBP_MainCategorySelectorEntry_C.SelectEntry
// 0x0018 (0x0018 - 0x0000)
struct WBP_MainCategorySelectorEntry_C_SelectEntry final
{
public:
	bool                                          Param_Select;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       K2Node_Select_Default;                             // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MainCategorySelectorEntry_C_SelectEntry) == 0x000008, "Wrong alignment on WBP_MainCategorySelectorEntry_C_SelectEntry");
static_assert(sizeof(WBP_MainCategorySelectorEntry_C_SelectEntry) == 0x000018, "Wrong size on WBP_MainCategorySelectorEntry_C_SelectEntry");
static_assert(offsetof(WBP_MainCategorySelectorEntry_C_SelectEntry, Param_Select) == 0x000000, "Member 'WBP_MainCategorySelectorEntry_C_SelectEntry::Param_Select' has a wrong offset!");
static_assert(offsetof(WBP_MainCategorySelectorEntry_C_SelectEntry, Temp_bool_Variable) == 0x000001, "Member 'WBP_MainCategorySelectorEntry_C_SelectEntry::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MainCategorySelectorEntry_C_SelectEntry, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000002, "Member 'WBP_MainCategorySelectorEntry_C_SelectEntry::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainCategorySelectorEntry_C_SelectEntry, K2Node_Select_Default) == 0x000008, "Member 'WBP_MainCategorySelectorEntry_C_SelectEntry::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_MainCategorySelectorEntry_C_SelectEntry, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'WBP_MainCategorySelectorEntry_C_SelectEntry::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

