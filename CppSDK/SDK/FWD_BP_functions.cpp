#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FWD_BP

#include "Basic.hpp"

#include "FWD_BP_classes.hpp"
#include "FWD_BP_parameters.hpp"


namespace SDK
{

// Function FWD_BP.FWD_BP_C.BndEvt__FWD_BP_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AFWD_BP_C::BndEvt__FWD_BP_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FWD_BP_C", "BndEvt__FWD_BP_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	Params::FWD_BP_C_BndEvt__FWD_BP_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FWD_BP.FWD_BP_C.ExecuteUbergraph_FWD_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFWD_BP_C::ExecuteUbergraph_FWD_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FWD_BP_C", "ExecuteUbergraph_FWD_BP");

	Params::FWD_BP_C_ExecuteUbergraph_FWD_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FWD_BP.FWD_BP_C.InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AFWD_BP_C::InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FWD_BP_C", "InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_2");

	Params::FWD_BP_C_InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_2 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FWD_BP.FWD_BP_C.InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AFWD_BP_C::InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FWD_BP_C", "InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_3");

	Params::FWD_BP_C_InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_3 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FWD_BP.FWD_BP_C.InpActEvt_NumPadEight_K2Node_InputKeyEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AFWD_BP_C::InpActEvt_NumPadEight_K2Node_InputKeyEvent_10(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FWD_BP_C", "InpActEvt_NumPadEight_K2Node_InputKeyEvent_10");

	Params::FWD_BP_C_InpActEvt_NumPadEight_K2Node_InputKeyEvent_10 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FWD_BP.FWD_BP_C.InpActEvt_NumPadEight_K2Node_InputKeyEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AFWD_BP_C::InpActEvt_NumPadEight_K2Node_InputKeyEvent_9(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FWD_BP_C", "InpActEvt_NumPadEight_K2Node_InputKeyEvent_9");

	Params::FWD_BP_C_InpActEvt_NumPadEight_K2Node_InputKeyEvent_9 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FWD_BP.FWD_BP_C.InpActEvt_NumPadOne_K2Node_InputKeyEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AFWD_BP_C::InpActEvt_NumPadOne_K2Node_InputKeyEvent_7(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FWD_BP_C", "InpActEvt_NumPadOne_K2Node_InputKeyEvent_7");

	Params::FWD_BP_C_InpActEvt_NumPadOne_K2Node_InputKeyEvent_7 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FWD_BP.FWD_BP_C.InpActEvt_NumPadOne_K2Node_InputKeyEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AFWD_BP_C::InpActEvt_NumPadOne_K2Node_InputKeyEvent_8(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FWD_BP_C", "InpActEvt_NumPadOne_K2Node_InputKeyEvent_8");

	Params::FWD_BP_C_InpActEvt_NumPadOne_K2Node_InputKeyEvent_8 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FWD_BP.FWD_BP_C.InpActEvt_NumPadSeven_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AFWD_BP_C::InpActEvt_NumPadSeven_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FWD_BP_C", "InpActEvt_NumPadSeven_K2Node_InputKeyEvent_5");

	Params::FWD_BP_C_InpActEvt_NumPadSeven_K2Node_InputKeyEvent_5 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FWD_BP.FWD_BP_C.InpActEvt_NumPadSeven_K2Node_InputKeyEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AFWD_BP_C::InpActEvt_NumPadSeven_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FWD_BP_C", "InpActEvt_NumPadSeven_K2Node_InputKeyEvent_6");

	Params::FWD_BP_C_InpActEvt_NumPadSeven_K2Node_InputKeyEvent_6 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FWD_BP.FWD_BP_C.InpActEvt_NumPadTwo_K2Node_InputKeyEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AFWD_BP_C::InpActEvt_NumPadTwo_K2Node_InputKeyEvent_11(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FWD_BP_C", "InpActEvt_NumPadTwo_K2Node_InputKeyEvent_11");

	Params::FWD_BP_C_InpActEvt_NumPadTwo_K2Node_InputKeyEvent_11 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FWD_BP.FWD_BP_C.InpActEvt_NumPadTwo_K2Node_InputKeyEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AFWD_BP_C::InpActEvt_NumPadTwo_K2Node_InputKeyEvent_12(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FWD_BP_C", "InpActEvt_NumPadTwo_K2Node_InputKeyEvent_12");

	Params::FWD_BP_C_InpActEvt_NumPadTwo_K2Node_InputKeyEvent_12 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FWD_BP.FWD_BP_C.InpActEvt_R_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AFWD_BP_C::InpActEvt_R_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FWD_BP_C", "InpActEvt_R_K2Node_InputKeyEvent_4");

	Params::FWD_BP_C_InpActEvt_R_K2Node_InputKeyEvent_4 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FWD_BP.FWD_BP_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AFWD_BP_C::InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FWD_BP_C", "InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0");

	Params::FWD_BP_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FWD_BP.FWD_BP_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AFWD_BP_C::InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FWD_BP_C", "InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1");

	Params::FWD_BP_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FWD_BP.FWD_BP_C.InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_2
// (BlueprintEvent)
// Parameters:
// float                                   AxisValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFWD_BP_C::InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_2(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FWD_BP_C", "InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_2");

	Params::FWD_BP_C_InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_2 Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FWD_BP.FWD_BP_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0
// (BlueprintEvent)
// Parameters:
// float                                   AxisValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFWD_BP_C::InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FWD_BP_C", "InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0");

	Params::FWD_BP_C_InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0 Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FWD_BP.FWD_BP_C.InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_1
// (BlueprintEvent)
// Parameters:
// float                                   AxisValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFWD_BP_C::InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_1(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FWD_BP_C", "InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_1");

	Params::FWD_BP_C_InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_1 Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FWD_BP.FWD_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFWD_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FWD_BP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FWD_BP.FWD_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFWD_BP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FWD_BP_C", "ReceiveTick");

	Params::FWD_BP_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

