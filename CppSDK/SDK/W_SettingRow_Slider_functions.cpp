#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SettingRow_Slider

#include "Basic.hpp"

#include "W_SettingRow_Slider_classes.hpp"
#include "W_SettingRow_Slider_parameters.hpp"


namespace SDK
{

// Function W_SettingRow_Slider.W_SettingRow_Slider_C.BndEvt__W_SettingRow_Slider_Button_DoScroll_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UW_SettingRow_Slider_C::BndEvt__W_SettingRow_Slider_Button_DoScroll_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SettingRow_Slider_C", "BndEvt__W_SettingRow_Slider_Button_DoScroll_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_SettingRow_Slider.W_SettingRow_Slider_C.BndEvt__W_SettingRow_Slider_RowSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingRow_Slider_C::BndEvt__W_SettingRow_Slider_RowSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SettingRow_Slider_C", "BndEvt__W_SettingRow_Slider_RowSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	Params::W_SettingRow_Slider_C_BndEvt__W_SettingRow_Slider_RowSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SettingRow_Slider.W_SettingRow_Slider_C.BndEvt__W_SettingRow_Slider_RowSlider_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UW_SettingRow_Slider_C::BndEvt__W_SettingRow_Slider_RowSlider_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SettingRow_Slider_C", "BndEvt__W_SettingRow_Slider_RowSlider_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_SettingRow_Slider.W_SettingRow_Slider_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_SettingRow_Slider_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SettingRow_Slider_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_SettingRow_Slider.W_SettingRow_Slider_C.DeselectRow
// (Public, BlueprintCallable, BlueprintEvent)

void UW_SettingRow_Slider_C::DeselectRow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SettingRow_Slider_C", "DeselectRow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_SettingRow_Slider.W_SettingRow_Slider_C.EnableRow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingRow_Slider_C::EnableRow(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SettingRow_Slider_C", "EnableRow");

	Params::W_SettingRow_Slider_C_EnableRow Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SettingRow_Slider.W_SettingRow_Slider_C.ExecuteUbergraph_W_SettingRow_Slider
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingRow_Slider_C::ExecuteUbergraph_W_SettingRow_Slider(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SettingRow_Slider_C", "ExecuteUbergraph_W_SettingRow_Slider");

	Params::W_SettingRow_Slider_C_ExecuteUbergraph_W_SettingRow_Slider Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SettingRow_Slider.W_SettingRow_Slider_C.GetIsDefaultValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Default                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingRow_Slider_C::GetIsDefaultValue(bool* Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SettingRow_Slider_C", "GetIsDefaultValue");

	Params::W_SettingRow_Slider_C_GetIsDefaultValue Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Default != nullptr)
		*Default = Parms.Default;
}


// Function W_SettingRow_Slider.W_SettingRow_Slider_C.GetSettingName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Param_SettingName                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingRow_Slider_C::GetSettingName(class FName* Param_SettingName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SettingRow_Slider_C", "GetSettingName");

	Params::W_SettingRow_Slider_C_GetSettingName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_SettingName != nullptr)
		*Param_SettingName = Parms.Param_SettingName;
}


// Function W_SettingRow_Slider.W_SettingRow_Slider_C.HoverRow
// (Public, BlueprintCallable, BlueprintEvent)

void UW_SettingRow_Slider_C::HoverRow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SettingRow_Slider_C", "HoverRow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_SettingRow_Slider.W_SettingRow_Slider_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Param_CurrentValue                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Param_MinValue                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Param_MaxValue                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Param_StepValue                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingRow_Slider_C::Init(double Param_CurrentValue, double Param_MinValue, double Param_MaxValue, double Param_StepValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SettingRow_Slider_C", "Init");

	Params::W_SettingRow_Slider_C_Init Parms{};

	Parms.Param_CurrentValue = Param_CurrentValue;
	Parms.Param_MinValue = Param_MinValue;
	Parms.Param_MaxValue = Param_MaxValue;
	Parms.Param_StepValue = Param_StepValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SettingRow_Slider.W_SettingRow_Slider_C.InitSetting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UW_SettingRow_Slider_C::InitSetting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SettingRow_Slider_C", "InitSetting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_SettingRow_Slider.W_SettingRow_Slider_C.IsRowHovered
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsHovered                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingRow_Slider_C::IsRowHovered(bool* Param_IsHovered)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SettingRow_Slider_C", "IsRowHovered");

	Params::W_SettingRow_Slider_C_IsRowHovered Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsHovered != nullptr)
		*Param_IsHovered = Parms.Param_IsHovered;
}


// Function W_SettingRow_Slider.W_SettingRow_Slider_C.IsRowSelected
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSelected                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingRow_Slider_C::IsRowSelected(bool* IsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SettingRow_Slider_C", "IsRowSelected");

	Params::W_SettingRow_Slider_C_IsRowSelected Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsSelected != nullptr)
		*IsSelected = Parms.IsSelected;
}


// Function W_SettingRow_Slider.W_SettingRow_Slider_C.OnKeyValueChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingRow_Slider_C::OnKeyValueChanged(double Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SettingRow_Slider_C", "OnKeyValueChanged");

	Params::W_SettingRow_Slider_C_OnKeyValueChanged Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SettingRow_Slider.W_SettingRow_Slider_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_SettingRow_Slider_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SettingRow_Slider_C", "OnMouseEnter");

	Params::W_SettingRow_Slider_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SettingRow_Slider.W_SettingRow_Slider_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_SettingRow_Slider_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SettingRow_Slider_C", "OnMouseLeave");

	Params::W_SettingRow_Slider_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SettingRow_Slider.W_SettingRow_Slider_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingRow_Slider_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SettingRow_Slider_C", "PreConstruct");

	Params::W_SettingRow_Slider_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SettingRow_Slider.W_SettingRow_Slider_C.SelectRow
// (Public, BlueprintCallable, BlueprintEvent)

void UW_SettingRow_Slider_C::SelectRow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SettingRow_Slider_C", "SelectRow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_SettingRow_Slider.W_SettingRow_Slider_C.SetDefault
// (Private, BlueprintCallable, BlueprintEvent)

void UW_SettingRow_Slider_C::SetDefault()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SettingRow_Slider_C", "SetDefault");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_SettingRow_Slider.W_SettingRow_Slider_C.SetHovered
// (Private, BlueprintCallable, BlueprintEvent)

void UW_SettingRow_Slider_C::SetHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SettingRow_Slider_C", "SetHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_SettingRow_Slider.W_SettingRow_Slider_C.SetParentSettingsWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      SettingsWidgetRef                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_SettingRow_Slider_C::SetParentSettingsWidget(class UUserWidget* SettingsWidgetRef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SettingRow_Slider_C", "SetParentSettingsWidget");

	Params::W_SettingRow_Slider_C_SetParentSettingsWidget Parms{};

	Parms.SettingsWidgetRef = SettingsWidgetRef;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SettingRow_Slider.W_SettingRow_Slider_C.SetSelected
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Selected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingRow_Slider_C::SetSelected(bool Selected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SettingRow_Slider_C", "SetSelected");

	Params::W_SettingRow_Slider_C_SetSelected Parms{};

	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SettingRow_Slider.W_SettingRow_Slider_C.UnhoverRow
// (Public, BlueprintCallable, BlueprintEvent)

void UW_SettingRow_Slider_C::UnhoverRow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SettingRow_Slider_C", "UnhoverRow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_SettingRow_Slider.W_SettingRow_Slider_C.UpdateSliderValues
// (Public, BlueprintCallable, BlueprintEvent)

void UW_SettingRow_Slider_C::UpdateSliderValues()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SettingRow_Slider_C", "UpdateSliderValues");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_SettingRow_Slider.W_SettingRow_Slider_C.ValueHasBeenChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingRow_Slider_C::ValueHasBeenChanged__DelegateSignature(double NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SettingRow_Slider_C", "ValueHasBeenChanged__DelegateSignature");

	Params::W_SettingRow_Slider_C_ValueHasBeenChanged__DelegateSignature Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

