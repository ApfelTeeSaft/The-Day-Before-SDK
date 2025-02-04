#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Toggler

#include "Basic.hpp"

#include "Toggler_classes.hpp"
#include "Toggler_parameters.hpp"


namespace SDK
{

// Function Toggler.Toggler_C.AddBlocker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AElectricityBlocker_C*            Blocker                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AToggler_C::AddBlocker(class AElectricityBlocker_C* Blocker)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Toggler_C", "AddBlocker");

	Params::Toggler_C_AddBlocker Parms{};

	Parms.Blocker = Blocker;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Toggler.Toggler_C.AddListener
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class ITogglerListener_C>Listener                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AToggler_C::AddListener(TScriptInterface<class ITogglerListener_C> Listener)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Toggler_C", "AddListener");

	Params::Toggler_C_AddListener Parms{};

	Parms.Listener = Listener;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Toggler.Toggler_C.CallListenerToggle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AToggler_C::CallListenerToggle(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Toggler_C", "CallListenerToggle");

	Params::Toggler_C_CallListenerToggle Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Toggler.Toggler_C.DestroyInteractable
// (Public, BlueprintCallable, BlueprintEvent)

void AToggler_C::DestroyInteractable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Toggler_C", "DestroyInteractable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Toggler.Toggler_C.ExecuteUbergraph_Toggler
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AToggler_C::ExecuteUbergraph_Toggler(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Toggler_C", "ExecuteUbergraph_Toggler");

	Params::Toggler_C_ExecuteUbergraph_Toggler Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Toggler.Toggler_C.GetActorType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_ActorType                             ActorType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AToggler_C::GetActorType(E_ActorType* ActorType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Toggler_C", "GetActorType");

	Params::Toggler_C_GetActorType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ActorType != nullptr)
		*ActorType = Parms.ActorType;
}


// Function Toggler.Toggler_C.HasBlocker
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AToggler_C::HasBlocker(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Toggler_C", "HasBlocker");

	Params::Toggler_C_HasBlocker Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function Toggler.Toggler_C.InteractClientSide
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvivalPlayer_C*                Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                           Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AToggler_C::InteractClientSide(class ASurvivalPlayer_C* Player, const class FString& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Toggler_C", "InteractClientSide");

	Params::Toggler_C_InteractClientSide Parms{};

	Parms.Player = Player;
	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Toggler.Toggler_C.IsLocked?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AToggler_C::IsLocked_(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Toggler_C", "IsLocked?");

	Params::Toggler_C_IsLocked_ Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function Toggler.Toggler_C.OnBeginInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AToggler_C::OnBeginInteract(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Toggler_C", "OnBeginInteract");

	Params::Toggler_C_OnBeginInteract Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Toggler.Toggler_C.OnBreakBlocker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AElectricityBlocker_C*            Blocker                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AToggler_C::OnBreakBlocker(class AElectricityBlocker_C* Blocker)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Toggler_C", "OnBreakBlocker");

	Params::Toggler_C_OnBreakBlocker Parms{};

	Parms.Blocker = Blocker;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Toggler.Toggler_C.OnFocused
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           HighlightActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*                  HighlightActorComponent                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// E_InteractType                          InteractType                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  LateTime                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AToggler_C::OnFocused(class APawn* Player, class AActor* HighlightActor, class UActorComponent* HighlightActorComponent, E_InteractType* InteractType, double* LateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Toggler_C", "OnFocused");

	Params::Toggler_C_OnFocused Parms{};

	Parms.Player = Player;
	Parms.HighlightActor = HighlightActor;
	Parms.HighlightActorComponent = HighlightActorComponent;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractType != nullptr)
		*InteractType = Parms.InteractType;

	if (LateTime != nullptr)
		*LateTime = Parms.LateTime;
}


// Function Toggler.Toggler_C.OnGeneratorEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvivalPlayer_C*                Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AToggler_C::OnGeneratorEnabled(class ASurvivalPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Toggler_C", "OnGeneratorEnabled");

	Params::Toggler_C_OnGeneratorEnabled Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Toggler.Toggler_C.OnInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AToggler_C::OnInteract(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Toggler_C", "OnInteract");

	Params::Toggler_C_OnInteract Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Toggler.Toggler_C.OnInteract2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AToggler_C::OnInteract2(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Toggler_C", "OnInteract2");

	Params::Toggler_C_OnInteract2 Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Toggler.Toggler_C.OnInteract3
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AToggler_C::OnInteract3(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Toggler_C", "OnInteract3");

	Params::Toggler_C_OnInteract3 Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Toggler.Toggler_C.OnInteractVehicle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   SitIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    SkipAnimation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AToggler_C::OnInteractVehicle(class APawn* Player, int32 SitIndex, bool SkipAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Toggler_C", "OnInteractVehicle");

	Params::Toggler_C_OnInteractVehicle Parms{};

	Parms.Player = Player;
	Parms.SitIndex = SitIndex;
	Parms.SkipAnimation = SkipAnimation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Toggler.Toggler_C.OnLocalInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AToggler_C::OnLocalInteract(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Toggler_C", "OnLocalInteract");

	Params::Toggler_C_OnLocalInteract Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Toggler.Toggler_C.OnLostFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AToggler_C::OnLostFocus(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Toggler_C", "OnLostFocus");

	Params::Toggler_C_OnLostFocus Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Toggler.Toggler_C.OnSeen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AToggler_C::OnSeen(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Toggler_C", "OnSeen");

	Params::Toggler_C_OnSeen Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Toggler.Toggler_C.OnSquadCheckComplete
// (Public, BlueprintCallable, BlueprintEvent)

void AToggler_C::OnSquadCheckComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Toggler_C", "OnSquadCheckComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Toggler.Toggler_C.OnStopInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AToggler_C::OnStopInteract(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Toggler_C", "OnStopInteract");

	Params::Toggler_C_OnStopInteract Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Toggler.Toggler_C.OnToggle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AToggler_C::OnToggle(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Toggler_C", "OnToggle");

	Params::Toggler_C_OnToggle Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Toggler.Toggler_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AToggler_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Toggler_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Toggler.Toggler_C.Run Lockpicking
// (Public, BlueprintCallable, BlueprintEvent)

void AToggler_C::Run_Lockpicking()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Toggler_C", "Run Lockpicking");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Toggler.Toggler_C.Set3DWidgetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AToggler_C::Set3DWidgetVisibility(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Toggler_C", "Set3DWidgetVisibility");

	Params::Toggler_C_Set3DWidgetVisibility Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Toggler.Toggler_C.SetListener
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class ITogglerListener_C>Listener                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AToggler_C::SetListener(TScriptInterface<class ITogglerListener_C> Listener)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Toggler_C", "SetListener");

	Params::Toggler_C_SetListener Parms{};

	Parms.Listener = Listener;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Toggler.Toggler_C.SetTutorial3DWidgetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AToggler_C::SetTutorial3DWidgetVisibility(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Toggler_C", "SetTutorial3DWidgetVisibility");

	Params::Toggler_C_SetTutorial3DWidgetVisibility Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Toggler.Toggler_C.SubscribeToGenerator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AElectricityGenerator_C*          Generator                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AToggler_C::SubscribeToGenerator(class AElectricityGenerator_C* Generator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Toggler_C", "SubscribeToGenerator");

	Params::Toggler_C_SubscribeToGenerator Parms{};

	Parms.Generator = Generator;

	UObject::ProcessEvent(Func, &Parms);
}

}

