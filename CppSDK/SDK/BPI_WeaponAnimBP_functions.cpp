#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_WeaponAnimBP

#include "Basic.hpp"

#include "BPI_WeaponAnimBP_classes.hpp"
#include "BPI_WeaponAnimBP_parameters.hpp"


namespace SDK
{

// Function BPI_WeaponAnimBP.BPI_WeaponAnimBP_C.CallFireAnim
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_WeaponAnimBP_C::CallFireAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_WeaponAnimBP_C", "CallFireAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_WeaponAnimBP.BPI_WeaponAnimBP_C.CallRealoadAnimRefresh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Aiming                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EStanceState                            Stance                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_WeaponAnimBP_C::CallRealoadAnimRefresh(bool Aiming, EStanceState Stance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_WeaponAnimBP_C", "CallRealoadAnimRefresh");

	Params::BPI_WeaponAnimBP_C_CallRealoadAnimRefresh Parms{};

	Parms.Aiming = Aiming;
	Parms.Stance = Stance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_WeaponAnimBP.BPI_WeaponAnimBP_C.CallReloadAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Aiming                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EStanceState                            Stance                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_WeaponAnimBP_C::CallReloadAnim(bool Aiming, EStanceState Stance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_WeaponAnimBP_C", "CallReloadAnim");

	Params::BPI_WeaponAnimBP_C_CallReloadAnim Parms{};

	Parms.Aiming = Aiming;
	Parms.Stance = Stance;

	UObject::ProcessEvent(Func, &Parms);
}

}

