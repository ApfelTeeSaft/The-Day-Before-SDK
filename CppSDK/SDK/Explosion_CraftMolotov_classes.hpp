#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Explosion_CraftMolotov

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Explosion_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Explosion_CraftMolotov.Explosion_CraftMolotov_C
// 0x0120 (0x03E0 - 0x02C0)
class AExplosion_CraftMolotov_C final : public AExplosion_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Explosion_CraftMolotov_C;           // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                   PointLight;                                        // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Niagara;                                           // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere_0;                                          // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Timeline_0_NewTrack_1_6301BAA7438A565FDC9E4980FDA1CEB4; // 0x02E0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_NewTrack_0_6301BAA7438A565FDC9E4980FDA1CEB4; // 0x02F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_6301BAA7438A565FDC9E4980FDA1CEB4; // 0x02F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F5[0x3];                                      // 0x02F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        Damage;                                            // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TimeDamage;                                        // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EndOverlapMolotov;                                 // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_311[0x7];                                      // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           Timer_End_Overlap;                                 // 0x0318(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFire;                                            // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEndFire;                                         // 0x0321(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_322[0x6];                                      // 0x0322(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 DecalBeforeMolotov;                                // 0x0328(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          FindStaticObject;                                  // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_331[0x7];                                      // 0x0331(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FHitResult>                     StaticObjects;                                     // 0x0338(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	uint8                                         Pad_348[0x8];                                      // 0x0348(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Spawn_transform;                                   // 0x0350(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Point_Light_Delay;                                 // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      Object_Types;                                      // 0x03B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 DecalExplosion;                                    // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Decal;                                             // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AddDecalEvent();
	void BndEvt__Explosion_Molotov_Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Explosion_Molotov_Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void CreateDecal();
	void DecalMolotov(double Radius);
	void DecalMolotovPerSecond(const TArray<struct FHitResult>& Objects);
	void EventEndMolotovOverlap(class ASurvivalPlayer_C* Player, double Param_Damage, const struct FVector& Origin, double Radius, double Param_TimeDamage);
	void ExecuteUbergraph_Explosion_CraftMolotov(int32 EntryPoint);
	void MolotovDamagePerSecondEnd();
	void RadialDamageMolotov();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ScaleDecal(class AActor* Param_Decal);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Explosion_CraftMolotov_C">();
	}
	static class AExplosion_CraftMolotov_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AExplosion_CraftMolotov_C>();
	}
};
static_assert(alignof(AExplosion_CraftMolotov_C) == 0x000010, "Wrong alignment on AExplosion_CraftMolotov_C");
static_assert(sizeof(AExplosion_CraftMolotov_C) == 0x0003E0, "Wrong size on AExplosion_CraftMolotov_C");
static_assert(offsetof(AExplosion_CraftMolotov_C, UberGraphFrame_Explosion_CraftMolotov_C) == 0x0002C0, "Member 'AExplosion_CraftMolotov_C::UberGraphFrame_Explosion_CraftMolotov_C' has a wrong offset!");
static_assert(offsetof(AExplosion_CraftMolotov_C, PointLight) == 0x0002C8, "Member 'AExplosion_CraftMolotov_C::PointLight' has a wrong offset!");
static_assert(offsetof(AExplosion_CraftMolotov_C, Niagara) == 0x0002D0, "Member 'AExplosion_CraftMolotov_C::Niagara' has a wrong offset!");
static_assert(offsetof(AExplosion_CraftMolotov_C, Sphere_0) == 0x0002D8, "Member 'AExplosion_CraftMolotov_C::Sphere_0' has a wrong offset!");
static_assert(offsetof(AExplosion_CraftMolotov_C, Timeline_0_NewTrack_1_6301BAA7438A565FDC9E4980FDA1CEB4) == 0x0002E0, "Member 'AExplosion_CraftMolotov_C::Timeline_0_NewTrack_1_6301BAA7438A565FDC9E4980FDA1CEB4' has a wrong offset!");
static_assert(offsetof(AExplosion_CraftMolotov_C, Timeline_0_NewTrack_0_6301BAA7438A565FDC9E4980FDA1CEB4) == 0x0002F0, "Member 'AExplosion_CraftMolotov_C::Timeline_0_NewTrack_0_6301BAA7438A565FDC9E4980FDA1CEB4' has a wrong offset!");
static_assert(offsetof(AExplosion_CraftMolotov_C, Timeline_0__Direction_6301BAA7438A565FDC9E4980FDA1CEB4) == 0x0002F4, "Member 'AExplosion_CraftMolotov_C::Timeline_0__Direction_6301BAA7438A565FDC9E4980FDA1CEB4' has a wrong offset!");
static_assert(offsetof(AExplosion_CraftMolotov_C, Timeline_0) == 0x0002F8, "Member 'AExplosion_CraftMolotov_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(AExplosion_CraftMolotov_C, Damage) == 0x000300, "Member 'AExplosion_CraftMolotov_C::Damage' has a wrong offset!");
static_assert(offsetof(AExplosion_CraftMolotov_C, TimeDamage) == 0x000308, "Member 'AExplosion_CraftMolotov_C::TimeDamage' has a wrong offset!");
static_assert(offsetof(AExplosion_CraftMolotov_C, EndOverlapMolotov) == 0x000310, "Member 'AExplosion_CraftMolotov_C::EndOverlapMolotov' has a wrong offset!");
static_assert(offsetof(AExplosion_CraftMolotov_C, Timer_End_Overlap) == 0x000318, "Member 'AExplosion_CraftMolotov_C::Timer_End_Overlap' has a wrong offset!");
static_assert(offsetof(AExplosion_CraftMolotov_C, IsFire) == 0x000320, "Member 'AExplosion_CraftMolotov_C::IsFire' has a wrong offset!");
static_assert(offsetof(AExplosion_CraftMolotov_C, IsEndFire) == 0x000321, "Member 'AExplosion_CraftMolotov_C::IsEndFire' has a wrong offset!");
static_assert(offsetof(AExplosion_CraftMolotov_C, DecalBeforeMolotov) == 0x000328, "Member 'AExplosion_CraftMolotov_C::DecalBeforeMolotov' has a wrong offset!");
static_assert(offsetof(AExplosion_CraftMolotov_C, FindStaticObject) == 0x000330, "Member 'AExplosion_CraftMolotov_C::FindStaticObject' has a wrong offset!");
static_assert(offsetof(AExplosion_CraftMolotov_C, StaticObjects) == 0x000338, "Member 'AExplosion_CraftMolotov_C::StaticObjects' has a wrong offset!");
static_assert(offsetof(AExplosion_CraftMolotov_C, Spawn_transform) == 0x000350, "Member 'AExplosion_CraftMolotov_C::Spawn_transform' has a wrong offset!");
static_assert(offsetof(AExplosion_CraftMolotov_C, Point_Light_Delay) == 0x0003B0, "Member 'AExplosion_CraftMolotov_C::Point_Light_Delay' has a wrong offset!");
static_assert(offsetof(AExplosion_CraftMolotov_C, Object_Types) == 0x0003B8, "Member 'AExplosion_CraftMolotov_C::Object_Types' has a wrong offset!");
static_assert(offsetof(AExplosion_CraftMolotov_C, DecalExplosion) == 0x0003C8, "Member 'AExplosion_CraftMolotov_C::DecalExplosion' has a wrong offset!");
static_assert(offsetof(AExplosion_CraftMolotov_C, Decal) == 0x0003D0, "Member 'AExplosion_CraftMolotov_C::Decal' has a wrong offset!");

}

