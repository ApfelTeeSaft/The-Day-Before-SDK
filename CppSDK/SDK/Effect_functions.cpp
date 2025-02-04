#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Effect

#include "Basic.hpp"

#include "Effect_classes.hpp"
#include "Effect_parameters.hpp"


namespace SDK
{

// Function Effect.Effect_C.Action
// (BlueprintCallable, BlueprintEvent)

void UEffect_C::Action()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Effect_C", "Action");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Effect.Effect_C.AddStatValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Param_Actor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EStatType                               Param_StatType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UEffect_C::AddStatValue(class AActor* Param_Actor, EStatType Param_StatType, double NewValue, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Effect_C", "AddStatValue");

	Params::Effect_C_AddStatValue Parms{};

	Parms.Param_Actor = Param_Actor;
	Parms.Param_StatType = Param_StatType;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;
}


// Function Effect.Effect_C.CheckArenalinEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBPC_PlayerStatsComponent_C*      PlayerStats                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// EStatType                               StatsType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Find                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEffect_C::CheckArenalinEffect(class UBPC_PlayerStatsComponent_C* PlayerStats, EStatType StatsType, bool* Find)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Effect_C", "CheckArenalinEffect");

	Params::Effect_C_CheckArenalinEffect Parms{};

	Parms.PlayerStats = PlayerStats;
	Parms.StatsType = StatsType;

	UObject::ProcessEvent(Func, &Parms);

	if (Find != nullptr)
		*Find = Parms.Find;
}


// Function Effect.Effect_C.ExecuteUbergraph_Effect
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEffect_C::ExecuteUbergraph_Effect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Effect_C", "ExecuteUbergraph_Effect");

	Params::Effect_C_ExecuteUbergraph_Effect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Effect.Effect_C.ManualStop
// (BlueprintCallable, BlueprintEvent)

void UEffect_C::ManualStop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Effect_C", "ManualStop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Effect.Effect_C.Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Param_Actor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EffectType                              Param_EffectType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EStatType                               Param_StatType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Param_StatValue                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Param_Duration                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEffect_C::Start(class AActor* Param_Actor, EffectType Param_EffectType, EStatType Param_StatType, double Param_StatValue, double Param_Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Effect_C", "Start");

	Params::Effect_C_Start Parms{};

	Parms.Param_Actor = Param_Actor;
	Parms.Param_EffectType = Param_EffectType;
	Parms.Param_StatType = Param_StatType;
	Parms.Param_StatValue = Param_StatValue;
	Parms.Param_Duration = Param_Duration;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Effect.Effect_C.Stop
// (BlueprintCallable, BlueprintEvent)

void UEffect_C::Stop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Effect_C", "Stop");

	UObject::ProcessEvent(Func, nullptr);
}

}

