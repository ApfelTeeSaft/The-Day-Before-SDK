#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Task_ClearSensed

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Task_ClearSensed.Task_ClearSensed_C
// 0x0008 (0x00B0 - 0x00A8)
class UTask_ClearSensed_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Task_ClearSensed(int32 EntryPoint);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Task_ClearSensed_C">();
	}
	static class UTask_ClearSensed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTask_ClearSensed_C>();
	}
};
static_assert(alignof(UTask_ClearSensed_C) == 0x000008, "Wrong alignment on UTask_ClearSensed_C");
static_assert(sizeof(UTask_ClearSensed_C) == 0x0000B0, "Wrong size on UTask_ClearSensed_C");
static_assert(offsetof(UTask_ClearSensed_C, UberGraphFrame) == 0x0000A8, "Member 'UTask_ClearSensed_C::UberGraphFrame' has a wrong offset!");

}

