#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MainCategorySelectorEntryV2

#include "Basic.hpp"

#include "WBP_MainCategorySelectorEntryV2_classes.hpp"
#include "WBP_MainCategorySelectorEntryV2_parameters.hpp"


namespace SDK
{

// Function WBP_MainCategorySelectorEntryV2.WBP_MainCategorySelectorEntryV2_C.BndEvt__WBP_MainCategorySelectorEntryV2_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_MainCategorySelectorEntryV2_C::BndEvt__WBP_MainCategorySelectorEntryV2_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainCategorySelectorEntryV2_C", "BndEvt__WBP_MainCategorySelectorEntryV2_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MainCategorySelectorEntryV2.WBP_MainCategorySelectorEntryV2_C.BndEvt__WBP_MainCategorySelectorEntryV2_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_MainCategorySelectorEntryV2_C::BndEvt__WBP_MainCategorySelectorEntryV2_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainCategorySelectorEntryV2_C", "BndEvt__WBP_MainCategorySelectorEntryV2_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MainCategorySelectorEntryV2.WBP_MainCategorySelectorEntryV2_C.BndEvt__WBP_MainCategorySelectorEntryV2_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_MainCategorySelectorEntryV2_C::BndEvt__WBP_MainCategorySelectorEntryV2_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainCategorySelectorEntryV2_C", "BndEvt__WBP_MainCategorySelectorEntryV2_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MainCategorySelectorEntryV2.WBP_MainCategorySelectorEntryV2_C.ExecuteUbergraph_WBP_MainCategorySelectorEntryV2
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainCategorySelectorEntryV2_C::ExecuteUbergraph_WBP_MainCategorySelectorEntryV2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainCategorySelectorEntryV2_C", "ExecuteUbergraph_WBP_MainCategorySelectorEntryV2");

	Params::WBP_MainCategorySelectorEntryV2_C_ExecuteUbergraph_WBP_MainCategorySelectorEntryV2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MainCategorySelectorEntryV2.WBP_MainCategorySelectorEntryV2_C.GetText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             Param_Text                                             (Parm, OutParm)

void UWBP_MainCategorySelectorEntryV2_C::GetText(class FText* Param_Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainCategorySelectorEntryV2_C", "GetText");

	Params::WBP_MainCategorySelectorEntryV2_C_GetText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Text != nullptr)
		*Param_Text = std::move(Parms.Param_Text);
}


// Function WBP_MainCategorySelectorEntryV2.WBP_MainCategorySelectorEntryV2_C.OnEntrySelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainCategorySelectorEntryV2_C::OnEntrySelected__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainCategorySelectorEntryV2_C", "OnEntrySelected__DelegateSignature");

	Params::WBP_MainCategorySelectorEntryV2_C_OnEntrySelected__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MainCategorySelectorEntryV2.WBP_MainCategorySelectorEntryV2_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainCategorySelectorEntryV2_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainCategorySelectorEntryV2_C", "PreConstruct");

	Params::WBP_MainCategorySelectorEntryV2_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MainCategorySelectorEntryV2.WBP_MainCategorySelectorEntryV2_C.SelectEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Select                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainCategorySelectorEntryV2_C::SelectEntry(bool Param_Select)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainCategorySelectorEntryV2_C", "SelectEntry");

	Params::WBP_MainCategorySelectorEntryV2_C_SelectEntry Parms{};

	Parms.Param_Select = Param_Select;

	UObject::ProcessEvent(Func, &Parms);
}

}

