#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CampStub

#include "Basic.hpp"

#include "E_InteractType_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_Camp_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CampStub.BP_CampStub_C
// 0x0010 (0x0378 - 0x0368)
class ABP_CampStub_C final : public ABP_Camp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_CampStub_C;                      // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                   Collision;                                         // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_CampStub(int32 EntryPoint);
	void OnFocused(class ASurvivalPlayer_C* Player, E_InteractType* InteractType, double* LateTime);
	void BuildingStateUpd();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CampStub_C">();
	}
	static class ABP_CampStub_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CampStub_C>();
	}
};
static_assert(alignof(ABP_CampStub_C) == 0x000008, "Wrong alignment on ABP_CampStub_C");
static_assert(sizeof(ABP_CampStub_C) == 0x000378, "Wrong size on ABP_CampStub_C");
static_assert(offsetof(ABP_CampStub_C, UberGraphFrame_BP_CampStub_C) == 0x000368, "Member 'ABP_CampStub_C::UberGraphFrame_BP_CampStub_C' has a wrong offset!");
static_assert(offsetof(ABP_CampStub_C, Collision) == 0x000370, "Member 'ABP_CampStub_C::Collision' has a wrong offset!");

}
