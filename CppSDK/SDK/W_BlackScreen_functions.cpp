#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_BlackScreen

#include "Basic.hpp"

#include "W_BlackScreen_classes.hpp"
#include "W_BlackScreen_parameters.hpp"


namespace SDK
{

// Function W_BlackScreen.W_BlackScreen_C.Close
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OnCar                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_BlackScreen_C::Close(bool OnCar)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_BlackScreen_C", "Close");

	Params::W_BlackScreen_C_Close Parms{};

	Parms.OnCar = OnCar;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_BlackScreen.W_BlackScreen_C.ExecuteUbergraph_W_BlackScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_BlackScreen_C::ExecuteUbergraph_W_BlackScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_BlackScreen_C", "ExecuteUbergraph_W_BlackScreen");

	Params::W_BlackScreen_C_ExecuteUbergraph_W_BlackScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_BlackScreen.W_BlackScreen_C.InitLoadingScreenArray
// (BlueprintCallable, BlueprintEvent)

void UW_BlackScreen_C::InitLoadingScreenArray()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_BlackScreen_C", "InitLoadingScreenArray");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_BlackScreen.W_BlackScreen_C.OnBlackScreenSee__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UW_BlackScreen_C::OnBlackScreenSee__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_BlackScreen_C", "OnBlackScreenSee__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_BlackScreen.W_BlackScreen_C.OnClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UW_BlackScreen_C::OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_BlackScreen_C", "OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_BlackScreen.W_BlackScreen_C.OnIncreaseLoadingPercent
// (BlueprintCallable, BlueprintEvent)

void UW_BlackScreen_C::OnIncreaseLoadingPercent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_BlackScreen_C", "OnIncreaseLoadingPercent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_BlackScreen.W_BlackScreen_C.OnLoadingScreenInited
// (BlueprintCallable, BlueprintEvent)

void UW_BlackScreen_C::OnLoadingScreenInited()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_BlackScreen_C", "OnLoadingScreenInited");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_BlackScreen.W_BlackScreen_C.OnOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UW_BlackScreen_C::OnOpened__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_BlackScreen_C", "OnOpened__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_BlackScreen.W_BlackScreen_C.OnSetMaxLoadingPercent
// (BlueprintCallable, BlueprintEvent)

void UW_BlackScreen_C::OnSetMaxLoadingPercent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_BlackScreen_C", "OnSetMaxLoadingPercent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_BlackScreen.W_BlackScreen_C.Open
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    WithoutShade                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_BlackScreen_C::Open(bool WithoutShade)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_BlackScreen_C", "Open");

	Params::W_BlackScreen_C_Open Parms{};

	Parms.WithoutShade = WithoutShade;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_BlackScreen.W_BlackScreen_C.OpenWithText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_BlackScreen_C::OpenWithText(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_BlackScreen_C", "OpenWithText");

	Params::W_BlackScreen_C_OpenWithText Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_BlackScreen.W_BlackScreen_C.SetTextAndHint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             MapName                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             HintText                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*                       Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_BlackScreen_C::SetTextAndHint(const class FText& MapName, const class FText& HintText, class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_BlackScreen_C", "SetTextAndHint");

	Params::W_BlackScreen_C_SetTextAndHint Parms{};

	Parms.MapName = std::move(MapName);
	Parms.HintText = std::move(HintText);
	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_BlackScreen.W_BlackScreen_C.StartInitial
// (BlueprintCallable, BlueprintEvent)

void UW_BlackScreen_C::StartInitial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_BlackScreen_C", "StartInitial");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_BlackScreen.W_BlackScreen_C.StopInitial
// (BlueprintCallable, BlueprintEvent)

void UW_BlackScreen_C::StopInitial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_BlackScreen_C", "StopInitial");

	UObject::ProcessEvent(Func, nullptr);
}

}
