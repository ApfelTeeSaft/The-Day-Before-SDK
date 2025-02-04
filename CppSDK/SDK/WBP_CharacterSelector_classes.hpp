#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharacterSelector

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CharacterSelector.WBP_CharacterSelector_C
// 0x00D0 (0x0350 - 0x0280)
class UWBP_CharacterSelector_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Hover_CreateCharacter;                             // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                Button_CreateCharacter;                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharacterCreate_NavigationButton_C* Button_Play;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CreateChar_BG;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CreateChar_Hover;                                  // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Horizontal_Characters;                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_IconPlus;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_Characters;                              // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_CreateNewChar;                                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Plus;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_ServerName;                                   // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_WarningMessage;                               // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_LabelText_C*                       UMG_LabelText_SelectedPerks;                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharacterRow_C*                    WBP_CharacterRow;                                  // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayButton_C*                      WBP_PlayButton;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayButton_C*                      WBP_PlayButton_84;                                 // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnDeleteCharacter;                                 // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnDeleteCharacterNotification;                     // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnDeleteNotification;                              // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UW_DialoguePerks_C*                     W_DialoguePerks;                                   // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnEnterTheWorldPressed;                            // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__WBP_CharacterSelector_Button_CreateCharacter_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__WBP_CharacterSelector_Button_CreateCharacter_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_CharacterSelector_Button_CreateCharacter_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_CharacterSelector_Button_Play_K2Node_ComponentBoundEvent_0_OnButtonPressed__DelegateSignature();
	void Destruct();
	void ExecuteUbergraph_WBP_CharacterSelector(int32 EntryPoint);
	void IsValidCharacter(bool* Result);
	void OnClickedDeleteCharacter();
	void OnDeleteCharacter__DelegateSignature();
	void OnDeleteCharacterNotification__DelegateSignature();
	void OnDeleteCharacterWithDialogue();
	void OnDeleteNotification__DelegateSignature();
	void OnEnterTheWorldPressed__DelegateSignature();
	void OnUpdateStateWidget();
	void OnUpdateVisibilityWidget(ESlateVisibility NewVisibility);
	void OnValidate();
	void PreConstruct(bool IsDesignTime);
	void SetServerName(const class FText& ServerName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CharacterSelector_C">();
	}
	static class UWBP_CharacterSelector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CharacterSelector_C>();
	}
};
static_assert(alignof(UWBP_CharacterSelector_C) == 0x000008, "Wrong alignment on UWBP_CharacterSelector_C");
static_assert(sizeof(UWBP_CharacterSelector_C) == 0x000350, "Wrong size on UWBP_CharacterSelector_C");
static_assert(offsetof(UWBP_CharacterSelector_C, UberGraphFrame) == 0x000280, "Member 'UWBP_CharacterSelector_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSelector_C, Hover_CreateCharacter) == 0x000288, "Member 'UWBP_CharacterSelector_C::Hover_CreateCharacter' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSelector_C, Button_CreateCharacter) == 0x000290, "Member 'UWBP_CharacterSelector_C::Button_CreateCharacter' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSelector_C, Button_Play) == 0x000298, "Member 'UWBP_CharacterSelector_C::Button_Play' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSelector_C, CreateChar_BG) == 0x0002A0, "Member 'UWBP_CharacterSelector_C::CreateChar_BG' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSelector_C, CreateChar_Hover) == 0x0002A8, "Member 'UWBP_CharacterSelector_C::CreateChar_Hover' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSelector_C, Horizontal_Characters) == 0x0002B0, "Member 'UWBP_CharacterSelector_C::Horizontal_Characters' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSelector_C, Image_IconPlus) == 0x0002B8, "Member 'UWBP_CharacterSelector_C::Image_IconPlus' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSelector_C, ScrollBox_Characters) == 0x0002C0, "Member 'UWBP_CharacterSelector_C::ScrollBox_Characters' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSelector_C, Text_CreateNewChar) == 0x0002C8, "Member 'UWBP_CharacterSelector_C::Text_CreateNewChar' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSelector_C, Text_Plus) == 0x0002D0, "Member 'UWBP_CharacterSelector_C::Text_Plus' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSelector_C, Text_ServerName) == 0x0002D8, "Member 'UWBP_CharacterSelector_C::Text_ServerName' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSelector_C, Text_WarningMessage) == 0x0002E0, "Member 'UWBP_CharacterSelector_C::Text_WarningMessage' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSelector_C, UMG_LabelText_SelectedPerks) == 0x0002E8, "Member 'UWBP_CharacterSelector_C::UMG_LabelText_SelectedPerks' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSelector_C, WBP_CharacterRow) == 0x0002F0, "Member 'UWBP_CharacterSelector_C::WBP_CharacterRow' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSelector_C, WBP_PlayButton) == 0x0002F8, "Member 'UWBP_CharacterSelector_C::WBP_PlayButton' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSelector_C, WBP_PlayButton_84) == 0x000300, "Member 'UWBP_CharacterSelector_C::WBP_PlayButton_84' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSelector_C, OnDeleteCharacter) == 0x000308, "Member 'UWBP_CharacterSelector_C::OnDeleteCharacter' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSelector_C, OnDeleteCharacterNotification) == 0x000318, "Member 'UWBP_CharacterSelector_C::OnDeleteCharacterNotification' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSelector_C, OnDeleteNotification) == 0x000328, "Member 'UWBP_CharacterSelector_C::OnDeleteNotification' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSelector_C, W_DialoguePerks) == 0x000338, "Member 'UWBP_CharacterSelector_C::W_DialoguePerks' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSelector_C, OnEnterTheWorldPressed) == 0x000340, "Member 'UWBP_CharacterSelector_C::OnEnterTheWorldPressed' has a wrong offset!");

}

