#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_BaseDragWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"
#include "FItemInfo_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "E_ItemColorTypes_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_BaseDragWidget.W_BaseDragWidget_C
// 0x0370 (0x05F0 - 0x0280)
class UW_BaseDragWidget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_ImageCanvas;                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Root;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BG;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ColorGradient;                               // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ItemIcon;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Count;                                   // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                         Pad_2B8[0x8];                                      // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            Item_Brush;                                        // 0x02C0(0x00D0)(Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn)
	int32                                         Count;                                             // 0x0390(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bIsRotated;                                        // 0x0394(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_395[0x3];                                      // 0x0395(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFItemInfo                             ItemInfo;                                          // 0x0398(0x0220)(Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsKeyDown;                                         // 0x05B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B9[0x7];                                      // 0x05B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDragDropOperation*                     DragDropOpenrationRef;                             // 0x05C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          InitRotation;                                      // 0x05C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C9[0x7];                                      // 0x05C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              MoveOffset;                                        // 0x05D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_BaseSlot_C*                          SlotRef;                                           // 0x05E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_W_BaseDragWidget(int32 EntryPoint);
	void GetPivotIndex(const struct FVector2D& Param_MoveOffset, int32* Param_Index);
	void GetRotationOffset(const struct FVector2D& Param_MoveOffset, struct FVector2D* RotationOffset);
	void PreConstruct(bool IsDesignTime);
	void RotateItem();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

	struct FVector2D GetMoveOffset() const;
	void GetSlotBrushes(struct FSlateBrush* BG_Brush, struct FSlateBrush* Gradient_Brush) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_BaseDragWidget_C">();
	}
	static class UW_BaseDragWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_BaseDragWidget_C>();
	}
};
static_assert(alignof(UW_BaseDragWidget_C) == 0x000010, "Wrong alignment on UW_BaseDragWidget_C");
static_assert(sizeof(UW_BaseDragWidget_C) == 0x0005F0, "Wrong size on UW_BaseDragWidget_C");
static_assert(offsetof(UW_BaseDragWidget_C, UberGraphFrame) == 0x000280, "Member 'UW_BaseDragWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_BaseDragWidget_C, CanvasPanel_ImageCanvas) == 0x000288, "Member 'UW_BaseDragWidget_C::CanvasPanel_ImageCanvas' has a wrong offset!");
static_assert(offsetof(UW_BaseDragWidget_C, CanvasPanel_Root) == 0x000290, "Member 'UW_BaseDragWidget_C::CanvasPanel_Root' has a wrong offset!");
static_assert(offsetof(UW_BaseDragWidget_C, Image_BG) == 0x000298, "Member 'UW_BaseDragWidget_C::Image_BG' has a wrong offset!");
static_assert(offsetof(UW_BaseDragWidget_C, Image_ColorGradient) == 0x0002A0, "Member 'UW_BaseDragWidget_C::Image_ColorGradient' has a wrong offset!");
static_assert(offsetof(UW_BaseDragWidget_C, Image_ItemIcon) == 0x0002A8, "Member 'UW_BaseDragWidget_C::Image_ItemIcon' has a wrong offset!");
static_assert(offsetof(UW_BaseDragWidget_C, TextBlock_Count) == 0x0002B0, "Member 'UW_BaseDragWidget_C::TextBlock_Count' has a wrong offset!");
static_assert(offsetof(UW_BaseDragWidget_C, Item_Brush) == 0x0002C0, "Member 'UW_BaseDragWidget_C::Item_Brush' has a wrong offset!");
static_assert(offsetof(UW_BaseDragWidget_C, Count) == 0x000390, "Member 'UW_BaseDragWidget_C::Count' has a wrong offset!");
static_assert(offsetof(UW_BaseDragWidget_C, bIsRotated) == 0x000394, "Member 'UW_BaseDragWidget_C::bIsRotated' has a wrong offset!");
static_assert(offsetof(UW_BaseDragWidget_C, ItemInfo) == 0x000398, "Member 'UW_BaseDragWidget_C::ItemInfo' has a wrong offset!");
static_assert(offsetof(UW_BaseDragWidget_C, IsKeyDown) == 0x0005B8, "Member 'UW_BaseDragWidget_C::IsKeyDown' has a wrong offset!");
static_assert(offsetof(UW_BaseDragWidget_C, DragDropOpenrationRef) == 0x0005C0, "Member 'UW_BaseDragWidget_C::DragDropOpenrationRef' has a wrong offset!");
static_assert(offsetof(UW_BaseDragWidget_C, InitRotation) == 0x0005C8, "Member 'UW_BaseDragWidget_C::InitRotation' has a wrong offset!");
static_assert(offsetof(UW_BaseDragWidget_C, MoveOffset) == 0x0005D0, "Member 'UW_BaseDragWidget_C::MoveOffset' has a wrong offset!");
static_assert(offsetof(UW_BaseDragWidget_C, SlotRef) == 0x0005E0, "Member 'UW_BaseDragWidget_C::SlotRef' has a wrong offset!");

}

