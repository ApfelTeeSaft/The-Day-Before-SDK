#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Explosion_Molotov

#include "Basic.hpp"

#include "Explosion_Molotov_classes.hpp"
#include "Explosion_Molotov_parameters.hpp"


namespace SDK
{

// Function Explosion_Molotov.Explosion_Molotov_C.ActivateMolotovAfterWall
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AExplosion_Molotov_C::ActivateMolotovAfterWall()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Explosion_Molotov_C", "ActivateMolotovAfterWall");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Explosion_Molotov.Explosion_Molotov_C.AddDecalEvent
// (BlueprintCallable, BlueprintEvent)

void AExplosion_Molotov_C::AddDecalEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Explosion_Molotov_C", "AddDecalEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Explosion_Molotov.Explosion_Molotov_C.BndEvt__Explosion_Molotov_Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AExplosion_Molotov_C::BndEvt__Explosion_Molotov_Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Explosion_Molotov_C", "BndEvt__Explosion_Molotov_Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	Params::Explosion_Molotov_C_BndEvt__Explosion_Molotov_Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Explosion_Molotov.Explosion_Molotov_C.BndEvt__Explosion_Molotov_Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AExplosion_Molotov_C::BndEvt__Explosion_Molotov_Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Explosion_Molotov_C", "BndEvt__Explosion_Molotov_Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	Params::Explosion_Molotov_C_BndEvt__Explosion_Molotov_Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Explosion_Molotov.Explosion_Molotov_C.CheckSurface
// (BlueprintCallable, BlueprintEvent)

void AExplosion_Molotov_C::CheckSurface()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Explosion_Molotov_C", "CheckSurface");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Explosion_Molotov.Explosion_Molotov_C.CreateDecal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AExplosion_Molotov_C::CreateDecal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Explosion_Molotov_C", "CreateDecal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Explosion_Molotov.Explosion_Molotov_C.DecalMolotov
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Radius                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AExplosion_Molotov_C::DecalMolotov(double Radius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Explosion_Molotov_C", "DecalMolotov");

	Params::Explosion_Molotov_C_DecalMolotov Parms{};

	Parms.Radius = Radius;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Explosion_Molotov.Explosion_Molotov_C.DecalMolotovPerSecond
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FHitResult>               Objects                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AExplosion_Molotov_C::DecalMolotovPerSecond(const TArray<struct FHitResult>& Objects)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Explosion_Molotov_C", "DecalMolotovPerSecond");

	Params::Explosion_Molotov_C_DecalMolotovPerSecond Parms{};

	Parms.Objects = std::move(Objects);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Explosion_Molotov.Explosion_Molotov_C.EventEndMolotovOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvivalPlayer_C*                Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                                  Param_Damage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Origin                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Radius                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Param_TimeDamage                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AExplosion_Molotov_C::EventEndMolotovOverlap(class ASurvivalPlayer_C* Player, double Param_Damage, const struct FVector& Origin, double Radius, double Param_TimeDamage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Explosion_Molotov_C", "EventEndMolotovOverlap");

	Params::Explosion_Molotov_C_EventEndMolotovOverlap Parms{};

	Parms.Player = Player;
	Parms.Param_Damage = Param_Damage;
	Parms.Origin = std::move(Origin);
	Parms.Radius = Radius;
	Parms.Param_TimeDamage = Param_TimeDamage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Explosion_Molotov.Explosion_Molotov_C.ExecuteUbergraph_Explosion_Molotov
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AExplosion_Molotov_C::ExecuteUbergraph_Explosion_Molotov(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Explosion_Molotov_C", "ExecuteUbergraph_Explosion_Molotov");

	Params::Explosion_Molotov_C_ExecuteUbergraph_Explosion_Molotov Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Explosion_Molotov.Explosion_Molotov_C.MolotovDamagePerSecondEnd
// (BlueprintCallable, BlueprintEvent)

void AExplosion_Molotov_C::MolotovDamagePerSecondEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Explosion_Molotov_C", "MolotovDamagePerSecondEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Explosion_Molotov.Explosion_Molotov_C.RadialDamageMolotov
// (BlueprintCallable, BlueprintEvent)

void AExplosion_Molotov_C::RadialDamageMolotov()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Explosion_Molotov_C", "RadialDamageMolotov");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Explosion_Molotov.Explosion_Molotov_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AExplosion_Molotov_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Explosion_Molotov_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Explosion_Molotov.Explosion_Molotov_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AExplosion_Molotov_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Explosion_Molotov_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Explosion_Molotov.Explosion_Molotov_C.ScaleDecal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Param_Decal                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AExplosion_Molotov_C::ScaleDecal(class AActor* Param_Decal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Explosion_Molotov_C", "ScaleDecal");

	Params::Explosion_Molotov_C_ScaleDecal Parms{};

	Parms.Param_Decal = Param_Decal;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Explosion_Molotov.Explosion_Molotov_C.SpawnDecalMolotov
// (BlueprintCallable, BlueprintEvent)

void AExplosion_Molotov_C::SpawnDecalMolotov()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Explosion_Molotov_C", "SpawnDecalMolotov");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Explosion_Molotov.Explosion_Molotov_C.StartMolotov
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    HasSurface                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Normal_decal                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AExplosion_Molotov_C::StartMolotov(bool HasSurface, const struct FVector& Normal_decal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Explosion_Molotov_C", "StartMolotov");

	Params::Explosion_Molotov_C_StartMolotov Parms{};

	Parms.HasSurface = HasSurface;
	Parms.Normal_decal = std::move(Normal_decal);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Explosion_Molotov.Explosion_Molotov_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AExplosion_Molotov_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Explosion_Molotov_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Explosion_Molotov.Explosion_Molotov_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AExplosion_Molotov_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Explosion_Molotov_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Explosion_Molotov.Explosion_Molotov_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void AExplosion_Molotov_C::Timeline_1__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Explosion_Molotov_C", "Timeline_1__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Explosion_Molotov.Explosion_Molotov_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void AExplosion_Molotov_C::Timeline_1__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Explosion_Molotov_C", "Timeline_1__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}
