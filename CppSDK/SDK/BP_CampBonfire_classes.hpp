#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CampBonfire

#include "Basic.hpp"

#include "E_InteractType_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_CampPart_classes.hpp"
#include "E_ActorType_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CampBonfire.BP_CampBonfire_C
// 0x00B8 (0x0358 - 0x02A0)
class ABP_CampBonfire_C final : public ABP_CampPart_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_CampBonfire_C;                   // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        PlayerPos1;                                        // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        PlayerPos;                                         // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_TrailComponent_C*                   BP_TrailComponent;                                 // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   F;                                                 // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box1;                                              // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        ChickenPos;                                        // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        FoodPos;                                           // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Vertel;                                            // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               ParticleSystem;                                    // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Fireplace_01a;                                  // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  BonfireUser;                                       // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APickableFood_C*                        CookedFood;                                        // 0x0310(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        Fuel;                                              // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NeedToNotifyEmptyFuel;                             // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasFood;                                           // 0x0321(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_322[0x6];                                      // 0x0322(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         HouseBox;                                          // 0x0328(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          IsIgnition;                                        // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBurning;                                         // 0x0339(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33A[0x6];                                      // 0x033A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFMODAudioComponent*                    Sound;                                             // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldSpawnParticle;                               // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_349[0x7];                                      // 0x0349(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               ParticleRef;                                       // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void AddFuel();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ClearHouseBox();
	void CookFoodV2(const struct FS_CampCooking& Food);
	void CookFoodV3(const struct FS_CampCooking& Food);
	void CookFoodV3_Multi();
	void DestroyInteractable();
	void ExecuteUbergraph_BP_CampBonfire(int32 EntryPoint);
	void GetActorType(E_ActorType* ActorType);
	void HasFuel(bool* Has);
	void IsLocked_(bool* Result);
	void MultiStartIgnite(class ASurvivalPlayer_C* Player);
	void OnAddFuelClient();
	void OnBeginInteract(class APawn* Player);
	void OnBuildingState();
	void OnEndFuel();
	void OnEndFuelMulticast();
	void OnFocused(class APawn* Player, class AActor* HighlightActor, class UActorComponent* HighlightActorComponent, E_InteractType* InteractType, double* LateTime);
	void OnInteract(class APawn* Player);
	void OnInteract2(class APawn* Player);
	void OnInteract3(class APawn* Player);
	void OnInteractVehicle(class APawn* Player, int32 SitIndex, bool SkipAnimation);
	void OnLocalInteract(class APawn* Player);
	void OnLostFocus(class APawn* Player);
	void OnPlaceCamp();
	void OnSeen(class APawn* Player);
	void OnSquadCheckComplete();
	void OnStopInteract(class APawn* Player);
	void PreDestroy();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Release(class ASurvivalPlayer_C* Player);
	void ReleaseMulti();
	void Run_Lockpicking();
	void ServerStartCook(const struct FS_CampCooking& Food);
	void Set3DWidgetVisibility(bool Visible);
	void SetTutorial3DWidgetVisibility(bool Visible);
	void SpawnFoodV2(const class FString& Param_Name, int32 Count, class APickableFood_C** Food);
	void StartIgnite(class ASurvivalPlayer_C* Player);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CampBonfire_C">();
	}
	static class ABP_CampBonfire_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CampBonfire_C>();
	}
};
static_assert(alignof(ABP_CampBonfire_C) == 0x000008, "Wrong alignment on ABP_CampBonfire_C");
static_assert(sizeof(ABP_CampBonfire_C) == 0x000358, "Wrong size on ABP_CampBonfire_C");
static_assert(offsetof(ABP_CampBonfire_C, UberGraphFrame_BP_CampBonfire_C) == 0x0002A0, "Member 'ABP_CampBonfire_C::UberGraphFrame_BP_CampBonfire_C' has a wrong offset!");
static_assert(offsetof(ABP_CampBonfire_C, PlayerPos1) == 0x0002A8, "Member 'ABP_CampBonfire_C::PlayerPos1' has a wrong offset!");
static_assert(offsetof(ABP_CampBonfire_C, PlayerPos) == 0x0002B0, "Member 'ABP_CampBonfire_C::PlayerPos' has a wrong offset!");
static_assert(offsetof(ABP_CampBonfire_C, BP_TrailComponent) == 0x0002B8, "Member 'ABP_CampBonfire_C::BP_TrailComponent' has a wrong offset!");
static_assert(offsetof(ABP_CampBonfire_C, F) == 0x0002C0, "Member 'ABP_CampBonfire_C::F' has a wrong offset!");
static_assert(offsetof(ABP_CampBonfire_C, Box1) == 0x0002C8, "Member 'ABP_CampBonfire_C::Box1' has a wrong offset!");
static_assert(offsetof(ABP_CampBonfire_C, Box) == 0x0002D0, "Member 'ABP_CampBonfire_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_CampBonfire_C, Sphere) == 0x0002D8, "Member 'ABP_CampBonfire_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_CampBonfire_C, ChickenPos) == 0x0002E0, "Member 'ABP_CampBonfire_C::ChickenPos' has a wrong offset!");
static_assert(offsetof(ABP_CampBonfire_C, FoodPos) == 0x0002E8, "Member 'ABP_CampBonfire_C::FoodPos' has a wrong offset!");
static_assert(offsetof(ABP_CampBonfire_C, Vertel) == 0x0002F0, "Member 'ABP_CampBonfire_C::Vertel' has a wrong offset!");
static_assert(offsetof(ABP_CampBonfire_C, ParticleSystem) == 0x0002F8, "Member 'ABP_CampBonfire_C::ParticleSystem' has a wrong offset!");
static_assert(offsetof(ABP_CampBonfire_C, SM_Fireplace_01a) == 0x000300, "Member 'ABP_CampBonfire_C::SM_Fireplace_01a' has a wrong offset!");
static_assert(offsetof(ABP_CampBonfire_C, BonfireUser) == 0x000308, "Member 'ABP_CampBonfire_C::BonfireUser' has a wrong offset!");
static_assert(offsetof(ABP_CampBonfire_C, CookedFood) == 0x000310, "Member 'ABP_CampBonfire_C::CookedFood' has a wrong offset!");
static_assert(offsetof(ABP_CampBonfire_C, Fuel) == 0x000318, "Member 'ABP_CampBonfire_C::Fuel' has a wrong offset!");
static_assert(offsetof(ABP_CampBonfire_C, NeedToNotifyEmptyFuel) == 0x000320, "Member 'ABP_CampBonfire_C::NeedToNotifyEmptyFuel' has a wrong offset!");
static_assert(offsetof(ABP_CampBonfire_C, HasFood) == 0x000321, "Member 'ABP_CampBonfire_C::HasFood' has a wrong offset!");
static_assert(offsetof(ABP_CampBonfire_C, HouseBox) == 0x000328, "Member 'ABP_CampBonfire_C::HouseBox' has a wrong offset!");
static_assert(offsetof(ABP_CampBonfire_C, IsIgnition) == 0x000338, "Member 'ABP_CampBonfire_C::IsIgnition' has a wrong offset!");
static_assert(offsetof(ABP_CampBonfire_C, IsBurning) == 0x000339, "Member 'ABP_CampBonfire_C::IsBurning' has a wrong offset!");
static_assert(offsetof(ABP_CampBonfire_C, Sound) == 0x000340, "Member 'ABP_CampBonfire_C::Sound' has a wrong offset!");
static_assert(offsetof(ABP_CampBonfire_C, ShouldSpawnParticle) == 0x000348, "Member 'ABP_CampBonfire_C::ShouldSpawnParticle' has a wrong offset!");
static_assert(offsetof(ABP_CampBonfire_C, ParticleRef) == 0x000350, "Member 'ABP_CampBonfire_C::ParticleRef' has a wrong offset!");

}
