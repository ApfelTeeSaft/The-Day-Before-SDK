#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BanditController

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ParentAIDetourController_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BanditController.BanditController_C
// 0x0008 (0x06E0 - 0x06D8)
class ABanditController_C final : public AParentAIDetourController_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BanditController_C;                 // 0x06D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BanditController(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BanditController_C">();
	}
	static class ABanditController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABanditController_C>();
	}
};
static_assert(alignof(ABanditController_C) == 0x000008, "Wrong alignment on ABanditController_C");
static_assert(sizeof(ABanditController_C) == 0x0006E0, "Wrong size on ABanditController_C");
static_assert(offsetof(ABanditController_C, UberGraphFrame_BanditController_C) == 0x0006D8, "Member 'ABanditController_C::UberGraphFrame_BanditController_C' has a wrong offset!");

}
