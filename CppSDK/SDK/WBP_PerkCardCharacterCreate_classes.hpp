#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PerkCardCharacterCreate

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WS_CharaterPerks_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PerkCardCharacterCreate.WBP_PerkCardCharacterCreate_C
// 0x00D0 (0x0350 - 0x0280)
class UWBP_PerkCardCharacterCreate_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             TextBlock_Description;                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Name;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FWS_CharaterPerks                      Perk_Info;                                         // 0x0298(0x00B8)(Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_PerkCardCharacterCreate(int32 EntryPoint);
	void Init(const struct FWS_CharaterPerks& PerkInfo);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PerkCardCharacterCreate_C">();
	}
	static class UWBP_PerkCardCharacterCreate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PerkCardCharacterCreate_C>();
	}
};
static_assert(alignof(UWBP_PerkCardCharacterCreate_C) == 0x000008, "Wrong alignment on UWBP_PerkCardCharacterCreate_C");
static_assert(sizeof(UWBP_PerkCardCharacterCreate_C) == 0x000350, "Wrong size on UWBP_PerkCardCharacterCreate_C");
static_assert(offsetof(UWBP_PerkCardCharacterCreate_C, UberGraphFrame) == 0x000280, "Member 'UWBP_PerkCardCharacterCreate_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PerkCardCharacterCreate_C, TextBlock_Description) == 0x000288, "Member 'UWBP_PerkCardCharacterCreate_C::TextBlock_Description' has a wrong offset!");
static_assert(offsetof(UWBP_PerkCardCharacterCreate_C, TextBlock_Name) == 0x000290, "Member 'UWBP_PerkCardCharacterCreate_C::TextBlock_Name' has a wrong offset!");
static_assert(offsetof(UWBP_PerkCardCharacterCreate_C, Perk_Info) == 0x000298, "Member 'UWBP_PerkCardCharacterCreate_C::Perk_Info' has a wrong offset!");

}
