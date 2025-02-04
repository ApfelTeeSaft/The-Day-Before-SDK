#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DefaultPIckableEnv

#include "Basic.hpp"

#include "BP_DefaultPIckableEnv_classes.hpp"
#include "BP_DefaultPIckableEnv_parameters.hpp"


namespace SDK
{

// Function BP_DefaultPIckableEnv.BP_DefaultPIckableEnv_C.DestroyInteractable
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DefaultPIckableEnv_C::DestroyInteractable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultPIckableEnv_C", "DestroyInteractable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DefaultPIckableEnv.BP_DefaultPIckableEnv_C.ExecuteUbergraph_BP_DefaultPIckableEnv
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DefaultPIckableEnv_C::ExecuteUbergraph_BP_DefaultPIckableEnv(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultPIckableEnv_C", "ExecuteUbergraph_BP_DefaultPIckableEnv");

	Params::BP_DefaultPIckableEnv_C_ExecuteUbergraph_BP_DefaultPIckableEnv Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DefaultPIckableEnv.BP_DefaultPIckableEnv_C.GetActorType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_ActorType                             ActorType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DefaultPIckableEnv_C::GetActorType(E_ActorType* ActorType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultPIckableEnv_C", "GetActorType");

	Params::BP_DefaultPIckableEnv_C_GetActorType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ActorType != nullptr)
		*ActorType = Parms.ActorType;
}


// Function BP_DefaultPIckableEnv.BP_DefaultPIckableEnv_C.IsLocked?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DefaultPIckableEnv_C::IsLocked_(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultPIckableEnv_C", "IsLocked?");

	Params::BP_DefaultPIckableEnv_C_IsLocked_ Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_DefaultPIckableEnv.BP_DefaultPIckableEnv_C.ItemPickuped
// (BlueprintCallable, BlueprintEvent)

void ABP_DefaultPIckableEnv_C::ItemPickuped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultPIckableEnv_C", "ItemPickuped");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DefaultPIckableEnv.BP_DefaultPIckableEnv_C.OnBeginInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_DefaultPIckableEnv_C::OnBeginInteract(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultPIckableEnv_C", "OnBeginInteract");

	Params::BP_DefaultPIckableEnv_C_OnBeginInteract Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DefaultPIckableEnv.BP_DefaultPIckableEnv_C.OnFocused
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           HighlightActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*                  HighlightActorComponent                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// E_InteractType                          InteractType                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  LateTime                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DefaultPIckableEnv_C::OnFocused(class APawn* Player, class AActor* HighlightActor, class UActorComponent* HighlightActorComponent, E_InteractType* InteractType, double* LateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultPIckableEnv_C", "OnFocused");

	Params::BP_DefaultPIckableEnv_C_OnFocused Parms{};

	Parms.Player = Player;
	Parms.HighlightActor = HighlightActor;
	Parms.HighlightActorComponent = HighlightActorComponent;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractType != nullptr)
		*InteractType = Parms.InteractType;

	if (LateTime != nullptr)
		*LateTime = Parms.LateTime;
}


// Function BP_DefaultPIckableEnv.BP_DefaultPIckableEnv_C.OnInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_DefaultPIckableEnv_C::OnInteract(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultPIckableEnv_C", "OnInteract");

	Params::BP_DefaultPIckableEnv_C_OnInteract Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DefaultPIckableEnv.BP_DefaultPIckableEnv_C.OnInteract2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_DefaultPIckableEnv_C::OnInteract2(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultPIckableEnv_C", "OnInteract2");

	Params::BP_DefaultPIckableEnv_C_OnInteract2 Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DefaultPIckableEnv.BP_DefaultPIckableEnv_C.OnInteract3
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_DefaultPIckableEnv_C::OnInteract3(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultPIckableEnv_C", "OnInteract3");

	Params::BP_DefaultPIckableEnv_C_OnInteract3 Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DefaultPIckableEnv.BP_DefaultPIckableEnv_C.OnInteractVehicle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   SitIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    SkipAnimation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DefaultPIckableEnv_C::OnInteractVehicle(class APawn* Player, int32 SitIndex, bool SkipAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultPIckableEnv_C", "OnInteractVehicle");

	Params::BP_DefaultPIckableEnv_C_OnInteractVehicle Parms{};

	Parms.Player = Player;
	Parms.SitIndex = SitIndex;
	Parms.SkipAnimation = SkipAnimation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DefaultPIckableEnv.BP_DefaultPIckableEnv_C.OnLocalInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_DefaultPIckableEnv_C::OnLocalInteract(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultPIckableEnv_C", "OnLocalInteract");

	Params::BP_DefaultPIckableEnv_C_OnLocalInteract Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DefaultPIckableEnv.BP_DefaultPIckableEnv_C.OnLostFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_DefaultPIckableEnv_C::OnLostFocus(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultPIckableEnv_C", "OnLostFocus");

	Params::BP_DefaultPIckableEnv_C_OnLostFocus Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DefaultPIckableEnv.BP_DefaultPIckableEnv_C.OnSeen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_DefaultPIckableEnv_C::OnSeen(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultPIckableEnv_C", "OnSeen");

	Params::BP_DefaultPIckableEnv_C_OnSeen Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DefaultPIckableEnv.BP_DefaultPIckableEnv_C.OnSquadCheckComplete
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DefaultPIckableEnv_C::OnSquadCheckComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultPIckableEnv_C", "OnSquadCheckComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DefaultPIckableEnv.BP_DefaultPIckableEnv_C.OnStopInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_DefaultPIckableEnv_C::OnStopInteract(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultPIckableEnv_C", "OnStopInteract");

	Params::BP_DefaultPIckableEnv_C_OnStopInteract Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DefaultPIckableEnv.BP_DefaultPIckableEnv_C.OverlapEnd
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DefaultPIckableEnv_C::OverlapEnd(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultPIckableEnv_C", "OverlapEnd");

	Params::BP_DefaultPIckableEnv_C_OverlapEnd Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function BP_DefaultPIckableEnv.BP_DefaultPIckableEnv_C.OverlapStart
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DefaultPIckableEnv_C::OverlapStart(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultPIckableEnv_C", "OverlapStart");

	Params::BP_DefaultPIckableEnv_C_OverlapStart Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function BP_DefaultPIckableEnv.BP_DefaultPIckableEnv_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_DefaultPIckableEnv_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultPIckableEnv_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DefaultPIckableEnv.BP_DefaultPIckableEnv_C.Run Lockpicking
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DefaultPIckableEnv_C::Run_Lockpicking()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultPIckableEnv_C", "Run Lockpicking");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DefaultPIckableEnv.BP_DefaultPIckableEnv_C.Set3DWidgetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DefaultPIckableEnv_C::Set3DWidgetVisibility(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultPIckableEnv_C", "Set3DWidgetVisibility");

	Params::BP_DefaultPIckableEnv_C_Set3DWidgetVisibility Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DefaultPIckableEnv.BP_DefaultPIckableEnv_C.SetTutorial3DWidgetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DefaultPIckableEnv_C::SetTutorial3DWidgetVisibility(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultPIckableEnv_C", "SetTutorial3DWidgetVisibility");

	Params::BP_DefaultPIckableEnv_C_SetTutorial3DWidgetVisibility Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}

}

