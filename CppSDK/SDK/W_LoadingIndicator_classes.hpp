#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_LoadingIndicator

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_LoadingIndicator.W_LoadingIndicator_C
// 0x0000 (0x0280 - 0x0280)
class UW_LoadingIndicator_C final : public UUserWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_LoadingIndicator_C">();
	}
	static class UW_LoadingIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_LoadingIndicator_C>();
	}
};
static_assert(alignof(UW_LoadingIndicator_C) == 0x000008, "Wrong alignment on UW_LoadingIndicator_C");
static_assert(sizeof(UW_LoadingIndicator_C) == 0x000280, "Wrong size on UW_LoadingIndicator_C");

}
