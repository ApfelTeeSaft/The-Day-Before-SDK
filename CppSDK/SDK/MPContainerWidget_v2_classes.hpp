#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MPContainerWidget_v2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MPContainerWidget_v2.MPContainerWidget_v2_C
// 0x0060 (0x02E0 - 0x0280)
class UMPContainerWidget_v2_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_EmptyBG;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_TextBG;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Empty;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_38;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_LootEntry_C*>               ArrayOfItems;                                      // 0x02A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             OnEntryDragged;                                    // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnContainerDropped;                                // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWBP_LootEntry_C*                       DraggedEntry;                                      // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void AddItem(const struct FFItemInfo& ItemInfo, class UWBP_LootEntry_C** EntryRef);
	void Clear();
	void EntryDragged(class UWBP_LootEntry_C* EntryRef);
	void ExecuteUbergraph_MPContainerWidget_v2(int32 EntryPoint);
	void OnContainerDropped__DelegateSignature(class UJSIContainer_C* FromContainerRef, class UJSI_Slot_C* FromSlotRef, class UWBP_LootEntry_C* ToEntryRef, class UJSI_Slot_C* ToSlotRef);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnEntryDragged__DelegateSignature(class UWBP_LootEntry_C* EntryRef);
	void RemoveItem(const struct FFItemInfo& ItemInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MPContainerWidget_v2_C">();
	}
	static class UMPContainerWidget_v2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMPContainerWidget_v2_C>();
	}
};
static_assert(alignof(UMPContainerWidget_v2_C) == 0x000008, "Wrong alignment on UMPContainerWidget_v2_C");
static_assert(sizeof(UMPContainerWidget_v2_C) == 0x0002E0, "Wrong size on UMPContainerWidget_v2_C");
static_assert(offsetof(UMPContainerWidget_v2_C, UberGraphFrame) == 0x000280, "Member 'UMPContainerWidget_v2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMPContainerWidget_v2_C, Image_EmptyBG) == 0x000288, "Member 'UMPContainerWidget_v2_C::Image_EmptyBG' has a wrong offset!");
static_assert(offsetof(UMPContainerWidget_v2_C, Image_TextBG) == 0x000290, "Member 'UMPContainerWidget_v2_C::Image_TextBG' has a wrong offset!");
static_assert(offsetof(UMPContainerWidget_v2_C, SizeBox_Empty) == 0x000298, "Member 'UMPContainerWidget_v2_C::SizeBox_Empty' has a wrong offset!");
static_assert(offsetof(UMPContainerWidget_v2_C, VerticalBox_38) == 0x0002A0, "Member 'UMPContainerWidget_v2_C::VerticalBox_38' has a wrong offset!");
static_assert(offsetof(UMPContainerWidget_v2_C, ArrayOfItems) == 0x0002A8, "Member 'UMPContainerWidget_v2_C::ArrayOfItems' has a wrong offset!");
static_assert(offsetof(UMPContainerWidget_v2_C, OnEntryDragged) == 0x0002B8, "Member 'UMPContainerWidget_v2_C::OnEntryDragged' has a wrong offset!");
static_assert(offsetof(UMPContainerWidget_v2_C, OnContainerDropped) == 0x0002C8, "Member 'UMPContainerWidget_v2_C::OnContainerDropped' has a wrong offset!");
static_assert(offsetof(UMPContainerWidget_v2_C, DraggedEntry) == 0x0002D8, "Member 'UMPContainerWidget_v2_C::DraggedEntry' has a wrong offset!");

}

