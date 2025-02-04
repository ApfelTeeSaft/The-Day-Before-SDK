#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: I_GI_Survival

#include "Basic.hpp"

#include "Enum_WarningMessageType_structs.hpp"


namespace SDK::Params
{

// Function I_GI_Survival.I_GI_Survival_C.GetDisclaimerShowed
// 0x0001 (0x0001 - 0x0000)
struct I_GI_Survival_C_GetDisclaimerShowed final
{
public:
	bool                                          Showed;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(I_GI_Survival_C_GetDisclaimerShowed) == 0x000001, "Wrong alignment on I_GI_Survival_C_GetDisclaimerShowed");
static_assert(sizeof(I_GI_Survival_C_GetDisclaimerShowed) == 0x000001, "Wrong size on I_GI_Survival_C_GetDisclaimerShowed");
static_assert(offsetof(I_GI_Survival_C_GetDisclaimerShowed, Showed) == 0x000000, "Member 'I_GI_Survival_C_GetDisclaimerShowed::Showed' has a wrong offset!");

// Function I_GI_Survival.I_GI_Survival_C.GetIsFemale
// 0x0001 (0x0001 - 0x0000)
struct I_GI_Survival_C_GetIsFemale final
{
public:
	bool                                          IsFemale;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(I_GI_Survival_C_GetIsFemale) == 0x000001, "Wrong alignment on I_GI_Survival_C_GetIsFemale");
static_assert(sizeof(I_GI_Survival_C_GetIsFemale) == 0x000001, "Wrong size on I_GI_Survival_C_GetIsFemale");
static_assert(offsetof(I_GI_Survival_C_GetIsFemale, IsFemale) == 0x000000, "Member 'I_GI_Survival_C_GetIsFemale::IsFemale' has a wrong offset!");

// Function I_GI_Survival.I_GI_Survival_C.GetKickedFromAFK
// 0x0001 (0x0001 - 0x0000)
struct I_GI_Survival_C_GetKickedFromAFK final
{
public:
	bool                                          OutKickedFromAFK;                                  // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(I_GI_Survival_C_GetKickedFromAFK) == 0x000001, "Wrong alignment on I_GI_Survival_C_GetKickedFromAFK");
static_assert(sizeof(I_GI_Survival_C_GetKickedFromAFK) == 0x000001, "Wrong size on I_GI_Survival_C_GetKickedFromAFK");
static_assert(offsetof(I_GI_Survival_C_GetKickedFromAFK, OutKickedFromAFK) == 0x000000, "Member 'I_GI_Survival_C_GetKickedFromAFK::OutKickedFromAFK' has a wrong offset!");

// Function I_GI_Survival.I_GI_Survival_C.GetMovieShowed
// 0x0001 (0x0001 - 0x0000)
struct I_GI_Survival_C_GetMovieShowed final
{
public:
	bool                                          Showed;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(I_GI_Survival_C_GetMovieShowed) == 0x000001, "Wrong alignment on I_GI_Survival_C_GetMovieShowed");
static_assert(sizeof(I_GI_Survival_C_GetMovieShowed) == 0x000001, "Wrong size on I_GI_Survival_C_GetMovieShowed");
static_assert(offsetof(I_GI_Survival_C_GetMovieShowed, Showed) == 0x000000, "Member 'I_GI_Survival_C_GetMovieShowed::Showed' has a wrong offset!");

// Function I_GI_Survival.I_GI_Survival_C.GetNPCQuests
// 0x0058 (0x0058 - 0x0000)
struct I_GI_Survival_C_GetNPCQuests final
{
public:
	bool                                          SpecQuests;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSet<class UQuest*>                           Quests;                                            // 0x0008(0x0050)(Parm, OutParm)
};
static_assert(alignof(I_GI_Survival_C_GetNPCQuests) == 0x000008, "Wrong alignment on I_GI_Survival_C_GetNPCQuests");
static_assert(sizeof(I_GI_Survival_C_GetNPCQuests) == 0x000058, "Wrong size on I_GI_Survival_C_GetNPCQuests");
static_assert(offsetof(I_GI_Survival_C_GetNPCQuests, SpecQuests) == 0x000000, "Member 'I_GI_Survival_C_GetNPCQuests::SpecQuests' has a wrong offset!");
static_assert(offsetof(I_GI_Survival_C_GetNPCQuests, Quests) == 0x000008, "Member 'I_GI_Survival_C_GetNPCQuests::Quests' has a wrong offset!");

// Function I_GI_Survival.I_GI_Survival_C.GetShadersRemainingPSO
// 0x0008 (0x0008 - 0x0000)
struct I_GI_Survival_C_GetShadersRemainingPSO final
{
public:
	int64                                         Count;                                             // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(I_GI_Survival_C_GetShadersRemainingPSO) == 0x000008, "Wrong alignment on I_GI_Survival_C_GetShadersRemainingPSO");
static_assert(sizeof(I_GI_Survival_C_GetShadersRemainingPSO) == 0x000008, "Wrong size on I_GI_Survival_C_GetShadersRemainingPSO");
static_assert(offsetof(I_GI_Survival_C_GetShadersRemainingPSO, Count) == 0x000000, "Member 'I_GI_Survival_C_GetShadersRemainingPSO::Count' has a wrong offset!");

// Function I_GI_Survival.I_GI_Survival_C.GetTextChatEnabled
// 0x0001 (0x0001 - 0x0000)
struct I_GI_Survival_C_GetTextChatEnabled final
{
public:
	bool                                          bEnabled;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(I_GI_Survival_C_GetTextChatEnabled) == 0x000001, "Wrong alignment on I_GI_Survival_C_GetTextChatEnabled");
static_assert(sizeof(I_GI_Survival_C_GetTextChatEnabled) == 0x000001, "Wrong size on I_GI_Survival_C_GetTextChatEnabled");
static_assert(offsetof(I_GI_Survival_C_GetTextChatEnabled, bEnabled) == 0x000000, "Member 'I_GI_Survival_C_GetTextChatEnabled::bEnabled' has a wrong offset!");

// Function I_GI_Survival.I_GI_Survival_C.GetVoiceChatEnabled
// 0x0001 (0x0001 - 0x0000)
struct I_GI_Survival_C_GetVoiceChatEnabled final
{
public:
	bool                                          bEnabled;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(I_GI_Survival_C_GetVoiceChatEnabled) == 0x000001, "Wrong alignment on I_GI_Survival_C_GetVoiceChatEnabled");
static_assert(sizeof(I_GI_Survival_C_GetVoiceChatEnabled) == 0x000001, "Wrong size on I_GI_Survival_C_GetVoiceChatEnabled");
static_assert(offsetof(I_GI_Survival_C_GetVoiceChatEnabled, bEnabled) == 0x000000, "Member 'I_GI_Survival_C_GetVoiceChatEnabled::bEnabled' has a wrong offset!");

// Function I_GI_Survival.I_GI_Survival_C.GetVoiceLinesEnabled
// 0x0001 (0x0001 - 0x0000)
struct I_GI_Survival_C_GetVoiceLinesEnabled final
{
public:
	bool                                          bEnabled;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(I_GI_Survival_C_GetVoiceLinesEnabled) == 0x000001, "Wrong alignment on I_GI_Survival_C_GetVoiceLinesEnabled");
static_assert(sizeof(I_GI_Survival_C_GetVoiceLinesEnabled) == 0x000001, "Wrong size on I_GI_Survival_C_GetVoiceLinesEnabled");
static_assert(offsetof(I_GI_Survival_C_GetVoiceLinesEnabled, bEnabled) == 0x000000, "Member 'I_GI_Survival_C_GetVoiceLinesEnabled::bEnabled' has a wrong offset!");

// Function I_GI_Survival.I_GI_Survival_C.GetWarningMessage
// 0x0038 (0x0038 - 0x0000)
struct I_GI_Survival_C_GetWarningMessage final
{
public:
	Enum_WarningMessageType                       Type_Message;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Description_Text;                                  // 0x0008(0x0018)(Parm, OutParm)
	class FString                                 Time;                                              // 0x0020(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          New_State;                                         // 0x0030(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(I_GI_Survival_C_GetWarningMessage) == 0x000008, "Wrong alignment on I_GI_Survival_C_GetWarningMessage");
static_assert(sizeof(I_GI_Survival_C_GetWarningMessage) == 0x000038, "Wrong size on I_GI_Survival_C_GetWarningMessage");
static_assert(offsetof(I_GI_Survival_C_GetWarningMessage, Type_Message) == 0x000000, "Member 'I_GI_Survival_C_GetWarningMessage::Type_Message' has a wrong offset!");
static_assert(offsetof(I_GI_Survival_C_GetWarningMessage, Description_Text) == 0x000008, "Member 'I_GI_Survival_C_GetWarningMessage::Description_Text' has a wrong offset!");
static_assert(offsetof(I_GI_Survival_C_GetWarningMessage, Time) == 0x000020, "Member 'I_GI_Survival_C_GetWarningMessage::Time' has a wrong offset!");
static_assert(offsetof(I_GI_Survival_C_GetWarningMessage, New_State) == 0x000030, "Member 'I_GI_Survival_C_GetWarningMessage::New_State' has a wrong offset!");

// Function I_GI_Survival.I_GI_Survival_C.IsFirstStart
// 0x0001 (0x0001 - 0x0000)
struct I_GI_Survival_C_IsFirstStart final
{
public:
	bool                                          Param_IsFirstStart;                                // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(I_GI_Survival_C_IsFirstStart) == 0x000001, "Wrong alignment on I_GI_Survival_C_IsFirstStart");
static_assert(sizeof(I_GI_Survival_C_IsFirstStart) == 0x000001, "Wrong size on I_GI_Survival_C_IsFirstStart");
static_assert(offsetof(I_GI_Survival_C_IsFirstStart, Param_IsFirstStart) == 0x000000, "Member 'I_GI_Survival_C_IsFirstStart::Param_IsFirstStart' has a wrong offset!");

// Function I_GI_Survival.I_GI_Survival_C.IsRadioMessagePlayed
// 0x0001 (0x0001 - 0x0000)
struct I_GI_Survival_C_IsRadioMessagePlayed final
{
public:
	bool                                          IsPlayed;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(I_GI_Survival_C_IsRadioMessagePlayed) == 0x000001, "Wrong alignment on I_GI_Survival_C_IsRadioMessagePlayed");
static_assert(sizeof(I_GI_Survival_C_IsRadioMessagePlayed) == 0x000001, "Wrong size on I_GI_Survival_C_IsRadioMessagePlayed");
static_assert(offsetof(I_GI_Survival_C_IsRadioMessagePlayed, IsPlayed) == 0x000000, "Member 'I_GI_Survival_C_IsRadioMessagePlayed::IsPlayed' has a wrong offset!");

// Function I_GI_Survival.I_GI_Survival_C.IsStashTutorialCompleted
// 0x0001 (0x0001 - 0x0000)
struct I_GI_Survival_C_IsStashTutorialCompleted final
{
public:
	bool                                          Completed;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(I_GI_Survival_C_IsStashTutorialCompleted) == 0x000001, "Wrong alignment on I_GI_Survival_C_IsStashTutorialCompleted");
static_assert(sizeof(I_GI_Survival_C_IsStashTutorialCompleted) == 0x000001, "Wrong size on I_GI_Survival_C_IsStashTutorialCompleted");
static_assert(offsetof(I_GI_Survival_C_IsStashTutorialCompleted, Completed) == 0x000000, "Member 'I_GI_Survival_C_IsStashTutorialCompleted::Completed' has a wrong offset!");

// Function I_GI_Survival.I_GI_Survival_C.IsTutorialBeginCompleted
// 0x0001 (0x0001 - 0x0000)
struct I_GI_Survival_C_IsTutorialBeginCompleted final
{
public:
	bool                                          Completed;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(I_GI_Survival_C_IsTutorialBeginCompleted) == 0x000001, "Wrong alignment on I_GI_Survival_C_IsTutorialBeginCompleted");
static_assert(sizeof(I_GI_Survival_C_IsTutorialBeginCompleted) == 0x000001, "Wrong size on I_GI_Survival_C_IsTutorialBeginCompleted");
static_assert(offsetof(I_GI_Survival_C_IsTutorialBeginCompleted, Completed) == 0x000000, "Member 'I_GI_Survival_C_IsTutorialBeginCompleted::Completed' has a wrong offset!");

// Function I_GI_Survival.I_GI_Survival_C.IsTutorialCompleted
// 0x0001 (0x0001 - 0x0000)
struct I_GI_Survival_C_IsTutorialCompleted final
{
public:
	bool                                          Completed;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(I_GI_Survival_C_IsTutorialCompleted) == 0x000001, "Wrong alignment on I_GI_Survival_C_IsTutorialCompleted");
static_assert(sizeof(I_GI_Survival_C_IsTutorialCompleted) == 0x000001, "Wrong size on I_GI_Survival_C_IsTutorialCompleted");
static_assert(offsetof(I_GI_Survival_C_IsTutorialCompleted, Completed) == 0x000000, "Member 'I_GI_Survival_C_IsTutorialCompleted::Completed' has a wrong offset!");

// Function I_GI_Survival.I_GI_Survival_C.LoadDeathCount
// 0x0004 (0x0004 - 0x0000)
struct I_GI_Survival_C_LoadDeathCount final
{
public:
	int32                                         DeathCount;                                        // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(I_GI_Survival_C_LoadDeathCount) == 0x000004, "Wrong alignment on I_GI_Survival_C_LoadDeathCount");
static_assert(sizeof(I_GI_Survival_C_LoadDeathCount) == 0x000004, "Wrong size on I_GI_Survival_C_LoadDeathCount");
static_assert(offsetof(I_GI_Survival_C_LoadDeathCount, DeathCount) == 0x000000, "Member 'I_GI_Survival_C_LoadDeathCount::DeathCount' has a wrong offset!");

// Function I_GI_Survival.I_GI_Survival_C.SetBatchModePSO
// 0x0004 (0x0004 - 0x0000)
struct I_GI_Survival_C_SetBatchModePSO final
{
public:
	int32                                         Mode;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(I_GI_Survival_C_SetBatchModePSO) == 0x000004, "Wrong alignment on I_GI_Survival_C_SetBatchModePSO");
static_assert(sizeof(I_GI_Survival_C_SetBatchModePSO) == 0x000004, "Wrong size on I_GI_Survival_C_SetBatchModePSO");
static_assert(offsetof(I_GI_Survival_C_SetBatchModePSO, Mode) == 0x000000, "Member 'I_GI_Survival_C_SetBatchModePSO::Mode' has a wrong offset!");

// Function I_GI_Survival.I_GI_Survival_C.SetDisclaimerShowed
// 0x0001 (0x0001 - 0x0000)
struct I_GI_Survival_C_SetDisclaimerShowed final
{
public:
	bool                                          Show;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(I_GI_Survival_C_SetDisclaimerShowed) == 0x000001, "Wrong alignment on I_GI_Survival_C_SetDisclaimerShowed");
static_assert(sizeof(I_GI_Survival_C_SetDisclaimerShowed) == 0x000001, "Wrong size on I_GI_Survival_C_SetDisclaimerShowed");
static_assert(offsetof(I_GI_Survival_C_SetDisclaimerShowed, Show) == 0x000000, "Member 'I_GI_Survival_C_SetDisclaimerShowed::Show' has a wrong offset!");

// Function I_GI_Survival.I_GI_Survival_C.SetFistStart
// 0x0001 (0x0001 - 0x0000)
struct I_GI_Survival_C_SetFistStart final
{
public:
	bool                                          Param_IsFirstStart;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(I_GI_Survival_C_SetFistStart) == 0x000001, "Wrong alignment on I_GI_Survival_C_SetFistStart");
static_assert(sizeof(I_GI_Survival_C_SetFistStart) == 0x000001, "Wrong size on I_GI_Survival_C_SetFistStart");
static_assert(offsetof(I_GI_Survival_C_SetFistStart, Param_IsFirstStart) == 0x000000, "Member 'I_GI_Survival_C_SetFistStart::Param_IsFirstStart' has a wrong offset!");

// Function I_GI_Survival.I_GI_Survival_C.SetKickedFromAFK
// 0x0001 (0x0001 - 0x0000)
struct I_GI_Survival_C_SetKickedFromAFK final
{
public:
	bool                                          NewKickedFromAFK;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(I_GI_Survival_C_SetKickedFromAFK) == 0x000001, "Wrong alignment on I_GI_Survival_C_SetKickedFromAFK");
static_assert(sizeof(I_GI_Survival_C_SetKickedFromAFK) == 0x000001, "Wrong size on I_GI_Survival_C_SetKickedFromAFK");
static_assert(offsetof(I_GI_Survival_C_SetKickedFromAFK, NewKickedFromAFK) == 0x000000, "Member 'I_GI_Survival_C_SetKickedFromAFK::NewKickedFromAFK' has a wrong offset!");

// Function I_GI_Survival.I_GI_Survival_C.SetMovieShowed
// 0x0001 (0x0001 - 0x0000)
struct I_GI_Survival_C_SetMovieShowed final
{
public:
	bool                                          Show;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(I_GI_Survival_C_SetMovieShowed) == 0x000001, "Wrong alignment on I_GI_Survival_C_SetMovieShowed");
static_assert(sizeof(I_GI_Survival_C_SetMovieShowed) == 0x000001, "Wrong size on I_GI_Survival_C_SetMovieShowed");
static_assert(offsetof(I_GI_Survival_C_SetMovieShowed, Show) == 0x000000, "Member 'I_GI_Survival_C_SetMovieShowed::Show' has a wrong offset!");

// Function I_GI_Survival.I_GI_Survival_C.SetRadioMessagePlayed
// 0x0001 (0x0001 - 0x0000)
struct I_GI_Survival_C_SetRadioMessagePlayed final
{
public:
	bool                                          Played;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(I_GI_Survival_C_SetRadioMessagePlayed) == 0x000001, "Wrong alignment on I_GI_Survival_C_SetRadioMessagePlayed");
static_assert(sizeof(I_GI_Survival_C_SetRadioMessagePlayed) == 0x000001, "Wrong size on I_GI_Survival_C_SetRadioMessagePlayed");
static_assert(offsetof(I_GI_Survival_C_SetRadioMessagePlayed, Played) == 0x000000, "Member 'I_GI_Survival_C_SetRadioMessagePlayed::Played' has a wrong offset!");

// Function I_GI_Survival.I_GI_Survival_C.SetServerAddress
// 0x0020 (0x0020 - 0x0000)
struct I_GI_Survival_C_SetServerAddress final
{
public:
	class FString                                 IP;                                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Port;                                              // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(I_GI_Survival_C_SetServerAddress) == 0x000008, "Wrong alignment on I_GI_Survival_C_SetServerAddress");
static_assert(sizeof(I_GI_Survival_C_SetServerAddress) == 0x000020, "Wrong size on I_GI_Survival_C_SetServerAddress");
static_assert(offsetof(I_GI_Survival_C_SetServerAddress, IP) == 0x000000, "Member 'I_GI_Survival_C_SetServerAddress::IP' has a wrong offset!");
static_assert(offsetof(I_GI_Survival_C_SetServerAddress, Port) == 0x000010, "Member 'I_GI_Survival_C_SetServerAddress::Port' has a wrong offset!");

// Function I_GI_Survival.I_GI_Survival_C.SetSpawnRegion
// 0x0008 (0x0008 - 0x0000)
struct I_GI_Survival_C_SetSpawnRegion final
{
public:
	class FName                                   Region;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(I_GI_Survival_C_SetSpawnRegion) == 0x000004, "Wrong alignment on I_GI_Survival_C_SetSpawnRegion");
static_assert(sizeof(I_GI_Survival_C_SetSpawnRegion) == 0x000008, "Wrong size on I_GI_Survival_C_SetSpawnRegion");
static_assert(offsetof(I_GI_Survival_C_SetSpawnRegion, Region) == 0x000000, "Member 'I_GI_Survival_C_SetSpawnRegion::Region' has a wrong offset!");

// Function I_GI_Survival.I_GI_Survival_C.SetStashTutorialCompleted
// 0x0001 (0x0001 - 0x0000)
struct I_GI_Survival_C_SetStashTutorialCompleted final
{
public:
	bool                                          Completed;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(I_GI_Survival_C_SetStashTutorialCompleted) == 0x000001, "Wrong alignment on I_GI_Survival_C_SetStashTutorialCompleted");
static_assert(sizeof(I_GI_Survival_C_SetStashTutorialCompleted) == 0x000001, "Wrong size on I_GI_Survival_C_SetStashTutorialCompleted");
static_assert(offsetof(I_GI_Survival_C_SetStashTutorialCompleted, Completed) == 0x000000, "Member 'I_GI_Survival_C_SetStashTutorialCompleted::Completed' has a wrong offset!");

// Function I_GI_Survival.I_GI_Survival_C.SetTextChatEnabled
// 0x0001 (0x0001 - 0x0000)
struct I_GI_Survival_C_SetTextChatEnabled final
{
public:
	bool                                          bEnable;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(I_GI_Survival_C_SetTextChatEnabled) == 0x000001, "Wrong alignment on I_GI_Survival_C_SetTextChatEnabled");
static_assert(sizeof(I_GI_Survival_C_SetTextChatEnabled) == 0x000001, "Wrong size on I_GI_Survival_C_SetTextChatEnabled");
static_assert(offsetof(I_GI_Survival_C_SetTextChatEnabled, bEnable) == 0x000000, "Member 'I_GI_Survival_C_SetTextChatEnabled::bEnable' has a wrong offset!");

// Function I_GI_Survival.I_GI_Survival_C.SetTutorialBeginCompleted
// 0x0001 (0x0001 - 0x0000)
struct I_GI_Survival_C_SetTutorialBeginCompleted final
{
public:
	bool                                          Completed;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(I_GI_Survival_C_SetTutorialBeginCompleted) == 0x000001, "Wrong alignment on I_GI_Survival_C_SetTutorialBeginCompleted");
static_assert(sizeof(I_GI_Survival_C_SetTutorialBeginCompleted) == 0x000001, "Wrong size on I_GI_Survival_C_SetTutorialBeginCompleted");
static_assert(offsetof(I_GI_Survival_C_SetTutorialBeginCompleted, Completed) == 0x000000, "Member 'I_GI_Survival_C_SetTutorialBeginCompleted::Completed' has a wrong offset!");

// Function I_GI_Survival.I_GI_Survival_C.SetTutorialCompleted
// 0x0001 (0x0001 - 0x0000)
struct I_GI_Survival_C_SetTutorialCompleted final
{
public:
	bool                                          Completed;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(I_GI_Survival_C_SetTutorialCompleted) == 0x000001, "Wrong alignment on I_GI_Survival_C_SetTutorialCompleted");
static_assert(sizeof(I_GI_Survival_C_SetTutorialCompleted) == 0x000001, "Wrong size on I_GI_Survival_C_SetTutorialCompleted");
static_assert(offsetof(I_GI_Survival_C_SetTutorialCompleted, Completed) == 0x000000, "Member 'I_GI_Survival_C_SetTutorialCompleted::Completed' has a wrong offset!");

// Function I_GI_Survival.I_GI_Survival_C.SetVoiceChatEnabled
// 0x0001 (0x0001 - 0x0000)
struct I_GI_Survival_C_SetVoiceChatEnabled final
{
public:
	bool                                          bEnable;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(I_GI_Survival_C_SetVoiceChatEnabled) == 0x000001, "Wrong alignment on I_GI_Survival_C_SetVoiceChatEnabled");
static_assert(sizeof(I_GI_Survival_C_SetVoiceChatEnabled) == 0x000001, "Wrong size on I_GI_Survival_C_SetVoiceChatEnabled");
static_assert(offsetof(I_GI_Survival_C_SetVoiceChatEnabled, bEnable) == 0x000000, "Member 'I_GI_Survival_C_SetVoiceChatEnabled::bEnable' has a wrong offset!");

// Function I_GI_Survival.I_GI_Survival_C.SetVoiceLinesEnabled
// 0x0001 (0x0001 - 0x0000)
struct I_GI_Survival_C_SetVoiceLinesEnabled final
{
public:
	bool                                          bEnable;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(I_GI_Survival_C_SetVoiceLinesEnabled) == 0x000001, "Wrong alignment on I_GI_Survival_C_SetVoiceLinesEnabled");
static_assert(sizeof(I_GI_Survival_C_SetVoiceLinesEnabled) == 0x000001, "Wrong size on I_GI_Survival_C_SetVoiceLinesEnabled");
static_assert(offsetof(I_GI_Survival_C_SetVoiceLinesEnabled, bEnable) == 0x000000, "Member 'I_GI_Survival_C_SetVoiceLinesEnabled::bEnable' has a wrong offset!");

// Function I_GI_Survival.I_GI_Survival_C.SetWarningMessage
// 0x0038 (0x0038 - 0x0000)
struct I_GI_Survival_C_SetWarningMessage final
{
public:
	Enum_WarningMessageType                       Type_Message;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Description_Text;                                  // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 Time;                                              // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          New_State;                                         // 0x0030(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(I_GI_Survival_C_SetWarningMessage) == 0x000008, "Wrong alignment on I_GI_Survival_C_SetWarningMessage");
static_assert(sizeof(I_GI_Survival_C_SetWarningMessage) == 0x000038, "Wrong size on I_GI_Survival_C_SetWarningMessage");
static_assert(offsetof(I_GI_Survival_C_SetWarningMessage, Type_Message) == 0x000000, "Member 'I_GI_Survival_C_SetWarningMessage::Type_Message' has a wrong offset!");
static_assert(offsetof(I_GI_Survival_C_SetWarningMessage, Description_Text) == 0x000008, "Member 'I_GI_Survival_C_SetWarningMessage::Description_Text' has a wrong offset!");
static_assert(offsetof(I_GI_Survival_C_SetWarningMessage, Time) == 0x000020, "Member 'I_GI_Survival_C_SetWarningMessage::Time' has a wrong offset!");
static_assert(offsetof(I_GI_Survival_C_SetWarningMessage, New_State) == 0x000030, "Member 'I_GI_Survival_C_SetWarningMessage::New_State' has a wrong offset!");

}

