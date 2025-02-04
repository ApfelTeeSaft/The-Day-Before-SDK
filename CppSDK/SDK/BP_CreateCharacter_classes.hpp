#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CreateCharacter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "WE_BodyTypes_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CreateCharacter.BP_CreateCharacter_C
// 0x01D8 (0x04F0 - 0x0318)
class ABP_CreateCharacter_C final : public APawn
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0318(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCineCameraComponent*                   CineCamera;                                        // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 beard;                                             // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Head;                                              // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Mesh;                                              // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Hair2;                                             // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Hair1;                                             // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 OuterwearSlot;                                     // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 PantsSlot;                                         // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         MoveCamera_NewTrack_0_DDDA617D49B90B1440ED739BD77BD294; // 0x0360(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            MoveCamera__Direction_DDDA617D49B90B1440ED739BD77BD294; // 0x0364(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_365[0x3];                                      // 0x0365(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Movecamera;                                        // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CanRotate_;                                        // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_371[0x7];                                      // 0x0371(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              StartLocation;                                     // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DM_PantsSlot;                                      // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DM_OutwearSlot;                                    // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_398[0x8];                                      // 0x0398(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             DefaultTransform;                                  // 0x03A0(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                EndPoint;                                          // 0x0400(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bBeard;                                            // 0x0418(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHead;                                             // 0x0419(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41A[0x2];                                      // 0x041A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RandomHead;                                        // 0x041C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RandomBeard;                                       // 0x0420(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Woman_;                                            // 0x0424(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Created_;                                          // 0x0425(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_426[0x2];                                      // 0x0426(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               DM_HeadGirl;                                       // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DM_HeadMan;                                        // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        ScalarTexture;                                     // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ScalarMakeupSelector;                              // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ScalarUseScar;                                     // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ScalarScarSelector;                                // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ScalarUseMakeup;                                   // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DM_BodyGirl;                                       // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DM_LegsGirl;                                       // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DM_BodyMan;                                        // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DM_LegsMan;                                        // 0x0478(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DMHeadMan;                                         // 0x0480(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        AGE;                                               // 0x0488(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Freckles;                                          // 0x0490(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TattooDepth;                                       // 0x0498(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MakeupDepth;                                       // 0x04A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MakeupMetallic;                                    // 0x04A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MakeupGloss;                                       // 0x04B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LipsDepth;                                         // 0x04B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LipsMetallic;                                      // 0x04C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LipsGloss;                                         // 0x04C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Tattoo;                                            // 0x04D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Makeup;                                            // 0x04D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnCharCreateDispat;                                // 0x04E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ChangeSex(EWE_BodyTypes IsMan_, bool Param_Woman_);
	void CheckBlack();
	void CheckSkinTone(bool Black);
	void CreateCharacterEmpty();
	void ExecuteUbergraph_BP_CreateCharacter(int32 EntryPoint);
	void MoveCamera__FinishedFunc();
	void MoveCamera__UpdateFunc();
	void OnCharCreateDispat__DelegateSignature();
	void OnLoaded_1BB5864D47EB05B5E11B9F9B66035C96(TSubclassOf<class UObject> Loaded);
	void OnLoaded_60A63591423815B8C614FDB7879E6A36(TSubclassOf<class UObject> Loaded);
	void OnLoaded_74BE9FF84D7CEA07053F3F8B7F500CCB(TSubclassOf<class UObject> Loaded);
	void ReceiveBeginPlay();
	void RestoreMaterials();
	void SetGirlFace(bool Girl_);
	void SetSkeletalMeshGirl();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CreateCharacter_C">();
	}
	static class ABP_CreateCharacter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CreateCharacter_C>();
	}
};
static_assert(alignof(ABP_CreateCharacter_C) == 0x000010, "Wrong alignment on ABP_CreateCharacter_C");
static_assert(sizeof(ABP_CreateCharacter_C) == 0x0004F0, "Wrong size on ABP_CreateCharacter_C");
static_assert(offsetof(ABP_CreateCharacter_C, UberGraphFrame) == 0x000318, "Member 'ABP_CreateCharacter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, CineCamera) == 0x000320, "Member 'ABP_CreateCharacter_C::CineCamera' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, beard) == 0x000328, "Member 'ABP_CreateCharacter_C::beard' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, Head) == 0x000330, "Member 'ABP_CreateCharacter_C::Head' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, Mesh) == 0x000338, "Member 'ABP_CreateCharacter_C::Mesh' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, Hair2) == 0x000340, "Member 'ABP_CreateCharacter_C::Hair2' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, Hair1) == 0x000348, "Member 'ABP_CreateCharacter_C::Hair1' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, OuterwearSlot) == 0x000350, "Member 'ABP_CreateCharacter_C::OuterwearSlot' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, PantsSlot) == 0x000358, "Member 'ABP_CreateCharacter_C::PantsSlot' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, MoveCamera_NewTrack_0_DDDA617D49B90B1440ED739BD77BD294) == 0x000360, "Member 'ABP_CreateCharacter_C::MoveCamera_NewTrack_0_DDDA617D49B90B1440ED739BD77BD294' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, MoveCamera__Direction_DDDA617D49B90B1440ED739BD77BD294) == 0x000364, "Member 'ABP_CreateCharacter_C::MoveCamera__Direction_DDDA617D49B90B1440ED739BD77BD294' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, Movecamera) == 0x000368, "Member 'ABP_CreateCharacter_C::Movecamera' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, CanRotate_) == 0x000370, "Member 'ABP_CreateCharacter_C::CanRotate_' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, StartLocation) == 0x000378, "Member 'ABP_CreateCharacter_C::StartLocation' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, DM_PantsSlot) == 0x000388, "Member 'ABP_CreateCharacter_C::DM_PantsSlot' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, DM_OutwearSlot) == 0x000390, "Member 'ABP_CreateCharacter_C::DM_OutwearSlot' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, DefaultTransform) == 0x0003A0, "Member 'ABP_CreateCharacter_C::DefaultTransform' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, EndPoint) == 0x000400, "Member 'ABP_CreateCharacter_C::EndPoint' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, bBeard) == 0x000418, "Member 'ABP_CreateCharacter_C::bBeard' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, bHead) == 0x000419, "Member 'ABP_CreateCharacter_C::bHead' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, RandomHead) == 0x00041C, "Member 'ABP_CreateCharacter_C::RandomHead' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, RandomBeard) == 0x000420, "Member 'ABP_CreateCharacter_C::RandomBeard' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, Woman_) == 0x000424, "Member 'ABP_CreateCharacter_C::Woman_' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, Created_) == 0x000425, "Member 'ABP_CreateCharacter_C::Created_' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, DM_HeadGirl) == 0x000428, "Member 'ABP_CreateCharacter_C::DM_HeadGirl' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, DM_HeadMan) == 0x000430, "Member 'ABP_CreateCharacter_C::DM_HeadMan' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, ScalarTexture) == 0x000438, "Member 'ABP_CreateCharacter_C::ScalarTexture' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, ScalarMakeupSelector) == 0x000440, "Member 'ABP_CreateCharacter_C::ScalarMakeupSelector' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, ScalarUseScar) == 0x000448, "Member 'ABP_CreateCharacter_C::ScalarUseScar' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, ScalarScarSelector) == 0x000450, "Member 'ABP_CreateCharacter_C::ScalarScarSelector' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, ScalarUseMakeup) == 0x000458, "Member 'ABP_CreateCharacter_C::ScalarUseMakeup' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, DM_BodyGirl) == 0x000460, "Member 'ABP_CreateCharacter_C::DM_BodyGirl' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, DM_LegsGirl) == 0x000468, "Member 'ABP_CreateCharacter_C::DM_LegsGirl' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, DM_BodyMan) == 0x000470, "Member 'ABP_CreateCharacter_C::DM_BodyMan' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, DM_LegsMan) == 0x000478, "Member 'ABP_CreateCharacter_C::DM_LegsMan' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, DMHeadMan) == 0x000480, "Member 'ABP_CreateCharacter_C::DMHeadMan' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, AGE) == 0x000488, "Member 'ABP_CreateCharacter_C::AGE' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, Freckles) == 0x000490, "Member 'ABP_CreateCharacter_C::Freckles' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, TattooDepth) == 0x000498, "Member 'ABP_CreateCharacter_C::TattooDepth' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, MakeupDepth) == 0x0004A0, "Member 'ABP_CreateCharacter_C::MakeupDepth' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, MakeupMetallic) == 0x0004A8, "Member 'ABP_CreateCharacter_C::MakeupMetallic' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, MakeupGloss) == 0x0004B0, "Member 'ABP_CreateCharacter_C::MakeupGloss' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, LipsDepth) == 0x0004B8, "Member 'ABP_CreateCharacter_C::LipsDepth' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, LipsMetallic) == 0x0004C0, "Member 'ABP_CreateCharacter_C::LipsMetallic' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, LipsGloss) == 0x0004C8, "Member 'ABP_CreateCharacter_C::LipsGloss' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, Tattoo) == 0x0004D0, "Member 'ABP_CreateCharacter_C::Tattoo' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, Makeup) == 0x0004D8, "Member 'ABP_CreateCharacter_C::Makeup' has a wrong offset!");
static_assert(offsetof(ABP_CreateCharacter_C, OnCharCreateDispat) == 0x0004E0, "Member 'ABP_CreateCharacter_C::OnCharCreateDispat' has a wrong offset!");

}

