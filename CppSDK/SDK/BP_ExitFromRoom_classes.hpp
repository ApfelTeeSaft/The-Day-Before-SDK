#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ExitFromRoom

#include "Basic.hpp"

#include "E_InteractType_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "E_ActorType_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ExitFromRoom.BP_ExitFromRoom_C
// 0x00E8 (0x0378 - 0x0290)
class ABP_ExitFromRoom_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Oath_Tablet;                                       // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       TutorialPoint3D;                                   // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Door_Handle1;                                      // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Door_Handle;                                       // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Door_Handle_Place1;                                // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Door_Handle_Place;                                 // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       Point3D;                                           // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Capsule;                                           // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        PointToInteract;                                   // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          TipBox;                                            // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        ExitAnimationRoot;                                 // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Door_NewTrack_0_7EF0463D49910F464BCABB8A170AD915;  // 0x0300(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Door__Direction_7EF0463D49910F464BCABB8A170AD915;  // 0x0304(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_305[0x3];                                      // 0x0305(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Door;                                              // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Has_Reset;                                         // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_311[0x7];                                      // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           Timer_by_reset;                                    // 0x0318(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ASurvPC_C*                              Current_PC;                                        // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_PlayerSpawnPoint_C*>         Regions;                                           // 0x0328(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	double                                        Angle;                                             // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StartTeleport;                                     // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PrevLineTraceResult;                               // 0x0341(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InteractingAnimation;                              // 0x0342(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_343[0x5];                                      // 0x0343(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayerCutsceneComponent_C*             CutscenePlayer;                                    // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_Interier_Toggler_C*>         HUBInterTogglers;                                  // 0x0350(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class ACutsceneTriggerVolume_C*               HubCutsceneTrigger;                                // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         ActiveTutorialStage;                               // 0x0368(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void BndEvt__BP_DoorTeleport_TipBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void DestroyInteractable();
	void Door__FinishedFunc();
	void Door__UpdateFunc();
	void EndHUBTour();
	void ExecuteUbergraph_BP_ExitFromRoom(int32 EntryPoint);
	void FocusOver(class UUIW_PlayerMain_C* Param_FocusOver);
	void GetActorType(E_ActorType* ActorType);
	void HUB_Tour();
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
	void OnTutorStageUpdated_Event(const class FString& TutorialStage);
	void PlayEndCutscene();
	void PlayingCutsceneEnded_Event();
	void ReceiveBeginPlay();
	void Reset();
	void Reset_Timer();
	void Run_Lockpicking();
	void Set3DWidgetVisibility(bool Visible);
	void SetTutorial3DWidgetVisibility(bool Visible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ExitFromRoom_C">();
	}
	static class ABP_ExitFromRoom_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ExitFromRoom_C>();
	}
};
static_assert(alignof(ABP_ExitFromRoom_C) == 0x000008, "Wrong alignment on ABP_ExitFromRoom_C");
static_assert(sizeof(ABP_ExitFromRoom_C) == 0x000378, "Wrong size on ABP_ExitFromRoom_C");
static_assert(offsetof(ABP_ExitFromRoom_C, UberGraphFrame) == 0x000290, "Member 'ABP_ExitFromRoom_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromRoom_C, Oath_Tablet) == 0x000298, "Member 'ABP_ExitFromRoom_C::Oath_Tablet' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromRoom_C, TutorialPoint3D) == 0x0002A0, "Member 'ABP_ExitFromRoom_C::TutorialPoint3D' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromRoom_C, Door_Handle1) == 0x0002A8, "Member 'ABP_ExitFromRoom_C::Door_Handle1' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromRoom_C, Door_Handle) == 0x0002B0, "Member 'ABP_ExitFromRoom_C::Door_Handle' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromRoom_C, Door_Handle_Place1) == 0x0002B8, "Member 'ABP_ExitFromRoom_C::Door_Handle_Place1' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromRoom_C, Door_Handle_Place) == 0x0002C0, "Member 'ABP_ExitFromRoom_C::Door_Handle_Place' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromRoom_C, Point3D) == 0x0002C8, "Member 'ABP_ExitFromRoom_C::Point3D' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromRoom_C, Capsule) == 0x0002D0, "Member 'ABP_ExitFromRoom_C::Capsule' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromRoom_C, PointToInteract) == 0x0002D8, "Member 'ABP_ExitFromRoom_C::PointToInteract' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromRoom_C, TipBox) == 0x0002E0, "Member 'ABP_ExitFromRoom_C::TipBox' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromRoom_C, ExitAnimationRoot) == 0x0002E8, "Member 'ABP_ExitFromRoom_C::ExitAnimationRoot' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromRoom_C, StaticMesh) == 0x0002F0, "Member 'ABP_ExitFromRoom_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromRoom_C, Scene) == 0x0002F8, "Member 'ABP_ExitFromRoom_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromRoom_C, Door_NewTrack_0_7EF0463D49910F464BCABB8A170AD915) == 0x000300, "Member 'ABP_ExitFromRoom_C::Door_NewTrack_0_7EF0463D49910F464BCABB8A170AD915' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromRoom_C, Door__Direction_7EF0463D49910F464BCABB8A170AD915) == 0x000304, "Member 'ABP_ExitFromRoom_C::Door__Direction_7EF0463D49910F464BCABB8A170AD915' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromRoom_C, Door) == 0x000308, "Member 'ABP_ExitFromRoom_C::Door' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromRoom_C, Has_Reset) == 0x000310, "Member 'ABP_ExitFromRoom_C::Has_Reset' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromRoom_C, Timer_by_reset) == 0x000318, "Member 'ABP_ExitFromRoom_C::Timer_by_reset' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromRoom_C, Current_PC) == 0x000320, "Member 'ABP_ExitFromRoom_C::Current_PC' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromRoom_C, Regions) == 0x000328, "Member 'ABP_ExitFromRoom_C::Regions' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromRoom_C, Angle) == 0x000338, "Member 'ABP_ExitFromRoom_C::Angle' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromRoom_C, StartTeleport) == 0x000340, "Member 'ABP_ExitFromRoom_C::StartTeleport' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromRoom_C, PrevLineTraceResult) == 0x000341, "Member 'ABP_ExitFromRoom_C::PrevLineTraceResult' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromRoom_C, InteractingAnimation) == 0x000342, "Member 'ABP_ExitFromRoom_C::InteractingAnimation' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromRoom_C, CutscenePlayer) == 0x000348, "Member 'ABP_ExitFromRoom_C::CutscenePlayer' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromRoom_C, HUBInterTogglers) == 0x000350, "Member 'ABP_ExitFromRoom_C::HUBInterTogglers' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromRoom_C, HubCutsceneTrigger) == 0x000360, "Member 'ABP_ExitFromRoom_C::HubCutsceneTrigger' has a wrong offset!");
static_assert(offsetof(ABP_ExitFromRoom_C, ActiveTutorialStage) == 0x000368, "Member 'ABP_ExitFromRoom_C::ActiveTutorialStage' has a wrong offset!");

}
