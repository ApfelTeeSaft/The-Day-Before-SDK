#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattlEye

#include "Basic.hpp"


namespace SDK
{

// Enum BattlEye.EMessageType
// NumValues: 0x0004
enum class EMessageType : uint8
{
	Info                                     = 0,
	Warning                                  = 1,
	Error                                    = 2,
	EMessageType_MAX                         = 3,
};

// Enum BattlEye.EPlayerStatus
// NumValues: 0x0004
enum class EPlayerStatus : uint8
{
	Disconnected                             = 0,
	PreGame                                  = 1,
	InGame                                   = 2,
	EPlayerStatus_MAX                        = 3,
};

// Enum BattlEye.ERestartReason
// NumValues: 0x0003
enum class ERestartReason : uint8
{
	NotRunProperly                           = 0,
	NeedUpdate                               = 1,
	ERestartReason_MAX                       = 2,
};

// ScriptStruct BattlEye.SteamReqData
// 0x0010 (0x0010 - 0x0000)
struct FSteamReqData final
{
public:
	class FString                                 SteamSessionTicket;                                // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSteamReqData) == 0x000008, "Wrong alignment on FSteamReqData");
static_assert(sizeof(FSteamReqData) == 0x000010, "Wrong size on FSteamReqData");
static_assert(offsetof(FSteamReqData, SteamSessionTicket) == 0x000000, "Member 'FSteamReqData::SteamSessionTicket' has a wrong offset!");

}
