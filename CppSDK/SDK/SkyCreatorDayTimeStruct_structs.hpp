#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SkyCreatorDayTimeStruct

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct SkyCreatorDayTimeStruct.SkyCreatorDayTimeStruct
// 0x0130 (0x0130 - 0x0000)
struct FSkyCreatorDayTimeStruct final
{
public:
	TArray<TSoftObjectPtr<class USkyCreatorWeatherPreset>> MorningWeatherPresets_19_C49A5B0C4C0CE496C861EDAC6B276CBD; // 0x0000(0x0010)(Edit, BlueprintVisible)
	TSoftObjectPtr<class USkyCreatorWeatherPreset> MorningToDay_22_64E4404845FB5A78D306E3A53C0F372D;  // 0x0010(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class USkyCreatorWeatherPreset>> DayWeatherPresets_18_7CB04BC44C979B82A4CC9D8A5D710D94; // 0x0040(0x0010)(Edit, BlueprintVisible)
	TSoftObjectPtr<class USkyCreatorWeatherPreset> DayToEvening_24_B73DFD6A4052859DAECD9AA38AEB9878;  // 0x0050(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class USkyCreatorWeatherPreset>> EveningWeatherPresets_17_B5CBC9CF4BEA9CF8F2509B8DFE83F78B; // 0x0080(0x0010)(Edit, BlueprintVisible)
	TSoftObjectPtr<class USkyCreatorWeatherPreset> EveningToNight_26_A8BE56C64D4376A39CDA918EE2F07950; // 0x0090(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class USkyCreatorWeatherPreset>> NightWeatherPresets_16_4F351981424C0C11EEAAB2B21BD0873B; // 0x00C0(0x0010)(Edit, BlueprintVisible)
	TSoftObjectPtr<class USkyCreatorWeatherPreset> NightToMorning_28_2491A80D49F9549D0F63959F765A907E; // 0x00D0(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class USkyCreatorWeatherPreset> HubWeatherPreset_15_ED81BC574FD43389DC79ACBB34CD71E9; // 0x0100(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
};
static_assert(alignof(FSkyCreatorDayTimeStruct) == 0x000008, "Wrong alignment on FSkyCreatorDayTimeStruct");
static_assert(sizeof(FSkyCreatorDayTimeStruct) == 0x000130, "Wrong size on FSkyCreatorDayTimeStruct");
static_assert(offsetof(FSkyCreatorDayTimeStruct, MorningWeatherPresets_19_C49A5B0C4C0CE496C861EDAC6B276CBD) == 0x000000, "Member 'FSkyCreatorDayTimeStruct::MorningWeatherPresets_19_C49A5B0C4C0CE496C861EDAC6B276CBD' has a wrong offset!");
static_assert(offsetof(FSkyCreatorDayTimeStruct, MorningToDay_22_64E4404845FB5A78D306E3A53C0F372D) == 0x000010, "Member 'FSkyCreatorDayTimeStruct::MorningToDay_22_64E4404845FB5A78D306E3A53C0F372D' has a wrong offset!");
static_assert(offsetof(FSkyCreatorDayTimeStruct, DayWeatherPresets_18_7CB04BC44C979B82A4CC9D8A5D710D94) == 0x000040, "Member 'FSkyCreatorDayTimeStruct::DayWeatherPresets_18_7CB04BC44C979B82A4CC9D8A5D710D94' has a wrong offset!");
static_assert(offsetof(FSkyCreatorDayTimeStruct, DayToEvening_24_B73DFD6A4052859DAECD9AA38AEB9878) == 0x000050, "Member 'FSkyCreatorDayTimeStruct::DayToEvening_24_B73DFD6A4052859DAECD9AA38AEB9878' has a wrong offset!");
static_assert(offsetof(FSkyCreatorDayTimeStruct, EveningWeatherPresets_17_B5CBC9CF4BEA9CF8F2509B8DFE83F78B) == 0x000080, "Member 'FSkyCreatorDayTimeStruct::EveningWeatherPresets_17_B5CBC9CF4BEA9CF8F2509B8DFE83F78B' has a wrong offset!");
static_assert(offsetof(FSkyCreatorDayTimeStruct, EveningToNight_26_A8BE56C64D4376A39CDA918EE2F07950) == 0x000090, "Member 'FSkyCreatorDayTimeStruct::EveningToNight_26_A8BE56C64D4376A39CDA918EE2F07950' has a wrong offset!");
static_assert(offsetof(FSkyCreatorDayTimeStruct, NightWeatherPresets_16_4F351981424C0C11EEAAB2B21BD0873B) == 0x0000C0, "Member 'FSkyCreatorDayTimeStruct::NightWeatherPresets_16_4F351981424C0C11EEAAB2B21BD0873B' has a wrong offset!");
static_assert(offsetof(FSkyCreatorDayTimeStruct, NightToMorning_28_2491A80D49F9549D0F63959F765A907E) == 0x0000D0, "Member 'FSkyCreatorDayTimeStruct::NightToMorning_28_2491A80D49F9549D0F63959F765A907E' has a wrong offset!");
static_assert(offsetof(FSkyCreatorDayTimeStruct, HubWeatherPreset_15_ED81BC574FD43389DC79ACBB34CD71E9) == 0x000100, "Member 'FSkyCreatorDayTimeStruct::HubWeatherPreset_15_ED81BC574FD43389DC79ACBB34CD71E9' has a wrong offset!");

}
