#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_HitPredict

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_HitPredict.W_HitPredict_C
// 0x0008 (0x0288 - 0x0280)
class UW_HitPredict_C final : public UUserWidget
{
public:
	class UImage*                                 Image_35;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_HitPredict_C">();
	}
	static class UW_HitPredict_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_HitPredict_C>();
	}
};
static_assert(alignof(UW_HitPredict_C) == 0x000008, "Wrong alignment on UW_HitPredict_C");
static_assert(sizeof(UW_HitPredict_C) == 0x000288, "Wrong size on UW_HitPredict_C");
static_assert(offsetof(UW_HitPredict_C, Image_35) == 0x000280, "Member 'UW_HitPredict_C::Image_35' has a wrong offset!");

}

