#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TestABP

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct TestABP.TestABP_C.AnimBlueprintGeneratedConstantData
// 0x0157 (0x0158 - 0x0001)
struct TestABP::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlendProfile*                          __BlendProfile_79;                                 // 0x0008(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            __CurveFloat_80;                                   // 0x0010(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	EAlphaBlendOption                             __EnumProperty_81;                                 // 0x0018(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlendListTransitionType                      __EnumProperty_82;                                 // 0x0019(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_83;                                // 0x0020(0x0010)(BlueprintVisible, EditFixedSize)
	class FName                                   __NameProperty_84;                                 // 0x0030(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_85;                                  // 0x0038(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_86;                                 // 0x003C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_87;                                 // 0x0040(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_88;                                  // 0x0048(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_89;                                // 0x004C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_90;                               // 0x0050(0x002C)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_91;                                // 0x007C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_92;                                 // 0x0080(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_93;                                 // 0x0081(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_94;                                 // 0x0082(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_83[0x1];                                       // 0x0083(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_95;                                 // 0x0084(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_96;                                  // 0x008C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimNodeFunctionRef                   __StructProperty_97;                               // 0x0090(0x0020)(BlueprintVisible, NoDestructor)
	class FName                                   __NameProperty_98;                                 // 0x00B0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_99;                                 // 0x00B8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x00C0(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0140(0x0018)()
};
static_assert(alignof(TestABP::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on TestABP::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(TestABP::FAnimBlueprintGeneratedConstantData) == 0x000158, "Wrong size on TestABP::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(TestABP::FAnimBlueprintGeneratedConstantData, __BlendProfile_79) == 0x000008, "Member 'TestABP::FAnimBlueprintGeneratedConstantData::__BlendProfile_79' has a wrong offset!");
static_assert(offsetof(TestABP::FAnimBlueprintGeneratedConstantData, __CurveFloat_80) == 0x000010, "Member 'TestABP::FAnimBlueprintGeneratedConstantData::__CurveFloat_80' has a wrong offset!");
static_assert(offsetof(TestABP::FAnimBlueprintGeneratedConstantData, __EnumProperty_81) == 0x000018, "Member 'TestABP::FAnimBlueprintGeneratedConstantData::__EnumProperty_81' has a wrong offset!");
static_assert(offsetof(TestABP::FAnimBlueprintGeneratedConstantData, __EnumProperty_82) == 0x000019, "Member 'TestABP::FAnimBlueprintGeneratedConstantData::__EnumProperty_82' has a wrong offset!");
static_assert(offsetof(TestABP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_83) == 0x000020, "Member 'TestABP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_83' has a wrong offset!");
static_assert(offsetof(TestABP::FAnimBlueprintGeneratedConstantData, __NameProperty_84) == 0x000030, "Member 'TestABP::FAnimBlueprintGeneratedConstantData::__NameProperty_84' has a wrong offset!");
static_assert(offsetof(TestABP::FAnimBlueprintGeneratedConstantData, __IntProperty_85) == 0x000038, "Member 'TestABP::FAnimBlueprintGeneratedConstantData::__IntProperty_85' has a wrong offset!");
static_assert(offsetof(TestABP::FAnimBlueprintGeneratedConstantData, __BoolProperty_86) == 0x00003C, "Member 'TestABP::FAnimBlueprintGeneratedConstantData::__BoolProperty_86' has a wrong offset!");
static_assert(offsetof(TestABP::FAnimBlueprintGeneratedConstantData, __NameProperty_87) == 0x000040, "Member 'TestABP::FAnimBlueprintGeneratedConstantData::__NameProperty_87' has a wrong offset!");
static_assert(offsetof(TestABP::FAnimBlueprintGeneratedConstantData, __IntProperty_88) == 0x000048, "Member 'TestABP::FAnimBlueprintGeneratedConstantData::__IntProperty_88' has a wrong offset!");
static_assert(offsetof(TestABP::FAnimBlueprintGeneratedConstantData, __FloatProperty_89) == 0x00004C, "Member 'TestABP::FAnimBlueprintGeneratedConstantData::__FloatProperty_89' has a wrong offset!");
static_assert(offsetof(TestABP::FAnimBlueprintGeneratedConstantData, __StructProperty_90) == 0x000050, "Member 'TestABP::FAnimBlueprintGeneratedConstantData::__StructProperty_90' has a wrong offset!");
static_assert(offsetof(TestABP::FAnimBlueprintGeneratedConstantData, __FloatProperty_91) == 0x00007C, "Member 'TestABP::FAnimBlueprintGeneratedConstantData::__FloatProperty_91' has a wrong offset!");
static_assert(offsetof(TestABP::FAnimBlueprintGeneratedConstantData, __BoolProperty_92) == 0x000080, "Member 'TestABP::FAnimBlueprintGeneratedConstantData::__BoolProperty_92' has a wrong offset!");
static_assert(offsetof(TestABP::FAnimBlueprintGeneratedConstantData, __EnumProperty_93) == 0x000081, "Member 'TestABP::FAnimBlueprintGeneratedConstantData::__EnumProperty_93' has a wrong offset!");
static_assert(offsetof(TestABP::FAnimBlueprintGeneratedConstantData, __ByteProperty_94) == 0x000082, "Member 'TestABP::FAnimBlueprintGeneratedConstantData::__ByteProperty_94' has a wrong offset!");
static_assert(offsetof(TestABP::FAnimBlueprintGeneratedConstantData, __NameProperty_95) == 0x000084, "Member 'TestABP::FAnimBlueprintGeneratedConstantData::__NameProperty_95' has a wrong offset!");
static_assert(offsetof(TestABP::FAnimBlueprintGeneratedConstantData, __IntProperty_96) == 0x00008C, "Member 'TestABP::FAnimBlueprintGeneratedConstantData::__IntProperty_96' has a wrong offset!");
static_assert(offsetof(TestABP::FAnimBlueprintGeneratedConstantData, __StructProperty_97) == 0x000090, "Member 'TestABP::FAnimBlueprintGeneratedConstantData::__StructProperty_97' has a wrong offset!");
static_assert(offsetof(TestABP::FAnimBlueprintGeneratedConstantData, __NameProperty_98) == 0x0000B0, "Member 'TestABP::FAnimBlueprintGeneratedConstantData::__NameProperty_98' has a wrong offset!");
static_assert(offsetof(TestABP::FAnimBlueprintGeneratedConstantData, __NameProperty_99) == 0x0000B8, "Member 'TestABP::FAnimBlueprintGeneratedConstantData::__NameProperty_99' has a wrong offset!");
static_assert(offsetof(TestABP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x0000C0, "Member 'TestABP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(TestABP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000140, "Member 'TestABP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

// ScriptStruct TestABP.TestABP_C.AnimBlueprintGeneratedMutableData
// 0x0001 (0x0002 - 0x0001)
struct TestABP::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	bool                                          __BoolProperty;                                    // 0x0001(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TestABP::FAnimBlueprintGeneratedMutableData) == 0x000001, "Wrong alignment on TestABP::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(TestABP::FAnimBlueprintGeneratedMutableData) == 0x000002, "Wrong size on TestABP::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(TestABP::FAnimBlueprintGeneratedMutableData, __BoolProperty) == 0x000001, "Member 'TestABP::FAnimBlueprintGeneratedMutableData::__BoolProperty' has a wrong offset!");

}

