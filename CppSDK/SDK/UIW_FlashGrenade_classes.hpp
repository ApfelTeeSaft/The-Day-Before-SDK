#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_FlashGrenade

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIW_FlashGrenade.UIW_FlashGrenade_C
// 0x0050 (0x02D0 - 0x0280)
class UUIW_FlashGrenade_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Flash3500;                                         // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       NewFlashOffCamera;                                 // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Flash2500;                                         // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Flash1500;                                         // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Flash;                                             // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 FlashEffect;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_31;                                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_63;                                          // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_205;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_UIW_FlashGrenade(int32 EntryPoint);
	struct FSlateBrush GetBrush_0();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIW_FlashGrenade_C">();
	}
	static class UUIW_FlashGrenade_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIW_FlashGrenade_C>();
	}
};
static_assert(alignof(UUIW_FlashGrenade_C) == 0x000008, "Wrong alignment on UUIW_FlashGrenade_C");
static_assert(sizeof(UUIW_FlashGrenade_C) == 0x0002D0, "Wrong size on UUIW_FlashGrenade_C");
static_assert(offsetof(UUIW_FlashGrenade_C, UberGraphFrame) == 0x000280, "Member 'UUIW_FlashGrenade_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUIW_FlashGrenade_C, Flash3500) == 0x000288, "Member 'UUIW_FlashGrenade_C::Flash3500' has a wrong offset!");
static_assert(offsetof(UUIW_FlashGrenade_C, NewFlashOffCamera) == 0x000290, "Member 'UUIW_FlashGrenade_C::NewFlashOffCamera' has a wrong offset!");
static_assert(offsetof(UUIW_FlashGrenade_C, Flash2500) == 0x000298, "Member 'UUIW_FlashGrenade_C::Flash2500' has a wrong offset!");
static_assert(offsetof(UUIW_FlashGrenade_C, Flash1500) == 0x0002A0, "Member 'UUIW_FlashGrenade_C::Flash1500' has a wrong offset!");
static_assert(offsetof(UUIW_FlashGrenade_C, Flash) == 0x0002A8, "Member 'UUIW_FlashGrenade_C::Flash' has a wrong offset!");
static_assert(offsetof(UUIW_FlashGrenade_C, FlashEffect) == 0x0002B0, "Member 'UUIW_FlashGrenade_C::FlashEffect' has a wrong offset!");
static_assert(offsetof(UUIW_FlashGrenade_C, Image_31) == 0x0002B8, "Member 'UUIW_FlashGrenade_C::Image_31' has a wrong offset!");
static_assert(offsetof(UUIW_FlashGrenade_C, Image_63) == 0x0002C0, "Member 'UUIW_FlashGrenade_C::Image_63' has a wrong offset!");
static_assert(offsetof(UUIW_FlashGrenade_C, Image_205) == 0x0002C8, "Member 'UUIW_FlashGrenade_C::Image_205' has a wrong offset!");

}
