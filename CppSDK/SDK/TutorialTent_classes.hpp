#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TutorialTent

#include "Basic.hpp"

#include "E_InteractType_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "E_ActorType_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass TutorialTent.TutorialTent_C
// 0x0120 (0x03B0 - 0x0290)
class ATutorialTent_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                    SpotLight;                                         // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Light_Ceiling;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   BP_InteractiveSafe_Rancho;                         // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube5;                                             // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube4;                                             // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube3;                                             // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube2;                                             // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube1;                                             // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube;                                              // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Log_Pile_1;                                     // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   WoodBox_new_01;                                    // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Vertel;                                            // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Barrel_02;                                      // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Wooden_Pallet10;                                // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Barrel_01;                                      // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Wooden_Pallet11;                                // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Fireplace_01a;                                  // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   PointLight;                                        // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Wooden_Pallet9;                                 // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Wooden_Pallet4;                                 // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Wooden_Pallet;                                  // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Wooden_Pallet3;                                 // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Wooden_Pallet1;                                 // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CampTent;                                          // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CampTent_Part;                                     // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Wooden_Pallet8;                                 // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Wooden_Pallet7;                                 // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Wooden_Pallet6;                                 // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Wooden_Pallet5;                                 // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Wooden_Pallet2;                                 // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       TutorialPoint3D;                                   // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         ActiveTutorialStage;                               // 0x03A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void DestroyInteractable();
	void ExecuteUbergraph_TutorialTent(int32 EntryPoint);
	void GetActorType(E_ActorType* ActorType);
	void IsLocked_(bool* Result);
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
	void ReceiveBeginPlay();
	void Run_Lockpicking();
	void Set3DWidgetVisibility(bool Visible);
	void SetTutorial3DWidgetVisibility(bool Visible);
	void Un_Hidetent(bool Hide_);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TutorialTent_C">();
	}
	static class ATutorialTent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATutorialTent_C>();
	}
};
static_assert(alignof(ATutorialTent_C) == 0x000008, "Wrong alignment on ATutorialTent_C");
static_assert(sizeof(ATutorialTent_C) == 0x0003B0, "Wrong size on ATutorialTent_C");
static_assert(offsetof(ATutorialTent_C, UberGraphFrame) == 0x000290, "Member 'ATutorialTent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ATutorialTent_C, SpotLight) == 0x000298, "Member 'ATutorialTent_C::SpotLight' has a wrong offset!");
static_assert(offsetof(ATutorialTent_C, SM_Light_Ceiling) == 0x0002A0, "Member 'ATutorialTent_C::SM_Light_Ceiling' has a wrong offset!");
static_assert(offsetof(ATutorialTent_C, BP_InteractiveSafe_Rancho) == 0x0002A8, "Member 'ATutorialTent_C::BP_InteractiveSafe_Rancho' has a wrong offset!");
static_assert(offsetof(ATutorialTent_C, Cube5) == 0x0002B0, "Member 'ATutorialTent_C::Cube5' has a wrong offset!");
static_assert(offsetof(ATutorialTent_C, Cube4) == 0x0002B8, "Member 'ATutorialTent_C::Cube4' has a wrong offset!");
static_assert(offsetof(ATutorialTent_C, Cube3) == 0x0002C0, "Member 'ATutorialTent_C::Cube3' has a wrong offset!");
static_assert(offsetof(ATutorialTent_C, Cube2) == 0x0002C8, "Member 'ATutorialTent_C::Cube2' has a wrong offset!");
static_assert(offsetof(ATutorialTent_C, Cube1) == 0x0002D0, "Member 'ATutorialTent_C::Cube1' has a wrong offset!");
static_assert(offsetof(ATutorialTent_C, Cube) == 0x0002D8, "Member 'ATutorialTent_C::Cube' has a wrong offset!");
static_assert(offsetof(ATutorialTent_C, SM_Log_Pile_1) == 0x0002E0, "Member 'ATutorialTent_C::SM_Log_Pile_1' has a wrong offset!");
static_assert(offsetof(ATutorialTent_C, WoodBox_new_01) == 0x0002E8, "Member 'ATutorialTent_C::WoodBox_new_01' has a wrong offset!");
static_assert(offsetof(ATutorialTent_C, Vertel) == 0x0002F0, "Member 'ATutorialTent_C::Vertel' has a wrong offset!");
static_assert(offsetof(ATutorialTent_C, SM_Barrel_02) == 0x0002F8, "Member 'ATutorialTent_C::SM_Barrel_02' has a wrong offset!");
static_assert(offsetof(ATutorialTent_C, SM_Wooden_Pallet10) == 0x000300, "Member 'ATutorialTent_C::SM_Wooden_Pallet10' has a wrong offset!");
static_assert(offsetof(ATutorialTent_C, SM_Barrel_01) == 0x000308, "Member 'ATutorialTent_C::SM_Barrel_01' has a wrong offset!");
static_assert(offsetof(ATutorialTent_C, SM_Wooden_Pallet11) == 0x000310, "Member 'ATutorialTent_C::SM_Wooden_Pallet11' has a wrong offset!");
static_assert(offsetof(ATutorialTent_C, SM_Fireplace_01a) == 0x000318, "Member 'ATutorialTent_C::SM_Fireplace_01a' has a wrong offset!");
static_assert(offsetof(ATutorialTent_C, PointLight) == 0x000320, "Member 'ATutorialTent_C::PointLight' has a wrong offset!");
static_assert(offsetof(ATutorialTent_C, SM_Wooden_Pallet9) == 0x000328, "Member 'ATutorialTent_C::SM_Wooden_Pallet9' has a wrong offset!");
static_assert(offsetof(ATutorialTent_C, SM_Wooden_Pallet4) == 0x000330, "Member 'ATutorialTent_C::SM_Wooden_Pallet4' has a wrong offset!");
static_assert(offsetof(ATutorialTent_C, SM_Wooden_Pallet) == 0x000338, "Member 'ATutorialTent_C::SM_Wooden_Pallet' has a wrong offset!");
static_assert(offsetof(ATutorialTent_C, SM_Wooden_Pallet3) == 0x000340, "Member 'ATutorialTent_C::SM_Wooden_Pallet3' has a wrong offset!");
static_assert(offsetof(ATutorialTent_C, SM_Wooden_Pallet1) == 0x000348, "Member 'ATutorialTent_C::SM_Wooden_Pallet1' has a wrong offset!");
static_assert(offsetof(ATutorialTent_C, CampTent) == 0x000350, "Member 'ATutorialTent_C::CampTent' has a wrong offset!");
static_assert(offsetof(ATutorialTent_C, CampTent_Part) == 0x000358, "Member 'ATutorialTent_C::CampTent_Part' has a wrong offset!");
static_assert(offsetof(ATutorialTent_C, SM_Wooden_Pallet8) == 0x000360, "Member 'ATutorialTent_C::SM_Wooden_Pallet8' has a wrong offset!");
static_assert(offsetof(ATutorialTent_C, SM_Wooden_Pallet7) == 0x000368, "Member 'ATutorialTent_C::SM_Wooden_Pallet7' has a wrong offset!");
static_assert(offsetof(ATutorialTent_C, SM_Wooden_Pallet6) == 0x000370, "Member 'ATutorialTent_C::SM_Wooden_Pallet6' has a wrong offset!");
static_assert(offsetof(ATutorialTent_C, SM_Wooden_Pallet5) == 0x000378, "Member 'ATutorialTent_C::SM_Wooden_Pallet5' has a wrong offset!");
static_assert(offsetof(ATutorialTent_C, SM_Wooden_Pallet2) == 0x000380, "Member 'ATutorialTent_C::SM_Wooden_Pallet2' has a wrong offset!");
static_assert(offsetof(ATutorialTent_C, TutorialPoint3D) == 0x000388, "Member 'ATutorialTent_C::TutorialPoint3D' has a wrong offset!");
static_assert(offsetof(ATutorialTent_C, Scene) == 0x000390, "Member 'ATutorialTent_C::Scene' has a wrong offset!");
static_assert(offsetof(ATutorialTent_C, DefaultSceneRoot) == 0x000398, "Member 'ATutorialTent_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ATutorialTent_C, ActiveTutorialStage) == 0x0003A0, "Member 'ATutorialTent_C::ActiveTutorialStage' has a wrong offset!");

}
