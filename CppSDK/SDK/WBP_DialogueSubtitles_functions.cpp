#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DialogueSubtitles

#include "Basic.hpp"

#include "WBP_DialogueSubtitles_classes.hpp"
#include "WBP_DialogueSubtitles_parameters.hpp"


namespace SDK
{

// Function WBP_DialogueSubtitles.WBP_DialogueSubtitles_C.Asian_SplitTextLine
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           FullPhrase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_DialogueSubtitles_C::Asian_SplitTextLine(const class FString& FullPhrase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DialogueSubtitles_C", "Asian_SplitTextLine");

	Params::WBP_DialogueSubtitles_C_Asian_SplitTextLine Parms{};

	Parms.FullPhrase = std::move(FullPhrase);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DialogueSubtitles.WBP_DialogueSubtitles_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_DialogueSubtitles_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DialogueSubtitles_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DialogueSubtitles.WBP_DialogueSubtitles_C.ExecuteUbergraph_WBP_DialogueSubtitles
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueSubtitles_C::ExecuteUbergraph_WBP_DialogueSubtitles(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DialogueSubtitles_C", "ExecuteUbergraph_WBP_DialogueSubtitles");

	Params::WBP_DialogueSubtitles_C_ExecuteUbergraph_WBP_DialogueSubtitles Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DialogueSubtitles.WBP_DialogueSubtitles_C.GetShowed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_Showed                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueSubtitles_C::GetShowed(bool* Param_Showed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DialogueSubtitles_C", "GetShowed");

	Params::WBP_DialogueSubtitles_C_GetShowed Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Showed != nullptr)
		*Param_Showed = Parms.Param_Showed;
}


// Function WBP_DialogueSubtitles.WBP_DialogueSubtitles_C.HideSubtitles
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueSubtitles_C::HideSubtitles(double NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DialogueSubtitles_C", "HideSubtitles");

	Params::WBP_DialogueSubtitles_C_HideSubtitles Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DialogueSubtitles.WBP_DialogueSubtitles_C.InstantHide
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_DialogueSubtitles_C::InstantHide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DialogueSubtitles_C", "InstantHide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DialogueSubtitles.WBP_DialogueSubtitles_C.PlayPhrase
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_DialogueSubtitles_C::PlayPhrase()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DialogueSubtitles_C", "PlayPhrase");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DialogueSubtitles.WBP_DialogueSubtitles_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueSubtitles_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DialogueSubtitles_C", "PreConstruct");

	Params::WBP_DialogueSubtitles_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DialogueSubtitles.WBP_DialogueSubtitles_C.SetText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_DialogueSubtitles_C::SetText(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DialogueSubtitles_C", "SetText");

	Params::WBP_DialogueSubtitles_C_SetText Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DialogueSubtitles.WBP_DialogueSubtitles_C.Show
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Show                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    With_Anim                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueSubtitles_C::Show(bool Param_Show, bool With_Anim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DialogueSubtitles_C", "Show");

	Params::WBP_DialogueSubtitles_C_Show Parms{};

	Parms.Param_Show = Param_Show;
	Parms.With_Anim = With_Anim;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DialogueSubtitles.WBP_DialogueSubtitles_C.Show Quest Message
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NPC_Name                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Message                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_PlaySound                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DialogueSubtitles_C::Show_Quest_Message(class FName NPC_Name, class FName Message, bool Param_PlaySound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DialogueSubtitles_C", "Show Quest Message");

	Params::WBP_DialogueSubtitles_C_Show_Quest_Message Parms{};

	Parms.NPC_Name = NPC_Name;
	Parms.Message = Message;
	Parms.Param_PlaySound = Param_PlaySound;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DialogueSubtitles.WBP_DialogueSubtitles_C.SplitTextLine
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_DialogueSubtitles_C::SplitTextLine()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DialogueSubtitles_C", "SplitTextLine");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DialogueSubtitles.WBP_DialogueSubtitles_C.StopPlayingMessage
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_DialogueSubtitles_C::StopPlayingMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DialogueSubtitles_C", "StopPlayingMessage");

	UObject::ProcessEvent(Func, nullptr);
}

}
