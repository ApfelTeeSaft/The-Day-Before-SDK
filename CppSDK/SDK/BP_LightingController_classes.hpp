#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LightingController

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LightingController.BP_LightingController_C
// 0x00B0 (0x0340 - 0x0290)
class ABP_LightingController_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ADirectionalLight*                      LightSource;                                       // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class APostProcessVolume*                     PostProcess;                                       // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class AExponentialHeightFog*                  ExpHeightFog;                                      // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class ASkyAtmosphere*                         SkyAtmosphere;                                     // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class ASkyLight*                              SkyLight;                                          // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class AVolumetricCloud*                       VolumetricCloud;                                   // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	double                                        SkyLightIntensityOffset;                           // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SkyLightOffsetTarget;                              // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SkyLightIntensityBase;                             // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SkyLightColorDefault;                              // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PlayerInHUB;                                       // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F9[0x3];                                      // 0x02F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Delta_Seconds;                                     // 0x02FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SkyLightColorTarget;                               // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FogDensityDefault;                                 // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FogDensityTarget;                                  // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACustomSkyLight_C*                      CustomSkyLight;                                    // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                          Inside_House;                                      // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_329[0x7];                                      // 0x0329(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CurrentSkyLightMultiplier;                         // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        VolumetricScattering;                              // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_LightingController(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void SetPlayerInHUB(bool InHub);
	void SetSkyLightColor(const struct FLinearColor& Color);
	void SetSkylightOffset(double Offset);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LightingController_C">();
	}
	static class ABP_LightingController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LightingController_C>();
	}
};
static_assert(alignof(ABP_LightingController_C) == 0x000008, "Wrong alignment on ABP_LightingController_C");
static_assert(sizeof(ABP_LightingController_C) == 0x000340, "Wrong size on ABP_LightingController_C");
static_assert(offsetof(ABP_LightingController_C, UberGraphFrame) == 0x000290, "Member 'ABP_LightingController_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_LightingController_C, DefaultSceneRoot) == 0x000298, "Member 'ABP_LightingController_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_LightingController_C, LightSource) == 0x0002A0, "Member 'ABP_LightingController_C::LightSource' has a wrong offset!");
static_assert(offsetof(ABP_LightingController_C, PostProcess) == 0x0002A8, "Member 'ABP_LightingController_C::PostProcess' has a wrong offset!");
static_assert(offsetof(ABP_LightingController_C, ExpHeightFog) == 0x0002B0, "Member 'ABP_LightingController_C::ExpHeightFog' has a wrong offset!");
static_assert(offsetof(ABP_LightingController_C, SkyAtmosphere) == 0x0002B8, "Member 'ABP_LightingController_C::SkyAtmosphere' has a wrong offset!");
static_assert(offsetof(ABP_LightingController_C, SkyLight) == 0x0002C0, "Member 'ABP_LightingController_C::SkyLight' has a wrong offset!");
static_assert(offsetof(ABP_LightingController_C, VolumetricCloud) == 0x0002C8, "Member 'ABP_LightingController_C::VolumetricCloud' has a wrong offset!");
static_assert(offsetof(ABP_LightingController_C, SkyLightIntensityOffset) == 0x0002D0, "Member 'ABP_LightingController_C::SkyLightIntensityOffset' has a wrong offset!");
static_assert(offsetof(ABP_LightingController_C, SkyLightOffsetTarget) == 0x0002D8, "Member 'ABP_LightingController_C::SkyLightOffsetTarget' has a wrong offset!");
static_assert(offsetof(ABP_LightingController_C, SkyLightIntensityBase) == 0x0002E0, "Member 'ABP_LightingController_C::SkyLightIntensityBase' has a wrong offset!");
static_assert(offsetof(ABP_LightingController_C, SkyLightColorDefault) == 0x0002E8, "Member 'ABP_LightingController_C::SkyLightColorDefault' has a wrong offset!");
static_assert(offsetof(ABP_LightingController_C, PlayerInHUB) == 0x0002F8, "Member 'ABP_LightingController_C::PlayerInHUB' has a wrong offset!");
static_assert(offsetof(ABP_LightingController_C, Delta_Seconds) == 0x0002FC, "Member 'ABP_LightingController_C::Delta_Seconds' has a wrong offset!");
static_assert(offsetof(ABP_LightingController_C, SkyLightColorTarget) == 0x000300, "Member 'ABP_LightingController_C::SkyLightColorTarget' has a wrong offset!");
static_assert(offsetof(ABP_LightingController_C, FogDensityDefault) == 0x000310, "Member 'ABP_LightingController_C::FogDensityDefault' has a wrong offset!");
static_assert(offsetof(ABP_LightingController_C, FogDensityTarget) == 0x000318, "Member 'ABP_LightingController_C::FogDensityTarget' has a wrong offset!");
static_assert(offsetof(ABP_LightingController_C, CustomSkyLight) == 0x000320, "Member 'ABP_LightingController_C::CustomSkyLight' has a wrong offset!");
static_assert(offsetof(ABP_LightingController_C, Inside_House) == 0x000328, "Member 'ABP_LightingController_C::Inside_House' has a wrong offset!");
static_assert(offsetof(ABP_LightingController_C, CurrentSkyLightMultiplier) == 0x000330, "Member 'ABP_LightingController_C::CurrentSkyLightMultiplier' has a wrong offset!");
static_assert(offsetof(ABP_LightingController_C, VolumetricScattering) == 0x000338, "Member 'ABP_LightingController_C::VolumetricScattering' has a wrong offset!");

}
