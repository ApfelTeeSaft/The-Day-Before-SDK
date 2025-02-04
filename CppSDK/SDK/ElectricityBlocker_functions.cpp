#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ElectricityBlocker

#include "Basic.hpp"

#include "ElectricityBlocker_classes.hpp"
#include "ElectricityBlocker_parameters.hpp"


namespace SDK
{

// Function ElectricityBlocker.ElectricityBlocker_C.AddListener
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IElectricityBlockerListener_C>Listener                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AElectricityBlocker_C::AddListener(TScriptInterface<class IElectricityBlockerListener_C> Listener)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElectricityBlocker_C", "AddListener");

	Params::ElectricityBlocker_C_AddListener Parms{};

	Parms.Listener = Listener;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElectricityBlocker.ElectricityBlocker_C.BreakBlocker
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void AElectricityBlocker_C::BreakBlocker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElectricityBlocker_C", "BreakBlocker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ElectricityBlocker.ElectricityBlocker_C.BreakClientSide
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AElectricityBlocker_C::BreakClientSide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElectricityBlocker_C", "BreakClientSide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ElectricityBlocker.ElectricityBlocker_C.ExecuteUbergraph_ElectricityBlocker
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AElectricityBlocker_C::ExecuteUbergraph_ElectricityBlocker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElectricityBlocker_C", "ExecuteUbergraph_ElectricityBlocker");

	Params::ElectricityBlocker_C_ExecuteUbergraph_ElectricityBlocker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElectricityBlocker.ElectricityBlocker_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                      DamageType                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                      InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AElectricityBlocker_C::ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElectricityBlocker_C", "ReceiveAnyDamage");

	Params::ElectricityBlocker_C_ReceiveAnyDamage Parms{};

	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElectricityBlocker.ElectricityBlocker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AElectricityBlocker_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElectricityBlocker_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ElectricityBlocker.ElectricityBlocker_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AElectricityBlocker_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElectricityBlocker_C", "ReceiveTick");

	Params::ElectricityBlocker_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

