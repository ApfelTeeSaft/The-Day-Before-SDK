#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Options

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_Options_Type_structs.hpp"
#include "FMODStudio_structs.hpp"
#include "Survival_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Options.W_Options_C
// 0x0198 (0x0420 - 0x0288)
class UW_Options_C final : public USettingsWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FirstShow_WithBG;                                  // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       SwitchPage;                                        // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HideConfirm;                                       // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShowConfirm;                                       // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       SwipeContent_RightToLeft;                          // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       SwipeContent_LeftToRight;                          // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       SetContent_LeftToRight;                            // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       SetContent_RightToLeft;                            // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShowAnim;                                          // 0x02D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeIn_Options_Animation;                          // 0x02D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBackgroundBlur*                        BackgroundBlurFromPause;                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBackgroundBlur*                        BackgroundBlurMain;                                // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_HintButtonNew_C*                     Button_ArrowLeft;                                  // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_HintButtonNew_C*                     Button_ArrowRight;                                 // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_HintButtonNew_C*                     Button_E;                                          // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_HintButtonNew_C*                     Button_Q;                                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_HintButtonNew_C*                     Button_Unbind;                                     // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_BG;                                    // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Content;                               // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_HintButtonNew_C*                     HintButton_ApplySettings;                          // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_HintButtonNew_C*                     HintButton_Back;                                   // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_HintButtonNew_C*                     HintButton_Select;                                 // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_ArrowButton;                         // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_260;                                         // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Buttons;                                   // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Message;                                   // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_ButtonText;                              // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_BaseDialogueButton_C*                W_BaseDialogButton_Accept;                         // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_BaseDialogueButton_C*                W_BaseDialogButton_Decline;                        // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ControlsMenu_C*                      W_ControlsMenu;                                    // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_DialoguePerks_C*                     W_DialoguePerks;                                   // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GameSettingsMenu_C*                W_GameSettingsMenu;                                // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_GraphicsMenu_C*                      W_GraphicsMenu;                                    // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Interact_C*                          W_Interact_Default;                                // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SoundSettingsMenu_C*                 W_SoundSettingsMenu;                               // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainCategorySelector_C*            WBP_MainCategorySelector;                          // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Options;                            // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	E_Options_Type                                OptionsType;                                       // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C1[0x7];                                      // 0x03C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFMODEventInstance                     Escape_Open;                                       // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          HasActiveTab;                                      // 0x03D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D1[0x3];                                      // 0x03D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NextIndex;                                         // 0x03D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         WidgetSwitcherIndexScreenResol;                    // 0x03D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Key_Value_Changing;                                // 0x03DC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AnySettingsChanged;                                // 0x03DD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseSound;                                          // 0x03DE(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DF[0x1];                                      // 0x03DF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClosed;                                          // 0x03E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                           AdjustVisibilityTimer;                             // 0x03F0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          CanHoldKey;                                        // 0x03F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F9[0x7];                                      // 0x03F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CurrentHoldTime;                                   // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           UpdateHoldKeyTimer;                                // 0x0408(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        Current_Value_Slider;                              // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShowAplyButton;                                   // 0x0418(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShowed;                                           // 0x0419(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AdjustVisibility();
	void ApplyAllSettings();
	void ApplyGameSettings();
	void ApplySoundSettings();
	void ApplyVideoSettings();
	void BndEvt__W_Options_Button_ArrowLeft_K2Node_ComponentBoundEvent_10_OnPressed__DelegateSignature();
	void BndEvt__W_Options_Button_ArrowRight_K2Node_ComponentBoundEvent_12_OnPressed__DelegateSignature();
	void BndEvt__W_Options_Button_E_K2Node_ComponentBoundEvent_9_OnPressed__DelegateSignature();
	void BndEvt__W_Options_Button_Q_K2Node_ComponentBoundEvent_6_OnPressed__DelegateSignature();
	void BndEvt__W_Options_HintButton_ApplySettings_K2Node_ComponentBoundEvent_13_OnPressed__DelegateSignature();
	void BndEvt__W_Options_HintButton_Back_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature();
	void BndEvt__W_Options_W_ControlsMenu_K2Node_ComponentBoundEvent_2_OnKeyValueChanging__DelegateSignature(bool KeyValueChanging);
	void BndEvt__W_Options_W_ControlsMenu_K2Node_ComponentBoundEvent_5_ValueChanged__DelegateSignature();
	void BndEvt__W_Options_W_DialoguePerks_K2Node_ComponentBoundEvent_1_OnConfirmationAccept__DelegateSignature();
	void BndEvt__W_Options_W_DialoguePerks_K2Node_ComponentBoundEvent_8_OnConfirmationDecline__DelegateSignature();
	void BndEvt__W_Options_W_GameSettingsMenu_K2Node_ComponentBoundEvent_14_OnShowApply__DelegateSignature();
	void BndEvt__W_Options_W_GameSettingsMenu_K2Node_ComponentBoundEvent_18_ValueChanged__DelegateSignature();
	void BndEvt__W_Options_W_GraphicsMenu_K2Node_ComponentBoundEvent_11_OnShowApply__DelegateSignature();
	void BndEvt__W_Options_W_GraphicsMenu_K2Node_ComponentBoundEvent_3_ValueChanged__DelegateSignature();
	void BndEvt__W_Options_W_Interact_Default_K2Node_ComponentBoundEvent_16_OnPressed__DelegateSignature();
	void BndEvt__W_Options_W_Interact_Default_K2Node_ComponentBoundEvent_17_OnReleased__DelegateSignature();
	void BndEvt__W_Options_W_SoundSettingsMenu_K2Node_ComponentBoundEvent_19_OnShowApply__DelegateSignature();
	void BndEvt__W_Options_W_SoundSettingsMenu_K2Node_ComponentBoundEvent_4_ValueChanged__DelegateSignature();
	void BndEvt__W_Options_WBP_MainCategorySelector_K2Node_ComponentBoundEvent_0_OnCategoryChanged__DelegateSignature(int32 Param_Index);
	void ChangeCategoriesAnim();
	void CheckForDefaultSettings(bool* Changed);
	void CheckingValuesChanged();
	void CloseUI();
	void Construct();
	void DefaultControlSettings();
	void DefaultGameSettings();
	void DefaultSoundSettings();
	void DefaultVideoSettings();
	void DeselectRow_Slider();
	void Destruct();
	void ExecuteUbergraph_W_Options(int32 EntryPoint);
	void HoldKey();
	void NextPage(int32 PageIndex);
	void OnClose();
	void OnClosed__DelegateSignature();
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void PreConstruct(bool IsDesignTime);
	void PressedKey();
	void PrevPage(int32 PageIndex);
	void ReleasedKey();
	void ResetSettings();
	void SetActiveTab(int32 TabIndex);
	void SetOptionType(E_Options_Type Param_OptionsType);
	void Show();
	void ShowSettingReset();
	void SwitchContentBackward();
	void SwitchContentForward();
	void UpdateHoldKey();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Options_C">();
	}
	static class UW_Options_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Options_C>();
	}
};
static_assert(alignof(UW_Options_C) == 0x000008, "Wrong alignment on UW_Options_C");
static_assert(sizeof(UW_Options_C) == 0x000420, "Wrong size on UW_Options_C");
static_assert(offsetof(UW_Options_C, UberGraphFrame) == 0x000288, "Member 'UW_Options_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_Options_C, FirstShow_WithBG) == 0x000290, "Member 'UW_Options_C::FirstShow_WithBG' has a wrong offset!");
static_assert(offsetof(UW_Options_C, SwitchPage) == 0x000298, "Member 'UW_Options_C::SwitchPage' has a wrong offset!");
static_assert(offsetof(UW_Options_C, HideConfirm) == 0x0002A0, "Member 'UW_Options_C::HideConfirm' has a wrong offset!");
static_assert(offsetof(UW_Options_C, ShowConfirm) == 0x0002A8, "Member 'UW_Options_C::ShowConfirm' has a wrong offset!");
static_assert(offsetof(UW_Options_C, SwipeContent_RightToLeft) == 0x0002B0, "Member 'UW_Options_C::SwipeContent_RightToLeft' has a wrong offset!");
static_assert(offsetof(UW_Options_C, SwipeContent_LeftToRight) == 0x0002B8, "Member 'UW_Options_C::SwipeContent_LeftToRight' has a wrong offset!");
static_assert(offsetof(UW_Options_C, SetContent_LeftToRight) == 0x0002C0, "Member 'UW_Options_C::SetContent_LeftToRight' has a wrong offset!");
static_assert(offsetof(UW_Options_C, SetContent_RightToLeft) == 0x0002C8, "Member 'UW_Options_C::SetContent_RightToLeft' has a wrong offset!");
static_assert(offsetof(UW_Options_C, ShowAnim) == 0x0002D0, "Member 'UW_Options_C::ShowAnim' has a wrong offset!");
static_assert(offsetof(UW_Options_C, FadeIn_Options_Animation) == 0x0002D8, "Member 'UW_Options_C::FadeIn_Options_Animation' has a wrong offset!");
static_assert(offsetof(UW_Options_C, BackgroundBlurFromPause) == 0x0002E0, "Member 'UW_Options_C::BackgroundBlurFromPause' has a wrong offset!");
static_assert(offsetof(UW_Options_C, BackgroundBlurMain) == 0x0002E8, "Member 'UW_Options_C::BackgroundBlurMain' has a wrong offset!");
static_assert(offsetof(UW_Options_C, Button_ArrowLeft) == 0x0002F0, "Member 'UW_Options_C::Button_ArrowLeft' has a wrong offset!");
static_assert(offsetof(UW_Options_C, Button_ArrowRight) == 0x0002F8, "Member 'UW_Options_C::Button_ArrowRight' has a wrong offset!");
static_assert(offsetof(UW_Options_C, Button_E) == 0x000300, "Member 'UW_Options_C::Button_E' has a wrong offset!");
static_assert(offsetof(UW_Options_C, Button_Q) == 0x000308, "Member 'UW_Options_C::Button_Q' has a wrong offset!");
static_assert(offsetof(UW_Options_C, Button_Unbind) == 0x000310, "Member 'UW_Options_C::Button_Unbind' has a wrong offset!");
static_assert(offsetof(UW_Options_C, CanvasPanel_0) == 0x000318, "Member 'UW_Options_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UW_Options_C, CanvasPanel_BG) == 0x000320, "Member 'UW_Options_C::CanvasPanel_BG' has a wrong offset!");
static_assert(offsetof(UW_Options_C, CanvasPanel_Content) == 0x000328, "Member 'UW_Options_C::CanvasPanel_Content' has a wrong offset!");
static_assert(offsetof(UW_Options_C, HintButton_ApplySettings) == 0x000330, "Member 'UW_Options_C::HintButton_ApplySettings' has a wrong offset!");
static_assert(offsetof(UW_Options_C, HintButton_Back) == 0x000338, "Member 'UW_Options_C::HintButton_Back' has a wrong offset!");
static_assert(offsetof(UW_Options_C, HintButton_Select) == 0x000340, "Member 'UW_Options_C::HintButton_Select' has a wrong offset!");
static_assert(offsetof(UW_Options_C, HorizontalBox_ArrowButton) == 0x000348, "Member 'UW_Options_C::HorizontalBox_ArrowButton' has a wrong offset!");
static_assert(offsetof(UW_Options_C, Image_260) == 0x000350, "Member 'UW_Options_C::Image_260' has a wrong offset!");
static_assert(offsetof(UW_Options_C, Overlay_Buttons) == 0x000358, "Member 'UW_Options_C::Overlay_Buttons' has a wrong offset!");
static_assert(offsetof(UW_Options_C, Overlay_Message) == 0x000360, "Member 'UW_Options_C::Overlay_Message' has a wrong offset!");
static_assert(offsetof(UW_Options_C, TextBlock_ButtonText) == 0x000368, "Member 'UW_Options_C::TextBlock_ButtonText' has a wrong offset!");
static_assert(offsetof(UW_Options_C, W_BaseDialogButton_Accept) == 0x000370, "Member 'UW_Options_C::W_BaseDialogButton_Accept' has a wrong offset!");
static_assert(offsetof(UW_Options_C, W_BaseDialogButton_Decline) == 0x000378, "Member 'UW_Options_C::W_BaseDialogButton_Decline' has a wrong offset!");
static_assert(offsetof(UW_Options_C, W_ControlsMenu) == 0x000380, "Member 'UW_Options_C::W_ControlsMenu' has a wrong offset!");
static_assert(offsetof(UW_Options_C, W_DialoguePerks) == 0x000388, "Member 'UW_Options_C::W_DialoguePerks' has a wrong offset!");
static_assert(offsetof(UW_Options_C, W_GameSettingsMenu) == 0x000390, "Member 'UW_Options_C::W_GameSettingsMenu' has a wrong offset!");
static_assert(offsetof(UW_Options_C, W_GraphicsMenu) == 0x000398, "Member 'UW_Options_C::W_GraphicsMenu' has a wrong offset!");
static_assert(offsetof(UW_Options_C, W_Interact_Default) == 0x0003A0, "Member 'UW_Options_C::W_Interact_Default' has a wrong offset!");
static_assert(offsetof(UW_Options_C, W_SoundSettingsMenu) == 0x0003A8, "Member 'UW_Options_C::W_SoundSettingsMenu' has a wrong offset!");
static_assert(offsetof(UW_Options_C, WBP_MainCategorySelector) == 0x0003B0, "Member 'UW_Options_C::WBP_MainCategorySelector' has a wrong offset!");
static_assert(offsetof(UW_Options_C, WidgetSwitcher_Options) == 0x0003B8, "Member 'UW_Options_C::WidgetSwitcher_Options' has a wrong offset!");
static_assert(offsetof(UW_Options_C, OptionsType) == 0x0003C0, "Member 'UW_Options_C::OptionsType' has a wrong offset!");
static_assert(offsetof(UW_Options_C, Escape_Open) == 0x0003C8, "Member 'UW_Options_C::Escape_Open' has a wrong offset!");
static_assert(offsetof(UW_Options_C, HasActiveTab) == 0x0003D0, "Member 'UW_Options_C::HasActiveTab' has a wrong offset!");
static_assert(offsetof(UW_Options_C, NextIndex) == 0x0003D4, "Member 'UW_Options_C::NextIndex' has a wrong offset!");
static_assert(offsetof(UW_Options_C, WidgetSwitcherIndexScreenResol) == 0x0003D8, "Member 'UW_Options_C::WidgetSwitcherIndexScreenResol' has a wrong offset!");
static_assert(offsetof(UW_Options_C, Key_Value_Changing) == 0x0003DC, "Member 'UW_Options_C::Key_Value_Changing' has a wrong offset!");
static_assert(offsetof(UW_Options_C, AnySettingsChanged) == 0x0003DD, "Member 'UW_Options_C::AnySettingsChanged' has a wrong offset!");
static_assert(offsetof(UW_Options_C, UseSound) == 0x0003DE, "Member 'UW_Options_C::UseSound' has a wrong offset!");
static_assert(offsetof(UW_Options_C, OnClosed) == 0x0003E0, "Member 'UW_Options_C::OnClosed' has a wrong offset!");
static_assert(offsetof(UW_Options_C, AdjustVisibilityTimer) == 0x0003F0, "Member 'UW_Options_C::AdjustVisibilityTimer' has a wrong offset!");
static_assert(offsetof(UW_Options_C, CanHoldKey) == 0x0003F8, "Member 'UW_Options_C::CanHoldKey' has a wrong offset!");
static_assert(offsetof(UW_Options_C, CurrentHoldTime) == 0x000400, "Member 'UW_Options_C::CurrentHoldTime' has a wrong offset!");
static_assert(offsetof(UW_Options_C, UpdateHoldKeyTimer) == 0x000408, "Member 'UW_Options_C::UpdateHoldKeyTimer' has a wrong offset!");
static_assert(offsetof(UW_Options_C, Current_Value_Slider) == 0x000410, "Member 'UW_Options_C::Current_Value_Slider' has a wrong offset!");
static_assert(offsetof(UW_Options_C, bShowAplyButton) == 0x000418, "Member 'UW_Options_C::bShowAplyButton' has a wrong offset!");
static_assert(offsetof(UW_Options_C, bShowed) == 0x000419, "Member 'UW_Options_C::bShowed' has a wrong offset!");

}
