#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Perks

#include "Basic.hpp"

#include "WBP_Perks_classes.hpp"
#include "WBP_Perks_parameters.hpp"


namespace SDK
{

// Function WBP_Perks.WBP_Perks_C.BndEvt__WBP_Perks_Button_87_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Perks_C::BndEvt__WBP_Perks_Button_87_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Perks_C", "BndEvt__WBP_Perks_Button_87_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Perks.WBP_Perks_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Perks_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Perks_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Perks.WBP_Perks_C.ExecuteUbergraph_WBP_Perks
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Perks_C::ExecuteUbergraph_WBP_Perks(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Perks_C", "ExecuteUbergraph_WBP_Perks");

	Params::WBP_Perks_C_ExecuteUbergraph_WBP_Perks Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Perks.WBP_Perks_C.OnClickPerk__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Param_PerkName                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Perks_C::OnClickPerk__DelegateSignature(const class FText& Param_PerkName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Perks_C", "OnClickPerk__DelegateSignature");

	Params::WBP_Perks_C_OnClickPerk__DelegateSignature Parms{};

	Parms.Param_PerkName = std::move(Param_PerkName);

	UObject::ProcessEvent(Func, &Parms);
}

}
