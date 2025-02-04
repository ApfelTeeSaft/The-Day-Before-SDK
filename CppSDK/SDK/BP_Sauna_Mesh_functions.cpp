#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Sauna_Mesh

#include "Basic.hpp"

#include "BP_Sauna_Mesh_classes.hpp"
#include "BP_Sauna_Mesh_parameters.hpp"


namespace SDK
{

// Function BP_Sauna_Mesh.BP_Sauna_Mesh_C.ExecuteUbergraph_BP_Sauna_Mesh
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Sauna_Mesh_C::ExecuteUbergraph_BP_Sauna_Mesh(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Sauna_Mesh_C", "ExecuteUbergraph_BP_Sauna_Mesh");

	Params::BP_Sauna_Mesh_C_ExecuteUbergraph_BP_Sauna_Mesh Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Sauna_Mesh.BP_Sauna_Mesh_C.Head Customization
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Sauna_Mesh_C::Head_Customization()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Sauna_Mesh_C", "Head Customization");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Sauna_Mesh.BP_Sauna_Mesh_C.mesh Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASurvivalPlayer_C*                SurvRef                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Sauna_Mesh_C::Mesh_Update(class ASurvivalPlayer_C* SurvRef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Sauna_Mesh_C", "mesh Update");

	Params::BP_Sauna_Mesh_C_Mesh_Update Parms{};

	Parms.SurvRef = SurvRef;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Sauna_Mesh.BP_Sauna_Mesh_C.MeshCheck
// (BlueprintCallable, BlueprintEvent)

void ABP_Sauna_Mesh_C::MeshCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Sauna_Mesh_C", "MeshCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Sauna_Mesh.BP_Sauna_Mesh_C.SetMaterial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_SaveStructure                 Save                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class USkeletalMeshComponent*           Outwear                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*           Param_Pants                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Sauna_Mesh_C::SetMaterial(const struct FS_SaveStructure& Save, class USkeletalMeshComponent* Outwear, class USkeletalMeshComponent* Param_Pants)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Sauna_Mesh_C", "SetMaterial");

	Params::BP_Sauna_Mesh_C_SetMaterial Parms{};

	Parms.Save = std::move(Save);
	Parms.Outwear = Outwear;
	Parms.Param_Pants = Param_Pants;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Sauna_Mesh.BP_Sauna_Mesh_C.SetMeshMaterial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*                   GetMat                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Sauna_Mesh_C::SetMeshMaterial(class UMeshComponent* GetMat, class UPrimitiveComponent* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Sauna_Mesh_C", "SetMeshMaterial");

	Params::BP_Sauna_Mesh_C_SetMeshMaterial Parms{};

	Parms.GetMat = GetMat;
	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Sauna_Mesh.BP_Sauna_Mesh_C.SetSkeletalCloth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           SMRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class USkeletalMesh>     SSMRef                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Sauna_Mesh_C::SetSkeletalCloth(class USkeletalMeshComponent* SMRef, TSoftObjectPtr<class USkeletalMesh> SSMRef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Sauna_Mesh_C", "SetSkeletalCloth");

	Params::BP_Sauna_Mesh_C_SetSkeletalCloth Parms{};

	Parms.SMRef = SMRef;
	Parms.SSMRef = SSMRef;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Sauna_Mesh.BP_Sauna_Mesh_C.Skin Tone
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*           SelfComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*           SurvComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*               ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UMaterialInterface* ABP_Sauna_Mesh_C::Skin_Tone(float Value, class USkeletalMeshComponent* SelfComp, class USkeletalMeshComponent* SurvComp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Sauna_Mesh_C", "Skin Tone");

	Params::BP_Sauna_Mesh_C_Skin_Tone Parms{};

	Parms.Value = Value;
	Parms.SelfComp = SelfComp;
	Parms.SurvComp = SurvComp;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

