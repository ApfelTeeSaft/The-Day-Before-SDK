#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattlEye

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"
#include "BattlEye_structs.hpp"


namespace SDK
{

// Class BattlEye.BE_Client
// 0x0008 (0x0030 - 0x0028)
class UBE_Client final : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BE_Client">();
	}
	static class UBE_Client* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBE_Client>();
	}
};
static_assert(alignof(UBE_Client) == 0x000008, "Wrong alignment on UBE_Client");
static_assert(sizeof(UBE_Client) == 0x000030, "Wrong size on UBE_Client");

// Class BattlEye.BE_GameInstance
// 0x0030 (0x01F0 - 0x01C0)
class UBE_GameInstance : public UGameInstance
{
public:
	uint8                                         Pad_1C0[0x10];                                     // 0x01C0(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 BattlEyeServerIpAddress;                           // 0x01D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         BattlEyeServerPort;                                // 0x01E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1E4[0x4];                                      // 0x01E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         SteamID;                                           // 0x01E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	int32 GetBEClientVersion();
	int32 GetBEServerVersion();
	bool InitClient();
	void OnPrintMessageClient(const class FString& PMessage);
	void OnPrintMessageServer(const class FString& PMessage, EMessageType PType);
	void OnRequestRestartClient(ERestartReason PReason);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BE_GameInstance">();
	}
	static class UBE_GameInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBE_GameInstance>();
	}
};
static_assert(alignof(UBE_GameInstance) == 0x000008, "Wrong alignment on UBE_GameInstance");
static_assert(sizeof(UBE_GameInstance) == 0x0001F0, "Wrong size on UBE_GameInstance");
static_assert(offsetof(UBE_GameInstance, BattlEyeServerIpAddress) == 0x0001D0, "Member 'UBE_GameInstance::BattlEyeServerIpAddress' has a wrong offset!");
static_assert(offsetof(UBE_GameInstance, BattlEyeServerPort) == 0x0001E0, "Member 'UBE_GameInstance::BattlEyeServerPort' has a wrong offset!");
static_assert(offsetof(UBE_GameInstance, SteamID) == 0x0001E8, "Member 'UBE_GameInstance::SteamID' has a wrong offset!");

// Class BattlEye.BE_GameMode
// 0x0058 (0x0388 - 0x0330)
class ABE_GameMode : public AGameModeBase
{
public:
	uint8                                         Pad_330[0x58];                                     // 0x0330(0x0058)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class ABE_PlayerController* GetPlayerByPID(int32 PPID);
	void OnCheckOwnershipResult(bool Ownsapp, const class FString& Message, int32 PID, int64 SteamID);
	void OnKickPlayer(int32 PPID, const class FString& PReason);
	void OnReceivePlayerGUID(int32 PPID, int64 PGUID);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BE_GameMode">();
	}
	static class ABE_GameMode* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABE_GameMode>();
	}
};
static_assert(alignof(ABE_GameMode) == 0x000008, "Wrong alignment on ABE_GameMode");
static_assert(sizeof(ABE_GameMode) == 0x000388, "Wrong size on ABE_GameMode");

// Class BattlEye.BE_Server
// 0x0028 (0x0050 - 0x0028)
class UBE_Server final : public UObject
{
public:
	uint8                                         Pad_28[0x28];                                      // 0x0028(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BE_Server">();
	}
	static class UBE_Server* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBE_Server>();
	}
};
static_assert(alignof(UBE_Server) == 0x000008, "Wrong alignment on UBE_Server");
static_assert(sizeof(UBE_Server) == 0x000050, "Wrong size on UBE_Server");

// Class BattlEye.BE_PlayerController
// 0x0018 (0x0868 - 0x0850)
class ABE_PlayerController : public APlayerController
{
public:
	uint8                                         Pad_850[0x18];                                     // 0x0850(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void CheckOwnership(const class FString& PSteamSessionTicket);
	void Client_RecieveFromServer(const TArray<int32>& PPacketInt, int32 PLength);
	void Client_RequestGUID();
	void OnSendPacket(const TArray<int32>& PPacketInt, int32 PLength);
	void OnSendSteamSessionTicket();
	void Server_SendGUID(int64 PGUID);
	void Server_SendToServer(const TArray<int32>& PPacketInt, int32 PLength);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BE_PlayerController">();
	}
	static class ABE_PlayerController* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABE_PlayerController>();
	}
};
static_assert(alignof(ABE_PlayerController) == 0x000008, "Wrong alignment on ABE_PlayerController");
static_assert(sizeof(ABE_PlayerController) == 0x000868, "Wrong size on ABE_PlayerController");

}
