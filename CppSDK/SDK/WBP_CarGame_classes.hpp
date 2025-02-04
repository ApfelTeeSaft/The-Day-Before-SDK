#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CarGame

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CarGame.WBP_CarGame_C
// 0x00E0 (0x0360 - 0x0280)
class UWBP_CarGame_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       SingleFail_Anim;                                   // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       EndGame_Anim;                                      // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Fade_Info_Anim;                                    // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Fade_Game_Anim;                                    // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_LifeBar;                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Background;                                  // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Border;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Button;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_GameStatus;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_RunnerBG;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Runner_Range;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                                Slider_Runner;                                     // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Info;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LifeIndicator_C*                   WBP_LifeIndicator_First;                           // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LifeIndicator_C*                   WBP_LifeIndicator_Second;                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LifeIndicator_C*                   WBP_LifeIndicator_Third;                           // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        Range;                                             // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RangePos;                                          // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Time;                                              // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           SliderTimer;                                       // 0x0320(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              WorkingRange;                                      // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HealthCounter;                                     // 0x0338(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33C[0x4];                                      // 0x033C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        TimeToStart;                                       // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentTime;                                       // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           BeginTimer;                                        // 0x0350(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSuccessed;                                       // 0x0358(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BeginTimeisOver();
	void BeginTimerTick();
	void CheckRange(double Value, bool* Result);
	void ExecuteUbergraph_WBP_CarGame(int32 EntryPoint);
	void Failed();
	void GenerateRangePosition();
	void Hide();
	void PreConstruct(bool IsDesignTime);
	void Reset();
	void SequenceEvent__ENTRYPOINTWBP_CarGame();
	void SequenceEvent__ENTRYPOINTWBP_CarGame_0();
	void SequenceEvent__ENTRYPOINTWBP_CarGame_1();
	void SetStatus();
	void Show();
	void SliderTimerTick();
	void StartSliderTimer();
	void Successed();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateInfo();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CarGame_C">();
	}
	static class UWBP_CarGame_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CarGame_C>();
	}
};
static_assert(alignof(UWBP_CarGame_C) == 0x000008, "Wrong alignment on UWBP_CarGame_C");
static_assert(sizeof(UWBP_CarGame_C) == 0x000360, "Wrong size on UWBP_CarGame_C");
static_assert(offsetof(UWBP_CarGame_C, UberGraphFrame) == 0x000280, "Member 'UWBP_CarGame_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CarGame_C, SingleFail_Anim) == 0x000288, "Member 'UWBP_CarGame_C::SingleFail_Anim' has a wrong offset!");
static_assert(offsetof(UWBP_CarGame_C, EndGame_Anim) == 0x000290, "Member 'UWBP_CarGame_C::EndGame_Anim' has a wrong offset!");
static_assert(offsetof(UWBP_CarGame_C, Fade_Info_Anim) == 0x000298, "Member 'UWBP_CarGame_C::Fade_Info_Anim' has a wrong offset!");
static_assert(offsetof(UWBP_CarGame_C, Fade_Game_Anim) == 0x0002A0, "Member 'UWBP_CarGame_C::Fade_Game_Anim' has a wrong offset!");
static_assert(offsetof(UWBP_CarGame_C, HorizontalBox_LifeBar) == 0x0002A8, "Member 'UWBP_CarGame_C::HorizontalBox_LifeBar' has a wrong offset!");
static_assert(offsetof(UWBP_CarGame_C, Image_Background) == 0x0002B0, "Member 'UWBP_CarGame_C::Image_Background' has a wrong offset!");
static_assert(offsetof(UWBP_CarGame_C, Image_Border) == 0x0002B8, "Member 'UWBP_CarGame_C::Image_Border' has a wrong offset!");
static_assert(offsetof(UWBP_CarGame_C, Image_Button) == 0x0002C0, "Member 'UWBP_CarGame_C::Image_Button' has a wrong offset!");
static_assert(offsetof(UWBP_CarGame_C, Image_GameStatus) == 0x0002C8, "Member 'UWBP_CarGame_C::Image_GameStatus' has a wrong offset!");
static_assert(offsetof(UWBP_CarGame_C, Image_RunnerBG) == 0x0002D0, "Member 'UWBP_CarGame_C::Image_RunnerBG' has a wrong offset!");
static_assert(offsetof(UWBP_CarGame_C, Runner_Range) == 0x0002D8, "Member 'UWBP_CarGame_C::Runner_Range' has a wrong offset!");
static_assert(offsetof(UWBP_CarGame_C, Slider_Runner) == 0x0002E0, "Member 'UWBP_CarGame_C::Slider_Runner' has a wrong offset!");
static_assert(offsetof(UWBP_CarGame_C, Text_Info) == 0x0002E8, "Member 'UWBP_CarGame_C::Text_Info' has a wrong offset!");
static_assert(offsetof(UWBP_CarGame_C, WBP_LifeIndicator_First) == 0x0002F0, "Member 'UWBP_CarGame_C::WBP_LifeIndicator_First' has a wrong offset!");
static_assert(offsetof(UWBP_CarGame_C, WBP_LifeIndicator_Second) == 0x0002F8, "Member 'UWBP_CarGame_C::WBP_LifeIndicator_Second' has a wrong offset!");
static_assert(offsetof(UWBP_CarGame_C, WBP_LifeIndicator_Third) == 0x000300, "Member 'UWBP_CarGame_C::WBP_LifeIndicator_Third' has a wrong offset!");
static_assert(offsetof(UWBP_CarGame_C, Range) == 0x000308, "Member 'UWBP_CarGame_C::Range' has a wrong offset!");
static_assert(offsetof(UWBP_CarGame_C, RangePos) == 0x000310, "Member 'UWBP_CarGame_C::RangePos' has a wrong offset!");
static_assert(offsetof(UWBP_CarGame_C, Time) == 0x000318, "Member 'UWBP_CarGame_C::Time' has a wrong offset!");
static_assert(offsetof(UWBP_CarGame_C, SliderTimer) == 0x000320, "Member 'UWBP_CarGame_C::SliderTimer' has a wrong offset!");
static_assert(offsetof(UWBP_CarGame_C, WorkingRange) == 0x000328, "Member 'UWBP_CarGame_C::WorkingRange' has a wrong offset!");
static_assert(offsetof(UWBP_CarGame_C, HealthCounter) == 0x000338, "Member 'UWBP_CarGame_C::HealthCounter' has a wrong offset!");
static_assert(offsetof(UWBP_CarGame_C, TimeToStart) == 0x000340, "Member 'UWBP_CarGame_C::TimeToStart' has a wrong offset!");
static_assert(offsetof(UWBP_CarGame_C, CurrentTime) == 0x000348, "Member 'UWBP_CarGame_C::CurrentTime' has a wrong offset!");
static_assert(offsetof(UWBP_CarGame_C, BeginTimer) == 0x000350, "Member 'UWBP_CarGame_C::BeginTimer' has a wrong offset!");
static_assert(offsetof(UWBP_CarGame_C, IsSuccessed) == 0x000358, "Member 'UWBP_CarGame_C::IsSuccessed' has a wrong offset!");

}

