#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_BuildingCell

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "BuildingInfo_Struct_structs.hpp"


namespace SDK::Params
{

// Function W_BuildingCell.W_BuildingCell_C.ExecuteUbergraph_W_BuildingCell
// 0x0140 (0x0140 - 0x0000)
struct W_BuildingCell_C_ExecuteUbergraph_W_BuildingCell final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable;                              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPaperSprite*                           K2Node_DynamicCast_AsPaper_Sprite;                 // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            CallFunc_MakeBrushFromSprite_ReturnValue;          // 0x0030(0x00D0)()
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0100(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0118(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_1;       // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_BuildingCell_C_ExecuteUbergraph_W_BuildingCell) == 0x000010, "Wrong alignment on W_BuildingCell_C_ExecuteUbergraph_W_BuildingCell");
static_assert(sizeof(W_BuildingCell_C_ExecuteUbergraph_W_BuildingCell) == 0x000140, "Wrong size on W_BuildingCell_C_ExecuteUbergraph_W_BuildingCell");
static_assert(offsetof(W_BuildingCell_C_ExecuteUbergraph_W_BuildingCell, EntryPoint) == 0x000000, "Member 'W_BuildingCell_C_ExecuteUbergraph_W_BuildingCell::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_BuildingCell_C_ExecuteUbergraph_W_BuildingCell, K2Node_CustomEvent_Loaded) == 0x000008, "Member 'W_BuildingCell_C_ExecuteUbergraph_W_BuildingCell::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(W_BuildingCell_C_ExecuteUbergraph_W_BuildingCell, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'W_BuildingCell_C_ExecuteUbergraph_W_BuildingCell::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_BuildingCell_C_ExecuteUbergraph_W_BuildingCell, Temp_object_Variable) == 0x000018, "Member 'W_BuildingCell_C_ExecuteUbergraph_W_BuildingCell::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(W_BuildingCell_C_ExecuteUbergraph_W_BuildingCell, K2Node_DynamicCast_AsPaper_Sprite) == 0x000020, "Member 'W_BuildingCell_C_ExecuteUbergraph_W_BuildingCell::K2Node_DynamicCast_AsPaper_Sprite' has a wrong offset!");
static_assert(offsetof(W_BuildingCell_C_ExecuteUbergraph_W_BuildingCell, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'W_BuildingCell_C_ExecuteUbergraph_W_BuildingCell::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(W_BuildingCell_C_ExecuteUbergraph_W_BuildingCell, CallFunc_MakeBrushFromSprite_ReturnValue) == 0x000030, "Member 'W_BuildingCell_C_ExecuteUbergraph_W_BuildingCell::CallFunc_MakeBrushFromSprite_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_BuildingCell_C_ExecuteUbergraph_W_BuildingCell, K2Node_CreateDelegate_OutputDelegate) == 0x000100, "Member 'W_BuildingCell_C_ExecuteUbergraph_W_BuildingCell::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(W_BuildingCell_C_ExecuteUbergraph_W_BuildingCell, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000110, "Member 'W_BuildingCell_C_ExecuteUbergraph_W_BuildingCell::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_BuildingCell_C_ExecuteUbergraph_W_BuildingCell, CallFunc_Conv_IntToText_ReturnValue) == 0x000118, "Member 'W_BuildingCell_C_ExecuteUbergraph_W_BuildingCell::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_BuildingCell_C_ExecuteUbergraph_W_BuildingCell, CallFunc_PlayAnimationForward_ReturnValue) == 0x000130, "Member 'W_BuildingCell_C_ExecuteUbergraph_W_BuildingCell::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_BuildingCell_C_ExecuteUbergraph_W_BuildingCell, CallFunc_PlayAnimationReverse_ReturnValue_1) == 0x000138, "Member 'W_BuildingCell_C_ExecuteUbergraph_W_BuildingCell::CallFunc_PlayAnimationReverse_ReturnValue_1' has a wrong offset!");

// Function W_BuildingCell.W_BuildingCell_C.OnClick__DelegateSignature
// 0x00D8 (0x00D8 - 0x0000)
struct W_BuildingCell_C_OnClick__DelegateSignature final
{
public:
	struct FBuildingInfo_Struct                   Info;                                              // 0x0000(0x00D8)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};
static_assert(alignof(W_BuildingCell_C_OnClick__DelegateSignature) == 0x000008, "Wrong alignment on W_BuildingCell_C_OnClick__DelegateSignature");
static_assert(sizeof(W_BuildingCell_C_OnClick__DelegateSignature) == 0x0000D8, "Wrong size on W_BuildingCell_C_OnClick__DelegateSignature");
static_assert(offsetof(W_BuildingCell_C_OnClick__DelegateSignature, Info) == 0x000000, "Member 'W_BuildingCell_C_OnClick__DelegateSignature::Info' has a wrong offset!");

// Function W_BuildingCell.W_BuildingCell_C.OnLoaded_04BC4976421E8AE1814C82AFFAF21695
// 0x0008 (0x0008 - 0x0000)
struct W_BuildingCell_C_OnLoaded_04BC4976421E8AE1814C82AFFAF21695 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_BuildingCell_C_OnLoaded_04BC4976421E8AE1814C82AFFAF21695) == 0x000008, "Wrong alignment on W_BuildingCell_C_OnLoaded_04BC4976421E8AE1814C82AFFAF21695");
static_assert(sizeof(W_BuildingCell_C_OnLoaded_04BC4976421E8AE1814C82AFFAF21695) == 0x000008, "Wrong size on W_BuildingCell_C_OnLoaded_04BC4976421E8AE1814C82AFFAF21695");
static_assert(offsetof(W_BuildingCell_C_OnLoaded_04BC4976421E8AE1814C82AFFAF21695, Loaded) == 0x000000, "Member 'W_BuildingCell_C_OnLoaded_04BC4976421E8AE1814C82AFFAF21695::Loaded' has a wrong offset!");

// Function W_BuildingCell.W_BuildingCell_C.SetSelectedCell
// 0x0018 (0x0018 - 0x0000)
struct W_BuildingCell_C_SetSelectedCell final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MakeColor_ReturnValue;                    // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_BuildingCell_C_SetSelectedCell) == 0x000008, "Wrong alignment on W_BuildingCell_C_SetSelectedCell");
static_assert(sizeof(W_BuildingCell_C_SetSelectedCell) == 0x000018, "Wrong size on W_BuildingCell_C_SetSelectedCell");
static_assert(offsetof(W_BuildingCell_C_SetSelectedCell, CallFunc_PlayAnimationForward_ReturnValue) == 0x000000, "Member 'W_BuildingCell_C_SetSelectedCell::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_BuildingCell_C_SetSelectedCell, CallFunc_MakeColor_ReturnValue) == 0x000008, "Member 'W_BuildingCell_C_SetSelectedCell::CallFunc_MakeColor_ReturnValue' has a wrong offset!");

// Function W_BuildingCell.W_BuildingCell_C.SetUnselectedCell
// 0x0018 (0x0018 - 0x0000)
struct W_BuildingCell_C_SetUnselectedCell final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MakeColor_ReturnValue;                    // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_BuildingCell_C_SetUnselectedCell) == 0x000008, "Wrong alignment on W_BuildingCell_C_SetUnselectedCell");
static_assert(sizeof(W_BuildingCell_C_SetUnselectedCell) == 0x000018, "Wrong size on W_BuildingCell_C_SetUnselectedCell");
static_assert(offsetof(W_BuildingCell_C_SetUnselectedCell, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000000, "Member 'W_BuildingCell_C_SetUnselectedCell::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_BuildingCell_C_SetUnselectedCell, CallFunc_MakeColor_ReturnValue) == 0x000008, "Member 'W_BuildingCell_C_SetUnselectedCell::CallFunc_MakeColor_ReturnValue' has a wrong offset!");

}

