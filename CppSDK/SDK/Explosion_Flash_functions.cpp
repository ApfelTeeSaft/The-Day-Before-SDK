#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Explosion_Flash

#include "Basic.hpp"

#include "Explosion_Flash_classes.hpp"
#include "Explosion_Flash_parameters.hpp"


namespace SDK
{

// Function Explosion_Flash.Explosion_Flash_C.CalculateInstanceValues
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCameraComponent*                 Camera                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FSFlashInstance                  Instance                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AExplosion_Flash_C::CalculateInstanceValues(class UCameraComponent* Camera, struct FSFlashInstance* Instance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Explosion_Flash_C", "CalculateInstanceValues");

	Params::Explosion_Flash_C_CalculateInstanceValues Parms{};

	Parms.Camera = Camera;

	UObject::ProcessEvent(Func, &Parms);

	if (Instance != nullptr)
		*Instance = std::move(Parms.Instance);
}


// Function Explosion_Flash.Explosion_Flash_C.CheckForBlocked
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCameraComponent*                 Camera                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    bBlocked                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AExplosion_Flash_C::CheckForBlocked(class UCameraComponent* Camera, bool* bBlocked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Explosion_Flash_C", "CheckForBlocked");

	Params::Explosion_Flash_C_CheckForBlocked Parms{};

	Parms.Camera = Camera;

	UObject::ProcessEvent(Func, &Parms);

	if (bBlocked != nullptr)
		*bBlocked = Parms.bBlocked;
}


// Function Explosion_Flash.Explosion_Flash_C.DetonateFlashbangOnClient
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AExplosion_Flash_C::DetonateFlashbangOnClient()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Explosion_Flash_C", "DetonateFlashbangOnClient");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Explosion_Flash.Explosion_Flash_C.DetonateFlashbangOnServer
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AExplosion_Flash_C::DetonateFlashbangOnServer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Explosion_Flash_C", "DetonateFlashbangOnServer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Explosion_Flash.Explosion_Flash_C.ExecuteUbergraph_Explosion_Flash
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AExplosion_Flash_C::ExecuteUbergraph_Explosion_Flash(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Explosion_Flash_C", "ExecuteUbergraph_Explosion_Flash");

	Params::Explosion_Flash_C_ExecuteUbergraph_Explosion_Flash Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Explosion_Flash.Explosion_Flash_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AExplosion_Flash_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Explosion_Flash_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
