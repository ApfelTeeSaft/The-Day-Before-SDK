#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MenuBarShopCategory

#include "Basic.hpp"

#include "WBP_MenuBarShopCategory_classes.hpp"
#include "WBP_MenuBarShopCategory_parameters.hpp"


namespace SDK
{

// Function WBP_MenuBarShopCategory.WBP_MenuBarShopCategory_C.BndEvt__WBP_MenuBarShopCategory_Button_CraftItem_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_MenuBarShopCategory_C::BndEvt__WBP_MenuBarShopCategory_Button_CraftItem_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuBarShopCategory_C", "BndEvt__WBP_MenuBarShopCategory_Button_CraftItem_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MenuBarShopCategory.WBP_MenuBarShopCategory_C.BndEvt__WBP_MenuBarShopCategory_Button_CraftItem_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_MenuBarShopCategory_C::BndEvt__WBP_MenuBarShopCategory_Button_CraftItem_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuBarShopCategory_C", "BndEvt__WBP_MenuBarShopCategory_Button_CraftItem_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MenuBarShopCategory.WBP_MenuBarShopCategory_C.BndEvt__WBP_MenuBarShopCategory_Button_CraftItem_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_MenuBarShopCategory_C::BndEvt__WBP_MenuBarShopCategory_Button_CraftItem_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuBarShopCategory_C", "BndEvt__WBP_MenuBarShopCategory_Button_CraftItem_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MenuBarShopCategory.WBP_MenuBarShopCategory_C.ButtonHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bHovered                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bWithAnim                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuBarShopCategory_C::ButtonHover(bool bHovered, bool bWithAnim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuBarShopCategory_C", "ButtonHover");

	Params::WBP_MenuBarShopCategory_C_ButtonHover Parms{};

	Parms.bHovered = bHovered;
	Parms.bWithAnim = bWithAnim;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MenuBarShopCategory.WBP_MenuBarShopCategory_C.ExecuteUbergraph_WBP_MenuBarShopCategory
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuBarShopCategory_C::ExecuteUbergraph_WBP_MenuBarShopCategory(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuBarShopCategory_C", "ExecuteUbergraph_WBP_MenuBarShopCategory");

	Params::WBP_MenuBarShopCategory_C_ExecuteUbergraph_WBP_MenuBarShopCategory Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MenuBarShopCategory.WBP_MenuBarShopCategory_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_MenuBarShopCategory_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuBarShopCategory_C", "OnAddedToFocusPath");

	Params::WBP_MenuBarShopCategory_C_OnAddedToFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MenuBarShopCategory.WBP_MenuBarShopCategory_C.OnCategorySelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             NewSelectedCategoryName                                (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWBP_MenuBarShopCategory_C*       MenuBarShopCategory                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuBarShopCategory_C::OnCategorySelected__DelegateSignature(const class FText& NewSelectedCategoryName, class UWBP_MenuBarShopCategory_C* MenuBarShopCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuBarShopCategory_C", "OnCategorySelected__DelegateSignature");

	Params::WBP_MenuBarShopCategory_C_OnCategorySelected__DelegateSignature Parms{};

	Parms.NewSelectedCategoryName = std::move(NewSelectedCategoryName);
	Parms.MenuBarShopCategory = MenuBarShopCategory;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MenuBarShopCategory.WBP_MenuBarShopCategory_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuBarShopCategory_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuBarShopCategory_C", "PreConstruct");

	Params::WBP_MenuBarShopCategory_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MenuBarShopCategory.WBP_MenuBarShopCategory_C.SetButtonEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnabled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuBarShopCategory_C::SetButtonEnabled(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuBarShopCategory_C", "SetButtonEnabled");

	Params::WBP_MenuBarShopCategory_C_SetButtonEnabled Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MenuBarShopCategory.WBP_MenuBarShopCategory_C.SetButtonSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bIsSelected                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuBarShopCategory_C::SetButtonSelected(bool Param_bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuBarShopCategory_C", "SetButtonSelected");

	Params::WBP_MenuBarShopCategory_C_SetButtonSelected Parms{};

	Parms.Param_bIsSelected = Param_bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}

}

