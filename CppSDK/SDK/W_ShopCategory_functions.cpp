#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_ShopCategory

#include "Basic.hpp"

#include "W_ShopCategory_classes.hpp"
#include "W_ShopCategory_parameters.hpp"


namespace SDK
{

// Function W_ShopCategory.W_ShopCategory_C.BndEvt__W_ShopCategory_Button_ItemCategory_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UW_ShopCategory_C::BndEvt__W_ShopCategory_Button_ItemCategory_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ShopCategory_C", "BndEvt__W_ShopCategory_Button_ItemCategory_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_ShopCategory.W_ShopCategory_C.BndEvt__W_ShopCategory_Button_ItemCategory_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UW_ShopCategory_C::BndEvt__W_ShopCategory_Button_ItemCategory_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ShopCategory_C", "BndEvt__W_ShopCategory_Button_ItemCategory_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_ShopCategory.W_ShopCategory_C.BndEvt__W_ShopCategory_Button_ItemCategory_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UW_ShopCategory_C::BndEvt__W_ShopCategory_Button_ItemCategory_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ShopCategory_C", "BndEvt__W_ShopCategory_Button_ItemCategory_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_ShopCategory.W_ShopCategory_C.ButtonHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Hovered                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    WithAnim                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ShopCategory_C::ButtonHover(bool Hovered, bool WithAnim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ShopCategory_C", "ButtonHover");

	Params::W_ShopCategory_C_ButtonHover Parms{};

	Parms.Hovered = Hovered;
	Parms.WithAnim = WithAnim;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_ShopCategory.W_ShopCategory_C.ExecuteUbergraph_W_ShopCategory
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ShopCategory_C::ExecuteUbergraph_W_ShopCategory(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ShopCategory_C", "ExecuteUbergraph_W_ShopCategory");

	Params::W_ShopCategory_C_ExecuteUbergraph_W_ShopCategory Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_ShopCategory.W_ShopCategory_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFItemInfo                       Param_FItem                                            (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// EInfoType                               InfoType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Param_Category_Name                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ShopCategory_C::Init(const struct FFItemInfo& Param_FItem, EInfoType InfoType, class FName Param_Category_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ShopCategory_C", "Init");

	Params::W_ShopCategory_C_Init Parms{};

	Parms.Param_FItem = std::move(Param_FItem);
	Parms.InfoType = InfoType;
	Parms.Param_Category_Name = Param_Category_Name;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_ShopCategory.W_ShopCategory_C.InitCategory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             Param_Category_Name                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             CategoryDisplayName                                    (Parm, OutParm)
// class UPaperSprite*                     CategoryIcon                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_ShopCategory_C::InitCategory(class FName Param_Category_Name, class FText* CategoryDisplayName, class UPaperSprite** CategoryIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ShopCategory_C", "InitCategory");

	Params::W_ShopCategory_C_InitCategory Parms{};

	Parms.Param_Category_Name = Param_Category_Name;

	UObject::ProcessEvent(Func, &Parms);

	if (CategoryDisplayName != nullptr)
		*CategoryDisplayName = std::move(Parms.CategoryDisplayName);

	if (CategoryIcon != nullptr)
		*CategoryIcon = Parms.CategoryIcon;
}


// Function W_ShopCategory.W_ShopCategory_C.OnButtonSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ShopCategory_C*                NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_ShopCategory_C::OnButtonSelected__DelegateSignature(class UW_ShopCategory_C* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ShopCategory_C", "OnButtonSelected__DelegateSignature");

	Params::W_ShopCategory_C_OnButtonSelected__DelegateSignature Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_ShopCategory.W_ShopCategory_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ShopCategory_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ShopCategory_C", "PreConstruct");

	Params::W_ShopCategory_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_ShopCategory.W_ShopCategory_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Selected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ShopCategory_C::SetSelected(bool Selected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ShopCategory_C", "SetSelected");

	Params::W_ShopCategory_C_SetSelected Parms{};

	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);
}

}
