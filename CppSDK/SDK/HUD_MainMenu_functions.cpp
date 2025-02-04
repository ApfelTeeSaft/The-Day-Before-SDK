#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_MainMenu

#include "Basic.hpp"

#include "HUD_MainMenu_classes.hpp"
#include "HUD_MainMenu_parameters.hpp"


namespace SDK
{

// Function HUD_MainMenu.HUD_MainMenu_C.BlockGameInput
// (BlueprintCallable, BlueprintEvent)

void AHUD_MainMenu_C::BlockGameInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_MainMenu_C", "BlockGameInput");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_MainMenu.HUD_MainMenu_C.ConsoleCommands
// (Public, BlueprintCallable, BlueprintEvent)

void AHUD_MainMenu_C::ConsoleCommands()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_MainMenu_C", "ConsoleCommands");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_MainMenu.HUD_MainMenu_C.ECloseDisclaimer
// (BlueprintCallable, BlueprintEvent)

void AHUD_MainMenu_C::ECloseDisclaimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_MainMenu_C", "ECloseDisclaimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_MainMenu.HUD_MainMenu_C.ECloseMovie
// (BlueprintCallable, BlueprintEvent)

void AHUD_MainMenu_C::ECloseMovie()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_MainMenu_C", "ECloseMovie");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_MainMenu.HUD_MainMenu_C.ESkipAnyKeyScreen
// (BlueprintCallable, BlueprintEvent)

void AHUD_MainMenu_C::ESkipAnyKeyScreen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_MainMenu_C", "ESkipAnyKeyScreen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_MainMenu.HUD_MainMenu_C.ExecuteUbergraph_HUD_MainMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_MainMenu_C::ExecuteUbergraph_HUD_MainMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_MainMenu_C", "ExecuteUbergraph_HUD_MainMenu");

	Params::HUD_MainMenu_C_ExecuteUbergraph_HUD_MainMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_MainMenu.HUD_MainMenu_C.FinalizeCharacterCreation
// (Public, BlueprintCallable, BlueprintEvent)

void AHUD_MainMenu_C::FinalizeCharacterCreation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_MainMenu_C", "FinalizeCharacterCreation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_MainMenu.HUD_MainMenu_C.Finished_E6D02326448224EC0359FE914ED1776A
// (BlueprintCallable, BlueprintEvent)

void AHUD_MainMenu_C::Finished_E6D02326448224EC0359FE914ED1776A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_MainMenu_C", "Finished_E6D02326448224EC0359FE914ED1776A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_MainMenu.HUD_MainMenu_C.GetLoginData
// (Public, BlueprintCallable, BlueprintEvent)

void AHUD_MainMenu_C::GetLoginData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_MainMenu_C", "GetLoginData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_MainMenu.HUD_MainMenu_C.GetPerkInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWBP_PerkInfo_C*                  Param_PerkInfo                                         (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void AHUD_MainMenu_C::GetPerkInfo(class UWBP_PerkInfo_C** Param_PerkInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_MainMenu_C", "GetPerkInfo");

	Params::HUD_MainMenu_C_GetPerkInfo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_PerkInfo != nullptr)
		*Param_PerkInfo = Parms.Param_PerkInfo;
}


// Function HUD_MainMenu.HUD_MainMenu_C.OnClickDirectConnect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Address                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AHUD_MainMenu_C::OnClickDirectConnect(const class FString& Address)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_MainMenu_C", "OnClickDirectConnect");

	Params::HUD_MainMenu_C_OnClickDirectConnect Parms{};

	Parms.Address = std::move(Address);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_MainMenu.HUD_MainMenu_C.OnClickPlayButton
// (BlueprintCallable, BlueprintEvent)

void AHUD_MainMenu_C::OnClickPlayButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_MainMenu_C", "OnClickPlayButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_MainMenu.HUD_MainMenu_C.OnPressAnyKeyInMenu
// (BlueprintCallable, BlueprintEvent)

void AHUD_MainMenu_C::OnPressAnyKeyInMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_MainMenu_C", "OnPressAnyKeyInMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_MainMenu.HUD_MainMenu_C.PlayMovie
// (Public, BlueprintCallable, BlueprintEvent)

void AHUD_MainMenu_C::PlayMovie()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_MainMenu_C", "PlayMovie");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_MainMenu.HUD_MainMenu_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AHUD_MainMenu_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_MainMenu_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_MainMenu.HUD_MainMenu_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_MainMenu_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_MainMenu_C", "ReceiveTick");

	Params::HUD_MainMenu_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_MainMenu.HUD_MainMenu_C.ReleaseGameInput
// (BlueprintCallable, BlueprintEvent)

void AHUD_MainMenu_C::ReleaseGameInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_MainMenu_C", "ReleaseGameInput");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_MainMenu.HUD_MainMenu_C.SelectServer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ServerInfo                    ServerInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AHUD_MainMenu_C::SelectServer(const struct FS_ServerInfo& ServerInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_MainMenu_C", "SelectServer");

	Params::HUD_MainMenu_C_SelectServer Parms{};

	Parms.ServerInfo = std::move(ServerInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_MainMenu.HUD_MainMenu_C.SetDefaultInputMode
// (BlueprintCallable, BlueprintEvent)

void AHUD_MainMenu_C::SetDefaultInputMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_MainMenu_C", "SetDefaultInputMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_MainMenu.HUD_MainMenu_C.SetErrorText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AHUD_MainMenu_C::SetErrorText(const class FString& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_MainMenu_C", "SetErrorText");

	Params::HUD_MainMenu_C_SetErrorText Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_MainMenu.HUD_MainMenu_C.SetInfoText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AHUD_MainMenu_C::SetInfoText(const class FString& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_MainMenu_C", "SetInfoText");

	Params::HUD_MainMenu_C_SetInfoText Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_MainMenu.HUD_MainMenu_C.SetResponseErrorText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AHUD_MainMenu_C::SetResponseErrorText(const class FString& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_MainMenu_C", "SetResponseErrorText");

	Params::HUD_MainMenu_C_SetResponseErrorText Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_MainMenu.HUD_MainMenu_C.SetResponseText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AHUD_MainMenu_C::SetResponseText(const class FString& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_MainMenu_C", "SetResponseText");

	Params::HUD_MainMenu_C_SetResponseText Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_MainMenu.HUD_MainMenu_C.ShowKickedFromAFKWidget
// (BlueprintCallable, BlueprintEvent)

void AHUD_MainMenu_C::ShowKickedFromAFKWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_MainMenu_C", "ShowKickedFromAFKWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_MainMenu.HUD_MainMenu_C.ShowWidget
// (BlueprintCallable, BlueprintEvent)

void AHUD_MainMenu_C::ShowWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_MainMenu_C", "ShowWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_MainMenu.HUD_MainMenu_C.SkipAnyKeyScreen
// (BlueprintCallable, BlueprintEvent)

void AHUD_MainMenu_C::SkipAnyKeyScreen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_MainMenu_C", "SkipAnyKeyScreen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_MainMenu.HUD_MainMenu_C.WarningMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_DialoguePerks_C*               Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void AHUD_MainMenu_C::WarningMessage(class UW_DialoguePerks_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_MainMenu_C", "WarningMessage");

	Params::HUD_MainMenu_C_WarningMessage Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}

}

