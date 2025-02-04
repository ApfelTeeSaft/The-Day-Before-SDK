#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_NavigationHint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_NavigationHint.W_NavigationHint_C
// 0x0038 (0x02B8 - 0x0280)
class UW_NavigationHint_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Fade;                                              // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_BG;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Content;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         RichTextBlock_Content;                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         RichTextBlock_Header;                              // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_HintButtonNew_C*                     W_HintButtonNew;                                   // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_W_NavigationHint(int32 EntryPoint);
	void FadeIn();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_NavigationHint_C">();
	}
	static class UW_NavigationHint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_NavigationHint_C>();
	}
};
static_assert(alignof(UW_NavigationHint_C) == 0x000008, "Wrong alignment on UW_NavigationHint_C");
static_assert(sizeof(UW_NavigationHint_C) == 0x0002B8, "Wrong size on UW_NavigationHint_C");
static_assert(offsetof(UW_NavigationHint_C, UberGraphFrame) == 0x000280, "Member 'UW_NavigationHint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_NavigationHint_C, Fade) == 0x000288, "Member 'UW_NavigationHint_C::Fade' has a wrong offset!");
static_assert(offsetof(UW_NavigationHint_C, Image_BG) == 0x000290, "Member 'UW_NavigationHint_C::Image_BG' has a wrong offset!");
static_assert(offsetof(UW_NavigationHint_C, Image_Content) == 0x000298, "Member 'UW_NavigationHint_C::Image_Content' has a wrong offset!");
static_assert(offsetof(UW_NavigationHint_C, RichTextBlock_Content) == 0x0002A0, "Member 'UW_NavigationHint_C::RichTextBlock_Content' has a wrong offset!");
static_assert(offsetof(UW_NavigationHint_C, RichTextBlock_Header) == 0x0002A8, "Member 'UW_NavigationHint_C::RichTextBlock_Header' has a wrong offset!");
static_assert(offsetof(UW_NavigationHint_C, W_HintButtonNew) == 0x0002B0, "Member 'UW_NavigationHint_C::W_HintButtonNew' has a wrong offset!");

}

