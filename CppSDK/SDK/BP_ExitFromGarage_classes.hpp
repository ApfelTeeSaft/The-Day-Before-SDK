#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ExitFromGarage

#include "Basic.hpp"

#include "E_InteractType_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "E_ActorType_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ExitFromGarage.BP_ExitFromGarage_C
// 0x0090 (0x0320 - 0x0290)
class ABP_ExitFromGarage_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   StaticMesh1;                                       // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Capsule;                                           // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        PointToInteract;                                   // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          TipBox;                                            // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        ExitAnimationRoot;                                 // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Door_NewTrack_0_57217E5A454633E9FB56FAA6E97283DD;  // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Door__Direction_57217E5A454633E9FB56FAA6E97283DD;  // 0x02D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D5[0x3];                                      // 0x02D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Door;                                              // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Has_Reset;                                         // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E1[0x7];                                      // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           Timer_by_reset;                                    // 0x02E8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ASurvPC_C*                              Current_PC;                                        // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_PlayerSpawnPoint_C*>         Regions;                                           // 0x02F8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	double                                        Angle;                                             // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StartTeleport;                                     // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PrevLineTraceResult;                               // 0x0311(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InteractingAnimation;                              // 0x0312(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_313[0x5];                                      // 0x0313(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayerCutsceneComponent_C*             CutscenePlayer;                                    // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_DoorTeleport_TipBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void DestroyInteractable();
	void Door__FinishedFunc();
	void Door__UpdateFunc();
	void ExecuteUbergraph_BP_ExitFromGarage(int32 EntryPoint);
	void FocusOver(class UUIW_PlayerMain_C* Param_FocusOver);
	void GetActorType(E_ActorType* ActorType);
	bool IsInViewport();
	void IsLocked_(bool* Result);
	bool IsSomethingOnA_Way();
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
	void PlayEndCutscene();
	void Reset();
	void Reset_Timer();
	void Run_Lockpicking();
	void Set3DWidgetVisibility(bool Visible);
	void SetTutorial3DWidgetVisibility(bool Visible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ExitFromGarage_C">();
	}
	static class ABP_ExitFromGarage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ExitFromGarage_C>();
	}
};
static_assert(alignof(ABP_ExitFromGarage_C) == 0x000008, "Wrong alignment on ABP_ExitFromGarage_C");
static_assert(sizeof(ABP_ExitFromGarage_C) == 0x000320, "Wrong size on ABP_ExitFromGarage_C");
static_assert(offsetof(ABP_ExitFromGarage_C, UberGraphFrame) == 0x000290, "Member 'ABP_ExitFromGarage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromGarage_C, StaticMesh1) == 0x000298, "Member 'ABP_ExitFromGarage_C::StaticMesh1' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromGarage_C, Capsule) == 0x0002A0, "Member 'ABP_ExitFromGarage_C::Capsule' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromGarage_C, PointToInteract) == 0x0002A8, "Member 'ABP_ExitFromGarage_C::PointToInteract' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromGarage_C, TipBox) == 0x0002B0, "Member 'ABP_ExitFromGarage_C::TipBox' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromGarage_C, ExitAnimationRoot) == 0x0002B8, "Member 'ABP_ExitFromGarage_C::ExitAnimationRoot' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromGarage_C, StaticMesh) == 0x0002C0, "Member 'ABP_ExitFromGarage_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromGarage_C, Scene) == 0x0002C8, "Member 'ABP_ExitFromGarage_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromGarage_C, Door_NewTrack_0_57217E5A454633E9FB56FAA6E97283DD) == 0x0002D0, "Member 'ABP_ExitFromGarage_C::Door_NewTrack_0_57217E5A454633E9FB56FAA6E97283DD' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromGarage_C, Door__Direction_57217E5A454633E9FB56FAA6E97283DD) == 0x0002D4, "Member 'ABP_ExitFromGarage_C::Door__Direction_57217E5A454633E9FB56FAA6E97283DD' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromGarage_C, Door) == 0x0002D8, "Member 'ABP_ExitFromGarage_C::Door' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromGarage_C, Has_Reset) == 0x0002E0, "Member 'ABP_ExitFromGarage_C::Has_Reset' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromGarage_C, Timer_by_reset) == 0x0002E8, "Member 'ABP_ExitFromGarage_C::Timer_by_reset' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromGarage_C, Current_PC) == 0x0002F0, "Member 'ABP_ExitFromGarage_C::Current_PC' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromGarage_C, Regions) == 0x0002F8, "Member 'ABP_ExitFromGarage_C::Regions' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromGarage_C, Angle) == 0x000308, "Member 'ABP_ExitFromGarage_C::Angle' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromGarage_C, StartTeleport) == 0x000310, "Member 'ABP_ExitFromGarage_C::StartTeleport' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromGarage_C, PrevLineTraceResult) == 0x000311, "Member 'ABP_ExitFromGarage_C::PrevLineTraceResult' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromGarage_C, InteractingAnimation) == 0x000312, "Member 'ABP_ExitFromGarage_C::InteractingAnimation' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromGarage_C, CutscenePlayer) == 0x000318, "Member 'ABP_ExitFromGarage_C::CutscenePlayer' has a wrong offset!");

}

