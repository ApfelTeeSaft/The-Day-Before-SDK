#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WS_BodyFeatures

#include "Basic.hpp"

#include "WE_BodyTypes_structs.hpp"
#include "WE_BodyFeatures_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct WS_BodyFeatures.WS_BodyFeatures
// 0x0088 (0x0088 - 0x0000)
struct FWS_BodyFeatures final
{
public:
	class FString                                 RowName_40_4BCF9D2F4D0FB2708952F79402200ECB;       // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	EWE_BodyTypes                                 BodyType_33_EAFCAA9C42636A7F48289AA83AD2458F;      // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWE_BodyFeatures                              BodyCategory_4_BFBC41AC4E2E6F89ABB314B2DE20294C;   // 0x0011(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x2];                                       // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FColor                                 Color_6_2E7C520B429F7BA48C741AAA01BE121C;          // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UPaperSprite>            Image_44_639D0EAF49654B38AB4B5EAEA4D4B7A4;         // 0x0018(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class USkeletalMesh>           SkeletalMesh_43_A53BC5844A3E4875D499CEAA06E93EC5;  // 0x0048(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                          IsBlack__21_838F915E4C4792BC2CA6CBA143EA475A;      // 0x0078(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBeard__23_00450E294BFB33191CD6B68AB11CC619;      // 0x0079(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsHair__25_2562448042BFB098705B85A988009FC5;       // 0x007A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B[0x1];                                       // 0x007B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FColor                                 ColorTrue_28_FF2B92D6492F4A24D73941BDB774899E;     // 0x007C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ValueForSlider_37_2EDF788445E69562ACAA8FB46D2C779A; // 0x0080(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bNone_42_99A96E8D4DDD4D3EC0942F817F73D9E7;         // 0x0084(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FWS_BodyFeatures) == 0x000008, "Wrong alignment on FWS_BodyFeatures");
static_assert(sizeof(FWS_BodyFeatures) == 0x000088, "Wrong size on FWS_BodyFeatures");
static_assert(offsetof(FWS_BodyFeatures, RowName_40_4BCF9D2F4D0FB2708952F79402200ECB) == 0x000000, "Member 'FWS_BodyFeatures::RowName_40_4BCF9D2F4D0FB2708952F79402200ECB' has a wrong offset!");
static_assert(offsetof(FWS_BodyFeatures, BodyType_33_EAFCAA9C42636A7F48289AA83AD2458F) == 0x000010, "Member 'FWS_BodyFeatures::BodyType_33_EAFCAA9C42636A7F48289AA83AD2458F' has a wrong offset!");
static_assert(offsetof(FWS_BodyFeatures, BodyCategory_4_BFBC41AC4E2E6F89ABB314B2DE20294C) == 0x000011, "Member 'FWS_BodyFeatures::BodyCategory_4_BFBC41AC4E2E6F89ABB314B2DE20294C' has a wrong offset!");
static_assert(offsetof(FWS_BodyFeatures, Color_6_2E7C520B429F7BA48C741AAA01BE121C) == 0x000014, "Member 'FWS_BodyFeatures::Color_6_2E7C520B429F7BA48C741AAA01BE121C' has a wrong offset!");
static_assert(offsetof(FWS_BodyFeatures, Image_44_639D0EAF49654B38AB4B5EAEA4D4B7A4) == 0x000018, "Member 'FWS_BodyFeatures::Image_44_639D0EAF49654B38AB4B5EAEA4D4B7A4' has a wrong offset!");
static_assert(offsetof(FWS_BodyFeatures, SkeletalMesh_43_A53BC5844A3E4875D499CEAA06E93EC5) == 0x000048, "Member 'FWS_BodyFeatures::SkeletalMesh_43_A53BC5844A3E4875D499CEAA06E93EC5' has a wrong offset!");
static_assert(offsetof(FWS_BodyFeatures, IsBlack__21_838F915E4C4792BC2CA6CBA143EA475A) == 0x000078, "Member 'FWS_BodyFeatures::IsBlack__21_838F915E4C4792BC2CA6CBA143EA475A' has a wrong offset!");
static_assert(offsetof(FWS_BodyFeatures, IsBeard__23_00450E294BFB33191CD6B68AB11CC619) == 0x000079, "Member 'FWS_BodyFeatures::IsBeard__23_00450E294BFB33191CD6B68AB11CC619' has a wrong offset!");
static_assert(offsetof(FWS_BodyFeatures, IsHair__25_2562448042BFB098705B85A988009FC5) == 0x00007A, "Member 'FWS_BodyFeatures::IsHair__25_2562448042BFB098705B85A988009FC5' has a wrong offset!");
static_assert(offsetof(FWS_BodyFeatures, ColorTrue_28_FF2B92D6492F4A24D73941BDB774899E) == 0x00007C, "Member 'FWS_BodyFeatures::ColorTrue_28_FF2B92D6492F4A24D73941BDB774899E' has a wrong offset!");
static_assert(offsetof(FWS_BodyFeatures, ValueForSlider_37_2EDF788445E69562ACAA8FB46D2C779A) == 0x000080, "Member 'FWS_BodyFeatures::ValueForSlider_37_2EDF788445E69562ACAA8FB46D2C779A' has a wrong offset!");
static_assert(offsetof(FWS_BodyFeatures, bNone_42_99A96E8D4DDD4D3EC0942F817F73D9E7) == 0x000084, "Member 'FWS_BodyFeatures::bNone_42_99A96E8D4DDD4D3EC0942F817F73D9E7' has a wrong offset!");

}
