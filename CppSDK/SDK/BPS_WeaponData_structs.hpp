#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPS_WeaponData

#include "Basic.hpp"

#include "S_PPAim_structs.hpp"
#include "BPS_SupportedAttachments_structs.hpp"
#include "BPE_AmmoType_structs.hpp"
#include "S_WeaponShakeInfo_structs.hpp"
#include "BPE_Weapon_Type_structs.hpp"
#include "ETier_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct BPS_WeaponData.BPS_WeaponData
// 0x04C0 (0x04C0 - 0x0000)
struct FBPS_WeaponData final
{
public:
	class FName                                   Name_51_B16287794691692AD32DEF8A39B6C006;          // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBPE_Weapon_Type                              Type_8_FD614DE04D8567521383BF933DD03880;           // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MaxAmmoInMag_16_4D528A164F039B073A645DB5AB3D57AA;  // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LowAmmoCount_246_34A3DA234AC2C0E58CEE3F98B0DB321F; // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RoundsInBurst_18_D1BC9E21476F66599884C7BB3E5D21BC; // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BulletsInShot_68_5C5A152B48C7C7D852A42EBA265BE167; // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasSingleMode_25_77EA840E4BD93CF4A5AF4FB3D607FEC4; // 0x001C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasBurstMode_26_917008E34B7616E494146F9457F90928;  // 0x001D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasAutoMode_27_9A30D7DA4C0E0DE9173F4B8642CE74AC;   // 0x001E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBPE_AmmoType                                 AmmoType_297_CFB4AC0F47FEFAFDFFB8D4947FF425FD;     // 0x001F(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FireRatio_13_DCEFC8AC4CCBC24077A25FB504B8DB8A;     // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BulletMinDamage_32_9AF58C3645AA6460723FDE8786ADE807; // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BulletMaxDamage_33_1EDBD9264CE3D2CFA9746188FBC760BB; // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SpreadInit_52_E9E2ABFD4A1CA15B1D18A9A003B9B8CD;    // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SpreadPenaltyWhileMoving_58_19E71A7641A94B417CA8AC93924FA917; // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SpreadDefault_55_63F888C4426286C4D1B2D2A1E1CA1030; // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SpreadChangeTime_62_D1411635402CB2953F90C19B96107469; // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SpreadAddAfterShot_61_2BBE7A64404FD83792DCBCAFFC03CB98; // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SpreadMax_64_4E639BAF43C0FB6664D3699D54B5D2AC;     // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ThirdPersonSpreadMultiplier_177_06B53C0B462A5839231695AF6104161D; // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RecoilAddTime_71_4FF7D41847DB1E10AC3BFABD300436B7; // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RecoilStabilizeTime_73_0DCF4B894394A8989CC707ADF3883256; // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              RecoilRight_50_20826A124C61DD445AF0A4B1037B6886;   // 0x0080(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              RecoilUp_48_244DC517415B2B7F8804B7A71542497F;      // 0x0090(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FP_RecoilAddTime_117_75ACCF3F4149077DCC798B95DA699FA7; // 0x00A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FP_RecoilStabillizeTime_119_594FE4ED44666E84D2E4119A6F5C6C37; // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              FP_RecoilRight_121_0685BA6A496016A618984E9F2E49D9DD; // 0x00B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              FP_RecoilUp_123_C0368C3C49174C0152464D95C25C7B36;  // 0x00C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RecoilVerticalMaxTime_282_10BCA4454D9CD7896EDD15BAD5B15743; // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CameraPitchOffsetAfterFirstShot_219_57591A424076F727B6E0188DF14CB38A; // 0x00D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PenetrationCount_105_582E2E754BF9E9F01AE3E28E0DA00FAF; // 0x00E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E4[0x4];                                       // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class USkeletalMesh>           SkeletalMesh_328_6EEE4A5A4CBE9243ECAE5894FB4DC8A2; // 0x00E8(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UAnimMontage>            WeaponAimReloadAnim_329_3EF3D0E14AC105CBDF9B6085989FED07; // 0x0118(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UAnimMontage>            WeaponShotAnim_330_6AB4BFC4488F56EF3B668E89CD98E1C3; // 0x0148(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UAnimMontage>            WeaponReloadAnim_331_B5668C5F48F8CC89C0BE4A9F3D4A4E3D; // 0x0178(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   WeaponAnimInstance_332_0DFAA40C4314AEE5E4252D8DC584A6B1; // 0x01A8(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UPaperSprite>            UIIcon_327_72FF027247E951512B12188E5E38A5BB;       // 0x01D8(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	double                                        LeftHandVariant_108_5B425900468CC3BA242AB88941EAC0C4; // 0x0208(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_WeaponShakeInfo>             TPPShootShake_147_113D64534DDA5A0F1D70E68433A71632; // 0x0210(0x0010)(Edit, BlueprintVisible)
	TArray<struct FS_WeaponShakeInfo>             FPPShootShake_149_18ED21A84B538D4D5DF93AAED5E8E6C8; // 0x0220(0x0010)(Edit, BlueprintVisible)
	TArray<struct FS_WeaponShakeInfo>             FPPShootShakeOptics_264_52D82A3944204D32EE19FBAC4CB6DA00; // 0x0230(0x0010)(Edit, BlueprintVisible)
	struct FS_WeaponShakeInfo                     FPPSmoothShootShake_260_D89D04184BB0412842E8FDA220564D27; // 0x0240(0x0020)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class UCurveVector*                           FPPLocalRecoilPos_144_F9CF445B4254C21853158498D222BF64; // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCurveVector*                           FPPLocalRecoilRot_145_45D8C6D94CDB5557A5A072A4C2C2716C; // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCurveVector*                           FPPLocalRecoilPosWithScope_222_EA4D05F64DC4B1ADE26556A0ADF73750; // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCurveVector*                           FPPLocalRecoilPosWithHolo_228_7801344849CDF4184A404EB6694FCBAC; // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCurveVector*                           FPPLocalRecoilRotWithScope_251_EC255A4641090A1E537227ADEED77F36; // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCurveVector*                           FPPLocalRecoilRotWithHolo_252_E95657D64A6832CFB0E281A6C30396C8; // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        BulletSpeed_153_76D4980645BE7BFF901EB99D839A0D9E;  // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BDMG_0_159_500ED99D4F65D5FD096457AC4F2E8E80;       // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        HDMG_0_163_F445D00A40004E8C61DDA981A7E9CCE1;       // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_PPAim                               PP_Aim_172_ABFDEEEF44F7681AC61A75A1817D09CD;       // 0x02A8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BulletFinalSpeed_180_37E529C64B93A382B88334BAE6DB6B0A; // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FP_BobcycleIdleMultiplier_326_0B0ABE914A6B76B64D302F8A22B080B1; // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FP_RotationMultiplier_185_4C423A614FA10F3B645EE88F63AA9175; // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FP_RotationAnchor_186_472A65DC412D828963B746ADE0133172; // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FP_RotationMultiplier_HoloScope_302_B15B9F7A42571059E10699A438BA9A59; // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FP_RotationAnchor_HoloScope_303_5616764E49E6181645064AB238FEF8E5; // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FP_RotationLimit_307_EE8542E14753FEC4C50927972CF295E4; // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasFastReload_323_4031483347161A33A97E91954F78D888; // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BoltAction_309_5C6D37B14B8B634668D76AA5208B83E6;   // 0x02F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2FA[0x6];                                      // 0x02FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UFMODEvent>              AutoSound_333_01FA8F6A482E78890BCC9CA1CF93C833;    // 0x0300(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UFMODEvent>              SingleShotSound_334_97CF628D416718D8E33447BF6698DF6A; // 0x0330(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	double                                        CollimatorOffset_202_996A57084C3DB0CA8EA78F92021883D5; // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ScopeOffset_294_6CE4F50A46211061E49C0CBD5B04DB30;  // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FBPS_SupportedAttachments>      SupportedModes_209_94563E2E4E7A6A477BE30AA47366FAA0; // 0x0370(0x0010)(Edit, BlueprintVisible)
	TArray<class FName>                           SupportedBrackets_212_45776F11450CF4F0BD1B11B8F25371ED; // 0x0380(0x0010)(Edit, BlueprintVisible)
	ETier                                         Tier_215_393F52CB469189DF287F178894501CDE;         // 0x0390(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_391[0x7];                                      // 0x0391(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        WeaponFOV_225_4F6434F44099DF3F6EF686AF255B4742;    // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DistanceToCameraWorkbench_231_FE15E7484F23D22776088BBD29282BD9; // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LocationWeaponWorkbench_234_6FF542804F7AE4D729003FB074A0CA42; // 0x03A8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Power_241_5FA08143402424E413637F896748A684;        // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        EffectiveRange_242_73F51D9743F94DEB7FE8B2A2AAED5E3D; // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Stability_243_410598534B1777346B06BBAE0D2B6FFE;    // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveVector*                           CockingRecoil_Pos_269_7A5A512449E0603D2F8303B01A4E85E3; // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCurveVector*                           CockingRecoil_Rot_270_9BD55DD048F82AD2084260AD6638F37D; // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        DistanceDamagePower_278_63C1BB1346A02258691470B45F7FE663; // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveVector*                           FPPEquipPos_286_AADC877D457F2440FAABF5ABEBA1AD73;  // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCurveVector*                           FPPEquipRot_288_F504EA84423442D3A2001B8CC4D3ED7C;  // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UNiagaraSystem>          TPSMuzzleFlash_314_A5D78FFF4B5D6090518BDABB9C721E42; // 0x0400(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UNiagaraSystem>          FPSMuzzleFlash_315_D2289BC24068416C24A06ABBA7879634; // 0x0430(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UNiagaraSystem>          TPSSupressedMuzzleFlash_320_8804D5B3448A65977ACB26AA5455A68E; // 0x0460(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UNiagaraSystem>          FPSSupressedMuzzleFlash_321_BADC65ED4FB18250C6E70D86F34416E1; // 0x0490(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
};
static_assert(alignof(FBPS_WeaponData) == 0x000008, "Wrong alignment on FBPS_WeaponData");
static_assert(sizeof(FBPS_WeaponData) == 0x0004C0, "Wrong size on FBPS_WeaponData");
static_assert(offsetof(FBPS_WeaponData, Name_51_B16287794691692AD32DEF8A39B6C006) == 0x000000, "Member 'FBPS_WeaponData::Name_51_B16287794691692AD32DEF8A39B6C006' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, Type_8_FD614DE04D8567521383BF933DD03880) == 0x000008, "Member 'FBPS_WeaponData::Type_8_FD614DE04D8567521383BF933DD03880' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, MaxAmmoInMag_16_4D528A164F039B073A645DB5AB3D57AA) == 0x00000C, "Member 'FBPS_WeaponData::MaxAmmoInMag_16_4D528A164F039B073A645DB5AB3D57AA' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, LowAmmoCount_246_34A3DA234AC2C0E58CEE3F98B0DB321F) == 0x000010, "Member 'FBPS_WeaponData::LowAmmoCount_246_34A3DA234AC2C0E58CEE3F98B0DB321F' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, RoundsInBurst_18_D1BC9E21476F66599884C7BB3E5D21BC) == 0x000014, "Member 'FBPS_WeaponData::RoundsInBurst_18_D1BC9E21476F66599884C7BB3E5D21BC' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, BulletsInShot_68_5C5A152B48C7C7D852A42EBA265BE167) == 0x000018, "Member 'FBPS_WeaponData::BulletsInShot_68_5C5A152B48C7C7D852A42EBA265BE167' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, HasSingleMode_25_77EA840E4BD93CF4A5AF4FB3D607FEC4) == 0x00001C, "Member 'FBPS_WeaponData::HasSingleMode_25_77EA840E4BD93CF4A5AF4FB3D607FEC4' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, HasBurstMode_26_917008E34B7616E494146F9457F90928) == 0x00001D, "Member 'FBPS_WeaponData::HasBurstMode_26_917008E34B7616E494146F9457F90928' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, HasAutoMode_27_9A30D7DA4C0E0DE9173F4B8642CE74AC) == 0x00001E, "Member 'FBPS_WeaponData::HasAutoMode_27_9A30D7DA4C0E0DE9173F4B8642CE74AC' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, AmmoType_297_CFB4AC0F47FEFAFDFFB8D4947FF425FD) == 0x00001F, "Member 'FBPS_WeaponData::AmmoType_297_CFB4AC0F47FEFAFDFFB8D4947FF425FD' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, FireRatio_13_DCEFC8AC4CCBC24077A25FB504B8DB8A) == 0x000020, "Member 'FBPS_WeaponData::FireRatio_13_DCEFC8AC4CCBC24077A25FB504B8DB8A' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, BulletMinDamage_32_9AF58C3645AA6460723FDE8786ADE807) == 0x000028, "Member 'FBPS_WeaponData::BulletMinDamage_32_9AF58C3645AA6460723FDE8786ADE807' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, BulletMaxDamage_33_1EDBD9264CE3D2CFA9746188FBC760BB) == 0x000030, "Member 'FBPS_WeaponData::BulletMaxDamage_33_1EDBD9264CE3D2CFA9746188FBC760BB' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, SpreadInit_52_E9E2ABFD4A1CA15B1D18A9A003B9B8CD) == 0x000038, "Member 'FBPS_WeaponData::SpreadInit_52_E9E2ABFD4A1CA15B1D18A9A003B9B8CD' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, SpreadPenaltyWhileMoving_58_19E71A7641A94B417CA8AC93924FA917) == 0x000040, "Member 'FBPS_WeaponData::SpreadPenaltyWhileMoving_58_19E71A7641A94B417CA8AC93924FA917' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, SpreadDefault_55_63F888C4426286C4D1B2D2A1E1CA1030) == 0x000048, "Member 'FBPS_WeaponData::SpreadDefault_55_63F888C4426286C4D1B2D2A1E1CA1030' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, SpreadChangeTime_62_D1411635402CB2953F90C19B96107469) == 0x000050, "Member 'FBPS_WeaponData::SpreadChangeTime_62_D1411635402CB2953F90C19B96107469' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, SpreadAddAfterShot_61_2BBE7A64404FD83792DCBCAFFC03CB98) == 0x000058, "Member 'FBPS_WeaponData::SpreadAddAfterShot_61_2BBE7A64404FD83792DCBCAFFC03CB98' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, SpreadMax_64_4E639BAF43C0FB6664D3699D54B5D2AC) == 0x000060, "Member 'FBPS_WeaponData::SpreadMax_64_4E639BAF43C0FB6664D3699D54B5D2AC' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, ThirdPersonSpreadMultiplier_177_06B53C0B462A5839231695AF6104161D) == 0x000068, "Member 'FBPS_WeaponData::ThirdPersonSpreadMultiplier_177_06B53C0B462A5839231695AF6104161D' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, RecoilAddTime_71_4FF7D41847DB1E10AC3BFABD300436B7) == 0x000070, "Member 'FBPS_WeaponData::RecoilAddTime_71_4FF7D41847DB1E10AC3BFABD300436B7' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, RecoilStabilizeTime_73_0DCF4B894394A8989CC707ADF3883256) == 0x000078, "Member 'FBPS_WeaponData::RecoilStabilizeTime_73_0DCF4B894394A8989CC707ADF3883256' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, RecoilRight_50_20826A124C61DD445AF0A4B1037B6886) == 0x000080, "Member 'FBPS_WeaponData::RecoilRight_50_20826A124C61DD445AF0A4B1037B6886' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, RecoilUp_48_244DC517415B2B7F8804B7A71542497F) == 0x000090, "Member 'FBPS_WeaponData::RecoilUp_48_244DC517415B2B7F8804B7A71542497F' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, FP_RecoilAddTime_117_75ACCF3F4149077DCC798B95DA699FA7) == 0x0000A0, "Member 'FBPS_WeaponData::FP_RecoilAddTime_117_75ACCF3F4149077DCC798B95DA699FA7' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, FP_RecoilStabillizeTime_119_594FE4ED44666E84D2E4119A6F5C6C37) == 0x0000A8, "Member 'FBPS_WeaponData::FP_RecoilStabillizeTime_119_594FE4ED44666E84D2E4119A6F5C6C37' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, FP_RecoilRight_121_0685BA6A496016A618984E9F2E49D9DD) == 0x0000B0, "Member 'FBPS_WeaponData::FP_RecoilRight_121_0685BA6A496016A618984E9F2E49D9DD' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, FP_RecoilUp_123_C0368C3C49174C0152464D95C25C7B36) == 0x0000C0, "Member 'FBPS_WeaponData::FP_RecoilUp_123_C0368C3C49174C0152464D95C25C7B36' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, RecoilVerticalMaxTime_282_10BCA4454D9CD7896EDD15BAD5B15743) == 0x0000D0, "Member 'FBPS_WeaponData::RecoilVerticalMaxTime_282_10BCA4454D9CD7896EDD15BAD5B15743' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, CameraPitchOffsetAfterFirstShot_219_57591A424076F727B6E0188DF14CB38A) == 0x0000D8, "Member 'FBPS_WeaponData::CameraPitchOffsetAfterFirstShot_219_57591A424076F727B6E0188DF14CB38A' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, PenetrationCount_105_582E2E754BF9E9F01AE3E28E0DA00FAF) == 0x0000E0, "Member 'FBPS_WeaponData::PenetrationCount_105_582E2E754BF9E9F01AE3E28E0DA00FAF' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, SkeletalMesh_328_6EEE4A5A4CBE9243ECAE5894FB4DC8A2) == 0x0000E8, "Member 'FBPS_WeaponData::SkeletalMesh_328_6EEE4A5A4CBE9243ECAE5894FB4DC8A2' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, WeaponAimReloadAnim_329_3EF3D0E14AC105CBDF9B6085989FED07) == 0x000118, "Member 'FBPS_WeaponData::WeaponAimReloadAnim_329_3EF3D0E14AC105CBDF9B6085989FED07' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, WeaponShotAnim_330_6AB4BFC4488F56EF3B668E89CD98E1C3) == 0x000148, "Member 'FBPS_WeaponData::WeaponShotAnim_330_6AB4BFC4488F56EF3B668E89CD98E1C3' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, WeaponReloadAnim_331_B5668C5F48F8CC89C0BE4A9F3D4A4E3D) == 0x000178, "Member 'FBPS_WeaponData::WeaponReloadAnim_331_B5668C5F48F8CC89C0BE4A9F3D4A4E3D' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, WeaponAnimInstance_332_0DFAA40C4314AEE5E4252D8DC584A6B1) == 0x0001A8, "Member 'FBPS_WeaponData::WeaponAnimInstance_332_0DFAA40C4314AEE5E4252D8DC584A6B1' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, UIIcon_327_72FF027247E951512B12188E5E38A5BB) == 0x0001D8, "Member 'FBPS_WeaponData::UIIcon_327_72FF027247E951512B12188E5E38A5BB' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, LeftHandVariant_108_5B425900468CC3BA242AB88941EAC0C4) == 0x000208, "Member 'FBPS_WeaponData::LeftHandVariant_108_5B425900468CC3BA242AB88941EAC0C4' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, TPPShootShake_147_113D64534DDA5A0F1D70E68433A71632) == 0x000210, "Member 'FBPS_WeaponData::TPPShootShake_147_113D64534DDA5A0F1D70E68433A71632' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, FPPShootShake_149_18ED21A84B538D4D5DF93AAED5E8E6C8) == 0x000220, "Member 'FBPS_WeaponData::FPPShootShake_149_18ED21A84B538D4D5DF93AAED5E8E6C8' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, FPPShootShakeOptics_264_52D82A3944204D32EE19FBAC4CB6DA00) == 0x000230, "Member 'FBPS_WeaponData::FPPShootShakeOptics_264_52D82A3944204D32EE19FBAC4CB6DA00' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, FPPSmoothShootShake_260_D89D04184BB0412842E8FDA220564D27) == 0x000240, "Member 'FBPS_WeaponData::FPPSmoothShootShake_260_D89D04184BB0412842E8FDA220564D27' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, FPPLocalRecoilPos_144_F9CF445B4254C21853158498D222BF64) == 0x000260, "Member 'FBPS_WeaponData::FPPLocalRecoilPos_144_F9CF445B4254C21853158498D222BF64' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, FPPLocalRecoilRot_145_45D8C6D94CDB5557A5A072A4C2C2716C) == 0x000268, "Member 'FBPS_WeaponData::FPPLocalRecoilRot_145_45D8C6D94CDB5557A5A072A4C2C2716C' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, FPPLocalRecoilPosWithScope_222_EA4D05F64DC4B1ADE26556A0ADF73750) == 0x000270, "Member 'FBPS_WeaponData::FPPLocalRecoilPosWithScope_222_EA4D05F64DC4B1ADE26556A0ADF73750' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, FPPLocalRecoilPosWithHolo_228_7801344849CDF4184A404EB6694FCBAC) == 0x000278, "Member 'FBPS_WeaponData::FPPLocalRecoilPosWithHolo_228_7801344849CDF4184A404EB6694FCBAC' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, FPPLocalRecoilRotWithScope_251_EC255A4641090A1E537227ADEED77F36) == 0x000280, "Member 'FBPS_WeaponData::FPPLocalRecoilRotWithScope_251_EC255A4641090A1E537227ADEED77F36' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, FPPLocalRecoilRotWithHolo_252_E95657D64A6832CFB0E281A6C30396C8) == 0x000288, "Member 'FBPS_WeaponData::FPPLocalRecoilRotWithHolo_252_E95657D64A6832CFB0E281A6C30396C8' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, BulletSpeed_153_76D4980645BE7BFF901EB99D839A0D9E) == 0x000290, "Member 'FBPS_WeaponData::BulletSpeed_153_76D4980645BE7BFF901EB99D839A0D9E' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, BDMG_0_159_500ED99D4F65D5FD096457AC4F2E8E80) == 0x000298, "Member 'FBPS_WeaponData::BDMG_0_159_500ED99D4F65D5FD096457AC4F2E8E80' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, HDMG_0_163_F445D00A40004E8C61DDA981A7E9CCE1) == 0x0002A0, "Member 'FBPS_WeaponData::HDMG_0_163_F445D00A40004E8C61DDA981A7E9CCE1' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, PP_Aim_172_ABFDEEEF44F7681AC61A75A1817D09CD) == 0x0002A8, "Member 'FBPS_WeaponData::PP_Aim_172_ABFDEEEF44F7681AC61A75A1817D09CD' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, BulletFinalSpeed_180_37E529C64B93A382B88334BAE6DB6B0A) == 0x0002C0, "Member 'FBPS_WeaponData::BulletFinalSpeed_180_37E529C64B93A382B88334BAE6DB6B0A' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, FP_BobcycleIdleMultiplier_326_0B0ABE914A6B76B64D302F8A22B080B1) == 0x0002C8, "Member 'FBPS_WeaponData::FP_BobcycleIdleMultiplier_326_0B0ABE914A6B76B64D302F8A22B080B1' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, FP_RotationMultiplier_185_4C423A614FA10F3B645EE88F63AA9175) == 0x0002D0, "Member 'FBPS_WeaponData::FP_RotationMultiplier_185_4C423A614FA10F3B645EE88F63AA9175' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, FP_RotationAnchor_186_472A65DC412D828963B746ADE0133172) == 0x0002D8, "Member 'FBPS_WeaponData::FP_RotationAnchor_186_472A65DC412D828963B746ADE0133172' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, FP_RotationMultiplier_HoloScope_302_B15B9F7A42571059E10699A438BA9A59) == 0x0002E0, "Member 'FBPS_WeaponData::FP_RotationMultiplier_HoloScope_302_B15B9F7A42571059E10699A438BA9A59' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, FP_RotationAnchor_HoloScope_303_5616764E49E6181645064AB238FEF8E5) == 0x0002E8, "Member 'FBPS_WeaponData::FP_RotationAnchor_HoloScope_303_5616764E49E6181645064AB238FEF8E5' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, FP_RotationLimit_307_EE8542E14753FEC4C50927972CF295E4) == 0x0002F0, "Member 'FBPS_WeaponData::FP_RotationLimit_307_EE8542E14753FEC4C50927972CF295E4' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, bHasFastReload_323_4031483347161A33A97E91954F78D888) == 0x0002F8, "Member 'FBPS_WeaponData::bHasFastReload_323_4031483347161A33A97E91954F78D888' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, BoltAction_309_5C6D37B14B8B634668D76AA5208B83E6) == 0x0002F9, "Member 'FBPS_WeaponData::BoltAction_309_5C6D37B14B8B634668D76AA5208B83E6' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, AutoSound_333_01FA8F6A482E78890BCC9CA1CF93C833) == 0x000300, "Member 'FBPS_WeaponData::AutoSound_333_01FA8F6A482E78890BCC9CA1CF93C833' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, SingleShotSound_334_97CF628D416718D8E33447BF6698DF6A) == 0x000330, "Member 'FBPS_WeaponData::SingleShotSound_334_97CF628D416718D8E33447BF6698DF6A' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, CollimatorOffset_202_996A57084C3DB0CA8EA78F92021883D5) == 0x000360, "Member 'FBPS_WeaponData::CollimatorOffset_202_996A57084C3DB0CA8EA78F92021883D5' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, ScopeOffset_294_6CE4F50A46211061E49C0CBD5B04DB30) == 0x000368, "Member 'FBPS_WeaponData::ScopeOffset_294_6CE4F50A46211061E49C0CBD5B04DB30' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, SupportedModes_209_94563E2E4E7A6A477BE30AA47366FAA0) == 0x000370, "Member 'FBPS_WeaponData::SupportedModes_209_94563E2E4E7A6A477BE30AA47366FAA0' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, SupportedBrackets_212_45776F11450CF4F0BD1B11B8F25371ED) == 0x000380, "Member 'FBPS_WeaponData::SupportedBrackets_212_45776F11450CF4F0BD1B11B8F25371ED' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, Tier_215_393F52CB469189DF287F178894501CDE) == 0x000390, "Member 'FBPS_WeaponData::Tier_215_393F52CB469189DF287F178894501CDE' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, WeaponFOV_225_4F6434F44099DF3F6EF686AF255B4742) == 0x000398, "Member 'FBPS_WeaponData::WeaponFOV_225_4F6434F44099DF3F6EF686AF255B4742' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, DistanceToCameraWorkbench_231_FE15E7484F23D22776088BBD29282BD9) == 0x0003A0, "Member 'FBPS_WeaponData::DistanceToCameraWorkbench_231_FE15E7484F23D22776088BBD29282BD9' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, LocationWeaponWorkbench_234_6FF542804F7AE4D729003FB074A0CA42) == 0x0003A8, "Member 'FBPS_WeaponData::LocationWeaponWorkbench_234_6FF542804F7AE4D729003FB074A0CA42' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, Power_241_5FA08143402424E413637F896748A684) == 0x0003C0, "Member 'FBPS_WeaponData::Power_241_5FA08143402424E413637F896748A684' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, EffectiveRange_242_73F51D9743F94DEB7FE8B2A2AAED5E3D) == 0x0003C8, "Member 'FBPS_WeaponData::EffectiveRange_242_73F51D9743F94DEB7FE8B2A2AAED5E3D' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, Stability_243_410598534B1777346B06BBAE0D2B6FFE) == 0x0003D0, "Member 'FBPS_WeaponData::Stability_243_410598534B1777346B06BBAE0D2B6FFE' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, CockingRecoil_Pos_269_7A5A512449E0603D2F8303B01A4E85E3) == 0x0003D8, "Member 'FBPS_WeaponData::CockingRecoil_Pos_269_7A5A512449E0603D2F8303B01A4E85E3' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, CockingRecoil_Rot_270_9BD55DD048F82AD2084260AD6638F37D) == 0x0003E0, "Member 'FBPS_WeaponData::CockingRecoil_Rot_270_9BD55DD048F82AD2084260AD6638F37D' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, DistanceDamagePower_278_63C1BB1346A02258691470B45F7FE663) == 0x0003E8, "Member 'FBPS_WeaponData::DistanceDamagePower_278_63C1BB1346A02258691470B45F7FE663' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, FPPEquipPos_286_AADC877D457F2440FAABF5ABEBA1AD73) == 0x0003F0, "Member 'FBPS_WeaponData::FPPEquipPos_286_AADC877D457F2440FAABF5ABEBA1AD73' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, FPPEquipRot_288_F504EA84423442D3A2001B8CC4D3ED7C) == 0x0003F8, "Member 'FBPS_WeaponData::FPPEquipRot_288_F504EA84423442D3A2001B8CC4D3ED7C' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, TPSMuzzleFlash_314_A5D78FFF4B5D6090518BDABB9C721E42) == 0x000400, "Member 'FBPS_WeaponData::TPSMuzzleFlash_314_A5D78FFF4B5D6090518BDABB9C721E42' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, FPSMuzzleFlash_315_D2289BC24068416C24A06ABBA7879634) == 0x000430, "Member 'FBPS_WeaponData::FPSMuzzleFlash_315_D2289BC24068416C24A06ABBA7879634' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, TPSSupressedMuzzleFlash_320_8804D5B3448A65977ACB26AA5455A68E) == 0x000460, "Member 'FBPS_WeaponData::TPSSupressedMuzzleFlash_320_8804D5B3448A65977ACB26AA5455A68E' has a wrong offset!");
static_assert(offsetof(FBPS_WeaponData, FPSSupressedMuzzleFlash_321_BADC65ED4FB18250C6E70D86F34416E1) == 0x000490, "Member 'FBPS_WeaponData::FPSSupressedMuzzleFlash_321_BADC65ED4FB18250C6E70D86F34416E1' has a wrong offset!");

}
