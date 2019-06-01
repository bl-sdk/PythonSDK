#pragma once
// Borderlands 2 (1.8.5) SDK

#ifdef _MSC_VER
#pragma pack(push, 0x4)
#endif

#include "stdafx.h"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GearboxFramework.ActorFactoryClone
// 0x0014 (0x007C - 0x0090)
class UActorFactoryClone : public UActorFactory
{
public:
	TArray<class AGearboxPawn*>                        CloneArchetype;                                           // 0x007C(0x000C) (Edit, NeedCtorLink)
	struct FName                                       NewCloneTag;                                              // 0x0088(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ActorFactoryClone");
		return ptr;
	}

};


// Class GearboxFramework.ActorFactoryWireTerminal
// 0x0000 (0x007C - 0x007C)
class UActorFactoryWireTerminal : public UActorFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ActorFactoryWireTerminal");
		return ptr;
	}

};


// Class GearboxFramework.AIDebugCamera
// 0x0050 (0x003C - 0x008C)
class UAIDebugCamera : public UObject
{
public:
	class AGearboxMind*                                Mind;                                                     // 0x003C(0x0004)
	class URuleEngine*                                 RuleEngine;                                               // 0x0040(0x0004)
	TArray<struct FDebugListItem>                      DisplayList;                                              // 0x0044(0x000C) (NeedCtorLink)
	unsigned long                                      bSnapshotModeOn : 1;                                      // 0x0050(0x0004)
	unsigned long                                      bShowFlags : 1;                                           // 0x0050(0x0004) (Config, GlobalConfig)
	unsigned long                                      bShowRules : 1;                                           // 0x0050(0x0004) (Config, GlobalConfig)
	unsigned long                                      bShowInactiveRules : 1;                                   // 0x0050(0x0004) (Config, GlobalConfig)
	unsigned long                                      bShowResources : 1;                                       // 0x0050(0x0004) (Config, GlobalConfig)
	unsigned long                                      bShowCombat : 1;                                          // 0x0050(0x0004) (Config, GlobalConfig)
	unsigned long                                      bShowRuleEngineLoadBalance : 1;                           // 0x0050(0x0004) (Config, GlobalConfig)
	unsigned long                                      bShowAwarenessZones : 1;                                  // 0x0050(0x0004) (Config, GlobalConfig)
	unsigned long                                      bShowTargetViewCones : 1;                                 // 0x0050(0x0004) (Config, GlobalConfig)
	unsigned long                                      bShowTimers : 1;                                          // 0x0050(0x0004) (Config, GlobalConfig)
	unsigned long                                      bShowAITree : 1;                                          // 0x0050(0x0004)
	int                                                SnapshotNdx;                                              // 0x0054(0x0004)
	class USnapshotRecord*                             CurSnapshot;                                              // 0x0058(0x0004)
	class UPopUpDebugBarGraph*                         PopUpGraphTop;                                            // 0x005C(0x0004) (Transient)
	class UPopUpDebugBarGraph*                         PopUpGraphCenter;                                         // 0x0060(0x0004) (Transient)
	struct FName                                       CurrentInspectedTargetName;                               // 0x0064(0x0008)
	float                                              TopBarGraphStartXPct;                                     // 0x006C(0x0004) (Const)
	float                                              TopBarGraphStartYPct;                                     // 0x0070(0x0004) (Const)
	float                                              CenterBarGraphStartXPct;                                  // 0x0074(0x0004) (Const)
	float                                              CenterBarGraphStartYPct;                                  // 0x0078(0x0004) (Const)
	float                                              Column2XOffset;                                           // 0x007C(0x0004) (Const)
	float                                              Column1LastY;                                             // 0x0080(0x0004)
	float                                              Column2LastY;                                             // 0x0084(0x0004)
	int                                                LastColumnDrawnTo;                                        // 0x0088(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AIDebugCamera");
		return ptr;
	}


	void ToggleAITree();
	void ToggleTargetViewCones();
	void ToggleAwarenessZones();
	void ToggleRuleEngineLoadBalance();
	void ToggleCombat();
	void ToggleShowTimers();
	void ToggleResources();
	void ToggleInactiveRules();
	void ToggleRules();
	void ToggleFlags();
	class UAITracker* GetTracker();
	void SetMind(class AGearboxMind* NewMind);
	void InitDummies(int NewNumDummies);
	bool WantsToDoCameraInspection();
	void SetCurrentInspectedTarget(const struct FName& NewName);
	void CompareRuleSetAndAdjustRuleIdx(class USnapshotRecord* OldSnapshot, class USnapshotRecord* NewSnapshot);
	void SetRuleEngine(class URuleEngine* NewRuleEngine);
	void SetPrevSnapshotRule();
	void SetNextSnapshotRule();
	void SetPrevSnapshot();
	void SetNextSnapshot();
	void NotifyGameUnPaused();
	void NotifyGamePaused();
	void Display(class AHUD* HUD);
};


// Class GearboxFramework.AITracker
// 0x00D4 (0x003C - 0x0110)
class UAITracker : public UObject
{
public:
	class USnapshotRecord*                             Snapshots[0x32];                                          // 0x003C(0x0004) (Transient)
	int                                                SnapshotSize;                                             // 0x0104(0x0004)
	int                                                SnapshotIndex;                                            // 0x0108(0x0004)
	class AActor*                                      DebugOwner;                                               // 0x010C(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AITracker");
		return ptr;
	}

};


// Class GearboxFramework.SpecialMoveInterface
// 0x0000 (0x003C - 0x003C)
class USpecialMoveInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SpecialMoveInterface");
		return ptr;
	}


	void SetReplicatedSMData(struct FSpecialMoveData* NewSMData);
	void ServerSpecialMove_StopAny();
	void ServerSpecialMove_Stop(class USpecialMoveDefinition* OldSMD);
	void ServerSpecialMove_Queue(class USpecialMoveDefinition* NewSMD, float PlayRateScale, float Duration, const struct FName& CallbackName, class UObject* CallbackObject, class UObject* Data);
	void ServerSpecialMove_Play(class USpecialMoveDefinition* NewSMD, float PlayRateScale, float Duration, const struct FName& CallbackName, class UObject* CallbackObject, class UObject* Data);
	unsigned char GetDefaultRootMotionRotationMode();
	unsigned char GetDefaultRootMotionMode();
	class USkeletalMeshComponent* GetSkelMesh();
	class USpecialMoveComponent* GetSMComponent();
	class AActor* GetActor();
};


// Class GearboxFramework.AnimNodeSpecialMoveBlend
// 0x0020 (0x00EC - 0x010C)
class UAnimNodeSpecialMoveBlend : public UAnimNodeSlot
{
public:
	unsigned char                                      AnimState;                                                // 0x00EC(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00ED(0x0003) MISSED OFFSET
	float                                              SavedBlendOutTime;                                        // 0x00F0(0x0004) (Transient)
	FScriptInterface                                   SMI;                                                      // 0x00F4(0x0008) (Transient)
	TArray<struct FSlotAnimParameters>                 AnimParameters;                                           // 0x00FC(0x000C) (Transient, NeedCtorLink)
	unsigned long                                      bForceLocalSpaceBlend : 1;                                // 0x0108(0x0004) (Edit, Const)
	unsigned long                                      IssueNotifiesWhenZeroWeight : 1;                          // 0x0108(0x0004) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimNodeSpecialMoveBlend");
		return ptr;
	}


	bool IsPlaying(class UGearboxAnimDefinition* AnimSMD);
	void SetRootMotion(class URootMotionDefinition* RMDef);
	class UGearboxAnimDefinition* GetCurrentAnimDef();
	struct FName GetCurrentAnimName();
	void Finish(bool bInterrupted);
	void Stop(bool bInterrupted);
	float PlayData(const struct FName& AnimNameOverride, float PlayRateScale, float BlendInOverride, float BlendOutOverride, struct FSpecialMoveData* SMData);
	float Play(class UGearboxAnimDefinition* CustomAnimSMD, const struct FName& AnimNameOverride, float PlayRateScale, float BlendInOverride, float BlendOutOverride);
};


// Class GearboxFramework.AttributeExpressionEvaluator
// 0x0010 (0x003C - 0x004C)
class UAttributeExpressionEvaluator : public UExpressionEvaluator
{
public:
	struct FAttributeExpressionData                    Expression;                                               // 0x003C(0x0010) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AttributeExpressionEvaluator");
		return ptr;
	}


	bool Evaluate(class UObject* ContextSource);
};


// Class GearboxFramework.Behavior_CallFunction
// 0x0008 (0x004C - 0x0054)
class UBehavior_CallFunction : public UBehaviorBase
{
public:
	struct FName                                       FunctionName;                                             // 0x004C(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Behavior_CallFunction");
		return ptr;
	}


	void CallFunction(class AActor* inActor, const struct FName& InFunctionName);
	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo);
};


// Class GearboxFramework.IBehaviorConsumer
// 0x0000 (0x003C - 0x003C)
class UIBehaviorConsumer : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("IBehaviorConsumer");
		return ptr;
	}


	struct FBehaviorConsumerHandle GetBehaviorConsumerHandle();
};


// Class GearboxFramework.Behavior_ChangeRemoteBehaviorSequenceState
// 0x0044 (0x004C - 0x0090)
class UBehavior_ChangeRemoteBehaviorSequenceState : public UBehaviorBase
{
public:
	unsigned char                                      Action;                                                   // 0x004C(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	struct FName                                       SequenceName;                                             // 0x0050(0x0008) (Edit, Const)
	class UObject*                                     SequenceProvider;                                         // 0x0058(0x0004) (Edit, Const)
	struct FNameBasedObjectPath                        ProviderDefinitionPathName;                               // 0x005C(0x0034) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Behavior_ChangeRemoteBehaviorSequenceState");
		return ptr;
	}


	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo);
};


// Class GearboxFramework.ITimerBehavior
// 0x0000 (0x003C - 0x003C)
class UITimerBehavior : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ITimerBehavior");
		return ptr;
	}


	bool SetTimerState(unsigned char TimerId, const struct FBehaviorTimerState& TimerState);
	bool GetTimerState(unsigned char TimerId, struct FBehaviorTimerState* TimerState);
	float GetTimeSeconds();
};


// Class GearboxFramework.Behavior_ChangeTimer
// 0x001C (0x004C - 0x0068)
class UBehavior_ChangeTimer : public UBehaviorBase
{
public:
	unsigned char                                      TimerId;                                                  // 0x004C(0x0001) (Edit, Const)
	unsigned char                                      Reaction;                                                 // 0x004D(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004E(0x0002) MISSED OFFSET
	unsigned long                                      bSetNewTimerDelay : 1;                                    // 0x0050(0x0004) (Edit, Const)
	struct FAttributeInitializationData                NewTimerDelayFormula;                                     // 0x0054(0x0010) (Edit, Const)
	float                                              NewTimerDelay;                                            // 0x0064(0x0004) (Const, Deprecated)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Behavior_ChangeTimer");
		return ptr;
	}


	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo);
};


// Class GearboxFramework.Behavior_IsSequenceEnabled
// 0x0040 (0x004C - 0x008C)
class UBehavior_IsSequenceEnabled : public UBehaviorBase
{
public:
	struct FName                                       SequenceName;                                             // 0x004C(0x0008) (Edit, Const)
	class UObject*                                     SequenceProvider;                                         // 0x0054(0x0004) (Edit, Const)
	struct FNameBasedObjectPath                        ProviderDefinitionPathName;                               // 0x0058(0x0034) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Behavior_IsSequenceEnabled");
		return ptr;
	}


	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo);
};


// Class GearboxFramework.Behavior_PostAkEvent
// 0x0010 (0x004C - 0x005C)
class UBehavior_PostAkEvent : public UBehaviorBase
{
public:
	class UAkEvent*                                    Event;                                                    // 0x004C(0x0004) (Edit)
	unsigned long                                      bReplicateEvent : 1;                                      // 0x0050(0x0004) (Edit)
	unsigned long                                      bForLocalPlayerOnly : 1;                                  // 0x0050(0x0004) (Edit)
	unsigned long                                      bForcePlayImmediate : 1;                                  // 0x0050(0x0004) (Edit)
	unsigned long                                      bPlayFromActor : 1;                                       // 0x0050(0x0004) (Edit)
	unsigned long                                      bLatentWhenNoConnections : 1;                             // 0x0050(0x0004)
	struct FAkPlayingInfo                              PlayingInfo;                                              // 0x0054(0x0008) (Transient, Component)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Behavior_PostAkEvent");
		return ptr;
	}


	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo);
};


// Class GearboxFramework.BehaviorHelpers
// 0x0018 (0x003C - 0x0054)
class UBehaviorHelpers : public UObject
{
public:
	struct FScriptDelegate                             __BehaviorSetStrategy__Delegate;                          // 0x003C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __BehaviorStrategy__Delegate;                             // 0x0048(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BehaviorHelpers");
		return ptr;
	}


	static void RunAllBehaviorsForEvent(const struct FName& EventName, const struct FScriptDelegate& SetStrategy, const struct FScriptDelegate& Strategy, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, unsigned char EnumValue);
	void BehaviorStrategy(const struct FPointer& BehaviorSet, const struct FName& EventName, unsigned char EnumValue, TArray<class UBehaviorBase*>* BehaviorList);
	void BehaviorSetStrategy(TArray<struct FPointer>* BehaviorSetList);
	static class UBehaviorProviderDefinition* ResolveBehaviorProviderDefinitionReference(class UBehaviorBase* SourceBehavior, class UObject* ProviderReference, struct FNameBasedObjectPath* PathName);
	static bool IsBehaviorsV2(struct FBehaviorKernelInfo* KernelInfo);
	static bool ShouldContinueExecution(float TimeBetweenSteps, int MaxSteps, struct FBehaviorKernelInfo* KernelInfo, int* NumSteps);
	static struct FName GetNextFireLocationSocket(unsigned char FireSocketSelection, TArray<struct FName> FireLocationSocketNames, TArray<struct FName>* FireLocationSocketsRemaining);
	static bool GetRotationFromAttachmentLocationData(const struct FAttachmentLocationData& AttachmentLocation, struct FRotator* AttachmentLocationRotation);
	static struct FVector GetRelativeDirection(const struct FRelativeDirectionData& DesiredDirection, const FScriptInterface& Source, const struct FVector& DefaultDirection, const struct FName& SpawnSocketName);
};


// Class GearboxFramework.CompoundExpressionEvaluator
// 0x000C (0x003C - 0x0048)
class UCompoundExpressionEvaluator : public UExpressionEvaluator
{
public:
	class UExpressionEvaluator*                        Expression1;                                              // 0x003C(0x0004) (Edit, EditInline)
	unsigned char                                      Operator;                                                 // 0x0040(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	class UExpressionEvaluator*                        Expression2;                                              // 0x0044(0x0004) (Edit, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("CompoundExpressionEvaluator");
		return ptr;
	}


	bool Evaluate(class UObject* ContextSource);
};


// Class GearboxFramework.ConditionalAttributeValueResolver
// 0x0020 (0x003C - 0x005C)
class UConditionalAttributeValueResolver : public UAttributeValueResolver
{
public:
	struct FConditionalInitializationExpressions       ValueExpressions;                                         // 0x003C(0x0020) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ConditionalAttributeValueResolver");
		return ptr;
	}

};


// Class GearboxFramework.ConstantAttributeValueResolver
// 0x0004 (0x003C - 0x0040)
class UConstantAttributeValueResolver : public UAttributeValueResolver
{
public:
	float                                              ConstantValue;                                            // 0x003C(0x0004) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ConstantAttributeValueResolver");
		return ptr;
	}

};


// Class GearboxFramework.ConstraintAttributeValueResolver
// 0x0028 (0x003C - 0x0064)
class UConstraintAttributeValueResolver : public UAttributeValueResolver
{
public:
	struct FRange                                      Constraints;                                              // 0x003C(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ConstraintAttributeValueResolver");
		return ptr;
	}

};


// Class GearboxFramework.FeatherBoneBlendDefinition
// 0x000C (0x003C - 0x0048)
class UFeatherBoneBlendDefinition : public UGBXDefinition
{
public:
	TArray<struct FFeatherBoneBlendData>               BoneBlends;                                               // 0x003C(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("FeatherBoneBlendDefinition");
		return ptr;
	}

};


// Class GearboxFramework.GBXActorList
// 0x000C (0x003C - 0x0048)
class UGBXActorList : public UObject
{
public:
	TArray<struct Fs_actorList>                        ActorList;                                                // 0x003C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GBXActorList");
		return ptr;
	}


	void RemoveAndDeleteActorsOfClassFromLevel(class UClass* TheClass, class ULevel* Level);
	void RemoveActorsOfClassFromLevel(class UClass* TheClass, class ULevel* Level);
	void RemoveAndDeleteActorsFromLevel(class ULevel* Level);
	void RemoveActorsFromLevel(class ULevel* Level);
	class AActor* FindNextActorByLevel(class ULevel* Level, int* Index);
	class AActor* FindFirstActorByLevel(class ULevel* Level, int* Index);
	class AActor* FindNextActorByClass(class UClass* TheClass, int* Index);
	class AActor* FindFirstActorByClass(class UClass* TheClass, int* Index);
	void RemoveActor(class AActor* Actor);
	void AddActor(class AActor* Actor, class ULevel* Level);
};


// Class GearboxFramework.GBXObjectList
// 0x000C (0x003C - 0x0048)
class UGBXObjectList : public UObject
{
public:
	TArray<class UObject*>                             ObjectList;                                               // 0x003C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GBXObjectList");
		return ptr;
	}


	void RemoveObjectsOfClass(class UClass* TheClass);
	class UObject* FindNextObjectByClass(class UClass* TheClass, int* Index);
	class UObject* FindFirstObjectByClass(class UClass* TheClass, int* Index);
	void RemoveObject(class UObject* TheObject);
	void AddObject(class UObject* TheObject);
};


// Class GearboxFramework.GearboxAIController
// 0x0000 (0x0684 - 0x0684)
class AGearboxAIController : public AAIController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxAIController");
		return ptr;
	}


	void ForceMoveToActor(class AActor* destActor);
};


// Class GearboxFramework.GearboxAIMoveNode
// 0x003C (0x0188 - 0x01C4)
class AGearboxAIMoveNode : public AActor
{
public:
	unsigned long                                      bEnabled : 1;                                             // 0x0188(0x0004) (Edit)
	unsigned long                                      bFaceNodeDirection : 1;                                   // 0x0188(0x0004) (Edit, Const)
	TArray<struct FNodeData>                           NextNodes;                                                // 0x018C(0x000C) (Edit, NeedCtorLink)
	TArray<class AGearboxAIMoveNode*>                  PreviousNodes;                                            // 0x0198(0x000C) (NeedCtorLink)
	float                                              HoldTime;                                                 // 0x01A4(0x0004) (Edit, Const)
	TArray<class UBehaviorBase*>                       Behaviors;                                                // 0x01A8(0x000C) (Edit, Const, NeedCtorLink, EditInline)
	TArray<class USpecialMoveDefinition*>              SpecialMoves;                                             // 0x01B4(0x000C) (Edit, Const, NeedCtorLink)
	class USpriteComponent*                            Sprite;                                                   // 0x01C0(0x0004) (ExportObject, Component, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxAIMoveNode");
		return ptr;
	}


	bool DoesPatrolPathExistToPoint(class AGearboxAIMoveNode* PatrolPoint);
	void GetAllLinkedNodes(TArray<class AGearboxAIMoveNode*>* OutNodes);
	class AGearboxAIMoveNode* GetNextMoveNodeClosestToPoint(const struct FVector& TestPoint);
	class AGearboxAIMoveNode* GetNextMoveNode();
	int RemoveNode(class AGearboxAIMoveNode* OldNode);
	void AddNode(class AGearboxAIMoveNode* NewNode);
	void ClearLinks();
	void OnToggle(class USeqAct_Toggle* Action);
};


// Class GearboxFramework.GearboxCameraBasic
// 0x0004 (0x03FC - 0x0400)
class AGearboxCameraBasic : public ACamera
{
public:
	struct FPointer                                    VfTable_IInterfaceGearboxCamera;                          // 0x03FC(0x0004) (Const, Native, NoExport)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxCameraBasic");
		return ptr;
	}


	void FinishCameraLookAt();
	void EnableThirdPersonLookAt(float LookAtXOffset, float LookAtYOffset, float LookAtZOffset, unsigned char LookAtMode);
	void BeginCameraLookAt(class AActor* LookAtTarget, const struct FName& LookAtBone, const struct FVector& TargetLocation, float Zoom, const struct FVector2D& FOV, float Duration, float TransitionTimeIn, float TransitionTimeOut);
	void CalcSimpleThirdPersonView(float DeltaTime, struct FTViewTarget* OutVT);
	void CalcBaseView(float DeltaTime, struct FTViewTarget* OutVT);
	void UpdateViewTarget(float DeltaTime, struct FTViewTarget* OutVT);
};


// Class GearboxFramework.GearboxCameraModifier
// 0x0031 (0x0058 - 0x0089)
class UGearboxCameraModifier : public UCameraModifier
{
public:
	class AGearboxCameraBasic*                         GBXCameraOwner;                                           // 0x0058(0x0004)
	struct FTPOV                                       DesiredPOV;                                               // 0x005C(0x001C)
	float                                              MasterFadeValue;                                          // 0x0078(0x0004)
	float                                              FadeElapsedTime;                                          // 0x007C(0x0004)
	float                                              FadeTimeSpan;                                             // 0x0080(0x0004)
	unsigned long                                      FadeStarted : 1;                                          // 0x0084(0x0004)
	unsigned long                                      FadingUpwards : 1;                                        // 0x0084(0x0004)
	unsigned long                                      DisableWhenFadedOut : 1;                                  // 0x0084(0x0004)
	unsigned long                                      AdjustForTimeDilation : 1;                                // 0x0084(0x0004) (Const)
	unsigned char                                      FadeMode;                                                 // 0x0088(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxCameraModifier");
		return ptr;
	}


	float LerpFOV(float Src, float Dest, float T);
	struct FRotator LerpRotation(const struct FRotator& Src, const struct FRotator& Dest, float T);
	struct FVector LerpLocation(const struct FVector& Src, const struct FVector& Dest, float T);
	void UpdateAllLerps(float DeltaTime, struct FTPOV* OutPOV);
	void UpdateMasterFadePercentage(float AdjustedDeltaTime);
	bool IsFadingDownwards();
	bool IsFadingUpwards();
	bool IsFadeInProgress();
	void StartFadeOut(float NewTimeSpan, bool NewDisableWhenFadedOut, unsigned char NewFadeMode);
	void StartFadeIn(float NewTimeSpan, unsigned char NewFadeMode);
	void SetDesiredCamera(const struct FVector& DesiredLoc, const struct FRotator& DesiredRot, float DesiredFOV);
	void SetGBXCameraOwner(class AGearboxCameraBasic* InCamera);
	bool AddCameraModifier(class ACamera* Camera);
};


// Class GearboxFramework.GearboxCheatManager
// 0x0000 (0x005C - 0x005C)
class UGearboxCheatManager : public UCheatManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxCheatManager");
		return ptr;
	}

};


// Class GearboxFramework.GearboxDialogInterface
// 0x0000 (0x003C - 0x003C)
class UGearboxDialogInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxDialogInterface");
		return ptr;
	}


	void ServerDialog_TriggerEvent(class UGearboxDialogEventTag* EventTag, class AActor* Other, class UObject* ObjectParameter);
	void SetDialogNameTag(class UGearboxDialogNameTag* NewName);
	struct FGearboxDialogReplicatedData GetReplicatedDialogData();
	void SetReplicatedDialogData(class UGearboxDialogAct_Talk* TalkAct, struct FGearboxDialogData* Data);
	void GetDialogGroups(TArray<class UGearboxDialogGroup*>* Groups);
	class UGearboxDialogComponent* GetDialogComponent();
	class UGearboxDialogNameTag* GetDialogNameTag();
	class AActor* GetActor();
	bool CanTalk();
};


// Class GearboxFramework.GearboxEditorNode
// 0x0030 (0x003C - 0x006C)
class UGearboxEditorNode : public UObject
{
public:
	unsigned char                                      Type;                                                     // 0x003C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	TArray<struct FOutputLink>                         OutputLinks;                                              // 0x0040(0x000C) (NeedCtorLink)
	TArray<class UGearboxEditorNode*>                  InputLinks;                                               // 0x004C(0x000C) (NeedCtorLink)
	TArray<struct FVariableLink>                       VariableLinks;                                            // 0x0058(0x000C) (NeedCtorLink)
	unsigned long                                      bAllowInputs : 1;                                         // 0x0064(0x0004) (EditorOnly)
	unsigned long                                      bAllowOutputs : 1;                                        // 0x0064(0x0004) (EditorOnly)
	unsigned long                                      bAllowVariables : 1;                                      // 0x0064(0x0004) (EditorOnly)
	unsigned long                                      bAllowMovement : 1;                                       // 0x0064(0x0004) (EditorOnly)
	unsigned long                                      bAllowMultipleInputs : 1;                                 // 0x0064(0x0004) (EditorOnly)
	unsigned long                                      bAllowMultipleOutputs : 1;                                // 0x0064(0x0004) (EditorOnly)
	unsigned long                                      bAllowMultipleVariables : 1;                              // 0x0064(0x0004) (EditorOnly)
	float                                              SliderPosition;                                           // 0x0068(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxEditorNode");
		return ptr;
	}


	bool IsChild(class UGearboxEditorNode* TestNode);
};


// Class GearboxFramework.GearboxEngine
// 0x0020 (0x07AC - 0x07CC)
class UGearboxEngine : public UGameEngine
{
public:
	int                                                CurrentUserID;                                            // 0x07AC(0x0004)
	int                                                CurrentDeviceID;                                          // 0x07B0(0x0004)
	unsigned long                                      bHasSelectedValidStorageDevice : 1;                       // 0x07B4(0x0004) (Const, Transient)
	struct FString                                     DefaultSparkInterfaceName;                                // 0x07B8(0x000C) (Config, NeedCtorLink)
	FScriptInterface                                   SparkInterface;                                           // 0x07C4(0x0008) (Const, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxEngine");
		return ptr;
	}


	static FScriptInterface GetSparkInterface();
	bool IsCurrentDeviceValid(int SizeNeeded);
	bool HasStorageDeviceBeenRemoved();
	int GetCurrentDeviceID();
	void SetCurrentDeviceID(int NewDeviceID, bool bProfileSignedOut);
};


// Class GearboxFramework.GearboxGameInfo
// 0x0000 (0x0330 - 0x0330)
class AGearboxGameInfo : public AGameInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxGameInfo");
		return ptr;
	}


	void PostLogin(class APlayerController* NewPlayer);
};


// Class GearboxFramework.GFxMovieState
// 0x0020 (0x003C - 0x005C)
class UGFxMovieState : public UObject
{
public:
	struct FName                                       StateName;                                                // 0x003C(0x0008) (Edit)
	struct FName                                       DefaultState;                                             // 0x0044(0x0008) (Edit)
	unsigned char                                      StateType;                                                // 0x004C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	TArray<struct FMovieStateData>                     AllStates;                                                // 0x0050(0x000C) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GFxMovieState");
		return ptr;
	}


	struct FString GetDebugString(class UGearboxGFxMovie* Movie, bool bIncludeFlags);
	void ApplyMovieState(class UGearboxGFxMovie* Movie, class UClass* HandlerClass);
	int FindMovieState(const struct FName& TheState);
	bool TestState(const struct FName& TheState, struct FMovieStateStruct* MovieState);
	int ToggleState(const struct FName& TheState, struct FMovieStateStruct* MovieState);
	int EnableState(const struct FName& TheState, bool bEnable, struct FMovieStateStruct* MovieState);
};


// Class GearboxFramework.GearboxGFxMovie
// 0x008C (0x01C8 - 0x0254)
class UGearboxGFxMovie : public UGFxMovie
{
public:
	TArray<struct FAkEventResolver>                    InteractionOverrideSounds;                                // 0x01C8(0x000C) (Edit, NeedCtorLink)
	float                                              TickRateSeconds;                                          // 0x01D4(0x0004)
	unsigned long                                      bTickScript : 1;                                          // 0x01D8(0x0004)
	unsigned long                                      bTickFirstFrame : 1;                                      // 0x01D8(0x0004) (Transient)
	unsigned long                                      bRenderingDisabled : 1;                                   // 0x01D8(0x0004) (Transient)
	unsigned long                                      bSupportsStatePooling : 1;                                // 0x01D8(0x0004)
	unsigned long                                      bIsUsingFlashMouse : 1;                                   // 0x01D8(0x0004)
	unsigned long                                      bBlockingMovie : 1;                                       // 0x01D8(0x0004)
	unsigned long                                      bCloseOnDeath : 1;                                        // 0x01D8(0x0004)
	TArray<class UGFxMovieDrawStyle*>                  AllStyles;                                                // 0x01DC(0x000C) (Transient, NeedCtorLink)
	class UGFxMovieDefinition*                         MyDefinition;                                             // 0x01E8(0x0004) (Transient)
	class UGFxActorMoviePool*                          MyPool;                                                   // 0x01EC(0x0004) (Transient)
	TArray<class AGearboxPlayerController*>            PlayerOwners;                                             // 0x01F0(0x000C) (Transient, NeedCtorLink)
	class UObject*                                     ContextObject;                                            // 0x01FC(0x0004) (Transient)
	float                                              LastTickTime;                                             // 0x0200(0x0004) (Transient)
	class UGearboxGFxMovie*                            PoolParent;                                               // 0x0204(0x0004) (Transient)
	struct FMovieStateStruct                           CurrentMovieState;                                        // 0x0208(0x0018) (Transient, NeedCtorLink)
	TArray<class UGFxMovieState*>                      BaseMovieStates;                                          // 0x0220(0x000C) (Edit, NeedCtorLink, EditInline)
	TArray<class UGFxMovieState*>                      AllMovieStates;                                           // 0x022C(0x000C) (Transient, NeedCtorLink)
	int                                                bMouseable;                                               // 0x0238(0x0004)
	struct FScriptDelegate                             __OnInputAxis__Delegate;                                  // 0x023C(0x000C) (Transient, NeedCtorLink)
	struct FScriptDelegate                             __OnClosed__Delegate;                                     // 0x0248(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxGFxMovie");
		return ptr;
	}


	void extSetLanguageExt(const struct FString& ClipPath);
	void OnClosedOnDeath();
	bool IsShowingFlashMouse();
	int extIsMouseablePlatform();
	void SetMouseableFlag();
	struct FString GetStyleDebugString();
	struct FString GetStateDebugString(bool bIncludeFlags);
	void InitializeFrom(class UGearboxGFxMovie* SrcMovie);
	bool RemoveStylesDrawnTo(class UPrimitiveComponent* PrimComp, const FScriptInterface& Target);
	bool RemoveStyles(const FScriptInterface& Target);
	void RemoveStyle(class UGFxMovieDrawStyle* Style);
	void AddStyle(class UGFxMovieDrawStyle* Style);
	void ShutdownMoviePlayback();
	void InitMoviePlayback();
	class UTextureRenderTarget2D* GetRenderTexture();
	void MovieState_OnChanged(bool bStateWasChanged);
	bool MovieState_SetFromMovie(class UGearboxGFxMovie* Movie);
	bool MovieState_Copy(struct FMovieStateStruct* StateDst, struct FMovieStateStruct* StateSrc);
	bool MovieState_Compare(struct FMovieStateStruct* S1, struct FMovieStateStruct* S2);
	void MovieState_Toggle(const struct FName& TheState);
	bool MovieState_Enable(const struct FName& TheState, bool bEnable);
	bool MovieState_IsEnabled(const struct FName& TheState);
	bool MovieState_SupportsState(const struct FName& TheState);
	void MovieState_Init();
	void InitFromDefinition();
	static void MovieState_Apply(class UGearboxGFxMovie* Movie, class UClass* HandlerClass);
	static void MovieState_ApplyState(const struct FName& TheState, class UGearboxGFxMovie* Movie);
	void ApplyState(const struct FString& StateName, const struct FString& StateAction);
	void SetRenderingEnabled(bool bEnabled);
	void GotoAndStop(const struct FString& FrameLabel);
	void GotoAndPlay(const struct FString& FrameLabel);
	void PlaySpecialUISound(const struct FString& SoundString);
	void PlayUISound(const struct FName& UIEvent);
	void SetOtherObject(class UObject* Obj);
	class UObject* GetInstanceContextObject();
	void OnTick();
	void OnClose();
	bool Start(bool StartPaused);
	struct FString ColorizeTooltipText(const struct FString& S, bool bDisabled);
	static struct FString GFxColoredText(bool bAppendNewline, struct FColor* C, struct FString* S);
	void SingleArgInvokeB(const struct FString& Command, bool Arg);
	void SingleArgInvokeS(const struct FString& Command, const struct FString& Arg);
	void SingleArgInvokeF(const struct FString& Command, float Arg);
	class ULocalPlayer* GetLocalPlayer();
	void OnClosed(class UGearboxGFxMovie* Movie);
	bool WantsControllerInput(int ControllerId);
	bool SetExternalTexture(const struct FString& Resource, class UTexture* Texture);
	bool OnInputAxis(int ControllerId, const struct FName& ukey, float Delta, float DeltaTime);
};


// Class GearboxFramework.GFxMovie_StateParent
// 0x0004 (0x0254 - 0x0258)
class UGFxMovie_StateParent : public UGearboxGFxMovie
{
public:
	class UClass*                                      StateClass;                                               // 0x0254(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GFxMovie_StateParent");
		return ptr;
	}


	void MovieState_OnChanged(bool bStateWasChanged);
	bool Start(bool StartPaused);
};


// Class GearboxFramework.GearboxGlobals
// 0x0070 (0x0084 - 0x00F4)
class UGearboxGlobals : public UGearboxEngineGlobals
{
public:
	class UGearboxGlobalsDefinition*                   TheGlobalsDefinition;                                     // 0x0084(0x0004)
	class UClass*                                      ExposureUtilityClass;                                     // 0x0088(0x0004)
	class UClass*                                      ExposureUtilityStrategyClass;                             // 0x008C(0x0004)
	class UExposureUtilityBase*                        TheExposureUtility;                                       // 0x0090(0x0004) (Transient)
	class UGearboxAIFactory*                           TheAIFactory;                                             // 0x0094(0x0004) (Transient)
	class URuleEngineLoadBalanceManager*               TheRuleEngineLoadBalanceManager;                          // 0x0098(0x0004) (Transient)
	class UGBXActorList*                               TheGBXActorList;                                          // 0x009C(0x0004) (Transient)
	class UGBXObjectList*                              TheGBXObjectList;                                         // 0x00A0(0x0004) (Transient)
	TArray<struct FValidNameRange>                     ValidNameList;                                            // 0x00A4(0x000C) (Transient, NeedCtorLink)
	class AWireManager*                                TheWireMgr;                                               // 0x00B0(0x0004) (Transient)
	class UGbxMessageManager*                          TheMessageManager;                                        // 0x00B4(0x0004) (Transient)
	class UGBXActorList*                               TheDynamicTextureActorList;                               // 0x00B8(0x0004) (Transient)
	class UPopulationMaster*                           ThePopulationMaster;                                      // 0x00BC(0x0004) (Transient)
	class UBehaviorKernel*                             TheBehaviorKernel;                                        // 0x00C0(0x0004) (Transient)
	class UScreenSpaceManager*                         TheScreenSpaceManager;                                    // 0x00C4(0x0004) (Transient)
	class UGFxMovieManager*                            TheGFxManager;                                            // 0x00C8(0x0004) (Transient)
	class UGearboxRenderTextureManager*                TheRenderTextureManager;                                  // 0x00CC(0x0004) (Transient)
	struct FString                                     GlobalInstanceClassName;                                  // 0x00D0(0x000C) (Config, NeedCtorLink)
	int                                                DefaultMaxPopulationActorCost;                            // 0x00DC(0x0004) (Config)
	TArray<struct FLevelStateRecord>                   StateRecords;                                             // 0x00E0(0x000C) (NeedCtorLink)
	class UAkComponent*                                UIAudioComponent;                                         // 0x00EC(0x0004) (ExportObject, Transient, Component, EditInline)
	class UGearboxDialogManager*                       TheDialogManager;                                         // 0x00F0(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxGlobals");
		return ptr;
	}


	static class UBehaviorKernel* GetBehaviorKernel();
	class UGearboxDialogManager* GetDialogManager();
	float GetPopulationRespawnDelay();
	FScriptInterface ShowDialog(class APlayerController* PC);
	void NotifyActorDied(class AActor* TheActor, bool bKeepBody);
	bool DoesLOSIntersectSpecialOccluder(const struct FVector& FromLoc, const struct FVector& ToLoc, class UPawnAllegiance* AllegianceAffected);
	static bool HasPhysXCapableGPU();
	static unsigned char GetPlatform();
	bool ValidatePlayerName(bool bReplaceCharacters, struct FString* InName);
	bool RegisterStateKey(const struct FName& LevelName, const struct FName& ObjectName, const struct FName& AdditionalKey);
	bool DoesStateKeyExist(const struct FName& LevelName, const struct FName& ObjectName, const struct FName& AdditionalKey);
	bool FreeTexture2D(class UTexture2D* Texture);
	class UTexture2D* GetTexture2D();
	class UGearboxRenderTextureManager* GetRenderTextureManager();
	class UGFxMovieManager* GetGFxManager();
	class UScreenSpaceManager* GetScreenSpaceManager();
	class UGbxMessageManager* GetMessageManager();
	void RegDynamicTextureStreaming(class AActor* A, bool bRegister);
	class UGBXActorList* GetDynamicTextureActorList();
	class UPopulationMaster* GetPopulationMaster();
	class AWireManager* GetWireManager();
	class UGBXObjectList* GetGBXObjectList();
	class UGBXActorList* GetGBXActorList();
	class URuleEngineLoadBalanceManager* GetRuleEngineLoadBalanceManager();
	class UGearboxAIFactory* GetGearboxAIFactory();
	class UExposureUtilityBase* GetExposureUtility();
	static class UGearboxGlobals* GetGearboxGlobals();
};


// Class GearboxFramework.GearboxGlobalsDefinition
// 0x000C (0x003C - 0x0048)
class UGearboxGlobalsDefinition : public UGBXDefinition
{
public:
	float                                              RespawnDelayInSeconds;                                    // 0x003C(0x0004) (Edit, Const)
	class UGearboxDialogGlobalsDefinition*             Dialog;                                                   // 0x0040(0x0004) (Edit)
	class UGFxMovieDefinition*                         EulaMovieDefinition;                                      // 0x0044(0x0004) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxGlobalsDefinition");
		return ptr;
	}

};


// Class GearboxFramework.GearboxLocationRequest
// 0x004C (0x003C - 0x0088)
class UGearboxLocationRequest : public UObject
{
public:
	class USearchOrigin*                               SearchOrigin;                                             // 0x003C(0x0004) (Edit)
	class USearchDirection*                            DirectionFromOrigin;                                      // 0x0040(0x0004) (Edit)
	class ULocationFilter*                             LocationFilterTest;                                       // 0x0044(0x0004) (Edit)
	float                                              DirectionCone;                                            // 0x0048(0x0004) (Edit)
	struct FAttributeInitializationData                MinDistanceFromOrigin;                                    // 0x004C(0x0010) (Edit)
	struct FAttributeInitializationData                MaxDistanceFromOrigin;                                    // 0x005C(0x0010) (Edit)
	unsigned char                                      SearchRandomness;                                         // 0x006C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	struct FVector                                     SearchOriginResult;                                       // 0x0070(0x000C)
	struct FVector                                     SearchDirectionResult;                                    // 0x007C(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxLocationRequest");
		return ptr;
	}


	struct FVector GetLastDirection();
	struct FVector GetLastOrigin();
	bool GetDirection(class AActor* ContextActor, struct FVector* OutDirection);
	bool GetOrigin(class AActor* ContextActor, struct FVector* OutOrigin);
	bool Get(class AActor* ContextActor, struct FVector* OutLocation);
};


// Class GearboxFramework.PawnMoveLocationRequest
// 0x002C (0x0088 - 0x00B4)
class UPawnMoveLocationRequest : public UGearboxLocationRequest
{
public:
	unsigned long                                      GoToCover : 1;                                            // 0x0088(0x0004) (Edit)
	unsigned char                                      CoverSearchFilter;                                        // 0x008C(0x0001) (Edit)
	unsigned char                                      RepathOption;                                             // 0x008D(0x0001) (Edit)
	unsigned char                                      CoverFailureResponse;                                     // 0x008E(0x0001) (Edit)
	unsigned char                                      DestinationTestNonCover;                                  // 0x008F(0x0001) (Edit)
	struct FAttributeInitializationData                RepathDistanceThresh;                                     // 0x0090(0x0010) (Edit)
	class URuleEventDef*                               FailureEvent;                                             // 0x00A0(0x0004) (Edit)
	struct FAttributeInitializationData                OverrideDistanceForCover;                                 // 0x00A4(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("PawnMoveLocationRequest");
		return ptr;
	}


	bool Get(class AActor* ContextActor, struct FVector* OutLocation);
};


// Class GearboxFramework.GearboxPawn
// 0x006C (0x0694 - 0x0700)
class AGearboxPawn : public AGamePawn
{
public:
	struct FPointer                                    VfTable_ISpecialMoveInterface;                            // 0x0694(0x0004) (Const, Native, NoExport)
	struct FPointer                                    VfTable_IGearboxDialogInterface;                          // 0x0698(0x0004) (Const, Native, NoExport)
	struct FName                                       NPCSightBone;                                             // 0x069C(0x0008)
	unsigned long                                      bWantsToMove : 1;                                         // 0x06A4(0x0004)
	class USpecialMoveComponent*                       SMComponent;                                              // 0x06A8(0x0004) (ExportObject, Component, EditInline)
	struct FReplicatedSpecialMoveData                  ReplicatedSMData;                                         // 0x06AC(0x0014) (Net, RepNotify)
	struct FFlag                                       HasBeenShotAtRecently;                                    // 0x06C0(0x0010) (Transient)
	struct FGearboxCoverState                          CoverState;                                               // 0x06D0(0x000C) (Net, Transient, RepNotify, RepRetry)
	class UGearboxCoverStateManager*                   CoverManager;                                             // 0x06DC(0x0004) (ExportObject, Transient, NeedCtorLink, EditInline)
	class UGearboxDialogComponent*                     DialogComponent;                                          // 0x06E0(0x0004) (ExportObject, Component, EditInline)
	struct FGearboxDialogReplicatedData                DialogReplicatedData;                                     // 0x06E4(0x0014) (Net, RepNotify)
	struct FAkPlayingInfo                              DyingScream;                                              // 0x06F8(0x0008) (Transient, Component)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxPawn");
		return ptr;
	}


	struct FVector GetAimDirection();
	void SetDialogNameTag(class UGearboxDialogNameTag* NewName);
	void ServerDialog_TriggerEvent(class UGearboxDialogEventTag* EventTag, class AActor* Other, class UObject* ObjectParameter);
	struct FGearboxDialogReplicatedData GetReplicatedDialogData();
	void SetReplicatedDialogData(class UGearboxDialogAct_Talk* TalkAct, struct FGearboxDialogData* Data);
	void GetDialogGroups(TArray<class UGearboxDialogGroup*>* Groups);
	class UGearboxDialogComponent* GetDialogComponent();
	class UGearboxDialogNameTag* GetDialogNameTag();
	bool CanTalk();
	void OnCoverStateChanged();
	void ServerSetCoverState(const struct FGearboxCoverState& NewCoverState);
	void SetCoverState(const struct FGearboxCoverState& NewCoverState);
	float GetMountAnimDistanceForSpeed(unsigned char TheSpeed, unsigned char CoverHeight, unsigned char CoverDir);
	struct FVector GetSpotOthersShouldLookAt();
	void SetReplicatedSMData(struct FSpecialMoveData* NewSMData);
	void ServerSpecialMove_StopAny();
	void ServerSpecialMove_Stop(class USpecialMoveDefinition* OldSMD);
	void ServerSpecialMove_Queue(class USpecialMoveDefinition* NewSMD, float PlayRateScale, float Duration, const struct FName& CallbackName, class UObject* CallbackObject, class UObject* Data);
	void ServerSpecialMove_Play(class USpecialMoveDefinition* NewSMD, float PlayRateScale, float Duration, const struct FName& CallbackName, class UObject* CallbackObject, class UObject* Data);
	unsigned char GetDefaultRootMotionRotationMode();
	unsigned char GetDefaultRootMotionMode();
	class USkeletalMeshComponent* GetSkelMesh();
	class USpecialMoveComponent* GetSMComponent();
	class AActor* GetActor();
	class UGearboxNavigationHandle* GetNavigationHandle();
	void PlayHit(class APawn* SomePawn, const struct FVector& HitLocation, class UClass* DamageType, const struct FVector& Momentum, const struct FTraceHitInfo& HitInfo, class UDamagePipeline* Pipeline);
	void ReplicatedEvent(const struct FName& VarName);
	bool Died(class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation, class UDamagePipeline* Pipeline);
	void SetMovementPhysics();
	void PostBeginPlay();
	void NotifyShotAtBy(class AGearboxPawn* ShootingPawn);
	bool HaveIBeenShotAtRecently();
};


// Class GearboxFramework.SparkTypes
// 0x003C (0x003C - 0x0078)
class USparkTypes : public UObject
{
public:
	struct FScriptDelegate                             __OnSparkRequestComplete__Delegate;                       // 0x003C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnSparkConfigReceived__Delegate;                        // 0x0048(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnSparkInitialized__Delegate;                           // 0x0054(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnSparkEmergencyMessageUpdated__Delegate;               // 0x0060(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnEntitlementsUpdated__Delegate;                        // 0x006C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SparkTypes");
		return ptr;
	}


	static struct FString UTF8toString(TArray<unsigned char> inputBytes);
	void OnEntitlementsUpdated(class UGearboxAccountData* GbxAccount);
	void OnSparkEmergencyMessageUpdated();
	void OnSparkInitialized(unsigned char InitializedResult);
	void OnSparkConfigReceived(TArray<unsigned char> ConfigArray);
	void OnSparkRequestComplete(struct FSparkResult* Result);
};


// Class GearboxFramework.SparkInterface
// 0x0000 (0x003C - 0x003C)
class USparkInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SparkInterface");
		return ptr;
	}


	void RemoveScriptCallback(int HttpRequestId);
	class USparkNews* GetNewsService();
	class USparkServiceConfiguration* GetTitleStorageServiceConfiguration();
	struct FString GetTitleStorageUrl();
	void ClearGearboxAccountData(bool IncludePrimaryPlayer);
	void SignOutGearboxAccount(unsigned char ControllerId);
	void SignInGearboxAccount(unsigned char ControllerId);
	class UGearboxAccountData* GetGearboxAccountData(unsigned char ControllerId);
	bool IsGearboxAccountAuthenticated(unsigned char ControllerId);
	bool IsGearboxAccountSignedIn(unsigned char ControllerId);
	struct FString ConvertUtcTimeToLocalTime(const struct FString& UtcTime);
	bool ShouldUpdateEmergencyMessage();
	struct FString GetEmergencyMessage();
	void SetEmergencyMessage(const struct FString& Message);
	struct FString GetPlatformLoginNameFromSplitscreenIndex(int SplitscreenIndex);
	struct FString GetPlatformLoginNameFromController(unsigned char ControllerId);
	void IncreaseInteractionTries();
	int GetInteractionTries();
	int GetInteractionGraceTries();
	int GetInteractionPunishmentMinWaitSeconds();
	int GetInteractionMinWaitSeconds();
	bool IsTmsComplete();
	void SetTmsComplete();
	class USparkInitializationProcess* GetSparkInitialization();
	void RestartSparkInitialization(bool bPrimary);
	void RestartSparkInitializationFromScript(bool bPrimary, const struct FScriptDelegate& SparkInitializedDelegate, const struct FScriptDelegate& SparkEmergencyMessageDelegate);
	void StartSparkInitialization(unsigned char ControllerId, const struct FScriptDelegate& SparkInitializedDelegate, const struct FScriptDelegate& SparkEmergencyMessageDelegate, const struct FScriptDelegate& EntitlementsUpdatedDelegate);
	void StartSecondaryInitialization(unsigned char ControllerId, const struct FScriptDelegate& SparkInitializedDelegate, const struct FScriptDelegate& EntitlementsUpdatedDelegate);
	struct FString GetGameName();
	struct FString GetHardwareName();
	struct FString GetPlatformName();
	struct FString GetPlatformTicket(int ControllerId, bool bPrimary);
	void ClearSparkConfigReceivedDelegate(const struct FScriptDelegate& SparkConfigReceivedDelegate);
	void AddSparkConfigReceivedDelegate(const struct FScriptDelegate& SparkConfigReceivedDelegate);
	void ResetInitializationStatus();
	bool IsSparkEnabled();
	int IssueSparkStringRequest(const struct FString& URL, const struct FString& RequestData, const struct FScriptDelegate& SparkRequestCompleteDelegate, struct FHttpParameters* HttpRequestParameters);
	int IssueSparkRequest(const struct FString& URL, const struct FScriptDelegate& SparkRequestCompleteDelegate, struct FHttpParameters* HttpRequestParameters, TArray<unsigned char>* RequestData);
};


// Class GearboxFramework.GearboxAccountData
// 0x0064 (0x003C - 0x00A0)
class UGearboxAccountData : public UObject
{
public:
	struct FString                                     RequestId;                                                // 0x003C(0x000C) (NeedCtorLink)
	unsigned long                                      SignedIn : 1;                                             // 0x0048(0x0004)
	unsigned long                                      HasValidPlatform : 1;                                     // 0x0048(0x0004)
	struct FString                                     PlatformLoginName;                                        // 0x004C(0x000C) (NeedCtorLink)
	struct FDouble                                     NextEntitlementUpdateTime;                                // 0x0058(0x0008)
	TArray<class UGearboxAccountEntitlement*>          Entitlements;                                             // 0x0060(0x000C) (NeedCtorLink)
	TArray<class UGearboxAccountOffer*>                Offers;                                                   // 0x006C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     EntitlementsUpdatedDelegates;                             // 0x0078(0x000C) (NeedCtorLink)
	TArray<class USparkServiceConfiguration*>          Services;                                                 // 0x0084(0x000C) (NeedCtorLink)
	unsigned char                                      AgreementsSigning;                                        // 0x0090(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	struct FString                                     SupportId;                                                // 0x0094(0x000C) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxAccountData");
		return ptr;
	}


	bool HasSignedAllEulas();
	int CountEntitlement(const struct FName& EntitlementName, bool bIgnoreLocallyConsumed);
	int GetTotalGoldenKeyCount();
	int GetGoldenKeyCount(bool bIgnoreLocallyConsumed);
	bool HasGoldenKey(bool bIgnoreLocallyConsumed);
	bool HasDeveloperSkin();
	bool IsDeveloper();
	void MarkOffersNotified();
	TArray<class UGearboxAccountOffer*> GetUnnotifiedOffers();
	class UGearboxAccountEntitlement* GetEntitlementWithName(const struct FName& EntitlementName);
	class UGearboxAccountEntitlement* GetEntitlementWithId(int Id);
	bool HasEntitlement(const struct FName& EntitlementName, bool bIgnoreLocallyConsumed);
	void RemoveEntitlement(class UGearboxAccountEntitlement* Entitlement);
	void ReplaceEntitlements(TArray<struct FEntitlementResult>* NewEntitlements, TArray<struct FOfferResult>* NewOffers);
	void ReplaceServices(TArray<struct FServiceResult>* NewServices);
	void HandleReloadEntitlementsResponse(struct FSparkResult* Result);
	bool ReloadEntitlements();
	void ResetEntitlementUpdateTimer();
	bool CanReloadEntitlements();
	void TriggerEntitlementsUpdatedDelegates();
	void ClearEntitlementsUpdatedDelegate(const struct FScriptDelegate& EntitlementsUpdatedDelegate);
	void AddEntitlementsUpdatedDelegate(const struct FScriptDelegate& EntitlementsUpdatedDelegate);
	class USparkServiceConfiguration* GetService(const struct FName& ServiceName);
	void Clear();
	static bool ExtractArchwayResultJson(TArray<unsigned char>* Data, struct FArchwayResult* ArchwayData);
	static bool ExtractArchwayResult(TArray<unsigned char>* Data, struct FArchwayResult* ArchwayData);
};


// Class GearboxFramework.GearboxAccountActions
// 0x006C (0x003C - 0x00A8)
class UGearboxAccountActions : public UObject
{
public:
	int                                                CurrentConsumeCount;                                      // 0x003C(0x0004)
	unsigned char                                      CurrentControllerId;                                      // 0x0040(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	class UGearboxAccountEntitlement*                  CurrentEntitlement;                                       // 0x0044(0x0004)
	TArray<class UGearboxAccountEntitlement*>          CurrentBulkConsumeEntitlements;                           // 0x0048(0x000C) (NeedCtorLink)
	TArray<int>                                        CurrentBulkConsumeControllerIds;                          // 0x0054(0x000C) (NeedCtorLink)
	TArray<int>                                        CurrentBulkConsumeCounts;                                 // 0x0060(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnSignInGearboxAccount__Delegate;                       // 0x006C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnSignUpGearboxAccount__Delegate;                       // 0x0078(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnResetPasswordGearboxAccount__Delegate;                // 0x0084(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnCodeRedeemed__Delegate;                               // 0x0090(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnEntitlementConsumed__Delegate;                        // 0x009C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxAccountActions");
		return ptr;
	}


	void HandleEULAInteractionCompleteResponse(struct FSparkResult* Result);
	void HandleEULAInteractionComplete(unsigned char ControllerId, TArray<struct FEULAData>* EULAState);
	void HandleEULAChainResponse(struct FSparkResult* Result);
	int ReadEULAChain(unsigned char ControllerId, bool bAllowRetries);
	void HandleOffersNotifiedResponse(struct FSparkResult* Result);
	void HandleBulkEntitlementsConsumedResponse(struct FSparkResult* Result);
	void HandleEntitlementConsumedResponse(struct FSparkResult* Result);
	void HandleCodeRedeemedResponse(struct FSparkResult* Result);
	void HandleResetPasswordResponse(struct FSparkResult* Result);
	void HandleSignUpResponse(struct FSparkResult* Result);
	void HandleSignInResponse(struct FSparkResult* Result);
	struct FArchwayResult ExtractArchwayResult(TArray<unsigned char> Data);
	void MarkOffersNotified(unsigned char ControllerId);
	bool LocallyConsumeEntitlementWithCount(const struct FName& EntitlementName, int NumToConsume, unsigned char ControllerId);
	void ConsumeEntitlementsWithCounts(TArray<class UGearboxAccountEntitlement*> EntitlementsToConsume, TArray<int> Counts, unsigned char ControllerId, const struct FScriptDelegate& EntitlementConsumedDelegate);
	void ConsumeEntitlementWithCount(const struct FName& EntitlementName, int Count, unsigned char ControllerId, const struct FScriptDelegate& EntitlementConsumedDelegate);
	void RedeemCode(const struct FString& Code, unsigned char ControllerId, const struct FScriptDelegate& CodeRedeemedDelegate);
	void ResetPasswordGearboxAccount(const struct FString& Email, unsigned char ControllerId, const struct FScriptDelegate& ResetPasswordDelegate);
	struct FString EscapeJson(const struct FString& Input);
	void SignUpGearboxAccount(const struct FString& Email, const struct FString& Password, const struct FString& PasswordConfirm, const struct FString& AgeString, unsigned char ControllerId, const struct FScriptDelegate& SignUpDelegate);
	void SignInGearboxAccount(const struct FString& Email, const struct FString& Password, unsigned char ControllerId, const struct FScriptDelegate& SignInDelegate);
	void OnEntitlementConsumed(unsigned char ConsumeResult);
	void OnCodeRedeemed(unsigned char RedeemResult, const struct FString& CustomTitle, const struct FString& CustomBody);
	void OnResetPasswordGearboxAccount(unsigned char ResetResult);
	void OnSignUpGearboxAccount(unsigned char SignUpResult);
	void OnSignInGearboxAccount(unsigned char SignInResult);
};


// Class GearboxFramework.GearboxPlayerController
// 0x00F8 (0x08FC - 0x09F4)
class AGearboxPlayerController : public AGamePlayerController
{
public:
	struct FGearboxViewShakeInfo                       CurrentViewShake;                                         // 0x08FC(0x0044)
	struct FGearboxViewShakeInfo                       BaseDamageShake;                                          // 0x0940(0x0044)
	struct FVector                                     ShakeOffset;                                              // 0x0984(0x000C)
	struct FRotator                                    ShakeRot;                                                 // 0x0990(0x000C)
	float                                              ShakeFOV;                                                 // 0x099C(0x0004)
	unsigned long                                      bWantsToShowStorageMenu : 1;                              // 0x09A0(0x0004) (Transient)
	unsigned long                                      bShouldCheckForProfileDeviceRemoval : 1;                  // 0x09A0(0x0004) (Transient, Config)
	class UAIDebugCamera*                              AIDebugCam;                                               // 0x09A4(0x0004) (Transient)
	class AGearboxPawn*                                PreviousDebugPawn;                                        // 0x09A8(0x0004) (Transient)
	class UClass*                                      AIDebugCamClass;                                          // 0x09AC(0x0004)
	float                                              DamageShakeMagnitudeMultiplier;                           // 0x09B0(0x0004) (Transient)
	float                                              DamageShakeMagnitudeMultiplierBaseValue;                  // 0x09B4(0x0004) (Const)
	TArray<class UAttributeModifier*>                  DamageShakeMagnitudeMultiplierModifierStack;              // 0x09B8(0x000C) (Const, Transient, NeedCtorLink)
	float                                              DamageShakeTimeMultiplier;                                // 0x09C4(0x0004) (Transient)
	float                                              DamageShakeTimeMultiplierBaseValue;                       // 0x09C8(0x0004) (Const)
	TArray<class UAttributeModifier*>                  DamageShakeTimeMultiplierModifierStack;                   // 0x09CC(0x000C) (Const, Transient, NeedCtorLink)
	class ULeviathanChannel*                           LeviathanReplicationChannel;                              // 0x09D8(0x0004) (Transient)
	struct FGuid                                       PlaySessionGuid;                                          // 0x09DC(0x0010) (Transient)
	int                                                SessionBundleNumber;                                      // 0x09EC(0x0004) (Transient)
	class UGearboxProfileSettings*                     CachedProfileSettings;                                    // 0x09F0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxPlayerController");
		return ptr;
	}


	bool CanPlayOnline();
	void DisplayShiftCommunicationFailedDialog();
	void ShowEULAScreen(TArray<struct FEULAData>* EulaChain);
	int RequestTitleStorageFile(const struct FString& Filename, const struct FScriptDelegate& TitleStorageRequestCompleteDelegate, unsigned char AcceptsType, const struct FString& CustomAcceptsType);
	void ShowSparkID();
	bool ShouldCheckRemoteControlCheckbox(unsigned char CheckBoxName, class AHUD* HUD);
	void DisplayDebugSpark(class AHUD* HUD, float* out_YL, float* out_YPos);
	void AITree();
	void AIToggleTargetViewCones();
	void AIToggleAwarenessZones();
	void AIToggleCombat();
	void AIToggleResources();
	void AIToggleInactiveRules();
	void AIToggleRules();
	void AIToggleFlags();
	void AIDebugNextSnapshot();
	void AIDebugPrevSnapshot();
	void ainext();
	void aiprev();
	void AINextRule(bool bSkipContainers);
	void AIPrevRule(bool bSkipContainers);
	void AIDebugSetPawn(class AGearboxPawn* NewPawn);
	void AIDebugSetPawnByName(const struct FName& NewPawnName);
	void debugpawn();
	void aisetp(const struct FName& NewPawnName);
	void NotifyGameUnPaused();
	void NotifyGamePaused();
	void SetSettingsFromProfile();
	int GetStorageDeviceID();
	void SetStorageDeviceID(int DeviceID);
	void NotifyDeviceSelectComplete(bool bWasSuccessful);
	void DisplayStorageRemovedMenu();
	void DisplayProfileRemovedMenu();
	void NotifyProfileWriteFromStorageChangeComplete(unsigned char LocalUser, bool bWasSuccessful);
	bool IsCurrentStorageDeviceValid();
	void NotifyStorageDeviceChange();
	void DestroyOnlineGame();
	void ReturnToTitleScreen(bool bSkipSave, bool bRemoveSplitPlayer);
	struct FString GetConnectionFailureNoticeMsg();
	struct FString GetMainMenuMapName();
	void NotifyLinkStatusChange(bool bIsConnected);
	void NotifyLoginStatusChange(unsigned char NewStatus, const struct FUniqueNetId& NewId);
	void NotifyLoginChange(unsigned char LocalUserNum);
	void OnReadProfileSettingsComplete(unsigned char LocalUserNum, bool bWasSuccessful);
	void OnReceivedNewProfile();
	void ClearOnlineDelegates();
	void RegisterOnlineDelegates();
	void OnProfileWriteComplete(unsigned char LocalUserNum, bool bWasSuccessful);
	void HidePS3WritingProfileDialog();
	void ShowPS3WritingProfileDialog();
	bool WriteProfile(bool bShouldShowProfileDialog);
	class UGearboxProfileSettings* GetProfileSettings();
	unsigned char GetMyControllerId();
	void ReadProfile();
	void UnregisterPlayerDataStores();
	void RegisterCustomPlayerDataStores();
	void SetDataStoreStringValue(const struct FString& MarkupString, const struct FString& NewValue);
	struct FString GetDataStoreStringValue(const struct FString& MarkupString);
	void ClientKeepPlayingLoadingMovie();
	void ClientResetCamera();
	void SpawnPlayerCamera();
	void InitInputSystem();
	void NoTargetAll();
	void NoTarget();
	static bool GetNoTargetPlayers();
	static void SetNoTargetPlayers(bool bNoTarget);
	void Possess(class APawn* aPawn, bool bVehicleTransition);
	void DontTarget(bool bModeFlag);
	void ClientConsoleCommand(const struct FString& Command);
	bool IsPlayerAllowingActiveMoment();
	bool IsActiveMomentRunning();
	void ViewShake(float DeltaTime);
	void UpdateShakeRotComponent(float Time, float DeltaTime, float* Max, int* Current, float* Rate);
	void CheckShake(float Time, float* MaxOffset, float* Offset, float* Rate);
	void StopViewShaking();
	void OnCameraShake(class UGearboxSeqAct_CameraShake* ShakeAction);
	void ShakeView(const struct FGearboxViewShakeInfo& NewViewShake);
	void ClientDamageShake(int Damage);
	void ConsoleEcho(const struct FString& Text, bool bLogOutput);
	void Initialize();
	void PostBeginPlay();
	void TryAndSpawnLeviathanChannel(class UNetConnection* Connection);
	void GenerateNewSessionGuid();
};


// Class GearboxFramework.GearboxPlayerInput
// 0x0000 (0x017C - 0x017C)
class UGearboxPlayerInput : public UPlayerInput
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxPlayerInput");
		return ptr;
	}


	void PlayerInput(float DeltaTime);
};


// Class GearboxFramework.GearboxPlayerReplicationInfo
// 0x0008 (0x0254 - 0x025C)
class AGearboxPlayerReplicationInfo : public APlayerReplicationInfo
{
public:
	unsigned char                                      Difficulty;                                               // 0x0254(0x0001) (Net)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0255(0x0003) MISSED OFFSET
	int                                                Dummy;                                                    // 0x0258(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxPlayerReplicationInfo");
		return ptr;
	}

};


// Class GearboxFramework.GearboxProfileSettings
// 0x0000 (0x0098 - 0x0098)
class UGearboxProfileSettings : public UOnlineProfileSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxProfileSettings");
		return ptr;
	}

};


// Class GearboxFramework.GearboxRenderTextureManager
// 0x003C (0x003C - 0x0078)
class UGearboxRenderTextureManager : public UObject
{
public:
	TArray<class UTexture2D*>                          FreeList2D;                                               // 0x003C(0x000C) (NeedCtorLink)
	TArray<class UTextureRenderTarget2D*>              FreeList;                                                 // 0x0048(0x000C) (NeedCtorLink)
	float                                              HoldDuration;                                             // 0x0054(0x0004) (Const)
	float                                              TimeToNextTick;                                           // 0x0058(0x0004)
	TArray<struct FThumbnailRenderData>                Thumbnails;                                               // 0x005C(0x000C) (Component, NeedCtorLink)
	TArray<struct FThumbnailLightData>                 DefaultLights;                                            // 0x0068(0x000C) (Component, NeedCtorLink)
	float                                              ThumbnailTextureArea;                                     // 0x0074(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxRenderTextureManager");
		return ptr;
	}


	void SetThumbnailMesh(class UTexture* Texture, class UMeshComponent* Mesh);
	void FreeContext(const struct FName& Context);
	void FreeThumbnail(class UTexture* Texture);
	class UTexture* GetThumbnail(const struct FName& Context, int TextureSizeX, int TextureSizeY, unsigned char UpdateType, int SizeX, int SizeY);
	bool FreeTexture2D(class UTexture2D* Texture);
	class UTexture2D* GetTexture2D();
	bool FreeRenderTexture(class UTextureRenderTarget2D* Texture);
	class UTextureRenderTarget2D* GetRenderTexture(int InSizeX, int InSizeY, bool bNeedsTwoCopies);
};


// Class GearboxFramework.GearboxSeqAct_DestroyPopulationActors
// 0x001C (0x00B4 - 0x00D0)
class UGearboxSeqAct_DestroyPopulationActors : public USeqAct_Latent
{
public:
	unsigned long                                      SaveDestroyedActors : 1;                                  // 0x00B4(0x0004) (Edit)
	unsigned long                                      DisablePopulationSpawners : 1;                            // 0x00B4(0x0004) (Edit)
	unsigned long                                      bActorsDestroyed : 1;                                     // 0x00B4(0x0004)
	TArray<class APopulationOpportunity*>              Opportunities;                                            // 0x00B8(0x000C) (Edit, NeedCtorLink)
	TArray<class APopulationEncounter*>                Encounters;                                               // 0x00C4(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxSeqAct_DestroyPopulationActors");
		return ptr;
	}

};


// Class GearboxFramework.GearboxSeqAct_ResetPopulationCount
// 0x0000 (0x00A4 - 0x00A4)
class UGearboxSeqAct_ResetPopulationCount : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxSeqAct_ResetPopulationCount");
		return ptr;
	}

};


// Class GearboxFramework.GearboxSkeletalMeshComponent
// 0x0004 (0x06AC - 0x06B0)
class UGearboxSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	float                                              FOV;                                                      // 0x06AC(0x0004) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxSkeletalMeshComponent");
		return ptr;
	}


	void SetFOV(float NewFOV);
};


// Class GearboxFramework.GearboxStaticMeshComponent
// 0x0004 (0x0248 - 0x024C)
class UGearboxStaticMeshComponent : public UStaticMeshComponent
{
public:
	float                                              FOV;                                                      // 0x0248(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxStaticMeshComponent");
		return ptr;
	}

};


// Class GearboxFramework.GestaltSkeletalMeshDefinition
// 0x0038 (0x003C - 0x0074)
class UGestaltSkeletalMeshDefinition : public UGBXDefinition
{
public:
	class USkeletalMesh*                               GestaltSkeletalMesh;                                      // 0x003C(0x0004) (Edit, Const, EditConst)
	unsigned long                                      bStaticMeshRigidBodyMesh : 1;                             // 0x0040(0x0004) (Edit)
	TArray<struct FGestaltInfo>                        GestaltInfos;                                             // 0x0044(0x000C) (Edit, EditConst, NeedCtorLink)
	TArray<struct FGestaltAccessoryNameEntry>          GestaltAccessoryNames;                                    // 0x0050(0x000C) (Edit, EditConst, NeedCtorLink)
	TArray<struct FGestaltSocketRemapEntry>            GestaltSocketMappings;                                    // 0x005C(0x000C) (Edit, EditConst, NeedCtorLink)
	TArray<struct FGestaltPartBoundsEntry>             GestaltPartBounds;                                        // 0x0068(0x000C) (Edit, EditConst, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GestaltSkeletalMeshDefinition");
		return ptr;
	}


	void InitGestaltAccessoryMeshDataFromParts(class USkeletalMesh* MeshToBorrowBonesFrom, class UGestaltPartMatrices* AccessoryMatrices, class USkeletalMeshComponent* TargetComponent, TArray<struct FGestaltPartPermutation>* PermutationConfiguration);
	void InitGestaltMeshDataFromParts(class USkeletalMeshComponent* TargetComponent, TArray<struct FName>* PartMeshNames);
};


// Class GearboxFramework.GFxActorMoviePool
// 0x001C (0x003C - 0x0058)
class UGFxActorMoviePool : public UObject
{
public:
	class UGFxMovieDefinition*                         MovieDefinition;                                          // 0x003C(0x0004)
	TArray<struct FMovieInstanceArray>                 Pools;                                                    // 0x0040(0x000C) (NeedCtorLink)
	TArray<FScriptInterface>                           MovieTargets;                                             // 0x004C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GFxActorMoviePool");
		return ptr;
	}


	void DisplayDebug(class AHUD* HUD, float X, float* out_YL, float* out_YPos);
	struct FString GetPoolName(int Index);
	struct FString PoolStyleString(unsigned char Pooling);
	void MovieStateChanged(class UGearboxGFxMovie* Movie);
};


// Class GearboxFramework.GFxMovieDefinition
// 0x0080 (0x003C - 0x00BC)
class UGFxMovieDefinition : public UGBXDefinition
{
public:
	class USwfMovie*                                   SwfMovie;                                                 // 0x003C(0x0004) (Edit)
	class UClass*                                      SwfMovieClass;                                            // 0x0040(0x0004) (Edit)
	class UGearboxGFxMovie*                            Movie;                                                    // 0x0044(0x0004) (Deprecated)
	class UClass*                                      ExternalInterfaceClass;                                   // 0x0048(0x0004) (Edit)
	unsigned long                                      bTakeFocus : 1;                                           // 0x004C(0x0004) (Edit)
	unsigned long                                      bCaptureInput : 1;                                        // 0x004C(0x0004) (Edit)
	unsigned long                                      bStartPaused : 1;                                         // 0x004C(0x0004) (Edit)
	unsigned long                                      bIsModalGameMenu : 1;                                     // 0x004C(0x0004) (Edit)
	unsigned long                                      bOverrideWorldLighting : 1;                               // 0x004C(0x0004) (Edit)
	unsigned long                                      bInputOwnerOnly : 1;                                      // 0x004C(0x0004) (Edit)
	unsigned long                                      bInputAllKeys : 1;                                        // 0x004C(0x0004) (Edit)
	float                                              FadeInSeconds;                                            // 0x0050(0x0004) (Edit)
	float                                              FadeOutSeconds;                                           // 0x0054(0x0004) (Edit)
	struct FRotator                                    WorldLightingDirectionOffset;                             // 0x0058(0x000C) (Edit)
	class UGFxMovieDrawStyle*                          DrawStyle;                                                // 0x0064(0x0004) (Edit, EditInline)
	int                                                DepthPriority;                                            // 0x0068(0x0004) (Edit)
	unsigned char                                      PoolType;                                                 // 0x006C(0x0001) (Edit)
	unsigned char                                      ScaleMode;                                                // 0x006D(0x0001) (Edit)
	unsigned char                                      AlignMode;                                                // 0x006E(0x0001) (Edit)
	unsigned char                                      TimingMode;                                               // 0x006F(0x0001) (Edit)
	unsigned char                                      RenderTextureMode;                                        // 0x0070(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	struct FName                                       Pool;                                                     // 0x0074(0x0008) (Edit)
	TArray<class UGFxMovieState*>                      CustomStates;                                             // 0x007C(0x000C) (Edit, NeedCtorLink, EditInline)
	TArray<struct FName>                               AutoActivateStates;                                       // 0x0088(0x000C) (Edit, NeedCtorLink)
	TArray<struct FGFxMenuLink>                        MenuLinks;                                                // 0x0094(0x000C) (Edit, NeedCtorLink)
	class UTextureRenderTarget2D*                      RenderTexture;                                            // 0x00A0(0x0004) (Edit)
	TArray<struct FAkEventResolver>                    InteractionOverrideSounds;                                // 0x00A4(0x000C) (Edit, NeedCtorLink)
	TArray<class UGFxMovieState*>                      BaseMovieStates;                                          // 0x00B0(0x000C) (Edit, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GFxMovieDefinition");
		return ptr;
	}


	class UGFxMovieDefinition* FindMovieLink(const struct FName& MovieName);
	void PostMovieStart(class UGearboxGFxMovie* StartedMovie);
	class UGearboxGFxMovie* SpawnPlayerMovie(class AGearboxPlayerController* Owner, const FScriptInterface& TargetActor, class UObject* ContextObject);
	bool SupportsStatePooling();
	unsigned char GetPoolStyle();
};


// Class GearboxFramework.GearboxEULAGFxMovieDefinition
// 0x0000 (0x00BC - 0x00BC)
class UGearboxEULAGFxMovieDefinition : public UGFxMovieDefinition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxEULAGFxMovieDefinition");
		return ptr;
	}

};


// Class GearboxFramework.GFxMovieDrawStyle
// 0x000C (0x003C - 0x0048)
class UGFxMovieDrawStyle : public UObject
{
public:
	class UGearboxGFxMovie*                            Movie;                                                    // 0x003C(0x0004) (Transient)
	FScriptInterface                                   TargetActor;                                              // 0x0040(0x0008) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GFxMovieDrawStyle");
		return ptr;
	}


	struct FString GetStyleDebugString();
};


// Class GearboxFramework.GFxMovieDrawStyleHUD
// 0x0040 (0x0048 - 0x0088)
class UGFxMovieDrawStyleHUD : public UGFxMovieDrawStyle
{
public:
	TArray<struct FHUDAnchorPoint>                     AnchorPoints;                                             // 0x0048(0x000C) (Edit, NeedCtorLink)
	struct FHUDCoordValue                              MovieDimensions[0x2];                                     // 0x0054(0x0010) (Edit)
	unsigned long                                      bCacheValid : 1;                                          // 0x0074(0x0004) (Transient)
	float                                              MovieScreenPos[0x4];                                      // 0x0078(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GFxMovieDrawStyleHUD");
		return ptr;
	}


	bool RequiresClientInstance();
};


// Class GearboxFramework.GFxMovieDrawStyleRTT
// 0x0005 (0x0048 - 0x004D)
class UGFxMovieDrawStyleRTT : public UGFxMovieDrawStyle
{
public:
	int                                                TextureSize;                                              // 0x0048(0x0004) (Edit)
	unsigned char                                      RenderTextureMode;                                        // 0x004C(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GFxMovieDrawStyleRTT");
		return ptr;
	}

};


// Class GearboxFramework.GFxMovieDrawStyleComponent
// 0x0003 (0x004D - 0x0050)
class UGFxMovieDrawStyleComponent : public UGFxMovieDrawStyleRTT
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GFxMovieDrawStyleComponent");
		return ptr;
	}

};


// Class GearboxFramework.GFxMovieDrawStyleMesh
// 0x0030 (0x0050 - 0x0080)
class UGFxMovieDrawStyleMesh : public UGFxMovieDrawStyleComponent
{
public:
	class UMeshComponent*                              MeshComponentArchetype;                                   // 0x0050(0x0004) (Edit, ExportObject, Component, EditInline)
	class UStaticMesh*                                 UseStaticMesh;                                            // 0x0054(0x0004) (Edit)
	class USkeletalMesh*                               UseSkeletalMesh;                                          // 0x0058(0x0004) (Edit)
	struct FName                                       UseMeshInstanceName;                                      // 0x005C(0x0008) (Edit)
	int                                                MaterialIndex;                                            // 0x0064(0x0004) (Edit)
	class UMaterial*                                   OverrideMaterial;                                         // 0x0068(0x0004) (Edit)
	struct FName                                       TextureParameterName;                                     // 0x006C(0x0008) (Edit)
	class UMeshComponent*                              Component;                                                // 0x0074(0x0004) (ExportObject, Transient, Component, EditInline)
	class UMaterialInstanceConstant*                   Mati;                                                     // 0x0078(0x0004) (Transient)
	class UMaterialInterface*                          OriginalMaterial;                                         // 0x007C(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GFxMovieDrawStyleMesh");
		return ptr;
	}


	struct FString GetStyleDebugString();
	bool RequiresClientInstance();
};


// Class GearboxFramework.GFxMovieDrawStyleSprite
// 0x0008 (0x0050 - 0x0058)
class UGFxMovieDrawStyleSprite : public UGFxMovieDrawStyleComponent
{
public:
	int                                                SpriteSize;                                               // 0x0050(0x0004) (Edit)
	class USpriteRTTComponent*                         TheSprite;                                                // 0x0054(0x0004) (ExportObject, Transient, Component, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GFxMovieDrawStyleSprite");
		return ptr;
	}

};


// Class GearboxFramework.GFxMovieDrawStyleSplitscreen
// 0x0000 (0x0048 - 0x0048)
class UGFxMovieDrawStyleSplitscreen : public UGFxMovieDrawStyle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GFxMovieDrawStyleSplitscreen");
		return ptr;
	}


	bool RequiresClientInstance();
};


// Class GearboxFramework.GFxMovieManager
// 0x0018 (0x003C - 0x0054)
class UGFxMovieManager : public UObject
{
public:
	TArray<class AGearboxPlayerController*>            Subscribers;                                              // 0x003C(0x000C) (NeedCtorLink)
	TArray<class UGFxActorMoviePool*>                  MoviePools;                                               // 0x0048(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GFxMovieManager");
		return ptr;
	}


	void ChangeMovieState(const FScriptInterface& TargetActor, const struct FName& State, unsigned char Change, class AGearboxPlayerController* PC);
	void Unsubscribe(class AGearboxPlayerController* PC);
	void Subscribe(class AGearboxPlayerController* PC);
	void UnregisterMoviesDrawnTo(class UPrimitiveComponent* PrimComp, const FScriptInterface& TargetActor);
	void UnregisterTarget(const FScriptInterface& TargetActor);
	void UnregisterMovie(class UGFxMovieDefinition* Definition, const FScriptInterface& TargetActor);
	void RegisterMovie(class UGFxMovieDefinition* Definition, const FScriptInterface& TargetActor);
};


// Class GearboxFramework.GFxMovieStateCustom
// 0x000C (0x005C - 0x0068)
class UGFxMovieStateCustom : public UGFxMovieState
{
public:
	TArray<struct FMovieStateData>                     CustomStates;                                             // 0x005C(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GFxMovieStateCustom");
		return ptr;
	}

};


// Class GearboxFramework.GFxMovieStateFlags
// 0x000C (0x005C - 0x0068)
class UGFxMovieStateFlags : public UGFxMovieState
{
public:
	TArray<struct FName>                               CustomFlags;                                              // 0x005C(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GFxMovieStateFlags");
		return ptr;
	}

};


// Class GearboxFramework.GFxMovieStatePlayerAware
// 0x001C (0x005C - 0x0078)
class UGFxMovieStatePlayerAware : public UGFxMovieState
{
public:
	float                                              LookAtThreshold;                                          // 0x005C(0x0004) (Edit)
	TArray<struct FMovieStateData>                     LookStates;                                               // 0x0060(0x000C) (Edit, EditFixedSize, NeedCtorLink)
	TArray<struct FMovieRangeStateData>                RangeStates;                                              // 0x006C(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GFxMovieStatePlayerAware");
		return ptr;
	}


	int EnableState(const struct FName& TheState, bool bEnable, struct FMovieStateStruct* MovieState);
};


// Class GearboxFramework.IAIInterface
// 0x0000 (0x003C - 0x003C)
class UIAIInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("IAIInterface");
		return ptr;
	}


	void InitSequence(class UActionSequence* NewSequence);
	class UPawnAllegiance* GetAllegiance();
	class UAIDefinition* GetAIDefinition();
	class UAIComponent* GetAIComponent();
	FScriptInterface GetAIParent();
	struct FVector GetAILocation();
	class AActor* GetAIActor();
	bool CanTickAI();
};


// Class GearboxFramework.IConstructObject
// 0x0000 (0x003C - 0x003C)
class UIConstructObject : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("IConstructObject");
		return ptr;
	}

};


// Class GearboxFramework.IGFxActorMovie
// 0x0000 (0x003C - 0x003C)
class UIGFxActorMovie : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("IGFxActorMovie");
		return ptr;
	}


	void GFx_NotifyMovieDestroy(class UGearboxGFxMovie* Movie);
	void GFx_NotifyMovieCreate(class UGearboxGFxMovie* Movie);
	class AActor* GFx_GetMovieActor();
};


// Class GearboxFramework.INounAttributeProvider
// 0x0000 (0x003C - 0x003C)
class UINounAttributeProvider : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("INounAttributeProvider");
		return ptr;
	}

};


// Class GearboxFramework.InterfaceGearboxCamera
// 0x0000 (0x003C - 0x003C)
class UInterfaceGearboxCamera : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("InterfaceGearboxCamera");
		return ptr;
	}


	void FinishCameraLookAt();
	void EnableThirdPersonLookAt(float LookAtXOffset, float LookAtYOffset, float LookAtZOffset, unsigned char LookAtMode);
	void BeginCameraLookAt(class AActor* LookAtTarget, const struct FName& LookAtBone, const struct FVector& TargetLocation, float Zoom, const struct FVector2D& FOV, float Duration, float TransitionTimeIn, float TransitionTimeOut);
};


// Class GearboxFramework.IStreamingDataEvent
// 0x0000 (0x003C - 0x003C)
class UIStreamingDataEvent : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("IStreamingDataEvent");
		return ptr;
	}


	void RunStreamingDataEvent(const struct FName& EventName, class UObject* EventInstigator, class UObject* OtherEventParticipantObject, int IntParam, float FloatParam);
};


// Class GearboxFramework.LeviathanChannel
// 0x0010 (0x0068 - 0x0078)
class ULeviathanChannel : public UChannel
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0068(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("LeviathanChannel");
		return ptr;
	}

};


// Class GearboxFramework.NoContextNeededAttributeContextResolver
// 0x0000 (0x003C - 0x003C)
class UNoContextNeededAttributeContextResolver : public UAttributeContextResolver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("NoContextNeededAttributeContextResolver");
		return ptr;
	}

};


// Class GearboxFramework.NounAttributeValueResolver
// 0x0014 (0x003C - 0x0050)
class UNounAttributeValueResolver : public UAttributeValueResolver
{
public:
	unsigned char                                      ReplicationStrategy;                                      // 0x003C(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	struct FAttributeInitializationData                DefaultValue;                                             // 0x0040(0x0010) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("NounAttributeValueResolver");
		return ptr;
	}

};


// Class GearboxFramework.ObjectFunctionAttributeValueResolver
// 0x000C (0x003C - 0x0048)
class UObjectFunctionAttributeValueResolver : public UAttributeValueResolver
{
public:
	struct FString                                     FunctionCall;                                             // 0x003C(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ObjectFunctionAttributeValueResolver");
		return ptr;
	}

};


// Class GearboxFramework.ObjectPropertyContextResolver
// 0x0008 (0x003C - 0x0044)
class UObjectPropertyContextResolver : public UAttributeContextResolver
{
public:
	struct FName                                       PropertyName;                                             // 0x003C(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ObjectPropertyContextResolver");
		return ptr;
	}

};


// Class GearboxFramework.PhysicsStateExpressionEvaluator
// 0x0008 (0x003C - 0x0044)
class UPhysicsStateExpressionEvaluator : public UExpressionEvaluator
{
public:
	unsigned char                                      PhysicsState;                                             // 0x003C(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	unsigned long                                      bIsInState : 1;                                           // 0x0040(0x0004) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("PhysicsStateExpressionEvaluator");
		return ptr;
	}


	bool Evaluate(class UObject* ContextSource);
};


// Class GearboxFramework.PopulationAspect
// 0x0000 (0x003C - 0x003C)
class UPopulationAspect : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("PopulationAspect");
		return ptr;
	}


	void DenStatRemoved(class APawn* DenPawn);
	void DenStatAdded(class APawn* DenPawn);
	void EnabledStatusChanged(bool bIsEnabled, bool bHasActiveActors);
	void AllActorsRemoved(bool bFinishedSpawning);
	void OnActorDeath(class AActor* DeadActor);
	void OnSpawnActor(class AActor* SpawnedActor);
	void Initialize();
};


// Class GearboxFramework.PopulationBodyTag
// 0x0000 (0x003C - 0x003C)
class UPopulationBodyTag : public UGBXDefinition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("PopulationBodyTag");
		return ptr;
	}

};


// Class GearboxFramework.PopulationEncounter
// 0x0044 (0x0188 - 0x01CC)
class APopulationEncounter : public AInfo
{
public:
	class UPopulationDefinition*                       EncounterPopulationDef;                                   // 0x0188(0x0004) (Edit, Const)
	TArray<class APopulationOpportunity*>              MemberOutposts;                                           // 0x018C(0x000C) (Edit, Const, NeedCtorLink)
	TArray<class APopulationOpportunity*>              MemberOpportunities;                                      // 0x0198(0x000C) (Edit, Const, NeedCtorLink)
	TArray<struct FEncounterLimitData>                 SpawnLimits;                                              // 0x01A4(0x000C) (Edit, Const, NeedCtorLink)
	unsigned long                                      IsEnabled : 1;                                            // 0x01B0(0x0004) (Edit)
	unsigned long                                      AutoEnableOpportunities : 1;                              // 0x01B0(0x0004) (Edit)
	unsigned long                                      bWaitingForNextWave : 1;                                  // 0x01B0(0x0004) (Transient)
	unsigned long                                      bIsWaitingForRespawn : 1;                                 // 0x01B0(0x0004) (Transient)
	TArray<struct FEncounterWaveData>                  Waves;                                                    // 0x01B4(0x000C) (Edit, Const, NeedCtorLink)
	int                                                CurrentWave;                                              // 0x01C0(0x0004) (Transient)
	float                                              TimeToStartNextWave;                                      // 0x01C4(0x0004) (Transient)
	float                                              RespawnDelayStartTime;                                    // 0x01C8(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("PopulationEncounter");
		return ptr;
	}


	void TriggerKismetAllSpawnedEvent();
	void TriggerKismetDeathEvent();
	void OnToggle(class USeqAct_Toggle* Action);
	void UpdateOpportunityEnabledStates(int nWave, bool bUpdateIfOnlyOneWave);
	void UpdateKismetNotifications();
};


// Class GearboxFramework.PopulationEncounterRenderingComponent
// 0x0000 (0x0210 - 0x0210)
class UPopulationEncounterRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("PopulationEncounterRenderingComponent");
		return ptr;
	}

};


// Class GearboxFramework.PopulationOpportunityCombatRenderingComponent
// 0x0000 (0x0210 - 0x0210)
class UPopulationOpportunityCombatRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("PopulationOpportunityCombatRenderingComponent");
		return ptr;
	}

};


// Class GearboxFramework.PopulationSpawnedActorTagDefinition
// 0x0000 (0x003C - 0x003C)
class UPopulationSpawnedActorTagDefinition : public UGBXDefinition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("PopulationSpawnedActorTagDefinition");
		return ptr;
	}

};


// Class GearboxFramework.PopUpDebugBarGraph
// 0x0040 (0x003C - 0x007C)
class UPopUpDebugBarGraph : public UObject
{
public:
	TArray<struct FColumnDataStruct>                   Columns;                                                  // 0x003C(0x000C) (NeedCtorLink)
	struct FString                                     TitleText;                                                // 0x0048(0x000C) (NeedCtorLink)
	struct FColor                                      BaseLineColor;                                            // 0x0054(0x0004) (Const)
	struct FColor                                      TitleTextColor;                                           // 0x0058(0x0004) (Const)
	float                                              ColumnWidth;                                              // 0x005C(0x0004) (Const)
	float                                              ColumnPadding;                                            // 0x0060(0x0004) (Const)
	float                                              ColumnMaxHeight;                                          // 0x0064(0x0004) (Const)
	float                                              TextScale;                                                // 0x0068(0x0004) (Const)
	float                                              TextPadding;                                              // 0x006C(0x0004) (Const)
	float                                              TitleTextScale;                                           // 0x0070(0x0004) (Const)
	float                                              TitleTextPaddingY;                                        // 0x0074(0x0004) (Const)
	float                                              ColumnValueTextOffsetY;                                   // 0x0078(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("PopUpDebugBarGraph");
		return ptr;
	}


	void Display(float DeltaSeconds, class UCanvas* Canvas);
	float GetValue(int ColumnNdx);
	void SetValue(int ColumnNdx, float NewValue);
	int AddNewColumn(const struct FColor& ColumnColor, const struct FString& HeaderText, float Value);
	void AddTitleText(const struct FString& NewTitleText);
};


// Class GearboxFramework.RandomAttributeValueResolver
// 0x0040 (0x003C - 0x007C)
class URandomAttributeValueResolver : public UAttributeValueResolver
{
public:
	unsigned long                                      bUseIntegerRandomization : 1;                             // 0x003C(0x0004) (Edit, Const)
	struct FAttributeInitializationData                LowerBound;                                               // 0x0040(0x0010) (Edit, Const)
	struct FAttributeInitializationData                UpperBound;                                               // 0x0050(0x0010) (Edit, Const)
	struct FAttributeInitializationData                ValueLifetime;                                            // 0x0060(0x0010) (Edit, Const)
	TArray<struct FSavedRandomValue>                   SavedRandomValues;                                        // 0x0070(0x000C) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("RandomAttributeValueResolver");
		return ptr;
	}

};


// Class GearboxFramework.RegionDefinition
// 0x0000 (0x003C - 0x003C)
class URegionDefinition : public UGBXDefinition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("RegionDefinition");
		return ptr;
	}


	bool GetDefaultRegionGameStage(int* MinGameStage, int* MaxGameStage, int* AwesomeLevel, int* GameStageIncreaseOverPlayerLevel);
	bool TestRegionGameStage(bool bDefaultGameStage, int* GameStage, int* AwesomeLevel);
	bool GetRegionGameStage(bool bDefaultGameStage, int* GameStage, int* AwesomeLevel);
};


// Class GearboxFramework.RootMotionDefinition
// 0x0008 (0x003C - 0x0044)
class URootMotionDefinition : public UGBXDefinition
{
public:
	unsigned char                                      RootMotionMode;                                           // 0x003C(0x0001) (Edit, Const)
	unsigned char                                      RootBoneOption[0x3];                                      // 0x003D(0x0001) (Edit, Const)
	unsigned char                                      RootRotationMode;                                         // 0x0040(0x0001) (Edit, Const)
	unsigned char                                      RootRotationOption[0x3];                                  // 0x0041(0x0001) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("RootMotionDefinition");
		return ptr;
	}

};


// Class GearboxFramework.RuleEngineLoadBalanceManager
// 0x0034 (0x003C - 0x0070)
class URuleEngineLoadBalanceManager : public UObject
{
public:
	float                                              NumTimeSpentThisFrame;                                    // 0x003C(0x0004)
	float                                              LastTimeFullUpdate;                                       // 0x0040(0x0004)
	TArray<struct FRuleEngineLoadBalanceStruct>        WaitingEngines;                                           // 0x0044(0x000C) (NeedCtorLink)
	TArray<struct FDebugLoadBalance>                   DebugEngines;                                             // 0x0050(0x000C) (Transient, NeedCtorLink)
	TArray<struct FRELBManagerStats>                   ManagerStats;                                             // 0x005C(0x000C) (Transient, NeedCtorLink)
	unsigned long                                      bIsDebugging : 1;                                         // 0x0068(0x0004)
	int                                                MSPosition;                                               // 0x006C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("RuleEngineLoadBalanceManager");
		return ptr;
	}


	void SetAsDebugging(bool bSetDebugging);
};


// Class GearboxFramework.ScreenSpaceManager
// 0x0058 (0x003C - 0x0094)
class UScreenSpaceManager : public UObject
{
public:
	class ULocalPlayer*                                pLocalPlayer;                                             // 0x003C(0x0004)
	int                                                ViewWidth;                                                // 0x0040(0x0004)
	int                                                ViewHeight;                                               // 0x0044(0x0004)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	struct FMatrix                                     ViewProjectionMatrix;                                     // 0x0050(0x0040)
	unsigned long                                      bMatricesUpToDate : 1;                                    // 0x0090(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ScreenSpaceManager");
		return ptr;
	}

};


// Class GearboxFramework.SeqAct_AllPlayersInVolume
// 0x0010 (0x00A4 - 0x00B4)
class USeqAct_AllPlayersInVolume : public USequenceAction
{
public:
	TArray<class AVolume*>                             Volumes;                                                  // 0x00A4(0x000C) (Edit, NeedCtorLink)
	unsigned long                                      bAllActorsInVolumes : 1;                                  // 0x00B0(0x0004)
	unsigned long                                      bCheckForAllPlayers : 1;                                  // 0x00B0(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SeqAct_AllPlayersInVolume");
		return ptr;
	}


	bool AllPlayersInVolumes();
	bool PlayerIsInAVolume(class APlayerController* PC);
};


// Class GearboxFramework.SeqCond_CompareLocation
// 0x0004 (0x008C - 0x0090)
class USeqCond_CompareLocation : public USequenceCondition
{
public:
	float                                              CheckRadius;                                              // 0x008C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SeqCond_CompareLocation");
		return ptr;
	}

};


// Class GearboxFramework.SeqCond_CompareString
// 0x0004 (0x008C - 0x0090)
class USeqCond_CompareString : public USequenceCondition
{
public:
	unsigned long                                      bCaseSensitive : 1;                                       // 0x008C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SeqCond_CompareString");
		return ptr;
	}

};


// Class GearboxFramework.SeqCond_GetLanguage
// 0x000C (0x008C - 0x0098)
class USeqCond_GetLanguage : public USequenceCondition
{
public:
	TArray<struct FString>                             LangList;                                                 // 0x008C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SeqCond_GetLanguage");
		return ptr;
	}

};


// Class GearboxFramework.SimpleMathValueResolver
// 0x0024 (0x003C - 0x0060)
class USimpleMathValueResolver : public UAttributeValueResolver
{
public:
	unsigned char                                      Arg1Option;                                               // 0x003C(0x0001) (Edit)
	unsigned char                                      Operand;                                                  // 0x003D(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
	struct FAttributeInitializationData                Arg1Attribute;                                            // 0x0040(0x0010) (Edit)
	struct FAttributeInitializationData                Argument;                                                 // 0x0050(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SimpleMathValueResolver");
		return ptr;
	}

};


// Class GearboxFramework.SpecialMoveDefinition
// 0x000C (0x003C - 0x0048)
class USpecialMoveDefinition : public UGBXDefinition
{
public:
	class USpecialMoveDefinition*                      NextSpecialMove;                                          // 0x003C(0x0004) (Edit)
	class UExpressionEvaluator*                        StopExpression;                                           // 0x0040(0x0004) (Edit, Const, EditInline)
	unsigned long                                      bOwnerAlwaysRelevant : 1;                                 // 0x0044(0x0004) (Edit)
	unsigned long                                      bClientHasAuthority : 1;                                  // 0x0044(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SpecialMoveDefinition");
		return ptr;
	}


	bool IsPlayingLocally(const FScriptInterface& SMI);
	class USpecialMoveDefinition* GetSMDToPlay(const FScriptInterface& SMI);
	bool Contains(class USpecialMoveDefinition* SMD, const FScriptInterface& SMI);
	void ClientFinished(const FScriptInterface& SMI, bool bInterrupted);
	void ServerFinished(const FScriptInterface& SMI, bool bInterrupted);
	float ClientStarted(const FScriptInterface& SMI, struct FSpecialMoveData* SMData);
	void ServerStarted(const FScriptInterface& SMI);
	bool IsLocalAuthority(const FScriptInterface& SMI);
	bool AuthorityCanPlay(const FScriptInterface& SMI);
};


// Class GearboxFramework.SpecialMoveComponent
// 0x003F (0x0059 - 0x0098)
class USpecialMoveComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	unsigned long                                      bLocalPlay : 1;                                           // 0x005C(0x0004) (Transient)
	float                                              StartTime;                                                // 0x0060(0x0004) (Transient)
	FScriptInterface                                   SMI;                                                      // 0x0064(0x0008) (Transient)
	struct FSpecialMoveData                            CurrentSMData;                                            // 0x006C(0x001C) (Transient)
	TArray<struct FSpecialMoveData>                    SMDQueue;                                                 // 0x0088(0x000C) (Transient, NeedCtorLink)
	class UAnimNodeSpecialMoveBlend*                   SMBlendNode;                                              // 0x0094(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SpecialMoveComponent");
		return ptr;
	}


	bool IsOwnerAlwaysNetRelevant();
	bool CanPlayBehaviorData(struct FSMBehavior* Data);
	void RunBehaviors(TArray<struct FSMBehavior>* SMBehaviors);
	class USpecialMoveDefinition* GetCurrent();
	float GetPlayRateScale();
	float GetDuration();
	class UObject* GetData();
	void LocalAnimFinished(class USpecialMoveDefinition* SMD, bool bInterrupted, struct FSpecialMoveData* SMData);
	void ClearQueue();
	void StopAnyLocal(const struct FName& SMNodeName, bool bInterrupted, class USkeletalMeshComponent* MeshComp);
	void StopLocal(class USpecialMoveDefinition* OldSMD, bool bInterrupted);
	void StopAny(bool bClearQueue, bool bInterrupted);
	void Stop(class USpecialMoveDefinition* OldSMD, bool bClearQueue, bool bInterrupted);
	float PlayLocal(class USpecialMoveDefinition* NewSMD, float PlayRateScale, float Duration, const struct FName& CallbackName, class UObject* CallbackObject, class UObject* Data);
	void Queue(class USpecialMoveDefinition* NewSMD, float PlayRateScale, float Duration, const struct FName& CallbackName, class UObject* CallbackObject, class UObject* Data);
	float Play(class USpecialMoveDefinition* NewSMD, float PlayRateScale, float Duration, const struct FName& CallbackName, class UObject* CallbackObject, class UObject* Data);
	void RemoveFromQueue(class USpecialMoveDefinition* SMD);
	bool IsQueued(class USpecialMoveDefinition* SMD);
	bool IsPlayingClass(class UClass* SMClass);
	bool IsPlayingAny();
	bool IsPlaying(class USpecialMoveDefinition* SMD);
	struct FVector GetAnimDelta(class UGearboxAnimDefinition* CustomAnimSMD);
	class UAnimNodeSpecialMoveBlend* GetSMNode();
	void PlayReplicated(const struct FReplicatedSpecialMoveData& NewSMData);
	float GetAnimLength(class UGearboxAnimDefinition* CustomAnimSMD, bool bIncludeNextSMD, class USkeletalMeshComponent* SMC);
};


// Class GearboxFramework.SpecialMoveExpressionList
// 0x000C (0x0048 - 0x0054)
class USpecialMoveExpressionList : public USpecialMoveDefinition
{
public:
	TArray<struct FSMExpressionList>                   SpecialMoveList;                                          // 0x0048(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SpecialMoveExpressionList");
		return ptr;
	}


	bool Contains(class USpecialMoveDefinition* SMD, const FScriptInterface& SMI);
	class USpecialMoveDefinition* GetSMDToPlay(const FScriptInterface& SMI);
};


// Class GearboxFramework.SpecialMoveRandom
// 0x000C (0x0048 - 0x0054)
class USpecialMoveRandom : public USpecialMoveDefinition
{
public:
	TArray<struct FSMRandomPair>                       RandomList;                                               // 0x0048(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SpecialMoveRandom");
		return ptr;
	}


	bool Contains(class USpecialMoveDefinition* SMD, const FScriptInterface& SMI);
	class USpecialMoveDefinition* GetSMDToPlay(const FScriptInterface& SMI);
};


// Class GearboxFramework.StateAttributeResolver
// 0x0008 (0x003C - 0x0044)
class UStateAttributeResolver : public UAttributeValueResolver
{
public:
	struct FName                                       NameKey;                                                  // 0x003C(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("StateAttributeResolver");
		return ptr;
	}

};


// Class GearboxFramework.TimeValueResolver
// 0x0028 (0x003C - 0x0064)
class UTimeValueResolver : public UAttributeValueResolver
{
public:
	unsigned char                                      TimeMode;                                                 // 0x003C(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	unsigned long                                      bNormalizeTime : 1;                                       // 0x0040(0x0004) (Edit, Const)
	struct FAttributeInitializationData                StartTime;                                                // 0x0044(0x0010) (Edit, Const)
	struct FAttributeInitializationData                TotalTime;                                                // 0x0054(0x0010) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("TimeValueResolver");
		return ptr;
	}

};


// Class GearboxFramework.WireManager
// 0x0004 (0x0188 - 0x018C)
class AWireManager : public AActor
{
public:
	class UMaterialInterface*                          DefaultMaterial;                                          // 0x0188(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WireManager");
		return ptr;
	}

};


// Class GearboxFramework.WireTerminal
// 0x0018 (0x0190 - 0x01A8)
class AWireTerminal : public AStaticMeshActor
{
public:
	class AWireTerminal*                               NextTerminal;                                             // 0x0190(0x0004) (Edit)
	TArray<struct FWireLinkage>                        Linkages;                                                 // 0x0194(0x000C) (Edit, NeedCtorLink)
	class UMaterialInterface*                          WireMaterial;                                             // 0x01A0(0x0004) (Edit)
	unsigned long                                      bTerminalDirty : 1;                                       // 0x01A4(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WireTerminal");
		return ptr;
	}


	void Destroyed();
	void NotifyModifiedTerminal();
};


// Class GearboxFramework.WiringActor
// 0x0000 (0x0190 - 0x0190)
class AWiringActor : public AStaticMeshActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WiringActor");
		return ptr;
	}

};


// Class GearboxFramework.WiringMesh
// 0x0240 (0x0130 - 0x0370)
class UWiringMesh : public UStaticMesh
{
public:
	unsigned char                                      UnknownData00[0x240];                                     // 0x0130(0x0240) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WiringMesh");
		return ptr;
	}

};


// Class GearboxFramework.ActionResource
// 0x0000 (0x003C - 0x003C)
class UActionResource : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ActionResource");
		return ptr;
	}

};


// Class GearboxFramework.AIComponent
// 0x0093 (0x0059 - 0x00EC)
class UAIComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	float                                              UpdateRate;                                               // 0x005C(0x0004)
	FScriptInterface                                   AI;                                                       // 0x0060(0x0008) (Transient)
	unsigned long                                      bInitialized : 1;                                         // 0x0068(0x0004) (Transient)
	class UAIDefinition*                               AIDef;                                                    // 0x006C(0x0004) (Transient)
	float                                              LastStateUpdateTime;                                      // 0x0070(0x0004) (Transient)
	struct FPointer                                    CurrentState;                                             // 0x0074(0x0004) (Const, Native)
	TArray<struct FAIResourceData>                     ResourceData;                                             // 0x0078(0x000C) (Transient, NeedCtorLink)
	class AActor*                                      CurrentTarget;                                            // 0x0084(0x0004) (Transient)
	class AActor*                                      ScriptedTarget;                                           // 0x0088(0x0004) (Transient)
	float                                              LastTargetUpdateTime;                                     // 0x008C(0x0004) (Transient)
	TArray<class UMindTargetInfo*>                     Targets;                                                  // 0x0090(0x000C) (Transient, NeedCtorLink)
	class UTargetingDefinition*                        TargetingDef;                                             // 0x009C(0x0004) (Transient)
	class UClass*                                      MindTargetInfoClass;                                      // 0x00A0(0x0004) (Const)
	TArray<struct FAIHoldData>                         Holds;                                                    // 0x00A4(0x000C) (Transient, NeedCtorLink)
	TArray<struct FAIHoldData>                         TargetHolds;                                              // 0x00B0(0x000C) (Transient, NeedCtorLink)
	TArray<struct FAIHoldData>                         MovementHolds;                                            // 0x00BC(0x000C) (Transient, NeedCtorLink)
	TArray<struct FAIHoldData>                         DemigodHolds;                                             // 0x00C8(0x000C) (Transient, NeedCtorLink)
	TArray<struct FAIHoldData>                         GodHolds;                                                 // 0x00D4(0x000C) (Transient, NeedCtorLink)
	TArray<struct FAIHoldData>                         DialogHolds;                                              // 0x00E0(0x000C) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AIComponent");
		return ptr;
	}


	static float GetAIRangeTime(const struct FAIRange& InRange);
	void DrawAITree(class UCanvas* Canvas);
	void LogDemigodHolds();
	void ReleaseDialog(const struct FName& HoldName, class UObject* Tag);
	void HoldDialog(const struct FName& HoldName, class UObject* Tag);
	bool DialogOnHold();
	void ReleaseGod(const struct FName& HoldName, class UObject* Tag);
	void HoldGod(const struct FName& HoldName, class UObject* Tag);
	bool GodOnHold();
	void ReleaseDemigod(const struct FName& HoldName, class UObject* Tag);
	void HoldDemigod(const struct FName& HoldName, class UObject* Tag);
	bool DemigodOnHold();
	void ReleaseMovement(const struct FName& HoldName, class UObject* Tag);
	void HoldMovement(const struct FName& HoldName, class UObject* Tag);
	bool MovementOnHold();
	void ReleaseTarget(const struct FName& HoldName, class UObject* Tag);
	void HoldTarget(const struct FName& HoldName, class UObject* Tag);
	bool TargetOnHold();
	void Release(const struct FName& HoldName, class UObject* Tag);
	void Hold(const struct FName& HoldName, class UObject* Tag);
	bool OnHold();
	void ForceUpdateTargets();
	void TargetChanged(class AActor* OldTarget, class AActor* NewTarget);
	void SetTarget(class AActor* NewTarget);
	void SetScriptedTarget(class AActor* NewScriptedTarget);
	class UMindTargetInfo* GetTargetRecordFor(class AActor* Target, bool bTryParent);
	class UMindTargetInfo* GetTargetRecord(bool bTryParent);
	bool IsTarget(class AActor* TestTarget);
	class AActor* GetTarget();
	bool HasTarget();
	bool ShouldRemoveTarget(class UMindTargetInfo* TargetRec);
	void TargetRemoved(class UMindTargetInfo* TargetRec);
	void ForceRemoveTarget(class AActor* Target);
	bool ValidCurrentTarget(class UMindTargetInfo* TargetRec);
	bool ValidTarget(class AActor* Target);
	void PrioritizeTarget(class UMindTargetInfo* TargetRec);
	void CalcTargetInfo(class UMindTargetInfo* TargetRec);
	void ChooseBestTarget();
	void InheritTargets(class UAIComponent* Parent);
	void RemoveTargets();
	void FindTargets();
	void GetTargets();
	void InitializeTargetRecord(class UMindTargetInfo* TargetRec);
	void NotifyAttackedBy(class AActor* Attacker);
	class UMindTargetInfo* AddTarget(class AActor* NewTarget);
	class UAIComponent* GetParentComponent();
	class UPawnAllegiance* GetAllegiance();
	void ClearState();
	bool ActivateEvent(const struct FName& EventName);
};


// Class GearboxFramework.FlagDefinition
// 0x0014 (0x003C - 0x0050)
class UFlagDefinition : public UGBXDefinition
{
public:
	class UExpressionEvaluator*                        EvaluationExpression;                                     // 0x003C(0x0004) (Edit, Const, EditInline)
	TArray<class UAttributeContextResolver*>           ContextResolverChain;                                     // 0x0040(0x000C) (Edit, Const, NeedCtorLink, EditInline)
	class UFlagValueResolver*                          ValueResolver;                                            // 0x004C(0x0004) (Edit, Const, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("FlagDefinition");
		return ptr;
	}


	static void ApplyFlagInitializationData(class UObject* ContextSource, TArray<struct FFlagDefinitionInitialization>* FlagsToSet);
	class UObject* ResolveContext(class UObject* ContextSource);
	bool SetTrueTimed(class UObject* ContextSource, float TimeSeconds);
	bool SetValue(class UObject* ContextSource, bool Value);
};


// Class GearboxFramework.ActionSequence
// 0x006C (0x003C - 0x00A8)
class UActionSequence : public UObject
{
public:
	TArray<class UClass*>                              ResourcesUsed;                                            // 0x003C(0x000C) (Edit, Const, NeedCtorLink)
	class URuleEngine*                                 MyRuleEngine;                                             // 0x0048(0x0004) (Transient)
	class URule*                                       AttachedRule;                                             // 0x004C(0x0004) (Transient)
	float                                              LatentFloat;                                              // 0x0050(0x0004) (Transient)
	unsigned long                                      bInitialized : 1;                                         // 0x0054(0x0004) (Transient)
	unsigned long                                      bDoWorkFinished : 1;                                      // 0x0054(0x0004) (Transient)
	unsigned long                                      bInAtomicSection : 1;                                     // 0x0054(0x0004) (Transient)
	unsigned long                                      bDoNotLoadBalance : 1;                                    // 0x0054(0x0004) (Edit)
	class UActionSequence*                             ParentSequence;                                           // 0x0058(0x0004) (Transient)
	class UActionSequence*                             ChildSequence;                                            // 0x005C(0x0004) (Transient)
	class UAIFactoryBase*                              TheAIFactory;                                             // 0x0060(0x0004) (Transient)
	struct FString                                     ContextMenu;                                              // 0x0064(0x000C) (NeedCtorLink)
	float                                              StoredDeltaTime;                                          // 0x0070(0x0004)
	TArray<struct FFlagDefinitionInitialization>       FlagValuesToSetOnBegin;                                   // 0x0074(0x000C) (Edit, Const, NeedCtorLink)
	TArray<struct FFlagDefinitionInitialization>       FlagValuesToSetOnEnd;                                     // 0x0080(0x000C) (Edit, Const, NeedCtorLink)
	FScriptInterface                                   AI;                                                       // 0x008C(0x0008)
	TArray<struct FName>                               BehaviorOutputs;                                          // 0x0094(0x000C) (Const, NeedCtorLink)
	struct FName                                       BehaviorName;                                             // 0x00A0(0x0008) (Const, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ActionSequence");
		return ptr;
	}


	void TriggerBehavior(const struct FName& OutputName);
	float GetRangeValue(struct FAIRange* Range);
	bool RangeIsValid(struct FAIRange* Range);
	void Finish(bool bFailed);
	bool IsRunning();
	void ScriptCleanUp();
	struct FName CanRun();
	void ActivateEvent(const struct FName& EventName);
	void Update();
	void Init();
	void Stop();
	void Start();
	void InterruptSequence(class UActionSequence* InterruptingSequence);
	void StopSequence();
	void StartSequence();
	void ExecuteSequence(class UActionSequence* SequenceTemplate);
	void Sleep(float Seconds);
	void RunSubSequence(class UActionSequence* SubSequence);
	void InterruptLatentAction();
	void DoRuleSetPop();
	bool DoRuleSetPush(class URuleSet* NewRuleSet);
	void DoRuleSetSwitch(class URuleSet* NewRuleSet);
	void PreventNewRulesFromStarting();
	class URule* GetRuleNative();
	void GetActionSequence(class UActionSequence* Template, class UActionSequence** OutSequence);
	bool IsInLabel(const struct FName& TestLabel);
	bool IsAtomic();
	void StopAtomic();
	void StartAtomic();
	bool IsActionReadyToFinish();
};


// Class GearboxFramework.ActionSequenceList
// 0x0004 (0x00A8 - 0x00AC)
class UActionSequenceList : public UActionSequence
{
public:
	int                                                CurrentIndex;                                             // 0x00A8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ActionSequenceList");
		return ptr;
	}


	bool IsActionReadyToFinish();
};


// Class GearboxFramework.ActionSequencePawn
// 0x0008 (0x00A8 - 0x00B0)
class UActionSequencePawn : public UActionSequence
{
public:
	class AGearboxMind*                                MyGearboxMind;                                            // 0x00A8(0x0004)
	class AGearboxPawn*                                MyGearboxPawn;                                            // 0x00AC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ActionSequencePawn");
		return ptr;
	}

};


// Class GearboxFramework.Action_PawnMovementBase
// 0x00A0 (0x00B0 - 0x0150)
class UAction_PawnMovementBase : public UActionSequencePawn
{
public:
	struct FVector                                     CachedSearchOrigin;                                       // 0x00B0(0x000C)
	struct FFlag                                       CoverCheckThrottle;                                       // 0x00BC(0x0010)
	float                                              CoverCheckThrottleInterval;                               // 0x00CC(0x0004) (Const)
	unsigned long                                      ShouldRepeatNavSearch : 1;                                // 0x00D0(0x0004)
	unsigned long                                      Interrupted : 1;                                          // 0x00D0(0x0004) (Transient)
	unsigned long                                      GoToCover : 1;                                            // 0x00D0(0x0004) (Edit)
	unsigned long                                      UsePreciseArrival : 1;                                    // 0x00D0(0x0004) (Edit)
	struct FVector                                     NewGoalLocation;                                          // 0x00D4(0x000C) (Transient)
	class UPawnMoveLocationRequest*                    OneMoveRequest;                                           // 0x00E0(0x0004) (Transient)
	class UClass*                                      MoveRequestClass;                                         // 0x00E4(0x0004) (Const)
	TArray<struct FAttributeInitializationData>        AttributesToEvaluate;                                     // 0x00E8(0x000C) (Edit, NeedCtorLink)
	unsigned char                                      AttributeEvalStyle;                                       // 0x00F4(0x0001) (Edit)
	unsigned char                                      SearchRandomness;                                         // 0x00F5(0x0001) (Edit)
	unsigned char                                      CoverSearchFilter;                                        // 0x00F6(0x0001) (Edit)
	unsigned char                                      CoverFailureResponse;                                     // 0x00F7(0x0001) (Edit)
	unsigned char                                      RepathOption;                                             // 0x00F8(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F9(0x0003) MISSED OFFSET
	class USearchOrigin*                               SearchOrigin;                                             // 0x00FC(0x0004) (Edit, EditInline)
	class USearchDirection*                            DirectionFromOrigin;                                      // 0x0100(0x0004) (Edit, EditInline)
	float                                              DirectionCone;                                            // 0x0104(0x0004) (Edit)
	class ULocationFilter*                             LocationFilterTest;                                       // 0x0108(0x0004) (Edit, EditInline)
	struct FAttributeInitializationData                MinDistanceFromOrigin;                                    // 0x010C(0x0010) (Edit)
	struct FAttributeInitializationData                MaxDistanceFromOrigin;                                    // 0x011C(0x0010) (Edit)
	struct FAttributeInitializationData                OverrideDistanceForCover;                                 // 0x012C(0x0010) (Edit)
	struct FAttributeInitializationData                RepathDistanceThresh;                                     // 0x013C(0x0010) (Edit)
	class URuleEventDef*                               FailureEvent;                                             // 0x014C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Action_PawnMovementBase");
		return ptr;
	}


	void PostMovement();
	void PreMovement();
	void PrePathFind();
	void InterruptSequence(class UActionSequence* InterruptingSequence);
	void StopSequence();
	void StartSequence();
	void MovePawnToDestinationLocation(const struct FVector& GoalLocation, bool NewUsePreciseArrival);
	void TakeDebugSnapshotMoveFailure(unsigned char Cause);
	void SetMaxMovementSpeed(unsigned char NewMaxSpeed);
	void EndMovePawnToDestinationLocation();
};


// Class GearboxFramework.ActionSequenceRandom
// 0x000C (0x00A8 - 0x00B4)
class UActionSequenceRandom : public UActionSequence
{
public:
	TArray<struct FActionSequenceRandomData>           ActionList;                                               // 0x00A8(0x000C) (Edit, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ActionSequenceRandom");
		return ptr;
	}


	void EvaluateActionList();
	void OverrideNextSequenceToRun(class UActionSequence* NewSequence);
	class UActionSequence* GetRandomAction();
};


// Class GearboxFramework.AICostExpressionEvaluator
// 0x0008 (0x003C - 0x0044)
class UAICostExpressionEvaluator : public UExpressionEvaluator
{
public:
	int                                                Multiplier;                                               // 0x003C(0x0004) (Edit)
	class UPopulationDefinition*                       PopDef;                                                   // 0x0040(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AICostExpressionEvaluator");
		return ptr;
	}


	bool Evaluate(class UObject* ContextSource);
};


// Class GearboxFramework.AIFactoryBase
// 0x004C (0x003C - 0x0088)
class UAIFactoryBase : public UObject
{
public:
	TArray<struct FKnowledgeRecordStruct>              KnowledgeRecordList;                                      // 0x003C(0x000C) (NeedCtorLink)
	TArray<struct FRuleSetRecord>                      RuleSets;                                                 // 0x0048(0x000C) (NeedCtorLink)
	TArray<struct FRuleRecord>                         Rules;                                                    // 0x0054(0x000C) (NeedCtorLink)
	TArray<struct FActionSequenceRecord>               ActionSequences;                                          // 0x0060(0x000C) (NeedCtorLink)
	TArray<struct FTargetInfoRecord>                   TargetRecords;                                            // 0x006C(0x000C) (NeedCtorLink)
	TArray<struct FAIDefinitionRecord>                 AIDefinitionRecords;                                      // 0x0078(0x000C) (NeedCtorLink)
	float                                              TimeStampedRecordLifetime;                                // 0x0084(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AIFactoryBase");
		return ptr;
	}


	void FlushPools();
	void ReturnAIDef(class UAIDefinition** InAIDef);
	bool GetAIDef(class UAIDefinition* AIDefTemplate, class UAIDefinition** OutAIDef);
	void ReturnTargetRecord(class UMindTargetInfo** InTargetRecord);
	bool GetTargetRecord(class UClass* InfoClass, class UMindTargetInfo** OutTargetRecord);
	void ReturnActionSequence(class UActionSequence** InSequence);
	bool GetActionSequence(class UActionSequence* SequenceTemplate, class UActionSequence** OutSequence);
	void ReturnRuleSet(class URuleSet** InRuleSet);
	bool GetRuleSetFromArchetype(class URuleSet* RuleSetArchetype, class URuleSet** OutRuleSet, TArray<class URule*>* CurRunningRules);
	void ReturnKnowledgeRecord(class UKnowledgeRecord** InKR);
	bool GetKnowledgeRecordListFromArchetypes(TArray<class UKnowledgeRecord*> KnowledgeRecordTemplates, TArray<class UKnowledgeRecord*>* KnowledgeRecords);
	bool GetKnowledgeRecordFromArchetype(class UKnowledgeRecord* InKR, class UKnowledgeRecord** OutKR);
	bool GetKnowledgeRecord(class UClass* KnowledgeRecordClass, class UKnowledgeRecord** OutKR);
	void ReturnRule(class URule** InRule);
	bool GetRuleFromArchetype(class URule* InRule, class URule** OutRule);
	bool GetRule(class UClass* RuleClass, class URule** OutRule);
	void ReturnRuleEngine(class URuleEngine* InRuleEngine);
};


// Class GearboxFramework.GearboxAIFactory
// 0x0000 (0x0088 - 0x0088)
class UGearboxAIFactory : public UAIFactoryBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxAIFactory");
		return ptr;
	}


	void FreeRuleEngine(class URuleEngine* InRuleEngine);
	bool GetRuleEngineFromTemplate(class URuleEngine* RuleEngineTemplate, class URuleEngine** OutRuleEngine);
};


// Class GearboxFramework.AIResource
// 0x0014 (0x003C - 0x0050)
class UAIResource : public UGBXDefinition
{
public:
	TArray<struct FAIResourceRestriction>              ResourceRestrictions;                                     // 0x003C(0x000C) (Edit, Const, NeedCtorLink)
	int                                                MaxUsers;                                                 // 0x0048(0x0004) (Edit, Const)
	int                                                MinUsers;                                                 // 0x004C(0x0004) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AIResource");
		return ptr;
	}

};


// Class GearboxFramework.AIResourceExpressionEvaluator
// 0x0008 (0x003C - 0x0044)
class UAIResourceExpressionEvaluator : public UExpressionEvaluator
{
public:
	unsigned char                                      Option;                                                   // 0x003C(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	class UAIResource*                                 Resource;                                                 // 0x0040(0x0004) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AIResourceExpressionEvaluator");
		return ptr;
	}


	bool Evaluate(class UObject* ContextSource);
};


// Class GearboxFramework.AllegianceExpressionEvaluator
// 0x0008 (0x003C - 0x0044)
class UAllegianceExpressionEvaluator : public UExpressionEvaluator
{
public:
	unsigned char                                      AllegianceCheck;                                          // 0x003C(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	class UPawnAllegiance*                             Allegiance;                                               // 0x0040(0x0004) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AllegianceExpressionEvaluator");
		return ptr;
	}


	bool Evaluate(class UObject* ContextSource);
};


// Class GearboxFramework.AwarenessZoneCollectionDefinition
// 0x0014 (0x003C - 0x0050)
class UAwarenessZoneCollectionDefinition : public UGBXDefinition
{
public:
	TArray<class UAwarenessZoneDefinition*>            DefaultAwarenessZones;                                    // 0x003C(0x000C) (Edit, NeedCtorLink)
	struct FName                                       CollectionName;                                           // 0x0048(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AwarenessZoneCollectionDefinition");
		return ptr;
	}

};


// Class GearboxFramework.AwarenessZoneDefinition
// 0x0030 (0x003C - 0x006C)
class UAwarenessZoneDefinition : public UGBXDefinition
{
public:
	struct FString                                     ZoneName;                                                 // 0x003C(0x000C) (Edit, NeedCtorLink)
	unsigned long                                      OuterRimInfinitelyFarAway : 1;                            // 0x0048(0x0004) (Edit)
	unsigned long                                      ViewConeOnlyUsedForUnknownTargets : 1;                    // 0x0048(0x0004) (Edit)
	unsigned long                                      NeverForgetHiddenThreats : 1;                             // 0x0048(0x0004) (Edit)
	float                                              OuterRimDistance;                                         // 0x004C(0x0004) (Edit)
	unsigned char                                      ViewConeStyle;                                            // 0x0050(0x0001) (Edit)
	unsigned char                                      SpecialExposureBehavior;                                  // 0x0051(0x0001) (Edit)
	unsigned char                                      HearingBehavior;                                          // 0x0052(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0053(0x0001) MISSED OFFSET
	float                                              ViewConeFieldOfViewInDegrees;                             // 0x0054(0x0004) (Edit)
	float                                              MinExposureRatingConsideredVisible;                       // 0x0058(0x0004) (Edit)
	float                                              ForgetHiddenThreatsAfterXSeconds;                         // 0x005C(0x0004) (Edit)
	float                                              TargetSelectionPriority;                                  // 0x0060(0x0004) (Edit)
	struct FColor                                      ZoneColor;                                                // 0x0064(0x0004) (Edit)
	float                                              TimeFiringAtLastKnownLocation;                            // 0x0068(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AwarenessZoneDefinition");
		return ptr;
	}

};


// Class GearboxFramework.GbxMessage
// 0x00D8 (0x003C - 0x0114)
class UGbxMessage : public UObject
{
public:
	class UGbxMessageDefinition*                       Definition;                                               // 0x003C(0x0004)
	struct FName                                       NameKey;                                                  // 0x0040(0x0008)
	class UObject*                                     Sender;                                                   // 0x0048(0x0004)
	class UObject*                                     Subject;                                                  // 0x004C(0x0004)
	class UObject*                                     AdditionalData;                                           // 0x0050(0x0004)
	struct FGbxMessageSimpleMetaData                   SimpleMetaData;                                           // 0x0054(0x001C)
	struct FGbxMessageSimpleMetaData                   SimpleMetaData2;                                          // 0x0070(0x001C)
	struct FGbxMessageSimpleMetaData                   SimpleMetaData3;                                          // 0x008C(0x001C)
	struct FGbxMessageSimpleMetaData                   SimpleMetaData4;                                          // 0x00A8(0x001C)
	class UPawnAllegiance*                             SenderAllegiance;                                         // 0x00C4(0x0004)
	class UPawnAllegiance*                             SubjectAllegiance;                                        // 0x00C8(0x0004)
	unsigned long                                      IntendedForAllies : 1;                                    // 0x00CC(0x0004)
	unsigned long                                      IntendedForEnemies : 1;                                   // 0x00CC(0x0004)
	unsigned long                                      HasLocation : 1;                                          // 0x00CC(0x0004)
	unsigned long                                      HasRadius : 1;                                            // 0x00CC(0x0004)
	unsigned long                                      SendRepeatedly : 1;                                       // 0x00CC(0x0004)
	struct FVector                                     MessageLocation;                                          // 0x00D0(0x000C)
	float                                              BroadcastRadius;                                          // 0x00DC(0x0004)
	float                                              DeliverTime;                                              // 0x00E0(0x0004)
	float                                              TimePosted;                                               // 0x00E4(0x0004)
	float                                              TimeSent;                                                 // 0x00E8(0x0004)
	struct FFlag                                       DoNotSendRightNow;                                        // 0x00EC(0x0010)
	int                                                StopSendingAfterXReceptions;                              // 0x00FC(0x0004)
	float                                              MaxDurationToSend;                                        // 0x0100(0x0004)
	float                                              TimeBetweenSends;                                         // 0x0104(0x0004)
	TArray<unsigned char>                              DupeCriteria;                                             // 0x0108(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GbxMessage");
		return ptr;
	}


	void InitializeFromDefinition(class UGbxMessageDefinition* InDefinition, class UObject* RadiusContextSource, class UObject* InSender, class UObject* InSubject, class UPawnAllegiance* ManualSenderAllegiance);
};


// Class GearboxFramework.Behavior_SendGbxMessage
// 0x0024 (0x004C - 0x0070)
class UBehavior_SendGbxMessage : public UBehaviorBase
{
public:
	class UGbxMessageDefinition*                       MessageDefinition;                                        // 0x004C(0x0004) (Edit)
	unsigned char                                      AssignSenderTo;                                           // 0x0050(0x0001) (Edit)
	unsigned char                                      AssignSubjectTo;                                          // 0x0051(0x0001) (Edit)
	unsigned char                                      TakeLocationFrom;                                         // 0x0052(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0053(0x0001) MISSED OFFSET
	struct FGbxMessageSimpleMetaData                   MetaData;                                                 // 0x0054(0x001C) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Behavior_SendGbxMessage");
		return ptr;
	}


	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo);
	struct FVector GetLocation(unsigned char SelectionParam, class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject);
	class UObject* GetMessageParameter(unsigned char SelectionParam, class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject);
};


// Class GearboxFramework.Behavior_SetFlag
// 0x000C (0x004C - 0x0058)
class UBehavior_SetFlag : public UBehaviorBase
{
public:
	TArray<struct FFlagDefinitionInitialization>       FlagsToSet;                                               // 0x004C(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Behavior_SetFlag");
		return ptr;
	}


	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo);
};


// Class GearboxFramework.BestTargetAttributeContextResolver
// 0x0004 (0x003C - 0x0040)
class UBestTargetAttributeContextResolver : public UAttributeContextResolver
{
public:
	unsigned long                                      bGetTargetInfo : 1;                                       // 0x003C(0x0004) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BestTargetAttributeContextResolver");
		return ptr;
	}

};


// Class GearboxFramework.CharacterClassMessageDefinition
// 0x000C (0x003C - 0x0048)
class UCharacterClassMessageDefinition : public UGBXDefinition
{
public:
	TArray<struct FBehaviorTriggerMessageStruct>       BehaviorTriggers;                                         // 0x003C(0x000C) (Edit, Const, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("CharacterClassMessageDefinition");
		return ptr;
	}

};


// Class GearboxFramework.CoverSearchCriteria
// 0x003C (0x003C - 0x0078)
class UCoverSearchCriteria : public UGBXDefinition
{
public:
	unsigned long                                      DoDistanceToOriginCandidateTest : 1;                      // 0x003C(0x0004) (Edit)
	unsigned long                                      DoProvidesCoverCandidateTest : 1;                         // 0x003C(0x0004) (Edit)
	unsigned long                                      DoDistanceToThreatCandidateTest : 1;                      // 0x003C(0x0004) (Edit)
	unsigned long                                      DoVantageToBestTargetCandidateTest : 1;                   // 0x003C(0x0004) (Edit)
	unsigned long                                      DoVantageToAnyTargetCandidateTest : 1;                    // 0x003C(0x0004) (Edit)
	unsigned long                                      DoAssignmentVolumeCandidateTest : 1;                      // 0x003C(0x0004) (Edit)
	unsigned long                                      DoBlacklistedCoverCandidateTest : 1;                      // 0x003C(0x0004) (Edit)
	unsigned long                                      DoScoringForDistanceToOrigin : 1;                         // 0x003C(0x0004) (Edit)
	unsigned long                                      DoScoringForDistanceToThreat : 1;                         // 0x003C(0x0004) (Edit)
	unsigned long                                      DoScoringForProvidesCover : 1;                            // 0x003C(0x0004) (Edit)
	unsigned long                                      DoScoringForVantageOnBestTarget : 1;                      // 0x003C(0x0004) (Edit)
	unsigned long                                      DoScoringForVantageOnAnyTarget : 1;                       // 0x003C(0x0004) (Edit)
	unsigned long                                      DoScoringForUnoccupiedLink : 1;                           // 0x003C(0x0004) (Edit)
	unsigned long                                      DoScoringForNonBlacklistedCover : 1;                      // 0x003C(0x0004) (Edit)
	float                                              DistanceToOriginCandidateTestMax;                         // 0x0040(0x0004) (Edit)
	float                                              DistanceToThreatCandidateTest;                            // 0x0044(0x0004) (Edit)
	float                                              MinDistanceToOrigin;                                      // 0x0048(0x0004) (Edit)
	float                                              MaxDistanceToOrigin;                                      // 0x004C(0x0004) (Edit)
	float                                              ScoreDistanceToOrigin;                                    // 0x0050(0x0004) (Edit)
	float                                              MinDistanceToThreat;                                      // 0x0054(0x0004) (Edit)
	float                                              MaxDistanceToThreat;                                      // 0x0058(0x0004) (Edit)
	float                                              ScoreDistanceToThreat;                                    // 0x005C(0x0004) (Edit)
	float                                              MaxDistanceProvidesCover;                                 // 0x0060(0x0004) (Edit)
	float                                              ScoreProvidesCover;                                       // 0x0064(0x0004) (Edit)
	float                                              ScoreVantageOnBestTarget;                                 // 0x0068(0x0004) (Edit)
	float                                              ScoreVantageOnAnyTarget;                                  // 0x006C(0x0004) (Edit)
	float                                              ScoreUnoccupiedLink;                                      // 0x0070(0x0004) (Edit)
	float                                              ScoreNonBlacklistedCover;                                 // 0x0074(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("CoverSearchCriteria");
		return ptr;
	}

};


// Class GearboxFramework.ExposureUtilityBase
// 0x0008 (0x003C - 0x0044)
class UExposureUtilityBase : public UObject
{
public:
	unsigned long                                      ExposureEnabled : 1;                                      // 0x003C(0x0004) (Const)
	class UExposureUtilityStrategy*                    ExposureStrategy;                                         // 0x0040(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ExposureUtilityBase");
		return ptr;
	}


	float CalculateVantageToPoint(class AActor* pLooker, struct FVector* TargetPoint);
	float CalculateTargetExposure(class AGearboxPawn* pLooker, class AActor* pTarget);
};


// Class GearboxFramework.ExposureUtilityBasicCaching
// 0x0040 (0x0044 - 0x0084)
class UExposureUtilityBasicCaching : public UExposureUtilityBase
{
public:
	unsigned long                                      CachingEnabled : 1;                                       // 0x0044(0x0004) (Const)
	float                                              MaxCacheTime;                                             // 0x0048(0x0004) (Const)
	float                                              DistanceClose;                                            // 0x004C(0x0004) (Const)
	float                                              DistanceMed;                                              // 0x0050(0x0004) (Const)
	float                                              CacheFreshnessTimeClose;                                  // 0x0054(0x0004) (Const)
	float                                              CacheFreshnessTimeMed;                                    // 0x0058(0x0004) (Const)
	float                                              CacheFreshnessTimeFar;                                    // 0x005C(0x0004) (Const)
	float                                              CacheFreshnessTimePlayer;                                 // 0x0060(0x0004) (Const)
	float                                              CacheTimeFudgeFactorClose;                                // 0x0064(0x0004) (Const)
	float                                              CacheTimeFudgeFactorMed;                                  // 0x0068(0x0004) (Const)
	float                                              CacheTimeFudgeFactorFar;                                  // 0x006C(0x0004) (Const)
	float                                              HasMovedDistThreshold;                                    // 0x0070(0x0004) (Const)
	float                                              HasMovedDistThresholdPlayer;                              // 0x0074(0x0004) (Const)
	TArray<struct FExposureCacheStruct>                CachedExposures;                                          // 0x0078(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ExposureUtilityBasicCaching");
		return ptr;
	}

};


// Class GearboxFramework.ExposureUtilityFixedCost
// 0x0048 (0x0084 - 0x00CC)
class UExposureUtilityFixedCost : public UExposureUtilityBasicCaching
{
public:
	float                                              CloseDistanceSquared;                                     // 0x0084(0x0004) (Const)
	float                                              MedDistanceSquared;                                       // 0x0088(0x0004) (Const)
	int                                                MaxLineChecksPerFrame;                                    // 0x008C(0x0004) (Const)
	TArray<struct FBucketStruct>                       Buckets;                                                  // 0x0090(0x000C) (Transient, NeedCtorLink)
	float                                              MedAccumulatedTime;                                       // 0x009C(0x0004)
	float                                              FarAccumulatedTime;                                       // 0x00A0(0x0004)
	float                                              SkipUpdateForTime;                                        // 0x00A4(0x0004)
	int                                                MaxPointData;                                             // 0x00A8(0x0004)
	int                                                PointLineChecks;                                          // 0x00AC(0x0004)
	int                                                PointMaxLineChecks;                                       // 0x00B0(0x0004)
	float                                              PointFreshTime;                                           // 0x00B4(0x0004)
	float                                              PointStaleTime;                                           // 0x00B8(0x0004)
	float                                              PointMaxErrorSq;                                          // 0x00BC(0x0004)
	TArray<struct FPointExposureData>                  PointData;                                                // 0x00C0(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ExposureUtilityFixedCost");
		return ptr;
	}

};


// Class GearboxFramework.ExposureUtilityStrategy
// 0x0000 (0x003C - 0x003C)
class UExposureUtilityStrategy : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ExposureUtilityStrategy");
		return ptr;
	}

};


// Class GearboxFramework.FiringBehaviorDefinition
// 0x000C (0x003C - 0x0048)
class UFiringBehaviorDefinition : public UGBXDefinition
{
public:
	TArray<struct FConditionalPattern>                 ConditionalPatterns;                                      // 0x003C(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("FiringBehaviorDefinition");
		return ptr;
	}

};


// Class GearboxFramework.FiringBehaviorManager
// 0x0034 (0x003C - 0x0070)
class UFiringBehaviorManager : public UObject
{
public:
	class UFiringPattern*                              CurrentFiringPattern;                                     // 0x003C(0x0004) (Transient)
	float                                              CurrentTargetExposure;                                    // 0x0040(0x0004) (Transient)
	int                                                NumShotsThisBurst;                                        // 0x0044(0x0004)
	struct FVector                                     CachedTargetPoint;                                        // 0x0048(0x000C)
	unsigned long                                      bHasTargetPoint : 1;                                      // 0x0054(0x0004)
	unsigned long                                      bSetupWithZoneCollection : 1;                             // 0x0054(0x0004)
	class UFiringZoneCollectionDefinition*             CurrentZoneCollection;                                    // 0x0058(0x0004) (Transient)
	class UFiringZoneDefinition*                       CurrentZone;                                              // 0x005C(0x0004) (Transient)
	class UFiringBehaviorDefinition*                   CurrentBehavior;                                          // 0x0060(0x0004) (Transient)
	int                                                CurrentConditionalPattern;                                // 0x0064(0x0004)
	class UFiringBehaviorDefinition*                   DefaultFiringBehaviorDefinition;                          // 0x0068(0x0004) (Edit)
	class UFiringPattern*                              DefaultFiringPatternTemplate;                             // 0x006C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("FiringBehaviorManager");
		return ptr;
	}


	static class UClass* GetTemplateClass(class UObject* TemplateObject);
};


// Class GearboxFramework.FiringCondition
// 0x0000 (0x003C - 0x003C)
class UFiringCondition : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("FiringCondition");
		return ptr;
	}

};


// Class GearboxFramework.FireCond_IsPlayerTarget
// 0x0000 (0x003C - 0x003C)
class UFireCond_IsPlayerTarget : public UFiringCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("FireCond_IsPlayerTarget");
		return ptr;
	}

};


// Class GearboxFramework.FiringPattern
// 0x0004 (0x003C - 0x0040)
class UFiringPattern : public UObject
{
public:
	unsigned long                                      bIsHarmlessToPawns : 1;                                   // 0x003C(0x0004) (Edit)
	unsigned long                                      bAllowFakeShots : 1;                                      // 0x003C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("FiringPattern");
		return ptr;
	}

};


// Class GearboxFramework.FirePatt_Cone
// 0x0005 (0x0040 - 0x0045)
class UFirePatt_Cone : public UFiringPattern
{
public:
	float                                              ConeDegrees;                                              // 0x0040(0x0004) (Edit)
	unsigned char                                      ShotSpreadType;                                           // 0x0044(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("FirePatt_Cone");
		return ptr;
	}

};


// Class GearboxFramework.FirePatt_ShrinkingCone
// 0x0019 (0x0040 - 0x0059)
class UFirePatt_ShrinkingCone : public UFiringPattern
{
public:
	float                                              CurrentAccuracyConeDeg;                                   // 0x0040(0x0004)
	struct FRotator                                    LastDesiredAim;                                           // 0x0044(0x000C)
	float                                              MaxAccuracyConeDeg;                                       // 0x0050(0x0004) (Edit)
	float                                              ConeMultiplierPerShot;                                    // 0x0054(0x0004) (Edit)
	unsigned char                                      ShotSpreadType;                                           // 0x0058(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("FirePatt_ShrinkingCone");
		return ptr;
	}

};


// Class GearboxFramework.FirePatt_StrafeOver
// 0x0028 (0x0040 - 0x0068)
class UFirePatt_StrafeOver : public UFiringPattern
{
public:
	struct FRotator                                    CurrentAimRotation;                                       // 0x0040(0x000C)
	float                                              PitchDeltaPerShot;                                        // 0x004C(0x0004)
	float                                              MaxYawDeltaPerShot;                                       // 0x0050(0x0004)
	float                                              RefireRate;                                               // 0x0054(0x0004)
	float                                              LineOfShotsSpeed;                                         // 0x0058(0x0004) (Edit)
	float                                              LineOfShotsEndZ;                                          // 0x005C(0x0004) (Edit)
	float                                              YawDeltaRatio;                                            // 0x0060(0x0004) (Edit)
	float                                              TargetPosition;                                           // 0x0064(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("FirePatt_StrafeOver");
		return ptr;
	}

};


// Class GearboxFramework.FiringZoneCollectionDefinition
// 0x000C (0x003C - 0x0048)
class UFiringZoneCollectionDefinition : public UGBXDefinition
{
public:
	TArray<class UFiringZoneDefinition*>               Zones;                                                    // 0x003C(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("FiringZoneCollectionDefinition");
		return ptr;
	}


	class UFiringZoneDefinition* GetZoneForDistance(float Distance);
};


// Class GearboxFramework.FiringZoneDefinition
// 0x001C (0x003C - 0x0058)
class UFiringZoneDefinition : public UGBXDefinition
{
public:
	struct FString                                     ZoneName;                                                 // 0x003C(0x000C) (Edit, NeedCtorLink)
	unsigned long                                      OuterRimInfinitelyFarAway : 1;                            // 0x0048(0x0004) (Edit)
	float                                              OuterRimDistance;                                         // 0x004C(0x0004) (Edit)
	struct FColor                                      ZoneColor;                                                // 0x0050(0x0004) (Edit)
	class UFiringBehaviorDefinition*                   FiringBehavior;                                           // 0x0054(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("FiringZoneDefinition");
		return ptr;
	}

};


// Class GearboxFramework.Rule
// 0x00C0 (0x003C - 0x00FC)
class URule : public UObject
{
public:
	class URuleEngine*                                 MyRuleEngine;                                             // 0x003C(0x0004) (Transient)
	int                                                Priority;                                                 // 0x0040(0x0004)
	int                                                BasePriority;                                             // 0x0044(0x0004)
	class UActionSequence*                             StartingSequenceTemplate;                                 // 0x0048(0x0004) (Edit, Const, EditInline)
	unsigned long                                      RuleEnabled : 1;                                          // 0x004C(0x0004) (Edit, Const)
	unsigned long                                      StopWhenStateCodeRunsOut : 1;                             // 0x004C(0x0004) (Edit, Const)
	unsigned long                                      AlwaysExecute : 1;                                        // 0x004C(0x0004) (Edit, Const)
	unsigned long                                      bInitialized : 1;                                         // 0x004C(0x0004) (Transient)
	unsigned long                                      bIsRunning : 1;                                           // 0x004C(0x0004) (Transient)
	unsigned long                                      bCanRunMultipleInstances : 1;                             // 0x004C(0x0004)
	unsigned long                                      bIsTransferable : 1;                                      // 0x004C(0x0004) (Edit)
	unsigned long                                      bRestartable : 1;                                         // 0x004C(0x0004) (Edit)
	unsigned long                                      bBlockRuleSetChange : 1;                                  // 0x004C(0x0004) (Edit, Const)
	unsigned long                                      WasTransferred : 1;                                       // 0x004C(0x0004) (Transient)
	unsigned char                                      ExecutionPattern;                                         // 0x0050(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	struct FAttributeInitializationData                TimeToWaitBeforeFirstExecution;                           // 0x0054(0x0010) (Edit, Const)
	struct FAttributeInitializationData                TimeToWaitBeforeNextExecution;                            // 0x0064(0x0010) (Edit, Const)
	struct FAttributeInitializationData                MaxTimeToExecute;                                         // 0x0074(0x0010) (Edit, Const)
	int                                                MaxNumberOfExecutions;                                    // 0x0084(0x0004) (Edit, Const)
	TArray<struct FFlagEvalORConnector>                CanExecuteConditionals;                                   // 0x0088(0x000C) (Edit, Const, NeedCtorLink, EditInline)
	TArray<struct FFlagEvalORConnector>                ShouldStopConditionals;                                   // 0x0094(0x000C) (Edit, Const, NeedCtorLink, EditInline)
	class UExpressionEvaluator*                        CanExecuteExpression;                                     // 0x00A0(0x0004) (Edit, Const, EditInline)
	class UExpressionEvaluator*                        ShouldStopExpression;                                     // 0x00A4(0x0004) (Edit, Const, EditInline)
	class UActionSequence*                             MyActionSequence;                                         // 0x00A8(0x0004) (Transient)
	class UAIFactoryBase*                              TheAIFactory;                                             // 0x00AC(0x0004) (Transient)
	class URuleEventDef*                               MyRuleEventDef;                                           // 0x00B0(0x0004) (Edit, Const)
	TArray<class UClass*>                              AssociatedKnowledgeRecords;                               // 0x00B4(0x000C) (Const, NeedCtorLink)
	struct FString                                     FlagDebugString;                                          // 0x00C0(0x000C) (NeedCtorLink)
	struct FName                                       RuleName;                                                 // 0x00CC(0x0008)
	class UObject*                                     OtherEventParticipantObject;                              // 0x00D4(0x0004)
	struct FFlag                                       IsTimingRestrictedNow;                                    // 0x00D8(0x0010) (Transient)
	int                                                NumExecutions;                                            // 0x00E8(0x0004) (Transient)
	struct FString                                     RuleEventDefPath;                                         // 0x00EC(0x000C) (Transient, NeedCtorLink)
	float                                              StartExecutionTimeStamp;                                  // 0x00F8(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Rule");
		return ptr;
	}


	struct FString GetRuleName();
	struct FName GetRuleFName();
	class UObject* GetOtherEventParticipant();
};


// Class GearboxFramework.FlagExpressionEvaluator
// 0x000D (0x003C - 0x0049)
class UFlagExpressionEvaluator : public UExpressionEvaluator
{
public:
	TArray<struct FFlagEvalConditional>                FlagChain;                                                // 0x003C(0x000C) (Edit, Const, NeedCtorLink)
	unsigned char                                      FlagChainOperator;                                        // 0x0048(0x0001) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("FlagExpressionEvaluator");
		return ptr;
	}


	bool Evaluate(class UObject* ContextSource);
};


// Class GearboxFramework.FlagValueResolver
// 0x0000 (0x003C - 0x003C)
class UFlagValueResolver : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("FlagValueResolver");
		return ptr;
	}

};


// Class GearboxFramework.MultipleFlagValueResolver
// 0x0005 (0x003C - 0x0041)
class UMultipleFlagValueResolver : public UFlagValueResolver
{
public:
	class UFlagDefinition*                             FlagToLookUp;                                             // 0x003C(0x0004) (Edit)
	unsigned char                                      AggregationType;                                          // 0x0040(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("MultipleFlagValueResolver");
		return ptr;
	}

};


// Class GearboxFramework.ObjectFunctionFlagValueResolver
// 0x0010 (0x003C - 0x004C)
class UObjectFunctionFlagValueResolver : public UFlagValueResolver
{
public:
	float                                              CheckRate;                                                // 0x003C(0x0004) (Edit, Const)
	struct FString                                     FunctionCall;                                             // 0x0040(0x000C) (Edit, Const, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ObjectFunctionFlagValueResolver");
		return ptr;
	}

};


// Class GearboxFramework.ObjectPropertyFlagValueResolver
// 0x0008 (0x003C - 0x0044)
class UObjectPropertyFlagValueResolver : public UFlagValueResolver
{
public:
	struct FName                                       PropertyName;                                             // 0x003C(0x0008) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ObjectPropertyFlagValueResolver");
		return ptr;
	}

};


// Class GearboxFramework.RuleEngineFlagValueResolver
// 0x0000 (0x003C - 0x003C)
class URuleEngineFlagValueResolver : public UFlagValueResolver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("RuleEngineFlagValueResolver");
		return ptr;
	}

};


// Class GearboxFramework.GbxMessageDefinition
// 0x0034 (0x003C - 0x0070)
class UGbxMessageDefinition : public UGBXDefinition
{
public:
	struct FName                                       NameKey;                                                  // 0x003C(0x0008) (Edit)
	unsigned long                                      HasLocation : 1;                                          // 0x0044(0x0004) (Edit)
	unsigned long                                      HasRadius : 1;                                            // 0x0044(0x0004) (Edit)
	unsigned long                                      TakeLocationFromSender : 1;                               // 0x0044(0x0004) (Edit)
	unsigned long                                      IntendedForAllies : 1;                                    // 0x0044(0x0004) (Edit)
	unsigned long                                      IntendedForEnemies : 1;                                   // 0x0044(0x0004) (Edit)
	unsigned long                                      AllowRepeatSends : 1;                                     // 0x0044(0x0004) (Edit)
	unsigned long                                      LimitedReception : 1;                                     // 0x0044(0x0004) (Edit)
	struct FAttributeInitializationData                Radius;                                                   // 0x0048(0x0010) (Edit)
	float                                              SecondsBetweenSends;                                      // 0x0058(0x0004) (Edit)
	float                                              MaxTimeToKeepSending;                                     // 0x005C(0x0004) (Edit)
	TArray<unsigned char>                              DupeCriteria;                                             // 0x0060(0x000C) (Edit, Const, NeedCtorLink)
	int                                                MaxRecipients;                                            // 0x006C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GbxMessageDefinition");
		return ptr;
	}

};


// Class GearboxFramework.GbxMessageManager
// 0x0030 (0x003C - 0x006C)
class UGbxMessageManager : public UObject
{
public:
	TArray<FScriptInterface>                           Listeners;                                                // 0x003C(0x000C) (NeedCtorLink)
	TArray<class UGbxMessage*>                         MessagesToSend;                                           // 0x0048(0x000C) (NeedCtorLink)
	struct FFlag                                       SentMessagesRecently;                                     // 0x0054(0x0010)
	float                                              DistributionInterval;                                     // 0x0064(0x0004) (Const)
	int                                                MaxMessagesPerDistribution;                               // 0x0068(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GbxMessageManager");
		return ptr;
	}


	void RemoveListener(const FScriptInterface& InListener);
	void AddListener(const FScriptInterface& InListener);
	void PostMessage(class UGbxMessage* Message);
	class UGbxMessage* AllocateMessage();
};


// Class GearboxFramework.RuleEngine
// 0x00FC (0x003C - 0x0138)
class URuleEngine : public UObject
{
public:
	struct FPointer                                    VfTable_IIFlagProvider;                                   // 0x003C(0x0004) (Const, Native, NoExport)
	class UAIFactoryBase*                              TheAIFactory;                                             // 0x0040(0x0004)
	class AActor*                                      ActorProxy;                                               // 0x0044(0x0004)
	float                                              ThinkRate;                                                // 0x0048(0x0004) (Edit, Const)
	float                                              ElapsedTime;                                              // 0x004C(0x0004)
	float                                              TickRate;                                                 // 0x0050(0x0004)
	class URuleSet*                                    RuleSetTemplate;                                          // 0x0054(0x0004) (Edit)
	class URuleSet*                                    CurRuleSet;                                               // 0x0058(0x0004) (Transient)
	class URuleSet*                                    PendingRuleSetTemplate;                                   // 0x005C(0x0004)
	TArray<struct FFlagDefinitionInitialization>       FlagInitialization;                                       // 0x0060(0x000C) (Edit, Const, NeedCtorLink)
	TArray<class UFlagDefinition*>                     DynamicFlagDefinitions;                                   // 0x006C(0x000C) (Transient, NeedCtorLink)
	TArray<struct FDynamicFlagInstanceData>            DynamicFlags;                                             // 0x0078(0x000C) (Transient, NeedCtorLink)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0084(0x003C) UNKNOWN PROPERTY: MapProperty GearboxFramework.RuleEngine.DynamicFlagDefLookup
	TArray<class UKnowledgeRecord*>                    KnowledgeDB;                                              // 0x00C0(0x000C) (NeedCtorLink, EditInline)
	TArray<class URule*>                               RunningRules;                                             // 0x00CC(0x000C) (NeedCtorLink)
	TArray<class UClass*>                              ResourcesInUse;                                           // 0x00D8(0x000C) (NeedCtorLink)
	unsigned long                                      bRulesEnabled : 1;                                        // 0x00E4(0x0004)
	unsigned long                                      bHasDebugFocus : 1;                                       // 0x00E4(0x0004)
	unsigned long                                      bVerboseLoggingEnabled : 1;                               // 0x00E4(0x0004)
	unsigned long                                      bInitialized : 1;                                         // 0x00E4(0x0004)
	unsigned long                                      DoLoadBalancing : 1;                                      // 0x00E4(0x0004) (Const)
	unsigned long                                      bForceFullUpdate : 1;                                     // 0x00E4(0x0004)
	unsigned long                                      OnlyIterateRulesForEvents : 1;                            // 0x00E4(0x0004) (Edit, Const)
	unsigned long                                      bEventsCausedKnowledgeRecordUpdate : 1;                   // 0x00E4(0x0004)
	unsigned long                                      EnableSnapshots : 1;                                      // 0x00E4(0x0004) (Const)
	class UAITracker*                                  MyTracker;                                                // 0x00E8(0x0004)
	TArray<class URuleSet*>                            RuleSetStack;                                             // 0x00EC(0x000C) (NeedCtorLink)
	TArray<struct FEventRecord>                        QueuedRuleEvents;                                         // 0x00F8(0x000C) (NeedCtorLink)
	float                                              LastFullUpdateTime;                                       // 0x0104(0x0004)
	int                                                MaxRuleSetPasses;                                         // 0x0108(0x0004) (Edit)
	TArray<class UClass*>                              KRCache;                                                  // 0x010C(0x000C) (Transient, NeedCtorLink)
	float                                              LastTargetIteratorTime;                                   // 0x0118(0x0004)
	float                                              LastTargetIteratorRuleEvalDiffTime;                       // 0x011C(0x0004)
	float                                              AverageTargetIteratorRuleEvalDiffTime;                    // 0x0120(0x0004)
	float                                              WorstTargetIteratorRuleEvalDiffTime;                      // 0x0124(0x0004)
	float                                              ActivateTime;                                             // 0x0128(0x0004)
	TArray<struct FRuleSetReference>                   RuleSetReferences;                                        // 0x012C(0x000C) (Edit, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("RuleEngine");
		return ptr;
	}


	void ApplyFlagInitializationData(TArray<struct FFlagDefinitionInitialization>* FlagsToSet);
	bool IsResourceInUse(class UClass* TestResourceClass);
	class UObject* GetContextSource();
	bool IsRunningRuleWhichBlocksRuleSetChange();
	bool GetDynamicFlagValue(class UFlagDefinition* FlagDefinition);
	void SetDynamicFlagDefTrueTimed(class UFlagDefinition* FlagDefinition, float Time);
	void SetDynamicFlagDefValue(class UFlagDefinition* FlagDefinition, bool Value);
	class URuleSet* GetRuleSetFromReference(const struct FName& ReferenceName);
	void ClearRuleSetStack();
	void PopRuleSetSwitch();
	bool PushRuleSetSwitch(class URuleSet* NewRuleSetTemplate);
	void SetRuleSet(class URuleSet* NewRuleSetTemplate);
	void SwitchActiveRuleSet(class URuleSet* NewRuleSetTemplate);
	void UpdateKnowledge(class UClass* pKnowledgeRecordType);
	int ActivateEventRuleEx(const struct FName& EventDefName, TArray<class AGearboxPawn*> Participants, class AActor* Subject, bool CastSizeMustMatch);
	void CleanUpRuleEngineData();
	int ActivateEventRule(const struct FName& EventDefName, class AGearboxPawn* Instigator, class AActor* Subject, bool CastSizeMustMatch);
	int ActivateEventRuleByDefinition(class URuleEventDef* EventDefinition, class UObject* OtherEventParticipantObject);
};


// Class GearboxFramework.GearboxMind
// 0x00E4 (0x0684 - 0x0768)
class AGearboxMind : public AGearboxAIController
{
public:
	struct FPointer                                    VfTable_IIRuleEngineOwner;                                // 0x0684(0x0004) (Const, Native, NoExport)
	struct FPointer                                    VfTable_IINounAttributeProvider;                          // 0x0688(0x0004) (Const, Native, NoExport)
	struct FPointer                                    VfTable_IIFlagProvider;                                   // 0x068C(0x0004) (Const, Native, NoExport)
	struct FPointer                                    VfTable_IIAIInterface;                                    // 0x0690(0x0004) (Const, Native, NoExport)
	unsigned long                                      bDisabledDueToPopulationIrrelevance : 1;                  // 0x0694(0x0004)
	unsigned long                                      bWantsToWalk : 1;                                         // 0x0694(0x0004)
	class UGearboxRuleEngine*                          MyRuleEngine;                                             // 0x0698(0x0004)
	class UGearboxRuleEngine*                          RuleEngineTemplate;                                       // 0x069C(0x0004) (Edit)
	class AGearboxPawn*                                MyGearboxPawn;                                            // 0x06A0(0x0004)
	unsigned char                                      FacingPolicy;                                             // 0x06A4(0x0001)
	unsigned char                                      AtLeastOneKnownThreat;                                    // 0x06A5(0x0001)
	unsigned char                                      NewEnemyAwarenessReason;                                  // 0x06A6(0x0001)
	unsigned char                                      DebugMoveFinishedReason;                                  // 0x06A7(0x0001) (Transient)
	class AActor*                                      FacingActor;                                              // 0x06A8(0x0004)
	struct FVector                                     FacingVector;                                             // 0x06AC(0x000C)
	float                                              DotProductToFacingPolicy;                                 // 0x06B8(0x0004)
	float                                              DotProductToCurrentEnemy;                                 // 0x06BC(0x0004)
	struct FName                                       MostRecentNewEnemyName;                                   // 0x06C0(0x0008)
	struct FName                                       MostRecentNewEnemyArchName;                               // 0x06C8(0x0008)
	class UAwarenessZoneCollectionDefinition*          DefaultAwarenessZoneCollection;                           // 0x06D0(0x0004) (Edit, Const)
	class UAwarenessZoneCollectionDefinition*          CurrentAwarenessZoneCollection;                           // 0x06D4(0x0004) (Transient)
	class UAwarenessZoneDefinition*                    CurrentAwarenessZone;                                     // 0x06D8(0x0004) (Transient)
	class UCoverSearchCriteria*                        DefaultCoverSearchCriteria;                               // 0x06DC(0x0004) (Edit)
	TArray<struct FVector>                             FailedMoveSpots;                                          // 0x06E0(0x000C) (Transient, NeedCtorLink)
	TArray<struct FNounAttributeState>                 NounState;                                                // 0x06EC(0x000C) (NeedCtorLink)
	struct FVector                                     HomeLocation;                                             // 0x06F8(0x000C) (Transient)
	int                                                PopulationOpportunityIndex;                               // 0x0704(0x0004) (Transient)
	class UClass*                                      MindTargetInfoClass;                                      // 0x0708(0x0004) (Const)
	class UAITracker*                                  MyTracker;                                                // 0x070C(0x0004) (ExportObject, NeedCtorLink, EditInline)
	TArray<class UFlagDefinition*>                     DynamicFlagDefinitions;                                   // 0x0710(0x000C) (Transient, NeedCtorLink)
	TArray<struct FDynamicFlagInstanceData>            DynamicFlags;                                             // 0x071C(0x000C) (Transient, NeedCtorLink)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0728(0x003C) UNKNOWN PROPERTY: MapProperty GearboxFramework.GearboxMind.DynamicFlagDefLookup
	class UAIComponent*                                AIComponent;                                              // 0x0764(0x0004) (ExportObject, Transient, Component, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxMind");
		return ptr;
	}


	void InitSequence(class UActionSequence* NewSequence);
	class UPawnAllegiance* GetAllegiance();
	class UAIDefinition* GetAIDefinition();
	class UAIComponent* GetAIComponent();
	FScriptInterface GetAIParent();
	struct FVector GetAILocation();
	class AActor* GetAIActor();
	bool CanTickAI();
	bool InGodMode();
	void PawnDied(class APawn* inPawn);
	void OnTargetPriority(class UGearboxSeqAct_TargetPriority* inAction);
	void Behavior_SetCanTarget(unsigned char ChangeStatus);
	static bool GetNoTargetAllEnemies();
	static void SetNoTargetAllEnemies(bool bNoTarget);
	void ClearScriptedMoveTarget();
	bool IsCloseEnoughToScriptedMoveTarget();
	struct FVector GetWeaponFireLocation();
	int ActivateEventRule(const struct FName& RuleEventName);
	void AddHitTargetRecord(class AGearboxPawn* HitByPawn, const struct FVector& NewHitLocation, float flNewDamage);
	void StopMovement();
	void Possess(class APawn* inPawn, bool bVehicleTransition);
	class UGearboxRuleEngine* GetGearboxRuleEngine();
	class URuleEngine* GetRuleEngine();
	void NotifyShotAtBy(class AGearboxPawn* ShootingPawn);
	bool FindCoverAndClaim(const struct FVector& CoverSearchOrigin, class UPawnMoveLocationRequest* LocationRequest, float MinSearchRadius, float MaxSearchRadius, bool bEnactCoverChanges, struct FVector* OutDestination);
	void UpdateRuleEngineKnowledge(class UClass* aKDBClass);
	bool GetCurrentTargetInfo(class UMindTargetInfo** OutTargetRec);
	bool IsSameAllegianceMind(class AGearboxMind* aMind);
	bool IsSameAllegiance(class UObject* anObject);
	bool IsNeutralMind(class AGearboxMind* aMind);
	bool IsNeutral(class UObject* anObject);
	bool IsFriendlyMind(class AGearboxMind* aMind);
	bool IsFriendly(class UObject* anObject);
	bool IsEnemyMind(class AGearboxMind* aMind);
	bool IsEnemy(class UObject* anObject);
	bool WantsToWalk();
	void SetWantsToWalk(bool bInWantsToWalk);
	unsigned char GetFacingPolicy();
	void SetFacingPolicy(unsigned char NewFacingPolicy, class AActor* NewFacingActor, const struct FVector& NewFacingVector);
	class AActor* GetCurrentTarget();
	void RemoveEnemyFromQueue(class AActor* Target);
	class UGearboxNavigationHandle* GetNavigationHandle();
};


// Class GearboxFramework.GearboxAIMoveNodeRenderComponent
// 0x0000 (0x0210 - 0x0210)
class UGearboxAIMoveNodeRenderComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxAIMoveNodeRenderComponent");
		return ptr;
	}

};


// Class GearboxFramework.GearboxCoverStateManager
// 0x00B8 (0x003C - 0x00F4)
class UGearboxCoverStateManager : public UObject
{
public:
	class AGearboxPawn*                                MyGearboxPawn;                                            // 0x003C(0x0004) (Transient)
	struct FGearboxCoverState                          DesiredCoverState;                                        // 0x0040(0x000C) (Transient)
	struct FGearboxCoverState                          CurrentCoverState;                                        // 0x004C(0x000C) (Transient)
	struct FGearboxCoverTransition                     DesiredCoverTransition;                                   // 0x0058(0x0004) (Transient)
	struct FGearboxCoverTransition                     CurrentCoverTransition;                                   // 0x005C(0x0004) (Transient)
	struct FCoverSpotInfo                              DesiredCoverInfo;                                         // 0x0060(0x0018) (Transient)
	struct FCoverSpotInfo                              CurrentCoverInfo;                                         // 0x0078(0x0018) (Transient)
	struct FCoverSpotInfo                              LastCoverInfo;                                            // 0x0090(0x0018) (Transient)
	unsigned long                                      PawnCrouchedPriorToMount : 1;                             // 0x00A8(0x0004) (Transient)
	unsigned long                                      CoverDebugSearchWasFinalized : 1;                         // 0x00A8(0x0004) (Transient)
	float                                              CoverDebugInnerRadius;                                    // 0x00AC(0x0004) (Transient)
	float                                              CoverDebugOuterRadius;                                    // 0x00B0(0x0004) (Transient)
	float                                              CoverDebugSearchAngle;                                    // 0x00B4(0x0004) (Transient)
	struct FVector                                     CoverDebugSearchDirection;                                // 0x00B8(0x000C) (Transient)
	struct FSmartVector                                CoverDebugSearchOrigin;                                   // 0x00C4(0x001C) (Transient)
	TArray<struct FCoverDebugPriority>                 CoverDebugList;                                           // 0x00E0(0x000C) (Transient, NeedCtorLink)
	float                                              HorizontalCoverAngleDegrees;                              // 0x00EC(0x0004) (Edit, Const)
	float                                              VerticalCoverAngleDegrees;                                // 0x00F0(0x0004) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxCoverStateManager");
		return ptr;
	}


	bool IsChangingDirection();
	bool IsMantlingOverCoverInProgress();
	bool IsReturnFromPeekInProgress();
	bool IsPeekTransitionInProgress();
	bool IsPeekedUp(bool bTransitionCounts);
	bool IsReturnFromLeanOutInProgress();
	bool IsLeanOutTransitionInProgress();
	bool IsLeanedOut(bool bTransitionCounts);
	bool IsReturnFromPopUpInProgress();
	bool IsPopUpTransitionInProgress();
	bool IsPoppedUp(bool bTransitionCounts);
	bool IsExecutingAnyTransition();
	unsigned char GetDesiredState();
	unsigned char GetCurrentTransition();
	void OnMantleOverCoverAnimEnd();
	void OnTransitionAnimEndEx();
	void OnTransitionAnimEnd(unsigned char Transition);
	void OnDismountAnimEnd();
	void OnMountAnimEnd();
	bool MantleOverCover(class AActor* CoverActor, int CoverSlotNdx);
	bool ReturnToCover();
	bool LeanOutForFiring(bool BlindFire);
	bool PopUpForFiring(bool BlindFire);
	bool Peek();
	bool DetachFromCover();
	bool DismountCover(unsigned char DismountType);
	bool ClaimAndMountCover(class ACoverLink* TheCoverLink, int SlotNdx);
	bool MountDesiredCover();
	void ClearDesiredCover();
	void GetCurrentCoverLocationAndRotation(struct FVector* CoverLoc, struct FRotator* CoverRot);
	void GetDesiredCoverLocationAndRotation(struct FVector* CoverLoc, struct FRotator* CoverRot);
	bool HasDesiredCover();
	unsigned char GetLastCoverHeight();
	unsigned char GetCurrentCoverHeight();
	unsigned char GetDesiredCoverHeight();
	bool WasCoveredFrom(const struct FVector& ThreatLocation);
	bool WillBeCoveredFrom(const struct FVector& ThreatLocation);
	bool IsCoveredFrom(const struct FVector& ThreatLocation);
	bool IsDismountInProgress();
	bool IsMountInProgress();
	bool WasMountedOnCover();
	bool IsMountedOnCover();
	bool IsUsingCover();
	void OnCoverStateChanged();
	void GetLastCover(class AActor** OutCoverActor, int* OutSlotNdx);
	void GetCurrentCover(class AActor** OutCoverActor, int* OutSlotNdx);
	void GetDesiredCover(class AActor** OutCoverActor, int* OutSlotNdx);
	bool FindCoverAndClaim(class AGearboxMind* TheMind, const struct FVector& CoverSearchOrigin, class UPawnMoveLocationRequest* LocationRequest, float MinSearchRadius, float MaxSearchRadius, bool bEnactCoverChanges, struct FVector* OutDestination);
	void Initialize(class AGearboxPawn* P);
};


// Class GearboxFramework.GearboxMindAttributeContextResolver
// 0x0000 (0x003C - 0x003C)
class UGearboxMindAttributeContextResolver : public UAttributeContextResolver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxMindAttributeContextResolver");
		return ptr;
	}

};


// Class GearboxFramework.GearboxNavigationHandle
// 0x0120 (0x0180 - 0x02A0)
class UGearboxNavigationHandle : public UNavigationHandle
{
public:
	unsigned char                                      DesiredMovementSpeed;                                     // 0x0180(0x0001) (Transient)
	unsigned char                                      ActiveSpecialNavMeshMove;                                 // 0x0181(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0182(0x0002) MISSED OFFSET
	unsigned long                                      bFollowingPath : 1;                                       // 0x0184(0x0004) (Transient)
	unsigned long                                      bReachedDestination : 1;                                  // 0x0184(0x0004) (Transient)
	unsigned long                                      bSpecialMovementFinished : 1;                             // 0x0184(0x0004) (Transient)
	unsigned long                                      bClearPathAfterSpecialMove : 1;                           // 0x0184(0x0004) (Transient)
	struct FBasedPosition                              CurrentGoal;                                              // 0x0188(0x0034) (Transient)
	struct FPathFindData                               CurrentPath;                                              // 0x01BC(0x0058) (Transient, NeedCtorLink)
	struct FGBXNavMeshPolyRef                          Anchor;                                                   // 0x0214(0x0008) (Transient)
	struct FGBXNavMeshPolyRef                          LastValidAnchor;                                          // 0x021C(0x0008) (Transient)
	struct FBasedPosition                              LastAnchorPosition;                                       // 0x0224(0x0034) (Transient)
	struct FVector                                     LastAnchorDelta;                                          // 0x0258(0x000C) (Transient)
	float                                              NextPathObjectDistance;                                   // 0x0264(0x0004) (Transient)
	struct FVector                                     CurrentGoalStartLoc;                                      // 0x0268(0x000C) (Transient)
	struct FRotator                                    DesiredLookDirection;                                     // 0x0274(0x000C) (Transient)
	struct FRotator                                    LookDirection;                                            // 0x0280(0x000C) (Transient)
	class UGBXNavMeshPathFinder*                       PathFinder;                                               // 0x028C(0x0004) (ExportObject, Transient, NeedCtorLink, EditInline)
	float                                              NearPathCheckDist;                                        // 0x0290(0x0004) (Transient)
	float                                              NearPathCheckDistMin;                                     // 0x0294(0x0004) (Transient)
	float                                              NearPathCheckDistMax;                                     // 0x0298(0x0004) (Transient)
	float                                              NearPathCheckDistRate;                                    // 0x029C(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxNavigationHandle");
		return ptr;
	}


	void SetDesiredMovementSpeed(unsigned char Speed);
	void ClearAnchor();
	static bool GetNearestPositionOnNavMesh(float Radius, const struct FVector& TestLoc, bool bAnyHeight, struct FBasedPosition* NearestPos, struct FNavMeshPathParams* PolyUsableCheckParams, struct FGBXNavMeshPolyRef* NearestPoly);
	static bool GetNavMeshPolyForPoint(const struct FVector& Point, struct FGBXNavMeshPolyRef* FoundPoly, struct FNavMeshPathParams* PolyUsableCheckParams);
	bool IsDoingSpecialMove();
	bool InFinalPoly(const struct FVector& TestLoc);
	bool NeedsRegularWalkingPhysics();
	bool PopulatePathfindingParamCache();
	bool TrySpecialMove(struct FBasedPosition* MoveTarget);
	void Finished();
	bool IsGoalValid();
	void MovePawnToGoal();
	bool PathIsValid(bool bCheckAnchor, struct FPathFindData* Data);
	bool IsFollowingPath();
	bool ClearPath(bool bStopMovement, bool bAllowDelayedClear);
	bool FollowPath(struct FPathFindData* Data);
	bool CreatePathToLocation(const struct FVector& DestLocation, const struct FGBXNavMeshPolyRef& DestPoly, bool bAdjustStartForMotion, struct FPathFindData* PathData);
};


// Class GearboxFramework.IFlagProvider
// 0x0000 (0x003C - 0x003C)
class UIFlagProvider : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("IFlagProvider");
		return ptr;
	}

};


// Class GearboxFramework.IFlagProviderGroup
// 0x0000 (0x003C - 0x003C)
class UIFlagProviderGroup : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("IFlagProviderGroup");
		return ptr;
	}

};


// Class GearboxFramework.IGbxMessageListener
// 0x0000 (0x003C - 0x003C)
class UIGbxMessageListener : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("IGbxMessageListener");
		return ptr;
	}


	bool WantsToStopListening();
	class AActor* GetActor();
	struct FVector GetListenerLocation();
	class UPawnAllegiance* GetAllegiance();
	bool ReceiveMessage(class UGbxMessage* Message);
	bool CaresAboutMessage(class UGbxMessage* Message);
};


// Class GearboxFramework.IRuleEngineOwner
// 0x0000 (0x003C - 0x003C)
class UIRuleEngineOwner : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("IRuleEngineOwner");
		return ptr;
	}


	class URuleEngine* GetRuleEngine();
};


// Class GearboxFramework.KnowledgeRecord
// 0x001C (0x003C - 0x0058)
class UKnowledgeRecord : public UObject
{
public:
	class UAIFactoryBase*                              TheAIFactory;                                             // 0x003C(0x0004)
	struct FName                                       TheName;                                                  // 0x0040(0x0008) (Edit, Const)
	unsigned char                                      KCategory;                                                // 0x0048(0x0001) (Edit, Const)
	unsigned char                                      EvalType;                                                 // 0x0049(0x0001) (Edit, Const)
	unsigned char                                      Active;                                                   // 0x004A(0x0001) (Edit)
	unsigned char                                      Marked;                                                   // 0x004B(0x0001)
	float                                              Frequency;                                                // 0x004C(0x0004) (Edit, Const)
	float                                              NextUpdateTime;                                           // 0x0050(0x0004)
	int                                                FlagIndex;                                                // 0x0054(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("KnowledgeRecord");
		return ptr;
	}


	void RecordEvalCallback(class URuleEngine* EvalRuleEngine);
};


// Class GearboxFramework.LocationFilter
// 0x0000 (0x003C - 0x003C)
class ULocationFilter : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("LocationFilter");
		return ptr;
	}

};


// Class GearboxFramework.LocationFilter_MustHaveLOS
// 0x0000 (0x003C - 0x003C)
class ULocationFilter_MustHaveLOS : public ULocationFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("LocationFilter_MustHaveLOS");
		return ptr;
	}

};


// Class GearboxFramework.LocationFilter_MustNotHaveLOS
// 0x0000 (0x003C - 0x003C)
class ULocationFilter_MustNotHaveLOS : public ULocationFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("LocationFilter_MustNotHaveLOS");
		return ptr;
	}

};


// Class GearboxFramework.MindTargetInfo
// 0x009C (0x003C - 0x00D8)
class UMindTargetInfo : public UObject
{
public:
	class AActor*                                      Target;                                                   // 0x003C(0x0004)
	float                                              Distance;                                                 // 0x0040(0x0004)
	unsigned long                                      bShouldRemove : 1;                                        // 0x0044(0x0004)
	unsigned long                                      bCanSeeOrHearTarget : 1;                                  // 0x0044(0x0004)
	unsigned char                                      bCanFireAt;                                               // 0x0048(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              Priority;                                                 // 0x004C(0x0004)
	float                                              OnePriority;                                              // 0x0050(0x0004)
	float                                              TargetExposureToMe;                                       // 0x0054(0x0004)
	float                                              MyExposureToTarget;                                       // 0x0058(0x0004)
	TArray<struct FHitTargetRecord>                    HitTargetHistory;                                         // 0x005C(0x000C) (NeedCtorLink)
	TArray<struct FPriorityDebugStruct>                PriorityDebugRecords;                                     // 0x0068(0x000C) (NeedCtorLink)
	struct FFlag                                       IAmConsciousOfTarget;                                     // 0x0074(0x0010)
	float                                              IAmConsciousTime;                                         // 0x0084(0x0004)
	struct FFlag                                       TargetHasShotAtMeRecently;                                // 0x0088(0x0010)
	struct FFlag                                       TargetOccludedBySmoke;                                    // 0x0098(0x0010)
	struct FFlag                                       IHaveSeenOrKnownThisTargetBefore;                         // 0x00A8(0x0010)
	struct FSmartVector                                LastVisibleOrAudibleLocation;                             // 0x00B8(0x001C)
	float                                              BonusPriority;                                            // 0x00D4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("MindTargetInfo");
		return ptr;
	}


	float GetAverageHitTime();
	void AddHitTargetRecord(const struct FVector& vecNewHitLoc, float flNewDamage);
};


// Class GearboxFramework.RuleContainer
// 0x000C (0x00FC - 0x0108)
class URuleContainer : public URule
{
public:
	class URuleSet*                                    RuleSetTemplate;                                          // 0x00FC(0x0004) (Edit, Const, EditInline)
	class URuleSet*                                    CurRuleSet;                                               // 0x0100(0x0004) (Transient)
	unsigned long                                      AllowAllEventsThrough : 1;                                // 0x0104(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("RuleContainer");
		return ptr;
	}

};


// Class GearboxFramework.RulePlaceholder
// 0x0000 (0x00FC - 0x00FC)
class URulePlaceholder : public URule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("RulePlaceholder");
		return ptr;
	}

};


// Class GearboxFramework.GearboxRuleEngine
// 0x0008 (0x0138 - 0x0140)
class UGearboxRuleEngine : public URuleEngine
{
public:
	class AGearboxPawn*                                MyGearboxPawn;                                            // 0x0138(0x0004)
	class AGearboxMind*                                MyGearboxMind;                                            // 0x013C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxRuleEngine");
		return ptr;
	}


	void Initialize(class AGearboxPawn* NewGearboxPawn, class AGearboxMind* NewMind, class UGearboxAIFactory* NewAIFactory);
	class UObject* GetContextSource();
};


// Class GearboxFramework.RuleEventDef
// 0x0030 (0x003C - 0x006C)
class URuleEventDef : public UGBXDefinition
{
public:
	struct FName                                       EventDefName;                                             // 0x003C(0x0008) (Edit, Const)
	struct FFlagDefinitionInitialization               FlagActionOnEventTrigger;                                 // 0x0044(0x0028) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("RuleEventDef");
		return ptr;
	}

};


// Class GearboxFramework.RuleSet
// 0x0058 (0x003C - 0x0094)
class URuleSet : public UObject
{
public:
	class UAIFactoryBase*                              TheAIFactory;                                             // 0x003C(0x0004)
	TArray<class URule*>                               RuleTemplateRefs;                                         // 0x0040(0x000C) (Edit, NeedCtorLink)
	TArray<class URule*>                               Rules;                                                    // 0x004C(0x000C) (Transient, NeedCtorLink)
	TArray<class URulePlaceholder*>                    ToDiscard;                                                // 0x0058(0x000C) (NeedCtorLink)
	unsigned long                                      bInitialized : 1;                                         // 0x0064(0x0004)
	unsigned long                                      bNewRuleEvaluationEnabled : 1;                            // 0x0064(0x0004)
	struct FName                                       RuleSetName;                                              // 0x0068(0x0008)
	TArray<struct FFlagDefinitionInitialization>       FlagsOnEntry;                                             // 0x0070(0x000C) (Edit, NeedCtorLink)
	TArray<struct FFlagDefinitionInitialization>       FlagsOnExit;                                              // 0x007C(0x000C) (Edit, NeedCtorLink)
	TArray<class URuleSet*>                            HACK_RuleSetsAllowedToFollow;                             // 0x0088(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("RuleSet");
		return ptr;
	}

};


// Class GearboxFramework.StateRuleSet
// 0x001C (0x0094 - 0x00B0)
class UStateRuleSet : public URuleSet
{
public:
	TArray<class URule*>                               StateRules;                                               // 0x0094(0x000C) (Edit, Const, NeedCtorLink, EditInline)
	unsigned long                                      bShowPawnInRadarWhenActive : 1;                           // 0x00A0(0x0004) (Edit, Const)
	TArray<struct FStateAttributeData>                 StateAttributeMap;                                        // 0x00A4(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("StateRuleSet");
		return ptr;
	}

};


// Class GearboxFramework.SearchDirection
// 0x0000 (0x003C - 0x003C)
class USearchDirection : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SearchDirection");
		return ptr;
	}

};


// Class GearboxFramework.SearchDirection_Any
// 0x0000 (0x003C - 0x003C)
class USearchDirection_Any : public USearchDirection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SearchDirection_Any");
		return ptr;
	}

};


// Class GearboxFramework.SearchDirection_AwayFromMe
// 0x0000 (0x003C - 0x003C)
class USearchDirection_AwayFromMe : public USearchDirection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SearchDirection_AwayFromMe");
		return ptr;
	}

};


// Class GearboxFramework.SearchDirection_AwayFromTarget
// 0x0000 (0x003C - 0x003C)
class USearchDirection_AwayFromTarget : public USearchDirection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SearchDirection_AwayFromTarget");
		return ptr;
	}

};


// Class GearboxFramework.SearchDirection_MyFacingDirection
// 0x0000 (0x003C - 0x003C)
class USearchDirection_MyFacingDirection : public USearchDirection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SearchDirection_MyFacingDirection");
		return ptr;
	}

};


// Class GearboxFramework.SearchDirection_OppositeMyFacingDirection
// 0x0000 (0x003C - 0x003C)
class USearchDirection_OppositeMyFacingDirection : public USearchDirection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SearchDirection_OppositeMyFacingDirection");
		return ptr;
	}

};


// Class GearboxFramework.SearchDirection_OppositeTargetsFacingDirection
// 0x0000 (0x003C - 0x003C)
class USearchDirection_OppositeTargetsFacingDirection : public USearchDirection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SearchDirection_OppositeTargetsFacingDirection");
		return ptr;
	}

};


// Class GearboxFramework.SearchDirection_RandomLeftOrRight
// 0x0000 (0x003C - 0x003C)
class USearchDirection_RandomLeftOrRight : public USearchDirection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SearchDirection_RandomLeftOrRight");
		return ptr;
	}

};


// Class GearboxFramework.SearchDirection_TargetsFacingDirection
// 0x0000 (0x003C - 0x003C)
class USearchDirection_TargetsFacingDirection : public USearchDirection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SearchDirection_TargetsFacingDirection");
		return ptr;
	}

};


// Class GearboxFramework.SearchDirection_ToMyLeft
// 0x0000 (0x003C - 0x003C)
class USearchDirection_ToMyLeft : public USearchDirection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SearchDirection_ToMyLeft");
		return ptr;
	}

};


// Class GearboxFramework.SearchDirection_ToMyRight
// 0x0000 (0x003C - 0x003C)
class USearchDirection_ToMyRight : public USearchDirection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SearchDirection_ToMyRight");
		return ptr;
	}

};


// Class GearboxFramework.SearchDirection_TowardMe
// 0x0000 (0x003C - 0x003C)
class USearchDirection_TowardMe : public USearchDirection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SearchDirection_TowardMe");
		return ptr;
	}

};


// Class GearboxFramework.SearchDirection_TowardTarget
// 0x0000 (0x003C - 0x003C)
class USearchDirection_TowardTarget : public USearchDirection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SearchDirection_TowardTarget");
		return ptr;
	}

};


// Class GearboxFramework.SearchOrigin
// 0x0000 (0x003C - 0x003C)
class USearchOrigin : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SearchOrigin");
		return ptr;
	}

};


// Class GearboxFramework.SearchOrigin_CurrentLocation
// 0x0000 (0x003C - 0x003C)
class USearchOrigin_CurrentLocation : public USearchOrigin
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SearchOrigin_CurrentLocation");
		return ptr;
	}

};


// Class GearboxFramework.SearchOrigin_ScriptedMoveTarget
// 0x0000 (0x003C - 0x003C)
class USearchOrigin_ScriptedMoveTarget : public USearchOrigin
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SearchOrigin_ScriptedMoveTarget");
		return ptr;
	}

};


// Class GearboxFramework.SearchOrigin_TargetLocation
// 0x0000 (0x003C - 0x003C)
class USearchOrigin_TargetLocation : public USearchOrigin
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SearchOrigin_TargetLocation");
		return ptr;
	}

};


// Class GearboxFramework.SnapshotRecord
// 0x0CC0 (0x0040 - 0x0D00)
class USnapshotRecord : public USnapshotInterface
{
public:
	struct FName                                       MyName;                                                   // 0x0040(0x0008)
	struct FName                                       RuleSet;                                                  // 0x0048(0x0008)
	TArray<struct FRuleInfo>                           CurrentRules;                                             // 0x0050(0x000C) (NeedCtorLink)
	struct FRuleInfo                                   ContainedRules[0x2D];                                     // 0x005C(0x0044) (NeedCtorLink)
	int                                                SelectedRuleIdx;                                          // 0x0C50(0x0004)
	int                                                SelectedSubRuleIdx;                                       // 0x0C54(0x0004)
	TArray<struct FName>                               ResourcesInUse;                                           // 0x0C58(0x000C) (NeedCtorLink)
	TArray<struct FName>                               Flags;                                                    // 0x0C64(0x000C) (NeedCtorLink)
	struct FVector                                     Location;                                                 // 0x0C70(0x000C)
	struct FVector                                     Velocity;                                                 // 0x0C7C(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x0C88(0x000C)
	struct FName                                       RuleAffected;                                             // 0x0C94(0x0008)
	struct FName                                       Rule2Affected;                                            // 0x0C9C(0x0008)
	struct FName                                       SequenceAffected;                                         // 0x0CA4(0x0008)
	struct FName                                       Sequence2Affected;                                        // 0x0CAC(0x0008)
	unsigned char                                      Event;                                                    // 0x0CB4(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0CB5(0x0003) MISSED OFFSET
	struct FName                                       RuleStartName;                                            // 0x0CB8(0x0008) (Const)
	struct FName                                       RuleEndName;                                              // 0x0CC0(0x0008) (Const)
	struct FName                                       RuleInterruptName;                                        // 0x0CC8(0x0008) (Const)
	struct FName                                       ChildSequenceStartName;                                   // 0x0CD0(0x0008) (Const)
	struct FName                                       SwitchRuleSetName;                                        // 0x0CD8(0x0008) (Const)
	struct FName                                       PreventNewRulesName;                                      // 0x0CE0(0x0008) (Const)
	struct FColor                                      RunningRulesColor;                                        // 0x0CE8(0x0004) (Const)
	struct FColor                                      StalledRulesColor;                                        // 0x0CEC(0x0004) (Const)
	struct FColor                                      NotRunningRulesColor;                                     // 0x0CF0(0x0004) (Const)
	struct FColor                                      DisabledRulesColor;                                       // 0x0CF4(0x0004) (Const)
	struct FColor                                      FlagsColor;                                               // 0x0CF8(0x0004) (Const)
	struct FColor                                      ResourcesColor;                                           // 0x0CFC(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SnapshotRecord");
		return ptr;
	}

};


// Class GearboxFramework.GearboxPawnSnapshotRecord
// 0x02CC (0x0D00 - 0x0FCC)
class UGearboxPawnSnapshotRecord : public USnapshotRecord
{
public:
	float                                              PawnIconZOffset;                                          // 0x0D00(0x0004) (Const)
	float                                              PawnExposureZOffset;                                      // 0x0D04(0x0004) (Const)
	float                                              CollectionNameOffset;                                     // 0x0D08(0x0004) (Const)
	struct FColor                                      LastVisibleConnectionColor;                               // 0x0D0C(0x0004) (Const)
	struct FColor                                      RouteColor;                                               // 0x0D10(0x0004) (Const)
	struct FColor                                      OriginalRouteColor;                                       // 0x0D14(0x0004) (Const)
	struct FColor                                      DestLineColor;                                            // 0x0D18(0x0004) (Const)
	struct FColor                                      BestCoverColor;                                           // 0x0D1C(0x0004) (Const)
	struct FColor                                      PotentialCoverColor;                                      // 0x0D20(0x0004) (Const)
	struct FColor                                      StandardCoverColor;                                       // 0x0D24(0x0004) (Const)
	class UTexture2D*                                  AIDebugTexture;                                           // 0x0D28(0x0004) (Const)
	struct FName                                       MyPawnName;                                               // 0x0D2C(0x0008)
	struct FName                                       MyArchetypeName;                                          // 0x0D34(0x0008)
	float                                              CurrentHealth;                                            // 0x0D3C(0x0004)
	float                                              MaxHealth;                                                // 0x0D40(0x0004)
	float                                              DistanceToBestTarget;                                     // 0x0D44(0x0004)
	TArray<struct FAwarenessInfo>                      AwarenessZones;                                           // 0x0D48(0x000C) (NeedCtorLink)
	struct FName                                       AwarenessCollectionName;                                  // 0x0D54(0x0008)
	class AActor*                                      BestTarget;                                               // 0x0D5C(0x0004)
	TArray<struct FLocationInfo>                       TargetLocs;                                               // 0x0D60(0x000C) (NeedCtorLink)
	TArray<struct FLastVisibleInfo>                    LastVisibleTargetLocs;                                    // 0x0D6C(0x000C) (NeedCtorLink)
	struct FName                                       AnimTree;                                                 // 0x0D78(0x0008)
	TArray<struct FBoneAtom>                           Bones;                                                    // 0x0D80(0x000C) (NeedCtorLink)
	TArray<struct FLocationInfo>                       ForgottenTargets;                                         // 0x0D8C(0x000C) (NeedCtorLink)
	struct FName                                       NewEnemyName;                                             // 0x0D98(0x0008)
	struct FName                                       NewEnemyArchName;                                         // 0x0DA0(0x0008)
	unsigned char                                      NewEnemyAwarenessReason;                                  // 0x0DA8(0x0001)
	unsigned char                                      CurrentMoveSpeed;                                         // 0x0DA9(0x0001)
	unsigned char                                      MaxDesiredMoveSpeed;                                      // 0x0DAA(0x0001)
	unsigned char                                      ReasonForMovementFinish;                                  // 0x0DAB(0x0001)
	TArray<struct FDebugExposure>                      Exposure;                                                 // 0x0DAC(0x000C) (NeedCtorLink)
	class USkeletalMesh*                               DummyMesh;                                                // 0x0DB8(0x0004)
	int                                                DummyMesh_LOD;                                            // 0x0DBC(0x0004)
	TArray<struct FViewConeInfo>                       TargetViewCones;                                          // 0x0DC0(0x000C) (NeedCtorLink)
	struct FVector                                     PawnLocalDestination;                                     // 0x0DCC(0x000C)
	TArray<struct FVector>                             FailedMoveSpots;                                          // 0x0DD8(0x000C) (NeedCtorLink)
	TArray<struct FVector>                             RouteCache;                                               // 0x0DE4(0x000C) (NeedCtorLink)
	TArray<struct FVector>                             OriginalRouteCache;                                       // 0x0DF0(0x000C) (NeedCtorLink)
	struct FSmartVector                                DesiredCoverLocation;                                     // 0x0DFC(0x001C)
	struct FSmartVector                                CurrentCoverLocation;                                     // 0x0E18(0x001C)
	struct FSmartVector                                ScriptedMoveTargetLocation;                               // 0x0E34(0x001C)
	float                                              CoverSearchInnerRadius;                                   // 0x0E50(0x0004)
	float                                              CoverSearchOuterRadius;                                   // 0x0E54(0x0004)
	float                                              CoverSearchAngle;                                         // 0x0E58(0x0004)
	struct FSmartVector                                CoverSearchOrigin;                                        // 0x0E5C(0x001C)
	struct FVector                                     CoverSearchDirection;                                     // 0x0E78(0x000C)
	TArray<struct FCoverDebugInfo>                     CoverSlotDebugList;                                       // 0x0E84(0x000C) (NeedCtorLink)
	unsigned long                                      CoverSearchWasFinalized : 1;                              // 0x0E90(0x0004)
	struct FIconData                                   ICON_BLUELOCATION;                                        // 0x0E94(0x0014) (Const)
	struct FIconData                                   ICON_YELLOWLOCATION;                                      // 0x0EA8(0x0014) (Const)
	struct FIconData                                   ICON_QUESTIONMARK;                                        // 0x0EBC(0x0014) (Const)
	struct FIconData                                   ICON_EXCLAMATIONPOINT;                                    // 0x0ED0(0x0014) (Const)
	struct FIconData                                   ICON_REDARROW;                                            // 0x0EE4(0x0014) (Const)
	struct FIconData                                   ICON_GREENARROW;                                          // 0x0EF8(0x0014) (Const)
	struct FIconData                                   ICON_FAILED_MOVE_DEST;                                    // 0x0F0C(0x0014) (Const)
	struct FIconData                                   ICON_GREENCIRCLE;                                         // 0x0F20(0x0014) (Const)
	struct FIconData                                   ICON_PATHPOINT;                                           // 0x0F34(0x0014) (Const)
	struct FIconData                                   ICON_CURRENTCOVER;                                        // 0x0F48(0x0014) (Const)
	struct FIconData                                   ICON_DESIREDCOVER;                                        // 0x0F5C(0x0014) (Const)
	struct FIconData                                   ICON_SCRIPTEDMOVETARGET;                                  // 0x0F70(0x0014) (Const)
	TArray<struct FTargetDebugDatum>                   TargetData;                                               // 0x0F84(0x000C) (NeedCtorLink)
	TArray<struct FAIHoldDebugData>                    Holds;                                                    // 0x0F90(0x000C) (NeedCtorLink)
	TArray<struct FAIHoldDebugData>                    TargetHolds;                                              // 0x0F9C(0x000C) (NeedCtorLink)
	TArray<struct FAIHoldDebugData>                    MovementHolds;                                            // 0x0FA8(0x000C) (NeedCtorLink)
	TArray<struct FAIHoldDebugData>                    DemigodHolds;                                             // 0x0FB4(0x000C) (NeedCtorLink)
	TArray<struct FAIHoldDebugData>                    GodHolds;                                                 // 0x0FC0(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxPawnSnapshotRecord");
		return ptr;
	}

};


// Class GearboxFramework.TargetingDefinition
// 0x002C (0x003C - 0x0068)
class UTargetingDefinition : public UGBXDefinition
{
public:
	TArray<class UTI_Calc*>                            Knowledge;                                                // 0x003C(0x000C) (Edit, Const, ExportObject, NeedCtorLink, EditInline)
	TArray<class UTI_Prioritize*>                      Prioritization;                                           // 0x0048(0x000C) (Edit, Const, ExportObject, NeedCtorLink, EditInline)
	class UExpressionEvaluator*                        CanTargetIf;                                              // 0x0054(0x0004) (Edit, Const, EditInline)
	class UExpressionEvaluator*                        StopTargetingIf;                                          // 0x0058(0x0004) (Edit, Const, EditInline)
	unsigned long                                      bCanTargetFriendlies : 1;                                 // 0x005C(0x0004) (Edit, Const)
	unsigned long                                      bOverrideSearchRadius : 1;                                // 0x005C(0x0004) (Edit, Const)
	class UExpressionEvaluator*                        CanTargetFriendliesIf;                                    // 0x0060(0x0004) (Edit, Const, EditInline)
	float                                              SearchRadius;                                             // 0x0064(0x0004) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("TargetingDefinition");
		return ptr;
	}

};


// Class GearboxFramework.TargetIterator
// 0x0010 (0x003C - 0x004C)
class UTargetIterator : public UObject
{
public:
	unsigned char                                      IteratorType;                                             // 0x003C(0x0001) (Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	struct FString                                     BarGraphShortName;                                        // 0x0040(0x000C) (Const, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("TargetIterator");
		return ptr;
	}


	static void RecordEvalCallback(class URuleEngine* EvalRuleEngine);
};


// Class GearboxFramework.TargetIteratorCalculateDistance
// 0x0000 (0x004C - 0x004C)
class UTargetIteratorCalculateDistance : public UTargetIterator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("TargetIteratorCalculateDistance");
		return ptr;
	}

};


// Class GearboxFramework.TargetIteratorCalculateExposure
// 0x0000 (0x004C - 0x004C)
class UTargetIteratorCalculateExposure : public UTargetIterator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("TargetIteratorCalculateExposure");
		return ptr;
	}

};


// Class GearboxFramework.TargetIteratorCheckAwareness
// 0x0000 (0x004C - 0x004C)
class UTargetIteratorCheckAwareness : public UTargetIterator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("TargetIteratorCheckAwareness");
		return ptr;
	}

};


// Class GearboxFramework.TargetIteratorCheckRemoveTarget
// 0x0000 (0x004C - 0x004C)
class UTargetIteratorCheckRemoveTarget : public UTargetIterator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("TargetIteratorCheckRemoveTarget");
		return ptr;
	}

};


// Class GearboxFramework.TargetIteratorForgetAboutTarget
// 0x0000 (0x004C - 0x004C)
class UTargetIteratorForgetAboutTarget : public UTargetIterator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("TargetIteratorForgetAboutTarget");
		return ptr;
	}

};


// Class GearboxFramework.TargetIteratorPrioritizeTargetsIAmExposedTo
// 0x0000 (0x004C - 0x004C)
class UTargetIteratorPrioritizeTargetsIAmExposedTo : public UTargetIterator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("TargetIteratorPrioritizeTargetsIAmExposedTo");
		return ptr;
	}

};


// Class GearboxFramework.TI_Calc
// 0x0000 (0x004C - 0x004C)
class UTI_Calc : public UTargetIterator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("TI_Calc");
		return ptr;
	}

};


// Class GearboxFramework.TI_Prioritize
// 0x0004 (0x004C - 0x0050)
class UTI_Prioritize : public UTargetIterator
{
public:
	float                                              Weight;                                                   // 0x004C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("TI_Prioritize");
		return ptr;
	}

};


// Class GearboxFramework.TargetIteratorPrioritizeExposedTargets
// 0x0000 (0x0050 - 0x0050)
class UTargetIteratorPrioritizeExposedTargets : public UTI_Prioritize
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("TargetIteratorPrioritizeExposedTargets");
		return ptr;
	}

};


// Class GearboxFramework.TargetIteratorPrioritizeHumanTargets
// 0x0000 (0x0050 - 0x0050)
class UTargetIteratorPrioritizeHumanTargets : public UTI_Prioritize
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("TargetIteratorPrioritizeHumanTargets");
		return ptr;
	}

};


// Class GearboxFramework.TargetIteratorPrioritizeNearbyTarget
// 0x0004 (0x0050 - 0x0054)
class UTargetIteratorPrioritizeNearbyTarget : public UTI_Prioritize
{
public:
	float                                              MaxDistance;                                              // 0x0050(0x0004) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("TargetIteratorPrioritizeNearbyTarget");
		return ptr;
	}

};


// Class GearboxFramework.TargetIteratorPrioritizePreviousTarget
// 0x0000 (0x0050 - 0x0050)
class UTargetIteratorPrioritizePreviousTarget : public UTI_Prioritize
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("TargetIteratorPrioritizePreviousTarget");
		return ptr;
	}

};


// Class GearboxFramework.TargetIteratorPrioritizeTargetNotBeingShotAt
// 0x0000 (0x0050 - 0x0050)
class UTargetIteratorPrioritizeTargetNotBeingShotAt : public UTI_Prioritize
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("TargetIteratorPrioritizeTargetNotBeingShotAt");
		return ptr;
	}

};


// Class GearboxFramework.TargetIteratorPrioritizeTargetWhoShootsAtMe
// 0x0000 (0x0050 - 0x0050)
class UTargetIteratorPrioritizeTargetWhoShootsAtMe : public UTI_Prioritize
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("TargetIteratorPrioritizeTargetWhoShootsAtMe");
		return ptr;
	}

};


// Class GearboxFramework.TI_PrioritizeBonus
// 0x0000 (0x0050 - 0x0050)
class UTI_PrioritizeBonus : public UTI_Prioritize
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("TI_PrioritizeBonus");
		return ptr;
	}

};


// Class GearboxFramework.TI_PrioritizeConditional
// 0x0004 (0x0050 - 0x0054)
class UTI_PrioritizeConditional : public UTI_Prioritize
{
public:
	class UExpressionEvaluator*                        Condition;                                                // 0x0050(0x0004) (Edit, Const, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("TI_PrioritizeConditional");
		return ptr;
	}

};


// Class GearboxFramework.GearboxSeqAct_PopulationOpportunityLink
// 0x000C (0x00B4 - 0x00C0)
class UGearboxSeqAct_PopulationOpportunityLink : public USeqAct_Latent
{
public:
	TArray<class APopulationOpportunity*>              CloneOpportunities;                                       // 0x00B4(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxSeqAct_PopulationOpportunityLink");
		return ptr;
	}

};


// Class GearboxFramework.IPopulationSpawnPoint
// 0x0000 (0x003C - 0x003C)
class UIPopulationSpawnPoint : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("IPopulationSpawnPoint");
		return ptr;
	}


	float GetInitialMovementHoldTime();
	class AActor* GetInitialDestination();
	unsigned char GetInitialActionType();
	unsigned char GetSpawnStyleType();
};


// Class GearboxFramework.PopulationDefinition
// 0x0018 (0x003C - 0x0054)
class UPopulationDefinition : public UGBXDefinition
{
public:
	struct FPointer                                    VfTable_IIConstructObject;                                // 0x003C(0x0004) (Const, Native, NoExport)
	TArray<struct FPopulationActor>                    ActorArchetypeList;                                       // 0x0040(0x000C) (Edit, NeedCtorLink)
	unsigned char                                      RespawnStyle;                                             // 0x004C(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	unsigned long                                      bTotalResetOnLevelLoad : 1;                               // 0x0050(0x0004) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("PopulationDefinition");
		return ptr;
	}


	static bool IsAllSpawnTypesDebugEnabled();
	static void ToggleAllSpawnTypesDebug();
	class UPopulationFactory* GetRandomFactory(class APopulationOpportunity* SpawningOpportunity, int GameStage, int Rarity);
};


// Class GearboxFramework.PopulationFactory
// 0x001C (0x003C - 0x0058)
class UPopulationFactory : public UObject
{
public:
	struct FPointer                                    VfTable_IIConstructObject;                                // 0x003C(0x0004) (Const, Native, NoExport)
	TArray<class UBehaviorBase*>                       OnActorSpawn;                                             // 0x0040(0x000C) (Edit, Const, NeedCtorLink, EditInline)
	struct FDestructionParameters                      DestructionParams;                                        // 0x004C(0x0004) (Edit, Const)
	unsigned long                                      bIsCriticalActor : 1;                                     // 0x0050(0x0004) (Edit, Const)
	unsigned long                                      bUseSavedLocationWhenRestored : 1;                        // 0x0050(0x0004) (Edit, Const)
	unsigned long                                      UseCostOverride : 1;                                      // 0x0050(0x0004) (Edit, Const)
	int                                                SpawnCostOverride;                                        // 0x0054(0x0004) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("PopulationFactory");
		return ptr;
	}


	struct FString GetDescriptionOfFactoryOutput();
	static bool ShouldSavePopulationActor(class UPopulationMaster* Master, class AActor* ActorToSave);
	static bool DestroyPopulationActor(class UPopulationMaster* Master, int nOpportunityIdx, class AActor* ActorToDestroy, class UPopulationFactory* SpawnFactory, int CreationFlags, bool bDontSaveActor);
	class AActor* CreatePopulationActor(class UPopulationMaster* Master, class APopulationOpportunity* Opportunity, class UObject* SpawnLocationContextObject, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, int GameStage, int Rarity);
	struct FBoxSphereBounds GetSpawnVisibilityBounds(int GameStage, int Rarity);
	class UPawnAllegiance* GetActorAllegiance(int GameStage, int Rarity);
	int GetActorSpawnCost(int GameStage, int Rarity, bool bCanSpawnTest);
	void OnSpawnActor(class AActor* aNewActor);
	static void SetupMatineeForActor(class AActor* aNewActor);
	class UPopulationFactory* GetSpawnFactory(class APopulationOpportunity* SpawningOpportunity, int GameStage, int Rarity);
	float GetSpawnProbabilityAtThisGameStage(int GameStage, int Rarity);
	bool IsFactoryWithin(class UPopulationFactory* TestFactory);
	bool CanSpawn(class APopulationOpportunity* SpawningOpportunity);
};


// Class GearboxFramework.PopulationFactoryGeneric
// 0x0004 (0x0058 - 0x005C)
class UPopulationFactoryGeneric : public UPopulationFactory
{
public:
	class AActor*                                      ActorArchetype;                                           // 0x0058(0x0004) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("PopulationFactoryGeneric");
		return ptr;
	}


	class AActor* CreatePopulationActor(class UPopulationMaster* Master, class APopulationOpportunity* Opportunity, class UObject* SpawnLocationContextObject, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, int GameStage, int Rarity);
	struct FBoxSphereBounds GetSpawnVisibilityBounds(int GameStage, int Rarity);
};


// Class GearboxFramework.PopulationFactoryPopulationDefinition
// 0x0004 (0x0058 - 0x005C)
class UPopulationFactoryPopulationDefinition : public UPopulationFactory
{
public:
	class UPopulationDefinition*                       PopulationDef;                                            // 0x0058(0x0004) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("PopulationFactoryPopulationDefinition");
		return ptr;
	}


	class UPopulationFactory* GetSpawnFactory(class APopulationOpportunity* SpawningOpportunity, int GameStage, int Rarity);
	class UPawnAllegiance* GetActorAllegiance(int GameStage, int AwesomeLevel);
	bool IsFactoryWithin(class UPopulationFactory* TestFactory);
};


// Class GearboxFramework.PopulationOpportunity
// 0x0068 (0x0188 - 0x01F0)
class APopulationOpportunity : public AInfo
{
public:
	struct FPointer                                    VfTable_IIBodyCompositionInstance;                        // 0x0188(0x0004) (Const, Native, NoExport)
	struct FOpportunityCleanupParameters               CleanupParams;                                            // 0x018C(0x0008) (Edit, Const)
	unsigned long                                      IsEnabled : 1;                                            // 0x0194(0x0004) (Edit)
	unsigned long                                      bNoRespawning : 1;                                        // 0x0194(0x0004) (Edit, Const)
	unsigned long                                      bIsWaitingForRespawn : 1;                                 // 0x0194(0x0004) (Transient)
	unsigned long                                      bUseRandomSpawns : 1;                                     // 0x0194(0x0004) (Transient)
	TArray<class APopulationPoint*>                    SpawnPoints;                                              // 0x0198(0x000C) (Edit, NeedCtorLink)
	class ULevelStreaming*                             StreamingLevel;                                           // 0x01A4(0x0004) (Transient)
	int                                                SystemID;                                                 // 0x01A8(0x0004) (Transient)
	int                                                NextInitialDestinationIdx;                                // 0x01AC(0x0004) (Transient)
	class UGearboxSeqAct_PopulationOpportunityLink*    SequenceActionLink;                                       // 0x01B0(0x0004) (Transient)
	float                                              LastTimeBlockedFromSpawningDueToPopLimits;                // 0x01B4(0x0004) (Transient)
	float                                              RespawnDelayStartTime;                                    // 0x01B8(0x0004) (Transient)
	class URegionDefinition*                           GameStageRegion;                                          // 0x01BC(0x0004) (Edit, Const)
	class UPopulationAspect*                           Aspect;                                                   // 0x01C0(0x0004) (Edit, Const, ExportObject, NeedCtorLink, EditInline)
	TArray<class UPopulationAspect*>                   Aspects;                                                  // 0x01C4(0x000C) (Edit, Const, ExportObject, NeedCtorLink, EditInline)
	int                                                SpawnIndex;                                               // 0x01D0(0x0004) (Transient)
	TArray<int>                                        SpawnList;                                                // 0x01D4(0x000C) (Transient, NeedCtorLink)
	int                                                InclusiveSpawnIndex;                                      // 0x01E0(0x0004) (Transient)
	TArray<int>                                        InclusiveSpawnList;                                       // 0x01E4(0x000C) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("PopulationOpportunity");
		return ptr;
	}


	void ClearBodyCompositionInstance();
	void ApplyPreviewBodyComposition();
	FScriptInterface GetBodyInfoProvider();
	void ChangeInstanceDataSwitch(const struct FName& SwitchName, unsigned char NewValue);
	void PostInitBodyComposition(const struct FName& Identifier, class UObject* Value, int BodyCompositionIndex, unsigned char Mode);
	void PreRemoveBodyComposition(const struct FName& Identifier, class UObject* Value, int BodyCompositionIndex);
	float GetNumSpawned();
	float GetNumAlive();
	float GetNumDied();
	void Destroyed();
	int GetRarity();
	int GetGameStage();
	bool GetOpportunityGameStage(int* GameStage, int* Rarity);
	void TriggerKismetAllSpawnedEvent();
	void ClearSequenceActionLink();
	void SetSequenceActionLink(class UGearboxSeqAct_PopulationOpportunityLink* Link);
	void SetEnabledStatus(bool bEnable);
	void OnToggle(class USeqAct_Toggle* Action);
	void GetNumLeftToSpawnAndStillAlive(int* NumLeftToSpawn, int* NumStillAlive);
	float GetNextSpawnTime();
	void RespawnKilledActors(float PercentageOfKilledActorsToRespawn);
	void DoSpawning(class UPopulationMaster* PopMaster);
};


// Class GearboxFramework.PopulationMaster
// 0x004C (0x003C - 0x0088)
class UPopulationMaster : public UObject
{
public:
	TArray<struct FPopulationOpportunityTracker>       OpportunityList;                                          // 0x003C(0x000C) (NeedCtorLink)
	int                                                ActiveActorCost;                                          // 0x0048(0x0004)
	int                                                MaxActorCost;                                             // 0x004C(0x0004)
	float                                              MasterThinkRate;                                          // 0x0050(0x0004)
	float                                              MasterTestForDestroyRate;                                 // 0x0054(0x0004)
	float                                              IfIrrelevantDestroyTimeout;                               // 0x0058(0x0004)
	TArray<struct FPopulationMasterStat>               PopulationMasterStats;                                    // 0x005C(0x000C) (NeedCtorLink)
	TArray<struct FEncounterTracker>                   EncounterList;                                            // 0x0068(0x000C) (NeedCtorLink)
	float                                              SecondsElapsed;                                           // 0x0074(0x0004)
	float                                              NextOpportunityTickTime;                                  // 0x0078(0x0004)
	float                                              NextDestroyTestTickTime;                                  // 0x007C(0x0004)
	float                                              PopulationRespawnDelayInSeconds;                          // 0x0080(0x0004)
	unsigned long                                      bHasActorsReadyToDeleteIfSpaceIsNeeded : 1;               // 0x0084(0x0004)
	unsigned long                                      bShutdownAIWhenIrrelevant : 1;                            // 0x0084(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("PopulationMaster");
		return ptr;
	}


	class AActor* GetActorSpawnedFromOpportunity(class APopulationOpportunity* Opportunity, int ActorIndex);
	void GetSavedActorDebugInfoForOpportunity(int OpportunityIndex, TArray<struct FString>* SavedActorsDebugInfo);
	int GetNumberOfSavedActorsForOpportunity(int OpportunityIndex);
	bool WillActorsOpportunityBeResetOnLevelLoad(class AActor* TestActor);
	void ResetRespawn();
	static class ULevelStreaming* GetStreamingLevelForActor(class AActor* OpportunityInLevel);
	bool HasCapacityToSpawnFromFactories(int GameStage, int Rarity, TArray<class UPopulationFactory*>* TheFactories);
	bool HasCapacityToSpawnFromFactory(class UPopulationFactory* TheFactory, int GameStage, int Rarity);
	bool IsPopulationSystemAtCapacity();
	void StatProfileStop(int nStat);
	void StatProfileStart(int nStat);
	float GetStatProfileTime(int nStat);
	void AddSavedActor(int OpportunityIdx, class AActor* TheActor, class UPopulationFactory* SpawnFactory, int CreationFlags);
	void DisconnectEncounter(class APopulationEncounter* Encounter);
	void ConnectEncounter(class APopulationEncounter* Encounter);
	bool DisconnectOpportunity(class APopulationOpportunity* DeactivatedOpportunity, bool bSaveState);
	bool ConnectOpportunity(class APopulationOpportunity* ActivatedOpportunity);
	class AWorldInfo* GetWorldInfo();
	void DestroySpawnedActors(class APopulationOpportunity* Opportunity, bool bDontSaveActors);
	void RemoveSpawnedActor(class AActor* TheActor, bool bKeepBody, bool bActorDied);
	void SetSpawnedActorsReuse(class AActor* TheActor, bool bReuse);
	void AddExternalActor(class AActor* SpawnedActor, class UClass* FactoryClass);
	class AActor* SpawnActorFromOpportunity(class UPopulationFactory* TheFactory, class UObject* SpawnLocationContextObject, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, int GameStage, int Rarity, int OpportunityIdx, int PopOppFlags, bool bCanSave, bool bForceSpawn);
	class AActor* SpawnActor(class UPopulationFactory* TheFactory, class UObject* SpawnLocationContextObject, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, int GameStage, int Rarity);
	int GetPopulationOpportunityIndex(class APopulationOpportunity* Opportunity);
	class APopulationOpportunity* GetActorsOpportunity(class AActor* SpawnedActor);
	class AActor* SpawnPopulationControlledActor(class UClass* SpawnClass, class AActor* SpawnOwner, const struct FName& SpawnTag, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, class AActor* ActorTemplate, bool bNoCollisionFail, bool bPersistAcrossLevelTransitions);
};


// Class GearboxFramework.PopulationOpportunityArea
// 0x0040 (0x01F0 - 0x0230)
class APopulationOpportunityArea : public APopulationOpportunity
{
public:
	TArray<struct FPopulationOptionAreaData>           SpawnOptions;                                             // 0x01F0(0x000C) (Edit, NeedCtorLink)
	unsigned long                                      bContinueSpawningAfterPlayerDetected : 1;                 // 0x01FC(0x0004) (Edit)
	unsigned long                                      bOpportunityVolume : 1;                                   // 0x01FC(0x0004) (Edit)
	unsigned long                                      bOpportunityRadius : 1;                                   // 0x01FC(0x0004) (Edit)
	unsigned long                                      bOpportunityLevel : 1;                                    // 0x01FC(0x0004) (Edit)
	unsigned long                                      bPlayerHasBeenDetected : 1;                               // 0x01FC(0x0004) (Transient)
	TArray<class AVolume*>                             DetectionVolumes;                                         // 0x0200(0x000C) (Edit, NeedCtorLink)
	float                                              DetectionRadius;                                          // 0x020C(0x0004) (Edit)
	int                                                SelectedSpawnIdx;                                         // 0x0210(0x0004) (Transient)
	TArray<struct FPopulationAreaOptionSpawnData>      SpawnData;                                                // 0x0214(0x000C) (Transient, NeedCtorLink)
	TArray<class APlayerController*>                   PlayersDetected;                                          // 0x0220(0x000C) (Transient, NeedCtorLink)
	int                                                NumPlayersDetected;                                       // 0x022C(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("PopulationOpportunityArea");
		return ptr;
	}


	void ApplyPreviewBodyComposition();
	FScriptInterface GetBodyInfoProvider();
	void RespawnKilledActors(float PercentageOfKilledActorsToRespawn);
	void DoSpawning(class UPopulationMaster* PopMaster);
};


// Class GearboxFramework.PopulationOpportunityCloner
// 0x0028 (0x01F0 - 0x0218)
class APopulationOpportunityCloner : public APopulationOpportunity
{
public:
	class UExpressionEvaluator*                        Conditions;                                               // 0x01F0(0x0004) (Edit, EditInline)
	class UPopulationFactory*                          SpawnFactory;                                             // 0x01F4(0x0004) (Edit, EditInline)
	int                                                MaxTotalActors;                                           // 0x01F8(0x0004) (Edit)
	int                                                MaxActiveActors;                                          // 0x01FC(0x0004) (Edit)
	unsigned char                                      RespawnStyle;                                             // 0x0200(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0201(0x0003) MISSED OFFSET
	unsigned long                                      bTotalResetOnLevelLoad : 1;                               // 0x0204(0x0004) (Edit, Const)
	unsigned long                                      bReadyToSpawn : 1;                                        // 0x0204(0x0004) (Transient)
	float                                              RespawnDelay;                                             // 0x0208(0x0004) (Edit)
	float                                              RespawnDelayAfterDeath;                                   // 0x020C(0x0004) (Edit)
	int                                                NumTotalActors;                                           // 0x0210(0x0004) (Transient)
	int                                                NumActiveActors;                                          // 0x0214(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("PopulationOpportunityCloner");
		return ptr;
	}


	void ApplyPreviewBodyComposition();
	FScriptInterface GetBodyInfoProvider();
	void CloneTimer();
	void RespawnKilledActors(float PercentageOfKilledActorsToRespawn);
	void DoSpawning(class UPopulationMaster* PopMaster);
};


// Class GearboxFramework.PopulationOpportunityCombat
// 0x009C (0x01F0 - 0x028C)
class APopulationOpportunityCombat : public APopulationOpportunity
{
public:
	struct FPointer                                    VfTable_IIGbxMessageListener;                             // 0x01F0(0x0004) (Const, Native, NoExport)
	class APopulationEncounter*                        ParentEncounter;                                          // 0x01F4(0x0004) (Edit, EditConst, DuplicateTransient)
	int                                                ParentEncounterWave;                                      // 0x01F8(0x0004) (Edit, EditConst, DuplicateTransient)
	class UPopulationDefinition*                       PopulationDef;                                            // 0x01FC(0x0004) (Edit)
	struct FAttributeInitializationData                MaxTotalActorsFormula;                                    // 0x0200(0x0010) (Edit)
	int                                                MaxTotalActors;                                           // 0x0210(0x0004)
	int                                                MaxActiveActorsIsNormal;                                  // 0x0214(0x0004) (Edit)
	int                                                MaxActiveActorsThreatened;                                // 0x0218(0x0004) (Edit)
	struct FAttributeInitializationData                RespawnDelayFormula;                                      // 0x021C(0x0010) (Edit)
	unsigned long                                      bAdjustForPlayerCount : 1;                                // 0x022C(0x0004) (Edit)
	unsigned long                                      bOpportunityVolume : 1;                                   // 0x022C(0x0004) (Edit)
	unsigned long                                      bOpportunityRadius : 1;                                   // 0x022C(0x0004) (Edit)
	unsigned long                                      bPlayerHasBeenDetected : 1;                               // 0x022C(0x0004) (Transient)
	unsigned long                                      bShowDebugEnabled : 1;                                    // 0x022C(0x0004)
	TArray<class AVolume*>                             DetectionVolumes;                                         // 0x0230(0x000C) (Edit, NeedCtorLink)
	float                                              DetectionRadius;                                          // 0x023C(0x0004) (Edit)
	float                                              OpportunityHeight;                                        // 0x0240(0x0004) (Edit)
	struct FColor                                      RadiusDebugColor;                                         // 0x0244(0x0004)
	float                                              RespawnDelay;                                             // 0x0248(0x0004)
	class UDrawSphereComponent*                        DetectionDrawSphere;                                      // 0x024C(0x0004) (ExportObject, Transient, Component, EditInline)
	float                                              ActivePlayerScale;                                        // 0x0250(0x0004) (Transient)
	TArray<class AGearboxPawn*>                        SpawnedMembers;                                           // 0x0254(0x000C) (Transient, NeedCtorLink)
	struct FPopulationOptionSpawnData                  SpawnData;                                                // 0x0260(0x001C) (Transient, NeedCtorLink)
	TArray<class APlayerController*>                   PlayersDetected;                                          // 0x027C(0x000C) (Transient, NeedCtorLink)
	int                                                NumPlayersDetected;                                       // 0x0288(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("PopulationOpportunityCombat");
		return ptr;
	}


	void ApplyPreviewBodyComposition();
	FScriptInterface GetBodyInfoProvider();
	void TriggerKismetSingleDeathEvent();
	void TriggerKismetDeathEvent();
	float GetNumSpawned();
	float GetNumAlive();
	float GetNumDied();
	bool WantsToStopListening();
	class AActor* GetActor();
	struct FVector GetListenerLocation();
	class UPawnAllegiance* GetAllegiance();
	bool ReceiveMessage(class UGbxMessage* Message);
	bool CaresAboutMessage(class UGbxMessage* Message);
	void PostBeginPlay();
	void EnableDebugging(bool bEnabled);
	void RespawnKilledActors(float PercentageOfKilledActorsToRespawn);
	void DoSpawning(class UPopulationMaster* PopMaster);
};


// Class GearboxFramework.PopulationOpportunityPoint
// 0x002C (0x01F0 - 0x021C)
class APopulationOpportunityPoint : public APopulationOpportunity
{
public:
	struct FPointer                                    VfTable_IIPopulationSpawnPoint;                           // 0x01F0(0x0004) (Const, Native, NoExport)
	class UPopulationDefinition*                       PopulationDef;                                            // 0x01F4(0x0004) (Edit)
	float                                              SpawnAndCullRadius;                                       // 0x01F8(0x0004) (Edit)
	TArray<class UBehaviorBase*>                       SpawnCustomizations;                                      // 0x01FC(0x000C) (Edit, Const, NeedCtorLink, EditInline)
	unsigned long                                      SpawnedForMatinee : 1;                                    // 0x0208(0x0004) (Edit)
	unsigned long                                      bHasSpawned : 1;                                          // 0x0208(0x0004) (Transient)
	unsigned long                                      bActiveSpawn : 1;                                         // 0x0208(0x0004) (Transient)
	unsigned long                                      bDetectedPlayer : 1;                                      // 0x0208(0x0004) (Transient)
	unsigned char                                      AISpawnStyle;                                             // 0x020C(0x0001) (Edit, Const)
	unsigned char                                      InitialAction;                                            // 0x020D(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x2];                                       // 0x020E(0x0002) MISSED OFFSET
	TArray<class AActor*>                              InitialActionDestinations;                                // 0x0210(0x000C) (Edit, Const, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("PopulationOpportunityPoint");
		return ptr;
	}


	void ClearBodyCompositionInstance();
	void ApplyPreviewBodyComposition();
	FScriptInterface GetBodyInfoProvider();
	void ChangeInstanceDataSwitch(const struct FName& SwitchName, unsigned char NewValue);
	void PostInitBodyComposition(const struct FName& Identifier, class UObject* Value, int BodyCompositionIndex, unsigned char Mode);
	void PreRemoveBodyComposition(const struct FName& Identifier, class UObject* Value, int BodyCompositionIndex);
	float GetInitialMovementHoldTime();
	class AActor* GetInitialDestination();
	unsigned char GetInitialActionType();
	unsigned char GetSpawnStyleType();
	void RespawnKilledActors(float PercentageOfKilledActorsToRespawn);
	void DoSpawning(class UPopulationMaster* PopMaster);
};


// Class GearboxFramework.PopulationOpportunityAreaRenderingComponent
// 0x0000 (0x0210 - 0x0210)
class UPopulationOpportunityAreaRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("PopulationOpportunityAreaRenderingComponent");
		return ptr;
	}

};


// Class GearboxFramework.PopulationOpportunityAttributeContextResolver
// 0x0000 (0x003C - 0x003C)
class UPopulationOpportunityAttributeContextResolver : public UAttributeContextResolver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("PopulationOpportunityAttributeContextResolver");
		return ptr;
	}

};


// Class GearboxFramework.PopulationOpportunityPointRenderingComponent
// 0x0000 (0x0210 - 0x0210)
class UPopulationOpportunityPointRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("PopulationOpportunityPointRenderingComponent");
		return ptr;
	}

};


// Class GearboxFramework.PopulationPoint
// 0x0040 (0x0188 - 0x01C8)
class APopulationPoint : public AActor
{
public:
	struct FPointer                                    VfTable_IIPopulationSpawnPoint;                           // 0x0188(0x0004) (Const, Native, NoExport)
	int                                                Flags;                                                    // 0x018C(0x0004) (EditConst)
	unsigned char                                      AISpawnStyle;                                             // 0x0190(0x0001) (Const)
	unsigned char                                      InitialAction;                                            // 0x0191(0x0001) (Const)
	unsigned char                                      ConstraintType;                                           // 0x0192(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0193(0x0001) MISSED OFFSET
	TArray<class AActor*>                              InitialActionDestinations;                                // 0x0194(0x000C) (Edit, NeedCtorLink)
	float                                              InitialMovementHoldTime;                                  // 0x01A0(0x0004) (Const)
	unsigned long                                      bAttachSpawnedToBase : 1;                                 // 0x01A4(0x0004) (Edit, Const)
	unsigned long                                      IsEnabled : 1;                                            // 0x01A4(0x0004) (Edit)
	unsigned long                                      bDisableAfterUse : 1;                                     // 0x01A4(0x0004) (Edit, Const)
	unsigned long                                      TestVisibility : 1;                                       // 0x01A4(0x0004) (Edit, Const)
	unsigned long                                      TestFOV : 1;                                              // 0x01A4(0x0004) (Edit, Const)
	int                                                InitialDestinationIndex;                                  // 0x01A8(0x0004) (Transient)
	TArray<class UPopulationSpawnedActorTagDefinition*> TagsToUseWithConstraint;                                  // 0x01AC(0x000C) (Edit, Const, NeedCtorLink)
	TArray<class UBehaviorBase*>                       OnSpawnCustomizations;                                    // 0x01B8(0x000C) (Edit, Const, NeedCtorLink, EditInline)
	float                                              MinSpawnDistance;                                         // 0x01C4(0x0004) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("PopulationPoint");
		return ptr;
	}


	bool CanSpawnFromFactory(class UPopulationFactory* Factory, int GameStage, int AwesomeLevel);
	struct FRotator GetSpawnRotation();
	struct FVector GetSpawnLocation();
	void ActorSpawned(class AActor* SpawnedActor);
	float GetInitialMovementHoldTime();
	class AActor* GetInitialDestination();
	void RandomizeInitialDestinations();
	unsigned char GetInitialActionType();
	unsigned char GetSpawnStyleType();
	void OnToggle(class USeqAct_Toggle* Action);
};


// Class GearboxFramework.PopulationPoint_Dynamic
// 0x000C (0x01C8 - 0x01D4)
class APopulationPoint_Dynamic : public APopulationPoint
{
public:
	struct FName                                       DynamicPointName;                                         // 0x01C8(0x0008) (Edit)
	unsigned long                                      bSaveAsInstanceDataOnBase : 1;                            // 0x01D0(0x0004) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("PopulationPoint_Dynamic");
		return ptr;
	}

};


// Class GearboxFramework.PopulationPointRenderingComponent
// 0x0000 (0x0210 - 0x0210)
class UPopulationPointRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("PopulationPointRenderingComponent");
		return ptr;
	}

};


// Class GearboxFramework.SeqEvent_EncounterWaveComplete
// 0x0004 (0x00C4 - 0x00C8)
class USeqEvent_EncounterWaveComplete : public USequenceEvent
{
public:
	int                                                CurrentWave;                                              // 0x00C4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SeqEvent_EncounterWaveComplete");
		return ptr;
	}


	void NotifyWaveComplete(int nWave);
};


// Class GearboxFramework.SeqEvent_PopulatedActor
// 0x0008 (0x00C4 - 0x00CC)
class USeqEvent_PopulatedActor : public USequenceEvent
{
public:
	class APopulationOpportunity*                      DestPopulationOpportunity;                                // 0x00C4(0x0004)
	class AActor*                                      SpawnPoint;                                               // 0x00C8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SeqEvent_PopulatedActor");
		return ptr;
	}


	void NotifyPopulatedActor(class AActor* PopulatedActor, class APopulationOpportunity* InDestPopulationOpportunity, class AActor* InSpawnPoint, class AWorldInfo* InOriginator);
};


// Class GearboxFramework.SeqEvent_PopulatedPoint
// 0x0008 (0x00C4 - 0x00CC)
class USeqEvent_PopulatedPoint : public USequenceEvent
{
public:
	class APopulationOpportunity*                      DestPopulationOpportunity;                                // 0x00C4(0x0004)
	class AActor*                                      SpawnPoint;                                               // 0x00C8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SeqEvent_PopulatedPoint");
		return ptr;
	}


	void NotifyPopulatedActor(class AActor* PopulatedActor, class APopulationOpportunity* InDestPopulationOpportunity, class AActor* InSpawnPoint, class AWorldInfo* InOriginator);
};


// Class GearboxFramework.GearboxHUD
// 0x0000 (0x0224 - 0x0224)
class AGearboxHUD : public AHUD
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxHUD");
		return ptr;
	}

};


// Class GearboxFramework.AIDefinition
// 0x0024 (0x003C - 0x0060)
class UAIDefinition : public UObject
{
public:
	struct FPointer                                    VfTable_IIBehaviorProvider;                               // 0x003C(0x0004) (Const, Native, NoExport)
	class UBehaviorProviderDefinition*                 BehaviorProviderDefinition;                               // 0x0040(0x0004) (Edit, Const, EditConst)
	class UAIBehaviorProviderDefinition*               AIBehaviorProviderDefinition;                             // 0x0044(0x0004) (Const)
	unsigned long                                      bHealOnReset : 1;                                         // 0x0048(0x0004) (Edit)
	TArray<struct FAITreeData>                         NodeList;                                                 // 0x004C(0x000C) (Const, NeedCtorLink)
	float                                              TargetSearchRadius;                                       // 0x0058(0x0004) (Edit, Const)
	class UTargetingDefinition*                        TargetingDef;                                             // 0x005C(0x0004) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AIDefinition");
		return ptr;
	}


	void OnReset(struct FBehaviorConsumerHandle* ConsumerHandle);
	void OnHitByVehicle(class AVehicle* Vehicle, struct FBehaviorConsumerHandle* ConsumerHandle);
	void OnRanOver(class AVehicle* Vehicle, struct FBehaviorConsumerHandle* ConsumerHandle);
	void OnTimerEvent(const struct FName& SpecializedEventName, struct FBehaviorConsumerHandle* ConsumerHandle);
	void OnKilledPawn(class UObject* Killed, struct FBehaviorConsumerHandle* ConsumerHandle);
	void OnLanded(struct FBehaviorConsumerHandle* ConsumerHandle);
	void OnStopFiringWeapon(struct FBehaviorConsumerHandle* ConsumerHandle);
	void OnStartFiringWeapon(struct FBehaviorConsumerHandle* ConsumerHandle);
	void OnTargetLost(class UObject* OldTarget, struct FBehaviorConsumerHandle* ConsumerHandle);
	void OnTargetChanged(class UObject* OldTarget, class UObject* NewTarget, struct FBehaviorConsumerHandle* ConsumerHandle);
	void OnTargetAcquired(class UObject* NewTarget, struct FBehaviorConsumerHandle* ConsumerHandle);
	void OnSpawned(struct FBehaviorConsumerHandle* ConsumerHandle);
	void OnTakeHeal(class UObject* Instigator, float Damage, float ShieldDamage, class UObject* DamageSource, class UObject* DamageType, struct FBehaviorConsumerHandle* ConsumerHandle);
	void OnVehicleTakeDamage(class UObject* Instigator, class UObject* HitVehicle, float Damage, float ShieldDamage, class UObject* DamageSource, class UObject* DamageType, struct FBehaviorConsumerHandle* ConsumerHandle);
	void OnTakeDamage(class UObject* Instigator, float Damage, float ShieldDamage, class UObject* DamageSource, class UObject* DamageType, struct FBehaviorConsumerHandle* ConsumerHandle);
	void OnUserCouldNotAffordSecondary(unsigned char EventOutput, class UObject* Instigator, class UObject* UsedComponent, struct FBehaviorConsumerHandle* ConsumerHandle);
	void OnUserCouldNotAfford(unsigned char EventOutput, class UObject* Instigator, class UObject* UsedComponent, struct FBehaviorConsumerHandle* ConsumerHandle);
	void OnSecondaryUsed(unsigned char EventOutput, class UObject* Instigator, class UObject* UsedComponent, struct FBehaviorConsumerHandle* ConsumerHandle);
	void OnUsed(unsigned char EventOutput, class UObject* Instigator, class UObject* UsedComponent, struct FBehaviorConsumerHandle* ConsumerHandle);
	void SetBehaviorProviderDefinition(class UBehaviorProviderDefinition* NewBehaviorProviderDefinition);
	class UBehaviorProviderDefinition* GetBehaviorProviderDefinition();
};


// Class GearboxFramework.BehaviorEventFilterBase
// 0x0004 (0x003C - 0x0040)
class UBehaviorEventFilterBase : public UObject
{
public:
	unsigned long                                      ShouldBeInstanced : 1;                                    // 0x003C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BehaviorEventFilterBase");
		return ptr;
	}

};


// Class GearboxFramework.BehaviorProviderDefinition
// 0x0010 (0x003C - 0x004C)
class UBehaviorProviderDefinition : public UGBXDefinition
{
public:
	int                                                CurrentVersion;                                           // 0x003C(0x0004)
	TArray<struct FBehaviorSequenceData>               BehaviorSequences;                                        // 0x0040(0x000C) (Edit, Const, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BehaviorProviderDefinition");
		return ptr;
	}


	static void SetObjectBehaviorVariable(class UObject* Value, struct FBehaviorVariableValue* BehaviorVariable);
	static void SetVectorBehaviorVariable(struct FBehaviorVariableValue* BehaviorVariable, struct FVector* Value);
	static void SetFloatBehaviorVariable(float Value, struct FBehaviorVariableValue* BehaviorVariable);
	static void SetIntBehaviorVariable(int Value, struct FBehaviorVariableValue* BehaviorVariable);
	static void SetBoolBehaviorVariable(bool Value, struct FBehaviorVariableValue* BehaviorVariable);
};


// Class GearboxFramework.BehaviorKernel
// 0x0088 (0x003C - 0x00C4)
class UBehaviorKernel : public UObject
{
public:
	struct FStableArray_Mirror                         Processes;                                                // 0x003C(0x001C) (Native, Transient)
	struct FChunkedList_Mirror                         ProcessDeathList;                                         // 0x0058(0x0004) (Native, Transient)
	struct FChunkedList_Mirror                         WaitingThreads;                                           // 0x005C(0x0004) (Native, Transient)
	TArray<struct FProviderRecord>                     Providers;                                                // 0x0060(0x000C) (Transient, AlwaysInit, NeedCtorLink)
	struct FChunkedList_Mirror                         ProvidersIndexFreeList;                                   // 0x006C(0x0004) (Native, Transient)
	struct FChunkedList_Mirror                         ProvidersPendingRemoval;                                  // 0x0070(0x0004) (Native, Transient)
	TArray<class UObject*>                             ObjectVariables;                                          // 0x0074(0x000C) (Transient, AlwaysInit, NeedCtorLink)
	struct FChunkedList_Mirror                         ObjectVariablesIndexFreeList;                             // 0x0080(0x0004) (Native, Transient)
	TArray<struct FBehaviorSequenceActionData2>        DynamicBehaviors;                                         // 0x0084(0x000C) (Transient, AlwaysInit, NeedCtorLink)
	struct FChunkedList_Mirror                         DynamicBehaviorsIndexFreeList;                            // 0x0090(0x0004) (Native, Transient)
	int                                                ProvidersListReserveLength;                               // 0x0094(0x0004) (Config)
	int                                                ObjectVariablesListReserveLength;                         // 0x0098(0x0004) (Config)
	int                                                DynamicBehaviorsListReserveLength;                        // 0x009C(0x0004) (Config)
	int                                                WatchedPID;                                               // 0x00A0(0x0004) (Transient)
	struct FChunkedList_Mirror                         RecentlyRunBehaviors;                                     // 0x00A4(0x0004) (Native, Transient)
	int                                                CurrentDebugPage;                                         // 0x00A8(0x0004) (Transient)
	TArray<struct FString>                             DebugPages;                                               // 0x00AC(0x000C) (Transient, NeedCtorLink)
	TArray<class UObject*>                             EventFilterObjects;                                       // 0x00B8(0x000C) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BehaviorKernel");
		return ptr;
	}


	void RecentlyRunBehaviorsForSequence(int PID, int ProvidersIndex, int SequencesIndex, struct FBehaviorExecutionRecord* ExecutionRecord);
	void AllEventStateForSequence(int PID, int ProvidersIndex, int SequencesDataIndex, struct FBehaviorEventState* EventState);
	void AllWaitingThreadsForSequence(int PID, int ProvidersIndex, int SequencesDataIndex, struct FBehaviorThread* Thread);
	void AllSequencesForProvider(int PID, int ProvidersIndex, struct FBehaviorSequenceState* SequenceState);
	void AllProvidersForProcess(int PID, class UBehaviorProviderDefinition** ProviderDefinition, int* ProvidersIndex);
	void AllProcesses(struct FBehaviorProcess* Process);
	void GetVariableStateSummaryForSequence(int PID, int SequencesDataIndex, TArray<struct FString>* DebugInfo);
	void GetChunkedListSummaries(TArray<struct FString>* DebugInfo);
	struct FBehaviorKernelStats GetBehaviorKernelStats();
	static bool IsBehaviorKernelWatchingConsumer(const struct FBehaviorConsumerHandle& ConsumerHandle);
	static bool IsBehaviorSequenceEnabled(class UBehaviorProviderDefinition* ProviderDefinition, const struct FName& BehaviorSequenceName, struct FBehaviorConsumerHandle* ConsumerHandle);
	static void ActivateBehaviorOutputLink(int OutputLinkId, struct FBehaviorKernelInfo* KernelInfo);
	static void PublishBoolOutputVariable(bool Output, struct FBehaviorKernelInfo* KernelInfo);
	static void PublishObjectOutputVariable(class UObject* Output, struct FBehaviorKernelInfo* KernelInfo);
	static void PublishVectorOutputVariable(struct FBehaviorKernelInfo* KernelInfo, struct FVector* Output);
	static void PublishFloatOutputVariable(float Output, struct FBehaviorKernelInfo* KernelInfo);
	static void PublishIntOutputVariable(int Output, struct FBehaviorKernelInfo* KernelInfo);
	static void BeginNondeterministicProviderRegistration(struct FBehaviorConsumerHandle* ConsumerHandle);
	static void ProcessReplicatedBehaviorEvent(struct FBehaviorConsumerHandle* ConsumerHandle, struct FReplicatedBehaviorEvent* EventData);
	static bool ProcessReplicatedBehaviorConsumerState(struct FBehaviorConsumerHandle* ConsumerHandle, struct FReplicatedBehaviorConsumerState* ReplicatedConsumerState);
	static void ChangeBehaviorSequenceActivationStatus(class UBehaviorProviderDefinition* ProviderDefinition, const struct FName& SequenceName, unsigned char ActivationStatusChanage, struct FBehaviorConsumerHandle* ConsumerHandle);
	static void ChangeBehaviorConsumerSuspensionStatus(unsigned char SuspensionStatusChanage, struct FBehaviorConsumerHandle* ConsumerHandle);
	static void BroadcastBehaviorEventFromScript(const struct FName& EventName, int EventOutputToActivate, struct FBehaviorConsumerHandle* ConsumerHandle, TArray<class UBehaviorProviderDefinition*>* ProvidersToBroadcast, TArray<struct FBehaviorVariableValue>* Parameters);
	static void ActivateBehaviorEventFromScript(class UBehaviorProviderDefinition* ProviderDefinition, const struct FName& EventName, int EventOutputToActivate, struct FBehaviorConsumerHandle* ConsumerHandle, TArray<struct FBehaviorVariableValue>* Parameters);
	static void RemoveBehaviorProviderFromConsumer(class UBehaviorProviderDefinition* ProviderDefinition, struct FBehaviorConsumerHandle* ConsumerHandle);
	static void IntializeBehaviorProviderForConsumer(class UBehaviorProviderDefinition* ProviderDefinition, struct FBehaviorConsumerHandle* ConsumerHandle);
	static void ForceUnregisterBehaviorConsumer(struct FBehaviorConsumerHandle* ConsumerHandle);
	static struct FBehaviorConsumerHandle RegisterBehaviorConsumer(class UObject* BehaviorConsumer);
};


// Class GearboxFramework.AIBehaviorProviderDefinition
// 0x0000 (0x004C - 0x004C)
class UAIBehaviorProviderDefinition : public UBehaviorProviderDefinition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AIBehaviorProviderDefinition");
		return ptr;
	}

};


// Class GearboxFramework.BehaviorSequenceCustomEnableCondition
// 0x0005 (0x003C - 0x0041)
class UBehaviorSequenceCustomEnableCondition : public UObject
{
public:
	struct FChunkedList_Mirror                         LinkedBehaviorSequences;                                  // 0x003C(0x0004) (Native, Transient)
	unsigned char                                      BehaviorKernelInstanceTagForTransientState;               // 0x0040(0x0001) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BehaviorSequenceCustomEnableCondition");
		return ptr;
	}

};


// Class GearboxFramework.BehaviorSequenceEnableByMultipleConditions
// 0x0010 (0x0041 - 0x0051)
class UBehaviorSequenceEnableByMultipleConditions : public UBehaviorSequenceCustomEnableCondition
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	TArray<class UBehaviorSequenceCustomEnableCondition*> EnableConditions;                                         // 0x0044(0x000C) (Edit, Const, NeedCtorLink, EditInline)
	unsigned char                                      Operator;                                                 // 0x0050(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BehaviorSequenceEnableByMultipleConditions");
		return ptr;
	}

};


// Class GearboxFramework.IBehaviorProvider
// 0x0000 (0x003C - 0x003C)
class UIBehaviorProvider : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("IBehaviorProvider");
		return ptr;
	}


	void SetBehaviorProviderDefinition(class UBehaviorProviderDefinition* NewBehaviorProviderDefinition);
	class UBehaviorProviderDefinition* GetBehaviorProviderDefinition();
};


// Class GearboxFramework.ICustomEvent
// 0x0000 (0x003C - 0x003C)
class UICustomEvent : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ICustomEvent");
		return ptr;
	}


	void RunCustomEvent(const struct FName& EventName, class UObject* EventInstigator, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData);
};


// Class GearboxFramework.GearboxAnimDefinition
// 0x0074 (0x0048 - 0x00BC)
class UGearboxAnimDefinition : public USpecialMoveDefinition
{
public:
	struct FPointer                                    VfTable_IIBehaviorProvider;                               // 0x0048(0x0004) (Const, Native, NoExport)
	struct FName                                       AnimName;                                                 // 0x004C(0x0008) (Edit, Const)
	float                                              BlendInTime;                                              // 0x0054(0x0004) (Edit, Const)
	float                                              BlendOutTime;                                             // 0x0058(0x0004) (Edit, Const)
	float                                              PlayRate;                                                 // 0x005C(0x0004) (Edit, Const)
	unsigned char                                      EndingCondition;                                          // 0x0060(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	class UAnimSet*                                    AnimSet;                                                  // 0x0064(0x0004) (Edit, Const)
	unsigned long                                      bMirrored : 1;                                            // 0x0068(0x0004) (Edit, Const)
	unsigned long                                      BlendPerBone : 1;                                         // 0x0068(0x0004) (Edit, Const)
	unsigned long                                      DisableAnimSequenceNotifies : 1;                          // 0x0068(0x0004) (Edit, Const)
	unsigned long                                      bOnlyPlayNotifiesWhileActive : 1;                         // 0x0068(0x0004) (Edit)
	unsigned long                                      bReverseAnimSearchOrder : 1;                              // 0x0068(0x0004) (Edit, Const)
	struct FName                                       AnimNodeName;                                             // 0x006C(0x0008) (Edit, Const)
	class URootMotionDefinition*                       RootMotionDef;                                            // 0x0074(0x0004) (Edit, Const)
	class UFeatherBoneBlendDefinition*                 BoneBlendDef;                                             // 0x0078(0x0004) (Edit, Const)
	TArray<struct FName>                               BoneNames;                                                // 0x007C(0x000C) (Edit, Const, NeedCtorLink)
	TArray<struct FSMBehavior>                         StartBehaviors;                                           // 0x0088(0x000C) (Edit, NeedCtorLink, EditInline)
	TArray<struct FSMNotify>                           SMNotifies;                                               // 0x0094(0x000C) (Edit, NeedCtorLink)
	TArray<struct FSMBehavior>                         StopBehaviors;                                            // 0x00A0(0x000C) (Edit, NeedCtorLink, EditInline)
	TArray<struct FTimedAnimBehaviorEvent>             TimedBehaviorEvents;                                      // 0x00AC(0x000C) (Edit, Const, NeedCtorLink)
	class UBehaviorProviderDefinition*                 BehaviorProviderDefinition;                               // 0x00B8(0x0004) (Edit, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxAnimDefinition");
		return ptr;
	}


	float GetAnimLength(class USkeletalMeshComponent* SMC);
	bool IsPlayingLocally(const FScriptInterface& SMI);
	class UAnimNodeSpecialMoveBlend* GetSMNode(const FScriptInterface& SMI);
	float PlayAnim(const FScriptInterface& SMI, struct FSpecialMoveData* SMData);
	void AnimFinished(const FScriptInterface& SMI, class UAnimNodeSpecialMoveBlend* BlendNode, bool bInterrupted, struct FSpecialMoveData* SMData);
	void ClientFinished(const FScriptInterface& SMI, bool bInterrupted);
	float ClientStarted(const FScriptInterface& SMI, struct FSpecialMoveData* SMData);
	void ServerFinished(const FScriptInterface& SMI, bool bInterrupted);
	void ServerStarted(const FScriptInterface& SMI);
	void AddAnimSet(const FScriptInterface& SMI);
	class USkeletalMeshComponent* GetSkeletalMesh(const FScriptInterface& SMI);
	bool AuthorityCanPlay(const FScriptInterface& SMI);
	void OnTimedEvent(const struct FName& SpecializedEventName, struct FBehaviorConsumerHandle* ConsumerHandle);
	void OnServerStop(struct FBehaviorConsumerHandle* ConsumerHandle);
	void OnServerStart(struct FBehaviorConsumerHandle* ConsumerHandle);
	void OnStop(struct FBehaviorConsumerHandle* ConsumerHandle);
	void OnStart(struct FBehaviorConsumerHandle* ConsumerHandle);
	void SetBehaviorProviderDefinition(class UBehaviorProviderDefinition* NewBehaviorProviderDefinition);
	class UBehaviorProviderDefinition* GetBehaviorProviderDefinition();
};


// Class GearboxFramework.Behavior_TriggerDialogEvent
// 0x001C (0x004C - 0x0068)
class UBehavior_TriggerDialogEvent : public UBehaviorBase
{
public:
	class UGearboxDialogEventTag*                      EventTag;                                                 // 0x004C(0x0004) (Edit)
	class UGearboxDialogGroup*                         Group;                                                    // 0x0050(0x0004) (Edit)
	class UGearboxDialogNameTag*                       NameTag;                                                  // 0x0054(0x0004) (Edit)
	class UObject*                                     Other;                                                    // 0x0058(0x0004) (Edit)
	unsigned long                                      bForcePlayImmediate : 1;                                  // 0x005C(0x0004) (Edit)
	unsigned long                                      bCheckCanPreview : 1;                                     // 0x005C(0x0004) (Transient, EditorOnly)
	unsigned long                                      bCanPreview : 1;                                          // 0x005C(0x0004) (Transient, EditorOnly)
	class UGearboxDialogEventData*                     MyEventData;                                              // 0x0060(0x0004) (Transient)
	int                                                MyDataUseCount;                                           // 0x0064(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Behavior_TriggerDialogEvent");
		return ptr;
	}


	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo);
	void TriggerDialogEvent(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, struct FBehaviorParameters* EventData);
};


// Class GearboxFramework.GearboxDialogActor
// 0x0034 (0x0188 - 0x01BC)
class AGearboxDialogActor : public AActor
{
public:
	struct FPointer                                    VfTable_IGearboxDialogInterface;                          // 0x0188(0x0004) (Const, Native, NoExport)
	TArray<class UGearboxDialogGroup*>                 DialogGroups;                                             // 0x018C(0x000C) (Edit, Const, NeedCtorLink)
	class UGearboxDialogNameTag*                       NameTag;                                                  // 0x0198(0x0004) (Edit, Const)
	class USpriteComponent*                            EditorSprite;                                             // 0x019C(0x0004) (Const, ExportObject, Component, EditInline)
	class UGearboxDialogComponent*                     DialogComponent;                                          // 0x01A0(0x0004) (ExportObject, Component, EditInline)
	struct FGearboxDialogReplicatedData                DialogReplicatedData;                                     // 0x01A4(0x0014) (Net, RepNotify)
	class UGearboxDialogNameTag*                       CurrentNameTag;                                           // 0x01B8(0x0004) (Net, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxDialogActor");
		return ptr;
	}


	void SetDialogNameTag(class UGearboxDialogNameTag* NewName);
	struct FGearboxDialogReplicatedData GetReplicatedDialogData();
	void SetReplicatedDialogData(class UGearboxDialogAct_Talk* TalkAct, struct FGearboxDialogData* Data);
	void GetDialogGroups(TArray<class UGearboxDialogGroup*>* Groups);
	class UGearboxDialogComponent* GetDialogComponent();
	class UGearboxDialogNameTag* GetDialogNameTag();
	class AActor* GetActor();
	bool CanTalk();
	void ServerDialog_TriggerEvent(class UGearboxDialogEventTag* EventTag, class AActor* Other, class UObject* ObjectParameter);
	void ReplicatedEvent(const struct FName& VarName);
};


// Class GearboxFramework.GearboxDialogComponent
// 0x0013 (0x0059 - 0x006C)
class UGearboxDialogComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	class UGearboxDialogEventData*                     EventData;                                                // 0x005C(0x0004) (Transient)
	struct FAkPlayingInfo                              ClientPlayingInfo;                                        // 0x0060(0x0008) (Transient, Component)
	unsigned long                                      bIsReattaching : 1;                                       // 0x0068(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxDialogComponent");
		return ptr;
	}


	bool IsTalking();
	void StopTalking(class UGearboxDialogEventTag* EventTag, bool bForceStop);
	void TalkReplicated(const struct FGearboxDialogReplicatedData& NewDialogData);
	void Talk(class UGearboxDialogAct_Talk* TalkAction);
	void GetMatchingEvent(class UGearboxDialogEventTag* InEventTag, bool bIncludeDisabled, class UGearboxDialogNameTag* OtherNameTag, bool bAllowTemplateGroups, class UGearboxDialogEvent** OutEvent, class UGearboxDialogGroup** OutGroup);
	class UGearboxDialogEventData* TriggerEvent(class UGearboxDialogEventTag* EventTag, class AActor* Other, class UObject* ObjectParameter, class UGearboxDialogEventData* TemplateEventData);
	FScriptInterface GetDialogInterface();
};


// Class GearboxFramework.GearboxDialogGroup
// 0x0060 (0x003C - 0x009C)
class UGearboxDialogGroup : public UObject
{
public:
	TArray<class UPackage*>                            EventTagPackages;                                         // 0x003C(0x000C) (Edit, Const, NeedCtorLink)
	TArray<class UGearboxDialogNameTag*>               NameTags;                                                 // 0x0048(0x000C) (Edit, Const, EditConst, NeedCtorLink)
	TArray<class UGearboxDialogEventTag*>              EventTags;                                                // 0x0054(0x000C) (Edit, Const, EditConst, NeedCtorLink)
	class UGearboxDialogGroup*                         ParentGroup;                                              // 0x0060(0x0004) (Edit, Const)
	TArray<class UGearboxDialogNode*>                  Nodes;                                                    // 0x0064(0x000C) (NeedCtorLink)
	class UGearboxDialogEvent*                         SharedDialogEvent;                                        // 0x0070(0x0004) (Transient)
	class UGearboxDialogAct_Talk*                      SharedTalkAct;                                            // 0x0074(0x0004) (Transient)
	TArray<struct FOutputLinkToStruct>                 OutputLinksToStructs;                                     // 0x0078(0x000C) (NeedCtorLink)
	TArray<struct FDialogEventData>                    DialogEvents;                                             // 0x0084(0x000C) (NeedCtorLink)
	TArray<struct FTalkActData>                        TalkActs;                                                 // 0x0090(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxDialogGroup");
		return ptr;
	}


	void SimpleEvent(class AActor* Owner, class UGearboxDialogNameTag* NameTag, class UGearboxDialogEventTag* EventTag);
};


// Class GearboxFramework.GearboxDialogEventData
// 0x003C (0x003C - 0x0078)
class UGearboxDialogEventData : public UObject
{
public:
	struct FDialogEventInfo                            EventInfo;                                                // 0x003C(0x0008)
	class AActor*                                      Instigator;                                               // 0x0044(0x0004)
	class AActor*                                      Other;                                                    // 0x0048(0x0004)
	class UObject*                                     ObjectParameter;                                          // 0x004C(0x0004)
	class AActor*                                      LastTalker;                                               // 0x0050(0x0004)
	class UGearboxDialogAct_Talk*                      LiveTalkAction;                                           // 0x0054(0x0004)
	int                                                LiveTalkActionDataID;                                     // 0x0058(0x0004)
	struct FDialogEventInfo                            TemplateEventInfo;                                        // 0x005C(0x0008)
	class UGearboxDialogAct_Trigger*                   LiveTriggerAction;                                        // 0x0064(0x0004)
	struct FAkPlayingInfo                              PlayingInfo;                                              // 0x0068(0x0008) (Component)
	float                                              TalkFinishTime;                                           // 0x0070(0x0004)
	int                                                UseCount;                                                 // 0x0074(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxDialogEventData");
		return ptr;
	}


	bool IsActive();
};


// Class GearboxFramework.GearboxDialogEventTag
// 0x0008 (0x003C - 0x0044)
class UGearboxDialogEventTag : public UGBXDefinition
{
public:
	unsigned long                                      bGroupEvent : 1;                                          // 0x003C(0x0004) (Edit, Const)
	unsigned long                                      bSoundEffect : 1;                                         // 0x003C(0x0004) (Edit, Const)
	unsigned long                                      bIsDeathScream : 1;                                       // 0x003C(0x0004) (Edit, Const)
	class UGearboxDialogPriority*                      Priority;                                                 // 0x0040(0x0004) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxDialogEventTag");
		return ptr;
	}

};


// Class GearboxFramework.GearboxDialogGlobalsDefinition
// 0x0010 (0x003C - 0x004C)
class UGearboxDialogGlobalsDefinition : public UGBXDefinition
{
public:
	class UAkRtpc*                                     PitchRTPC;                                                // 0x003C(0x0004) (Edit, Const)
	TArray<class UGearboxDialogPriority*>              Priorities;                                               // 0x0040(0x000C) (Edit, Const, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxDialogGlobalsDefinition");
		return ptr;
	}

};


// Class GearboxFramework.GearboxDialogTemplateGroup
// 0x0000 (0x009C - 0x009C)
class UGearboxDialogTemplateGroup : public UGearboxDialogGroup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxDialogTemplateGroup");
		return ptr;
	}

};


// Class GearboxFramework.GearboxDialogManager
// 0x0084 (0x003C - 0x00C0)
class UGearboxDialogManager : public UObject
{
public:
	unsigned long                                      bEnabled : 1;                                             // 0x003C(0x0004) (Transient)
	unsigned long                                      bShowDebug : 1;                                           // 0x003C(0x0004) (Transient)
	TArray<class AActor*>                              Talkers;                                                  // 0x0040(0x000C) (Transient, NeedCtorLink)
	TArray<class AActor*>                              DisabledTalkers;                                          // 0x004C(0x000C) (Transient, NeedCtorLink)
	TArray<class UGearboxDialogGroup*>                 Groups;                                                   // 0x0058(0x000C) (Transient, NeedCtorLink)
	class UGearboxDialogEventData*                     CurrentEventContext;                                      // 0x0064(0x0004) (Transient)
	struct FMap_Mirror                                 GroupEventTagMap;                                         // 0x0068(0x003C) (Const, Native, Transient)
	TArray<class UGearboxDialogEventData*>             EventDataPool;                                            // 0x00A4(0x000C) (Transient, NeedCtorLink)
	struct FString                                     EventDataClassPath;                                       // 0x00B0(0x000C) (Config, GlobalConfig, NeedCtorLink)
	class UClass*                                      EventDataClass;                                           // 0x00BC(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxDialogManager");
		return ptr;
	}


	void DrawDialogDebug(class AHUD* HUD, float StartY);
	void CheckpointRemoveReferencesBeforeDestroy();
	class UGearboxDialogEventTag* GetEventTagForEventInfo(const struct FDialogEventInfo& EventInfo);
	class UGearboxDialogEventData* TriggerGroupEvent(class UGearboxDialogGroup* Group, class UGearboxDialogEventTag* EventTag, class AActor* Instigator, class AActor* Other, class UObject* ObjectParameter, class UGearboxDialogEventData* TemplateEventData);
	void Cleanup();
	void SetGroupEventTag(class UGearboxDialogGroup* Group, class UGearboxDialogEventTag* EventTag);
	class UGearboxDialogEventTag* GetGroupEventTag(class UGearboxDialogGroup* Group);
	void SilenceGroup(class UGearboxDialogGroup* Group);
	void AddGroup(class UGearboxDialogGroup* Group);
	void UnregisterTalker(class AActor* Talker);
	void RegisterTalker(class AActor* Talker);
	void DisableTalker(class AActor* Talker);
	void EnableTalker(class AActor* Talker);
	int GetPriority(class UGearboxDialogPriority* InPriority);
};


// Class GearboxFramework.GearboxDialogNameTag
// 0x000C (0x003C - 0x0048)
class UGearboxDialogNameTag : public UGBXDefinition
{
public:
	struct FName                                       NameTag;                                                  // 0x003C(0x0008) (Edit)
	class UGearboxDialogNameTag*                       ParentTag;                                                // 0x0044(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxDialogNameTag");
		return ptr;
	}

};


// Class GearboxFramework.GearboxDialogPriority
// 0x0000 (0x003C - 0x003C)
class UGearboxDialogPriority : public UGBXDefinition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxDialogPriority");
		return ptr;
	}

};


// Class GearboxFramework.GearboxDialogNode
// 0x0004 (0x006C - 0x0070)
class UGearboxDialogNode : public UGearboxEditorNode
{
public:
	int                                                NodeID;                                                   // 0x006C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxDialogNode");
		return ptr;
	}


	void ActivateOutput(int Link);
};


// Class GearboxFramework.GearboxDialogAction
// 0x0000 (0x0070 - 0x0070)
class UGearboxDialogAction : public UGearboxDialogNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxDialogAction");
		return ptr;
	}


	void Activate();
};


// Class GearboxFramework.GearboxDialogAct_Chance
// 0x0010 (0x0070 - 0x0080)
class UGearboxDialogAct_Chance : public UGearboxDialogAction
{
public:
	float                                              Chance;                                                   // 0x0070(0x0004) (Edit)
	float                                              QuietTimeMin;                                             // 0x0074(0x0004) (Edit)
	float                                              QuietTimeMax;                                             // 0x0078(0x0004) (Edit)
	float                                              NextFireTime;                                             // 0x007C(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxDialogAct_Chance");
		return ptr;
	}


	void Activate();
};


// Class GearboxFramework.GearboxDialogAct_Compare
// 0x0000 (0x0070 - 0x0070)
class UGearboxDialogAct_Compare : public UGearboxDialogAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxDialogAct_Compare");
		return ptr;
	}


	void Activate();
};


// Class GearboxFramework.GearboxDialogAct_ObjectParameterSwitch
// 0x000C (0x0070 - 0x007C)
class UGearboxDialogAct_ObjectParameterSwitch : public UGearboxDialogAction
{
public:
	TArray<class UObject*>                             Outputs;                                                  // 0x0070(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxDialogAct_ObjectParameterSwitch");
		return ptr;
	}


	void Activate();
};


// Class GearboxFramework.GearboxDialogNonTemplateAction
// 0x0000 (0x0070 - 0x0070)
class UGearboxDialogNonTemplateAction : public UGearboxDialogAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxDialogNonTemplateAction");
		return ptr;
	}

};


// Class GearboxFramework.GearboxDialogAct_Talk
// 0x0014 (0x0070 - 0x0084)
class UGearboxDialogAct_Talk : public UGearboxDialogNonTemplateAction
{
public:
	float                                              OutputDelay;                                              // 0x0070(0x0004) (Edit)
	unsigned long                                      bShowTalkers : 1;                                         // 0x0074(0x0004) (Edit)
	unsigned long                                      bPreviewing : 1;                                          // 0x0074(0x0004) (Transient)
	unsigned long                                      bInstigatorTalker : 1;                                    // 0x0074(0x0004)
	TArray<struct FGearboxDialogData>                  TalkData;                                                 // 0x0078(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxDialogAct_Talk");
		return ptr;
	}


	void Activate();
	void TalkFinished(class AActor* InTalker);
	void TalkStarted(class AActor* InTalker);
};


// Class GearboxFramework.GearboxDialogTemplateAction
// 0x0000 (0x0070 - 0x0070)
class UGearboxDialogTemplateAction : public UGearboxDialogAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxDialogTemplateAction");
		return ptr;
	}

};


// Class GearboxFramework.GearboxDialogAct_Trigger
// 0x0008 (0x0070 - 0x0078)
class UGearboxDialogAct_Trigger : public UGearboxDialogTemplateAction
{
public:
	class UGearboxDialogEventTag*                      DialogEvent;                                              // 0x0070(0x0004) (Edit, Const)
	unsigned long                                      bPreviewing : 1;                                          // 0x0074(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxDialogAct_Trigger");
		return ptr;
	}


	void ActivateOutput(int Link);
	void Activate();
};


// Class GearboxFramework.GearboxDialogEvent
// 0x0008 (0x0070 - 0x0078)
class UGearboxDialogEvent : public UGearboxDialogNode
{
public:
	unsigned long                                      bDisabled : 1;                                            // 0x0070(0x0004) (Const)
	class UGearboxDialogEventTag*                      Tag;                                                      // 0x0074(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxDialogEvent");
		return ptr;
	}

};


// Class GearboxFramework.GearboxDialogTemplateEvent
// 0x0000 (0x0078 - 0x0078)
class UGearboxDialogTemplateEvent : public UGearboxDialogEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxDialogTemplateEvent");
		return ptr;
	}

};


// Class GearboxFramework.GearboxDialogVariable
// 0x0000 (0x0070 - 0x0070)
class UGearboxDialogVariable : public UGearboxDialogNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxDialogVariable");
		return ptr;
	}


	void ResolveToArgumentValue(struct FString* Out_ArgumentValue);
	void GetTalkers(TArray<class AActor*>* Talkers);
};


// Class GearboxFramework.GearboxDialogVar_Instigator
// 0x0000 (0x0070 - 0x0070)
class UGearboxDialogVar_Instigator : public UGearboxDialogVariable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxDialogVar_Instigator");
		return ptr;
	}

};


// Class GearboxFramework.GearboxDialogVar_LastTalker
// 0x0000 (0x0070 - 0x0070)
class UGearboxDialogVar_LastTalker : public UGearboxDialogVariable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxDialogVar_LastTalker");
		return ptr;
	}

};


// Class GearboxFramework.GearboxDialogVar_NameTag
// 0x0004 (0x0070 - 0x0074)
class UGearboxDialogVar_NameTag : public UGearboxDialogVariable
{
public:
	class UGearboxDialogNameTag*                       NameTag;                                                  // 0x0070(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxDialogVar_NameTag");
		return ptr;
	}

};


// Class GearboxFramework.GearboxDialogVar_Other
// 0x0000 (0x0070 - 0x0070)
class UGearboxDialogVar_Other : public UGearboxDialogVariable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxDialogVar_Other");
		return ptr;
	}

};


// Class GearboxFramework.GearboxDialogVar_Random
// 0x0018 (0x0070 - 0x0088)
class UGearboxDialogVar_Random : public UGearboxDialogVariable
{
public:
	unsigned long                                      bNotOther : 1;                                            // 0x0070(0x0004) (Edit)
	unsigned long                                      bNotInstigator : 1;                                       // 0x0070(0x0004) (Edit)
	unsigned long                                      bNotLastTalker : 1;                                       // 0x0070(0x0004) (Edit)
	class UPawnAllegiance*                             Allegiance;                                               // 0x0074(0x0004) (Edit)
	struct FAttributeInitializationData                DistanceLimit;                                            // 0x0078(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxDialogVar_Random");
		return ptr;
	}

};


// Class GearboxFramework.GearboxSeqAct_ToggleDialog
// 0x0004 (0x00A4 - 0x00A8)
class UGearboxSeqAct_ToggleDialog : public USequenceAction
{
public:
	unsigned long                                      bDialogEnabled : 1;                                       // 0x00A4(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxSeqAct_ToggleDialog");
		return ptr;
	}

};


// Class GearboxFramework.GearboxSeqAct_TriggerDialog
// 0x0018 (0x00B4 - 0x00CC)
class UGearboxSeqAct_TriggerDialog : public USeqAct_Latent
{
public:
	class AActor*                                      Other;                                                    // 0x00B4(0x0004) (Edit)
	class UGearboxDialogEventTag*                      EventTag;                                                 // 0x00B8(0x0004) (Edit)
	class UGearboxDialogNameTag*                       NameTag;                                                  // 0x00BC(0x0004) (Edit)
	class UGearboxDialogEventData*                     EventData;                                                // 0x00C0(0x0004) (Transient)
	int                                                MyDataUseCount;                                           // 0x00C4(0x0004) (Transient)
	unsigned long                                      bCheckCanPreview : 1;                                     // 0x00C8(0x0004) (Transient, EditorOnly)
	unsigned long                                      bCanPreview : 1;                                          // 0x00C8(0x0004) (Transient, EditorOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxSeqAct_TriggerDialog");
		return ptr;
	}

};


// Class GearboxFramework.GearboxSeqAct_TriggerDialogName
// 0x0004 (0x00CC - 0x00D0)
class UGearboxSeqAct_TriggerDialogName : public UGearboxSeqAct_TriggerDialog
{
public:
	class UGearboxDialogGroup*                         Group;                                                    // 0x00CC(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxSeqAct_TriggerDialogName");
		return ptr;
	}

};


// Class GearboxFramework.GearboxProcess
// 0x002C (0x003C - 0x0068)
class UGearboxProcess : public UObject
{
public:
	int                                                FirstAttemptDelay;                                        // 0x003C(0x0004)
	int                                                BaseRetrySeconds;                                         // 0x0040(0x0004)
	int                                                MaxRetryAttempts;                                         // 0x0044(0x0004)
	float                                              RetryMultiplier;                                          // 0x0048(0x0004)
	int                                                RetryJitter;                                              // 0x004C(0x0004)
	float                                              CurrentRetrySeconds;                                      // 0x0050(0x0004)
	int                                                Attempts;                                                 // 0x0054(0x0004)
	float                                              WaitTime;                                                 // 0x0058(0x0004)
	unsigned long                                      Waiting : 1;                                              // 0x005C(0x0004)
	int                                                CurrentStep;                                              // 0x0060(0x0004)
	int                                                FailureStep;                                              // 0x0064(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxProcess");
		return ptr;
	}


	struct FStepConfiguration GetStepConfiguration();
	void GotoStep(int Step);
	void GotoNextStep();
	void GotoFirstStep();
	unsigned char PerformStep();
	void PauseLoop();
	void Init();
	void ContinueLoop();
	void StopLoop();
};


// Class GearboxFramework.SparkInitializationProcess
// 0x0024 (0x0068 - 0x008C)
class USparkInitializationProcess : public UGearboxProcess
{
public:
	class UGearboxAccountData*                         Data;                                                     // 0x0068(0x0004)
	int                                                PlayerIndex;                                              // 0x006C(0x0004)
	TArray<struct FScriptDelegate>                     SparkInitializedDelegates;                                // 0x0070(0x000C) (NeedCtorLink)
	unsigned long                                      bPrimary : 1;                                             // 0x007C(0x0004)
	unsigned long                                      ValidAccount : 1;                                         // 0x007C(0x0004)
	struct FString                                     AsyncTicket;                                              // 0x0080(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SparkInitializationProcess");
		return ptr;
	}


	void TriggerSparkInitializedDelegates(unsigned char InitializeResult);
	void ClearSparkInitializedDelegate(const struct FScriptDelegate& SparkInitializedDelegate);
	void AddSparkInitializedDelegate(const struct FScriptDelegate& SparkInitializedDelegate);
	struct FString GetStepName();
	struct FStepConfiguration GetStepConfiguration();
	bool IsInitialized();
	bool IsDisabled();
	bool IsInitializing();
	static void UpdateAgreementsSigning(class UGearboxAccountData* GbxAccountData, const struct FString& NeedsSignAgreements);
	void HandleVerificationReceived(struct FSparkResult* Result);
	unsigned char VerifyAuthentication();
	unsigned char AuthenticateTicketStringWithDelegate(const struct FString& ticket, const struct FScriptDelegate& SparkRequestCompleteDelegate);
	void HandleAuthenticationReceived(struct FSparkResult* Result);
	unsigned char AuthenticateAccount();
	struct FString GetConfigQuery();
	unsigned char CompleteInitialization();
	unsigned char HttpInit();
	unsigned char CheckForTMS();
	unsigned char PerformStep();
	bool StartProcess();
	void InitWithController(unsigned char ControllerId, bool bNewPrimary, const struct FScriptDelegate& SparkInitializedDelegate);
};


// Class GearboxFramework.LeviathanService
// 0x0010 (0x003C - 0x004C)
class ULeviathanService : public UObject
{
public:
	struct FPointer                                    VfTable_ISparkUpdateCallback;                             // 0x003C(0x0004) (Const, Native, NoExport)
	int                                                EventBufferSize;                                          // 0x0040(0x0004)
	int                                                StatBufferSize;                                           // 0x0044(0x0004)
	int                                                AtomTableBufferSize;                                      // 0x0048(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("LeviathanService");
		return ptr;
	}


	class USparkServiceConfiguration* GetLeviathanServiceConfiguration(int ControllerNumber);
	void OnSparkInitialized(unsigned char InitializedResult);
	void LoadServiceConfigurationForPlayer(int SplitscreenIndex);
	static class ULeviathanService* GetLeviathanService();
};


// Class GearboxFramework.SparkInterfaceImpl
// 0x00A0 (0x003C - 0x00DC)
class USparkInterfaceImpl : public UObject
{
public:
	struct FPointer                                    VfTable_ISparkInterface;                                  // 0x003C(0x0004) (Const, Native, NoExport)
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x0040(0x0004) (Const, Native, NoExport)
	class USparkInitializationProcess*                 SparkInitialization;                                      // 0x0044(0x0004)
	class USparkInitializationProcess*                 SecondaryInitialization;                                  // 0x0048(0x0004)
	TArray<class UGearboxAccountData*>                 Accounts;                                                 // 0x004C(0x000C) (NeedCtorLink)
	struct FString                                     LeviathanServiceClassName;                                // 0x0058(0x000C) (Config, NeedCtorLink)
	class ULeviathanService*                           LeviathanSvc;                                             // 0x0064(0x0004) (Transient)
	int                                                ReadBufferSize;                                           // 0x0068(0x0004) (Config)
	unsigned long                                      TmsInitComplete : 1;                                      // 0x006C(0x0004)
	unsigned long                                      UpdateEmergencyMessage : 1;                               // 0x006C(0x0004)
	struct FString                                     EmergencyMessage;                                         // 0x0070(0x000C) (NeedCtorLink)
	TArray<struct FSparkOutstandingRequest>            Requests;                                                 // 0x007C(0x000C) (NeedCtorLink)
	int                                                LastHttpRequestRetries;                                   // 0x0088(0x0004)
	float                                              LastHttpRequestResponseTime;                              // 0x008C(0x0004)
	int                                                RecentHttpRequestFailures;                                // 0x0090(0x0004)
	int                                                InteractionMinWaitSeconds;                                // 0x0094(0x0004)
	int                                                InteractionGraceTries;                                    // 0x0098(0x0004)
	int                                                InteractionPunishmentMinWaitSeconds;                      // 0x009C(0x0004)
	int                                                InteractionTries;                                         // 0x00A0(0x0004)
	class USparkServiceConfiguration*                  TitleStorageService;                                      // 0x00A4(0x0004) (Transient)
	struct FString                                     TitleStorageUrl;                                          // 0x00A8(0x000C) (Transient, NeedCtorLink)
	class USparkNews*                                  NewsService;                                              // 0x00B4(0x0004)
	struct FScriptDelegate                             __OnSparkRequestComplete__Delegate;                       // 0x00B8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnSparkConfigReceived__Delegate;                        // 0x00C4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnSparkEmergencyMessageUpdated__Delegate;               // 0x00D0(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SparkInterfaceImpl");
		return ptr;
	}


	void RemoveScriptCallback(int HttpRequestId);
	class USparkNews* GetNewsService();
	class USparkServiceConfiguration* GetTitleStorageServiceConfiguration();
	struct FString GetTitleStorageUrl();
	void OnSparkInitialized(unsigned char InitializedResult);
	void IncreaseInteractionTries();
	int GetInteractionTries();
	int GetInteractionGraceTries();
	int GetInteractionPunishmentMinWaitSeconds();
	int GetInteractionMinWaitSeconds();
	struct FString ConvertUtcTimeToLocalTime(const struct FString& UtcTime);
	bool ShouldUpdateEmergencyMessage();
	struct FString GetEmergencyMessage();
	void SetEmergencyMessage(const struct FString& NewMessage);
	bool IsTmsComplete();
	void SetTmsComplete();
	void RestartSparkInitializationFromScript(bool bPrimary, const struct FScriptDelegate& SparkInitializedDelegate, const struct FScriptDelegate& SparkEmergencyMessageDelegate);
	void RestartSparkInitialization(bool bPrimary);
	void StartSparkInitialization(unsigned char ControllerId, const struct FScriptDelegate& SparkInitializedDelegate, const struct FScriptDelegate& SparkEmergencyMessageDelegate, const struct FScriptDelegate& EntitlementsUpdatedDelegate);
	void ResetInitializationStatus();
	void ResetSecondaryInitializationStatus();
	void StartSecondaryInitialization(unsigned char ControllerId, const struct FScriptDelegate& SparkInitializedDelegate, const struct FScriptDelegate& EntitlementsUpdatedDelegate);
	class USparkInitializationProcess* GetSparkInitialization();
	void SignInGearboxAccount(unsigned char ControllerId);
	class UGearboxAccountData* GetGearboxAccountData(unsigned char ControllerId);
	void SignOutGearboxAccount(unsigned char ControllerId);
	bool ValidPlayerIndex(int PlayerIndex);
	int GetPlayerIndex(int ControllerId);
	void ClearGearboxAccountData(bool IncludePrimaryPlayer);
	bool IsGearboxAccountSignedIn(unsigned char ControllerId);
	bool IsGearboxAccountAuthenticated(unsigned char ControllerId);
	struct FString GetGameName();
	struct FString GetHardwareName();
	struct FString GetPlatformName();
	struct FString GetPlatformTicket(int ControllerId, bool bPrimary);
	void ClearSparkConfigReceivedDelegate(const struct FScriptDelegate& SparkConfigReceivedDelegate);
	void AddSparkConfigReceivedDelegate(const struct FScriptDelegate& SparkConfigReceivedDelegate);
	struct FString GetPlatformLoginNameFromController(unsigned char ControllerId);
	struct FString GetPlatformLoginNameFromSplitscreenIndex(int SplitscreenIndex);
	struct FString GetPlatformLoginName();
	unsigned char GetLoginStatus();
	bool IsShiftEnabled();
	bool IsSparkEnabled();
	static bool WithShift();
	static bool WithSpark();
	int IssueSparkStringRequest(const struct FString& URL, const struct FString& RequestData, const struct FScriptDelegate& SparkRequestCompleteDelegate, struct FHttpParameters* HttpRequestParameters);
	int IssueSparkRequest(const struct FString& URL, const struct FScriptDelegate& SparkRequestCompleteDelegate, struct FHttpParameters* HttpParameters, TArray<unsigned char>* RequestData);
	struct FString AlternativeXboxlivePlatformId(struct FUniqueNetId* NetId);
	void OnSparkEmergencyMessageUpdated();
	void OnSparkConfigReceived(TArray<unsigned char> ConfigArray);
	void OnSparkRequestComplete(struct FSparkResult* Result);
};


// Class GearboxFramework.SparkServiceConfiguration
// 0x0034 (0x003C - 0x0070)
class USparkServiceConfiguration : public UObject
{
public:
	struct FName                                       ServiceName;                                              // 0x003C(0x0008)
	struct FName                                       ConfigurationGroup;                                       // 0x0044(0x0008)
	TArray<struct FString>                             Keys;                                                     // 0x004C(0x000C) (AlwaysInit, NeedCtorLink)
	TArray<struct FString>                             Values;                                                   // 0x0058(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     OverrideUrl;                                              // 0x0064(0x000C) (Config, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SparkServiceConfiguration");
		return ptr;
	}


	bool GetBoolParameter(const struct FString& KeyName, bool Default);
	float GetFloatParameter(const struct FString& KeyName, float DefaultValue, float MinimumValue, float MaximumValue);
	int GetIntParameter(const struct FString& KeyName, int DefaultValue, int MinimumValue, int MaximumValue);
	struct FString GetStringParameter(const struct FString& KeyName, const struct FString& Default);
	struct FString GetParameter(const struct FString& KeyNameToSearchFor);
	void LoadService(struct FServiceResult* Service);
	void LoadOverrides();
};


// Class GearboxFramework.Action_ChangeRuleSet
// 0x0004 (0x00A8 - 0x00AC)
class UAction_ChangeRuleSet : public UActionSequence
{
public:
	class URuleSet*                                    NewRuleSet;                                               // 0x00A8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Action_ChangeRuleSet");
		return ptr;
	}

};


// Class GearboxFramework.RES_RuleSetChange
// 0x0000 (0x003C - 0x003C)
class URES_RuleSetChange : public UActionResource
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("RES_RuleSetChange");
		return ptr;
	}

};


// Class GearboxFramework.Action_FaceThreat
// 0x0000 (0x00B0 - 0x00B0)
class UAction_FaceThreat : public UActionSequencePawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Action_FaceThreat");
		return ptr;
	}


	void StopSequence();
};


// Class GearboxFramework.RES_FacingPolicy
// 0x0000 (0x003C - 0x003C)
class URES_FacingPolicy : public UActionResource
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("RES_FacingPolicy");
		return ptr;
	}

};


// Class GearboxFramework.Action_MoveRandom
// 0x0000 (0x00B0 - 0x00B0)
class UAction_MoveRandom : public UActionSequencePawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Action_MoveRandom");
		return ptr;
	}

};


// Class GearboxFramework.Action_MoveTo
// 0x0000 (0x00B0 - 0x00B0)
class UAction_MoveTo : public UActionSequencePawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Action_MoveTo");
		return ptr;
	}

};


// Class GearboxFramework.RES_Movement
// 0x0000 (0x003C - 0x003C)
class URES_Movement : public UActionResource
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("RES_Movement");
		return ptr;
	}

};


// Class GearboxFramework.Action_PopRuleSet
// 0x0000 (0x00B0 - 0x00B0)
class UAction_PopRuleSet : public UActionSequencePawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Action_PopRuleSet");
		return ptr;
	}

};


// Class GearboxFramework.Action_PushRuleSet
// 0x0004 (0x00B0 - 0x00B4)
class UAction_PushRuleSet : public UActionSequencePawn
{
public:
	class URuleSet*                                    NewRuleSet;                                               // 0x00B0(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Action_PushRuleSet");
		return ptr;
	}

};


// Class GearboxFramework.ActorAttributeContextResolver
// 0x0000 (0x003C - 0x003C)
class UActorAttributeContextResolver : public UAttributeContextResolver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ActorAttributeContextResolver");
		return ptr;
	}


	class UObject* GetAttributeContext(class UAttributeDefinitionBase* Attribute, class UObject* AttributeContextSource);
};


// Class GearboxFramework.AIComponentAttributeContextResolver
// 0x0000 (0x003C - 0x003C)
class UAIComponentAttributeContextResolver : public UAttributeContextResolver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AIComponentAttributeContextResolver");
		return ptr;
	}


	class UObject* GetAttributeContext(class UAttributeDefinitionBase* Attribute, class UObject* AttributeContextSource);
};


// Class GearboxFramework.AIStateBase
// 0x0000 (0x006C - 0x006C)
class UAIStateBase : public UGearboxEditorNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AIStateBase");
		return ptr;
	}

};


// Class GearboxFramework.AIState
// 0x0000 (0x006C - 0x006C)
class UAIState : public UAIStateBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AIState");
		return ptr;
	}

};


// Class GearboxFramework.AIState_Priority
// 0x0000 (0x006C - 0x006C)
class UAIState_Priority : public UAIStateBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AIState_Priority");
		return ptr;
	}

};


// Class GearboxFramework.AIState_Random
// 0x0000 (0x006C - 0x006C)
class UAIState_Random : public UAIStateBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AIState_Random");
		return ptr;
	}

};


// Class GearboxFramework.AIState_Sequential
// 0x0000 (0x006C - 0x006C)
class UAIState_Sequential : public UAIStateBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AIState_Sequential");
		return ptr;
	}

};


// Class GearboxFramework.Behavior_AIHold
// 0x000A (0x004C - 0x0056)
class UBehavior_AIHold : public UBehaviorBase
{
public:
	struct FName                                       Reason;                                                   // 0x004C(0x0008) (Edit)
	unsigned char                                      Action;                                                   // 0x0054(0x0001) (Edit)
	unsigned char                                      Type;                                                     // 0x0055(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Behavior_AIHold");
		return ptr;
	}


	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo);
};


// Class GearboxFramework.Behavior_AIPriority
// 0x0014 (0x004C - 0x0060)
class UBehavior_AIPriority : public UBehaviorBase
{
public:
	float                                              PriorityModifier;                                         // 0x004C(0x0004) (Edit, Const)
	struct FBehaviorContextData                        Target;                                                   // 0x0050(0x0010) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Behavior_AIPriority");
		return ptr;
	}


	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo);
};


// Class GearboxFramework.Behavior_AITargeting
// 0x0004 (0x004C - 0x0050)
class UBehavior_AITargeting : public UBehaviorBase
{
public:
	class UTargetingDefinition*                        NewTargetingDefinition;                                   // 0x004C(0x0004) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Behavior_AITargeting");
		return ptr;
	}


	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo);
};


// Class GearboxFramework.Behavior_ChangeAnyBehaviorSequenceState
// 0x000C (0x004C - 0x0058)
class UBehavior_ChangeAnyBehaviorSequenceState : public UBehaviorBase
{
public:
	unsigned char                                      Action;                                                   // 0x004C(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	struct FName                                       SequenceName;                                             // 0x0050(0x0008) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Behavior_ChangeAnyBehaviorSequenceState");
		return ptr;
	}


	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo);
};


// Class GearboxFramework.Behavior_ChangeLocalBehaviorSequenceState
// 0x000C (0x004C - 0x0058)
class UBehavior_ChangeLocalBehaviorSequenceState : public UBehaviorBase
{
public:
	unsigned char                                      Action;                                                   // 0x004C(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	struct FName                                       SequenceName;                                             // 0x0050(0x0008) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Behavior_ChangeLocalBehaviorSequenceState");
		return ptr;
	}


	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo);
};


// Class GearboxFramework.Behavior_CompareBool
// 0x0004 (0x004C - 0x0050)
class UBehavior_CompareBool : public UBehaviorBase
{
public:
	unsigned long                                      BoolValue : 1;                                            // 0x004C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Behavior_CompareBool");
		return ptr;
	}


	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo);
};


// Class GearboxFramework.Behavior_CompareValues
// 0x0030 (0x004C - 0x007C)
class UBehavior_CompareValues : public UBehaviorBase
{
public:
	struct FAttributeInitializationData                ValueA;                                                   // 0x004C(0x0010) (Edit)
	struct FBehaviorContextData                        ContextB;                                                 // 0x005C(0x0010) (Edit)
	struct FAttributeInitializationData                ValueB;                                                   // 0x006C(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Behavior_CompareValues");
		return ptr;
	}


	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo);
};


// Class GearboxFramework.Behavior_CustomEvent
// 0x0008 (0x004C - 0x0054)
class UBehavior_CustomEvent : public UBehaviorBase
{
public:
	struct FName                                       CustomEventName;                                          // 0x004C(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Behavior_CustomEvent");
		return ptr;
	}


	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo);
};


// Class GearboxFramework.Behavior_Delay
// 0x0004 (0x004C - 0x0050)
class UBehavior_Delay : public UBehaviorBase
{
public:
	float                                              Delay;                                                    // 0x004C(0x0004) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Behavior_Delay");
		return ptr;
	}


	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo);
};


// Class GearboxFramework.Behavior_Gate
// 0x0008 (0x004C - 0x0054)
class UBehavior_Gate : public UBehaviorBase
{
public:
	int                                                GateCount;                                                // 0x004C(0x0004) (Edit)
	int                                                ActivationCount;                                          // 0x0050(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Behavior_Gate");
		return ptr;
	}


	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo);
};


// Class GearboxFramework.Behavior_GetFloatParam
// 0x0000 (0x0058 - 0x0058)
class UBehavior_GetFloatParam : public UParameterBehaviorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Behavior_GetFloatParam");
		return ptr;
	}


	void PublishBehaviorOutput(float Value, struct FBehaviorKernelInfo* KernelInfo);
	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo);
};


// Class GearboxFramework.Behavior_GetObjectParam
// 0x0000 (0x0058 - 0x0058)
class UBehavior_GetObjectParam : public UParameterBehaviorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Behavior_GetObjectParam");
		return ptr;
	}


	void PublishBehaviorOutput(class UObject* Value, struct FBehaviorKernelInfo* KernelInfo);
	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo);
};


// Class GearboxFramework.Behavior_GetVectorParam
// 0x0004 (0x0058 - 0x005C)
class UBehavior_GetVectorParam : public UParameterBehaviorBase
{
public:
	unsigned long                                      bTreatAsVector : 1;                                       // 0x0058(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Behavior_GetVectorParam");
		return ptr;
	}


	void PublishBehaviorOutput(float R, float G, float B, float A, struct FBehaviorKernelInfo* KernelInfo);
	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo);
};


// Class GearboxFramework.Behavior_InterpolateFloatOverTime
// 0x0010 (0x004C - 0x005C)
class UBehavior_InterpolateFloatOverTime : public UBehaviorBase
{
public:
	float                                              Duration;                                                 // 0x004C(0x0004) (Edit, Const)
	float                                              UpdateInterval;                                           // 0x0050(0x0004) (Edit, Const)
	float                                              EndingValue;                                              // 0x0054(0x0004) (Edit, Const)
	float                                              BeginningValue;                                           // 0x0058(0x0004) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Behavior_InterpolateFloatOverTime");
		return ptr;
	}


	void PublishBehaviorOutput(float Result, struct FBehaviorKernelInfo* KernelInfo);
	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo);
};


// Class GearboxFramework.Behavior_Metronome
// 0x0014 (0x004C - 0x0060)
class UBehavior_Metronome : public UBehaviorBase
{
public:
	unsigned long                                      bUseTickCount : 1;                                        // 0x004C(0x0004) (Const)
	unsigned long                                      bUseDuration : 1;                                         // 0x004C(0x0004) (Const)
	int                                                MaxTickCount;                                             // 0x0050(0x0004) (Edit, Const)
	int                                                CurrentTickCount;                                         // 0x0054(0x0004) (Transient)
	float                                              Duration;                                                 // 0x0058(0x0004) (Edit, Const)
	float                                              TickInterval;                                             // 0x005C(0x0004) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Behavior_Metronome");
		return ptr;
	}


	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo);
};


// Class GearboxFramework.Behavior_ModifyTimer
// 0x0014 (0x004C - 0x0060)
class UBehavior_ModifyTimer : public UBehaviorBase
{
public:
	unsigned char                                      TimerId;                                                  // 0x004C(0x0001) (Edit, Const)
	unsigned char                                      Operation;                                                // 0x004D(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004E(0x0002) MISSED OFFSET
	struct FAttributeInitializationData                NewTimerDelay;                                            // 0x0050(0x0010) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Behavior_ModifyTimer");
		return ptr;
	}


	void PublishBehaviorOutput(float TimeRemaining, struct FBehaviorKernelInfo* KernelInfo);
	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo);
};


// Class GearboxFramework.Behavior_SetFloatParam
// 0x0004 (0x0058 - 0x005C)
class UBehavior_SetFloatParam : public UParameterBehaviorBase
{
public:
	float                                              Value;                                                    // 0x0058(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Behavior_SetFloatParam");
		return ptr;
	}


	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo);
};


// Class GearboxFramework.Behavior_SetObjectParam
// 0x0004 (0x0058 - 0x005C)
class UBehavior_SetObjectParam : public UParameterBehaviorBase
{
public:
	class UObject*                                     Value;                                                    // 0x0058(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Behavior_SetObjectParam");
		return ptr;
	}


	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo);
};


// Class GearboxFramework.Behavior_SetVectorParam
// 0x0014 (0x0058 - 0x006C)
class UBehavior_SetVectorParam : public UParameterBehaviorBase
{
public:
	float                                              RValue;                                                   // 0x0058(0x0004) (Edit)
	float                                              GValue;                                                   // 0x005C(0x0004) (Edit)
	float                                              bValue;                                                   // 0x0060(0x0004) (Edit)
	float                                              AValue;                                                   // 0x0064(0x0004) (Edit)
	unsigned long                                      bKeepR : 1;                                               // 0x0068(0x0004) (Edit)
	unsigned long                                      bKeepG : 1;                                               // 0x0068(0x0004) (Edit)
	unsigned long                                      bKeepB : 1;                                               // 0x0068(0x0004) (Edit)
	unsigned long                                      bKeepA : 1;                                               // 0x0068(0x0004) (Edit)
	unsigned long                                      bTreatAsVector : 1;                                       // 0x0068(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Behavior_SetVectorParam");
		return ptr;
	}


	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo);
};


// Class GearboxFramework.Behavior_SpecialMove
// 0x000C (0x004C - 0x0058)
class UBehavior_SpecialMove : public UBehaviorBase
{
public:
	class USpecialMoveDefinition*                      SpecialMove;                                              // 0x004C(0x0004) (Edit)
	unsigned long                                      bStopCurrentMove : 1;                                     // 0x0050(0x0004) (Edit)
	unsigned long                                      bQueueIfCannotPlay : 1;                                   // 0x0050(0x0004) (Edit)
	unsigned long                                      bLocal : 1;                                               // 0x0050(0x0004) (Edit)
	float                                              Duration;                                                 // 0x0054(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Behavior_SpecialMove");
		return ptr;
	}


	void PlaySpecialMove(class USpecialMoveComponent* SMC);
	void TriggerOutput(struct FBehaviorKernelInfo* KernelInfo);
	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo);
};


// Class GearboxFramework.Behavior_SpecialMoveStop
// 0x0004 (0x004C - 0x0050)
class UBehavior_SpecialMoveStop : public UBehaviorBase
{
public:
	class USpecialMoveDefinition*                      SpecificMove;                                             // 0x004C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Behavior_SpecialMoveStop");
		return ptr;
	}


	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo);
};


// Class GearboxFramework.Behavior_StartAkAmbientSound
// 0x0008 (0x004C - 0x0054)
class UBehavior_StartAkAmbientSound : public UBehaviorBase
{
public:
	class UAkEvent*                                    AkEvent;                                                  // 0x004C(0x0004) (Edit)
	class AWwiseSoundGroup*                            SoundGroup;                                               // 0x0050(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Behavior_StartAkAmbientSound");
		return ptr;
	}


	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo);
};


// Class GearboxFramework.Behavior_StopAkAmbientSound
// 0x0008 (0x004C - 0x0054)
class UBehavior_StopAkAmbientSound : public UBehaviorBase
{
public:
	class UAkEvent*                                    AkEvent;                                                  // 0x004C(0x0004) (Edit)
	class AWwiseSoundGroup*                            SoundGroup;                                               // 0x0050(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Behavior_StopAkAmbientSound");
		return ptr;
	}


	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo);
};


// Class GearboxFramework.Behavior_StopDialog
// 0x0004 (0x004C - 0x0050)
class UBehavior_StopDialog : public UBehaviorBase
{
public:
	class UGearboxDialogEventTag*                      EventTag;                                                 // 0x004C(0x0004) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Behavior_StopDialog");
		return ptr;
	}


	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo);
};


// Class GearboxFramework.Behavior_ToggleDialog
// 0x0001 (0x004C - 0x004D)
class UBehavior_ToggleDialog : public UBehaviorBase
{
public:
	unsigned char                                      Option;                                                   // 0x004C(0x0001) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Behavior_ToggleDialog");
		return ptr;
	}


	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo);
};


// Class GearboxFramework.CameraModifierCrossfade
// 0x001C (0x0089 - 0x00A5)
class UCameraModifierCrossfade : public UGearboxCameraModifier
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	class UGearboxCameraModifier*                      ModifierA;                                                // 0x008C(0x0004)
	class UGearboxCameraModifier*                      ModifierB;                                                // 0x0090(0x0004)
	int                                                CurModifierNdx;                                           // 0x0094(0x0004)
	float                                              CurBlendWeight;                                           // 0x0098(0x0004)
	float                                              BlendSpeed;                                               // 0x009C(0x0004) (Const)
	int                                                DebugInset;                                               // 0x00A0(0x0004) (Const)
	unsigned char                                      LerpMode;                                                 // 0x00A4(0x0001) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("CameraModifierCrossfade");
		return ptr;
	}


	void DoCrossfade();
	void UpdateAllLerps(float DeltaTime, struct FTPOV* OutPOV);
	bool ModifyCamera(class ACamera* Camera, float DeltaTime, struct FTPOV* OutPOV);
	void ProcessCameraBlend(class ACamera* Camera, float AdjustedDeltaTime, struct FTPOV* OutPOV);
	void InitializeSubModifiers();
	void EnableModifier();
};


// Class GearboxFramework.CameraModifierLookAt
// 0x0037 (0x0089 - 0x00C0)
class UCameraModifierLookAt : public UGearboxCameraModifier
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	unsigned char                                      LookAtMode;                                               // 0x008C(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x008D(0x0003) MISSED OFFSET
	unsigned long                                      bActionFinished : 1;                                      // 0x0090(0x0004)
	float                                              Duration;                                                 // 0x0094(0x0004)
	float                                              TimeElapsed;                                              // 0x0098(0x0004)
	float                                              ThirdPersonPullBackDistance;                              // 0x009C(0x0004)
	float                                              ThirdPersonPushSideDistance;                              // 0x00A0(0x0004)
	float                                              ThirdPersonRaiseUpDistance;                               // 0x00A4(0x0004)
	float                                              Zoom;                                                     // 0x00A8(0x0004)
	float                                              TransitionInTime;                                         // 0x00AC(0x0004)
	float                                              TransitionOutTime;                                        // 0x00B0(0x0004)
	class AActor*                                      LookAtTarget;                                             // 0x00B4(0x0004)
	struct FName                                       LookAtBone;                                               // 0x00B8(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("CameraModifierLookAt");
		return ptr;
	}


	void ExecuteFadeIfNeeded(class AGearboxPlayerController** PC);
	struct FVector GetDesiredLocation(struct FTPOV* OutPOV, class AGearboxPlayerController** PC);
	bool ModifyCamera(class ACamera* Camera, float DeltaTime, struct FTPOV* OutPOV);
	bool GetBoneLocation(class AActor* Target, const struct FName& BoneName, struct FVector* BoneLoc);
	void SetLookAtBone(const struct FName& NewBone);
	void SetLookAtTarget(class AActor* newLookAtTarget);
	void SetTargetLocation(const struct FVector& NewTargetLocation, float newTransitionTimeIn, float newTransitionTimeOut);
	void SetDuration(float NewDuration);
	void SetTransitionTimes(float NewInTime, float NewOutTime);
	void SetZoomFOV(float newZoom);
	void SetThirdPersonDistances(float NewX, float NewY, float NewZ);
	void SetLookAtMode(unsigned char NewMode);
	void DisableModifier(bool bImmediate);
	void EnableModifier();
};


// Class GearboxFramework.DefinitionUITestCaseDefinition
// 0x0040 (0x003C - 0x007C)
class UDefinitionUITestCaseDefinition : public UGBXDefinition
{
public:
	float                                              ConstantFloat;                                            // 0x003C(0x0004) (Edit, EditConst)
	TArray<float>                                      ConstantFloatArray;                                       // 0x0040(0x000C) (Edit, EditConst, NeedCtorLink)
	float                                              Float;                                                    // 0x004C(0x0004) (Edit)
	TArray<float>                                      FloatArray;                                               // 0x0050(0x000C) (Edit, NeedCtorLink)
	class UGBXDefinition*                              EditConstReferencedDefinition;                            // 0x005C(0x0004) (Edit, EditConst)
	TArray<class UGBXDefinition*>                      EditConstArrayOfReferences;                               // 0x0060(0x000C) (Edit, EditConst, NeedCtorLink)
	class UGBXDefinition*                              ReferencedDefinition;                                     // 0x006C(0x0004) (Edit)
	TArray<class UGBXDefinition*>                      ArrayOfReferences;                                        // 0x0070(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DefinitionUITestCaseDefinition");
		return ptr;
	}

};


// Class GearboxFramework.SparkNews
// 0x0018 (0x003C - 0x0054)
class USparkNews : public UObject
{
public:
	TArray<struct FNewsArticle>                        Articles;                                                 // 0x003C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnNewsRetrieved__Delegate;                              // 0x0048(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SparkNews");
		return ptr;
	}


	class USparkServiceConfiguration* Internal_GetService(unsigned char ControllerId, const FScriptInterface& Spark);
	void CallAndClearRetrievedDelegate(unsigned char RetrievealResult);
	void ParseArticles(class UJsonObject* NewsArticlesJSONObject);
	void HandleNewsRetrievalResponse(struct FSparkResult* Result);
	bool GetArticle(int Idx, struct FString* Header, struct FString* Body);
	int GetArticleCount();
	void RetrieveNews(unsigned char ControllerId, const struct FScriptDelegate& RetrievalDelegate);
	void OnNewsRetrieved(unsigned char RetrievealResult, class USparkNews* newsObj);
};


// Class GearboxFramework.GearboxAccountEntitlement
// 0x0028 (0x003C - 0x0064)
class UGearboxAccountEntitlement : public UObject
{
public:
	struct FName                                       Identifier;                                               // 0x003C(0x0008)
	int                                                Id;                                                       // 0x0044(0x0004)
	unsigned long                                      Consumable : 1;                                           // 0x0048(0x0004)
	int                                                ConsumableAmount;                                         // 0x004C(0x0004)
	int                                                Consumed;                                                 // 0x0050(0x0004)
	struct FString                                     Payload;                                                  // 0x0054(0x000C) (NeedCtorLink)
	int                                                LocallyConsumed;                                          // 0x0060(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxAccountEntitlement");
		return ptr;
	}

};


// Class GearboxFramework.GearboxAccountOffer
// 0x002C (0x003C - 0x0068)
class UGearboxAccountOffer : public UObject
{
public:
	struct FString                                     TitleEfigs;                                               // 0x003C(0x000C) (NeedCtorLink)
	struct FString                                     DescriptionEfigs;                                         // 0x0048(0x000C) (NeedCtorLink)
	int                                                Id;                                                       // 0x0054(0x0004)
	unsigned long                                      Notified : 1;                                             // 0x0058(0x0004)
	struct FString                                     DateUnlocked;                                             // 0x005C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxAccountOffer");
		return ptr;
	}

};


// Class GearboxFramework.PatrolDestination
// 0x000C (0x0188 - 0x0194)
class APatrolDestination : public AActor
{
public:
	TArray<class APatrolDestination*>                  NextPatrolPoints;                                         // 0x0188(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("PatrolDestination");
		return ptr;
	}

};


// Class GearboxFramework.GearboxEULAGFxMovie
// 0x0024 (0x0254 - 0x0278)
class UGearboxEULAGFxMovie : public UGearboxGFxMovie
{
public:
	class UGearboxEULAGFxObject*                       GearboxEULAObj;                                           // 0x0254(0x0004) (Transient)
	unsigned char                                      CurrentControllerId;                                      // 0x0258(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0259(0x0003) MISSED OFFSET
	TArray<struct FEULAData>                           EULAs;                                                    // 0x025C(0x000C) (Transient, NeedCtorLink)
	int                                                EULAIndexToDisplay;                                       // 0x0268(0x0004) (Transient)
	struct FScriptDelegate                             __OnEULAInteractionComplete__Delegate;                    // 0x026C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxEULAGFxMovie");
		return ptr;
	}


	bool HandleInputKey(int ControllerId, const struct FName& ukey, unsigned char uevent);
	void ShowEULA();
	void OnDeclineButtonClick();
	void OnAcceptButtonClick();
	void FireCompleteDelegate();
	void extClosed();
	void extOnDeclineButtonClick();
	void extOnAcceptButtonClick();
	void extOnLoad(const struct FString& Path);
	void OnClose();
	bool Start(bool StartPaused);
	void OnEULAInteractionComplete(TArray<struct FEULAData>* EULAState);
};


// Class GearboxFramework.GearboxEULAGFxObject
// 0x0000 (0x0078 - 0x0078)
class UGearboxEULAGFxObject : public UGFxObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxEULAGFxObject");
		return ptr;
	}


	void NavigateDown();
	void NavigateUp();
	void SetTooltipText(const struct FString& AcceptText, const struct FString& DeclineText);
	void SetEULAText(const struct FString& Title, const struct FString& Text);
	void Init();
};


// Class GearboxFramework.GearboxSeqAct_TargetPriority
// 0x0010 (0x00A4 - 0x00B4)
class UGearboxSeqAct_TargetPriority : public USequenceAction
{
public:
	TArray<class AActor*>                              AITargets;                                                // 0x00A4(0x000C) (Edit, NeedCtorLink)
	float                                              PriorityModifier;                                         // 0x00B0(0x0004) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxSeqAct_TargetPriority");
		return ptr;
	}

};


// Class GearboxFramework.GearboxSeqAct_CameraShake
// 0x0044 (0x00A4 - 0x00E8)
class UGearboxSeqAct_CameraShake : public USequenceAction
{
public:
	struct FGearboxViewShakeInfo                       CameraShake;                                              // 0x00A4(0x0044) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxSeqAct_CameraShake");
		return ptr;
	}

};


// Class GearboxFramework.GearboxSeqAct_PawnClonerLink
// 0x0018 (0x00B4 - 0x00CC)
class UGearboxSeqAct_PawnClonerLink : public USeqAct_Latent
{
public:
	unsigned long                                      bEnabled : 1;                                             // 0x00B4(0x0004) (Edit)
	unsigned long                                      bIsSpawning : 1;                                          // 0x00B4(0x0004)
	TArray<class AActor*>                              ClonePoints;                                              // 0x00B8(0x000C) (Edit, NeedCtorLink)
	int                                                SpawnedCount;                                             // 0x00C4(0x0004)
	float                                              RemainingDelay;                                           // 0x00C8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GearboxSeqAct_PawnClonerLink");
		return ptr;
	}

};


// Class GearboxFramework.GFxMovieDrawStyleInstanceData
// 0x002F (0x004D - 0x007C)
class UGFxMovieDrawStyleInstanceData : public UGFxMovieDrawStyleRTT
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	struct FName                                       ComponentIDName;                                          // 0x0050(0x0008) (Edit)
	struct FName                                       MatIndexName;                                             // 0x0058(0x0008) (Edit)
	unsigned long                                      bAlwaysInstance : 1;                                      // 0x0060(0x0004) (Edit)
	class UMaterial*                                   MatiSource;                                               // 0x0064(0x0004) (Edit)
	struct FName                                       TextureParameterName;                                     // 0x0068(0x0008) (Edit)
	class UMeshComponent*                              Component;                                                // 0x0070(0x0004) (ExportObject, Transient, Component, EditInline)
	int                                                MaterialIndex;                                            // 0x0074(0x0004) (Transient)
	class UMaterialInstanceConstant*                   Mati;                                                     // 0x0078(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GFxMovieDrawStyleInstanceData");
		return ptr;
	}


	bool RequiresClientInstance();
};


// Class GearboxFramework.SeqEvent_AllSpawned
// 0x0000 (0x00C4 - 0x00C4)
class USeqEvent_AllSpawned : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SeqEvent_AllSpawned");
		return ptr;
	}

};


// Class GearboxFramework.PopulationMasterAttributeContextResolver
// 0x0000 (0x003C - 0x003C)
class UPopulationMasterAttributeContextResolver : public UAttributeContextResolver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("PopulationMasterAttributeContextResolver");
		return ptr;
	}


	class UObject* GetAttributeContext(class UAttributeDefinitionBase* Attribute, class UObject* AttributeContextSource);
};


// Class GearboxFramework.SeqEvent_SinglePopulationDeath
// 0x0000 (0x00C4 - 0x00C4)
class USeqEvent_SinglePopulationDeath : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SeqEvent_SinglePopulationDeath");
		return ptr;
	}

};


// Class GearboxFramework.RES_Rotation
// 0x0000 (0x003C - 0x003C)
class URES_Rotation : public UActionResource
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("RES_Rotation");
		return ptr;
	}

};


// Class GearboxFramework.RES_SpecialMove
// 0x0000 (0x003C - 0x003C)
class URES_SpecialMove : public UActionResource
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("RES_SpecialMove");
		return ptr;
	}

};


// Class GearboxFramework.SeqEvent_ArrivedAtMoveNode
// 0x0000 (0x00C4 - 0x00C4)
class USeqEvent_ArrivedAtMoveNode : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SeqEvent_ArrivedAtMoveNode");
		return ptr;
	}

};


// Class GearboxFramework.SeqEvent_LeavingMoveNode
// 0x0000 (0x00C4 - 0x00C4)
class USeqEvent_LeavingMoveNode : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SeqEvent_LeavingMoveNode");
		return ptr;
	}

};


// Class GearboxFramework.ShowDebugHelpers
// 0x0000 (0x003C - 0x003C)
class UShowDebugHelpers : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ShowDebugHelpers");
		return ptr;
	}

};


// Class GearboxFramework.SkeletalMeshActorGBXMatinee
// 0x0000 (0x01CC - 0x01CC)
class ASkeletalMeshActorGBXMatinee : public ASkeletalMeshActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SkeletalMeshActorGBXMatinee");
		return ptr;
	}

};


#ifdef _MSC_VER
#pragma pack(pop)
#endif
