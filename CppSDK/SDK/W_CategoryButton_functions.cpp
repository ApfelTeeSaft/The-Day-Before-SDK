#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_CategoryButton

#include "Basic.hpp"

#include "W_CategoryButton_classes.hpp"
#include "W_CategoryButton_parameters.hpp"


namespace SDK
{

// Function W_CategoryButton.W_CategoryButton_C.BndEvt__Button_24_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_CategoryButton_C::BndEvt__Button_24_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CategoryButton_C", "BndEvt__Button_24_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_CategoryButton.W_CategoryButton_C.BndEvt__Button_24_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UW_CategoryButton_C::BndEvt__Button_24_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CategoryButton_C", "BndEvt__Button_24_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_CategoryButton.W_CategoryButton_C.BndEvt__Button_24_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UW_CategoryButton_C::BndEvt__Button_24_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CategoryButton_C", "BndEvt__Button_24_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_CategoryButton.W_CategoryButton_C.ExecuteUbergraph_W_CategoryButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CategoryButton_C::ExecuteUbergraph_W_CategoryButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CategoryButton_C", "ExecuteUbergraph_W_CategoryButton");

	Params::W_CategoryButton_C_ExecuteUbergraph_W_CategoryButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_CategoryButton.W_CategoryButton_C.OnClick
// (BlueprintCallable, BlueprintEvent)

void UW_CategoryButton_C::OnClick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CategoryButton_C", "OnClick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_CategoryButton.W_CategoryButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_CategoryButton_C*              ClickedWidget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_CategoryButton_C::OnClicked__DelegateSignature(class UW_CategoryButton_C* ClickedWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CategoryButton_C", "OnClicked__DelegateSignature");

	Params::W_CategoryButton_C_OnClicked__DelegateSignature Parms{};

	Parms.ClickedWidget = ClickedWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_CategoryButton.W_CategoryButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CategoryButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CategoryButton_C", "PreConstruct");

	Params::W_CategoryButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_CategoryButton.W_CategoryButton_C.SetItemType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemType                               Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CategoryButton_C::SetItemType(EItemType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CategoryButton_C", "SetItemType");

	Params::W_CategoryButton_C_SetItemType Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_CategoryButton.W_CategoryButton_C.Unclick
// (BlueprintCallable, BlueprintEvent)

void UW_CategoryButton_C::Unclick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CategoryButton_C", "Unclick");

	UObject::ProcessEvent(Func, nullptr);
}

}
