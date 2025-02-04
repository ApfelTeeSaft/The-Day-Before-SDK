#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ObjCollection

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_Objective_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ObjCollection.BP_ObjCollection_C
// 0x0060 (0x0110 - 0x00B0)
class UBP_ObjCollection_C final : public UBP_Objective_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ObjCollection_C;                 // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          OrderRequired;                                     // 0x00B8(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UBP_Objective_C*>                Objectives;                                        // 0x00C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             LastObjectiveActivated;                            // 0x00D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                   ObjectiveDescription;                              // 0x00E0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                         CurQuestIndex;                                     // 0x00F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FC[0x4];                                       // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UBP_Objective_C*>                SimultaneousObjects;                               // 0x0100(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ActivateObjective(class AHUD* Param_HUD);
	void AddObjective(class UBP_Objective_C* Objective);
	void CheckOnCompleted();
	void CustomEvent_0();
	void CustomEvent_1(class UBP_Objective_C* Objective);
	void ExecuteUbergraph_BP_ObjCollection(int32 EntryPoint);
	void FindNextIncompleteObjective(class UBP_Objective_C** NextObjective);
	void LastObjectiveActivated__DelegateSignature();
	void OnCompleted_Event(class UBP_Objective_C* Objective);
	void OnCompletedObjective(class UBP_Objective_C* Objective);
	void OnSimultaneousObjectiveCompleted(class UBP_Objective_C* Objective);

	void GetIsComplete(bool* Param_IsComplete) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ObjCollection_C">();
	}
	static class UBP_ObjCollection_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ObjCollection_C>();
	}
};
static_assert(alignof(UBP_ObjCollection_C) == 0x000008, "Wrong alignment on UBP_ObjCollection_C");
static_assert(sizeof(UBP_ObjCollection_C) == 0x000110, "Wrong size on UBP_ObjCollection_C");
static_assert(offsetof(UBP_ObjCollection_C, UberGraphFrame_BP_ObjCollection_C) == 0x0000B0, "Member 'UBP_ObjCollection_C::UberGraphFrame_BP_ObjCollection_C' has a wrong offset!");
static_assert(offsetof(UBP_ObjCollection_C, OrderRequired) == 0x0000B8, "Member 'UBP_ObjCollection_C::OrderRequired' has a wrong offset!");
static_assert(offsetof(UBP_ObjCollection_C, Objectives) == 0x0000C0, "Member 'UBP_ObjCollection_C::Objectives' has a wrong offset!");
static_assert(offsetof(UBP_ObjCollection_C, LastObjectiveActivated) == 0x0000D0, "Member 'UBP_ObjCollection_C::LastObjectiveActivated' has a wrong offset!");
static_assert(offsetof(UBP_ObjCollection_C, ObjectiveDescription) == 0x0000E0, "Member 'UBP_ObjCollection_C::ObjectiveDescription' has a wrong offset!");
static_assert(offsetof(UBP_ObjCollection_C, CurQuestIndex) == 0x0000F8, "Member 'UBP_ObjCollection_C::CurQuestIndex' has a wrong offset!");
static_assert(offsetof(UBP_ObjCollection_C, SimultaneousObjects) == 0x000100, "Member 'UBP_ObjCollection_C::SimultaneousObjects' has a wrong offset!");

}

