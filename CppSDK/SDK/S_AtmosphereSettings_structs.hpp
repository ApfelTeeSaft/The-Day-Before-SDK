#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_AtmosphereSettings

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_AtmosphereSettings.S_AtmosphereSettings
// 0x0044 (0x0044 - 0x0000)
struct FS_AtmosphereSettings final
{
public:
	float                                         SL_Intensity_50_69FB4F5446B59EA32100C595DD483A68;  // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SL_LightColor_51_B89F4FA244119CEBCE32D7A7CEEB9650; // 0x0004(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SL_LowerHemisphereColor_52_4EE9548A4B50E3860C960C85A28F57E4; // 0x0014(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SL_OcclusionExponent_53_38E9E1224D6AC35450BA678C04976251; // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 SL_OcclusionTint_54_43BB452A41C90FBCCDC289B84AD67C36; // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SL_FogInscatteringColor_55_9EA52A5F4D40F699849E9AA00685F8B3; // 0x002C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SL_VolumetricFogScatteringDistribution_56_BD91F68E427F70BAEEB4A783AADB362C; // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HF_ExtinctionScale_58_29862F3B4DF199B5BD126E8019FBC92F; // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_AtmosphereSettings) == 0x000004, "Wrong alignment on FS_AtmosphereSettings");
static_assert(sizeof(FS_AtmosphereSettings) == 0x000044, "Wrong size on FS_AtmosphereSettings");
static_assert(offsetof(FS_AtmosphereSettings, SL_Intensity_50_69FB4F5446B59EA32100C595DD483A68) == 0x000000, "Member 'FS_AtmosphereSettings::SL_Intensity_50_69FB4F5446B59EA32100C595DD483A68' has a wrong offset!");
static_assert(offsetof(FS_AtmosphereSettings, SL_LightColor_51_B89F4FA244119CEBCE32D7A7CEEB9650) == 0x000004, "Member 'FS_AtmosphereSettings::SL_LightColor_51_B89F4FA244119CEBCE32D7A7CEEB9650' has a wrong offset!");
static_assert(offsetof(FS_AtmosphereSettings, SL_LowerHemisphereColor_52_4EE9548A4B50E3860C960C85A28F57E4) == 0x000014, "Member 'FS_AtmosphereSettings::SL_LowerHemisphereColor_52_4EE9548A4B50E3860C960C85A28F57E4' has a wrong offset!");
static_assert(offsetof(FS_AtmosphereSettings, SL_OcclusionExponent_53_38E9E1224D6AC35450BA678C04976251) == 0x000024, "Member 'FS_AtmosphereSettings::SL_OcclusionExponent_53_38E9E1224D6AC35450BA678C04976251' has a wrong offset!");
static_assert(offsetof(FS_AtmosphereSettings, SL_OcclusionTint_54_43BB452A41C90FBCCDC289B84AD67C36) == 0x000028, "Member 'FS_AtmosphereSettings::SL_OcclusionTint_54_43BB452A41C90FBCCDC289B84AD67C36' has a wrong offset!");
static_assert(offsetof(FS_AtmosphereSettings, SL_FogInscatteringColor_55_9EA52A5F4D40F699849E9AA00685F8B3) == 0x00002C, "Member 'FS_AtmosphereSettings::SL_FogInscatteringColor_55_9EA52A5F4D40F699849E9AA00685F8B3' has a wrong offset!");
static_assert(offsetof(FS_AtmosphereSettings, SL_VolumetricFogScatteringDistribution_56_BD91F68E427F70BAEEB4A783AADB362C) == 0x00003C, "Member 'FS_AtmosphereSettings::SL_VolumetricFogScatteringDistribution_56_BD91F68E427F70BAEEB4A783AADB362C' has a wrong offset!");
static_assert(offsetof(FS_AtmosphereSettings, HF_ExtinctionScale_58_29862F3B4DF199B5BD126E8019FBC92F) == 0x000040, "Member 'FS_AtmosphereSettings::HF_ExtinctionScale_58_29862F3B4DF199B5BD126E8019FBC92F' has a wrong offset!");

}
