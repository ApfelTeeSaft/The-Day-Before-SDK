#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ElevatorTeleportPanel

#include "Basic.hpp"

#include "ElevatorTeleportPanel_classes.hpp"
#include "ElevatorTeleportPanel_parameters.hpp"


namespace SDK
{

// Function ElevatorTeleportPanel.ElevatorTeleportPanel_C.DestroyInteractable
// (Public, BlueprintCallable, BlueprintEvent)

void AElevatorTeleportPanel_C::DestroyInteractable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleportPanel_C", "DestroyInteractable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ElevatorTeleportPanel.ElevatorTeleportPanel_C.ExecuteUbergraph_ElevatorTeleportPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleportPanel_C::ExecuteUbergraph_ElevatorTeleportPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleportPanel_C", "ExecuteUbergraph_ElevatorTeleportPanel");

	Params::ElevatorTeleportPanel_C_ExecuteUbergraph_ElevatorTeleportPanel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElevatorTeleportPanel.ElevatorTeleportPanel_C.GetActorType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_ActorType                             ActorType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleportPanel_C::GetActorType(E_ActorType* ActorType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleportPanel_C", "GetActorType");

	Params::ElevatorTeleportPanel_C_GetActorType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ActorType != nullptr)
		*ActorType = Parms.ActorType;
}


// Function ElevatorTeleportPanel.ElevatorTeleportPanel_C.HandleRequest
// (Public, BlueprintCallable, BlueprintEvent)

void AElevatorTeleportPanel_C::HandleRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleportPanel_C", "HandleRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ElevatorTeleportPanel.ElevatorTeleportPanel_C.IsLocked?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleportPanel_C::IsLocked_(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleportPanel_C", "IsLocked?");

	Params::ElevatorTeleportPanel_C_IsLocked_ Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function ElevatorTeleportPanel.ElevatorTeleportPanel_C.Lock
// (Public, BlueprintCallable, BlueprintEvent)

void AElevatorTeleportPanel_C::Lock()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleportPanel_C", "Lock");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ElevatorTeleportPanel.ElevatorTeleportPanel_C.OnBeginInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleportPanel_C::OnBeginInteract(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleportPanel_C", "OnBeginInteract");

	Params::ElevatorTeleportPanel_C_OnBeginInteract Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElevatorTeleportPanel.ElevatorTeleportPanel_C.OnError
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AElevatorTeleportPanel_C::OnError()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleportPanel_C", "OnError");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ElevatorTeleportPanel.ElevatorTeleportPanel_C.OnFocused
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           HighlightActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*                  HighlightActorComponent                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// E_InteractType                          InteractType                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  LateTime                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleportPanel_C::OnFocused(class APawn* Player, class AActor* HighlightActor, class UActorComponent* HighlightActorComponent, E_InteractType* InteractType, double* LateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleportPanel_C", "OnFocused");

	Params::ElevatorTeleportPanel_C_OnFocused Parms{};

	Parms.Player = Player;
	Parms.HighlightActor = HighlightActor;
	Parms.HighlightActorComponent = HighlightActorComponent;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractType != nullptr)
		*InteractType = Parms.InteractType;

	if (LateTime != nullptr)
		*LateTime = Parms.LateTime;
}


// Function ElevatorTeleportPanel.ElevatorTeleportPanel_C.OnIdle
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AElevatorTeleportPanel_C::OnIdle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleportPanel_C", "OnIdle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ElevatorTeleportPanel.ElevatorTeleportPanel_C.OnInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleportPanel_C::OnInteract(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleportPanel_C", "OnInteract");

	Params::ElevatorTeleportPanel_C_OnInteract Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElevatorTeleportPanel.ElevatorTeleportPanel_C.OnInteract2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleportPanel_C::OnInteract2(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleportPanel_C", "OnInteract2");

	Params::ElevatorTeleportPanel_C_OnInteract2 Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElevatorTeleportPanel.ElevatorTeleportPanel_C.OnInteract3
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleportPanel_C::OnInteract3(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleportPanel_C", "OnInteract3");

	Params::ElevatorTeleportPanel_C_OnInteract3 Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElevatorTeleportPanel.ElevatorTeleportPanel_C.OnInteractVehicle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   SitIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    SkipAnimation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleportPanel_C::OnInteractVehicle(class APawn* Player, int32 SitIndex, bool SkipAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleportPanel_C", "OnInteractVehicle");

	Params::ElevatorTeleportPanel_C_OnInteractVehicle Parms{};

	Parms.Player = Player;
	Parms.SitIndex = SitIndex;
	Parms.SkipAnimation = SkipAnimation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElevatorTeleportPanel.ElevatorTeleportPanel_C.OnLocalInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleportPanel_C::OnLocalInteract(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleportPanel_C", "OnLocalInteract");

	Params::ElevatorTeleportPanel_C_OnLocalInteract Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElevatorTeleportPanel.ElevatorTeleportPanel_C.OnLostFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleportPanel_C::OnLostFocus(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleportPanel_C", "OnLostFocus");

	Params::ElevatorTeleportPanel_C_OnLostFocus Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElevatorTeleportPanel.ElevatorTeleportPanel_C.OnMoving
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AElevatorTeleportPanel_C::OnMoving()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleportPanel_C", "OnMoving");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ElevatorTeleportPanel.ElevatorTeleportPanel_C.OnOpened
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AElevatorTeleportPanel_C::OnOpened()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleportPanel_C", "OnOpened");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ElevatorTeleportPanel.ElevatorTeleportPanel_C.OnProcesingRequest
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AElevatorTeleportPanel_C::OnProcesingRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleportPanel_C", "OnProcesingRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ElevatorTeleportPanel.ElevatorTeleportPanel_C.OnRequestProcessed
// (BlueprintCallable, BlueprintEvent)

void AElevatorTeleportPanel_C::OnRequestProcessed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleportPanel_C", "OnRequestProcessed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ElevatorTeleportPanel.ElevatorTeleportPanel_C.OnSeen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleportPanel_C::OnSeen(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleportPanel_C", "OnSeen");

	Params::ElevatorTeleportPanel_C_OnSeen Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElevatorTeleportPanel.ElevatorTeleportPanel_C.OnSquadCheckComplete
// (Public, BlueprintCallable, BlueprintEvent)

void AElevatorTeleportPanel_C::OnSquadCheckComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleportPanel_C", "OnSquadCheckComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ElevatorTeleportPanel.ElevatorTeleportPanel_C.OnStopInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleportPanel_C::OnStopInteract(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleportPanel_C", "OnStopInteract");

	Params::ElevatorTeleportPanel_C_OnStopInteract Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElevatorTeleportPanel.ElevatorTeleportPanel_C.PlayButtonSound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AElevatorTeleportPanel_C::PlayButtonSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleportPanel_C", "PlayButtonSound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ElevatorTeleportPanel.ElevatorTeleportPanel_C.ProcessMovingState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleportPanel_C::ProcessMovingState(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleportPanel_C", "ProcessMovingState");

	Params::ElevatorTeleportPanel_C_ProcessMovingState Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElevatorTeleportPanel.ElevatorTeleportPanel_C.ProcessRequestState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleportPanel_C::ProcessRequestState(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleportPanel_C", "ProcessRequestState");

	Params::ElevatorTeleportPanel_C_ProcessRequestState Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElevatorTeleportPanel.ElevatorTeleportPanel_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AElevatorTeleportPanel_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleportPanel_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ElevatorTeleportPanel.ElevatorTeleportPanel_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleportPanel_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleportPanel_C", "ReceiveTick");

	Params::ElevatorTeleportPanel_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElevatorTeleportPanel.ElevatorTeleportPanel_C.Run Lockpicking
// (Public, BlueprintCallable, BlueprintEvent)

void AElevatorTeleportPanel_C::Run_Lockpicking()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleportPanel_C", "Run Lockpicking");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ElevatorTeleportPanel.ElevatorTeleportPanel_C.Set3DWidgetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleportPanel_C::Set3DWidgetVisibility(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleportPanel_C", "Set3DWidgetVisibility");

	Params::ElevatorTeleportPanel_C_Set3DWidgetVisibility Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElevatorTeleportPanel.ElevatorTeleportPanel_C.SetIndicatorColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleportPanel_C::SetIndicatorColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleportPanel_C", "SetIndicatorColor");

	Params::ElevatorTeleportPanel_C_SetIndicatorColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElevatorTeleportPanel.ElevatorTeleportPanel_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ElevatorTeleportPanelState              Param_State                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleportPanel_C::SetState(ElevatorTeleportPanelState Param_State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleportPanel_C", "SetState");

	Params::ElevatorTeleportPanel_C_SetState Parms{};

	Parms.Param_State = Param_State;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElevatorTeleportPanel.ElevatorTeleportPanel_C.SetTutorial3DWidgetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AElevatorTeleportPanel_C::SetTutorial3DWidgetVisibility(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleportPanel_C", "SetTutorial3DWidgetVisibility");

	Params::ElevatorTeleportPanel_C_SetTutorial3DWidgetVisibility Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElevatorTeleportPanel.ElevatorTeleportPanel_C.Unlock
// (Public, BlueprintCallable, BlueprintEvent)

void AElevatorTeleportPanel_C::Unlock()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElevatorTeleportPanel_C", "Unlock");

	UObject::ProcessEvent(Func, nullptr);
}

}

