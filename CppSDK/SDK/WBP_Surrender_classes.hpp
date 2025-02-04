#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Surrender

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "InputCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Surrender.WBP_Surrender_C
// 0x00F0 (0x0370 - 0x0280)
class UWBP_Surrender_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       PulseTimer;                                        // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Surrender_Pulse;                                   // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Revive_Show;                                       // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Surrender_Show;                                    // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_BleedngProgress;                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ReviveProgress;                              // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Interact_C*                          SurrenderInteract;                                 // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_KillerName;                              // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_WaitingLabel;                            // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_WaitingTime;                             // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_Revive;                                // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_Surrender;                             // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FKey                                   SurrenderKey;                                      // 0x02F0(0x0018)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class ASurvivalPlayer_C*                      Player;                                            // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnProgressFilled;                                  // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                        Knockdown_Time;                                    // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaTime;                                         // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BleedingProgressValue;                             // 0x032C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           BleedingProgressTimer;                             // 0x0330(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        SurrenderProcessValue;                             // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           SurrenderProcessTimer;                             // 0x0340(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        SurrenderTime;                                     // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ReviveProgressValue;                               // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_354[0x4];                                      // 0x0354(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           ReviveProgressTimer;                               // 0x0358(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        Revive_Time;                                       // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Showed;                                            // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)

public:
	void BleedingFill();
	void Construct();
	void ExecuteUbergraph_WBP_Surrender(int32 EntryPoint);
	void Finished_A22D1DF942BFA1F7870FA399CF912230();
	void Finished_A6A719A24B4B95B1785659B52E492220();
	void Finished_CC1DE79E4A5CF25A6B69D6BBCC75303C();
	void Finished_F2243F2B4A7CE7DF9BB3EF8B9C843A43();
	void Hide();
	void OnProgressFilled__DelegateSignature();
	void ReviveFill();
	void ReviveStart(const class FString& PlayerName);
	void ReviveStop();
	void SetBleedingProgress(float Value);
	void SetReviveProgress(float Value);
	void Show(const class FString& KillerName);
	void SurrenderButtonPressed();
	void SurrenderButtonReleased();
	void SurrenderFill();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Surrender_C">();
	}
	static class UWBP_Surrender_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Surrender_C>();
	}
};
static_assert(alignof(UWBP_Surrender_C) == 0x000008, "Wrong alignment on UWBP_Surrender_C");
static_assert(sizeof(UWBP_Surrender_C) == 0x000370, "Wrong size on UWBP_Surrender_C");
static_assert(offsetof(UWBP_Surrender_C, UberGraphFrame) == 0x000280, "Member 'UWBP_Surrender_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Surrender_C, PulseTimer) == 0x000288, "Member 'UWBP_Surrender_C::PulseTimer' has a wrong offset!");
static_assert(offsetof(UWBP_Surrender_C, Surrender_Pulse) == 0x000290, "Member 'UWBP_Surrender_C::Surrender_Pulse' has a wrong offset!");
static_assert(offsetof(UWBP_Surrender_C, Revive_Show) == 0x000298, "Member 'UWBP_Surrender_C::Revive_Show' has a wrong offset!");
static_assert(offsetof(UWBP_Surrender_C, Surrender_Show) == 0x0002A0, "Member 'UWBP_Surrender_C::Surrender_Show' has a wrong offset!");
static_assert(offsetof(UWBP_Surrender_C, Image_BleedngProgress) == 0x0002A8, "Member 'UWBP_Surrender_C::Image_BleedngProgress' has a wrong offset!");
static_assert(offsetof(UWBP_Surrender_C, Image_ReviveProgress) == 0x0002B0, "Member 'UWBP_Surrender_C::Image_ReviveProgress' has a wrong offset!");
static_assert(offsetof(UWBP_Surrender_C, SurrenderInteract) == 0x0002B8, "Member 'UWBP_Surrender_C::SurrenderInteract' has a wrong offset!");
static_assert(offsetof(UWBP_Surrender_C, TextBlock) == 0x0002C0, "Member 'UWBP_Surrender_C::TextBlock' has a wrong offset!");
static_assert(offsetof(UWBP_Surrender_C, TextBlock_KillerName) == 0x0002C8, "Member 'UWBP_Surrender_C::TextBlock_KillerName' has a wrong offset!");
static_assert(offsetof(UWBP_Surrender_C, TextBlock_WaitingLabel) == 0x0002D0, "Member 'UWBP_Surrender_C::TextBlock_WaitingLabel' has a wrong offset!");
static_assert(offsetof(UWBP_Surrender_C, TextBlock_WaitingTime) == 0x0002D8, "Member 'UWBP_Surrender_C::TextBlock_WaitingTime' has a wrong offset!");
static_assert(offsetof(UWBP_Surrender_C, VerticalBox_Revive) == 0x0002E0, "Member 'UWBP_Surrender_C::VerticalBox_Revive' has a wrong offset!");
static_assert(offsetof(UWBP_Surrender_C, VerticalBox_Surrender) == 0x0002E8, "Member 'UWBP_Surrender_C::VerticalBox_Surrender' has a wrong offset!");
static_assert(offsetof(UWBP_Surrender_C, SurrenderKey) == 0x0002F0, "Member 'UWBP_Surrender_C::SurrenderKey' has a wrong offset!");
static_assert(offsetof(UWBP_Surrender_C, Player) == 0x000308, "Member 'UWBP_Surrender_C::Player' has a wrong offset!");
static_assert(offsetof(UWBP_Surrender_C, OnProgressFilled) == 0x000310, "Member 'UWBP_Surrender_C::OnProgressFilled' has a wrong offset!");
static_assert(offsetof(UWBP_Surrender_C, Knockdown_Time) == 0x000320, "Member 'UWBP_Surrender_C::Knockdown_Time' has a wrong offset!");
static_assert(offsetof(UWBP_Surrender_C, DeltaTime) == 0x000328, "Member 'UWBP_Surrender_C::DeltaTime' has a wrong offset!");
static_assert(offsetof(UWBP_Surrender_C, BleedingProgressValue) == 0x00032C, "Member 'UWBP_Surrender_C::BleedingProgressValue' has a wrong offset!");
static_assert(offsetof(UWBP_Surrender_C, BleedingProgressTimer) == 0x000330, "Member 'UWBP_Surrender_C::BleedingProgressTimer' has a wrong offset!");
static_assert(offsetof(UWBP_Surrender_C, SurrenderProcessValue) == 0x000338, "Member 'UWBP_Surrender_C::SurrenderProcessValue' has a wrong offset!");
static_assert(offsetof(UWBP_Surrender_C, SurrenderProcessTimer) == 0x000340, "Member 'UWBP_Surrender_C::SurrenderProcessTimer' has a wrong offset!");
static_assert(offsetof(UWBP_Surrender_C, SurrenderTime) == 0x000348, "Member 'UWBP_Surrender_C::SurrenderTime' has a wrong offset!");
static_assert(offsetof(UWBP_Surrender_C, ReviveProgressValue) == 0x000350, "Member 'UWBP_Surrender_C::ReviveProgressValue' has a wrong offset!");
static_assert(offsetof(UWBP_Surrender_C, ReviveProgressTimer) == 0x000358, "Member 'UWBP_Surrender_C::ReviveProgressTimer' has a wrong offset!");
static_assert(offsetof(UWBP_Surrender_C, Revive_Time) == 0x000360, "Member 'UWBP_Surrender_C::Revive_Time' has a wrong offset!");
static_assert(offsetof(UWBP_Surrender_C, Showed) == 0x000368, "Member 'UWBP_Surrender_C::Showed' has a wrong offset!");

}

