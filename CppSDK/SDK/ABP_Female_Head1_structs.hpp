#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Female_Head1

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct ABP_Female_Head1.ABP_Female_Head1_C.AnimBlueprintGeneratedConstantData
// 0x0137 (0x0138 - 0x0001)
struct ABP_Female_Head1::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_26;                                 // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlendProfile*                          __BlendProfile_27;                                 // 0x0010(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            __CurveFloat_28;                                   // 0x0018(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	EAlphaBlendOption                             __EnumProperty_29;                                 // 0x0020(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlendListTransitionType                      __EnumProperty_30;                                 // 0x0021(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_31;                                // 0x0028(0x0010)(BlueprintVisible, EditFixedSize)
	struct FAnimNodeFunctionRef                   __StructProperty_32;                               // 0x0038(0x0020)(BlueprintVisible, NoDestructor)
	bool                                          __BoolProperty_33;                                 // 0x0058(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_34;                                // 0x005C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_35;                               // 0x0060(0x002C)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_36;                                // 0x008C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_37;                                 // 0x0090(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_38;                                 // 0x0091(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_39;                                 // 0x0092(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_93[0x1];                                       // 0x0093(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_40;                                 // 0x0094(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x00A0(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0120(0x0018)()
};
static_assert(alignof(ABP_Female_Head1::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ABP_Female_Head1::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ABP_Female_Head1::FAnimBlueprintGeneratedConstantData) == 0x000138, "Wrong size on ABP_Female_Head1::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ABP_Female_Head1::FAnimBlueprintGeneratedConstantData, __NameProperty_26) == 0x000004, "Member 'ABP_Female_Head1::FAnimBlueprintGeneratedConstantData::__NameProperty_26' has a wrong offset!");
static_assert(offsetof(ABP_Female_Head1::FAnimBlueprintGeneratedConstantData, __BlendProfile_27) == 0x000010, "Member 'ABP_Female_Head1::FAnimBlueprintGeneratedConstantData::__BlendProfile_27' has a wrong offset!");
static_assert(offsetof(ABP_Female_Head1::FAnimBlueprintGeneratedConstantData, __CurveFloat_28) == 0x000018, "Member 'ABP_Female_Head1::FAnimBlueprintGeneratedConstantData::__CurveFloat_28' has a wrong offset!");
static_assert(offsetof(ABP_Female_Head1::FAnimBlueprintGeneratedConstantData, __EnumProperty_29) == 0x000020, "Member 'ABP_Female_Head1::FAnimBlueprintGeneratedConstantData::__EnumProperty_29' has a wrong offset!");
static_assert(offsetof(ABP_Female_Head1::FAnimBlueprintGeneratedConstantData, __EnumProperty_30) == 0x000021, "Member 'ABP_Female_Head1::FAnimBlueprintGeneratedConstantData::__EnumProperty_30' has a wrong offset!");
static_assert(offsetof(ABP_Female_Head1::FAnimBlueprintGeneratedConstantData, __ArrayProperty_31) == 0x000028, "Member 'ABP_Female_Head1::FAnimBlueprintGeneratedConstantData::__ArrayProperty_31' has a wrong offset!");
static_assert(offsetof(ABP_Female_Head1::FAnimBlueprintGeneratedConstantData, __StructProperty_32) == 0x000038, "Member 'ABP_Female_Head1::FAnimBlueprintGeneratedConstantData::__StructProperty_32' has a wrong offset!");
static_assert(offsetof(ABP_Female_Head1::FAnimBlueprintGeneratedConstantData, __BoolProperty_33) == 0x000058, "Member 'ABP_Female_Head1::FAnimBlueprintGeneratedConstantData::__BoolProperty_33' has a wrong offset!");
static_assert(offsetof(ABP_Female_Head1::FAnimBlueprintGeneratedConstantData, __FloatProperty_34) == 0x00005C, "Member 'ABP_Female_Head1::FAnimBlueprintGeneratedConstantData::__FloatProperty_34' has a wrong offset!");
static_assert(offsetof(ABP_Female_Head1::FAnimBlueprintGeneratedConstantData, __StructProperty_35) == 0x000060, "Member 'ABP_Female_Head1::FAnimBlueprintGeneratedConstantData::__StructProperty_35' has a wrong offset!");
static_assert(offsetof(ABP_Female_Head1::FAnimBlueprintGeneratedConstantData, __FloatProperty_36) == 0x00008C, "Member 'ABP_Female_Head1::FAnimBlueprintGeneratedConstantData::__FloatProperty_36' has a wrong offset!");
static_assert(offsetof(ABP_Female_Head1::FAnimBlueprintGeneratedConstantData, __BoolProperty_37) == 0x000090, "Member 'ABP_Female_Head1::FAnimBlueprintGeneratedConstantData::__BoolProperty_37' has a wrong offset!");
static_assert(offsetof(ABP_Female_Head1::FAnimBlueprintGeneratedConstantData, __EnumProperty_38) == 0x000091, "Member 'ABP_Female_Head1::FAnimBlueprintGeneratedConstantData::__EnumProperty_38' has a wrong offset!");
static_assert(offsetof(ABP_Female_Head1::FAnimBlueprintGeneratedConstantData, __ByteProperty_39) == 0x000092, "Member 'ABP_Female_Head1::FAnimBlueprintGeneratedConstantData::__ByteProperty_39' has a wrong offset!");
static_assert(offsetof(ABP_Female_Head1::FAnimBlueprintGeneratedConstantData, __NameProperty_40) == 0x000094, "Member 'ABP_Female_Head1::FAnimBlueprintGeneratedConstantData::__NameProperty_40' has a wrong offset!");
static_assert(offsetof(ABP_Female_Head1::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x0000A0, "Member 'ABP_Female_Head1::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ABP_Female_Head1::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000120, "Member 'ABP_Female_Head1::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

// ScriptStruct ABP_Female_Head1.ABP_Female_Head1_C.AnimBlueprintGeneratedMutableData
// 0x0001 (0x0002 - 0x0001)
struct ABP_Female_Head1::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	bool                                          __BoolProperty;                                    // 0x0001(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Female_Head1::FAnimBlueprintGeneratedMutableData) == 0x000001, "Wrong alignment on ABP_Female_Head1::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(ABP_Female_Head1::FAnimBlueprintGeneratedMutableData) == 0x000002, "Wrong size on ABP_Female_Head1::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(ABP_Female_Head1::FAnimBlueprintGeneratedMutableData, __BoolProperty) == 0x000001, "Member 'ABP_Female_Head1::FAnimBlueprintGeneratedMutableData::__BoolProperty' has a wrong offset!");

}
