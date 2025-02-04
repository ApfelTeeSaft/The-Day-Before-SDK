#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_StaticWeapons

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "TypeStaticWeapon_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_StaticWeapons.WBP_StaticWeapons_C
// 0x00B8 (0x0338 - 0x0280)
class UWBP_StaticWeapons_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UProgressBar*                           ProgressBar_Power;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_PowerMinus;                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_PowerPlus;                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_Range;                                 // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_RangeMinus;                            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_RangePlus;                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_Rate;                                  // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_RateMinus;                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_RatePlus;                              // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_Stability;                             // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_StabilityMinus;                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_StabilityPlus;                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        MaxPower;                                          // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxEffective_Range;                                // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxStability;                                      // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxFiring_Rate;                                    // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Power;                                             // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Range;                                             // 0x030C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Stability;                                         // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Rate;                                              // 0x0314(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        PowerAttachmentsMultiplier;                        // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RangeAttachmentsMultiplier;                        // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        StabilityAttachmentsMultiplier;                    // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RateAttachmentsMultiplier;                         // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AddPercent(ETypeStaticWeapon NewParam, float InPercent);
	void All_Clear_Percent_Default();
	void CalculateAttachments(const struct FFItemInfo& FItemInfo);
	void ClearPercent(ETypeStaticWeapon Selection);
	void ExecuteUbergraph_WBP_StaticWeapons(int32 EntryPoint);
	void GetPercent(ETypeStaticWeapon Selection, float* Param_Rate);
	void Init();
	void MinusPercent(ETypeStaticWeapon Selection, double Percent);
	void Set_Percent_for_All(float Param_Power, float Param_Range, float Param_Stability, float Param_Rate);
	void Set_Percent_Power_Attachments();
	void Set_Percent_Range_Attachments();
	void Set_Percent_Rate_Attachments();
	void Set_Percent_Stability_Attachments();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_StaticWeapons_C">();
	}
	static class UWBP_StaticWeapons_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_StaticWeapons_C>();
	}
};
static_assert(alignof(UWBP_StaticWeapons_C) == 0x000008, "Wrong alignment on UWBP_StaticWeapons_C");
static_assert(sizeof(UWBP_StaticWeapons_C) == 0x000338, "Wrong size on UWBP_StaticWeapons_C");
static_assert(offsetof(UWBP_StaticWeapons_C, UberGraphFrame) == 0x000280, "Member 'UWBP_StaticWeapons_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_StaticWeapons_C, ProgressBar_Power) == 0x000288, "Member 'UWBP_StaticWeapons_C::ProgressBar_Power' has a wrong offset!");
static_assert(offsetof(UWBP_StaticWeapons_C, ProgressBar_PowerMinus) == 0x000290, "Member 'UWBP_StaticWeapons_C::ProgressBar_PowerMinus' has a wrong offset!");
static_assert(offsetof(UWBP_StaticWeapons_C, ProgressBar_PowerPlus) == 0x000298, "Member 'UWBP_StaticWeapons_C::ProgressBar_PowerPlus' has a wrong offset!");
static_assert(offsetof(UWBP_StaticWeapons_C, ProgressBar_Range) == 0x0002A0, "Member 'UWBP_StaticWeapons_C::ProgressBar_Range' has a wrong offset!");
static_assert(offsetof(UWBP_StaticWeapons_C, ProgressBar_RangeMinus) == 0x0002A8, "Member 'UWBP_StaticWeapons_C::ProgressBar_RangeMinus' has a wrong offset!");
static_assert(offsetof(UWBP_StaticWeapons_C, ProgressBar_RangePlus) == 0x0002B0, "Member 'UWBP_StaticWeapons_C::ProgressBar_RangePlus' has a wrong offset!");
static_assert(offsetof(UWBP_StaticWeapons_C, ProgressBar_Rate) == 0x0002B8, "Member 'UWBP_StaticWeapons_C::ProgressBar_Rate' has a wrong offset!");
static_assert(offsetof(UWBP_StaticWeapons_C, ProgressBar_RateMinus) == 0x0002C0, "Member 'UWBP_StaticWeapons_C::ProgressBar_RateMinus' has a wrong offset!");
static_assert(offsetof(UWBP_StaticWeapons_C, ProgressBar_RatePlus) == 0x0002C8, "Member 'UWBP_StaticWeapons_C::ProgressBar_RatePlus' has a wrong offset!");
static_assert(offsetof(UWBP_StaticWeapons_C, ProgressBar_Stability) == 0x0002D0, "Member 'UWBP_StaticWeapons_C::ProgressBar_Stability' has a wrong offset!");
static_assert(offsetof(UWBP_StaticWeapons_C, ProgressBar_StabilityMinus) == 0x0002D8, "Member 'UWBP_StaticWeapons_C::ProgressBar_StabilityMinus' has a wrong offset!");
static_assert(offsetof(UWBP_StaticWeapons_C, ProgressBar_StabilityPlus) == 0x0002E0, "Member 'UWBP_StaticWeapons_C::ProgressBar_StabilityPlus' has a wrong offset!");
static_assert(offsetof(UWBP_StaticWeapons_C, MaxPower) == 0x0002E8, "Member 'UWBP_StaticWeapons_C::MaxPower' has a wrong offset!");
static_assert(offsetof(UWBP_StaticWeapons_C, MaxEffective_Range) == 0x0002F0, "Member 'UWBP_StaticWeapons_C::MaxEffective_Range' has a wrong offset!");
static_assert(offsetof(UWBP_StaticWeapons_C, MaxStability) == 0x0002F8, "Member 'UWBP_StaticWeapons_C::MaxStability' has a wrong offset!");
static_assert(offsetof(UWBP_StaticWeapons_C, MaxFiring_Rate) == 0x000300, "Member 'UWBP_StaticWeapons_C::MaxFiring_Rate' has a wrong offset!");
static_assert(offsetof(UWBP_StaticWeapons_C, Power) == 0x000308, "Member 'UWBP_StaticWeapons_C::Power' has a wrong offset!");
static_assert(offsetof(UWBP_StaticWeapons_C, Range) == 0x00030C, "Member 'UWBP_StaticWeapons_C::Range' has a wrong offset!");
static_assert(offsetof(UWBP_StaticWeapons_C, Stability) == 0x000310, "Member 'UWBP_StaticWeapons_C::Stability' has a wrong offset!");
static_assert(offsetof(UWBP_StaticWeapons_C, Rate) == 0x000314, "Member 'UWBP_StaticWeapons_C::Rate' has a wrong offset!");
static_assert(offsetof(UWBP_StaticWeapons_C, PowerAttachmentsMultiplier) == 0x000318, "Member 'UWBP_StaticWeapons_C::PowerAttachmentsMultiplier' has a wrong offset!");
static_assert(offsetof(UWBP_StaticWeapons_C, RangeAttachmentsMultiplier) == 0x000320, "Member 'UWBP_StaticWeapons_C::RangeAttachmentsMultiplier' has a wrong offset!");
static_assert(offsetof(UWBP_StaticWeapons_C, StabilityAttachmentsMultiplier) == 0x000328, "Member 'UWBP_StaticWeapons_C::StabilityAttachmentsMultiplier' has a wrong offset!");
static_assert(offsetof(UWBP_StaticWeapons_C, RateAttachmentsMultiplier) == 0x000330, "Member 'UWBP_StaticWeapons_C::RateAttachmentsMultiplier' has a wrong offset!");

}

