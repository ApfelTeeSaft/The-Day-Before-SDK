#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AscentDialogueSystem

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function AscentDialogueSystem.ADSDialogueWidgetInterface.SetupWithDialogue
// 0x0008 (0x0008 - 0x0000)
struct ADSDialogueWidgetInterface_SetupWithDialogue final
{
public:
	class UADSDialogue*                           DialogueToPlay;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ADSDialogueWidgetInterface_SetupWithDialogue) == 0x000008, "Wrong alignment on ADSDialogueWidgetInterface_SetupWithDialogue");
static_assert(sizeof(ADSDialogueWidgetInterface_SetupWithDialogue) == 0x000008, "Wrong size on ADSDialogueWidgetInterface_SetupWithDialogue");
static_assert(offsetof(ADSDialogueWidgetInterface_SetupWithDialogue, DialogueToPlay) == 0x000000, "Member 'ADSDialogueWidgetInterface_SetupWithDialogue::DialogueToPlay' has a wrong offset!");

// Function AscentDialogueSystem.ADSDialogue.MoveToNextNode
// 0x0008 (0x0008 - 0x0000)
struct ADSDialogue_MoveToNextNode final
{
public:
	class UADSDialogueNode*                       ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ADSDialogue_MoveToNextNode) == 0x000008, "Wrong alignment on ADSDialogue_MoveToNextNode");
static_assert(sizeof(ADSDialogue_MoveToNextNode) == 0x000008, "Wrong size on ADSDialogue_MoveToNextNode");
static_assert(offsetof(ADSDialogue_MoveToNextNode, ReturnValue) == 0x000000, "Member 'ADSDialogue_MoveToNextNode::ReturnValue' has a wrong offset!");

// Function AscentDialogueSystem.ADSDialogue.StartDialogue
// 0x0020 (0x0020 - 0x0000)
struct ADSDialogue_StartDialogue final
{
public:
	class APlayerController*                      InController;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UADSDialoguePartecipantComponent*> Participants;                                      // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UAGSGraphNode*                          ReturnValue;                                       // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ADSDialogue_StartDialogue) == 0x000008, "Wrong alignment on ADSDialogue_StartDialogue");
static_assert(sizeof(ADSDialogue_StartDialogue) == 0x000020, "Wrong size on ADSDialogue_StartDialogue");
static_assert(offsetof(ADSDialogue_StartDialogue, InController) == 0x000000, "Member 'ADSDialogue_StartDialogue::InController' has a wrong offset!");
static_assert(offsetof(ADSDialogue_StartDialogue, Participants) == 0x000008, "Member 'ADSDialogue_StartDialogue::Participants' has a wrong offset!");
static_assert(offsetof(ADSDialogue_StartDialogue, ReturnValue) == 0x000018, "Member 'ADSDialogue_StartDialogue::ReturnValue' has a wrong offset!");

// Function AscentDialogueSystem.ADSDialogue.FindPartecipant
// 0x0010 (0x0010 - 0x0000)
struct ADSDialogue_FindPartecipant final
{
public:
	struct FGameplayTag                           PartecipantTag;                                    // 0x0000(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UADSDialoguePartecipantComponent*       ReturnValue;                                       // 0x0008(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ADSDialogue_FindPartecipant) == 0x000008, "Wrong alignment on ADSDialogue_FindPartecipant");
static_assert(sizeof(ADSDialogue_FindPartecipant) == 0x000010, "Wrong size on ADSDialogue_FindPartecipant");
static_assert(offsetof(ADSDialogue_FindPartecipant, PartecipantTag) == 0x000000, "Member 'ADSDialogue_FindPartecipant::PartecipantTag' has a wrong offset!");
static_assert(offsetof(ADSDialogue_FindPartecipant, ReturnValue) == 0x000008, "Member 'ADSDialogue_FindPartecipant::ReturnValue' has a wrong offset!");

// Function AscentDialogueSystem.ADSDialogue.GetAllButtonAnswersForCurrentNode
// 0x0010 (0x0010 - 0x0000)
struct ADSDialogue_GetAllButtonAnswersForCurrentNode final
{
public:
	TArray<class UADSDialogueResponseNode*>       ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(ADSDialogue_GetAllButtonAnswersForCurrentNode) == 0x000008, "Wrong alignment on ADSDialogue_GetAllButtonAnswersForCurrentNode");
static_assert(sizeof(ADSDialogue_GetAllButtonAnswersForCurrentNode) == 0x000010, "Wrong size on ADSDialogue_GetAllButtonAnswersForCurrentNode");
static_assert(offsetof(ADSDialogue_GetAllButtonAnswersForCurrentNode, ReturnValue) == 0x000000, "Member 'ADSDialogue_GetAllButtonAnswersForCurrentNode::ReturnValue' has a wrong offset!");

// Function AscentDialogueSystem.ADSDialogue.GetCurrentNode
// 0x0008 (0x0008 - 0x0000)
struct ADSDialogue_GetCurrentNode final
{
public:
	class UADSGraphNode*                          ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ADSDialogue_GetCurrentNode) == 0x000008, "Wrong alignment on ADSDialogue_GetCurrentNode");
static_assert(sizeof(ADSDialogue_GetCurrentNode) == 0x000008, "Wrong size on ADSDialogue_GetCurrentNode");
static_assert(offsetof(ADSDialogue_GetCurrentNode, ReturnValue) == 0x000000, "Member 'ADSDialogue_GetCurrentNode::ReturnValue' has a wrong offset!");

// Function AscentDialogueSystem.ADSDialogue.GetDialogueTag
// 0x0008 (0x0008 - 0x0000)
struct ADSDialogue_GetDialogueTag final
{
public:
	struct FGameplayTag                           ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ADSDialogue_GetDialogueTag) == 0x000004, "Wrong alignment on ADSDialogue_GetDialogueTag");
static_assert(sizeof(ADSDialogue_GetDialogueTag) == 0x000008, "Wrong size on ADSDialogue_GetDialogueTag");
static_assert(offsetof(ADSDialogue_GetDialogueTag, ReturnValue) == 0x000000, "Member 'ADSDialogue_GetDialogueTag::ReturnValue' has a wrong offset!");

// Function AscentDialogueSystem.ADSDialogue.HasPartecipant
// 0x000C (0x000C - 0x0000)
struct ADSDialogue_HasPartecipant final
{
public:
	struct FGameplayTag                           PartecipantTag;                                    // 0x0000(0x0008)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ADSDialogue_HasPartecipant) == 0x000004, "Wrong alignment on ADSDialogue_HasPartecipant");
static_assert(sizeof(ADSDialogue_HasPartecipant) == 0x00000C, "Wrong size on ADSDialogue_HasPartecipant");
static_assert(offsetof(ADSDialogue_HasPartecipant, PartecipantTag) == 0x000000, "Member 'ADSDialogue_HasPartecipant::PartecipantTag' has a wrong offset!");
static_assert(offsetof(ADSDialogue_HasPartecipant, ReturnValue) == 0x000008, "Member 'ADSDialogue_HasPartecipant::ReturnValue' has a wrong offset!");

// Function AscentDialogueSystem.ADSDialogue.IsDialogueStarted
// 0x0001 (0x0001 - 0x0000)
struct ADSDialogue_IsDialogueStarted final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ADSDialogue_IsDialogueStarted) == 0x000001, "Wrong alignment on ADSDialogue_IsDialogueStarted");
static_assert(sizeof(ADSDialogue_IsDialogueStarted) == 0x000001, "Wrong size on ADSDialogue_IsDialogueStarted");
static_assert(offsetof(ADSDialogue_IsDialogueStarted, ReturnValue) == 0x000000, "Member 'ADSDialogue_IsDialogueStarted::ReturnValue' has a wrong offset!");

// Function AscentDialogueSystem.ADSGraphEdge.CanBeActivated
// 0x0010 (0x0010 - 0x0000)
struct ADSGraphEdge_CanBeActivated final
{
public:
	class APlayerController*                      Controller;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ADSGraphEdge_CanBeActivated) == 0x000008, "Wrong alignment on ADSGraphEdge_CanBeActivated");
static_assert(sizeof(ADSGraphEdge_CanBeActivated) == 0x000010, "Wrong size on ADSGraphEdge_CanBeActivated");
static_assert(offsetof(ADSGraphEdge_CanBeActivated, Controller) == 0x000000, "Member 'ADSGraphEdge_CanBeActivated::Controller' has a wrong offset!");
static_assert(offsetof(ADSGraphEdge_CanBeActivated, ReturnValue) == 0x000008, "Member 'ADSGraphEdge_CanBeActivated::ReturnValue' has a wrong offset!");

// Function AscentDialogueSystem.ADSGraphNode.CanBeActivated
// 0x0010 (0x0010 - 0x0000)
struct ADSGraphNode_CanBeActivated final
{
public:
	class APlayerController*                      InController;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ADSGraphNode_CanBeActivated) == 0x000008, "Wrong alignment on ADSGraphNode_CanBeActivated");
static_assert(sizeof(ADSGraphNode_CanBeActivated) == 0x000010, "Wrong size on ADSGraphNode_CanBeActivated");
static_assert(offsetof(ADSGraphNode_CanBeActivated, InController) == 0x000000, "Member 'ADSGraphNode_CanBeActivated::InController' has a wrong offset!");
static_assert(offsetof(ADSGraphNode_CanBeActivated, ReturnValue) == 0x000008, "Member 'ADSGraphNode_CanBeActivated::ReturnValue' has a wrong offset!");

// Function AscentDialogueSystem.ADSGraphNode.GetDialogueParticipant
// 0x0008 (0x0008 - 0x0000)
struct ADSGraphNode_GetDialogueParticipant final
{
public:
	class UADSDialoguePartecipantComponent*       ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ADSGraphNode_GetDialogueParticipant) == 0x000008, "Wrong alignment on ADSGraphNode_GetDialogueParticipant");
static_assert(sizeof(ADSGraphNode_GetDialogueParticipant) == 0x000008, "Wrong size on ADSGraphNode_GetDialogueParticipant");
static_assert(offsetof(ADSGraphNode_GetDialogueParticipant, ReturnValue) == 0x000000, "Member 'ADSGraphNode_GetDialogueParticipant::ReturnValue' has a wrong offset!");

// Function AscentDialogueSystem.ADSGraphNode.GetDialogueText
// 0x0018 (0x0018 - 0x0000)
struct ADSGraphNode_GetDialogueText final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(ADSGraphNode_GetDialogueText) == 0x000008, "Wrong alignment on ADSGraphNode_GetDialogueText");
static_assert(sizeof(ADSGraphNode_GetDialogueText) == 0x000018, "Wrong size on ADSGraphNode_GetDialogueText");
static_assert(offsetof(ADSGraphNode_GetDialogueText, ReturnValue) == 0x000000, "Member 'ADSGraphNode_GetDialogueText::ReturnValue' has a wrong offset!");

// Function AscentDialogueSystem.ADSGraphNode.GetSoundToPlay
// 0x0008 (0x0008 - 0x0000)
struct ADSGraphNode_GetSoundToPlay final
{
public:
	class USoundCue*                              ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ADSGraphNode_GetSoundToPlay) == 0x000008, "Wrong alignment on ADSGraphNode_GetSoundToPlay");
static_assert(sizeof(ADSGraphNode_GetSoundToPlay) == 0x000008, "Wrong size on ADSGraphNode_GetSoundToPlay");
static_assert(offsetof(ADSGraphNode_GetSoundToPlay, ReturnValue) == 0x000000, "Member 'ADSGraphNode_GetSoundToPlay::ReturnValue' has a wrong offset!");

// Function AscentDialogueSystem.ADSGraphNode.IsLocalPlayerPartecipant
// 0x0001 (0x0001 - 0x0000)
struct ADSGraphNode_IsLocalPlayerPartecipant final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ADSGraphNode_IsLocalPlayerPartecipant) == 0x000001, "Wrong alignment on ADSGraphNode_IsLocalPlayerPartecipant");
static_assert(sizeof(ADSGraphNode_IsLocalPlayerPartecipant) == 0x000001, "Wrong size on ADSGraphNode_IsLocalPlayerPartecipant");
static_assert(offsetof(ADSGraphNode_IsLocalPlayerPartecipant, ReturnValue) == 0x000000, "Member 'ADSGraphNode_IsLocalPlayerPartecipant::ReturnValue' has a wrong offset!");

// Function AscentDialogueSystem.ADSDialogueNode.GetAllValidAnswers
// 0x0018 (0x0018 - 0x0000)
struct ADSDialogueNode_GetAllValidAnswers final
{
public:
	class APlayerController*                      InController;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UADSDialogueResponseNode*>       ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(ADSDialogueNode_GetAllValidAnswers) == 0x000008, "Wrong alignment on ADSDialogueNode_GetAllValidAnswers");
static_assert(sizeof(ADSDialogueNode_GetAllValidAnswers) == 0x000018, "Wrong size on ADSDialogueNode_GetAllValidAnswers");
static_assert(offsetof(ADSDialogueNode_GetAllValidAnswers, InController) == 0x000000, "Member 'ADSDialogueNode_GetAllValidAnswers::InController' has a wrong offset!");
static_assert(offsetof(ADSDialogueNode_GetAllValidAnswers, ReturnValue) == 0x000008, "Member 'ADSDialogueNode_GetAllValidAnswers::ReturnValue' has a wrong offset!");

// Function AscentDialogueSystem.ADSDialoguePartecipantComponent.ChangeParticipantIcon
// 0x0008 (0x0008 - 0x0000)
struct ADSDialoguePartecipantComponent_ChangeParticipantIcon final
{
public:
	class UTexture2D*                             Icon;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ADSDialoguePartecipantComponent_ChangeParticipantIcon) == 0x000008, "Wrong alignment on ADSDialoguePartecipantComponent_ChangeParticipantIcon");
static_assert(sizeof(ADSDialoguePartecipantComponent_ChangeParticipantIcon) == 0x000008, "Wrong size on ADSDialoguePartecipantComponent_ChangeParticipantIcon");
static_assert(offsetof(ADSDialoguePartecipantComponent_ChangeParticipantIcon, Icon) == 0x000000, "Member 'ADSDialoguePartecipantComponent_ChangeParticipantIcon::Icon' has a wrong offset!");

// Function AscentDialogueSystem.ADSDialoguePartecipantComponent.ChangeParticipantName
// 0x0008 (0x0008 - 0x0000)
struct ADSDialoguePartecipantComponent_ChangeParticipantName final
{
public:
	class FName                                   NewName;                                           // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ADSDialoguePartecipantComponent_ChangeParticipantName) == 0x000004, "Wrong alignment on ADSDialoguePartecipantComponent_ChangeParticipantName");
static_assert(sizeof(ADSDialoguePartecipantComponent_ChangeParticipantName) == 0x000008, "Wrong size on ADSDialoguePartecipantComponent_ChangeParticipantName");
static_assert(offsetof(ADSDialoguePartecipantComponent_ChangeParticipantName, NewName) == 0x000000, "Member 'ADSDialoguePartecipantComponent_ChangeParticipantName::NewName' has a wrong offset!");

// Function AscentDialogueSystem.ADSDialoguePartecipantComponent.GetOwnerMesh
// 0x0008 (0x0008 - 0x0000)
struct ADSDialoguePartecipantComponent_GetOwnerMesh final
{
public:
	class USkeletalMeshComponent*                 ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ADSDialoguePartecipantComponent_GetOwnerMesh) == 0x000008, "Wrong alignment on ADSDialoguePartecipantComponent_GetOwnerMesh");
static_assert(sizeof(ADSDialoguePartecipantComponent_GetOwnerMesh) == 0x000008, "Wrong size on ADSDialoguePartecipantComponent_GetOwnerMesh");
static_assert(offsetof(ADSDialoguePartecipantComponent_GetOwnerMesh, ReturnValue) == 0x000000, "Member 'ADSDialoguePartecipantComponent_GetOwnerMesh::ReturnValue' has a wrong offset!");

// Function AscentDialogueSystem.ADSDialoguePartecipantComponent.PlayAnimationOnCharacterOwner
// 0x0008 (0x0008 - 0x0000)
struct ADSDialoguePartecipantComponent_PlayAnimationOnCharacterOwner final
{
public:
	class UAnimMontage*                           AnimationTag;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ADSDialoguePartecipantComponent_PlayAnimationOnCharacterOwner) == 0x000008, "Wrong alignment on ADSDialoguePartecipantComponent_PlayAnimationOnCharacterOwner");
static_assert(sizeof(ADSDialoguePartecipantComponent_PlayAnimationOnCharacterOwner) == 0x000008, "Wrong size on ADSDialoguePartecipantComponent_PlayAnimationOnCharacterOwner");
static_assert(offsetof(ADSDialoguePartecipantComponent_PlayAnimationOnCharacterOwner, AnimationTag) == 0x000000, "Member 'ADSDialoguePartecipantComponent_PlayAnimationOnCharacterOwner::AnimationTag' has a wrong offset!");

// Function AscentDialogueSystem.ADSDialoguePartecipantComponent.SetParticipantSkeletalMesh
// 0x0008 (0x0008 - 0x0000)
struct ADSDialoguePartecipantComponent_SetParticipantSkeletalMesh final
{
public:
	class USkeletalMeshComponent*                 Mesh;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ADSDialoguePartecipantComponent_SetParticipantSkeletalMesh) == 0x000008, "Wrong alignment on ADSDialoguePartecipantComponent_SetParticipantSkeletalMesh");
static_assert(sizeof(ADSDialoguePartecipantComponent_SetParticipantSkeletalMesh) == 0x000008, "Wrong size on ADSDialoguePartecipantComponent_SetParticipantSkeletalMesh");
static_assert(offsetof(ADSDialoguePartecipantComponent_SetParticipantSkeletalMesh, Mesh) == 0x000000, "Member 'ADSDialoguePartecipantComponent_SetParticipantSkeletalMesh::Mesh' has a wrong offset!");

// Function AscentDialogueSystem.ADSDialoguePartecipantComponent.TryStartDialogue
// 0x0020 (0x0020 - 0x0000)
struct ADSDialoguePartecipantComponent_TryStartDialogue final
{
public:
	TArray<class UADSDialoguePartecipantComponent*> Participants;                                      // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UADSDialogue*                           DialogueToStart;                                   // 0x0010(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ADSDialoguePartecipantComponent_TryStartDialogue) == 0x000008, "Wrong alignment on ADSDialoguePartecipantComponent_TryStartDialogue");
static_assert(sizeof(ADSDialoguePartecipantComponent_TryStartDialogue) == 0x000020, "Wrong size on ADSDialoguePartecipantComponent_TryStartDialogue");
static_assert(offsetof(ADSDialoguePartecipantComponent_TryStartDialogue, Participants) == 0x000000, "Member 'ADSDialoguePartecipantComponent_TryStartDialogue::Participants' has a wrong offset!");
static_assert(offsetof(ADSDialoguePartecipantComponent_TryStartDialogue, DialogueToStart) == 0x000010, "Member 'ADSDialoguePartecipantComponent_TryStartDialogue::DialogueToStart' has a wrong offset!");
static_assert(offsetof(ADSDialoguePartecipantComponent_TryStartDialogue, ReturnValue) == 0x000018, "Member 'ADSDialoguePartecipantComponent_TryStartDialogue::ReturnValue' has a wrong offset!");

// Function AscentDialogueSystem.ADSDialoguePartecipantComponent.TryStartDialogueFromActors
// 0x0020 (0x0020 - 0x0000)
struct ADSDialoguePartecipantComponent_TryStartDialogueFromActors final
{
public:
	TArray<class AActor*>                         Participants;                                      // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class UADSDialogue*                           DialogueToStart;                                   // 0x0010(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ADSDialoguePartecipantComponent_TryStartDialogueFromActors) == 0x000008, "Wrong alignment on ADSDialoguePartecipantComponent_TryStartDialogueFromActors");
static_assert(sizeof(ADSDialoguePartecipantComponent_TryStartDialogueFromActors) == 0x000020, "Wrong size on ADSDialoguePartecipantComponent_TryStartDialogueFromActors");
static_assert(offsetof(ADSDialoguePartecipantComponent_TryStartDialogueFromActors, Participants) == 0x000000, "Member 'ADSDialoguePartecipantComponent_TryStartDialogueFromActors::Participants' has a wrong offset!");
static_assert(offsetof(ADSDialoguePartecipantComponent_TryStartDialogueFromActors, DialogueToStart) == 0x000010, "Member 'ADSDialoguePartecipantComponent_TryStartDialogueFromActors::DialogueToStart' has a wrong offset!");
static_assert(offsetof(ADSDialoguePartecipantComponent_TryStartDialogueFromActors, ReturnValue) == 0x000018, "Member 'ADSDialoguePartecipantComponent_TryStartDialogueFromActors::ReturnValue' has a wrong offset!");

// Function AscentDialogueSystem.ADSDialoguePartecipantComponent.GetDialogue
// 0x0010 (0x0010 - 0x0000)
struct ADSDialoguePartecipantComponent_GetDialogue final
{
public:
	struct FGameplayTag                           DialogueTag;                                       // 0x0000(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UADSDialogue*                           ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ADSDialoguePartecipantComponent_GetDialogue) == 0x000008, "Wrong alignment on ADSDialoguePartecipantComponent_GetDialogue");
static_assert(sizeof(ADSDialoguePartecipantComponent_GetDialogue) == 0x000010, "Wrong size on ADSDialoguePartecipantComponent_GetDialogue");
static_assert(offsetof(ADSDialoguePartecipantComponent_GetDialogue, DialogueTag) == 0x000000, "Member 'ADSDialoguePartecipantComponent_GetDialogue::DialogueTag' has a wrong offset!");
static_assert(offsetof(ADSDialoguePartecipantComponent_GetDialogue, ReturnValue) == 0x000008, "Member 'ADSDialoguePartecipantComponent_GetDialogue::ReturnValue' has a wrong offset!");

// Function AscentDialogueSystem.ADSDialoguePartecipantComponent.GetParticipantIcon
// 0x0008 (0x0008 - 0x0000)
struct ADSDialoguePartecipantComponent_GetParticipantIcon final
{
public:
	class UTexture2D*                             ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ADSDialoguePartecipantComponent_GetParticipantIcon) == 0x000008, "Wrong alignment on ADSDialoguePartecipantComponent_GetParticipantIcon");
static_assert(sizeof(ADSDialoguePartecipantComponent_GetParticipantIcon) == 0x000008, "Wrong size on ADSDialoguePartecipantComponent_GetParticipantIcon");
static_assert(offsetof(ADSDialoguePartecipantComponent_GetParticipantIcon, ReturnValue) == 0x000000, "Member 'ADSDialoguePartecipantComponent_GetParticipantIcon::ReturnValue' has a wrong offset!");

// Function AscentDialogueSystem.ADSDialoguePartecipantComponent.GetParticipantName
// 0x0008 (0x0008 - 0x0000)
struct ADSDialoguePartecipantComponent_GetParticipantName final
{
public:
	class FName                                   ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ADSDialoguePartecipantComponent_GetParticipantName) == 0x000004, "Wrong alignment on ADSDialoguePartecipantComponent_GetParticipantName");
static_assert(sizeof(ADSDialoguePartecipantComponent_GetParticipantName) == 0x000008, "Wrong size on ADSDialoguePartecipantComponent_GetParticipantName");
static_assert(offsetof(ADSDialoguePartecipantComponent_GetParticipantName, ReturnValue) == 0x000000, "Member 'ADSDialoguePartecipantComponent_GetParticipantName::ReturnValue' has a wrong offset!");

// Function AscentDialogueSystem.ADSDialoguePartecipantComponent.GetParticipantTag
// 0x0008 (0x0008 - 0x0000)
struct ADSDialoguePartecipantComponent_GetParticipantTag final
{
public:
	struct FGameplayTag                           ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ADSDialoguePartecipantComponent_GetParticipantTag) == 0x000004, "Wrong alignment on ADSDialoguePartecipantComponent_GetParticipantTag");
static_assert(sizeof(ADSDialoguePartecipantComponent_GetParticipantTag) == 0x000008, "Wrong size on ADSDialoguePartecipantComponent_GetParticipantTag");
static_assert(offsetof(ADSDialoguePartecipantComponent_GetParticipantTag, ReturnValue) == 0x000000, "Member 'ADSDialoguePartecipantComponent_GetParticipantTag::ReturnValue' has a wrong offset!");

// Function AscentDialogueSystem.ADSDialoguePartecipantComponent.GetVoiceSpawningSocketName
// 0x0008 (0x0008 - 0x0000)
struct ADSDialoguePartecipantComponent_GetVoiceSpawningSocketName final
{
public:
	class FName                                   ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ADSDialoguePartecipantComponent_GetVoiceSpawningSocketName) == 0x000004, "Wrong alignment on ADSDialoguePartecipantComponent_GetVoiceSpawningSocketName");
static_assert(sizeof(ADSDialoguePartecipantComponent_GetVoiceSpawningSocketName) == 0x000008, "Wrong size on ADSDialoguePartecipantComponent_GetVoiceSpawningSocketName");
static_assert(offsetof(ADSDialoguePartecipantComponent_GetVoiceSpawningSocketName, ReturnValue) == 0x000000, "Member 'ADSDialoguePartecipantComponent_GetVoiceSpawningSocketName::ReturnValue' has a wrong offset!");

// Function AscentDialogueSystem.ADSDialogueResponseNode.ResponseSelected
// 0x0008 (0x0008 - 0x0000)
struct ADSDialogueResponseNode_ResponseSelected final
{
public:
	class UADSDialogueNode*                       ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ADSDialogueResponseNode_ResponseSelected) == 0x000008, "Wrong alignment on ADSDialogueResponseNode_ResponseSelected");
static_assert(sizeof(ADSDialogueResponseNode_ResponseSelected) == 0x000008, "Wrong size on ADSDialogueResponseNode_ResponseSelected");
static_assert(offsetof(ADSDialogueResponseNode_ResponseSelected, ReturnValue) == 0x000000, "Member 'ADSDialogueResponseNode_ResponseSelected::ReturnValue' has a wrong offset!");

// Function AscentDialogueSystem.ADSDialogueSubsystem.FindParticipant
// 0x0010 (0x0010 - 0x0000)
struct ADSDialogueSubsystem_FindParticipant final
{
public:
	struct FGameplayTag                           Participant;                                       // 0x0000(0x0008)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UADSDialoguePartecipantComponent*       ReturnValue;                                       // 0x0008(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ADSDialogueSubsystem_FindParticipant) == 0x000008, "Wrong alignment on ADSDialogueSubsystem_FindParticipant");
static_assert(sizeof(ADSDialogueSubsystem_FindParticipant) == 0x000010, "Wrong size on ADSDialogueSubsystem_FindParticipant");
static_assert(offsetof(ADSDialogueSubsystem_FindParticipant, Participant) == 0x000000, "Member 'ADSDialogueSubsystem_FindParticipant::Participant' has a wrong offset!");
static_assert(offsetof(ADSDialogueSubsystem_FindParticipant, ReturnValue) == 0x000008, "Member 'ADSDialogueSubsystem_FindParticipant::ReturnValue' has a wrong offset!");

}
