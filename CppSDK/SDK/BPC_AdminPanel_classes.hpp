#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPC_AdminPanel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPC_AdminPanel.BPC_AdminPanel_C
// 0x0020 (0x00C0 - 0x00A0)
class UBPC_AdminPanel_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBPC_SharpSync_C*                       SharpSync;                                         // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UWBP_AdminPanel_C*                      AdminPanel;                                        // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ASurvivalPlayer_V2_C*                   As_Survival_Player_V2;                             // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AdminMessageToChat(const class FText& InputPin);
	void AdminPanelMessage(const class FText& InText);
	void BanPlayerById(const class FString& SteamID, const class FString& Time, const class FText& Reason, bool Mute, bool Amnesty);
	void BanPlayerServer(class APlayerState* TargetPlayer, const class FText& KickReason, const class FString& Time, bool Mute, bool Amnesty);
	void CharDataUpdate(const TArray<class FString>& Info, const class FString& SteamID);
	class FString DateTimeToString(const struct FDateTime& InDateTime);
	void ExecuteUbergraph_BPC_AdminPanel(int32 EntryPoint);
	void KickPlayer(class APlayerController* TargetPlayer, const class FText& KickReason);
	void KickPlayerServer(class APlayerState* TargetPlayer, const class FText& KickReason);
	void ReceiveBeginPlay();
	void SetAdmin(const class FString& SteamID, const bool NewAdmin);
	struct FTimespan StringToTime(const class FString& SourceString, bool* IsTimeAllowed);
	class FString TimespanToString(const struct FTimespan& InTimespan);
	void WarningToPlayer(class UObject* Object, const class FText& WarningMessage);
	void WidgetAdminPanel();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPC_AdminPanel_C">();
	}
	static class UBPC_AdminPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPC_AdminPanel_C>();
	}
};
static_assert(alignof(UBPC_AdminPanel_C) == 0x000008, "Wrong alignment on UBPC_AdminPanel_C");
static_assert(sizeof(UBPC_AdminPanel_C) == 0x0000C0, "Wrong size on UBPC_AdminPanel_C");
static_assert(offsetof(UBPC_AdminPanel_C, UberGraphFrame) == 0x0000A0, "Member 'UBPC_AdminPanel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBPC_AdminPanel_C, SharpSync) == 0x0000A8, "Member 'UBPC_AdminPanel_C::SharpSync' has a wrong offset!");
static_assert(offsetof(UBPC_AdminPanel_C, AdminPanel) == 0x0000B0, "Member 'UBPC_AdminPanel_C::AdminPanel' has a wrong offset!");
static_assert(offsetof(UBPC_AdminPanel_C, As_Survival_Player_V2) == 0x0000B8, "Member 'UBPC_AdminPanel_C::As_Survival_Player_V2' has a wrong offset!");

}
