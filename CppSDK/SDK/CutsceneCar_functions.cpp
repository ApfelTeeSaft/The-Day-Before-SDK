#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CutsceneCar

#include "Basic.hpp"

#include "CutsceneCar_classes.hpp"
#include "CutsceneCar_parameters.hpp"


namespace SDK
{

// Function CutsceneCar.CutsceneCar_C.BndEvt__HitCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ACutsceneCar_C::BndEvt__HitCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "BndEvt__HitCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::CutsceneCar_C_BndEvt__HitCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CutsceneCar.CutsceneCar_C.CalculateSnowOnTire
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  WheelMovement                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsAdd                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsDirt                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_WheelIndex                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACutsceneCar_C::CalculateSnowOnTire(double WheelMovement, bool IsAdd, bool IsDirt, int32 Param_WheelIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "CalculateSnowOnTire");

	Params::CutsceneCar_C_CalculateSnowOnTire Parms{};

	Parms.WheelMovement = WheelMovement;
	Parms.IsAdd = IsAdd;
	Parms.IsDirt = IsDirt;
	Parms.Param_WheelIndex = Param_WheelIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CutsceneCar.CutsceneCar_C.DestroyInteractable
// (Public, BlueprintCallable, BlueprintEvent)

void ACutsceneCar_C::DestroyInteractable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "DestroyInteractable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CutsceneCar.CutsceneCar_C.ExecuteUbergraph_CutsceneCar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACutsceneCar_C::ExecuteUbergraph_CutsceneCar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "ExecuteUbergraph_CutsceneCar");

	Params::CutsceneCar_C_ExecuteUbergraph_CutsceneCar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CutsceneCar.CutsceneCar_C.ExitVehicle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    SkipAnimation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    SkipExitOnLocation                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IgnoreSpeedLimits                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACutsceneCar_C::ExitVehicle(class AActor* Player, bool SkipAnimation, bool SkipExitOnLocation, bool IgnoreSpeedLimits, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "ExitVehicle");

	Params::CutsceneCar_C_ExitVehicle Parms{};

	Parms.Player = Player;
	Parms.SkipAnimation = SkipAnimation;
	Parms.SkipExitOnLocation = SkipExitOnLocation;
	Parms.IgnoreSpeedLimits = IgnoreSpeedLimits;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function CutsceneCar.CutsceneCar_C.FillGas
// (Public, BlueprintCallable, BlueprintEvent)

void ACutsceneCar_C::FillGas()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "FillGas");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CutsceneCar.CutsceneCar_C.GetActorType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_ActorType                             ActorType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACutsceneCar_C::GetActorType(E_ActorType* ActorType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "GetActorType");

	Params::CutsceneCar_C_GetActorType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ActorType != nullptr)
		*ActorType = Parms.ActorType;
}


// Function CutsceneCar.CutsceneCar_C.GetBoostInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  BoostTime                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  BoostCooldownTime                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACutsceneCar_C::GetBoostInfo(double* BoostTime, double* BoostCooldownTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "GetBoostInfo");

	Params::CutsceneCar_C_GetBoostInfo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (BoostTime != nullptr)
		*BoostTime = Parms.BoostTime;

	if (BoostCooldownTime != nullptr)
		*BoostCooldownTime = Parms.BoostCooldownTime;
}


// Function CutsceneCar.CutsceneCar_C.GetCarStatsComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBPC_CarStatsComponent_C*         CarStats                                               (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ACutsceneCar_C::GetCarStatsComponent(class UBPC_CarStatsComponent_C** CarStats)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "GetCarStatsComponent");

	Params::CutsceneCar_C_GetCarStatsComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CarStats != nullptr)
		*CarStats = Parms.CarStats;
}


// Function CutsceneCar.CutsceneCar_C.GetDriver
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Driver                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ASurvivalPlayer_V2_C*             NewParam                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ACutsceneCar_C::GetDriver(class APawn** Driver, class ASurvivalPlayer_V2_C** NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "GetDriver");

	Params::CutsceneCar_C_GetDriver Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Driver != nullptr)
		*Driver = Parms.Driver;

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function CutsceneCar.CutsceneCar_C.GetEngineStarted
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Started                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACutsceneCar_C::GetEngineStarted(bool* Started)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "GetEngineStarted");

	Params::CutsceneCar_C_GetEngineStarted Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Started != nullptr)
		*Started = Parms.Started;
}


// Function CutsceneCar.CutsceneCar_C.GetExitPoint
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   SeatIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ACutsceneCar_C::GetExitPoint(int32 SeatIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "GetExitPoint");

	Params::CutsceneCar_C_GetExitPoint Parms{};

	Parms.SeatIndex = SeatIndex;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CutsceneCar.CutsceneCar_C.GetIsAccelerating
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsAccelerating                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACutsceneCar_C::GetIsAccelerating(bool* IsAccelerating)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "GetIsAccelerating");

	Params::CutsceneCar_C_GetIsAccelerating Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsAccelerating != nullptr)
		*IsAccelerating = Parms.IsAccelerating;
}


// Function CutsceneCar.CutsceneCar_C.GetOut
// (BlueprintCallable, BlueprintEvent)

void ACutsceneCar_C::GetOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "GetOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CutsceneCar.CutsceneCar_C.GetPassengers
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            PassengerFL                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            PassengerBL                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            PassengerBR                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ACutsceneCar_C::GetPassengers(class APawn** PassengerFL, class APawn** PassengerBL, class APawn** PassengerBR)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "GetPassengers");

	Params::CutsceneCar_C_GetPassengers Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PassengerFL != nullptr)
		*PassengerFL = Parms.PassengerFL;

	if (PassengerBL != nullptr)
		*PassengerBL = Parms.PassengerBL;

	if (PassengerBR != nullptr)
		*PassengerBR = Parms.PassengerBR;
}


// Function CutsceneCar.CutsceneCar_C.GetSteering
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Angle                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACutsceneCar_C::GetSteering(double* Angle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "GetSteering");

	Params::CutsceneCar_C_GetSteering Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Angle != nullptr)
		*Angle = Parms.Angle;
}


// Function CutsceneCar.CutsceneCar_C.GetVehicleBody
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           Body                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ACutsceneCar_C::GetVehicleBody(class USkeletalMeshComponent** Body)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "GetVehicleBody");

	Params::CutsceneCar_C_GetVehicleBody Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Body != nullptr)
		*Body = Parms.Body;
}


// Function CutsceneCar.CutsceneCar_C.GetWheelPitches
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<double>                          Pitches                                                (Parm, OutParm)

void ACutsceneCar_C::GetWheelPitches(TArray<double>* Pitches)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "GetWheelPitches");

	Params::CutsceneCar_C_GetWheelPitches Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Pitches != nullptr)
		*Pitches = std::move(Parms.Pitches);
}


// Function CutsceneCar.CutsceneCar_C.GetWheels
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USphereComponent*                 LF                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USphereComponent*                 RF                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USphereComponent*                 LB                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USphereComponent*                 RB                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ACutsceneCar_C::GetWheels(bool* IsValid, class USphereComponent** LF, class USphereComponent** RF, class USphereComponent** LB, class USphereComponent** RB)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "GetWheels");

	Params::CutsceneCar_C_GetWheels Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (LF != nullptr)
		*LF = Parms.LF;

	if (RF != nullptr)
		*RF = Parms.RF;

	if (LB != nullptr)
		*LB = Parms.LB;

	if (RB != nullptr)
		*RB = Parms.RB;
}


// Function CutsceneCar.CutsceneCar_C.Glass_break
// (Public, BlueprintCallable, BlueprintEvent)

void ACutsceneCar_C::Glass_break()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "Glass_break");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CutsceneCar.CutsceneCar_C.HasDriver
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ACutsceneCar_C::HasDriver()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "HasDriver");

	Params::CutsceneCar_C_HasDriver Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CutsceneCar.CutsceneCar_C.InpActEvt_Subtract_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ACutsceneCar_C::InpActEvt_Subtract_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "InpActEvt_Subtract_K2Node_InputKeyEvent_0");

	Params::CutsceneCar_C_InpActEvt_Subtract_K2Node_InputKeyEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CutsceneCar.CutsceneCar_C.IsLocked?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACutsceneCar_C::IsLocked_(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "IsLocked?");

	Params::CutsceneCar_C_IsLocked_ Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function CutsceneCar.CutsceneCar_C.IsVehicle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVehicle                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACutsceneCar_C::IsVehicle(bool* Param_IsVehicle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "IsVehicle");

	Params::CutsceneCar_C_IsVehicle Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsVehicle != nullptr)
		*Param_IsVehicle = Parms.Param_IsVehicle;
}


// Function CutsceneCar.CutsceneCar_C.OnBeginInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ACutsceneCar_C::OnBeginInteract(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "OnBeginInteract");

	Params::CutsceneCar_C_OnBeginInteract Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CutsceneCar.CutsceneCar_C.OnFocused
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           HighlightActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*                  HighlightActorComponent                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// E_InteractType                          InteractType                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  LateTime                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACutsceneCar_C::OnFocused(class APawn* Player, class AActor* HighlightActor, class UActorComponent* HighlightActorComponent, E_InteractType* InteractType, double* LateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "OnFocused");

	Params::CutsceneCar_C_OnFocused Parms{};

	Parms.Player = Player;
	Parms.HighlightActor = HighlightActor;
	Parms.HighlightActorComponent = HighlightActorComponent;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractType != nullptr)
		*InteractType = Parms.InteractType;

	if (LateTime != nullptr)
		*LateTime = Parms.LateTime;
}


// Function CutsceneCar.CutsceneCar_C.OnInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ACutsceneCar_C::OnInteract(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "OnInteract");

	Params::CutsceneCar_C_OnInteract Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CutsceneCar.CutsceneCar_C.OnInteract2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ACutsceneCar_C::OnInteract2(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "OnInteract2");

	Params::CutsceneCar_C_OnInteract2 Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CutsceneCar.CutsceneCar_C.OnInteract3
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ACutsceneCar_C::OnInteract3(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "OnInteract3");

	Params::CutsceneCar_C_OnInteract3 Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CutsceneCar.CutsceneCar_C.OnInteractVehicle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   SitIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    SkipAnimation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACutsceneCar_C::OnInteractVehicle(class APawn* Player, int32 SitIndex, bool SkipAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "OnInteractVehicle");

	Params::CutsceneCar_C_OnInteractVehicle Parms{};

	Parms.Player = Player;
	Parms.SitIndex = SitIndex;
	Parms.SkipAnimation = SkipAnimation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CutsceneCar.CutsceneCar_C.OnLevelLoaded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ACutsceneCar_C::OnLevelLoaded(class FName Level, class AActor* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "OnLevelLoaded");

	Params::CutsceneCar_C_OnLevelLoaded Parms{};

	Parms.Level = Level;
	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CutsceneCar.CutsceneCar_C.OnLevelUnloaded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ACutsceneCar_C::OnLevelUnloaded(class FName Level, class AActor* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "OnLevelUnloaded");

	Params::CutsceneCar_C_OnLevelUnloaded Parms{};

	Parms.Level = Level;
	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CutsceneCar.CutsceneCar_C.OnLocalInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ACutsceneCar_C::OnLocalInteract(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "OnLocalInteract");

	Params::CutsceneCar_C_OnLocalInteract Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CutsceneCar.CutsceneCar_C.OnLostFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ACutsceneCar_C::OnLostFocus(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "OnLostFocus");

	Params::CutsceneCar_C_OnLostFocus Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CutsceneCar.CutsceneCar_C.OnSeen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ACutsceneCar_C::OnSeen(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "OnSeen");

	Params::CutsceneCar_C_OnSeen Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CutsceneCar.CutsceneCar_C.OnSquadCheckComplete
// (Public, BlueprintCallable, BlueprintEvent)

void ACutsceneCar_C::OnSquadCheckComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "OnSquadCheckComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CutsceneCar.CutsceneCar_C.OnStopInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ACutsceneCar_C::OnStopInteract(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "OnStopInteract");

	Params::CutsceneCar_C_OnStopInteract Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CutsceneCar.CutsceneCar_C.PassengerQuit
// (BlueprintCallable, BlueprintEvent)

void ACutsceneCar_C::PassengerQuit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "PassengerQuit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CutsceneCar.CutsceneCar_C.PlayExitAnims
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimInstance*                    PlayerAnimInst                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ACutsceneCar_C::PlayExitAnims(class UAnimInstance* PlayerAnimInst)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "PlayExitAnims");

	Params::CutsceneCar_C_PlayExitAnims Parms{};

	Parms.PlayerAnimInst = PlayerAnimInst;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CutsceneCar.CutsceneCar_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACutsceneCar_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CutsceneCar.CutsceneCar_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACutsceneCar_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "ReceiveTick");

	Params::CutsceneCar_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CutsceneCar.CutsceneCar_C.Repair
// (Public, BlueprintCallable, BlueprintEvent)

void ACutsceneCar_C::Repair()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "Repair");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CutsceneCar.CutsceneCar_C.Run Lockpicking
// (Public, BlueprintCallable, BlueprintEvent)

void ACutsceneCar_C::Run_Lockpicking()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "Run Lockpicking");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CutsceneCar.CutsceneCar_C.Set3DWidgetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACutsceneCar_C::Set3DWidgetVisibility(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "Set3DWidgetVisibility");

	Params::CutsceneCar_C_Set3DWidgetVisibility Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CutsceneCar.CutsceneCar_C.SetBoost
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewBoost                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACutsceneCar_C::SetBoost(bool NewBoost, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "SetBoost");

	Params::CutsceneCar_C_SetBoost Parms{};

	Parms.NewBoost = NewBoost;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function CutsceneCar.CutsceneCar_C.SetFrontLightEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACutsceneCar_C::SetFrontLightEnabled(bool Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "SetFrontLightEnabled");

	Params::CutsceneCar_C_SetFrontLightEnabled Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CutsceneCar.CutsceneCar_C.SetParticle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDirt                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_WheelIndex                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACutsceneCar_C::SetParticle(bool IsDirt, int32 Param_WheelIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "SetParticle");

	Params::CutsceneCar_C_SetParticle Parms{};

	Parms.IsDirt = IsDirt;
	Parms.Param_WheelIndex = Param_WheelIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CutsceneCar.CutsceneCar_C.SetTutorial3DWidgetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACutsceneCar_C::SetTutorial3DWidgetVisibility(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "SetTutorial3DWidgetVisibility");

	Params::CutsceneCar_C_SetTutorial3DWidgetVisibility Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CutsceneCar.CutsceneCar_C.SwitchSits
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   DesireSitIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ACutsceneCar_C::SwitchSits(int32 DesireSitIndex, class AActor* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CutsceneCar_C", "SwitchSits");

	Params::CutsceneCar_C_SwitchSits Parms{};

	Parms.DesireSitIndex = DesireSitIndex;
	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}

}
