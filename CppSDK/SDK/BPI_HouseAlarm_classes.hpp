#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_HouseAlarm

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_HouseAlarm.BPI_HouseAlarm_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_HouseAlarm_C final : public IInterface
{
public:
	void OnEnterActor(class AActor* Actor, class AHouseBox_C* HouseBox);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_HouseAlarm_C">();
	}
	static class IBPI_HouseAlarm_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_HouseAlarm_C>();
	}
};
static_assert(alignof(IBPI_HouseAlarm_C) == 0x000008, "Wrong alignment on IBPI_HouseAlarm_C");
static_assert(sizeof(IBPI_HouseAlarm_C) == 0x000028, "Wrong size on IBPI_HouseAlarm_C");

}
