#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_CancelHint

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_CancelHint.W_CancelHint_C
// 0x0008 (0x0288 - 0x0280)
class UW_CancelHint_C final : public UUserWidget
{
public:
	class UImage*                                 Image_54;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_CancelHint_C">();
	}
	static class UW_CancelHint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_CancelHint_C>();
	}
};
static_assert(alignof(UW_CancelHint_C) == 0x000008, "Wrong alignment on UW_CancelHint_C");
static_assert(sizeof(UW_CancelHint_C) == 0x000288, "Wrong size on UW_CancelHint_C");
static_assert(offsetof(UW_CancelHint_C, Image_54) == 0x000280, "Member 'UW_CancelHint_C::Image_54' has a wrong offset!");

}

