#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LS_ExitFromDoubleDoors

#include "Basic.hpp"

#include "LS_ExitFromDoubleDoors_classes.hpp"
#include "LS_ExitFromDoubleDoors_parameters.hpp"


namespace SDK
{

// Function LS_ExitFromDoubleDoors.LS_ExitFromDoubleDoors_DirectorBP_C.ExecuteUbergraph_LS_ExitFromDoubleDoors_DirectorBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULS_ExitFromDoubleDoors_DirectorBP_C::ExecuteUbergraph_LS_ExitFromDoubleDoors_DirectorBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LS_ExitFromDoubleDoors_DirectorBP_C", "ExecuteUbergraph_LS_ExitFromDoubleDoors_DirectorBP");

	Params::LS_ExitFromDoubleDoors_DirectorBP_C_ExecuteUbergraph_LS_ExitFromDoubleDoors_DirectorBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LS_ExitFromDoubleDoors.LS_ExitFromDoubleDoors_DirectorBP_C.PlayerPlaceholder_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           PlayerPlaceholder                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULS_ExitFromDoubleDoors_DirectorBP_C::PlayerPlaceholder_Event_0(class AActor* PlayerPlaceholder)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LS_ExitFromDoubleDoors_DirectorBP_C", "PlayerPlaceholder_Event_0");

	Params::LS_ExitFromDoubleDoors_DirectorBP_C_PlayerPlaceholder_Event_0 Parms{};

	Parms.PlayerPlaceholder = PlayerPlaceholder;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LS_ExitFromDoubleDoors.LS_ExitFromDoubleDoors_DirectorBP_C.SequenceEvent__ENTRYPOINTLS_ExitFromDoubleDoors_DirectorBP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           PlayerPlaceholder                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULS_ExitFromDoubleDoors_DirectorBP_C::SequenceEvent__ENTRYPOINTLS_ExitFromDoubleDoors_DirectorBP(class AActor* PlayerPlaceholder)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LS_ExitFromDoubleDoors_DirectorBP_C", "SequenceEvent__ENTRYPOINTLS_ExitFromDoubleDoors_DirectorBP");

	Params::LS_ExitFromDoubleDoors_DirectorBP_C_SequenceEvent__ENTRYPOINTLS_ExitFromDoubleDoors_DirectorBP Parms{};

	Parms.PlayerPlaceholder = PlayerPlaceholder;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LS_ExitFromDoubleDoors.LS_ExitFromDoubleDoors_DirectorBP_C.SurvivalPlayer_V2_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvivalPlayer_V2_C*             SurvivalPlayer_V2                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULS_ExitFromDoubleDoors_DirectorBP_C::SurvivalPlayer_V2_Event_0(class ASurvivalPlayer_V2_C* SurvivalPlayer_V2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LS_ExitFromDoubleDoors_DirectorBP_C", "SurvivalPlayer_V2_Event_0");

	Params::LS_ExitFromDoubleDoors_DirectorBP_C_SurvivalPlayer_V2_Event_0 Parms{};

	Parms.SurvivalPlayer_V2 = SurvivalPlayer_V2;

	UObject::ProcessEvent(Func, &Parms);
}

}
