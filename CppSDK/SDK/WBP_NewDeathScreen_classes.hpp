#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_NewDeathScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WE_NewDeathScreenState_structs.hpp"
#include "E_StatEndGame_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_NewDeathScreen.WBP_NewDeathScreen_C
// 0x0248 (0x04C8 - 0x0280)
class UWBP_NewDeathScreen_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       NewShow;                                           // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShowStat;                                          // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HideRespawn;                                       // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HideWidget;                                        // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShowRespawn;                                       // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       TextWaiting;                                       // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShowWidget;                                        // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_Death_TeleportButtons;                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_Survived_TeleportButtons;                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Box_Tab;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_HintButtonNew_C*                     Button_Tab;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Main;                                  // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_ArrivingInTime;                      // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_InventoryButtons;                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_InventoryButtons_1;                  // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_ReviveInTime;                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_Surrender;                           // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Hint;                                      // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox;                                       // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_216;                                   // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         RichTextBlock_DeathReputation;                     // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         RichTextBlock_Hint;                                // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         RichTextBlock_RaidTime;                            // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         RichTextBlock_SurvivalReputation;                  // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         RichTextBlock_SurvivalTime;                        // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Death;                                     // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_DeathReputation;                           // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_RaidTime;                                  // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_SurvivalReputation;                        // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_SurvivalTime;                              // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Survived;                                  // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_HelpMe;                                       // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_HelpMeDots;                                   // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_RespawnTimeSeconds;                           // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_RespawnTimeSeconds_1;                         // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_RespawnTimeSeconds_2;                         // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_RespawnTimeSeconds_3;                         // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_RespawnTimeTitle;                             // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_RespawnTimeTitle_1;                           // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ModalWindowButton_C*                 W_BaseDialogButton_Accept;                         // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ModalWindowButton_C*                 W_BaseDialogButton_Accept_1;                       // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_HintButtonNew_C*                     W_HintButtonNew;                                   // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Interact_C*                          W_Interact;                                        // 0x03D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GameStats_C*                       WBP_GameStats;                                     // 0x03E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_DeathSurvived;                      // 0x03E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_TeleportButtons;                    // 0x03F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   TextFormatRespawn;                                 // 0x03F8(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly)
	class FName                                   SurrenderInputActionName;                          // 0x0410(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PriorityZOrder;                                    // 0x0418(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Surrender;                                         // 0x041C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41D[0x3];                                      // 0x041D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           OnSurrenderTimerHandle;                            // 0x0420(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        RespawnTime;                                       // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DaysLived;                                         // 0x0430(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_434[0x4];                                      // 0x0434(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        ButtonHoldTime__OnSurrender_;                      // 0x0438(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           OnRespawnTimerHandle;                              // 0x0440(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentSurrenderTime;                              // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentRespawnTime;                                // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnUpdateDeathScreenState;                          // 0x0458(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	EWE_NewDeathScreenState                       ScreenState;                                       // 0x0468(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Show;                                              // 0x0469(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Hide;                                              // 0x046A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46B[0x5];                                      // 0x046B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnStartRespawn;                                    // 0x0470(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bShowStatAnimEnd;                                  // 0x0480(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_481[0x7];                                      // 0x0481(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASurvPC_C*                              CachedController;                                  // 0x0488(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          FinishAnim;                                        // 0x0490(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_491[0x7];                                      // 0x0491(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnTimeToTeleport;                                  // 0x0498(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Teleported;                                        // 0x04A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A9[0x7];                                      // 0x04A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           BlackScreenTimer;                                  // 0x04B0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ASurvivalPlayer_C*                      As_Survival_Player;                                // 0x04B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        FadeTime;                                          // 0x04C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimShowStatFinished();
	void BndEvt__WBP_NewDeathScreen_Button_Tab_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature();
	void BndEvt__WBP_NewDeathScreen_W_BaseDialogButton_Accept_1_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature();
	void BndEvt__WBP_NewDeathScreen_W_BaseDialogButton_Accept_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature();
	void BndEvt__WBP_NewDeathScreen_W_HintButtonNew_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_WBP_NewDeathScreen(int32 EntryPoint);
	void Finished_89FADBEC47F94B3E5806CB82891598C7();
	void GetScreenState(EWE_NewDeathScreenState* Param_ScreenState);
	void OnActivateTeleportToHub();
	void OnActivateTeleportToHub_delayed();
	void OnActivateTeleportToWoodberry();
	void OnActivateTeleportToWoodberry_delayed();
	void OnClearTimers(TArray<struct FTimerHandle>& Timers);
	void OnCompileText(const class FText& Text, int32 Count, const class FString& Symbol, class FText* Result);
	void OnDeath();
	void OnFillSrurrendButton(double NewValue, bool Reset);
	void OnHide(double* Time);
	void OnOpenBlackScreen();
	void OnRefreshAnimations(TArray<class UWidgetAnimation*>& Animations);
	void OnRemove();
	void OnRespawn();
	void OnRespawn__Await_();
	void OnRespawnKeyDown();
	void OnRespawnTimerHandler();
	void OnShow(int32 Param_DaysLived, double Param_RespawnTime, double* Time);
	void OnStartRespawn__DelegateSignature();
	void OnSurrender();
	void OnSurrender__InputHandler_(bool NewState);
	void OnSurrender__KeyDown_();
	void OnSurrender__KeyUp_();
	void OnSurrenderTimerHandler();
	void OnTimeToTeleport__DelegateSignature();
	void OnUpdateDeathScreenState__DelegateSignature(EWE_NewDeathScreenState NewScreenState);
	void PlayTextWaitingAnimation__trigger_();
	void PlayWithAnimationWithDelay(bool HideWidget_);
	void PreConstruct(bool IsDesignTime);
	void SequenceEvent__ENTRYPOINTWBP_NewDeathScreen();
	void SequenceEvent__ENTRYPOINTWBP_NewDeathScreen_0();
	void SequenceEvent__ENTRYPOINTWBP_NewDeathScreen_1();
	void SequenceEvent__ENTRYPOINTWBP_NewDeathScreen_2();
	void SequenceEvent__ENTRYPOINTWBP_NewDeathScreen_3();
	void SequenceEvent__ENTRYPOINTWBP_NewDeathScreen_4();
	void SetScreenState(EWE_NewDeathScreenState NewScreenState);
	void ShowSurvived(const TMap<E_StatEndGame, int64>& EndGameStats, int64 MinutesRaidTime, int64 SecondsRaidTime, int32 ReceivedReputationPoints, bool WithoutFade);
	void Showw(const TMap<E_StatEndGame, int64>& EndGameStats, int64 MinutesRaidTime, int64 SecondsRaidTime, int32 ReceivedReputationPoints);
	void TextWaitingAnimation__trigger_();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_NewDeathScreen_C">();
	}
	static class UWBP_NewDeathScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_NewDeathScreen_C>();
	}
};
static_assert(alignof(UWBP_NewDeathScreen_C) == 0x000008, "Wrong alignment on UWBP_NewDeathScreen_C");
static_assert(sizeof(UWBP_NewDeathScreen_C) == 0x0004C8, "Wrong size on UWBP_NewDeathScreen_C");
static_assert(offsetof(UWBP_NewDeathScreen_C, UberGraphFrame) == 0x000280, "Member 'UWBP_NewDeathScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, NewShow) == 0x000288, "Member 'UWBP_NewDeathScreen_C::NewShow' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, ShowStat) == 0x000290, "Member 'UWBP_NewDeathScreen_C::ShowStat' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, HideRespawn) == 0x000298, "Member 'UWBP_NewDeathScreen_C::HideRespawn' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, HideWidget) == 0x0002A0, "Member 'UWBP_NewDeathScreen_C::HideWidget' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, ShowRespawn) == 0x0002A8, "Member 'UWBP_NewDeathScreen_C::ShowRespawn' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, TextWaiting) == 0x0002B0, "Member 'UWBP_NewDeathScreen_C::TextWaiting' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, ShowWidget) == 0x0002B8, "Member 'UWBP_NewDeathScreen_C::ShowWidget' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, Border_Death_TeleportButtons) == 0x0002C0, "Member 'UWBP_NewDeathScreen_C::Border_Death_TeleportButtons' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, Border_Survived_TeleportButtons) == 0x0002C8, "Member 'UWBP_NewDeathScreen_C::Border_Survived_TeleportButtons' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, Box_Tab) == 0x0002D0, "Member 'UWBP_NewDeathScreen_C::Box_Tab' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, Button_Tab) == 0x0002D8, "Member 'UWBP_NewDeathScreen_C::Button_Tab' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, CanvasPanel_Main) == 0x0002E0, "Member 'UWBP_NewDeathScreen_C::CanvasPanel_Main' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, HorizontalBox_ArrivingInTime) == 0x0002E8, "Member 'UWBP_NewDeathScreen_C::HorizontalBox_ArrivingInTime' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, HorizontalBox_InventoryButtons) == 0x0002F0, "Member 'UWBP_NewDeathScreen_C::HorizontalBox_InventoryButtons' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, HorizontalBox_InventoryButtons_1) == 0x0002F8, "Member 'UWBP_NewDeathScreen_C::HorizontalBox_InventoryButtons_1' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, HorizontalBox_ReviveInTime) == 0x000300, "Member 'UWBP_NewDeathScreen_C::HorizontalBox_ReviveInTime' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, HorizontalBox_Surrender) == 0x000308, "Member 'UWBP_NewDeathScreen_C::HorizontalBox_Surrender' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, Overlay_Hint) == 0x000310, "Member 'UWBP_NewDeathScreen_C::Overlay_Hint' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, RetainerBox) == 0x000318, "Member 'UWBP_NewDeathScreen_C::RetainerBox' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, RetainerBox_216) == 0x000320, "Member 'UWBP_NewDeathScreen_C::RetainerBox_216' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, RichTextBlock_DeathReputation) == 0x000328, "Member 'UWBP_NewDeathScreen_C::RichTextBlock_DeathReputation' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, RichTextBlock_Hint) == 0x000330, "Member 'UWBP_NewDeathScreen_C::RichTextBlock_Hint' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, RichTextBlock_RaidTime) == 0x000338, "Member 'UWBP_NewDeathScreen_C::RichTextBlock_RaidTime' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, RichTextBlock_SurvivalReputation) == 0x000340, "Member 'UWBP_NewDeathScreen_C::RichTextBlock_SurvivalReputation' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, RichTextBlock_SurvivalTime) == 0x000348, "Member 'UWBP_NewDeathScreen_C::RichTextBlock_SurvivalTime' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, SizeBox_Death) == 0x000350, "Member 'UWBP_NewDeathScreen_C::SizeBox_Death' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, SizeBox_DeathReputation) == 0x000358, "Member 'UWBP_NewDeathScreen_C::SizeBox_DeathReputation' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, SizeBox_RaidTime) == 0x000360, "Member 'UWBP_NewDeathScreen_C::SizeBox_RaidTime' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, SizeBox_SurvivalReputation) == 0x000368, "Member 'UWBP_NewDeathScreen_C::SizeBox_SurvivalReputation' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, SizeBox_SurvivalTime) == 0x000370, "Member 'UWBP_NewDeathScreen_C::SizeBox_SurvivalTime' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, SizeBox_Survived) == 0x000378, "Member 'UWBP_NewDeathScreen_C::SizeBox_Survived' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, Text_HelpMe) == 0x000380, "Member 'UWBP_NewDeathScreen_C::Text_HelpMe' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, Text_HelpMeDots) == 0x000388, "Member 'UWBP_NewDeathScreen_C::Text_HelpMeDots' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, Text_RespawnTimeSeconds) == 0x000390, "Member 'UWBP_NewDeathScreen_C::Text_RespawnTimeSeconds' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, Text_RespawnTimeSeconds_1) == 0x000398, "Member 'UWBP_NewDeathScreen_C::Text_RespawnTimeSeconds_1' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, Text_RespawnTimeSeconds_2) == 0x0003A0, "Member 'UWBP_NewDeathScreen_C::Text_RespawnTimeSeconds_2' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, Text_RespawnTimeSeconds_3) == 0x0003A8, "Member 'UWBP_NewDeathScreen_C::Text_RespawnTimeSeconds_3' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, Text_RespawnTimeTitle) == 0x0003B0, "Member 'UWBP_NewDeathScreen_C::Text_RespawnTimeTitle' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, Text_RespawnTimeTitle_1) == 0x0003B8, "Member 'UWBP_NewDeathScreen_C::Text_RespawnTimeTitle_1' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, W_BaseDialogButton_Accept) == 0x0003C0, "Member 'UWBP_NewDeathScreen_C::W_BaseDialogButton_Accept' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, W_BaseDialogButton_Accept_1) == 0x0003C8, "Member 'UWBP_NewDeathScreen_C::W_BaseDialogButton_Accept_1' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, W_HintButtonNew) == 0x0003D0, "Member 'UWBP_NewDeathScreen_C::W_HintButtonNew' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, W_Interact) == 0x0003D8, "Member 'UWBP_NewDeathScreen_C::W_Interact' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, WBP_GameStats) == 0x0003E0, "Member 'UWBP_NewDeathScreen_C::WBP_GameStats' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, WidgetSwitcher_DeathSurvived) == 0x0003E8, "Member 'UWBP_NewDeathScreen_C::WidgetSwitcher_DeathSurvived' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, WidgetSwitcher_TeleportButtons) == 0x0003F0, "Member 'UWBP_NewDeathScreen_C::WidgetSwitcher_TeleportButtons' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, TextFormatRespawn) == 0x0003F8, "Member 'UWBP_NewDeathScreen_C::TextFormatRespawn' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, SurrenderInputActionName) == 0x000410, "Member 'UWBP_NewDeathScreen_C::SurrenderInputActionName' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, PriorityZOrder) == 0x000418, "Member 'UWBP_NewDeathScreen_C::PriorityZOrder' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, Surrender) == 0x00041C, "Member 'UWBP_NewDeathScreen_C::Surrender' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, OnSurrenderTimerHandle) == 0x000420, "Member 'UWBP_NewDeathScreen_C::OnSurrenderTimerHandle' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, RespawnTime) == 0x000428, "Member 'UWBP_NewDeathScreen_C::RespawnTime' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, DaysLived) == 0x000430, "Member 'UWBP_NewDeathScreen_C::DaysLived' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, ButtonHoldTime__OnSurrender_) == 0x000438, "Member 'UWBP_NewDeathScreen_C::ButtonHoldTime__OnSurrender_' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, OnRespawnTimerHandle) == 0x000440, "Member 'UWBP_NewDeathScreen_C::OnRespawnTimerHandle' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, CurrentSurrenderTime) == 0x000448, "Member 'UWBP_NewDeathScreen_C::CurrentSurrenderTime' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, CurrentRespawnTime) == 0x000450, "Member 'UWBP_NewDeathScreen_C::CurrentRespawnTime' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, OnUpdateDeathScreenState) == 0x000458, "Member 'UWBP_NewDeathScreen_C::OnUpdateDeathScreenState' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, ScreenState) == 0x000468, "Member 'UWBP_NewDeathScreen_C::ScreenState' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, Show) == 0x000469, "Member 'UWBP_NewDeathScreen_C::Show' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, Hide) == 0x00046A, "Member 'UWBP_NewDeathScreen_C::Hide' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, OnStartRespawn) == 0x000470, "Member 'UWBP_NewDeathScreen_C::OnStartRespawn' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, bShowStatAnimEnd) == 0x000480, "Member 'UWBP_NewDeathScreen_C::bShowStatAnimEnd' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, CachedController) == 0x000488, "Member 'UWBP_NewDeathScreen_C::CachedController' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, FinishAnim) == 0x000490, "Member 'UWBP_NewDeathScreen_C::FinishAnim' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, OnTimeToTeleport) == 0x000498, "Member 'UWBP_NewDeathScreen_C::OnTimeToTeleport' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, Teleported) == 0x0004A8, "Member 'UWBP_NewDeathScreen_C::Teleported' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, BlackScreenTimer) == 0x0004B0, "Member 'UWBP_NewDeathScreen_C::BlackScreenTimer' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, As_Survival_Player) == 0x0004B8, "Member 'UWBP_NewDeathScreen_C::As_Survival_Player' has a wrong offset!");
static_assert(offsetof(UWBP_NewDeathScreen_C, FadeTime) == 0x0004C0, "Member 'UWBP_NewDeathScreen_C::FadeTime' has a wrong offset!");

}

