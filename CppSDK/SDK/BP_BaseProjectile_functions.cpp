#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BaseProjectile

#include "Basic.hpp"

#include "BP_BaseProjectile_classes.hpp"
#include "BP_BaseProjectile_parameters.hpp"


namespace SDK
{

// Function BP_BaseProjectile.BP_BaseProjectile_C.AngleBetweenVectorsInDegrees
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Vector1                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Vector2                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Angle                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BaseProjectile_C::AngleBetweenVectorsInDegrees(const struct FVector& Vector1, const struct FVector& Vector2, double* Angle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseProjectile_C", "AngleBetweenVectorsInDegrees");

	Params::BP_BaseProjectile_C_AngleBetweenVectorsInDegrees Parms{};

	Parms.Vector1 = std::move(Vector1);
	Parms.Vector2 = std::move(Vector2);

	UObject::ProcessEvent(Func, &Parms);

	if (Angle != nullptr)
		*Angle = Parms.Angle;
}


// Function BP_BaseProjectile.BP_BaseProjectile_C.BndEvt__BP_BaseProjectile_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                       ImpactResult                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                          ImpactVelocity                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BaseProjectile_C::BndEvt__BP_BaseProjectile_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseProjectile_C", "BndEvt__BP_BaseProjectile_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature");

	Params::BP_BaseProjectile_C_BndEvt__BP_BaseProjectile_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature Parms{};

	Parms.ImpactResult = std::move(ImpactResult);
	Parms.ImpactVelocity = std::move(ImpactVelocity);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BaseProjectile.BP_BaseProjectile_C.BndEvt__BP_BaseProjectile_Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_BaseProjectile_C::BndEvt__BP_BaseProjectile_Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseProjectile_C", "BndEvt__BP_BaseProjectile_Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_BaseProjectile_C_BndEvt__BP_BaseProjectile_Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BaseProjectile.BP_BaseProjectile_C.BndEvt__BP_BaseProjectile_Sphere_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_BaseProjectile_C::BndEvt__BP_BaseProjectile_Sphere_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseProjectile_C", "BndEvt__BP_BaseProjectile_Sphere_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature");

	Params::BP_BaseProjectile_C_BndEvt__BP_BaseProjectile_Sphere_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BaseProjectile.BP_BaseProjectile_C.CalculateDamageBySpeed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Param_Damage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BaseProjectile_C::CalculateDamageBySpeed(double Param_Damage, double* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseProjectile_C", "CalculateDamageBySpeed");

	Params::BP_BaseProjectile_C_CalculateDamageBySpeed Parms{};

	Parms.Param_Damage = Param_Damage;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_BaseProjectile.BP_BaseProjectile_C.CalculateDistance
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BaseProjectile_C::CalculateDistance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseProjectile_C", "CalculateDistance");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BaseProjectile.BP_BaseProjectile_C.CalculateSpeed
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BaseProjectile_C::CalculateSpeed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseProjectile_C", "CalculateSpeed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BaseProjectile.BP_BaseProjectile_C.ComputeExitLocation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       Param_HitResult                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                          ImpactVelocity                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ExitLocation                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ResultFound                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ExitNormal                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BaseProjectile_C::ComputeExitLocation(const struct FHitResult& Param_HitResult, const struct FVector& ImpactVelocity, struct FVector* ExitLocation, bool* ResultFound, struct FVector* ExitNormal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseProjectile_C", "ComputeExitLocation");

	Params::BP_BaseProjectile_C_ComputeExitLocation Parms{};

	Parms.Param_HitResult = std::move(Param_HitResult);
	Parms.ImpactVelocity = std::move(ImpactVelocity);

	UObject::ProcessEvent(Func, &Parms);

	if (ExitLocation != nullptr)
		*ExitLocation = std::move(Parms.ExitLocation);

	if (ResultFound != nullptr)
		*ResultFound = Parms.ResultFound;

	if (ExitNormal != nullptr)
		*ExitNormal = std::move(Parms.ExitNormal);
}


// Function BP_BaseProjectile.BP_BaseProjectile_C.DecideWhetherToPenetrate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                          ImpactVelocity                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Penetrate                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BaseProjectile_C::DecideWhetherToPenetrate(const struct FHitResult& Hit, const struct FVector& ImpactVelocity, bool* Penetrate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseProjectile_C", "DecideWhetherToPenetrate");

	Params::BP_BaseProjectile_C_DecideWhetherToPenetrate Parms{};

	Parms.Hit = std::move(Hit);
	Parms.ImpactVelocity = std::move(ImpactVelocity);

	UObject::ProcessEvent(Func, &Parms);

	if (Penetrate != nullptr)
		*Penetrate = Parms.Penetrate;
}


// Function BP_BaseProjectile.BP_BaseProjectile_C.DecideWhetherToPenetrate_Simple
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                                    Penetrate                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BaseProjectile_C::DecideWhetherToPenetrate_Simple(const struct FHitResult& Hit, bool* Penetrate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseProjectile_C", "DecideWhetherToPenetrate_Simple");

	Params::BP_BaseProjectile_C_DecideWhetherToPenetrate_Simple Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);

	if (Penetrate != nullptr)
		*Penetrate = Parms.Penetrate;
}


// Function BP_BaseProjectile.BP_BaseProjectile_C.DelayDecalSpawn
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Forward                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*               DecalMaterial                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>                   ActorsToIgnore                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_BaseProjectile_C::DelayDecalSpawn(const struct FVector& Location, const struct FVector& Forward, class UMaterialInterface* DecalMaterial, const TArray<class AActor*>& ActorsToIgnore)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseProjectile_C", "DelayDecalSpawn");

	Params::BP_BaseProjectile_C_DelayDecalSpawn Parms{};

	Parms.Location = std::move(Location);
	Parms.Forward = std::move(Forward);
	Parms.DecalMaterial = DecalMaterial;
	Parms.ActorsToIgnore = std::move(ActorsToIgnore);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BaseProjectile.BP_BaseProjectile_C.ExecuteUbergraph_BP_BaseProjectile
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BaseProjectile_C::ExecuteUbergraph_BP_BaseProjectile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseProjectile_C", "ExecuteUbergraph_BP_BaseProjectile");

	Params::BP_BaseProjectile_C_ExecuteUbergraph_BP_BaseProjectile Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BaseProjectile.BP_BaseProjectile_C.GetNewSpeed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                          ExitLocation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ImpactVelocity                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  NewSpeed                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BaseProjectile_C::GetNewSpeed(const struct FHitResult& Hit, const struct FVector& ExitLocation, const struct FVector& ImpactVelocity, double* NewSpeed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseProjectile_C", "GetNewSpeed");

	Params::BP_BaseProjectile_C_GetNewSpeed Parms{};

	Parms.Hit = std::move(Hit);
	Parms.ExitLocation = std::move(ExitLocation);
	Parms.ImpactVelocity = std::move(ImpactVelocity);

	UObject::ProcessEvent(Func, &Parms);

	if (NewSpeed != nullptr)
		*NewSpeed = Parms.NewSpeed;
}


// Function BP_BaseProjectile.BP_BaseProjectile_C.GetTraceColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          A                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor ABP_BaseProjectile_C::GetTraceColor(const struct FVector& A)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseProjectile_C", "GetTraceColor");

	Params::BP_BaseProjectile_C_GetTraceColor Parms{};

	Parms.A = std::move(A);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_BaseProjectile.BP_BaseProjectile_C.Hit_VisualLow
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_BaseProjectile_C::Hit_VisualLow(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseProjectile_C", "Hit_VisualLow");

	Params::BP_BaseProjectile_C_Hit_VisualLow Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BaseProjectile.BP_BaseProjectile_C.Hit_VisualPart
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_BaseProjectile_C::Hit_VisualPart(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseProjectile_C", "Hit_VisualPart");

	Params::BP_BaseProjectile_C_Hit_VisualPart Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BaseProjectile.BP_BaseProjectile_C.HitEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComponent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Param_HitResult                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_BaseProjectile_C::HitEvent(class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, const struct FVector& NormalImpulse, const struct FHitResult& Param_HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseProjectile_C", "HitEvent");

	Params::BP_BaseProjectile_C_HitEvent Parms{};

	Parms.OtherActor = OtherActor;
	Parms.OtherComponent = OtherComponent;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Param_HitResult = std::move(Param_HitResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BaseProjectile.BP_BaseProjectile_C.HitHandling
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                                    Param_Owner                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ImpactPoint                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ImpactNormal                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPhysicalSurface                        SurfaceType                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BaseProjectile_C::HitHandling(const struct FHitResult& Hit, bool Param_Owner, struct FVector* ImpactPoint, struct FVector* ImpactNormal, EPhysicalSurface* SurfaceType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseProjectile_C", "HitHandling");

	Params::BP_BaseProjectile_C_HitHandling Parms{};

	Parms.Hit = std::move(Hit);
	Parms.Param_Owner = Param_Owner;

	UObject::ProcessEvent(Func, &Parms);

	if (ImpactPoint != nullptr)
		*ImpactPoint = std::move(Parms.ImpactPoint);

	if (ImpactNormal != nullptr)
		*ImpactNormal = std::move(Parms.ImpactNormal);

	if (SurfaceType != nullptr)
		*SurfaceType = Parms.SurfaceType;
}


// Function BP_BaseProjectile.BP_BaseProjectile_C.HitZombie
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       Param_HitResult                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AZombie_C*                        HittedZombie                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BaseProjectile_C::HitZombie(struct FHitResult& Param_HitResult, class AZombie_C*& HittedZombie, const struct FVector& NormalImpulse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseProjectile_C", "HitZombie");

	Params::BP_BaseProjectile_C_HitZombie Parms{};

	Parms.Param_HitResult = std::move(Param_HitResult);
	Parms.HittedZombie = HittedZombie;
	Parms.NormalImpulse = std::move(NormalImpulse);

	UObject::ProcessEvent(Func, &Parms);

	Param_HitResult = std::move(Parms.Param_HitResult);
	HittedZombie = Parms.HittedZombie;
}


// Function BP_BaseProjectile.BP_BaseProjectile_C.LocalImpulse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_BaseProjectile_C::LocalImpulse(class UPrimitiveComponent* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseProjectile_C", "LocalImpulse");

	Params::BP_BaseProjectile_C_LocalImpulse Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BaseProjectile.BP_BaseProjectile_C.MultiNearProjectile
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvivalPlayer_V2_C*             HitPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BaseProjectile_C::MultiNearProjectile(class ASurvivalPlayer_V2_C* HitPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseProjectile_C", "MultiNearProjectile");

	Params::BP_BaseProjectile_C_MultiNearProjectile Parms{};

	Parms.HitPlayer = HitPlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BaseProjectile.BP_BaseProjectile_C.OwnerVisualPart
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_BaseProjectile_C::OwnerVisualPart(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseProjectile_C", "OwnerVisualPart");

	Params::BP_BaseProjectile_C_OwnerVisualPart Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BaseProjectile.BP_BaseProjectile_C.PlayHitParticle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPhysicalSurface                        Enumerator                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          InputPin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Forward                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             bone                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*                  Component_To_Attach                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           HitActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Hit_Normal                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NoSound                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BaseProjectile_C::PlayHitParticle(EPhysicalSurface Enumerator, const struct FVector& InputPin, const struct FVector& Forward, class FName bone, class USceneComponent* Component_To_Attach, class AActor* HitActor, const struct FVector& Hit_Normal, bool NoSound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseProjectile_C", "PlayHitParticle");

	Params::BP_BaseProjectile_C_PlayHitParticle Parms{};

	Parms.Enumerator = Enumerator;
	Parms.InputPin = std::move(InputPin);
	Parms.Forward = std::move(Forward);
	Parms.bone = bone;
	Parms.Component_To_Attach = Component_To_Attach;
	Parms.HitActor = HitActor;
	Parms.Hit_Normal = std::move(Hit_Normal);
	Parms.NoSound = NoSound;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BaseProjectile.BP_BaseProjectile_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BaseProjectile_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseProjectile_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BaseProjectile.BP_BaseProjectile_C.SimulateLocalMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Attacked                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                             BoneName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Param_Damage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BaseProjectile_C::SimulateLocalMontage(class UObject* Attacked, class FName BoneName, double Param_Damage, const struct FVector& HitLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseProjectile_C", "SimulateLocalMontage");

	Params::BP_BaseProjectile_C_SimulateLocalMontage Parms{};

	Parms.Attacked = Attacked;
	Parms.BoneName = BoneName;
	Parms.Param_Damage = Param_Damage;
	Parms.HitLocation = std::move(HitLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BaseProjectile.BP_BaseProjectile_C.VaryTrajectory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          SurfaceNormal                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ImpactVelocity                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BaseProjectile_C*             Projectile                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BaseProjectile_C::VaryTrajectory(const struct FVector& SurfaceNormal, const struct FVector& ImpactVelocity, class ABP_BaseProjectile_C* Projectile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseProjectile_C", "VaryTrajectory");

	Params::BP_BaseProjectile_C_VaryTrajectory Parms{};

	Parms.SurfaceNormal = std::move(SurfaceNormal);
	Parms.ImpactVelocity = std::move(ImpactVelocity);
	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BaseProjectile.BP_BaseProjectile_C.GetDecalMaterial
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EPhysicalSurface                        SurfaceType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         DynMat                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Size                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Size_X                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Size_Y                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Size_Z                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BaseProjectile_C::GetDecalMaterial(EPhysicalSurface SurfaceType, class UMaterialInstanceDynamic** DynMat, struct FVector* Size, double* Size_X, double* Size_Y, double* Size_Z) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BaseProjectile_C", "GetDecalMaterial");

	Params::BP_BaseProjectile_C_GetDecalMaterial Parms{};

	Parms.SurfaceType = SurfaceType;

	UObject::ProcessEvent(Func, &Parms);

	if (DynMat != nullptr)
		*DynMat = Parms.DynMat;

	if (Size != nullptr)
		*Size = std::move(Parms.Size);

	if (Size_X != nullptr)
		*Size_X = Parms.Size_X;

	if (Size_Y != nullptr)
		*Size_Y = Parms.Size_Y;

	if (Size_Z != nullptr)
		*Size_Z = Parms.Size_Z;
}

}
