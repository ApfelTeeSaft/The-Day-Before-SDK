#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ElectricDoorBox

#include "Basic.hpp"

#include "E_InteractType_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "BPE_Weapon_Type_structs.hpp"
#include "E_ActorType_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ElectricDoorBox.BP_ElectricDoorBox_C
// 0x0080 (0x0310 - 0x0290)
class ABP_ElectricDoorBox_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        ParticleLocation;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube;                                              // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBroken;                                          // 0x02B8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B9[0x7];                                      // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IElectricBoxListener_C> Listener;                                          // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasQuest;                                          // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D1[0x7];                                      // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 QuestTrigger;                                      // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TScriptInterface<class IElectricBoxListener_C> QostuilListener;                                   // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Steam_C*                            QostulActor;                                       // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               ShineMaterial;                                     // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        TimeToReActivate;                                  // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AddMeshToShining(class UMaterialInstanceDynamic** Dynamic_Material);
	void Break();
	void BreakVisual();
	void DestroyInteractable();
	void ExecuteUbergraph_BP_ElectricDoorBox(int32 EntryPoint);
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
	void OverlapEnd(bool* Success);
	void OverlapStart(bool* Success);
	void ReActivate();
	void ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ReceiveBeginPlay();
	void Run_Lockpicking();
	void Set3DWidgetVisibility(bool Visible);
	void SetListener(TScriptInterface<class IElectricBoxListener_C> Param_Listener);
	void SetShining(bool Shinie);
	void SetTutorial3DWidgetVisibility(bool Visible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ElectricDoorBox_C">();
	}
	static class ABP_ElectricDoorBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ElectricDoorBox_C>();
	}
};
static_assert(alignof(ABP_ElectricDoorBox_C) == 0x000008, "Wrong alignment on ABP_ElectricDoorBox_C");
static_assert(sizeof(ABP_ElectricDoorBox_C) == 0x000310, "Wrong size on ABP_ElectricDoorBox_C");
static_assert(offsetof(ABP_ElectricDoorBox_C, UberGraphFrame) == 0x000290, "Member 'ABP_ElectricDoorBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ElectricDoorBox_C, StaticMesh) == 0x000298, "Member 'ABP_ElectricDoorBox_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_ElectricDoorBox_C, ParticleLocation) == 0x0002A0, "Member 'ABP_ElectricDoorBox_C::ParticleLocation' has a wrong offset!");
static_assert(offsetof(ABP_ElectricDoorBox_C, Cube) == 0x0002A8, "Member 'ABP_ElectricDoorBox_C::Cube' has a wrong offset!");
static_assert(offsetof(ABP_ElectricDoorBox_C, DefaultSceneRoot) == 0x0002B0, "Member 'ABP_ElectricDoorBox_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_ElectricDoorBox_C, IsBroken) == 0x0002B8, "Member 'ABP_ElectricDoorBox_C::IsBroken' has a wrong offset!");
static_assert(offsetof(ABP_ElectricDoorBox_C, Listener) == 0x0002C0, "Member 'ABP_ElectricDoorBox_C::Listener' has a wrong offset!");
static_assert(offsetof(ABP_ElectricDoorBox_C, HasQuest) == 0x0002D0, "Member 'ABP_ElectricDoorBox_C::HasQuest' has a wrong offset!");
static_assert(offsetof(ABP_ElectricDoorBox_C, QuestTrigger) == 0x0002D8, "Member 'ABP_ElectricDoorBox_C::QuestTrigger' has a wrong offset!");
static_assert(offsetof(ABP_ElectricDoorBox_C, QostuilListener) == 0x0002E8, "Member 'ABP_ElectricDoorBox_C::QostuilListener' has a wrong offset!");
static_assert(offsetof(ABP_ElectricDoorBox_C, QostulActor) == 0x0002F8, "Member 'ABP_ElectricDoorBox_C::QostulActor' has a wrong offset!");
static_assert(offsetof(ABP_ElectricDoorBox_C, ShineMaterial) == 0x000300, "Member 'ABP_ElectricDoorBox_C::ShineMaterial' has a wrong offset!");
static_assert(offsetof(ABP_ElectricDoorBox_C, TimeToReActivate) == 0x000308, "Member 'ABP_ElectricDoorBox_C::TimeToReActivate' has a wrong offset!");

}

