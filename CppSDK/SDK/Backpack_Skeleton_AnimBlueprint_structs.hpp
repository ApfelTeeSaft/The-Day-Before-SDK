#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Backpack_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct Backpack_Skeleton_AnimBlueprint.Backpack_Skeleton_AnimBlueprint_C.AnimBlueprintGeneratedConstantData
// 0x0177 (0x0178 - 0x0001)
struct Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_170;                                // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 __ArrayProperty_171;                               // 0x0010(0x0010)(BlueprintVisible)
	bool                                          __BoolProperty_172;                                // 0x0020(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_173;                                // 0x0024(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_174;                                 // 0x002C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_175;                                // 0x0030(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_176;                               // 0x0038(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_177;                              // 0x003C(0x002C)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_178;                               // 0x0068(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_179;                                // 0x006C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_180;                                // 0x006D(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E[0x2];                                       // 0x006E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_181;                                // 0x0070(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_182;                                // 0x0078(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_183;                                 // 0x0080(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_184;                                // 0x0084(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_185;                                // 0x008C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_186;                                 // 0x0094(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimNodeFunctionRef                   __StructProperty_187;                              // 0x0098(0x0020)(BlueprintVisible, NoDestructor)
	class UBlendProfile*                          __BlendProfile_188;                                // 0x00B8(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            __CurveFloat_189;                                  // 0x00C0(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          __BoolProperty_190;                                // 0x00C8(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAlphaBlendOption                             __EnumProperty_191;                                // 0x00C9(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlendListTransitionType                      __EnumProperty_192;                                // 0x00CA(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CB[0x5];                                       // 0x00CB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_193;                               // 0x00D0(0x0010)(BlueprintVisible, EditFixedSize)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x00E0(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0160(0x0018)()
};
static_assert(alignof(Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData) == 0x000178, "Wrong size on Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData, __NameProperty_170) == 0x000004, "Member 'Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData::__NameProperty_170' has a wrong offset!");
static_assert(offsetof(Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData, __ArrayProperty_171) == 0x000010, "Member 'Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData::__ArrayProperty_171' has a wrong offset!");
static_assert(offsetof(Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData, __BoolProperty_172) == 0x000020, "Member 'Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData::__BoolProperty_172' has a wrong offset!");
static_assert(offsetof(Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData, __NameProperty_173) == 0x000024, "Member 'Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData::__NameProperty_173' has a wrong offset!");
static_assert(offsetof(Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData, __IntProperty_174) == 0x00002C, "Member 'Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData::__IntProperty_174' has a wrong offset!");
static_assert(offsetof(Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData, __NameProperty_175) == 0x000030, "Member 'Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData::__NameProperty_175' has a wrong offset!");
static_assert(offsetof(Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData, __FloatProperty_176) == 0x000038, "Member 'Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData::__FloatProperty_176' has a wrong offset!");
static_assert(offsetof(Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData, __StructProperty_177) == 0x00003C, "Member 'Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData::__StructProperty_177' has a wrong offset!");
static_assert(offsetof(Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData, __FloatProperty_178) == 0x000068, "Member 'Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData::__FloatProperty_178' has a wrong offset!");
static_assert(offsetof(Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData, __EnumProperty_179) == 0x00006C, "Member 'Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData::__EnumProperty_179' has a wrong offset!");
static_assert(offsetof(Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData, __ByteProperty_180) == 0x00006D, "Member 'Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData::__ByteProperty_180' has a wrong offset!");
static_assert(offsetof(Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData, __NameProperty_181) == 0x000070, "Member 'Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData::__NameProperty_181' has a wrong offset!");
static_assert(offsetof(Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData, __NameProperty_182) == 0x000078, "Member 'Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData::__NameProperty_182' has a wrong offset!");
static_assert(offsetof(Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData, __IntProperty_183) == 0x000080, "Member 'Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData::__IntProperty_183' has a wrong offset!");
static_assert(offsetof(Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData, __NameProperty_184) == 0x000084, "Member 'Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData::__NameProperty_184' has a wrong offset!");
static_assert(offsetof(Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData, __NameProperty_185) == 0x00008C, "Member 'Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData::__NameProperty_185' has a wrong offset!");
static_assert(offsetof(Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData, __IntProperty_186) == 0x000094, "Member 'Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData::__IntProperty_186' has a wrong offset!");
static_assert(offsetof(Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData, __StructProperty_187) == 0x000098, "Member 'Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData::__StructProperty_187' has a wrong offset!");
static_assert(offsetof(Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData, __BlendProfile_188) == 0x0000B8, "Member 'Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData::__BlendProfile_188' has a wrong offset!");
static_assert(offsetof(Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData, __CurveFloat_189) == 0x0000C0, "Member 'Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData::__CurveFloat_189' has a wrong offset!");
static_assert(offsetof(Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData, __BoolProperty_190) == 0x0000C8, "Member 'Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData::__BoolProperty_190' has a wrong offset!");
static_assert(offsetof(Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData, __EnumProperty_191) == 0x0000C9, "Member 'Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData::__EnumProperty_191' has a wrong offset!");
static_assert(offsetof(Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData, __EnumProperty_192) == 0x0000CA, "Member 'Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData::__EnumProperty_192' has a wrong offset!");
static_assert(offsetof(Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData, __ArrayProperty_193) == 0x0000D0, "Member 'Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData::__ArrayProperty_193' has a wrong offset!");
static_assert(offsetof(Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x0000E0, "Member 'Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000160, "Member 'Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

// ScriptStruct Backpack_Skeleton_AnimBlueprint.Backpack_Skeleton_AnimBlueprint_C.AnimBlueprintGeneratedMutableData
// 0x0002 (0x0003 - 0x0001)
struct Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	uint8                                         __ByteProperty;                                    // 0x0001(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_0;                                  // 0x0002(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedMutableData) == 0x000001, "Wrong alignment on Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedMutableData) == 0x000003, "Wrong size on Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedMutableData, __ByteProperty) == 0x000001, "Member 'Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedMutableData::__ByteProperty' has a wrong offset!");
static_assert(offsetof(Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedMutableData, __BoolProperty_0) == 0x000002, "Member 'Backpack_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedMutableData::__BoolProperty_0' has a wrong offset!");

}
