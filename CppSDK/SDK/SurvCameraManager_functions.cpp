#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SurvCameraManager

#include "Basic.hpp"

#include "SurvCameraManager_classes.hpp"
#include "SurvCameraManager_parameters.hpp"


namespace SDK
{

// Function SurvCameraManager.SurvCameraManager_C.BlueprintUpdateCamera
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           CameraTarget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NewCameraLocation                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         NewCameraRotation                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   NewCameraFOV                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ASurvCameraManager_C::BlueprintUpdateCamera(class AActor* CameraTarget, struct FVector* NewCameraLocation, struct FRotator* NewCameraRotation, float* NewCameraFOV)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SurvCameraManager_C", "BlueprintUpdateCamera");

	Params::SurvCameraManager_C_BlueprintUpdateCamera Parms{};

	Parms.CameraTarget = CameraTarget;

	UObject::ProcessEvent(Func, &Parms);

	if (NewCameraLocation != nullptr)
		*NewCameraLocation = std::move(Parms.NewCameraLocation);

	if (NewCameraRotation != nullptr)
		*NewCameraRotation = std::move(Parms.NewCameraRotation);

	if (NewCameraFOV != nullptr)
		*NewCameraFOV = Parms.NewCameraFOV;

	return Parms.ReturnValue;
}


// Function SurvCameraManager.SurvCameraManager_C.CalculateAxisIndependentLag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          CurrentLocation                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          TargetLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         CameraRotation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          LagSpeeds                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASurvCameraManager_C::CalculateAxisIndependentLag(const struct FVector& CurrentLocation, const struct FVector& TargetLocation, const struct FRotator& CameraRotation, const struct FVector& LagSpeeds, struct FVector* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SurvCameraManager_C", "CalculateAxisIndependentLag");

	Params::SurvCameraManager_C_CalculateAxisIndependentLag Parms{};

	Parms.CurrentLocation = std::move(CurrentLocation);
	Parms.TargetLocation = std::move(TargetLocation);
	Parms.CameraRotation = std::move(CameraRotation);
	Parms.LagSpeeds = std::move(LagSpeeds);

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = std::move(Parms.Return);
}


// Function SurvCameraManager.SurvCameraManager_C.CustomCameraBehavior
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// double                                  FOV                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASurvCameraManager_C::CustomCameraBehavior(struct FVector* Location, struct FRotator* Rotation, double* FOV)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SurvCameraManager_C", "CustomCameraBehavior");

	Params::SurvCameraManager_C_CustomCameraBehavior Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);

	if (FOV != nullptr)
		*FOV = Parms.FOV;
}


// Function SurvCameraManager.SurvCameraManager_C.EntryAsPassenger
// (BlueprintCallable, BlueprintEvent)

void ASurvCameraManager_C::EntryAsPassenger()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SurvCameraManager_C", "EntryAsPassenger");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SurvCameraManager.SurvCameraManager_C.ExecuteUbergraph_SurvCameraManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASurvCameraManager_C::ExecuteUbergraph_SurvCameraManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SurvCameraManager_C", "ExecuteUbergraph_SurvCameraManager");

	Params::SurvCameraManager_C_ExecuteUbergraph_SurvCameraManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SurvCameraManager.SurvCameraManager_C.InpActEvt_X_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ASurvCameraManager_C::InpActEvt_X_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SurvCameraManager_C", "InpActEvt_X_K2Node_InputKeyEvent_0");

	Params::SurvCameraManager_C_InpActEvt_X_K2Node_InputKeyEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SurvCameraManager.SurvCameraManager_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ASurvCameraManager_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SurvCameraManager_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SurvCameraManager.SurvCameraManager_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ASurvCameraManager_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SurvCameraManager_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}
