#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_ShopCategoryButton

#include "Basic.hpp"

#include "W_ShopCategoryButton_classes.hpp"
#include "W_ShopCategoryButton_parameters.hpp"


namespace SDK
{

// Function W_ShopCategoryButton.W_ShopCategoryButton_C.BndEvt__W_ShopCategoryButton_Button_Category_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_ShopCategoryButton_C::BndEvt__W_ShopCategoryButton_Button_Category_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ShopCategoryButton_C", "BndEvt__W_ShopCategoryButton_Button_Category_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_ShopCategoryButton.W_ShopCategoryButton_C.BndEvt__W_ShopCategoryButton_Button_Category_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UW_ShopCategoryButton_C::BndEvt__W_ShopCategoryButton_Button_Category_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ShopCategoryButton_C", "BndEvt__W_ShopCategoryButton_Button_Category_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_ShopCategoryButton.W_ShopCategoryButton_C.BndEvt__W_ShopCategoryButton_Button_Category_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UW_ShopCategoryButton_C::BndEvt__W_ShopCategoryButton_Button_Category_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ShopCategoryButton_C", "BndEvt__W_ShopCategoryButton_Button_Category_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_ShopCategoryButton.W_ShopCategoryButton_C.Deselect
// (BlueprintCallable, BlueprintEvent)

void UW_ShopCategoryButton_C::Deselect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ShopCategoryButton_C", "Deselect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_ShopCategoryButton.W_ShopCategoryButton_C.ExecuteUbergraph_W_ShopCategoryButton
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ShopCategoryButton_C::ExecuteUbergraph_W_ShopCategoryButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ShopCategoryButton_C", "ExecuteUbergraph_W_ShopCategoryButton");

	Params::W_ShopCategoryButton_C_ExecuteUbergraph_W_ShopCategoryButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_ShopCategoryButton.W_ShopCategoryButton_C.GetCategoryData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_CategoryData                  Param_CategoryData                                     (Parm, OutParm, HasGetValueTypeHash)

void UW_ShopCategoryButton_C::GetCategoryData(struct FS_CategoryData* Param_CategoryData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ShopCategoryButton_C", "GetCategoryData");

	Params::W_ShopCategoryButton_C_GetCategoryData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_CategoryData != nullptr)
		*Param_CategoryData = std::move(Parms.Param_CategoryData);
}


// Function W_ShopCategoryButton.W_ShopCategoryButton_C.Hover
// (BlueprintCallable, BlueprintEvent)

void UW_ShopCategoryButton_C::Hover()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ShopCategoryButton_C", "Hover");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_ShopCategoryButton.W_ShopCategoryButton_C.InitCategory
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UW_ShopCategoryButton_C::InitCategory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ShopCategoryButton_C", "InitCategory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_ShopCategoryButton.W_ShopCategoryButton_C.IsButtonHovered
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bIsButtonHovered                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ShopCategoryButton_C::IsButtonHovered(bool* Param_bIsButtonHovered)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ShopCategoryButton_C", "IsButtonHovered");

	Params::W_ShopCategoryButton_C_IsButtonHovered Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_bIsButtonHovered != nullptr)
		*Param_bIsButtonHovered = Parms.Param_bIsButtonHovered;
}


// Function W_ShopCategoryButton.W_ShopCategoryButton_C.IsButtonSelected
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_bIsButtonSelected                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ShopCategoryButton_C::IsButtonSelected(bool* Param_bIsButtonSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ShopCategoryButton_C", "IsButtonSelected");

	Params::W_ShopCategoryButton_C_IsButtonSelected Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_bIsButtonSelected != nullptr)
		*Param_bIsButtonSelected = Parms.Param_bIsButtonSelected;
}


// Function W_ShopCategoryButton.W_ShopCategoryButton_C.IsCommonCategory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_bIsCommonCategory                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ShopCategoryButton_C::IsCommonCategory(bool* Param_bIsCommonCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ShopCategoryButton_C", "IsCommonCategory");

	Params::W_ShopCategoryButton_C_IsCommonCategory Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_bIsCommonCategory != nullptr)
		*Param_bIsCommonCategory = Parms.Param_bIsCommonCategory;
}


// Function W_ShopCategoryButton.W_ShopCategoryButton_C.OnButtonHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ShopCategoryButton_C*          ButtonRef                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_ShopCategoryButton_C::OnButtonHovered__DelegateSignature(class UW_ShopCategoryButton_C* ButtonRef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ShopCategoryButton_C", "OnButtonHovered__DelegateSignature");

	Params::W_ShopCategoryButton_C_OnButtonHovered__DelegateSignature Parms{};

	Parms.ButtonRef = ButtonRef;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_ShopCategoryButton.W_ShopCategoryButton_C.OnButtonSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ShopCategoryButton_C*          ButtonRef                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_ShopCategoryButton_C::OnButtonSelected__DelegateSignature(class UW_ShopCategoryButton_C* ButtonRef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ShopCategoryButton_C", "OnButtonSelected__DelegateSignature");

	Params::W_ShopCategoryButton_C_OnButtonSelected__DelegateSignature Parms{};

	Parms.ButtonRef = ButtonRef;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_ShopCategoryButton.W_ShopCategoryButton_C.OnButtonUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ShopCategoryButton_C*          ButtonRef                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_ShopCategoryButton_C::OnButtonUnhovered__DelegateSignature(class UW_ShopCategoryButton_C* ButtonRef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ShopCategoryButton_C", "OnButtonUnhovered__DelegateSignature");

	Params::W_ShopCategoryButton_C_OnButtonUnhovered__DelegateSignature Parms{};

	Parms.ButtonRef = ButtonRef;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_ShopCategoryButton.W_ShopCategoryButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ShopCategoryButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ShopCategoryButton_C", "PreConstruct");

	Params::W_ShopCategoryButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_ShopCategoryButton.W_ShopCategoryButton_C.Select
// (BlueprintCallable, BlueprintEvent)

void UW_ShopCategoryButton_C::Select()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ShopCategoryButton_C", "Select");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_ShopCategoryButton.W_ShopCategoryButton_C.Unhover
// (BlueprintCallable, BlueprintEvent)

void UW_ShopCategoryButton_C::Unhover()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_ShopCategoryButton_C", "Unhover");

	UObject::ProcessEvent(Func, nullptr);
}

}
