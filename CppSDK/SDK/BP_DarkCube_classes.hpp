#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DarkCube

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DarkCube.BP_DarkCube_C
// 0x0020 (0x02B0 - 0x0290)
class ABP_DarkCube_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Cube1;                                             // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube;                                              // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          CostilActTwo;                                      // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_DarkCube(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DarkCube_C">();
	}
	static class ABP_DarkCube_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DarkCube_C>();
	}
};
static_assert(alignof(ABP_DarkCube_C) == 0x000008, "Wrong alignment on ABP_DarkCube_C");
static_assert(sizeof(ABP_DarkCube_C) == 0x0002B0, "Wrong size on ABP_DarkCube_C");
static_assert(offsetof(ABP_DarkCube_C, UberGraphFrame) == 0x000290, "Member 'ABP_DarkCube_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_DarkCube_C, Cube1) == 0x000298, "Member 'ABP_DarkCube_C::Cube1' has a wrong offset!");
static_assert(offsetof(ABP_DarkCube_C, Cube) == 0x0002A0, "Member 'ABP_DarkCube_C::Cube' has a wrong offset!");
static_assert(offsetof(ABP_DarkCube_C, CostilActTwo) == 0x0002A8, "Member 'ABP_DarkCube_C::CostilActTwo' has a wrong offset!");

}
