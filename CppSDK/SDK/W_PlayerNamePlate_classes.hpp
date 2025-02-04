#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PlayerNamePlate

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_PlayerNamePlate.W_PlayerNamePlate_C
// 0x0030 (0x02B0 - 0x0280)
class UW_PlayerNamePlate_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Fade;                                              // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Name;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Fading;                                            // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Faded;                                             // 0x02A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          VisibleOnAim;                                      // 0x02AA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_W_PlayerNamePlate(int32 EntryPoint);
	void Hide();
	void SetColorAndName(const struct FSlateColor& TintColor, const class FText& InText);
	void SetScale(double Scale);
	void Show();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_PlayerNamePlate_C">();
	}
	static class UW_PlayerNamePlate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_PlayerNamePlate_C>();
	}
};
static_assert(alignof(UW_PlayerNamePlate_C) == 0x000008, "Wrong alignment on UW_PlayerNamePlate_C");
static_assert(sizeof(UW_PlayerNamePlate_C) == 0x0002B0, "Wrong size on UW_PlayerNamePlate_C");
static_assert(offsetof(UW_PlayerNamePlate_C, UberGraphFrame) == 0x000280, "Member 'UW_PlayerNamePlate_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_PlayerNamePlate_C, Fade) == 0x000288, "Member 'UW_PlayerNamePlate_C::Fade' has a wrong offset!");
static_assert(offsetof(UW_PlayerNamePlate_C, CanvasPanel_0) == 0x000290, "Member 'UW_PlayerNamePlate_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UW_PlayerNamePlate_C, Icon) == 0x000298, "Member 'UW_PlayerNamePlate_C::Icon' has a wrong offset!");
static_assert(offsetof(UW_PlayerNamePlate_C, TextBlock_Name) == 0x0002A0, "Member 'UW_PlayerNamePlate_C::TextBlock_Name' has a wrong offset!");
static_assert(offsetof(UW_PlayerNamePlate_C, Fading) == 0x0002A8, "Member 'UW_PlayerNamePlate_C::Fading' has a wrong offset!");
static_assert(offsetof(UW_PlayerNamePlate_C, Faded) == 0x0002A9, "Member 'UW_PlayerNamePlate_C::Faded' has a wrong offset!");
static_assert(offsetof(UW_PlayerNamePlate_C, VisibleOnAim) == 0x0002AA, "Member 'UW_PlayerNamePlate_C::VisibleOnAim' has a wrong offset!");

}

