#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerSceneLoader

#include "Basic.hpp"

#include "PlayerSceneLoader_classes.hpp"
#include "PlayerSceneLoader_parameters.hpp"


namespace SDK
{

// Function PlayerSceneLoader.PlayerSceneLoader_C.ExecuteUbergraph_PlayerSceneLoader
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSceneLoader_C::ExecuteUbergraph_PlayerSceneLoader(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSceneLoader_C", "ExecuteUbergraph_PlayerSceneLoader");

	Params::PlayerSceneLoader_C_ExecuteUbergraph_PlayerSceneLoader Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerSceneLoader.PlayerSceneLoader_C.LevelLoaded
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             LevelName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPlayerSceneLoader_C::LevelLoaded(class FName LevelName, class AActor* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSceneLoader_C", "LevelLoaded");

	Params::PlayerSceneLoader_C_LevelLoaded Parms{};

	Parms.LevelName = LevelName;
	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerSceneLoader.PlayerSceneLoader_C.LoadLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSceneLoader_C::LoadLevel(class FName Param_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSceneLoader_C", "LoadLevel");

	Params::PlayerSceneLoader_C_LoadLevel Parms{};

	Parms.Param_Name = Param_Name;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerSceneLoader.PlayerSceneLoader_C.UnloadedLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             LevelName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSceneLoader_C::UnloadedLevel(class FName LevelName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSceneLoader_C", "UnloadedLevel");

	Params::PlayerSceneLoader_C_UnloadedLevel Parms{};

	Parms.LevelName = LevelName;

	UObject::ProcessEvent(Func, &Parms);
}

}

