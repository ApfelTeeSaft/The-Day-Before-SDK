#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPS_SupportedAttachments

#include "Basic.hpp"

#include "E_TypesOfModes_structs.hpp"


namespace SDK
{

// UserDefinedStruct BPS_SupportedAttachments.BPS_SupportedAttachments
// 0x0018 (0x0018 - 0x0000)
struct FBPS_SupportedAttachments final
{
public:
	E_TypesOfModes                                BaseTypeOfMode_2_0844BDDB44427DF71BA74A88AAB3984C; // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           ModeNames_7_CD842F5F474732C6F2EAA29583FCF9FC;      // 0x0008(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FBPS_SupportedAttachments) == 0x000008, "Wrong alignment on FBPS_SupportedAttachments");
static_assert(sizeof(FBPS_SupportedAttachments) == 0x000018, "Wrong size on FBPS_SupportedAttachments");
static_assert(offsetof(FBPS_SupportedAttachments, BaseTypeOfMode_2_0844BDDB44427DF71BA74A88AAB3984C) == 0x000000, "Member 'FBPS_SupportedAttachments::BaseTypeOfMode_2_0844BDDB44427DF71BA74A88AAB3984C' has a wrong offset!");
static_assert(offsetof(FBPS_SupportedAttachments, ModeNames_7_CD842F5F474732C6F2EAA29583FCF9FC) == 0x000008, "Member 'FBPS_SupportedAttachments::ModeNames_7_CD842F5F474732C6F2EAA29583FCF9FC' has a wrong offset!");

}

