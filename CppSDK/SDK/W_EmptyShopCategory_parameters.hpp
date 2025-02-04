#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_EmptyShopCategory

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "FMODStudio_structs.hpp"


namespace SDK::Params
{

// Function W_EmptyShopCategory.W_EmptyShopCategory_C.ExecuteUbergraph_W_EmptyShopCategory
// 0x0018 (0x0018 - 0x0000)
struct W_EmptyShopCategory_C_ExecuteUbergraph_W_EmptyShopCategory final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFMODEventInstance                     CallFunc_PlayEvent2D_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFMODEventInstance                     CallFunc_PlayEvent2D_ReturnValue_1;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_EmptyShopCategory_C_ExecuteUbergraph_W_EmptyShopCategory) == 0x000008, "Wrong alignment on W_EmptyShopCategory_C_ExecuteUbergraph_W_EmptyShopCategory");
static_assert(sizeof(W_EmptyShopCategory_C_ExecuteUbergraph_W_EmptyShopCategory) == 0x000018, "Wrong size on W_EmptyShopCategory_C_ExecuteUbergraph_W_EmptyShopCategory");
static_assert(offsetof(W_EmptyShopCategory_C_ExecuteUbergraph_W_EmptyShopCategory, EntryPoint) == 0x000000, "Member 'W_EmptyShopCategory_C_ExecuteUbergraph_W_EmptyShopCategory::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_EmptyShopCategory_C_ExecuteUbergraph_W_EmptyShopCategory, K2Node_Event_IsDesignTime) == 0x000004, "Member 'W_EmptyShopCategory_C_ExecuteUbergraph_W_EmptyShopCategory::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(W_EmptyShopCategory_C_ExecuteUbergraph_W_EmptyShopCategory, CallFunc_PlayEvent2D_ReturnValue) == 0x000008, "Member 'W_EmptyShopCategory_C_ExecuteUbergraph_W_EmptyShopCategory::CallFunc_PlayEvent2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_EmptyShopCategory_C_ExecuteUbergraph_W_EmptyShopCategory, CallFunc_PlayEvent2D_ReturnValue_1) == 0x000010, "Member 'W_EmptyShopCategory_C_ExecuteUbergraph_W_EmptyShopCategory::CallFunc_PlayEvent2D_ReturnValue_1' has a wrong offset!");

// Function W_EmptyShopCategory.W_EmptyShopCategory_C.Hovered 
// 0x0010 (0x0010 - 0x0000)
struct W_EmptyShopCategory_C_Hovered_ final
{
public:
	bool                                          With_Anim;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Param_Hovered;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable_1;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_EmptyShopCategory_C_Hovered_) == 0x000008, "Wrong alignment on W_EmptyShopCategory_C_Hovered_");
static_assert(sizeof(W_EmptyShopCategory_C_Hovered_) == 0x000010, "Wrong size on W_EmptyShopCategory_C_Hovered_");
static_assert(offsetof(W_EmptyShopCategory_C_Hovered_, With_Anim) == 0x000000, "Member 'W_EmptyShopCategory_C_Hovered_::With_Anim' has a wrong offset!");
static_assert(offsetof(W_EmptyShopCategory_C_Hovered_, Param_Hovered) == 0x000001, "Member 'W_EmptyShopCategory_C_Hovered_::Param_Hovered' has a wrong offset!");
static_assert(offsetof(W_EmptyShopCategory_C_Hovered_, Temp_bool_Variable) == 0x000002, "Member 'W_EmptyShopCategory_C_Hovered_::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_EmptyShopCategory_C_Hovered_, Temp_byte_Variable) == 0x000003, "Member 'W_EmptyShopCategory_C_Hovered_::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(W_EmptyShopCategory_C_Hovered_, Temp_byte_Variable_1) == 0x000004, "Member 'W_EmptyShopCategory_C_Hovered_::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(W_EmptyShopCategory_C_Hovered_, K2Node_Select_Default) == 0x000005, "Member 'W_EmptyShopCategory_C_Hovered_::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(W_EmptyShopCategory_C_Hovered_, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'W_EmptyShopCategory_C_Hovered_::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function W_EmptyShopCategory.W_EmptyShopCategory_C.Init
// 0x00D0 (0x00D0 - 0x0000)
struct W_EmptyShopCategory_C_Init final
{
public:
	struct FSlateBrush                            CallFunc_MakeBrushFromSprite_ReturnValue;          // 0x0000(0x00D0)()
};
static_assert(alignof(W_EmptyShopCategory_C_Init) == 0x000010, "Wrong alignment on W_EmptyShopCategory_C_Init");
static_assert(sizeof(W_EmptyShopCategory_C_Init) == 0x0000D0, "Wrong size on W_EmptyShopCategory_C_Init");
static_assert(offsetof(W_EmptyShopCategory_C_Init, CallFunc_MakeBrushFromSprite_ReturnValue) == 0x000000, "Member 'W_EmptyShopCategory_C_Init::CallFunc_MakeBrushFromSprite_ReturnValue' has a wrong offset!");

// Function W_EmptyShopCategory.W_EmptyShopCategory_C.OnSelected__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct W_EmptyShopCategory_C_OnSelected__DelegateSignature final
{
public:
	class UW_EmptyShopCategory_C*                 Ref;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_EmptyShopCategory_C_OnSelected__DelegateSignature) == 0x000008, "Wrong alignment on W_EmptyShopCategory_C_OnSelected__DelegateSignature");
static_assert(sizeof(W_EmptyShopCategory_C_OnSelected__DelegateSignature) == 0x000008, "Wrong size on W_EmptyShopCategory_C_OnSelected__DelegateSignature");
static_assert(offsetof(W_EmptyShopCategory_C_OnSelected__DelegateSignature, Ref) == 0x000000, "Member 'W_EmptyShopCategory_C_OnSelected__DelegateSignature::Ref' has a wrong offset!");

// Function W_EmptyShopCategory.W_EmptyShopCategory_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_EmptyShopCategory_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_EmptyShopCategory_C_PreConstruct) == 0x000001, "Wrong alignment on W_EmptyShopCategory_C_PreConstruct");
static_assert(sizeof(W_EmptyShopCategory_C_PreConstruct) == 0x000001, "Wrong size on W_EmptyShopCategory_C_PreConstruct");
static_assert(offsetof(W_EmptyShopCategory_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'W_EmptyShopCategory_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function W_EmptyShopCategory.W_EmptyShopCategory_C.Selected
// 0x0009 (0x0009 - 0x0000)
struct W_EmptyShopCategory_C_Selected final
{
public:
	bool                                          Param_Selected;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_EmptyShopCategory_C_Selected) == 0x000001, "Wrong alignment on W_EmptyShopCategory_C_Selected");
static_assert(sizeof(W_EmptyShopCategory_C_Selected) == 0x000009, "Wrong size on W_EmptyShopCategory_C_Selected");
static_assert(offsetof(W_EmptyShopCategory_C_Selected, Param_Selected) == 0x000000, "Member 'W_EmptyShopCategory_C_Selected::Param_Selected' has a wrong offset!");
static_assert(offsetof(W_EmptyShopCategory_C_Selected, Temp_bool_Variable) == 0x000001, "Member 'W_EmptyShopCategory_C_Selected::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_EmptyShopCategory_C_Selected, Temp_byte_Variable) == 0x000002, "Member 'W_EmptyShopCategory_C_Selected::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(W_EmptyShopCategory_C_Selected, Temp_byte_Variable_1) == 0x000003, "Member 'W_EmptyShopCategory_C_Selected::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(W_EmptyShopCategory_C_Selected, Temp_bool_Variable_1) == 0x000004, "Member 'W_EmptyShopCategory_C_Selected::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(W_EmptyShopCategory_C_Selected, Temp_byte_Variable_2) == 0x000005, "Member 'W_EmptyShopCategory_C_Selected::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(W_EmptyShopCategory_C_Selected, Temp_byte_Variable_3) == 0x000006, "Member 'W_EmptyShopCategory_C_Selected::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(W_EmptyShopCategory_C_Selected, K2Node_Select_Default) == 0x000007, "Member 'W_EmptyShopCategory_C_Selected::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(W_EmptyShopCategory_C_Selected, K2Node_Select_Default_1) == 0x000008, "Member 'W_EmptyShopCategory_C_Selected::K2Node_Select_Default_1' has a wrong offset!");

}

