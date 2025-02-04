#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AlarmKeyButton

#include "Basic.hpp"

#include "BP_AlarmKeyButton_classes.hpp"
#include "BP_AlarmKeyButton_parameters.hpp"


namespace SDK
{

// Function BP_AlarmKeyButton.BP_AlarmKeyButton_C.ExecuteUbergraph_BP_AlarmKeyButton
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AlarmKeyButton_C::ExecuteUbergraph_BP_AlarmKeyButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AlarmKeyButton_C", "ExecuteUbergraph_BP_AlarmKeyButton");

	Params::BP_AlarmKeyButton_C_ExecuteUbergraph_BP_AlarmKeyButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AlarmKeyButton.BP_AlarmKeyButton_C.Mark
// (BlueprintCallable, BlueprintEvent)

void ABP_AlarmKeyButton_C::Mark()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AlarmKeyButton_C", "Mark");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AlarmKeyButton.BP_AlarmKeyButton_C.OnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_KeyCode                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_AlarmKeyButton_C::OnPressed__DelegateSignature(const class FString& Param_KeyCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AlarmKeyButton_C", "OnPressed__DelegateSignature");

	Params::BP_AlarmKeyButton_C_OnPressed__DelegateSignature Parms{};

	Parms.Param_KeyCode = std::move(Param_KeyCode);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AlarmKeyButton.BP_AlarmKeyButton_C.Press
// (BlueprintCallable, BlueprintEvent)

void ABP_AlarmKeyButton_C::Press()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AlarmKeyButton_C", "Press");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AlarmKeyButton.BP_AlarmKeyButton_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AlarmKeyButton_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AlarmKeyButton_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AlarmKeyButton.BP_AlarmKeyButton_C.SelectedTimer_Handler
// (BlueprintCallable, BlueprintEvent)

void ABP_AlarmKeyButton_C::SelectedTimer_Handler()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AlarmKeyButton_C", "SelectedTimer_Handler");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AlarmKeyButton.BP_AlarmKeyButton_C.SetSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsSelected                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AlarmKeyButton_C::SetSelected(bool Param_IsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AlarmKeyButton_C", "SetSelected");

	Params::BP_AlarmKeyButton_C_SetSelected Parms{};

	Parms.Param_IsSelected = Param_IsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AlarmKeyButton.BP_AlarmKeyButton_C.Shining__FinishedFunc
// (BlueprintEvent)

void ABP_AlarmKeyButton_C::Shining__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AlarmKeyButton_C", "Shining__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AlarmKeyButton.BP_AlarmKeyButton_C.Shining__UpdateFunc
// (BlueprintEvent)

void ABP_AlarmKeyButton_C::Shining__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AlarmKeyButton_C", "Shining__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AlarmKeyButton.BP_AlarmKeyButton_C.Unmark
// (BlueprintCallable, BlueprintEvent)

void ABP_AlarmKeyButton_C::Unmark()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AlarmKeyButton_C", "Unmark");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AlarmKeyButton.BP_AlarmKeyButton_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AlarmKeyButton_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AlarmKeyButton_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

