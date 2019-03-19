from ctypes import *
import BL2SDK


class FAIHoldData(Structure):
    pass


class TArray_FAIHoldData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FAIHoldData)), ("Count", c_int), ("Max", c_int)]


class FAIResourceData(Structure):
    pass


class TArray_FAIResourceData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FAIResourceData)), ("Count", c_int), ("Max", c_int)]


class FAIRange(Structure):
    pass


class FAITreeData(Structure):
    pass


class TArray_FAITreeData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FAITreeData)), ("Count", c_int), ("Max", c_int)]


class FPriorityData(Structure):
    pass


class FFlagDefinitionInitialization(Structure):
    pass


class TArray_FFlagDefinitionInitialization(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FFlagDefinitionInitialization)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FCoverDebugScoringInfo(Structure):
    pass


class TArray_FCoverDebugScoringInfo(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FCoverDebugScoringInfo)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FCoverDebugPriority(Structure):
    pass


class TArray_FCoverDebugPriority(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FCoverDebugPriority)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FValidNameRange(Structure):
    pass


class TArray_FValidNameRange(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FValidNameRange)), ("Count", c_int), ("Max", c_int)]


class FObjectKey(Structure):
    pass


class TArray_FObjectKey(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FObjectKey)), ("Count", c_int), ("Max", c_int)]


class FLevelStateRecord(Structure):
    pass


class TArray_FLevelStateRecord(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FLevelStateRecord)), ("Count", c_int), ("Max", c_int)]


class FVantageSpot(Structure):
    pass


class TArray_FVantageSpot(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FVantageSpot)), ("Count", c_int), ("Max", c_int)]


class FGearboxCoverState(Structure):
    pass


class FGearboxCoverTransition(Structure):
    pass


class FCoverCandidate(Structure):
    pass


class FPopulationActor(Structure):
    pass


class TArray_FPopulationActor(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FPopulationActor)), ("Count", c_int), ("Max", c_int)]


class FLocationInfo(Structure):
    pass


class TArray_FLocationInfo(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FLocationInfo)), ("Count", c_int), ("Max", c_int)]


class FActionSequenceRandomData(Structure):
    pass


class TArray_FActionSequenceRandomData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FActionSequenceRandomData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FSubarrayData(Structure):
    pass


class FBehaviorSequenceActionData2(Structure):
    pass


class TArray_FBehaviorSequenceActionData2(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FBehaviorSequenceActionData2)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FBehaviorVariableValue(Structure):
    pass


class TArray_FBehaviorVariableValue(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FBehaviorVariableValue)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FBehaviorVariableValueUnion_Mirror(Structure):
    pass


class FBehaviorVariableData(Structure):
    pass


class TArray_FBehaviorVariableData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FBehaviorVariableData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FBehaviorEventUserData(Structure):
    pass


class FBehaviorVariableLinkData(Structure):
    pass


class TArray_FBehaviorVariableLinkData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FBehaviorVariableLinkData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FBehaviorActionLinkData(Structure):
    pass


class TArray_FBehaviorActionLinkData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FBehaviorActionLinkData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FBehaviorOutputLinkData(Structure):
    pass


class TArray_FBehaviorOutputLinkData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FBehaviorOutputLinkData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FBehaviorEventData(Structure):
    pass


class TArray_FBehaviorEventData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FBehaviorEventData)), ("Count", c_int), ("Max", c_int)]


class FBehaviorEventData2(Structure):
    pass


class TArray_FBehaviorEventData2(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FBehaviorEventData2)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FBehaviorSequenceActionData(Structure):
    pass


class TArray_FBehaviorSequenceActionData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FBehaviorSequenceActionData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FBehaviorOutputLinkData2(Structure):
    pass


class TArray_FBehaviorOutputLinkData2(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FBehaviorOutputLinkData2)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FBehaviorVariableLinkData2(Structure):
    pass


class TArray_FBehaviorVariableLinkData2(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FBehaviorVariableLinkData2)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FBehaviorSequenceData(Structure):
    pass


class TArray_FBehaviorSequenceData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FBehaviorSequenceData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FDebugListItem(Structure):
    pass


class TArray_FDebugListItem(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FDebugListItem)), ("Count", c_int), ("Max", c_int)]


class FBehaviorConsumerHandle(Structure):
    pass


class FTimeStampedRecord(Structure):
    pass


class FKnowledgeRecordStruct(Structure):
    pass


class TArray_FKnowledgeRecordStruct(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FKnowledgeRecordStruct)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FRuleSetRecord(Structure):
    pass


class TArray_FRuleSetRecord(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FRuleSetRecord)), ("Count", c_int), ("Max", c_int)]


class FRuleRecord(Structure):
    pass


class TArray_FRuleRecord(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FRuleRecord)), ("Count", c_int), ("Max", c_int)]


class FActionSequenceRecord(Structure):
    pass


class TArray_FActionSequenceRecord(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FActionSequenceRecord)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FTargetInfoRecord(Structure):
    pass


class TArray_FTargetInfoRecord(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FTargetInfoRecord)), ("Count", c_int), ("Max", c_int)]


class FAIDefinitionRecord(Structure):
    pass


class TArray_FAIDefinitionRecord(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FAIDefinitionRecord)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FAIResourceRestriction(Structure):
    pass


class TArray_FAIResourceRestriction(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FAIResourceRestriction)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FOutputLink(Structure):
    pass


class TArray_FOutputLink(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FOutputLink)), ("Count", c_int), ("Max", c_int)]


class FVariableLink(Structure):
    pass


class TArray_FVariableLink(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FVariableLink)), ("Count", c_int), ("Max", c_int)]


class FSpecialMoveData(Structure):
    pass


class TArray_FSpecialMoveData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FSpecialMoveData)), ("Count", c_int), ("Max", c_int)]


class FSlotAnimParameters(Structure):
    pass


class TArray_FSlotAnimParameters(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FSlotAnimParameters)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FSpecializedBehaviorEvent(Structure):
    pass


class FBehaviorTimerState(Structure):
    pass


class FTimerEventReactionDataSpecialized(Structure):
    pass


class FTimerBehaviorUserState(Structure):
    pass


class FTimerEventReactionData(Structure):
    pass


class FGbxMessageSimpleMetaData(Structure):
    pass


class FRelativeDirectionData(Structure):
    pass


class FAttachmentLocationData(Structure):
    pass


class TArray_FAttachmentLocationData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FAttachmentLocationData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FProviderRecord(Structure):
    pass


class TArray_FProviderRecord(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FProviderRecord)), ("Count", c_int), ("Max", c_int)]


class FBehaviorExecutionRecord(Structure):
    pass


class FBehaviorThread(Structure):
    pass


class FBehaviorEventState(Structure):
    pass


class FBehaviorVariableState(Structure):
    pass


class FBehaviorSequenceState(Structure):
    pass


class FBehaviorProcess(Structure):
    pass


class FProviderRemovalRequest(Structure):
    pass


class FBehaviorKernelArrayStats(Structure):
    pass


class FBehaviorKernelStats(Structure):
    pass


class FReplicatedBehaviorConsumerState(Structure):
    pass


class FReplicatedBehaviorEvent(Structure):
    pass


class FLinkedBehaviorSequence(Structure):
    pass


class FBehaviorTriggerMessageStruct(Structure):
    pass


class TArray_FBehaviorTriggerMessageStruct(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FBehaviorTriggerMessageStruct)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FExposureCacheStruct(Structure):
    pass


class TArray_FExposureCacheStruct(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FExposureCacheStruct)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FExposureUpdateStruct(Structure):
    pass


class TArray_FExposureUpdateStruct(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FExposureUpdateStruct)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FBucketStruct(Structure):
    pass


class TArray_FBucketStruct(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FBucketStruct)), ("Count", c_int), ("Max", c_int)]


class FPointExposureData(Structure):
    pass


class TArray_FPointExposureData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FPointExposureData)), ("Count", c_int), ("Max", c_int)]


class FFeatherBoneBlendData(Structure):
    pass


class TArray_FFeatherBoneBlendData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FFeatherBoneBlendData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FFiringBehaviorBurstInfo(Structure):
    pass


class FConditionalPattern(Structure):
    pass


class TArray_FConditionalPattern(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FConditionalPattern)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FFlagEvalConditional(Structure):
    pass


class TArray_FFlagEvalConditional(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FFlagEvalConditional)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FFlagEvalORConnector(Structure):
    pass


class TArray_FFlagEvalORConnector(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FFlagEvalORConnector)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class Fs_actorList(Structure):
    pass


class TArray_Fs_actorList(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(Fs_actorList)), ("Count", c_int), ("Max", c_int)]


class FSparkResult(Structure):
    pass


class FHttpParameters(Structure):
    pass


class FEULAData(Structure):
    pass


class TArray_FEULAData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FEULAData)), ("Count", c_int), ("Max", c_int)]


class FEntitlementResult(Structure):
    pass


class TArray_FEntitlementResult(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FEntitlementResult)), ("Count", c_int), ("Max", c_int)]


class FOfferResult(Structure):
    pass


class TArray_FOfferResult(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FOfferResult)), ("Count", c_int), ("Max", c_int)]


class FServiceParameterResult(Structure):
    pass


class TArray_FServiceParameterResult(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FServiceParameterResult)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FServiceResult(Structure):
    pass


class TArray_FServiceResult(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FServiceResult)), ("Count", c_int), ("Max", c_int)]


class FArchwayResult(Structure):
    pass


class FNodeData(Structure):
    pass


class TArray_FNodeData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FNodeData)), ("Count", c_int), ("Max", c_int)]


class FSMBehavior(Structure):
    pass


class TArray_FSMBehavior(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FSMBehavior)), ("Count", c_int), ("Max", c_int)]


class FSMNotify(Structure):
    pass


class TArray_FSMNotify(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FSMNotify)), ("Count", c_int), ("Max", c_int)]


class FTimedAnimBehaviorEvent(Structure):
    pass


class TArray_FTimedAnimBehaviorEvent(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FTimedAnimBehaviorEvent)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FCoverSpotInfo(Structure):
    pass


class FGearboxDialogData(Structure):
    pass


class TArray_FGearboxDialogData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FGearboxDialogData)), ("Count", c_int), ("Max", c_int)]


class FGearboxDialogReplicatedData(Structure):
    pass


class FOutputLinkToStruct(Structure):
    pass


class TArray_FOutputLinkToStruct(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FOutputLinkToStruct)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FDialogEventData(Structure):
    pass


class TArray_FDialogEventData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FDialogEventData)), ("Count", c_int), ("Max", c_int)]


class FDialogEventInfo(Structure):
    pass


class FTalkActData(Structure):
    pass


class TArray_FTalkActData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FTalkActData)), ("Count", c_int), ("Max", c_int)]


class FMovieStateData(Structure):
    pass


class TArray_FMovieStateData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FMovieStateData)), ("Count", c_int), ("Max", c_int)]


class FMovieStateStruct(Structure):
    pass


class FReplicatedNounAttributeState(Structure):
    pass


class FNounAttributeState(Structure):
    pass


class TArray_FNounAttributeState(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FNounAttributeState)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FDynamicFlagInstanceData(Structure):
    pass


class TArray_FDynamicFlagInstanceData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FDynamicFlagInstanceData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FEventRecord(Structure):
    pass


class TArray_FEventRecord(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FEventRecord)), ("Count", c_int), ("Max", c_int)]


class FRuleSetReference(Structure):
    pass


class TArray_FRuleSetReference(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FRuleSetReference)), ("Count", c_int), ("Max", c_int)]


class FTargetIteratorData(Structure):
    pass


class FPathFindData(Structure):
    pass


class FReplicatedSpecialMoveData(Structure):
    pass


class FRuleInfo(Structure):
    pass


class TArray_FRuleInfo(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FRuleInfo)), ("Count", c_int), ("Max", c_int)]


class FIconData(Structure):
    pass


class FAwarenessInfo(Structure):
    pass


class TArray_FAwarenessInfo(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FAwarenessInfo)), ("Count", c_int), ("Max", c_int)]


class FLastVisibleInfo(Structure):
    pass


class TArray_FLastVisibleInfo(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FLastVisibleInfo)), ("Count", c_int), ("Max", c_int)]


class FDebugExposure(Structure):
    pass


class TArray_FDebugExposure(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FDebugExposure)), ("Count", c_int), ("Max", c_int)]


class FViewConeInfo(Structure):
    pass


class TArray_FViewConeInfo(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FViewConeInfo)), ("Count", c_int), ("Max", c_int)]


class FCoverDebugScoringData(Structure):
    pass


class TArray_FCoverDebugScoringData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FCoverDebugScoringData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FCoverDebugInfo(Structure):
    pass


class TArray_FCoverDebugInfo(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FCoverDebugInfo)), ("Count", c_int), ("Max", c_int)]


class FTargetPriorityInfo(Structure):
    pass


class TArray_FTargetPriorityInfo(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FTargetPriorityInfo)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FTargetDebugDatum(Structure):
    pass


class TArray_FTargetDebugDatum(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FTargetDebugDatum)), ("Count", c_int), ("Max", c_int)]


class FAIHoldDebugData(Structure):
    pass


class TArray_FAIHoldDebugData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FAIHoldDebugData)), ("Count", c_int), ("Max", c_int)]


class FGearboxViewShakeInfo(Structure):
    pass


class FStepConfiguration(Structure):
    pass


class FThumbnailRenderData(Structure):
    pass


class TArray_FThumbnailRenderData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FThumbnailRenderData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FThumbnailLightData(Structure):
    pass


class TArray_FThumbnailLightData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FThumbnailLightData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FGestaltPart(Structure):
    pass


class TArray_FGestaltPart(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FGestaltPart)), ("Count", c_int), ("Max", c_int)]


class FGestaltInfo(Structure):
    pass


class TArray_FGestaltInfo(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FGestaltInfo)), ("Count", c_int), ("Max", c_int)]


class FGestaltAccessoryNameEntry(Structure):
    pass


class TArray_FGestaltAccessoryNameEntry(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FGestaltAccessoryNameEntry)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FGestaltSocketRemapEntry(Structure):
    pass


class TArray_FGestaltSocketRemapEntry(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FGestaltSocketRemapEntry)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FGestaltPartBoundsEntry(Structure):
    pass


class TArray_FGestaltPartBoundsEntry(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FGestaltPartBoundsEntry)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FGestaltPartPermutation(Structure):
    pass


class TArray_FGestaltPartPermutation(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FGestaltPartPermutation)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FMovieInstanceArray(Structure):
    pass


class TArray_FMovieInstanceArray(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FMovieInstanceArray)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FGFxMenuLink(Structure):
    pass


class TArray_FGFxMenuLink(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FGFxMenuLink)), ("Count", c_int), ("Max", c_int)]


class FHUDCoordValue(Structure):
    pass


class FHUDAnchorPoint(Structure):
    pass


class TArray_FHUDAnchorPoint(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FHUDAnchorPoint)), ("Count", c_int), ("Max", c_int)]


class FGearboxGFxPlayParameters(Structure):
    pass


class FMovieRangeStateData(Structure):
    pass


class TArray_FMovieRangeStateData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FMovieRangeStateData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FAttributeValuePair(Structure):
    pass


class FSpecialMoveValuePair(Structure):
    pass


class FCustomEventReactionData(Structure):
    pass


class FCustomEventReactionDataSpecialized(Structure):
    pass


class FHitTargetRecord(Structure):
    pass


class TArray_FHitTargetRecord(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FHitTargetRecord)), ("Count", c_int), ("Max", c_int)]


class FPriorityDebugStruct(Structure):
    pass


class TArray_FPriorityDebugStruct(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FPriorityDebugStruct)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FEncounterLimitState(Structure):
    pass


class FEncounterLimitData(Structure):
    pass


class TArray_FEncounterLimitData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FEncounterLimitData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FEncounterWaveData(Structure):
    pass


class TArray_FEncounterWaveData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FEncounterWaveData)), ("Count", c_int), ("Max", c_int)]


class FSpawnOption(Structure):
    pass


class FDestructionParameters(Structure):
    pass


class FSpawnedPopulationActor(Structure):
    pass


class TArray_FSpawnedPopulationActor(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FSpawnedPopulationActor)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FRemovedPopulationActor(Structure):
    pass


class TArray_FRemovedPopulationActor(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FRemovedPopulationActor)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FOpportunitySavedState(Structure):
    pass


class FOpportunityCleanupParameters(Structure):
    pass


class FPopulationOpportunityTracker(Structure):
    pass


class TArray_FPopulationOpportunityTracker(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FPopulationOpportunityTracker)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FPopulationMasterStat(Structure):
    pass


class TArray_FPopulationMasterStat(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FPopulationMasterStat)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FEncounterWaveTracker(Structure):
    pass


class TArray_FEncounterWaveTracker(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FEncounterWaveTracker)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FEncounterTracker(Structure):
    pass


class TArray_FEncounterTracker(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FEncounterTracker)), ("Count", c_int), ("Max", c_int)]


class FPopulationOpportunityStat(Structure):
    pass


class FPopulationOpportunitySavedActor(Structure):
    pass


class FPopulationOptionAreaPopDefData(Structure):
    pass


class TArray_FPopulationOptionAreaPopDefData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FPopulationOptionAreaPopDefData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FPopulationOptionAreaData(Structure):
    pass


class TArray_FPopulationOptionAreaData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FPopulationOptionAreaData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FPopulationOptionSpawnDefData(Structure):
    pass


class TArray_FPopulationOptionSpawnDefData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FPopulationOptionSpawnDefData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FPopulationAreaOptionSpawnData(Structure):
    pass


class TArray_FPopulationAreaOptionSpawnData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FPopulationAreaOptionSpawnData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FPopulationOptionSpawnData(Structure):
    pass


class FColumnDataStruct(Structure):
    pass


class TArray_FColumnDataStruct(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FColumnDataStruct)), ("Count", c_int), ("Max", c_int)]


class FSavedRandomValue(Structure):
    pass


class TArray_FSavedRandomValue(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FSavedRandomValue)), ("Count", c_int), ("Max", c_int)]


class FRuleEngineLoadBalanceStruct(Structure):
    pass


class TArray_FRuleEngineLoadBalanceStruct(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FRuleEngineLoadBalanceStruct)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FDebugLoadBalance(Structure):
    pass


class TArray_FDebugLoadBalance(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FDebugLoadBalance)), ("Count", c_int), ("Max", c_int)]


class FRELBManagerStats(Structure):
    pass


class TArray_FRELBManagerStats(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FRELBManagerStats)), ("Count", c_int), ("Max", c_int)]


class FDebugStringData(Structure):
    pass


class TArray_FDebugStringData(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FDebugStringData)), ("Count", c_int), ("Max", c_int)]


class FDebugEntryData(Structure):
    pass


class FSparkOutstandingRequest(Structure):
    pass


class TArray_FSparkOutstandingRequest(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FSparkOutstandingRequest)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FSparkMicropatch(Structure):
    pass


class FSMExpressionList(Structure):
    pass


class TArray_FSMExpressionList(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FSMExpressionList)), ("Count", c_int), ("Max", c_int)]


class FSMRandomPair(Structure):
    pass


class TArray_FSMRandomPair(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FSMRandomPair)), ("Count", c_int), ("Max", c_int)]


class FStateAttributeData(Structure):
    pass


class TArray_FStateAttributeData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FStateAttributeData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FWireLinkage(Structure):
    pass


class TArray_FWireLinkage(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FWireLinkage)), ("Count", c_int), ("Max", c_int)]


class FNewsArticle(Structure):
    pass


class TArray_FNewsArticle(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FNewsArticle)), ("Count", c_int), ("Max", c_int)]


from ..TArrayTypes import *
from ..structs.Base import *
from ..structs.Core import *
from ..structs.Engine import *
from ..structs.GameFramework import *
from ..structs.GFxUI import *

from ..classes.Base import *
from ..classes.Core import *
from ..classes.Engine import *
from ..classes.GameFramework import *
from ..classes.GFxUI import *
from ..classes.GearboxFramework import *


def init():

    FAIHoldData._fields_ = [("HoldName", FName), ("HoldTag", POINTER(UObject))]

    FAIResourceData._fields_ = [
        ("Resource", POINTER(UAIResource)),
        ("CanRun", TArray_FPointer),
        ("Running", TArray_FPointer),
    ]

    FAIRange._fields_ = [("MinVal", c_float), ("MaxVal", c_float)]

    FAITreeData._fields_ = [
        ("AI", FScriptInterface),
        ("Type", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Children", TArray_int),
        ("Resource", POINTER(UAIResource)),
        ("CanRunIf", POINTER(UExpressionEvaluator)),
        ("TimedStart", FAIRange),
        ("TimedReset", FAIRange),
        ("TimedFail", FAIRange),
        ("bStopIfCannotRun", c_bool, 1),
        ("ActiveChild", c_int),
        ("NextActiveChild", c_int),
        ("LastFailTime", c_float),
        ("NextTimedRun", c_float),
        ("NextTimedFail", c_float),
        ("NextTimedResource", c_float),
        ("bHoldingResource", c_bool, 1),
        ("Action", POINTER(UActionSequence)),
        ("LoopCount", c_int),
        ("LastRandomChild", c_int),
        ("Weights", TArray_float),
        ("LoopCountMax", TArray_int),
        ("bInterrupt", c_bool, 1),
        ("Conditions", TArray_UExpressionEvaluatorPtr),
        ("NextSequentialChild", c_int),
        ("PosX", c_int),
        ("PosY", c_int),
        ("NodeName", FString),
        ("ActionFailName", FName),
        ("FailReason", c_ubyte),
    ]

    FPriorityData._fields_ = [
        ("Description", FString),
        ("Condition", POINTER(UExpressionEvaluator)),
    ]

    FFlagDefinitionInitialization._fields_ = [
        ("FlagToSet", POINTER(UFlagDefinition)),
        ("ChanceTrue", FAttributeInitializationData),
        ("ProbabilityTrue", c_float),
        ("Duration", FAttributeInitializationData),
    ]

    FCoverDebugScoringInfo._fields_ = [("PriorityName", FName), ("Score", c_float)]

    FCoverDebugPriority._fields_ = [
        ("Score", c_float),
        ("Distance", c_float),
        ("IsACandidate", c_bool, 1),
        ("IsBestCandidate", c_bool, 1),
        ("TheCoverActor", POINTER(AActor)),
        ("SlotNdx", c_int),
        ("FailString", FString),
        ("ScoringInfo", TArray_FCoverDebugScoringInfo),
    ]

    FValidNameRange._fields_ = [("Start", c_int), ("End", c_int)]

    FObjectKey._fields_ = [("ObjectName", FName), ("AdditionalKey", FName)]

    FLevelStateRecord._fields_ = [
        ("LevelName", FName),
        ("LevelLoaded", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("ObjectKeys", TArray_FObjectKey),
    ]

    FVantageSpot._fields_ = [("Location", FVector), ("VantageType", c_ubyte)]

    FGearboxCoverState._fields_ = [
        ("TheCoverActor", POINTER(AActor)),
        ("SlotIndex", c_int),
        ("State", c_ubyte),
        ("ExtendedState", c_ubyte),
        ("MetaData", c_ubyte),
        ("ExtendedMetaData", c_ubyte),
    ]

    FGearboxCoverTransition._fields_ = [
        ("Action", c_ubyte),
        ("ExtendedAction", c_ubyte),
        ("Padding", c_ubyte * 2),
    ]

    FCoverCandidate._fields_ = [
        ("TheCoverActor", POINTER(AActor)),
        ("SlotNdx", c_int),
        ("Score", c_float),
    ]

    FPopulationActor._fields_ = [
        ("SpawnFactory", POINTER(UPopulationFactory)),
        ("Probability", FAttributeInitializationData),
        ("MaxActiveAtOneTime", FAttributeInitializationData),
        ("TestVisibility", c_bool, 1),
        ("TestFOV", c_bool, 1),
    ]

    FLocationInfo._fields_ = [("Location", FVector), ("IsPlayerInfo", c_bool, 1)]

    FActionSequenceRandomData._fields_ = [
        ("ProbabilityData", FAttributeInitializationData),
        ("ActionToRunWhenTrue", POINTER(UActionSequence)),
    ]

    FSubarrayData._fields_ = [("ArrayIndexAndLength", c_int)]

    FBehaviorSequenceActionData2._fields_ = [
        ("Behavior", POINTER(UBehaviorBase)),
        ("LinkedVariables", FSubarrayData),
        ("OutputLinks", FSubarrayData),
    ]

    FBehaviorVariableValue._fields_ = [
        ("IntValue", c_int),
        ("FloatValue", c_float),
        ("VectorValue", FVector),
        ("ObjectValue", POINTER(UObject)),
        ("VariableType", c_ubyte),
    ]

    FBehaviorVariableValueUnion_Mirror._fields_ = [("Data", FPointer)]

    FBehaviorVariableData._fields_ = [
        ("Name", FName),
        ("Type", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Value", FBehaviorVariableValueUnion_Mirror),
    ]

    FBehaviorEventUserData._fields_ = [
        ("EventName", FName),
        ("bEnabled", c_bool, 1),
        ("bReplicate", c_bool, 1),
        ("MaxTriggerCount", c_int),
        ("ReTriggerDelay", c_float),
        ("FilterObject", POINTER(UBehaviorEventFilterBase)),
    ]

    FBehaviorVariableLinkData._fields_ = [
        ("PropertyName", FName),
        ("ConnectionIndex", c_int),
        ("LinkedVariables", TArray_int),
        ("CachedProperty", POINTER(UProperty)),
    ]

    FBehaviorActionLinkData._fields_ = [
        ("LinkedBehavior", c_int),
        ("ActivateDelay", c_float),
    ]

    FBehaviorOutputLinkData._fields_ = [
        ("LinkId", c_int),
        ("LinkedActions", TArray_FBehaviorActionLinkData),
    ]

    FBehaviorEventData._fields_ = [
        ("UserData", FBehaviorEventUserData),
        ("OutputVariables", TArray_FBehaviorVariableLinkData),
        ("OutputLinks", TArray_FBehaviorOutputLinkData),
    ]

    FBehaviorEventData2._fields_ = [
        ("UserData", FBehaviorEventUserData),
        ("OutputVariables", FSubarrayData),
        ("OutputLinks", FSubarrayData),
    ]

    FBehaviorSequenceActionData._fields_ = [
        ("Behavior", POINTER(UBehaviorBase)),
        ("ContextVariables", FBehaviorVariableLinkData),
        ("LinkedVariables", TArray_FBehaviorVariableLinkData),
        ("OutputVariables", TArray_FBehaviorVariableLinkData),
        ("OutputLinks", TArray_FBehaviorOutputLinkData),
    ]

    FBehaviorOutputLinkData2._fields_ = [
        ("LinkIdAndLinkedBehavior", c_int),
        ("ActivateDelay", c_float),
    ]

    FBehaviorVariableLinkData2._fields_ = [
        ("PropertyName", FName),
        ("VariableLinkType", c_ubyte),
        ("ConnectionIndex", c_ubyte),
        ("Unknown1", c_ubyte * 0x2),
        ("LinkedVariables", FSubarrayData),
        ("CachedProperty", POINTER(UProperty)),
    ]

    FBehaviorSequenceData._fields_ = [
        ("BehaviorSequenceName", FName),
        ("bEnabledOnSpawn", c_bool, 1),
        ("bSequenceEnabledMutex", c_bool, 1),
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

    FDebugListItem._fields_ = [
        ("DisplayType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
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

    FBehaviorConsumerHandle._fields_ = [("PID", c_int)]

    FTimeStampedRecord._fields_ = [("DeathTimeStamp", c_float)]

    FKnowledgeRecordStruct._fields_ = [
        ("DeathTimeStamp", c_float),
        ("TheObj", POINTER(UKnowledgeRecord)),
        ("InUse", c_ubyte),
    ]

    FRuleSetRecord._fields_ = [
        ("DeathTimeStamp", c_float),
        ("TheObj", POINTER(URuleSet)),
        ("InUse", c_ubyte),
    ]

    FRuleRecord._fields_ = [
        ("DeathTimeStamp", c_float),
        ("TheObj", POINTER(URule)),
        ("InUse", c_ubyte),
    ]

    FActionSequenceRecord._fields_ = [
        ("DeathTimeStamp", c_float),
        ("TheObj", POINTER(UActionSequence)),
        ("InUse", c_ubyte),
    ]

    FTargetInfoRecord._fields_ = [
        ("DeathTimeStamp", c_float),
        ("TheObj", POINTER(UMindTargetInfo)),
        ("InUse", c_ubyte),
    ]

    FAIDefinitionRecord._fields_ = [
        ("DeathTimeStamp", c_float),
        ("TheObj", POINTER(UAIDefinition)),
        ("InUse", c_ubyte),
    ]

    FAIResourceRestriction._fields_ = [
        ("MaxUsers", c_int),
        ("MinUsers", c_int),
        ("Resource", POINTER(UAIResource)),
    ]

    FOutputLink._fields_ = [("Links", TArray_UGearboxEditorNodePtr)]

    FVariableLink._fields_ = [("Links", TArray_UGearboxEditorNodePtr)]

    FSpecialMoveData._fields_ = [
        ("Data", POINTER(UObject)),
        ("PlayRateScale", c_float),
        ("Duration", c_float),
        ("CallbackName", FName),
        ("CallbackObject", POINTER(UObject)),
        ("SMD", POINTER(USpecialMoveDefinition)),
    ]

    FSlotAnimParameters._fields_ = [
        ("SMData", FSpecialMoveData),
        ("CustomAnimDef", POINTER(UGearboxAnimDefinition)),
        ("CustomAnimName", FName),
        ("PerBoneWeights", TArray_float),
        ("TransformReqBone", TArray_unsigned_char),
        ("TransformReqBoneIndex", c_int),
    ]

    FSpecializedBehaviorEvent._fields_ = [("EventName", FName)]

    FBehaviorTimerState._fields_ = [
        ("bIsRunning", c_bool, 1),
        ("Delay", c_float),
        ("EventTime", c_float),
    ]

    FTimerEventReactionDataSpecialized._fields_ = [("EventName", FName)]

    FTimerBehaviorUserState._fields_ = [("Timers", FBehaviorTimerState * 3)]

    FTimerEventReactionData._fields_ = [
        ("EventType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Behaviors", TArray_UBehaviorBasePtr),
    ]

    FGbxMessageSimpleMetaData._fields_ = [
        ("FloatData", c_float),
        ("IntData", c_int),
        ("NameData", FName),
        ("VectorData", FVector),
    ]

    FRelativeDirectionData._fields_ = [
        ("Direction", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("ConeAroundDirection", FAttributeInitializationData),
        ("AdditionalRotation", FRotator),
    ]

    FAttachmentLocationData._fields_ = [
        ("Location", FVector),
        ("AttachmentBase", FScriptInterface),
        ("AttachmentName", FName),
    ]

    FProviderRecord._fields_ = [
        ("ProviderDefinition", POINTER(UBehaviorProviderDefinition)),
        ("ReferenceCount", c_int),
    ]

    FBehaviorExecutionRecord._fields_ = [
        ("OwningProcessID", c_int),
        ("ProvidersIndex", c_int),
        ("SequencesDataIndex", c_int),
        ("BehaviorNumber", c_int),
        ("BehaviorName", FName),
        ("TimeOfExecution", c_float),
    ]

    FBehaviorThread._fields_ = [
        ("ThreadState", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("OwningProcessID", c_int),
        ("ThreadSequenceState", FPointer),
        ("NextBehavior", c_int),
        ("ActivateTime", c_float),
        ("BehaviorStartedTime", c_float),
    ]

    FBehaviorEventState._fields_ = [
        ("TriggerCount", c_int),
        ("LastTriggerTime", c_float),
        ("FilterObject", POINTER(UBehaviorEventFilterBase)),
    ]

    FBehaviorVariableState._fields_ = [
        ("Name", FName),
        ("Type", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Value", FBehaviorVariableValueUnion_Mirror),
    ]

    FBehaviorSequenceState._fields_ = [
        ("bIsEnabled", c_bool, 1),
        ("ProvidersIndex", c_int),
        ("SequencesDataIndex", c_int),
        ("SequenceEnabledBitIndex", c_int),
        ("EventStateHead", FPointer),
        ("VariableStateHead", FPointer),
    ]

    FBehaviorProcess._fields_ = [
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

    FProviderRemovalRequest._fields_ = [
        ("ConsumerHandle", FBehaviorConsumerHandle),
        ("ProvidersIndex", c_int),
    ]

    FBehaviorKernelArrayStats._fields_ = [
        ("UsedSlots", c_int),
        ("UnusedSlots", c_int),
        ("PeakUsage", c_int),
        ("ContainerSlack", c_int),
    ]

    FBehaviorKernelStats._fields_ = [
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

    FReplicatedBehaviorConsumerState._fields_ = [
        ("bIsProcessSuspended", c_bool, 1),
        ("BehaviorSequenceEnabledFlags", c_int),
        ("bNeedToApplyThisState", c_bool, 1),
    ]

    FReplicatedBehaviorEvent._fields_ = [
        ("SequenceIndex", c_ubyte),
        ("EventCounter", c_ubyte),
        ("EventIndex", c_ubyte),
        ("EventOutput", c_ubyte),
    ]

    FLinkedBehaviorSequence._fields_ = [
        ("ConsumerHandle", FBehaviorConsumerHandle),
        ("SequenceState", FPointer),
    ]

    FBehaviorTriggerMessageStruct._fields_ = [
        ("MessageDefinition", POINTER(UGbxMessageDefinition)),
        ("Instigator", c_ubyte),
        ("OtherEventParticipant", c_ubyte),
        ("Unknown1", c_ubyte * 0x2),
        ("Behaviors", TArray_UBehaviorBasePtr),
    ]

    FExposureCacheStruct._fields_ = [
        ("FromPawnName", FName),
        ("ToActorName", FName),
        ("TimeCached", c_float),
        ("NextUpdateTime", c_float),
        ("Exposure", c_float),
        ("FromLoc", FVector),
        ("ToLoc", FVector),
        ("Vantage", TArray_FVantageSpot),
    ]

    FExposureUpdateStruct._fields_ = [
        ("FromPawn", POINTER(AGearboxPawn)),
        ("ToActor", POINTER(AActor)),
        ("TimeRequested", c_float),
        ("Exposure", c_float),
        ("Vantage", TArray_FVantageSpot),
        ("ShouldRemove", c_ubyte),
    ]

    FBucketStruct._fields_ = [
        ("NdxToStartCheckFrom", c_int),
        ("DistanceSquared", c_float),
        ("MaxLineChecksPerFrame", c_int),
        ("MaxIterationsPerFrame", c_int),
        ("Exposures", TArray_FExposureUpdateStruct),
    ]

    FPointExposureData._fields_ = [
        ("Looker", POINTER(AActor)),
        ("Point", FVector),
        ("Point2", FVector),
        ("Exposure", c_float),
        ("LastCheckTime", c_float),
        ("LastUpdateTime", c_float),
    ]

    FFeatherBoneBlendData._fields_ = [
        ("StartBoneName", FName),
        ("BlendWeight", c_float),
    ]

    FFiringBehaviorBurstInfo._fields_ = [
        ("Instigator", POINTER(AGearboxPawn)),
        ("InstigatorWeapon", POINTER(AWeapon)),
        ("TargetActor", POINTER(AActor)),
        ("NumShots", c_int),
        ("RefireRate", c_float),
        ("TargetInfo", POINTER(UMindTargetInfo)),
        ("FireType", c_ubyte),
    ]

    FConditionalPattern._fields_ = [
        ("Conditions", TArray_UFiringConditionPtr),
        ("Pattern", POINTER(UFiringPattern)),
    ]

    FFlagEvalConditional._fields_ = [
        ("FlagEvalType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("FlagDefinition", POINTER(UFlagDefinition)),
        ("TimeSeconds", FAttributeInitializationData),
    ]

    FFlagEvalORConnector._fields_ = [("ANDChain", TArray_FFlagEvalConditional)]

    Fs_actorList._fields_ = [("LevelName", FName), ("Actor", POINTER(AActor))]

    FSparkResult._fields_ = [
        ("RequestSucceeded", c_bool, 1),
        ("ErrorCode", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("HttpStatusCode", c_int),
        ("ResponseBody", TArray_unsigned_char),
    ]

    FHttpParameters._fields_ = [
        ("ServiceConfiguration", POINTER(USparkServiceConfiguration)),
        ("SubService", FString),
        ("ContentType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("CustomContentType", FString),
        ("AcceptsType", c_ubyte),
        ("Unknown2", c_ubyte * 0x3),
        ("CustomAcceptsType", FString),
        ("Method", c_ubyte),
        ("Unknown3", c_ubyte * 0x3),
        ("IsResponseDesired", c_bool, 1),
        ("NoRetry", c_bool, 1),
    ]

    FEULAData._fields_ = [
        ("Id", c_int),
        ("Version", FString),
        ("Title", FString),
        ("Text", FString),
        ("bLocalSigned", c_bool, 1),
        ("bSeen", c_bool, 1),
    ]

    FEntitlementResult._fields_ = [
        ("Identifier", FName),
        ("Payload", FString),
        ("Id", c_int),
        ("Consumable", c_bool, 1),
        ("Consumed", c_int),
        ("ConsumableAmount", c_int),
    ]

    FOfferResult._fields_ = [
        ("TitleEfigs", FString),
        ("DescriptionEfigs", FString),
        ("Id", c_int),
        ("Notified", c_bool, 1),
        ("DateUnlocked", FString),
    ]

    FServiceParameterResult._fields_ = [("Key", FString), ("Value", FString)]

    FServiceResult._fields_ = [
        ("ServiceName", FName),
        ("ConfigurationGroup", FName),
        ("Parameters", TArray_FServiceParameterResult),
    ]

    FArchwayResult._fields_ = [
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
        ("EmergencyMessage", FString),
        ("NeedsSignAgreements", FString),
        ("EulaArray", POINTER(UJsonObject)),
        ("SupportId", FString),
    ]

    FNodeData._fields_ = [("Node", POINTER(AGearboxAIMoveNode)), ("Weight", c_float)]

    FSMBehavior._fields_ = [
        ("PlayServer", c_bool, 1),
        ("PlayClient", c_bool, 1),
        ("PlayLocal", c_bool, 1),
        ("Behaviors", TArray_UBehaviorBasePtr),
    ]

    FSMNotify._fields_ = [
        ("PlayServer", c_bool, 1),
        ("PlayClient", c_bool, 1),
        ("PlayLocal", c_bool, 1),
        ("Behaviors", TArray_UBehaviorBasePtr),
        ("Time", c_float),
    ]

    FTimedAnimBehaviorEvent._fields_ = [
        ("EventName", FName),
        ("Time", c_float),
        ("bServerOnly", c_bool, 1),
    ]

    FCoverSpotInfo._fields_ = [
        ("TheCoverActor", POINTER(AActor)),
        ("CoverSlotIndex", c_int),
        ("CoverSpotWorldLocation", FVector),
        ("CoverHeight", c_ubyte),
        ("ExtendedInfo1", c_ubyte),
        ("ExtendedInfo2", c_ubyte),
        ("ExtendedInfo3", c_ubyte),
    ]

    FGearboxDialogData._fields_ = [
        ("NameTag", POINTER(UGearboxDialogNameTag)),
        ("TalkAkEvent", POINTER(UAkEvent)),
        ("AkAudioUniqueID", c_int),
        ("Pitch", c_float),
    ]

    FGearboxDialogReplicatedData._fields_ = [
        ("Pitch", c_float),
        ("TalkAkEvent", POINTER(UAkEvent)),
        ("AkAudioUniqueID", c_int),
        ("TalkAct", POINTER(UGearboxDialogAct_Talk)),
        ("EventTag", POINTER(UGearboxDialogEventTag)),
    ]

    FOutputLinkToStruct._fields_ = [
        ("FromNodeID", c_int),
        ("LinkNumber", c_int),
        ("ToNodeID", c_int),
    ]

    FDialogEventData._fields_ = [
        ("Tag", POINTER(UGearboxDialogEventTag)),
        ("bEnabled", c_bool, 1),
        ("OutputAction", POINTER(UGearboxDialogAction)),
    ]

    FDialogEventInfo._fields_ = [
        ("Event", POINTER(UGearboxDialogEvent)),
        ("NodeID", c_int),
    ]

    FTalkActData._fields_ = [
        ("OutputDelay", c_float),
        ("TalkData", TArray_FGearboxDialogData),
        ("TalkerVariable", POINTER(UGearboxDialogVariable)),
        ("OutputAction", POINTER(UGearboxDialogAction)),
        ("bInstigatorTalker", c_bool, 1),
    ]

    FMovieStateData._fields_ = [
        ("State", FName),
        ("Mode", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Context", FString),
        ("ASArgs", TArray_FASValue),
    ]

    FMovieStateStruct._fields_ = [("States", TArray_FName), ("Flags", TArray_FName)]

    FReplicatedNounAttributeState._fields_ = [
        ("NounName", FName),
        ("Value", c_float),
        ("bOnlyRelevantToOwner", c_bool, 1),
    ]

    FNounAttributeState._fields_ = [
        ("NounName", FName),
        ("Value", c_float),
        ("BaseValue", c_float),
        ("ModifierStack", TArray_UAttributeModifierPtr),
        ("ReplicationStrategy", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("IndexInReplicationArray", c_int),
    ]

    FDynamicFlagInstanceData._fields_ = [
        ("DynamicFlag", FFlag),
        ("LastEvaluatedExpressionTime", c_float),
    ]

    FEventRecord._fields_ = [
        ("EventDefinition", POINTER(URuleEventDef)),
        ("OtherEventParticipantObject", POINTER(UObject)),
    ]

    FRuleSetReference._fields_ = [
        ("ReferenceName", FName),
        ("ReferenceRuleSet", POINTER(URuleSet)),
    ]

    FTargetIteratorData._fields_ = [("Iterator", POINTER(UClass)), ("Weight", c_float)]

    FPathFindData._fields_ = [
        ("Path", FGBXNavMeshPath),
        ("FinalDest", FBasedPosition),
        ("bFinalDestIsActor", c_bool, 1),
        ("MaxRangeToDest", c_float),
        ("AnchorPoly", FGBXNavMeshPolyRef),
        ("bCanArriveEarly", c_bool, 1),
    ]

    FReplicatedSpecialMoveData._fields_ = [
        ("Data", POINTER(UObject)),
        ("PlayRateScale", c_float),
        ("Duration", c_float),
        ("DirtyCounter", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("SMD", POINTER(USpecialMoveDefinition)),
    ]

    FRuleInfo._fields_ = [
        ("RuleName", FName),
        ("RuleNameString", FString),
        ("RunningSequence", FString),
        ("LatentAction", FString),
        ("bIsRunning", c_bool, 1),
        ("bHasFinishedCode", c_bool, 1),
        ("bIsDisabled", c_bool, 1),
        ("bIsContainer", c_bool, 1),
        ("ColorCodedStrings", TArray_FString),
        ("ContainerRuleStartNdx", c_int),
        ("ContainerRuleNumSubRules", c_int),
    ]

    FIconData._fields_ = [
        ("U", c_float),
        ("V", c_float),
        ("UL", c_float),
        ("VL", c_float),
        ("Scale", c_float),
    ]

    FAwarenessInfo._fields_ = [
        ("Location", FVector),
        ("Radius", c_float),
        ("AwarenessZoneName", FName),
        ("IsInfinitelyFarAway", c_bool, 1),
        ("ZoneColor", FColor),
    ]

    FLastVisibleInfo._fields_ = [
        ("LastVisibleLocation", FVector),
        ("CurrentLocation", FVector),
    ]

    FDebugExposure._fields_ = [
        ("TargetExposure", c_float),
        ("MyExposure", c_float),
        ("InWorldLocation", FVector),
        ("IsPlayerInfo", c_bool, 1),
    ]

    FViewConeInfo._fields_ = [
        ("ConeOrigin", FVector),
        ("ConeDirection", FVector),
        ("ConeAngle", c_float),
        ("ConeLength", c_float),
        ("ConeColor", FColor),
        ("Has360DegreesAwareness", c_bool, 1),
    ]

    FCoverDebugScoringData._fields_ = [("PriorityName", FName), ("Score", c_float)]

    FCoverDebugInfo._fields_ = [
        ("CoverRegionName", FName),
        ("Score", c_float),
        ("Distance", c_float),
        ("IsACandidate", c_bool, 1),
        ("IsBestCandidate", c_bool, 1),
        ("FailString", FString),
        ("LeftEndPoint", FVector),
        ("RightEndPoint", FVector),
        ("CoverDirection", FVector),
        ("ScoringInfo", TArray_FCoverDebugScoringData),
    ]

    FTargetPriorityInfo._fields_ = [
        ("TargetName", FName),
        ("ShortName", FString),
        ("Value", c_float),
        ("BarColor", FColor),
    ]

    FTargetDebugDatum._fields_ = [
        ("bCurrent", c_bool, 1),
        ("bIsPlayer", c_bool, 1),
        ("TargetName", FString),
        ("TotalPriority", c_float),
        ("PriorityData", TArray_FTargetPriorityInfo),
    ]

    FAIHoldDebugData._fields_ = [("HoldName", FName), ("HoldTag", FString)]

    FGearboxViewShakeInfo._fields_ = [
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

    FStepConfiguration._fields_ = [
        ("FirstAttemptDelay", c_int),
        ("BaseRetrySeconds", c_int),
        ("RetryMultiplier", c_float),
        ("MaxRetryAttempts", c_int),
        ("RetryJitter", c_int),
    ]

    FThumbnailRenderData._fields_ = [
        ("Context", FName),
        ("RenderTarget", POINTER(UTextureRenderTarget2D)),
        ("ResultTexture", POINTER(UTexture)),
        ("UpdateType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Mesh", POINTER(UMeshComponent)),
        ("TextureSizeX", c_int),
        ("TextureSizeY", c_int),
        ("SizeX", c_int),
        ("SizeY", c_int),
        ("ReferencedTextures", TArray_UTexturePtr),
        ("StopStreamTexturesTime", c_float),
    ]

    FThumbnailLightData._fields_ = [
        ("Direction", FRotator),
        ("Light", POINTER(ULightComponent)),
    ]

    FGestaltPart._fields_ = [
        ("SkeletalMeshFragment", POINTER(USkeletalMesh)),
        ("SkeletalMeshFragmentName", FName),
        ("MaterialIndex", c_int),
        ("FirstIndex", c_int),
        ("NumPrimitives", c_int),
    ]

    FGestaltInfo._fields_ = [("Parts", TArray_FGestaltPart)]

    FGestaltAccessoryNameEntry._fields_ = [("SkeletalMeshFragmentName", FName)]

    FGestaltSocketRemapEntry._fields_ = [
        ("SkeletalMeshFragment", POINTER(USkeletalMesh)),
        ("SkeletalMeshFragmentName", FName),
        ("OriginalSocketName", FName),
        ("MangledSocketName", FName),
    ]

    FGestaltPartBoundsEntry._fields_ = [
        ("SkeletalMeshFragmentName", FName),
        ("ReferencePoseBounds", FBoxSphereBounds),
    ]

    FGestaltPartPermutation._fields_ = [
        ("MeshName", FName),
        ("GroupName", FName),
        ("PartName", FName),
    ]

    FMovieInstanceArray._fields_ = [
        ("Movies", TArray_UGearboxGFxMoviePtr),
        ("PoolParent", POINTER(UGearboxGFxMovie)),
    ]

    FGFxMenuLink._fields_ = [
        ("MenuName", FName),
        ("Definition", POINTER(UGFxMovieDefinition)),
    ]

    FHUDCoordValue._fields_ = [
        ("Type", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Value", c_float),
        ("CurrentValue", c_float),
        ("bCacheValid", c_bool, 1),
    ]

    FHUDAnchorPoint._fields_ = [
        ("MoviePoint", c_ubyte),
        ("ScreenPoint", c_ubyte),
        ("Unknown1", c_ubyte * 0x2),
        ("Offset", FHUDCoordValue * 2),
    ]

    FGearboxGFxPlayParameters._fields_ = [
        ("Definition", POINTER(UGFxMovieDefinition)),
        ("OtherObject", POINTER(UObject)),
        ("PlayerOwner", POINTER(APlayerController)),
    ]

    FMovieRangeStateData._fields_ = [
        ("State", FName),
        ("Mode", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Context", FString),
        ("ASArgs", TArray_FASValue),
        ("Distance", c_float),
    ]

    FAttributeValuePair._fields_ = [
        ("Key", FName),
        ("Value", FAttributeInitializationData),
    ]

    FSpecialMoveValuePair._fields_ = [
        ("Key", FName),
        ("Value", POINTER(USpecialMoveDefinition)),
    ]

    FCustomEventReactionData._fields_ = [
        ("EventName", FName),
        ("bReplicateEvent", c_bool, 1),
        ("Behaviors", TArray_UBehaviorBasePtr),
    ]

    FCustomEventReactionDataSpecialized._fields_ = [
        ("EventName", FName),
        ("bReplicateEvent", c_bool, 1),
    ]

    FHitTargetRecord._fields_ = [
        ("vecHitLoc", FVector),
        ("flDamage", c_float),
        ("flHitTime", c_float),
    ]

    FPriorityDebugStruct._fields_ = [
        ("IteratorName", FName),
        ("ShortName", FString),
        ("PriorityValue", c_float),
        ("AutomaticTopPriority", c_bool, 1),
    ]

    FEncounterLimitState._fields_ = [
        ("NumTotalSpawned", c_int),
        ("NumCurrentlyActive", c_int),
    ]

    FEncounterLimitData._fields_ = [
        ("ActorTags", TArray_UPopulationSpawnedActorTagDefinitionPtr),
        ("MaxTotalToSpawn", FAttributeInitializationData),
        ("MaxActiveAtATime", FAttributeInitializationData),
        ("ConstraintType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("LimitState", FEncounterLimitState),
    ]

    FEncounterWaveData._fields_ = [
        ("InitialDelay", c_float),
        ("PercentToComplete", c_float),
        ("EncounterPopulationDef", POINTER(UPopulationDefinition)),
        ("MemberOpportunities", TArray_APopulationOpportunityPtr),
        ("SpawnLimits", TArray_FEncounterLimitData),
        ("WaveComplete", c_bool, 1),
        ("AllKilledInWave", c_bool, 1),
    ]

    FSpawnOption._fields_ = [
        ("Factory", POINTER(UPopulationFactory)),
        ("ComputedProbability", c_float),
    ]

    FDestructionParameters._fields_ = [("bActorExemptFromIrrelevancyTests", c_bool, 1)]

    FSpawnedPopulationActor._fields_ = [
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
    ]

    FRemovedPopulationActor._fields_ = [
        ("bReuseActor", c_bool, 1),
        ("CreationFlags", c_int),
        ("FactoryPath", FNameBasedObjectPath),
    ]

    FOpportunitySavedState._fields_ = [
        ("SelectedSpawnIdx", c_int),
        ("NumTotalActors", c_int),
        ("MaxActiveActors", c_ubyte),
        ("NumActiveActors", c_ubyte),
        ("Unknown1", c_ubyte * 0x2),
        ("NextSpawnTime", c_float),
    ]

    FOpportunityCleanupParameters._fields_ = [
        ("bCleanupActorsWhenIrrelevant", c_bool, 1),
        ("bRequireOpportunityToBeInactive", c_bool, 1),
        ("ActorIrrelvantDistance", c_float),
    ]

    FPopulationOpportunityTracker._fields_ = [
        ("OpportunityOutermostName", FName),
        ("OpportunityName", FName),
        ("LoadedOpportunity", POINTER(APopulationOpportunity)),
        ("SpawnedActors", TArray_FSpawnedPopulationActor),
        ("SavedActorsList", FPointer),
        ("ActorsRemovedWhileUnloaded", TArray_FRemovedPopulationActor),
        ("DynamicOpportunity", c_bool, 1),
        ("bHasSavedState", c_bool, 1),
        ("bTotalResetOnLevelLoad", c_ubyte),
        ("RespawnStyle", c_ubyte),
        ("Unknown1", c_ubyte * 0x2),
        ("RespawnDelayStartTime", c_float),
        ("SavedState", FOpportunitySavedState),
        ("OpportunityCleanupParams", FOpportunityCleanupParameters),
    ]

    FPopulationMasterStat._fields_ = [
        ("StatName", FName),
        ("StatTime", c_float),
        ("StatMaxTime", c_float),
        ("StatIterations", c_int),
        ("IterationStartTime", c_int),
    ]

    FEncounterWaveTracker._fields_ = [
        ("nWaveIdx", c_int),
        ("nLimitStateIdx", c_int),
        ("LimitSaveState", FEncounterLimitState),
    ]

    FEncounterTracker._fields_ = [
        ("LoadedEncounter", POINTER(APopulationEncounter)),
        ("EncountersLevel", POINTER(ULevelStreaming)),
        ("EncounterPath", FNameBasedObjectPath),
        ("bNeedsKismetUpdate", c_bool, 1),
        ("EncounterCompletionSaveState", TArray_unsigned_char),
        ("EncounterSaveState", TArray_FEncounterWaveTracker),
        ("RespawnDelayStartTime", c_float),
    ]

    FPopulationOpportunityStat._fields_ = [("PercentNodeReduction", c_float)]

    FPopulationOpportunitySavedActor._fields_ = [
        ("FactoryPath", FNameBasedObjectPath),
        ("TimeActorSaved", c_float),
        ("SpawnActorLocation", FVector),
        ("SpawnActorRotation", FRotator),
        ("CreationFlags", c_int),
        ("CustomActorData", POINTER(UObject)),
    ]

    FPopulationOptionAreaPopDefData._fields_ = [
        ("PopulationDef", POINTER(UPopulationDefinition)),
        ("MaxTotalActorsFormula", FAttributeInitializationData),
        ("MaxTotalActors", c_int),
        ("MaxActiveActors", c_int),
        ("RespawnDelay", c_float),
        ("RespawnDelayAfterDeath", c_float),
    ]

    FPopulationOptionAreaData._fields_ = [
        ("ExpressionDef", POINTER(UExpressionEvaluatorDefinition)),
        ("PopulationDefinitions", TArray_FPopulationOptionAreaPopDefData),
    ]

    FPopulationOptionSpawnDefData._fields_ = [
        ("PopulationDefName", FString),
        ("NumTotalActors", c_int),
        ("NumActiveActors", c_int),
        ("NextSpawnTime", c_float),
    ]

    FPopulationAreaOptionSpawnData._fields_ = [
        ("Data", TArray_FPopulationOptionSpawnDefData)
    ]

    FPopulationOptionSpawnData._fields_ = [
        ("PopulationDefName", FString),
        ("MaxActiveActors", c_int),
        ("NumTotalActors", c_int),
        ("NumActiveActors", c_int),
        ("NextSpawnTime", c_float),
    ]

    FColumnDataStruct._fields_ = [
        ("HeaderText", FString),
        ("Value", c_float),
        ("BarColor", FColor),
    ]

    FSavedRandomValue._fields_ = [
        ("ContextName", FName),
        ("SavedValue", c_float),
        ("ExpirationTime", c_float),
    ]

    FRuleEngineLoadBalanceStruct._fields_ = [
        ("RuleEngine", POINTER(URuleEngine)),
        ("TimeSinceLastUpdate", c_float),
        ("Priority", c_int),
    ]

    FDebugLoadBalance._fields_ = [
        ("RuleEngine", FName),
        ("bIsInQueue", c_bool, 1),
        ("TimeSinceUpdate", c_float),
        ("TimeToDoLastUpdate", c_float),
        ("Priority", c_int),
    ]

    FRELBManagerStats._fields_ = [
        ("TotalTimeUpdated", c_float),
        ("MaxTimeUpdating", c_float),
        ("NumUpdated", c_int),
        ("AveragePriority", c_int),
        ("LowestPriority", c_int),
        ("HighestPriority", c_int),
    ]

    FDebugStringData._fields_ = [("DebugStr", FString), ("StrColor", FColor)]

    FDebugEntryData._fields_ = [("DebugStrs", TArray_FDebugStringData)]

    FSparkOutstandingRequest._fields_ = [
        ("State", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("SleepUntil", FDouble),
        ("WantResponse", c_bool, 1),
        ("ScriptCallback", c_bool, 1),
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
        ("Unknown2", c_ubyte * 0x3),
        ("URL", FString),
        ("RequestStartTime", FDouble),
    ]

    FSparkMicropatch._fields_ = [
        ("ObjectPath", FString),
        ("PropertyPath", FString),
        ("OriginalValue", FString),
        ("NewValue", FString),
        ("bApplied", c_bool, 1),
    ]

    FSMExpressionList._fields_ = [
        ("Expression", POINTER(UExpressionEvaluator)),
        ("SMD", POINTER(USpecialMoveDefinition)),
    ]

    FSMRandomPair._fields_ = [
        ("Weight", c_float),
        ("SMD", POINTER(USpecialMoveDefinition)),
    ]

    FStateAttributeData._fields_ = [
        ("Key", FName),
        ("Attribute", POINTER(UAttributeDefinition)),
    ]

    FWireLinkage._fields_ = [
        ("Offset", FVector),
        ("Width", c_float),
        ("Slack", c_float),
        ("Segments", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Link", c_int),
    ]

    FNewsArticle._fields_ = [("Header", FString), ("Body", FString)]
