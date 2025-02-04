#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LS_WakingUpRespawnHospital

#include "Basic.hpp"

#include "LS_WakingUpRespawnHospital_classes.hpp"
#include "LS_WakingUpRespawnHospital_parameters.hpp"


namespace SDK
{

// Function LS_WakingUpRespawnHospital.LS_WakingUpRespawnHospital_DirectorBP_C.ExecuteUbergraph_LS_WakingUpRespawnHospital (Director BP)
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULS_WakingUpRespawnHospital_DirectorBP_C::ExecuteUbergraph_LS_WakingUpRespawnHospital__Director_BP_(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LS_WakingUpRespawnHospital_DirectorBP_C", "ExecuteUbergraph_LS_WakingUpRespawnHospital (Director BP)");

	Params::LS_WakingUpRespawnHospital_DirectorBP_C_ExecuteUbergraph_LS_WakingUpRespawnHospital__Director_BP_ Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LS_WakingUpRespawnHospital.LS_WakingUpRespawnHospital_DirectorBP_C.HideWakingUpWidget
// (BlueprintCallable, BlueprintEvent)

void ULS_WakingUpRespawnHospital_DirectorBP_C::HideWakingUpWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LS_WakingUpRespawnHospital_DirectorBP_C", "HideWakingUpWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LS_WakingUpRespawnHospital.LS_WakingUpRespawnHospital_DirectorBP_C.PlayerPlaceholder_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           PlayerPlaceholder                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULS_WakingUpRespawnHospital_DirectorBP_C::PlayerPlaceholder_Event_0(class AActor* PlayerPlaceholder)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LS_WakingUpRespawnHospital_DirectorBP_C", "PlayerPlaceholder_Event_0");

	Params::LS_WakingUpRespawnHospital_DirectorBP_C_PlayerPlaceholder_Event_0 Parms{};

	Parms.PlayerPlaceholder = PlayerPlaceholder;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LS_WakingUpRespawnHospital.LS_WakingUpRespawnHospital_DirectorBP_C.SequenceEvent__ENTRYPOINTLS_WakingUpRespawnHospital (Director BP)
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           PlayerPlaceholder                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULS_WakingUpRespawnHospital_DirectorBP_C::SequenceEvent__ENTRYPOINTLS_WakingUpRespawnHospital__Director_BP_(class AActor* PlayerPlaceholder)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LS_WakingUpRespawnHospital_DirectorBP_C", "SequenceEvent__ENTRYPOINTLS_WakingUpRespawnHospital (Director BP)");

	Params::LS_WakingUpRespawnHospital_DirectorBP_C_SequenceEvent__ENTRYPOINTLS_WakingUpRespawnHospital__Director_BP_ Parms{};

	Parms.PlayerPlaceholder = PlayerPlaceholder;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LS_WakingUpRespawnHospital.LS_WakingUpRespawnHospital_DirectorBP_C.ShowWakingUpWidget
// (BlueprintCallable, BlueprintEvent)

void ULS_WakingUpRespawnHospital_DirectorBP_C::ShowWakingUpWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LS_WakingUpRespawnHospital_DirectorBP_C", "ShowWakingUpWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LS_WakingUpRespawnHospital.LS_WakingUpRespawnHospital_DirectorBP_C.SurvivalPlayer_V2_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvivalPlayer_V2_C*             SurvivalPlayer_V2                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULS_WakingUpRespawnHospital_DirectorBP_C::SurvivalPlayer_V2_Event_0(class ASurvivalPlayer_V2_C* SurvivalPlayer_V2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LS_WakingUpRespawnHospital_DirectorBP_C", "SurvivalPlayer_V2_Event_0");

	Params::LS_WakingUpRespawnHospital_DirectorBP_C_SurvivalPlayer_V2_Event_0 Parms{};

	Parms.SurvivalPlayer_V2 = SurvivalPlayer_V2;

	UObject::ProcessEvent(Func, &Parms);
}

}

