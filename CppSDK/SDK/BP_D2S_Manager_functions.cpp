#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_D2S_Manager

#include "Basic.hpp"

#include "BP_D2S_Manager_classes.hpp"
#include "BP_D2S_Manager_parameters.hpp"


namespace SDK
{

// Function BP_D2S_Manager.BP_D2S_Manager_C.AddDecal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*                  Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_D2S_Glass_C*                  Decal                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_D2S_Manager_C::AddDecal(class USceneComponent* Mesh, class ABP_D2S_Glass_C* Decal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_D2S_Manager_C", "AddDecal");

	Params::BP_D2S_Manager_C_AddDecal Parms{};

	Parms.Mesh = Mesh;
	Parms.Decal = Decal;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_D2S_Manager.BP_D2S_Manager_C.ExecuteUbergraph_BP_D2S_Manager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_D2S_Manager_C::ExecuteUbergraph_BP_D2S_Manager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_D2S_Manager_C", "ExecuteUbergraph_BP_D2S_Manager");

	Params::BP_D2S_Manager_C_ExecuteUbergraph_BP_D2S_Manager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_D2S_Manager.BP_D2S_Manager_C.MeshDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*                  Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_D2S_Manager_C::MeshDestroyed(class USceneComponent* Mesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_D2S_Manager_C", "MeshDestroyed");

	Params::BP_D2S_Manager_C_MeshDestroyed Parms{};

	Parms.Mesh = Mesh;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_D2S_Manager.BP_D2S_Manager_C.RemoveDecal
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*                  Mesh                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class ABP_D2S_Glass_C*                  Decal                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void ABP_D2S_Manager_C::RemoveDecal(const class USceneComponent*& Mesh, const class ABP_D2S_Glass_C*& Decal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_D2S_Manager_C", "RemoveDecal");

	Params::BP_D2S_Manager_C_RemoveDecal Parms{};

	Parms.Mesh = Mesh;
	Parms.Decal = Decal;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_D2S_Manager.BP_D2S_Manager_C.TestDestroy1Mesh
// (BlueprintCallable, BlueprintEvent)

void ABP_D2S_Manager_C::TestDestroy1Mesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_D2S_Manager_C", "TestDestroy1Mesh");

	UObject::ProcessEvent(Func, nullptr);
}

}
