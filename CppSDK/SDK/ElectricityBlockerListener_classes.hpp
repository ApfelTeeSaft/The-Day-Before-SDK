#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ElectricityBlockerListener

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ElectricityBlockerListener.ElectricityBlockerListener_C
// 0x0000 (0x0028 - 0x0028)
class IElectricityBlockerListener_C final : public IInterface
{
public:
	void AddBlocker(class AElectricityBlocker_C* Blocker);
	void OnBreakBlocker(class AElectricityBlocker_C* Blocker);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ElectricityBlockerListener_C">();
	}
	static class IElectricityBlockerListener_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IElectricityBlockerListener_C>();
	}
};
static_assert(alignof(IElectricityBlockerListener_C) == 0x000008, "Wrong alignment on IElectricityBlockerListener_C");
static_assert(sizeof(IElectricityBlockerListener_C) == 0x000028, "Wrong size on IElectricityBlockerListener_C");

}
