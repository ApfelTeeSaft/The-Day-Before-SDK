#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_GameMode

#include "Basic.hpp"

#include "BPI_GameMode_classes.hpp"
#include "BPI_GameMode_parameters.hpp"


namespace SDK
{

// Function BPI_GameMode.BPI_GameMode_C.GetAISpawnerManager
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAISpawnManager_C*                AISpawnerManager                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_GameMode_C::GetAISpawnerManager(class AAISpawnManager_C** AISpawnerManager)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GameMode_C", "GetAISpawnerManager");

	Params::BPI_GameMode_C_GetAISpawnerManager Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AISpawnerManager != nullptr)
		*AISpawnerManager = Parms.AISpawnerManager;
}


// Function BPI_GameMode.BPI_GameMode_C.GetBunkerPlayerStart
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Start                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_GameMode_C::GetBunkerPlayerStart(class AActor** Start)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GameMode_C", "GetBunkerPlayerStart");

	Params::BPI_GameMode_C_GetBunkerPlayerStart Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Start != nullptr)
		*Start = Parms.Start;
}


// Function BPI_GameMode.BPI_GameMode_C.GetPlayers
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>                   Players                                                (Parm, OutParm)

void IBPI_GameMode_C::GetPlayers(TArray<class AActor*>* Players)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GameMode_C", "GetPlayers");

	Params::BPI_GameMode_C_GetPlayers Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Players != nullptr)
		*Players = std::move(Parms.Players);
}


// Function BPI_GameMode.BPI_GameMode_C.GetPlayerStartForEnterBunker
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Start                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_GameMode_C::GetPlayerStartForEnterBunker(class AActor** Start)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GameMode_C", "GetPlayerStartForEnterBunker");

	Params::BPI_GameMode_C_GetPlayerStartForEnterBunker Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Start != nullptr)
		*Start = Parms.Start;
}


// Function BPI_GameMode.BPI_GameMode_C.GetPlayerStartsWithTag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Tag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<class AActor*>                   Starts                                                 (Parm, OutParm)

void IBPI_GameMode_C::GetPlayerStartsWithTag(const class FString& Tag, TArray<class AActor*>* Starts)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GameMode_C", "GetPlayerStartsWithTag");

	Params::BPI_GameMode_C_GetPlayerStartsWithTag Parms{};

	Parms.Tag = std::move(Tag);

	UObject::ProcessEvent(Func, &Parms);

	if (Starts != nullptr)
		*Starts = std::move(Parms.Starts);
}


// Function BPI_GameMode.BPI_GameMode_C.IsPawnRendered?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Pawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Rendered_                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_GameMode_C::IsPawnRendered_(class AActor* Pawn, bool* Rendered_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GameMode_C", "IsPawnRendered?");

	Params::BPI_GameMode_C_IsPawnRendered_ Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

	if (Rendered_ != nullptr)
		*Rendered_ = Parms.Rendered_;
}


// Function BPI_GameMode.BPI_GameMode_C.LootGeneratedTypeArrayItems
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_GameMode_C::LootGeneratedTypeArrayItems()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GameMode_C", "LootGeneratedTypeArrayItems");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_GameMode.BPI_GameMode_C.RegisterAISpawnerManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAISpawnManager_C*                AISpawnManager                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_GameMode_C::RegisterAISpawnerManager(class AAISpawnManager_C* AISpawnManager)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GameMode_C", "RegisterAISpawnerManager");

	Params::BPI_GameMode_C_RegisterAISpawnerManager Parms{};

	Parms.AISpawnManager = AISpawnManager;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_GameMode.BPI_GameMode_C.RegisterPlayerOld
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_GameMode_C::RegisterPlayerOld(class AActor* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GameMode_C", "RegisterPlayerOld");

	Params::BPI_GameMode_C_RegisterPlayerOld Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_GameMode.BPI_GameMode_C.UnregisterPlayerOld
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvivalPlayer_C*                Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_GameMode_C::UnregisterPlayerOld(class ASurvivalPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GameMode_C", "UnregisterPlayerOld");

	Params::BPI_GameMode_C_UnregisterPlayerOld Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}

}
