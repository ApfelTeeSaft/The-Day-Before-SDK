#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Crosshair

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIW_Crosshair.UIW_Crosshair_C
// 0x00C8 (0x0348 - 0x0280)
class UUIW_Crosshair_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Weapon_RifleAnim;                                  // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       WeaponAnim;                                        // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           AimCanvas;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Crosshair;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_dot;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ReloadCanvas;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ReloadIcon;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ReloadProcess;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        AimSize;                                           // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurTime;                                           // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           SpacerSizingCor;                                   // 0x02D8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        DefScale;                                          // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAim;                                             // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E9[0x7];                                      // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           ReloadShineCor;                                    // 0x02F0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        CurReloadTime;                                     // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ReloadDuration;                                    // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ReloadAlpha;                                       // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReloadFadeOut;                                     // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_311[0x7];                                      // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CurProcessTime;                                    // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               ReloadProgressMat;                                 // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsReloading;                                       // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_329[0x7];                                      // 0x0329(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASurvivalPlayer_C*                      Player;                                            // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       PlayAnimation_0;                                   // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Shooting;                                          // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AimEvent(bool Aim);
	void AimScale(double UpScale);
	void Construct();
	void ExecuteUbergraph_UIW_Crosshair(int32 EntryPoint);
	void ReloadEvent(double Param_ReloadDuration);
	void ReloadShine();
	void SetProgress(double Percent);
	void SetSpacersSize(double NewSize);
	void ShootEvent();
	void SpacerSizing();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIW_Crosshair_C">();
	}
	static class UUIW_Crosshair_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIW_Crosshair_C>();
	}
};
static_assert(alignof(UUIW_Crosshair_C) == 0x000008, "Wrong alignment on UUIW_Crosshair_C");
static_assert(sizeof(UUIW_Crosshair_C) == 0x000348, "Wrong size on UUIW_Crosshair_C");
static_assert(offsetof(UUIW_Crosshair_C, UberGraphFrame) == 0x000280, "Member 'UUIW_Crosshair_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUIW_Crosshair_C, Weapon_RifleAnim) == 0x000288, "Member 'UUIW_Crosshair_C::Weapon_RifleAnim' has a wrong offset!");
static_assert(offsetof(UUIW_Crosshair_C, WeaponAnim) == 0x000290, "Member 'UUIW_Crosshair_C::WeaponAnim' has a wrong offset!");
static_assert(offsetof(UUIW_Crosshair_C, AimCanvas) == 0x000298, "Member 'UUIW_Crosshair_C::AimCanvas' has a wrong offset!");
static_assert(offsetof(UUIW_Crosshair_C, Image_Crosshair) == 0x0002A0, "Member 'UUIW_Crosshair_C::Image_Crosshair' has a wrong offset!");
static_assert(offsetof(UUIW_Crosshair_C, Image_dot) == 0x0002A8, "Member 'UUIW_Crosshair_C::Image_dot' has a wrong offset!");
static_assert(offsetof(UUIW_Crosshair_C, ReloadCanvas) == 0x0002B0, "Member 'UUIW_Crosshair_C::ReloadCanvas' has a wrong offset!");
static_assert(offsetof(UUIW_Crosshair_C, ReloadIcon) == 0x0002B8, "Member 'UUIW_Crosshair_C::ReloadIcon' has a wrong offset!");
static_assert(offsetof(UUIW_Crosshair_C, ReloadProcess) == 0x0002C0, "Member 'UUIW_Crosshair_C::ReloadProcess' has a wrong offset!");
static_assert(offsetof(UUIW_Crosshair_C, AimSize) == 0x0002C8, "Member 'UUIW_Crosshair_C::AimSize' has a wrong offset!");
static_assert(offsetof(UUIW_Crosshair_C, CurTime) == 0x0002D0, "Member 'UUIW_Crosshair_C::CurTime' has a wrong offset!");
static_assert(offsetof(UUIW_Crosshair_C, SpacerSizingCor) == 0x0002D8, "Member 'UUIW_Crosshair_C::SpacerSizingCor' has a wrong offset!");
static_assert(offsetof(UUIW_Crosshair_C, DefScale) == 0x0002E0, "Member 'UUIW_Crosshair_C::DefScale' has a wrong offset!");
static_assert(offsetof(UUIW_Crosshair_C, IsAim) == 0x0002E8, "Member 'UUIW_Crosshair_C::IsAim' has a wrong offset!");
static_assert(offsetof(UUIW_Crosshair_C, ReloadShineCor) == 0x0002F0, "Member 'UUIW_Crosshair_C::ReloadShineCor' has a wrong offset!");
static_assert(offsetof(UUIW_Crosshair_C, CurReloadTime) == 0x0002F8, "Member 'UUIW_Crosshair_C::CurReloadTime' has a wrong offset!");
static_assert(offsetof(UUIW_Crosshair_C, ReloadDuration) == 0x000300, "Member 'UUIW_Crosshair_C::ReloadDuration' has a wrong offset!");
static_assert(offsetof(UUIW_Crosshair_C, ReloadAlpha) == 0x000308, "Member 'UUIW_Crosshair_C::ReloadAlpha' has a wrong offset!");
static_assert(offsetof(UUIW_Crosshair_C, ReloadFadeOut) == 0x000310, "Member 'UUIW_Crosshair_C::ReloadFadeOut' has a wrong offset!");
static_assert(offsetof(UUIW_Crosshair_C, CurProcessTime) == 0x000318, "Member 'UUIW_Crosshair_C::CurProcessTime' has a wrong offset!");
static_assert(offsetof(UUIW_Crosshair_C, ReloadProgressMat) == 0x000320, "Member 'UUIW_Crosshair_C::ReloadProgressMat' has a wrong offset!");
static_assert(offsetof(UUIW_Crosshair_C, IsReloading) == 0x000328, "Member 'UUIW_Crosshair_C::IsReloading' has a wrong offset!");
static_assert(offsetof(UUIW_Crosshair_C, Player) == 0x000330, "Member 'UUIW_Crosshair_C::Player' has a wrong offset!");
static_assert(offsetof(UUIW_Crosshair_C, PlayAnimation_0) == 0x000338, "Member 'UUIW_Crosshair_C::PlayAnimation_0' has a wrong offset!");
static_assert(offsetof(UUIW_Crosshair_C, Shooting) == 0x000340, "Member 'UUIW_Crosshair_C::Shooting' has a wrong offset!");

}

