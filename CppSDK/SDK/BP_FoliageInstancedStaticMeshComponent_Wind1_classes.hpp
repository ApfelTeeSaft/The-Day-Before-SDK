#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FoliageInstancedStaticMeshComponent_Wind1

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Foliage_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FoliageInstancedStaticMeshComponent_Wind1.BP_FoliageInstancedStaticMeshComponent_Wind1_C
// 0x0010 (0x0940 - 0x0930)
class UBP_FoliageInstancedStaticMeshComponent_Wind1_C final : public UFoliageInstancedStaticMeshComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0930(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_FoliageInstancedStaticMeshComponent_Wind1(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FoliageInstancedStaticMeshComponent_Wind1_C">();
	}
	static class UBP_FoliageInstancedStaticMeshComponent_Wind1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FoliageInstancedStaticMeshComponent_Wind1_C>();
	}
};
static_assert(alignof(UBP_FoliageInstancedStaticMeshComponent_Wind1_C) == 0x000010, "Wrong alignment on UBP_FoliageInstancedStaticMeshComponent_Wind1_C");
static_assert(sizeof(UBP_FoliageInstancedStaticMeshComponent_Wind1_C) == 0x000940, "Wrong size on UBP_FoliageInstancedStaticMeshComponent_Wind1_C");
static_assert(offsetof(UBP_FoliageInstancedStaticMeshComponent_Wind1_C, UberGraphFrame) == 0x000930, "Member 'UBP_FoliageInstancedStaticMeshComponent_Wind1_C::UberGraphFrame' has a wrong offset!");

}
