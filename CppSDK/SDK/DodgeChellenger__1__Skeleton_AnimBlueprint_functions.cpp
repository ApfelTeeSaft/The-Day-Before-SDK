#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DodgeChellenger__1__Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "DodgeChellenger__1__Skeleton_AnimBlueprint_classes.hpp"
#include "DodgeChellenger__1__Skeleton_AnimBlueprint_parameters.hpp"


namespace SDK
{

// Function DodgeChellenger__1__Skeleton_AnimBlueprint.DodgeChellenger__1__Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UDodgeChellenger__1__Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DodgeChellenger__1__Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::DodgeChellenger__1__Skeleton_AnimBlueprint_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function DodgeChellenger__1__Skeleton_AnimBlueprint.DodgeChellenger__1__Skeleton_AnimBlueprint_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)

void UDodgeChellenger__1__Skeleton_AnimBlueprint_C::BlueprintBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DodgeChellenger__1__Skeleton_AnimBlueprint_C", "BlueprintBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DodgeChellenger__1__Skeleton_AnimBlueprint.DodgeChellenger__1__Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDodgeChellenger__1__Skeleton_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DodgeChellenger__1__Skeleton_AnimBlueprint_C", "BlueprintUpdateAnimation");

	Params::DodgeChellenger__1__Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DodgeChellenger__1__Skeleton_AnimBlueprint.DodgeChellenger__1__Skeleton_AnimBlueprint_C.CalculateBackHodovaia
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          LeftWheel                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          RightWheel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Translation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Angle                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDodgeChellenger__1__Skeleton_AnimBlueprint_C::CalculateBackHodovaia(const struct FVector& LeftWheel, const struct FVector& RightWheel, struct FVector* Translation, double* Angle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DodgeChellenger__1__Skeleton_AnimBlueprint_C", "CalculateBackHodovaia");

	Params::DodgeChellenger__1__Skeleton_AnimBlueprint_C_CalculateBackHodovaia Parms{};

	Parms.LeftWheel = std::move(LeftWheel);
	Parms.RightWheel = std::move(RightWheel);

	UObject::ProcessEvent(Func, &Parms);

	if (Translation != nullptr)
		*Translation = std::move(Parms.Translation);

	if (Angle != nullptr)
		*Angle = Parms.Angle;
}


// Function DodgeChellenger__1__Skeleton_AnimBlueprint.DodgeChellenger__1__Skeleton_AnimBlueprint_C.CalculateRubberRotation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Steering                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         RubberBasePos                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                         NewRotation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDodgeChellenger__1__Skeleton_AnimBlueprint_C::CalculateRubberRotation(double Steering, const struct FRotator& RubberBasePos, struct FRotator* NewRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DodgeChellenger__1__Skeleton_AnimBlueprint_C", "CalculateRubberRotation");

	Params::DodgeChellenger__1__Skeleton_AnimBlueprint_C_CalculateRubberRotation Parms{};

	Parms.Steering = Steering;
	Parms.RubberBasePos = std::move(RubberBasePos);

	UObject::ProcessEvent(Func, &Parms);

	if (NewRotation != nullptr)
		*NewRotation = std::move(Parms.NewRotation);
}


// Function DodgeChellenger__1__Skeleton_AnimBlueprint.DodgeChellenger__1__Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DodgeChellenger__1__Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_2E7B45B945889C3ED0E7EC9422453C61
// (BlueprintEvent)

void UDodgeChellenger__1__Skeleton_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DodgeChellenger__1__Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_2E7B45B945889C3ED0E7EC9422453C61()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DodgeChellenger__1__Skeleton_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DodgeChellenger__1__Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_2E7B45B945889C3ED0E7EC9422453C61");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DodgeChellenger__1__Skeleton_AnimBlueprint.DodgeChellenger__1__Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DodgeChellenger__1__Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_8241F434490F4EF8852205B22167E081
// (BlueprintEvent)

void UDodgeChellenger__1__Skeleton_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DodgeChellenger__1__Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_8241F434490F4EF8852205B22167E081()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DodgeChellenger__1__Skeleton_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DodgeChellenger__1__Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_8241F434490F4EF8852205B22167E081");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DodgeChellenger__1__Skeleton_AnimBlueprint.DodgeChellenger__1__Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DodgeChellenger__1__Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_91A5B74B4F028535B5168DBABB10A311
// (BlueprintEvent)

void UDodgeChellenger__1__Skeleton_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DodgeChellenger__1__Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_91A5B74B4F028535B5168DBABB10A311()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DodgeChellenger__1__Skeleton_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DodgeChellenger__1__Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_91A5B74B4F028535B5168DBABB10A311");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DodgeChellenger__1__Skeleton_AnimBlueprint.DodgeChellenger__1__Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DodgeChellenger__1__Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_C722080D4FFA23F62965C096B58F1F09
// (BlueprintEvent)

void UDodgeChellenger__1__Skeleton_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DodgeChellenger__1__Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_C722080D4FFA23F62965C096B58F1F09()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DodgeChellenger__1__Skeleton_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_DodgeChellenger__1__Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_C722080D4FFA23F62965C096B58F1F09");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DodgeChellenger__1__Skeleton_AnimBlueprint.DodgeChellenger__1__Skeleton_AnimBlueprint_C.ExecuteUbergraph_DodgeChellenger__1__Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDodgeChellenger__1__Skeleton_AnimBlueprint_C::ExecuteUbergraph_DodgeChellenger__1__Skeleton_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DodgeChellenger__1__Skeleton_AnimBlueprint_C", "ExecuteUbergraph_DodgeChellenger__1__Skeleton_AnimBlueprint");

	Params::DodgeChellenger__1__Skeleton_AnimBlueprint_C_ExecuteUbergraph_DodgeChellenger__1__Skeleton_AnimBlueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DodgeChellenger__1__Skeleton_AnimBlueprint.DodgeChellenger__1__Skeleton_AnimBlueprint_C.setSteering
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Steering                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDodgeChellenger__1__Skeleton_AnimBlueprint_C::SetSteering(double Steering, double* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DodgeChellenger__1__Skeleton_AnimBlueprint_C", "setSteering");

	Params::DodgeChellenger__1__Skeleton_AnimBlueprint_C_SetSteering Parms{};

	Parms.Steering = Steering;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function DodgeChellenger__1__Skeleton_AnimBlueprint.DodgeChellenger__1__Skeleton_AnimBlueprint_C.Wheel_DeltaZ
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          WheelActualPosition                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          WheelBasePosition                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  DeltaZ                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDodgeChellenger__1__Skeleton_AnimBlueprint_C::Wheel_DeltaZ(const struct FVector& WheelActualPosition, const struct FVector& WheelBasePosition, double* DeltaZ)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DodgeChellenger__1__Skeleton_AnimBlueprint_C", "Wheel_DeltaZ");

	Params::DodgeChellenger__1__Skeleton_AnimBlueprint_C_Wheel_DeltaZ Parms{};

	Parms.WheelActualPosition = std::move(WheelActualPosition);
	Parms.WheelBasePosition = std::move(WheelBasePosition);

	UObject::ProcessEvent(Func, &Parms);

	if (DeltaZ != nullptr)
		*DeltaZ = Parms.DeltaZ;
}

}
