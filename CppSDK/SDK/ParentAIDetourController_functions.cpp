#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ParentAIDetourController

#include "Basic.hpp"

#include "ParentAIDetourController_classes.hpp"
#include "ParentAIDetourController_parameters.hpp"


namespace SDK
{

// Function ParentAIDetourController.ParentAIDetourController_C.ActorHeared
// (Protected, BlueprintCallable, BlueprintEvent)

void AParentAIDetourController_C::ActorHeared()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "ActorHeared");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ParentAIDetourController.ParentAIDetourController_C.ActorSeen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           SeenActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    DamageSense                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AParentAIDetourController_C::ActorSeen(class AActor* SeenActor, bool DamageSense)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "ActorSeen");

	Params::ParentAIDetourController_C_ActorSeen Parms{};

	Parms.SeenActor = SeenActor;
	Parms.DamageSense = DamageSense;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ParentAIDetourController.ParentAIDetourController_C.Adjust Movement LOD
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AParentAIDetourController_C::Adjust_Movement_LOD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "Adjust Movement LOD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ParentAIDetourController.ParentAIDetourController_C.BindToDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void AParentAIDetourController_C::BindToDelegates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "BindToDelegates");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ParentAIDetourController.ParentAIDetourController_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_3_ActorPerceptionUpdatedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAIStimulus                      Stimulus                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void AParentAIDetourController_C::BndEvt__AIPerception_K2Node_ComponentBoundEvent_3_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "BndEvt__AIPerception_K2Node_ComponentBoundEvent_3_ActorPerceptionUpdatedDelegate__DelegateSignature");

	Params::ParentAIDetourController_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_3_ActorPerceptionUpdatedDelegate__DelegateSignature Parms{};

	Parms.Actor = Actor;
	Parms.Stimulus = std::move(Stimulus);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ParentAIDetourController.ParentAIDetourController_C.BndEvt__ParentAIDetourController_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APawn*                            Param_Pawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AParentAIDetourController_C::BndEvt__ParentAIDetourController_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(class APawn* Param_Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "BndEvt__ParentAIDetourController_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature");

	Params::ParentAIDetourController_C_BndEvt__ParentAIDetourController_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature Parms{};

	Parms.Param_Pawn = Param_Pawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ParentAIDetourController.ParentAIDetourController_C.CalculateDistance
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// double                                  Distance                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AParentAIDetourController_C::CalculateDistance(class AActor*& Actor, double* Distance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "CalculateDistance");

	Params::ParentAIDetourController_C_CalculateDistance Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

	Actor = Parms.Actor;

	if (Distance != nullptr)
		*Distance = Parms.Distance;
}


// Function ParentAIDetourController.ParentAIDetourController_C.Can Detect Special Zombie
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CanDetect                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AParentAIDetourController_C::Can_Detect_Special_Zombie(class AActor* Actor, bool* CanDetect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "Can Detect Special Zombie");

	Params::ParentAIDetourController_C_Can_Detect_Special_Zombie Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

	if (CanDetect != nullptr)
		*CanDetect = Parms.CanDetect;
}


// Function ParentAIDetourController.ParentAIDetourController_C.CantHear
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AParentAIDetourController_C::CantHear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "CantHear");

	Params::ParentAIDetourController_C_CantHear Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ParentAIDetourController.ParentAIDetourController_C.CantSee
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AParentAIDetourController_C::CantSee()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "CantSee");

	Params::ParentAIDetourController_C_CantSee Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ParentAIDetourController.ParentAIDetourController_C.CheckForClearView
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Clear                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AParentAIDetourController_C::CheckForClearView(bool* Clear)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "CheckForClearView");

	Params::ParentAIDetourController_C_CheckForClearView Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Clear != nullptr)
		*Clear = Parms.Clear;
}


// Function ParentAIDetourController.ParentAIDetourController_C.CheckIsClosest
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           SeenActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// bool                                    IsClosest                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AParentAIDetourController_C::CheckIsClosest(class AActor*& SeenActor, bool* IsClosest)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "CheckIsClosest");

	Params::ParentAIDetourController_C_CheckIsClosest Parms{};

	Parms.SeenActor = SeenActor;

	UObject::ProcessEvent(Func, &Parms);

	SeenActor = Parms.SeenActor;

	if (IsClosest != nullptr)
		*IsClosest = Parms.IsClosest;
}


// Function ParentAIDetourController.ParentAIDetourController_C.CheckIsOptimizationHearing
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAIStimulus                      AIStimulus                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void AParentAIDetourController_C::CheckIsOptimizationHearing(class UObject* Actor, const struct FAIStimulus& AIStimulus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "CheckIsOptimizationHearing");

	Params::ParentAIDetourController_C_CheckIsOptimizationHearing Parms{};

	Parms.Actor = Actor;
	Parms.AIStimulus = std::move(AIStimulus);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ParentAIDetourController.ParentAIDetourController_C.CheckMovementLOD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Distance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           PlayerActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AParentAIDetourController_C::CheckMovementLOD(double Distance, class AActor* PlayerActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "CheckMovementLOD");

	Params::ParentAIDetourController_C_CheckMovementLOD Parms{};

	Parms.Distance = Distance;
	Parms.PlayerActor = PlayerActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ParentAIDetourController.ParentAIDetourController_C.CheckNextNearestActor
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           NewActor                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AParentAIDetourController_C::CheckNextNearestActor(class AActor** NewActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "CheckNextNearestActor");

	Params::ParentAIDetourController_C_CheckNextNearestActor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewActor != nullptr)
		*NewActor = Parms.NewActor;
}


// Function ParentAIDetourController.ParentAIDetourController_C.CheckTargetHP
// (Public, BlueprintCallable, BlueprintEvent)

void AParentAIDetourController_C::CheckTargetHP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "CheckTargetHP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ParentAIDetourController.ParentAIDetourController_C.ClearVariablesAfterSight
// (Protected, BlueprintCallable, BlueprintEvent)

void AParentAIDetourController_C::ClearVariablesAfterSight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "ClearVariablesAfterSight");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ParentAIDetourController.ParentAIDetourController_C.DamageSensed
// (Protected, BlueprintCallable, BlueprintEvent)

void AParentAIDetourController_C::DamageSensed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "DamageSensed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ParentAIDetourController.ParentAIDetourController_C.DelaySetAfterKill
// (Protected, BlueprintCallable, BlueprintEvent)

void AParentAIDetourController_C::DelaySetAfterKill()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "DelaySetAfterKill");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ParentAIDetourController.ParentAIDetourController_C.ExecuteUbergraph_ParentAIDetourController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AParentAIDetourController_C::ExecuteUbergraph_ParentAIDetourController(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "ExecuteUbergraph_ParentAIDetourController");

	Params::ParentAIDetourController_C_ExecuteUbergraph_ParentAIDetourController Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ParentAIDetourController.ParentAIDetourController_C.FindClosestActor
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           ClosestActor                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AParentAIDetourController_C::FindClosestActor(class AActor** ClosestActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "FindClosestActor");

	Params::ParentAIDetourController_C_FindClosestActor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ClosestActor != nullptr)
		*ClosestActor = Parms.ClosestActor;
}


// Function ParentAIDetourController.ParentAIDetourController_C.HasSupressor
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           HearedActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_HasSupressor                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AParentAIDetourController_C::HasSupressor(class AActor* HearedActor, bool* Param_HasSupressor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "HasSupressor");

	Params::ParentAIDetourController_C_HasSupressor Parms{};

	Parms.HearedActor = HearedActor;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_HasSupressor != nullptr)
		*Param_HasSupressor = Parms.Param_HasSupressor;
}


// Function ParentAIDetourController.ParentAIDetourController_C.InitializeVariablesOnPerception
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAIStimulus                      Stimulus                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void AParentAIDetourController_C::InitializeVariablesOnPerception(class AActor* Actor, const struct FAIStimulus& Stimulus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "InitializeVariablesOnPerception");

	Params::ParentAIDetourController_C_InitializeVariablesOnPerception Parms{};

	Parms.Actor = Actor;
	Parms.Stimulus = std::move(Stimulus);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ParentAIDetourController.ParentAIDetourController_C.Is Target Car
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          Object                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AParentAIDetourController_C::Is_Target_Car(class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "Is Target Car");

	Params::ParentAIDetourController_C_Is_Target_Car Parms{};

	Parms.Object = Object;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ParentAIDetourController.ParentAIDetourController_C.IsTargetEmptyCar
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AParentAIDetourController_C::IsTargetEmptyCar(class AActor* Actor, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "IsTargetEmptyCar");

	Params::ParentAIDetourController_C_IsTargetEmptyCar Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function ParentAIDetourController.ParentAIDetourController_C.KillOnLongSleep
// (Public, BlueprintCallable, BlueprintEvent)

void AParentAIDetourController_C::KillOnLongSleep()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "KillOnLongSleep");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ParentAIDetourController.ParentAIDetourController_C.LoadSoundsAfterNetcull
// (Public, BlueprintCallable, BlueprintEvent)

void AParentAIDetourController_C::LoadSoundsAfterNetcull()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "LoadSoundsAfterNetcull");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ParentAIDetourController.ParentAIDetourController_C.LosingTargetProcess
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AParentAIDetourController_C::LosingTargetProcess()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "LosingTargetProcess");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ParentAIDetourController.ParentAIDetourController_C.On Player Death
// (Private, BlueprintCallable, BlueprintEvent)

void AParentAIDetourController_C::On_Player_Death()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "On Player Death");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ParentAIDetourController.ParentAIDetourController_C.On Player Death After Timer
// (Public, BlueprintCallable, BlueprintEvent)

void AParentAIDetourController_C::On_Player_Death_After_Timer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "On Player Death After Timer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ParentAIDetourController.ParentAIDetourController_C.OnEndScreaming
// (Public, BlueprintCallable, BlueprintEvent)

void AParentAIDetourController_C::OnEndScreaming()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "OnEndScreaming");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ParentAIDetourController.ParentAIDetourController_C.OnPlayerKnockedDown
// (Public, BlueprintCallable, BlueprintEvent)

void AParentAIDetourController_C::OnPlayerKnockedDown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "OnPlayerKnockedDown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ParentAIDetourController.ParentAIDetourController_C.OnSeenActor__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           SeenActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AParentAIDetourController_C::OnSeenActor__DelegateSignature(class AActor* SeenActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "OnSeenActor__DelegateSignature");

	Params::ParentAIDetourController_C_OnSeenActor__DelegateSignature Parms{};

	Parms.SeenActor = SeenActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ParentAIDetourController.ParentAIDetourController_C.Optimization Adjustments Needed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsPlayerNear                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AParentAIDetourController_C::Optimization_Adjustments_Needed(bool bIsPlayerNear)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "Optimization Adjustments Needed");

	Params::ParentAIDetourController_C_Optimization_Adjustments_Needed Parms{};

	Parms.bIsPlayerNear = bIsPlayerNear;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ParentAIDetourController.ParentAIDetourController_C.PlayerDeathEP
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// uint8                                   Byte                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AParentAIDetourController_C::PlayerDeathEP(class AActor* Actor, uint8 Byte)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "PlayerDeathEP");

	Params::ParentAIDetourController_C_PlayerDeathEP Parms{};

	Parms.Actor = Actor;
	Parms.Byte = Byte;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ParentAIDetourController.ParentAIDetourController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AParentAIDetourController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ParentAIDetourController.ParentAIDetourController_C.Set Check Target HP Timer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AParentAIDetourController_C::Set_Check_Target_HP_Timer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "Set Check Target HP Timer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ParentAIDetourController.ParentAIDetourController_C.Set Sleep Mode Enabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AParentAIDetourController_C::Set_Sleep_Mode_Enabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "Set Sleep Mode Enabled");

	Params::ParentAIDetourController_C_Set_Sleep_Mode_Enabled Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ParentAIDetourController.ParentAIDetourController_C.SetIgnoreCars
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AParentAIDetourController_C::SetIgnoreCars()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "SetIgnoreCars");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ParentAIDetourController.ParentAIDetourController_C.SetNoPlayersNear
// (Public, BlueprintCallable, BlueprintEvent)

void AParentAIDetourController_C::SetNoPlayersNear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "SetNoPlayersNear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ParentAIDetourController.ParentAIDetourController_C.SetupLosingTargetTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AParentAIDetourController_C::SetupLosingTargetTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "SetupLosingTargetTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ParentAIDetourController.ParentAIDetourController_C.SetupVariablesAfterHearing
// (Protected, BlueprintCallable, BlueprintEvent)

void AParentAIDetourController_C::SetupVariablesAfterHearing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "SetupVariablesAfterHearing");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ParentAIDetourController.ParentAIDetourController_C.SetupVariablesAfterSight
// (Protected, BlueprintCallable, BlueprintEvent)

void AParentAIDetourController_C::SetupVariablesAfterSight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "SetupVariablesAfterSight");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ParentAIDetourController.ParentAIDetourController_C.StartNoPlayerNearTimer
// (BlueprintCallable, BlueprintEvent)

void AParentAIDetourController_C::StartNoPlayerNearTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "StartNoPlayerNearTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ParentAIDetourController.ParentAIDetourController_C.TargetIsTooFar
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AParentAIDetourController_C::TargetIsTooFar()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "TargetIsTooFar");

	Params::ParentAIDetourController_C_TargetIsTooFar Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ParentAIDetourController.ParentAIDetourController_C.TriggeredByAlarm
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           SeenActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AParentAIDetourController_C::TriggeredByAlarm(class AActor* SeenActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "TriggeredByAlarm");

	Params::ParentAIDetourController_C_TriggeredByAlarm Parms{};

	Parms.SeenActor = SeenActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ParentAIDetourController.ParentAIDetourController_C.UnbindFromDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void AParentAIDetourController_C::UnbindFromDelegates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "UnbindFromDelegates");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ParentAIDetourController.ParentAIDetourController_C.UnsetIgnoreCars
// (Public, BlueprintCallable, BlueprintEvent)

void AParentAIDetourController_C::UnsetIgnoreCars()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "UnsetIgnoreCars");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ParentAIDetourController.ParentAIDetourController_C.ValidatePerception
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_PerceptionType                        Param_PerceptionType                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AParentAIDetourController_C::ValidatePerception(E_PerceptionType* Param_PerceptionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParentAIDetourController_C", "ValidatePerception");

	Params::ParentAIDetourController_C_ValidatePerception Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_PerceptionType != nullptr)
		*Param_PerceptionType = Parms.Param_PerceptionType;
}

}
