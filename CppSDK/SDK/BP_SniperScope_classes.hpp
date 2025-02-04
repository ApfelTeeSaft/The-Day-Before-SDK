#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SniperScope

#include "Basic.hpp"

#include "BP_ScopeBase_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SniperScope.BP_SniperScope_C
// 0x0080 (0x0738 - 0x06B8)
class ABP_SniperScope_C final : public ABP_ScopeBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SniperScope_C;                   // 0x06B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   FP_Vortex_Spitfire_3X_Vortex_Spitfire_3x_Edging;   // 0x06C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        ScopeRoot;                                         // 0x06C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Scope_Object015;                                   // 0x06D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Scope_Linza_low;                                   // 0x06D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         RecoilTimeline_Float_250B6A0445F41301FD28848CA1C0D871; // 0x06E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            RecoilTimeline__Direction_250B6A0445F41301FD28848CA1C0D871; // 0x06E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E5[0x3];                                      // 0x06E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     RecoilTimeline;                                    // 0x06E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          InAim;                                             // 0x06F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F1[0x7];                                      // 0x06F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Aperture__FMinusstop_;                             // 0x06F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Maximum_Aperture__Min_FMinusstop_;                 // 0x0700(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Focal_Distance;                                    // 0x0708(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Depth_Blur_Km_For_50_;                             // 0x0710(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Depth_Blur_Radius;                                 // 0x0718(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnRecoil;                                          // 0x0720(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UCurveFloat*                            Curve;                                             // 0x0730(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Aim();
	void ClearChild();
	void ExecuteUbergraph_BP_SniperScope(int32 EntryPoint);
	void InitializeOnEquip();
	void OnRecoil__DelegateSignature();
	void ReceiveBeginPlay();
	void Recoil();
	void RecoilTimeline__FinishedFunc();
	void RecoilTimeline__UpdateFunc();
	void StopAim();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SniperScope_C">();
	}
	static class ABP_SniperScope_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SniperScope_C>();
	}
};
static_assert(alignof(ABP_SniperScope_C) == 0x000008, "Wrong alignment on ABP_SniperScope_C");
static_assert(sizeof(ABP_SniperScope_C) == 0x000738, "Wrong size on ABP_SniperScope_C");
static_assert(offsetof(ABP_SniperScope_C, UberGraphFrame_BP_SniperScope_C) == 0x0006B8, "Member 'ABP_SniperScope_C::UberGraphFrame_BP_SniperScope_C' has a wrong offset!");
static_assert(offsetof(ABP_SniperScope_C, FP_Vortex_Spitfire_3X_Vortex_Spitfire_3x_Edging) == 0x0006C0, "Member 'ABP_SniperScope_C::FP_Vortex_Spitfire_3X_Vortex_Spitfire_3x_Edging' has a wrong offset!");
static_assert(offsetof(ABP_SniperScope_C, ScopeRoot) == 0x0006C8, "Member 'ABP_SniperScope_C::ScopeRoot' has a wrong offset!");
static_assert(offsetof(ABP_SniperScope_C, Scope_Object015) == 0x0006D0, "Member 'ABP_SniperScope_C::Scope_Object015' has a wrong offset!");
static_assert(offsetof(ABP_SniperScope_C, Scope_Linza_low) == 0x0006D8, "Member 'ABP_SniperScope_C::Scope_Linza_low' has a wrong offset!");
static_assert(offsetof(ABP_SniperScope_C, RecoilTimeline_Float_250B6A0445F41301FD28848CA1C0D871) == 0x0006E0, "Member 'ABP_SniperScope_C::RecoilTimeline_Float_250B6A0445F41301FD28848CA1C0D871' has a wrong offset!");
static_assert(offsetof(ABP_SniperScope_C, RecoilTimeline__Direction_250B6A0445F41301FD28848CA1C0D871) == 0x0006E4, "Member 'ABP_SniperScope_C::RecoilTimeline__Direction_250B6A0445F41301FD28848CA1C0D871' has a wrong offset!");
static_assert(offsetof(ABP_SniperScope_C, RecoilTimeline) == 0x0006E8, "Member 'ABP_SniperScope_C::RecoilTimeline' has a wrong offset!");
static_assert(offsetof(ABP_SniperScope_C, InAim) == 0x0006F0, "Member 'ABP_SniperScope_C::InAim' has a wrong offset!");
static_assert(offsetof(ABP_SniperScope_C, Aperture__FMinusstop_) == 0x0006F8, "Member 'ABP_SniperScope_C::Aperture__FMinusstop_' has a wrong offset!");
static_assert(offsetof(ABP_SniperScope_C, Maximum_Aperture__Min_FMinusstop_) == 0x000700, "Member 'ABP_SniperScope_C::Maximum_Aperture__Min_FMinusstop_' has a wrong offset!");
static_assert(offsetof(ABP_SniperScope_C, Focal_Distance) == 0x000708, "Member 'ABP_SniperScope_C::Focal_Distance' has a wrong offset!");
static_assert(offsetof(ABP_SniperScope_C, Depth_Blur_Km_For_50_) == 0x000710, "Member 'ABP_SniperScope_C::Depth_Blur_Km_For_50_' has a wrong offset!");
static_assert(offsetof(ABP_SniperScope_C, Depth_Blur_Radius) == 0x000718, "Member 'ABP_SniperScope_C::Depth_Blur_Radius' has a wrong offset!");
static_assert(offsetof(ABP_SniperScope_C, OnRecoil) == 0x000720, "Member 'ABP_SniperScope_C::OnRecoil' has a wrong offset!");
static_assert(offsetof(ABP_SniperScope_C, Curve) == 0x000730, "Member 'ABP_SniperScope_C::Curve' has a wrong offset!");

}

