#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Sauna_Exit

#include "Basic.hpp"

#include "E_InteractType_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "E_ActorType_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Sauna_Exit.BP_Sauna_Exit_C
// 0x0088 (0x0318 - 0x0290)
class ABP_Sauna_Exit_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          ExitInteractBox;                                   // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        PointToInteract;                                   // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Has_Reset;                                         // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B1[0x7];                                      // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           Timer_by_reset;                                    // 0x02B8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ASurvPC_C*                              Current_PC;                                        // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_PlayerSpawnPoint_C*>         Regions;                                           // 0x02C8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	double                                        Angle;                                             // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StartTeleport;                                     // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PrevLineTraceResult;                               // 0x02E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InteractingAnimation;                              // 0x02E2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E3[0x5];                                      // 0x02E3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayerCutsceneComponent_C*             CutscenePlayer;                                    // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         SaunaSpots;                                        // 0x02F0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	struct FTimerHandle                           SaunaUpdateTimer;                                  // 0x0300(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          PlayerInSauna;                                     // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_309[0x7];                                      // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 PickedSaunaSpot;                                   // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void DestroyInteractable();
	void DetectExit();
	void ExecuteUbergraph_BP_Sauna_Exit(int32 EntryPoint);
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
	void PickSaunaSpot(class AActor** SaunaSpot);
	void PlayEndCutscene();
	void Reset();
	void Reset_Timer();
	void Run_Lockpicking();
	void Set3DWidgetVisibility(bool Visible);
	void SetTutorial3DWidgetVisibility(bool Visible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Sauna_Exit_C">();
	}
	static class ABP_Sauna_Exit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Sauna_Exit_C>();
	}
};
static_assert(alignof(ABP_Sauna_Exit_C) == 0x000008, "Wrong alignment on ABP_Sauna_Exit_C");
static_assert(sizeof(ABP_Sauna_Exit_C) == 0x000318, "Wrong size on ABP_Sauna_Exit_C");
static_assert(offsetof(ABP_Sauna_Exit_C, UberGraphFrame) == 0x000290, "Member 'ABP_Sauna_Exit_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Exit_C, ExitInteractBox) == 0x000298, "Member 'ABP_Sauna_Exit_C::ExitInteractBox' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Exit_C, PointToInteract) == 0x0002A0, "Member 'ABP_Sauna_Exit_C::PointToInteract' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Exit_C, Scene) == 0x0002A8, "Member 'ABP_Sauna_Exit_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Exit_C, Has_Reset) == 0x0002B0, "Member 'ABP_Sauna_Exit_C::Has_Reset' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Exit_C, Timer_by_reset) == 0x0002B8, "Member 'ABP_Sauna_Exit_C::Timer_by_reset' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Exit_C, Current_PC) == 0x0002C0, "Member 'ABP_Sauna_Exit_C::Current_PC' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Exit_C, Regions) == 0x0002C8, "Member 'ABP_Sauna_Exit_C::Regions' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Exit_C, Angle) == 0x0002D8, "Member 'ABP_Sauna_Exit_C::Angle' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Exit_C, StartTeleport) == 0x0002E0, "Member 'ABP_Sauna_Exit_C::StartTeleport' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Exit_C, PrevLineTraceResult) == 0x0002E1, "Member 'ABP_Sauna_Exit_C::PrevLineTraceResult' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Exit_C, InteractingAnimation) == 0x0002E2, "Member 'ABP_Sauna_Exit_C::InteractingAnimation' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Exit_C, CutscenePlayer) == 0x0002E8, "Member 'ABP_Sauna_Exit_C::CutscenePlayer' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Exit_C, SaunaSpots) == 0x0002F0, "Member 'ABP_Sauna_Exit_C::SaunaSpots' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Exit_C, SaunaUpdateTimer) == 0x000300, "Member 'ABP_Sauna_Exit_C::SaunaUpdateTimer' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Exit_C, PlayerInSauna) == 0x000308, "Member 'ABP_Sauna_Exit_C::PlayerInSauna' has a wrong offset!");
static_assert(offsetof(ABP_Sauna_Exit_C, PickedSaunaSpot) == 0x000310, "Member 'ABP_Sauna_Exit_C::PickedSaunaSpot' has a wrong offset!");

}
