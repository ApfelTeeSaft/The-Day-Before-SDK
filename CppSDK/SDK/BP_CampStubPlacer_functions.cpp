#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CampStubPlacer

#include "Basic.hpp"

#include "BP_CampStubPlacer_classes.hpp"
#include "BP_CampStubPlacer_parameters.hpp"


namespace SDK
{

// Function BP_CampStubPlacer.BP_CampStubPlacer_C.BuildingStateUpd
// (BlueprintCallable, BlueprintEvent)

void ABP_CampStubPlacer_C::BuildingStateUpd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampStubPlacer_C", "BuildingStateUpd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CampStubPlacer.BP_CampStubPlacer_C.DestroyInteractable
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CampStubPlacer_C::DestroyInteractable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampStubPlacer_C", "DestroyInteractable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CampStubPlacer.BP_CampStubPlacer_C.ExecuteUbergraph_BP_CampStubPlacer
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CampStubPlacer_C::ExecuteUbergraph_BP_CampStubPlacer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampStubPlacer_C", "ExecuteUbergraph_BP_CampStubPlacer");

	Params::BP_CampStubPlacer_C_ExecuteUbergraph_BP_CampStubPlacer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampStubPlacer.BP_CampStubPlacer_C.GetActorType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_ActorType                             ActorType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CampStubPlacer_C::GetActorType(E_ActorType* ActorType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampStubPlacer_C", "GetActorType");

	Params::BP_CampStubPlacer_C_GetActorType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ActorType != nullptr)
		*ActorType = Parms.ActorType;
}


// Function BP_CampStubPlacer.BP_CampStubPlacer_C.GetCampS
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_Camp_C*                       Param_Camp                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CampStubPlacer_C::GetCampS(class ABP_Camp_C** Param_Camp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampStubPlacer_C", "GetCampS");

	Params::BP_CampStubPlacer_C_GetCampS Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Camp != nullptr)
		*Param_Camp = Parms.Param_Camp;
}


// Function BP_CampStubPlacer.BP_CampStubPlacer_C.IsLocked?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CampStubPlacer_C::IsLocked_(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampStubPlacer_C", "IsLocked?");

	Params::BP_CampStubPlacer_C_IsLocked_ Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_CampStubPlacer.BP_CampStubPlacer_C.OnBeginInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CampStubPlacer_C::OnBeginInteract(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampStubPlacer_C", "OnBeginInteract");

	Params::BP_CampStubPlacer_C_OnBeginInteract Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampStubPlacer.BP_CampStubPlacer_C.OnBuildingState
// (BlueprintCallable, BlueprintEvent)

void ABP_CampStubPlacer_C::OnBuildingState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampStubPlacer_C", "OnBuildingState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CampStubPlacer.BP_CampStubPlacer_C.OnFocused
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           HighlightActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*                  HighlightActorComponent                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// E_InteractType                          InteractType                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  LateTime                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CampStubPlacer_C::OnFocused(class APawn* Player, class AActor* HighlightActor, class UActorComponent* HighlightActorComponent, E_InteractType* InteractType, double* LateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampStubPlacer_C", "OnFocused");

	Params::BP_CampStubPlacer_C_OnFocused Parms{};

	Parms.Player = Player;
	Parms.HighlightActor = HighlightActor;
	Parms.HighlightActorComponent = HighlightActorComponent;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractType != nullptr)
		*InteractType = Parms.InteractType;

	if (LateTime != nullptr)
		*LateTime = Parms.LateTime;
}


// Function BP_CampStubPlacer.BP_CampStubPlacer_C.OnInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CampStubPlacer_C::OnInteract(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampStubPlacer_C", "OnInteract");

	Params::BP_CampStubPlacer_C_OnInteract Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampStubPlacer.BP_CampStubPlacer_C.OnInteract2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CampStubPlacer_C::OnInteract2(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampStubPlacer_C", "OnInteract2");

	Params::BP_CampStubPlacer_C_OnInteract2 Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampStubPlacer.BP_CampStubPlacer_C.OnInteract3
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CampStubPlacer_C::OnInteract3(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampStubPlacer_C", "OnInteract3");

	Params::BP_CampStubPlacer_C_OnInteract3 Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampStubPlacer.BP_CampStubPlacer_C.OnInteractVehicle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   SitIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    SkipAnimation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CampStubPlacer_C::OnInteractVehicle(class APawn* Player, int32 SitIndex, bool SkipAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampStubPlacer_C", "OnInteractVehicle");

	Params::BP_CampStubPlacer_C_OnInteractVehicle Parms{};

	Parms.Player = Player;
	Parms.SitIndex = SitIndex;
	Parms.SkipAnimation = SkipAnimation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampStubPlacer.BP_CampStubPlacer_C.OnLocalInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CampStubPlacer_C::OnLocalInteract(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampStubPlacer_C", "OnLocalInteract");

	Params::BP_CampStubPlacer_C_OnLocalInteract Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampStubPlacer.BP_CampStubPlacer_C.OnLostFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CampStubPlacer_C::OnLostFocus(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampStubPlacer_C", "OnLostFocus");

	Params::BP_CampStubPlacer_C_OnLostFocus Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampStubPlacer.BP_CampStubPlacer_C.OnSeen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CampStubPlacer_C::OnSeen(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampStubPlacer_C", "OnSeen");

	Params::BP_CampStubPlacer_C_OnSeen Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampStubPlacer.BP_CampStubPlacer_C.OnSquadCheckComplete
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CampStubPlacer_C::OnSquadCheckComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampStubPlacer_C", "OnSquadCheckComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CampStubPlacer.BP_CampStubPlacer_C.OnStopInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CampStubPlacer_C::OnStopInteract(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampStubPlacer_C", "OnStopInteract");

	Params::BP_CampStubPlacer_C_OnStopInteract Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampStubPlacer.BP_CampStubPlacer_C.Run Lockpicking
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CampStubPlacer_C::Run_Lockpicking()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampStubPlacer_C", "Run Lockpicking");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CampStubPlacer.BP_CampStubPlacer_C.Set3DWidgetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CampStubPlacer_C::Set3DWidgetVisibility(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampStubPlacer_C", "Set3DWidgetVisibility");

	Params::BP_CampStubPlacer_C_Set3DWidgetVisibility Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampStubPlacer.BP_CampStubPlacer_C.SetTutorial3DWidgetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CampStubPlacer_C::SetTutorial3DWidgetVisibility(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampStubPlacer_C", "SetTutorial3DWidgetVisibility");

	Params::BP_CampStubPlacer_C_SetTutorial3DWidgetVisibility Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}

}

