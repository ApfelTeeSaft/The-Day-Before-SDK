#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_StatWithRedLine

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_StatWithRedLine.WBP_StatWithRedLine_C
// 0x0088 (0x0308 - 0x0280)
class UWBP_StatWithRedLine_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_76;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Icon;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_Red;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_StatValue;                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_PB;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Value;                                   // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        CurrentValue;                                      // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCriticalState;                                   // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C1[0x7];                                      // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPaperSprite*                           IconSprite;                                        // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector2D                              ProgressBarSize;                                   // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        OLDHP;                                             // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBPC_PlayerStatsComponent_C*            New_Param;                                         // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        FirstDelay;                                        // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        UpdateTime;                                        // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        PercentPerSecond;                                  // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void Decrise(double Value);
	void ExecuteUbergraph_WBP_StatWithRedLine(int32 EntryPoint);
	void Init(class UBPC_PlayerStatsComponent_C* NewParam);
	void PreConstruct(bool IsDesignTime);
	void RegressHPPercent_Old();
	void ResetHPPercent_Old();
	void SetIsCritical(bool IsCritical);
	void SetProgressBarSize(const struct FVector2D& Size);
	void SetValue(double Param_CurrentValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_StatWithRedLine_C">();
	}
	static class UWBP_StatWithRedLine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_StatWithRedLine_C>();
	}
};
static_assert(alignof(UWBP_StatWithRedLine_C) == 0x000008, "Wrong alignment on UWBP_StatWithRedLine_C");
static_assert(sizeof(UWBP_StatWithRedLine_C) == 0x000308, "Wrong size on UWBP_StatWithRedLine_C");
static_assert(offsetof(UWBP_StatWithRedLine_C, UberGraphFrame) == 0x000280, "Member 'UWBP_StatWithRedLine_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_StatWithRedLine_C, Image_76) == 0x000288, "Member 'UWBP_StatWithRedLine_C::Image_76' has a wrong offset!");
static_assert(offsetof(UWBP_StatWithRedLine_C, Image_Icon) == 0x000290, "Member 'UWBP_StatWithRedLine_C::Image_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_StatWithRedLine_C, ProgressBar_Red) == 0x000298, "Member 'UWBP_StatWithRedLine_C::ProgressBar_Red' has a wrong offset!");
static_assert(offsetof(UWBP_StatWithRedLine_C, ProgressBar_StatValue) == 0x0002A0, "Member 'UWBP_StatWithRedLine_C::ProgressBar_StatValue' has a wrong offset!");
static_assert(offsetof(UWBP_StatWithRedLine_C, SizeBox_PB) == 0x0002A8, "Member 'UWBP_StatWithRedLine_C::SizeBox_PB' has a wrong offset!");
static_assert(offsetof(UWBP_StatWithRedLine_C, TextBlock_Value) == 0x0002B0, "Member 'UWBP_StatWithRedLine_C::TextBlock_Value' has a wrong offset!");
static_assert(offsetof(UWBP_StatWithRedLine_C, CurrentValue) == 0x0002B8, "Member 'UWBP_StatWithRedLine_C::CurrentValue' has a wrong offset!");
static_assert(offsetof(UWBP_StatWithRedLine_C, IsCriticalState) == 0x0002C0, "Member 'UWBP_StatWithRedLine_C::IsCriticalState' has a wrong offset!");
static_assert(offsetof(UWBP_StatWithRedLine_C, IconSprite) == 0x0002C8, "Member 'UWBP_StatWithRedLine_C::IconSprite' has a wrong offset!");
static_assert(offsetof(UWBP_StatWithRedLine_C, ProgressBarSize) == 0x0002D0, "Member 'UWBP_StatWithRedLine_C::ProgressBarSize' has a wrong offset!");
static_assert(offsetof(UWBP_StatWithRedLine_C, OLDHP) == 0x0002E0, "Member 'UWBP_StatWithRedLine_C::OLDHP' has a wrong offset!");
static_assert(offsetof(UWBP_StatWithRedLine_C, New_Param) == 0x0002E8, "Member 'UWBP_StatWithRedLine_C::New_Param' has a wrong offset!");
static_assert(offsetof(UWBP_StatWithRedLine_C, FirstDelay) == 0x0002F0, "Member 'UWBP_StatWithRedLine_C::FirstDelay' has a wrong offset!");
static_assert(offsetof(UWBP_StatWithRedLine_C, UpdateTime) == 0x0002F8, "Member 'UWBP_StatWithRedLine_C::UpdateTime' has a wrong offset!");
static_assert(offsetof(UWBP_StatWithRedLine_C, PercentPerSecond) == 0x000300, "Member 'UWBP_StatWithRedLine_C::PercentPerSecond' has a wrong offset!");

}

