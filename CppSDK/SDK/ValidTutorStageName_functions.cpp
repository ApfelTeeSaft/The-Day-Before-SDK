#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ValidTutorStageName

#include "Basic.hpp"

#include "ValidTutorStageName_classes.hpp"
#include "ValidTutorStageName_parameters.hpp"


namespace SDK
{

// Function ValidTutorStageName.ValidTutorStageName_C.CheckCondition
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UQuestContext*                    Context                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UValidTutorStageName_C::CheckCondition(class UQuestContext* Context) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ValidTutorStageName_C", "CheckCondition");

	Params::ValidTutorStageName_C_CheckCondition Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

