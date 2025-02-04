#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Agones

#include "Basic.hpp"

#include "Agones_classes.hpp"
#include "Agones_parameters.hpp"


namespace SDK
{

// Function Agones.AgonesComponent.Allocate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TDelegate<void(struct FEmptyResponse& Response)>SuccessDelegate                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TDelegate<void(struct FAgonesError& Error)>ErrorDelegate                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAgonesComponent::Allocate(TDelegate<void(struct FEmptyResponse& Response)> SuccessDelegate, TDelegate<void(struct FAgonesError& Error)> ErrorDelegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AgonesComponent", "Allocate");

	Params::AgonesComponent_Allocate Parms{};

	Parms.SuccessDelegate = SuccessDelegate;
	Parms.ErrorDelegate = ErrorDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Agones.AgonesComponent.Connect
// (Final, Native, Public, BlueprintCallable)

void UAgonesComponent::Connect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AgonesComponent", "Connect");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Agones.AgonesComponent.ConnectSuccess
// (Final, Native, Private)
// Parameters:
// struct FGameServerResponse              GameServerResponse                                     (Parm, NativeAccessSpecifierPublic)

void UAgonesComponent::ConnectSuccess(const struct FGameServerResponse& GameServerResponse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AgonesComponent", "ConnectSuccess");

	Params::AgonesComponent_ConnectSuccess Parms{};

	Parms.GameServerResponse = std::move(GameServerResponse);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Agones.AgonesComponent.GameServer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TDelegate<void(struct FGameServerResponse& Response)>SuccessDelegate                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TDelegate<void(struct FAgonesError& Error)>ErrorDelegate                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAgonesComponent::GameServer(TDelegate<void(struct FGameServerResponse& Response)> SuccessDelegate, TDelegate<void(struct FAgonesError& Error)> ErrorDelegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AgonesComponent", "GameServer");

	Params::AgonesComponent_GameServer Parms{};

	Parms.SuccessDelegate = SuccessDelegate;
	Parms.ErrorDelegate = ErrorDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Agones.AgonesComponent.GetConnectedPlayers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TDelegate<void(struct FConnectedPlayersResponse& Response)>SuccessDelegate                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TDelegate<void(struct FAgonesError& Error)>ErrorDelegate                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAgonesComponent::GetConnectedPlayers(TDelegate<void(struct FConnectedPlayersResponse& Response)> SuccessDelegate, TDelegate<void(struct FAgonesError& Error)> ErrorDelegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AgonesComponent", "GetConnectedPlayers");

	Params::AgonesComponent_GetConnectedPlayers Parms{};

	Parms.SuccessDelegate = SuccessDelegate;
	Parms.ErrorDelegate = ErrorDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Agones.AgonesComponent.GetPlayerCapacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TDelegate<void(struct FCountResponse& Response)>SuccessDelegate                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TDelegate<void(struct FAgonesError& Error)>ErrorDelegate                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAgonesComponent::GetPlayerCapacity(TDelegate<void(struct FCountResponse& Response)> SuccessDelegate, TDelegate<void(struct FAgonesError& Error)> ErrorDelegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AgonesComponent", "GetPlayerCapacity");

	Params::AgonesComponent_GetPlayerCapacity Parms{};

	Parms.SuccessDelegate = SuccessDelegate;
	Parms.ErrorDelegate = ErrorDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Agones.AgonesComponent.GetPlayerCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TDelegate<void(struct FCountResponse& Response)>SuccessDelegate                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TDelegate<void(struct FAgonesError& Error)>ErrorDelegate                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAgonesComponent::GetPlayerCount(TDelegate<void(struct FCountResponse& Response)> SuccessDelegate, TDelegate<void(struct FAgonesError& Error)> ErrorDelegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AgonesComponent", "GetPlayerCount");

	Params::AgonesComponent_GetPlayerCount Parms{};

	Parms.SuccessDelegate = SuccessDelegate;
	Parms.ErrorDelegate = ErrorDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Agones.AgonesComponent.Health
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TDelegate<void(struct FEmptyResponse& Response)>SuccessDelegate                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TDelegate<void(struct FAgonesError& Error)>ErrorDelegate                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAgonesComponent::Health(TDelegate<void(struct FEmptyResponse& Response)> SuccessDelegate, TDelegate<void(struct FAgonesError& Error)> ErrorDelegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AgonesComponent", "Health");

	Params::AgonesComponent_Health Parms{};

	Parms.SuccessDelegate = SuccessDelegate;
	Parms.ErrorDelegate = ErrorDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Agones.AgonesComponent.HealthPing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                                   RateSeconds                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAgonesComponent::HealthPing(float RateSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AgonesComponent", "HealthPing");

	Params::AgonesComponent_HealthPing Parms{};

	Parms.RateSeconds = RateSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Agones.AgonesComponent.IsPlayerConnected
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           PlayerID                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TDelegate<void(struct FConnectedResponse& Response)>SuccessDelegate                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TDelegate<void(struct FAgonesError& Error)>ErrorDelegate                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAgonesComponent::IsPlayerConnected(const class FString& PlayerID, TDelegate<void(struct FConnectedResponse& Response)> SuccessDelegate, TDelegate<void(struct FAgonesError& Error)> ErrorDelegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AgonesComponent", "IsPlayerConnected");

	Params::AgonesComponent_IsPlayerConnected Parms{};

	Parms.PlayerID = std::move(PlayerID);
	Parms.SuccessDelegate = SuccessDelegate;
	Parms.ErrorDelegate = ErrorDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Agones.AgonesComponent.PlayerConnect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           PlayerID                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TDelegate<void(struct FConnectedResponse& Response)>SuccessDelegate                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TDelegate<void(struct FAgonesError& Error)>ErrorDelegate                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAgonesComponent::PlayerConnect(const class FString& PlayerID, TDelegate<void(struct FConnectedResponse& Response)> SuccessDelegate, TDelegate<void(struct FAgonesError& Error)> ErrorDelegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AgonesComponent", "PlayerConnect");

	Params::AgonesComponent_PlayerConnect Parms{};

	Parms.PlayerID = std::move(PlayerID);
	Parms.SuccessDelegate = SuccessDelegate;
	Parms.ErrorDelegate = ErrorDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Agones.AgonesComponent.PlayerDisconnect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           PlayerID                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TDelegate<void(struct FDisconnectResponse& Response)>SuccessDelegate                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TDelegate<void(struct FAgonesError& Error)>ErrorDelegate                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAgonesComponent::PlayerDisconnect(const class FString& PlayerID, TDelegate<void(struct FDisconnectResponse& Response)> SuccessDelegate, TDelegate<void(struct FAgonesError& Error)> ErrorDelegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AgonesComponent", "PlayerDisconnect");

	Params::AgonesComponent_PlayerDisconnect Parms{};

	Parms.PlayerID = std::move(PlayerID);
	Parms.SuccessDelegate = SuccessDelegate;
	Parms.ErrorDelegate = ErrorDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Agones.AgonesComponent.Ready
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TDelegate<void(struct FEmptyResponse& Response)>SuccessDelegate                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TDelegate<void(struct FAgonesError& Error)>ErrorDelegate                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAgonesComponent::Ready(TDelegate<void(struct FEmptyResponse& Response)> SuccessDelegate, TDelegate<void(struct FAgonesError& Error)> ErrorDelegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AgonesComponent", "Ready");

	Params::AgonesComponent_Ready Parms{};

	Parms.SuccessDelegate = SuccessDelegate;
	Parms.ErrorDelegate = ErrorDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Agones.AgonesComponent.Reserve
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64                                   Seconds                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TDelegate<void(struct FEmptyResponse& Response)>SuccessDelegate                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TDelegate<void(struct FAgonesError& Error)>ErrorDelegate                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAgonesComponent::Reserve(int64 Seconds, TDelegate<void(struct FEmptyResponse& Response)> SuccessDelegate, TDelegate<void(struct FAgonesError& Error)> ErrorDelegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AgonesComponent", "Reserve");

	Params::AgonesComponent_Reserve Parms{};

	Parms.Seconds = Seconds;
	Parms.SuccessDelegate = SuccessDelegate;
	Parms.ErrorDelegate = ErrorDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Agones.AgonesComponent.SetAnnotation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           Key                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           Value                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TDelegate<void(struct FEmptyResponse& Response)>SuccessDelegate                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TDelegate<void(struct FAgonesError& Error)>ErrorDelegate                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAgonesComponent::SetAnnotation(const class FString& Key, const class FString& Value, TDelegate<void(struct FEmptyResponse& Response)> SuccessDelegate, TDelegate<void(struct FAgonesError& Error)> ErrorDelegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AgonesComponent", "SetAnnotation");

	Params::AgonesComponent_SetAnnotation Parms{};

	Parms.Key = std::move(Key);
	Parms.Value = std::move(Value);
	Parms.SuccessDelegate = SuccessDelegate;
	Parms.ErrorDelegate = ErrorDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Agones.AgonesComponent.SetLabel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           Key                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           Value                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TDelegate<void(struct FEmptyResponse& Response)>SuccessDelegate                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TDelegate<void(struct FAgonesError& Error)>ErrorDelegate                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAgonesComponent::SetLabel(const class FString& Key, const class FString& Value, TDelegate<void(struct FEmptyResponse& Response)> SuccessDelegate, TDelegate<void(struct FAgonesError& Error)> ErrorDelegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AgonesComponent", "SetLabel");

	Params::AgonesComponent_SetLabel Parms{};

	Parms.Key = std::move(Key);
	Parms.Value = std::move(Value);
	Parms.SuccessDelegate = SuccessDelegate;
	Parms.ErrorDelegate = ErrorDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Agones.AgonesComponent.SetPlayerCapacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64                                   Count                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TDelegate<void(struct FEmptyResponse& Response)>SuccessDelegate                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TDelegate<void(struct FAgonesError& Error)>ErrorDelegate                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAgonesComponent::SetPlayerCapacity(int64 Count, TDelegate<void(struct FEmptyResponse& Response)> SuccessDelegate, TDelegate<void(struct FAgonesError& Error)> ErrorDelegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AgonesComponent", "SetPlayerCapacity");

	Params::AgonesComponent_SetPlayerCapacity Parms{};

	Parms.Count = Count;
	Parms.SuccessDelegate = SuccessDelegate;
	Parms.ErrorDelegate = ErrorDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Agones.AgonesComponent.Shutdown
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TDelegate<void(struct FEmptyResponse& Response)>SuccessDelegate                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TDelegate<void(struct FAgonesError& Error)>ErrorDelegate                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAgonesComponent::Shutdown(TDelegate<void(struct FEmptyResponse& Response)> SuccessDelegate, TDelegate<void(struct FAgonesError& Error)> ErrorDelegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AgonesComponent", "Shutdown");

	Params::AgonesComponent_Shutdown Parms{};

	Parms.SuccessDelegate = SuccessDelegate;
	Parms.ErrorDelegate = ErrorDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Agones.AgonesComponent.WatchGameServer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TDelegate<void(struct FGameServerResponse& Response)>WatchDelegate                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAgonesComponent::WatchGameServer(TDelegate<void(struct FGameServerResponse& Response)> WatchDelegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AgonesComponent", "WatchGameServer");

	Params::AgonesComponent_WatchGameServer Parms{};

	Parms.WatchDelegate = WatchDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

