#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_CoinStart

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_CoinStart.W_CoinStart_C
// 0x0058 (0x02D8 - 0x0280)
class UW_CoinStart_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ShowLogo2;                                         // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UnFade;                                            // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Show;                                              // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_28;                                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BG;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                           Timer;                                             // 0x02B8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowMovie;                                         // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C1[0x7];                                      // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           TimerLogo2;                                        // 0x02C8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowMovie2;                                        // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PressAnyKey;                                       // 0x02D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Off;                                               // 0x02D2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Close();
	void CustomEvent();
	void EShowLogo2();
	void ExecuteUbergraph_W_CoinStart(int32 EntryPoint);
	void InpActEvt_AnyKey_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void ResetPressAnyKey();
	void ShowAnim();
	void SkipMovie();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_CoinStart_C">();
	}
	static class UW_CoinStart_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_CoinStart_C>();
	}
};
static_assert(alignof(UW_CoinStart_C) == 0x000008, "Wrong alignment on UW_CoinStart_C");
static_assert(sizeof(UW_CoinStart_C) == 0x0002D8, "Wrong size on UW_CoinStart_C");
static_assert(offsetof(UW_CoinStart_C, UberGraphFrame) == 0x000280, "Member 'UW_CoinStart_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_CoinStart_C, ShowLogo2) == 0x000288, "Member 'UW_CoinStart_C::ShowLogo2' has a wrong offset!");
static_assert(offsetof(UW_CoinStart_C, UnFade) == 0x000290, "Member 'UW_CoinStart_C::UnFade' has a wrong offset!");
static_assert(offsetof(UW_CoinStart_C, Show) == 0x000298, "Member 'UW_CoinStart_C::Show' has a wrong offset!");
static_assert(offsetof(UW_CoinStart_C, Image) == 0x0002A0, "Member 'UW_CoinStart_C::Image' has a wrong offset!");
static_assert(offsetof(UW_CoinStart_C, Image_28) == 0x0002A8, "Member 'UW_CoinStart_C::Image_28' has a wrong offset!");
static_assert(offsetof(UW_CoinStart_C, Image_BG) == 0x0002B0, "Member 'UW_CoinStart_C::Image_BG' has a wrong offset!");
static_assert(offsetof(UW_CoinStart_C, Timer) == 0x0002B8, "Member 'UW_CoinStart_C::Timer' has a wrong offset!");
static_assert(offsetof(UW_CoinStart_C, ShowMovie) == 0x0002C0, "Member 'UW_CoinStart_C::ShowMovie' has a wrong offset!");
static_assert(offsetof(UW_CoinStart_C, TimerLogo2) == 0x0002C8, "Member 'UW_CoinStart_C::TimerLogo2' has a wrong offset!");
static_assert(offsetof(UW_CoinStart_C, ShowMovie2) == 0x0002D0, "Member 'UW_CoinStart_C::ShowMovie2' has a wrong offset!");
static_assert(offsetof(UW_CoinStart_C, PressAnyKey) == 0x0002D1, "Member 'UW_CoinStart_C::PressAnyKey' has a wrong offset!");
static_assert(offsetof(UW_CoinStart_C, Off) == 0x0002D2, "Member 'UW_CoinStart_C::Off' has a wrong offset!");

}

