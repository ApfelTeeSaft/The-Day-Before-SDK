#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DoorNavModifier

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DoorNavModifier.BP_DoorNavModifier_C
// 0x0030 (0x02C0 - 0x0290)
class ABP_DoorNavModifier_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          SecondDoorArea;                                    // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNavModifierComponent*                  NavModifier;                                       // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          FirstDoorArea;                                     // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          DoubleDoor;                                        // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B1[0x7];                                      // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Door_C*                             ParentDoor;                                        // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void DoubleDoorHandler();
	void ExecuteUbergraph_BP_DoorNavModifier(int32 EntryPoint);
	void SetCarNavModifierExtent(const struct FTransform& SocketTransform);
	void SetDoorNavModifierExtent(class ABP_Door_C* Param_ParentDoor);
	void SingleDoorHandler();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DoorNavModifier_C">();
	}
	static class ABP_DoorNavModifier_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DoorNavModifier_C>();
	}
};
static_assert(alignof(ABP_DoorNavModifier_C) == 0x000008, "Wrong alignment on ABP_DoorNavModifier_C");
static_assert(sizeof(ABP_DoorNavModifier_C) == 0x0002C0, "Wrong size on ABP_DoorNavModifier_C");
static_assert(offsetof(ABP_DoorNavModifier_C, UberGraphFrame) == 0x000290, "Member 'ABP_DoorNavModifier_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_DoorNavModifier_C, SecondDoorArea) == 0x000298, "Member 'ABP_DoorNavModifier_C::SecondDoorArea' has a wrong offset!");
static_assert(offsetof(ABP_DoorNavModifier_C, NavModifier) == 0x0002A0, "Member 'ABP_DoorNavModifier_C::NavModifier' has a wrong offset!");
static_assert(offsetof(ABP_DoorNavModifier_C, FirstDoorArea) == 0x0002A8, "Member 'ABP_DoorNavModifier_C::FirstDoorArea' has a wrong offset!");
static_assert(offsetof(ABP_DoorNavModifier_C, DoubleDoor) == 0x0002B0, "Member 'ABP_DoorNavModifier_C::DoubleDoor' has a wrong offset!");
static_assert(offsetof(ABP_DoorNavModifier_C, ParentDoor) == 0x0002B8, "Member 'ABP_DoorNavModifier_C::ParentDoor' has a wrong offset!");

}
