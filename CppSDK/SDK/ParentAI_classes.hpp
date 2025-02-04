#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ParentAI

#include "Basic.hpp"

#include "S_FloatMinMax_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "E_AIType_structs.hpp"
#include "BPE_Weapon_Type_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass ParentAI.ParentAI_C
// 0x0120 (0x0750 - 0x0630)
#pragma pack(push, 0x1)
class alignas(0x10) AParentAI_C : public ACharacter
{
public:
	uint8                                         Pad_628[0x8];                                      // 0x0628(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0630(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UGoreComponent*                         GoreComponent;                                     // 0x0638(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USmoothSync*                            SmoothSync;                                        // 0x0640(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWoundComponent_C*                      WoundComponent;                                    // 0x0648(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAIPerceptionStimuliSourceComponent*    AIPerceptionStimuliSource;                         // 0x0650(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            DestroyTimeline__Direction_DFB6075648181932ED4E64AC74E04BA6; // 0x0658(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_659[0x7];                                      // 0x0659(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     DestroyTimeline;                                   // 0x0660(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            DeactivateTimeline__Direction_3AA518384EF92EFCA1C4C0BB72630232; // 0x0668(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_669[0x7];                                      // 0x0669(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     DeactivateTimeline;                                // 0x0670(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_PhysBodyReact_NewTrack_0_2BB55C99413BE9C2E70DB795FDDA7ACA; // 0x0678(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_PhysBodyReact__Direction_2BB55C99413BE9C2E70DB795FDDA7ACA; // 0x067C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_67D[0x3];                                      // 0x067D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_PhysBodyReact;                            // 0x0680(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          IsActive__R;                                       // 0x0688(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_689[0x7];                                      // 0x0689(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFMODEvent*                             DeathSound;                                        // 0x0690(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        XP;                                                // 0x0698(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   XPSender;                                          // 0x06A0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           PhysicReactionBoneNames;                           // 0x06B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          InHit;                                             // 0x06C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C9[0x7];                                      // 0x06C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Health;                                            // 0x06D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Dead_R;                                            // 0x06D8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RagdollDeath_;                                     // 0x06D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DA[0x6];                                      // 0x06DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        DestroyActorDelay;                                 // 0x06E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxHealth;                                         // 0x06E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RandomSpeed_R;                                     // 0x06F0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_FloatMinMax                         Damage_MinMax_;                                    // 0x06F8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DisableHearing_;                                   // 0x0700(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DisableSight_;                                     // 0x0701(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_702[0x6];                                      // 0x0702(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Yaw_R;                                             // 0x0708(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Pitch_R;                                           // 0x0710(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RandomInteger_R;                                   // 0x0718(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71C[0x4];                                      // 0x071C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           PitchYawTimer;                                     // 0x0720(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRendered__R;                                     // 0x0728(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RenderOptimize_;                                   // 0x0729(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StartOptimize;                                     // 0x072A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DestroyAfterNotRender_;                            // 0x072B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72C[0x4];                                      // 0x072C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Yaw_Zombie__R;                                     // 0x0730(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                    ZombieIdleSound;                                   // 0x0738(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                    ZombieAggressiveSound;                             // 0x0740(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void Activate_Render__MULTI(bool Activtae_);
	void AIInteract(class ABP_Door_C* Door, class UArrowComponent* Arrow);
	void AvoidFire();
	void Pitch();
	void ChangeNavFilterClass(class UClass* DefaultNavigationFilterClass);
	void DeactivateTimeline__FinishedFunc();
	void DeactivateTimeline__UpdateFunc();
	void Death(class AController* InstigatedBy, double HitAngle, const struct FVector& HitLocation, class FName BoneName);
	void DestroyTimeline__FinishedFunc();
	void DestroyTimeline__UpdateFunc();
	void EnableHearing(const bool bEnable);
	void EnableSight(const bool bEnable);
	void EndDoorAttack();
	void ExecuteUbergraph_ParentAI(int32 EntryPoint);
	void GetHitAngle(class AController* InstigatedBy, double* HitAngle);
	void GetHitDistance(class AController* InstigatedBy, double* HitDistance);
	void GetXP(double* Param_XP);
	void InitWoundComponent();
	void IsBandit_(bool* Param_IsBandit_);
	void IsDead_(bool* Param_IsDead_);
	void IsZombie_(bool* Param_IsZombie_, class APawn** Zombie);
	void OnBlendOut_A3C9FE0E4D8CDA515290469B112790D1(class FName NotifyName);
	void OnCompleted_A3C9FE0E4D8CDA515290469B112790D1(class FName NotifyName);
	void OnInterrupted_A3C9FE0E4D8CDA515290469B112790D1(class FName NotifyName);
	void OnNotifyBegin_A3C9FE0E4D8CDA515290469B112790D1(class FName NotifyName);
	void OnNotifyEnd_A3C9FE0E4D8CDA515290469B112790D1(class FName NotifyName);
	void PhysicBodyReaction(class FName BoneName, double HitAngle, const struct FVector& HitLocation);
	void PlayBodyFallSound_MULTI();
	void PlayDeathSound_MULTI(double Value);
	void PlayersWeaponRandomWeight(class AActor* DamageCauser, bool* BoolWithWeight);
	void PlayMontage_MULTI(class USkeletalMeshComponent* Param_Mesh, class UAnimMontage* Montage, bool WithoutServer_);
	void PlaySound_MULTI(class UFMODEvent* FMODEvent, class USceneComponent* AttachToComponent, bool Occlusion_);
	void RandomInteger_ServerMinus_Clients_(int32 Min, int32 Max, int32* RandomInteger);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetInstigatorLocation(class AController* InstigatedBy, double SphereRadius, E_AIType AIType);
	void SetMoveSpeed_MULTI(double Speed);
	void SetMoveSpeed_SERV(double Speed);
	void SetOrToMov_SERV(bool _);
	void SetRandomMoveSpeed_MULTI(double Speed);
	void SetRandomMoveSpeed_SERV(double Speed);
	void SetRotYaw_SERV(bool _);
	void SpawnEmitter_MULTI(class UParticleSystem* EmitterTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale);
	void StartCalculatePitchYaw(bool Stop_);
	void StopCurrentMontage_MULTI(double InBlendOutTime);
	void StopCurrentMontageWithBlend(double InBlendOutTime);
	void Timeline_PhysBodyReact__FinishedFunc();
	void Timeline_PhysBodyReact__UpdateFunc();
	void Timer_CalculatePitchYaw();
	void TurnOnSenses();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ParentAI_C">();
	}
	static class AParentAI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AParentAI_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(AParentAI_C) == 0x000010, "Wrong alignment on AParentAI_C");
static_assert(sizeof(AParentAI_C) == 0x000750, "Wrong size on AParentAI_C");
static_assert(offsetof(AParentAI_C, UberGraphFrame) == 0x000630, "Member 'AParentAI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AParentAI_C, GoreComponent) == 0x000638, "Member 'AParentAI_C::GoreComponent' has a wrong offset!");
static_assert(offsetof(AParentAI_C, SmoothSync) == 0x000640, "Member 'AParentAI_C::SmoothSync' has a wrong offset!");
static_assert(offsetof(AParentAI_C, WoundComponent) == 0x000648, "Member 'AParentAI_C::WoundComponent' has a wrong offset!");
static_assert(offsetof(AParentAI_C, AIPerceptionStimuliSource) == 0x000650, "Member 'AParentAI_C::AIPerceptionStimuliSource' has a wrong offset!");
static_assert(offsetof(AParentAI_C, DestroyTimeline__Direction_DFB6075648181932ED4E64AC74E04BA6) == 0x000658, "Member 'AParentAI_C::DestroyTimeline__Direction_DFB6075648181932ED4E64AC74E04BA6' has a wrong offset!");
static_assert(offsetof(AParentAI_C, DestroyTimeline) == 0x000660, "Member 'AParentAI_C::DestroyTimeline' has a wrong offset!");
static_assert(offsetof(AParentAI_C, DeactivateTimeline__Direction_3AA518384EF92EFCA1C4C0BB72630232) == 0x000668, "Member 'AParentAI_C::DeactivateTimeline__Direction_3AA518384EF92EFCA1C4C0BB72630232' has a wrong offset!");
static_assert(offsetof(AParentAI_C, DeactivateTimeline) == 0x000670, "Member 'AParentAI_C::DeactivateTimeline' has a wrong offset!");
static_assert(offsetof(AParentAI_C, Timeline_PhysBodyReact_NewTrack_0_2BB55C99413BE9C2E70DB795FDDA7ACA) == 0x000678, "Member 'AParentAI_C::Timeline_PhysBodyReact_NewTrack_0_2BB55C99413BE9C2E70DB795FDDA7ACA' has a wrong offset!");
static_assert(offsetof(AParentAI_C, Timeline_PhysBodyReact__Direction_2BB55C99413BE9C2E70DB795FDDA7ACA) == 0x00067C, "Member 'AParentAI_C::Timeline_PhysBodyReact__Direction_2BB55C99413BE9C2E70DB795FDDA7ACA' has a wrong offset!");
static_assert(offsetof(AParentAI_C, Timeline_PhysBodyReact) == 0x000680, "Member 'AParentAI_C::Timeline_PhysBodyReact' has a wrong offset!");
static_assert(offsetof(AParentAI_C, IsActive__R) == 0x000688, "Member 'AParentAI_C::IsActive__R' has a wrong offset!");
static_assert(offsetof(AParentAI_C, DeathSound) == 0x000690, "Member 'AParentAI_C::DeathSound' has a wrong offset!");
static_assert(offsetof(AParentAI_C, XP) == 0x000698, "Member 'AParentAI_C::XP' has a wrong offset!");
static_assert(offsetof(AParentAI_C, XPSender) == 0x0006A0, "Member 'AParentAI_C::XPSender' has a wrong offset!");
static_assert(offsetof(AParentAI_C, PhysicReactionBoneNames) == 0x0006B8, "Member 'AParentAI_C::PhysicReactionBoneNames' has a wrong offset!");
static_assert(offsetof(AParentAI_C, InHit) == 0x0006C8, "Member 'AParentAI_C::InHit' has a wrong offset!");
static_assert(offsetof(AParentAI_C, Health) == 0x0006D0, "Member 'AParentAI_C::Health' has a wrong offset!");
static_assert(offsetof(AParentAI_C, Dead_R) == 0x0006D8, "Member 'AParentAI_C::Dead_R' has a wrong offset!");
static_assert(offsetof(AParentAI_C, RagdollDeath_) == 0x0006D9, "Member 'AParentAI_C::RagdollDeath_' has a wrong offset!");
static_assert(offsetof(AParentAI_C, DestroyActorDelay) == 0x0006E0, "Member 'AParentAI_C::DestroyActorDelay' has a wrong offset!");
static_assert(offsetof(AParentAI_C, MaxHealth) == 0x0006E8, "Member 'AParentAI_C::MaxHealth' has a wrong offset!");
static_assert(offsetof(AParentAI_C, RandomSpeed_R) == 0x0006F0, "Member 'AParentAI_C::RandomSpeed_R' has a wrong offset!");
static_assert(offsetof(AParentAI_C, Damage_MinMax_) == 0x0006F8, "Member 'AParentAI_C::Damage_MinMax_' has a wrong offset!");
static_assert(offsetof(AParentAI_C, DisableHearing_) == 0x000700, "Member 'AParentAI_C::DisableHearing_' has a wrong offset!");
static_assert(offsetof(AParentAI_C, DisableSight_) == 0x000701, "Member 'AParentAI_C::DisableSight_' has a wrong offset!");
static_assert(offsetof(AParentAI_C, Yaw_R) == 0x000708, "Member 'AParentAI_C::Yaw_R' has a wrong offset!");
static_assert(offsetof(AParentAI_C, Pitch_R) == 0x000710, "Member 'AParentAI_C::Pitch_R' has a wrong offset!");
static_assert(offsetof(AParentAI_C, RandomInteger_R) == 0x000718, "Member 'AParentAI_C::RandomInteger_R' has a wrong offset!");
static_assert(offsetof(AParentAI_C, PitchYawTimer) == 0x000720, "Member 'AParentAI_C::PitchYawTimer' has a wrong offset!");
static_assert(offsetof(AParentAI_C, IsRendered__R) == 0x000728, "Member 'AParentAI_C::IsRendered__R' has a wrong offset!");
static_assert(offsetof(AParentAI_C, RenderOptimize_) == 0x000729, "Member 'AParentAI_C::RenderOptimize_' has a wrong offset!");
static_assert(offsetof(AParentAI_C, StartOptimize) == 0x00072A, "Member 'AParentAI_C::StartOptimize' has a wrong offset!");
static_assert(offsetof(AParentAI_C, DestroyAfterNotRender_) == 0x00072B, "Member 'AParentAI_C::DestroyAfterNotRender_' has a wrong offset!");
static_assert(offsetof(AParentAI_C, Yaw_Zombie__R) == 0x000730, "Member 'AParentAI_C::Yaw_Zombie__R' has a wrong offset!");
static_assert(offsetof(AParentAI_C, ZombieIdleSound) == 0x000738, "Member 'AParentAI_C::ZombieIdleSound' has a wrong offset!");
static_assert(offsetof(AParentAI_C, ZombieAggressiveSound) == 0x000740, "Member 'AParentAI_C::ZombieAggressiveSound' has a wrong offset!");

}

