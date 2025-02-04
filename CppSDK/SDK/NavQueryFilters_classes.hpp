#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NavQueryFilters

#include "Basic.hpp"

#include "NavigationSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NavQueryFilters.NavQueryFilters_C
// 0x0000 (0x0048 - 0x0048)
class UNavQueryFilters_C final : public UNavigationQueryFilter
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NavQueryFilters_C">();
	}
	static class UNavQueryFilters_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavQueryFilters_C>();
	}
};
static_assert(alignof(UNavQueryFilters_C) == 0x000008, "Wrong alignment on UNavQueryFilters_C");
static_assert(sizeof(UNavQueryFilters_C) == 0x000048, "Wrong size on UNavQueryFilters_C");

}

