#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TrajectorySpline

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TrajectorySpline.BP_TrajectorySpline_C
// 0x0090 (0x0320 - 0x0290)
class ABP_TrajectorySpline_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDecalComponent*                        Decal;                                             // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Niagara;                                           // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       Spline;                                            // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        Spacing;                                           // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRandomStream                          RandomStream;                                      // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor)
	class UStaticMesh*                            Mesh;                                              // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USplineMeshComponent*                   SplineMesh;                                        // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        Step;                                              // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                        Points;                                            // 0x02E0(0x0010)(Edit, BlueprintVisible, Interp)
	struct FVector                                EndPoint;                                          // 0x02F0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ImpactNormal;                                      // 0x0308(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_TrajectorySpline(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void SetSplineMeshes();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TrajectorySpline_C">();
	}
	static class ABP_TrajectorySpline_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TrajectorySpline_C>();
	}
};
static_assert(alignof(ABP_TrajectorySpline_C) == 0x000008, "Wrong alignment on ABP_TrajectorySpline_C");
static_assert(sizeof(ABP_TrajectorySpline_C) == 0x000320, "Wrong size on ABP_TrajectorySpline_C");
static_assert(offsetof(ABP_TrajectorySpline_C, UberGraphFrame) == 0x000290, "Member 'ABP_TrajectorySpline_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_TrajectorySpline_C, Decal) == 0x000298, "Member 'ABP_TrajectorySpline_C::Decal' has a wrong offset!");
static_assert(offsetof(ABP_TrajectorySpline_C, Niagara) == 0x0002A0, "Member 'ABP_TrajectorySpline_C::Niagara' has a wrong offset!");
static_assert(offsetof(ABP_TrajectorySpline_C, Spline) == 0x0002A8, "Member 'ABP_TrajectorySpline_C::Spline' has a wrong offset!");
static_assert(offsetof(ABP_TrajectorySpline_C, DefaultSceneRoot) == 0x0002B0, "Member 'ABP_TrajectorySpline_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_TrajectorySpline_C, Spacing) == 0x0002B8, "Member 'ABP_TrajectorySpline_C::Spacing' has a wrong offset!");
static_assert(offsetof(ABP_TrajectorySpline_C, RandomStream) == 0x0002C0, "Member 'ABP_TrajectorySpline_C::RandomStream' has a wrong offset!");
static_assert(offsetof(ABP_TrajectorySpline_C, Mesh) == 0x0002C8, "Member 'ABP_TrajectorySpline_C::Mesh' has a wrong offset!");
static_assert(offsetof(ABP_TrajectorySpline_C, SplineMesh) == 0x0002D0, "Member 'ABP_TrajectorySpline_C::SplineMesh' has a wrong offset!");
static_assert(offsetof(ABP_TrajectorySpline_C, Step) == 0x0002D8, "Member 'ABP_TrajectorySpline_C::Step' has a wrong offset!");
static_assert(offsetof(ABP_TrajectorySpline_C, Points) == 0x0002E0, "Member 'ABP_TrajectorySpline_C::Points' has a wrong offset!");
static_assert(offsetof(ABP_TrajectorySpline_C, EndPoint) == 0x0002F0, "Member 'ABP_TrajectorySpline_C::EndPoint' has a wrong offset!");
static_assert(offsetof(ABP_TrajectorySpline_C, ImpactNormal) == 0x000308, "Member 'ABP_TrajectorySpline_C::ImpactNormal' has a wrong offset!");

}
