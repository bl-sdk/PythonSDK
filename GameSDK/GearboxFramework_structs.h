/*
#############################################################################################
# Borderlands 2 (1.0.35.4705) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct GearboxFramework.AIComponent.AIHoldData
// 0x000C
struct FAIHoldData
{
	struct FName                                       HoldName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	class UObject*                                     HoldTag;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.AIComponent.AIResourceData
// 0x001C
struct FAIResourceData
{
	class UAIResource*                                 Resource;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FPointer >                          CanRun;                                           		// 0x0004 (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	TArray< struct FPointer >                          Running;                                          		// 0x0010 (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct GearboxFramework.AIComponent.AIRange
// 0x0008
struct FAIRange
{
	float                                              MinVal;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxVal;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GearboxFramework.AIComponent.AITreeData
// 0x00AD
struct FAITreeData
{
	class UIAIInterface*                               AI;                                               		// 0x0000 (0x0008) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0004 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      Type;                                             		// 0x0008 (0x0001) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	TArray< int >                                      Children;                                         		// 0x000C (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	class UAIResource*                                 Resource;                                         		// 0x0018 (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	class UExpressionEvaluator*                        CanRunIf;                                         		// 0x001C (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	struct FAIRange                                    TimedStart;                                       		// 0x0020 (0x0008) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	struct FAIRange                                    TimedReset;                                       		// 0x0028 (0x0008) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	struct FAIRange                                    TimedFail;                                        		// 0x0030 (0x0008) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	unsigned long                                      bStopIfCannotRun : 1;                             		// 0x0038 (0x0004) [0x0000000000020003] [0x00000001] ( CPF_Edit | CPF_Const | CPF_EditConst )
	int                                                ActiveChild;                                      		// 0x003C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                NextActiveChild;                                  		// 0x0040 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              LastFailTime;                                     		// 0x0044 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              NextTimedRun;                                     		// 0x0048 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              NextTimedFail;                                    		// 0x004C (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              NextTimedResource;                                		// 0x0050 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bHoldingResource : 1;                             		// 0x0054 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	class UActionSequence*                             Action;                                           		// 0x0058 (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	int                                                LoopCount;                                        		// 0x005C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                LastRandomChild;                                  		// 0x0060 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< float >                                    Weights;                                          		// 0x0064 (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	TArray< int >                                      LoopCountMax;                                     		// 0x0070 (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	unsigned long                                      bInterrupt : 1;                                   		// 0x007C (0x0004) [0x0000000000020003] [0x00000001] ( CPF_Edit | CPF_Const | CPF_EditConst )
	TArray< class UExpressionEvaluator* >              Conditions;                                       		// 0x0080 (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	int                                                NextSequentialChild;                              		// 0x008C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                PosX;                                             		// 0x0090 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                PosY;                                             		// 0x0094 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     NodeName;                                         		// 0x0098 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FName                                       ActionFailName;                                   		// 0x00A4 (0x0008) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      FailReason;                                       		// 0x00AC (0x0001) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct GearboxFramework.AIComponent.PriorityData
// 0x0010
struct FPriorityData
{
	struct FString                                     Description;                                      		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UExpressionEvaluator*                        Condition;                                        		// 0x000C (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
};

// ScriptStruct GearboxFramework.FlagDefinition.FlagDefinitionInitialization
// 0x0028
struct FFlagDefinitionInitialization
{
	class UFlagDefinition*                             FlagToSet;                                        		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                ChanceTrue;                                       		// 0x0004 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              ProbabilityTrue;                                  		// 0x0014 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FAttributeInitializationData                Duration;                                         		// 0x0018 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct GearboxFramework.GearboxGlobals.CoverDebugScoringInfo
// 0x000C
struct FCoverDebugScoringInfo
{
	struct FName                                       PriorityName;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              Score;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.GearboxGlobals.CoverDebugPriority
// 0x002C
struct FCoverDebugPriority
{
	float                                              Score;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Distance;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsACandidate : 1;                                 		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsBestCandidate : 1;                              		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	class AActor*                                      TheCoverActor;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                SlotNdx;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FString                                     FailString;                                       		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FCoverDebugScoringInfo >            ScoringInfo;                                      		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct GearboxFramework.GearboxGlobals.ValidNameRange
// 0x0008
struct FValidNameRange
{
	int                                                Start;                                            		// 0x0000 (0x0004) [0x0000000000100000]              
	int                                                End;                                              		// 0x0004 (0x0004) [0x0000000000100000]              
};

// ScriptStruct GearboxFramework.GearboxGlobals.ObjectKey
// 0x0010
struct FObjectKey
{
	struct FName                                       ObjectName;                                       		// 0x0000 (0x0008) [0x0000000000100000]              
	struct FName                                       AdditionalKey;                                    		// 0x0008 (0x0008) [0x0000000000100000]              
};

// ScriptStruct GearboxFramework.GearboxGlobals.LevelStateRecord
// 0x0018
struct FLevelStateRecord
{
	struct FName                                       LevelName;                                        		// 0x0000 (0x0008) [0x0000000000100000]              
	unsigned char                                      LevelLoaded;                                      		// 0x0008 (0x0001) [0x0000000000100000]              
	TArray< struct FObjectKey >                        ObjectKeys;                                       		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct GearboxFramework.GearboxGlobals.VantageSpot
// 0x000D
struct FVantageSpot
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	unsigned char                                      VantageType;                                      		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.GearboxGlobals.GearboxCoverState
// 0x000C
struct FGearboxCoverState
{
	class AActor*                                      TheCoverActor;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                SlotIndex;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      State;                                            		// 0x0008 (0x0001) [0x0000000000000000]              
	unsigned char                                      ExtendedState;                                    		// 0x0009 (0x0001) [0x0000000000000000]              
	unsigned char                                      MetaData;                                         		// 0x000A (0x0001) [0x0000000000000000]              
	unsigned char                                      ExtendedMetaData;                                 		// 0x000B (0x0001) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.GearboxGlobals.GearboxCoverTransition
// 0x0004
struct FGearboxCoverTransition
{
	unsigned char                                      Action;                                           		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      ExtendedAction;                                   		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      Padding[ 0x2 ];                                   		// 0x0002 (0x0002) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.GearboxGlobals.CoverCandidate
// 0x000C
struct FCoverCandidate
{
	class AActor*                                      TheCoverActor;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                SlotNdx;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Score;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.GearboxGlobals.PopulationActor
// 0x0028
struct FPopulationActor
{
	class UPopulationFactory*                          SpawnFactory;                                     		// 0x0000 (0x0004) [0x0000000004000003]              ( CPF_Edit | CPF_Const | CPF_EditInline )
	struct FAttributeInitializationData                Probability;                                      		// 0x0004 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                MaxActiveAtOneTime;                               		// 0x0014 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      TestVisibility : 1;                               		// 0x0024 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      TestFOV : 1;                                      		// 0x0024 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
};

// ScriptStruct GearboxFramework.GearboxGlobals.LocationInfo
// 0x0010
struct FLocationInfo
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	unsigned long                                      IsPlayerInfo : 1;                                 		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct GearboxFramework.ActionSequenceRandom.ActionSequenceRandomData
// 0x0014
struct FActionSequenceRandomData
{
	struct FAttributeInitializationData                ProbabilityData;                                  		// 0x0000 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UActionSequence*                             ActionToRunWhenTrue;                              		// 0x0010 (0x0004) [0x0000000004000003]              ( CPF_Edit | CPF_Const | CPF_EditInline )
};

// ScriptStruct GearboxFramework.BehaviorProviderDefinition.SubarrayData
// 0x0004
struct FSubarrayData
{
	int                                                ArrayIndexAndLength;                              		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct GearboxFramework.BehaviorProviderDefinition.BehaviorSequenceActionData2
// 0x000C
struct FBehaviorSequenceActionData2
{
	class UBehaviorBase*                               Behavior;                                         		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FSubarrayData                               LinkedVariables;                                  		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FSubarrayData                               OutputLinks;                                      		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct GearboxFramework.BehaviorProviderDefinition.BehaviorVariableValue
// 0x0019
struct FBehaviorVariableValue
{
	int                                                IntValue;                                         		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              FloatValue;                                       		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FVector                                     VectorValue;                                      		// 0x0008 (0x000C) [0x0000000000000002]              ( CPF_Const )
	class UObject*                                     ObjectValue;                                      		// 0x0014 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      VariableType;                                     		// 0x0018 (0x0001) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct GearboxFramework.BehaviorProviderDefinition.BehaviorVariableValueUnion_Mirror
// 0x0004
struct FBehaviorVariableValueUnion_Mirror
{
	struct FPointer                                    Data;                                             		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct GearboxFramework.BehaviorProviderDefinition.BehaviorVariableData
// 0x0010
struct FBehaviorVariableData
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Type;                                             		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FBehaviorVariableValueUnion_Mirror          Value;                                            		// 0x000C (0x0004) [0x0000000000801000]              ( CPF_Native | CPF_NoExport )
};

// ScriptStruct GearboxFramework.BehaviorProviderDefinition.BehaviorEventUserData
// 0x0018
struct FBehaviorEventUserData
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	unsigned long                                      bEnabled : 1;                                     		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bReplicate : 1;                                   		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                MaxTriggerCount;                                  		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ReTriggerDelay;                                   		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UBehaviorEventFilterBase*                    FilterObject;                                     		// 0x0014 (0x0004) [0x0000000004420009]              ( CPF_Edit | CPF_ExportObject | CPF_EditConst | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct GearboxFramework.BehaviorProviderDefinition.BehaviorVariableLinkData
// 0x001C
struct FBehaviorVariableLinkData
{
	struct FName                                       PropertyName;                                     		// 0x0000 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                ConnectionIndex;                                  		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< int >                                      LinkedVariables;                                  		// 0x000C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	class UProperty*                                   CachedProperty;                                   		// 0x0018 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct GearboxFramework.BehaviorProviderDefinition.BehaviorActionLinkData
// 0x0008
struct FBehaviorActionLinkData
{
	int                                                LinkedBehavior;                                   		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              ActivateDelay;                                    		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct GearboxFramework.BehaviorProviderDefinition.BehaviorOutputLinkData
// 0x0010
struct FBehaviorOutputLinkData
{
	int                                                LinkId;                                           		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< struct FBehaviorActionLinkData >           LinkedActions;                                    		// 0x0004 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct GearboxFramework.BehaviorProviderDefinition.BehaviorEventData
// 0x0030
struct FBehaviorEventData
{
	struct FBehaviorEventUserData                      UserData;                                         		// 0x0000 (0x0018) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< struct FBehaviorVariableLinkData >         OutputVariables;                                  		// 0x0018 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< struct FBehaviorOutputLinkData >           OutputLinks;                                      		// 0x0024 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct GearboxFramework.BehaviorProviderDefinition.BehaviorEventData2
// 0x0020
struct FBehaviorEventData2
{
	struct FBehaviorEventUserData                      UserData;                                         		// 0x0000 (0x0018) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FSubarrayData                               OutputVariables;                                  		// 0x0018 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FSubarrayData                               OutputLinks;                                      		// 0x001C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct GearboxFramework.BehaviorProviderDefinition.BehaviorSequenceActionData
// 0x0044
struct FBehaviorSequenceActionData
{
	class UBehaviorBase*                               Behavior;                                         		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FBehaviorVariableLinkData                   ContextVariables;                                 		// 0x0004 (0x001C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FBehaviorVariableLinkData >         LinkedVariables;                                  		// 0x0020 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< struct FBehaviorVariableLinkData >         OutputVariables;                                  		// 0x002C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< struct FBehaviorOutputLinkData >           OutputLinks;                                      		// 0x0038 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct GearboxFramework.BehaviorProviderDefinition.BehaviorOutputLinkData2
// 0x0008
struct FBehaviorOutputLinkData2
{
	int                                                LinkIdAndLinkedBehavior;                          		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              ActivateDelay;                                    		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct GearboxFramework.BehaviorProviderDefinition.BehaviorVariableLinkData2
// 0x0014
struct FBehaviorVariableLinkData2
{
	struct FName                                       PropertyName;                                     		// 0x0000 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      VariableLinkType;                                 		// 0x0008 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      ConnectionIndex;                                  		// 0x0009 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FSubarrayData                               LinkedVariables;                                  		// 0x000C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UProperty*                                   CachedProperty;                                   		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct GearboxFramework.BehaviorProviderDefinition.BehaviorSequenceData
// 0x0070
struct FBehaviorSequenceData
{
	struct FName                                       BehaviorSequenceName;                             		// 0x0000 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      bEnabledOnSpawn : 1;                              		// 0x0008 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      bSequenceEnabledMutex : 1;                        		// 0x0008 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	class UBehaviorSequenceCustomEnableCondition*      CustomEnableCondition;                            		// 0x000C (0x0004) [0x0000000004000003]              ( CPF_Edit | CPF_Const | CPF_EditInline )
	TArray< struct FBehaviorEventData >                EventData;                                        		// 0x0010 (0x000C) [0x0000000020620002]              ( CPF_Const | CPF_EditConst | CPF_NeedCtorLink | CPF_Deprecated )
	TArray< struct FBehaviorEventData2 >               EventData2;                                       		// 0x001C (0x000C) [0x0000000000620002]              ( CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	TArray< struct FBehaviorSequenceActionData >       BehaviorData;                                     		// 0x0028 (0x000C) [0x0000000020620002]              ( CPF_Const | CPF_EditConst | CPF_NeedCtorLink | CPF_Deprecated )
	TArray< struct FBehaviorSequenceActionData2 >      BehaviorData2;                                    		// 0x0034 (0x000C) [0x0000000000620002]              ( CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	TArray< struct FBehaviorVariableData >             VariableData;                                     		// 0x0040 (0x000C) [0x0000000000620002]              ( CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	TArray< struct FBehaviorOutputLinkData2 >          ConsolidatedOutputLinkData;                       		// 0x004C (0x000C) [0x0000000000620002]              ( CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	TArray< struct FBehaviorVariableLinkData2 >        ConsolidatedVariableLinkData;                     		// 0x0058 (0x000C) [0x0000000000620002]              ( CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	TArray< int >                                      ConsolidatedLinkedVariables;                      		// 0x0064 (0x000C) [0x0000000000620002]              ( CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
};

// ScriptStruct GearboxFramework.AIDebugCamera.DebugListItem
// 0x0051
struct FDebugListItem
{
	unsigned char                                      DisplayType;                                      		// 0x0000 (0x0001) [0x0000000000100000]              
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000100000]              
	struct FVector                                     Location2;                                        		// 0x0010 (0x000C) [0x0000000000100000]              
	struct FVector                                     Location3;                                        		// 0x001C (0x000C) [0x0000000000100000]              
	class UTexture2D*                                  Texture;                                          		// 0x0028 (0x0004) [0x0000000000100000]              
	float                                              U;                                                		// 0x002C (0x0004) [0x0000000000100000]              
	float                                              V;                                                		// 0x0030 (0x0004) [0x0000000000100000]              
	float                                              UL;                                               		// 0x0034 (0x0004) [0x0000000000100000]              
	float                                              VL;                                               		// 0x0038 (0x0004) [0x0000000000100000]              
	float                                              Scale;                                            		// 0x003C (0x0004) [0x0000000000100000]              
	struct FString                                     TextString;                                       		// 0x0040 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FColor                                      TextColor;                                        		// 0x004C (0x0004) [0x0000000000100000]              
	unsigned char                                      Alignment;                                        		// 0x0050 (0x0001) [0x0000000000100000]              
};

// ScriptStruct GearboxFramework.IBehaviorConsumer.BehaviorConsumerHandle
// 0x0004
struct FBehaviorConsumerHandle
{
	int                                                PID;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.AIFactoryBase.TimeStampedRecord
// 0x0004
struct FTimeStampedRecord
{
	float                                              DeathTimeStamp;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.AIFactoryBase.KnowledgeRecordStruct
// 0x0005(0x0009 - 0x0004)
struct FKnowledgeRecordStruct : FTimeStampedRecord
{
	class UKnowledgeRecord*                            TheObj;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      InUse;                                            		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.AIFactoryBase.RuleSetRecord
// 0x0005(0x0009 - 0x0004)
struct FRuleSetRecord : FTimeStampedRecord
{
	class URuleSet*                                    TheObj;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      InUse;                                            		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.AIFactoryBase.RuleRecord
// 0x0005(0x0009 - 0x0004)
struct FRuleRecord : FTimeStampedRecord
{
	class URule*                                       TheObj;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      InUse;                                            		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.AIFactoryBase.ActionSequenceRecord
// 0x0005(0x0009 - 0x0004)
struct FActionSequenceRecord : FTimeStampedRecord
{
	class UActionSequence*                             TheObj;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      InUse;                                            		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.AIFactoryBase.TargetInfoRecord
// 0x0005(0x0009 - 0x0004)
struct FTargetInfoRecord : FTimeStampedRecord
{
	class UMindTargetInfo*                             TheObj;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      InUse;                                            		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.AIFactoryBase.AIDefinitionRecord
// 0x0005(0x0009 - 0x0004)
struct FAIDefinitionRecord : FTimeStampedRecord
{
	class UAIDefinition*                               TheObj;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      InUse;                                            		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.AIResource.AIResourceRestriction
// 0x000C
struct FAIResourceRestriction
{
	int                                                MaxUsers;                                         		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                MinUsers;                                         		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UAIResource*                                 Resource;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GearboxFramework.GearboxEditorNode.OutputLink
// 0x000C
struct FOutputLink
{
	TArray< class UGearboxEditorNode* >                Links;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct GearboxFramework.GearboxEditorNode.VariableLink
// 0x000C
struct FVariableLink
{
	TArray< class UGearboxEditorNode* >                Links;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct GearboxFramework.SpecialMoveInterface.SpecialMoveData
// 0x001C
struct FSpecialMoveData
{
	class UObject*                                     Data;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              PlayRateScale;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Duration;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FName                                       CallbackName;                                     		// 0x000C (0x0008) [0x0000000000000000]              
	class UObject*                                     CallbackObject;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	class USpecialMoveDefinition*                      SMD;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.AnimNodeSpecialMoveBlend.SlotAnimParameters
// 0x0044
struct FSlotAnimParameters
{
	struct FSpecialMoveData                            SMData;                                           		// 0x0000 (0x001C) [0x0000000000000000]              
	class UGearboxAnimDefinition*                      CustomAnimDef;                                    		// 0x001C (0x0004) [0x0000000000000000]              
	struct FName                                       CustomAnimName;                                   		// 0x0020 (0x0008) [0x0000000000000000]              
	TArray< float >                                    PerBoneWeights;                                   		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            TransformReqBone;                                 		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                TransformReqBoneIndex;                            		// 0x0040 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.IBehaviorProvider.SpecializedBehaviorEvent
// 0x0008
struct FSpecializedBehaviorEvent
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct GearboxFramework.ITimerBehavior.BehaviorTimerState
// 0x000C
struct FBehaviorTimerState
{
	unsigned long                                      bIsRunning : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Delay;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              EventTime;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.ITimerBehavior.TimerEventReactionDataSpecialized
// 0x0000(0x0008 - 0x0008)
struct FTimerEventReactionDataSpecialized : FSpecializedBehaviorEvent
{
};

// ScriptStruct GearboxFramework.ITimerBehavior.TimerBehaviorUserState
// 0x0024
struct FTimerBehaviorUserState
{
	struct FBehaviorTimerState                         Timers[ 0x3 ];                                    		// 0x0000 (0x0024) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.ITimerBehavior.TimerEventReactionData
// 0x0010
struct FTimerEventReactionData
{
	unsigned char                                      EventType;                                        		// 0x0000 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< class UBehaviorBase* >                     Behaviors;                                        		// 0x0004 (0x000C) [0x0000000004400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct GearboxFramework.GbxMessage.GbxMessageSimpleMetaData
// 0x001C
struct FGbxMessageSimpleMetaData
{
	float                                              FloatData;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                IntData;                                          		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       NameData;                                         		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     VectorData;                                       		// 0x0010 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GearboxFramework.BehaviorHelpers.RelativeDirectionData
// 0x0020
struct FRelativeDirectionData
{
	unsigned char                                      Direction;                                        		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FAttributeInitializationData                ConeAroundDirection;                              		// 0x0004 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    AdditionalRotation;                               		// 0x0014 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GearboxFramework.BehaviorHelpers.AttachmentLocationData
// 0x001C
struct FAttachmentLocationData
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class UIWorldBody*                                 AttachmentBase;                                   		// 0x000C (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0010 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FName                                       AttachmentName;                                   		// 0x0014 (0x0008) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.BehaviorKernel.ProviderRecord
// 0x0008
struct FProviderRecord
{
	class UBehaviorProviderDefinition*                 ProviderDefinition;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ReferenceCount;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.BehaviorKernel.BehaviorExecutionRecord
// 0x001C
struct FBehaviorExecutionRecord
{
	int                                                OwningProcessID;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ProvidersIndex;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                SequencesDataIndex;                               		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                BehaviorNumber;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	struct FName                                       BehaviorName;                                     		// 0x0010 (0x0008) [0x0000000000000000]              
	float                                              TimeOfExecution;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.BehaviorKernel.BehaviorThread
// 0x0018
struct FBehaviorThread
{
	unsigned char                                      ThreadState;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                OwningProcessID;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FPointer                                    ThreadSequenceState;                              		// 0x0008 (0x0004) [0x0000000000001000]              ( CPF_Native )
	int                                                NextBehavior;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              ActivateTime;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              BehaviorStartedTime;                              		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.BehaviorKernel.BehaviorEventState
// 0x000C
struct FBehaviorEventState
{
	int                                                TriggerCount;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              LastTriggerTime;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	class UBehaviorEventFilterBase*                    FilterObject;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.BehaviorKernel.BehaviorVariableState
// 0x0010
struct FBehaviorVariableState
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      Type;                                             		// 0x0008 (0x0001) [0x0000000000000000]              
	struct FBehaviorVariableValueUnion_Mirror          Value;                                            		// 0x000C (0x0004) [0x0000000000801000]              ( CPF_Native | CPF_NoExport )
};

// ScriptStruct GearboxFramework.BehaviorKernel.BehaviorSequenceState
// 0x0018
struct FBehaviorSequenceState
{
	unsigned long                                      bIsEnabled : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                ProvidersIndex;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                SequencesDataIndex;                               		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                SequenceEnabledBitIndex;                          		// 0x000C (0x0004) [0x0000000000000000]              
	struct FPointer                                    EventStateHead;                                   		// 0x0010 (0x0004) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    VariableStateHead;                                		// 0x0014 (0x0004) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct GearboxFramework.BehaviorKernel.BehaviorProcess
// 0x001C
struct FBehaviorProcess
{
	class UObject*                                     Owner;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ProcessID;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                SequenceEnabledBitField;                          		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned char                                      ProcessState;                                     		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned char                                      NextSequenceEnabledBitIndexToUse;                 		// 0x000D (0x0001) [0x0000000000000000]              
	unsigned char                                      bSupportsReplicatedSequenceState;                 		// 0x000E (0x0001) [0x0000000000000000]              
	unsigned char                                      NumPendingProviderRemovalRequests;                		// 0x000F (0x0001) [0x0000000000000000]              
	struct FChunkedList_Mirror                         Sequences;                                        		// 0x0010 (0x0004) [0x0000000000001000]              ( CPF_Native )
	struct FChunkedList_Mirror                         Events;                                           		// 0x0014 (0x0004) [0x0000000000001000]              ( CPF_Native )
	struct FChunkedList_Mirror                         Variables;                                        		// 0x0018 (0x0004) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct GearboxFramework.BehaviorKernel.ProviderRemovalRequest
// 0x0008
struct FProviderRemovalRequest
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ProvidersIndex;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.BehaviorKernel.BehaviorKernelArrayStats
// 0x0010
struct FBehaviorKernelArrayStats
{
	int                                                UsedSlots;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                UnusedSlots;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                PeakUsage;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                ContainerSlack;                                   		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.BehaviorKernel.BehaviorKernelStats
// 0x0068
struct FBehaviorKernelStats
{
	int                                                NumProcessesCreated;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                NumThreadsCreated;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                NumWaitingThreads;                                		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                NumEventsActivated;                               		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                NumEventsIgnored;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                NumBehaviorsRun;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FBehaviorKernelArrayStats                   ProcessListStats;                                 		// 0x0018 (0x0010) [0x0000000000000000]              
	struct FBehaviorKernelArrayStats                   ProviderListStats;                                		// 0x0028 (0x0010) [0x0000000000000000]              
	struct FBehaviorKernelArrayStats                   ObjectVariablesListStats;                         		// 0x0038 (0x0010) [0x0000000000000000]              
	struct FBehaviorKernelArrayStats                   DynamicBehaviorsListStats;                        		// 0x0048 (0x0010) [0x0000000000000000]              
	int                                                ProvidersIndexFreeListLength;                     		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                ObjectVariablesFreeListLength;                    		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                TotalMemoryUsed;                                  		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                MemoryUsedBySlack;                                		// 0x0064 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.IBehaviorConsumer.ReplicatedBehaviorConsumerState
// 0x000C
struct FReplicatedBehaviorConsumerState
{
	unsigned long                                      bIsProcessSuspended : 1;                          		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                BehaviorSequenceEnabledFlags;                     		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bNeedToApplyThisState : 1;                        		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct GearboxFramework.IBehaviorConsumer.ReplicatedBehaviorEvent
// 0x0004
struct FReplicatedBehaviorEvent
{
	unsigned char                                      SequenceIndex;                                    		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      EventCounter;                                     		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      EventIndex;                                       		// 0x0002 (0x0001) [0x0000000000000000]              
	unsigned char                                      EventOutput;                                      		// 0x0003 (0x0001) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.BehaviorSequenceCustomEnableCondition.LinkedBehaviorSequence
// 0x0008
struct FLinkedBehaviorSequence
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FPointer                                    SequenceState;                                    		// 0x0004 (0x0004) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct GearboxFramework.CharacterClassMessageDefinition.BehaviorTriggerMessageStruct
// 0x0014
struct FBehaviorTriggerMessageStruct
{
	class UGbxMessageDefinition*                       MessageDefinition;                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Instigator;                                       		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      OtherEventParticipant;                            		// 0x0005 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UBehaviorBase* >                     Behaviors;                                        		// 0x0008 (0x000C) [0x0000000004400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct GearboxFramework.ExposureUtilityBasicCaching.ExposureCacheStruct
// 0x0040
struct FExposureCacheStruct
{
	struct FName                                       FromPawnName;                                     		// 0x0000 (0x0008) [0x0000000000100000]              
	struct FName                                       ToActorName;                                      		// 0x0008 (0x0008) [0x0000000000100000]              
	float                                              TimeCached;                                       		// 0x0010 (0x0004) [0x0000000000100000]              
	float                                              NextUpdateTime;                                   		// 0x0014 (0x0004) [0x0000000000100000]              
	float                                              Exposure;                                         		// 0x0018 (0x0004) [0x0000000000100000]              
	struct FVector                                     FromLoc;                                          		// 0x001C (0x000C) [0x0000000000100000]              
	struct FVector                                     ToLoc;                                            		// 0x0028 (0x000C) [0x0000000000100000]              
	TArray< struct FVantageSpot >                      Vantage;                                          		// 0x0034 (0x000C) [0x0000000000502000]              ( CPF_Transient | CPF_NeedCtorLink )
};

// ScriptStruct GearboxFramework.ExposureUtilityFixedCost.ExposureUpdateStruct
// 0x001D
struct FExposureUpdateStruct
{
	class AGearboxPawn*                                FromPawn;                                         		// 0x0000 (0x0004) [0x0000000000100000]              
	class AActor*                                      ToActor;                                          		// 0x0004 (0x0004) [0x0000000000100000]              
	float                                              TimeRequested;                                    		// 0x0008 (0x0004) [0x0000000000100000]              
	float                                              Exposure;                                         		// 0x000C (0x0004) [0x0000000000100000]              
	TArray< struct FVantageSpot >                      Vantage;                                          		// 0x0010 (0x000C) [0x0000000000502000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned char                                      ShouldRemove;                                     		// 0x001C (0x0001) [0x0000000000100000]              
};

// ScriptStruct GearboxFramework.ExposureUtilityFixedCost.BucketStruct
// 0x001C
struct FBucketStruct
{
	int                                                NdxToStartCheckFrom;                              		// 0x0000 (0x0004) [0x0000000000100000]              
	float                                              DistanceSquared;                                  		// 0x0004 (0x0004) [0x0000000000100000]              
	int                                                MaxLineChecksPerFrame;                            		// 0x0008 (0x0004) [0x0000000000100000]              
	int                                                MaxIterationsPerFrame;                            		// 0x000C (0x0004) [0x0000000000100000]              
	TArray< struct FExposureUpdateStruct >             Exposures;                                        		// 0x0010 (0x000C) [0x0000000000502000]              ( CPF_Transient | CPF_NeedCtorLink )
};

// ScriptStruct GearboxFramework.ExposureUtilityFixedCost.PointExposureData
// 0x0028
struct FPointExposureData
{
	class AActor*                                      Looker;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     Point;                                            		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     Point2;                                           		// 0x0010 (0x000C) [0x0000000000000000]              
	float                                              Exposure;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              LastCheckTime;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              LastUpdateTime;                                   		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.FeatherBoneBlendDefinition.FeatherBoneBlendData
// 0x000C
struct FFeatherBoneBlendData
{
	struct FName                                       StartBoneName;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendWeight;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GearboxFramework.FiringPattern.FiringBehaviorBurstInfo
// 0x0019
struct FFiringBehaviorBurstInfo
{
	class AGearboxPawn*                                Instigator;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	class AWeapon*                                     InstigatorWeapon;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	class AActor*                                      TargetActor;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                NumShots;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              RefireRate;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	class UMindTargetInfo*                             TargetInfo;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned char                                      FireType;                                         		// 0x0018 (0x0001) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.FiringBehaviorDefinition.ConditionalPattern
// 0x0010
struct FConditionalPattern
{
	TArray< class UFiringCondition* >                  Conditions;                                       		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UFiringPattern*                              Pattern;                                          		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GearboxFramework.Rule.FlagEvalConditional
// 0x0018
struct FFlagEvalConditional
{
	unsigned char                                      FlagEvalType;                                     		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class UFlagDefinition*                             FlagDefinition;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FAttributeInitializationData                TimeSeconds;                                      		// 0x0008 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GearboxFramework.Rule.FlagEvalORConnector
// 0x000C
struct FFlagEvalORConnector
{
	TArray< struct FFlagEvalConditional >              ANDChain;                                         		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct GearboxFramework.GBXActorList.s_actorList
// 0x000C
struct Fs_actorList
{
	struct FName                                       LevelName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	class AActor*                                      Actor;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.SparkTypes.SparkResult
// 0x0018
struct FSparkResult
{
	unsigned long                                      RequestSucceeded : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      ErrorCode;                                        		// 0x0004 (0x0001) [0x0000000000000000]              
	int                                                HttpStatusCode;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	TArray< unsigned char >                            ResponseBody;                                     		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct GearboxFramework.SparkInterface.HttpParameters
// 0x0038
struct FHttpParameters
{
	class USparkServiceConfiguration*                  ServiceConfiguration;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     SubService;                                       		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      ContentType;                                      		// 0x0010 (0x0001) [0x0000000000000000]              
	struct FString                                     CustomContentType;                                		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      AcceptsType;                                      		// 0x0020 (0x0001) [0x0000000000000000]              
	struct FString                                     CustomAcceptsType;                                		// 0x0024 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      Method;                                           		// 0x0030 (0x0001) [0x0000000000000000]              
	unsigned long                                      IsResponseDesired : 1;                            		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct GearboxFramework.GearboxAccountData.EntitlementResult
// 0x0024
struct FEntitlementResult
{
	struct FName                                       Identifier;                                       		// 0x0000 (0x0008) [0x0000000000100000]              
	struct FString                                     Payload;                                          		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Id;                                               		// 0x0014 (0x0004) [0x0000000000100000]              
	unsigned long                                      Consumable : 1;                                   		// 0x0018 (0x0004) [0x0000000000100000] [0x00000001] 
	int                                                Consumed;                                         		// 0x001C (0x0004) [0x0000000000100000]              
	int                                                ConsumableAmount;                                 		// 0x0020 (0x0004) [0x0000000000100000]              
};

// ScriptStruct GearboxFramework.GearboxAccountData.OfferResult
// 0x002C
struct FOfferResult
{
	struct FString                                     TitleEfigs;                                       		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     DescriptionEfigs;                                 		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Id;                                               		// 0x0018 (0x0004) [0x0000000000100000]              
	unsigned long                                      Notified : 1;                                     		// 0x001C (0x0004) [0x0000000000100000] [0x00000001] 
	struct FString                                     DateUnlocked;                                     		// 0x0020 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct GearboxFramework.GearboxAccountData.ServiceParameterResult
// 0x0018
struct FServiceParameterResult
{
	struct FString                                     Key;                                              		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Value;                                            		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct GearboxFramework.GearboxAccountData.ServiceResult
// 0x001C
struct FServiceResult
{
	struct FName                                       ServiceName;                                      		// 0x0000 (0x0008) [0x0000000000100000]              
	struct FName                                       ConfigurationGroup;                               		// 0x0008 (0x0008) [0x0000000000100000]              
	TArray< struct FServiceParameterResult >           Parameters;                                       		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct GearboxFramework.GearboxAccountData.ArchwayResult
// 0x0064
struct FArchwayResult
{
	struct FString                                     RequestId;                                        		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     GearboxUserToken;                                 		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     GearboxUserEmail;                                 		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           Messages;                                         		// 0x0024 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FEntitlementResult >                Entitlements;                                     		// 0x0030 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FOfferResult >                      Offers;                                           		// 0x003C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FServiceResult >                    Services;                                         		// 0x0048 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      InProgress : 1;                                   		// 0x0054 (0x0004) [0x0000000000100000] [0x00000001] 
	unsigned long                                      Success : 1;                                      		// 0x0054 (0x0004) [0x0000000000100000] [0x00000002] 
	unsigned long                                      DisableSpark : 1;                                 		// 0x0054 (0x0004) [0x0000000000100000] [0x00000004] 
	unsigned long                                      TimeOut : 1;                                      		// 0x0054 (0x0004) [0x0000000000100000] [0x00000008] 
	unsigned long                                      HasShiftAccount : 1;                              		// 0x0054 (0x0004) [0x0000000000100000] [0x00000010] 
	struct FString                                     EmergencyMessage;                                 		// 0x0058 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct GearboxFramework.GearboxAIMoveNode.NodeData
// 0x0008
struct FNodeData
{
	class AGearboxAIMoveNode*                          Node;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Weight;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GearboxFramework.SpecialMoveDefinition.SMBehavior
// 0x0010
struct FSMBehavior
{
	unsigned long                                      PlayServer : 1;                                   		// 0x0000 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      PlayClient : 1;                                   		// 0x0000 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	unsigned long                                      PlayLocal : 1;                                    		// 0x0000 (0x0004) [0x0000000000000003] [0x00000004] ( CPF_Edit | CPF_Const )
	TArray< class UBehaviorBase* >                     Behaviors;                                        		// 0x0004 (0x000C) [0x0000000004400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct GearboxFramework.SpecialMoveDefinition.SMNotify
// 0x0004(0x0014 - 0x0010)
struct FSMNotify : FSMBehavior
{
	float                                              Time;                                             		// 0x0010 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct GearboxFramework.GearboxAnimDefinition.TimedAnimBehaviorEvent
// 0x0008(0x0010 - 0x0008)
struct FTimedAnimBehaviorEvent : FSpecializedBehaviorEvent
{
	float                                              Time;                                             		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bServerOnly : 1;                                  		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct GearboxFramework.GearboxCoverStateManager.CoverSpotInfo
// 0x0018
struct FCoverSpotInfo
{
	class AActor*                                      TheCoverActor;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                CoverSlotIndex;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     CoverSpotWorldLocation;                           		// 0x0008 (0x000C) [0x0000000000000000]              
	unsigned char                                      CoverHeight;                                      		// 0x0014 (0x0001) [0x0000000000000000]              
	unsigned char                                      ExtendedInfo1;                                    		// 0x0015 (0x0001) [0x0000000000000000]              
	unsigned char                                      ExtendedInfo2;                                    		// 0x0016 (0x0001) [0x0000000000000000]              
	unsigned char                                      ExtendedInfo3;                                    		// 0x0017 (0x0001) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.GearboxDialogInterface.GearboxDialogData
// 0x0010
struct FGearboxDialogData
{
	class UGearboxDialogNameTag*                       NameTag;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAkEvent*                                    TalkAkEvent;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                AkAudioUniqueID;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Pitch;                                            		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GearboxFramework.GearboxDialogInterface.GearboxDialogReplicatedData
// 0x0014
struct FGearboxDialogReplicatedData
{
	float                                              Pitch;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	class UAkEvent*                                    TalkAkEvent;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                AkAudioUniqueID;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	class UGearboxDialogAct_Talk*                      TalkAct;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	class UGearboxDialogEventTag*                      EventTag;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.GearboxDialogGroup.OutputLinkToStruct
// 0x000C
struct FOutputLinkToStruct
{
	int                                                FromNodeID;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                LinkNumber;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ToNodeID;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.GearboxDialogGroup.DialogEventData
// 0x000C
struct FDialogEventData
{
	class UGearboxDialogEventTag*                      Tag;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bEnabled : 1;                                     		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	class UGearboxDialogAction*                        OutputAction;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.GearboxDialogGroup.DialogEventInfo
// 0x0008
struct FDialogEventInfo
{
	class UGearboxDialogEvent*                         Event;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                NodeID;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.GearboxDialogGroup.TalkActData
// 0x001C
struct FTalkActData
{
	float                                              OutputDelay;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FGearboxDialogData >                TalkData;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGearboxDialogVariable*                      TalkerVariable;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	class UGearboxDialogAction*                        OutputAction;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bInstigatorTalker : 1;                            		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct GearboxFramework.GFxMovieState.MovieStateData
// 0x0024
struct FMovieStateData
{
	struct FName                                       State;                                            		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Mode;                                             		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Context;                                          		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FASValue >                          ASArgs;                                           		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct GearboxFramework.GFxMovieState.MovieStateStruct
// 0x0018
struct FMovieStateStruct
{
	TArray< struct FName >                             States;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FName >                             Flags;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct GearboxFramework.INounAttributeProvider.ReplicatedNounAttributeState
// 0x0010
struct FReplicatedNounAttributeState
{
	struct FName                                       NounName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              Value;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bOnlyRelevantToOwner : 1;                         		// 0x000C (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
};

// ScriptStruct GearboxFramework.INounAttributeProvider.NounAttributeState
// 0x0024
struct FNounAttributeState
{
	struct FName                                       NounName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              Value;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              BaseValue;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	TArray< class UAttributeModifier* >                ModifierStack;                                    		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      ReplicationStrategy;                              		// 0x001C (0x0001) [0x0000000000000000]              
	int                                                IndexInReplicationArray;                          		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.RuleEngine.DynamicFlagInstanceData
// 0x0014
struct FDynamicFlagInstanceData
{
	struct FFlag                                       DynamicFlag;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
	float                                              LastEvaluatedExpressionTime;                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.RuleEngine.EventRecord
// 0x0008
struct FEventRecord
{
	class URuleEventDef*                               EventDefinition;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.RuleEngine.RuleSetReference
// 0x000C
struct FRuleSetReference
{
	struct FName                                       ReferenceName;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class URuleSet*                                    ReferenceRuleSet;                                 		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GearboxFramework.GearboxMind.TargetIteratorData
// 0x0008
struct FTargetIteratorData
{
	class UClass*                                      Iterator;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Weight;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GearboxFramework.GearboxNavigationHandle.PathFindData
// 0x0058
struct FPathFindData
{
	struct FGBXNavMeshPath                             Path;                                             		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FBasedPosition                              FinalDest;                                        		// 0x0010 (0x0034) [0x0000000000000000]              
	unsigned long                                      bFinalDestIsActor : 1;                            		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MaxRangeToDest;                                   		// 0x0048 (0x0004) [0x0000000000000000]              
	struct FGBXNavMeshPolyRef                          AnchorPoly;                                       		// 0x004C (0x0008) [0x0000000000000000]              
	unsigned long                                      bCanArriveEarly : 1;                              		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct GearboxFramework.SpecialMoveInterface.ReplicatedSpecialMoveData
// 0x0014
struct FReplicatedSpecialMoveData
{
	class UObject*                                     Data;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              PlayRateScale;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Duration;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned char                                      DirtyCounter;                                     		// 0x000C (0x0001) [0x0000000000000000]              
	class USpecialMoveDefinition*                      SMD;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.SnapshotRecord.RuleInfo
// 0x0044
struct FRuleInfo
{
	struct FName                                       RuleName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     RuleNameString;                                   		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     RunningSequence;                                  		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LatentAction;                                     		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIsRunning : 1;                                   		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHasFinishedCode : 1;                             		// 0x002C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsDisabled : 1;                                  		// 0x002C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bIsContainer : 1;                                 		// 0x002C (0x0004) [0x0000000000000000] [0x00000008] 
	TArray< struct FString >                           ColorCodedStrings;                                		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ContainerRuleStartNdx;                            		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                ContainerRuleNumSubRules;                         		// 0x0040 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.SnapshotRecord.IconData
// 0x0014
struct FIconData
{
	float                                              U;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              V;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              UL;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              VL;                                               		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              Scale;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.GearboxPawnSnapshotRecord.AwarenessInfo
// 0x0020
struct FAwarenessInfo
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	float                                              Radius;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	struct FName                                       AwarenessZoneName;                                		// 0x0010 (0x0008) [0x0000000000000000]              
	unsigned long                                      IsInfinitelyFarAway : 1;                          		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FColor                                      ZoneColor;                                        		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.GearboxPawnSnapshotRecord.LastVisibleInfo
// 0x0018
struct FLastVisibleInfo
{
	struct FVector                                     LastVisibleLocation;                              		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     CurrentLocation;                                  		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.GearboxPawnSnapshotRecord.DebugExposure
// 0x0018
struct FDebugExposure
{
	float                                              TargetExposure;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              MyExposure;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     InWorldLocation;                                  		// 0x0008 (0x000C) [0x0000000000000000]              
	unsigned long                                      IsPlayerInfo : 1;                                 		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct GearboxFramework.GearboxPawnSnapshotRecord.ViewConeInfo
// 0x0028
struct FViewConeInfo
{
	struct FVector                                     ConeOrigin;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     ConeDirection;                                    		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              ConeAngle;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              ConeLength;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	struct FColor                                      ConeColor;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned long                                      Has360DegreesAwareness : 1;                       		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct GearboxFramework.GearboxPawnSnapshotRecord.CoverDebugScoringData
// 0x000C
struct FCoverDebugScoringData
{
	struct FName                                       PriorityName;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              Score;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.GearboxPawnSnapshotRecord.CoverDebugInfo
// 0x0050
struct FCoverDebugInfo
{
	struct FName                                       CoverRegionName;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              Score;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Distance;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      IsACandidate : 1;                                 		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsBestCandidate : 1;                              		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     FailString;                                       		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FVector                                     LeftEndPoint;                                     		// 0x0020 (0x000C) [0x0000000000000000]              
	struct FVector                                     RightEndPoint;                                    		// 0x002C (0x000C) [0x0000000000000000]              
	struct FVector                                     CoverDirection;                                   		// 0x0038 (0x000C) [0x0000000000000000]              
	TArray< struct FCoverDebugScoringData >            ScoringInfo;                                      		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct GearboxFramework.GearboxPawnSnapshotRecord.TargetPriorityInfo
// 0x001C
struct FTargetPriorityInfo
{
	struct FName                                       TargetName;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     ShortName;                                        		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              Value;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FColor                                      BarColor;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.GearboxPawnSnapshotRecord.TargetDebugDatum
// 0x0020
struct FTargetDebugDatum
{
	unsigned long                                      bCurrent : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsPlayer : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     TargetName;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              TotalPriority;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	TArray< struct FTargetPriorityInfo >               PriorityData;                                     		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct GearboxFramework.GearboxPawnSnapshotRecord.AIHoldDebugData
// 0x0014
struct FAIHoldDebugData
{
	struct FName                                       HoldName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     HoldTag;                                          		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct GearboxFramework.GearboxPlayerController.GearboxViewShakeInfo
// 0x0044
struct FGearboxViewShakeInfo
{
	struct FVector                                     OffsetMag;                                        		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     OffsetRate;                                       		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              OffsetTime;                                       		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RotMag;                                           		// 0x001C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RotRate;                                          		// 0x0028 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              RotTime;                                          		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FOVMag;                                           		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FOVRate;                                          		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FOVTime;                                          		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GearboxFramework.GearboxProcess.StepConfiguration
// 0x0014
struct FStepConfiguration
{
	int                                                FirstAttemptDelay;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                BaseRetrySeconds;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              RetryMultiplier;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                MaxRetryAttempts;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                RetryJitter;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.GearboxRenderTextureManager.ThumbnailRenderData
// 0x0038
struct FThumbnailRenderData
{
	struct FName                                       Context;                                          		// 0x0000 (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UTextureRenderTarget2D*                      RenderTarget;                                     		// 0x0008 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture*                                    ResultTexture;                                    		// 0x000C (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      UpdateType;                                       		// 0x0010 (0x0001) [0x0000000000000000]              
	class UMeshComponent*                              Mesh;                                             		// 0x0014 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                TextureSizeX;                                     		// 0x0018 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                TextureSizeY;                                     		// 0x001C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                SizeX;                                            		// 0x0020 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                SizeY;                                            		// 0x0024 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< class UTexture* >                          ReferencedTextures;                               		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              StopStreamTexturesTime;                           		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.GearboxRenderTextureManager.ThumbnailLightData
// 0x0010
struct FThumbnailLightData
{
	struct FRotator                                    Direction;                                        		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class ULightComponent*                             Light;                                            		// 0x000C (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct GearboxFramework.GestaltSkeletalMeshDefinition.GestaltPart
// 0x0018
struct FGestaltPart
{
	class USkeletalMesh*                               SkeletalMeshFragment;                             		// 0x0000 (0x0004) [0x0000000020020000]              ( CPF_EditConst | CPF_Deprecated )
	struct FName                                       SkeletalMeshFragmentName;                         		// 0x0004 (0x0008) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	int                                                MaterialIndex;                                    		// 0x000C (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	int                                                FirstIndex;                                       		// 0x0010 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	int                                                NumPrimitives;                                    		// 0x0014 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
};

// ScriptStruct GearboxFramework.GestaltSkeletalMeshDefinition.GestaltInfo
// 0x000C
struct FGestaltInfo
{
	TArray< struct FGestaltPart >                      Parts;                                            		// 0x0000 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
};

// ScriptStruct GearboxFramework.GestaltSkeletalMeshDefinition.GestaltAccessoryNameEntry
// 0x0008
struct FGestaltAccessoryNameEntry
{
	struct FName                                       SkeletalMeshFragmentName;                         		// 0x0000 (0x0008) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
};

// ScriptStruct GearboxFramework.GestaltSkeletalMeshDefinition.GestaltSocketRemapEntry
// 0x001C
struct FGestaltSocketRemapEntry
{
	class USkeletalMesh*                               SkeletalMeshFragment;                             		// 0x0000 (0x0004) [0x0000000020020000]              ( CPF_EditConst | CPF_Deprecated )
	struct FName                                       SkeletalMeshFragmentName;                         		// 0x0004 (0x0008) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	struct FName                                       OriginalSocketName;                               		// 0x000C (0x0008) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	struct FName                                       MangledSocketName;                                		// 0x0014 (0x0008) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
};

// ScriptStruct GearboxFramework.GestaltSkeletalMeshDefinition.GestaltPartBoundsEntry
// 0x0024
struct FGestaltPartBoundsEntry
{
	struct FName                                       SkeletalMeshFragmentName;                         		// 0x0000 (0x0008) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	struct FBoxSphereBounds                            ReferencePoseBounds;                              		// 0x0008 (0x001C) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
};

// ScriptStruct GearboxFramework.GestaltSkeletalMeshDefinition.GestaltPartPermutation
// 0x0018
struct FGestaltPartPermutation
{
	struct FName                                       MeshName;                                         		// 0x0000 (0x0008) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	struct FName                                       GroupName;                                        		// 0x0008 (0x0008) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	struct FName                                       PartName;                                         		// 0x0010 (0x0008) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
};

// ScriptStruct GearboxFramework.GFxActorMoviePool.MovieInstanceArray
// 0x0010
struct FMovieInstanceArray
{
	TArray< class UGearboxGFxMovie* >                  Movies;                                           		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class UGearboxGFxMovie*                            PoolParent;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.GFxMovieDefinition.GFxMenuLink
// 0x000C
struct FGFxMenuLink
{
	struct FName                                       MenuName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UGFxMovieDefinition*                         Definition;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GearboxFramework.GFxMovieDrawStyleHUD.HUDCoordValue
// 0x0010
struct FHUDCoordValue
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              Value;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CurrentValue;                                     		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bCacheValid : 1;                                  		// 0x000C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
};

// ScriptStruct GearboxFramework.GFxMovieDrawStyleHUD.HUDAnchorPoint
// 0x0024
struct FHUDAnchorPoint
{
	unsigned char                                      MoviePoint;                                       		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ScreenPoint;                                      		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FHUDCoordValue                              Offset[ 0x2 ];                                    		// 0x0004 (0x0020) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GearboxFramework.GFxMovieManager.GearboxGFxPlayParameters
// 0x000C
struct FGearboxGFxPlayParameters
{
	class UGFxMovieDefinition*                         Definition;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	class UObject*                                     OtherObject;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	class APlayerController*                           PlayerOwner;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.GFxMovieStatePlayerAware.MovieRangeStateData
// 0x0004(0x0028 - 0x0024)
struct FMovieRangeStateData : FMovieStateData
{
	float                                              Distance;                                         		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GearboxFramework.IAIInterface.AttributeValuePair
// 0x0018
struct FAttributeValuePair
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FAttributeInitializationData                Value;                                            		// 0x0008 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GearboxFramework.IAIInterface.SpecialMoveValuePair
// 0x000C
struct FSpecialMoveValuePair
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USpecialMoveDefinition*                      Value;                                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GearboxFramework.ICustomEvent.CustomEventReactionData
// 0x0018
struct FCustomEventReactionData
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bReplicateEvent : 1;                              		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< class UBehaviorBase* >                     Behaviors;                                        		// 0x000C (0x000C) [0x0000000004400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct GearboxFramework.ICustomEvent.CustomEventReactionDataSpecialized
// 0x0004(0x000C - 0x0008)
struct FCustomEventReactionDataSpecialized : FSpecializedBehaviorEvent
{
	unsigned long                                      bReplicateEvent : 1;                              		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct GearboxFramework.MindTargetInfo.HitTargetRecord
// 0x0014
struct FHitTargetRecord
{
	struct FVector                                     vecHitLoc;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	float                                              flDamage;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              flHitTime;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.MindTargetInfo.PriorityDebugStruct
// 0x001C
struct FPriorityDebugStruct
{
	struct FName                                       IteratorName;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     ShortName;                                        		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              PriorityValue;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      AutomaticTopPriority : 1;                         		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct GearboxFramework.PopulationEncounter.EncounterLimitState
// 0x0008
struct FEncounterLimitState
{
	int                                                NumTotalSpawned;                                  		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                NumCurrentlyActive;                               		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct GearboxFramework.PopulationEncounter.EncounterLimitData
// 0x0038
struct FEncounterLimitData
{
	TArray< class UPopulationSpawnedActorTagDefinition* > ActorTags;                                        		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FAttributeInitializationData                MaxTotalToSpawn;                                  		// 0x000C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FAttributeInitializationData                MaxActiveAtATime;                                 		// 0x001C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ConstraintType;                                   		// 0x002C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FEncounterLimitState                        LimitState;                                       		// 0x0030 (0x0008) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct GearboxFramework.PopulationEncounter.EncounterWaveData
// 0x0028
struct FEncounterWaveData
{
	float                                              InitialDelay;                                     		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              PercentToComplete;                                		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UPopulationDefinition*                       EncounterPopulationDef;                           		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< class APopulationOpportunity* >            MemberOpportunities;                              		// 0x000C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< struct FEncounterLimitData >               SpawnLimits;                                      		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      WaveComplete : 1;                                 		// 0x0024 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      AllKilledInWave : 1;                              		// 0x0024 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
};

// ScriptStruct GearboxFramework.PopulationEncounter.SpawnOption
// 0x0008
struct FSpawnOption
{
	class UPopulationFactory*                          Factory;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              ComputedProbability;                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.PopulationFactory.DestructionParameters
// 0x0004
struct FDestructionParameters
{
	unsigned long                                      bActorExemptFromIrrelevancyTests : 1;             		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct GearboxFramework.PopulationMaster.SpawnedPopulationActor
// 0x001C
struct FSpawnedPopulationActor
{
	class AActor*                                      SpawnedActor;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	class UPopulationFactory*                          SpawnFactory;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FDestructionParameters                      FactoryDestructionParams;                         		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              flLastInRadiusOrVisible;                          		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                SpawnCost;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                CreationFlags;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      Reuse : 1;                                        		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsDead : 1;                                      		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bCanSave : 1;                                     		// 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bShouldRemove : 1;                                		// 0x0018 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct GearboxFramework.PopulationMaster.RemovedPopulationActor
// 0x003C
struct FRemovedPopulationActor
{
	unsigned long                                      bReuseActor : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                CreationFlags;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FNameBasedObjectPath                        FactoryPath;                                      		// 0x0008 (0x0034) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.PopulationOpportunity.OpportunitySavedState
// 0x0010
struct FOpportunitySavedState
{
	int                                                SelectedSpawnIdx;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                NumTotalActors;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      MaxActiveActors;                                  		// 0x0008 (0x0001) [0x0000000000000000]              
	unsigned char                                      NumActiveActors;                                  		// 0x0009 (0x0001) [0x0000000000000000]              
	float                                              NextSpawnTime;                                    		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.PopulationOpportunity.OpportunityCleanupParameters
// 0x0008
struct FOpportunityCleanupParameters
{
	unsigned long                                      bCleanupActorsWhenIrrelevant : 1;                 		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bRequireOpportunityToBeInactive : 1;              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              ActorIrrelvantDistance;                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GearboxFramework.PopulationMaster.PopulationOpportunityTracker
// 0x0054
struct FPopulationOpportunityTracker
{
	struct FName                                       OpportunityOutermostName;                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       OpportunityName;                                  		// 0x0008 (0x0008) [0x0000000000000000]              
	class APopulationOpportunity*                      LoadedOpportunity;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	TArray< struct FSpawnedPopulationActor >           SpawnedActors;                                    		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPointer                                    SavedActorsList;                                  		// 0x0020 (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	TArray< struct FRemovedPopulationActor >           ActorsRemovedWhileUnloaded;                       		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      DynamicOpportunity : 1;                           		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHasSavedState : 1;                               		// 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      bTotalResetOnLevelLoad;                           		// 0x0034 (0x0001) [0x0000000000000000]              
	unsigned char                                      RespawnStyle;                                     		// 0x0035 (0x0001) [0x0000000000000000]              
	float                                              RespawnDelayStartTime;                            		// 0x0038 (0x0004) [0x0000000000000000]              
	struct FOpportunitySavedState                      SavedState;                                       		// 0x003C (0x0010) [0x0000000000000000]              
	struct FOpportunityCleanupParameters               OpportunityCleanupParams;                         		// 0x004C (0x0008) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.PopulationMaster.PopulationMasterStat
// 0x0018
struct FPopulationMasterStat
{
	struct FName                                       StatName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              StatTime;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              StatMaxTime;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                StatIterations;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                IterationStartTime;                               		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.PopulationMaster.EncounterWaveTracker
// 0x0010
struct FEncounterWaveTracker
{
	int                                                nWaveIdx;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nLimitStateIdx;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FEncounterLimitState                        LimitSaveState;                                   		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.PopulationMaster.EncounterTracker
// 0x005C
struct FEncounterTracker
{
	class APopulationEncounter*                        LoadedEncounter;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	class ULevelStreaming*                             EncountersLevel;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FNameBasedObjectPath                        EncounterPath;                                    		// 0x0008 (0x0034) [0x0000000000000000]              
	unsigned long                                      bNeedsKismetUpdate : 1;                           		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< unsigned char >                            EncounterCompletionSaveState;                     		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FEncounterWaveTracker >             EncounterSaveState;                               		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              RespawnDelayStartTime;                            		// 0x0058 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.PopulationMaster.PopulationOpportunityStat
// 0x0004
struct FPopulationOpportunityStat
{
	float                                              PercentNodeReduction;                             		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.PopulationMaster.PopulationOpportunitySavedActor
// 0x0058
struct FPopulationOpportunitySavedActor
{
	struct FNameBasedObjectPath                        FactoryPath;                                      		// 0x0000 (0x0034) [0x0000000000000000]              
	float                                              TimeActorSaved;                                   		// 0x0034 (0x0004) [0x0000000000000000]              
	struct FVector                                     SpawnActorLocation;                               		// 0x0038 (0x000C) [0x0000000000000000]              
	struct FRotator                                    SpawnActorRotation;                               		// 0x0044 (0x000C) [0x0000000000000000]              
	int                                                CreationFlags;                                    		// 0x0050 (0x0004) [0x0000000000000000]              
	class UObject*                                     CustomActorData;                                  		// 0x0054 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.PopulationOpportunityArea.PopulationOptionAreaPopDefData
// 0x0024
struct FPopulationOptionAreaPopDefData
{
	class UPopulationDefinition*                       PopulationDef;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FAttributeInitializationData                MaxTotalActorsFormula;                            		// 0x0004 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxTotalActors;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                MaxActiveActors;                                  		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RespawnDelay;                                     		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RespawnDelayAfterDeath;                           		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GearboxFramework.PopulationOpportunityArea.PopulationOptionAreaData
// 0x0010
struct FPopulationOptionAreaData
{
	class UExpressionEvaluatorDefinition*              ExpressionDef;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FPopulationOptionAreaPopDefData >   PopulationDefinitions;                            		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct GearboxFramework.PopulationOpportunityArea.PopulationOptionSpawnDefData
// 0x0018
struct FPopulationOptionSpawnDefData
{
	struct FString                                     PopulationDefName;                                		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                NumTotalActors;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                NumActiveActors;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              NextSpawnTime;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.PopulationOpportunityArea.PopulationAreaOptionSpawnData
// 0x000C
struct FPopulationAreaOptionSpawnData
{
	TArray< struct FPopulationOptionSpawnDefData >     Data;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct GearboxFramework.PopulationOpportunityCombat.PopulationOptionSpawnData
// 0x001C
struct FPopulationOptionSpawnData
{
	struct FString                                     PopulationDefName;                                		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MaxActiveActors;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                NumTotalActors;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                NumActiveActors;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              NextSpawnTime;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.PopUpDebugBarGraph.ColumnDataStruct
// 0x0014
struct FColumnDataStruct
{
	struct FString                                     HeaderText;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              Value;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	struct FColor                                      BarColor;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.RandomAttributeValueResolver.SavedRandomValue
// 0x0010
struct FSavedRandomValue
{
	struct FName                                       ContextName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              SavedValue;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              ExpirationTime;                                   		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.RuleEngineLoadBalanceManager.RuleEngineLoadBalanceStruct
// 0x000C
struct FRuleEngineLoadBalanceStruct
{
	class URuleEngine*                                 RuleEngine;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              TimeSinceLastUpdate;                              		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Priority;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.RuleEngineLoadBalanceManager.DebugLoadBalance
// 0x0018
struct FDebugLoadBalance
{
	struct FName                                       RuleEngine;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      bIsInQueue : 1;                                   		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              TimeSinceUpdate;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              TimeToDoLastUpdate;                               		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Priority;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.RuleEngineLoadBalanceManager.RELBManagerStats
// 0x0018
struct FRELBManagerStats
{
	float                                              TotalTimeUpdated;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              MaxTimeUpdating;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                NumUpdated;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                AveragePriority;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                LowestPriority;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                HighestPriority;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.ShowDebugHelpers.DebugStringData
// 0x0010
struct FDebugStringData
{
	struct FString                                     DebugStr;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FColor                                      StrColor;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.ShowDebugHelpers.DebugEntryData
// 0x000C
struct FDebugEntryData
{
	TArray< struct FDebugStringData >                  DebugStrs;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct GearboxFramework.SparkInterfaceImpl.SparkOutstandingRequest
// 0x007C
struct FSparkOutstandingRequest
{
	unsigned char                                      State;                                            		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FDouble                                     SleepUntil;                                       		// 0x0004 (0x0008) [0x0000000000000000]              
	unsigned long                                      WantResponse : 1;                                 		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      ScriptCallback : 1;                               		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	struct FScriptDelegate                             RequestCompleteDelegate;                          		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                RequestIdentifier;                                		// 0x001C (0x0004) [0x0000000000000000]              
	struct FPointer                                    SparkUpdateCallback;                              		// 0x0020 (0x0004) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    HttpRequest;                                      		// 0x0024 (0x0004) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    RequestBody;                                      		// 0x0028 (0x0004) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    ResponseBody;                                     		// 0x002C (0x0004) [0x0000000000001000]              ( CPF_Native )
	int                                                RetryNumber;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                BaseRetryIntervalSeconds;                         		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                MaxRetryAttempts;                                 		// 0x0038 (0x0004) [0x0000000000000000]              
	float                                              RetryMultiplier;                                  		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                RetryJitter;                                      		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                HttpTimeout;                                      		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                ReadBufferSize;                                   		// 0x0048 (0x0004) [0x0000000000000000]              
	struct FString                                     Accept;                                           		// 0x004C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ContentType;                                      		// 0x0058 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      Method;                                           		// 0x0064 (0x0001) [0x0000000000000000]              
	struct FString                                     URL;                                              		// 0x0068 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FDouble                                     RequestStartTime;                                 		// 0x0074 (0x0008) [0x0000000000000000]              
};

// ScriptStruct GearboxFramework.SpecialMoveExpressionList.SMExpressionList
// 0x0008
struct FSMExpressionList
{
	class UExpressionEvaluator*                        Expression;                                       		// 0x0000 (0x0004) [0x0000000004000003]              ( CPF_Edit | CPF_Const | CPF_EditInline )
	class USpecialMoveDefinition*                      SMD;                                              		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct GearboxFramework.SpecialMoveRandom.SMRandomPair
// 0x0008
struct FSMRandomPair
{
	float                                              Weight;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USpecialMoveDefinition*                      SMD;                                              		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GearboxFramework.StateRuleSet.StateAttributeData
// 0x000C
struct FStateAttributeData
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UAttributeDefinition*                        Attribute;                                        		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GearboxFramework.WireTerminal.WireLinkage
// 0x001C
struct FWireLinkage
{
	struct FVector                                     Offset;                                           		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              Width;                                            		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Slack;                                            		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Segments;                                         		// 0x0014 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                Link;                                             		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif