#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GarageSpace

#include "Basic.hpp"

#include "BP_GarageSpace_classes.hpp"
#include "BP_GarageSpace_parameters.hpp"


namespace SDK
{

// Function BP_GarageSpace.BP_GarageSpace_C.InitCar
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvivalPlayer_V2_C*             Param_Owner                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                           CarRef                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_PlayerSpawnPoint_C*>   Regions                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_GarageSpace_C::InitCar(class ASurvivalPlayer_V2_C* Param_Owner, class UClass* CarRef, TArray<class ABP_PlayerSpawnPoint_C*>& Regions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GarageSpace_C", "InitCar");

	Params::BP_GarageSpace_C_InitCar Parms{};

	Parms.Param_Owner = Param_Owner;
	Parms.CarRef = CarRef;
	Parms.Regions = std::move(Regions);

	UObject::ProcessEvent(Func, &Parms);

	Regions = std::move(Parms.Regions);
}

}
