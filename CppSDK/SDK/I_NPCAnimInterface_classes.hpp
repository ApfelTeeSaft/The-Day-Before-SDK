#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: I_NPCAnimInterface

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass I_NPCAnimInterface.I_NPCAnimInterface_C
// 0x0000 (0x0028 - 0x0028)
class II_NPCAnimInterface_C final : public IInterface
{
public:
	void StartDialogue(bool Start);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"I_NPCAnimInterface_C">();
	}
	static class II_NPCAnimInterface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<II_NPCAnimInterface_C>();
	}
};
static_assert(alignof(II_NPCAnimInterface_C) == 0x000008, "Wrong alignment on II_NPCAnimInterface_C");
static_assert(sizeof(II_NPCAnimInterface_C) == 0x000028, "Wrong size on II_NPCAnimInterface_C");

}

