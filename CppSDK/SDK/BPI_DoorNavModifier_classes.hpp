#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_DoorNavModifier

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_DoorNavModifier.BPI_DoorNavModifier_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_DoorNavModifier_C final : public IInterface
{
public:
	void SetCarNavModifierExtent(const struct FTransform& SocketTransform);
	void SetDoorNavModifierExtent(class ABP_Door_C* ParentDoor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_DoorNavModifier_C">();
	}
	static class IBPI_DoorNavModifier_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_DoorNavModifier_C>();
	}
};
static_assert(alignof(IBPI_DoorNavModifier_C) == 0x000008, "Wrong alignment on IBPI_DoorNavModifier_C");
static_assert(sizeof(IBPI_DoorNavModifier_C) == 0x000028, "Wrong size on IBPI_DoorNavModifier_C");

}

