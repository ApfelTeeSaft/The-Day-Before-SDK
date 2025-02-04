#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_Backpack_Anims

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "CraftState_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_Backpack_Anims.BPI_Backpack_Anims_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_Backpack_Anims_C final : public IInterface
{
public:
	void BackpackSetCraftState(ECraftState State);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_Backpack_Anims_C">();
	}
	static class IBPI_Backpack_Anims_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_Backpack_Anims_C>();
	}
};
static_assert(alignof(IBPI_Backpack_Anims_C) == 0x000008, "Wrong alignment on IBPI_Backpack_Anims_C");
static_assert(sizeof(IBPI_Backpack_Anims_C) == 0x000028, "Wrong size on IBPI_Backpack_Anims_C");

}

