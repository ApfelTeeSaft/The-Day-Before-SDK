#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_RPShop

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ShopCategory_structs.hpp"
#include "E_ReasonForCancelingTransaction_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "JSItemType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_RPShop.W_RPShop_C
// 0x0230 (0x04B0 - 0x0280)
class UW_RPShop_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       SwitchCategory;                                    // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       CloseDialogue;                                     // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OpenDialogue;                                      // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HideWaringMessageAnim;                             // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShowWarningMessageAnim;                            // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Close;                                             // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Open;                                              // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UW_HintButtonNew_C*                     Button_Close;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_Buy;                                 // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_Empty;                               // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_Pockets;                             // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_Sell;                                // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_2;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_TitleContainer_1;                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_Buy;                                     // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_Items;                                   // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_Items_Shop;                              // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Emptylabel_1;                              // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spacer_Buyback;                                    // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_EmptyPageLabel_1;                        // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_WarningMessageText;                      // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextShop_1;                                        // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextShopRight;                                     // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_LabelText_C*                       UMG_LabelText_1;                                   // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_LabelText_C*                       UMG_LabelText_Backpack;                            // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_LabelText_C*                       UMG_LabelText_Sell;                                // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                      UniformGridPanel_Content;                          // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_Backpack;                              // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_Category;                              // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_ContentBuy;                            // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_NoItems;                               // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ShopCategoryContainer_C*             W_ShopCategoryContainer;                           // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainCategorySelector_C*            WBP_MainCategorySelector;                          // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScrollboxSlider_C*                 WBP_ScrollboxSlider;                               // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScrollboxSlider_C*                 WBP_ScrollboxSlider_Backpack;                      // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScrollboxSlider_C*                 WBP_ScrollboxSlider_Shop;                          // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ShopDialogue_C*                    WBP_ShopDialogue;                                  // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Stat_C*                            WBP_Stat_HP;                                       // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Stat_C*                            WBP_Stat_Hunger;                                   // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Stat_C*                            WBP_Stat_Thirst;                                   // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_LabelText;                          // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Main;                               // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_NoItems;                            // 0x03D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_TitleContainer;                     // 0x03E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ASurvPC_C*                              CachedController;                                  // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBPC_PlayerStatsComponent_C*            PlayerStatsComponent_Ref;                          // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           UpdateStats_Timer;                                 // 0x03F8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_Shops_C*                            CachedShop;                                        // 0x0400(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose_RPShop_;                                   // 0x0408(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class FName>                           CategoryArray;                                     // 0x0418(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UW_ShopCategory_C*                      Category_Selected_;                                // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_RPShopSlot_C*                        SelectedSlot;                                      // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_RPShopSlot_C*>                ItemsArray;                                        // 0x0438(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UW_RPShopSlot_C*>                ItemsArrayOnCategory;                              // 0x0448(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	EShopCategory                                 ShopState;                                         // 0x0458(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_459[0x7];                                      // 0x0459(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           WarningMessageTimer;                               // 0x0460(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         Count_Dialogue_;                                   // 0x0468(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46C[0x4];                                      // 0x046C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_RPShopSlot_C*                        Start_Buy_Ref;                                     // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CategorySelectorIndex;                             // 0x0478(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47C[0x4];                                      // 0x047C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   PlayerName;                                        // 0x0480(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   PlayerStatus;                                      // 0x0498(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void Add_Item_Remove_Money(class ASurvivalPlayer_C* PlayerReference, const struct FFItemInfo& ItemInfo, int32 MoneyCount, int32 RPoints);
	void BndEvt__W_RPShop_Button_Close_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature();
	void BndEvt__W_RPShop_WBP_MainCategorySelector_K2Node_ComponentBoundEvent_1_OnCategoryChanged__DelegateSignature(int32 Param_Index);
	void BndEvt__W_RPShop_WBP_ShopDialogue_K2Node_ComponentBoundEvent_2_OnPressedAccept__DelegateSignature(int32 Count, class UJSI_Slot_C* Ref_slot);
	void BndEvt__W_RPShop_WBP_ShopDialogue_K2Node_ComponentBoundEvent_3_OnPressedDecline__DelegateSignature();
	void BndEvt__W_RPShop_WBP_ShopDialogue_K2Node_ComponentBoundEvent_4_OnPressenConfirmAccept__DelegateSignature();
	void BndEvt__W_RPShop_WBP_ShopDialogue_K2Node_ComponentBoundEvent_5_OnPressedConfirmDecline__DelegateSignature();
	void Buyback_Item(const struct FFItemInfo& FItemInfo, int32 Count, class UJSI_Slot_C* JSI_Slot);
	void BuyItem(const struct FFItemInfo& FItemInfo, int32 RPoints);
	int32 Calculate_Result_Price(const struct FFItemInfo& FItemInfo);
	void Category_Selected(class UW_ShopCategory_C* Ref);
	void Change_State_Preview();
	void ChangeCategoryBuy(class UW_ShopCategory_C* Ref);
	void ChangeShopState(EShopCategory New_Shop_State);
	void ChangeStateAnim();
	void ChangeStateNext();
	bool Check_Can_Buy(const struct FFItemInfo& FItemInfo);
	void Check_Free_Space_to_Add_Item(const struct FFItemInfo& FItemInfo, bool* Return);
	bool Check_RP_Point_JSI_Slot(class UJSI_Slot_C* Param_SelectedSlot);
	bool Check_RP_Point_RPoint_Slot(class UW_RPShopSlot_C* Param_SelectedSlot);
	void CloseDialogue_();
	void CloseShop();
	void Confirm_Window_OnKeyDown();
	void ConfirmWindow_Sell_Buyback(int32 Count, class UJSI_Slot_C* Ref);
	void Construct();
	void ExecuteUbergraph_W_RPShop(int32 EntryPoint);
	void Finished_00E858F049E128F8B65B83B69EFD406A();
	void HideWarningMessage();
	void Init_Pocket();
	void InitBuyback();
	void InitCategory();
	void InitItems();
	void InitItemsCategories(class FName Category_Name);
	void OnClose_RPShop___DelegateSignature();
	void OnTransactionNotApproved(E_ReasonForCancelingTransaction CancelReason);
	void OpenDialogue_(class UJSI_Slot_C* Ref);
	void OpenShop();
	void PreConstruct(bool IsDesignTime);
	void Sell_Item(class UJSI_Slot_C* Ref_slot, int32 Count);
	void ShowWarningMessage(const class FText& MessageText, class UFMODEvent* FMODEvent);
	void Start_Buy();
	void Start_Buy_Dialogue(class UW_RPShopSlot_C* Ref_Item);
	void Start_Buyback(class UJSIContainer_C* Container, class UJSI_Slot_C* SlotRef, const struct FKey& Button);
	void Start_Sell(class UJSIContainer_C* Container, class UJSI_Slot_C* SlotRef, const struct FKey& Button);
	void SwitchCategory_();
	void UpdateStats_Func();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_RPShop_C">();
	}
	static class UW_RPShop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_RPShop_C>();
	}
};
static_assert(alignof(UW_RPShop_C) == 0x000008, "Wrong alignment on UW_RPShop_C");
static_assert(sizeof(UW_RPShop_C) == 0x0004B0, "Wrong size on UW_RPShop_C");
static_assert(offsetof(UW_RPShop_C, UberGraphFrame) == 0x000280, "Member 'UW_RPShop_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, SwitchCategory) == 0x000288, "Member 'UW_RPShop_C::SwitchCategory' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, CloseDialogue) == 0x000290, "Member 'UW_RPShop_C::CloseDialogue' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, OpenDialogue) == 0x000298, "Member 'UW_RPShop_C::OpenDialogue' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, HideWaringMessageAnim) == 0x0002A0, "Member 'UW_RPShop_C::HideWaringMessageAnim' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, ShowWarningMessageAnim) == 0x0002A8, "Member 'UW_RPShop_C::ShowWarningMessageAnim' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, Close) == 0x0002B0, "Member 'UW_RPShop_C::Close' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, Open) == 0x0002B8, "Member 'UW_RPShop_C::Open' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, Button_Close) == 0x0002C0, "Member 'UW_RPShop_C::Button_Close' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, HorizontalBox_Buy) == 0x0002C8, "Member 'UW_RPShop_C::HorizontalBox_Buy' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, HorizontalBox_Empty) == 0x0002D0, "Member 'UW_RPShop_C::HorizontalBox_Empty' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, HorizontalBox_Pockets) == 0x0002D8, "Member 'UW_RPShop_C::HorizontalBox_Pockets' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, HorizontalBox_Sell) == 0x0002E0, "Member 'UW_RPShop_C::HorizontalBox_Sell' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, Overlay_2) == 0x0002E8, "Member 'UW_RPShop_C::Overlay_2' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, Overlay_TitleContainer_1) == 0x0002F0, "Member 'UW_RPShop_C::Overlay_TitleContainer_1' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, ScrollBox_Buy) == 0x0002F8, "Member 'UW_RPShop_C::ScrollBox_Buy' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, ScrollBox_Items) == 0x000300, "Member 'UW_RPShop_C::ScrollBox_Items' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, ScrollBox_Items_Shop) == 0x000308, "Member 'UW_RPShop_C::ScrollBox_Items_Shop' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, SizeBox_Emptylabel_1) == 0x000310, "Member 'UW_RPShop_C::SizeBox_Emptylabel_1' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, Spacer_Buyback) == 0x000318, "Member 'UW_RPShop_C::Spacer_Buyback' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, TextBlock_EmptyPageLabel_1) == 0x000320, "Member 'UW_RPShop_C::TextBlock_EmptyPageLabel_1' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, TextBlock_WarningMessageText) == 0x000328, "Member 'UW_RPShop_C::TextBlock_WarningMessageText' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, TextShop_1) == 0x000330, "Member 'UW_RPShop_C::TextShop_1' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, TextShopRight) == 0x000338, "Member 'UW_RPShop_C::TextShopRight' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, UMG_LabelText_1) == 0x000340, "Member 'UW_RPShop_C::UMG_LabelText_1' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, UMG_LabelText_Backpack) == 0x000348, "Member 'UW_RPShop_C::UMG_LabelText_Backpack' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, UMG_LabelText_Sell) == 0x000350, "Member 'UW_RPShop_C::UMG_LabelText_Sell' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, UniformGridPanel_Content) == 0x000358, "Member 'UW_RPShop_C::UniformGridPanel_Content' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, VerticalBox_Backpack) == 0x000360, "Member 'UW_RPShop_C::VerticalBox_Backpack' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, VerticalBox_Category) == 0x000368, "Member 'UW_RPShop_C::VerticalBox_Category' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, VerticalBox_ContentBuy) == 0x000370, "Member 'UW_RPShop_C::VerticalBox_ContentBuy' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, VerticalBox_NoItems) == 0x000378, "Member 'UW_RPShop_C::VerticalBox_NoItems' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, W_ShopCategoryContainer) == 0x000380, "Member 'UW_RPShop_C::W_ShopCategoryContainer' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, WBP_MainCategorySelector) == 0x000388, "Member 'UW_RPShop_C::WBP_MainCategorySelector' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, WBP_ScrollboxSlider) == 0x000390, "Member 'UW_RPShop_C::WBP_ScrollboxSlider' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, WBP_ScrollboxSlider_Backpack) == 0x000398, "Member 'UW_RPShop_C::WBP_ScrollboxSlider_Backpack' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, WBP_ScrollboxSlider_Shop) == 0x0003A0, "Member 'UW_RPShop_C::WBP_ScrollboxSlider_Shop' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, WBP_ShopDialogue) == 0x0003A8, "Member 'UW_RPShop_C::WBP_ShopDialogue' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, WBP_Stat_HP) == 0x0003B0, "Member 'UW_RPShop_C::WBP_Stat_HP' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, WBP_Stat_Hunger) == 0x0003B8, "Member 'UW_RPShop_C::WBP_Stat_Hunger' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, WBP_Stat_Thirst) == 0x0003C0, "Member 'UW_RPShop_C::WBP_Stat_Thirst' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, WidgetSwitcher_LabelText) == 0x0003C8, "Member 'UW_RPShop_C::WidgetSwitcher_LabelText' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, WidgetSwitcher_Main) == 0x0003D0, "Member 'UW_RPShop_C::WidgetSwitcher_Main' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, WidgetSwitcher_NoItems) == 0x0003D8, "Member 'UW_RPShop_C::WidgetSwitcher_NoItems' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, WidgetSwitcher_TitleContainer) == 0x0003E0, "Member 'UW_RPShop_C::WidgetSwitcher_TitleContainer' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, CachedController) == 0x0003E8, "Member 'UW_RPShop_C::CachedController' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, PlayerStatsComponent_Ref) == 0x0003F0, "Member 'UW_RPShop_C::PlayerStatsComponent_Ref' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, UpdateStats_Timer) == 0x0003F8, "Member 'UW_RPShop_C::UpdateStats_Timer' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, CachedShop) == 0x000400, "Member 'UW_RPShop_C::CachedShop' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, OnClose_RPShop_) == 0x000408, "Member 'UW_RPShop_C::OnClose_RPShop_' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, CategoryArray) == 0x000418, "Member 'UW_RPShop_C::CategoryArray' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, Category_Selected_) == 0x000428, "Member 'UW_RPShop_C::Category_Selected_' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, SelectedSlot) == 0x000430, "Member 'UW_RPShop_C::SelectedSlot' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, ItemsArray) == 0x000438, "Member 'UW_RPShop_C::ItemsArray' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, ItemsArrayOnCategory) == 0x000448, "Member 'UW_RPShop_C::ItemsArrayOnCategory' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, ShopState) == 0x000458, "Member 'UW_RPShop_C::ShopState' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, WarningMessageTimer) == 0x000460, "Member 'UW_RPShop_C::WarningMessageTimer' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, Count_Dialogue_) == 0x000468, "Member 'UW_RPShop_C::Count_Dialogue_' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, Start_Buy_Ref) == 0x000470, "Member 'UW_RPShop_C::Start_Buy_Ref' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, CategorySelectorIndex) == 0x000478, "Member 'UW_RPShop_C::CategorySelectorIndex' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, PlayerName) == 0x000480, "Member 'UW_RPShop_C::PlayerName' has a wrong offset!");
static_assert(offsetof(UW_RPShop_C, PlayerStatus) == 0x000498, "Member 'UW_RPShop_C::PlayerStatus' has a wrong offset!");

}

