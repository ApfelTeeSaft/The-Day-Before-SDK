#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: First_Launch_Tutorial

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FMODStudio_structs.hpp"
#include "LevelSequence_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass First_Launch_Tutorial.First_Launch_Tutorial_DirectorBP_C
// 0x0040 (0x0078 - 0x0038)
class UFirst_Launch_Tutorial_DirectorBP_C final : public ULevelSequenceDirector
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0038(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FRotator                               ControlRotPrev;                                    // 0x0040(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DontMove;                                          // 0x0058(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_InputHints_C*                      InputHintWidget;                                   // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          bStartListenMouseInput;                            // 0x0068(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFMODEventInstance                     Off_music_hall_hub;                                // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void Cine_Camera_Actor2_Event(class ACineCameraActor* Cine_Camera_Actor2);
	void CineCameraActor1_Event(class ACineCameraActor* CineCameraActor1);
	void CineCameraActor1_Event_0(class ACineCameraActor* CineCameraActor1);
	void ExecuteUbergraph_First_Launch_Tutorial_DirectorBP(int32 EntryPoint);
	void Flarka_AddToViewport();
	void Flarka_End();
	void Flarka_Start();
	void HideHintWidget();
	void Logo_HideFntastic();
	void Logo_HideMyTona();
	void Logo_ShowFntastic();
	void Logo_ShowMyTona();
	void SequenceEvent();
	void SequenceEvent_0();
	void SequenceEvent_1();
	void SequenceEvent_2();
	void SequenceEvent_3();
	void SequenceEvent_4();
	void SequenceEvent_5();
	void SequenceEvent_6();
	void SequenceEvent_7();
	void SequenceEvent__ENTRYPOINTFirst_Launch_Tutorial_DirectorBP(class ACineCameraActor* CineCameraActor1);
	void SequenceEvent__ENTRYPOINTFirst_Launch_Tutorial_DirectorBP_0(class ACineCameraActor* Cine_Camera_Actor2);
	void SequenceEvent__ENTRYPOINTFirst_Launch_Tutorial_DirectorBP_1();
	void SequenceEvent__ENTRYPOINTFirst_Launch_Tutorial_DirectorBP_10();
	void SequenceEvent__ENTRYPOINTFirst_Launch_Tutorial_DirectorBP_11();
	void SequenceEvent__ENTRYPOINTFirst_Launch_Tutorial_DirectorBP_12();
	void SequenceEvent__ENTRYPOINTFirst_Launch_Tutorial_DirectorBP_13();
	void SequenceEvent__ENTRYPOINTFirst_Launch_Tutorial_DirectorBP_14();
	void SequenceEvent__ENTRYPOINTFirst_Launch_Tutorial_DirectorBP_15();
	void SequenceEvent__ENTRYPOINTFirst_Launch_Tutorial_DirectorBP_16();
	void SequenceEvent__ENTRYPOINTFirst_Launch_Tutorial_DirectorBP_17();
	void SequenceEvent__ENTRYPOINTFirst_Launch_Tutorial_DirectorBP_18();
	void SequenceEvent__ENTRYPOINTFirst_Launch_Tutorial_DirectorBP_19();
	void SequenceEvent__ENTRYPOINTFirst_Launch_Tutorial_DirectorBP_2();
	void SequenceEvent__ENTRYPOINTFirst_Launch_Tutorial_DirectorBP_20();
	void SequenceEvent__ENTRYPOINTFirst_Launch_Tutorial_DirectorBP_21();
	void SequenceEvent__ENTRYPOINTFirst_Launch_Tutorial_DirectorBP_22();
	void SequenceEvent__ENTRYPOINTFirst_Launch_Tutorial_DirectorBP_23();
	void SequenceEvent__ENTRYPOINTFirst_Launch_Tutorial_DirectorBP_24();
	void SequenceEvent__ENTRYPOINTFirst_Launch_Tutorial_DirectorBP_25(class ACineCameraActor* CineCameraActor1);
	void SequenceEvent__ENTRYPOINTFirst_Launch_Tutorial_DirectorBP_26();
	void SequenceEvent__ENTRYPOINTFirst_Launch_Tutorial_DirectorBP_27();
	void SequenceEvent__ENTRYPOINTFirst_Launch_Tutorial_DirectorBP_28();
	void SequenceEvent__ENTRYPOINTFirst_Launch_Tutorial_DirectorBP_29();
	void SequenceEvent__ENTRYPOINTFirst_Launch_Tutorial_DirectorBP_3();
	void SequenceEvent__ENTRYPOINTFirst_Launch_Tutorial_DirectorBP_30();
	void SequenceEvent__ENTRYPOINTFirst_Launch_Tutorial_DirectorBP_31();
	void SequenceEvent__ENTRYPOINTFirst_Launch_Tutorial_DirectorBP_4();
	void SequenceEvent__ENTRYPOINTFirst_Launch_Tutorial_DirectorBP_5();
	void SequenceEvent__ENTRYPOINTFirst_Launch_Tutorial_DirectorBP_6();
	void SequenceEvent__ENTRYPOINTFirst_Launch_Tutorial_DirectorBP_7();
	void SequenceEvent__ENTRYPOINTFirst_Launch_Tutorial_DirectorBP_8();
	void SequenceEvent__ENTRYPOINTFirst_Launch_Tutorial_DirectorBP_9();
	void SequenceEvent_HideInputHint();
	void SequenceEvent_IntroSubtitles_1();
	void SequenceEvent_IntroSubtitles_2();
	void SequenceEvent_IntroSubtitles_3();
	void SequenceEvent_IntroSubtitles_4();
	void SequenceEvent_ShowInputHint();
	void SequenceEvent_Subtitle1();
	void SequenceEvent_Subtitle2();
	void SequenceEvent_Subtitle3();
	void SequenceEvent_Subtitle4();
	void SequenceEvent_Subtitle5();
	void SequenceEvent_SubtitleHide();
	void ShowGeneralSubtitle(const class FText& Text);
	void ShowMedicSubtitlePhrase(class FName RowName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"First_Launch_Tutorial_DirectorBP_C">();
	}
	static class UFirst_Launch_Tutorial_DirectorBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFirst_Launch_Tutorial_DirectorBP_C>();
	}
};
static_assert(alignof(UFirst_Launch_Tutorial_DirectorBP_C) == 0x000008, "Wrong alignment on UFirst_Launch_Tutorial_DirectorBP_C");
static_assert(sizeof(UFirst_Launch_Tutorial_DirectorBP_C) == 0x000078, "Wrong size on UFirst_Launch_Tutorial_DirectorBP_C");
static_assert(offsetof(UFirst_Launch_Tutorial_DirectorBP_C, UberGraphFrame) == 0x000038, "Member 'UFirst_Launch_Tutorial_DirectorBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFirst_Launch_Tutorial_DirectorBP_C, ControlRotPrev) == 0x000040, "Member 'UFirst_Launch_Tutorial_DirectorBP_C::ControlRotPrev' has a wrong offset!");
static_assert(offsetof(UFirst_Launch_Tutorial_DirectorBP_C, DontMove) == 0x000058, "Member 'UFirst_Launch_Tutorial_DirectorBP_C::DontMove' has a wrong offset!");
static_assert(offsetof(UFirst_Launch_Tutorial_DirectorBP_C, InputHintWidget) == 0x000060, "Member 'UFirst_Launch_Tutorial_DirectorBP_C::InputHintWidget' has a wrong offset!");
static_assert(offsetof(UFirst_Launch_Tutorial_DirectorBP_C, bStartListenMouseInput) == 0x000068, "Member 'UFirst_Launch_Tutorial_DirectorBP_C::bStartListenMouseInput' has a wrong offset!");
static_assert(offsetof(UFirst_Launch_Tutorial_DirectorBP_C, Off_music_hall_hub) == 0x000070, "Member 'UFirst_Launch_Tutorial_DirectorBP_C::Off_music_hall_hub' has a wrong offset!");

}
