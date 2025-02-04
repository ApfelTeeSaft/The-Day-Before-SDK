#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ModalWindow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ModalWindow.WBP_ModalWindow_C
// 0x00C0 (0x0340 - 0x0280)
class UWBP_ModalWindow_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Fade;                                              // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UW_ModalWindowButton_C*                 Button_CreateAccept;                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ModalWindowButton_C*                 Button_CreateDecline;                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_EditName;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       EditableTextBox_175;                               // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Description;                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_EnterNameHint;                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Header;                                  // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Content;                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnAccept;                                          // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnCancel;                                          // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                   HeaderText;                                        // 0x02F0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   BodyText;                                          // 0x0308(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          bShowDeclineButton;                                // 0x0320(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bNameInput;                                        // 0x0321(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_322[0x2];                                      // 0x0322(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MaxNicknameLenght;                                 // 0x0324(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         BadWordsArray;                                     // 0x0328(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bCanAccept;                                        // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bTextChanged;                                      // 0x0339(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_CharacterCreate_Button_133_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__WBP_CharacterCreate_EditableTextBox_175_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
	void BndEvt__WBP_CharacterCreate_EditableTextBox_175_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void BndEvt__WBP_ModalWindow_Button_CreateAccept_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature();
	void BndEvt__WBP_ModalWindow_Button_CreateAccept_K2Node_ComponentBoundEvent_2_OnSpaceBarPressed__DelegateSignature();
	void BndEvt__WBP_ModalWindow_Button_CreateDecline_K2Node_ComponentBoundEvent_10_OnTabPressed__DelegateSignature();
	void BndEvt__WBP_ModalWindow_Button_CreateDecline_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature();
	bool CheckCanCreateCharacter();
	void ClearEditableText();
	void Construct();
	bool Contains_Incorrect_Text(const class FText& InText);
	void ExecuteUbergraph_WBP_ModalWindow(int32 EntryPoint);
	void Init();
	void OnAccept__DelegateSignature();
	void OnAccept_Event();
	void OnCancel__DelegateSignature();
	void OnCancel_Event();
	void PreConstruct(bool IsDesignTime);
	void SelectEditableTextBox();
	void SetDescription(const class FText& InText);
	void SetHeader(const class FText& InText);
	void Show(bool IsNeedForwardAnimation);
	void ShowTime(double RemainingTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ModalWindow_C">();
	}
	static class UWBP_ModalWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ModalWindow_C>();
	}
};
static_assert(alignof(UWBP_ModalWindow_C) == 0x000008, "Wrong alignment on UWBP_ModalWindow_C");
static_assert(sizeof(UWBP_ModalWindow_C) == 0x000340, "Wrong size on UWBP_ModalWindow_C");
static_assert(offsetof(UWBP_ModalWindow_C, UberGraphFrame) == 0x000280, "Member 'UWBP_ModalWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ModalWindow_C, Fade) == 0x000288, "Member 'UWBP_ModalWindow_C::Fade' has a wrong offset!");
static_assert(offsetof(UWBP_ModalWindow_C, Button_CreateAccept) == 0x000290, "Member 'UWBP_ModalWindow_C::Button_CreateAccept' has a wrong offset!");
static_assert(offsetof(UWBP_ModalWindow_C, Button_CreateDecline) == 0x000298, "Member 'UWBP_ModalWindow_C::Button_CreateDecline' has a wrong offset!");
static_assert(offsetof(UWBP_ModalWindow_C, Button_EditName) == 0x0002A0, "Member 'UWBP_ModalWindow_C::Button_EditName' has a wrong offset!");
static_assert(offsetof(UWBP_ModalWindow_C, EditableTextBox_175) == 0x0002A8, "Member 'UWBP_ModalWindow_C::EditableTextBox_175' has a wrong offset!");
static_assert(offsetof(UWBP_ModalWindow_C, TextBlock_Description) == 0x0002B0, "Member 'UWBP_ModalWindow_C::TextBlock_Description' has a wrong offset!");
static_assert(offsetof(UWBP_ModalWindow_C, TextBlock_EnterNameHint) == 0x0002B8, "Member 'UWBP_ModalWindow_C::TextBlock_EnterNameHint' has a wrong offset!");
static_assert(offsetof(UWBP_ModalWindow_C, TextBlock_Header) == 0x0002C0, "Member 'UWBP_ModalWindow_C::TextBlock_Header' has a wrong offset!");
static_assert(offsetof(UWBP_ModalWindow_C, WidgetSwitcher_Content) == 0x0002C8, "Member 'UWBP_ModalWindow_C::WidgetSwitcher_Content' has a wrong offset!");
static_assert(offsetof(UWBP_ModalWindow_C, OnAccept) == 0x0002D0, "Member 'UWBP_ModalWindow_C::OnAccept' has a wrong offset!");
static_assert(offsetof(UWBP_ModalWindow_C, OnCancel) == 0x0002E0, "Member 'UWBP_ModalWindow_C::OnCancel' has a wrong offset!");
static_assert(offsetof(UWBP_ModalWindow_C, HeaderText) == 0x0002F0, "Member 'UWBP_ModalWindow_C::HeaderText' has a wrong offset!");
static_assert(offsetof(UWBP_ModalWindow_C, BodyText) == 0x000308, "Member 'UWBP_ModalWindow_C::BodyText' has a wrong offset!");
static_assert(offsetof(UWBP_ModalWindow_C, bShowDeclineButton) == 0x000320, "Member 'UWBP_ModalWindow_C::bShowDeclineButton' has a wrong offset!");
static_assert(offsetof(UWBP_ModalWindow_C, bNameInput) == 0x000321, "Member 'UWBP_ModalWindow_C::bNameInput' has a wrong offset!");
static_assert(offsetof(UWBP_ModalWindow_C, MaxNicknameLenght) == 0x000324, "Member 'UWBP_ModalWindow_C::MaxNicknameLenght' has a wrong offset!");
static_assert(offsetof(UWBP_ModalWindow_C, BadWordsArray) == 0x000328, "Member 'UWBP_ModalWindow_C::BadWordsArray' has a wrong offset!");
static_assert(offsetof(UWBP_ModalWindow_C, bCanAccept) == 0x000338, "Member 'UWBP_ModalWindow_C::bCanAccept' has a wrong offset!");
static_assert(offsetof(UWBP_ModalWindow_C, bTextChanged) == 0x000339, "Member 'UWBP_ModalWindow_C::bTextChanged' has a wrong offset!");

}

