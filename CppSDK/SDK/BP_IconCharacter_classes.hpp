#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_IconCharacter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_IconCharacter.BP_IconCharacter_C
// 0x0158 (0x0470 - 0x0318)
class ABP_IconCharacter_C final : public APawn
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0318(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 Weapon1;                                           // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Weapon2;                                           // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Weapon3;                                           // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Rukzak;                                            // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Kaska;                                             // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Bronik;                                            // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 beard;                                             // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Head;                                              // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Mesh;                                              // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Hair2;                                             // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Hair1;                                             // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 OuterwearSlot;                                     // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 PantsSlot;                                         // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          CanRotate_;                                        // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_389[0x7];                                      // 0x0389(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              StartLocation;                                     // 0x0390(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             DefaultTransform;                                  // 0x03A0(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                EndPoint;                                          // 0x0400(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                StartPoint;                                        // 0x0418(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               ChooseCharacterDynMat;                             // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DM_BodyMan;                                        // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DM_LegsMan;                                        // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DW_BodyGirl;                                       // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DM_LegsGirl;                                       // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnRefreshMeshComplete;                             // 0x0458(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void Change_Material_Param_Color(TArray<class USkeletalMeshComponent*>& Array, class FName ParameterName, const struct FLinearColor& Value);
	void CheckBlack(bool Woman);
	void CheckBlendshapes();
	void CheckSex(class USkeletalMesh* Param_beard, bool Woman_);
	void CheckSkinTone(bool Woman, bool Black);
	void ExecuteUbergraph_BP_IconCharacter(int32 EntryPoint);
	void ForceMips(class UMeshComponent* Param_Mesh);
	void OnRefreshMeshComplete__DelegateSignature();
	void ReceiveBeginPlay();
	void RefreshMesh();
	void RestoreDefaultMaterials();
	void SetSuitDefault();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_IconCharacter_C">();
	}
	static class ABP_IconCharacter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_IconCharacter_C>();
	}
};
static_assert(alignof(ABP_IconCharacter_C) == 0x000010, "Wrong alignment on ABP_IconCharacter_C");
static_assert(sizeof(ABP_IconCharacter_C) == 0x000470, "Wrong size on ABP_IconCharacter_C");
static_assert(offsetof(ABP_IconCharacter_C, UberGraphFrame) == 0x000318, "Member 'ABP_IconCharacter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_IconCharacter_C, Weapon1) == 0x000320, "Member 'ABP_IconCharacter_C::Weapon1' has a wrong offset!");
static_assert(offsetof(ABP_IconCharacter_C, Weapon2) == 0x000328, "Member 'ABP_IconCharacter_C::Weapon2' has a wrong offset!");
static_assert(offsetof(ABP_IconCharacter_C, Weapon3) == 0x000330, "Member 'ABP_IconCharacter_C::Weapon3' has a wrong offset!");
static_assert(offsetof(ABP_IconCharacter_C, Rukzak) == 0x000338, "Member 'ABP_IconCharacter_C::Rukzak' has a wrong offset!");
static_assert(offsetof(ABP_IconCharacter_C, Kaska) == 0x000340, "Member 'ABP_IconCharacter_C::Kaska' has a wrong offset!");
static_assert(offsetof(ABP_IconCharacter_C, Bronik) == 0x000348, "Member 'ABP_IconCharacter_C::Bronik' has a wrong offset!");
static_assert(offsetof(ABP_IconCharacter_C, beard) == 0x000350, "Member 'ABP_IconCharacter_C::beard' has a wrong offset!");
static_assert(offsetof(ABP_IconCharacter_C, Head) == 0x000358, "Member 'ABP_IconCharacter_C::Head' has a wrong offset!");
static_assert(offsetof(ABP_IconCharacter_C, Mesh) == 0x000360, "Member 'ABP_IconCharacter_C::Mesh' has a wrong offset!");
static_assert(offsetof(ABP_IconCharacter_C, Hair2) == 0x000368, "Member 'ABP_IconCharacter_C::Hair2' has a wrong offset!");
static_assert(offsetof(ABP_IconCharacter_C, Hair1) == 0x000370, "Member 'ABP_IconCharacter_C::Hair1' has a wrong offset!");
static_assert(offsetof(ABP_IconCharacter_C, OuterwearSlot) == 0x000378, "Member 'ABP_IconCharacter_C::OuterwearSlot' has a wrong offset!");
static_assert(offsetof(ABP_IconCharacter_C, PantsSlot) == 0x000380, "Member 'ABP_IconCharacter_C::PantsSlot' has a wrong offset!");
static_assert(offsetof(ABP_IconCharacter_C, CanRotate_) == 0x000388, "Member 'ABP_IconCharacter_C::CanRotate_' has a wrong offset!");
static_assert(offsetof(ABP_IconCharacter_C, StartLocation) == 0x000390, "Member 'ABP_IconCharacter_C::StartLocation' has a wrong offset!");
static_assert(offsetof(ABP_IconCharacter_C, DefaultTransform) == 0x0003A0, "Member 'ABP_IconCharacter_C::DefaultTransform' has a wrong offset!");
static_assert(offsetof(ABP_IconCharacter_C, EndPoint) == 0x000400, "Member 'ABP_IconCharacter_C::EndPoint' has a wrong offset!");
static_assert(offsetof(ABP_IconCharacter_C, StartPoint) == 0x000418, "Member 'ABP_IconCharacter_C::StartPoint' has a wrong offset!");
static_assert(offsetof(ABP_IconCharacter_C, ChooseCharacterDynMat) == 0x000430, "Member 'ABP_IconCharacter_C::ChooseCharacterDynMat' has a wrong offset!");
static_assert(offsetof(ABP_IconCharacter_C, DM_BodyMan) == 0x000438, "Member 'ABP_IconCharacter_C::DM_BodyMan' has a wrong offset!");
static_assert(offsetof(ABP_IconCharacter_C, DM_LegsMan) == 0x000440, "Member 'ABP_IconCharacter_C::DM_LegsMan' has a wrong offset!");
static_assert(offsetof(ABP_IconCharacter_C, DW_BodyGirl) == 0x000448, "Member 'ABP_IconCharacter_C::DW_BodyGirl' has a wrong offset!");
static_assert(offsetof(ABP_IconCharacter_C, DM_LegsGirl) == 0x000450, "Member 'ABP_IconCharacter_C::DM_LegsGirl' has a wrong offset!");
static_assert(offsetof(ABP_IconCharacter_C, OnRefreshMeshComplete) == 0x000458, "Member 'ABP_IconCharacter_C::OnRefreshMeshComplete' has a wrong offset!");

}

