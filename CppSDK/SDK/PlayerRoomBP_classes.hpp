#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerRoomBP

#include "Basic.hpp"

#include "BuildingInfo_Categories_enum_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "PlayerRoomItemsStructure_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass PlayerRoomBP.PlayerRoomBP_C
// 0x01C0 (0x0450 - 0x0290)
class APlayerRoomBP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                   RoomSpawnInitial;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   RoomSpawnPBP;                                      // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          RoomBorder;                                        // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ASurvivalPlayer_V2_C*                   Char;                                              // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          ItemsCreated;                                      // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C9[0x7];                                      // 0x02C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CreatedItems;                                      // 0x02D0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ASurvivalPlayer_V2_C*>           PlayerInside;                                      // 0x02E0(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ASurvivalPlayer_V2_C*>           PlayerFilter;                                      // 0x02F0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class ARoomItemBaseBP_C*                      TempItem;                                          // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPlayerRoomItemsStructure>      ItemsInsideReplicated;                             // 0x0308(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         ItemsInsideIdReplicated;                           // 0x0318(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           Items_Inside;                                      // 0x0328(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FTransform>                     Items_Inside_Transform;                            // 0x0338(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USaveRoom_C*                            LocalSave;                                         // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         Color;                                             // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_354[0x4];                                      // 0x0354(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               RotationOffset;                                    // 0x0358(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	double                                        Rotate;                                            // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EditMode;                                          // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_379[0x7];                                      // 0x0379(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ARoomItemBaseBP_C*                      EditItem;                                          // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ARoomItemBaseBP_C*                      FocusedItem;                                       // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Confirm;                                           // 0x0390(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_391[0x3];                                      // 0x0391(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         AmountOfMoney;                                     // 0x0394(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBuildingInfo_Categories_enum                 Type;                                              // 0x0398(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_399[0x7];                                      // 0x0399(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 Hit_Actor_Looked;                                  // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentItemPrice;                                  // 0x03A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AC[0x4];                                      // 0x03AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASurvivalPlayer_V2_C*                   TempChar;                                          // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UWBP_FurnitureShopSlot_C*               CurrentFurnitureSlot;                              // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Im_Guest;                                          // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C1[0x7];                                      // 0x03C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 HouseName;                                         // 0x03C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ASurvivalPlayer_V2_C*                   RoomOwner;                                         // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UWBP_FurnitureShopButtons_C*            FurnitureCatalog;                                  // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Enter;                                             // 0x03E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E9[0x7];                                      // 0x03E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_GarageSpace_C*>              GarageSpace;                                       // 0x03F0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn)
	class ABP_TeleporterDoorMaster_C*             DoorTeleport;                                      // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ABP_Garage_C*                           GarageRef;                                         // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ASurvivalPlayer_V2_C*                   EnteredChar;                                       // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             AllowToBuild;                                      // 0x0418(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ASurvivalPlayer_V2_C*                   Me;                                                // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         SaveStringArray;                                   // 0x0430(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                        BuildLenght;                                       // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         INDEXpomuradovski;                                 // 0x0448(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SumCount;                                          // 0x044C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AllowToBuild__DelegateSignature(bool Success);
	void BndEvt__PlayerRoomBP_RoomBorder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__PlayerRoomBP_RoomBorder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BuildingUI(bool Entered_);
	struct FTransform CalculateTransform(EBuildingInfo_Categories_enum ItemType, bool Create, class AActor** HitActor);
	void CancelEditing();
	void CancelFocus();
	void ChangeColorPreviewItem(EBuildingInfo_Categories_enum Param_Type);
	void CheckHasItemOnTop(class ARoomItemBaseBP_C* RoomItem, bool* Return);
	void ConfirmItem(TSoftClassPtr<class UClass> Param_Class, int32 ItemId, bool Change, bool Destroy, const struct FBuildingInfo_Struct& Info);
	void ConfirmItemMulti(TSoftClassPtr<class UClass> Param_Class, const class FString& Phase, const struct FTransform& Transform, bool Change, int32 ItemId, bool Destroy, class FName DT_RowName, const struct FBuildingInfo_Struct& Info);
	void ConfirmUI();
	void CreateItem(TSoftClassPtr<class UClass> NewItemMesh, const struct FTransform& SpawnTransform);
	class AActor* CreateRoomItem(TSoftClassPtr<class UClass> Param_Class, const struct FTransform& Transform, class FName DT_RowName);
	void CustomCollisionEvent(class UObject* Object);
	void Decode_from_String(const class FString& SourceString, class FString* Param_Name, struct FTransform* Transform);
	void EditUI();
	void ExecuteUbergraph_PlayerRoomBP(int32 EntryPoint);
	void GetAmountOfMoney(int32* Param_AmountOfMoney);
	void GetOverlappedActorsByItem(TArray<class AActor*>* Output_Get);
	void GetPrice(int32* Price, class FName* Building_Info_Row_Names);
	void IsAllowedToBuild(bool* Bool);
	void IsEditing(bool* Bool);
	void IsRotating();
	void ItemUI();
	void Load_Func(TArray<class FString>& Array, const class FString& Phase);
	void LoadCR();
	void LoadCustomRoom(class ASurvivalPlayer_V2_C* Param_Char, bool AsGuest_, class ASurvivalPlayer_V2_C* Param_Owner);
	void LoadItems();
	void LoadRoom(class AActor* Param_Owner);
	void LoadRoomServ();
	void LookingPlacedItem(class AActor* HitActor);
	void OnCustomHighlightItem();
	void OnLoaded_0D9A577D4456EF7D1B3170A760AFC282(TSubclassOf<class UObject> Loaded);
	void Phasing(class ASurvivalPlayer_Test_C* Param_Char, const class FString& Phase);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void RelocateItem(bool Create, bool Param_Confirm, TSoftClassPtr<class UClass> Param_Class, EBuildingInfo_Categories_enum ItemType, bool Relocate, const struct FBuildingInfo_Struct& Info);
	void ReplicateRoomInfoToServer(const class FString& Phase, const class FName& ClassName, const struct FTransform& Transform, bool Change, int32 ID, bool Destroy, class AActor* Param_Owner);
	void Room_Insides_Load_on_Enter(const class FString& InputPin, class ASurvivalPlayer_Test_C* Self2, class FString* OutputPin, struct FPlayerRoomItemsStructure* Output);
	void RoomInfoUpdate(bool Change, int32 InputPin2, const struct FTransform& Transform, const class FName& Param_Name, bool Remove, class ASurvivalPlayer_Test_C* Param_Owner);
	void RoomInsides(const class FString& Phase, bool Create, const struct FPlayerRoomItemsStructure& PlayerRoomItemsStructure, class ASurvivalPlayer_V2_C* Param_Char);
	void RoomMulti(bool Param_Enter, class ASurvivalPlayer_V2_C* Param_Char, bool ImGuest, class ASurvivalPlayer_V2_C* Param_Owner);
	void RoomSaveCheck();
	void Save_Func(const struct FPlayerRoomItemsStructure& PlayerRoomItemsStructure, TArray<class FString>* Save);
	void SaveRoom(const struct FPlayerRoomItemsStructure& ItemInfo, const class AActor* Param_Owner);
	void SellItem();
	void SpawnGarage();
	void TransformItem(const struct FTransform& NewTransform);
	void UnloadCustomRoom(class ASurvivalPlayer_V2_C* Param_Char);
	void UnloadItems();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerRoomBP_C">();
	}
	static class APlayerRoomBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APlayerRoomBP_C>();
	}
};
static_assert(alignof(APlayerRoomBP_C) == 0x000008, "Wrong alignment on APlayerRoomBP_C");
static_assert(sizeof(APlayerRoomBP_C) == 0x000450, "Wrong size on APlayerRoomBP_C");
static_assert(offsetof(APlayerRoomBP_C, UberGraphFrame) == 0x000290, "Member 'APlayerRoomBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, RoomSpawnInitial) == 0x000298, "Member 'APlayerRoomBP_C::RoomSpawnInitial' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, Arrow) == 0x0002A0, "Member 'APlayerRoomBP_C::Arrow' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, RoomSpawnPBP) == 0x0002A8, "Member 'APlayerRoomBP_C::RoomSpawnPBP' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, RoomBorder) == 0x0002B0, "Member 'APlayerRoomBP_C::RoomBorder' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, DefaultSceneRoot) == 0x0002B8, "Member 'APlayerRoomBP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, Char) == 0x0002C0, "Member 'APlayerRoomBP_C::Char' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, ItemsCreated) == 0x0002C8, "Member 'APlayerRoomBP_C::ItemsCreated' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, CreatedItems) == 0x0002D0, "Member 'APlayerRoomBP_C::CreatedItems' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, PlayerInside) == 0x0002E0, "Member 'APlayerRoomBP_C::PlayerInside' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, PlayerFilter) == 0x0002F0, "Member 'APlayerRoomBP_C::PlayerFilter' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, TempItem) == 0x000300, "Member 'APlayerRoomBP_C::TempItem' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, ItemsInsideReplicated) == 0x000308, "Member 'APlayerRoomBP_C::ItemsInsideReplicated' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, ItemsInsideIdReplicated) == 0x000318, "Member 'APlayerRoomBP_C::ItemsInsideIdReplicated' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, Items_Inside) == 0x000328, "Member 'APlayerRoomBP_C::Items_Inside' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, Items_Inside_Transform) == 0x000338, "Member 'APlayerRoomBP_C::Items_Inside_Transform' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, LocalSave) == 0x000348, "Member 'APlayerRoomBP_C::LocalSave' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, Color) == 0x000350, "Member 'APlayerRoomBP_C::Color' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, RotationOffset) == 0x000358, "Member 'APlayerRoomBP_C::RotationOffset' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, Rotate) == 0x000370, "Member 'APlayerRoomBP_C::Rotate' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, EditMode) == 0x000378, "Member 'APlayerRoomBP_C::EditMode' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, EditItem) == 0x000380, "Member 'APlayerRoomBP_C::EditItem' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, FocusedItem) == 0x000388, "Member 'APlayerRoomBP_C::FocusedItem' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, Confirm) == 0x000390, "Member 'APlayerRoomBP_C::Confirm' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, AmountOfMoney) == 0x000394, "Member 'APlayerRoomBP_C::AmountOfMoney' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, Type) == 0x000398, "Member 'APlayerRoomBP_C::Type' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, Hit_Actor_Looked) == 0x0003A0, "Member 'APlayerRoomBP_C::Hit_Actor_Looked' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, CurrentItemPrice) == 0x0003A8, "Member 'APlayerRoomBP_C::CurrentItemPrice' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, TempChar) == 0x0003B0, "Member 'APlayerRoomBP_C::TempChar' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, CurrentFurnitureSlot) == 0x0003B8, "Member 'APlayerRoomBP_C::CurrentFurnitureSlot' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, Im_Guest) == 0x0003C0, "Member 'APlayerRoomBP_C::Im_Guest' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, HouseName) == 0x0003C8, "Member 'APlayerRoomBP_C::HouseName' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, RoomOwner) == 0x0003D8, "Member 'APlayerRoomBP_C::RoomOwner' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, FurnitureCatalog) == 0x0003E0, "Member 'APlayerRoomBP_C::FurnitureCatalog' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, Enter) == 0x0003E8, "Member 'APlayerRoomBP_C::Enter' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, GarageSpace) == 0x0003F0, "Member 'APlayerRoomBP_C::GarageSpace' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, DoorTeleport) == 0x000400, "Member 'APlayerRoomBP_C::DoorTeleport' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, GarageRef) == 0x000408, "Member 'APlayerRoomBP_C::GarageRef' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, EnteredChar) == 0x000410, "Member 'APlayerRoomBP_C::EnteredChar' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, AllowToBuild) == 0x000418, "Member 'APlayerRoomBP_C::AllowToBuild' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, Me) == 0x000428, "Member 'APlayerRoomBP_C::Me' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, SaveStringArray) == 0x000430, "Member 'APlayerRoomBP_C::SaveStringArray' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, BuildLenght) == 0x000440, "Member 'APlayerRoomBP_C::BuildLenght' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, INDEXpomuradovski) == 0x000448, "Member 'APlayerRoomBP_C::INDEXpomuradovski' has a wrong offset!");
static_assert(offsetof(APlayerRoomBP_C, SumCount) == 0x00044C, "Member 'APlayerRoomBP_C::SumCount' has a wrong offset!");

}
