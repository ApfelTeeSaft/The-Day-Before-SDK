#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SavePrivacyPolicy

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SavePrivacyPolicy.SavePrivacyPolicy_C
// 0x0008 (0x0030 - 0x0028)
class USavePrivacyPolicy_C final : public USaveGame
{
public:
	bool                                          bAccepted;                                         // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SavePrivacyPolicy_C">();
	}
	static class USavePrivacyPolicy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USavePrivacyPolicy_C>();
	}
};
static_assert(alignof(USavePrivacyPolicy_C) == 0x000008, "Wrong alignment on USavePrivacyPolicy_C");
static_assert(sizeof(USavePrivacyPolicy_C) == 0x000030, "Wrong size on USavePrivacyPolicy_C");
static_assert(offsetof(USavePrivacyPolicy_C, bAccepted) == 0x000028, "Member 'USavePrivacyPolicy_C::bAccepted' has a wrong offset!");

}
