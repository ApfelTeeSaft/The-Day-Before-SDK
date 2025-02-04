#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_DialogueNodeInfo

#include "Basic.hpp"

#include "E_TalkingCharacter_structs.hpp"
#include "F_DialoguePhrasesNodeInfo_structs.hpp"


namespace SDK
{

// UserDefinedStruct F_DialogueNodeInfo.F_DialogueNodeInfo
// 0x0108 (0x0108 - 0x0000)
struct FF_DialogueNodeInfo final
{
public:
	E_TalkingCharacter                            TalkingCharacter_14_43F6C04E4832850D423C4CA139FDE0ED; // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Phrase_7_FB05CD0041EF9828022E31B3FD529074;         // 0x0008(0x0018)(Edit, BlueprintVisible)
	TArray<struct FF_DialoguePhrasesNodeInfo>     Phrases_52_F6055E934B78F32661F5E9BBFB5BE21C;       // 0x0020(0x0010)(Edit, BlueprintVisible)
	bool                                          IsRandom_5_FE093403403032AF83331A941F29172C;       // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FText>                           RandomPhraseArray_10_4F368F0742F2F22805936D9938DB79C8; // 0x0038(0x0010)(Edit, BlueprintVisible)
	class UAnimMontage*                           Animation_36_5115CA9B467713A406941DA3CB25C1D2;     // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UFMODEvent>              SoundFMOD_62_19B9AB084A1BA6088F9D3EB534D2D2BE;     // 0x0050(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	double                                        SoundLength_34_79D2DA064FE9EFAABCA260946956D65B;   // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LongPhrase_68_1DB27B78459D3FDA68BC599C08D45595;    // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class UFMODEvent>>      SoundFMODRandomArray_63_38CFAE7E438910737B6F118FD4AE8B4A; // 0x0090(0x0010)(Edit, BlueprintVisible)
	TArray<double>                                SoundLengthRandomArray_35_8CEF965943F22E39BF42CF8952650293; // 0x00A0(0x0010)(Edit, BlueprintVisible)
	TArray<double>                                SoundLongLengthRandomArray_74_35266D2F462187B37EDDBABA66CF916A; // 0x00B0(0x0010)(Edit, BlueprintVisible)
	TArray<class UAnimMontage*>                   AnimationRandom_41_7BB991DD4D33BA96037FF191FEA192B7; // 0x00C0(0x0010)(Edit, BlueprintVisible)
	TSoftObjectPtr<class UPaperSprite>            PhraseIcon_64_AFDC9D454654C92F550D708C7DAF37DA;    // 0x00D0(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                          DeadEndPhrase_47_BC5FD26A41BE86F2A95D3890BD261654; // 0x0100(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TakeItemtutorial_54_A60F8AC144D280F9051C5F8A7C83E552; // 0x0101(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NotRetain_58_675F0A3E494FD6240BD2CFAA574A3313;     // 0x0102(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFunctionButton_61_FDA82A614987B7601C3161884FD3A0DD; // 0x0103(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Exit_70_51D4126844194BC91CCB8686713DA1F0;          // 0x0104(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FF_DialogueNodeInfo) == 0x000008, "Wrong alignment on FF_DialogueNodeInfo");
static_assert(sizeof(FF_DialogueNodeInfo) == 0x000108, "Wrong size on FF_DialogueNodeInfo");
static_assert(offsetof(FF_DialogueNodeInfo, TalkingCharacter_14_43F6C04E4832850D423C4CA139FDE0ED) == 0x000000, "Member 'FF_DialogueNodeInfo::TalkingCharacter_14_43F6C04E4832850D423C4CA139FDE0ED' has a wrong offset!");
static_assert(offsetof(FF_DialogueNodeInfo, Phrase_7_FB05CD0041EF9828022E31B3FD529074) == 0x000008, "Member 'FF_DialogueNodeInfo::Phrase_7_FB05CD0041EF9828022E31B3FD529074' has a wrong offset!");
static_assert(offsetof(FF_DialogueNodeInfo, Phrases_52_F6055E934B78F32661F5E9BBFB5BE21C) == 0x000020, "Member 'FF_DialogueNodeInfo::Phrases_52_F6055E934B78F32661F5E9BBFB5BE21C' has a wrong offset!");
static_assert(offsetof(FF_DialogueNodeInfo, IsRandom_5_FE093403403032AF83331A941F29172C) == 0x000030, "Member 'FF_DialogueNodeInfo::IsRandom_5_FE093403403032AF83331A941F29172C' has a wrong offset!");
static_assert(offsetof(FF_DialogueNodeInfo, RandomPhraseArray_10_4F368F0742F2F22805936D9938DB79C8) == 0x000038, "Member 'FF_DialogueNodeInfo::RandomPhraseArray_10_4F368F0742F2F22805936D9938DB79C8' has a wrong offset!");
static_assert(offsetof(FF_DialogueNodeInfo, Animation_36_5115CA9B467713A406941DA3CB25C1D2) == 0x000048, "Member 'FF_DialogueNodeInfo::Animation_36_5115CA9B467713A406941DA3CB25C1D2' has a wrong offset!");
static_assert(offsetof(FF_DialogueNodeInfo, SoundFMOD_62_19B9AB084A1BA6088F9D3EB534D2D2BE) == 0x000050, "Member 'FF_DialogueNodeInfo::SoundFMOD_62_19B9AB084A1BA6088F9D3EB534D2D2BE' has a wrong offset!");
static_assert(offsetof(FF_DialogueNodeInfo, SoundLength_34_79D2DA064FE9EFAABCA260946956D65B) == 0x000080, "Member 'FF_DialogueNodeInfo::SoundLength_34_79D2DA064FE9EFAABCA260946956D65B' has a wrong offset!");
static_assert(offsetof(FF_DialogueNodeInfo, LongPhrase_68_1DB27B78459D3FDA68BC599C08D45595) == 0x000088, "Member 'FF_DialogueNodeInfo::LongPhrase_68_1DB27B78459D3FDA68BC599C08D45595' has a wrong offset!");
static_assert(offsetof(FF_DialogueNodeInfo, SoundFMODRandomArray_63_38CFAE7E438910737B6F118FD4AE8B4A) == 0x000090, "Member 'FF_DialogueNodeInfo::SoundFMODRandomArray_63_38CFAE7E438910737B6F118FD4AE8B4A' has a wrong offset!");
static_assert(offsetof(FF_DialogueNodeInfo, SoundLengthRandomArray_35_8CEF965943F22E39BF42CF8952650293) == 0x0000A0, "Member 'FF_DialogueNodeInfo::SoundLengthRandomArray_35_8CEF965943F22E39BF42CF8952650293' has a wrong offset!");
static_assert(offsetof(FF_DialogueNodeInfo, SoundLongLengthRandomArray_74_35266D2F462187B37EDDBABA66CF916A) == 0x0000B0, "Member 'FF_DialogueNodeInfo::SoundLongLengthRandomArray_74_35266D2F462187B37EDDBABA66CF916A' has a wrong offset!");
static_assert(offsetof(FF_DialogueNodeInfo, AnimationRandom_41_7BB991DD4D33BA96037FF191FEA192B7) == 0x0000C0, "Member 'FF_DialogueNodeInfo::AnimationRandom_41_7BB991DD4D33BA96037FF191FEA192B7' has a wrong offset!");
static_assert(offsetof(FF_DialogueNodeInfo, PhraseIcon_64_AFDC9D454654C92F550D708C7DAF37DA) == 0x0000D0, "Member 'FF_DialogueNodeInfo::PhraseIcon_64_AFDC9D454654C92F550D708C7DAF37DA' has a wrong offset!");
static_assert(offsetof(FF_DialogueNodeInfo, DeadEndPhrase_47_BC5FD26A41BE86F2A95D3890BD261654) == 0x000100, "Member 'FF_DialogueNodeInfo::DeadEndPhrase_47_BC5FD26A41BE86F2A95D3890BD261654' has a wrong offset!");
static_assert(offsetof(FF_DialogueNodeInfo, TakeItemtutorial_54_A60F8AC144D280F9051C5F8A7C83E552) == 0x000101, "Member 'FF_DialogueNodeInfo::TakeItemtutorial_54_A60F8AC144D280F9051C5F8A7C83E552' has a wrong offset!");
static_assert(offsetof(FF_DialogueNodeInfo, NotRetain_58_675F0A3E494FD6240BD2CFAA574A3313) == 0x000102, "Member 'FF_DialogueNodeInfo::NotRetain_58_675F0A3E494FD6240BD2CFAA574A3313' has a wrong offset!");
static_assert(offsetof(FF_DialogueNodeInfo, IsFunctionButton_61_FDA82A614987B7601C3161884FD3A0DD) == 0x000103, "Member 'FF_DialogueNodeInfo::IsFunctionButton_61_FDA82A614987B7601C3161884FD3A0DD' has a wrong offset!");
static_assert(offsetof(FF_DialogueNodeInfo, Exit_70_51D4126844194BC91CCB8686713DA1F0) == 0x000104, "Member 'FF_DialogueNodeInfo::Exit_70_51D4126844194BC91CCB8686713DA1F0' has a wrong offset!");

}

