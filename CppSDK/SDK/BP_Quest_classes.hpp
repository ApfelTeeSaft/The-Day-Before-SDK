#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Quest

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Quest.BP_Quest_C
// 0x0030 (0x02C0 - 0x0290)
class ABP_Quest_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                    billboard;                                         // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_ObjCollection_C*                    RootObjectiveCollection;                           // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnActivated;                                       // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          ActivationSound;                                   // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ActivateQuest();
	void ConstructRootObjectiveCollection(class UBP_ObjCollection_C** Param_RootObjectiveCollection);
	void ExecuteUbergraph_BP_Quest(int32 EntryPoint);
	void OnActivated__DelegateSignature(class UBP_Objective_C* Param_RootObjectiveCollection);
	void PopulateObjectives(class UBP_ObjCollection_C* RootObjCollection);

	void GetRootObjectiveCollection(class UBP_ObjCollection_C** RootObjCollection) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Quest_C">();
	}
	static class ABP_Quest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Quest_C>();
	}
};
static_assert(alignof(ABP_Quest_C) == 0x000008, "Wrong alignment on ABP_Quest_C");
static_assert(sizeof(ABP_Quest_C) == 0x0002C0, "Wrong size on ABP_Quest_C");
static_assert(offsetof(ABP_Quest_C, UberGraphFrame) == 0x000290, "Member 'ABP_Quest_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Quest_C, billboard) == 0x000298, "Member 'ABP_Quest_C::billboard' has a wrong offset!");
static_assert(offsetof(ABP_Quest_C, RootObjectiveCollection) == 0x0002A0, "Member 'ABP_Quest_C::RootObjectiveCollection' has a wrong offset!");
static_assert(offsetof(ABP_Quest_C, OnActivated) == 0x0002A8, "Member 'ABP_Quest_C::OnActivated' has a wrong offset!");
static_assert(offsetof(ABP_Quest_C, ActivationSound) == 0x0002B8, "Member 'ABP_Quest_C::ActivationSound' has a wrong offset!");

}

