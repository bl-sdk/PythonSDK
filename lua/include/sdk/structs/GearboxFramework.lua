
local ffi = require("ffi")

ffi.cdef[[

// 0xC 
struct FAIHoldData {
	struct FName HoldName; // 0x0 (0x8)
	struct UObject* HoldTag; // 0x8 (0x4)
};

// 0x1C 
struct FAIResourceData {
	struct UAIResource* Resource; // 0x0 (0x4)
	const struct TArray_FPointer CanRun; // 0x4 (0xC)
	const struct TArray_FPointer Running; // 0x10 (0xC)
};

// 0x8 
struct FAIRange {
	float MinVal; // 0x0 (0x4)
	float MaxVal; // 0x4 (0x4)
};

// 0xAD 
struct FAITreeData {
	const struct FScriptInterface AI; // 0x0 (0x8)
	const unsigned char Type; // 0x8 (0x1) (Enum = AINodeType)
	const unsigned char Unknown1[0x3]; // 0x9 (0x3) > LAST OFFSET
	const struct TArray_int Children; // 0xC (0xC)
	const struct UAIResource* Resource; // 0x18 (0x4)
	const struct UExpressionEvaluator* CanRunIf; // 0x1C (0x4)
	const struct FAIRange TimedStart; // 0x20 (0x8)
	const struct FAIRange TimedReset; // 0x28 (0x8)
	const struct FAIRange TimedFail; // 0x30 (0x8)
	const BOOL bStopIfCannotRun : 1; // 0x38 (0x4)
	const unsigned long: 0;
	const int ActiveChild; // 0x3C (0x4)
	const int NextActiveChild; // 0x40 (0x4)
	const float LastFailTime; // 0x44 (0x4)
	const float NextTimedRun; // 0x48 (0x4)
	const float NextTimedFail; // 0x4C (0x4)
	const float NextTimedResource; // 0x50 (0x4)
	const BOOL bHoldingResource : 1; // 0x54 (0x4)
	const unsigned long: 0;
	const struct UActionSequence* Action; // 0x58 (0x4)
	int LoopCount; // 0x5C (0x4)
	int LastRandomChild; // 0x60 (0x4)
	const struct TArray_float Weights; // 0x64 (0xC)
	const struct TArray_int LoopCountMax; // 0x70 (0xC)
	const BOOL bInterrupt : 1; // 0x7C (0x4)
	const unsigned long: 0;
	const struct TArray_UExpressionEvaluatorPtr Conditions; // 0x80 (0xC)
	int NextSequentialChild; // 0x8C (0x4)
	const int PosX; // 0x90 (0x4)
	const int PosY; // 0x94 (0x4)
	const struct FString NodeName; // 0x98 (0xC)
	const struct FName ActionFailName; // 0xA4 (0x8)
	const unsigned char FailReason; // 0xAC (0x1) (Enum = AIFailReason)
};

// 0x10 
struct FPriorityData {
	struct FString Description; // 0x0 (0xC)
	struct UExpressionEvaluator* Condition; // 0xC (0x4)
};

// 0x28 
struct FFlagDefinitionInitialization {
	const struct UFlagDefinition* FlagToSet; // 0x0 (0x4)
	const struct FAttributeInitializationData ChanceTrue; // 0x4 (0x10)
	const float ProbabilityTrue; // 0x14 (0x4)
	const struct FAttributeInitializationData Duration; // 0x18 (0x10)
};

// 0xC 
struct FCoverDebugScoringInfo {
	struct FName PriorityName; // 0x0 (0x8)
	float Score; // 0x8 (0x4)
};

// 0x2C 
struct FCoverDebugPriority {
	float Score; // 0x0 (0x4)
	float Distance; // 0x4 (0x4)
	BOOL IsACandidate : 1; // 0x8 (0x4)
	BOOL IsBestCandidate : 1; // 0x8 (0x4)
	const unsigned long: 0;
	struct AActor* TheCoverActor; // 0xC (0x4)
	int SlotNdx; // 0x10 (0x4)
	struct FString FailString; // 0x14 (0xC)
	struct TArray_FCoverDebugScoringInfo ScoringInfo; // 0x20 (0xC)
};

// 0x8 
struct FValidNameRange {
	int Start; // 0x0 (0x4)
	int End; // 0x4 (0x4)
};

// 0x10 
struct FObjectKey {
	struct FName ObjectName; // 0x0 (0x8)
	struct FName AdditionalKey; // 0x8 (0x8)
};

// 0x18 
struct FLevelStateRecord {
	struct FName LevelName; // 0x0 (0x8)
	unsigned char LevelLoaded; // 0x8 (0x1)
	const unsigned char Unknown1[0x3]; // 0x9 (0x3) > LAST OFFSET
	struct TArray_FObjectKey ObjectKeys; // 0xC (0xC)
};

// 0xD 
struct FVantageSpot {
	struct FVector Location; // 0x0 (0xC)
	unsigned char VantageType; // 0xC (0x1) (Enum = EVantageType)
};

// 0xC 
struct FGearboxCoverState {
	struct AActor* TheCoverActor; // 0x0 (0x4)
	int SlotIndex; // 0x4 (0x4)
	unsigned char State; // 0x8 (0x1) (Enum = EGearboxCoverState)
	unsigned char ExtendedState; // 0x9 (0x1)
	unsigned char MetaData; // 0xA (0x1) (Enum = EGearboxCoverStateMetaData)
	unsigned char ExtendedMetaData; // 0xB (0x1)
};

// 0x4 
struct FGearboxCoverTransition {
	unsigned char Action; // 0x0 (0x1) (Enum = EGearboxCoverTransition)
	unsigned char ExtendedAction; // 0x1 (0x1)
	unsigned char Padding[2]; // 0x2 (0x2)
};

// 0xC 
struct FCoverCandidate {
	struct AActor* TheCoverActor; // 0x0 (0x4)
	int SlotNdx; // 0x4 (0x4)
	float Score; // 0x8 (0x4)
};

// 0x28 
struct FPopulationActor {
	const struct UPopulationFactory* SpawnFactory; // 0x0 (0x4)
	const struct FAttributeInitializationData Probability; // 0x4 (0x10)
	struct FAttributeInitializationData MaxActiveAtOneTime; // 0x14 (0x10)
	const BOOL TestVisibility : 1; // 0x24 (0x4)
	const BOOL TestFOV : 1; // 0x24 (0x4)
	const unsigned long: 0;
};

// 0x10 
struct FLocationInfo {
	struct FVector Location; // 0x0 (0xC)
	BOOL IsPlayerInfo : 1; // 0xC (0x4)
	const unsigned long: 0;
};

// 0x14 
struct FActionSequenceRandomData {
	const struct FAttributeInitializationData ProbabilityData; // 0x0 (0x10)
	const struct UActionSequence* ActionToRunWhenTrue; // 0x10 (0x4)
};

// 0x4 
struct FSubarrayData {
	const int ArrayIndexAndLength; // 0x0 (0x4)
};

// 0xC 
struct FBehaviorSequenceActionData2 {
	const struct UBehaviorBase* Behavior; // 0x0 (0x4)
	const struct FSubarrayData LinkedVariables; // 0x4 (0x4)
	const struct FSubarrayData OutputLinks; // 0x8 (0x4)
};

// 0x19 
struct FBehaviorVariableValue {
	const int IntValue; // 0x0 (0x4)
	const float FloatValue; // 0x4 (0x4)
	const struct FVector VectorValue; // 0x8 (0xC)
	const struct UObject* ObjectValue; // 0x14 (0x4)
	const unsigned char VariableType; // 0x18 (0x1) (Enum = EBehaviorVariableType)
};

// 0x4 
struct FBehaviorVariableValueUnion_Mirror {
	const struct FPointer Data; // 0x0 (0x4)
};

// 0x10 
struct FBehaviorVariableData {
	struct FName Name; // 0x0 (0x8)
	unsigned char Type; // 0x8 (0x1) (Enum = EBehaviorVariableType)
	const unsigned char Unknown1[0x3]; // 0x9 (0x3) > LAST OFFSET
	struct FBehaviorVariableValueUnion_Mirror Value; // 0xC (0x4)
};

// 0x18 
struct FBehaviorEventUserData {
	struct FName EventName; // 0x0 (0x8)
	BOOL bEnabled : 1; // 0x8 (0x4)
	BOOL bReplicate : 1; // 0x8 (0x4)
	const unsigned long: 0;
	int MaxTriggerCount; // 0xC (0x4)
	float ReTriggerDelay; // 0x10 (0x4)
	struct UBehaviorEventFilterBase* FilterObject; // 0x14 (0x4)
};

// 0x1C 
struct FBehaviorVariableLinkData {
	const struct FName PropertyName; // 0x0 (0x8)
	const int ConnectionIndex; // 0x8 (0x4)
	const struct TArray_int LinkedVariables; // 0xC (0xC)
	struct UProperty* CachedProperty; // 0x18 (0x4)
};

// 0x8 
struct FBehaviorActionLinkData {
	const int LinkedBehavior; // 0x0 (0x4)
	const float ActivateDelay; // 0x4 (0x4)
};

// 0x10 
struct FBehaviorOutputLinkData {
	const int LinkId; // 0x0 (0x4)
	const struct TArray_FBehaviorActionLinkData LinkedActions; // 0x4 (0xC)
};

// 0x30 
struct FBehaviorEventData {
	const struct FBehaviorEventUserData UserData; // 0x0 (0x18)
	const struct TArray_FBehaviorVariableLinkData OutputVariables; // 0x18 (0xC)
	const struct TArray_FBehaviorOutputLinkData OutputLinks; // 0x24 (0xC)
};

// 0x20 
struct FBehaviorEventData2 {
	const struct FBehaviorEventUserData UserData; // 0x0 (0x18)
	const struct FSubarrayData OutputVariables; // 0x18 (0x4)
	const struct FSubarrayData OutputLinks; // 0x1C (0x4)
};

// 0x44 
struct FBehaviorSequenceActionData {
	const struct UBehaviorBase* Behavior; // 0x0 (0x4)
	struct FBehaviorVariableLinkData ContextVariables; // 0x4 (0x1C)
	const struct TArray_FBehaviorVariableLinkData LinkedVariables; // 0x20 (0xC)
	const struct TArray_FBehaviorVariableLinkData OutputVariables; // 0x2C (0xC)
	const struct TArray_FBehaviorOutputLinkData OutputLinks; // 0x38 (0xC)
};

// 0x8 
struct FBehaviorOutputLinkData2 {
	const int LinkIdAndLinkedBehavior; // 0x0 (0x4)
	const float ActivateDelay; // 0x4 (0x4)
};

// 0x14 
struct FBehaviorVariableLinkData2 {
	const struct FName PropertyName; // 0x0 (0x8)
	const unsigned char VariableLinkType; // 0x8 (0x1) (Enum = EBehaviorVariableLinkType)
	const unsigned char ConnectionIndex; // 0x9 (0x1)
	const unsigned char Unknown1[0x2]; // 0xA (0x2) > LAST OFFSET
	const struct FSubarrayData LinkedVariables; // 0xC (0x4)
	struct UProperty* CachedProperty; // 0x10 (0x4)
};

// 0x70 
struct FBehaviorSequenceData {
	const struct FName BehaviorSequenceName; // 0x0 (0x8)
	const BOOL bEnabledOnSpawn : 1; // 0x8 (0x4)
	const BOOL bSequenceEnabledMutex : 1; // 0x8 (0x4)
	const unsigned long: 0;
	const struct UBehaviorSequenceCustomEnableCondition* CustomEnableCondition; // 0xC (0x4)
	const struct TArray_FBehaviorEventData EventData; // 0x10 (0xC)
	const struct TArray_FBehaviorEventData2 EventData2; // 0x1C (0xC)
	const struct TArray_FBehaviorSequenceActionData BehaviorData; // 0x28 (0xC)
	const struct TArray_FBehaviorSequenceActionData2 BehaviorData2; // 0x34 (0xC)
	const struct TArray_FBehaviorVariableData VariableData; // 0x40 (0xC)
	const struct TArray_FBehaviorOutputLinkData2 ConsolidatedOutputLinkData; // 0x4C (0xC)
	const struct TArray_FBehaviorVariableLinkData2 ConsolidatedVariableLinkData; // 0x58 (0xC)
	const struct TArray_int ConsolidatedLinkedVariables; // 0x64 (0xC)
};

// 0x51 
struct FDebugListItem {
	unsigned char DisplayType; // 0x0 (0x1) (Enum = EDebugItemType)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	struct FVector Location; // 0x4 (0xC)
	struct FVector Location2; // 0x10 (0xC)
	struct FVector Location3; // 0x1C (0xC)
	struct UTexture2D* Texture; // 0x28 (0x4)
	float U; // 0x2C (0x4)
	float V; // 0x30 (0x4)
	float UL; // 0x34 (0x4)
	float VL; // 0x38 (0x4)
	float Scale; // 0x3C (0x4)
	struct FString TextString; // 0x40 (0xC)
	struct FColor TextColor; // 0x4C (0x4)
	unsigned char Alignment; // 0x50 (0x1) (Enum = EDebugAlignment)
};

// 0x4 
struct FBehaviorConsumerHandle {
	int PID; // 0x0 (0x4)
};

// 0x4 
struct FTimeStampedRecord {
	float DeathTimeStamp; // 0x0 (0x4)
};

// 0x9 
struct FKnowledgeRecordStruct {
	float DeathTimeStamp; // 0x0 (0x4)
	struct UKnowledgeRecord* TheObj; // 0x4 (0x4)
	unsigned char InUse; // 0x8 (0x1)
};

// 0x9 
struct FRuleSetRecord {
	float DeathTimeStamp; // 0x0 (0x4)
	struct URuleSet* TheObj; // 0x4 (0x4)
	unsigned char InUse; // 0x8 (0x1)
};

// 0x9 
struct FRuleRecord {
	float DeathTimeStamp; // 0x0 (0x4)
	struct URule* TheObj; // 0x4 (0x4)
	unsigned char InUse; // 0x8 (0x1)
};

// 0x9 
struct FActionSequenceRecord {
	float DeathTimeStamp; // 0x0 (0x4)
	struct UActionSequence* TheObj; // 0x4 (0x4)
	unsigned char InUse; // 0x8 (0x1)
};

// 0x9 
struct FTargetInfoRecord {
	float DeathTimeStamp; // 0x0 (0x4)
	struct UMindTargetInfo* TheObj; // 0x4 (0x4)
	unsigned char InUse; // 0x8 (0x1)
};

// 0x9 
struct FAIDefinitionRecord {
	float DeathTimeStamp; // 0x0 (0x4)
	struct UAIDefinition* TheObj; // 0x4 (0x4)
	unsigned char InUse; // 0x8 (0x1)
};

// 0xC 
struct FAIResourceRestriction {
	const int MaxUsers; // 0x0 (0x4)
	const int MinUsers; // 0x4 (0x4)
	struct UAIResource* Resource; // 0x8 (0x4)
};

// 0xC 
struct FOutputLink {
	struct TArray_UGearboxEditorNodePtr Links; // 0x0 (0xC)
};

// 0xC 
struct FVariableLink {
	struct TArray_UGearboxEditorNodePtr Links; // 0x0 (0xC)
};

// 0x1C 
struct FSpecialMoveData {
	struct UObject* Data; // 0x0 (0x4)
	float PlayRateScale; // 0x4 (0x4)
	float Duration; // 0x8 (0x4)
	struct FName CallbackName; // 0xC (0x8)
	struct UObject* CallbackObject; // 0x14 (0x4)
	struct USpecialMoveDefinition* SMD; // 0x18 (0x4)
};

// 0x44 
struct FSlotAnimParameters {
	struct FSpecialMoveData SMData; // 0x0 (0x1C)
	struct UGearboxAnimDefinition* CustomAnimDef; // 0x1C (0x4)
	struct FName CustomAnimName; // 0x20 (0x8)
	struct TArray_float PerBoneWeights; // 0x28 (0xC)
	struct TArray_unsigned_char TransformReqBone; // 0x34 (0xC)
	int TransformReqBoneIndex; // 0x40 (0x4)
};

// 0x8 
struct FSpecializedBehaviorEvent {
	const struct FName EventName; // 0x0 (0x8)
};

// 0xC 
struct FBehaviorTimerState {
	BOOL bIsRunning : 1; // 0x0 (0x4)
	const unsigned long: 0;
	float Delay; // 0x4 (0x4)
	float EventTime; // 0x8 (0x4)
};

// 0x8 
struct FTimerEventReactionDataSpecialized {
	const struct FName EventName; // 0x0 (0x8)
};

// 0x24 
struct FTimerBehaviorUserState {
	struct FBehaviorTimerState Timers[3]; // 0x0 (0x24)
};

// 0x10 
struct FTimerEventReactionData {
	const unsigned char EventType; // 0x0 (0x1) (Enum = EBehaviorTimerEvent)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	const struct TArray_UBehaviorBasePtr Behaviors; // 0x4 (0xC)
};

// 0x1C 
struct FGbxMessageSimpleMetaData {
	float FloatData; // 0x0 (0x4)
	int IntData; // 0x4 (0x4)
	struct FName NameData; // 0x8 (0x8)
	struct FVector VectorData; // 0x10 (0xC)
};

// 0x20 
struct FRelativeDirectionData {
	unsigned char Direction; // 0x0 (0x1) (Enum = EDirectionRelativeToParent)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	struct FAttributeInitializationData ConeAroundDirection; // 0x4 (0x10)
	struct FRotator AdditionalRotation; // 0x14 (0xC)
};

// 0x1C 
struct FAttachmentLocationData {
	struct FVector Location; // 0x0 (0xC)
	struct FScriptInterface AttachmentBase; // 0xC (0x8)
	struct FName AttachmentName; // 0x14 (0x8)
};

// 0x8 
struct FProviderRecord {
	struct UBehaviorProviderDefinition* ProviderDefinition; // 0x0 (0x4)
	int ReferenceCount; // 0x4 (0x4)
};

// 0x1C 
struct FBehaviorExecutionRecord {
	int OwningProcessID; // 0x0 (0x4)
	int ProvidersIndex; // 0x4 (0x4)
	int SequencesDataIndex; // 0x8 (0x4)
	int BehaviorNumber; // 0xC (0x4)
	struct FName BehaviorName; // 0x10 (0x8)
	float TimeOfExecution; // 0x18 (0x4)
};

// 0x18 
struct FBehaviorThread {
	unsigned char ThreadState; // 0x0 (0x1) (Enum = EBehaviorThreadState)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	int OwningProcessID; // 0x4 (0x4)
	struct FPointer ThreadSequenceState; // 0x8 (0x4)
	int NextBehavior; // 0xC (0x4)
	float ActivateTime; // 0x10 (0x4)
	float BehaviorStartedTime; // 0x14 (0x4)
};

// 0xC 
struct FBehaviorEventState {
	int TriggerCount; // 0x0 (0x4)
	float LastTriggerTime; // 0x4 (0x4)
	struct UBehaviorEventFilterBase* FilterObject; // 0x8 (0x4)
};

// 0x10 
struct FBehaviorVariableState {
	struct FName Name; // 0x0 (0x8)
	unsigned char Type; // 0x8 (0x1) (Enum = EBehaviorVariableType)
	const unsigned char Unknown1[0x3]; // 0x9 (0x3) > LAST OFFSET
	struct FBehaviorVariableValueUnion_Mirror Value; // 0xC (0x4)
};

// 0x18 
struct FBehaviorSequenceState {
	BOOL bIsEnabled : 1; // 0x0 (0x4)
	const unsigned long: 0;
	int ProvidersIndex; // 0x4 (0x4)
	int SequencesDataIndex; // 0x8 (0x4)
	int SequenceEnabledBitIndex; // 0xC (0x4)
	struct FPointer EventStateHead; // 0x10 (0x4)
	struct FPointer VariableStateHead; // 0x14 (0x4)
};

// 0x1C 
struct FBehaviorProcess {
	struct UObject* Owner; // 0x0 (0x4)
	int ProcessID; // 0x4 (0x4)
	int SequenceEnabledBitField; // 0x8 (0x4)
	unsigned char ProcessState; // 0xC (0x1) (Enum = EBehaviorProcessState)
	unsigned char NextSequenceEnabledBitIndexToUse; // 0xD (0x1)
	unsigned char bSupportsReplicatedSequenceState; // 0xE (0x1)
	unsigned char NumPendingProviderRemovalRequests; // 0xF (0x1)
	struct FChunkedList_Mirror Sequences; // 0x10 (0x4)
	struct FChunkedList_Mirror Events; // 0x14 (0x4)
	struct FChunkedList_Mirror Variables; // 0x18 (0x4)
};

// 0x8 
struct FProviderRemovalRequest {
	struct FBehaviorConsumerHandle ConsumerHandle; // 0x0 (0x4)
	int ProvidersIndex; // 0x4 (0x4)
};

// 0x10 
struct FBehaviorKernelArrayStats {
	int UsedSlots; // 0x0 (0x4)
	int UnusedSlots; // 0x4 (0x4)
	int PeakUsage; // 0x8 (0x4)
	int ContainerSlack; // 0xC (0x4)
};

// 0x68 
struct FBehaviorKernelStats {
	int NumProcessesCreated; // 0x0 (0x4)
	int NumThreadsCreated; // 0x4 (0x4)
	int NumWaitingThreads; // 0x8 (0x4)
	int NumEventsActivated; // 0xC (0x4)
	int NumEventsIgnored; // 0x10 (0x4)
	int NumBehaviorsRun; // 0x14 (0x4)
	struct FBehaviorKernelArrayStats ProcessListStats; // 0x18 (0x10)
	struct FBehaviorKernelArrayStats ProviderListStats; // 0x28 (0x10)
	struct FBehaviorKernelArrayStats ObjectVariablesListStats; // 0x38 (0x10)
	struct FBehaviorKernelArrayStats DynamicBehaviorsListStats; // 0x48 (0x10)
	int ProvidersIndexFreeListLength; // 0x58 (0x4)
	int ObjectVariablesFreeListLength; // 0x5C (0x4)
	int TotalMemoryUsed; // 0x60 (0x4)
	int MemoryUsedBySlack; // 0x64 (0x4)
};

// 0xC 
struct FReplicatedBehaviorConsumerState {
	BOOL bIsProcessSuspended : 1; // 0x0 (0x4)
	const unsigned long: 0;
	int BehaviorSequenceEnabledFlags; // 0x4 (0x4)
	BOOL bNeedToApplyThisState : 1; // 0x8 (0x4)
	const unsigned long: 0;
};

// 0x4 
struct FReplicatedBehaviorEvent {
	unsigned char SequenceIndex; // 0x0 (0x1)
	unsigned char EventCounter; // 0x1 (0x1)
	unsigned char EventIndex; // 0x2 (0x1)
	unsigned char EventOutput; // 0x3 (0x1)
};

// 0x8 
struct FLinkedBehaviorSequence {
	struct FBehaviorConsumerHandle ConsumerHandle; // 0x0 (0x4)
	struct FPointer SequenceState; // 0x4 (0x4)
};

// 0x14 
struct FBehaviorTriggerMessageStruct {
	struct UGbxMessageDefinition* MessageDefinition; // 0x0 (0x4)
	unsigned char Instigator; // 0x4 (0x1) (Enum = EBehaviorMsgInstigator)
	unsigned char OtherEventParticipant; // 0x5 (0x1) (Enum = EBehaviorMsgEventParticipant)
	const unsigned char Unknown1[0x2]; // 0x6 (0x2) > LAST OFFSET
	const struct TArray_UBehaviorBasePtr Behaviors; // 0x8 (0xC)
};

// 0x40 
struct FExposureCacheStruct {
	struct FName FromPawnName; // 0x0 (0x8)
	struct FName ToActorName; // 0x8 (0x8)
	float TimeCached; // 0x10 (0x4)
	float NextUpdateTime; // 0x14 (0x4)
	float Exposure; // 0x18 (0x4)
	struct FVector FromLoc; // 0x1C (0xC)
	struct FVector ToLoc; // 0x28 (0xC)
	struct TArray_FVantageSpot Vantage; // 0x34 (0xC)
};

// 0x1D 
struct FExposureUpdateStruct {
	struct AGearboxPawn* FromPawn; // 0x0 (0x4)
	struct AActor* ToActor; // 0x4 (0x4)
	float TimeRequested; // 0x8 (0x4)
	float Exposure; // 0xC (0x4)
	struct TArray_FVantageSpot Vantage; // 0x10 (0xC)
	unsigned char ShouldRemove; // 0x1C (0x1)
};

// 0x1C 
struct FBucketStruct {
	int NdxToStartCheckFrom; // 0x0 (0x4)
	float DistanceSquared; // 0x4 (0x4)
	int MaxLineChecksPerFrame; // 0x8 (0x4)
	int MaxIterationsPerFrame; // 0xC (0x4)
	struct TArray_FExposureUpdateStruct Exposures; // 0x10 (0xC)
};

// 0x28 
struct FPointExposureData {
	struct AActor* Looker; // 0x0 (0x4)
	struct FVector Point; // 0x4 (0xC)
	struct FVector Point2; // 0x10 (0xC)
	float Exposure; // 0x1C (0x4)
	float LastCheckTime; // 0x20 (0x4)
	float LastUpdateTime; // 0x24 (0x4)
};

// 0xC 
struct FFeatherBoneBlendData {
	struct FName StartBoneName; // 0x0 (0x8)
	float BlendWeight; // 0x8 (0x4)
};

// 0x19 
struct FFiringBehaviorBurstInfo {
	struct AGearboxPawn* Instigator; // 0x0 (0x4)
	struct AWeapon* InstigatorWeapon; // 0x4 (0x4)
	struct AActor* TargetActor; // 0x8 (0x4)
	int NumShots; // 0xC (0x4)
	float RefireRate; // 0x10 (0x4)
	struct UMindTargetInfo* TargetInfo; // 0x14 (0x4)
	unsigned char FireType; // 0x18 (0x1) (Enum = EWeaponFireType)
};

// 0x10 
struct FConditionalPattern {
	struct TArray_UFiringConditionPtr Conditions; // 0x0 (0xC)
	struct UFiringPattern* Pattern; // 0xC (0x4)
};

// 0x18 
struct FFlagEvalConditional {
	unsigned char FlagEvalType; // 0x0 (0x1) (Enum = EFlagEvalType)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	struct UFlagDefinition* FlagDefinition; // 0x4 (0x4)
	struct FAttributeInitializationData TimeSeconds; // 0x8 (0x10)
};

// 0xC 
struct FFlagEvalORConnector {
	struct TArray_FFlagEvalConditional ANDChain; // 0x0 (0xC)
};

// 0xC 
struct Fs_actorList {
	struct FName LevelName; // 0x0 (0x8)
	struct AActor* Actor; // 0x8 (0x4)
};

// 0x18 
struct FSparkResult {
	BOOL RequestSucceeded : 1; // 0x0 (0x4)
	const unsigned long: 0;
	unsigned char ErrorCode; // 0x4 (0x1) (Enum = EHttpError)
	const unsigned char Unknown1[0x3]; // 0x5 (0x3) > LAST OFFSET
	int HttpStatusCode; // 0x8 (0x4)
	struct TArray_unsigned_char ResponseBody; // 0xC (0xC)
};

// 0x38 
struct FHttpParameters {
	struct USparkServiceConfiguration* ServiceConfiguration; // 0x0 (0x4)
	struct FString SubService; // 0x4 (0xC)
	unsigned char ContentType; // 0x10 (0x1) (Enum = HttpMimeType)
	const unsigned char Unknown1[0x3]; // 0x11 (0x3) > LAST OFFSET
	struct FString CustomContentType; // 0x14 (0xC)
	unsigned char AcceptsType; // 0x20 (0x1) (Enum = HttpMimeType)
	const unsigned char Unknown2[0x3]; // 0x21 (0x3) > LAST OFFSET
	struct FString CustomAcceptsType; // 0x24 (0xC)
	unsigned char Method; // 0x30 (0x1) (Enum = HttpMethod)
	const unsigned char Unknown3[0x3]; // 0x31 (0x3) > LAST OFFSET
	BOOL IsResponseDesired : 1; // 0x34 (0x4)
	BOOL NoRetry : 1; // 0x34 (0x4)
	const unsigned long: 0;
};

// 0x2C 
struct FEULAData {
	int Id; // 0x0 (0x4)
	struct FString Version; // 0x4 (0xC)
	struct FString Title; // 0x10 (0xC)
	struct FString Text; // 0x1C (0xC)
	BOOL bLocalSigned : 1; // 0x28 (0x4)
	BOOL bSeen : 1; // 0x28 (0x4)
	const unsigned long: 0;
};

// 0x24 
struct FEntitlementResult {
	struct FName Identifier; // 0x0 (0x8)
	struct FString Payload; // 0x8 (0xC)
	int Id; // 0x14 (0x4)
	BOOL Consumable : 1; // 0x18 (0x4)
	const unsigned long: 0;
	int Consumed; // 0x1C (0x4)
	int ConsumableAmount; // 0x20 (0x4)
};

// 0x2C 
struct FOfferResult {
	struct FString TitleEfigs; // 0x0 (0xC)
	struct FString DescriptionEfigs; // 0xC (0xC)
	int Id; // 0x18 (0x4)
	BOOL Notified : 1; // 0x1C (0x4)
	const unsigned long: 0;
	struct FString DateUnlocked; // 0x20 (0xC)
};

// 0x18 
struct FServiceParameterResult {
	struct FString Key; // 0x0 (0xC)
	struct FString Value; // 0xC (0xC)
};

// 0x1C 
struct FServiceResult {
	struct FName ServiceName; // 0x0 (0x8)
	struct FName ConfigurationGroup; // 0x8 (0x8)
	struct TArray_FServiceParameterResult Parameters; // 0x10 (0xC)
};

// 0x80 
struct FArchwayResult {
	struct FString RequestId; // 0x0 (0xC)
	struct FString GearboxUserToken; // 0xC (0xC)
	struct FString GearboxUserEmail; // 0x18 (0xC)
	struct TArray_FString Messages; // 0x24 (0xC)
	struct TArray_FEntitlementResult Entitlements; // 0x30 (0xC)
	struct TArray_FOfferResult Offers; // 0x3C (0xC)
	struct TArray_FServiceResult Services; // 0x48 (0xC)
	BOOL InProgress : 1; // 0x54 (0x4)
	BOOL Success : 1; // 0x54 (0x4)
	BOOL DisableSpark : 1; // 0x54 (0x4)
	BOOL TimeOut : 1; // 0x54 (0x4)
	BOOL HasShiftAccount : 1; // 0x54 (0x4)
	const unsigned long: 0;
	struct FString EmergencyMessage; // 0x58 (0xC)
	struct FString NeedsSignAgreements; // 0x64 (0xC)
	struct UJsonObject* EulaArray; // 0x70 (0x4)
	struct FString SupportId; // 0x74 (0xC)
};

// 0x8 
struct FNodeData {
	struct AGearboxAIMoveNode* Node; // 0x0 (0x4)
	float Weight; // 0x4 (0x4)
};

// 0x10 
struct FSMBehavior {
	const BOOL PlayServer : 1; // 0x0 (0x4)
	const BOOL PlayClient : 1; // 0x0 (0x4)
	const BOOL PlayLocal : 1; // 0x0 (0x4)
	const unsigned long: 0;
	const struct TArray_UBehaviorBasePtr Behaviors; // 0x4 (0xC)
};

// 0x14 
struct FSMNotify {
	const BOOL PlayServer : 1; // 0x0 (0x4)
	const BOOL PlayClient : 1; // 0x0 (0x4)
	const BOOL PlayLocal : 1; // 0x0 (0x4)
	const unsigned long: 0;
	const struct TArray_UBehaviorBasePtr Behaviors; // 0x4 (0xC)
	const float Time; // 0x10 (0x4)
};

// 0x10 
struct FTimedAnimBehaviorEvent {
	const struct FName EventName; // 0x0 (0x8)
	float Time; // 0x8 (0x4)
	BOOL bServerOnly : 1; // 0xC (0x4)
	const unsigned long: 0;
};

// 0x18 
struct FCoverSpotInfo {
	struct AActor* TheCoverActor; // 0x0 (0x4)
	int CoverSlotIndex; // 0x4 (0x4)
	struct FVector CoverSpotWorldLocation; // 0x8 (0xC)
	unsigned char CoverHeight; // 0x14 (0x1) (Enum = ECoverType)
	unsigned char ExtendedInfo1; // 0x15 (0x1)
	unsigned char ExtendedInfo2; // 0x16 (0x1)
	unsigned char ExtendedInfo3; // 0x17 (0x1)
};

// 0x10 
struct FGearboxDialogData {
	struct UGearboxDialogNameTag* NameTag; // 0x0 (0x4)
	struct UAkEvent* TalkAkEvent; // 0x4 (0x4)
	int AkAudioUniqueID; // 0x8 (0x4)
	float Pitch; // 0xC (0x4)
};

// 0x14 
struct FGearboxDialogReplicatedData {
	float Pitch; // 0x0 (0x4)
	struct UAkEvent* TalkAkEvent; // 0x4 (0x4)
	int AkAudioUniqueID; // 0x8 (0x4)
	struct UGearboxDialogAct_Talk* TalkAct; // 0xC (0x4)
	struct UGearboxDialogEventTag* EventTag; // 0x10 (0x4)
};

// 0xC 
struct FOutputLinkToStruct {
	int FromNodeID; // 0x0 (0x4)
	int LinkNumber; // 0x4 (0x4)
	int ToNodeID; // 0x8 (0x4)
};

// 0xC 
struct FDialogEventData {
	struct UGearboxDialogEventTag* Tag; // 0x0 (0x4)
	BOOL bEnabled : 1; // 0x4 (0x4)
	const unsigned long: 0;
	struct UGearboxDialogAction* OutputAction; // 0x8 (0x4)
};

// 0x8 
struct FDialogEventInfo {
	struct UGearboxDialogEvent* Event; // 0x0 (0x4)
	int NodeID; // 0x4 (0x4)
};

// 0x1C 
struct FTalkActData {
	float OutputDelay; // 0x0 (0x4)
	struct TArray_FGearboxDialogData TalkData; // 0x4 (0xC)
	struct UGearboxDialogVariable* TalkerVariable; // 0x10 (0x4)
	struct UGearboxDialogAction* OutputAction; // 0x14 (0x4)
	BOOL bInstigatorTalker : 1; // 0x18 (0x4)
	const unsigned long: 0;
};

// 0x24 
struct FMovieStateData {
	struct FName State; // 0x0 (0x8)
	unsigned char Mode; // 0x8 (0x1) (Enum = EStateApplyMode)
	const unsigned char Unknown1[0x3]; // 0x9 (0x3) > LAST OFFSET
	struct FString Context; // 0xC (0xC)
	struct TArray_FASValue ASArgs; // 0x18 (0xC)
};

// 0x18 
struct FMovieStateStruct {
	struct TArray_FName States; // 0x0 (0xC)
	struct TArray_FName Flags; // 0xC (0xC)
};

// 0x10 
struct FReplicatedNounAttributeState {
	struct FName NounName; // 0x0 (0x8)
	float Value; // 0x8 (0x4)
	const BOOL bOnlyRelevantToOwner : 1; // 0xC (0x4)
	const unsigned long: 0;
};

// 0x24 
struct FNounAttributeState {
	struct FName NounName; // 0x0 (0x8)
	float Value; // 0x8 (0x4)
	float BaseValue; // 0xC (0x4)
	struct TArray_UAttributeModifierPtr ModifierStack; // 0x10 (0xC)
	unsigned char ReplicationStrategy; // 0x1C (0x1) (Enum = ENounReplicationStrategy)
	const unsigned char Unknown1[0x3]; // 0x1D (0x3) > LAST OFFSET
	int IndexInReplicationArray; // 0x20 (0x4)
};

// 0x14 
struct FDynamicFlagInstanceData {
	struct FFlag DynamicFlag; // 0x0 (0x10)
	float LastEvaluatedExpressionTime; // 0x10 (0x4)
};

// 0x8 
struct FEventRecord {
	struct URuleEventDef* EventDefinition; // 0x0 (0x4)
	struct UObject* OtherEventParticipantObject; // 0x4 (0x4)
};

// 0xC 
struct FRuleSetReference {
	struct FName ReferenceName; // 0x0 (0x8)
	struct URuleSet* ReferenceRuleSet; // 0x8 (0x4)
};

// 0x8 
struct FTargetIteratorData {
	struct UClass* Iterator; // 0x0 (0x4)
	float Weight; // 0x4 (0x4)
};

// 0x58 
struct FPathFindData {
	struct FGBXNavMeshPath Path; // 0x0 (0x10)
	struct FBasedPosition FinalDest; // 0x10 (0x34)
	BOOL bFinalDestIsActor : 1; // 0x44 (0x4)
	const unsigned long: 0;
	float MaxRangeToDest; // 0x48 (0x4)
	struct FGBXNavMeshPolyRef AnchorPoly; // 0x4C (0x8)
	BOOL bCanArriveEarly : 1; // 0x54 (0x4)
	const unsigned long: 0;
};

// 0x14 
struct FReplicatedSpecialMoveData {
	struct UObject* Data; // 0x0 (0x4)
	float PlayRateScale; // 0x4 (0x4)
	float Duration; // 0x8 (0x4)
	unsigned char DirtyCounter; // 0xC (0x1)
	const unsigned char Unknown1[0x3]; // 0xD (0x3) > LAST OFFSET
	struct USpecialMoveDefinition* SMD; // 0x10 (0x4)
};

// 0x44 
struct FRuleInfo {
	struct FName RuleName; // 0x0 (0x8)
	struct FString RuleNameString; // 0x8 (0xC)
	struct FString RunningSequence; // 0x14 (0xC)
	struct FString LatentAction; // 0x20 (0xC)
	BOOL bIsRunning : 1; // 0x2C (0x4)
	BOOL bHasFinishedCode : 1; // 0x2C (0x4)
	BOOL bIsDisabled : 1; // 0x2C (0x4)
	BOOL bIsContainer : 1; // 0x2C (0x4)
	const unsigned long: 0;
	struct TArray_FString ColorCodedStrings; // 0x30 (0xC)
	int ContainerRuleStartNdx; // 0x3C (0x4)
	int ContainerRuleNumSubRules; // 0x40 (0x4)
};

// 0x14 
struct FIconData {
	float U; // 0x0 (0x4)
	float V; // 0x4 (0x4)
	float UL; // 0x8 (0x4)
	float VL; // 0xC (0x4)
	float Scale; // 0x10 (0x4)
};

// 0x20 
struct FAwarenessInfo {
	struct FVector Location; // 0x0 (0xC)
	float Radius; // 0xC (0x4)
	struct FName AwarenessZoneName; // 0x10 (0x8)
	BOOL IsInfinitelyFarAway : 1; // 0x18 (0x4)
	const unsigned long: 0;
	struct FColor ZoneColor; // 0x1C (0x4)
};

// 0x18 
struct FLastVisibleInfo {
	struct FVector LastVisibleLocation; // 0x0 (0xC)
	struct FVector CurrentLocation; // 0xC (0xC)
};

// 0x18 
struct FDebugExposure {
	float TargetExposure; // 0x0 (0x4)
	float MyExposure; // 0x4 (0x4)
	struct FVector InWorldLocation; // 0x8 (0xC)
	BOOL IsPlayerInfo : 1; // 0x14 (0x4)
	const unsigned long: 0;
};

// 0x28 
struct FViewConeInfo {
	struct FVector ConeOrigin; // 0x0 (0xC)
	struct FVector ConeDirection; // 0xC (0xC)
	float ConeAngle; // 0x18 (0x4)
	float ConeLength; // 0x1C (0x4)
	struct FColor ConeColor; // 0x20 (0x4)
	BOOL Has360DegreesAwareness : 1; // 0x24 (0x4)
	const unsigned long: 0;
};

// 0xC 
struct FCoverDebugScoringData {
	struct FName PriorityName; // 0x0 (0x8)
	float Score; // 0x8 (0x4)
};

// 0x50 
struct FCoverDebugInfo {
	struct FName CoverRegionName; // 0x0 (0x8)
	float Score; // 0x8 (0x4)
	float Distance; // 0xC (0x4)
	BOOL IsACandidate : 1; // 0x10 (0x4)
	BOOL IsBestCandidate : 1; // 0x10 (0x4)
	const unsigned long: 0;
	struct FString FailString; // 0x14 (0xC)
	struct FVector LeftEndPoint; // 0x20 (0xC)
	struct FVector RightEndPoint; // 0x2C (0xC)
	struct FVector CoverDirection; // 0x38 (0xC)
	struct TArray_FCoverDebugScoringData ScoringInfo; // 0x44 (0xC)
};

// 0x1C 
struct FTargetPriorityInfo {
	struct FName TargetName; // 0x0 (0x8)
	struct FString ShortName; // 0x8 (0xC)
	float Value; // 0x14 (0x4)
	struct FColor BarColor; // 0x18 (0x4)
};

// 0x20 
struct FTargetDebugDatum {
	BOOL bCurrent : 1; // 0x0 (0x4)
	BOOL bIsPlayer : 1; // 0x0 (0x4)
	const unsigned long: 0;
	struct FString TargetName; // 0x4 (0xC)
	float TotalPriority; // 0x10 (0x4)
	struct TArray_FTargetPriorityInfo PriorityData; // 0x14 (0xC)
};

// 0x14 
struct FAIHoldDebugData {
	struct FName HoldName; // 0x0 (0x8)
	struct FString HoldTag; // 0x8 (0xC)
};

// 0x44 
struct FGearboxViewShakeInfo {
	struct FVector OffsetMag; // 0x0 (0xC)
	struct FVector OffsetRate; // 0xC (0xC)
	float OffsetTime; // 0x18 (0x4)
	struct FVector RotMag; // 0x1C (0xC)
	struct FVector RotRate; // 0x28 (0xC)
	float RotTime; // 0x34 (0x4)
	float FOVMag; // 0x38 (0x4)
	float FOVRate; // 0x3C (0x4)
	float FOVTime; // 0x40 (0x4)
};

// 0x14 
struct FStepConfiguration {
	int FirstAttemptDelay; // 0x0 (0x4)
	int BaseRetrySeconds; // 0x4 (0x4)
	float RetryMultiplier; // 0x8 (0x4)
	int MaxRetryAttempts; // 0xC (0x4)
	int RetryJitter; // 0x10 (0x4)
};

// 0x38 
struct FThumbnailRenderData {
	const struct FName Context; // 0x0 (0x8)
	const struct UTextureRenderTarget2D* RenderTarget; // 0x8 (0x4)
	const struct UTexture* ResultTexture; // 0xC (0x4)
	unsigned char UpdateType; // 0x10 (0x1) (Enum = EThumbnailUpdate)
	const unsigned char Unknown1[0x3]; // 0x11 (0x3) > LAST OFFSET
	struct UMeshComponent* Mesh; // 0x14 (0x4)
	const int TextureSizeX; // 0x18 (0x4)
	const int TextureSizeY; // 0x1C (0x4)
	const int SizeX; // 0x20 (0x4)
	const int SizeY; // 0x24 (0x4)
	struct TArray_UTexturePtr ReferencedTextures; // 0x28 (0xC)
	float StopStreamTexturesTime; // 0x34 (0x4)
};

// 0x10 
struct FThumbnailLightData {
	struct FRotator Direction; // 0x0 (0xC)
	struct ULightComponent* Light; // 0xC (0x4)
};

// 0x18 
struct FGestaltPart {
	struct USkeletalMesh* SkeletalMeshFragment; // 0x0 (0x4)
	struct FName SkeletalMeshFragmentName; // 0x4 (0x8)
	int MaterialIndex; // 0xC (0x4)
	int FirstIndex; // 0x10 (0x4)
	int NumPrimitives; // 0x14 (0x4)
};

// 0xC 
struct FGestaltInfo {
	struct TArray_FGestaltPart Parts; // 0x0 (0xC)
};

// 0x8 
struct FGestaltAccessoryNameEntry {
	struct FName SkeletalMeshFragmentName; // 0x0 (0x8)
};

// 0x1C 
struct FGestaltSocketRemapEntry {
	struct USkeletalMesh* SkeletalMeshFragment; // 0x0 (0x4)
	struct FName SkeletalMeshFragmentName; // 0x4 (0x8)
	struct FName OriginalSocketName; // 0xC (0x8)
	struct FName MangledSocketName; // 0x14 (0x8)
};

// 0x24 
struct FGestaltPartBoundsEntry {
	struct FName SkeletalMeshFragmentName; // 0x0 (0x8)
	struct FBoxSphereBounds ReferencePoseBounds; // 0x8 (0x1C)
};

// 0x18 
struct FGestaltPartPermutation {
	struct FName MeshName; // 0x0 (0x8)
	struct FName GroupName; // 0x8 (0x8)
	struct FName PartName; // 0x10 (0x8)
};

// 0x10 
struct FMovieInstanceArray {
	struct TArray_UGearboxGFxMoviePtr Movies; // 0x0 (0xC)
	struct UGearboxGFxMovie* PoolParent; // 0xC (0x4)
};

// 0xC 
struct FGFxMenuLink {
	struct FName MenuName; // 0x0 (0x8)
	struct UGFxMovieDefinition* Definition; // 0x8 (0x4)
};

// 0x10 
struct FHUDCoordValue {
	unsigned char Type; // 0x0 (0x1) (Enum = EHUDCoordType)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	float Value; // 0x4 (0x4)
	float CurrentValue; // 0x8 (0x4)
	BOOL bCacheValid : 1; // 0xC (0x4)
	const unsigned long: 0;
};

// 0x24 
struct FHUDAnchorPoint {
	unsigned char MoviePoint; // 0x0 (0x1) (Enum = EHUDAnchorPoint)
	unsigned char ScreenPoint; // 0x1 (0x1) (Enum = EHUDAnchorPoint)
	const unsigned char Unknown1[0x2]; // 0x2 (0x2) > LAST OFFSET
	struct FHUDCoordValue Offset[2]; // 0x4 (0x20)
};

// 0xC 
struct FGearboxGFxPlayParameters {
	struct UGFxMovieDefinition* Definition; // 0x0 (0x4)
	struct UObject* OtherObject; // 0x4 (0x4)
	struct APlayerController* PlayerOwner; // 0x8 (0x4)
};

// 0x28 
struct FMovieRangeStateData {
	struct FName State; // 0x0 (0x8)
	unsigned char Mode; // 0x8 (0x1) (Enum = EStateApplyMode)
	const unsigned char Unknown1[0x3]; // 0x9 (0x3) > LAST OFFSET
	struct FString Context; // 0xC (0xC)
	struct TArray_FASValue ASArgs; // 0x18 (0xC)
	float Distance; // 0x24 (0x4)
};

// 0x18 
struct FAttributeValuePair {
	struct FName Key; // 0x0 (0x8)
	struct FAttributeInitializationData Value; // 0x8 (0x10)
};

// 0xC 
struct FSpecialMoveValuePair {
	struct FName Key; // 0x0 (0x8)
	struct USpecialMoveDefinition* Value; // 0x8 (0x4)
};

// 0x18 
struct FCustomEventReactionData {
	struct FName EventName; // 0x0 (0x8)
	BOOL bReplicateEvent : 1; // 0x8 (0x4)
	const unsigned long: 0;
	const struct TArray_UBehaviorBasePtr Behaviors; // 0xC (0xC)
};

// 0xC 
struct FCustomEventReactionDataSpecialized {
	const struct FName EventName; // 0x0 (0x8)
	BOOL bReplicateEvent : 1; // 0x8 (0x4)
	const unsigned long: 0;
};

// 0x14 
struct FHitTargetRecord {
	struct FVector vecHitLoc; // 0x0 (0xC)
	float flDamage; // 0xC (0x4)
	float flHitTime; // 0x10 (0x4)
};

// 0x1C 
struct FPriorityDebugStruct {
	struct FName IteratorName; // 0x0 (0x8)
	struct FString ShortName; // 0x8 (0xC)
	float PriorityValue; // 0x14 (0x4)
	BOOL AutomaticTopPriority : 1; // 0x18 (0x4)
	const unsigned long: 0;
};

// 0x8 
struct FEncounterLimitState {
	int NumTotalSpawned; // 0x0 (0x4)
	int NumCurrentlyActive; // 0x4 (0x4)
};

// 0x38 
struct FEncounterLimitData {
	struct TArray_UPopulationSpawnedActorTagDefinitionPtr ActorTags; // 0x0 (0xC)
	struct FAttributeInitializationData MaxTotalToSpawn; // 0xC (0x10)
	struct FAttributeInitializationData MaxActiveAtATime; // 0x1C (0x10)
	unsigned char ConstraintType; // 0x2C (0x1) (Enum = EEncounterConstraintType)
	const unsigned char Unknown1[0x3]; // 0x2D (0x3) > LAST OFFSET
	struct FEncounterLimitState LimitState; // 0x30 (0x8)
};

// 0x28 
struct FEncounterWaveData {
	const float InitialDelay; // 0x0 (0x4)
	const float PercentToComplete; // 0x4 (0x4)
	const struct UPopulationDefinition* EncounterPopulationDef; // 0x8 (0x4)
	const struct TArray_APopulationOpportunityPtr MemberOpportunities; // 0xC (0xC)
	struct TArray_FEncounterLimitData SpawnLimits; // 0x18 (0xC)
	BOOL WaveComplete : 1; // 0x24 (0x4)
	BOOL AllKilledInWave : 1; // 0x24 (0x4)
	const unsigned long: 0;
};

// 0x8 
struct FSpawnOption {
	struct UPopulationFactory* Factory; // 0x0 (0x4)
	float ComputedProbability; // 0x4 (0x4)
};

// 0x4 
struct FDestructionParameters {
	BOOL bActorExemptFromIrrelevancyTests : 1; // 0x0 (0x4)
	const unsigned long: 0;
};

// 0x1C 
struct FSpawnedPopulationActor {
	struct AActor* SpawnedActor; // 0x0 (0x4)
	struct UPopulationFactory* SpawnFactory; // 0x4 (0x4)
	struct FDestructionParameters FactoryDestructionParams; // 0x8 (0x4)
	float flLastInRadiusOrVisible; // 0xC (0x4)
	int SpawnCost; // 0x10 (0x4)
	int CreationFlags; // 0x14 (0x4)
	BOOL Reuse : 1; // 0x18 (0x4)
	BOOL bIsDead : 1; // 0x18 (0x4)
	BOOL bCanSave : 1; // 0x18 (0x4)
	BOOL bShouldRemove : 1; // 0x18 (0x4)
	const unsigned long: 0;
};

// 0x3C 
struct FRemovedPopulationActor {
	BOOL bReuseActor : 1; // 0x0 (0x4)
	const unsigned long: 0;
	int CreationFlags; // 0x4 (0x4)
	struct FNameBasedObjectPath FactoryPath; // 0x8 (0x34)
};

// 0x10 
struct FOpportunitySavedState {
	int SelectedSpawnIdx; // 0x0 (0x4)
	int NumTotalActors; // 0x4 (0x4)
	unsigned char MaxActiveActors; // 0x8 (0x1)
	unsigned char NumActiveActors; // 0x9 (0x1)
	const unsigned char Unknown1[0x2]; // 0xA (0x2) > LAST OFFSET
	float NextSpawnTime; // 0xC (0x4)
};

// 0x8 
struct FOpportunityCleanupParameters {
	BOOL bCleanupActorsWhenIrrelevant : 1; // 0x0 (0x4)
	BOOL bRequireOpportunityToBeInactive : 1; // 0x0 (0x4)
	const unsigned long: 0;
	float ActorIrrelvantDistance; // 0x4 (0x4)
};

// 0x54 
struct FPopulationOpportunityTracker {
	struct FName OpportunityOutermostName; // 0x0 (0x8)
	struct FName OpportunityName; // 0x8 (0x8)
	struct APopulationOpportunity* LoadedOpportunity; // 0x10 (0x4)
	struct TArray_FSpawnedPopulationActor SpawnedActors; // 0x14 (0xC)
	struct FPointer SavedActorsList; // 0x20 (0x4)
	struct TArray_FRemovedPopulationActor ActorsRemovedWhileUnloaded; // 0x24 (0xC)
	BOOL DynamicOpportunity : 1; // 0x30 (0x4)
	BOOL bHasSavedState : 1; // 0x30 (0x4)
	const unsigned long: 0;
	unsigned char bTotalResetOnLevelLoad; // 0x34 (0x1)
	unsigned char RespawnStyle; // 0x35 (0x1) (Enum = EPopulationRespawnOptions)
	const unsigned char Unknown1[0x2]; // 0x36 (0x2) > LAST OFFSET
	float RespawnDelayStartTime; // 0x38 (0x4)
	struct FOpportunitySavedState SavedState; // 0x3C (0x10)
	struct FOpportunityCleanupParameters OpportunityCleanupParams; // 0x4C (0x8)
};

// 0x18 
struct FPopulationMasterStat {
	struct FName StatName; // 0x0 (0x8)
	float StatTime; // 0x8 (0x4)
	float StatMaxTime; // 0xC (0x4)
	int StatIterations; // 0x10 (0x4)
	int IterationStartTime; // 0x14 (0x4)
};

// 0x10 
struct FEncounterWaveTracker {
	int nWaveIdx; // 0x0 (0x4)
	int nLimitStateIdx; // 0x4 (0x4)
	struct FEncounterLimitState LimitSaveState; // 0x8 (0x8)
};

// 0x5C 
struct FEncounterTracker {
	struct APopulationEncounter* LoadedEncounter; // 0x0 (0x4)
	struct ULevelStreaming* EncountersLevel; // 0x4 (0x4)
	struct FNameBasedObjectPath EncounterPath; // 0x8 (0x34)
	BOOL bNeedsKismetUpdate : 1; // 0x3C (0x4)
	const unsigned long: 0;
	struct TArray_unsigned_char EncounterCompletionSaveState; // 0x40 (0xC)
	struct TArray_FEncounterWaveTracker EncounterSaveState; // 0x4C (0xC)
	float RespawnDelayStartTime; // 0x58 (0x4)
};

// 0x4 
struct FPopulationOpportunityStat {
	float PercentNodeReduction; // 0x0 (0x4)
};

// 0x58 
struct FPopulationOpportunitySavedActor {
	struct FNameBasedObjectPath FactoryPath; // 0x0 (0x34)
	float TimeActorSaved; // 0x34 (0x4)
	struct FVector SpawnActorLocation; // 0x38 (0xC)
	struct FRotator SpawnActorRotation; // 0x44 (0xC)
	int CreationFlags; // 0x50 (0x4)
	struct UObject* CustomActorData; // 0x54 (0x4)
};

// 0x24 
struct FPopulationOptionAreaPopDefData {
	struct UPopulationDefinition* PopulationDef; // 0x0 (0x4)
	struct FAttributeInitializationData MaxTotalActorsFormula; // 0x4 (0x10)
	int MaxTotalActors; // 0x14 (0x4)
	int MaxActiveActors; // 0x18 (0x4)
	float RespawnDelay; // 0x1C (0x4)
	float RespawnDelayAfterDeath; // 0x20 (0x4)
};

// 0x10 
struct FPopulationOptionAreaData {
	struct UExpressionEvaluatorDefinition* ExpressionDef; // 0x0 (0x4)
	struct TArray_FPopulationOptionAreaPopDefData PopulationDefinitions; // 0x4 (0xC)
};

// 0x18 
struct FPopulationOptionSpawnDefData {
	struct FString PopulationDefName; // 0x0 (0xC)
	int NumTotalActors; // 0xC (0x4)
	int NumActiveActors; // 0x10 (0x4)
	float NextSpawnTime; // 0x14 (0x4)
};

// 0xC 
struct FPopulationAreaOptionSpawnData {
	struct TArray_FPopulationOptionSpawnDefData Data; // 0x0 (0xC)
};

// 0x1C 
struct FPopulationOptionSpawnData {
	struct FString PopulationDefName; // 0x0 (0xC)
	int MaxActiveActors; // 0xC (0x4)
	int NumTotalActors; // 0x10 (0x4)
	int NumActiveActors; // 0x14 (0x4)
	float NextSpawnTime; // 0x18 (0x4)
};

// 0x14 
struct FColumnDataStruct {
	struct FString HeaderText; // 0x0 (0xC)
	float Value; // 0xC (0x4)
	struct FColor BarColor; // 0x10 (0x4)
};

// 0x10 
struct FSavedRandomValue {
	struct FName ContextName; // 0x0 (0x8)
	float SavedValue; // 0x8 (0x4)
	float ExpirationTime; // 0xC (0x4)
};

// 0xC 
struct FRuleEngineLoadBalanceStruct {
	struct URuleEngine* RuleEngine; // 0x0 (0x4)
	float TimeSinceLastUpdate; // 0x4 (0x4)
	int Priority; // 0x8 (0x4)
};

// 0x18 
struct FDebugLoadBalance {
	struct FName RuleEngine; // 0x0 (0x8)
	BOOL bIsInQueue : 1; // 0x8 (0x4)
	const unsigned long: 0;
	float TimeSinceUpdate; // 0xC (0x4)
	float TimeToDoLastUpdate; // 0x10 (0x4)
	int Priority; // 0x14 (0x4)
};

// 0x18 
struct FRELBManagerStats {
	float TotalTimeUpdated; // 0x0 (0x4)
	float MaxTimeUpdating; // 0x4 (0x4)
	int NumUpdated; // 0x8 (0x4)
	int AveragePriority; // 0xC (0x4)
	int LowestPriority; // 0x10 (0x4)
	int HighestPriority; // 0x14 (0x4)
};

// 0x10 
struct FDebugStringData {
	struct FString DebugStr; // 0x0 (0xC)
	struct FColor StrColor; // 0xC (0x4)
};

// 0xC 
struct FDebugEntryData {
	struct TArray_FDebugStringData DebugStrs; // 0x0 (0xC)
};

// 0x7C 
struct FSparkOutstandingRequest {
	unsigned char State; // 0x0 (0x1) (Enum = SparkRequestState)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	struct FDouble SleepUntil; // 0x4 (0x8)
	BOOL WantResponse : 1; // 0xC (0x4)
	BOOL ScriptCallback : 1; // 0xC (0x4)
	const unsigned long: 0;
	struct FScriptDelegate RequestCompleteDelegate; // 0x10 (0xC)
	int RequestIdentifier; // 0x1C (0x4)
	struct FPointer SparkUpdateCallback; // 0x20 (0x4)
	struct FPointer HttpRequest; // 0x24 (0x4)
	struct FPointer RequestBody; // 0x28 (0x4)
	struct FPointer ResponseBody; // 0x2C (0x4)
	int RetryNumber; // 0x30 (0x4)
	int BaseRetryIntervalSeconds; // 0x34 (0x4)
	int MaxRetryAttempts; // 0x38 (0x4)
	float RetryMultiplier; // 0x3C (0x4)
	int RetryJitter; // 0x40 (0x4)
	int HttpTimeout; // 0x44 (0x4)
	int ReadBufferSize; // 0x48 (0x4)
	struct FString Accept; // 0x4C (0xC)
	struct FString ContentType; // 0x58 (0xC)
	unsigned char Method; // 0x64 (0x1) (Enum = HttpMethod)
	const unsigned char Unknown2[0x3]; // 0x65 (0x3) > LAST OFFSET
	struct FString URL; // 0x68 (0xC)
	struct FDouble RequestStartTime; // 0x74 (0x8)
};

// 0x34 
struct FSparkMicropatch {
	struct FString ObjectPath; // 0x0 (0xC)
	struct FString PropertyPath; // 0xC (0xC)
	struct FString OriginalValue; // 0x18 (0xC)
	struct FString NewValue; // 0x24 (0xC)
	BOOL bApplied : 1; // 0x30 (0x4)
	const unsigned long: 0;
};

// 0x8 
struct FSMExpressionList {
	const struct UExpressionEvaluator* Expression; // 0x0 (0x4)
	const struct USpecialMoveDefinition* SMD; // 0x4 (0x4)
};

// 0x8 
struct FSMRandomPair {
	float Weight; // 0x0 (0x4)
	struct USpecialMoveDefinition* SMD; // 0x4 (0x4)
};

// 0xC 
struct FStateAttributeData {
	struct FName Key; // 0x0 (0x8)
	struct UAttributeDefinition* Attribute; // 0x8 (0x4)
};

// 0x1C 
struct FWireLinkage {
	struct FVector Offset; // 0x0 (0xC)
	float Width; // 0xC (0x4)
	float Slack; // 0x10 (0x4)
	unsigned char Segments; // 0x14 (0x1)
	const unsigned char Unknown1[0x3]; // 0x15 (0x3) > LAST OFFSET
	int Link; // 0x18 (0x4)
};

// 0x18 
struct FNewsArticle {
	struct FString Header; // 0x0 (0xC)
	struct FString Body; // 0xC (0xC)
};

]]