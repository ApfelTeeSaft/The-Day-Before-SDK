#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HidePlayerPhrases

#include "Basic.hpp"

#include "AGSGraphRuntime_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass HidePlayerPhrases.HidePlayerPhrases_C
// 0x0008 (0x0038 - 0x0030)
class UHidePlayerPhrases_C final : public UAGSAction
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteAction(class APlayerController* PlayerController, class UAGSGraphNode* NodeOwner);
	void ExecuteUbergraph_HidePlayerPhrases(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HidePlayerPhrases_C">();
	}
	static class UHidePlayerPhrases_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHidePlayerPhrases_C>();
	}
};
static_assert(alignof(UHidePlayerPhrases_C) == 0x000008, "Wrong alignment on UHidePlayerPhrases_C");
static_assert(sizeof(UHidePlayerPhrases_C) == 0x000038, "Wrong size on UHidePlayerPhrases_C");
static_assert(offsetof(UHidePlayerPhrases_C, UberGraphFrame) == 0x000030, "Member 'UHidePlayerPhrases_C::UberGraphFrame' has a wrong offset!");

}

