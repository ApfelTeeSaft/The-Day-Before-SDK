#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_CharacterCreateCategoryRow_Button

#include "Basic.hpp"

#include "W_CharacterCreateCategoryRow_Button_classes.hpp"
#include "W_CharacterCreateCategoryRow_Button_parameters.hpp"


namespace SDK
{

// Function W_CharacterCreateCategoryRow_Button.W_CharacterCreateCategoryRow_Button_C.BndEvt__W_SettengRow_Button_Button_Action_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UW_CharacterCreateCategoryRow_Button_C::BndEvt__W_SettengRow_Button_Button_Action_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CharacterCreateCategoryRow_Button_C", "BndEvt__W_SettengRow_Button_Button_Action_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_CharacterCreateCategoryRow_Button.W_CharacterCreateCategoryRow_Button_C.BndEvt__W_SettengRow_Button_Button_Action_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UW_CharacterCreateCategoryRow_Button_C::BndEvt__W_SettengRow_Button_Button_Action_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CharacterCreateCategoryRow_Button_C", "BndEvt__W_SettengRow_Button_Button_Action_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_CharacterCreateCategoryRow_Button.W_CharacterCreateCategoryRow_Button_C.BndEvt__W_SettengRow_Button_Button_Action_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UW_CharacterCreateCategoryRow_Button_C::BndEvt__W_SettengRow_Button_Button_Action_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CharacterCreateCategoryRow_Button_C", "BndEvt__W_SettengRow_Button_Button_Action_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_CharacterCreateCategoryRow_Button.W_CharacterCreateCategoryRow_Button_C.ExecuteUbergraph_W_CharacterCreateCategoryRow_Button
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CharacterCreateCategoryRow_Button_C::ExecuteUbergraph_W_CharacterCreateCategoryRow_Button(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CharacterCreateCategoryRow_Button_C", "ExecuteUbergraph_W_CharacterCreateCategoryRow_Button");

	Params::W_CharacterCreateCategoryRow_Button_C_ExecuteUbergraph_W_CharacterCreateCategoryRow_Button Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_CharacterCreateCategoryRow_Button.W_CharacterCreateCategoryRow_Button_C.Hover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bHover                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CharacterCreateCategoryRow_Button_C::Hover(bool bHover)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CharacterCreateCategoryRow_Button_C", "Hover");

	Params::W_CharacterCreateCategoryRow_Button_C_Hover Parms{};

	Parms.bHover = bHover;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_CharacterCreateCategoryRow_Button.W_CharacterCreateCategoryRow_Button_C.OnButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_CharacterCreateCategoryRow_Button_C*RowButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_CharacterCreateCategoryRow_Button_C::OnButtonPressed__DelegateSignature(class UW_CharacterCreateCategoryRow_Button_C* RowButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CharacterCreateCategoryRow_Button_C", "OnButtonPressed__DelegateSignature");

	Params::W_CharacterCreateCategoryRow_Button_C_OnButtonPressed__DelegateSignature Parms{};

	Parms.RowButton = RowButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_CharacterCreateCategoryRow_Button.W_CharacterCreateCategoryRow_Button_C.OnPreviewKeyDown
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UW_CharacterCreateCategoryRow_Button_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CharacterCreateCategoryRow_Button_C", "OnPreviewKeyDown");

	Params::W_CharacterCreateCategoryRow_Button_C_OnPreviewKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function W_CharacterCreateCategoryRow_Button.W_CharacterCreateCategoryRow_Button_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CharacterCreateCategoryRow_Button_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CharacterCreateCategoryRow_Button_C", "PreConstruct");

	Params::W_CharacterCreateCategoryRow_Button_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_CharacterCreateCategoryRow_Button.W_CharacterCreateCategoryRow_Button_C.Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSelect                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CharacterCreateCategoryRow_Button_C::Select(bool bSelect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CharacterCreateCategoryRow_Button_C", "Select");

	Params::W_CharacterCreateCategoryRow_Button_C_Select Parms{};

	Parms.bSelect = bSelect;

	UObject::ProcessEvent(Func, &Parms);
}

}
