#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_CarUpgradeMenu

#include "Basic.hpp"

#include "W_CarUpgradeMenu_classes.hpp"
#include "W_CarUpgradeMenu_parameters.hpp"


namespace SDK
{

// Function W_CarUpgradeMenu.W_CarUpgradeMenu_C.BndEvt__W_Button_Cancel_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
// (BlueprintEvent)

void UW_CarUpgradeMenu_C::BndEvt__W_Button_Cancel_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CarUpgradeMenu_C", "BndEvt__W_Button_Cancel_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_CarUpgradeMenu.W_CarUpgradeMenu_C.BndEvt__W_Button_Upgrade_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature
// (BlueprintEvent)

void UW_CarUpgradeMenu_C::BndEvt__W_Button_Upgrade_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CarUpgradeMenu_C", "BndEvt__W_Button_Upgrade_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_CarUpgradeMenu.W_CarUpgradeMenu_C.BndEvt__W_Button_Upgrade_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature
// (BlueprintEvent)

void UW_CarUpgradeMenu_C::BndEvt__W_Button_Upgrade_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CarUpgradeMenu_C", "BndEvt__W_Button_Upgrade_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_CarUpgradeMenu.W_CarUpgradeMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_CarUpgradeMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CarUpgradeMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_CarUpgradeMenu.W_CarUpgradeMenu_C.ExecuteUbergraph_W_CarUpgradeMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CarUpgradeMenu_C::ExecuteUbergraph_W_CarUpgradeMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CarUpgradeMenu_C", "ExecuteUbergraph_W_CarUpgradeMenu");

	Params::W_CarUpgradeMenu_C_ExecuteUbergraph_W_CarUpgradeMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_CarUpgradeMenu.W_CarUpgradeMenu_C.GetFocused
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Focused                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CarUpgradeMenu_C::GetFocused(bool* Param_Focused)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CarUpgradeMenu_C", "GetFocused");

	Params::W_CarUpgradeMenu_C_GetFocused Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Focused != nullptr)
		*Param_Focused = Parms.Param_Focused;
}


// Function W_CarUpgradeMenu.W_CarUpgradeMenu_C.OnToggleSplitDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CarUpgradeMenu_C::OnToggleSplitDialog(bool NewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CarUpgradeMenu_C", "OnToggleSplitDialog");

	Params::W_CarUpgradeMenu_C_OnToggleSplitDialog Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_CarUpgradeMenu.W_CarUpgradeMenu_C.ProgressCompleted
// (BlueprintCallable, BlueprintEvent)

void UW_CarUpgradeMenu_C::ProgressCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CarUpgradeMenu_C", "ProgressCompleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_CarUpgradeMenu.W_CarUpgradeMenu_C.SetFocused
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewFocus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CarUpgradeMenu_C::SetFocused(bool NewFocus, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CarUpgradeMenu_C", "SetFocused");

	Params::W_CarUpgradeMenu_C_SetFocused Parms{};

	Parms.NewFocus = NewFocus;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function W_CarUpgradeMenu.W_CarUpgradeMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CarUpgradeMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CarUpgradeMenu_C", "Tick");

	Params::W_CarUpgradeMenu_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_CarUpgradeMenu.W_CarUpgradeMenu_C.UpdateMetalCount
// (BlueprintCallable, BlueprintEvent)

void UW_CarUpgradeMenu_C::UpdateMetalCount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CarUpgradeMenu_C", "UpdateMetalCount");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_CarUpgradeMenu.W_CarUpgradeMenu_C.UpdateUpgradeWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_CarUpgradeElement_C*           UpgradeWidget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBPDA_BaseUpgrade_C*              UpgradeAsset                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   CurrentLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsFullyUpgraded                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CarUpgradeMenu_C::UpdateUpgradeWidget(class UW_CarUpgradeElement_C* UpgradeWidget, class UBPDA_BaseUpgrade_C* UpgradeAsset, int32 CurrentLevel, bool IsFullyUpgraded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CarUpgradeMenu_C", "UpdateUpgradeWidget");

	Params::W_CarUpgradeMenu_C_UpdateUpgradeWidget Parms{};

	Parms.UpgradeWidget = UpgradeWidget;
	Parms.UpgradeAsset = UpgradeAsset;
	Parms.CurrentLevel = CurrentLevel;
	Parms.IsFullyUpgraded = IsFullyUpgraded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_CarUpgradeMenu.W_CarUpgradeMenu_C.UpdateWindow
// (Public, BlueprintCallable, BlueprintEvent)

void UW_CarUpgradeMenu_C::UpdateWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CarUpgradeMenu_C", "UpdateWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_CarUpgradeMenu.W_CarUpgradeMenu_C.Upgrade
// (Public, BlueprintCallable, BlueprintEvent)

void UW_CarUpgradeMenu_C::Upgrade()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CarUpgradeMenu_C", "Upgrade");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_CarUpgradeMenu.W_CarUpgradeMenu_C.UpgradePressed
// (BlueprintCallable, BlueprintEvent)

void UW_CarUpgradeMenu_C::UpgradePressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CarUpgradeMenu_C", "UpgradePressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_CarUpgradeMenu.W_CarUpgradeMenu_C.UpgradeReleased
// (BlueprintCallable, BlueprintEvent)

void UW_CarUpgradeMenu_C::UpgradeReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CarUpgradeMenu_C", "UpgradeReleased");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_CarUpgradeMenu.W_CarUpgradeMenu_C.WidgetClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_CarUpgradeElement_C*           ClickedWidget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_CarUpgradeMenu_C::WidgetClicked(class UW_CarUpgradeElement_C* ClickedWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CarUpgradeMenu_C", "WidgetClicked");

	Params::W_CarUpgradeMenu_C_WidgetClicked Parms{};

	Parms.ClickedWidget = ClickedWidget;

	UObject::ProcessEvent(Func, &Parms);
}

}
