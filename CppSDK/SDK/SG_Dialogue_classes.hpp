#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SG_Dialogue

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "E_NPC_Name_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass SG_Dialogue.SG_Dialogue_C
// 0x00C0 (0x00E8 - 0x0028)
class USG_Dialogue_C final : public USaveGame
{
public:
	TArray<int32>                                 Mike;                                              // 0x0028(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 Chris;                                             // 0x0038(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 Leonard;                                           // 0x0048(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 Abby;                                              // 0x0058(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 Rob;                                               // 0x0068(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 Eddard;                                            // 0x0078(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 Virgil;                                            // 0x0088(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 Steven;                                            // 0x0098(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 Chuck;                                             // 0x00A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         AliasesArray;                                      // 0x00B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsWelcomeLead;                                     // 0x00C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsWelcomeMike;                                     // 0x00C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsWelcomeLeonard;                                  // 0x00CA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsWelcomeAbby;                                     // 0x00CB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsWelcomeRob;                                      // 0x00CC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsWelcomeEddard;                                   // 0x00CD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsWelcomeVirgil;                                   // 0x00CE(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsWelcomeSteven;                                   // 0x00CF(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsWelcomeChuck;                                    // 0x00D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 UsingAliases;                                      // 0x00D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void Find_Aliases(const class FString& In_Aliases, bool* Find_);
	void GetIsWelcome(class FName NPC_Name, bool* IsWelcome);
	void GetPickedAnswers(class FName NPC_Personal_Name, int32 SelectedAnswers, bool* Find_);
	void GetUsingAliases(const class FString& In_Aliases, bool* Using_);
	void SetAliases(const class FString& Aliases);
	void SetIsWelcome(class FName NPC_Name);
	void SetPickedAnswers(class FName NPC_Personal_Name, const int32& SelectedAnswers);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SG_Dialogue_C">();
	}
	static class USG_Dialogue_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USG_Dialogue_C>();
	}
};
static_assert(alignof(USG_Dialogue_C) == 0x000008, "Wrong alignment on USG_Dialogue_C");
static_assert(sizeof(USG_Dialogue_C) == 0x0000E8, "Wrong size on USG_Dialogue_C");
static_assert(offsetof(USG_Dialogue_C, Mike) == 0x000028, "Member 'USG_Dialogue_C::Mike' has a wrong offset!");
static_assert(offsetof(USG_Dialogue_C, Chris) == 0x000038, "Member 'USG_Dialogue_C::Chris' has a wrong offset!");
static_assert(offsetof(USG_Dialogue_C, Leonard) == 0x000048, "Member 'USG_Dialogue_C::Leonard' has a wrong offset!");
static_assert(offsetof(USG_Dialogue_C, Abby) == 0x000058, "Member 'USG_Dialogue_C::Abby' has a wrong offset!");
static_assert(offsetof(USG_Dialogue_C, Rob) == 0x000068, "Member 'USG_Dialogue_C::Rob' has a wrong offset!");
static_assert(offsetof(USG_Dialogue_C, Eddard) == 0x000078, "Member 'USG_Dialogue_C::Eddard' has a wrong offset!");
static_assert(offsetof(USG_Dialogue_C, Virgil) == 0x000088, "Member 'USG_Dialogue_C::Virgil' has a wrong offset!");
static_assert(offsetof(USG_Dialogue_C, Steven) == 0x000098, "Member 'USG_Dialogue_C::Steven' has a wrong offset!");
static_assert(offsetof(USG_Dialogue_C, Chuck) == 0x0000A8, "Member 'USG_Dialogue_C::Chuck' has a wrong offset!");
static_assert(offsetof(USG_Dialogue_C, AliasesArray) == 0x0000B8, "Member 'USG_Dialogue_C::AliasesArray' has a wrong offset!");
static_assert(offsetof(USG_Dialogue_C, IsWelcomeLead) == 0x0000C8, "Member 'USG_Dialogue_C::IsWelcomeLead' has a wrong offset!");
static_assert(offsetof(USG_Dialogue_C, IsWelcomeMike) == 0x0000C9, "Member 'USG_Dialogue_C::IsWelcomeMike' has a wrong offset!");
static_assert(offsetof(USG_Dialogue_C, IsWelcomeLeonard) == 0x0000CA, "Member 'USG_Dialogue_C::IsWelcomeLeonard' has a wrong offset!");
static_assert(offsetof(USG_Dialogue_C, IsWelcomeAbby) == 0x0000CB, "Member 'USG_Dialogue_C::IsWelcomeAbby' has a wrong offset!");
static_assert(offsetof(USG_Dialogue_C, IsWelcomeRob) == 0x0000CC, "Member 'USG_Dialogue_C::IsWelcomeRob' has a wrong offset!");
static_assert(offsetof(USG_Dialogue_C, IsWelcomeEddard) == 0x0000CD, "Member 'USG_Dialogue_C::IsWelcomeEddard' has a wrong offset!");
static_assert(offsetof(USG_Dialogue_C, IsWelcomeVirgil) == 0x0000CE, "Member 'USG_Dialogue_C::IsWelcomeVirgil' has a wrong offset!");
static_assert(offsetof(USG_Dialogue_C, IsWelcomeSteven) == 0x0000CF, "Member 'USG_Dialogue_C::IsWelcomeSteven' has a wrong offset!");
static_assert(offsetof(USG_Dialogue_C, IsWelcomeChuck) == 0x0000D0, "Member 'USG_Dialogue_C::IsWelcomeChuck' has a wrong offset!");
static_assert(offsetof(USG_Dialogue_C, UsingAliases) == 0x0000D8, "Member 'USG_Dialogue_C::UsingAliases' has a wrong offset!");

}
