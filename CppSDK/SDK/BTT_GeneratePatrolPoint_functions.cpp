#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_GeneratePatrolPoint

#include "Basic.hpp"

#include "BTT_GeneratePatrolPoint_classes.hpp"
#include "BTT_GeneratePatrolPoint_parameters.hpp"


namespace SDK
{

// Function BTT_GeneratePatrolPoint.BTT_GeneratePatrolPoint_C.ExecuteUbergraph_BTT_GeneratePatrolPoint
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_GeneratePatrolPoint_C::ExecuteUbergraph_BTT_GeneratePatrolPoint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_GeneratePatrolPoint_C", "ExecuteUbergraph_BTT_GeneratePatrolPoint");

	Params::BTT_GeneratePatrolPoint_C_ExecuteUbergraph_BTT_GeneratePatrolPoint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTT_GeneratePatrolPoint.BTT_GeneratePatrolPoint_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTT_GeneratePatrolPoint_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_GeneratePatrolPoint_C", "ReceiveExecuteAI");

	Params::BTT_GeneratePatrolPoint_C_ReceiveExecuteAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}
