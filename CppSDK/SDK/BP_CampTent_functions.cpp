#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CampTent

#include "Basic.hpp"

#include "BP_CampTent_classes.hpp"
#include "BP_CampTent_parameters.hpp"


namespace SDK
{

// Function BP_CampTent.BP_CampTent_C.AddPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CampTent_C::AddPlayer(class AActor* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampTent_C", "AddPlayer");

	Params::BP_CampTent_C_AddPlayer Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampTent.BP_CampTent_C.CanAdd
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Can                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CampTent_C::CanAdd(bool* Can)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampTent_C", "CanAdd");

	Params::BP_CampTent_C_CanAdd Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Can != nullptr)
		*Can = Parms.Can;
}


// Function BP_CampTent.BP_CampTent_C.DestroyInteractable
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CampTent_C::DestroyInteractable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampTent_C", "DestroyInteractable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CampTent.BP_CampTent_C.DoHeal
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CampTent_C::DoHeal(class AActor* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampTent_C", "DoHeal");

	Params::BP_CampTent_C_DoHeal Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampTent.BP_CampTent_C.DoMagic
// (BlueprintCallable, BlueprintEvent)

void ABP_CampTent_C::DoMagic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampTent_C", "DoMagic");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CampTent.BP_CampTent_C.ExecuteUbergraph_BP_CampTent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CampTent_C::ExecuteUbergraph_BP_CampTent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampTent_C", "ExecuteUbergraph_BP_CampTent");

	Params::BP_CampTent_C_ExecuteUbergraph_BP_CampTent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampTent.BP_CampTent_C.GetActorType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_ActorType                             ActorType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CampTent_C::GetActorType(E_ActorType* ActorType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampTent_C", "GetActorType");

	Params::BP_CampTent_C_GetActorType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ActorType != nullptr)
		*ActorType = Parms.ActorType;
}


// Function BP_CampTent.BP_CampTent_C.IsLocked?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CampTent_C::IsLocked_(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampTent_C", "IsLocked?");

	Params::BP_CampTent_C_IsLocked_ Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_CampTent.BP_CampTent_C.OnBeginInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CampTent_C::OnBeginInteract(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampTent_C", "OnBeginInteract");

	Params::BP_CampTent_C_OnBeginInteract Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampTent.BP_CampTent_C.OnFocused
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           HighlightActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*                  HighlightActorComponent                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// E_InteractType                          InteractType                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  LateTime                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CampTent_C::OnFocused(class APawn* Player, class AActor* HighlightActor, class UActorComponent* HighlightActorComponent, E_InteractType* InteractType, double* LateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampTent_C", "OnFocused");

	Params::BP_CampTent_C_OnFocused Parms{};

	Parms.Player = Player;
	Parms.HighlightActor = HighlightActor;
	Parms.HighlightActorComponent = HighlightActorComponent;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractType != nullptr)
		*InteractType = Parms.InteractType;

	if (LateTime != nullptr)
		*LateTime = Parms.LateTime;
}


// Function BP_CampTent.BP_CampTent_C.OnInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CampTent_C::OnInteract(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampTent_C", "OnInteract");

	Params::BP_CampTent_C_OnInteract Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampTent.BP_CampTent_C.OnInteract2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CampTent_C::OnInteract2(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampTent_C", "OnInteract2");

	Params::BP_CampTent_C_OnInteract2 Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampTent.BP_CampTent_C.OnInteract3
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CampTent_C::OnInteract3(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampTent_C", "OnInteract3");

	Params::BP_CampTent_C_OnInteract3 Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampTent.BP_CampTent_C.OnInteractVehicle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   SitIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    SkipAnimation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CampTent_C::OnInteractVehicle(class APawn* Player, int32 SitIndex, bool SkipAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampTent_C", "OnInteractVehicle");

	Params::BP_CampTent_C_OnInteractVehicle Parms{};

	Parms.Player = Player;
	Parms.SitIndex = SitIndex;
	Parms.SkipAnimation = SkipAnimation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampTent.BP_CampTent_C.OnLocalInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CampTent_C::OnLocalInteract(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampTent_C", "OnLocalInteract");

	Params::BP_CampTent_C_OnLocalInteract Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampTent.BP_CampTent_C.OnLostFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CampTent_C::OnLostFocus(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampTent_C", "OnLostFocus");

	Params::BP_CampTent_C_OnLostFocus Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampTent.BP_CampTent_C.OnPlaceCamp
// (BlueprintCallable, BlueprintEvent)

void ABP_CampTent_C::OnPlaceCamp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampTent_C", "OnPlaceCamp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CampTent.BP_CampTent_C.OnPlayerQuit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvivalPlayer_C*                Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CampTent_C::OnPlayerQuit(class ASurvivalPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampTent_C", "OnPlayerQuit");

	Params::BP_CampTent_C_OnPlayerQuit Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampTent.BP_CampTent_C.OnSeen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CampTent_C::OnSeen(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampTent_C", "OnSeen");

	Params::BP_CampTent_C_OnSeen Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampTent.BP_CampTent_C.OnSquadCheckComplete
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CampTent_C::OnSquadCheckComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampTent_C", "OnSquadCheckComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CampTent.BP_CampTent_C.OnStopInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CampTent_C::OnStopInteract(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampTent_C", "OnStopInteract");

	Params::BP_CampTent_C_OnStopInteract Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampTent.BP_CampTent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CampTent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampTent_C", "ReceiveTick");

	Params::BP_CampTent_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampTent.BP_CampTent_C.RemovePlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CampTent_C::RemovePlayer(class AActor* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampTent_C", "RemovePlayer");

	Params::BP_CampTent_C_RemovePlayer Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampTent.BP_CampTent_C.Run Lockpicking
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CampTent_C::Run_Lockpicking()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampTent_C", "Run Lockpicking");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CampTent.BP_CampTent_C.Set3DWidgetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CampTent_C::Set3DWidgetVisibility(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampTent_C", "Set3DWidgetVisibility");

	Params::BP_CampTent_C_Set3DWidgetVisibility Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampTent.BP_CampTent_C.SetTutorial3DWidgetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CampTent_C::SetTutorial3DWidgetVisibility(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampTent_C", "SetTutorial3DWidgetVisibility");

	Params::BP_CampTent_C_SetTutorial3DWidgetVisibility Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}

}
