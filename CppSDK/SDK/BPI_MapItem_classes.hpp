#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_MapItem

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_MapItem.BPI_MapItem_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_MapItem_C final : public IInterface
{
public:
	void GetMapIconData(struct FVector* Location, class UTexture2D** Icon, struct FVector2D* IconSize, double* RotationYaw, class AActor** WorldActor, class FText* Param_Name, class FText* Description);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_MapItem_C">();
	}
	static class IBPI_MapItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_MapItem_C>();
	}
};
static_assert(alignof(IBPI_MapItem_C) == 0x000008, "Wrong alignment on IBPI_MapItem_C");
static_assert(sizeof(IBPI_MapItem_C) == 0x000028, "Wrong size on IBPI_MapItem_C");

}

