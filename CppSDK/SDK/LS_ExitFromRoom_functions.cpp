#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LS_ExitFromRoom

#include "Basic.hpp"

#include "LS_ExitFromRoom_classes.hpp"
#include "LS_ExitFromRoom_parameters.hpp"


namespace SDK
{

// Function LS_ExitFromRoom.LS_ExitFromRoom_DirectorBP_C.ExecuteUbergraph_LS_ExitFromRoom_DirectorBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULS_ExitFromRoom_DirectorBP_C::ExecuteUbergraph_LS_ExitFromRoom_DirectorBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LS_ExitFromRoom_DirectorBP_C", "ExecuteUbergraph_LS_ExitFromRoom_DirectorBP");

	Params::LS_ExitFromRoom_DirectorBP_C_ExecuteUbergraph_LS_ExitFromRoom_DirectorBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LS_ExitFromRoom.LS_ExitFromRoom_DirectorBP_C.PlayerPlaceholder_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           PlayerPlaceholder                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULS_ExitFromRoom_DirectorBP_C::PlayerPlaceholder_Event_0(class AActor* PlayerPlaceholder)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LS_ExitFromRoom_DirectorBP_C", "PlayerPlaceholder_Event_0");

	Params::LS_ExitFromRoom_DirectorBP_C_PlayerPlaceholder_Event_0 Parms{};

	Parms.PlayerPlaceholder = PlayerPlaceholder;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LS_ExitFromRoom.LS_ExitFromRoom_DirectorBP_C.SequenceEvent__ENTRYPOINTLS_ExitFromRoom_DirectorBP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           PlayerPlaceholder                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULS_ExitFromRoom_DirectorBP_C::SequenceEvent__ENTRYPOINTLS_ExitFromRoom_DirectorBP(class AActor* PlayerPlaceholder)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LS_ExitFromRoom_DirectorBP_C", "SequenceEvent__ENTRYPOINTLS_ExitFromRoom_DirectorBP");

	Params::LS_ExitFromRoom_DirectorBP_C_SequenceEvent__ENTRYPOINTLS_ExitFromRoom_DirectorBP Parms{};

	Parms.PlayerPlaceholder = PlayerPlaceholder;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LS_ExitFromRoom.LS_ExitFromRoom_DirectorBP_C.SurvivalPlayer_V2_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvivalPlayer_V2_C*             SurvivalPlayer_V2                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULS_ExitFromRoom_DirectorBP_C::SurvivalPlayer_V2_Event_0(class ASurvivalPlayer_V2_C* SurvivalPlayer_V2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LS_ExitFromRoom_DirectorBP_C", "SurvivalPlayer_V2_Event_0");

	Params::LS_ExitFromRoom_DirectorBP_C_SurvivalPlayer_V2_Event_0 Parms{};

	Parms.SurvivalPlayer_V2 = SurvivalPlayer_V2;

	UObject::ProcessEvent(Func, &Parms);
}

}
