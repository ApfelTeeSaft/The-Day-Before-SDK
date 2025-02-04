#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AGSGraphRuntime

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "AGSGraphRuntime_structs.hpp"


namespace SDK
{

// Class AGSGraphRuntime.AGSAction
// 0x0008 (0x0030 - 0x0028)
class UAGSAction : public UObject
{
public:
	class APlayerController*                      Controller;                                        // 0x0028(0x0008)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	void ExecuteAction(class APlayerController* PlayerController, class UAGSGraphNode* NodeOwner);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AGSAction">();
	}
	static class UAGSAction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAGSAction>();
	}
};
static_assert(alignof(UAGSAction) == 0x000008, "Wrong alignment on UAGSAction");
static_assert(sizeof(UAGSAction) == 0x000030, "Wrong size on UAGSAction");
static_assert(offsetof(UAGSAction, Controller) == 0x000028, "Member 'UAGSAction::Controller' has a wrong offset!");

// Class AGSGraphRuntime.AGSCondition
// 0x0010 (0x0038 - 0x0028)
class UAGSCondition : public UObject
{
public:
	class APlayerController*                      Controller;                                        // 0x0028(0x0008)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAGSGraphNode*                          NodeOwner;                                         // 0x0030(0x0008)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	class UAGSGraphNode* GetNodeOwner() const;
	bool VerifyCondition(class APlayerController* PlayerController) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AGSCondition">();
	}
	static class UAGSCondition* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAGSCondition>();
	}
};
static_assert(alignof(UAGSCondition) == 0x000008, "Wrong alignment on UAGSCondition");
static_assert(sizeof(UAGSCondition) == 0x000038, "Wrong size on UAGSCondition");
static_assert(offsetof(UAGSCondition, Controller) == 0x000028, "Member 'UAGSCondition::Controller' has a wrong offset!");
static_assert(offsetof(UAGSCondition, NodeOwner) == 0x000030, "Member 'UAGSCondition::NodeOwner' has a wrong offset!");

// Class AGSGraphRuntime.ABGORCondition
// 0x0010 (0x0048 - 0x0038)
class UABGORCondition final : public UAGSCondition
{
public:
	TArray<class UAGSCondition*>                  OrConditions;                                      // 0x0038(0x0010)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ABGORCondition">();
	}
	static class UABGORCondition* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABGORCondition>();
	}
};
static_assert(alignof(UABGORCondition) == 0x000008, "Wrong alignment on UABGORCondition");
static_assert(sizeof(UABGORCondition) == 0x000048, "Wrong size on UABGORCondition");
static_assert(offsetof(UABGORCondition, OrConditions) == 0x000038, "Member 'UABGORCondition::OrConditions' has a wrong offset!");

// Class AGSGraphRuntime.ABGANDCondition
// 0x0010 (0x0048 - 0x0038)
class UABGANDCondition final : public UAGSCondition
{
public:
	TArray<class UAGSCondition*>                  AndConditions;                                     // 0x0038(0x0010)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ABGANDCondition">();
	}
	static class UABGANDCondition* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABGANDCondition>();
	}
};
static_assert(alignof(UABGANDCondition) == 0x000008, "Wrong alignment on UABGANDCondition");
static_assert(sizeof(UABGANDCondition) == 0x000048, "Wrong size on UABGANDCondition");
static_assert(offsetof(UABGANDCondition, AndConditions) == 0x000038, "Member 'UABGANDCondition::AndConditions' has a wrong offset!");

// Class AGSGraphRuntime.AGSGraph
// 0x0080 (0x00A8 - 0x0028)
class UAGSGraph : public UObject
{
public:
	uint8                                         Pad_28[0x48];                                      // 0x0028(0x0048)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      Controller;                                        // 0x0070(0x0008)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UAGSGraphNode*>                  RootNodes;                                         // 0x0078(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAGSGraphNode*>                  AllNodes;                                          // 0x0088(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAGSGraphNode*>                  ActivedNodes;                                      // 0x0098(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)

public:
	bool ActivateNode(class UAGSGraphNode* Node);
	void DeactivateAllNodes();
	bool DeactivateNode(class UAGSGraphNode* Node);
	void GetNodesByLevel(int32 Level, TArray<class UAGSGraphNode*>* Nodes);
	void Print(bool ToConsole, bool ToScreen);

	const TArray<class UAGSGraphNode*> GetActiveNodes() const;
	const TArray<class UAGSGraphNode*> GetAllNodes() const;
	int32 GetLevelNum() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AGSGraph">();
	}
	static class UAGSGraph* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAGSGraph>();
	}
};
static_assert(alignof(UAGSGraph) == 0x000008, "Wrong alignment on UAGSGraph");
static_assert(sizeof(UAGSGraph) == 0x0000A8, "Wrong size on UAGSGraph");
static_assert(offsetof(UAGSGraph, Controller) == 0x000070, "Member 'UAGSGraph::Controller' has a wrong offset!");
static_assert(offsetof(UAGSGraph, RootNodes) == 0x000078, "Member 'UAGSGraph::RootNodes' has a wrong offset!");
static_assert(offsetof(UAGSGraph, AllNodes) == 0x000088, "Member 'UAGSGraph::AllNodes' has a wrong offset!");
static_assert(offsetof(UAGSGraph, ActivedNodes) == 0x000098, "Member 'UAGSGraph::ActivedNodes' has a wrong offset!");

// Class AGSGraphRuntime.AGSGraphEdge
// 0x0018 (0x0040 - 0x0028)
class UAGSGraphEdge : public UObject
{
public:
	class UAGSGraph*                              Graph;                                             // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGSGraphNode*                          StartNode;                                         // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGSGraphNode*                          EndNode;                                           // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	class UAGSGraph* GetGraph() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AGSGraphEdge">();
	}
	static class UAGSGraphEdge* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAGSGraphEdge>();
	}
};
static_assert(alignof(UAGSGraphEdge) == 0x000008, "Wrong alignment on UAGSGraphEdge");
static_assert(sizeof(UAGSGraphEdge) == 0x000040, "Wrong size on UAGSGraphEdge");
static_assert(offsetof(UAGSGraphEdge, Graph) == 0x000028, "Member 'UAGSGraphEdge::Graph' has a wrong offset!");
static_assert(offsetof(UAGSGraphEdge, StartNode) == 0x000030, "Member 'UAGSGraphEdge::StartNode' has a wrong offset!");
static_assert(offsetof(UAGSGraphEdge, EndNode) == 0x000038, "Member 'UAGSGraphEdge::EndNode' has a wrong offset!");

// Class AGSGraphRuntime.AGSGraphNode
// 0x0080 (0x00A8 - 0x0028)
class UAGSGraphNode : public UObject
{
public:
	ENodeState                                    NodeState;                                         // 0x0028(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAGSGraph*                              Graph;                                             // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAGSGraphNode*>                  ParentNodes;                                       // 0x0038(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAGSGraphNode*>                  ChildrenNodes;                                     // 0x0048(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class UAGSGraphNode*, class UAGSGraphEdge*> Edges;                                             // 0x0058(0x0050)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

public:
	class UAGSGraphEdge* GetEdge(class UAGSGraphNode* ChildNode);

	class FText GetDescription() const;
	class UAGSGraph* GetGraph() const;
	bool IsLeafNode() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AGSGraphNode">();
	}
	static class UAGSGraphNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAGSGraphNode>();
	}
};
static_assert(alignof(UAGSGraphNode) == 0x000008, "Wrong alignment on UAGSGraphNode");
static_assert(sizeof(UAGSGraphNode) == 0x0000A8, "Wrong size on UAGSGraphNode");
static_assert(offsetof(UAGSGraphNode, NodeState) == 0x000028, "Member 'UAGSGraphNode::NodeState' has a wrong offset!");
static_assert(offsetof(UAGSGraphNode, Graph) == 0x000030, "Member 'UAGSGraphNode::Graph' has a wrong offset!");
static_assert(offsetof(UAGSGraphNode, ParentNodes) == 0x000038, "Member 'UAGSGraphNode::ParentNodes' has a wrong offset!");
static_assert(offsetof(UAGSGraphNode, ChildrenNodes) == 0x000048, "Member 'UAGSGraphNode::ChildrenNodes' has a wrong offset!");
static_assert(offsetof(UAGSGraphNode, Edges) == 0x000058, "Member 'UAGSGraphNode::Edges' has a wrong offset!");

}

