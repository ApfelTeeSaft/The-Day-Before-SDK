#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ParentAIDetourController

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_PerceptionType_structs.hpp"
#include "AIModule_structs.hpp"
#include "Survival_structs.hpp"
#include "Survival_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass ParentAIDetourController.ParentAIDetourController_C
// 0x0318 (0x06D8 - 0x03C0)
class AParentAIDetourController_C : public AAIControllerTeam
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPawnSensingComponent*                  PawnSensing;                                       // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAIPerceptionComponent*                 AIPerception;                                      // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  AI;                                                // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBehaviorTree*                          BT;                                                // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 HearedEnemy;                                       // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          DisableReactions;                                  // 0x03F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PrintDebug;                                        // 0x03F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DisableSight;                                      // 0x03F2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DisableHearing;                                    // 0x03F3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F4[0x4];                                      // 0x03F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         SeenActors;                                        // 0x03F8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class AActor*                                 SeenEnemy;                                         // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        DistanceLimiter;                                   // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BlockSightEvent;                                   // 0x0418(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_419[0x7];                                      // 0x0419(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        HomeDistanceLimiter;                               // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DisableBT;                                         // 0x0428(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsActiveAI;                                        // 0x0429(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42A[0x6];                                      // 0x042A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSeenActor;                                       // 0x0430(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                   TargetLastHearedLocation;                          // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 StartSensedActor;                                  // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FAIStimulus                            StartStimulus;                                     // 0x0450(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FVector                                StimulusLocation;                                  // 0x04A8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   StimulusTag;                                       // 0x04C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UAISense>                   StimulusSenseClass;                                // 0x04C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class FName                                   TargetHeared;                                      // 0x04D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Enemy;                                             // 0x04D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TargetIsVisible;                                   // 0x04E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   HomeLocation;                                      // 0x04E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_PerceptionType                              PerceptionType;                                    // 0x04F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F1[0x7];                                      // 0x04F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           LoseTargetTimer;                                   // 0x04F8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        TimeTillLastSight;                                 // 0x0500(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LoseTargetTickTime;                                // 0x0508(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LoseTargetTimeLimit;                               // 0x050C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ChangedTarget;                                     // 0x0510(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_511[0x3];                                      // 0x0511(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   StartScreaming;                                    // 0x0514(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51C[0x4];                                      // 0x051C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AZombie_C*                              Zombie;                                            // 0x0520(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        LosingTargetThreshold;                             // 0x0528(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AfterAlarm;                                        // 0x0530(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_531[0x3];                                      // 0x0531(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NearPlayersNum;                                    // 0x0534(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsAnyPlayerNear;                                  // 0x0538(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_539[0x7];                                      // 0x0539(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           PlayerIsNearTimer;                                 // 0x0540(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          TargetKnockedDown;                                 // 0x0548(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_549[0x7];                                      // 0x0549(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           TimerCheckTargetHP;                                // 0x0550(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bDisableSleepingMode;                              // 0x0558(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_559[0x7];                                      // 0x0559(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<double>                                Movement_LODs;                                     // 0x0560(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          EnableMovementLODs;                                // 0x0570(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_571[0x7];                                      // 0x0571(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class AActor*, int32>                    Players_LOD_indexes;                               // 0x0578(0x0050)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         CurrentMovementLOD;                                // 0x05C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CC[0x4];                                      // 0x05CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<int32, double>                           Movement_LOD_Multipliers;                          // 0x05D0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int32, double>                           Perception_LOD_Ticks;                              // 0x0620(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int32, double>                           NetUpdate_LOD_Frequency_Dividers;                  // 0x0670(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bIgnoreCars;                                       // 0x06C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C1[0x3];                                      // 0x06C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CarIgnoreTimeAfterDamage;                          // 0x06C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCarsAreAlwaysLowPriority;                         // 0x06C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C9[0x7];                                      // 0x06C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           KillOnLongSleepTimer;                              // 0x06D0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ActorHeared();
	void ActorSeen(class AActor* SeenActor, bool DamageSense);
	void Adjust_Movement_LOD();
	void BindToDelegates();
	void BndEvt__AIPerception_K2Node_ComponentBoundEvent_3_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus);
	void BndEvt__ParentAIDetourController_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(class APawn* Param_Pawn);
	void CalculateDistance(class AActor*& Actor, double* Distance);
	void Can_Detect_Special_Zombie(class AActor* Actor, bool* CanDetect);
	bool CantHear();
	bool CantSee();
	void CheckForClearView(bool* Clear);
	void CheckIsClosest(class AActor*& SeenActor, bool* IsClosest);
	void CheckIsOptimizationHearing(class UObject* Actor, const struct FAIStimulus& AIStimulus);
	void CheckMovementLOD(double Distance, class AActor* PlayerActor);
	void CheckNextNearestActor(class AActor** NewActor);
	void CheckTargetHP();
	void ClearVariablesAfterSight();
	void DamageSensed();
	void DelaySetAfterKill();
	void ExecuteUbergraph_ParentAIDetourController(int32 EntryPoint);
	void FindClosestActor(class AActor** ClosestActor);
	void HasSupressor(class AActor* HearedActor, bool* Param_HasSupressor);
	void InitializeVariablesOnPerception(class AActor* Actor, const struct FAIStimulus& Stimulus);
	bool Is_Target_Car(class UObject* Object);
	void IsTargetEmptyCar(class AActor* Actor, bool* Result);
	void KillOnLongSleep();
	void LoadSoundsAfterNetcull();
	void LosingTargetProcess();
	void On_Player_Death();
	void On_Player_Death_After_Timer();
	void OnEndScreaming();
	void OnPlayerKnockedDown();
	void OnSeenActor__DelegateSignature(class AActor* SeenActor);
	void Optimization_Adjustments_Needed(bool bIsPlayerNear);
	void PlayerDeathEP(class AActor* Actor, uint8 Byte);
	void ReceiveBeginPlay();
	void Set_Check_Target_HP_Timer();
	void Set_Sleep_Mode_Enabled(bool Enabled);
	void SetIgnoreCars();
	void SetNoPlayersNear();
	void SetupLosingTargetTimer();
	void SetupVariablesAfterHearing();
	void SetupVariablesAfterSight();
	void StartNoPlayerNearTimer();
	bool TargetIsTooFar();
	void TriggeredByAlarm(class AActor* SeenActor);
	void UnbindFromDelegates();
	void UnsetIgnoreCars();
	void ValidatePerception(E_PerceptionType* Param_PerceptionType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ParentAIDetourController_C">();
	}
	static class AParentAIDetourController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AParentAIDetourController_C>();
	}
};
static_assert(alignof(AParentAIDetourController_C) == 0x000008, "Wrong alignment on AParentAIDetourController_C");
static_assert(sizeof(AParentAIDetourController_C) == 0x0006D8, "Wrong size on AParentAIDetourController_C");
static_assert(offsetof(AParentAIDetourController_C, UberGraphFrame) == 0x0003C0, "Member 'AParentAIDetourController_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, PawnSensing) == 0x0003C8, "Member 'AParentAIDetourController_C::PawnSensing' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, AIPerception) == 0x0003D0, "Member 'AParentAIDetourController_C::AIPerception' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, AI) == 0x0003D8, "Member 'AParentAIDetourController_C::AI' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, BT) == 0x0003E0, "Member 'AParentAIDetourController_C::BT' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, HearedEnemy) == 0x0003E8, "Member 'AParentAIDetourController_C::HearedEnemy' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, DisableReactions) == 0x0003F0, "Member 'AParentAIDetourController_C::DisableReactions' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, PrintDebug) == 0x0003F1, "Member 'AParentAIDetourController_C::PrintDebug' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, DisableSight) == 0x0003F2, "Member 'AParentAIDetourController_C::DisableSight' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, DisableHearing) == 0x0003F3, "Member 'AParentAIDetourController_C::DisableHearing' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, SeenActors) == 0x0003F8, "Member 'AParentAIDetourController_C::SeenActors' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, SeenEnemy) == 0x000408, "Member 'AParentAIDetourController_C::SeenEnemy' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, DistanceLimiter) == 0x000410, "Member 'AParentAIDetourController_C::DistanceLimiter' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, BlockSightEvent) == 0x000418, "Member 'AParentAIDetourController_C::BlockSightEvent' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, HomeDistanceLimiter) == 0x000420, "Member 'AParentAIDetourController_C::HomeDistanceLimiter' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, DisableBT) == 0x000428, "Member 'AParentAIDetourController_C::DisableBT' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, IsActiveAI) == 0x000429, "Member 'AParentAIDetourController_C::IsActiveAI' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, OnSeenActor) == 0x000430, "Member 'AParentAIDetourController_C::OnSeenActor' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, TargetLastHearedLocation) == 0x000440, "Member 'AParentAIDetourController_C::TargetLastHearedLocation' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, StartSensedActor) == 0x000448, "Member 'AParentAIDetourController_C::StartSensedActor' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, StartStimulus) == 0x000450, "Member 'AParentAIDetourController_C::StartStimulus' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, StimulusLocation) == 0x0004A8, "Member 'AParentAIDetourController_C::StimulusLocation' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, StimulusTag) == 0x0004C0, "Member 'AParentAIDetourController_C::StimulusTag' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, StimulusSenseClass) == 0x0004C8, "Member 'AParentAIDetourController_C::StimulusSenseClass' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, TargetHeared) == 0x0004D0, "Member 'AParentAIDetourController_C::TargetHeared' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, Enemy) == 0x0004D8, "Member 'AParentAIDetourController_C::Enemy' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, TargetIsVisible) == 0x0004E0, "Member 'AParentAIDetourController_C::TargetIsVisible' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, HomeLocation) == 0x0004E8, "Member 'AParentAIDetourController_C::HomeLocation' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, PerceptionType) == 0x0004F0, "Member 'AParentAIDetourController_C::PerceptionType' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, LoseTargetTimer) == 0x0004F8, "Member 'AParentAIDetourController_C::LoseTargetTimer' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, TimeTillLastSight) == 0x000500, "Member 'AParentAIDetourController_C::TimeTillLastSight' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, LoseTargetTickTime) == 0x000508, "Member 'AParentAIDetourController_C::LoseTargetTickTime' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, LoseTargetTimeLimit) == 0x00050C, "Member 'AParentAIDetourController_C::LoseTargetTimeLimit' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, ChangedTarget) == 0x000510, "Member 'AParentAIDetourController_C::ChangedTarget' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, StartScreaming) == 0x000514, "Member 'AParentAIDetourController_C::StartScreaming' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, Zombie) == 0x000520, "Member 'AParentAIDetourController_C::Zombie' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, LosingTargetThreshold) == 0x000528, "Member 'AParentAIDetourController_C::LosingTargetThreshold' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, AfterAlarm) == 0x000530, "Member 'AParentAIDetourController_C::AfterAlarm' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, NearPlayersNum) == 0x000534, "Member 'AParentAIDetourController_C::NearPlayersNum' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, bIsAnyPlayerNear) == 0x000538, "Member 'AParentAIDetourController_C::bIsAnyPlayerNear' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, PlayerIsNearTimer) == 0x000540, "Member 'AParentAIDetourController_C::PlayerIsNearTimer' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, TargetKnockedDown) == 0x000548, "Member 'AParentAIDetourController_C::TargetKnockedDown' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, TimerCheckTargetHP) == 0x000550, "Member 'AParentAIDetourController_C::TimerCheckTargetHP' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, bDisableSleepingMode) == 0x000558, "Member 'AParentAIDetourController_C::bDisableSleepingMode' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, Movement_LODs) == 0x000560, "Member 'AParentAIDetourController_C::Movement_LODs' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, EnableMovementLODs) == 0x000570, "Member 'AParentAIDetourController_C::EnableMovementLODs' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, Players_LOD_indexes) == 0x000578, "Member 'AParentAIDetourController_C::Players_LOD_indexes' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, CurrentMovementLOD) == 0x0005C8, "Member 'AParentAIDetourController_C::CurrentMovementLOD' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, Movement_LOD_Multipliers) == 0x0005D0, "Member 'AParentAIDetourController_C::Movement_LOD_Multipliers' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, Perception_LOD_Ticks) == 0x000620, "Member 'AParentAIDetourController_C::Perception_LOD_Ticks' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, NetUpdate_LOD_Frequency_Dividers) == 0x000670, "Member 'AParentAIDetourController_C::NetUpdate_LOD_Frequency_Dividers' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, bIgnoreCars) == 0x0006C0, "Member 'AParentAIDetourController_C::bIgnoreCars' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, CarIgnoreTimeAfterDamage) == 0x0006C4, "Member 'AParentAIDetourController_C::CarIgnoreTimeAfterDamage' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, bCarsAreAlwaysLowPriority) == 0x0006C8, "Member 'AParentAIDetourController_C::bCarsAreAlwaysLowPriority' has a wrong offset!");
static_assert(offsetof(AParentAIDetourController_C, KillOnLongSleepTimer) == 0x0006D0, "Member 'AParentAIDetourController_C::KillOnLongSleepTimer' has a wrong offset!");

}
