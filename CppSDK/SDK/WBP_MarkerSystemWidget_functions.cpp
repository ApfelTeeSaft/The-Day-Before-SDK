#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MarkerSystemWidget

#include "Basic.hpp"

#include "WBP_MarkerSystemWidget_classes.hpp"
#include "WBP_MarkerSystemWidget_parameters.hpp"


namespace SDK
{

// Function WBP_MarkerSystemWidget.WBP_MarkerSystemWidget_C.GetMainName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UWBP_MarkerSystemWidget_C::GetMainName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MarkerSystemWidget_C", "GetMainName");

	Params::WBP_MarkerSystemWidget_C_GetMainName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_MarkerSystemWidget.WBP_MarkerSystemWidget_C.GetSecondaryName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UWBP_MarkerSystemWidget_C::GetSecondaryName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MarkerSystemWidget_C", "GetSecondaryName");

	Params::WBP_MarkerSystemWidget_C_GetSecondaryName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

