#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Task_SomeoneIsSee

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Task_SomeoneIsSee.Task_SomeoneIsSee_C
// 0x0020 (0x00C8 - 0x00A8)
class UTask_SomeoneIsSee_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        ActivatorRadius;                                   // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainBanditAI_C*                        bandit;                                            // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 ActorClass;                                        // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Task_SomeoneIsSee(int32 EntryPoint);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Task_SomeoneIsSee_C">();
	}
	static class UTask_SomeoneIsSee_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTask_SomeoneIsSee_C>();
	}
};
static_assert(alignof(UTask_SomeoneIsSee_C) == 0x000008, "Wrong alignment on UTask_SomeoneIsSee_C");
static_assert(sizeof(UTask_SomeoneIsSee_C) == 0x0000C8, "Wrong size on UTask_SomeoneIsSee_C");
static_assert(offsetof(UTask_SomeoneIsSee_C, UberGraphFrame) == 0x0000A8, "Member 'UTask_SomeoneIsSee_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTask_SomeoneIsSee_C, ActivatorRadius) == 0x0000B0, "Member 'UTask_SomeoneIsSee_C::ActivatorRadius' has a wrong offset!");
static_assert(offsetof(UTask_SomeoneIsSee_C, bandit) == 0x0000B8, "Member 'UTask_SomeoneIsSee_C::bandit' has a wrong offset!");
static_assert(offsetof(UTask_SomeoneIsSee_C, ActorClass) == 0x0000C0, "Member 'UTask_SomeoneIsSee_C::ActorClass' has a wrong offset!");

}
