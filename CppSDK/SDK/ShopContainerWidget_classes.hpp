#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShopContainerWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FItemInfo_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "JSItemType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ShopContainerWidget.ShopContainerWidget_C
// 0x0148 (0x03C8 - 0x0280)
class UShopContainerWidget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Close;                                             // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                Button_124;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_Aliases;                                 // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_Items;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJSIContainer_C*                        ShopContainer;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJSIContainer_C*                        ShopContainer_Buyback;                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_0;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_LabelText_C*                       UMG_LabelText;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_LabelText_C*                       UMG_LabelText_226;                                 // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_Content;                               // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_Content_Aliases;                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Scroller_C*                        WBP_AliasesScroller;                               // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Scroller_C*                        WBP_ShopScroller;                                  // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_0;                                  // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_1;                                  // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Scroller;                           // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_Shops_C*                            ShopRef;                                           // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FText                                   TraderName;                                        // 0x0310(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UJSIContainer_C*                        Pocket_Container;                                  // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UMPInGameInventory_C*                   Inventory_Ref;                                     // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UJSI_Slot_C*>                    EntryList;                                         // 0x0338(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FFItemInfo>                     ValidItems;                                        // 0x0348(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          bHaveItemsToRepair;                                // 0x0358(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_359[0x7];                                      // 0x0359(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnRecalculateRepairAllPrice;                       // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UWBP_Aliases_C*>                 AliasesArray;                                      // 0x0370(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UWBP_Aliases_C*                         Selected_Aliases;                                  // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_ShopDialogue_C*                    ShopDialogue;                                      // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             CloseShop;                                         // 0x0390(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         PageIndex;                                         // 0x03A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A4[0x4];                                      // 0x03A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ShopModalWindow_C*                 ShopModalWindow;                                   // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          IsModalWindow;                                     // 0x03B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B1[0x7];                                      // 0x03B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJSI_Slot_C*                            ModalWindowItemRef;                                // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         ModalWindowCurrentValue;                           // 0x03C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Add_Item_Remove_Money(class ASurvivalPlayer_C* PlayerReference, int32 MoneyCount, const struct FFItemInfo& ItemInfo, bool IsBuyback);
	void AliasesCheckingOnBuying(const struct FFItemInfo& FItemInfo, bool* Find_);
	void BuybackItem(const struct FFItemInfo& FItemInfo, int32 Count, class UJSI_Slot_C* SlotRef);
	void BuybackOnMouseButtonDown(class UJSIContainer_C* Container, class UJSI_Slot_C* SlotRef, const struct FKey& Button);
	void BuybackProcess(bool Param_OnAccept, int32 Count, class UJSI_Slot_C* SlotRef);
	void BuybackProcessByItemRef(class UJSI_Slot_C* Item_Ref);
	void BuyItem(const struct FFItemInfo& FItemInfo);
	void BuyProcess();
	void BuyProcessByItemRef(class UJSI_Slot_C* ItemRef);
	void Calculate_Result_Price(const struct FFItemInfo& FItem, bool bUseSellPrice, int32* ResultPrice);
	void ChangeLabelText(int32 Param_Index);
	void Check_Can_Buy(const struct FFItemInfo& FItem, bool bUseSellPrice, int32 Count, bool* Result);
	void Check_Free_Space_to_Add_Item(const struct FFItemInfo& FItemInfo, bool* Return);
	bool CheckRPCount(const struct FFItemInfo& FItemInfo);
	void ClearAliasesArray();
	void CloseShop__DelegateSignature();
	void Construct();
	void EventOnDropInfoContainertoContainer(class UJSIContainer_C* From, class UJSIContainer_C* To, class UJSI_Slot_C* FromSlotRef, class UJSI_Slot_C* ToSlotRef, bool ToEmptySlot_, bool MovedAll_);
	void ExecuteUbergraph_ShopContainerWidget(int32 EntryPoint);
	void Get_Entries(TArray<class UJSI_Slot_C*>* Param_EntryList);
	void Get_Have_Items_to_Repair(bool* Param_bHaveItemsToRepair);
	void GetAliases(const class FString& In_Aliases, bool* Find_);
	void GetPageIndex(int32* Param_PageIndex);
	void GetStatusAliases();
	void Hide();
	void HideDialogue();
	void HideItemInfo();
	void InitAliases();
	void InitBuyAssortment();
	void InitBuybackItems();
	void InitRepair();
	void MakePickupItem(const struct FFItemInfo& FItemInfo, int32 SlotIndex, int32 Count, struct FContainerPickupsInfo* ContainerPickupsInfo);
	void On_Main_Selector_Category_Changed(int32 Param_Index);
	void OnAccept(class UJSI_Slot_C* Ref, int32 CurrentValue);
	void OnDecline();
	void OnDoubleClick(class UJSI_Slot_C* Ref, int32 CurrentValue);
	void OnDropInfoContainerToContainer(class UJSIContainer_C* From, class UJSIContainer_C* To, class UJSI_Slot_C* FromSlotRef, class UJSI_Slot_C* ToSlotRef, bool ToEmptySlot_, bool MovedAll_);
	void OnMainSelectorCategoryHoarderChanged(int32 Param_Index);
	void OnRecalculateRepairAllPrice__DelegateSignature(bool bEnoughMoney);
	void OnSelectedAliases(class UWBP_Aliases_C* Ref);
	void OnSlotDoubleClick(class UJSIContainer_C* Container, class UJSI_Slot_C* SlotRef, const struct FKey& Button);
	void OnSlotDoubleClicked(class UJSIContainer_C* Container, class UJSI_Slot_C* SlotRef, const struct FKey& Button);
	void Play_ClickNegative_2DEvent();
	void PocketMouseButtonDown(class UJSIContainer_C* Container, class UJSI_Slot_C* SlotRef, const struct FKey& Button);
	void PreConstruct(bool IsDesignTime);
	void Repair_All();
	void SellItem(const struct FFItemInfo& FItemInfo, int32 Count, int32 SlotIndex);
	void SellProcess(class UJSI_Slot_C* JSISlot, bool Param_OnAccept, int32 CountForSell);
	void SellProcessByItemRef(class UJSI_Slot_C* Item_Ref);
	void SetCountFItem(class UJSI_Slot_C* JSISlot, int32 Count, struct FFItemInfo* FItemInfo);
	void SetUpdateRPCount();
	void Show();
	void ShowDialogue(const struct FFItemInfo& FItemInfo, class UJSI_Slot_C* JSISlot, bool IsSell, bool IsBuyback);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateInventory(bool Toggle_Price_Shop);
	void UpdatePrice();
	void _learUsedStatus();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShopContainerWidget_C">();
	}
	static class UShopContainerWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShopContainerWidget_C>();
	}
};
static_assert(alignof(UShopContainerWidget_C) == 0x000008, "Wrong alignment on UShopContainerWidget_C");
static_assert(sizeof(UShopContainerWidget_C) == 0x0003C8, "Wrong size on UShopContainerWidget_C");
static_assert(offsetof(UShopContainerWidget_C, UberGraphFrame) == 0x000280, "Member 'UShopContainerWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShopContainerWidget_C, Close) == 0x000288, "Member 'UShopContainerWidget_C::Close' has a wrong offset!");
static_assert(offsetof(UShopContainerWidget_C, Button_124) == 0x000290, "Member 'UShopContainerWidget_C::Button_124' has a wrong offset!");
static_assert(offsetof(UShopContainerWidget_C, ScrollBox_Aliases) == 0x000298, "Member 'UShopContainerWidget_C::ScrollBox_Aliases' has a wrong offset!");
static_assert(offsetof(UShopContainerWidget_C, ScrollBox_Items) == 0x0002A0, "Member 'UShopContainerWidget_C::ScrollBox_Items' has a wrong offset!");
static_assert(offsetof(UShopContainerWidget_C, ShopContainer) == 0x0002A8, "Member 'UShopContainerWidget_C::ShopContainer' has a wrong offset!");
static_assert(offsetof(UShopContainerWidget_C, ShopContainer_Buyback) == 0x0002B0, "Member 'UShopContainerWidget_C::ShopContainer_Buyback' has a wrong offset!");
static_assert(offsetof(UShopContainerWidget_C, SizeBox_0) == 0x0002B8, "Member 'UShopContainerWidget_C::SizeBox_0' has a wrong offset!");
static_assert(offsetof(UShopContainerWidget_C, UMG_LabelText) == 0x0002C0, "Member 'UShopContainerWidget_C::UMG_LabelText' has a wrong offset!");
static_assert(offsetof(UShopContainerWidget_C, UMG_LabelText_226) == 0x0002C8, "Member 'UShopContainerWidget_C::UMG_LabelText_226' has a wrong offset!");
static_assert(offsetof(UShopContainerWidget_C, VerticalBox_Content) == 0x0002D0, "Member 'UShopContainerWidget_C::VerticalBox_Content' has a wrong offset!");
static_assert(offsetof(UShopContainerWidget_C, VerticalBox_Content_Aliases) == 0x0002D8, "Member 'UShopContainerWidget_C::VerticalBox_Content_Aliases' has a wrong offset!");
static_assert(offsetof(UShopContainerWidget_C, WBP_AliasesScroller) == 0x0002E0, "Member 'UShopContainerWidget_C::WBP_AliasesScroller' has a wrong offset!");
static_assert(offsetof(UShopContainerWidget_C, WBP_ShopScroller) == 0x0002E8, "Member 'UShopContainerWidget_C::WBP_ShopScroller' has a wrong offset!");
static_assert(offsetof(UShopContainerWidget_C, WidgetSwitcher_0) == 0x0002F0, "Member 'UShopContainerWidget_C::WidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UShopContainerWidget_C, WidgetSwitcher_1) == 0x0002F8, "Member 'UShopContainerWidget_C::WidgetSwitcher_1' has a wrong offset!");
static_assert(offsetof(UShopContainerWidget_C, WidgetSwitcher_Scroller) == 0x000300, "Member 'UShopContainerWidget_C::WidgetSwitcher_Scroller' has a wrong offset!");
static_assert(offsetof(UShopContainerWidget_C, ShopRef) == 0x000308, "Member 'UShopContainerWidget_C::ShopRef' has a wrong offset!");
static_assert(offsetof(UShopContainerWidget_C, TraderName) == 0x000310, "Member 'UShopContainerWidget_C::TraderName' has a wrong offset!");
static_assert(offsetof(UShopContainerWidget_C, Pocket_Container) == 0x000328, "Member 'UShopContainerWidget_C::Pocket_Container' has a wrong offset!");
static_assert(offsetof(UShopContainerWidget_C, Inventory_Ref) == 0x000330, "Member 'UShopContainerWidget_C::Inventory_Ref' has a wrong offset!");
static_assert(offsetof(UShopContainerWidget_C, EntryList) == 0x000338, "Member 'UShopContainerWidget_C::EntryList' has a wrong offset!");
static_assert(offsetof(UShopContainerWidget_C, ValidItems) == 0x000348, "Member 'UShopContainerWidget_C::ValidItems' has a wrong offset!");
static_assert(offsetof(UShopContainerWidget_C, bHaveItemsToRepair) == 0x000358, "Member 'UShopContainerWidget_C::bHaveItemsToRepair' has a wrong offset!");
static_assert(offsetof(UShopContainerWidget_C, OnRecalculateRepairAllPrice) == 0x000360, "Member 'UShopContainerWidget_C::OnRecalculateRepairAllPrice' has a wrong offset!");
static_assert(offsetof(UShopContainerWidget_C, AliasesArray) == 0x000370, "Member 'UShopContainerWidget_C::AliasesArray' has a wrong offset!");
static_assert(offsetof(UShopContainerWidget_C, Selected_Aliases) == 0x000380, "Member 'UShopContainerWidget_C::Selected_Aliases' has a wrong offset!");
static_assert(offsetof(UShopContainerWidget_C, ShopDialogue) == 0x000388, "Member 'UShopContainerWidget_C::ShopDialogue' has a wrong offset!");
static_assert(offsetof(UShopContainerWidget_C, CloseShop) == 0x000390, "Member 'UShopContainerWidget_C::CloseShop' has a wrong offset!");
static_assert(offsetof(UShopContainerWidget_C, PageIndex) == 0x0003A0, "Member 'UShopContainerWidget_C::PageIndex' has a wrong offset!");
static_assert(offsetof(UShopContainerWidget_C, ShopModalWindow) == 0x0003A8, "Member 'UShopContainerWidget_C::ShopModalWindow' has a wrong offset!");
static_assert(offsetof(UShopContainerWidget_C, IsModalWindow) == 0x0003B0, "Member 'UShopContainerWidget_C::IsModalWindow' has a wrong offset!");
static_assert(offsetof(UShopContainerWidget_C, ModalWindowItemRef) == 0x0003B8, "Member 'UShopContainerWidget_C::ModalWindowItemRef' has a wrong offset!");
static_assert(offsetof(UShopContainerWidget_C, ModalWindowCurrentValue) == 0x0003C0, "Member 'UShopContainerWidget_C::ModalWindowCurrentValue' has a wrong offset!");

}

