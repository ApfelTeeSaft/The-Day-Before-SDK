#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_FurnitureShopButtons

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_FurnitureShopButtons.WBP_FurnitureShopButtons_C
// 0x01B0 (0x0430 - 0x0280)
class UWBP_FurnitureShopButtons_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border_0;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_100;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Box_C;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Box_F;                                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Box_H;                                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Box_K;                                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Box_R;                                             // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Box_Rotate;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Box_Sell;                                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Box_Tab;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_HintButtonNew_C*                     Button_C;                                          // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_HintButtonNew_C*                     Button_F;                                          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_HintButtonNew_C*                     Button_H;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_HintButtonNew_C*                     Button_K;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_HintButtonNew_C*                     Button_R;                                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_HintButtonNew_C*                     Button_Tab;                                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_InventoryButtons;                    // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_92;                                          // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NameItem;                                          // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PriceItem;                                         // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_FurnitureShop_C*                   FurnitureShopWidget;                               // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerRoomBP_C*                        PlayerRoom;                                        // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bIsActivatedChangeMode;                            // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_339[0x7];                                      // 0x0339(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ARoomItemBaseBP_C*                      FocusedItem_Copy;                                  // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FText                                   FButtonText_Put;                                   // 0x0348(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWBP_FurnitureShopAcceptBuyWidget_C*    AcceptWidget;                                      // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_CarShopAcceptBuyWindow_C*          SellConfirmWidget;                                 // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ASurvPC_C*                              CachedController;                                  // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ASurvivalPlayer_C*                      SurvivalPlayer;                                    // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UWBP_FurnitureBuyItemHint_C*            WBP_Furniture_Buy_Item_Hint;                       // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CurrentCamMode;                                    // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TEMPCamMode;                                       // 0x0389(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38A[0x2];                                      // 0x038A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FadeDuration;                                      // 0x038C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Fade_Time;                                         // 0x0390(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Fade_Delay;                                        // 0x0394(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   FButtonText_Take;                                  // 0x0398(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          NewVar;                                            // 0x03B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B1[0x7];                                      // 0x03B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   FButtonText_BuyAndPut;                             // 0x03B8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_GameHUD_C*                          HUD;                                               // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnCloseEditMode;                                   // 0x03D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWBP_CarShop_C*                         CarShop;                                           // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           DelayTimer;                                        // 0x03F0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bWasFade_;                                         // 0x03F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F9[0x7];                                      // 0x03F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_TipsInfo_C*                        WBP_Tips_Info;                                     // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_RadialInteraction_C*               WBP_Radial_Interaction;                            // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsCarShopOpened;                                  // 0x0410(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_411[0x7];                                      // 0x0411(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnOpenBuildMode;                                   // 0x0418(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsBuildModeOpened;                                // 0x0428(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsTakedFurniture;                                  // 0x0429(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CheckTutorial_PlaceBed();
	void CloseBuildUI();
	void ConfirmItem();
	void ConfirmItem_Copy();
	void Construct();
	void CreateCamera(bool Bool);
	void DestroyPreviewFurniture();
	void Edit_Mode(bool EditMode);
	void ExecuteUbergraph_WBP_FurnitureShopButtons(int32 EntryPoint);
	void FadeOut();
	void FADEOUTFalse();
	void FADEOUTfalse1();
	void OnActivatedBuildMode();
	void OnActivatedCatalog();
	void OnActivatedChangeMode();
	void OnBuyBlock();
	void OnBuyBuildConfirm(bool Success);
	void OnBuyConfirm();
	void OnCancelChangeMode();
	void OnCancelSell();
	void OnChooseFurniture();
	void OnCloseCatalog();
	void OnCloseEditMode__DelegateSignature();
	void OnExitCarShop();
	void OnHideButtons();
	void OnHideRadialMenu();
	void OnOpenBuildMode__DelegateSignature(class FName BindInputActionForCatalog);
	void OnOpenCarShop();
	void OnOpenRoomUI();
	void OnOpenRoomUICustom();
	void OnPreparingUpgradeTeleport();
	void OnPressedAcceptOK();
	void OnPutBuildConfirm(bool Success);
	void OnPutToNewLocation();
	void OnResetShowWarning();
	void OnResetTipsPaddings();
	void OnRotateItemLeft();
	void OnRotateItemRight();
	void OnSellConfirm();
	void OnSellFurniture();
	void OnShowRadialMenu();
	void OnSlidesTutorialClosed();
	void OnSlidesTutorialShow();
	void OnStopSpamTimer();
	void PreConstruct(bool IsDesignTime);
	void SellItem();
	void ShowLeaderRadioMessage();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void TutorStageChanged(const class FString& StageName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_FurnitureShopButtons_C">();
	}
	static class UWBP_FurnitureShopButtons_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_FurnitureShopButtons_C>();
	}
};
static_assert(alignof(UWBP_FurnitureShopButtons_C) == 0x000008, "Wrong alignment on UWBP_FurnitureShopButtons_C");
static_assert(sizeof(UWBP_FurnitureShopButtons_C) == 0x000430, "Wrong size on UWBP_FurnitureShopButtons_C");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, UberGraphFrame) == 0x000280, "Member 'UWBP_FurnitureShopButtons_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, Border_0) == 0x000288, "Member 'UWBP_FurnitureShopButtons_C::Border_0' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, Border_100) == 0x000290, "Member 'UWBP_FurnitureShopButtons_C::Border_100' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, Box_C) == 0x000298, "Member 'UWBP_FurnitureShopButtons_C::Box_C' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, Box_F) == 0x0002A0, "Member 'UWBP_FurnitureShopButtons_C::Box_F' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, Box_H) == 0x0002A8, "Member 'UWBP_FurnitureShopButtons_C::Box_H' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, Box_K) == 0x0002B0, "Member 'UWBP_FurnitureShopButtons_C::Box_K' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, Box_R) == 0x0002B8, "Member 'UWBP_FurnitureShopButtons_C::Box_R' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, Box_Rotate) == 0x0002C0, "Member 'UWBP_FurnitureShopButtons_C::Box_Rotate' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, Box_Sell) == 0x0002C8, "Member 'UWBP_FurnitureShopButtons_C::Box_Sell' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, Box_Tab) == 0x0002D0, "Member 'UWBP_FurnitureShopButtons_C::Box_Tab' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, Button_C) == 0x0002D8, "Member 'UWBP_FurnitureShopButtons_C::Button_C' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, Button_F) == 0x0002E0, "Member 'UWBP_FurnitureShopButtons_C::Button_F' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, Button_H) == 0x0002E8, "Member 'UWBP_FurnitureShopButtons_C::Button_H' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, Button_K) == 0x0002F0, "Member 'UWBP_FurnitureShopButtons_C::Button_K' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, Button_R) == 0x0002F8, "Member 'UWBP_FurnitureShopButtons_C::Button_R' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, Button_Tab) == 0x000300, "Member 'UWBP_FurnitureShopButtons_C::Button_Tab' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, HorizontalBox_InventoryButtons) == 0x000308, "Member 'UWBP_FurnitureShopButtons_C::HorizontalBox_InventoryButtons' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, Image_92) == 0x000310, "Member 'UWBP_FurnitureShopButtons_C::Image_92' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, NameItem) == 0x000318, "Member 'UWBP_FurnitureShopButtons_C::NameItem' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, PriceItem) == 0x000320, "Member 'UWBP_FurnitureShopButtons_C::PriceItem' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, FurnitureShopWidget) == 0x000328, "Member 'UWBP_FurnitureShopButtons_C::FurnitureShopWidget' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, PlayerRoom) == 0x000330, "Member 'UWBP_FurnitureShopButtons_C::PlayerRoom' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, bIsActivatedChangeMode) == 0x000338, "Member 'UWBP_FurnitureShopButtons_C::bIsActivatedChangeMode' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, FocusedItem_Copy) == 0x000340, "Member 'UWBP_FurnitureShopButtons_C::FocusedItem_Copy' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, FButtonText_Put) == 0x000348, "Member 'UWBP_FurnitureShopButtons_C::FButtonText_Put' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, AcceptWidget) == 0x000360, "Member 'UWBP_FurnitureShopButtons_C::AcceptWidget' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, SellConfirmWidget) == 0x000368, "Member 'UWBP_FurnitureShopButtons_C::SellConfirmWidget' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, CachedController) == 0x000370, "Member 'UWBP_FurnitureShopButtons_C::CachedController' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, SurvivalPlayer) == 0x000378, "Member 'UWBP_FurnitureShopButtons_C::SurvivalPlayer' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, WBP_Furniture_Buy_Item_Hint) == 0x000380, "Member 'UWBP_FurnitureShopButtons_C::WBP_Furniture_Buy_Item_Hint' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, CurrentCamMode) == 0x000388, "Member 'UWBP_FurnitureShopButtons_C::CurrentCamMode' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, TEMPCamMode) == 0x000389, "Member 'UWBP_FurnitureShopButtons_C::TEMPCamMode' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, FadeDuration) == 0x00038C, "Member 'UWBP_FurnitureShopButtons_C::FadeDuration' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, Fade_Time) == 0x000390, "Member 'UWBP_FurnitureShopButtons_C::Fade_Time' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, Fade_Delay) == 0x000394, "Member 'UWBP_FurnitureShopButtons_C::Fade_Delay' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, FButtonText_Take) == 0x000398, "Member 'UWBP_FurnitureShopButtons_C::FButtonText_Take' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, NewVar) == 0x0003B0, "Member 'UWBP_FurnitureShopButtons_C::NewVar' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, FButtonText_BuyAndPut) == 0x0003B8, "Member 'UWBP_FurnitureShopButtons_C::FButtonText_BuyAndPut' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, HUD) == 0x0003D0, "Member 'UWBP_FurnitureShopButtons_C::HUD' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, OnCloseEditMode) == 0x0003D8, "Member 'UWBP_FurnitureShopButtons_C::OnCloseEditMode' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, CarShop) == 0x0003E8, "Member 'UWBP_FurnitureShopButtons_C::CarShop' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, DelayTimer) == 0x0003F0, "Member 'UWBP_FurnitureShopButtons_C::DelayTimer' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, bWasFade_) == 0x0003F8, "Member 'UWBP_FurnitureShopButtons_C::bWasFade_' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, WBP_Tips_Info) == 0x000400, "Member 'UWBP_FurnitureShopButtons_C::WBP_Tips_Info' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, WBP_Radial_Interaction) == 0x000408, "Member 'UWBP_FurnitureShopButtons_C::WBP_Radial_Interaction' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, bIsCarShopOpened) == 0x000410, "Member 'UWBP_FurnitureShopButtons_C::bIsCarShopOpened' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, OnOpenBuildMode) == 0x000418, "Member 'UWBP_FurnitureShopButtons_C::OnOpenBuildMode' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, bIsBuildModeOpened) == 0x000428, "Member 'UWBP_FurnitureShopButtons_C::bIsBuildModeOpened' has a wrong offset!");
static_assert(offsetof(UWBP_FurnitureShopButtons_C, IsTakedFurniture) == 0x000429, "Member 'UWBP_FurnitureShopButtons_C::IsTakedFurniture' has a wrong offset!");

}
