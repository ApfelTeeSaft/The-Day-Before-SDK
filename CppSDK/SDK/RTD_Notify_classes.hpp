#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RTD_Notify

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass RTD_Notify.RTD_Notify_C
// 0x0000 (0x0030 - 0x0030)
class URTD_Notify_C final : public URichTextBlockImageDecorator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RTD_Notify_C">();
	}
	static class URTD_Notify_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URTD_Notify_C>();
	}
};
static_assert(alignof(URTD_Notify_C) == 0x000008, "Wrong alignment on URTD_Notify_C");
static_assert(sizeof(URTD_Notify_C) == 0x000030, "Wrong size on URTD_Notify_C");

}
