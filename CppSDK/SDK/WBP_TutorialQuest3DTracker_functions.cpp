#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TutorialQuest3DTracker

#include "Basic.hpp"

#include "WBP_TutorialQuest3DTracker_classes.hpp"
#include "WBP_TutorialQuest3DTracker_parameters.hpp"


namespace SDK
{

// Function WBP_TutorialQuest3DTracker.WBP_TutorialQuest3DTracker_C.CheckDistance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_TutorialQuest3DTracker_C::CheckDistance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TutorialQuest3DTracker_C", "CheckDistance");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TutorialQuest3DTracker.WBP_TutorialQuest3DTracker_C.Enable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Enable                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TutorialQuest3DTracker_C::Enable(bool Param_Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TutorialQuest3DTracker_C", "Enable");

	Params::WBP_TutorialQuest3DTracker_C_Enable Parms{};

	Parms.Param_Enable = Param_Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TutorialQuest3DTracker.WBP_TutorialQuest3DTracker_C.EnableLoadingCheck
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_TutorialQuest3DTracker_C::EnableLoadingCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TutorialQuest3DTracker_C", "EnableLoadingCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TutorialQuest3DTracker.WBP_TutorialQuest3DTracker_C.GetDistance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UWBP_TutorialQuest3DTracker_C::GetDistance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TutorialQuest3DTracker_C", "GetDistance");

	Params::WBP_TutorialQuest3DTracker_C_GetDistance Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_TutorialQuest3DTracker.WBP_TutorialQuest3DTracker_C.SetWidgetComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetComponent*                 Param_WidgetComponent                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_TutorialQuest3DTracker_C::SetWidgetComponent(class UWidgetComponent* Param_WidgetComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TutorialQuest3DTracker_C", "SetWidgetComponent");

	Params::WBP_TutorialQuest3DTracker_C_SetWidgetComponent Parms{};

	Parms.Param_WidgetComponent = Param_WidgetComponent;

	UObject::ProcessEvent(Func, &Parms);
}

}
