#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Foliage_Interaction_BPI

#include "Basic.hpp"

#include "Foliage_Interaction_BPI_classes.hpp"
#include "Foliage_Interaction_BPI_parameters.hpp"


namespace SDK
{

// Function Foliage_Interaction_BPI.Foliage_Interaction_BPI_C.Foliage_Interaction_Function
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                          Player_Velocity                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IFoliage_Interaction_BPI_C::Foliage_Interaction_Function(const struct FHitResult& Hit, const struct FVector& Player_Velocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Foliage_Interaction_BPI_C", "Foliage_Interaction_Function");

	Params::Foliage_Interaction_BPI_C_Foliage_Interaction_Function Parms{};

	Parms.Hit = std::move(Hit);
	Parms.Player_Velocity = std::move(Player_Velocity);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Foliage_Interaction_BPI.Foliage_Interaction_BPI_C.Foliage_Interaction_Function_END
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void IFoliage_Interaction_BPI_C::Foliage_Interaction_Function_END(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Foliage_Interaction_BPI_C", "Foliage_Interaction_Function_END");

	Params::Foliage_Interaction_BPI_C_Foliage_Interaction_Function_END Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}

}
