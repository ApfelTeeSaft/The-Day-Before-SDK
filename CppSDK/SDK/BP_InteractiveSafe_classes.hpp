#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InteractiveSafe

#include "Basic.hpp"

#include "E_InteractType_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "E_ActorType_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_InteractiveSafe.BP_InteractiveSafe_C
// 0x0090 (0x0320 - 0x0290)
class ABP_InteractiveSafe_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        TriggerMessagePoint;                               // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInventoryCollectorStash_C*             InventoryCollectorStash;                           // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USGInventoryWorker_C*                   SGInventoryWorker;                                 // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CollisionBox;                                      // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SafeBox;                                           // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Open;                                              // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C9[0x7];                                      // 0x02C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        OpenTime;                                          // 0x02D0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Usable;                                            // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D9[0x7];                                      // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UInGameContainerWidget_C*               ContainerWidget;                                   // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UMPInGameInventory_C*                   InventoryWidget;                                   // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_TabsWindow_C*                        TabsWidget;                                        // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_TipsInfo_C*                        TipsInfo;                                          // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ASurvPC_C*                              Controller;                                        // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ASurvivalPlayer_C*                      Player;                                            // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_GameHUD_C*                          HUD;                                               // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowMessage__F_;                                   // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void DestroyInteractable();
	void ExecuteUbergraph_BP_InteractiveSafe(int32 EntryPoint);
	void GetActorType(E_ActorType* ActorType);
	void GetPlayerRef(class ASurvivalPlayer_C** NewParam);
	void GetReferences__ByPawn_(class APawn* Pawn, bool* Result, class ASurvivalPlayer_C** Param_Player, class ASurvPC_C** Param_Controller, class ABP_GameHUD_C** Param_HUD);
	void IsLocked_(bool* Result);
	void LoadStash();
	void LoadStashEvent();
	void OnBeginInteract(class APawn* Param_Player);
	void OnCloseStash();
	void OnFocused(class APawn* Param_Player, class AActor* HighlightActor, class UActorComponent* HighlightActorComponent, E_InteractType* InteractType, double* LateTime);
	void OnInteract(class APawn* Param_Player);
	void OnInteract2(class APawn* Param_Player);
	void OnInteract3(class APawn* Param_Player);
	void OnInteractVehicle(class APawn* Param_Player, int32 SitIndex, bool SkipAnimation);
	void OnLocalInteract(class APawn* Param_Player);
	void OnLostFocus(class APawn* Param_Player);
	void OnOpenSafe();
	void OnOpenStash();
	void OnSeen(class APawn* Param_Player);
	void OnShowMessage__F_(bool Reset, class APawn* Pawn);
	void OnSquadCheckComplete();
	void OnStopInteract(class APawn* Param_Player);
	void ReceiveBeginPlay();
	void Run_Lockpicking();
	void Save_Stash();
	void Set3DWidgetVisibility(bool Visible);
	void SetInput(class APlayerController* Param_Controller, bool NewState);
	void SetReferences(class APawn* Pawn, bool* Result);
	void SetTutorial3DWidgetVisibility(bool Visible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_InteractiveSafe_C">();
	}
	static class ABP_InteractiveSafe_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_InteractiveSafe_C>();
	}
};
static_assert(alignof(ABP_InteractiveSafe_C) == 0x000008, "Wrong alignment on ABP_InteractiveSafe_C");
static_assert(sizeof(ABP_InteractiveSafe_C) == 0x000320, "Wrong size on ABP_InteractiveSafe_C");
static_assert(offsetof(ABP_InteractiveSafe_C, UberGraphFrame) == 0x000290, "Member 'ABP_InteractiveSafe_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_InteractiveSafe_C, TriggerMessagePoint) == 0x000298, "Member 'ABP_InteractiveSafe_C::TriggerMessagePoint' has a wrong offset!");
static_assert(offsetof(ABP_InteractiveSafe_C, InventoryCollectorStash) == 0x0002A0, "Member 'ABP_InteractiveSafe_C::InventoryCollectorStash' has a wrong offset!");
static_assert(offsetof(ABP_InteractiveSafe_C, SGInventoryWorker) == 0x0002A8, "Member 'ABP_InteractiveSafe_C::SGInventoryWorker' has a wrong offset!");
static_assert(offsetof(ABP_InteractiveSafe_C, CollisionBox) == 0x0002B0, "Member 'ABP_InteractiveSafe_C::CollisionBox' has a wrong offset!");
static_assert(offsetof(ABP_InteractiveSafe_C, SafeBox) == 0x0002B8, "Member 'ABP_InteractiveSafe_C::SafeBox' has a wrong offset!");
static_assert(offsetof(ABP_InteractiveSafe_C, DefaultSceneRoot) == 0x0002C0, "Member 'ABP_InteractiveSafe_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_InteractiveSafe_C, Open) == 0x0002C8, "Member 'ABP_InteractiveSafe_C::Open' has a wrong offset!");
static_assert(offsetof(ABP_InteractiveSafe_C, OpenTime) == 0x0002D0, "Member 'ABP_InteractiveSafe_C::OpenTime' has a wrong offset!");
static_assert(offsetof(ABP_InteractiveSafe_C, Usable) == 0x0002D8, "Member 'ABP_InteractiveSafe_C::Usable' has a wrong offset!");
static_assert(offsetof(ABP_InteractiveSafe_C, ContainerWidget) == 0x0002E0, "Member 'ABP_InteractiveSafe_C::ContainerWidget' has a wrong offset!");
static_assert(offsetof(ABP_InteractiveSafe_C, InventoryWidget) == 0x0002E8, "Member 'ABP_InteractiveSafe_C::InventoryWidget' has a wrong offset!");
static_assert(offsetof(ABP_InteractiveSafe_C, TabsWidget) == 0x0002F0, "Member 'ABP_InteractiveSafe_C::TabsWidget' has a wrong offset!");
static_assert(offsetof(ABP_InteractiveSafe_C, TipsInfo) == 0x0002F8, "Member 'ABP_InteractiveSafe_C::TipsInfo' has a wrong offset!");
static_assert(offsetof(ABP_InteractiveSafe_C, Controller) == 0x000300, "Member 'ABP_InteractiveSafe_C::Controller' has a wrong offset!");
static_assert(offsetof(ABP_InteractiveSafe_C, Player) == 0x000308, "Member 'ABP_InteractiveSafe_C::Player' has a wrong offset!");
static_assert(offsetof(ABP_InteractiveSafe_C, HUD) == 0x000310, "Member 'ABP_InteractiveSafe_C::HUD' has a wrong offset!");
static_assert(offsetof(ABP_InteractiveSafe_C, ShowMessage__F_) == 0x000318, "Member 'ABP_InteractiveSafe_C::ShowMessage__F_' has a wrong offset!");

}
