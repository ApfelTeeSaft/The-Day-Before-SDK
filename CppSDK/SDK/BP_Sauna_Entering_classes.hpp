#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Sauna_Entering

#include "Basic.hpp"

#include "E_InteractType_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "E_ActorType_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Sauna_Entering.BP_Sauna_Entering_C
// 0x0138 (0x03C8 - 0x0290)
class ABP_Sauna_Entering_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          ExitInteractBox;                                   // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Metal_Door_01a;                                 // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Capsule;                                           // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        PointToInteract;                                   // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          TipBox;                                            // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        ExitAnimationRoot;                                 // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Door_NewTrack_0_1FF7D2764CB8059E3238AB86490AB6E2;  // 0x02D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Door__Direction_1FF7D2764CB8059E3238AB86490AB6E2;  // 0x02DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2DD[0x3];                                      // 0x02DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Door;                                              // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Has_Reset;                                         // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E9[0x7];                                      // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           Timer_by_reset;                                    // 0x02F0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ASurvPC_C*                              Current_PC;                                        // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_PlayerSpawnPoint_C*>         Regions;                                           // 0x0300(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	double                                        Angle;                                             // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StartTeleport;                                     // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PrevLineTraceResult;                               // 0x0319(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InteractingAnimation;                              // 0x031A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31B[0x5];                                      // 0x031B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayerCutsceneComponent_C*             CutscenePlayer;                                    // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         SaunaSpots;                                        // 0x0328(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	struct FTimerHandle                           SaunaUpdateTimer;                                  // 0x0338(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          PlayerInSauna;                                     // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_341[0x7];                                      // 0x0341(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 PickedSaunaSpot;                                   // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_Sauna_Exit_C*                       BPSaunaExit;                                       // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class ABP_Interier_Toggler_C*                 Toggler;                                           // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         SaunaSpotsRemoved;                                 // 0x0360(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class AActor*                                 SpotRef;                                           // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<class AActor*, class AActor*>            SpotSurvRef;                                       // 0x0378(0x0050)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void BackSaunaSpot(class AActor* Ref);
	void BndEvt__BP_DoorTeleport_TipBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void DestroyInteractable();
	void DetectExit();
	void Door__FinishedFunc();
	void Door__UpdateFunc();
	void ExecuteUbergraph_BP_Sauna_Entering(int32 EntryPoint);
	void FocusOver(class UUIW_PlayerMain_C* Param_FocusOver);
	void GetActorType(E_ActorType* ActorType);
	bool IsInViewport();
	void IsLocked_(bool* Result);
	bool IsSomethingOnA_Way();
	void MeshRemove(class AActor* Param_SpotRef);
	void MultiSpot(class AActor* Ref, class ASurvivalPlayer_C* Surv);
	void On_Black_Screen_Opened();
	void OnBeginInteract(class APawn* Player);
	void OnFocused(class APawn* Player, class AActor* HighlightActor, class UActorComponent* HighlightActorComponent, E_InteractType* InteractType, double* LateTime);
	void OnInteract(class APawn* Player);
	void OnInteract2(class APawn* Player);
	void OnInteract3(class APawn* Player);
	void OnInteractVehicle(class APawn* Player, int32 SitIndex, bool SkipAnimation);
	void OnLocalInteract(class APawn* Player);
	void OnLostFocus(class APawn* Player);
	void OnSeen(class APawn* Player);
	void OnSquadCheckComplete();
	void OnStopInteract(class APawn* Player);
	void PickSaunaSpot(class AActor** SaunaSpot);
	void PlayEndCutscene();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Reset();
	void Reset_Timer();
	void Run_Lockpicking();
	void ServSpot(class AActor* Ref, class ASurvivalPlayer_C* Surv);
	void Set3DWidgetVisibility(bool Visible);
	void SetTutorial3DWidgetVisibility(bool Visible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Sauna_Entering_C">();
	}
	static class ABP_Sauna_Entering_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Sauna_Entering_C>();
	}
};
static_assert(alignof(ABP_Sauna_Entering_C) == 0x000008, "Wrong alignment on ABP_Sauna_Entering_C");
static_assert(sizeof(ABP_Sauna_Entering_C) == 0x0003C8, "Wrong size on ABP_Sauna_Entering_C");
static_assert(offsetof(ABP_Sauna_Entering_C, UberGraphFrame) == 0x000290, "Member 'ABP_Sauna_Entering_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Entering_C, ExitInteractBox) == 0x000298, "Member 'ABP_Sauna_Entering_C::ExitInteractBox' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Entering_C, SM_Metal_Door_01a) == 0x0002A0, "Member 'ABP_Sauna_Entering_C::SM_Metal_Door_01a' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Entering_C, Capsule) == 0x0002A8, "Member 'ABP_Sauna_Entering_C::Capsule' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Entering_C, PointToInteract) == 0x0002B0, "Member 'ABP_Sauna_Entering_C::PointToInteract' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Entering_C, TipBox) == 0x0002B8, "Member 'ABP_Sauna_Entering_C::TipBox' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Entering_C, ExitAnimationRoot) == 0x0002C0, "Member 'ABP_Sauna_Entering_C::ExitAnimationRoot' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Entering_C, StaticMesh) == 0x0002C8, "Member 'ABP_Sauna_Entering_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Entering_C, Scene) == 0x0002D0, "Member 'ABP_Sauna_Entering_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Entering_C, Door_NewTrack_0_1FF7D2764CB8059E3238AB86490AB6E2) == 0x0002D8, "Member 'ABP_Sauna_Entering_C::Door_NewTrack_0_1FF7D2764CB8059E3238AB86490AB6E2' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Entering_C, Door__Direction_1FF7D2764CB8059E3238AB86490AB6E2) == 0x0002DC, "Member 'ABP_Sauna_Entering_C::Door__Direction_1FF7D2764CB8059E3238AB86490AB6E2' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Entering_C, Door) == 0x0002E0, "Member 'ABP_Sauna_Entering_C::Door' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Entering_C, Has_Reset) == 0x0002E8, "Member 'ABP_Sauna_Entering_C::Has_Reset' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Entering_C, Timer_by_reset) == 0x0002F0, "Member 'ABP_Sauna_Entering_C::Timer_by_reset' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Entering_C, Current_PC) == 0x0002F8, "Member 'ABP_Sauna_Entering_C::Current_PC' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Entering_C, Regions) == 0x000300, "Member 'ABP_Sauna_Entering_C::Regions' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Entering_C, Angle) == 0x000310, "Member 'ABP_Sauna_Entering_C::Angle' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Entering_C, StartTeleport) == 0x000318, "Member 'ABP_Sauna_Entering_C::StartTeleport' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Entering_C, PrevLineTraceResult) == 0x000319, "Member 'ABP_Sauna_Entering_C::PrevLineTraceResult' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Entering_C, InteractingAnimation) == 0x00031A, "Member 'ABP_Sauna_Entering_C::InteractingAnimation' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Entering_C, CutscenePlayer) == 0x000320, "Member 'ABP_Sauna_Entering_C::CutscenePlayer' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Entering_C, SaunaSpots) == 0x000328, "Member 'ABP_Sauna_Entering_C::SaunaSpots' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Entering_C, SaunaUpdateTimer) == 0x000338, "Member 'ABP_Sauna_Entering_C::SaunaUpdateTimer' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Entering_C, PlayerInSauna) == 0x000340, "Member 'ABP_Sauna_Entering_C::PlayerInSauna' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Entering_C, PickedSaunaSpot) == 0x000348, "Member 'ABP_Sauna_Entering_C::PickedSaunaSpot' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Entering_C, BPSaunaExit) == 0x000350, "Member 'ABP_Sauna_Entering_C::BPSaunaExit' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Entering_C, Toggler) == 0x000358, "Member 'ABP_Sauna_Entering_C::Toggler' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Entering_C, SaunaSpotsRemoved) == 0x000360, "Member 'ABP_Sauna_Entering_C::SaunaSpotsRemoved' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Entering_C, SpotRef) == 0x000370, "Member 'ABP_Sauna_Entering_C::SpotRef' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Entering_C, SpotSurvRef) == 0x000378, "Member 'ABP_Sauna_Entering_C::SpotSurvRef' has a wrong offset!");

}
