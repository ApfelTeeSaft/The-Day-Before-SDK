#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RT_Manager_SceneCapture

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_RT_Manager_SceneCapture.BP_RT_Manager_SceneCapture_C
// 0x0050 (0x02E0 - 0x0290)
class ABP_RT_Manager_SceneCapture_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Box;                                               // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Background_Plane;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*               SceneCaptureComponent2D;                           // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 RenderTarget;                                      // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UNiagaraComponent*>              ParticlesForRenderTargetMud;                       // 0x02C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class ALandscapeProxy*>                LandscapeProxyReference;                           // 0x02D0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void AddMudParticle(class UNiagaraComponent* NewParam);
	void AppendMudParticles(const TArray<class UNiagaraComponent*>& NewParam);
	void BndEvt__BP_RT_Manager_SceneCapture_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BP_RT_Manager_SceneCapture_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void CaptureCarTrail();
	void DebugMud();
	void DebugMudParticle();
	void DebugPlayerLocation();
	void ExecuteUbergraph_BP_RT_Manager_SceneCapture(int32 EntryPoint);
	void ReceiveBeginPlay();
	void StartCaptureCarTrail();
	void StopCaptureCarTrail();
	void UpdateMudParticles();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RT_Manager_SceneCapture_C">();
	}
	static class ABP_RT_Manager_SceneCapture_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_RT_Manager_SceneCapture_C>();
	}
};
static_assert(alignof(ABP_RT_Manager_SceneCapture_C) == 0x000008, "Wrong alignment on ABP_RT_Manager_SceneCapture_C");
static_assert(sizeof(ABP_RT_Manager_SceneCapture_C) == 0x0002E0, "Wrong size on ABP_RT_Manager_SceneCapture_C");
static_assert(offsetof(ABP_RT_Manager_SceneCapture_C, UberGraphFrame) == 0x000290, "Member 'ABP_RT_Manager_SceneCapture_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_RT_Manager_SceneCapture_C, Box) == 0x000298, "Member 'ABP_RT_Manager_SceneCapture_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_RT_Manager_SceneCapture_C, Background_Plane) == 0x0002A0, "Member 'ABP_RT_Manager_SceneCapture_C::Background_Plane' has a wrong offset!");
static_assert(offsetof(ABP_RT_Manager_SceneCapture_C, SceneCaptureComponent2D) == 0x0002A8, "Member 'ABP_RT_Manager_SceneCapture_C::SceneCaptureComponent2D' has a wrong offset!");
static_assert(offsetof(ABP_RT_Manager_SceneCapture_C, DefaultSceneRoot) == 0x0002B0, "Member 'ABP_RT_Manager_SceneCapture_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_RT_Manager_SceneCapture_C, RenderTarget) == 0x0002B8, "Member 'ABP_RT_Manager_SceneCapture_C::RenderTarget' has a wrong offset!");
static_assert(offsetof(ABP_RT_Manager_SceneCapture_C, ParticlesForRenderTargetMud) == 0x0002C0, "Member 'ABP_RT_Manager_SceneCapture_C::ParticlesForRenderTargetMud' has a wrong offset!");
static_assert(offsetof(ABP_RT_Manager_SceneCapture_C, LandscapeProxyReference) == 0x0002D0, "Member 'ABP_RT_Manager_SceneCapture_C::LandscapeProxyReference' has a wrong offset!");

}
