#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ServerCell

#include "Basic.hpp"

#include "WBP_ServerCell_classes.hpp"
#include "WBP_ServerCell_parameters.hpp"


namespace SDK
{

// Function WBP_ServerCell.WBP_ServerCell_C.BndEvt__WBP_ServerCell_Button_Favorite_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ServerCell_C::BndEvt__WBP_ServerCell_Button_Favorite_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerCell_C", "BndEvt__WBP_ServerCell_Button_Favorite_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ServerCell.WBP_ServerCell_C.BndEvt__WBP_ServerCell_Button_ServerType_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ServerCell_C::BndEvt__WBP_ServerCell_Button_ServerType_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerCell_C", "BndEvt__WBP_ServerCell_Button_ServerType_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ServerCell.WBP_ServerCell_C.BndEvt__WBP_ServerCell_Button_ServerType_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ServerCell_C::BndEvt__WBP_ServerCell_Button_ServerType_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerCell_C", "BndEvt__WBP_ServerCell_Button_ServerType_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ServerCell.WBP_ServerCell_C.BndEvt__WBP_ServerCell_Button_ServerType_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ServerCell_C::BndEvt__WBP_ServerCell_Button_ServerType_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerCell_C", "BndEvt__WBP_ServerCell_Button_ServerType_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ServerCell.WBP_ServerCell_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ServerCell_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerCell_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ServerCell.WBP_ServerCell_C.ExecuteUbergraph_WBP_ServerCell
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ServerCell_C::ExecuteUbergraph_WBP_ServerCell(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerCell_C", "ExecuteUbergraph_WBP_ServerCell");

	Params::WBP_ServerCell_C_ExecuteUbergraph_WBP_ServerCell Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ServerCell.WBP_ServerCell_C.GetSelected
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_bSelected                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ServerCell_C::GetSelected(bool* Param_bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerCell_C", "GetSelected");

	Params::WBP_ServerCell_C_GetSelected Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_bSelected != nullptr)
		*Param_bSelected = Parms.Param_bSelected;
}


// Function WBP_ServerCell.WBP_ServerCell_C.GetServerName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           Param_ServerName                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_ServerCell_C::GetServerName(class FString* Param_ServerName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerCell_C", "GetServerName");

	Params::WBP_ServerCell_C_GetServerName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ServerName != nullptr)
		*Param_ServerName = std::move(Parms.Param_ServerName);
}


// Function WBP_ServerCell.WBP_ServerCell_C.HoverButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Hover                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ServerCell_C::HoverButton(bool Param_Hover)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerCell_C", "HoverButton");

	Params::WBP_ServerCell_C_HoverButton Parms{};

	Parms.Param_Hover = Param_Hover;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ServerCell.WBP_ServerCell_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_ServerCell_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerCell_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ServerCell.WBP_ServerCell_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_ServerCell_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerCell_C", "OnAddedToFocusPath");

	Params::WBP_ServerCell_C_OnAddedToFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ServerCell.WBP_ServerCell_C.OnDoubleClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_ServerCell_C*                ServerCell                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ServerCell_C::OnDoubleClick__DelegateSignature(class UWBP_ServerCell_C* ServerCell)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerCell_C", "OnDoubleClick__DelegateSignature");

	Params::WBP_ServerCell_C_OnDoubleClick__DelegateSignature Parms{};

	Parms.ServerCell = ServerCell;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ServerCell.WBP_ServerCell_C.OnFocused__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_ServerCell_C*                Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ServerCell_C::OnFocused__DelegateSignature(class UWBP_ServerCell_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerCell_C", "OnFocused__DelegateSignature");

	Params::WBP_ServerCell_C_OnFocused__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ServerCell.WBP_ServerCell_C.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        InMyGeometry                                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    InMouseEvent                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_ServerCell_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerCell_C", "OnMouseButtonDoubleClick");

	Params::WBP_ServerCell_C_OnMouseButtonDoubleClick Parms{};

	Parms.InMyGeometry = std::move(InMyGeometry);
	Parms.InMouseEvent = std::move(InMouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_ServerCell.WBP_ServerCell_C.OnMouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_ServerCell_C::OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerCell_C", "OnMouseButtonDown_0");

	Params::WBP_ServerCell_C_OnMouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_ServerCell.WBP_ServerCell_C.OnMouseDoubleClick
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_ServerCell_C::OnMouseDoubleClick(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerCell_C", "OnMouseDoubleClick");

	Params::WBP_ServerCell_C_OnMouseDoubleClick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_ServerCell.WBP_ServerCell_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ServerCell_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerCell_C", "OnMouseEnter");

	Params::WBP_ServerCell_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ServerCell.WBP_ServerCell_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ServerCell_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerCell_C", "OnMouseLeave");

	Params::WBP_ServerCell_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ServerCell.WBP_ServerCell_C.OnServerSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ServerInfo                    Param_ServerInfo                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UWBP_ServerCell_C*                Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ServerCell_C::OnServerSelected__DelegateSignature(const struct FS_ServerInfo& Param_ServerInfo, class UWBP_ServerCell_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerCell_C", "OnServerSelected__DelegateSignature");

	Params::WBP_ServerCell_C_OnServerSelected__DelegateSignature Parms{};

	Parms.Param_ServerInfo = std::move(Param_ServerInfo);
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ServerCell.WBP_ServerCell_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ServerCell_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerCell_C", "PreConstruct");

	Params::WBP_ServerCell_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ServerCell.WBP_ServerCell_C.ReportConnect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Region                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Ping                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Status                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ServerCell_C::ReportConnect(const class FText& Region, const class FText& Ping, const class FText& Status)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerCell_C", "ReportConnect");

	Params::WBP_ServerCell_C_ReportConnect Parms{};

	Parms.Region = std::move(Region);
	Parms.Ping = std::move(Ping);
	Parms.Status = std::move(Status);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ServerCell.WBP_ServerCell_C.SelectServer
// (BlueprintCallable, BlueprintEvent)

void UWBP_ServerCell_C::SelectServer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerCell_C", "SelectServer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ServerCell.WBP_ServerCell_C.Set Population Range
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NumberOfPlayers                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Text                                                   (Parm, OutParm)

void UWBP_ServerCell_C::Set_Population_Range(int32 NumberOfPlayers, class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerCell_C", "Set Population Range");

	Params::WBP_ServerCell_C_Set_Population_Range Parms{};

	Parms.NumberOfPlayers = NumberOfPlayers;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = std::move(Parms.Text);
}


// Function WBP_ServerCell.WBP_ServerCell_C.SetFavorite
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Favorite                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ServerCell_C::SetFavorite(bool Favorite)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerCell_C", "SetFavorite");

	Params::WBP_ServerCell_C_SetFavorite Parms{};

	Parms.Favorite = Favorite;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ServerCell.WBP_ServerCell_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bSelected                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ServerCell_C::SetSelected(bool Param_bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerCell_C", "SetSelected");

	Params::WBP_ServerCell_C_SetSelected Parms{};

	Parms.Param_bSelected = Param_bSelected;

	UObject::ProcessEvent(Func, &Parms);
}

}
