#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ElevatorTeleport

#include "Basic.hpp"

#include "ElevatorTeleport_classes.hpp"
#include "ElevatorTeleport_parameters.hpp"


namespace SDK
{

// Function ElevatorTeleport.ElevatorTeleport_C.BeginOpeningDoors
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AElevatorTeleport_C::BeginOpeningDoors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "BeginOpeningDoors");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ElevatorTeleport.ElevatorTeleport_C.BndEvt__ElevatorTeleport_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AElevatorTeleport_C::BndEvt__ElevatorTeleport_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "BndEvt__ElevatorTeleport_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	Params::ElevatorTeleport_C_BndEvt__ElevatorTeleport_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElevatorTeleport.ElevatorTeleport_C.BndEvt__ElevatorTeleport_Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleport_C::BndEvt__ElevatorTeleport_Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "BndEvt__ElevatorTeleport_Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");

	Params::ElevatorTeleport_C_BndEvt__ElevatorTeleport_Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElevatorTeleport.ElevatorTeleport_C.BndEvt__ElevatorTeleport_BoxDoorCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AElevatorTeleport_C::BndEvt__ElevatorTeleport_BoxDoorCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "BndEvt__ElevatorTeleport_BoxDoorCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::ElevatorTeleport_C_BndEvt__ElevatorTeleport_BoxDoorCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElevatorTeleport.ElevatorTeleport_C.CanRecieveActors
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CanRecieve                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleport_C::CanRecieveActors(bool* CanRecieve)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "CanRecieveActors");

	Params::ElevatorTeleport_C_CanRecieveActors Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CanRecieve != nullptr)
		*CanRecieve = Parms.CanRecieve;
}


// Function ElevatorTeleport.ElevatorTeleport_C.CloseDoors
// (Public, BlueprintCallable, BlueprintEvent)

void AElevatorTeleport_C::CloseDoors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "CloseDoors");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ElevatorTeleport.ElevatorTeleport_C.DestroyInteractable
// (Public, BlueprintCallable, BlueprintEvent)

void AElevatorTeleport_C::DestroyInteractable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "DestroyInteractable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ElevatorTeleport.ElevatorTeleport_C.DisableInnerPanel
// (Public, BlueprintCallable, BlueprintEvent)

void AElevatorTeleport_C::DisableInnerPanel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "DisableInnerPanel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ElevatorTeleport.ElevatorTeleport_C.EnableInnerPanel
// (Public, BlueprintCallable, BlueprintEvent)

void AElevatorTeleport_C::EnableInnerPanel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "EnableInnerPanel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ElevatorTeleport.ElevatorTeleport_C.ExecuteUbergraph_ElevatorTeleport
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleport_C::ExecuteUbergraph_ElevatorTeleport(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "ExecuteUbergraph_ElevatorTeleport");

	Params::ElevatorTeleport_C_ExecuteUbergraph_ElevatorTeleport Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElevatorTeleport.ElevatorTeleport_C.GetActorType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_ActorType                             ActorType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleport_C::GetActorType(E_ActorType* ActorType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "GetActorType");

	Params::ElevatorTeleport_C_GetActorType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ActorType != nullptr)
		*ActorType = Parms.ActorType;
}


// Function ElevatorTeleport.ElevatorTeleport_C.GetDestination
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Param_Destination                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleport_C::GetDestination(struct FVector* Param_Destination)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "GetDestination");

	Params::ElevatorTeleport_C_GetDestination Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Destination != nullptr)
		*Param_Destination = std::move(Parms.Param_Destination);
}


// Function ElevatorTeleport.ElevatorTeleport_C.getRotation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                         Rotation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AElevatorTeleport_C::GetRotation(struct FRotator* Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "getRotation");

	Params::ElevatorTeleport_C_GetRotation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);
}


// Function ElevatorTeleport.ElevatorTeleport_C.HasActorsInside
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    HasActors                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleport_C::HasActorsInside(bool* HasActors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "HasActorsInside");

	Params::ElevatorTeleport_C_HasActorsInside Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (HasActors != nullptr)
		*HasActors = Parms.HasActors;
}


// Function ElevatorTeleport.ElevatorTeleport_C.HideBlocker
// (Public, BlueprintCallable, BlueprintEvent)

void AElevatorTeleport_C::HideBlocker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "HideBlocker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ElevatorTeleport.ElevatorTeleport_C.IsLocked?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleport_C::IsLocked_(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "IsLocked?");

	Params::ElevatorTeleport_C_IsLocked_ Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function ElevatorTeleport.ElevatorTeleport_C.OnBeginInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleport_C::OnBeginInteract(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "OnBeginInteract");

	Params::ElevatorTeleport_C_OnBeginInteract Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElevatorTeleport.ElevatorTeleport_C.OnClosingDoors
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AElevatorTeleport_C::OnClosingDoors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "OnClosingDoors");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ElevatorTeleport.ElevatorTeleport_C.OnDoorsClosed
// (BlueprintCallable, BlueprintEvent)

void AElevatorTeleport_C::OnDoorsClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "OnDoorsClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ElevatorTeleport.ElevatorTeleport_C.OnDoorsOpened
// (BlueprintCallable, BlueprintEvent)

void AElevatorTeleport_C::OnDoorsOpened()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "OnDoorsOpened");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ElevatorTeleport.ElevatorTeleport_C.OnFocused
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           HighlightActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*                  HighlightActorComponent                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// E_InteractType                          InteractType                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  LateTime                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleport_C::OnFocused(class APawn* Player, class AActor* HighlightActor, class UActorComponent* HighlightActorComponent, E_InteractType* InteractType, double* LateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "OnFocused");

	Params::ElevatorTeleport_C_OnFocused Parms{};

	Parms.Player = Player;
	Parms.HighlightActor = HighlightActor;
	Parms.HighlightActorComponent = HighlightActorComponent;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractType != nullptr)
		*InteractType = Parms.InteractType;

	if (LateTime != nullptr)
		*LateTime = Parms.LateTime;
}


// Function ElevatorTeleport.ElevatorTeleport_C.OnInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleport_C::OnInteract(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "OnInteract");

	Params::ElevatorTeleport_C_OnInteract Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElevatorTeleport.ElevatorTeleport_C.OnInteract2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleport_C::OnInteract2(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "OnInteract2");

	Params::ElevatorTeleport_C_OnInteract2 Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElevatorTeleport.ElevatorTeleport_C.OnInteract3
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleport_C::OnInteract3(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "OnInteract3");

	Params::ElevatorTeleport_C_OnInteract3 Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElevatorTeleport.ElevatorTeleport_C.OnInteractVehicle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   SitIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    SkipAnimation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleport_C::OnInteractVehicle(class APawn* Player, int32 SitIndex, bool SkipAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "OnInteractVehicle");

	Params::ElevatorTeleport_C_OnInteractVehicle Parms{};

	Parms.Player = Player;
	Parms.SitIndex = SitIndex;
	Parms.SkipAnimation = SkipAnimation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElevatorTeleport.ElevatorTeleport_C.OnLocalInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleport_C::OnLocalInteract(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "OnLocalInteract");

	Params::ElevatorTeleport_C_OnLocalInteract Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElevatorTeleport.ElevatorTeleport_C.OnLostFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleport_C::OnLostFocus(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "OnLostFocus");

	Params::ElevatorTeleport_C_OnLostFocus Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElevatorTeleport.ElevatorTeleport_C.OnOpeningDoors
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AElevatorTeleport_C::OnOpeningDoors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "OnOpeningDoors");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ElevatorTeleport.ElevatorTeleport_C.OnPreparingTeleport
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AElevatorTeleport_C::OnPreparingTeleport()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "OnPreparingTeleport");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ElevatorTeleport.ElevatorTeleport_C.OnSeen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleport_C::OnSeen(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "OnSeen");

	Params::ElevatorTeleport_C_OnSeen Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElevatorTeleport.ElevatorTeleport_C.OnSquadCheckComplete
// (Public, BlueprintCallable, BlueprintEvent)

void AElevatorTeleport_C::OnSquadCheckComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "OnSquadCheckComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ElevatorTeleport.ElevatorTeleport_C.OnStopInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleport_C::OnStopInteract(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "OnStopInteract");

	Params::ElevatorTeleport_C_OnStopInteract Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElevatorTeleport.ElevatorTeleport_C.OnTeleportTimeout
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AElevatorTeleport_C::OnTeleportTimeout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "OnTeleportTimeout");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ElevatorTeleport.ElevatorTeleport_C.OpenDoors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_WaitUntilActorsLeave                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleport_C::OpenDoors(bool Param_WaitUntilActorsLeave)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "OpenDoors");

	Params::ElevatorTeleport_C_OpenDoors Parms{};

	Parms.Param_WaitUntilActorsLeave = Param_WaitUntilActorsLeave;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElevatorTeleport.ElevatorTeleport_C.PrepareForRecieve
// (Public, BlueprintCallable, BlueprintEvent)

void AElevatorTeleport_C::PrepareForRecieve()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "PrepareForRecieve");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ElevatorTeleport.ElevatorTeleport_C.PreRecieve
// (Public, BlueprintCallable, BlueprintEvent)

void AElevatorTeleport_C::PreRecieve()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "PreRecieve");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ElevatorTeleport.ElevatorTeleport_C.ProcessClosingDoorsState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleport_C::ProcessClosingDoorsState(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "ProcessClosingDoorsState");

	Params::ElevatorTeleport_C_ProcessClosingDoorsState Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElevatorTeleport.ElevatorTeleport_C.ProcessOpenedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleport_C::ProcessOpenedState(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "ProcessOpenedState");

	Params::ElevatorTeleport_C_ProcessOpenedState Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElevatorTeleport.ElevatorTeleport_C.ProcessOpeningDoorsState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleport_C::ProcessOpeningDoorsState(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "ProcessOpeningDoorsState");

	Params::ElevatorTeleport_C_ProcessOpeningDoorsState Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElevatorTeleport.ElevatorTeleport_C.ProcessPreparingToTeleportState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleport_C::ProcessPreparingToTeleportState(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "ProcessPreparingToTeleportState");

	Params::ElevatorTeleport_C_ProcessPreparingToTeleportState Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElevatorTeleport.ElevatorTeleport_C.ProcessRecievingActorsState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleport_C::ProcessRecievingActorsState(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "ProcessRecievingActorsState");

	Params::ElevatorTeleport_C_ProcessRecievingActorsState Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElevatorTeleport.ElevatorTeleport_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AElevatorTeleport_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ElevatorTeleport.ElevatorTeleport_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleport_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "ReceiveTick");

	Params::ElevatorTeleport_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElevatorTeleport.ElevatorTeleport_C.RecieveActors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATeleport_C*                      Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleport_C::RecieveActors(class ATeleport_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "RecieveActors");

	Params::ElevatorTeleport_C_RecieveActors Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElevatorTeleport.ElevatorTeleport_C.RecieverCanAcceptActors
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CanRecieve                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleport_C::RecieverCanAcceptActors(bool* CanRecieve)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "RecieverCanAcceptActors");

	Params::ElevatorTeleport_C_RecieverCanAcceptActors Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CanRecieve != nullptr)
		*CanRecieve = Parms.CanRecieve;
}


// Function ElevatorTeleport.ElevatorTeleport_C.Run Lockpicking
// (Public, BlueprintCallable, BlueprintEvent)

void AElevatorTeleport_C::Run_Lockpicking()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "Run Lockpicking");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ElevatorTeleport.ElevatorTeleport_C.Set3DWidgetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleport_C::Set3DWidgetVisibility(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "Set3DWidgetVisibility");

	Params::ElevatorTeleport_C_Set3DWidgetVisibility Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElevatorTeleport.ElevatorTeleport_C.SetDoorCollisionOff
// (BlueprintCallable, BlueprintEvent)

void AElevatorTeleport_C::SetDoorCollisionOff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "SetDoorCollisionOff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ElevatorTeleport.ElevatorTeleport_C.SetDoorCollisionOn
// (BlueprintCallable, BlueprintEvent)

void AElevatorTeleport_C::SetDoorCollisionOn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "SetDoorCollisionOn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ElevatorTeleport.ElevatorTeleport_C.SetElevatorBusy
// (Public, BlueprintCallable, BlueprintEvent)

void AElevatorTeleport_C::SetElevatorBusy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "SetElevatorBusy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ElevatorTeleport.ElevatorTeleport_C.SetElevatorDestination
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           ElevatorDestination                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleport_C::SetElevatorDestination(class AActor* ElevatorDestination)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "SetElevatorDestination");

	Params::ElevatorTeleport_C_SetElevatorDestination Parms{};

	Parms.ElevatorDestination = ElevatorDestination;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElevatorTeleport.ElevatorTeleport_C.SetElevatorNotBusy
// (Public, BlueprintCallable, BlueprintEvent)

void AElevatorTeleport_C::SetElevatorNotBusy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "SetElevatorNotBusy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ElevatorTeleport.ElevatorTeleport_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ElevatorTeleportState                   Param_State                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleport_C::SetState(ElevatorTeleportState Param_State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "SetState");

	Params::ElevatorTeleport_C_SetState Parms{};

	Parms.Param_State = Param_State;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElevatorTeleport.ElevatorTeleport_C.SetTutorial3DWidgetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleport_C::SetTutorial3DWidgetVisibility(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "SetTutorial3DWidgetVisibility");

	Params::ElevatorTeleport_C_SetTutorial3DWidgetVisibility Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElevatorTeleport.ElevatorTeleport_C.ShowBlocker
// (Public, BlueprintCallable, BlueprintEvent)

void AElevatorTeleport_C::ShowBlocker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "ShowBlocker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ElevatorTeleport.ElevatorTeleport_C.TeleportActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleport_C::TeleportActor(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleport_C", "TeleportActor");

	Params::ElevatorTeleport_C_TeleportActor Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}

}
