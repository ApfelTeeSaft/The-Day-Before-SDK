#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SurfaceEffectConfig

#include "Basic.hpp"

#include "PhysicsCore_structs.hpp"


namespace SDK
{

// UserDefinedStruct SurfaceEffectConfig.SurfaceEffectConfig
// 0x0018 (0x0018 - 0x0000)
struct FSurfaceEffectConfig final
{
public:
	EPhysicalSurface                              Surface_5_7BB8627C42DE787CCED5EBA66957B609;        // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             SkidSound_10_325C271B4B0E1AF52BFE588CB0AA1C98;     // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        SkidParticle_7_42D352E74D524EB323E9E78A9A9F6329;   // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FSurfaceEffectConfig) == 0x000008, "Wrong alignment on FSurfaceEffectConfig");
static_assert(sizeof(FSurfaceEffectConfig) == 0x000018, "Wrong size on FSurfaceEffectConfig");
static_assert(offsetof(FSurfaceEffectConfig, Surface_5_7BB8627C42DE787CCED5EBA66957B609) == 0x000000, "Member 'FSurfaceEffectConfig::Surface_5_7BB8627C42DE787CCED5EBA66957B609' has a wrong offset!");
static_assert(offsetof(FSurfaceEffectConfig, SkidSound_10_325C271B4B0E1AF52BFE588CB0AA1C98) == 0x000008, "Member 'FSurfaceEffectConfig::SkidSound_10_325C271B4B0E1AF52BFE588CB0AA1C98' has a wrong offset!");
static_assert(offsetof(FSurfaceEffectConfig, SkidParticle_7_42D352E74D524EB323E9E78A9A9F6329) == 0x000010, "Member 'FSurfaceEffectConfig::SkidParticle_7_42D352E74D524EB323E9E78A9A9F6329' has a wrong offset!");

}
