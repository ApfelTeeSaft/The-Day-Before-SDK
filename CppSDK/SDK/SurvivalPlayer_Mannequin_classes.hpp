#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SurvivalPlayer_Mannequin

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SurvivalPlayer_V2_classes.hpp"
#include "FItemInfo_structs.hpp"
#include "PlayerSlots_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass SurvivalPlayer_Mannequin.SurvivalPlayer_Mannequin_C
// 0x0510 (0x52F0 - 0x4DE0)
class ASurvivalPlayer_Mannequin_C final : public ASurvivalPlayer_V2_C
{
public:
	uint8                                         Pad_4DD1[0x7];                                     // 0x4DD1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_SurvivalPlayer_Mannequin_C;         // 0x4DD8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextRenderComponent*                   AllDamageText;                                     // 0x4DE0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                   Desc;                                              // 0x4DE8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                   TextRender;                                        // 0x4DF0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           MnnequinStartItems;                                // 0x4DF8(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   MannequinDescription;                              // 0x4E08(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	double                                        AllDamage;                                         // 0x4E20(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Health;                                            // 0x4E28(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShootingMannequin;                                 // 0x4E30(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_4E31[0x3];                                     // 0x4E31(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   MannWeapon;                                        // 0x4E34(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_4E3C[0x4];                                     // 0x4E3C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           Helmets;                                           // 0x4E40(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           Armors;                                            // 0x4E50(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         ArmorLevel;                                        // 0x4E60(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HelmetLevel;                                       // 0x4E64(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        InitialHelmetDurability;                           // 0x4E68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        InitialArmorDurability;                            // 0x4E70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentHelmetDurability;                           // 0x4E78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentArmorDurability;                            // 0x4E80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFItemInfo                             ArmorItemInfo;                                     // 0x4E88(0x0220)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FFItemInfo                             HelmetArmorInfo;                                   // 0x50A8(0x0220)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	double                                        FinalDamage;                                       // 0x52C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        HelmetReduction;                                   // 0x52D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ArmorReduction;                                    // 0x52D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ImpulseModifier;                                   // 0x52E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Calc_Damage_with_Armory(class FName BoneName, double Damage, double* Param_FinalDamage);
	void ClearDamage();
	void DisableRagdol();
	void EnableRagdol(class FName BoneName, class AController* InstigatedBy, double Damage);
	void EquipItems(const struct FFItemInfo& Param_ItemInfo);
	void ExecuteUbergraph_SurvivalPlayer_Mannequin(int32 EntryPoint);
	void MannFire();
	void PrintAllDamage();
	void ReceivePointDamage(float Damage, const class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, class FName BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo);
	void ResetArmor();
	void ShowDamage(class FName InName, double InFloat);
	void SpawnDecal(const struct FVector& Location, const struct FVector& HitNormal, class FName BoneName);
	void UnEquipHelmet();
	void UpdateHelmetAndArmorDurability(class FName BoneName, double Damage);
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SurvivalPlayer_Mannequin_C">();
	}
	static class ASurvivalPlayer_Mannequin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASurvivalPlayer_Mannequin_C>();
	}
};
static_assert(alignof(ASurvivalPlayer_Mannequin_C) == 0x000010, "Wrong alignment on ASurvivalPlayer_Mannequin_C");
static_assert(sizeof(ASurvivalPlayer_Mannequin_C) == 0x0052F0, "Wrong size on ASurvivalPlayer_Mannequin_C");
static_assert(offsetof(ASurvivalPlayer_Mannequin_C, UberGraphFrame_SurvivalPlayer_Mannequin_C) == 0x004DD8, "Member 'ASurvivalPlayer_Mannequin_C::UberGraphFrame_SurvivalPlayer_Mannequin_C' has a wrong offset!");
static_assert(offsetof(ASurvivalPlayer_Mannequin_C, AllDamageText) == 0x004DE0, "Member 'ASurvivalPlayer_Mannequin_C::AllDamageText' has a wrong offset!");
static_assert(offsetof(ASurvivalPlayer_Mannequin_C, Desc) == 0x004DE8, "Member 'ASurvivalPlayer_Mannequin_C::Desc' has a wrong offset!");
static_assert(offsetof(ASurvivalPlayer_Mannequin_C, TextRender) == 0x004DF0, "Member 'ASurvivalPlayer_Mannequin_C::TextRender' has a wrong offset!");
static_assert(offsetof(ASurvivalPlayer_Mannequin_C, MnnequinStartItems) == 0x004DF8, "Member 'ASurvivalPlayer_Mannequin_C::MnnequinStartItems' has a wrong offset!");
static_assert(offsetof(ASurvivalPlayer_Mannequin_C, MannequinDescription) == 0x004E08, "Member 'ASurvivalPlayer_Mannequin_C::MannequinDescription' has a wrong offset!");
static_assert(offsetof(ASurvivalPlayer_Mannequin_C, AllDamage) == 0x004E20, "Member 'ASurvivalPlayer_Mannequin_C::AllDamage' has a wrong offset!");
static_assert(offsetof(ASurvivalPlayer_Mannequin_C, Health) == 0x004E28, "Member 'ASurvivalPlayer_Mannequin_C::Health' has a wrong offset!");
static_assert(offsetof(ASurvivalPlayer_Mannequin_C, ShootingMannequin) == 0x004E30, "Member 'ASurvivalPlayer_Mannequin_C::ShootingMannequin' has a wrong offset!");
static_assert(offsetof(ASurvivalPlayer_Mannequin_C, MannWeapon) == 0x004E34, "Member 'ASurvivalPlayer_Mannequin_C::MannWeapon' has a wrong offset!");
static_assert(offsetof(ASurvivalPlayer_Mannequin_C, Helmets) == 0x004E40, "Member 'ASurvivalPlayer_Mannequin_C::Helmets' has a wrong offset!");
static_assert(offsetof(ASurvivalPlayer_Mannequin_C, Armors) == 0x004E50, "Member 'ASurvivalPlayer_Mannequin_C::Armors' has a wrong offset!");
static_assert(offsetof(ASurvivalPlayer_Mannequin_C, ArmorLevel) == 0x004E60, "Member 'ASurvivalPlayer_Mannequin_C::ArmorLevel' has a wrong offset!");
static_assert(offsetof(ASurvivalPlayer_Mannequin_C, HelmetLevel) == 0x004E64, "Member 'ASurvivalPlayer_Mannequin_C::HelmetLevel' has a wrong offset!");
static_assert(offsetof(ASurvivalPlayer_Mannequin_C, InitialHelmetDurability) == 0x004E68, "Member 'ASurvivalPlayer_Mannequin_C::InitialHelmetDurability' has a wrong offset!");
static_assert(offsetof(ASurvivalPlayer_Mannequin_C, InitialArmorDurability) == 0x004E70, "Member 'ASurvivalPlayer_Mannequin_C::InitialArmorDurability' has a wrong offset!");
static_assert(offsetof(ASurvivalPlayer_Mannequin_C, CurrentHelmetDurability) == 0x004E78, "Member 'ASurvivalPlayer_Mannequin_C::CurrentHelmetDurability' has a wrong offset!");
static_assert(offsetof(ASurvivalPlayer_Mannequin_C, CurrentArmorDurability) == 0x004E80, "Member 'ASurvivalPlayer_Mannequin_C::CurrentArmorDurability' has a wrong offset!");
static_assert(offsetof(ASurvivalPlayer_Mannequin_C, ArmorItemInfo) == 0x004E88, "Member 'ASurvivalPlayer_Mannequin_C::ArmorItemInfo' has a wrong offset!");
static_assert(offsetof(ASurvivalPlayer_Mannequin_C, HelmetArmorInfo) == 0x0050A8, "Member 'ASurvivalPlayer_Mannequin_C::HelmetArmorInfo' has a wrong offset!");
static_assert(offsetof(ASurvivalPlayer_Mannequin_C, FinalDamage) == 0x0052C8, "Member 'ASurvivalPlayer_Mannequin_C::FinalDamage' has a wrong offset!");
static_assert(offsetof(ASurvivalPlayer_Mannequin_C, HelmetReduction) == 0x0052D0, "Member 'ASurvivalPlayer_Mannequin_C::HelmetReduction' has a wrong offset!");
static_assert(offsetof(ASurvivalPlayer_Mannequin_C, ArmorReduction) == 0x0052D8, "Member 'ASurvivalPlayer_Mannequin_C::ArmorReduction' has a wrong offset!");
static_assert(offsetof(ASurvivalPlayer_Mannequin_C, ImpulseModifier) == 0x0052E0, "Member 'ASurvivalPlayer_Mannequin_C::ImpulseModifier' has a wrong offset!");

}
