#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_BaseContainer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_SlotStatus_structs.hpp"
#include "ContainerPickupsInfo_structs.hpp"
#include "E_BaseContainerType_structs.hpp"
#include "F_SlotSettings_structs.hpp"
#include "E_DragAndDropAvailability_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_BaseContainer.W_BaseContainer_C
// 0x0210 (0x0490 - 0x0280)
class UW_BaseContainer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUniformGridPanel*                      Grid_Content;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Highlighter;                                 // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	E_BaseContainerType                           ContainerType;                                     // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_299[0x3];                                      // 0x0299(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NumberOfRows;                                      // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumberOfColumns;                                   // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_DragAndDropAvailability                     DragAndDrop;                                       // 0x02A4(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A5[0x3];                                      // 0x02A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<int32, class UW_BaseSlot_C*>             SlotsWithItems;                                    // 0x02A8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay)
	struct FF_SlotSettings                        SlotSettings;                                      // 0x02F8(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             SlotEvent_StatusChanged;                           // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, AdvancedDisplay, BlueprintCallable)
	FMulticastInlineDelegateProperty_             SlotEvent_DragEnter;                               // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, AdvancedDisplay, BlueprintCallable)
	FMulticastInlineDelegateProperty_             SlotEvent_DragLeave;                               // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, AdvancedDisplay, BlueprintCallable)
	FMulticastInlineDelegateProperty_             SlotEvent_DragStarted;                             // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, AdvancedDisplay, BlueprintCallable)
	FMulticastInlineDelegateProperty_             SlotEvent_DragCanceled;                            // 0x0358(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, AdvancedDisplay, BlueprintCallable)
	FMulticastInlineDelegateProperty_             SlotEvent_Drop;                                    // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, AdvancedDisplay, BlueprintCallable)
	FMulticastInlineDelegateProperty_             SlotEvent_MouseButtonPressed;                      // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, AdvancedDisplay, BlueprintCallable)
	class UUserWidget*                            ParentWidget;                                      // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             SlotEvent_MouseButtonDoubleClicked;                // 0x0390(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, AdvancedDisplay, BlueprintCallable)
	FMulticastInlineDelegateProperty_             SlotEvent_Hover;                                   // 0x03A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, AdvancedDisplay, BlueprintCallable)
	FMulticastInlineDelegateProperty_             SlotEvent_Unhover;                                 // 0x03B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, AdvancedDisplay, BlueprintCallable)
	FMulticastInlineDelegateProperty_             ContainerEvent_ItemIndexChanged;                   // 0x03C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, AdvancedDisplay, BlueprintCallable)
	class UW_BaseSplitWidget_C*                   ActiveSplitWidget;                                 // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             ContainerEvent_SplitItemBetweenSlots;              // 0x03D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, AdvancedDisplay, BlueprintCallable)
	struct FContainerPickupsInfo                  DataOfHostedItem;                                  // 0x03E8(0x0068)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, HasGetValueTypeHash)
	bool                                          bNeedToCreateSplitWidget;                          // 0x0450(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                          bIsContainerHost;                                  // 0x0451(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_452[0x6];                                      // 0x0452(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_BaseDragWidget_C*                    ActiveDragWidget;                                  // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                          bIsHostRotationChanged;                            // 0x0460(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_461[0x7];                                      // 0x0461(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             SlotEvent_Stack;                                   // 0x0468(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<int32>                                 PricelessList;                                     // 0x0478(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly)
	class UClass*                                 SlotClass;                                         // 0x0488(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	void AddHostedData(class UW_BaseSlot_C* Param_Slot, bool RemoveHostFromContainer);
	void AddItemBySlotIndex(int32 Param_Index, const struct FContainerPickupsInfo& Item);
	void AddItemSomewhere(const struct FContainerPickupsInfo& Item);
	void AddSplitedItemToSlot(int32 SplitCount, class UW_BaseSlot_C* RecipientSlot);
	void BindSplitWidgetEvents(class UW_BaseSplitWidget_C* SplitWidget);
	void CalculateHighlighterDim(TArray<class UW_BaseSlot_C*>& Slots, struct FVector2D* Dimention);
	struct FVector2D CalculateHighlighterPosition(TArray<class UW_BaseSlot_C*>& HighlightedSlots);
	void Can_Drop_On_Slot(class UW_BaseContainer_C* SenderContainer, class UW_BaseSlot_C* RecipientSlot, bool* Can);
	void Can_Stack_On_Slot(const struct FFItemInfo& SenderItemInfo, class UW_BaseSlot_C* RecipientSlot, int32 ItemSizeX, int32 ItemSizeY, bool IsRotated, bool* Canstack, TArray<class UW_BaseSlot_C*>* TargetSlotsArray);
	void CanDrag(class UW_BaseSlot_C* Param_Slot, bool* Can);
	void CanDragItem(class UW_BaseSlot_C* Param_Slot);
	void ChangeCountOfHostedItem(int32 NewCount);
	void ChangeItemCount(int32 SlotIndex, int32 NewCount);
	void ClearContainer();
	void ClearHostedData();
	void Construct();
	void ContainerEvent_ItemIndexChanged__DelegateSignature(E_BaseContainerType Param_ContainerType, int32 OldIndex, int32 NewIndex);
	void ContainerEvent_SplitItemBetweenSlots__DelegateSignature(E_BaseContainerType Param_ContainerType, int32 SenderSlotIndex, int32 RecipientSlotIndex, int32 SplitCount);
	void CreateGrid();
	void Destruct();
	void ExecuteUbergraph_W_BaseContainer(int32 EntryPoint);
	void FindAndCheckTargetLocation(class UW_BaseSlot_C* RecipientSlot, int32 ItemSizeX, int32 ItemSizeY, bool IsRotated, bool* Candrop, TArray<class UW_BaseSlot_C*>* TargetSlotsArray);
	void FindEnvirons(int32 ItemSizeX, int32 ItemSizeY, int32 BaseIndex, TArray<class UW_BaseSlot_C*>* Slots);
	void Get_Recipient_Slot_with_Offset(int32 X_SenderSlotSize, int32 Y_SenderSlotSize, bool IsRotated, int32 RealRecipientSlotIndex, int32 DropPivotIndex, bool* Result, class UW_BaseSlot_C** RecipientSlot);
	void GetFirstValidItem(int32* Param_Index);
	void GetIndexOfHostedItem(int32* SlotIndex);
	void GetItemRef();
	int32 GetNumItems();
	void GetSlotByIndex(int32 SlotIndex, class UW_BaseSlot_C** Value);
	void GetSlotSettings(struct FF_SlotSettings* Param_SlotSettings);
	void HighlightSlots(int32 SlotIndex, const struct FVector2D& SlotDim, bool IsRotated, class UW_BaseSlot_C* SlotRef);
	void IsHostRotationChanged(bool* Param_bIsHostRotationChanged);
	bool IsItemPriceless(const int32& ItemId);
	void MoveHighlighter(class UW_BaseSlot_C* SlotRef, TArray<class UW_BaseSlot_C*>& HighlightedSlots, bool Candrop, bool Rotated);
	void MoveHostedItemToSlot(class UW_BaseSlot_C* RecipientSlot);
	void OccupySlotsForSizeOfItem(int32 ItemSlotSizeX, int32 ItemSlotSizeY, int32 ItemSlotIndex);
	void OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnInitialized();
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void RecalculateHighlighterSize(double SingleSlotSizeX, double SingleSlotSizeY, const struct FVector2D& Dimention, double DistanceBetweenSlots, struct FVector2D* Size);
	void Remove_Item_By_Slot_Index(int32 Param_Index);
	void ReturnHostedDataToSlot();
	bool SelfTestForSlots(class UW_BaseContainer_C* SenderContainer, class UW_BaseSlot_C* RecipientSlot);
	void SetCapacity(int32 Length);
	void SetCollisionEnabled(bool In_Is_Enabled);
	void SetHighlighterBrush(const struct FVector2D& Dim, bool IsRotated, bool Candrop, class UPaperSprite** BG_Sprite1);
	void SetHostedItemRotate(bool Rotated);
	void SetHostRotationChanged(bool Param_bIsHostRotationChanged);
	void Slot_Event_Stack_Binding(const struct FFItemInfo& SenderItemInfo, class UW_BaseSlot_C* RecipientSlot);
	void SlotEvent_DragCanceled__DelegateSignature(class UW_BaseSlot_C* SlotRef);
	void SlotEvent_DragCanceled_Binding(class UW_BaseSlot_C* SlotRef);
	void SlotEvent_DragEnter__DelegateSignature(class UW_BaseSlot_C* SlotRef);
	void SlotEvent_DragLeave__DelegateSignature(class UW_BaseSlot_C* SlotRef);
	void SlotEvent_DragStarted__DelegateSignature(class UW_BaseSlot_C* SlotRef, class UW_BaseDragWidget_C* DragWidget);
	void SlotEvent_DragStarted_Binding(class UW_BaseSlot_C* SlotRef, class UW_BaseDragWidget_C* DragWidget);
	void SlotEvent_Drop__DelegateSignature(class UW_BaseContainer_C* SenderContainer, class UW_BaseSlot_C* RecipientSlot);
	void SlotEvent_Drop_Binding(class UW_BaseContainer_C* SenderContainer, class UW_BaseSlot_C* RecipientSlot);
	void SlotEvent_Hover__DelegateSignature(class UW_BaseSlot_C* Param_Slot);
	void SlotEvent_MouseButtonDoubleClicked__DelegateSignature(class UW_BaseSlot_C* Param_Slot, const struct FPointerEvent& PointerEvent);
	void SlotEvent_MouseButtonPressed__DelegateSignature(class UW_BaseSlot_C* Param_Slot, const struct FPointerEvent& PointerEvent);
	void SlotEvent_Stack__DelegateSignature(const struct FFItemInfo& SenderItemInfo, class UW_BaseSlot_C* RecipientSlot);
	void SlotEvent_StatusChanged__DelegateSignature(class UW_BaseSlot_C* Param_Slot, E_SlotStatus Status);
	void SlotEvent_Unhover__DelegateSignature(class UW_BaseSlot_C* Param_Slot);
	void SplitWidgetEvent_OnAccept_Binding(int32 Count, class UW_BaseSlot_C* RecipientSlot, class UW_BaseContainer_C* SenderContainer);
	void SplitWidgetEvent_OnAcceptFull_Binding(class UW_BaseSlot_C* RecipientSlot, class UW_BaseContainer_C* SenderContainer);
	void SplitWidgetEvent_OnCancel_Binding(class UW_BaseContainer_C* SenderContainer);
	void UnbindSlplitWidgetEvents();

	void CalculateHighlighterSize(const struct FVector2D& SlotDim, bool IsRotated, struct FVector2D* HighlighterSize) const;
	void CanAddItem(const struct FContainerPickupsInfo& Item, bool* Can, bool* ToStack) const;
	void Get_Capacity(int32* Used, int32* MaxCapacity) const;
	void Get_Drop_Offset(int32 PivotIndex, int32 X_SlotSize, int32 Y_SlotSize, int32* X_Offset, int32* Y_Offset) const;
	void GetContainerType(E_BaseContainerType* Param_ContainerType) const;
	void GetCountOfHostedItem(int32* Count) const;
	void GetDataOfHostedItem(struct FContainerPickupsInfo* Param_DataOfHostedItem) const;
	void GetEmptySlot(const struct FContainerPickupsInfo& Item, bool* EmptySlotFound_, class UW_BaseSlot_C** SlotRef) const;
	void GetIndexBySlotLocation(int32 ColumnIndex_, int32 RowIndex_, int32* SlotIndex, bool* Result) const;
	void GetItemsWeight(double* Weight) const;
	void GetSizeOfHostedItem(int32* X, int32* Y) const;
	void GetSlotByItemId(int32 ItemId, class UW_BaseSlot_C** Slot_Ref, bool* SlotFound_) const;
	void GetSlotByName(class FName ItemName, class UW_BaseSlot_C** SlotWidget) const;
	void GetSlotLocationByIndex(int32 SlotIndex, int32* ColumnIndex_, int32* RowIndex_) const;
	void IsContainerHost_(bool* Result) const;
	void IsHostedItemRotate_(bool* Rotated) const;
	void NeedSplitEventForHostingItem_(bool* Res) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_BaseContainer_C">();
	}
	static class UW_BaseContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_BaseContainer_C>();
	}
};
static_assert(alignof(UW_BaseContainer_C) == 0x000008, "Wrong alignment on UW_BaseContainer_C");
static_assert(sizeof(UW_BaseContainer_C) == 0x000490, "Wrong size on UW_BaseContainer_C");
static_assert(offsetof(UW_BaseContainer_C, UberGraphFrame) == 0x000280, "Member 'UW_BaseContainer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_BaseContainer_C, Grid_Content) == 0x000288, "Member 'UW_BaseContainer_C::Grid_Content' has a wrong offset!");
static_assert(offsetof(UW_BaseContainer_C, Image_Highlighter) == 0x000290, "Member 'UW_BaseContainer_C::Image_Highlighter' has a wrong offset!");
static_assert(offsetof(UW_BaseContainer_C, ContainerType) == 0x000298, "Member 'UW_BaseContainer_C::ContainerType' has a wrong offset!");
static_assert(offsetof(UW_BaseContainer_C, NumberOfRows) == 0x00029C, "Member 'UW_BaseContainer_C::NumberOfRows' has a wrong offset!");
static_assert(offsetof(UW_BaseContainer_C, NumberOfColumns) == 0x0002A0, "Member 'UW_BaseContainer_C::NumberOfColumns' has a wrong offset!");
static_assert(offsetof(UW_BaseContainer_C, DragAndDrop) == 0x0002A4, "Member 'UW_BaseContainer_C::DragAndDrop' has a wrong offset!");
static_assert(offsetof(UW_BaseContainer_C, SlotsWithItems) == 0x0002A8, "Member 'UW_BaseContainer_C::SlotsWithItems' has a wrong offset!");
static_assert(offsetof(UW_BaseContainer_C, SlotSettings) == 0x0002F8, "Member 'UW_BaseContainer_C::SlotSettings' has a wrong offset!");
static_assert(offsetof(UW_BaseContainer_C, SlotEvent_StatusChanged) == 0x000318, "Member 'UW_BaseContainer_C::SlotEvent_StatusChanged' has a wrong offset!");
static_assert(offsetof(UW_BaseContainer_C, SlotEvent_DragEnter) == 0x000328, "Member 'UW_BaseContainer_C::SlotEvent_DragEnter' has a wrong offset!");
static_assert(offsetof(UW_BaseContainer_C, SlotEvent_DragLeave) == 0x000338, "Member 'UW_BaseContainer_C::SlotEvent_DragLeave' has a wrong offset!");
static_assert(offsetof(UW_BaseContainer_C, SlotEvent_DragStarted) == 0x000348, "Member 'UW_BaseContainer_C::SlotEvent_DragStarted' has a wrong offset!");
static_assert(offsetof(UW_BaseContainer_C, SlotEvent_DragCanceled) == 0x000358, "Member 'UW_BaseContainer_C::SlotEvent_DragCanceled' has a wrong offset!");
static_assert(offsetof(UW_BaseContainer_C, SlotEvent_Drop) == 0x000368, "Member 'UW_BaseContainer_C::SlotEvent_Drop' has a wrong offset!");
static_assert(offsetof(UW_BaseContainer_C, SlotEvent_MouseButtonPressed) == 0x000378, "Member 'UW_BaseContainer_C::SlotEvent_MouseButtonPressed' has a wrong offset!");
static_assert(offsetof(UW_BaseContainer_C, ParentWidget) == 0x000388, "Member 'UW_BaseContainer_C::ParentWidget' has a wrong offset!");
static_assert(offsetof(UW_BaseContainer_C, SlotEvent_MouseButtonDoubleClicked) == 0x000390, "Member 'UW_BaseContainer_C::SlotEvent_MouseButtonDoubleClicked' has a wrong offset!");
static_assert(offsetof(UW_BaseContainer_C, SlotEvent_Hover) == 0x0003A0, "Member 'UW_BaseContainer_C::SlotEvent_Hover' has a wrong offset!");
static_assert(offsetof(UW_BaseContainer_C, SlotEvent_Unhover) == 0x0003B0, "Member 'UW_BaseContainer_C::SlotEvent_Unhover' has a wrong offset!");
static_assert(offsetof(UW_BaseContainer_C, ContainerEvent_ItemIndexChanged) == 0x0003C0, "Member 'UW_BaseContainer_C::ContainerEvent_ItemIndexChanged' has a wrong offset!");
static_assert(offsetof(UW_BaseContainer_C, ActiveSplitWidget) == 0x0003D0, "Member 'UW_BaseContainer_C::ActiveSplitWidget' has a wrong offset!");
static_assert(offsetof(UW_BaseContainer_C, ContainerEvent_SplitItemBetweenSlots) == 0x0003D8, "Member 'UW_BaseContainer_C::ContainerEvent_SplitItemBetweenSlots' has a wrong offset!");
static_assert(offsetof(UW_BaseContainer_C, DataOfHostedItem) == 0x0003E8, "Member 'UW_BaseContainer_C::DataOfHostedItem' has a wrong offset!");
static_assert(offsetof(UW_BaseContainer_C, bNeedToCreateSplitWidget) == 0x000450, "Member 'UW_BaseContainer_C::bNeedToCreateSplitWidget' has a wrong offset!");
static_assert(offsetof(UW_BaseContainer_C, bIsContainerHost) == 0x000451, "Member 'UW_BaseContainer_C::bIsContainerHost' has a wrong offset!");
static_assert(offsetof(UW_BaseContainer_C, ActiveDragWidget) == 0x000458, "Member 'UW_BaseContainer_C::ActiveDragWidget' has a wrong offset!");
static_assert(offsetof(UW_BaseContainer_C, bIsHostRotationChanged) == 0x000460, "Member 'UW_BaseContainer_C::bIsHostRotationChanged' has a wrong offset!");
static_assert(offsetof(UW_BaseContainer_C, SlotEvent_Stack) == 0x000468, "Member 'UW_BaseContainer_C::SlotEvent_Stack' has a wrong offset!");
static_assert(offsetof(UW_BaseContainer_C, PricelessList) == 0x000478, "Member 'UW_BaseContainer_C::PricelessList' has a wrong offset!");
static_assert(offsetof(UW_BaseContainer_C, SlotClass) == 0x000488, "Member 'UW_BaseContainer_C::SlotClass' has a wrong offset!");

}
