#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GameStats

#include "Basic.hpp"

#include "E_StatEndGame_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_GameStats.WBP_GameStats_C
// 0x00B8 (0x0338 - 0x0280)
class UWBP_GameStats_C final : public UUserWidget
{
public:
	class UImage*                                 Image_149;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_StatCell_C*                          W_AidUsed;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_StatCell_C*                          W_DamageDealt;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_StatCell_C*                          W_DamageReceived;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_StatCell_C*                          W_Drink;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_StatCell_C*                          W_Eat;                                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_StatCell_C*                          W_Headshot;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_StatCell_C*                          W_HitPercent;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_StatCell_C*                          W_KilledPlayers;                                   // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_StatCell_C*                          W_KillerZombies;                                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_StatCell_C*                          W_SurviveTime;                                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_StatCell_C*                          W_Travel;                                          // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int64                                         Aid;                                               // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         DamageDealt;                                       // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         DamageReceived;                                    // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         Drink;                                             // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         Eat;                                               // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         HeadShot;                                          // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         HitPercent;                                        // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         KilledPlayers;                                     // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         KilledZombies;                                     // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         SurviveTime;                                       // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         Travel;                                            // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void LoadStats(const TMap<E_StatEndGame, int64>& EndGameStat);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_GameStats_C">();
	}
	static class UWBP_GameStats_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_GameStats_C>();
	}
};
static_assert(alignof(UWBP_GameStats_C) == 0x000008, "Wrong alignment on UWBP_GameStats_C");
static_assert(sizeof(UWBP_GameStats_C) == 0x000338, "Wrong size on UWBP_GameStats_C");
static_assert(offsetof(UWBP_GameStats_C, Image_149) == 0x000280, "Member 'UWBP_GameStats_C::Image_149' has a wrong offset!");
static_assert(offsetof(UWBP_GameStats_C, W_AidUsed) == 0x000288, "Member 'UWBP_GameStats_C::W_AidUsed' has a wrong offset!");
static_assert(offsetof(UWBP_GameStats_C, W_DamageDealt) == 0x000290, "Member 'UWBP_GameStats_C::W_DamageDealt' has a wrong offset!");
static_assert(offsetof(UWBP_GameStats_C, W_DamageReceived) == 0x000298, "Member 'UWBP_GameStats_C::W_DamageReceived' has a wrong offset!");
static_assert(offsetof(UWBP_GameStats_C, W_Drink) == 0x0002A0, "Member 'UWBP_GameStats_C::W_Drink' has a wrong offset!");
static_assert(offsetof(UWBP_GameStats_C, W_Eat) == 0x0002A8, "Member 'UWBP_GameStats_C::W_Eat' has a wrong offset!");
static_assert(offsetof(UWBP_GameStats_C, W_Headshot) == 0x0002B0, "Member 'UWBP_GameStats_C::W_Headshot' has a wrong offset!");
static_assert(offsetof(UWBP_GameStats_C, W_HitPercent) == 0x0002B8, "Member 'UWBP_GameStats_C::W_HitPercent' has a wrong offset!");
static_assert(offsetof(UWBP_GameStats_C, W_KilledPlayers) == 0x0002C0, "Member 'UWBP_GameStats_C::W_KilledPlayers' has a wrong offset!");
static_assert(offsetof(UWBP_GameStats_C, W_KillerZombies) == 0x0002C8, "Member 'UWBP_GameStats_C::W_KillerZombies' has a wrong offset!");
static_assert(offsetof(UWBP_GameStats_C, W_SurviveTime) == 0x0002D0, "Member 'UWBP_GameStats_C::W_SurviveTime' has a wrong offset!");
static_assert(offsetof(UWBP_GameStats_C, W_Travel) == 0x0002D8, "Member 'UWBP_GameStats_C::W_Travel' has a wrong offset!");
static_assert(offsetof(UWBP_GameStats_C, Aid) == 0x0002E0, "Member 'UWBP_GameStats_C::Aid' has a wrong offset!");
static_assert(offsetof(UWBP_GameStats_C, DamageDealt) == 0x0002E8, "Member 'UWBP_GameStats_C::DamageDealt' has a wrong offset!");
static_assert(offsetof(UWBP_GameStats_C, DamageReceived) == 0x0002F0, "Member 'UWBP_GameStats_C::DamageReceived' has a wrong offset!");
static_assert(offsetof(UWBP_GameStats_C, Drink) == 0x0002F8, "Member 'UWBP_GameStats_C::Drink' has a wrong offset!");
static_assert(offsetof(UWBP_GameStats_C, Eat) == 0x000300, "Member 'UWBP_GameStats_C::Eat' has a wrong offset!");
static_assert(offsetof(UWBP_GameStats_C, HeadShot) == 0x000308, "Member 'UWBP_GameStats_C::HeadShot' has a wrong offset!");
static_assert(offsetof(UWBP_GameStats_C, HitPercent) == 0x000310, "Member 'UWBP_GameStats_C::HitPercent' has a wrong offset!");
static_assert(offsetof(UWBP_GameStats_C, KilledPlayers) == 0x000318, "Member 'UWBP_GameStats_C::KilledPlayers' has a wrong offset!");
static_assert(offsetof(UWBP_GameStats_C, KilledZombies) == 0x000320, "Member 'UWBP_GameStats_C::KilledZombies' has a wrong offset!");
static_assert(offsetof(UWBP_GameStats_C, SurviveTime) == 0x000328, "Member 'UWBP_GameStats_C::SurviveTime' has a wrong offset!");
static_assert(offsetof(UWBP_GameStats_C, Travel) == 0x000330, "Member 'UWBP_GameStats_C::Travel' has a wrong offset!");

}
