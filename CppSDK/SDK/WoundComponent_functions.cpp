#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WoundComponent

#include "Basic.hpp"

#include "WoundComponent_classes.hpp"
#include "WoundComponent_parameters.hpp"


namespace SDK
{

// Function WoundComponent.WoundComponent_C.ExecuteUbergraph_WoundComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWoundComponent_C::ExecuteUbergraph_WoundComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WoundComponent_C", "ExecuteUbergraph_WoundComponent");

	Params::WoundComponent_C_ExecuteUbergraph_WoundComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WoundComponent.WoundComponent_C.GetRefPoseBoneTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           SkeletalMesh                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                             BoneName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       MeshLocalSpaceTransform                                (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWoundComponent_C::GetRefPoseBoneTransform(class USkeletalMeshComponent* SkeletalMesh, class FName BoneName, struct FTransform* MeshLocalSpaceTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WoundComponent_C", "GetRefPoseBoneTransform");

	Params::WoundComponent_C_GetRefPoseBoneTransform Parms{};

	Parms.SkeletalMesh = SkeletalMesh;
	Parms.BoneName = BoneName;

	UObject::ProcessEvent(Func, &Parms);

	if (MeshLocalSpaceTransform != nullptr)
		*MeshLocalSpaceTransform = std::move(Parms.MeshLocalSpaceTransform);
}


// Function WoundComponent.WoundComponent_C.Init
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           SkeletalMesh                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USceneCaptureComponent2D*         SceneCapture                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    SceneCaptureExists                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInstanceDynamic*> Param_OriginalMaterials                                (Parm, OutParm)

void UWoundComponent_C::Init(class USkeletalMeshComponent* SkeletalMesh, class USceneCaptureComponent2D* SceneCapture, bool SceneCaptureExists, TArray<class UMaterialInstanceDynamic*>* Param_OriginalMaterials)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WoundComponent_C", "Init");

	Params::WoundComponent_C_Init Parms{};

	Parms.SkeletalMesh = SkeletalMesh;
	Parms.SceneCapture = SceneCapture;
	Parms.SceneCaptureExists = SceneCaptureExists;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_OriginalMaterials != nullptr)
		*Param_OriginalMaterials = std::move(Parms.Param_OriginalMaterials);
}


// Function WoundComponent.WoundComponent_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           SkeletalMesh                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USceneCaptureComponent2D*         SceneCapture                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWoundComponent_C::Initialize(class USkeletalMeshComponent* SkeletalMesh, class USceneCaptureComponent2D* SceneCapture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WoundComponent_C", "Initialize");

	Params::WoundComponent_C_Initialize Parms{};

	Parms.SkeletalMesh = SkeletalMesh;
	Parms.SceneCapture = SceneCapture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WoundComponent.WoundComponent_C.TakeHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             BoneName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          WorldSpaceLocation                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  WoundRadius                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWoundComponent_C::TakeHit(class FName BoneName, const struct FVector& WorldSpaceLocation, double WoundRadius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WoundComponent_C", "TakeHit");

	Params::WoundComponent_C_TakeHit Parms{};

	Parms.BoneName = BoneName;
	Parms.WorldSpaceLocation = std::move(WorldSpaceLocation);
	Parms.WoundRadius = WoundRadius;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WoundComponent.WoundComponent_C.TransformLocationByRefBoneTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             BoneName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          WorldLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          MeshLocalSpaceLocation                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWoundComponent_C::TransformLocationByRefBoneTransform(class FName BoneName, const struct FVector& WorldLocation, struct FVector* MeshLocalSpaceLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WoundComponent_C", "TransformLocationByRefBoneTransform");

	Params::WoundComponent_C_TransformLocationByRefBoneTransform Parms{};

	Parms.BoneName = BoneName;
	Parms.WorldLocation = std::move(WorldLocation);

	UObject::ProcessEvent(Func, &Parms);

	if (MeshLocalSpaceLocation != nullptr)
		*MeshLocalSpaceLocation = std::move(Parms.MeshLocalSpaceLocation);
}

}
