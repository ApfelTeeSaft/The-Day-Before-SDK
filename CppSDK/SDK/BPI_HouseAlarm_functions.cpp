#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_HouseAlarm

#include "Basic.hpp"

#include "BPI_HouseAlarm_classes.hpp"
#include "BPI_HouseAlarm_parameters.hpp"


namespace SDK
{

// Function BPI_HouseAlarm.BPI_HouseAlarm_C.OnEnterActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHouseBox_C*                      HouseBox                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_HouseAlarm_C::OnEnterActor(class AActor* Actor, class AHouseBox_C* HouseBox)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_HouseAlarm_C", "OnEnterActor");

	Params::BPI_HouseAlarm_C_OnEnterActor Parms{};

	Parms.Actor = Actor;
	Parms.HouseBox = HouseBox;

	UObject::ProcessEvent(Func, &Parms);
}

}

