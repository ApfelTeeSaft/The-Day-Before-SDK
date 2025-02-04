#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Intro

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Intro.W_Intro_C
// 0x0020 (0x02A0 - 0x0280)
class UW_Intro_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       IntroAnim;                                         // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_dev;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_pub;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_W_Intro(int32 EntryPoint);
	void PlayIntro();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Intro_C">();
	}
	static class UW_Intro_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Intro_C>();
	}
};
static_assert(alignof(UW_Intro_C) == 0x000008, "Wrong alignment on UW_Intro_C");
static_assert(sizeof(UW_Intro_C) == 0x0002A0, "Wrong size on UW_Intro_C");
static_assert(offsetof(UW_Intro_C, UberGraphFrame) == 0x000280, "Member 'UW_Intro_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_Intro_C, IntroAnim) == 0x000288, "Member 'UW_Intro_C::IntroAnim' has a wrong offset!");
static_assert(offsetof(UW_Intro_C, Image_dev) == 0x000290, "Member 'UW_Intro_C::Image_dev' has a wrong offset!");
static_assert(offsetof(UW_Intro_C, Image_pub) == 0x000298, "Member 'UW_Intro_C::Image_pub' has a wrong offset!");

}

