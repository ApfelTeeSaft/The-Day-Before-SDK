#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CollimatorScope

#include "Basic.hpp"

#include "BP_ScopeBase_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CollimatorScope.BP_CollimatorScope_C
// 0x0020 (0x06D8 - 0x06B8)
class ABP_CollimatorScope_C final : public ABP_ScopeBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_CollimatorScope_C;               // 0x06B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        CollimatorCenter;                                  // 0x06C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponentWithItsOwnFOV*      StaticMeshComponentWithItsOwnFOV;                  // 0x06C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        ScopeRoot;                                         // 0x06D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void Aim();
	void ExecuteUbergraph_BP_CollimatorScope(int32 EntryPoint);
	void InitializeOnEquip();
	void StopAim();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CollimatorScope_C">();
	}
	static class ABP_CollimatorScope_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CollimatorScope_C>();
	}
};
static_assert(alignof(ABP_CollimatorScope_C) == 0x000008, "Wrong alignment on ABP_CollimatorScope_C");
static_assert(sizeof(ABP_CollimatorScope_C) == 0x0006D8, "Wrong size on ABP_CollimatorScope_C");
static_assert(offsetof(ABP_CollimatorScope_C, UberGraphFrame_BP_CollimatorScope_C) == 0x0006B8, "Member 'ABP_CollimatorScope_C::UberGraphFrame_BP_CollimatorScope_C' has a wrong offset!");
static_assert(offsetof(ABP_CollimatorScope_C, CollimatorCenter) == 0x0006C0, "Member 'ABP_CollimatorScope_C::CollimatorCenter' has a wrong offset!");
static_assert(offsetof(ABP_CollimatorScope_C, StaticMeshComponentWithItsOwnFOV) == 0x0006C8, "Member 'ABP_CollimatorScope_C::StaticMeshComponentWithItsOwnFOV' has a wrong offset!");
static_assert(offsetof(ABP_CollimatorScope_C, ScopeRoot) == 0x0006D0, "Member 'ABP_CollimatorScope_C::ScopeRoot' has a wrong offset!");

}
