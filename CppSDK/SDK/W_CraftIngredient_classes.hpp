#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_CraftIngredient

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_CraftIngredient.W_CraftIngredient_C
// 0x0040 (0x02C0 - 0x0280)
class UW_CraftIngredient_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       CantCraftAnim;                                     // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FillAnim;                                          // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_Icon;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Count;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        SpacerSizeY;                                       // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPaperSprite*                           SpriteIcon;                                        // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        IconSize;                                          // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CantCraftAnimPlay();
	void Enough();
	void ExecuteUbergraph_W_CraftIngredient(int32 EntryPoint);
	void NotEnough();
	void PreConstruct(bool IsDesignTime);
	void SetCount(int32 CurrentCount, int32 NeededCount);
	void SetCountOnly(int32 Count);
	void SetNeededCountOnly(int32 NeededCount);
	void StartFilling(double PlaybackSpeed);
	void StopFilling();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_CraftIngredient_C">();
	}
	static class UW_CraftIngredient_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_CraftIngredient_C>();
	}
};
static_assert(alignof(UW_CraftIngredient_C) == 0x000008, "Wrong alignment on UW_CraftIngredient_C");
static_assert(sizeof(UW_CraftIngredient_C) == 0x0002C0, "Wrong size on UW_CraftIngredient_C");
static_assert(offsetof(UW_CraftIngredient_C, UberGraphFrame) == 0x000280, "Member 'UW_CraftIngredient_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_CraftIngredient_C, CantCraftAnim) == 0x000288, "Member 'UW_CraftIngredient_C::CantCraftAnim' has a wrong offset!");
static_assert(offsetof(UW_CraftIngredient_C, FillAnim) == 0x000290, "Member 'UW_CraftIngredient_C::FillAnim' has a wrong offset!");
static_assert(offsetof(UW_CraftIngredient_C, Image_Icon) == 0x000298, "Member 'UW_CraftIngredient_C::Image_Icon' has a wrong offset!");
static_assert(offsetof(UW_CraftIngredient_C, TextBlock_Count) == 0x0002A0, "Member 'UW_CraftIngredient_C::TextBlock_Count' has a wrong offset!");
static_assert(offsetof(UW_CraftIngredient_C, SpacerSizeY) == 0x0002A8, "Member 'UW_CraftIngredient_C::SpacerSizeY' has a wrong offset!");
static_assert(offsetof(UW_CraftIngredient_C, SpriteIcon) == 0x0002B0, "Member 'UW_CraftIngredient_C::SpriteIcon' has a wrong offset!");
static_assert(offsetof(UW_CraftIngredient_C, IconSize) == 0x0002B8, "Member 'UW_CraftIngredient_C::IconSize' has a wrong offset!");

}
