#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EQSQuery_Bandits

#include "Basic.hpp"

#include "EQSQuery_Bandits_classes.hpp"
#include "EQSQuery_Bandits_parameters.hpp"


namespace SDK
{

// Function EQSQuery_Bandits.EQSQuery_Bandits_C.ProvideActorsSet
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                          QuerierObject                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           QuerierActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>                   ResultingActorsSet                                     (Parm, OutParm)

void UEQSQuery_Bandits_C::ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EQSQuery_Bandits_C", "ProvideActorsSet");

	Params::EQSQuery_Bandits_C_ProvideActorsSet Parms{};

	Parms.QuerierObject = QuerierObject;
	Parms.QuerierActor = QuerierActor;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultingActorsSet != nullptr)
		*ResultingActorsSet = std::move(Parms.ResultingActorsSet);
}

}

