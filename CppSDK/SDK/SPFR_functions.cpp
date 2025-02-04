#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SPFR

#include "Basic.hpp"

#include "SPFR_classes.hpp"
#include "SPFR_parameters.hpp"


namespace SDK
{

// Function SPFR.SPFR_C.AssignBlizzardController
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    FollowNow                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASPFR_C::AssignBlizzardController(bool FollowNow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SPFR_C", "AssignBlizzardController");

	Params::SPFR_C_AssignBlizzardController Parms{};

	Parms.FollowNow = FollowNow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SPFR.SPFR_C.BleedWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Show                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASPFR_C::BleedWidget(bool Show)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SPFR_C", "BleedWidget");

	Params::SPFR_C_BleedWidget Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SPFR.SPFR_C.ClientFunc_OnDistanceCloseContainer
// (Public, BlueprintCallable, BlueprintEvent)

void ASPFR_C::ClientFunc_OnDistanceCloseContainer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SPFR_C", "ClientFunc_OnDistanceCloseContainer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SPFR.SPFR_C.ExecuteUbergraph_SPFR
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASPFR_C::ExecuteUbergraph_SPFR(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SPFR_C", "ExecuteUbergraph_SPFR");

	Params::SPFR_C_ExecuteUbergraph_SPFR Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SPFR.SPFR_C.FlashlightEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bNewVisibility                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASPFR_C::FlashlightEnable(bool bNewVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SPFR_C", "FlashlightEnable");

	Params::SPFR_C_FlashlightEnable Parms{};

	Parms.bNewVisibility = bNewVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SPFR.SPFR_C.HighlightActor
// (Public, BlueprintCallable, BlueprintEvent)

void ASPFR_C::HighlightActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SPFR_C", "HighlightActor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SPFR.SPFR_C.InpActEvt_G_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ASPFR_C::InpActEvt_G_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SPFR_C", "InpActEvt_G_K2Node_InputKeyEvent_0");

	Params::SPFR_C_InpActEvt_G_K2Node_InputKeyEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SPFR.SPFR_C.InpActEvt_G_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ASPFR_C::InpActEvt_G_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SPFR_C", "InpActEvt_G_K2Node_InputKeyEvent_1");

	Params::SPFR_C_InpActEvt_G_K2Node_InputKeyEvent_1 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SPFR.SPFR_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ASPFR_C::InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SPFR_C", "InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_3");

	Params::SPFR_C_InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_3 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SPFR.SPFR_C.InpActEvt_ThumbMouseButton2_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ASPFR_C::InpActEvt_ThumbMouseButton2_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SPFR_C", "InpActEvt_ThumbMouseButton2_K2Node_InputKeyEvent_2");

	Params::SPFR_C_InpActEvt_ThumbMouseButton2_K2Node_InputKeyEvent_2 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SPFR.SPFR_C.InteractUpdate
// (BlueprintCallable, BlueprintEvent)

void ASPFR_C::InteractUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SPFR_C", "InteractUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SPFR.SPFR_C.OnBlendOut_1BD2CF324A2B700B1CDA1280516FD26D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASPFR_C::OnBlendOut_1BD2CF324A2B700B1CDA1280516FD26D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SPFR_C", "OnBlendOut_1BD2CF324A2B700B1CDA1280516FD26D");

	Params::SPFR_C_OnBlendOut_1BD2CF324A2B700B1CDA1280516FD26D Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SPFR.SPFR_C.OnBlendOut_3E23762F4C2309B1DD195BA646FC0F45
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASPFR_C::OnBlendOut_3E23762F4C2309B1DD195BA646FC0F45(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SPFR_C", "OnBlendOut_3E23762F4C2309B1DD195BA646FC0F45");

	Params::SPFR_C_OnBlendOut_3E23762F4C2309B1DD195BA646FC0F45 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SPFR.SPFR_C.OnBlendOut_AC163B0B4250F4789333D3A89D35464A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASPFR_C::OnBlendOut_AC163B0B4250F4789333D3A89D35464A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SPFR_C", "OnBlendOut_AC163B0B4250F4789333D3A89D35464A");

	Params::SPFR_C_OnBlendOut_AC163B0B4250F4789333D3A89D35464A Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SPFR.SPFR_C.OnCompleted_1BD2CF324A2B700B1CDA1280516FD26D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASPFR_C::OnCompleted_1BD2CF324A2B700B1CDA1280516FD26D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SPFR_C", "OnCompleted_1BD2CF324A2B700B1CDA1280516FD26D");

	Params::SPFR_C_OnCompleted_1BD2CF324A2B700B1CDA1280516FD26D Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SPFR.SPFR_C.OnCompleted_3E23762F4C2309B1DD195BA646FC0F45
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASPFR_C::OnCompleted_3E23762F4C2309B1DD195BA646FC0F45(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SPFR_C", "OnCompleted_3E23762F4C2309B1DD195BA646FC0F45");

	Params::SPFR_C_OnCompleted_3E23762F4C2309B1DD195BA646FC0F45 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SPFR.SPFR_C.OnCompleted_AC163B0B4250F4789333D3A89D35464A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASPFR_C::OnCompleted_AC163B0B4250F4789333D3A89D35464A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SPFR_C", "OnCompleted_AC163B0B4250F4789333D3A89D35464A");

	Params::SPFR_C_OnCompleted_AC163B0B4250F4789333D3A89D35464A Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SPFR.SPFR_C.OnInterrupted_1BD2CF324A2B700B1CDA1280516FD26D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASPFR_C::OnInterrupted_1BD2CF324A2B700B1CDA1280516FD26D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SPFR_C", "OnInterrupted_1BD2CF324A2B700B1CDA1280516FD26D");

	Params::SPFR_C_OnInterrupted_1BD2CF324A2B700B1CDA1280516FD26D Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SPFR.SPFR_C.OnInterrupted_3E23762F4C2309B1DD195BA646FC0F45
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASPFR_C::OnInterrupted_3E23762F4C2309B1DD195BA646FC0F45(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SPFR_C", "OnInterrupted_3E23762F4C2309B1DD195BA646FC0F45");

	Params::SPFR_C_OnInterrupted_3E23762F4C2309B1DD195BA646FC0F45 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SPFR.SPFR_C.OnInterrupted_AC163B0B4250F4789333D3A89D35464A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASPFR_C::OnInterrupted_AC163B0B4250F4789333D3A89D35464A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SPFR_C", "OnInterrupted_AC163B0B4250F4789333D3A89D35464A");

	Params::SPFR_C_OnInterrupted_AC163B0B4250F4789333D3A89D35464A Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SPFR.SPFR_C.OnNotifyBegin_1BD2CF324A2B700B1CDA1280516FD26D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASPFR_C::OnNotifyBegin_1BD2CF324A2B700B1CDA1280516FD26D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SPFR_C", "OnNotifyBegin_1BD2CF324A2B700B1CDA1280516FD26D");

	Params::SPFR_C_OnNotifyBegin_1BD2CF324A2B700B1CDA1280516FD26D Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SPFR.SPFR_C.OnNotifyBegin_3E23762F4C2309B1DD195BA646FC0F45
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASPFR_C::OnNotifyBegin_3E23762F4C2309B1DD195BA646FC0F45(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SPFR_C", "OnNotifyBegin_3E23762F4C2309B1DD195BA646FC0F45");

	Params::SPFR_C_OnNotifyBegin_3E23762F4C2309B1DD195BA646FC0F45 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SPFR.SPFR_C.OnNotifyBegin_AC163B0B4250F4789333D3A89D35464A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASPFR_C::OnNotifyBegin_AC163B0B4250F4789333D3A89D35464A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SPFR_C", "OnNotifyBegin_AC163B0B4250F4789333D3A89D35464A");

	Params::SPFR_C_OnNotifyBegin_AC163B0B4250F4789333D3A89D35464A Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SPFR.SPFR_C.OnNotifyEnd_1BD2CF324A2B700B1CDA1280516FD26D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASPFR_C::OnNotifyEnd_1BD2CF324A2B700B1CDA1280516FD26D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SPFR_C", "OnNotifyEnd_1BD2CF324A2B700B1CDA1280516FD26D");

	Params::SPFR_C_OnNotifyEnd_1BD2CF324A2B700B1CDA1280516FD26D Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SPFR.SPFR_C.OnNotifyEnd_3E23762F4C2309B1DD195BA646FC0F45
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASPFR_C::OnNotifyEnd_3E23762F4C2309B1DD195BA646FC0F45(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SPFR_C", "OnNotifyEnd_3E23762F4C2309B1DD195BA646FC0F45");

	Params::SPFR_C_OnNotifyEnd_3E23762F4C2309B1DD195BA646FC0F45 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SPFR.SPFR_C.OnNotifyEnd_AC163B0B4250F4789333D3A89D35464A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASPFR_C::OnNotifyEnd_AC163B0B4250F4789333D3A89D35464A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SPFR_C", "OnNotifyEnd_AC163B0B4250F4789333D3A89D35464A");

	Params::SPFR_C_OnNotifyEnd_AC163B0B4250F4789333D3A89D35464A Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SPFR.SPFR_C.OpenLootPoint1
// (BlueprintCallable, BlueprintEvent)

void ASPFR_C::OpenLootPoint1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SPFR_C", "OpenLootPoint1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SPFR.SPFR_C.OpenLootPoint2
// (BlueprintCallable, BlueprintEvent)

void ASPFR_C::OpenLootPoint2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SPFR_C", "OpenLootPoint2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SPFR.SPFR_C.PlayCameraShake
// (Public, BlueprintCallable, BlueprintEvent)

void ASPFR_C::PlayCameraShake()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SPFR_C", "PlayCameraShake");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SPFR.SPFR_C.ShowF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_ShowF                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASPFR_C::ShowF(bool Param_ShowF)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SPFR_C", "ShowF");

	Params::SPFR_C_ShowF Parms{};

	Parms.Param_ShowF = Param_ShowF;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SPFR.SPFR_C.ShowInteractUI
// (BlueprintCallable, BlueprintEvent)

void ASPFR_C::ShowInteractUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SPFR_C", "ShowInteractUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SPFR.SPFR_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASPFR_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SPFR_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SPFR.SPFR_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASPFR_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SPFR_C", "ReceiveTick");

	Params::SPFR_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

