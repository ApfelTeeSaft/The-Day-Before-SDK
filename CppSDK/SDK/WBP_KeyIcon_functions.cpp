#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_KeyIcon

#include "Basic.hpp"

#include "WBP_KeyIcon_classes.hpp"
#include "WBP_KeyIcon_parameters.hpp"


namespace SDK
{

// Function WBP_KeyIcon.WBP_KeyIcon_C.ExecuteUbergraph_WBP_KeyIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_KeyIcon_C::ExecuteUbergraph_WBP_KeyIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_KeyIcon_C", "ExecuteUbergraph_WBP_KeyIcon");

	Params::WBP_KeyIcon_C_ExecuteUbergraph_WBP_KeyIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_KeyIcon.WBP_KeyIcon_C.FindKeyIcon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             Param_Key                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Found                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FF_KeysInfo                      Out_Row                                                (Parm, OutParm, HasGetValueTypeHash)

void UWBP_KeyIcon_C::FindKeyIcon(const struct FKey& Param_Key, bool* Found, struct FF_KeysInfo* Out_Row)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_KeyIcon_C", "FindKeyIcon");

	Params::WBP_KeyIcon_C_FindKeyIcon Parms{};

	Parms.Param_Key = std::move(Param_Key);

	UObject::ProcessEvent(Func, &Parms);

	if (Found != nullptr)
		*Found = Parms.Found;

	if (Out_Row != nullptr)
		*Out_Row = std::move(Parms.Out_Row);
}


// Function WBP_KeyIcon.WBP_KeyIcon_C.GetKey
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                             Param_Key                                              (Parm, OutParm, HasGetValueTypeHash)

void UWBP_KeyIcon_C::GetKey(struct FKey* Param_Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_KeyIcon_C", "GetKey");

	Params::WBP_KeyIcon_C_GetKey Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Key != nullptr)
		*Param_Key = std::move(Parms.Param_Key);
}


// Function WBP_KeyIcon.WBP_KeyIcon_C.HoverButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bHover                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_KeyIcon_C::HoverButton(bool bHover)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_KeyIcon_C", "HoverButton");

	Params::WBP_KeyIcon_C_HoverButton Parms{};

	Parms.bHover = bHover;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_KeyIcon.WBP_KeyIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_KeyIcon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_KeyIcon_C", "PreConstruct");

	Params::WBP_KeyIcon_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_KeyIcon.WBP_KeyIcon_C.SetAdditionalControlKey
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Shift                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Ctrl                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Alt                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Cmd                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_KeyIcon_C::SetAdditionalControlKey(bool Shift, bool Ctrl, bool Alt, bool Cmd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_KeyIcon_C", "SetAdditionalControlKey");

	Params::WBP_KeyIcon_C_SetAdditionalControlKey Parms{};

	Parms.Shift = Shift;
	Parms.Ctrl = Ctrl;
	Parms.Alt = Alt;
	Parms.Cmd = Cmd;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_KeyIcon.WBP_KeyIcon_C.SetContent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             Param_Key                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_KeyIcon_C::SetContent(const struct FKey& Param_Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_KeyIcon_C", "SetContent");

	Params::WBP_KeyIcon_C_SetContent Parms{};

	Parms.Param_Key = std::move(Param_Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_KeyIcon.WBP_KeyIcon_C.SetOutline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bShow                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_KeyIcon_C::SetOutline(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_KeyIcon_C", "SetOutline");

	Params::WBP_KeyIcon_C_SetOutline Parms{};

	Parms.bShow = bShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_KeyIcon.WBP_KeyIcon_C.SetTextPadding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OneSymbol                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_KeyIcon_C::SetTextPadding(bool OneSymbol)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_KeyIcon_C", "SetTextPadding");

	Params::WBP_KeyIcon_C_SetTextPadding Parms{};

	Parms.OneSymbol = OneSymbol;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_KeyIcon.WBP_KeyIcon_C.SetUsePositiveValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bUsePositiveValue                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_KeyIcon_C::SetUsePositiveValue(bool Param_bUsePositiveValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_KeyIcon_C", "SetUsePositiveValue");

	Params::WBP_KeyIcon_C_SetUsePositiveValue Parms{};

	Parms.Param_bUsePositiveValue = Param_bUsePositiveValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

