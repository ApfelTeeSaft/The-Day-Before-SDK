#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Teleport

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Teleport.Teleport_C
// 0x0078 (0x0308 - 0x0290)
class ATeleport_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Box;                                               // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DestinationComp;                                   // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Actors;                                            // 0x02B0(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class UClass*>                         TeleportableClasses;                               // 0x02C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                Destination;                                       // 0x02D0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               DestinationRotation;                               // 0x02E8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TeleportOnOverlap;                                 // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AddTeleportableActor(class AActor* Actor);
	void BndEvt__Teleport_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Teleport_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ExecuteUbergraph_Teleport(int32 EntryPoint);
	void IsTeleportableActor(class AActor* Actor, bool* IsTeleportable);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void RemoveActor(class AActor* Actor);
	void TeleportActor(class AActor* Actor);
	void TeleportActors();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Teleport_C">();
	}
	static class ATeleport_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATeleport_C>();
	}
};
static_assert(alignof(ATeleport_C) == 0x000008, "Wrong alignment on ATeleport_C");
static_assert(sizeof(ATeleport_C) == 0x000308, "Wrong size on ATeleport_C");
static_assert(offsetof(ATeleport_C, UberGraphFrame) == 0x000290, "Member 'ATeleport_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ATeleport_C, Box) == 0x000298, "Member 'ATeleport_C::Box' has a wrong offset!");
static_assert(offsetof(ATeleport_C, DestinationComp) == 0x0002A0, "Member 'ATeleport_C::DestinationComp' has a wrong offset!");
static_assert(offsetof(ATeleport_C, DefaultSceneRoot) == 0x0002A8, "Member 'ATeleport_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ATeleport_C, Actors) == 0x0002B0, "Member 'ATeleport_C::Actors' has a wrong offset!");
static_assert(offsetof(ATeleport_C, TeleportableClasses) == 0x0002C0, "Member 'ATeleport_C::TeleportableClasses' has a wrong offset!");
static_assert(offsetof(ATeleport_C, Destination) == 0x0002D0, "Member 'ATeleport_C::Destination' has a wrong offset!");
static_assert(offsetof(ATeleport_C, DestinationRotation) == 0x0002E8, "Member 'ATeleport_C::DestinationRotation' has a wrong offset!");
static_assert(offsetof(ATeleport_C, TeleportOnOverlap) == 0x000300, "Member 'ATeleport_C::TeleportOnOverlap' has a wrong offset!");

}
