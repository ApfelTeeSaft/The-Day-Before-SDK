#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BinocularUI

#include "Basic.hpp"

#include "WBP_BinocularUI_classes.hpp"
#include "WBP_BinocularUI_parameters.hpp"


namespace SDK
{

// Function WBP_BinocularUI.WBP_BinocularUI_C.ExecuteUbergraph_WBP_BinocularUI
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BinocularUI_C::ExecuteUbergraph_WBP_BinocularUI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BinocularUI_C", "ExecuteUbergraph_WBP_BinocularUI");

	Params::WBP_BinocularUI_C_ExecuteUbergraph_WBP_BinocularUI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BinocularUI.WBP_BinocularUI_C.Finished_430AD60F466F24595F797CB449A17642
// (BlueprintCallable, BlueprintEvent)

void UWBP_BinocularUI_C::Finished_430AD60F466F24595F797CB449A17642()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BinocularUI_C", "Finished_430AD60F466F24595F797CB449A17642");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BinocularUI.WBP_BinocularUI_C.Hide
// (BlueprintCallable, BlueprintEvent)

void UWBP_BinocularUI_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BinocularUI_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BinocularUI.WBP_BinocularUI_C.Show
// (BlueprintCallable, BlueprintEvent)

void UWBP_BinocularUI_C::Show()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BinocularUI_C", "Show");

	UObject::ProcessEvent(Func, nullptr);
}

}
