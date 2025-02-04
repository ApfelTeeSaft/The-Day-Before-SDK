#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_WeightSlots

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_WeightSlots.WBP_WeightSlots_C
// 0x0060 (0x02E0 - 0x0280)
class UWBP_WeightSlots_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_64;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_318;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_0;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Slot;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_SlotMax;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Weight_3;                                // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         CountSlots;                                        // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2BC[0x4];                                      // 0x02BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASurvivalPlayer_C*                      As_Survival_Player;                                // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPaperSprite*                           SlotImage;                                         // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        HeightSizeImage;                                   // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        WidthSizeImage;                                    // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_WeightSlots(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void UpdateWeightSlots();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_WeightSlots_C">();
	}
	static class UWBP_WeightSlots_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_WeightSlots_C>();
	}
};
static_assert(alignof(UWBP_WeightSlots_C) == 0x000008, "Wrong alignment on UWBP_WeightSlots_C");
static_assert(sizeof(UWBP_WeightSlots_C) == 0x0002E0, "Wrong size on UWBP_WeightSlots_C");
static_assert(offsetof(UWBP_WeightSlots_C, UberGraphFrame) == 0x000280, "Member 'UWBP_WeightSlots_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_WeightSlots_C, Image_64) == 0x000288, "Member 'UWBP_WeightSlots_C::Image_64' has a wrong offset!");
static_assert(offsetof(UWBP_WeightSlots_C, Image_318) == 0x000290, "Member 'UWBP_WeightSlots_C::Image_318' has a wrong offset!");
static_assert(offsetof(UWBP_WeightSlots_C, SizeBox_0) == 0x000298, "Member 'UWBP_WeightSlots_C::SizeBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_WeightSlots_C, TextBlock_Slot) == 0x0002A0, "Member 'UWBP_WeightSlots_C::TextBlock_Slot' has a wrong offset!");
static_assert(offsetof(UWBP_WeightSlots_C, TextBlock_SlotMax) == 0x0002A8, "Member 'UWBP_WeightSlots_C::TextBlock_SlotMax' has a wrong offset!");
static_assert(offsetof(UWBP_WeightSlots_C, TextBlock_Weight_3) == 0x0002B0, "Member 'UWBP_WeightSlots_C::TextBlock_Weight_3' has a wrong offset!");
static_assert(offsetof(UWBP_WeightSlots_C, CountSlots) == 0x0002B8, "Member 'UWBP_WeightSlots_C::CountSlots' has a wrong offset!");
static_assert(offsetof(UWBP_WeightSlots_C, As_Survival_Player) == 0x0002C0, "Member 'UWBP_WeightSlots_C::As_Survival_Player' has a wrong offset!");
static_assert(offsetof(UWBP_WeightSlots_C, SlotImage) == 0x0002C8, "Member 'UWBP_WeightSlots_C::SlotImage' has a wrong offset!");
static_assert(offsetof(UWBP_WeightSlots_C, HeightSizeImage) == 0x0002D0, "Member 'UWBP_WeightSlots_C::HeightSizeImage' has a wrong offset!");
static_assert(offsetof(UWBP_WeightSlots_C, WidthSizeImage) == 0x0002D8, "Member 'UWBP_WeightSlots_C::WidthSizeImage' has a wrong offset!");

}

