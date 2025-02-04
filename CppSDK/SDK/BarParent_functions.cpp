#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BarParent

#include "Basic.hpp"

#include "BarParent_classes.hpp"
#include "BarParent_parameters.hpp"


namespace SDK
{

// Function BarParent.BarParent_C.AddFoodPlaces
// (BlueprintCallable, BlueprintEvent)

void ABarParent_C::AddFoodPlaces()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BarParent_C", "AddFoodPlaces");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BarParent.BarParent_C.CheckPlace
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             StartPlace                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             SitPlace                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarParent_C::CheckPlace(class FName* StartPlace, class FName* SitPlace)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BarParent_C", "CheckPlace");

	Params::BarParent_C_CheckPlace Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (StartPlace != nullptr)
		*StartPlace = Parms.StartPlace;

	if (SitPlace != nullptr)
		*SitPlace = Parms.SitPlace;
}


// Function BarParent.BarParent_C.CheckPlaceByBool
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             StartPlace                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             SitPlace                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarParent_C::CheckPlaceByBool(class FName* StartPlace, class FName* SitPlace)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BarParent_C", "CheckPlaceByBool");

	Params::BarParent_C_CheckPlaceByBool Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (StartPlace != nullptr)
		*StartPlace = Parms.StartPlace;

	if (SitPlace != nullptr)
		*SitPlace = Parms.SitPlace;
}


// Function BarParent.BarParent_C.CollisionSwitcher
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    On_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarParent_C::CollisionSwitcher(bool On_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BarParent_C", "CollisionSwitcher");

	Params::BarParent_C_CollisionSwitcher Parms{};

	Parms.On_ = On_;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BarParent.BarParent_C.CutsceneEnding
// (BlueprintCallable, BlueprintEvent)

void ABarParent_C::CutsceneEnding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BarParent_C", "CutsceneEnding");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BarParent.BarParent_C.CutSceneExit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvivalPlayer_C*                Param_Player                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABarParent_C::CutSceneExit(class ASurvivalPlayer_C* Param_Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BarParent_C", "CutSceneExit");

	Params::BarParent_C_CutSceneExit Parms{};

	Parms.Param_Player = Param_Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BarParent.BarParent_C.DestroyInteractable
// (Public, BlueprintCallable, BlueprintEvent)

void ABarParent_C::DestroyInteractable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BarParent_C", "DestroyInteractable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BarParent.BarParent_C.ExecuteUbergraph_BarParent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarParent_C::ExecuteUbergraph_BarParent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BarParent_C", "ExecuteUbergraph_BarParent");

	Params::BarParent_C_ExecuteUbergraph_BarParent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BarParent.BarParent_C.FindEmptySlot
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*                  Output                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarParent_C::FindEmptySlot(class USceneComponent** Output, int32* Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BarParent_C", "FindEmptySlot");

	Params::BarParent_C_FindEmptySlot Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;

	if (Param_Index != nullptr)
		*Param_Index = Parms.Param_Index;
}


// Function BarParent.BarParent_C.GetActorType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_ActorType                             ActorType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarParent_C::GetActorType(E_ActorType* ActorType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BarParent_C", "GetActorType");

	Params::BarParent_C_GetActorType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ActorType != nullptr)
		*ActorType = Parms.ActorType;
}


// Function BarParent.BarParent_C.IsLocked?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarParent_C::IsLocked_(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BarParent_C", "IsLocked?");

	Params::BarParent_C_IsLocked_ Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BarParent.BarParent_C.OnBeginInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Param_Player                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABarParent_C::OnBeginInteract(class APawn* Param_Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BarParent_C", "OnBeginInteract");

	Params::BarParent_C_OnBeginInteract Parms{};

	Parms.Param_Player = Param_Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BarParent.BarParent_C.OnBlendOut_B04013B842C91A74A0D4EB9ED97CBCD8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarParent_C::OnBlendOut_B04013B842C91A74A0D4EB9ED97CBCD8(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BarParent_C", "OnBlendOut_B04013B842C91A74A0D4EB9ED97CBCD8");

	Params::BarParent_C_OnBlendOut_B04013B842C91A74A0D4EB9ED97CBCD8 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BarParent.BarParent_C.OnCompleted_B04013B842C91A74A0D4EB9ED97CBCD8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarParent_C::OnCompleted_B04013B842C91A74A0D4EB9ED97CBCD8(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BarParent_C", "OnCompleted_B04013B842C91A74A0D4EB9ED97CBCD8");

	Params::BarParent_C_OnCompleted_B04013B842C91A74A0D4EB9ED97CBCD8 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BarParent.BarParent_C.OnCutsceneStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvivalPlayer_C*                Param_Player                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABarParent_C::OnCutsceneStart(class ASurvivalPlayer_C* Param_Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BarParent_C", "OnCutsceneStart");

	Params::BarParent_C_OnCutsceneStart Parms{};

	Parms.Param_Player = Param_Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BarParent.BarParent_C.OnExitBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PlaceIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarParent_C::OnExitBar(int32 PlaceIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BarParent_C", "OnExitBar");

	Params::BarParent_C_OnExitBar Parms{};

	Parms.PlaceIndex = PlaceIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BarParent.BarParent_C.OnFocused
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Param_Player                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           HighlightActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*                  HighlightActorComponent                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// E_InteractType                          InteractType                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  LateTime                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarParent_C::OnFocused(class APawn* Param_Player, class AActor* HighlightActor, class UActorComponent* HighlightActorComponent, E_InteractType* InteractType, double* LateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BarParent_C", "OnFocused");

	Params::BarParent_C_OnFocused Parms{};

	Parms.Param_Player = Param_Player;
	Parms.HighlightActor = HighlightActor;
	Parms.HighlightActorComponent = HighlightActorComponent;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractType != nullptr)
		*InteractType = Parms.InteractType;

	if (LateTime != nullptr)
		*LateTime = Parms.LateTime;
}


// Function BarParent.BarParent_C.OnInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Param_Player                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABarParent_C::OnInteract(class APawn* Param_Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BarParent_C", "OnInteract");

	Params::BarParent_C_OnInteract Parms{};

	Parms.Param_Player = Param_Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BarParent.BarParent_C.OnInteract2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Param_Player                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABarParent_C::OnInteract2(class APawn* Param_Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BarParent_C", "OnInteract2");

	Params::BarParent_C_OnInteract2 Parms{};

	Parms.Param_Player = Param_Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BarParent.BarParent_C.OnInteract3
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Param_Player                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABarParent_C::OnInteract3(class APawn* Param_Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BarParent_C", "OnInteract3");

	Params::BarParent_C_OnInteract3 Parms{};

	Parms.Param_Player = Param_Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BarParent.BarParent_C.OnInteractVehicle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Param_Player                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   SitIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    SkipAnimation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarParent_C::OnInteractVehicle(class APawn* Param_Player, int32 SitIndex, bool SkipAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BarParent_C", "OnInteractVehicle");

	Params::BarParent_C_OnInteractVehicle Parms{};

	Parms.Param_Player = Param_Player;
	Parms.SitIndex = SitIndex;
	Parms.SkipAnimation = SkipAnimation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BarParent.BarParent_C.OnInterrupted_B04013B842C91A74A0D4EB9ED97CBCD8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarParent_C::OnInterrupted_B04013B842C91A74A0D4EB9ED97CBCD8(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BarParent_C", "OnInterrupted_B04013B842C91A74A0D4EB9ED97CBCD8");

	Params::BarParent_C_OnInterrupted_B04013B842C91A74A0D4EB9ED97CBCD8 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BarParent.BarParent_C.OnLocalInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Param_Player                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABarParent_C::OnLocalInteract(class APawn* Param_Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BarParent_C", "OnLocalInteract");

	Params::BarParent_C_OnLocalInteract Parms{};

	Parms.Param_Player = Param_Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BarParent.BarParent_C.OnLostFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Param_Player                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABarParent_C::OnLostFocus(class APawn* Param_Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BarParent_C", "OnLostFocus");

	Params::BarParent_C_OnLostFocus Parms{};

	Parms.Param_Player = Param_Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BarParent.BarParent_C.OnNotifyBegin_B04013B842C91A74A0D4EB9ED97CBCD8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarParent_C::OnNotifyBegin_B04013B842C91A74A0D4EB9ED97CBCD8(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BarParent_C", "OnNotifyBegin_B04013B842C91A74A0D4EB9ED97CBCD8");

	Params::BarParent_C_OnNotifyBegin_B04013B842C91A74A0D4EB9ED97CBCD8 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BarParent.BarParent_C.OnNotifyEnd_B04013B842C91A74A0D4EB9ED97CBCD8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarParent_C::OnNotifyEnd_B04013B842C91A74A0D4EB9ED97CBCD8(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BarParent_C", "OnNotifyEnd_B04013B842C91A74A0D4EB9ED97CBCD8");

	Params::BarParent_C_OnNotifyEnd_B04013B842C91A74A0D4EB9ED97CBCD8 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BarParent.BarParent_C.OnSeen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Param_Player                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABarParent_C::OnSeen(class APawn* Param_Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BarParent_C", "OnSeen");

	Params::BarParent_C_OnSeen Parms{};

	Parms.Param_Player = Param_Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BarParent.BarParent_C.OnSquadCheckComplete
// (Public, BlueprintCallable, BlueprintEvent)

void ABarParent_C::OnSquadCheckComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BarParent_C", "OnSquadCheckComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BarParent.BarParent_C.OnStopInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Param_Player                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABarParent_C::OnStopInteract(class APawn* Param_Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BarParent_C", "OnStopInteract");

	Params::BarParent_C_OnStopInteract Parms{};

	Parms.Param_Player = Param_Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BarParent.BarParent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABarParent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BarParent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BarParent.BarParent_C.Run Lockpicking
// (Public, BlueprintCallable, BlueprintEvent)

void ABarParent_C::Run_Lockpicking()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BarParent_C", "Run Lockpicking");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BarParent.BarParent_C.Set3DWidgetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarParent_C::Set3DWidgetVisibility(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BarParent_C", "Set3DWidgetVisibility");

	Params::BarParent_C_Set3DWidgetVisibility Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BarParent.BarParent_C.SetTutorial3DWidgetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarParent_C::SetTutorial3DWidgetVisibility(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BarParent_C", "SetTutorial3DWidgetVisibility");

	Params::BarParent_C_SetTutorial3DWidgetVisibility Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BarParent.BarParent_C.SitEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvivalPlayer_C*                Param_Player                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_Sit                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarParent_C::SitEvent(class ASurvivalPlayer_C* Param_Player, bool Param_Sit, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BarParent_C", "SitEvent");

	Params::BarParent_C_SitEvent Parms{};

	Parms.Param_Player = Param_Player;
	Parms.Param_Sit = Param_Sit;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BarParent.BarParent_C.SitEventMulti
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvivalPlayer_C*                Param_Player                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_Sit                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarParent_C::SitEventMulti(class ASurvivalPlayer_C* Param_Player, bool Param_Sit, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BarParent_C", "SitEventMulti");

	Params::BarParent_C_SitEventMulti Parms{};

	Parms.Param_Player = Param_Player;
	Parms.Param_Sit = Param_Sit;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BarParent.BarParent_C.SitEventServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvivalPlayer_C*                Param_Player                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_Sit                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarParent_C::SitEventServer(class ASurvivalPlayer_C* Param_Player, bool Param_Sit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BarParent_C", "SitEventServer");

	Params::BarParent_C_SitEventServer Parms{};

	Parms.Param_Player = Param_Player;
	Parms.Param_Sit = Param_Sit;

	UObject::ProcessEvent(Func, &Parms);
}

}

