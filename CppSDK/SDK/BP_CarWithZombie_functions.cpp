#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CarWithZombie

#include "Basic.hpp"

#include "BP_CarWithZombie_classes.hpp"
#include "BP_CarWithZombie_parameters.hpp"


namespace SDK
{

// Function BP_CarWithZombie.BP_CarWithZombie_C.BndEvt__BP_CarWithZombie_SpawnTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_CarWithZombie_C::BndEvt__BP_CarWithZombie_SpawnTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CarWithZombie_C", "BndEvt__BP_CarWithZombie_SpawnTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_CarWithZombie_C_BndEvt__BP_CarWithZombie_SpawnTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CarWithZombie.BP_CarWithZombie_C.BndEvt__BP_CarWithZombie_TriggerZone_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_CarWithZombie_C::BndEvt__BP_CarWithZombie_TriggerZone_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CarWithZombie_C", "BndEvt__BP_CarWithZombie_TriggerZone_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_CarWithZombie_C_BndEvt__BP_CarWithZombie_TriggerZone_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CarWithZombie.BP_CarWithZombie_C.Check Could Spawn
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_CarWithZombie_C::Check_Could_Spawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CarWithZombie_C", "Check Could Spawn");

	Params::BP_CarWithZombie_C_Check_Could_Spawn Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_CarWithZombie.BP_CarWithZombie_C.CheckZombieSpawn
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CarWithZombie_C::CheckZombieSpawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CarWithZombie_C", "CheckZombieSpawn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CarWithZombie.BP_CarWithZombie_C.DelayedTriggerZombie
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           TrigerredActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CarWithZombie_C::DelayedTriggerZombie(class AActor* TrigerredActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CarWithZombie_C", "DelayedTriggerZombie");

	Params::BP_CarWithZombie_C_DelayedTriggerZombie Parms{};

	Parms.TrigerredActor = TrigerredActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CarWithZombie.BP_CarWithZombie_C.ExecuteUbergraph_BP_CarWithZombie
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CarWithZombie_C::ExecuteUbergraph_BP_CarWithZombie(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CarWithZombie_C", "ExecuteUbergraph_BP_CarWithZombie");

	Params::BP_CarWithZombie_C_ExecuteUbergraph_BP_CarWithZombie Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CarWithZombie.BP_CarWithZombie_C.GenerateDayMeshType
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   MeshType                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CarWithZombie_C::GenerateDayMeshType(int32* MeshType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CarWithZombie_C", "GenerateDayMeshType");

	Params::BP_CarWithZombie_C_GenerateDayMeshType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MeshType != nullptr)
		*MeshType = Parms.MeshType;
}


// Function BP_CarWithZombie.BP_CarWithZombie_C.GenerateNightMeshType
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   MeshType                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CarWithZombie_C::GenerateNightMeshType(int32* MeshType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CarWithZombie_C", "GenerateNightMeshType");

	Params::BP_CarWithZombie_C_GenerateNightMeshType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MeshType != nullptr)
		*MeshType = Parms.MeshType;
}


// Function BP_CarWithZombie.BP_CarWithZombie_C.InitializeLootPoints
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_CarWithZombie_C::InitializeLootPoints()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CarWithZombie_C", "InitializeLootPoints");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CarWithZombie.BP_CarWithZombie_C.MulticastRapidOpenDoor
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_CarWithZombie_C::MulticastRapidOpenDoor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CarWithZombie_C", "MulticastRapidOpenDoor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CarWithZombie.BP_CarWithZombie_C.NightZombieChance
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_CarWithZombie_C::NightZombieChance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CarWithZombie_C", "NightZombieChance");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CarWithZombie.BP_CarWithZombie_C.OnBoxOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Other_Actor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CarWithZombie_C::OnBoxOverlap(class AActor* Other_Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CarWithZombie_C", "OnBoxOverlap");

	Params::BP_CarWithZombie_C_OnBoxOverlap Parms{};

	Parms.Other_Actor = Other_Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CarWithZombie.BP_CarWithZombie_C.OnInteracted
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InteractedActor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CarWithZombie_C::OnInteracted(class AActor* InteractedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CarWithZombie_C", "OnInteracted");

	Params::BP_CarWithZombie_C_OnInteracted Parms{};

	Parms.InteractedActor = InteractedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CarWithZombie.BP_CarWithZombie_C.OnSphereOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CarWithZombie_C::OnSphereOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CarWithZombie_C", "OnSphereOverlap");

	Params::BP_CarWithZombie_C_OnSphereOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CarWithZombie.BP_CarWithZombie_C.OpenDoorByRotation
// (BlueprintCallable, BlueprintEvent)

void ABP_CarWithZombie_C::OpenDoorByRotation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CarWithZombie_C", "OpenDoorByRotation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CarWithZombie.BP_CarWithZombie_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CarWithZombie_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CarWithZombie_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CarWithZombie.BP_CarWithZombie_C.Reset Spawner
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_CarWithZombie_C::Reset_Spawner()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CarWithZombie_C", "Reset Spawner");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CarWithZombie.BP_CarWithZombie_C.ServerRapidOpenDoor
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_CarWithZombie_C::ServerRapidOpenDoor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CarWithZombie_C", "ServerRapidOpenDoor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CarWithZombie.BP_CarWithZombie_C.SetLinkedQuests
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UQuest*>                   Param_LinkedQuests                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_CarWithZombie_C::SetLinkedQuests(TArray<class UQuest*>& Param_LinkedQuests)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CarWithZombie_C", "SetLinkedQuests");

	Params::BP_CarWithZombie_C_SetLinkedQuests Parms{};

	Parms.Param_LinkedQuests = std::move(Param_LinkedQuests);

	UObject::ProcessEvent(Func, &Parms);

	Param_LinkedQuests = std::move(Parms.Param_LinkedQuests);
}


// Function BP_CarWithZombie.BP_CarWithZombie_C.SetupCooldownTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_CarWithZombie_C::SetupCooldownTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CarWithZombie_C", "SetupCooldownTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CarWithZombie.BP_CarWithZombie_C.SetZombieDoorLootPoint
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_CarWithZombie_C::SetZombieDoorLootPoint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CarWithZombie_C", "SetZombieDoorLootPoint");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CarWithZombie.BP_CarWithZombie_C.Single Open Door
// (BlueprintCallable, BlueprintEvent)

void ABP_CarWithZombie_C::Single_Open_Door()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CarWithZombie_C", "Single Open Door");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CarWithZombie.BP_CarWithZombie_C.Spawn Zombie
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_CarWithZombie_C::Spawn_Zombie()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CarWithZombie_C", "Spawn Zombie");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CarWithZombie.BP_CarWithZombie_C.TriggerZombie
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InteractedActor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CarWithZombie_C::TriggerZombie(class AActor* InteractedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CarWithZombie_C", "TriggerZombie");

	Params::BP_CarWithZombie_C_TriggerZombie Parms{};

	Parms.InteractedActor = InteractedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CarWithZombie.BP_CarWithZombie_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_CarWithZombie_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CarWithZombie_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CarWithZombie.BP_CarWithZombie_C.ZombieDied
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_CarWithZombie_C::ZombieDied()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CarWithZombie_C", "ZombieDied");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CarWithZombie.BP_CarWithZombie_C.ZombieOpenDoorTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_CarWithZombie_C::ZombieOpenDoorTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CarWithZombie_C", "ZombieOpenDoorTimeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CarWithZombie.BP_CarWithZombie_C.ZombieOpenDoorTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_CarWithZombie_C::ZombieOpenDoorTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CarWithZombie_C", "ZombieOpenDoorTimeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}
