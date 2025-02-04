#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_BuildingCell

#include "Basic.hpp"

#include "W_BuildingCell_classes.hpp"
#include "W_BuildingCell_parameters.hpp"


namespace SDK
{

// Function W_BuildingCell.W_BuildingCell_C.BndEvt__W_BuildingCell_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_BuildingCell_C::BndEvt__W_BuildingCell_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_BuildingCell_C", "BndEvt__W_BuildingCell_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_BuildingCell.W_BuildingCell_C.BndEvt__W_BuildingCell_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UW_BuildingCell_C::BndEvt__W_BuildingCell_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_BuildingCell_C", "BndEvt__W_BuildingCell_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_BuildingCell.W_BuildingCell_C.BndEvt__W_BuildingCell_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UW_BuildingCell_C::BndEvt__W_BuildingCell_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_BuildingCell_C", "BndEvt__W_BuildingCell_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_BuildingCell.W_BuildingCell_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_BuildingCell_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_BuildingCell_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_BuildingCell.W_BuildingCell_C.ExecuteUbergraph_W_BuildingCell
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_BuildingCell_C::ExecuteUbergraph_W_BuildingCell(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_BuildingCell_C", "ExecuteUbergraph_W_BuildingCell");

	Params::W_BuildingCell_C_ExecuteUbergraph_W_BuildingCell Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_BuildingCell.W_BuildingCell_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBuildingInfo_Struct             Info                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)

void UW_BuildingCell_C::OnClick__DelegateSignature(const struct FBuildingInfo_Struct& Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_BuildingCell_C", "OnClick__DelegateSignature");

	Params::W_BuildingCell_C_OnClick__DelegateSignature Parms{};

	Parms.Info = std::move(Info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_BuildingCell.W_BuildingCell_C.OnLoaded_04BC4976421E8AE1814C82AFFAF21695
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_BuildingCell_C::OnLoaded_04BC4976421E8AE1814C82AFFAF21695(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_BuildingCell_C", "OnLoaded_04BC4976421E8AE1814C82AFFAF21695");

	Params::W_BuildingCell_C_OnLoaded_04BC4976421E8AE1814C82AFFAF21695 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_BuildingCell.W_BuildingCell_C.OnSelect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UW_BuildingCell_C::OnSelect__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_BuildingCell_C", "OnSelect__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_BuildingCell.W_BuildingCell_C.SetSelectedCell
// (Public, BlueprintCallable, BlueprintEvent)

void UW_BuildingCell_C::SetSelectedCell()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_BuildingCell_C", "SetSelectedCell");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_BuildingCell.W_BuildingCell_C.SetUnselectedCell
// (Public, BlueprintCallable, BlueprintEvent)

void UW_BuildingCell_C::SetUnselectedCell()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_BuildingCell_C", "SetUnselectedCell");

	UObject::ProcessEvent(Func, nullptr);
}

}

