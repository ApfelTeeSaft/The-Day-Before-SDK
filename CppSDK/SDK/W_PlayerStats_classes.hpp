#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PlayerStats

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "StatType_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "Survival_structs.hpp"
#include "BPE_FireMode_structs.hpp"
#include "BPE_Weapon_Type_structs.hpp"
#include "BPE_AmmoClass_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_PlayerStats.W_PlayerStats_C
// 0x01E8 (0x0468 - 0x0280)
class UW_PlayerStats_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ShowVoiceCommands;                                 // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HideBleeding;                                      // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShowBleeding;                                      // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HideAllStat;                                       // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShowAllStat;                                       // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HideMainStat;                                      // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShowMainStat;                                      // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShowHideAnim;                                      // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       TutorHungerStatsAnim;                              // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       TuturColdStatAnim;                                 // 0x02D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       TutorThirstStatsAnim;                              // 0x02D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_Hunger;                              // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_LowHealth;                           // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_Stats;                               // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_Thirst;                              // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Hunger_Icon;                                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_hunger;                                      // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_thirst;                                      // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spacer_Bleeding;                                   // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spacer_Thirst;                                     // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Thirst_Icon;                                       // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_Sprint_C*                          UIW_Sprint;                                        // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Ammo_C*                              W_Ammo;                                            // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_BleedingHint_C*                      W_BleedingHint;                                    // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_CancelHint_C*                        W_CancelHint;                                      // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_StatCircle_C*                        W_StatCircle_Cold;                                 // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_StatCircle_C*                        W_StatCircle_Hunger;                               // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_StatCircle_C*                        W_StatCircle_Thirst;                               // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_KeyIcon_C*                         WBP_KeyIcon_VoiceLines;                            // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_NegativeEffect_C*                  WBP_NegativeEffect_Bleeding;                       // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_NegativeEffect_C*                  WBP_NegativeEffect_BrokenArm;                      // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_NegativeEffect_C*                  WBP_NegativeEffect_DamagedBelly;                   // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_NegativeEffect_C*                  WBP_NegativeEffect_DamagedChest;                   // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_NegativeEffect_C*                  WBP_NegativeEffect_HeavyBleeding;                  // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_NegativeEffect_C*                  WBP_NegativeEffect_Overweight;                     // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Stat_C*                            WBP_Stat_Cold;                                     // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StatWithRedLine_C*                 WBP_Stat_HP;                                       // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Stat_C*                            WBP_Stat_Hunger;                                   // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Stat_C*                            WBP_Stat_Thirst;                                   // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ASurvivalPlayer_C*                      Player;                                            // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBPC_PlayerStatsComponent_C*            PlayerStatsRef;                                    // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          HealthbarIsVisible;                                // 0x03D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsVisibleStats;                                    // 0x03D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D2[0x6];                                      // 0x03D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           VisibleStatsTimerHandle;                           // 0x03D8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           AmmoTimerHandle;                                   // 0x03E0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          ForcedShowStat;                                    // 0x03E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E9[0x3];                                      // 0x03E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AutoHideDelay;                                     // 0x03EC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<EStatType, double>                       CurrentStatsValues;                                // 0x03F0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                           UpdaterTimerHandle;                                // 0x0440(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Aim;                                               // 0x0448(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_449[0x7];                                      // 0x0449(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           BleedingMessageTimerHandle;                        // 0x0450(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UUIW_PlayerMain_C*                      UIW_MainPlayer;                                    // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          bVoiceCommandsHintShowed;                          // 0x0460(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AimState(bool Param_Aim);
	void AmmoChangedEvent(EBPE_Weapon_Type WeaponType, EBPE_FireMode FireMode, EBPE_AmmoClass AmmoClass, int32 CurrentAmmo, int32 LowAmmo, int32 MaxAmmo, class UMaterialInterface* UIIcon);
	void CancelSwitcher(bool On_);
	void Change_Weapon();
	void ChangeFireType(EBPE_FireMode FireMode);
	void Construct();
	void Damaged_Weapon();
	void ExecuteUbergraph_W_PlayerStats(int32 EntryPoint);
	void Finished_80D4BDE14D754EA0DB5FB28FDDFBB3D4();
	void GetCriticalValue(EStatType CurrentStat, EStatType MaxStat, double TriggerPercent, bool* Result, double* CurrentValue);
	void HideAllStatsTrackEvent();
	void HideAmmoStat();
	void HideBleedingMessage();
	void HideHungerIcon();
	void HideLowHealthStatus();
	void HideThirstIcon();
	void InitNegativeEffects(class UBPC_NegativeEffects_C** BPC_NegativeEffects);
	void NegativeEffectChanged(bool On_, EUNegativeEffectType EffectType);
	void OnHPChange();
	void OnInitialized();
	void OnStatChange(EStatType StatKey);
	void OnStatChanged_Handler(EStatType StatKey);
	void PlayAnimation__ByCondition_(class UWidgetAnimation* Animation, EUMGSequencePlayMode PlayMode, bool RestoreState, bool* Result);
	void ReloadPressed();
	void SequenceEvent__ENTRYPOINTW_PlayerStats();
	void SequenceEvent__ENTRYPOINTW_PlayerStats_0();
	void SetAmmoVisibility(bool Visible);
	void SetStatsVisibility(bool Visible);
	void Show_Ammo_Stat();
	void ShowAllStats(bool Enabled);
	void ShowAllStatsTrackEvent();
	void ShowBleedingMessage();
	void ShowHungerIcon();
	void ShowLowHealthStatus();
	void ShowStats(bool CustomHideTime, double HideTime);
	void ShowThirstIcon();
	void ShowVoiceCommandsAfterLoad();
	void ShowVoiceCommandsHint(bool Show);
	void StopAnimations(TArray<class UWidgetAnimation*>& Animations);
	void SwitchAllStat__Hide_();
	void ToggleAmmoStat(double AnimationDelay);
	void TutorHideStats();
	void TutorHPAnimStart();
	void TutorHungerStatAnimStart();
	void TutorThirstStatAnimStart();
	void TutotColdStatAnim();
	void UnDamagedWeapon();
	void UnHideStats();
	void UpdateAmmo(EBPE_Weapon_Type WeaponType, EBPE_FireMode FireMode, EBPE_AmmoClass AmmoClass, int32 CurrentAmmo, int32 LowAmmo, int32 MaxAmmo, bool ForceUpdate);
	void Updater();
	void UpdateStamina();
	void UpdateStats();
	void UpdateUsingItem();
	void VisibilityAmmo(bool NewVisibility);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_PlayerStats_C">();
	}
	static class UW_PlayerStats_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_PlayerStats_C>();
	}
};
static_assert(alignof(UW_PlayerStats_C) == 0x000008, "Wrong alignment on UW_PlayerStats_C");
static_assert(sizeof(UW_PlayerStats_C) == 0x000468, "Wrong size on UW_PlayerStats_C");
static_assert(offsetof(UW_PlayerStats_C, UberGraphFrame) == 0x000280, "Member 'UW_PlayerStats_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, ShowVoiceCommands) == 0x000288, "Member 'UW_PlayerStats_C::ShowVoiceCommands' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, HideBleeding) == 0x000290, "Member 'UW_PlayerStats_C::HideBleeding' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, ShowBleeding) == 0x000298, "Member 'UW_PlayerStats_C::ShowBleeding' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, HideAllStat) == 0x0002A0, "Member 'UW_PlayerStats_C::HideAllStat' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, ShowAllStat) == 0x0002A8, "Member 'UW_PlayerStats_C::ShowAllStat' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, HideMainStat) == 0x0002B0, "Member 'UW_PlayerStats_C::HideMainStat' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, ShowMainStat) == 0x0002B8, "Member 'UW_PlayerStats_C::ShowMainStat' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, ShowHideAnim) == 0x0002C0, "Member 'UW_PlayerStats_C::ShowHideAnim' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, TutorHungerStatsAnim) == 0x0002C8, "Member 'UW_PlayerStats_C::TutorHungerStatsAnim' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, TuturColdStatAnim) == 0x0002D0, "Member 'UW_PlayerStats_C::TuturColdStatAnim' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, TutorThirstStatsAnim) == 0x0002D8, "Member 'UW_PlayerStats_C::TutorThirstStatsAnim' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, HorizontalBox_Hunger) == 0x0002E0, "Member 'UW_PlayerStats_C::HorizontalBox_Hunger' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, HorizontalBox_LowHealth) == 0x0002E8, "Member 'UW_PlayerStats_C::HorizontalBox_LowHealth' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, HorizontalBox_Stats) == 0x0002F0, "Member 'UW_PlayerStats_C::HorizontalBox_Stats' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, HorizontalBox_Thirst) == 0x0002F8, "Member 'UW_PlayerStats_C::HorizontalBox_Thirst' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, Hunger_Icon) == 0x000300, "Member 'UW_PlayerStats_C::Hunger_Icon' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, Image_hunger) == 0x000308, "Member 'UW_PlayerStats_C::Image_hunger' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, Image_thirst) == 0x000310, "Member 'UW_PlayerStats_C::Image_thirst' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, Spacer_Bleeding) == 0x000318, "Member 'UW_PlayerStats_C::Spacer_Bleeding' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, Spacer_Thirst) == 0x000320, "Member 'UW_PlayerStats_C::Spacer_Thirst' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, Thirst_Icon) == 0x000328, "Member 'UW_PlayerStats_C::Thirst_Icon' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, UIW_Sprint) == 0x000330, "Member 'UW_PlayerStats_C::UIW_Sprint' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, W_Ammo) == 0x000338, "Member 'UW_PlayerStats_C::W_Ammo' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, W_BleedingHint) == 0x000340, "Member 'UW_PlayerStats_C::W_BleedingHint' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, W_CancelHint) == 0x000348, "Member 'UW_PlayerStats_C::W_CancelHint' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, W_StatCircle_Cold) == 0x000350, "Member 'UW_PlayerStats_C::W_StatCircle_Cold' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, W_StatCircle_Hunger) == 0x000358, "Member 'UW_PlayerStats_C::W_StatCircle_Hunger' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, W_StatCircle_Thirst) == 0x000360, "Member 'UW_PlayerStats_C::W_StatCircle_Thirst' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, WBP_KeyIcon_VoiceLines) == 0x000368, "Member 'UW_PlayerStats_C::WBP_KeyIcon_VoiceLines' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, WBP_NegativeEffect_Bleeding) == 0x000370, "Member 'UW_PlayerStats_C::WBP_NegativeEffect_Bleeding' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, WBP_NegativeEffect_BrokenArm) == 0x000378, "Member 'UW_PlayerStats_C::WBP_NegativeEffect_BrokenArm' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, WBP_NegativeEffect_DamagedBelly) == 0x000380, "Member 'UW_PlayerStats_C::WBP_NegativeEffect_DamagedBelly' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, WBP_NegativeEffect_DamagedChest) == 0x000388, "Member 'UW_PlayerStats_C::WBP_NegativeEffect_DamagedChest' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, WBP_NegativeEffect_HeavyBleeding) == 0x000390, "Member 'UW_PlayerStats_C::WBP_NegativeEffect_HeavyBleeding' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, WBP_NegativeEffect_Overweight) == 0x000398, "Member 'UW_PlayerStats_C::WBP_NegativeEffect_Overweight' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, WBP_Stat_Cold) == 0x0003A0, "Member 'UW_PlayerStats_C::WBP_Stat_Cold' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, WBP_Stat_HP) == 0x0003A8, "Member 'UW_PlayerStats_C::WBP_Stat_HP' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, WBP_Stat_Hunger) == 0x0003B0, "Member 'UW_PlayerStats_C::WBP_Stat_Hunger' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, WBP_Stat_Thirst) == 0x0003B8, "Member 'UW_PlayerStats_C::WBP_Stat_Thirst' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, Player) == 0x0003C0, "Member 'UW_PlayerStats_C::Player' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, PlayerStatsRef) == 0x0003C8, "Member 'UW_PlayerStats_C::PlayerStatsRef' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, HealthbarIsVisible) == 0x0003D0, "Member 'UW_PlayerStats_C::HealthbarIsVisible' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, IsVisibleStats) == 0x0003D1, "Member 'UW_PlayerStats_C::IsVisibleStats' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, VisibleStatsTimerHandle) == 0x0003D8, "Member 'UW_PlayerStats_C::VisibleStatsTimerHandle' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, AmmoTimerHandle) == 0x0003E0, "Member 'UW_PlayerStats_C::AmmoTimerHandle' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, ForcedShowStat) == 0x0003E8, "Member 'UW_PlayerStats_C::ForcedShowStat' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, AutoHideDelay) == 0x0003EC, "Member 'UW_PlayerStats_C::AutoHideDelay' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, CurrentStatsValues) == 0x0003F0, "Member 'UW_PlayerStats_C::CurrentStatsValues' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, UpdaterTimerHandle) == 0x000440, "Member 'UW_PlayerStats_C::UpdaterTimerHandle' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, Aim) == 0x000448, "Member 'UW_PlayerStats_C::Aim' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, BleedingMessageTimerHandle) == 0x000450, "Member 'UW_PlayerStats_C::BleedingMessageTimerHandle' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, UIW_MainPlayer) == 0x000458, "Member 'UW_PlayerStats_C::UIW_MainPlayer' has a wrong offset!");
static_assert(offsetof(UW_PlayerStats_C, bVoiceCommandsHintShowed) == 0x000460, "Member 'UW_PlayerStats_C::bVoiceCommandsHintShowed' has a wrong offset!");

}
