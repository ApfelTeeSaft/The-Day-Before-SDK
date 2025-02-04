#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DecalDelaySpawner

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DecalDelaySpawner.DecalDelaySpawner_C
// 0x0008 (0x0030 - 0x0028)
class UDecalDelaySpawner_C final : public UObject
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0028(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void Call(class UMaterialInterface* DecalMaterial, class USceneComponent* AttachToComponent, const struct FVector& DecalSize, class FName AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, double Delay);
	void ExecuteUbergraph_DecalDelaySpawner(int32 EntryPoint);
	void Timer();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DecalDelaySpawner_C">();
	}
	static class UDecalDelaySpawner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDecalDelaySpawner_C>();
	}
};
static_assert(alignof(UDecalDelaySpawner_C) == 0x000008, "Wrong alignment on UDecalDelaySpawner_C");
static_assert(sizeof(UDecalDelaySpawner_C) == 0x000030, "Wrong size on UDecalDelaySpawner_C");
static_assert(offsetof(UDecalDelaySpawner_C, UberGraphFrame) == 0x000028, "Member 'UDecalDelaySpawner_C::UberGraphFrame' has a wrong offset!");

}

