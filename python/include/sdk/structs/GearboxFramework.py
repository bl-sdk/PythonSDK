
from ctypes import *
import BL2SDK





class  FAIHoldData(Structure):
	_fields_ = [
		("HoldName", FName),
		("HoldTag", POINTER(UObject)),
	]


class  FAIResourceData(Structure):
	_fields_ = [
		("Resource", POINTER(UAIResource)),
		("CanRun", TArray_FPointer),
		("Running", TArray_FPointer),
	]


class  FAIRange(Structure):
	_fields_ = [
		("MinVal", c_float),
		("MaxVal", c_float),
	]


class  FAITreeData(Structure):
	_fields_ = [
		("AI", FScriptInterface),
		("Type", c_ubyte),
		("Unknown1", c_ubyte, 0x),
		("Children", TArray_int),
		("Resource", POINTER(UAIResource)),
		("CanRunIf", POINTER(UExpressionEvaluator)),
		("TimedStart", FAIRange),
		("TimedReset", FAIRange),
		("TimedFail", FAIRange),
		("bStopIfCannotRun", c_bool, 1),
		("", c_ulong, 0),
		("ActiveChild", int),
		("NextActiveChild", int),
		("LastFailTime", c_float),
		("NextTimedRun", c_float),
		("NextTimedFail", c_float),
		("NextTimedResource", c_float),
		("bHoldingResource", c_bool, 1),
		("", c_ulong, 0),
		("Action", POINTER(UActionSequence)),
		("LoopCount", c_int),
		("LastRandomChild", c_int),
		("Weights", TArray_c_float),
		("LoopCountMax", TArray_int),
		("bInterrupt", c_bool, 1),
		("", c_ulong, 0),
		("Conditions", TArray_UExpressionEvaluatorPtr),
		("NextSequentialChild", c_int),
		("PosX", int),
		("PosY", int),
		("NodeName", FString),
		("ActionFailName", FName),
		("FailReason", c_ubyte),
	]


class  FPriorityData(Structure):
	_fields_ = [
		("Description", FString),
		("Condition", POINTER(UExpressionEvaluator)),
	]


class  FFlagDefinitionInitialization(Structure):
	_fields_ = [
		("FlagToSet", POINTER(UFlagDefinition)),
		("ChanceTrue", FAttributeInitializationData),
		("ProbabilityTrue", c_float),
		("Duration", FAttributeInitializationData),
	]


class  FCoverDebugScoringInfo(Structure):
	_fields_ = [
		("PriorityName", FName),
		("Score", c_float),
	]


class  FCoverDebugPriority(Structure):
	_fields_ = [
		("Score", c_float),
		("Distance", c_float),
		("IsACandidate", c_bool, 1),
		("IsBestCandidate", c_bool, 1),
		("", c_ulong, 0),
		("TheCoverActor", POINTER(AActor)),
		("SlotNdx", c_int),
		("FailString", FString),
		("ScoringInfo", TArray_FCoverDebugScoringInfo),
	]


class  FValidNameRange(Structure):
	_fields_ = [
		("Start", c_int),
		("End", c_int),
	]


class  FObjectKey(Structure):
	_fields_ = [
		("ObjectName", FName),
		("AdditionalKey", FName),
	]


class  FLevelStateRecord(Structure):
	_fields_ = [
		("LevelName", FName),
		("LevelLoaded", c_ubyte),
		("Unknown1", c_ubyte, 0x),
		("ObjectKeys", TArray_FObjectKey),
	]


class  FVantageSpot(Structure):
	_fields_ = [
		("Location", FVector),
		("VantageType", c_ubyte),
	]


class  FGearboxCoverState(Structure):
	_fields_ = [
		("TheCoverActor", POINTER(AActor)),
		("SlotIndex", c_int),
		("State", c_ubyte),
		("ExtendedState", c_ubyte),
		("MetaData", c_ubyte),
		("ExtendedMetaData", c_ubyte),
	]


class  FGearboxCoverTransition(Structure):
	_fields_ = [
		("Action", c_ubyte),
		("ExtendedAction", c_ubyte),
		("Padding", c_ubyte * 2),
	]


class  FCoverCandidate(Structure):
	_fields_ = [
		("TheCoverActor", POINTER(AActor)),
		("SlotNdx", c_int),
		("Score", c_float),
	]


class  FPopulationActor(Structure):
	_fields_ = [
		("SpawnFactory", POINTER(UPopulationFactory)),
		("Probability", FAttributeInitializationData),
		("MaxActiveAtOneTime", FAttributeInitializationData),
		("TestVisibility", c_bool, 1),
		("TestFOV", c_bool, 1),
		("", c_ulong, 0),
	]


class  FLocationInfo(Structure):
	_fields_ = [
		("Location", FVector),
		("IsPlayerInfo", c_bool, 1),
		("", c_ulong, 0),
	]


class  FActionSequenceRandomData(Structure):
	_fields_ = [
		("ProbabilityData", FAttributeInitializationData),
		("ActionToRunWhenTrue", POINTER(UActionSequence)),
	]


class  FSubarrayData(Structure):
	_fields_ = [
		("ArrayIndexAndLength", int),
	]


class  FBehaviorSequenceActionData2(Structure):
	_fields_ = [
		("Behavior", POINTER(UBehaviorBase)),
		("LinkedVariables", FSubarrayData),
		("OutputLinks", FSubarrayData),
	]


class  FBehaviorVariableValue(Structure):
	_fields_ = [
		("IntValue", int),
		("FloatValue", c_float),
		("VectorValue", FVector),
		("ObjectValue", POINTER(UObject)),
		("VariableType", c_ubyte),
	]


class  FBehaviorVariableValueUnion_Mirror(Structure):
	_fields_ = [
		("Data", FPointer),
	]


class  FBehaviorVariableData(Structure):
	_fields_ = [
		("Name", FName),
		("Type", c_ubyte),
		("Unknown1", c_ubyte, 0x),
		("Value", FBehaviorVariableValueUnion_Mirror),
	]


class  FBehaviorEventUserData(Structure):
	_fields_ = [
		("EventName", FName),
		("bEnabled", c_bool, 1),
		("bReplicate", c_bool, 1),
		("", c_ulong, 0),
		("MaxTriggerCount", c_int),
		("ReTriggerDelay", c_float),
		("FilterObject", POINTER(UBehaviorEventFilterBase)),
	]


class  FBehaviorVariableLinkData(Structure):
	_fields_ = [
		("PropertyName", FName),
		("ConnectionIndex", int),
		("LinkedVariables", TArray_int),
		("CachedProperty", POINTER(UProperty)),
	]


class  FBehaviorActionLinkData(Structure):
	_fields_ = [
		("LinkedBehavior", int),
		("ActivateDelay", c_float),
	]


class  FBehaviorOutputLinkData(Structure):
	_fields_ = [
		("LinkId", int),
		("LinkedActions", TArray_FBehaviorActionLinkData),
	]


class  FBehaviorEventData(Structure):
	_fields_ = [
		("UserData", FBehaviorEventUserData),
		("OutputVariables", TArray_FBehaviorVariableLinkData),
		("OutputLinks", TArray_FBehaviorOutputLinkData),
	]


class  FBehaviorEventData2(Structure):
	_fields_ = [
		("UserData", FBehaviorEventUserData),
		("OutputVariables", FSubarrayData),
		("OutputLinks", FSubarrayData),
	]


class  FBehaviorSequenceActionData(Structure):
	_fields_ = [
		("Behavior", POINTER(UBehaviorBase)),
		("ContextVariables", FBehaviorVariableLinkData),
		("LinkedVariables", TArray_FBehaviorVariableLinkData),
		("OutputVariables", TArray_FBehaviorVariableLinkData),
		("OutputLinks", TArray_FBehaviorOutputLinkData),
	]


class  FBehaviorOutputLinkData2(Structure):
	_fields_ = [
		("LinkIdAndLinkedBehavior", int),
		("ActivateDelay", c_float),
	]


class  FBehaviorVariableLinkData2(Structure):
	_fields_ = [
		("PropertyName", FName),
		("VariableLinkType", c_ubyte),
		("ConnectionIndex", c_ubyte),
		("Unknown1", c_ubyte, 0x),
		("LinkedVariables", FSubarrayData),
		("CachedProperty", POINTER(UProperty)),
	]


class  FBehaviorSequenceData(Structure):
	_fields_ = [
		("BehaviorSequenceName", FName),
		("bEnabledOnSpawn", c_bool, 1),
		("bSequenceEnabledMutex", c_bool, 1),
		("", c_ulong, 0),
		("CustomEnableCondition", POINTER(UBehaviorSequenceCustomEnableCondition)),
		("EventData", TArray_FBehaviorEventData),
		("EventData2", TArray_FBehaviorEventData2),
		("BehaviorData", TArray_FBehaviorSequenceActionData),
		("BehaviorData2", TArray_FBehaviorSequenceActionData2),
		("VariableData", TArray_FBehaviorVariableData),
		("ConsolidatedOutputLinkData", TArray_FBehaviorOutputLinkData2),
		("ConsolidatedVariableLinkData", TArray_FBehaviorVariableLinkData2),
		("ConsolidatedLinkedVariables", TArray_int),
	]


class  FDebugListItem(Structure):
	_fields_ = [
		("DisplayType", c_ubyte),
		("Unknown1", c_ubyte, 0x),
		("Location", FVector),
		("Location2", FVector),
		("Location3", FVector),
		("Texture", POINTER(UTexture2D)),
		("U", c_float),
		("V", c_float),
		("UL", c_float),
		("VL", c_float),
		("Scale", c_float),
		("TextString", FString),
		("TextColor", FColor),
		("Alignment", c_ubyte),
	]


class  FBehaviorConsumerHandle(Structure):
	_fields_ = [
		("PID", c_int),
	]


class  FTimeStampedRecord(Structure):
	_fields_ = [
		("DeathTimeStamp", c_float),
	]


class  FKnowledgeRecordStruct(Structure):
	_fields_ = [
		("DeathTimeStamp", c_float),
		("TheObj", POINTER(UKnowledgeRecord)),
		("InUse", c_ubyte),
	]


class  FRuleSetRecord(Structure):
	_fields_ = [
		("DeathTimeStamp", c_float),
		("TheObj", POINTER(URuleSet)),
		("InUse", c_ubyte),
	]


class  FRuleRecord(Structure):
	_fields_ = [
		("DeathTimeStamp", c_float),
		("TheObj", POINTER(URule)),
		("InUse", c_ubyte),
	]


class  FActionSequenceRecord(Structure):
	_fields_ = [
		("DeathTimeStamp", c_float),
		("TheObj", POINTER(UActionSequence)),
		("InUse", c_ubyte),
	]


class  FTargetInfoRecord(Structure):
	_fields_ = [
		("DeathTimeStamp", c_float),
		("TheObj", POINTER(UMindTargetInfo)),
		("InUse", c_ubyte),
	]


class  FAIDefinitionRecord(Structure):
	_fields_ = [
		("DeathTimeStamp", c_float),
		("TheObj", POINTER(UAIDefinition)),
		("InUse", c_ubyte),
	]


class  FAIResourceRestriction(Structure):
	_fields_ = [
		("MaxUsers", int),
		("MinUsers", int),
		("Resource", POINTER(UAIResource)),
	]


class  FOutputLink(Structure):
	_fields_ = [
		("Links", TArray_UGearboxEditorNodePtr),
	]


class  FVariableLink(Structure):
	_fields_ = [
		("Links", TArray_UGearboxEditorNodePtr),
	]


class  FSpecialMoveData(Structure):
	_fields_ = [
		("Data", POINTER(UObject)),
		("PlayRateScale", c_float),
		("Duration", c_float),
		("CallbackName", FName),
		("CallbackObject", POINTER(UObject)),
		("SMD", POINTER(USpecialMoveDefinition)),
	]


class  FSlotAnimParameters(Structure):
	_fields_ = [
		("SMData", FSpecialMoveData),
		("CustomAnimDef", POINTER(UGearboxAnimDefinition)),
		("CustomAnimName", FName),
		("PerBoneWeights", TArray_float),
		("TransformReqBone", TArray_unsigned_char),
		("TransformReqBoneIndex", c_int),
	]


class  FSpecializedBehaviorEvent(Structure):
	_fields_ = [
		("EventName", FName),
	]


class  FBehaviorTimerState(Structure):
	_fields_ = [
		("bIsRunning", c_bool, 1),
		("", c_ulong, 0),
		("Delay", c_float),
		("EventTime", c_float),
	]


class  FTimerEventReactionDataSpecialized(Structure):
	_fields_ = [
		("EventName", FName),
	]


class  FTimerBehaviorUserState(Structure):
	_fields_ = [
		("Timers", FBehaviorTimerState * 3),
	]


class  FTimerEventReactionData(Structure):
	_fields_ = [
		("EventType", c_ubyte),
		("Unknown1", c_ubyte, 0x),
		("Behaviors", TArray_UBehaviorBasePtr),
	]


class  FGbxMessageSimpleMetaData(Structure):
	_fields_ = [
		("FloatData", c_float),
		("IntData", c_int),
		("NameData", FName),
		("VectorData", FVector),
	]


class  FRelativeDirectionData(Structure):
	_fields_ = [
		("Direction", c_ubyte),
		("Unknown1", c_ubyte, 0x),
		("ConeAroundDirection", FAttributeInitializationData),
		("AdditionalRotation", FRotator),
	]


class  FAttachmentLocationData(Structure):
	_fields_ = [
		("Location", FVector),
		("AttachmentBase", FScriptInterface),
		("AttachmentName", FName),
	]


class  FProviderRecord(Structure):
	_fields_ = [
		("ProviderDefinition", POINTER(UBehaviorProviderDefinition)),
		("ReferenceCount", c_int),
	]


class  FBehaviorExecutionRecord(Structure):
	_fields_ = [
		("OwningProcessID", c_int),
		("ProvidersIndex", c_int),
		("SequencesDataIndex", c_int),
		("BehaviorNumber", c_int),
		("BehaviorName", FName),
		("TimeOfExecution", c_float),
	]


class  FBehaviorThread(Structure):
	_fields_ = [
		("ThreadState", c_ubyte),
		("Unknown1", c_ubyte, 0x),
		("OwningProcessID", c_int),
		("ThreadSequenceState", FPointer),
		("NextBehavior", c_int),
		("ActivateTime", c_float),
		("BehaviorStartedTime", c_float),
	]


class  FBehaviorEventState(Structure):
	_fields_ = [
		("TriggerCount", c_int),
		("LastTriggerTime", c_float),
		("FilterObject", POINTER(UBehaviorEventFilterBase)),
	]


class  FBehaviorVariableState(Structure):
	_fields_ = [
		("Name", FName),
		("Type", c_ubyte),
		("Unknown1", c_ubyte, 0x),
		("Value", FBehaviorVariableValueUnion_Mirror),
	]


class  FBehaviorSequenceState(Structure):
	_fields_ = [
		("bIsEnabled", c_bool, 1),
		("", c_ulong, 0),
		("ProvidersIndex", c_int),
		("SequencesDataIndex", c_int),
		("SequenceEnabledBitIndex", c_int),
		("EventStateHead", FPointer),
		("VariableStateHead", FPointer),
	]


class  FBehaviorProcess(Structure):
	_fields_ = [
		("Owner", POINTER(UObject)),
		("ProcessID", c_int),
		("SequenceEnabledBitField", c_int),
		("ProcessState", c_ubyte),
		("NextSequenceEnabledBitIndexToUse", c_ubyte),
		("bSupportsReplicatedSequenceState", c_ubyte),
		("NumPendingProviderRemovalRequests", c_ubyte),
		("Sequences", FChunkedList_Mirror),
		("Events", FChunkedList_Mirror),
		("Variables", FChunkedList_Mirror),
	]


class  FProviderRemovalRequest(Structure):
	_fields_ = [
		("ConsumerHandle", FBehaviorConsumerHandle),
		("ProvidersIndex", c_int),
	]


class  FBehaviorKernelArrayStats(Structure):
	_fields_ = [
		("UsedSlots", c_int),
		("UnusedSlots", c_int),
		("PeakUsage", c_int),
		("ContainerSlack", c_int),
	]


class  FBehaviorKernelStats(Structure):
	_fields_ = [
		("NumProcessesCreated", c_int),
		("NumThreadsCreated", c_int),
		("NumWaitingThreads", c_int),
		("NumEventsActivated", c_int),
		("NumEventsIgnored", c_int),
		("NumBehaviorsRun", c_int),
		("ProcessListStats", FBehaviorKernelArrayStats),
		("ProviderListStats", FBehaviorKernelArrayStats),
		("ObjectVariablesListStats", FBehaviorKernelArrayStats),
		("DynamicBehaviorsListStats", FBehaviorKernelArrayStats),
		("ProvidersIndexFreeListLength", c_int),
		("ObjectVariablesFreeListLength", c_int),
		("TotalMemoryUsed", c_int),
		("MemoryUsedBySlack", c_int),
	]


class  FReplicatedBehaviorConsumerState(Structure):
	_fields_ = [
		("bIsProcessSuspended", c_bool, 1),
		("", c_ulong, 0),
		("BehaviorSequenceEnabledFlags", c_int),
		("bNeedToApplyThisState", c_bool, 1),
		("", c_ulong, 0),
	]


class  FReplicatedBehaviorEvent(Structure):
	_fields_ = [
		("SequenceIndex", c_ubyte),
		("EventCounter", c_ubyte),
		("EventIndex", c_ubyte),
		("EventOutput", c_ubyte),
	]


class  FLinkedBehaviorSequence(Structure):
	_fields_ = [
		("ConsumerHandle", FBehaviorConsumerHandle),
		("SequenceState", FPointer),
	]


class  FBehaviorTriggerMessageStruct(Structure):
	_fields_ = [
		("MessageDefinition", POINTER(UGbxMessageDefinition)),
		("Instigator", c_ubyte),
		("OtherEventParticipant", c_ubyte),
		("Unknown1", c_ubyte, 0x),
		("Behaviors", TArray_UBehaviorBasePtr),
	]


class  FExposureCacheStruct(Structure):
	_fields_ = [
		("FromPawnName", FName),
		("ToActorName", FName),
		("TimeCached", c_float),
		("NextUpdateTime", c_float),
		("Exposure", c_float),
		("FromLoc", FVector),
		("ToLoc", FVector),
		("Vantage", TArray_FVantageSpot),
	]


class  FExposureUpdateStruct(Structure):
	_fields_ = [
		("FromPawn", POINTER(AGearboxPawn)),
		("ToActor", POINTER(AActor)),
		("TimeRequested", c_float),
		("Exposure", c_float),
		("Vantage", TArray_FVantageSpot),
		("ShouldRemove", c_ubyte),
	]


class  FBucketStruct(Structure):
	_fields_ = [
		("NdxToStartCheckFrom", c_int),
		("DistanceSquared", c_float),
		("MaxLineChecksPerFrame", c_int),
		("MaxIterationsPerFrame", c_int),
		("Exposures", TArray_FExposureUpdateStruct),
	]


class  FPointExposureData(Structure):
	_fields_ = [
		("Looker", POINTER(AActor)),
		("Point", FVector),
		("Point2", FVector),
		("Exposure", c_float),
		("LastCheckTime", c_float),
		("LastUpdateTime", c_float),
	]


class  FFeatherBoneBlendData(Structure):
	_fields_ = [
		("StartBoneName", FName),
		("BlendWeight", c_float),
	]


class  FFiringBehaviorBurstInfo(Structure):
	_fields_ = [
		("Instigator", POINTER(AGearboxPawn)),
		("InstigatorWeapon", POINTER(AWeapon)),
		("TargetActor", POINTER(AActor)),
		("NumShots", c_int),
		("RefireRate", c_float),
		("TargetInfo", POINTER(UMindTargetInfo)),
		("FireType", c_ubyte),
	]


class  FConditionalPattern(Structure):
	_fields_ = [
		("Conditions", TArray_UFiringConditionPtr),
		("Pattern", POINTER(UFiringPattern)),
	]


class  FFlagEvalConditional(Structure):
	_fields_ = [
		("FlagEvalType", c_ubyte),
		("Unknown1", c_ubyte, 0x),
		("FlagDefinition", POINTER(UFlagDefinition)),
		("TimeSeconds", FAttributeInitializationData),
	]


class  FFlagEvalORConnector(Structure):
	_fields_ = [
		("ANDChain", TArray_FFlagEvalConditional),
	]


class  Fs_actorList(Structure):
	_fields_ = [
		("LevelName", FName),
		("Actor", POINTER(AActor)),
	]


class  FSparkResult(Structure):
	_fields_ = [
		("RequestSucceeded", c_bool, 1),
		("", c_ulong, 0),
		("ErrorCode", c_ubyte),
		("Unknown1", c_ubyte, 0x),
		("HttpStatusCode", c_int),
		("ResponseBody", TArray_unsigned_char),
	]


class  FHttpParameters(Structure):
	_fields_ = [
		("ServiceConfiguration", POINTER(USparkServiceConfiguration)),
		("SubService", FString),
		("ContentType", c_ubyte),
		("Unknown1", c_ubyte, 0x),
		("CustomContentType", FString),
		("AcceptsType", c_ubyte),
		("Unknown2", c_ubyte, 0x),
		("CustomAcceptsType", FString),
		("Method", c_ubyte),
		("Unknown3", c_ubyte, 0x),
		("IsResponseDesired", c_bool, 1),
		("NoRetry", c_bool, 1),
		("", c_ulong, 0),
	]


class  FEULAData(Structure):
	_fields_ = [
		("Id", c_int),
		("Version", FString),
		("Title", FString),
		("Text", FString),
		("bLocalSigned", c_bool, 1),
		("bSeen", c_bool, 1),
		("", c_ulong, 0),
	]


class  FEntitlementResult(Structure):
	_fields_ = [
		("Identifier", FName),
		("Payload", FString),
		("Id", c_int),
		("Consumable", c_bool, 1),
		("", c_ulong, 0),
		("Consumed", c_int),
		("ConsumableAmount", c_int),
	]


class  FOfferResult(Structure):
	_fields_ = [
		("TitleEfigs", FString),
		("DescriptionEfigs", FString),
		("Id", c_int),
		("Notified", c_bool, 1),
		("", c_ulong, 0),
		("DateUnlocked", FString),
	]


class  FServiceParameterResult(Structure):
	_fields_ = [
		("Key", FString),
		("Value", FString),
	]


class  FServiceResult(Structure):
	_fields_ = [
		("ServiceName", FName),
		("ConfigurationGroup", FName),
		("Parameters", TArray_FServiceParameterResult),
	]


class  FArchwayResult(Structure):
	_fields_ = [
		("RequestId", FString),
		("GearboxUserToken", FString),
		("GearboxUserEmail", FString),
		("Messages", TArray_FString),
		("Entitlements", TArray_FEntitlementResult),
		("Offers", TArray_FOfferResult),
		("Services", TArray_FServiceResult),
		("InProgress", c_bool, 1),
		("Success", c_bool, 1),
		("DisableSpark", c_bool, 1),
		("TimeOut", c_bool, 1),
		("HasShiftAccount", c_bool, 1),
		("", c_ulong, 0),
		("EmergencyMessage", FString),
		("NeedsSignAgreements", FString),
		("EulaArray", POINTER(UJsonObject)),
		("SupportId", FString),
	]


class  FNodeData(Structure):
	_fields_ = [
		("Node", POINTER(AGearboxAIMoveNode)),
		("Weight", c_float),
	]


class  FSMBehavior(Structure):
	_fields_ = [
		("PlayServer", c_bool, 1),
		("PlayClient", c_bool, 1),
		("PlayLocal", c_bool, 1),
		("", c_ulong, 0),
		("Behaviors", TArray_UBehaviorBasePtr),
	]


class  FSMNotify(Structure):
	_fields_ = [
		("PlayServer", c_bool, 1),
		("PlayClient", c_bool, 1),
		("PlayLocal", c_bool, 1),
		("", c_ulong, 0),
		("Behaviors", TArray_UBehaviorBasePtr),
		("Time", c_float),
	]


class  FTimedAnimBehaviorEvent(Structure):
	_fields_ = [
		("EventName", FName),
		("Time", c_float),
		("bServerOnly", c_bool, 1),
		("", c_ulong, 0),
	]


class  FCoverSpotInfo(Structure):
	_fields_ = [
		("TheCoverActor", POINTER(AActor)),
		("CoverSlotIndex", c_int),
		("CoverSpotWorldLocation", FVector),
		("CoverHeight", c_ubyte),
		("ExtendedInfo1", c_ubyte),
		("ExtendedInfo2", c_ubyte),
		("ExtendedInfo3", c_ubyte),
	]


class  FGearboxDialogData(Structure):
	_fields_ = [
		("NameTag", POINTER(UGearboxDialogNameTag)),
		("TalkAkEvent", POINTER(UAkEvent)),
		("AkAudioUniqueID", c_int),
		("Pitch", c_float),
	]


class  FGearboxDialogReplicatedData(Structure):
	_fields_ = [
		("Pitch", c_float),
		("TalkAkEvent", POINTER(UAkEvent)),
		("AkAudioUniqueID", c_int),
		("TalkAct", POINTER(UGearboxDialogAct_Talk)),
		("EventTag", POINTER(UGearboxDialogEventTag)),
	]


class  FOutputLinkToStruct(Structure):
	_fields_ = [
		("FromNodeID", c_int),
		("LinkNumber", c_int),
		("ToNodeID", c_int),
	]


class  FDialogEventData(Structure):
	_fields_ = [
		("Tag", POINTER(UGearboxDialogEventTag)),
		("bEnabled", c_bool, 1),
		("", c_ulong, 0),
		("OutputAction", POINTER(UGearboxDialogAction)),
	]


class  FDialogEventInfo(Structure):
	_fields_ = [
		("Event", POINTER(UGearboxDialogEvent)),
		("NodeID", c_int),
	]


class  FTalkActData(Structure):
	_fields_ = [
		("OutputDelay", c_float),
		("TalkData", TArray_FGearboxDialogData),
		("TalkerVariable", POINTER(UGearboxDialogVariable)),
		("OutputAction", POINTER(UGearboxDialogAction)),
		("bInstigatorTalker", c_bool, 1),
		("", c_ulong, 0),
	]


class  FMovieStateData(Structure):
	_fields_ = [
		("State", FName),
		("Mode", c_ubyte),
		("Unknown1", c_ubyte, 0x),
		("Context", FString),
		("ASArgs", TArray_FASValue),
	]


class  FMovieStateStruct(Structure):
	_fields_ = [
		("States", TArray_FName),
		("Flags", TArray_FName),
	]


class  FReplicatedNounAttributeState(Structure):
	_fields_ = [
		("NounName", FName),
		("Value", c_float),
		("bOnlyRelevantToOwner", c_bool, 1),
		("", c_ulong, 0),
	]


class  FNounAttributeState(Structure):
	_fields_ = [
		("NounName", FName),
		("Value", c_float),
		("BaseValue", c_float),
		("ModifierStack", TArray_UAttributeModifierPtr),
		("ReplicationStrategy", c_ubyte),
		("Unknown1", c_ubyte, 0x),
		("IndexInReplicationArray", c_int),
	]


class  FDynamicFlagInstanceData(Structure):
	_fields_ = [
		("DynamicFlag", FFlag),
		("LastEvaluatedExpressionTime", c_float),
	]


class  FEventRecord(Structure):
	_fields_ = [
		("EventDefinition", POINTER(URuleEventDef)),
		("OtherEventParticipantObject", POINTER(UObject)),
	]


class  FRuleSetReference(Structure):
	_fields_ = [
		("ReferenceName", FName),
		("ReferenceRuleSet", POINTER(URuleSet)),
	]


class  FTargetIteratorData(Structure):
	_fields_ = [
		("Iterator", POINTER(UClass)),
		("Weight", c_float),
	]


class  FPathFindData(Structure):
	_fields_ = [
		("Path", FGBXNavMeshPath),
		("FinalDest", FBasedPosition),
		("bFinalDestIsActor", c_bool, 1),
		("", c_ulong, 0),
		("MaxRangeToDest", c_float),
		("AnchorPoly", FGBXNavMeshPolyRef),
		("bCanArriveEarly", c_bool, 1),
		("", c_ulong, 0),
	]


class  FReplicatedSpecialMoveData(Structure):
	_fields_ = [
		("Data", POINTER(UObject)),
		("PlayRateScale", c_float),
		("Duration", c_float),
		("DirtyCounter", c_ubyte),
		("Unknown1", c_ubyte, 0x),
		("SMD", POINTER(USpecialMoveDefinition)),
	]


class  FRuleInfo(Structure):
	_fields_ = [
		("RuleName", FName),
		("RuleNameString", FString),
		("RunningSequence", FString),
		("LatentAction", FString),
		("bIsRunning", c_bool, 1),
		("bHasFinishedCode", c_bool, 1),
		("bIsDisabled", c_bool, 1),
		("bIsContainer", c_bool, 1),
		("", c_ulong, 0),
		("ColorCodedStrings", TArray_FString),
		("ContainerRuleStartNdx", c_int),
		("ContainerRuleNumSubRules", c_int),
	]


class  FIconData(Structure):
	_fields_ = [
		("U", c_float),
		("V", c_float),
		("UL", c_float),
		("VL", c_float),
		("Scale", c_float),
	]


class  FAwarenessInfo(Structure):
	_fields_ = [
		("Location", FVector),
		("Radius", c_float),
		("AwarenessZoneName", FName),
		("IsInfinitelyFarAway", c_bool, 1),
		("", c_ulong, 0),
		("ZoneColor", FColor),
	]


class  FLastVisibleInfo(Structure):
	_fields_ = [
		("LastVisibleLocation", FVector),
		("CurrentLocation", FVector),
	]


class  FDebugExposure(Structure):
	_fields_ = [
		("TargetExposure", c_float),
		("MyExposure", c_float),
		("InWorldLocation", FVector),
		("IsPlayerInfo", c_bool, 1),
		("", c_ulong, 0),
	]


class  FViewConeInfo(Structure):
	_fields_ = [
		("ConeOrigin", FVector),
		("ConeDirection", FVector),
		("ConeAngle", c_float),
		("ConeLength", c_float),
		("ConeColor", FColor),
		("Has360DegreesAwareness", c_bool, 1),
		("", c_ulong, 0),
	]


class  FCoverDebugScoringData(Structure):
	_fields_ = [
		("PriorityName", FName),
		("Score", c_float),
	]


class  FCoverDebugInfo(Structure):
	_fields_ = [
		("CoverRegionName", FName),
		("Score", c_float),
		("Distance", c_float),
		("IsACandidate", c_bool, 1),
		("IsBestCandidate", c_bool, 1),
		("", c_ulong, 0),
		("FailString", FString),
		("LeftEndPoint", FVector),
		("RightEndPoint", FVector),
		("CoverDirection", FVector),
		("ScoringInfo", TArray_FCoverDebugScoringData),
	]


class  FTargetPriorityInfo(Structure):
	_fields_ = [
		("TargetName", FName),
		("ShortName", FString),
		("Value", c_float),
		("BarColor", FColor),
	]


class  FTargetDebugDatum(Structure):
	_fields_ = [
		("bCurrent", c_bool, 1),
		("bIsPlayer", c_bool, 1),
		("", c_ulong, 0),
		("TargetName", FString),
		("TotalPriority", c_float),
		("PriorityData", TArray_FTargetPriorityInfo),
	]


class  FAIHoldDebugData(Structure):
	_fields_ = [
		("HoldName", FName),
		("HoldTag", FString),
	]


class  FGearboxViewShakeInfo(Structure):
	_fields_ = [
		("OffsetMag", FVector),
		("OffsetRate", FVector),
		("OffsetTime", c_float),
		("RotMag", FVector),
		("RotRate", FVector),
		("RotTime", c_float),
		("FOVMag", c_float),
		("FOVRate", c_float),
		("FOVTime", c_float),
	]


class  FStepConfiguration(Structure):
	_fields_ = [
		("FirstAttemptDelay", c_int),
		("BaseRetrySeconds", c_int),
		("RetryMultiplier", c_float),
		("MaxRetryAttempts", c_int),
		("RetryJitter", c_int),
	]


class  FThumbnailRenderData(Structure):
	_fields_ = [
		("Context", FName),
		("RenderTarget", POINTER(UTextureRenderTarget2D)),
		("ResultTexture", POINTER(UTexture)),
		("UpdateType", c_ubyte),
		("Unknown1", c_ubyte, 0x),
		("Mesh", POINTER(UMeshComponent)),
		("TextureSizeX", int),
		("TextureSizeY", int),
		("SizeX", int),
		("SizeY", int),
		("ReferencedTextures", TArray_UTexturePtr),
		("StopStreamTexturesTime", c_float),
	]


class  FThumbnailLightData(Structure):
	_fields_ = [
		("Direction", FRotator),
		("Light", POINTER(ULightComponent)),
	]


class  FGestaltPart(Structure):
	_fields_ = [
		("SkeletalMeshFragment", POINTER(USkeletalMesh)),
		("SkeletalMeshFragmentName", FName),
		("MaterialIndex", c_int),
		("FirstIndex", c_int),
		("NumPrimitives", c_int),
	]


class  FGestaltInfo(Structure):
	_fields_ = [
		("Parts", TArray_FGestaltPart),
	]


class  FGestaltAccessoryNameEntry(Structure):
	_fields_ = [
		("SkeletalMeshFragmentName", FName),
	]


class  FGestaltSocketRemapEntry(Structure):
	_fields_ = [
		("SkeletalMeshFragment", POINTER(USkeletalMesh)),
		("SkeletalMeshFragmentName", FName),
		("OriginalSocketName", FName),
		("MangledSocketName", FName),
	]


class  FGestaltPartBoundsEntry(Structure):
	_fields_ = [
		("SkeletalMeshFragmentName", FName),
		("ReferencePoseBounds", FBoxSphereBounds),
	]


class  FGestaltPartPermutation(Structure):
	_fields_ = [
		("MeshName", FName),
		("GroupName", FName),
		("PartName", FName),
	]


class  FMovieInstanceArray(Structure):
	_fields_ = [
		("Movies", TArray_UGearboxGFxMoviePtr),
		("PoolParent", POINTER(UGearboxGFxMovie)),
	]


class  FGFxMenuLink(Structure):
	_fields_ = [
		("MenuName", FName),
		("Definition", POINTER(UGFxMovieDefinition)),
	]


class  FHUDCoordValue(Structure):
	_fields_ = [
		("Type", c_ubyte),
		("Unknown1", c_ubyte, 0x),
		("Value", c_float),
		("CurrentValue", c_float),
		("bCacheValid", c_bool, 1),
		("", c_ulong, 0),
	]


class  FHUDAnchorPoint(Structure):
	_fields_ = [
		("MoviePoint", c_ubyte),
		("ScreenPoint", c_ubyte),
		("Unknown1", c_ubyte, 0x),
		("Offset", FHUDCoordValue * 2),
	]


class  FGearboxGFxPlayParameters(Structure):
	_fields_ = [
		("Definition", POINTER(UGFxMovieDefinition)),
		("OtherObject", POINTER(UObject)),
		("PlayerOwner", POINTER(APlayerController)),
	]


class  FMovieRangeStateData(Structure):
	_fields_ = [
		("State", FName),
		("Mode", c_ubyte),
		("Unknown1", c_ubyte, 0x),
		("Context", FString),
		("ASArgs", TArray_FASValue),
		("Distance", c_float),
	]


class  FAttributeValuePair(Structure):
	_fields_ = [
		("Key", FName),
		("Value", FAttributeInitializationData),
	]


class  FSpecialMoveValuePair(Structure):
	_fields_ = [
		("Key", FName),
		("Value", POINTER(USpecialMoveDefinition)),
	]


class  FCustomEventReactionData(Structure):
	_fields_ = [
		("EventName", FName),
		("bReplicateEvent", c_bool, 1),
		("", c_ulong, 0),
		("Behaviors", TArray_UBehaviorBasePtr),
	]


class  FCustomEventReactionDataSpecialized(Structure):
	_fields_ = [
		("EventName", FName),
		("bReplicateEvent", c_bool, 1),
		("", c_ulong, 0),
	]


class  FHitTargetRecord(Structure):
	_fields_ = [
		("vecHitLoc", FVector),
		("flDamage", c_float),
		("flHitTime", c_float),
	]


class  FPriorityDebugStruct(Structure):
	_fields_ = [
		("IteratorName", FName),
		("ShortName", FString),
		("PriorityValue", c_float),
		("AutomaticTopPriority", c_bool, 1),
		("", c_ulong, 0),
	]


class  FEncounterLimitState(Structure):
	_fields_ = [
		("NumTotalSpawned", c_int),
		("NumCurrentlyActive", c_int),
	]


class  FEncounterLimitData(Structure):
	_fields_ = [
		("ActorTags", TArray_UPopulationSpawnedActorTagDefinitionPtr),
		("MaxTotalToSpawn", FAttributeInitializationData),
		("MaxActiveAtATime", FAttributeInitializationData),
		("ConstraintType", c_ubyte),
		("Unknown1", c_ubyte, 0x),
		("LimitState", FEncounterLimitState),
	]


class  FEncounterWaveData(Structure):
	_fields_ = [
		("InitialDelay", c_float),
		("PercentToComplete", c_float),
		("EncounterPopulationDef", POINTER(UPopulationDefinition)),
		("MemberOpportunities", TArray_APopulationOpportunityPtr),
		("SpawnLimits", TArray_FEncounterLimitData),
		("WaveComplete", c_bool, 1),
		("AllKilledInWave", c_bool, 1),
		("", c_ulong, 0),
	]


class  FSpawnOption(Structure):
	_fields_ = [
		("Factory", POINTER(UPopulationFactory)),
		("ComputedProbability", c_float),
	]


class  FDestructionParameters(Structure):
	_fields_ = [
		("bActorExemptFromIrrelevancyTests", c_bool, 1),
		("", c_ulong, 0),
	]


class  FSpawnedPopulationActor(Structure):
	_fields_ = [
		("SpawnedActor", POINTER(AActor)),
		("SpawnFactory", POINTER(UPopulationFactory)),
		("FactoryDestructionParams", FDestructionParameters),
		("flLastInRadiusOrVisible", c_float),
		("SpawnCost", c_int),
		("CreationFlags", c_int),
		("Reuse", c_bool, 1),
		("bIsDead", c_bool, 1),
		("bCanSave", c_bool, 1),
		("bShouldRemove", c_bool, 1),
		("", c_ulong, 0),
	]


class  FRemovedPopulationActor(Structure):
	_fields_ = [
		("bReuseActor", c_bool, 1),
		("", c_ulong, 0),
		("CreationFlags", c_int),
		("FactoryPath", FNameBasedObjectPath),
	]


class  FOpportunitySavedState(Structure):
	_fields_ = [
		("SelectedSpawnIdx", c_int),
		("NumTotalActors", c_int),
		("MaxActiveActors", c_ubyte),
		("NumActiveActors", c_ubyte),
		("Unknown1", c_ubyte, 0x),
		("NextSpawnTime", c_float),
	]


class  FOpportunityCleanupParameters(Structure):
	_fields_ = [
		("bCleanupActorsWhenIrrelevant", c_bool, 1),
		("bRequireOpportunityToBeInactive", c_bool, 1),
		("", c_ulong, 0),
		("ActorIrrelvantDistance", c_float),
	]


class  FPopulationOpportunityTracker(Structure):
	_fields_ = [
		("OpportunityOutermostName", FName),
		("OpportunityName", FName),
		("LoadedOpportunity", POINTER(APopulationOpportunity)),
		("SpawnedActors", TArray_FSpawnedPopulationActor),
		("SavedActorsList", FPointer),
		("ActorsRemovedWhileUnloaded", TArray_FRemovedPopulationActor),
		("DynamicOpportunity", c_bool, 1),
		("bHasSavedState", c_bool, 1),
		("", c_ulong, 0),
		("bTotalResetOnLevelLoad", c_ubyte),
		("RespawnStyle", c_ubyte),
		("Unknown1", c_ubyte, 0x),
		("RespawnDelayStartTime", c_float),
		("SavedState", FOpportunitySavedState),
		("OpportunityCleanupParams", FOpportunityCleanupParameters),
	]


class  FPopulationMasterStat(Structure):
	_fields_ = [
		("StatName", FName),
		("StatTime", c_float),
		("StatMaxTime", c_float),
		("StatIterations", c_int),
		("IterationStartTime", c_int),
	]


class  FEncounterWaveTracker(Structure):
	_fields_ = [
		("nWaveIdx", c_int),
		("nLimitStateIdx", c_int),
		("LimitSaveState", FEncounterLimitState),
	]


class  FEncounterTracker(Structure):
	_fields_ = [
		("LoadedEncounter", POINTER(APopulationEncounter)),
		("EncountersLevel", POINTER(ULevelStreaming)),
		("EncounterPath", FNameBasedObjectPath),
		("bNeedsKismetUpdate", c_bool, 1),
		("", c_ulong, 0),
		("EncounterCompletionSaveState", TArray_unsigned_char),
		("EncounterSaveState", TArray_FEncounterWaveTracker),
		("RespawnDelayStartTime", c_float),
	]


class  FPopulationOpportunityStat(Structure):
	_fields_ = [
		("PercentNodeReduction", c_float),
	]


class  FPopulationOpportunitySavedActor(Structure):
	_fields_ = [
		("FactoryPath", FNameBasedObjectPath),
		("TimeActorSaved", c_float),
		("SpawnActorLocation", FVector),
		("SpawnActorRotation", FRotator),
		("CreationFlags", c_int),
		("CustomActorData", POINTER(UObject)),
	]


class  FPopulationOptionAreaPopDefData(Structure):
	_fields_ = [
		("PopulationDef", POINTER(UPopulationDefinition)),
		("MaxTotalActorsFormula", FAttributeInitializationData),
		("MaxTotalActors", c_int),
		("MaxActiveActors", c_int),
		("RespawnDelay", c_float),
		("RespawnDelayAfterDeath", c_float),
	]


class  FPopulationOptionAreaData(Structure):
	_fields_ = [
		("ExpressionDef", POINTER(UExpressionEvaluatorDefinition)),
		("PopulationDefinitions", TArray_FPopulationOptionAreaPopDefData),
	]


class  FPopulationOptionSpawnDefData(Structure):
	_fields_ = [
		("PopulationDefName", FString),
		("NumTotalActors", c_int),
		("NumActiveActors", c_int),
		("NextSpawnTime", c_float),
	]


class  FPopulationAreaOptionSpawnData(Structure):
	_fields_ = [
		("Data", TArray_FPopulationOptionSpawnDefData),
	]


class  FPopulationOptionSpawnData(Structure):
	_fields_ = [
		("PopulationDefName", FString),
		("MaxActiveActors", c_int),
		("NumTotalActors", c_int),
		("NumActiveActors", c_int),
		("NextSpawnTime", c_float),
	]


class  FColumnDataStruct(Structure):
	_fields_ = [
		("HeaderText", FString),
		("Value", c_float),
		("BarColor", FColor),
	]


class  FSavedRandomValue(Structure):
	_fields_ = [
		("ContextName", FName),
		("SavedValue", c_float),
		("ExpirationTime", c_float),
	]


class  FRuleEngineLoadBalanceStruct(Structure):
	_fields_ = [
		("RuleEngine", POINTER(URuleEngine)),
		("TimeSinceLastUpdate", c_float),
		("Priority", c_int),
	]


class  FDebugLoadBalance(Structure):
	_fields_ = [
		("RuleEngine", FName),
		("bIsInQueue", c_bool, 1),
		("", c_ulong, 0),
		("TimeSinceUpdate", c_float),
		("TimeToDoLastUpdate", c_float),
		("Priority", c_int),
	]


class  FRELBManagerStats(Structure):
	_fields_ = [
		("TotalTimeUpdated", c_float),
		("MaxTimeUpdating", c_float),
		("NumUpdated", c_int),
		("AveragePriority", c_int),
		("LowestPriority", c_int),
		("HighestPriority", c_int),
	]


class  FDebugStringData(Structure):
	_fields_ = [
		("DebugStr", FString),
		("StrColor", FColor),
	]


class  FDebugEntryData(Structure):
	_fields_ = [
		("DebugStrs", TArray_FDebugStringData),
	]


class  FSparkOutstandingRequest(Structure):
	_fields_ = [
		("State", c_ubyte),
		("Unknown1", c_ubyte, 0x),
		("SleepUntil", FDouble),
		("WantResponse", c_bool, 1),
		("ScriptCallback", c_bool, 1),
		("", c_ulong, 0),
		("RequestCompleteDelegate", FScriptDelegate),
		("RequestIdentifier", c_int),
		("SparkUpdateCallback", FPointer),
		("HttpRequest", FPointer),
		("RequestBody", FPointer),
		("ResponseBody", FPointer),
		("RetryNumber", c_int),
		("BaseRetryIntervalSeconds", c_int),
		("MaxRetryAttempts", c_int),
		("RetryMultiplier", c_float),
		("RetryJitter", c_int),
		("HttpTimeout", c_int),
		("ReadBufferSize", c_int),
		("Accept", FString),
		("ContentType", FString),
		("Method", c_ubyte),
		("Unknown2", c_ubyte, 0x),
		("URL", FString),
		("RequestStartTime", FDouble),
	]


class  FSparkMicropatch(Structure):
	_fields_ = [
		("ObjectPath", FString),
		("PropertyPath", FString),
		("OriginalValue", FString),
		("NewValue", FString),
		("bApplied", c_bool, 1),
		("", c_ulong, 0),
	]


class  FSMExpressionList(Structure):
	_fields_ = [
		("Expression", POINTER(UExpressionEvaluator)),
		("SMD", POINTER(USpecialMoveDefinition)),
	]


class  FSMRandomPair(Structure):
	_fields_ = [
		("Weight", c_float),
		("SMD", POINTER(USpecialMoveDefinition)),
	]


class  FStateAttributeData(Structure):
	_fields_ = [
		("Key", FName),
		("Attribute", POINTER(UAttributeDefinition)),
	]


class  FWireLinkage(Structure):
	_fields_ = [
		("Offset", FVector),
		("Width", c_float),
		("Slack", c_float),
		("Segments", c_ubyte),
		("Unknown1", c_ubyte, 0x),
		("Link", c_int),
	]


class  FNewsArticle(Structure):
	_fields_ = [
		("Header", FString),
		("Body", FString),
	]
