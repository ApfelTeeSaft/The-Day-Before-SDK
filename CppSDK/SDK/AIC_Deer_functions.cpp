#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIC_Deer

#include "Basic.hpp"

#include "AIC_Deer_classes.hpp"
#include "AIC_Deer_parameters.hpp"


namespace SDK
{

// Function AIC_Deer.AIC_Deer_C.BndEvt__AIC_Deer_AIPerception_K2Node_ComponentBoundEvent_5_ActorPerceptionUpdatedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAIStimulus                      Stimulus                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void AAIC_Deer_C::BndEvt__AIC_Deer_AIPerception_K2Node_ComponentBoundEvent_5_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_Deer_C", "BndEvt__AIC_Deer_AIPerception_K2Node_ComponentBoundEvent_5_ActorPerceptionUpdatedDelegate__DelegateSignature");

	Params::AIC_Deer_C_BndEvt__AIC_Deer_AIPerception_K2Node_ComponentBoundEvent_5_ActorPerceptionUpdatedDelegate__DelegateSignature Parms{};

	Parms.Actor = Actor;
	Parms.Stimulus = std::move(Stimulus);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIC_Deer.AIC_Deer_C.BndEvt__AIC_Deer_PawnSensing_K2Node_ComponentBoundEvent_0_HearNoiseDelegate__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class APawn*                            Param_Instigator                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Volume                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_Deer_C::BndEvt__AIC_Deer_PawnSensing_K2Node_ComponentBoundEvent_0_HearNoiseDelegate__DelegateSignature(class APawn* Param_Instigator, const struct FVector& Location, float Volume)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_Deer_C", "BndEvt__AIC_Deer_PawnSensing_K2Node_ComponentBoundEvent_0_HearNoiseDelegate__DelegateSignature");

	Params::AIC_Deer_C_BndEvt__AIC_Deer_PawnSensing_K2Node_ComponentBoundEvent_0_HearNoiseDelegate__DelegateSignature Parms{};

	Parms.Param_Instigator = Param_Instigator;
	Parms.Location = std::move(Location);
	Parms.Volume = Volume;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIC_Deer.AIC_Deer_C.BndEvt__AIC_Deer_PawnSensing_K2Node_ComponentBoundEvent_1_SeePawnDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APawn*                            Param_Pawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AAIC_Deer_C::BndEvt__AIC_Deer_PawnSensing_K2Node_ComponentBoundEvent_1_SeePawnDelegate__DelegateSignature(class APawn* Param_Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_Deer_C", "BndEvt__AIC_Deer_PawnSensing_K2Node_ComponentBoundEvent_1_SeePawnDelegate__DelegateSignature");

	Params::AIC_Deer_C_BndEvt__AIC_Deer_PawnSensing_K2Node_ComponentBoundEvent_1_SeePawnDelegate__DelegateSignature Parms{};

	Parms.Param_Pawn = Param_Pawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIC_Deer.AIC_Deer_C.CanLookAtCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FAIStimulus                      Stimulus                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// class AActor*                           ActorHeared                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_Deer_C::CanLookAtCharacter(const struct FAIStimulus& Stimulus, class AActor* ActorHeared, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_Deer_C", "CanLookAtCharacter");

	Params::AIC_Deer_C_CanLookAtCharacter Parms{};

	Parms.Stimulus = std::move(Stimulus);
	Parms.ActorHeared = ActorHeared;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function AIC_Deer.AIC_Deer_C.CanPerceptionHappen
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           SensedActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Yes                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_Deer_C::CanPerceptionHappen(class AActor* SensedActor, bool* Yes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_Deer_C", "CanPerceptionHappen");

	Params::AIC_Deer_C_CanPerceptionHappen Parms{};

	Parms.SensedActor = SensedActor;

	UObject::ProcessEvent(Func, &Parms);

	if (Yes != nullptr)
		*Yes = Parms.Yes;
}


// Function AIC_Deer.AIC_Deer_C.CheckIsOptimizationHearing
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAIStimulus                      AIStimulus                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void AAIC_Deer_C::CheckIsOptimizationHearing(class AActor* Actor, const struct FAIStimulus& AIStimulus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_Deer_C", "CheckIsOptimizationHearing");

	Params::AIC_Deer_C_CheckIsOptimizationHearing Parms{};

	Parms.Actor = Actor;
	Parms.AIStimulus = std::move(AIStimulus);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIC_Deer.AIC_Deer_C.ClearLookAtActor
// (BlueprintCallable, BlueprintEvent)

void AAIC_Deer_C::ClearLookAtActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_Deer_C", "ClearLookAtActor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AIC_Deer.AIC_Deer_C.EnableAI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HomeLocation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_Deer_C::EnableAI(bool Enable, const struct FVector& HomeLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_Deer_C", "EnableAI");

	Params::AIC_Deer_C_EnableAI Parms{};

	Parms.Enable = Enable;
	Parms.HomeLocation = std::move(HomeLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIC_Deer.AIC_Deer_C.ExecuteUbergraph_AIC_Deer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_Deer_C::ExecuteUbergraph_AIC_Deer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_Deer_C", "ExecuteUbergraph_AIC_Deer");

	Params::AIC_Deer_C_ExecuteUbergraph_AIC_Deer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIC_Deer.AIC_Deer_C.GenerateRunAwayLocation
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           SensedActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   RadiusAfterDistance                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          RunAwayLocation                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsReachable                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_Deer_C::GenerateRunAwayLocation(class AActor* SensedActor, float RadiusAfterDistance, struct FVector* RunAwayLocation, bool* IsReachable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_Deer_C", "GenerateRunAwayLocation");

	Params::AIC_Deer_C_GenerateRunAwayLocation Parms{};

	Parms.SensedActor = SensedActor;
	Parms.RadiusAfterDistance = RadiusAfterDistance;

	UObject::ProcessEvent(Func, &Parms);

	if (RunAwayLocation != nullptr)
		*RunAwayLocation = std::move(Parms.RunAwayLocation);

	if (IsReachable != nullptr)
		*IsReachable = Parms.IsReachable;
}


// Function AIC_Deer.AIC_Deer_C.IsDangerHeared
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FAIStimulus                      Stimulus                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                                    Param_IsDangerHeared                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_Deer_C::IsDangerHeared(const struct FAIStimulus& Stimulus, bool* Param_IsDangerHeared)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_Deer_C", "IsDangerHeared");

	Params::AIC_Deer_C_IsDangerHeared Parms{};

	Parms.Stimulus = std::move(Stimulus);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsDangerHeared != nullptr)
		*Param_IsDangerHeared = Parms.Param_IsDangerHeared;
}


// Function AIC_Deer.AIC_Deer_C.IsReachableLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Target_Location                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsReachable                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_Deer_C::IsReachableLocation(const struct FVector& Target_Location, bool* IsReachable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_Deer_C", "IsReachableLocation");

	Params::AIC_Deer_C_IsReachableLocation Parms{};

	Parms.Target_Location = std::move(Target_Location);

	UObject::ProcessEvent(Func, &Parms);

	if (IsReachable != nullptr)
		*IsReachable = Parms.IsReachable;
}


// Function AIC_Deer.AIC_Deer_C.OnAnySense
// (BlueprintCallable, BlueprintEvent)

void AAIC_Deer_C::OnAnySense()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_Deer_C", "OnAnySense");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AIC_Deer.AIC_Deer_C.OnSenseHappened
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           SensedActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AAIC_Deer_C::OnSenseHappened(class AActor* SensedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_Deer_C", "OnSenseHappened");

	Params::AIC_Deer_C_OnSenseHappened Parms{};

	Parms.SensedActor = SensedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIC_Deer.AIC_Deer_C.OptimizationAdjustTicks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsPlayerNear                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_Deer_C::OptimizationAdjustTicks(bool IsPlayerNear)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_Deer_C", "OptimizationAdjustTicks");

	Params::AIC_Deer_C_OptimizationAdjustTicks Parms{};

	Parms.IsPlayerNear = IsPlayerNear;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIC_Deer.AIC_Deer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAIC_Deer_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_Deer_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AIC_Deer.AIC_Deer_C.RefreshSense
// (Public, BlueprintCallable, BlueprintEvent)

void AAIC_Deer_C::RefreshSense()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_Deer_C", "RefreshSense");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AIC_Deer.AIC_Deer_C.SetHomeLocationArea
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          HomeLocation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_Deer_C::SetHomeLocationArea(const struct FVector& HomeLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_Deer_C", "SetHomeLocationArea");

	Params::AIC_Deer_C_SetHomeLocationArea Parms{};

	Parms.HomeLocation = std::move(HomeLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIC_Deer.AIC_Deer_C.SetNoPlayersNear
// (Public, BlueprintCallable, BlueprintEvent)

void AAIC_Deer_C::SetNoPlayersNear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_Deer_C", "SetNoPlayersNear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AIC_Deer.AIC_Deer_C.ValidateOnStartSense
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           SensedActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Continue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_Deer_C::ValidateOnStartSense(class AActor* SensedActor, bool* Continue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_Deer_C", "ValidateOnStartSense");

	Params::AIC_Deer_C_ValidateOnStartSense Parms{};

	Parms.SensedActor = SensedActor;

	UObject::ProcessEvent(Func, &Parms);

	if (Continue != nullptr)
		*Continue = Parms.Continue;
}

}
