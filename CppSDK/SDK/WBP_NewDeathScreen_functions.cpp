#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_NewDeathScreen

#include "Basic.hpp"

#include "WBP_NewDeathScreen_classes.hpp"
#include "WBP_NewDeathScreen_parameters.hpp"


namespace SDK
{

// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.AnimShowStatFinished
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_NewDeathScreen_C::AnimShowStatFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "AnimShowStatFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.BndEvt__WBP_NewDeathScreen_Button_Tab_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
// (BlueprintEvent)

void UWBP_NewDeathScreen_C::BndEvt__WBP_NewDeathScreen_Button_Tab_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "BndEvt__WBP_NewDeathScreen_Button_Tab_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.BndEvt__WBP_NewDeathScreen_W_BaseDialogButton_Accept_1_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature
// (BlueprintEvent)

void UWBP_NewDeathScreen_C::BndEvt__WBP_NewDeathScreen_W_BaseDialogButton_Accept_1_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "BndEvt__WBP_NewDeathScreen_W_BaseDialogButton_Accept_1_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.BndEvt__WBP_NewDeathScreen_W_BaseDialogButton_Accept_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
// (BlueprintEvent)

void UWBP_NewDeathScreen_C::BndEvt__WBP_NewDeathScreen_W_BaseDialogButton_Accept_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "BndEvt__WBP_NewDeathScreen_W_BaseDialogButton_Accept_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.BndEvt__WBP_NewDeathScreen_W_HintButtonNew_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
// (BlueprintEvent)

void UWBP_NewDeathScreen_C::BndEvt__WBP_NewDeathScreen_W_HintButtonNew_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "BndEvt__WBP_NewDeathScreen_W_HintButtonNew_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_NewDeathScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.ExecuteUbergraph_WBP_NewDeathScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NewDeathScreen_C::ExecuteUbergraph_WBP_NewDeathScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "ExecuteUbergraph_WBP_NewDeathScreen");

	Params::WBP_NewDeathScreen_C_ExecuteUbergraph_WBP_NewDeathScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.Finished_89FADBEC47F94B3E5806CB82891598C7
// (BlueprintCallable, BlueprintEvent)

void UWBP_NewDeathScreen_C::Finished_89FADBEC47F94B3E5806CB82891598C7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "Finished_89FADBEC47F94B3E5806CB82891598C7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.GetScreenState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EWE_NewDeathScreenState                 Param_ScreenState                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NewDeathScreen_C::GetScreenState(EWE_NewDeathScreenState* Param_ScreenState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "GetScreenState");

	Params::WBP_NewDeathScreen_C_GetScreenState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ScreenState != nullptr)
		*Param_ScreenState = Parms.Param_ScreenState;
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.OnActivateTeleportToHub
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_NewDeathScreen_C::OnActivateTeleportToHub()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "OnActivateTeleportToHub");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.OnActivateTeleportToHub_delayed
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_NewDeathScreen_C::OnActivateTeleportToHub_delayed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "OnActivateTeleportToHub_delayed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.OnActivateTeleportToWoodberry
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_NewDeathScreen_C::OnActivateTeleportToWoodberry()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "OnActivateTeleportToWoodberry");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.OnActivateTeleportToWoodberry_delayed
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_NewDeathScreen_C::OnActivateTeleportToWoodberry_delayed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "OnActivateTeleportToWoodberry_delayed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.OnClearTimers
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FTimerHandle>             Timers                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_NewDeathScreen_C::OnClearTimers(TArray<struct FTimerHandle>& Timers)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "OnClearTimers");

	Params::WBP_NewDeathScreen_C_OnClearTimers Parms{};

	Parms.Timers = std::move(Timers);

	UObject::ProcessEvent(Func, &Parms);

	Timers = std::move(Parms.Timers);
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.OnCompileText
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Symbol                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                             Result                                                 (Parm, OutParm)

void UWBP_NewDeathScreen_C::OnCompileText(const class FText& Text, int32 Count, const class FString& Symbol, class FText* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "OnCompileText");

	Params::WBP_NewDeathScreen_C_OnCompileText Parms{};

	Parms.Text = std::move(Text);
	Parms.Count = Count;
	Parms.Symbol = std::move(Symbol);

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.OnDeath
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_NewDeathScreen_C::OnDeath()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "OnDeath");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.OnFillSrurrendButton
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Reset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NewDeathScreen_C::OnFillSrurrendButton(double NewValue, bool Reset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "OnFillSrurrendButton");

	Params::WBP_NewDeathScreen_C_OnFillSrurrendButton Parms{};

	Parms.NewValue = NewValue;
	Parms.Reset = Reset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.OnHide
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Time                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NewDeathScreen_C::OnHide(double* Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "OnHide");

	Params::WBP_NewDeathScreen_C_OnHide Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Time != nullptr)
		*Time = Parms.Time;
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.OnOpenBlackScreen
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_NewDeathScreen_C::OnOpenBlackScreen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "OnOpenBlackScreen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.OnRefreshAnimations
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidgetAnimation*>         Animations                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_NewDeathScreen_C::OnRefreshAnimations(TArray<class UWidgetAnimation*>& Animations)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "OnRefreshAnimations");

	Params::WBP_NewDeathScreen_C_OnRefreshAnimations Parms{};

	Parms.Animations = std::move(Animations);

	UObject::ProcessEvent(Func, &Parms);

	Animations = std::move(Parms.Animations);
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.OnRemove
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_NewDeathScreen_C::OnRemove()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "OnRemove");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.OnRespawn
// (Protected, BlueprintCallable, BlueprintEvent)

void UWBP_NewDeathScreen_C::OnRespawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "OnRespawn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.OnRespawn (Await)
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_NewDeathScreen_C::OnRespawn__Await_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "OnRespawn (Await)");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.OnRespawnKeyDown
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_NewDeathScreen_C::OnRespawnKeyDown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "OnRespawnKeyDown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.OnRespawnTimerHandler
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_NewDeathScreen_C::OnRespawnTimerHandler()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "OnRespawnTimerHandler");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.OnShow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_DaysLived                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Param_RespawnTime                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Time                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NewDeathScreen_C::OnShow(int32 Param_DaysLived, double Param_RespawnTime, double* Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "OnShow");

	Params::WBP_NewDeathScreen_C_OnShow Parms{};

	Parms.Param_DaysLived = Param_DaysLived;
	Parms.Param_RespawnTime = Param_RespawnTime;

	UObject::ProcessEvent(Func, &Parms);

	if (Time != nullptr)
		*Time = Parms.Time;
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.OnStartRespawn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_NewDeathScreen_C::OnStartRespawn__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "OnStartRespawn__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.OnSurrender
// (Protected, BlueprintCallable, BlueprintEvent)

void UWBP_NewDeathScreen_C::OnSurrender()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "OnSurrender");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.OnSurrender (InputHandler)
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NewDeathScreen_C::OnSurrender__InputHandler_(bool NewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "OnSurrender (InputHandler)");

	Params::WBP_NewDeathScreen_C_OnSurrender__InputHandler_ Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.OnSurrender (KeyDown)
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_NewDeathScreen_C::OnSurrender__KeyDown_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "OnSurrender (KeyDown)");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.OnSurrender (KeyUp)
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_NewDeathScreen_C::OnSurrender__KeyUp_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "OnSurrender (KeyUp)");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.OnSurrenderTimerHandler
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_NewDeathScreen_C::OnSurrenderTimerHandler()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "OnSurrenderTimerHandler");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.OnTimeToTeleport__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_NewDeathScreen_C::OnTimeToTeleport__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "OnTimeToTeleport__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.OnUpdateDeathScreenState__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EWE_NewDeathScreenState                 NewScreenState                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NewDeathScreen_C::OnUpdateDeathScreenState__DelegateSignature(EWE_NewDeathScreenState NewScreenState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "OnUpdateDeathScreenState__DelegateSignature");

	Params::WBP_NewDeathScreen_C_OnUpdateDeathScreenState__DelegateSignature Parms{};

	Parms.NewScreenState = NewScreenState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.PlayTextWaitingAnimation (trigger)
// (BlueprintCallable, BlueprintEvent)

void UWBP_NewDeathScreen_C::PlayTextWaitingAnimation__trigger_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "PlayTextWaitingAnimation (trigger)");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.PlayWithAnimationWithDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    HideWidget_                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NewDeathScreen_C::PlayWithAnimationWithDelay(bool HideWidget_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "PlayWithAnimationWithDelay");

	Params::WBP_NewDeathScreen_C_PlayWithAnimationWithDelay Parms{};

	Parms.HideWidget_ = HideWidget_;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NewDeathScreen_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "PreConstruct");

	Params::WBP_NewDeathScreen_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.SequenceEvent__ENTRYPOINTWBP_NewDeathScreen
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_NewDeathScreen_C::SequenceEvent__ENTRYPOINTWBP_NewDeathScreen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "SequenceEvent__ENTRYPOINTWBP_NewDeathScreen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.SequenceEvent__ENTRYPOINTWBP_NewDeathScreen_0
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_NewDeathScreen_C::SequenceEvent__ENTRYPOINTWBP_NewDeathScreen_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "SequenceEvent__ENTRYPOINTWBP_NewDeathScreen_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.SequenceEvent__ENTRYPOINTWBP_NewDeathScreen_1
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_NewDeathScreen_C::SequenceEvent__ENTRYPOINTWBP_NewDeathScreen_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "SequenceEvent__ENTRYPOINTWBP_NewDeathScreen_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.SequenceEvent__ENTRYPOINTWBP_NewDeathScreen_2
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_NewDeathScreen_C::SequenceEvent__ENTRYPOINTWBP_NewDeathScreen_2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "SequenceEvent__ENTRYPOINTWBP_NewDeathScreen_2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.SequenceEvent__ENTRYPOINTWBP_NewDeathScreen_3
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_NewDeathScreen_C::SequenceEvent__ENTRYPOINTWBP_NewDeathScreen_3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "SequenceEvent__ENTRYPOINTWBP_NewDeathScreen_3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.SequenceEvent__ENTRYPOINTWBP_NewDeathScreen_4
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_NewDeathScreen_C::SequenceEvent__ENTRYPOINTWBP_NewDeathScreen_4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "SequenceEvent__ENTRYPOINTWBP_NewDeathScreen_4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.SetScreenState
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// EWE_NewDeathScreenState                 NewScreenState                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NewDeathScreen_C::SetScreenState(EWE_NewDeathScreenState NewScreenState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "SetScreenState");

	Params::WBP_NewDeathScreen_C_SetScreenState Parms{};

	Parms.NewScreenState = NewScreenState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.ShowSurvived
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<E_StatEndGame, int64>              EndGameStats                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int64                                   MinutesRaidTime                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                                   SecondsRaidTime                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ReceivedReputationPoints                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    WithoutFade                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NewDeathScreen_C::ShowSurvived(const TMap<E_StatEndGame, int64>& EndGameStats, int64 MinutesRaidTime, int64 SecondsRaidTime, int32 ReceivedReputationPoints, bool WithoutFade)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "ShowSurvived");

	Params::WBP_NewDeathScreen_C_ShowSurvived Parms{};

	Parms.EndGameStats = std::move(EndGameStats);
	Parms.MinutesRaidTime = MinutesRaidTime;
	Parms.SecondsRaidTime = SecondsRaidTime;
	Parms.ReceivedReputationPoints = ReceivedReputationPoints;
	Parms.WithoutFade = WithoutFade;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.Showw
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<E_StatEndGame, int64>              EndGameStats                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int64                                   MinutesRaidTime                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                                   SecondsRaidTime                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ReceivedReputationPoints                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NewDeathScreen_C::Showw(const TMap<E_StatEndGame, int64>& EndGameStats, int64 MinutesRaidTime, int64 SecondsRaidTime, int32 ReceivedReputationPoints)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "Showw");

	Params::WBP_NewDeathScreen_C_Showw Parms{};

	Parms.EndGameStats = std::move(EndGameStats);
	Parms.MinutesRaidTime = MinutesRaidTime;
	Parms.SecondsRaidTime = SecondsRaidTime;
	Parms.ReceivedReputationPoints = ReceivedReputationPoints;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_NewDeathScreen.WBP_NewDeathScreen_C.TextWaitingAnimation (trigger)
// (BlueprintCallable, BlueprintEvent)

void UWBP_NewDeathScreen_C::TextWaitingAnimation__trigger_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NewDeathScreen_C", "TextWaitingAnimation (trigger)");

	UObject::ProcessEvent(Func, nullptr);
}

}

