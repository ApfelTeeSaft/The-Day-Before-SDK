#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EffectMainContructor

#include "Basic.hpp"

#include "EffectContructor_structs.hpp"
#include "E_WeakeningEffect_structs.hpp"


namespace SDK
{

// UserDefinedStruct EffectMainContructor.EffectMainContructor
// 0x0078 (0x0078 - 0x0000)
struct FEffectMainContructor final
{
public:
	class FText                                   GroupName_24_43E8CB19496A0CB63DB5BF9E92EAD2A9;     // 0x0000(0x0018)(Edit, BlueprintVisible)
	class FText                                   EffectName_3_7FEBC43E48E314C85022AE806FCE98D2;     // 0x0018(0x0018)(Edit, BlueprintVisible)
	class FText                                   Description_14_27E0E93F4DFE22307E65F4A4464A13A0;   // 0x0030(0x0018)(Edit, BlueprintVisible)
	double                                        Duration_6_7D26D7A44851FE8BE133F4B6C5FDF1B0;       // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FEffectContructor>              Effects_10_47CA286C4178A3F3C3BCB2A62C3B5FB0;       // 0x0050(0x0010)(Edit, BlueprintVisible)
	TArray<class FText>                           StopEfffects_26_DBBE481045F309B6BAC8F8BA3028EF12;  // 0x0060(0x0010)(Edit, BlueprintVisible)
	E_WeakeningEffect                             WeakeningEffects_33_0E40379643DEED8917B404AAFEFEA684; // 0x0070(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         StackCount_21_681ADE3C47089B55221CFE82D8CCC07E;    // 0x0074(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FEffectMainContructor) == 0x000008, "Wrong alignment on FEffectMainContructor");
static_assert(sizeof(FEffectMainContructor) == 0x000078, "Wrong size on FEffectMainContructor");
static_assert(offsetof(FEffectMainContructor, GroupName_24_43E8CB19496A0CB63DB5BF9E92EAD2A9) == 0x000000, "Member 'FEffectMainContructor::GroupName_24_43E8CB19496A0CB63DB5BF9E92EAD2A9' has a wrong offset!");
static_assert(offsetof(FEffectMainContructor, EffectName_3_7FEBC43E48E314C85022AE806FCE98D2) == 0x000018, "Member 'FEffectMainContructor::EffectName_3_7FEBC43E48E314C85022AE806FCE98D2' has a wrong offset!");
static_assert(offsetof(FEffectMainContructor, Description_14_27E0E93F4DFE22307E65F4A4464A13A0) == 0x000030, "Member 'FEffectMainContructor::Description_14_27E0E93F4DFE22307E65F4A4464A13A0' has a wrong offset!");
static_assert(offsetof(FEffectMainContructor, Duration_6_7D26D7A44851FE8BE133F4B6C5FDF1B0) == 0x000048, "Member 'FEffectMainContructor::Duration_6_7D26D7A44851FE8BE133F4B6C5FDF1B0' has a wrong offset!");
static_assert(offsetof(FEffectMainContructor, Effects_10_47CA286C4178A3F3C3BCB2A62C3B5FB0) == 0x000050, "Member 'FEffectMainContructor::Effects_10_47CA286C4178A3F3C3BCB2A62C3B5FB0' has a wrong offset!");
static_assert(offsetof(FEffectMainContructor, StopEfffects_26_DBBE481045F309B6BAC8F8BA3028EF12) == 0x000060, "Member 'FEffectMainContructor::StopEfffects_26_DBBE481045F309B6BAC8F8BA3028EF12' has a wrong offset!");
static_assert(offsetof(FEffectMainContructor, WeakeningEffects_33_0E40379643DEED8917B404AAFEFEA684) == 0x000070, "Member 'FEffectMainContructor::WeakeningEffects_33_0E40379643DEED8917B404AAFEFEA684' has a wrong offset!");
static_assert(offsetof(FEffectMainContructor, StackCount_21_681ADE3C47089B55221CFE82D8CCC07E) == 0x000074, "Member 'FEffectMainContructor::StackCount_21_681ADE3C47089B55221CFE82D8CCC07E' has a wrong offset!");

}
