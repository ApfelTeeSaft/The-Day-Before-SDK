#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TDB_GameMode

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PlayerStatesArray_structs.hpp"
#include "Survival_classes.hpp"
#include "Agones_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FirebaseFeatures_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass TDB_GameMode.TDB_GameMode_C
// 0x0528 (0x0908 - 0x03E0)
class ATDB_GameMode_C final : public ASurvivalGameMode
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAgonesComponent*                       Agones;                                            // 0x03E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPlayerSceneLoader_C*                   PlayerSceneLoader;                                 // 0x03F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         UniqueId;                                          // 0x0400(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_404[0x4];                                      // 0x0404(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnLevelLoaded;                                     // 0x0408(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class AActor*>                         SpawnedPlayers;                                    // 0x0418(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_RB_Vehicle_C*>               SpawnedVehicles;                                   // 0x0428(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         NewPlayerIndex;                                    // 0x0438(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43C[0x4];                                      // 0x043C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAISpawnManager_C*                      AISpawnManager;                                    // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         PlayersCount;                                      // 0x0448(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44C[0x4];                                      // 0x044C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           ShutdownServerHandle;                              // 0x0450(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        ShutdownTimer;                                     // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                UpdatePlayerJSONRequest;                           // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          SyncPlayerPosition;                                // 0x0468(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_469[0x7];                                      // 0x0469(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, class ASurvPC_C*>         PlayfabPlayers;                                    // 0x0470(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<bool>                                  CheckRenderedPawns;                                // 0x04C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 Key_Playfab;                                       // 0x04D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TMap<class FString, class ASurvivalPlayer_C*> LeftCharacters;                                    // 0x04E0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class APlayerDeadBodyRepl_C*>          SpawnedDeadBodies;                                 // 0x0530(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         DeadBodyLimit;                                     // 0x0540(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_544[0x4];                                      // 0x0544(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ASurvPC_C*>                      PlayerControllers;                                 // 0x0548(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TMap<int32, struct FPlayerStatesArray>        Squads;                                            // 0x0558(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         LastSquadIndex;                                    // 0x05A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5AC[0x4];                                      // 0x05AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           ItemsFoodAll;                                      // 0x05B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           ItemsAid;                                          // 0x05C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           ItemsWeapon;                                       // 0x05D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           ItemsAmmo;                                         // 0x05E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           ItemsArmor;                                        // 0x05F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           ItemsClothes;                                      // 0x0600(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           ItemsTradeCraft;                                   // 0x0610(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           ItemsBackpack;                                     // 0x0620(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           ItemsOther;                                        // 0x0630(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           ItemsAttachments;                                  // 0x0640(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AZombieManager_C*                       ZombieManager;                                     // 0x0650(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ADeerManager_C*                         DeerManager;                                       // 0x0658(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           ZombieManagerTimer;                                // 0x0660(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           DeerManagerTimer;                                  // 0x0668(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         ZombieManagerCheckFrequency;                       // 0x0670(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeerManagerCheckFrequency;                         // 0x0674(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASkyCreatorController_C*                SkyCreatorController;                              // 0x0678(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         SkyCreatorControllerCheckFrequency;                // 0x0680(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_684[0x4];                                      // 0x0684(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           SkyCreatorControllerTimer;                         // 0x0688(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<class FString, struct FTransform>        PlayerPosition;                                    // 0x0690(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             SavePlayerPosition;                                // 0x06E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class FString>                         SavePlayerLocation;                                // 0x06F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          ServerIsAllocated;                                 // 0x0700(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_701[0x3];                                      // 0x0701(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         WaitingForPlayers;                                 // 0x0704(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ServerRuntime;                                     // 0x0708(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_70C[0x4];                                      // 0x070C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UDatabaseReference*                     ServerInfoRef;                                     // 0x0710(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FString                                 SeverUniqueID;                                     // 0x0718(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          InitInfo;                                          // 0x0728(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_729[0x7];                                      // 0x0729(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameServerResponse                    Response;                                          // 0x0730(0x0138)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 PrevTimeTag;                                       // 0x0868(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 Region;                                            // 0x0878(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class FString>                         ServerNames;                                       // 0x0888(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             LogoutDis;                                         // 0x0898(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             SuvivalPlayerOnLogOut;                             // 0x08A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          NotReady;                                          // 0x08B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B9[0x3];                                      // 0x08B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         OldServerIndex;                                    // 0x08BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Game_Version;                                      // 0x08C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          ServerIsClosing;                                   // 0x08D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D1[0x3];                                      // 0x08D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CurrentBuild;                                      // 0x08D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSurvCreated;                                     // 0x08D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<int32>                                 StagesTimeUntillServerShutdown;                    // 0x08E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         ServerLifeInMinutes;                               // 0x08F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SetForUpdate;                                      // 0x08FC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8FD[0x3];                                      // 0x08FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SetForUpdateTimer;                                 // 0x0900(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AddDeadBody(const class APlayerDeadBodyRepl_C*& NewItem);
	void AddPlayfabPlayer(const class FString& PlayFabID, class ASurvPC_C* Player);
	void AgonesAllocateSuccess(const struct FEmptyResponse& Param_Response);
	void AgonesResponseError(const struct FAgonesError& Error);
	void AgonesResponseSuccess(const struct FEmptyResponse& Param_Response);
	void AgonesRoutine();
	int32 CalculateMinutesFrom2022();
	void CallLootAnim(double LootingHeight, bool LootPointOpened);
	void CampBuildInstant();
	void CampPlaceBegin();
	void CampPlaceEnd();
	void CheckAllocatedServer();
	void CheckServerRuntime();
	class AActor* ChoosePlayerStart(class AController* Player);
	void ConfirmPlayerJoined(const class FString& PlayFabPlayerID, class ASurvPC_C* Controller);
	void Craft(class APawn* Player);
	void CreateJSONRequest(const struct FVector& Position, class UTDBJsonObject** Result);
	void ExecuteUbergraph_TDB_GameMode(int32 EntryPoint);
	void GameServerInfoSuccess(const struct FGameServerResponse& Param_Response);
	void GenerateNewSquad(int32* SquadId);
	class FString Get_Server_Address();
	void GetAISpawnerManager(class AAISpawnManager_C** AISpawnerManager);
	int32 GetAmountOfPlayerControllers();
	void GetBunkerPlayerStart(class AActor** Start);
	void GetCurrentActiveVesrion();
	class ADeerManager_C* GetDeerManager();
	void GetOldServers();
	void GetPathToDatabase(class UFirestoreDocumentReference** Document);
	void GetPlayers(TArray<class AActor*>* Players);
	void GetPlayerStartForEnterBunker(class AActor** Start);
	void GetPlayerStartsWithTag(const class FString& Tag, TArray<class AActor*>* Starts);
	void GetPlayfabUser(const class FString& PlayFabID, class ASurvPC_C** Player, bool* IsFound);
	class ASkyCreatorController_C* GetSkyCreatorController();
	struct FVector GetStartForBunker(class AActor** Start);
	class FString GetTimeTag();
	void GetZombieManager(class AZombieManager_C** Param_ZombieManager);
	void GI_TileLoaded(class FName TileName);
	void GI_TileUnloaded(class FName TileName);
	void HeatUpBonfire(class APawn* Player);
	void InitalizeAIManagers();
	void InitializeDeerManager();
	void InitializeSkyCreatorController();
	void InitializeZombieManager();
	void Interact(bool NewParam);
	void IsInWater(bool* InWater);
	void IsPawnRendered_(class AActor* Pawn, bool* Rendered_);
	void IsPlayer(bool* Param_IsPlayer);
	void IsPlayfabServer(bool* Isit);
	void K2_OnLogout(class AController* ExitingController);
	void K2_PostLogin(class APlayerController* NewPlayer);
	void Location_Annulment(const class FString& Login, class UBPC_SharpSync_C* SharpSync);
	void LogoutDis__DelegateSignature();
	void LootGeneratedTypeArrayItems();
	void OnCheckOwnershipResult(bool Ownsapp, const class FString& Message, int32 PID, int64 SteamID);
	void OnDeleted_145607E64257323E3B9D599EE0F1D293(const EFirestoreError Error);
	void OnDeleted_8D1F79814CFFA6672E5EA5B480BC3815(const EFirestoreError Error);
	void OnDeleted_B854DC7448C47C1BB59262B419CEBD52(const EFirestoreError Error);
	void OnError_145607E64257323E3B9D599EE0F1D293(const EFirestoreError Error);
	void OnError_59E06DDB4E0D417AD3D3CE885FA79C97(const EFirestoreError Error, const TArray<struct FFirestoreDocumentSnapshot>& DocumentSnapshots, const TArray<class UFirestoreDocumentChange*>& DocumentChanges);
	void OnError_8D1F79814CFFA6672E5EA5B480BC3815(const EFirestoreError Error);
	void OnError_9204BF104BA4CCE3A0B742AAC30BA0B9(const EFirestoreError Error);
	void OnError_B3B5E7C14DD4AC3AF25370A28DF5B98E(const EFirestoreError Error, const TArray<struct FFirestoreDocumentSnapshot>& DocumentSnapshots, const TArray<class UFirestoreDocumentChange*>& DocumentChanges);
	void OnError_B81202C247B2E1DA3F224A9FB89F485B(const EFirestoreError Error, const struct FFirestoreDocumentSnapshot& DocumentSnapshot);
	void OnError_B854DC7448C47C1BB59262B419CEBD52(const EFirestoreError Error);
	void OnError_D82503DB478C02CA43AEA58E8C70D2B7(const EFirestoreError Error);
	void OnError_F35B75124B28FE9959EEBAB1B9CD0823(const EFirestoreError Error);
	void OnGot_59E06DDB4E0D417AD3D3CE885FA79C97(const EFirestoreError Error, const TArray<struct FFirestoreDocumentSnapshot>& DocumentSnapshots, const TArray<class UFirestoreDocumentChange*>& DocumentChanges);
	void OnGot_B3B5E7C14DD4AC3AF25370A28DF5B98E(const EFirestoreError Error, const TArray<struct FFirestoreDocumentSnapshot>& DocumentSnapshots, const TArray<class UFirestoreDocumentChange*>& DocumentChanges);
	void OnGot_B81202C247B2E1DA3F224A9FB89F485B(const EFirestoreError Error, const struct FFirestoreDocumentSnapshot& DocumentSnapshot);
	void OnKickPlayer(int32 PPID, const class FString& PReason);
	void OnLeftCharacterDestroyed(class AActor* DestroyedActor);
	void OnLevelLoaded__DelegateSignature();
	void OnLogoutCustom(class UObject* ExitingController);
	void OnSet_9204BF104BA4CCE3A0B742AAC30BA0B9(const EFirestoreError Error);
	void OnSet_D82503DB478C02CA43AEA58E8C70D2B7(const EFirestoreError Error);
	void OnSet_F35B75124B28FE9959EEBAB1B9CD0823(const EFirestoreError Error);
	void OnSurvCreated__DelegateSignature(const class FString& SteamID, class ASurvivalPlayer_V2_C* SurvRef);
	void OpenDoorRPC(class ABP_Door_C* Door, bool IsOpen);
	void OpenLootRPC(class ALootPoint_C* LootPoint);
	void PlayerAddItem(const struct FFItemInfo& ItemInfo, class UWBP_AttachmentCell_C* ActiveCell, bool* Added);
	void PlayerCanisterAction(bool Attach, class ABP_Canister_C* Canister);
	void PlayerGetMesh(class USkeletalMeshComponent** Mesh);
	void PlayerItemCountByName(const class FString& ItemName, int32* Count);
	void PlayerLocationSaveCalcs(const class FString& Login, const struct FTransform& InTransform, class FString* SaveLocString);
	void PortsToFirebase(const struct FStatus& Status, TArray<struct FFirebaseVariant>* Result1);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void RegisterAISpawnerManager(class AAISpawnManager_C* Param_AISpawnManager);
	void RegisterPlayerOld(class AActor* Player);
	void RemovePlayfabPlayer(const class FString& PlayFabID);
	void SavePlayerPosGM(class ASurvPC_C* SurvPC);
	void SavePlayerPosition__DelegateSignature(TArray<class FString>& SaveLocation);
	void SendServerInfo();
	void SendUserPosition(class ASurvPC_C* Controller);
	void ServerInfoError(const struct FAgonesError& Error);
	void ServerLoadScene(class AActor* PlayerLoad, class FName LevelName);
	void ServerNameSync();
	void ServLoginLocation(class ASurvPC_C* SurvPC);
	void SetEnableSmoothSync(bool NewEnable, bool* Success);
	void SetPlayerCollisionInCar(bool NewEnable);
	void SetServerTimer();
	void ShowSimpleUIText(const class FString& String);
	void StringMapToFirebase(const TMap<class FString, class FString>& StringMap, TArray<struct FFirestoreFieldValue>* Keys, TArray<struct FFirestoreFieldValue>* Values);
	void SurvGetUID(int32* ID);
	void SurvOnLogOut(class ASurvivalPlayer_C* SurvivalPlayer, class ASurvPC_C* PlayerController, const TDelegate<void(class AActor* DestroyedActor)>& Delegate);
	void SuvivalPlayerOnLogOut__DelegateSignature(class ASurvivalPlayer_C* SurvivalPlayer);
	void TryToGetDeerManager();
	void TryToGetSkyCreatorController();
	void TryToGetZombieManager();
	void UnregisterPlayerOld(class ASurvivalPlayer_C* Player);
	void UpdatePlayerCount();
	void UpdateServerTime();
	void UpdateState();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TDB_GameMode_C">();
	}
	static class ATDB_GameMode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATDB_GameMode_C>();
	}
};
static_assert(alignof(ATDB_GameMode_C) == 0x000008, "Wrong alignment on ATDB_GameMode_C");
static_assert(sizeof(ATDB_GameMode_C) == 0x000908, "Wrong size on ATDB_GameMode_C");
static_assert(offsetof(ATDB_GameMode_C, UberGraphFrame) == 0x0003E0, "Member 'ATDB_GameMode_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, Agones) == 0x0003E8, "Member 'ATDB_GameMode_C::Agones' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, PlayerSceneLoader) == 0x0003F0, "Member 'ATDB_GameMode_C::PlayerSceneLoader' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, DefaultSceneRoot) == 0x0003F8, "Member 'ATDB_GameMode_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, UniqueId) == 0x000400, "Member 'ATDB_GameMode_C::UniqueId' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, OnLevelLoaded) == 0x000408, "Member 'ATDB_GameMode_C::OnLevelLoaded' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, SpawnedPlayers) == 0x000418, "Member 'ATDB_GameMode_C::SpawnedPlayers' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, SpawnedVehicles) == 0x000428, "Member 'ATDB_GameMode_C::SpawnedVehicles' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, NewPlayerIndex) == 0x000438, "Member 'ATDB_GameMode_C::NewPlayerIndex' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, AISpawnManager) == 0x000440, "Member 'ATDB_GameMode_C::AISpawnManager' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, PlayersCount) == 0x000448, "Member 'ATDB_GameMode_C::PlayersCount' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, ShutdownServerHandle) == 0x000450, "Member 'ATDB_GameMode_C::ShutdownServerHandle' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, ShutdownTimer) == 0x000458, "Member 'ATDB_GameMode_C::ShutdownTimer' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, UpdatePlayerJSONRequest) == 0x000460, "Member 'ATDB_GameMode_C::UpdatePlayerJSONRequest' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, SyncPlayerPosition) == 0x000468, "Member 'ATDB_GameMode_C::SyncPlayerPosition' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, PlayfabPlayers) == 0x000470, "Member 'ATDB_GameMode_C::PlayfabPlayers' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, CheckRenderedPawns) == 0x0004C0, "Member 'ATDB_GameMode_C::CheckRenderedPawns' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, Key_Playfab) == 0x0004D0, "Member 'ATDB_GameMode_C::Key_Playfab' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, LeftCharacters) == 0x0004E0, "Member 'ATDB_GameMode_C::LeftCharacters' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, SpawnedDeadBodies) == 0x000530, "Member 'ATDB_GameMode_C::SpawnedDeadBodies' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, DeadBodyLimit) == 0x000540, "Member 'ATDB_GameMode_C::DeadBodyLimit' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, PlayerControllers) == 0x000548, "Member 'ATDB_GameMode_C::PlayerControllers' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, Squads) == 0x000558, "Member 'ATDB_GameMode_C::Squads' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, LastSquadIndex) == 0x0005A8, "Member 'ATDB_GameMode_C::LastSquadIndex' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, ItemsFoodAll) == 0x0005B0, "Member 'ATDB_GameMode_C::ItemsFoodAll' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, ItemsAid) == 0x0005C0, "Member 'ATDB_GameMode_C::ItemsAid' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, ItemsWeapon) == 0x0005D0, "Member 'ATDB_GameMode_C::ItemsWeapon' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, ItemsAmmo) == 0x0005E0, "Member 'ATDB_GameMode_C::ItemsAmmo' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, ItemsArmor) == 0x0005F0, "Member 'ATDB_GameMode_C::ItemsArmor' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, ItemsClothes) == 0x000600, "Member 'ATDB_GameMode_C::ItemsClothes' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, ItemsTradeCraft) == 0x000610, "Member 'ATDB_GameMode_C::ItemsTradeCraft' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, ItemsBackpack) == 0x000620, "Member 'ATDB_GameMode_C::ItemsBackpack' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, ItemsOther) == 0x000630, "Member 'ATDB_GameMode_C::ItemsOther' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, ItemsAttachments) == 0x000640, "Member 'ATDB_GameMode_C::ItemsAttachments' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, ZombieManager) == 0x000650, "Member 'ATDB_GameMode_C::ZombieManager' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, DeerManager) == 0x000658, "Member 'ATDB_GameMode_C::DeerManager' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, ZombieManagerTimer) == 0x000660, "Member 'ATDB_GameMode_C::ZombieManagerTimer' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, DeerManagerTimer) == 0x000668, "Member 'ATDB_GameMode_C::DeerManagerTimer' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, ZombieManagerCheckFrequency) == 0x000670, "Member 'ATDB_GameMode_C::ZombieManagerCheckFrequency' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, DeerManagerCheckFrequency) == 0x000674, "Member 'ATDB_GameMode_C::DeerManagerCheckFrequency' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, SkyCreatorController) == 0x000678, "Member 'ATDB_GameMode_C::SkyCreatorController' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, SkyCreatorControllerCheckFrequency) == 0x000680, "Member 'ATDB_GameMode_C::SkyCreatorControllerCheckFrequency' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, SkyCreatorControllerTimer) == 0x000688, "Member 'ATDB_GameMode_C::SkyCreatorControllerTimer' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, PlayerPosition) == 0x000690, "Member 'ATDB_GameMode_C::PlayerPosition' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, SavePlayerPosition) == 0x0006E0, "Member 'ATDB_GameMode_C::SavePlayerPosition' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, SavePlayerLocation) == 0x0006F0, "Member 'ATDB_GameMode_C::SavePlayerLocation' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, ServerIsAllocated) == 0x000700, "Member 'ATDB_GameMode_C::ServerIsAllocated' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, WaitingForPlayers) == 0x000704, "Member 'ATDB_GameMode_C::WaitingForPlayers' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, ServerRuntime) == 0x000708, "Member 'ATDB_GameMode_C::ServerRuntime' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, ServerInfoRef) == 0x000710, "Member 'ATDB_GameMode_C::ServerInfoRef' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, SeverUniqueID) == 0x000718, "Member 'ATDB_GameMode_C::SeverUniqueID' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, InitInfo) == 0x000728, "Member 'ATDB_GameMode_C::InitInfo' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, Response) == 0x000730, "Member 'ATDB_GameMode_C::Response' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, PrevTimeTag) == 0x000868, "Member 'ATDB_GameMode_C::PrevTimeTag' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, Region) == 0x000878, "Member 'ATDB_GameMode_C::Region' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, ServerNames) == 0x000888, "Member 'ATDB_GameMode_C::ServerNames' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, LogoutDis) == 0x000898, "Member 'ATDB_GameMode_C::LogoutDis' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, SuvivalPlayerOnLogOut) == 0x0008A8, "Member 'ATDB_GameMode_C::SuvivalPlayerOnLogOut' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, NotReady) == 0x0008B8, "Member 'ATDB_GameMode_C::NotReady' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, OldServerIndex) == 0x0008BC, "Member 'ATDB_GameMode_C::OldServerIndex' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, Game_Version) == 0x0008C0, "Member 'ATDB_GameMode_C::Game_Version' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, ServerIsClosing) == 0x0008D0, "Member 'ATDB_GameMode_C::ServerIsClosing' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, CurrentBuild) == 0x0008D4, "Member 'ATDB_GameMode_C::CurrentBuild' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, OnSurvCreated) == 0x0008D8, "Member 'ATDB_GameMode_C::OnSurvCreated' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, StagesTimeUntillServerShutdown) == 0x0008E8, "Member 'ATDB_GameMode_C::StagesTimeUntillServerShutdown' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, ServerLifeInMinutes) == 0x0008F8, "Member 'ATDB_GameMode_C::ServerLifeInMinutes' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, SetForUpdate) == 0x0008FC, "Member 'ATDB_GameMode_C::SetForUpdate' has a wrong offset!");
static_assert(offsetof(ATDB_GameMode_C, SetForUpdateTimer) == 0x000900, "Member 'ATDB_GameMode_C::SetForUpdateTimer' has a wrong offset!");

}
