from ctypes import *
import BL2SDK


class UActorFactoryClone_Data(Structure):
    pass


class UActorFactoryClone(Structure):
    pass


class UActorFactoryWireTerminal_Data(Structure):
    pass


class UActorFactoryWireTerminal(Structure):
    pass


class UAIDebugCamera_Data(Structure):
    pass


class UAIDebugCamera(Structure):
    pass


class UAITracker_Data(Structure):
    pass


class UAITracker(Structure):
    pass


class UAnimNodeSpecialMoveBlend_Data(Structure):
    pass


class UAnimNodeSpecialMoveBlend(Structure):
    pass


class UAttributeExpressionEvaluator_Data(Structure):
    pass


class UAttributeExpressionEvaluator(Structure):
    pass


class UBehavior_CallFunction_Data(Structure):
    pass


class UBehavior_CallFunction(Structure):
    pass


class UBehavior_ChangeRemoteBehaviorSequenceState_Data(Structure):
    pass


class UBehavior_ChangeRemoteBehaviorSequenceState(Structure):
    pass


class UBehavior_ChangeTimer_Data(Structure):
    pass


class UBehavior_ChangeTimer(Structure):
    pass


class UBehavior_IsSequenceEnabled_Data(Structure):
    pass


class UBehavior_IsSequenceEnabled(Structure):
    pass


class UBehavior_PostAkEvent_Data(Structure):
    pass


class UBehavior_PostAkEvent(Structure):
    pass


class UBehaviorHelpers_Data(Structure):
    pass


class UBehaviorHelpers(Structure):
    pass


class UCompoundExpressionEvaluator_Data(Structure):
    pass


class UCompoundExpressionEvaluator(Structure):
    pass


class UConditionalAttributeValueResolver_Data(Structure):
    pass


class UConditionalAttributeValueResolver(Structure):
    pass


class UConstantAttributeValueResolver_Data(Structure):
    pass


class UConstantAttributeValueResolver(Structure):
    pass


class UConstraintAttributeValueResolver_Data(Structure):
    pass


class UConstraintAttributeValueResolver(Structure):
    pass


class UFeatherBoneBlendDefinition_Data(Structure):
    pass


class UFeatherBoneBlendDefinition(Structure):
    pass


class UGBXActorList_Data(Structure):
    pass


class UGBXActorList(Structure):
    pass


class UGBXObjectList_Data(Structure):
    pass


class UGBXObjectList(Structure):
    pass


class AGearboxAIController_Data(Structure):
    pass


class AGearboxAIController(Structure):
    pass


class AGearboxAIMoveNode_Data(Structure):
    pass


class AGearboxAIMoveNode(Structure):
    pass


class TArray_AGearboxAIMoveNodePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(AGearboxAIMoveNode))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class AGearboxCameraBasic_Data(Structure):
    pass


class AGearboxCameraBasic(Structure):
    pass


class UGearboxCameraModifier_Data(Structure):
    pass


class UGearboxCameraModifier(Structure):
    pass


class UGearboxCheatManager_Data(Structure):
    pass


class UGearboxCheatManager(Structure):
    pass


class UGearboxDialogInterface_Data(Structure):
    pass


class UGearboxDialogInterface(Structure):
    pass


class UGearboxEditorNode_Data(Structure):
    pass


class UGearboxEditorNode(Structure):
    pass


class TArray_UGearboxEditorNodePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UGearboxEditorNode))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class UGearboxEngine_Data(Structure):
    pass


class UGearboxEngine(Structure):
    pass


class AGearboxGameInfo_Data(Structure):
    pass


class AGearboxGameInfo(Structure):
    pass


class UGearboxGFxMovie_Data(Structure):
    pass


class UGearboxGFxMovie(Structure):
    pass


class TArray_UGearboxGFxMoviePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UGearboxGFxMovie))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class UGFxMovie_StateParent_Data(Structure):
    pass


class UGFxMovie_StateParent(Structure):
    pass


class UGearboxGlobals_Data(Structure):
    pass


class UGearboxGlobals(Structure):
    pass


class UGearboxGlobalsDefinition_Data(Structure):
    pass


class UGearboxGlobalsDefinition(Structure):
    pass


class UGearboxLocationRequest_Data(Structure):
    pass


class UGearboxLocationRequest(Structure):
    pass


class UPawnMoveLocationRequest_Data(Structure):
    pass


class UPawnMoveLocationRequest(Structure):
    pass


class AGearboxPawn_Data(Structure):
    pass


class AGearboxPawn(Structure):
    pass


class TArray_AGearboxPawnPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(AGearboxPawn))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class AGearboxPlayerController_Data(Structure):
    pass


class AGearboxPlayerController(Structure):
    pass


class TArray_AGearboxPlayerControllerPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(AGearboxPlayerController))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class UGearboxPlayerInput_Data(Structure):
    pass


class UGearboxPlayerInput(Structure):
    pass


class AGearboxPlayerReplicationInfo_Data(Structure):
    pass


class AGearboxPlayerReplicationInfo(Structure):
    pass


class UGearboxProfileSettings_Data(Structure):
    pass


class UGearboxProfileSettings(Structure):
    pass


class UGearboxRenderTextureManager_Data(Structure):
    pass


class UGearboxRenderTextureManager(Structure):
    pass


class UGearboxSeqAct_DestroyPopulationActors_Data(Structure):
    pass


class UGearboxSeqAct_DestroyPopulationActors(Structure):
    pass


class UGearboxSeqAct_ResetPopulationCount_Data(Structure):
    pass


class UGearboxSeqAct_ResetPopulationCount(Structure):
    pass


class UGearboxSkeletalMeshComponent_Data(Structure):
    pass


class UGearboxSkeletalMeshComponent(Structure):
    pass


class UGearboxStaticMeshComponent_Data(Structure):
    pass


class UGearboxStaticMeshComponent(Structure):
    pass


class UGestaltSkeletalMeshDefinition_Data(Structure):
    pass


class UGestaltSkeletalMeshDefinition(Structure):
    pass


class UGFxActorMoviePool_Data(Structure):
    pass


class UGFxActorMoviePool(Structure):
    pass


class TArray_UGFxActorMoviePoolPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UGFxActorMoviePool))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class UGFxMovieDefinition_Data(Structure):
    pass


class UGFxMovieDefinition(Structure):
    pass


class UGearboxEULAGFxMovieDefinition_Data(Structure):
    pass


class UGearboxEULAGFxMovieDefinition(Structure):
    pass


class UGFxMovieDrawStyle_Data(Structure):
    pass


class UGFxMovieDrawStyle(Structure):
    pass


class TArray_UGFxMovieDrawStylePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UGFxMovieDrawStyle))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class UGFxMovieDrawStyleHUD_Data(Structure):
    pass


class UGFxMovieDrawStyleHUD(Structure):
    pass


class UGFxMovieDrawStyleRTT_Data(Structure):
    pass


class UGFxMovieDrawStyleRTT(Structure):
    pass


class UGFxMovieDrawStyleComponent_Data(Structure):
    pass


class UGFxMovieDrawStyleComponent(Structure):
    pass


class UGFxMovieDrawStyleMesh_Data(Structure):
    pass


class UGFxMovieDrawStyleMesh(Structure):
    pass


class UGFxMovieDrawStyleSprite_Data(Structure):
    pass


class UGFxMovieDrawStyleSprite(Structure):
    pass


class UGFxMovieDrawStyleSplitscreen_Data(Structure):
    pass


class UGFxMovieDrawStyleSplitscreen(Structure):
    pass


class UGFxMovieManager_Data(Structure):
    pass


class UGFxMovieManager(Structure):
    pass


class UGFxMovieState_Data(Structure):
    pass


class UGFxMovieState(Structure):
    pass


class TArray_UGFxMovieStatePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UGFxMovieState))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class UGFxMovieStateCustom_Data(Structure):
    pass


class UGFxMovieStateCustom(Structure):
    pass


class UGFxMovieStateFlags_Data(Structure):
    pass


class UGFxMovieStateFlags(Structure):
    pass


class UGFxMovieStatePlayerAware_Data(Structure):
    pass


class UGFxMovieStatePlayerAware(Structure):
    pass


class UIAIInterface_Data(Structure):
    pass


class UIAIInterface(Structure):
    pass


class UIConstructObject_Data(Structure):
    pass


class UIConstructObject(Structure):
    pass


class UIGFxActorMovie_Data(Structure):
    pass


class UIGFxActorMovie(Structure):
    pass


class UINounAttributeProvider_Data(Structure):
    pass


class UINounAttributeProvider(Structure):
    pass


class UInterfaceGearboxCamera_Data(Structure):
    pass


class UInterfaceGearboxCamera(Structure):
    pass


class UIStreamingDataEvent_Data(Structure):
    pass


class UIStreamingDataEvent(Structure):
    pass


class ULeviathanChannel_Data(Structure):
    pass


class ULeviathanChannel(Structure):
    pass


class UNoContextNeededAttributeContextResolver_Data(Structure):
    pass


class UNoContextNeededAttributeContextResolver(Structure):
    pass


class UNounAttributeValueResolver_Data(Structure):
    pass


class UNounAttributeValueResolver(Structure):
    pass


class UObjectFunctionAttributeValueResolver_Data(Structure):
    pass


class UObjectFunctionAttributeValueResolver(Structure):
    pass


class UObjectPropertyContextResolver_Data(Structure):
    pass


class UObjectPropertyContextResolver(Structure):
    pass


class UPhysicsStateExpressionEvaluator_Data(Structure):
    pass


class UPhysicsStateExpressionEvaluator(Structure):
    pass


class UPopulationAspect_Data(Structure):
    pass


class UPopulationAspect(Structure):
    pass


class UPopulationBodyTag_Data(Structure):
    pass


class UPopulationBodyTag(Structure):
    pass


class TArray_UPopulationBodyTagPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UPopulationBodyTag))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class APopulationEncounter_Data(Structure):
    pass


class APopulationEncounter(Structure):
    pass


class TArray_APopulationEncounterPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(APopulationEncounter))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class UPopulationEncounterRenderingComponent_Data(Structure):
    pass


class UPopulationEncounterRenderingComponent(Structure):
    pass


class UPopulationOpportunityCombatRenderingComponent_Data(Structure):
    pass


class UPopulationOpportunityCombatRenderingComponent(Structure):
    pass


class UPopulationSpawnedActorTagDefinition_Data(Structure):
    pass


class UPopulationSpawnedActorTagDefinition(Structure):
    pass


class TArray_UPopulationSpawnedActorTagDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UPopulationSpawnedActorTagDefinition))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class UPopUpDebugBarGraph_Data(Structure):
    pass


class UPopUpDebugBarGraph(Structure):
    pass


class URandomAttributeValueResolver_Data(Structure):
    pass


class URandomAttributeValueResolver(Structure):
    pass


class URegionDefinition_Data(Structure):
    pass


class URegionDefinition(Structure):
    pass


class URootMotionDefinition_Data(Structure):
    pass


class URootMotionDefinition(Structure):
    pass


class URuleEngineLoadBalanceManager_Data(Structure):
    pass


class URuleEngineLoadBalanceManager(Structure):
    pass


class UScreenSpaceManager_Data(Structure):
    pass


class UScreenSpaceManager(Structure):
    pass


class USeqAct_AllPlayersInVolume_Data(Structure):
    pass


class USeqAct_AllPlayersInVolume(Structure):
    pass


class USeqCond_CompareLocation_Data(Structure):
    pass


class USeqCond_CompareLocation(Structure):
    pass


class USeqCond_CompareString_Data(Structure):
    pass


class USeqCond_CompareString(Structure):
    pass


class USeqCond_GetLanguage_Data(Structure):
    pass


class USeqCond_GetLanguage(Structure):
    pass


class USimpleMathValueResolver_Data(Structure):
    pass


class USimpleMathValueResolver(Structure):
    pass


class USpecialMoveComponent_Data(Structure):
    pass


class USpecialMoveComponent(Structure):
    pass


class USpecialMoveDefinition_Data(Structure):
    pass


class USpecialMoveDefinition(Structure):
    pass


class TArray_USpecialMoveDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(USpecialMoveDefinition))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class USpecialMoveExpressionList_Data(Structure):
    pass


class USpecialMoveExpressionList(Structure):
    pass


class USpecialMoveRandom_Data(Structure):
    pass


class USpecialMoveRandom(Structure):
    pass


class USpecialMoveInterface_Data(Structure):
    pass


class USpecialMoveInterface(Structure):
    pass


class UStateAttributeResolver_Data(Structure):
    pass


class UStateAttributeResolver(Structure):
    pass


class UTimeValueResolver_Data(Structure):
    pass


class UTimeValueResolver(Structure):
    pass


class AWireManager_Data(Structure):
    pass


class AWireManager(Structure):
    pass


class AWireTerminal_Data(Structure):
    pass


class AWireTerminal(Structure):
    pass


class AWiringActor_Data(Structure):
    pass


class AWiringActor(Structure):
    pass


class UWiringMesh_Data(Structure):
    pass


class UWiringMesh(Structure):
    pass


class UActionResource_Data(Structure):
    pass


class UActionResource(Structure):
    pass


class UActionSequence_Data(Structure):
    pass


class UActionSequence(Structure):
    pass


class UActionSequenceList_Data(Structure):
    pass


class UActionSequenceList(Structure):
    pass


class UActionSequencePawn_Data(Structure):
    pass


class UActionSequencePawn(Structure):
    pass


class UAction_PawnMovementBase_Data(Structure):
    pass


class UAction_PawnMovementBase(Structure):
    pass


class UActionSequenceRandom_Data(Structure):
    pass


class UActionSequenceRandom(Structure):
    pass


class UAIComponent_Data(Structure):
    pass


class UAIComponent(Structure):
    pass


class UAICostExpressionEvaluator_Data(Structure):
    pass


class UAICostExpressionEvaluator(Structure):
    pass


class UAIFactoryBase_Data(Structure):
    pass


class UAIFactoryBase(Structure):
    pass


class UGearboxAIFactory_Data(Structure):
    pass


class UGearboxAIFactory(Structure):
    pass


class UAIResource_Data(Structure):
    pass


class UAIResource(Structure):
    pass


class UAIResourceExpressionEvaluator_Data(Structure):
    pass


class UAIResourceExpressionEvaluator(Structure):
    pass


class UAllegianceExpressionEvaluator_Data(Structure):
    pass


class UAllegianceExpressionEvaluator(Structure):
    pass


class UAwarenessZoneCollectionDefinition_Data(Structure):
    pass


class UAwarenessZoneCollectionDefinition(Structure):
    pass


class UAwarenessZoneDefinition_Data(Structure):
    pass


class UAwarenessZoneDefinition(Structure):
    pass


class TArray_UAwarenessZoneDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UAwarenessZoneDefinition))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class UBehavior_SendGbxMessage_Data(Structure):
    pass


class UBehavior_SendGbxMessage(Structure):
    pass


class UBehavior_SetFlag_Data(Structure):
    pass


class UBehavior_SetFlag(Structure):
    pass


class UBestTargetAttributeContextResolver_Data(Structure):
    pass


class UBestTargetAttributeContextResolver(Structure):
    pass


class UCharacterClassMessageDefinition_Data(Structure):
    pass


class UCharacterClassMessageDefinition(Structure):
    pass


class UCoverSearchCriteria_Data(Structure):
    pass


class UCoverSearchCriteria(Structure):
    pass


class UExposureUtilityBase_Data(Structure):
    pass


class UExposureUtilityBase(Structure):
    pass


class UExposureUtilityBasicCaching_Data(Structure):
    pass


class UExposureUtilityBasicCaching(Structure):
    pass


class UExposureUtilityFixedCost_Data(Structure):
    pass


class UExposureUtilityFixedCost(Structure):
    pass


class UExposureUtilityStrategy_Data(Structure):
    pass


class UExposureUtilityStrategy(Structure):
    pass


class UFiringBehaviorDefinition_Data(Structure):
    pass


class UFiringBehaviorDefinition(Structure):
    pass


class UFiringBehaviorManager_Data(Structure):
    pass


class UFiringBehaviorManager(Structure):
    pass


class UFiringCondition_Data(Structure):
    pass


class UFiringCondition(Structure):
    pass


class TArray_UFiringConditionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UFiringCondition))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class UFireCond_IsPlayerTarget_Data(Structure):
    pass


class UFireCond_IsPlayerTarget(Structure):
    pass


class UFiringPattern_Data(Structure):
    pass


class UFiringPattern(Structure):
    pass


class UFirePatt_Cone_Data(Structure):
    pass


class UFirePatt_Cone(Structure):
    pass


class UFirePatt_ShrinkingCone_Data(Structure):
    pass


class UFirePatt_ShrinkingCone(Structure):
    pass


class UFirePatt_StrafeOver_Data(Structure):
    pass


class UFirePatt_StrafeOver(Structure):
    pass


class UFiringZoneCollectionDefinition_Data(Structure):
    pass


class UFiringZoneCollectionDefinition(Structure):
    pass


class UFiringZoneDefinition_Data(Structure):
    pass


class UFiringZoneDefinition(Structure):
    pass


class TArray_UFiringZoneDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UFiringZoneDefinition))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class UFlagDefinition_Data(Structure):
    pass


class UFlagDefinition(Structure):
    pass


class TArray_UFlagDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UFlagDefinition))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class UFlagExpressionEvaluator_Data(Structure):
    pass


class UFlagExpressionEvaluator(Structure):
    pass


class UFlagValueResolver_Data(Structure):
    pass


class UFlagValueResolver(Structure):
    pass


class UMultipleFlagValueResolver_Data(Structure):
    pass


class UMultipleFlagValueResolver(Structure):
    pass


class UObjectFunctionFlagValueResolver_Data(Structure):
    pass


class UObjectFunctionFlagValueResolver(Structure):
    pass


class UObjectPropertyFlagValueResolver_Data(Structure):
    pass


class UObjectPropertyFlagValueResolver(Structure):
    pass


class URuleEngineFlagValueResolver_Data(Structure):
    pass


class URuleEngineFlagValueResolver(Structure):
    pass


class UGbxMessage_Data(Structure):
    pass


class UGbxMessage(Structure):
    pass


class TArray_UGbxMessagePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UGbxMessage))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class UGbxMessageDefinition_Data(Structure):
    pass


class UGbxMessageDefinition(Structure):
    pass


class UGbxMessageManager_Data(Structure):
    pass


class UGbxMessageManager(Structure):
    pass


class AGearboxMind_Data(Structure):
    pass


class AGearboxMind(Structure):
    pass


class UGearboxAIMoveNodeRenderComponent_Data(Structure):
    pass


class UGearboxAIMoveNodeRenderComponent(Structure):
    pass


class UGearboxCoverStateManager_Data(Structure):
    pass


class UGearboxCoverStateManager(Structure):
    pass


class UGearboxMindAttributeContextResolver_Data(Structure):
    pass


class UGearboxMindAttributeContextResolver(Structure):
    pass


class UGearboxNavigationHandle_Data(Structure):
    pass


class UGearboxNavigationHandle(Structure):
    pass


class UIFlagProvider_Data(Structure):
    pass


class UIFlagProvider(Structure):
    pass


class UIFlagProviderGroup_Data(Structure):
    pass


class UIFlagProviderGroup(Structure):
    pass


class UIGbxMessageListener_Data(Structure):
    pass


class UIGbxMessageListener(Structure):
    pass


class UIRuleEngineOwner_Data(Structure):
    pass


class UIRuleEngineOwner(Structure):
    pass


class UKnowledgeRecord_Data(Structure):
    pass


class UKnowledgeRecord(Structure):
    pass


class TArray_UKnowledgeRecordPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UKnowledgeRecord))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class ULocationFilter_Data(Structure):
    pass


class ULocationFilter(Structure):
    pass


class ULocationFilter_MustHaveLOS_Data(Structure):
    pass


class ULocationFilter_MustHaveLOS(Structure):
    pass


class ULocationFilter_MustNotHaveLOS_Data(Structure):
    pass


class ULocationFilter_MustNotHaveLOS(Structure):
    pass


class UMindTargetInfo_Data(Structure):
    pass


class UMindTargetInfo(Structure):
    pass


class TArray_UMindTargetInfoPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UMindTargetInfo))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class URule_Data(Structure):
    pass


class URule(Structure):
    pass


class TArray_URulePtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(URule))), ("Count", c_int), ("Max", c_int)]


class URuleContainer_Data(Structure):
    pass


class URuleContainer(Structure):
    pass


class URulePlaceholder_Data(Structure):
    pass


class URulePlaceholder(Structure):
    pass


class TArray_URulePlaceholderPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(URulePlaceholder))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class URuleEngine_Data(Structure):
    pass


class URuleEngine(Structure):
    pass


class UGearboxRuleEngine_Data(Structure):
    pass


class UGearboxRuleEngine(Structure):
    pass


class URuleEventDef_Data(Structure):
    pass


class URuleEventDef(Structure):
    pass


class URuleSet_Data(Structure):
    pass


class URuleSet(Structure):
    pass


class TArray_URuleSetPtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(URuleSet))), ("Count", c_int), ("Max", c_int)]


class UStateRuleSet_Data(Structure):
    pass


class UStateRuleSet(Structure):
    pass


class USearchDirection_Data(Structure):
    pass


class USearchDirection(Structure):
    pass


class USearchDirection_Any_Data(Structure):
    pass


class USearchDirection_Any(Structure):
    pass


class USearchDirection_AwayFromMe_Data(Structure):
    pass


class USearchDirection_AwayFromMe(Structure):
    pass


class USearchDirection_AwayFromTarget_Data(Structure):
    pass


class USearchDirection_AwayFromTarget(Structure):
    pass


class USearchDirection_MyFacingDirection_Data(Structure):
    pass


class USearchDirection_MyFacingDirection(Structure):
    pass


class USearchDirection_OppositeMyFacingDirection_Data(Structure):
    pass


class USearchDirection_OppositeMyFacingDirection(Structure):
    pass


class USearchDirection_OppositeTargetsFacingDirection_Data(Structure):
    pass


class USearchDirection_OppositeTargetsFacingDirection(Structure):
    pass


class USearchDirection_RandomLeftOrRight_Data(Structure):
    pass


class USearchDirection_RandomLeftOrRight(Structure):
    pass


class USearchDirection_TargetsFacingDirection_Data(Structure):
    pass


class USearchDirection_TargetsFacingDirection(Structure):
    pass


class USearchDirection_ToMyLeft_Data(Structure):
    pass


class USearchDirection_ToMyLeft(Structure):
    pass


class USearchDirection_ToMyRight_Data(Structure):
    pass


class USearchDirection_ToMyRight(Structure):
    pass


class USearchDirection_TowardMe_Data(Structure):
    pass


class USearchDirection_TowardMe(Structure):
    pass


class USearchDirection_TowardTarget_Data(Structure):
    pass


class USearchDirection_TowardTarget(Structure):
    pass


class USearchOrigin_Data(Structure):
    pass


class USearchOrigin(Structure):
    pass


class USearchOrigin_CurrentLocation_Data(Structure):
    pass


class USearchOrigin_CurrentLocation(Structure):
    pass


class USearchOrigin_ScriptedMoveTarget_Data(Structure):
    pass


class USearchOrigin_ScriptedMoveTarget(Structure):
    pass


class USearchOrigin_TargetLocation_Data(Structure):
    pass


class USearchOrigin_TargetLocation(Structure):
    pass


class USnapshotRecord_Data(Structure):
    pass


class USnapshotRecord(Structure):
    pass


class UGearboxPawnSnapshotRecord_Data(Structure):
    pass


class UGearboxPawnSnapshotRecord(Structure):
    pass


class UTargetingDefinition_Data(Structure):
    pass


class UTargetingDefinition(Structure):
    pass


class UTargetIterator_Data(Structure):
    pass


class UTargetIterator(Structure):
    pass


class UTargetIteratorCalculateDistance_Data(Structure):
    pass


class UTargetIteratorCalculateDistance(Structure):
    pass


class UTargetIteratorCalculateExposure_Data(Structure):
    pass


class UTargetIteratorCalculateExposure(Structure):
    pass


class UTargetIteratorCheckAwareness_Data(Structure):
    pass


class UTargetIteratorCheckAwareness(Structure):
    pass


class UTargetIteratorCheckRemoveTarget_Data(Structure):
    pass


class UTargetIteratorCheckRemoveTarget(Structure):
    pass


class UTargetIteratorForgetAboutTarget_Data(Structure):
    pass


class UTargetIteratorForgetAboutTarget(Structure):
    pass


class UTargetIteratorPrioritizeTargetsIAmExposedTo_Data(Structure):
    pass


class UTargetIteratorPrioritizeTargetsIAmExposedTo(Structure):
    pass


class UTI_Calc_Data(Structure):
    pass


class UTI_Calc(Structure):
    pass


class TArray_UTI_CalcPtr(Structure):
    _fields_ = [("Data", POINTER(POINTER(UTI_Calc))), ("Count", c_int), ("Max", c_int)]


class UTI_Prioritize_Data(Structure):
    pass


class UTI_Prioritize(Structure):
    pass


class TArray_UTI_PrioritizePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UTI_Prioritize))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class UTargetIteratorPrioritizeExposedTargets_Data(Structure):
    pass


class UTargetIteratorPrioritizeExposedTargets(Structure):
    pass


class UTargetIteratorPrioritizeHumanTargets_Data(Structure):
    pass


class UTargetIteratorPrioritizeHumanTargets(Structure):
    pass


class UTargetIteratorPrioritizeNearbyTarget_Data(Structure):
    pass


class UTargetIteratorPrioritizeNearbyTarget(Structure):
    pass


class UTargetIteratorPrioritizePreviousTarget_Data(Structure):
    pass


class UTargetIteratorPrioritizePreviousTarget(Structure):
    pass


class UTargetIteratorPrioritizeTargetNotBeingShotAt_Data(Structure):
    pass


class UTargetIteratorPrioritizeTargetNotBeingShotAt(Structure):
    pass


class UTargetIteratorPrioritizeTargetWhoShootsAtMe_Data(Structure):
    pass


class UTargetIteratorPrioritizeTargetWhoShootsAtMe(Structure):
    pass


class UTI_PrioritizeBonus_Data(Structure):
    pass


class UTI_PrioritizeBonus(Structure):
    pass


class UTI_PrioritizeConditional_Data(Structure):
    pass


class UTI_PrioritizeConditional(Structure):
    pass


class UGearboxSeqAct_PopulationOpportunityLink_Data(Structure):
    pass


class UGearboxSeqAct_PopulationOpportunityLink(Structure):
    pass


class UIPopulationSpawnPoint_Data(Structure):
    pass


class UIPopulationSpawnPoint(Structure):
    pass


class UPopulationDefinition_Data(Structure):
    pass


class UPopulationDefinition(Structure):
    pass


class UPopulationFactory_Data(Structure):
    pass


class UPopulationFactory(Structure):
    pass


class TArray_UPopulationFactoryPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UPopulationFactory))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class UPopulationFactoryGeneric_Data(Structure):
    pass


class UPopulationFactoryGeneric(Structure):
    pass


class UPopulationFactoryPopulationDefinition_Data(Structure):
    pass


class UPopulationFactoryPopulationDefinition(Structure):
    pass


class UPopulationMaster_Data(Structure):
    pass


class UPopulationMaster(Structure):
    pass


class APopulationOpportunity_Data(Structure):
    pass


class APopulationOpportunity(Structure):
    pass


class TArray_APopulationOpportunityPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(APopulationOpportunity))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class APopulationOpportunityArea_Data(Structure):
    pass


class APopulationOpportunityArea(Structure):
    pass


class APopulationOpportunityCloner_Data(Structure):
    pass


class APopulationOpportunityCloner(Structure):
    pass


class APopulationOpportunityCombat_Data(Structure):
    pass


class APopulationOpportunityCombat(Structure):
    pass


class APopulationOpportunityPoint_Data(Structure):
    pass


class APopulationOpportunityPoint(Structure):
    pass


class UPopulationOpportunityAreaRenderingComponent_Data(Structure):
    pass


class UPopulationOpportunityAreaRenderingComponent(Structure):
    pass


class UPopulationOpportunityAttributeContextResolver_Data(Structure):
    pass


class UPopulationOpportunityAttributeContextResolver(Structure):
    pass


class UPopulationOpportunityPointRenderingComponent_Data(Structure):
    pass


class UPopulationOpportunityPointRenderingComponent(Structure):
    pass


class APopulationPoint_Data(Structure):
    pass


class APopulationPoint(Structure):
    pass


class TArray_APopulationPointPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(APopulationPoint))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class APopulationPoint_Dynamic_Data(Structure):
    pass


class APopulationPoint_Dynamic(Structure):
    pass


class UPopulationPointRenderingComponent_Data(Structure):
    pass


class UPopulationPointRenderingComponent(Structure):
    pass


class USeqEvent_EncounterWaveComplete_Data(Structure):
    pass


class USeqEvent_EncounterWaveComplete(Structure):
    pass


class USeqEvent_PopulatedActor_Data(Structure):
    pass


class USeqEvent_PopulatedActor(Structure):
    pass


class USeqEvent_PopulatedPoint_Data(Structure):
    pass


class USeqEvent_PopulatedPoint(Structure):
    pass


class AGearboxHUD_Data(Structure):
    pass


class AGearboxHUD(Structure):
    pass


class UAIDefinition_Data(Structure):
    pass


class UAIDefinition(Structure):
    pass


class UBehaviorEventFilterBase_Data(Structure):
    pass


class UBehaviorEventFilterBase(Structure):
    pass


class UBehaviorKernel_Data(Structure):
    pass


class UBehaviorKernel(Structure):
    pass


class UBehaviorProviderDefinition_Data(Structure):
    pass


class UBehaviorProviderDefinition(Structure):
    pass


class TArray_UBehaviorProviderDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UBehaviorProviderDefinition))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class UAIBehaviorProviderDefinition_Data(Structure):
    pass


class UAIBehaviorProviderDefinition(Structure):
    pass


class UBehaviorSequenceCustomEnableCondition_Data(Structure):
    pass


class UBehaviorSequenceCustomEnableCondition(Structure):
    pass


class TArray_UBehaviorSequenceCustomEnableConditionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UBehaviorSequenceCustomEnableCondition))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class UBehaviorSequenceEnableByMultipleConditions_Data(Structure):
    pass


class UBehaviorSequenceEnableByMultipleConditions(Structure):
    pass


class UIBehaviorConsumer_Data(Structure):
    pass


class UIBehaviorConsumer(Structure):
    pass


class UIBehaviorProvider_Data(Structure):
    pass


class UIBehaviorProvider(Structure):
    pass


class UICustomEvent_Data(Structure):
    pass


class UICustomEvent(Structure):
    pass


class UITimerBehavior_Data(Structure):
    pass


class UITimerBehavior(Structure):
    pass


class UGearboxAnimDefinition_Data(Structure):
    pass


class UGearboxAnimDefinition(Structure):
    pass


class TArray_UGearboxAnimDefinitionPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UGearboxAnimDefinition))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class UBehavior_TriggerDialogEvent_Data(Structure):
    pass


class UBehavior_TriggerDialogEvent(Structure):
    pass


class AGearboxDialogActor_Data(Structure):
    pass


class AGearboxDialogActor(Structure):
    pass


class UGearboxDialogComponent_Data(Structure):
    pass


class UGearboxDialogComponent(Structure):
    pass


class UGearboxDialogEventData_Data(Structure):
    pass


class UGearboxDialogEventData(Structure):
    pass


class TArray_UGearboxDialogEventDataPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UGearboxDialogEventData))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class UGearboxDialogEventTag_Data(Structure):
    pass


class UGearboxDialogEventTag(Structure):
    pass


class TArray_UGearboxDialogEventTagPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UGearboxDialogEventTag))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class UGearboxDialogGlobalsDefinition_Data(Structure):
    pass


class UGearboxDialogGlobalsDefinition(Structure):
    pass


class UGearboxDialogGroup_Data(Structure):
    pass


class UGearboxDialogGroup(Structure):
    pass


class TArray_UGearboxDialogGroupPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UGearboxDialogGroup))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class UGearboxDialogTemplateGroup_Data(Structure):
    pass


class UGearboxDialogTemplateGroup(Structure):
    pass


class UGearboxDialogManager_Data(Structure):
    pass


class UGearboxDialogManager(Structure):
    pass


class UGearboxDialogNameTag_Data(Structure):
    pass


class UGearboxDialogNameTag(Structure):
    pass


class TArray_UGearboxDialogNameTagPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UGearboxDialogNameTag))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class UGearboxDialogPriority_Data(Structure):
    pass


class UGearboxDialogPriority(Structure):
    pass


class TArray_UGearboxDialogPriorityPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UGearboxDialogPriority))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class UGearboxDialogNode_Data(Structure):
    pass


class UGearboxDialogNode(Structure):
    pass


class TArray_UGearboxDialogNodePtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UGearboxDialogNode))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class UGearboxDialogAction_Data(Structure):
    pass


class UGearboxDialogAction(Structure):
    pass


class UGearboxDialogAct_Chance_Data(Structure):
    pass


class UGearboxDialogAct_Chance(Structure):
    pass


class UGearboxDialogAct_Compare_Data(Structure):
    pass


class UGearboxDialogAct_Compare(Structure):
    pass


class UGearboxDialogAct_ObjectParameterSwitch_Data(Structure):
    pass


class UGearboxDialogAct_ObjectParameterSwitch(Structure):
    pass


class UGearboxDialogNonTemplateAction_Data(Structure):
    pass


class UGearboxDialogNonTemplateAction(Structure):
    pass


class UGearboxDialogAct_Talk_Data(Structure):
    pass


class UGearboxDialogAct_Talk(Structure):
    pass


class UGearboxDialogTemplateAction_Data(Structure):
    pass


class UGearboxDialogTemplateAction(Structure):
    pass


class UGearboxDialogAct_Trigger_Data(Structure):
    pass


class UGearboxDialogAct_Trigger(Structure):
    pass


class UGearboxDialogEvent_Data(Structure):
    pass


class UGearboxDialogEvent(Structure):
    pass


class UGearboxDialogTemplateEvent_Data(Structure):
    pass


class UGearboxDialogTemplateEvent(Structure):
    pass


class UGearboxDialogVariable_Data(Structure):
    pass


class UGearboxDialogVariable(Structure):
    pass


class UGearboxDialogVar_Instigator_Data(Structure):
    pass


class UGearboxDialogVar_Instigator(Structure):
    pass


class UGearboxDialogVar_LastTalker_Data(Structure):
    pass


class UGearboxDialogVar_LastTalker(Structure):
    pass


class UGearboxDialogVar_NameTag_Data(Structure):
    pass


class UGearboxDialogVar_NameTag(Structure):
    pass


class UGearboxDialogVar_Other_Data(Structure):
    pass


class UGearboxDialogVar_Other(Structure):
    pass


class UGearboxDialogVar_Random_Data(Structure):
    pass


class UGearboxDialogVar_Random(Structure):
    pass


class UGearboxSeqAct_ToggleDialog_Data(Structure):
    pass


class UGearboxSeqAct_ToggleDialog(Structure):
    pass


class UGearboxSeqAct_TriggerDialog_Data(Structure):
    pass


class UGearboxSeqAct_TriggerDialog(Structure):
    pass


class UGearboxSeqAct_TriggerDialogName_Data(Structure):
    pass


class UGearboxSeqAct_TriggerDialogName(Structure):
    pass


class UGearboxAccountActions_Data(Structure):
    pass


class UGearboxAccountActions(Structure):
    pass


class UGearboxAccountData_Data(Structure):
    pass


class UGearboxAccountData(Structure):
    pass


class TArray_UGearboxAccountDataPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UGearboxAccountData))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class UGearboxProcess_Data(Structure):
    pass


class UGearboxProcess(Structure):
    pass


class USparkInitializationProcess_Data(Structure):
    pass


class USparkInitializationProcess(Structure):
    pass


class ULeviathanService_Data(Structure):
    pass


class ULeviathanService(Structure):
    pass


class USparkInterface_Data(Structure):
    pass


class USparkInterface(Structure):
    pass


class USparkInterfaceImpl_Data(Structure):
    pass


class USparkInterfaceImpl(Structure):
    pass


class USparkServiceConfiguration_Data(Structure):
    pass


class USparkServiceConfiguration(Structure):
    pass


class TArray_USparkServiceConfigurationPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(USparkServiceConfiguration))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class USparkTypes_Data(Structure):
    pass


class USparkTypes(Structure):
    pass


class UAction_ChangeRuleSet_Data(Structure):
    pass


class UAction_ChangeRuleSet(Structure):
    pass


class URES_RuleSetChange_Data(Structure):
    pass


class URES_RuleSetChange(Structure):
    pass


class UAction_FaceThreat_Data(Structure):
    pass


class UAction_FaceThreat(Structure):
    pass


class URES_FacingPolicy_Data(Structure):
    pass


class URES_FacingPolicy(Structure):
    pass


class UAction_MoveRandom_Data(Structure):
    pass


class UAction_MoveRandom(Structure):
    pass


class UAction_MoveTo_Data(Structure):
    pass


class UAction_MoveTo(Structure):
    pass


class URES_Movement_Data(Structure):
    pass


class URES_Movement(Structure):
    pass


class UAction_PopRuleSet_Data(Structure):
    pass


class UAction_PopRuleSet(Structure):
    pass


class UAction_PushRuleSet_Data(Structure):
    pass


class UAction_PushRuleSet(Structure):
    pass


class UActorAttributeContextResolver_Data(Structure):
    pass


class UActorAttributeContextResolver(Structure):
    pass


class UAIComponentAttributeContextResolver_Data(Structure):
    pass


class UAIComponentAttributeContextResolver(Structure):
    pass


class UAIStateBase_Data(Structure):
    pass


class UAIStateBase(Structure):
    pass


class UAIState_Data(Structure):
    pass


class UAIState(Structure):
    pass


class UAIState_Priority_Data(Structure):
    pass


class UAIState_Priority(Structure):
    pass


class UAIState_Random_Data(Structure):
    pass


class UAIState_Random(Structure):
    pass


class UAIState_Sequential_Data(Structure):
    pass


class UAIState_Sequential(Structure):
    pass


class UBehavior_AIHold_Data(Structure):
    pass


class UBehavior_AIHold(Structure):
    pass


class UBehavior_AIPriority_Data(Structure):
    pass


class UBehavior_AIPriority(Structure):
    pass


class UBehavior_AITargeting_Data(Structure):
    pass


class UBehavior_AITargeting(Structure):
    pass


class UBehavior_ChangeAnyBehaviorSequenceState_Data(Structure):
    pass


class UBehavior_ChangeAnyBehaviorSequenceState(Structure):
    pass


class UBehavior_ChangeLocalBehaviorSequenceState_Data(Structure):
    pass


class UBehavior_ChangeLocalBehaviorSequenceState(Structure):
    pass


class UBehavior_CompareBool_Data(Structure):
    pass


class UBehavior_CompareBool(Structure):
    pass


class UBehavior_CompareValues_Data(Structure):
    pass


class UBehavior_CompareValues(Structure):
    pass


class UBehavior_CustomEvent_Data(Structure):
    pass


class UBehavior_CustomEvent(Structure):
    pass


class UBehavior_Delay_Data(Structure):
    pass


class UBehavior_Delay(Structure):
    pass


class UBehavior_Gate_Data(Structure):
    pass


class UBehavior_Gate(Structure):
    pass


class UBehavior_GetFloatParam_Data(Structure):
    pass


class UBehavior_GetFloatParam(Structure):
    pass


class UBehavior_GetObjectParam_Data(Structure):
    pass


class UBehavior_GetObjectParam(Structure):
    pass


class UBehavior_GetVectorParam_Data(Structure):
    pass


class UBehavior_GetVectorParam(Structure):
    pass


class UBehavior_InterpolateFloatOverTime_Data(Structure):
    pass


class UBehavior_InterpolateFloatOverTime(Structure):
    pass


class UBehavior_Metronome_Data(Structure):
    pass


class UBehavior_Metronome(Structure):
    pass


class UBehavior_ModifyTimer_Data(Structure):
    pass


class UBehavior_ModifyTimer(Structure):
    pass


class UBehavior_SetFloatParam_Data(Structure):
    pass


class UBehavior_SetFloatParam(Structure):
    pass


class UBehavior_SetObjectParam_Data(Structure):
    pass


class UBehavior_SetObjectParam(Structure):
    pass


class UBehavior_SetVectorParam_Data(Structure):
    pass


class UBehavior_SetVectorParam(Structure):
    pass


class UBehavior_SpecialMove_Data(Structure):
    pass


class UBehavior_SpecialMove(Structure):
    pass


class UBehavior_SpecialMoveStop_Data(Structure):
    pass


class UBehavior_SpecialMoveStop(Structure):
    pass


class UBehavior_StartAkAmbientSound_Data(Structure):
    pass


class UBehavior_StartAkAmbientSound(Structure):
    pass


class UBehavior_StopAkAmbientSound_Data(Structure):
    pass


class UBehavior_StopAkAmbientSound(Structure):
    pass


class UBehavior_StopDialog_Data(Structure):
    pass


class UBehavior_StopDialog(Structure):
    pass


class UBehavior_ToggleDialog_Data(Structure):
    pass


class UBehavior_ToggleDialog(Structure):
    pass


class UCameraModifierCrossfade_Data(Structure):
    pass


class UCameraModifierCrossfade(Structure):
    pass


class UCameraModifierLookAt_Data(Structure):
    pass


class UCameraModifierLookAt(Structure):
    pass


class UDefinitionUITestCaseDefinition_Data(Structure):
    pass


class UDefinitionUITestCaseDefinition(Structure):
    pass


class USparkNews_Data(Structure):
    pass


class USparkNews(Structure):
    pass


class UGearboxAccountEntitlement_Data(Structure):
    pass


class UGearboxAccountEntitlement(Structure):
    pass


class TArray_UGearboxAccountEntitlementPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UGearboxAccountEntitlement))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class UGearboxAccountOffer_Data(Structure):
    pass


class UGearboxAccountOffer(Structure):
    pass


class TArray_UGearboxAccountOfferPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(UGearboxAccountOffer))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class APatrolDestination_Data(Structure):
    pass


class APatrolDestination(Structure):
    pass


class TArray_APatrolDestinationPtr(Structure):
    _fields_ = [
        ("Data", POINTER(POINTER(APatrolDestination))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class UGearboxSeqAct_TargetPriority_Data(Structure):
    pass


class UGearboxSeqAct_TargetPriority(Structure):
    pass


class UGearboxSeqAct_CameraShake_Data(Structure):
    pass


class UGearboxSeqAct_CameraShake(Structure):
    pass


class UGearboxSeqAct_PawnClonerLink_Data(Structure):
    pass


class UGearboxSeqAct_PawnClonerLink(Structure):
    pass


class UGFxMovieDrawStyleInstanceData_Data(Structure):
    pass


class UGFxMovieDrawStyleInstanceData(Structure):
    pass


class USeqEvent_AllSpawned_Data(Structure):
    pass


class USeqEvent_AllSpawned(Structure):
    pass


class UPopulationMasterAttributeContextResolver_Data(Structure):
    pass


class UPopulationMasterAttributeContextResolver(Structure):
    pass


class USeqEvent_SinglePopulationDeath_Data(Structure):
    pass


class USeqEvent_SinglePopulationDeath(Structure):
    pass


class URES_Rotation_Data(Structure):
    pass


class URES_Rotation(Structure):
    pass


class URES_SpecialMove_Data(Structure):
    pass


class URES_SpecialMove(Structure):
    pass


class USeqEvent_ArrivedAtMoveNode_Data(Structure):
    pass


class USeqEvent_ArrivedAtMoveNode(Structure):
    pass


class USeqEvent_LeavingMoveNode_Data(Structure):
    pass


class USeqEvent_LeavingMoveNode(Structure):
    pass


class UShowDebugHelpers_Data(Structure):
    pass


class UShowDebugHelpers(Structure):
    pass


class ASkeletalMeshActorGBXMatinee_Data(Structure):
    pass


class ASkeletalMeshActorGBXMatinee(Structure):
    pass


class UGearboxEULAGFxMovie_Data(Structure):
    pass


class UGearboxEULAGFxMovie(Structure):
    pass


class UGearboxEULAGFxObject_Data(Structure):
    pass


class UGearboxEULAGFxObject(Structure):
    pass


from ..TArrayTypes import *
from ..structs.Base import *
from ..structs.Core import *
from ..structs.Engine import *
from ..structs.GameFramework import *
from ..structs.GFxUI import *
from ..structs.GearboxFramework import *
from ..structs.AkAudio import *

from ..classes.Base import *
from ..classes.Core import *
from ..classes.Engine import *
from ..classes.GameFramework import *
from ..classes.GFxUI import *
from ..classes.AkAudio import *


def init():
    UActorFactoryClone_Data._fields_ = [
        ("CloneArchetype", TArray_AGearboxPawnPtr),
        ("NewCloneTag", FName),
    ]

    UActorFactoryClone._fields_ = [
        ("UObject", UObject_Data),
        ("UActorFactory", UActorFactory_Data),
        ("UActorFactoryClone", UActorFactoryClone_Data),
    ]

    UActorFactoryWireTerminal_Data._fields_ = []

    UActorFactoryWireTerminal._fields_ = [
        ("UObject", UObject_Data),
        ("UActorFactory", UActorFactory_Data),
        ("UActorFactoryWireTerminal", UActorFactoryWireTerminal_Data),
    ]

    UAIDebugCamera_Data._fields_ = [
        ("Mind", POINTER(AGearboxMind)),
        ("RuleEngine", POINTER(URuleEngine)),
        ("DisplayList", TArray_FDebugListItem),
        ("bSnapshotModeOn", c_bool, 1),
        ("bShowFlags", c_bool, 1),
        ("bShowRules", c_bool, 1),
        ("bShowInactiveRules", c_bool, 1),
        ("bShowResources", c_bool, 1),
        ("bShowCombat", c_bool, 1),
        ("bShowRuleEngineLoadBalance", c_bool, 1),
        ("bShowAwarenessZones", c_bool, 1),
        ("bShowTargetViewCones", c_bool, 1),
        ("bShowTimers", c_bool, 1),
        ("bShowAITree", c_bool, 1),
        ("SnapshotNdx", c_int),
        ("CurSnapshot", POINTER(USnapshotRecord)),
        ("PopUpGraphTop", POINTER(UPopUpDebugBarGraph)),
        ("PopUpGraphCenter", POINTER(UPopUpDebugBarGraph)),
        ("CurrentInspectedTargetName", FName),
        ("TopBarGraphStartXPct", c_float),
        ("TopBarGraphStartYPct", c_float),
        ("CenterBarGraphStartXPct", c_float),
        ("CenterBarGraphStartYPct", c_float),
        ("Column2XOffset", c_float),
        ("Column1LastY", c_float),
        ("Column2LastY", c_float),
        ("LastColumnDrawnTo", c_int),
    ]

    UAIDebugCamera._fields_ = [
        ("UObject", UObject_Data),
        ("UAIDebugCamera", UAIDebugCamera_Data),
    ]

    UAITracker_Data._fields_ = [
        ("Snapshots", POINTER(USnapshotRecord) * 50),
        ("SnapshotSize", c_int),
        ("SnapshotIndex", c_int),
        ("DebugOwner", POINTER(AActor)),
    ]

    UAITracker._fields_ = [("UObject", UObject_Data), ("UAITracker", UAITracker_Data)]

    UAnimNodeSpecialMoveBlend_Data._fields_ = [
        ("AnimState", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("SavedBlendOutTime", c_float),
        ("SMI", FScriptInterface),
        ("AnimParameters", TArray_FSlotAnimParameters),
        ("bForceLocalSpaceBlend", c_bool, 1),
        ("IssueNotifiesWhenZeroWeight", c_bool, 1),
    ]

    UAnimNodeSpecialMoveBlend._fields_ = [
        ("UObject", UObject_Data),
        ("UAnimObject", UAnimObject_Data),
        ("UAnimNode", UAnimNode_Data),
        ("UAnimNodeBlendBase", UAnimNodeBlendBase_Data),
        ("UAnimNodeSlot", UAnimNodeSlot_Data),
        ("UAnimNodeSpecialMoveBlend", UAnimNodeSpecialMoveBlend_Data),
    ]

    UAttributeExpressionEvaluator_Data._fields_ = [
        ("Expression", FAttributeExpressionData)
    ]

    UAttributeExpressionEvaluator._fields_ = [
        ("UObject", UObject_Data),
        ("UExpressionEvaluator", UExpressionEvaluator_Data),
        ("UAttributeExpressionEvaluator", UAttributeExpressionEvaluator_Data),
    ]

    UBehavior_CallFunction_Data._fields_ = [("FunctionName", FName)]

    UBehavior_CallFunction._fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_CallFunction", UBehavior_CallFunction_Data),
    ]

    UBehavior_ChangeRemoteBehaviorSequenceState_Data._fields_ = [
        ("Action", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("SequenceName", FName),
        ("SequenceProvider", POINTER(UObject)),
        ("ProviderDefinitionPathName", FNameBasedObjectPath),
    ]

    UBehavior_ChangeRemoteBehaviorSequenceState._fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        (
            "UBehavior_ChangeRemoteBehaviorSequenceState",
            UBehavior_ChangeRemoteBehaviorSequenceState_Data,
        ),
    ]

    UBehavior_ChangeTimer_Data._fields_ = [
        ("TimerId", c_ubyte),
        ("Reaction", c_ubyte),
        ("Unknown1", c_ubyte * 0x2),
        ("bSetNewTimerDelay", c_bool, 1),
        ("NewTimerDelayFormula", FAttributeInitializationData),
        ("NewTimerDelay", c_float),
    ]

    UBehavior_ChangeTimer._fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_ChangeTimer", UBehavior_ChangeTimer_Data),
    ]

    UBehavior_IsSequenceEnabled_Data._fields_ = [
        ("SequenceName", FName),
        ("SequenceProvider", POINTER(UObject)),
        ("ProviderDefinitionPathName", FNameBasedObjectPath),
    ]

    UBehavior_IsSequenceEnabled._fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_IsSequenceEnabled", UBehavior_IsSequenceEnabled_Data),
    ]

    UBehavior_PostAkEvent_Data._fields_ = [
        ("Event", POINTER(UAkEvent)),
        ("bReplicateEvent", c_bool, 1),
        ("bForLocalPlayerOnly", c_bool, 1),
        ("bForcePlayImmediate", c_bool, 1),
        ("bPlayFromActor", c_bool, 1),
        ("bLatentWhenNoConnections", c_bool, 1),
        ("PlayingInfo", FAkPlayingInfo),
    ]

    UBehavior_PostAkEvent._fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_PostAkEvent", UBehavior_PostAkEvent_Data),
    ]

    UBehaviorHelpers_Data._fields_ = [
        ("__BehaviorSetStrategy__Delegate", FScriptDelegate),
        ("__BehaviorStrategy__Delegate", FScriptDelegate),
    ]

    UBehaviorHelpers._fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorHelpers", UBehaviorHelpers_Data),
    ]

    UCompoundExpressionEvaluator_Data._fields_ = [
        ("Expression1", POINTER(UExpressionEvaluator)),
        ("Operator", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Expression2", POINTER(UExpressionEvaluator)),
    ]

    UCompoundExpressionEvaluator._fields_ = [
        ("UObject", UObject_Data),
        ("UExpressionEvaluator", UExpressionEvaluator_Data),
        ("UCompoundExpressionEvaluator", UCompoundExpressionEvaluator_Data),
    ]

    UConditionalAttributeValueResolver_Data._fields_ = [
        ("ValueExpressions", FConditionalInitializationExpressions)
    ]

    UConditionalAttributeValueResolver._fields_ = [
        ("UObject", UObject_Data),
        ("UAttributeValueResolver", UAttributeValueResolver_Data),
        ("UConditionalAttributeValueResolver", UConditionalAttributeValueResolver_Data),
    ]

    UConstantAttributeValueResolver_Data._fields_ = [("ConstantValue", c_float)]

    UConstantAttributeValueResolver._fields_ = [
        ("UObject", UObject_Data),
        ("UAttributeValueResolver", UAttributeValueResolver_Data),
        ("UConstantAttributeValueResolver", UConstantAttributeValueResolver_Data),
    ]

    UConstraintAttributeValueResolver_Data._fields_ = [("Constraints", FRange)]

    UConstraintAttributeValueResolver._fields_ = [
        ("UObject", UObject_Data),
        ("UAttributeValueResolver", UAttributeValueResolver_Data),
        ("UConstraintAttributeValueResolver", UConstraintAttributeValueResolver_Data),
    ]

    UFeatherBoneBlendDefinition_Data._fields_ = [
        ("BoneBlends", TArray_FFeatherBoneBlendData)
    ]

    UFeatherBoneBlendDefinition._fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UFeatherBoneBlendDefinition", UFeatherBoneBlendDefinition_Data),
    ]

    UGBXActorList_Data._fields_ = [("ActorList", TArray_Fs_actorList)]

    UGBXActorList._fields_ = [
        ("UObject", UObject_Data),
        ("UGBXActorList", UGBXActorList_Data),
    ]

    UGBXObjectList_Data._fields_ = [("ObjectList", TArray_UObjectPtr)]

    UGBXObjectList._fields_ = [
        ("UObject", UObject_Data),
        ("UGBXObjectList", UGBXObjectList_Data),
    ]

    AGearboxAIController_Data._fields_ = []

    AGearboxAIController._fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("AController", AController_Data),
        ("AAIController", AAIController_Data),
        ("AGearboxAIController", AGearboxAIController_Data),
    ]

    AGearboxAIMoveNode_Data._fields_ = [
        ("bEnabled", c_bool, 1),
        ("bFaceNodeDirection", c_bool, 1),
        ("NextNodes", TArray_FNodeData),
        ("PreviousNodes", TArray_AGearboxAIMoveNodePtr),
        ("HoldTime", c_float),
        ("Behaviors", TArray_UBehaviorBasePtr),
        ("SpecialMoves", TArray_USpecialMoveDefinitionPtr),
        ("Sprite", POINTER(USpriteComponent)),
    ]

    AGearboxAIMoveNode._fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("AGearboxAIMoveNode", AGearboxAIMoveNode_Data),
    ]

    AGearboxCameraBasic_Data._fields_ = [("VfTable_IInterfaceGearboxCamera", FPointer)]

    AGearboxCameraBasic._fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("ACamera", ACamera_Data),
        ("AGearboxCameraBasic", AGearboxCameraBasic_Data),
    ]

    UGearboxCameraModifier_Data._fields_ = [
        ("GBXCameraOwner", POINTER(AGearboxCameraBasic)),
        ("DesiredPOV", FTPOV),
        ("MasterFadeValue", c_float),
        ("FadeElapsedTime", c_float),
        ("FadeTimeSpan", c_float),
        ("FadeStarted", c_bool, 1),
        ("FadingUpwards", c_bool, 1),
        ("DisableWhenFadedOut", c_bool, 1),
        ("AdjustForTimeDilation", c_bool, 1),
        ("FadeMode", c_ubyte),
    ]

    UGearboxCameraModifier._fields_ = [
        ("UObject", UObject_Data),
        ("UCameraModifier", UCameraModifier_Data),
        ("UGearboxCameraModifier", UGearboxCameraModifier_Data),
    ]

    UGearboxCheatManager_Data._fields_ = []

    UGearboxCheatManager._fields_ = [
        ("UObject", UObject_Data),
        ("UCheatManager", UCheatManager_Data),
        ("UGearboxCheatManager", UGearboxCheatManager_Data),
    ]

    UGearboxDialogInterface_Data._fields_ = []

    UGearboxDialogInterface._fields_ = [
        ("UObject", UObject_Data),
        ("UInterface", UInterface_Data),
        ("UGearboxDialogInterface", UGearboxDialogInterface_Data),
    ]

    UGearboxEditorNode_Data._fields_ = [
        ("Type", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("OutputLinks", TArray_FOutputLink),
        ("InputLinks", TArray_UGearboxEditorNodePtr),
        ("VariableLinks", TArray_FVariableLink),
        ("bAllowInputs", c_bool, 1),
        ("bAllowOutputs", c_bool, 1),
        ("bAllowVariables", c_bool, 1),
        ("bAllowMovement", c_bool, 1),
        ("bAllowMultipleInputs", c_bool, 1),
        ("bAllowMultipleOutputs", c_bool, 1),
        ("bAllowMultipleVariables", c_bool, 1),
        ("SliderPosition", c_float),
    ]

    UGearboxEditorNode._fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
    ]

    UGearboxEngine_Data._fields_ = [
        ("CurrentUserID", c_int),
        ("CurrentDeviceID", c_int),
        ("bHasSelectedValidStorageDevice", c_bool, 1),
        ("DefaultSparkInterfaceName", FString),
        ("SparkInterface", FScriptInterface),
    ]

    UGearboxEngine._fields_ = [
        ("UObject", UObject_Data),
        ("USubsystem", USubsystem_Data),
        ("UEngine", UEngine_Data),
        ("UGameEngine", UGameEngine_Data),
        ("UGearboxEngine", UGearboxEngine_Data),
    ]

    AGearboxGameInfo_Data._fields_ = []

    AGearboxGameInfo._fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("AInfo", AInfo_Data),
        ("AGameInfo", AGameInfo_Data),
        ("AGearboxGameInfo", AGearboxGameInfo_Data),
    ]

    UGearboxGFxMovie_Data._fields_ = [
        ("InteractionOverrideSounds", TArray_FAkEventResolver),
        ("TickRateSeconds", c_float),
        ("bTickScript", c_bool, 1),
        ("bTickFirstFrame", c_bool, 1),
        ("bRenderingDisabled", c_bool, 1),
        ("bSupportsStatePooling", c_bool, 1),
        ("bIsUsingFlashMouse", c_bool, 1),
        ("bBlockingMovie", c_bool, 1),
        ("bCloseOnDeath", c_bool, 1),
        ("AllStyles", TArray_UGFxMovieDrawStylePtr),
        ("MyDefinition", POINTER(UGFxMovieDefinition)),
        ("MyPool", POINTER(UGFxActorMoviePool)),
        ("PlayerOwners", TArray_AGearboxPlayerControllerPtr),
        ("ContextObject", POINTER(UObject)),
        ("LastTickTime", c_float),
        ("PoolParent", POINTER(UGearboxGFxMovie)),
        ("CurrentMovieState", FMovieStateStruct),
        ("BaseMovieStates", TArray_UGFxMovieStatePtr),
        ("AllMovieStates", TArray_UGFxMovieStatePtr),
        ("bMouseable", c_int),
        ("__OnInputAxis__Delegate", FScriptDelegate),
        ("__OnClosed__Delegate", FScriptDelegate),
    ]

    UGearboxGFxMovie._fields_ = [
        ("UObject", UObject_Data),
        ("UGFxMoviePlayer", UGFxMoviePlayer_Data),
        ("UGFxMovie", UGFxMovie_Data),
        ("UGearboxGFxMovie", UGearboxGFxMovie_Data),
    ]

    UGFxMovie_StateParent_Data._fields_ = [("StateClass", POINTER(UClass))]

    UGFxMovie_StateParent._fields_ = [
        ("UObject", UObject_Data),
        ("UGFxMoviePlayer", UGFxMoviePlayer_Data),
        ("UGFxMovie", UGFxMovie_Data),
        ("UGearboxGFxMovie", UGearboxGFxMovie_Data),
        ("UGFxMovie_StateParent", UGFxMovie_StateParent_Data),
    ]

    UGearboxGlobals_Data._fields_ = [
        ("TheGlobalsDefinition", POINTER(UGearboxGlobalsDefinition)),
        ("ExposureUtilityClass", POINTER(UClass)),
        ("ExposureUtilityStrategyClass", POINTER(UClass)),
        ("TheExposureUtility", POINTER(UExposureUtilityBase)),
        ("TheAIFactory", POINTER(UGearboxAIFactory)),
        ("TheRuleEngineLoadBalanceManager", POINTER(URuleEngineLoadBalanceManager)),
        ("TheGBXActorList", POINTER(UGBXActorList)),
        ("TheGBXObjectList", POINTER(UGBXObjectList)),
        ("ValidNameList", TArray_FValidNameRange),
        ("TheWireMgr", POINTER(AWireManager)),
        ("TheMessageManager", POINTER(UGbxMessageManager)),
        ("TheDynamicTextureActorList", POINTER(UGBXActorList)),
        ("ThePopulationMaster", POINTER(UPopulationMaster)),
        ("TheBehaviorKernel", POINTER(UBehaviorKernel)),
        ("TheScreenSpaceManager", POINTER(UScreenSpaceManager)),
        ("TheGFxManager", POINTER(UGFxMovieManager)),
        ("TheRenderTextureManager", POINTER(UGearboxRenderTextureManager)),
        ("GlobalInstanceClassName", FString),
        ("DefaultMaxPopulationActorCost", c_int),
        ("StateRecords", TArray_FLevelStateRecord),
        ("UIAudioComponent", POINTER(UAkComponent)),
        ("TheDialogManager", POINTER(UGearboxDialogManager)),
    ]

    UGearboxGlobals._fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEngineGlobals", UGearboxEngineGlobals_Data),
        ("UGearboxGlobals", UGearboxGlobals_Data),
    ]

    UGearboxGlobalsDefinition_Data._fields_ = [
        ("RespawnDelayInSeconds", c_float),
        ("Dialog", POINTER(UGearboxDialogGlobalsDefinition)),
        ("EulaMovieDefinition", POINTER(UGFxMovieDefinition)),
    ]

    UGearboxGlobalsDefinition._fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UGearboxGlobalsDefinition", UGearboxGlobalsDefinition_Data),
    ]

    UGearboxLocationRequest_Data._fields_ = [
        ("SearchOrigin", POINTER(USearchOrigin)),
        ("DirectionFromOrigin", POINTER(USearchDirection)),
        ("LocationFilterTest", POINTER(ULocationFilter)),
        ("DirectionCone", c_float),
        ("MinDistanceFromOrigin", FAttributeInitializationData),
        ("MaxDistanceFromOrigin", FAttributeInitializationData),
        ("SearchRandomness", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("SearchOriginResult", FVector),
        ("SearchDirectionResult", FVector),
    ]

    UGearboxLocationRequest._fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxLocationRequest", UGearboxLocationRequest_Data),
    ]

    UPawnMoveLocationRequest_Data._fields_ = [
        ("GoToCover", c_bool, 1),
        ("CoverSearchFilter", c_ubyte),
        ("RepathOption", c_ubyte),
        ("CoverFailureResponse", c_ubyte),
        ("DestinationTestNonCover", c_ubyte),
        ("RepathDistanceThresh", FAttributeInitializationData),
        ("FailureEvent", POINTER(URuleEventDef)),
        ("OverrideDistanceForCover", FAttributeInitializationData),
    ]

    UPawnMoveLocationRequest._fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxLocationRequest", UGearboxLocationRequest_Data),
        ("UPawnMoveLocationRequest", UPawnMoveLocationRequest_Data),
    ]

    AGearboxPawn_Data._fields_ = [
        ("VfTable_ISpecialMoveInterface", FPointer),
        ("VfTable_IGearboxDialogInterface", FPointer),
        ("NPCSightBone", FName),
        ("bWantsToMove", c_bool, 1),
        ("SMComponent", POINTER(USpecialMoveComponent)),
        ("ReplicatedSMData", FReplicatedSpecialMoveData),
        ("HasBeenShotAtRecently", FFlag),
        ("CoverState", FGearboxCoverState),
        ("CoverManager", POINTER(UGearboxCoverStateManager)),
        ("DialogComponent", POINTER(UGearboxDialogComponent)),
        ("DialogReplicatedData", FGearboxDialogReplicatedData),
        ("DyingScream", FAkPlayingInfo),
    ]

    AGearboxPawn._fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("APawn", APawn_Data),
        ("AGamePawn", AGamePawn_Data),
        ("AGearboxPawn", AGearboxPawn_Data),
    ]

    AGearboxPlayerController_Data._fields_ = [
        ("CurrentViewShake", FGearboxViewShakeInfo),
        ("BaseDamageShake", FGearboxViewShakeInfo),
        ("ShakeOffset", FVector),
        ("ShakeRot", FRotator),
        ("ShakeFOV", c_float),
        ("bWantsToShowStorageMenu", c_bool, 1),
        ("bShouldCheckForProfileDeviceRemoval", c_bool, 1),
        ("AIDebugCam", POINTER(UAIDebugCamera)),
        ("PreviousDebugPawn", POINTER(AGearboxPawn)),
        ("AIDebugCamClass", POINTER(UClass)),
        ("DamageShakeMagnitudeMultiplier", c_float),
        ("DamageShakeMagnitudeMultiplierBaseValue", c_float),
        ("DamageShakeMagnitudeMultiplierModifierStack", TArray_UAttributeModifierPtr),
        ("DamageShakeTimeMultiplier", c_float),
        ("DamageShakeTimeMultiplierBaseValue", c_float),
        ("DamageShakeTimeMultiplierModifierStack", TArray_UAttributeModifierPtr),
        ("LeviathanReplicationChannel", POINTER(ULeviathanChannel)),
        ("PlaySessionGuid", FGuid),
        ("SessionBundleNumber", c_int),
        ("CachedProfileSettings", POINTER(UGearboxProfileSettings)),
    ]

    AGearboxPlayerController._fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("AController", AController_Data),
        ("APlayerController", APlayerController_Data),
        ("AGamePlayerController", AGamePlayerController_Data),
        ("AGearboxPlayerController", AGearboxPlayerController_Data),
    ]

    UGearboxPlayerInput_Data._fields_ = []

    UGearboxPlayerInput._fields_ = [
        ("UObject", UObject_Data),
        ("UUIRoot", UUIRoot_Data),
        ("UInteraction", UInteraction_Data),
        ("UInput", UInput_Data),
        ("UPlayerInput", UPlayerInput_Data),
        ("UGearboxPlayerInput", UGearboxPlayerInput_Data),
    ]

    AGearboxPlayerReplicationInfo_Data._fields_ = [
        ("Difficulty", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Dummy", c_int),
    ]

    AGearboxPlayerReplicationInfo._fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("AInfo", AInfo_Data),
        ("AReplicationInfo", AReplicationInfo_Data),
        ("APlayerReplicationInfo", APlayerReplicationInfo_Data),
        ("AGearboxPlayerReplicationInfo", AGearboxPlayerReplicationInfo_Data),
    ]

    UGearboxProfileSettings_Data._fields_ = []

    UGearboxProfileSettings._fields_ = [
        ("UObject", UObject_Data),
        ("UOnlinePlayerStorage", UOnlinePlayerStorage_Data),
        ("UOnlineProfileSettings", UOnlineProfileSettings_Data),
        ("UGearboxProfileSettings", UGearboxProfileSettings_Data),
    ]

    UGearboxRenderTextureManager_Data._fields_ = [
        ("FreeList2D", TArray_UTexture2DPtr),
        ("FreeList", TArray_UTextureRenderTarget2DPtr),
        ("HoldDuration", c_float),
        ("TimeToNextTick", c_float),
        ("Thumbnails", TArray_FThumbnailRenderData),
        ("DefaultLights", TArray_FThumbnailLightData),
        ("ThumbnailTextureArea", c_float),
    ]

    UGearboxRenderTextureManager._fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxRenderTextureManager", UGearboxRenderTextureManager_Data),
    ]

    UGearboxSeqAct_DestroyPopulationActors_Data._fields_ = [
        ("SaveDestroyedActors", c_bool, 1),
        ("DisablePopulationSpawners", c_bool, 1),
        ("bActorsDestroyed", c_bool, 1),
        ("Opportunities", TArray_APopulationOpportunityPtr),
        ("Encounters", TArray_APopulationEncounterPtr),
    ]

    UGearboxSeqAct_DestroyPopulationActors._fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        ("USeqAct_Latent", USeqAct_Latent_Data),
        (
            "UGearboxSeqAct_DestroyPopulationActors",
            UGearboxSeqAct_DestroyPopulationActors_Data,
        ),
    ]

    UGearboxSeqAct_ResetPopulationCount_Data._fields_ = []

    UGearboxSeqAct_ResetPopulationCount._fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        (
            "UGearboxSeqAct_ResetPopulationCount",
            UGearboxSeqAct_ResetPopulationCount_Data,
        ),
    ]

    UGearboxSkeletalMeshComponent_Data._fields_ = [("FOV", c_float)]

    UGearboxSkeletalMeshComponent._fields_ = [
        ("UObject", UObject_Data),
        ("UComponent", UComponent_Data),
        ("UActorComponent", UActorComponent_Data),
        ("UPrimitiveComponent", UPrimitiveComponent_Data),
        ("UMeshComponent", UMeshComponent_Data),
        ("USkeletalMeshComponent", USkeletalMeshComponent_Data),
        ("UGearboxSkeletalMeshComponent", UGearboxSkeletalMeshComponent_Data),
    ]

    UGearboxStaticMeshComponent_Data._fields_ = [("FOV", c_float)]

    UGearboxStaticMeshComponent._fields_ = [
        ("UObject", UObject_Data),
        ("UComponent", UComponent_Data),
        ("UActorComponent", UActorComponent_Data),
        ("UPrimitiveComponent", UPrimitiveComponent_Data),
        ("UMeshComponent", UMeshComponent_Data),
        ("UStaticMeshComponent", UStaticMeshComponent_Data),
        ("UGearboxStaticMeshComponent", UGearboxStaticMeshComponent_Data),
    ]

    UGestaltSkeletalMeshDefinition_Data._fields_ = [
        ("GestaltSkeletalMesh", POINTER(USkeletalMesh)),
        ("bStaticMeshRigidBodyMesh", c_bool, 1),
        ("GestaltInfos", TArray_FGestaltInfo),
        ("GestaltAccessoryNames", TArray_FGestaltAccessoryNameEntry),
        ("GestaltSocketMappings", TArray_FGestaltSocketRemapEntry),
        ("GestaltPartBounds", TArray_FGestaltPartBoundsEntry),
    ]

    UGestaltSkeletalMeshDefinition._fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UGestaltSkeletalMeshDefinition", UGestaltSkeletalMeshDefinition_Data),
    ]

    UGFxActorMoviePool_Data._fields_ = [
        ("MovieDefinition", POINTER(UGFxMovieDefinition)),
        ("Pools", TArray_FMovieInstanceArray),
        ("MovieTargets", TArray_FScriptInterface),
    ]

    UGFxActorMoviePool._fields_ = [
        ("UObject", UObject_Data),
        ("UGFxActorMoviePool", UGFxActorMoviePool_Data),
    ]

    UGFxMovieDefinition_Data._fields_ = [
        ("SwfMovie", POINTER(USwfMovie)),
        ("SwfMovieClass", POINTER(UClass)),
        ("Movie", POINTER(UGearboxGFxMovie)),
        ("ExternalInterfaceClass", POINTER(UClass)),
        ("bTakeFocus", c_bool, 1),
        ("bCaptureInput", c_bool, 1),
        ("bStartPaused", c_bool, 1),
        ("bIsModalGameMenu", c_bool, 1),
        ("bOverrideWorldLighting", c_bool, 1),
        ("bInputOwnerOnly", c_bool, 1),
        ("bInputAllKeys", c_bool, 1),
        ("FadeInSeconds", c_float),
        ("FadeOutSeconds", c_float),
        ("WorldLightingDirectionOffset", FRotator),
        ("DrawStyle", POINTER(UGFxMovieDrawStyle)),
        ("DepthPriority", c_int),
        ("PoolType", c_ubyte),
        ("ScaleMode", c_ubyte),
        ("AlignMode", c_ubyte),
        ("TimingMode", c_ubyte),
        ("RenderTextureMode", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Pool", FName),
        ("CustomStates", TArray_UGFxMovieStatePtr),
        ("AutoActivateStates", TArray_FName),
        ("MenuLinks", TArray_FGFxMenuLink),
        ("RenderTexture", POINTER(UTextureRenderTarget2D)),
        ("InteractionOverrideSounds", TArray_FAkEventResolver),
        ("BaseMovieStates", TArray_UGFxMovieStatePtr),
    ]

    UGFxMovieDefinition._fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UGFxMovieDefinition", UGFxMovieDefinition_Data),
    ]

    UGearboxEULAGFxMovieDefinition_Data._fields_ = []

    UGearboxEULAGFxMovieDefinition._fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UGFxMovieDefinition", UGFxMovieDefinition_Data),
        ("UGearboxEULAGFxMovieDefinition", UGearboxEULAGFxMovieDefinition_Data),
    ]

    UGFxMovieDrawStyle_Data._fields_ = [
        ("Movie", POINTER(UGearboxGFxMovie)),
        ("TargetActor", FScriptInterface),
    ]

    UGFxMovieDrawStyle._fields_ = [
        ("UObject", UObject_Data),
        ("UGFxMovieDrawStyle", UGFxMovieDrawStyle_Data),
    ]

    UGFxMovieDrawStyleHUD_Data._fields_ = [
        ("AnchorPoints", TArray_FHUDAnchorPoint),
        ("MovieDimensions", FHUDCoordValue * 2),
        ("bCacheValid", c_bool, 1),
        ("MovieScreenPos", c_float * 4),
    ]

    UGFxMovieDrawStyleHUD._fields_ = [
        ("UObject", UObject_Data),
        ("UGFxMovieDrawStyle", UGFxMovieDrawStyle_Data),
        ("UGFxMovieDrawStyleHUD", UGFxMovieDrawStyleHUD_Data),
    ]

    UGFxMovieDrawStyleRTT_Data._fields_ = [
        ("TextureSize", c_int),
        ("RenderTextureMode", c_ubyte),
    ]

    UGFxMovieDrawStyleRTT._fields_ = [
        ("UObject", UObject_Data),
        ("UGFxMovieDrawStyle", UGFxMovieDrawStyle_Data),
        ("UGFxMovieDrawStyleRTT", UGFxMovieDrawStyleRTT_Data),
    ]

    UGFxMovieDrawStyleComponent_Data._fields_ = []

    UGFxMovieDrawStyleComponent._fields_ = [
        ("UObject", UObject_Data),
        ("UGFxMovieDrawStyle", UGFxMovieDrawStyle_Data),
        ("UGFxMovieDrawStyleRTT", UGFxMovieDrawStyleRTT_Data),
        ("UGFxMovieDrawStyleComponent", UGFxMovieDrawStyleComponent_Data),
    ]

    UGFxMovieDrawStyleMesh_Data._fields_ = [
        ("MeshComponentArchetype", POINTER(UMeshComponent)),
        ("UseStaticMesh", POINTER(UStaticMesh)),
        ("UseSkeletalMesh", POINTER(USkeletalMesh)),
        ("UseMeshInstanceName", FName),
        ("MaterialIndex", c_int),
        ("OverrideMaterial", POINTER(UMaterial)),
        ("TextureParameterName", FName),
        ("Component", POINTER(UMeshComponent)),
        ("Mati", POINTER(UMaterialInstanceConstant)),
        ("OriginalMaterial", POINTER(UMaterialInterface)),
    ]

    UGFxMovieDrawStyleMesh._fields_ = [
        ("UObject", UObject_Data),
        ("UGFxMovieDrawStyle", UGFxMovieDrawStyle_Data),
        ("UGFxMovieDrawStyleRTT", UGFxMovieDrawStyleRTT_Data),
        ("UGFxMovieDrawStyleComponent", UGFxMovieDrawStyleComponent_Data),
        ("UGFxMovieDrawStyleMesh", UGFxMovieDrawStyleMesh_Data),
    ]

    UGFxMovieDrawStyleSprite_Data._fields_ = [
        ("SpriteSize", c_int),
        ("TheSprite", POINTER(USpriteRTTComponent)),
    ]

    UGFxMovieDrawStyleSprite._fields_ = [
        ("UObject", UObject_Data),
        ("UGFxMovieDrawStyle", UGFxMovieDrawStyle_Data),
        ("UGFxMovieDrawStyleRTT", UGFxMovieDrawStyleRTT_Data),
        ("UGFxMovieDrawStyleComponent", UGFxMovieDrawStyleComponent_Data),
        ("UGFxMovieDrawStyleSprite", UGFxMovieDrawStyleSprite_Data),
    ]

    UGFxMovieDrawStyleSplitscreen_Data._fields_ = []

    UGFxMovieDrawStyleSplitscreen._fields_ = [
        ("UObject", UObject_Data),
        ("UGFxMovieDrawStyle", UGFxMovieDrawStyle_Data),
        ("UGFxMovieDrawStyleSplitscreen", UGFxMovieDrawStyleSplitscreen_Data),
    ]

    UGFxMovieManager_Data._fields_ = [
        ("Subscribers", TArray_AGearboxPlayerControllerPtr),
        ("MoviePools", TArray_UGFxActorMoviePoolPtr),
    ]

    UGFxMovieManager._fields_ = [
        ("UObject", UObject_Data),
        ("UGFxMovieManager", UGFxMovieManager_Data),
    ]

    UGFxMovieState_Data._fields_ = [
        ("StateName", FName),
        ("DefaultState", FName),
        ("StateType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("AllStates", TArray_FMovieStateData),
    ]

    UGFxMovieState._fields_ = [
        ("UObject", UObject_Data),
        ("UGFxMovieState", UGFxMovieState_Data),
    ]

    UGFxMovieStateCustom_Data._fields_ = [("CustomStates", TArray_FMovieStateData)]

    UGFxMovieStateCustom._fields_ = [
        ("UObject", UObject_Data),
        ("UGFxMovieState", UGFxMovieState_Data),
        ("UGFxMovieStateCustom", UGFxMovieStateCustom_Data),
    ]

    UGFxMovieStateFlags_Data._fields_ = [("CustomFlags", TArray_FName)]

    UGFxMovieStateFlags._fields_ = [
        ("UObject", UObject_Data),
        ("UGFxMovieState", UGFxMovieState_Data),
        ("UGFxMovieStateFlags", UGFxMovieStateFlags_Data),
    ]

    UGFxMovieStatePlayerAware_Data._fields_ = [
        ("LookAtThreshold", c_float),
        ("LookStates", TArray_FMovieStateData),
        ("RangeStates", TArray_FMovieRangeStateData),
    ]

    UGFxMovieStatePlayerAware._fields_ = [
        ("UObject", UObject_Data),
        ("UGFxMovieState", UGFxMovieState_Data),
        ("UGFxMovieStatePlayerAware", UGFxMovieStatePlayerAware_Data),
    ]

    UIAIInterface_Data._fields_ = []

    UIAIInterface._fields_ = [
        ("UObject", UObject_Data),
        ("UInterface", UInterface_Data),
        ("UIAIInterface", UIAIInterface_Data),
    ]

    UIConstructObject_Data._fields_ = []

    UIConstructObject._fields_ = [
        ("UObject", UObject_Data),
        ("UInterface", UInterface_Data),
        ("UIConstructObject", UIConstructObject_Data),
    ]

    UIGFxActorMovie_Data._fields_ = []

    UIGFxActorMovie._fields_ = [
        ("UObject", UObject_Data),
        ("UInterface", UInterface_Data),
        ("UIGFxActorMovie", UIGFxActorMovie_Data),
    ]

    UINounAttributeProvider_Data._fields_ = []

    UINounAttributeProvider._fields_ = [
        ("UObject", UObject_Data),
        ("UInterface", UInterface_Data),
        ("UINounAttributeProvider", UINounAttributeProvider_Data),
    ]

    UInterfaceGearboxCamera_Data._fields_ = []

    UInterfaceGearboxCamera._fields_ = [
        ("UObject", UObject_Data),
        ("UInterface", UInterface_Data),
        ("UInterfaceGearboxCamera", UInterfaceGearboxCamera_Data),
    ]

    UIStreamingDataEvent_Data._fields_ = []

    UIStreamingDataEvent._fields_ = [
        ("UObject", UObject_Data),
        ("UInterface", UInterface_Data),
        ("UIStreamingDataEvent", UIStreamingDataEvent_Data),
    ]

    ULeviathanChannel_Data._fields_ = [("Unknown1", c_ubyte * 0x10)]

    ULeviathanChannel._fields_ = [
        ("UObject", UObject_Data),
        ("UChannel", UChannel_Data),
        ("ULeviathanChannel", ULeviathanChannel_Data),
    ]

    UNoContextNeededAttributeContextResolver_Data._fields_ = []

    UNoContextNeededAttributeContextResolver._fields_ = [
        ("UObject", UObject_Data),
        ("UAttributeContextResolver", UAttributeContextResolver_Data),
        (
            "UNoContextNeededAttributeContextResolver",
            UNoContextNeededAttributeContextResolver_Data,
        ),
    ]

    UNounAttributeValueResolver_Data._fields_ = [
        ("ReplicationStrategy", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("DefaultValue", FAttributeInitializationData),
    ]

    UNounAttributeValueResolver._fields_ = [
        ("UObject", UObject_Data),
        ("UAttributeValueResolver", UAttributeValueResolver_Data),
        ("UNounAttributeValueResolver", UNounAttributeValueResolver_Data),
    ]

    UObjectFunctionAttributeValueResolver_Data._fields_ = [("FunctionCall", FString)]

    UObjectFunctionAttributeValueResolver._fields_ = [
        ("UObject", UObject_Data),
        ("UAttributeValueResolver", UAttributeValueResolver_Data),
        (
            "UObjectFunctionAttributeValueResolver",
            UObjectFunctionAttributeValueResolver_Data,
        ),
    ]

    UObjectPropertyContextResolver_Data._fields_ = [("PropertyName", FName)]

    UObjectPropertyContextResolver._fields_ = [
        ("UObject", UObject_Data),
        ("UAttributeContextResolver", UAttributeContextResolver_Data),
        ("UObjectPropertyContextResolver", UObjectPropertyContextResolver_Data),
    ]

    UPhysicsStateExpressionEvaluator_Data._fields_ = [
        ("PhysicsState", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("bIsInState", c_bool, 1),
    ]

    UPhysicsStateExpressionEvaluator._fields_ = [
        ("UObject", UObject_Data),
        ("UExpressionEvaluator", UExpressionEvaluator_Data),
        ("UPhysicsStateExpressionEvaluator", UPhysicsStateExpressionEvaluator_Data),
    ]

    UPopulationAspect_Data._fields_ = []

    UPopulationAspect._fields_ = [
        ("UObject", UObject_Data),
        ("UPopulationAspect", UPopulationAspect_Data),
    ]

    UPopulationBodyTag_Data._fields_ = []

    UPopulationBodyTag._fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UPopulationBodyTag", UPopulationBodyTag_Data),
    ]

    APopulationEncounter_Data._fields_ = [
        ("EncounterPopulationDef", POINTER(UPopulationDefinition)),
        ("MemberOutposts", TArray_APopulationOpportunityPtr),
        ("MemberOpportunities", TArray_APopulationOpportunityPtr),
        ("SpawnLimits", TArray_FEncounterLimitData),
        ("IsEnabled", c_bool, 1),
        ("AutoEnableOpportunities", c_bool, 1),
        ("bWaitingForNextWave", c_bool, 1),
        ("bIsWaitingForRespawn", c_bool, 1),
        ("Waves", TArray_FEncounterWaveData),
        ("CurrentWave", c_int),
        ("TimeToStartNextWave", c_float),
        ("RespawnDelayStartTime", c_float),
    ]

    APopulationEncounter._fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("AInfo", AInfo_Data),
        ("APopulationEncounter", APopulationEncounter_Data),
    ]

    UPopulationEncounterRenderingComponent_Data._fields_ = []

    UPopulationEncounterRenderingComponent._fields_ = [
        ("UObject", UObject_Data),
        ("UComponent", UComponent_Data),
        ("UActorComponent", UActorComponent_Data),
        ("UPrimitiveComponent", UPrimitiveComponent_Data),
        (
            "UPopulationEncounterRenderingComponent",
            UPopulationEncounterRenderingComponent_Data,
        ),
    ]

    UPopulationOpportunityCombatRenderingComponent_Data._fields_ = []

    UPopulationOpportunityCombatRenderingComponent._fields_ = [
        ("UObject", UObject_Data),
        ("UComponent", UComponent_Data),
        ("UActorComponent", UActorComponent_Data),
        ("UPrimitiveComponent", UPrimitiveComponent_Data),
        (
            "UPopulationOpportunityCombatRenderingComponent",
            UPopulationOpportunityCombatRenderingComponent_Data,
        ),
    ]

    UPopulationSpawnedActorTagDefinition_Data._fields_ = []

    UPopulationSpawnedActorTagDefinition._fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        (
            "UPopulationSpawnedActorTagDefinition",
            UPopulationSpawnedActorTagDefinition_Data,
        ),
    ]

    UPopUpDebugBarGraph_Data._fields_ = [
        ("Columns", TArray_FColumnDataStruct),
        ("TitleText", FString),
        ("BaseLineColor", FColor),
        ("TitleTextColor", FColor),
        ("ColumnWidth", c_float),
        ("ColumnPadding", c_float),
        ("ColumnMaxHeight", c_float),
        ("TextScale", c_float),
        ("TextPadding", c_float),
        ("TitleTextScale", c_float),
        ("TitleTextPaddingY", c_float),
        ("ColumnValueTextOffsetY", c_float),
    ]

    UPopUpDebugBarGraph._fields_ = [
        ("UObject", UObject_Data),
        ("UPopUpDebugBarGraph", UPopUpDebugBarGraph_Data),
    ]

    URandomAttributeValueResolver_Data._fields_ = [
        ("bUseIntegerRandomization", c_bool, 1),
        ("LowerBound", FAttributeInitializationData),
        ("UpperBound", FAttributeInitializationData),
        ("ValueLifetime", FAttributeInitializationData),
        ("SavedRandomValues", TArray_FSavedRandomValue),
    ]

    URandomAttributeValueResolver._fields_ = [
        ("UObject", UObject_Data),
        ("UAttributeValueResolver", UAttributeValueResolver_Data),
        ("URandomAttributeValueResolver", URandomAttributeValueResolver_Data),
    ]

    URegionDefinition_Data._fields_ = []

    URegionDefinition._fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("URegionDefinition", URegionDefinition_Data),
    ]

    URootMotionDefinition_Data._fields_ = [
        ("RootMotionMode", c_ubyte),
        ("RootBoneOption", c_ubyte * 3),
        ("RootRotationMode", c_ubyte),
        ("RootRotationOption", c_ubyte * 3),
    ]

    URootMotionDefinition._fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("URootMotionDefinition", URootMotionDefinition_Data),
    ]

    URuleEngineLoadBalanceManager_Data._fields_ = [
        ("NumTimeSpentThisFrame", c_float),
        ("LastTimeFullUpdate", c_float),
        ("WaitingEngines", TArray_FRuleEngineLoadBalanceStruct),
        ("DebugEngines", TArray_FDebugLoadBalance),
        ("ManagerStats", TArray_FRELBManagerStats),
        ("bIsDebugging", c_bool, 1),
        ("MSPosition", c_int),
    ]

    URuleEngineLoadBalanceManager._fields_ = [
        ("UObject", UObject_Data),
        ("URuleEngineLoadBalanceManager", URuleEngineLoadBalanceManager_Data),
    ]

    UScreenSpaceManager_Data._fields_ = [
        ("pLocalPlayer", POINTER(ULocalPlayer)),
        ("ViewWidth", c_int),
        ("ViewHeight", c_int),
        ("Unknown1", c_ubyte * 0x8),
        ("ViewProjectionMatrix", FMatrix),
        ("bMatricesUpToDate", c_bool, 1),
    ]

    UScreenSpaceManager._fields_ = [
        ("UObject", UObject_Data),
        ("UScreenSpaceManager", UScreenSpaceManager_Data),
    ]

    USeqAct_AllPlayersInVolume_Data._fields_ = [
        ("Volumes", TArray_AVolumePtr),
        ("bAllActorsInVolumes", c_bool, 1),
        ("bCheckForAllPlayers", c_bool, 1),
    ]

    USeqAct_AllPlayersInVolume._fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        ("USeqAct_AllPlayersInVolume", USeqAct_AllPlayersInVolume_Data),
    ]

    USeqCond_CompareLocation_Data._fields_ = [("CheckRadius", c_float)]

    USeqCond_CompareLocation._fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceCondition", USequenceCondition_Data),
        ("USeqCond_CompareLocation", USeqCond_CompareLocation_Data),
    ]

    USeqCond_CompareString_Data._fields_ = [("bCaseSensitive", c_bool, 1)]

    USeqCond_CompareString._fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceCondition", USequenceCondition_Data),
        ("USeqCond_CompareString", USeqCond_CompareString_Data),
    ]

    USeqCond_GetLanguage_Data._fields_ = [("LangList", TArray_FString)]

    USeqCond_GetLanguage._fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceCondition", USequenceCondition_Data),
        ("USeqCond_GetLanguage", USeqCond_GetLanguage_Data),
    ]

    USimpleMathValueResolver_Data._fields_ = [
        ("Arg1Option", c_ubyte),
        ("Operand", c_ubyte),
        ("Unknown1", c_ubyte * 0x2),
        ("Arg1Attribute", FAttributeInitializationData),
        ("Argument", FAttributeInitializationData),
    ]

    USimpleMathValueResolver._fields_ = [
        ("UObject", UObject_Data),
        ("UAttributeValueResolver", UAttributeValueResolver_Data),
        ("USimpleMathValueResolver", USimpleMathValueResolver_Data),
    ]

    USpecialMoveComponent_Data._fields_ = [
        ("bLocalPlay", c_bool, 1),
        ("StartTime", c_float),
        ("SMI", FScriptInterface),
        ("CurrentSMData", FSpecialMoveData),
        ("SMDQueue", TArray_FSpecialMoveData),
        ("SMBlendNode", POINTER(UAnimNodeSpecialMoveBlend)),
    ]

    USpecialMoveComponent._fields_ = [
        ("UObject", UObject_Data),
        ("UComponent", UComponent_Data),
        ("UActorComponent", UActorComponent_Data),
        ("USpecialMoveComponent", USpecialMoveComponent_Data),
    ]

    USpecialMoveDefinition_Data._fields_ = [
        ("NextSpecialMove", POINTER(USpecialMoveDefinition)),
        ("StopExpression", POINTER(UExpressionEvaluator)),
        ("bOwnerAlwaysRelevant", c_bool, 1),
        ("bClientHasAuthority", c_bool, 1),
    ]

    USpecialMoveDefinition._fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("USpecialMoveDefinition", USpecialMoveDefinition_Data),
    ]

    USpecialMoveExpressionList_Data._fields_ = [
        ("SpecialMoveList", TArray_FSMExpressionList)
    ]

    USpecialMoveExpressionList._fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("USpecialMoveDefinition", USpecialMoveDefinition_Data),
        ("USpecialMoveExpressionList", USpecialMoveExpressionList_Data),
    ]

    USpecialMoveRandom_Data._fields_ = [("RandomList", TArray_FSMRandomPair)]

    USpecialMoveRandom._fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("USpecialMoveDefinition", USpecialMoveDefinition_Data),
        ("USpecialMoveRandom", USpecialMoveRandom_Data),
    ]

    USpecialMoveInterface_Data._fields_ = []

    USpecialMoveInterface._fields_ = [
        ("UObject", UObject_Data),
        ("UInterface", UInterface_Data),
        ("USpecialMoveInterface", USpecialMoveInterface_Data),
    ]

    UStateAttributeResolver_Data._fields_ = [("NameKey", FName)]

    UStateAttributeResolver._fields_ = [
        ("UObject", UObject_Data),
        ("UAttributeValueResolver", UAttributeValueResolver_Data),
        ("UStateAttributeResolver", UStateAttributeResolver_Data),
    ]

    UTimeValueResolver_Data._fields_ = [
        ("TimeMode", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("bNormalizeTime", c_bool, 1),
        ("StartTime", FAttributeInitializationData),
        ("TotalTime", FAttributeInitializationData),
    ]

    UTimeValueResolver._fields_ = [
        ("UObject", UObject_Data),
        ("UAttributeValueResolver", UAttributeValueResolver_Data),
        ("UTimeValueResolver", UTimeValueResolver_Data),
    ]

    AWireManager_Data._fields_ = [("DefaultMaterial", POINTER(UMaterialInterface))]

    AWireManager._fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("AWireManager", AWireManager_Data),
    ]

    AWireTerminal_Data._fields_ = [
        ("NextTerminal", POINTER(AWireTerminal)),
        ("Linkages", TArray_FWireLinkage),
        ("WireMaterial", POINTER(UMaterialInterface)),
        ("bTerminalDirty", c_bool, 1),
    ]

    AWireTerminal._fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("AStaticMeshActorBase", AStaticMeshActorBase_Data),
        ("AStaticMeshActor", AStaticMeshActor_Data),
        ("AWireTerminal", AWireTerminal_Data),
    ]

    AWiringActor_Data._fields_ = []

    AWiringActor._fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("AStaticMeshActorBase", AStaticMeshActorBase_Data),
        ("AStaticMeshActor", AStaticMeshActor_Data),
        ("AWiringActor", AWiringActor_Data),
    ]

    UWiringMesh_Data._fields_ = [("Unknown1", c_ubyte * 0x240)]

    UWiringMesh._fields_ = [
        ("UObject", UObject_Data),
        ("UStaticMesh", UStaticMesh_Data),
        ("UWiringMesh", UWiringMesh_Data),
    ]

    UActionResource_Data._fields_ = []

    UActionResource._fields_ = [
        ("UObject", UObject_Data),
        ("UActionResource", UActionResource_Data),
    ]

    UActionSequence_Data._fields_ = [
        ("ResourcesUsed", TArray_UClassPtr),
        ("MyRuleEngine", POINTER(URuleEngine)),
        ("AttachedRule", POINTER(URule)),
        ("LatentFloat", c_float),
        ("bInitialized", c_bool, 1),
        ("bDoWorkFinished", c_bool, 1),
        ("bInAtomicSection", c_bool, 1),
        ("bDoNotLoadBalance", c_bool, 1),
        ("ParentSequence", POINTER(UActionSequence)),
        ("ChildSequence", POINTER(UActionSequence)),
        ("TheAIFactory", POINTER(UAIFactoryBase)),
        ("ContextMenu", FString),
        ("StoredDeltaTime", c_float),
        ("FlagValuesToSetOnBegin", TArray_FFlagDefinitionInitialization),
        ("FlagValuesToSetOnEnd", TArray_FFlagDefinitionInitialization),
        ("AI", FScriptInterface),
        ("BehaviorOutputs", TArray_FName),
        ("BehaviorName", FName),
    ]

    UActionSequence._fields_ = [
        ("UObject", UObject_Data),
        ("UActionSequence", UActionSequence_Data),
    ]

    UActionSequenceList_Data._fields_ = [("CurrentIndex", c_int)]

    UActionSequenceList._fields_ = [
        ("UObject", UObject_Data),
        ("UActionSequence", UActionSequence_Data),
        ("UActionSequenceList", UActionSequenceList_Data),
    ]

    UActionSequencePawn_Data._fields_ = [
        ("MyGearboxMind", POINTER(AGearboxMind)),
        ("MyGearboxPawn", POINTER(AGearboxPawn)),
    ]

    UActionSequencePawn._fields_ = [
        ("UObject", UObject_Data),
        ("UActionSequence", UActionSequence_Data),
        ("UActionSequencePawn", UActionSequencePawn_Data),
    ]

    UAction_PawnMovementBase_Data._fields_ = [
        ("CachedSearchOrigin", FVector),
        ("CoverCheckThrottle", FFlag),
        ("CoverCheckThrottleInterval", c_float),
        ("ShouldRepeatNavSearch", c_bool, 1),
        ("Interrupted", c_bool, 1),
        ("GoToCover", c_bool, 1),
        ("UsePreciseArrival", c_bool, 1),
        ("NewGoalLocation", FVector),
        ("OneMoveRequest", POINTER(UPawnMoveLocationRequest)),
        ("MoveRequestClass", POINTER(UClass)),
        ("AttributesToEvaluate", TArray_FAttributeInitializationData),
        ("AttributeEvalStyle", c_ubyte),
        ("SearchRandomness", c_ubyte),
        ("CoverSearchFilter", c_ubyte),
        ("CoverFailureResponse", c_ubyte),
        ("RepathOption", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("SearchOrigin", POINTER(USearchOrigin)),
        ("DirectionFromOrigin", POINTER(USearchDirection)),
        ("DirectionCone", c_float),
        ("LocationFilterTest", POINTER(ULocationFilter)),
        ("MinDistanceFromOrigin", FAttributeInitializationData),
        ("MaxDistanceFromOrigin", FAttributeInitializationData),
        ("OverrideDistanceForCover", FAttributeInitializationData),
        ("RepathDistanceThresh", FAttributeInitializationData),
        ("FailureEvent", POINTER(URuleEventDef)),
    ]

    UAction_PawnMovementBase._fields_ = [
        ("UObject", UObject_Data),
        ("UActionSequence", UActionSequence_Data),
        ("UActionSequencePawn", UActionSequencePawn_Data),
        ("UAction_PawnMovementBase", UAction_PawnMovementBase_Data),
    ]

    UActionSequenceRandom_Data._fields_ = [
        ("ActionList", TArray_FActionSequenceRandomData)
    ]

    UActionSequenceRandom._fields_ = [
        ("UObject", UObject_Data),
        ("UActionSequence", UActionSequence_Data),
        ("UActionSequenceRandom", UActionSequenceRandom_Data),
    ]

    UAIComponent_Data._fields_ = [
        ("UpdateRate", c_float),
        ("AI", FScriptInterface),
        ("bInitialized", c_bool, 1),
        ("AIDef", POINTER(UAIDefinition)),
        ("LastStateUpdateTime", c_float),
        ("CurrentState", FPointer),
        ("ResourceData", TArray_FAIResourceData),
        ("CurrentTarget", POINTER(AActor)),
        ("ScriptedTarget", POINTER(AActor)),
        ("LastTargetUpdateTime", c_float),
        ("Targets", TArray_UMindTargetInfoPtr),
        ("TargetingDef", POINTER(UTargetingDefinition)),
        ("MindTargetInfoClass", POINTER(UClass)),
        ("Holds", TArray_FAIHoldData),
        ("TargetHolds", TArray_FAIHoldData),
        ("MovementHolds", TArray_FAIHoldData),
        ("DemigodHolds", TArray_FAIHoldData),
        ("GodHolds", TArray_FAIHoldData),
        ("DialogHolds", TArray_FAIHoldData),
    ]

    UAIComponent._fields_ = [
        ("UObject", UObject_Data),
        ("UComponent", UComponent_Data),
        ("UActorComponent", UActorComponent_Data),
        ("UAIComponent", UAIComponent_Data),
    ]

    UAICostExpressionEvaluator_Data._fields_ = [
        ("Multiplier", c_int),
        ("PopDef", POINTER(UPopulationDefinition)),
    ]

    UAICostExpressionEvaluator._fields_ = [
        ("UObject", UObject_Data),
        ("UExpressionEvaluator", UExpressionEvaluator_Data),
        ("UAICostExpressionEvaluator", UAICostExpressionEvaluator_Data),
    ]

    UAIFactoryBase_Data._fields_ = [
        ("KnowledgeRecordList", TArray_FKnowledgeRecordStruct),
        ("RuleSets", TArray_FRuleSetRecord),
        ("Rules", TArray_FRuleRecord),
        ("ActionSequences", TArray_FActionSequenceRecord),
        ("TargetRecords", TArray_FTargetInfoRecord),
        ("AIDefinitionRecords", TArray_FAIDefinitionRecord),
        ("TimeStampedRecordLifetime", c_float),
    ]

    UAIFactoryBase._fields_ = [
        ("UObject", UObject_Data),
        ("UAIFactoryBase", UAIFactoryBase_Data),
    ]

    UGearboxAIFactory_Data._fields_ = []

    UGearboxAIFactory._fields_ = [
        ("UObject", UObject_Data),
        ("UAIFactoryBase", UAIFactoryBase_Data),
        ("UGearboxAIFactory", UGearboxAIFactory_Data),
    ]

    UAIResource_Data._fields_ = [
        ("ResourceRestrictions", TArray_FAIResourceRestriction),
        ("MaxUsers", c_int),
        ("MinUsers", c_int),
    ]

    UAIResource._fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UAIResource", UAIResource_Data),
    ]

    UAIResourceExpressionEvaluator_Data._fields_ = [
        ("Option", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Resource", POINTER(UAIResource)),
    ]

    UAIResourceExpressionEvaluator._fields_ = [
        ("UObject", UObject_Data),
        ("UExpressionEvaluator", UExpressionEvaluator_Data),
        ("UAIResourceExpressionEvaluator", UAIResourceExpressionEvaluator_Data),
    ]

    UAllegianceExpressionEvaluator_Data._fields_ = [
        ("AllegianceCheck", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Allegiance", POINTER(UPawnAllegiance)),
    ]

    UAllegianceExpressionEvaluator._fields_ = [
        ("UObject", UObject_Data),
        ("UExpressionEvaluator", UExpressionEvaluator_Data),
        ("UAllegianceExpressionEvaluator", UAllegianceExpressionEvaluator_Data),
    ]

    UAwarenessZoneCollectionDefinition_Data._fields_ = [
        ("DefaultAwarenessZones", TArray_UAwarenessZoneDefinitionPtr),
        ("CollectionName", FName),
    ]

    UAwarenessZoneCollectionDefinition._fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UAwarenessZoneCollectionDefinition", UAwarenessZoneCollectionDefinition_Data),
    ]

    UAwarenessZoneDefinition_Data._fields_ = [
        ("ZoneName", FString),
        ("OuterRimInfinitelyFarAway", c_bool, 1),
        ("ViewConeOnlyUsedForUnknownTargets", c_bool, 1),
        ("NeverForgetHiddenThreats", c_bool, 1),
        ("OuterRimDistance", c_float),
        ("ViewConeStyle", c_ubyte),
        ("SpecialExposureBehavior", c_ubyte),
        ("HearingBehavior", c_ubyte),
        ("Unknown1", c_ubyte * 0x1),
        ("ViewConeFieldOfViewInDegrees", c_float),
        ("MinExposureRatingConsideredVisible", c_float),
        ("ForgetHiddenThreatsAfterXSeconds", c_float),
        ("TargetSelectionPriority", c_float),
        ("ZoneColor", FColor),
        ("TimeFiringAtLastKnownLocation", c_float),
    ]

    UAwarenessZoneDefinition._fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UAwarenessZoneDefinition", UAwarenessZoneDefinition_Data),
    ]

    UBehavior_SendGbxMessage_Data._fields_ = [
        ("MessageDefinition", POINTER(UGbxMessageDefinition)),
        ("AssignSenderTo", c_ubyte),
        ("AssignSubjectTo", c_ubyte),
        ("TakeLocationFrom", c_ubyte),
        ("Unknown1", c_ubyte * 0x1),
        ("MetaData", FGbxMessageSimpleMetaData),
    ]

    UBehavior_SendGbxMessage._fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_SendGbxMessage", UBehavior_SendGbxMessage_Data),
    ]

    UBehavior_SetFlag_Data._fields_ = [
        ("FlagsToSet", TArray_FFlagDefinitionInitialization)
    ]

    UBehavior_SetFlag._fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_SetFlag", UBehavior_SetFlag_Data),
    ]

    UBestTargetAttributeContextResolver_Data._fields_ = [("bGetTargetInfo", c_bool, 1)]

    UBestTargetAttributeContextResolver._fields_ = [
        ("UObject", UObject_Data),
        ("UAttributeContextResolver", UAttributeContextResolver_Data),
        (
            "UBestTargetAttributeContextResolver",
            UBestTargetAttributeContextResolver_Data,
        ),
    ]

    UCharacterClassMessageDefinition_Data._fields_ = [
        ("BehaviorTriggers", TArray_FBehaviorTriggerMessageStruct)
    ]

    UCharacterClassMessageDefinition._fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UCharacterClassMessageDefinition", UCharacterClassMessageDefinition_Data),
    ]

    UCoverSearchCriteria_Data._fields_ = [
        ("DoDistanceToOriginCandidateTest", c_bool, 1),
        ("DoProvidesCoverCandidateTest", c_bool, 1),
        ("DoDistanceToThreatCandidateTest", c_bool, 1),
        ("DoVantageToBestTargetCandidateTest", c_bool, 1),
        ("DoVantageToAnyTargetCandidateTest", c_bool, 1),
        ("DoAssignmentVolumeCandidateTest", c_bool, 1),
        ("DoBlacklistedCoverCandidateTest", c_bool, 1),
        ("DoScoringForDistanceToOrigin", c_bool, 1),
        ("DoScoringForDistanceToThreat", c_bool, 1),
        ("DoScoringForProvidesCover", c_bool, 1),
        ("DoScoringForVantageOnBestTarget", c_bool, 1),
        ("DoScoringForVantageOnAnyTarget", c_bool, 1),
        ("DoScoringForUnoccupiedLink", c_bool, 1),
        ("DoScoringForNonBlacklistedCover", c_bool, 1),
        ("DistanceToOriginCandidateTestMax", c_float),
        ("DistanceToThreatCandidateTest", c_float),
        ("MinDistanceToOrigin", c_float),
        ("MaxDistanceToOrigin", c_float),
        ("ScoreDistanceToOrigin", c_float),
        ("MinDistanceToThreat", c_float),
        ("MaxDistanceToThreat", c_float),
        ("ScoreDistanceToThreat", c_float),
        ("MaxDistanceProvidesCover", c_float),
        ("ScoreProvidesCover", c_float),
        ("ScoreVantageOnBestTarget", c_float),
        ("ScoreVantageOnAnyTarget", c_float),
        ("ScoreUnoccupiedLink", c_float),
        ("ScoreNonBlacklistedCover", c_float),
    ]

    UCoverSearchCriteria._fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UCoverSearchCriteria", UCoverSearchCriteria_Data),
    ]

    UExposureUtilityBase_Data._fields_ = [
        ("ExposureEnabled", c_bool, 1),
        ("ExposureStrategy", POINTER(UExposureUtilityStrategy)),
    ]

    UExposureUtilityBase._fields_ = [
        ("UObject", UObject_Data),
        ("UExposureUtilityBase", UExposureUtilityBase_Data),
    ]

    UExposureUtilityBasicCaching_Data._fields_ = [
        ("CachingEnabled", c_bool, 1),
        ("MaxCacheTime", c_float),
        ("DistanceClose", c_float),
        ("DistanceMed", c_float),
        ("CacheFreshnessTimeClose", c_float),
        ("CacheFreshnessTimeMed", c_float),
        ("CacheFreshnessTimeFar", c_float),
        ("CacheFreshnessTimePlayer", c_float),
        ("CacheTimeFudgeFactorClose", c_float),
        ("CacheTimeFudgeFactorMed", c_float),
        ("CacheTimeFudgeFactorFar", c_float),
        ("HasMovedDistThreshold", c_float),
        ("HasMovedDistThresholdPlayer", c_float),
        ("CachedExposures", TArray_FExposureCacheStruct),
    ]

    UExposureUtilityBasicCaching._fields_ = [
        ("UObject", UObject_Data),
        ("UExposureUtilityBase", UExposureUtilityBase_Data),
        ("UExposureUtilityBasicCaching", UExposureUtilityBasicCaching_Data),
    ]

    UExposureUtilityFixedCost_Data._fields_ = [
        ("CloseDistanceSquared", c_float),
        ("MedDistanceSquared", c_float),
        ("MaxLineChecksPerFrame", c_int),
        ("Buckets", TArray_FBucketStruct),
        ("MedAccumulatedTime", c_float),
        ("FarAccumulatedTime", c_float),
        ("SkipUpdateForTime", c_float),
        ("MaxPointData", c_int),
        ("PointLineChecks", c_int),
        ("PointMaxLineChecks", c_int),
        ("PointFreshTime", c_float),
        ("PointStaleTime", c_float),
        ("PointMaxErrorSq", c_float),
        ("PointData", TArray_FPointExposureData),
    ]

    UExposureUtilityFixedCost._fields_ = [
        ("UObject", UObject_Data),
        ("UExposureUtilityBase", UExposureUtilityBase_Data),
        ("UExposureUtilityBasicCaching", UExposureUtilityBasicCaching_Data),
        ("UExposureUtilityFixedCost", UExposureUtilityFixedCost_Data),
    ]

    UExposureUtilityStrategy_Data._fields_ = []

    UExposureUtilityStrategy._fields_ = [
        ("UObject", UObject_Data),
        ("UExposureUtilityStrategy", UExposureUtilityStrategy_Data),
    ]

    UFiringBehaviorDefinition_Data._fields_ = [
        ("ConditionalPatterns", TArray_FConditionalPattern)
    ]

    UFiringBehaviorDefinition._fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UFiringBehaviorDefinition", UFiringBehaviorDefinition_Data),
    ]

    UFiringBehaviorManager_Data._fields_ = [
        ("CurrentFiringPattern", POINTER(UFiringPattern)),
        ("CurrentTargetExposure", c_float),
        ("NumShotsThisBurst", c_int),
        ("CachedTargetPoint", FVector),
        ("bHasTargetPoint", c_bool, 1),
        ("bSetupWithZoneCollection", c_bool, 1),
        ("CurrentZoneCollection", POINTER(UFiringZoneCollectionDefinition)),
        ("CurrentZone", POINTER(UFiringZoneDefinition)),
        ("CurrentBehavior", POINTER(UFiringBehaviorDefinition)),
        ("CurrentConditionalPattern", c_int),
        ("DefaultFiringBehaviorDefinition", POINTER(UFiringBehaviorDefinition)),
        ("DefaultFiringPatternTemplate", POINTER(UFiringPattern)),
    ]

    UFiringBehaviorManager._fields_ = [
        ("UObject", UObject_Data),
        ("UFiringBehaviorManager", UFiringBehaviorManager_Data),
    ]

    UFiringCondition_Data._fields_ = []

    UFiringCondition._fields_ = [
        ("UObject", UObject_Data),
        ("UFiringCondition", UFiringCondition_Data),
    ]

    UFireCond_IsPlayerTarget_Data._fields_ = []

    UFireCond_IsPlayerTarget._fields_ = [
        ("UObject", UObject_Data),
        ("UFiringCondition", UFiringCondition_Data),
        ("UFireCond_IsPlayerTarget", UFireCond_IsPlayerTarget_Data),
    ]

    UFiringPattern_Data._fields_ = [
        ("bIsHarmlessToPawns", c_bool, 1),
        ("bAllowFakeShots", c_bool, 1),
    ]

    UFiringPattern._fields_ = [
        ("UObject", UObject_Data),
        ("UFiringPattern", UFiringPattern_Data),
    ]

    UFirePatt_Cone_Data._fields_ = [
        ("ConeDegrees", c_float),
        ("ShotSpreadType", c_ubyte),
    ]

    UFirePatt_Cone._fields_ = [
        ("UObject", UObject_Data),
        ("UFiringPattern", UFiringPattern_Data),
        ("UFirePatt_Cone", UFirePatt_Cone_Data),
    ]

    UFirePatt_ShrinkingCone_Data._fields_ = [
        ("CurrentAccuracyConeDeg", c_float),
        ("LastDesiredAim", FRotator),
        ("MaxAccuracyConeDeg", c_float),
        ("ConeMultiplierPerShot", c_float),
        ("ShotSpreadType", c_ubyte),
    ]

    UFirePatt_ShrinkingCone._fields_ = [
        ("UObject", UObject_Data),
        ("UFiringPattern", UFiringPattern_Data),
        ("UFirePatt_ShrinkingCone", UFirePatt_ShrinkingCone_Data),
    ]

    UFirePatt_StrafeOver_Data._fields_ = [
        ("CurrentAimRotation", FRotator),
        ("PitchDeltaPerShot", c_float),
        ("MaxYawDeltaPerShot", c_float),
        ("RefireRate", c_float),
        ("LineOfShotsSpeed", c_float),
        ("LineOfShotsEndZ", c_float),
        ("YawDeltaRatio", c_float),
        ("TargetPosition", c_float),
    ]

    UFirePatt_StrafeOver._fields_ = [
        ("UObject", UObject_Data),
        ("UFiringPattern", UFiringPattern_Data),
        ("UFirePatt_StrafeOver", UFirePatt_StrafeOver_Data),
    ]

    UFiringZoneCollectionDefinition_Data._fields_ = [
        ("Zones", TArray_UFiringZoneDefinitionPtr)
    ]

    UFiringZoneCollectionDefinition._fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UFiringZoneCollectionDefinition", UFiringZoneCollectionDefinition_Data),
    ]

    UFiringZoneDefinition_Data._fields_ = [
        ("ZoneName", FString),
        ("OuterRimInfinitelyFarAway", c_bool, 1),
        ("OuterRimDistance", c_float),
        ("ZoneColor", FColor),
        ("FiringBehavior", POINTER(UFiringBehaviorDefinition)),
    ]

    UFiringZoneDefinition._fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UFiringZoneDefinition", UFiringZoneDefinition_Data),
    ]

    UFlagDefinition_Data._fields_ = [
        ("EvaluationExpression", POINTER(UExpressionEvaluator)),
        ("ContextResolverChain", TArray_UAttributeContextResolverPtr),
        ("ValueResolver", POINTER(UFlagValueResolver)),
    ]

    UFlagDefinition._fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UFlagDefinition", UFlagDefinition_Data),
    ]

    UFlagExpressionEvaluator_Data._fields_ = [
        ("FlagChain", TArray_FFlagEvalConditional),
        ("FlagChainOperator", c_ubyte),
    ]

    UFlagExpressionEvaluator._fields_ = [
        ("UObject", UObject_Data),
        ("UExpressionEvaluator", UExpressionEvaluator_Data),
        ("UFlagExpressionEvaluator", UFlagExpressionEvaluator_Data),
    ]

    UFlagValueResolver_Data._fields_ = []

    UFlagValueResolver._fields_ = [
        ("UObject", UObject_Data),
        ("UFlagValueResolver", UFlagValueResolver_Data),
    ]

    UMultipleFlagValueResolver_Data._fields_ = [
        ("FlagToLookUp", POINTER(UFlagDefinition)),
        ("AggregationType", c_ubyte),
    ]

    UMultipleFlagValueResolver._fields_ = [
        ("UObject", UObject_Data),
        ("UFlagValueResolver", UFlagValueResolver_Data),
        ("UMultipleFlagValueResolver", UMultipleFlagValueResolver_Data),
    ]

    UObjectFunctionFlagValueResolver_Data._fields_ = [
        ("CheckRate", c_float),
        ("FunctionCall", FString),
    ]

    UObjectFunctionFlagValueResolver._fields_ = [
        ("UObject", UObject_Data),
        ("UFlagValueResolver", UFlagValueResolver_Data),
        ("UObjectFunctionFlagValueResolver", UObjectFunctionFlagValueResolver_Data),
    ]

    UObjectPropertyFlagValueResolver_Data._fields_ = [("PropertyName", FName)]

    UObjectPropertyFlagValueResolver._fields_ = [
        ("UObject", UObject_Data),
        ("UFlagValueResolver", UFlagValueResolver_Data),
        ("UObjectPropertyFlagValueResolver", UObjectPropertyFlagValueResolver_Data),
    ]

    URuleEngineFlagValueResolver_Data._fields_ = []

    URuleEngineFlagValueResolver._fields_ = [
        ("UObject", UObject_Data),
        ("UFlagValueResolver", UFlagValueResolver_Data),
        ("URuleEngineFlagValueResolver", URuleEngineFlagValueResolver_Data),
    ]

    UGbxMessage_Data._fields_ = [
        ("Definition", POINTER(UGbxMessageDefinition)),
        ("NameKey", FName),
        ("Sender", POINTER(UObject)),
        ("Subject", POINTER(UObject)),
        ("AdditionalData", POINTER(UObject)),
        ("SimpleMetaData", FGbxMessageSimpleMetaData),
        ("SimpleMetaData2", FGbxMessageSimpleMetaData),
        ("SimpleMetaData3", FGbxMessageSimpleMetaData),
        ("SimpleMetaData4", FGbxMessageSimpleMetaData),
        ("SenderAllegiance", POINTER(UPawnAllegiance)),
        ("SubjectAllegiance", POINTER(UPawnAllegiance)),
        ("IntendedForAllies", c_bool, 1),
        ("IntendedForEnemies", c_bool, 1),
        ("HasLocation", c_bool, 1),
        ("HasRadius", c_bool, 1),
        ("SendRepeatedly", c_bool, 1),
        ("MessageLocation", FVector),
        ("BroadcastRadius", c_float),
        ("DeliverTime", c_float),
        ("TimePosted", c_float),
        ("TimeSent", c_float),
        ("DoNotSendRightNow", FFlag),
        ("StopSendingAfterXReceptions", c_int),
        ("MaxDurationToSend", c_float),
        ("TimeBetweenSends", c_float),
        ("DupeCriteria", TArray_unsigned_char),
    ]

    UGbxMessage._fields_ = [
        ("UObject", UObject_Data),
        ("UGbxMessage", UGbxMessage_Data),
    ]

    UGbxMessageDefinition_Data._fields_ = [
        ("NameKey", FName),
        ("HasLocation", c_bool, 1),
        ("HasRadius", c_bool, 1),
        ("TakeLocationFromSender", c_bool, 1),
        ("IntendedForAllies", c_bool, 1),
        ("IntendedForEnemies", c_bool, 1),
        ("AllowRepeatSends", c_bool, 1),
        ("LimitedReception", c_bool, 1),
        ("Radius", FAttributeInitializationData),
        ("SecondsBetweenSends", c_float),
        ("MaxTimeToKeepSending", c_float),
        ("DupeCriteria", TArray_unsigned_char),
        ("MaxRecipients", c_int),
    ]

    UGbxMessageDefinition._fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UGbxMessageDefinition", UGbxMessageDefinition_Data),
    ]

    UGbxMessageManager_Data._fields_ = [
        ("Listeners", TArray_FScriptInterface),
        ("MessagesToSend", TArray_UGbxMessagePtr),
        ("SentMessagesRecently", FFlag),
        ("DistributionInterval", c_float),
        ("MaxMessagesPerDistribution", c_int),
    ]

    UGbxMessageManager._fields_ = [
        ("UObject", UObject_Data),
        ("UGbxMessageManager", UGbxMessageManager_Data),
    ]

    AGearboxMind_Data._fields_ = [
        ("VfTable_IIRuleEngineOwner", FPointer),
        ("VfTable_IINounAttributeProvider", FPointer),
        ("VfTable_IIFlagProvider", FPointer),
        ("VfTable_IIAIInterface", FPointer),
        ("bDisabledDueToPopulationIrrelevance", c_bool, 1),
        ("bWantsToWalk", c_bool, 1),
        ("MyRuleEngine", POINTER(UGearboxRuleEngine)),
        ("RuleEngineTemplate", POINTER(UGearboxRuleEngine)),
        ("MyGearboxPawn", POINTER(AGearboxPawn)),
        ("FacingPolicy", c_ubyte),
        ("AtLeastOneKnownThreat", c_ubyte),
        ("NewEnemyAwarenessReason", c_ubyte),
        ("DebugMoveFinishedReason", c_ubyte),
        ("FacingActor", POINTER(AActor)),
        ("FacingVector", FVector),
        ("DotProductToFacingPolicy", c_float),
        ("DotProductToCurrentEnemy", c_float),
        ("MostRecentNewEnemyName", FName),
        ("MostRecentNewEnemyArchName", FName),
        ("DefaultAwarenessZoneCollection", POINTER(UAwarenessZoneCollectionDefinition)),
        ("CurrentAwarenessZoneCollection", POINTER(UAwarenessZoneCollectionDefinition)),
        ("CurrentAwarenessZone", POINTER(UAwarenessZoneDefinition)),
        ("DefaultCoverSearchCriteria", POINTER(UCoverSearchCriteria)),
        ("FailedMoveSpots", TArray_FVector),
        ("NounState", TArray_FNounAttributeState),
        ("HomeLocation", FVector),
        ("PopulationOpportunityIndex", c_int),
        ("MindTargetInfoClass", POINTER(UClass)),
        ("MyTracker", POINTER(UAITracker)),
        ("DynamicFlagDefinitions", TArray_UFlagDefinitionPtr),
        ("DynamicFlags", TArray_FDynamicFlagInstanceData),
        ("Unknown1", c_ubyte * 0x3C),
        ("AIComponent", POINTER(UAIComponent)),
    ]

    AGearboxMind._fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("AController", AController_Data),
        ("AAIController", AAIController_Data),
        ("AGearboxAIController", AGearboxAIController_Data),
        ("AGearboxMind", AGearboxMind_Data),
    ]

    UGearboxAIMoveNodeRenderComponent_Data._fields_ = []

    UGearboxAIMoveNodeRenderComponent._fields_ = [
        ("UObject", UObject_Data),
        ("UComponent", UComponent_Data),
        ("UActorComponent", UActorComponent_Data),
        ("UPrimitiveComponent", UPrimitiveComponent_Data),
        ("UGearboxAIMoveNodeRenderComponent", UGearboxAIMoveNodeRenderComponent_Data),
    ]

    UGearboxCoverStateManager_Data._fields_ = [
        ("MyGearboxPawn", POINTER(AGearboxPawn)),
        ("DesiredCoverState", FGearboxCoverState),
        ("CurrentCoverState", FGearboxCoverState),
        ("DesiredCoverTransition", FGearboxCoverTransition),
        ("CurrentCoverTransition", FGearboxCoverTransition),
        ("DesiredCoverInfo", FCoverSpotInfo),
        ("CurrentCoverInfo", FCoverSpotInfo),
        ("LastCoverInfo", FCoverSpotInfo),
        ("PawnCrouchedPriorToMount", c_bool, 1),
        ("CoverDebugSearchWasFinalized", c_bool, 1),
        ("CoverDebugInnerRadius", c_float),
        ("CoverDebugOuterRadius", c_float),
        ("CoverDebugSearchAngle", c_float),
        ("CoverDebugSearchDirection", FVector),
        ("CoverDebugSearchOrigin", FSmartVector),
        ("CoverDebugList", TArray_FCoverDebugPriority),
        ("HorizontalCoverAngleDegrees", c_float),
        ("VerticalCoverAngleDegrees", c_float),
    ]

    UGearboxCoverStateManager._fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxCoverStateManager", UGearboxCoverStateManager_Data),
    ]

    UGearboxMindAttributeContextResolver_Data._fields_ = []

    UGearboxMindAttributeContextResolver._fields_ = [
        ("UObject", UObject_Data),
        ("UAttributeContextResolver", UAttributeContextResolver_Data),
        (
            "UGearboxMindAttributeContextResolver",
            UGearboxMindAttributeContextResolver_Data,
        ),
    ]

    UGearboxNavigationHandle_Data._fields_ = [
        ("DesiredMovementSpeed", c_ubyte),
        ("ActiveSpecialNavMeshMove", c_ubyte),
        ("Unknown1", c_ubyte * 0x2),
        ("bFollowingPath", c_bool, 1),
        ("bReachedDestination", c_bool, 1),
        ("bSpecialMovementFinished", c_bool, 1),
        ("bClearPathAfterSpecialMove", c_bool, 1),
        ("CurrentGoal", FBasedPosition),
        ("CurrentPath", FPathFindData),
        ("Anchor", FGBXNavMeshPolyRef),
        ("LastValidAnchor", FGBXNavMeshPolyRef),
        ("LastAnchorPosition", FBasedPosition),
        ("LastAnchorDelta", FVector),
        ("NextPathObjectDistance", c_float),
        ("CurrentGoalStartLoc", FVector),
        ("DesiredLookDirection", FRotator),
        ("LookDirection", FRotator),
        ("PathFinder", POINTER(UGBXNavMeshPathFinder)),
        ("NearPathCheckDist", c_float),
        ("NearPathCheckDistMin", c_float),
        ("NearPathCheckDistMax", c_float),
        ("NearPathCheckDistRate", c_float),
    ]

    UGearboxNavigationHandle._fields_ = [
        ("UObject", UObject_Data),
        ("UNavigationHandle", UNavigationHandle_Data),
        ("UGearboxNavigationHandle", UGearboxNavigationHandle_Data),
    ]

    UIFlagProvider_Data._fields_ = []

    UIFlagProvider._fields_ = [
        ("UObject", UObject_Data),
        ("UInterface", UInterface_Data),
        ("UIFlagProvider", UIFlagProvider_Data),
    ]

    UIFlagProviderGroup_Data._fields_ = []

    UIFlagProviderGroup._fields_ = [
        ("UObject", UObject_Data),
        ("UInterface", UInterface_Data),
        ("UIFlagProviderGroup", UIFlagProviderGroup_Data),
    ]

    UIGbxMessageListener_Data._fields_ = []

    UIGbxMessageListener._fields_ = [
        ("UObject", UObject_Data),
        ("UInterface", UInterface_Data),
        ("UIGbxMessageListener", UIGbxMessageListener_Data),
    ]

    UIRuleEngineOwner_Data._fields_ = []

    UIRuleEngineOwner._fields_ = [
        ("UObject", UObject_Data),
        ("UInterface", UInterface_Data),
        ("UIRuleEngineOwner", UIRuleEngineOwner_Data),
    ]

    UKnowledgeRecord_Data._fields_ = [
        ("TheAIFactory", POINTER(UAIFactoryBase)),
        ("TheName", FName),
        ("KCategory", c_ubyte),
        ("EvalType", c_ubyte),
        ("Active", c_ubyte),
        ("Marked", c_ubyte),
        ("Frequency", c_float),
        ("NextUpdateTime", c_float),
        ("FlagIndex", c_int),
    ]

    UKnowledgeRecord._fields_ = [
        ("UObject", UObject_Data),
        ("UKnowledgeRecord", UKnowledgeRecord_Data),
    ]

    ULocationFilter_Data._fields_ = []

    ULocationFilter._fields_ = [
        ("UObject", UObject_Data),
        ("ULocationFilter", ULocationFilter_Data),
    ]

    ULocationFilter_MustHaveLOS_Data._fields_ = []

    ULocationFilter_MustHaveLOS._fields_ = [
        ("UObject", UObject_Data),
        ("ULocationFilter", ULocationFilter_Data),
        ("ULocationFilter_MustHaveLOS", ULocationFilter_MustHaveLOS_Data),
    ]

    ULocationFilter_MustNotHaveLOS_Data._fields_ = []

    ULocationFilter_MustNotHaveLOS._fields_ = [
        ("UObject", UObject_Data),
        ("ULocationFilter", ULocationFilter_Data),
        ("ULocationFilter_MustNotHaveLOS", ULocationFilter_MustNotHaveLOS_Data),
    ]

    UMindTargetInfo_Data._fields_ = [
        ("Target", POINTER(AActor)),
        ("Distance", c_float),
        ("bShouldRemove", c_bool, 1),
        ("bCanSeeOrHearTarget", c_bool, 1),
        ("bCanFireAt", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Priority", c_float),
        ("OnePriority", c_float),
        ("TargetExposureToMe", c_float),
        ("MyExposureToTarget", c_float),
        ("HitTargetHistory", TArray_FHitTargetRecord),
        ("PriorityDebugRecords", TArray_FPriorityDebugStruct),
        ("IAmConsciousOfTarget", FFlag),
        ("IAmConsciousTime", c_float),
        ("TargetHasShotAtMeRecently", FFlag),
        ("TargetOccludedBySmoke", FFlag),
        ("IHaveSeenOrKnownThisTargetBefore", FFlag),
        ("LastVisibleOrAudibleLocation", FSmartVector),
        ("BonusPriority", c_float),
    ]

    UMindTargetInfo._fields_ = [
        ("UObject", UObject_Data),
        ("UMindTargetInfo", UMindTargetInfo_Data),
    ]

    URule_Data._fields_ = [
        ("MyRuleEngine", POINTER(URuleEngine)),
        ("Priority", c_int),
        ("BasePriority", c_int),
        ("StartingSequenceTemplate", POINTER(UActionSequence)),
        ("RuleEnabled", c_bool, 1),
        ("StopWhenStateCodeRunsOut", c_bool, 1),
        ("AlwaysExecute", c_bool, 1),
        ("bInitialized", c_bool, 1),
        ("bIsRunning", c_bool, 1),
        ("bCanRunMultipleInstances", c_bool, 1),
        ("bIsTransferable", c_bool, 1),
        ("bRestartable", c_bool, 1),
        ("bBlockRuleSetChange", c_bool, 1),
        ("WasTransferred", c_bool, 1),
        ("ExecutionPattern", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("TimeToWaitBeforeFirstExecution", FAttributeInitializationData),
        ("TimeToWaitBeforeNextExecution", FAttributeInitializationData),
        ("MaxTimeToExecute", FAttributeInitializationData),
        ("MaxNumberOfExecutions", c_int),
        ("CanExecuteConditionals", TArray_FFlagEvalORConnector),
        ("ShouldStopConditionals", TArray_FFlagEvalORConnector),
        ("CanExecuteExpression", POINTER(UExpressionEvaluator)),
        ("ShouldStopExpression", POINTER(UExpressionEvaluator)),
        ("MyActionSequence", POINTER(UActionSequence)),
        ("TheAIFactory", POINTER(UAIFactoryBase)),
        ("MyRuleEventDef", POINTER(URuleEventDef)),
        ("AssociatedKnowledgeRecords", TArray_UClassPtr),
        ("FlagDebugString", FString),
        ("RuleName", FName),
        ("OtherEventParticipantObject", POINTER(UObject)),
        ("IsTimingRestrictedNow", FFlag),
        ("NumExecutions", c_int),
        ("RuleEventDefPath", FString),
        ("StartExecutionTimeStamp", c_float),
    ]

    URule._fields_ = [("UObject", UObject_Data), ("URule", URule_Data)]

    URuleContainer_Data._fields_ = [
        ("RuleSetTemplate", POINTER(URuleSet)),
        ("CurRuleSet", POINTER(URuleSet)),
        ("AllowAllEventsThrough", c_bool, 1),
    ]

    URuleContainer._fields_ = [
        ("UObject", UObject_Data),
        ("URule", URule_Data),
        ("URuleContainer", URuleContainer_Data),
    ]

    URulePlaceholder_Data._fields_ = []

    URulePlaceholder._fields_ = [
        ("UObject", UObject_Data),
        ("URule", URule_Data),
        ("URulePlaceholder", URulePlaceholder_Data),
    ]

    URuleEngine_Data._fields_ = [
        ("VfTable_IIFlagProvider", FPointer),
        ("TheAIFactory", POINTER(UAIFactoryBase)),
        ("ActorProxy", POINTER(AActor)),
        ("ThinkRate", c_float),
        ("ElapsedTime", c_float),
        ("TickRate", c_float),
        ("RuleSetTemplate", POINTER(URuleSet)),
        ("CurRuleSet", POINTER(URuleSet)),
        ("PendingRuleSetTemplate", POINTER(URuleSet)),
        ("FlagInitialization", TArray_FFlagDefinitionInitialization),
        ("DynamicFlagDefinitions", TArray_UFlagDefinitionPtr),
        ("DynamicFlags", TArray_FDynamicFlagInstanceData),
        ("Unknown1", c_ubyte * 0x3C),
        ("KnowledgeDB", TArray_UKnowledgeRecordPtr),
        ("RunningRules", TArray_URulePtr),
        ("ResourcesInUse", TArray_UClassPtr),
        ("bRulesEnabled", c_bool, 1),
        ("bHasDebugFocus", c_bool, 1),
        ("bVerboseLoggingEnabled", c_bool, 1),
        ("bInitialized", c_bool, 1),
        ("DoLoadBalancing", c_bool, 1),
        ("bForceFullUpdate", c_bool, 1),
        ("OnlyIterateRulesForEvents", c_bool, 1),
        ("bEventsCausedKnowledgeRecordUpdate", c_bool, 1),
        ("EnableSnapshots", c_bool, 1),
        ("MyTracker", POINTER(UAITracker)),
        ("RuleSetStack", TArray_URuleSetPtr),
        ("QueuedRuleEvents", TArray_FEventRecord),
        ("LastFullUpdateTime", c_float),
        ("MaxRuleSetPasses", c_int),
        ("KRCache", TArray_UClassPtr),
        ("LastTargetIteratorTime", c_float),
        ("LastTargetIteratorRuleEvalDiffTime", c_float),
        ("AverageTargetIteratorRuleEvalDiffTime", c_float),
        ("WorstTargetIteratorRuleEvalDiffTime", c_float),
        ("ActivateTime", c_float),
        ("RuleSetReferences", TArray_FRuleSetReference),
    ]

    URuleEngine._fields_ = [
        ("UObject", UObject_Data),
        ("URuleEngine", URuleEngine_Data),
    ]

    UGearboxRuleEngine_Data._fields_ = [
        ("MyGearboxPawn", POINTER(AGearboxPawn)),
        ("MyGearboxMind", POINTER(AGearboxMind)),
    ]

    UGearboxRuleEngine._fields_ = [
        ("UObject", UObject_Data),
        ("URuleEngine", URuleEngine_Data),
        ("UGearboxRuleEngine", UGearboxRuleEngine_Data),
    ]

    URuleEventDef_Data._fields_ = [
        ("EventDefName", FName),
        ("FlagActionOnEventTrigger", FFlagDefinitionInitialization),
    ]

    URuleEventDef._fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("URuleEventDef", URuleEventDef_Data),
    ]

    URuleSet_Data._fields_ = [
        ("TheAIFactory", POINTER(UAIFactoryBase)),
        ("RuleTemplateRefs", TArray_URulePtr),
        ("Rules", TArray_URulePtr),
        ("ToDiscard", TArray_URulePlaceholderPtr),
        ("bInitialized", c_bool, 1),
        ("bNewRuleEvaluationEnabled", c_bool, 1),
        ("RuleSetName", FName),
        ("FlagsOnEntry", TArray_FFlagDefinitionInitialization),
        ("FlagsOnExit", TArray_FFlagDefinitionInitialization),
        ("HACK_RuleSetsAllowedToFollow", TArray_URuleSetPtr),
    ]

    URuleSet._fields_ = [("UObject", UObject_Data), ("URuleSet", URuleSet_Data)]

    UStateRuleSet_Data._fields_ = [
        ("StateRules", TArray_URulePtr),
        ("bShowPawnInRadarWhenActive", c_bool, 1),
        ("StateAttributeMap", TArray_FStateAttributeData),
    ]

    UStateRuleSet._fields_ = [
        ("UObject", UObject_Data),
        ("URuleSet", URuleSet_Data),
        ("UStateRuleSet", UStateRuleSet_Data),
    ]

    USearchDirection_Data._fields_ = []

    USearchDirection._fields_ = [
        ("UObject", UObject_Data),
        ("USearchDirection", USearchDirection_Data),
    ]

    USearchDirection_Any_Data._fields_ = []

    USearchDirection_Any._fields_ = [
        ("UObject", UObject_Data),
        ("USearchDirection", USearchDirection_Data),
        ("USearchDirection_Any", USearchDirection_Any_Data),
    ]

    USearchDirection_AwayFromMe_Data._fields_ = []

    USearchDirection_AwayFromMe._fields_ = [
        ("UObject", UObject_Data),
        ("USearchDirection", USearchDirection_Data),
        ("USearchDirection_AwayFromMe", USearchDirection_AwayFromMe_Data),
    ]

    USearchDirection_AwayFromTarget_Data._fields_ = []

    USearchDirection_AwayFromTarget._fields_ = [
        ("UObject", UObject_Data),
        ("USearchDirection", USearchDirection_Data),
        ("USearchDirection_AwayFromTarget", USearchDirection_AwayFromTarget_Data),
    ]

    USearchDirection_MyFacingDirection_Data._fields_ = []

    USearchDirection_MyFacingDirection._fields_ = [
        ("UObject", UObject_Data),
        ("USearchDirection", USearchDirection_Data),
        ("USearchDirection_MyFacingDirection", USearchDirection_MyFacingDirection_Data),
    ]

    USearchDirection_OppositeMyFacingDirection_Data._fields_ = []

    USearchDirection_OppositeMyFacingDirection._fields_ = [
        ("UObject", UObject_Data),
        ("USearchDirection", USearchDirection_Data),
        (
            "USearchDirection_OppositeMyFacingDirection",
            USearchDirection_OppositeMyFacingDirection_Data,
        ),
    ]

    USearchDirection_OppositeTargetsFacingDirection_Data._fields_ = []

    USearchDirection_OppositeTargetsFacingDirection._fields_ = [
        ("UObject", UObject_Data),
        ("USearchDirection", USearchDirection_Data),
        (
            "USearchDirection_OppositeTargetsFacingDirection",
            USearchDirection_OppositeTargetsFacingDirection_Data,
        ),
    ]

    USearchDirection_RandomLeftOrRight_Data._fields_ = []

    USearchDirection_RandomLeftOrRight._fields_ = [
        ("UObject", UObject_Data),
        ("USearchDirection", USearchDirection_Data),
        ("USearchDirection_RandomLeftOrRight", USearchDirection_RandomLeftOrRight_Data),
    ]

    USearchDirection_TargetsFacingDirection_Data._fields_ = []

    USearchDirection_TargetsFacingDirection._fields_ = [
        ("UObject", UObject_Data),
        ("USearchDirection", USearchDirection_Data),
        (
            "USearchDirection_TargetsFacingDirection",
            USearchDirection_TargetsFacingDirection_Data,
        ),
    ]

    USearchDirection_ToMyLeft_Data._fields_ = []

    USearchDirection_ToMyLeft._fields_ = [
        ("UObject", UObject_Data),
        ("USearchDirection", USearchDirection_Data),
        ("USearchDirection_ToMyLeft", USearchDirection_ToMyLeft_Data),
    ]

    USearchDirection_ToMyRight_Data._fields_ = []

    USearchDirection_ToMyRight._fields_ = [
        ("UObject", UObject_Data),
        ("USearchDirection", USearchDirection_Data),
        ("USearchDirection_ToMyRight", USearchDirection_ToMyRight_Data),
    ]

    USearchDirection_TowardMe_Data._fields_ = []

    USearchDirection_TowardMe._fields_ = [
        ("UObject", UObject_Data),
        ("USearchDirection", USearchDirection_Data),
        ("USearchDirection_TowardMe", USearchDirection_TowardMe_Data),
    ]

    USearchDirection_TowardTarget_Data._fields_ = []

    USearchDirection_TowardTarget._fields_ = [
        ("UObject", UObject_Data),
        ("USearchDirection", USearchDirection_Data),
        ("USearchDirection_TowardTarget", USearchDirection_TowardTarget_Data),
    ]

    USearchOrigin_Data._fields_ = []

    USearchOrigin._fields_ = [
        ("UObject", UObject_Data),
        ("USearchOrigin", USearchOrigin_Data),
    ]

    USearchOrigin_CurrentLocation_Data._fields_ = []

    USearchOrigin_CurrentLocation._fields_ = [
        ("UObject", UObject_Data),
        ("USearchOrigin", USearchOrigin_Data),
        ("USearchOrigin_CurrentLocation", USearchOrigin_CurrentLocation_Data),
    ]

    USearchOrigin_ScriptedMoveTarget_Data._fields_ = []

    USearchOrigin_ScriptedMoveTarget._fields_ = [
        ("UObject", UObject_Data),
        ("USearchOrigin", USearchOrigin_Data),
        ("USearchOrigin_ScriptedMoveTarget", USearchOrigin_ScriptedMoveTarget_Data),
    ]

    USearchOrigin_TargetLocation_Data._fields_ = []

    USearchOrigin_TargetLocation._fields_ = [
        ("UObject", UObject_Data),
        ("USearchOrigin", USearchOrigin_Data),
        ("USearchOrigin_TargetLocation", USearchOrigin_TargetLocation_Data),
    ]

    USnapshotRecord_Data._fields_ = [
        ("MyName", FName),
        ("RuleSet", FName),
        ("CurrentRules", TArray_FRuleInfo),
        ("ContainedRules", FRuleInfo * 45),
        ("SelectedRuleIdx", c_int),
        ("SelectedSubRuleIdx", c_int),
        ("ResourcesInUse", TArray_FName),
        ("Flags", TArray_FName),
        ("Location", FVector),
        ("Velocity", FVector),
        ("Rotation", FRotator),
        ("RuleAffected", FName),
        ("Rule2Affected", FName),
        ("SequenceAffected", FName),
        ("Sequence2Affected", FName),
        ("Event", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("RuleStartName", FName),
        ("RuleEndName", FName),
        ("RuleInterruptName", FName),
        ("ChildSequenceStartName", FName),
        ("SwitchRuleSetName", FName),
        ("PreventNewRulesName", FName),
        ("RunningRulesColor", FColor),
        ("StalledRulesColor", FColor),
        ("NotRunningRulesColor", FColor),
        ("DisabledRulesColor", FColor),
        ("FlagsColor", FColor),
        ("ResourcesColor", FColor),
    ]

    USnapshotRecord._fields_ = [
        ("UObject", UObject_Data),
        ("USnapshotInterface", USnapshotInterface_Data),
        ("USnapshotRecord", USnapshotRecord_Data),
    ]

    UGearboxPawnSnapshotRecord_Data._fields_ = [
        ("PawnIconZOffset", c_float),
        ("PawnExposureZOffset", c_float),
        ("CollectionNameOffset", c_float),
        ("LastVisibleConnectionColor", FColor),
        ("RouteColor", FColor),
        ("OriginalRouteColor", FColor),
        ("DestLineColor", FColor),
        ("BestCoverColor", FColor),
        ("PotentialCoverColor", FColor),
        ("StandardCoverColor", FColor),
        ("AIDebugTexture", POINTER(UTexture2D)),
        ("MyPawnName", FName),
        ("MyArchetypeName", FName),
        ("CurrentHealth", c_float),
        ("MaxHealth", c_float),
        ("DistanceToBestTarget", c_float),
        ("AwarenessZones", TArray_FAwarenessInfo),
        ("AwarenessCollectionName", FName),
        ("BestTarget", POINTER(AActor)),
        ("TargetLocs", TArray_FLocationInfo),
        ("LastVisibleTargetLocs", TArray_FLastVisibleInfo),
        ("AnimTree", FName),
        ("Bones", TArray_FBoneAtom),
        ("ForgottenTargets", TArray_FLocationInfo),
        ("NewEnemyName", FName),
        ("NewEnemyArchName", FName),
        ("NewEnemyAwarenessReason", c_ubyte),
        ("CurrentMoveSpeed", c_ubyte),
        ("MaxDesiredMoveSpeed", c_ubyte),
        ("ReasonForMovementFinish", c_ubyte),
        ("Exposure", TArray_FDebugExposure),
        ("DummyMesh", POINTER(USkeletalMesh)),
        ("DummyMesh_LOD", c_int),
        ("TargetViewCones", TArray_FViewConeInfo),
        ("PawnLocalDestination", FVector),
        ("FailedMoveSpots", TArray_FVector),
        ("RouteCache", TArray_FVector),
        ("OriginalRouteCache", TArray_FVector),
        ("DesiredCoverLocation", FSmartVector),
        ("CurrentCoverLocation", FSmartVector),
        ("ScriptedMoveTargetLocation", FSmartVector),
        ("CoverSearchInnerRadius", c_float),
        ("CoverSearchOuterRadius", c_float),
        ("CoverSearchAngle", c_float),
        ("CoverSearchOrigin", FSmartVector),
        ("CoverSearchDirection", FVector),
        ("CoverSlotDebugList", TArray_FCoverDebugInfo),
        ("CoverSearchWasFinalized", c_bool, 1),
        ("ICON_BLUELOCATION", FIconData),
        ("ICON_YELLOWLOCATION", FIconData),
        ("ICON_QUESTIONMARK", FIconData),
        ("ICON_EXCLAMATIONPOINT", FIconData),
        ("ICON_REDARROW", FIconData),
        ("ICON_GREENARROW", FIconData),
        ("ICON_FAILED_MOVE_DEST", FIconData),
        ("ICON_GREENCIRCLE", FIconData),
        ("ICON_PATHPOINT", FIconData),
        ("ICON_CURRENTCOVER", FIconData),
        ("ICON_DESIREDCOVER", FIconData),
        ("ICON_SCRIPTEDMOVETARGET", FIconData),
        ("TargetData", TArray_FTargetDebugDatum),
        ("Holds", TArray_FAIHoldDebugData),
        ("TargetHolds", TArray_FAIHoldDebugData),
        ("MovementHolds", TArray_FAIHoldDebugData),
        ("DemigodHolds", TArray_FAIHoldDebugData),
        ("GodHolds", TArray_FAIHoldDebugData),
    ]

    UGearboxPawnSnapshotRecord._fields_ = [
        ("UObject", UObject_Data),
        ("USnapshotInterface", USnapshotInterface_Data),
        ("USnapshotRecord", USnapshotRecord_Data),
        ("UGearboxPawnSnapshotRecord", UGearboxPawnSnapshotRecord_Data),
    ]

    UTargetingDefinition_Data._fields_ = [
        ("Knowledge", TArray_UTI_CalcPtr),
        ("Prioritization", TArray_UTI_PrioritizePtr),
        ("CanTargetIf", POINTER(UExpressionEvaluator)),
        ("StopTargetingIf", POINTER(UExpressionEvaluator)),
        ("bCanTargetFriendlies", c_bool, 1),
        ("bOverrideSearchRadius", c_bool, 1),
        ("CanTargetFriendliesIf", POINTER(UExpressionEvaluator)),
        ("SearchRadius", c_float),
    ]

    UTargetingDefinition._fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UTargetingDefinition", UTargetingDefinition_Data),
    ]

    UTargetIterator_Data._fields_ = [
        ("IteratorType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("BarGraphShortName", FString),
    ]

    UTargetIterator._fields_ = [
        ("UObject", UObject_Data),
        ("UTargetIterator", UTargetIterator_Data),
    ]

    UTargetIteratorCalculateDistance_Data._fields_ = []

    UTargetIteratorCalculateDistance._fields_ = [
        ("UObject", UObject_Data),
        ("UTargetIterator", UTargetIterator_Data),
        ("UTargetIteratorCalculateDistance", UTargetIteratorCalculateDistance_Data),
    ]

    UTargetIteratorCalculateExposure_Data._fields_ = []

    UTargetIteratorCalculateExposure._fields_ = [
        ("UObject", UObject_Data),
        ("UTargetIterator", UTargetIterator_Data),
        ("UTargetIteratorCalculateExposure", UTargetIteratorCalculateExposure_Data),
    ]

    UTargetIteratorCheckAwareness_Data._fields_ = []

    UTargetIteratorCheckAwareness._fields_ = [
        ("UObject", UObject_Data),
        ("UTargetIterator", UTargetIterator_Data),
        ("UTargetIteratorCheckAwareness", UTargetIteratorCheckAwareness_Data),
    ]

    UTargetIteratorCheckRemoveTarget_Data._fields_ = []

    UTargetIteratorCheckRemoveTarget._fields_ = [
        ("UObject", UObject_Data),
        ("UTargetIterator", UTargetIterator_Data),
        ("UTargetIteratorCheckRemoveTarget", UTargetIteratorCheckRemoveTarget_Data),
    ]

    UTargetIteratorForgetAboutTarget_Data._fields_ = []

    UTargetIteratorForgetAboutTarget._fields_ = [
        ("UObject", UObject_Data),
        ("UTargetIterator", UTargetIterator_Data),
        ("UTargetIteratorForgetAboutTarget", UTargetIteratorForgetAboutTarget_Data),
    ]

    UTargetIteratorPrioritizeTargetsIAmExposedTo_Data._fields_ = []

    UTargetIteratorPrioritizeTargetsIAmExposedTo._fields_ = [
        ("UObject", UObject_Data),
        ("UTargetIterator", UTargetIterator_Data),
        (
            "UTargetIteratorPrioritizeTargetsIAmExposedTo",
            UTargetIteratorPrioritizeTargetsIAmExposedTo_Data,
        ),
    ]

    UTI_Calc_Data._fields_ = []

    UTI_Calc._fields_ = [
        ("UObject", UObject_Data),
        ("UTargetIterator", UTargetIterator_Data),
        ("UTI_Calc", UTI_Calc_Data),
    ]

    UTI_Prioritize_Data._fields_ = [("Weight", c_float)]

    UTI_Prioritize._fields_ = [
        ("UObject", UObject_Data),
        ("UTargetIterator", UTargetIterator_Data),
        ("UTI_Prioritize", UTI_Prioritize_Data),
    ]

    UTargetIteratorPrioritizeExposedTargets_Data._fields_ = []

    UTargetIteratorPrioritizeExposedTargets._fields_ = [
        ("UObject", UObject_Data),
        ("UTargetIterator", UTargetIterator_Data),
        ("UTI_Prioritize", UTI_Prioritize_Data),
        (
            "UTargetIteratorPrioritizeExposedTargets",
            UTargetIteratorPrioritizeExposedTargets_Data,
        ),
    ]

    UTargetIteratorPrioritizeHumanTargets_Data._fields_ = []

    UTargetIteratorPrioritizeHumanTargets._fields_ = [
        ("UObject", UObject_Data),
        ("UTargetIterator", UTargetIterator_Data),
        ("UTI_Prioritize", UTI_Prioritize_Data),
        (
            "UTargetIteratorPrioritizeHumanTargets",
            UTargetIteratorPrioritizeHumanTargets_Data,
        ),
    ]

    UTargetIteratorPrioritizeNearbyTarget_Data._fields_ = [("MaxDistance", c_float)]

    UTargetIteratorPrioritizeNearbyTarget._fields_ = [
        ("UObject", UObject_Data),
        ("UTargetIterator", UTargetIterator_Data),
        ("UTI_Prioritize", UTI_Prioritize_Data),
        (
            "UTargetIteratorPrioritizeNearbyTarget",
            UTargetIteratorPrioritizeNearbyTarget_Data,
        ),
    ]

    UTargetIteratorPrioritizePreviousTarget_Data._fields_ = []

    UTargetIteratorPrioritizePreviousTarget._fields_ = [
        ("UObject", UObject_Data),
        ("UTargetIterator", UTargetIterator_Data),
        ("UTI_Prioritize", UTI_Prioritize_Data),
        (
            "UTargetIteratorPrioritizePreviousTarget",
            UTargetIteratorPrioritizePreviousTarget_Data,
        ),
    ]

    UTargetIteratorPrioritizeTargetNotBeingShotAt_Data._fields_ = []

    UTargetIteratorPrioritizeTargetNotBeingShotAt._fields_ = [
        ("UObject", UObject_Data),
        ("UTargetIterator", UTargetIterator_Data),
        ("UTI_Prioritize", UTI_Prioritize_Data),
        (
            "UTargetIteratorPrioritizeTargetNotBeingShotAt",
            UTargetIteratorPrioritizeTargetNotBeingShotAt_Data,
        ),
    ]

    UTargetIteratorPrioritizeTargetWhoShootsAtMe_Data._fields_ = []

    UTargetIteratorPrioritizeTargetWhoShootsAtMe._fields_ = [
        ("UObject", UObject_Data),
        ("UTargetIterator", UTargetIterator_Data),
        ("UTI_Prioritize", UTI_Prioritize_Data),
        (
            "UTargetIteratorPrioritizeTargetWhoShootsAtMe",
            UTargetIteratorPrioritizeTargetWhoShootsAtMe_Data,
        ),
    ]

    UTI_PrioritizeBonus_Data._fields_ = []

    UTI_PrioritizeBonus._fields_ = [
        ("UObject", UObject_Data),
        ("UTargetIterator", UTargetIterator_Data),
        ("UTI_Prioritize", UTI_Prioritize_Data),
        ("UTI_PrioritizeBonus", UTI_PrioritizeBonus_Data),
    ]

    UTI_PrioritizeConditional_Data._fields_ = [
        ("Condition", POINTER(UExpressionEvaluator))
    ]

    UTI_PrioritizeConditional._fields_ = [
        ("UObject", UObject_Data),
        ("UTargetIterator", UTargetIterator_Data),
        ("UTI_Prioritize", UTI_Prioritize_Data),
        ("UTI_PrioritizeConditional", UTI_PrioritizeConditional_Data),
    ]

    UGearboxSeqAct_PopulationOpportunityLink_Data._fields_ = [
        ("CloneOpportunities", TArray_APopulationOpportunityPtr)
    ]

    UGearboxSeqAct_PopulationOpportunityLink._fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        ("USeqAct_Latent", USeqAct_Latent_Data),
        (
            "UGearboxSeqAct_PopulationOpportunityLink",
            UGearboxSeqAct_PopulationOpportunityLink_Data,
        ),
    ]

    UIPopulationSpawnPoint_Data._fields_ = []

    UIPopulationSpawnPoint._fields_ = [
        ("UObject", UObject_Data),
        ("UInterface", UInterface_Data),
        ("UIPopulationSpawnPoint", UIPopulationSpawnPoint_Data),
    ]

    UPopulationDefinition_Data._fields_ = [
        ("VfTable_IIConstructObject", FPointer),
        ("ActorArchetypeList", TArray_FPopulationActor),
        ("RespawnStyle", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("bTotalResetOnLevelLoad", c_bool, 1),
    ]

    UPopulationDefinition._fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UPopulationDefinition", UPopulationDefinition_Data),
    ]

    UPopulationFactory_Data._fields_ = [
        ("VfTable_IIConstructObject", FPointer),
        ("OnActorSpawn", TArray_UBehaviorBasePtr),
        ("DestructionParams", FDestructionParameters),
        ("bIsCriticalActor", c_bool, 1),
        ("bUseSavedLocationWhenRestored", c_bool, 1),
        ("UseCostOverride", c_bool, 1),
        ("SpawnCostOverride", c_int),
    ]

    UPopulationFactory._fields_ = [
        ("UObject", UObject_Data),
        ("UPopulationFactory", UPopulationFactory_Data),
    ]

    UPopulationFactoryGeneric_Data._fields_ = [("ActorArchetype", POINTER(AActor))]

    UPopulationFactoryGeneric._fields_ = [
        ("UObject", UObject_Data),
        ("UPopulationFactory", UPopulationFactory_Data),
        ("UPopulationFactoryGeneric", UPopulationFactoryGeneric_Data),
    ]

    UPopulationFactoryPopulationDefinition_Data._fields_ = [
        ("PopulationDef", POINTER(UPopulationDefinition))
    ]

    UPopulationFactoryPopulationDefinition._fields_ = [
        ("UObject", UObject_Data),
        ("UPopulationFactory", UPopulationFactory_Data),
        (
            "UPopulationFactoryPopulationDefinition",
            UPopulationFactoryPopulationDefinition_Data,
        ),
    ]

    UPopulationMaster_Data._fields_ = [
        ("OpportunityList", TArray_FPopulationOpportunityTracker),
        ("ActiveActorCost", c_int),
        ("MaxActorCost", c_int),
        ("MasterThinkRate", c_float),
        ("MasterTestForDestroyRate", c_float),
        ("IfIrrelevantDestroyTimeout", c_float),
        ("PopulationMasterStats", TArray_FPopulationMasterStat),
        ("EncounterList", TArray_FEncounterTracker),
        ("SecondsElapsed", c_float),
        ("NextOpportunityTickTime", c_float),
        ("NextDestroyTestTickTime", c_float),
        ("PopulationRespawnDelayInSeconds", c_float),
        ("bHasActorsReadyToDeleteIfSpaceIsNeeded", c_bool, 1),
        ("bShutdownAIWhenIrrelevant", c_bool, 1),
    ]

    UPopulationMaster._fields_ = [
        ("UObject", UObject_Data),
        ("UPopulationMaster", UPopulationMaster_Data),
    ]

    APopulationOpportunity_Data._fields_ = [
        ("VfTable_IIBodyCompositionInstance", FPointer),
        ("CleanupParams", FOpportunityCleanupParameters),
        ("IsEnabled", c_bool, 1),
        ("bNoRespawning", c_bool, 1),
        ("bIsWaitingForRespawn", c_bool, 1),
        ("bUseRandomSpawns", c_bool, 1),
        ("SpawnPoints", TArray_APopulationPointPtr),
        ("StreamingLevel", POINTER(ULevelStreaming)),
        ("SystemID", c_int),
        ("NextInitialDestinationIdx", c_int),
        ("SequenceActionLink", POINTER(UGearboxSeqAct_PopulationOpportunityLink)),
        ("LastTimeBlockedFromSpawningDueToPopLimits", c_float),
        ("RespawnDelayStartTime", c_float),
        ("GameStageRegion", POINTER(URegionDefinition)),
        ("Aspect", POINTER(UPopulationAspect)),
        ("SpawnIndex", c_int),
        ("SpawnList", TArray_int),
        ("InclusiveSpawnIndex", c_int),
        ("InclusiveSpawnList", TArray_int),
    ]

    APopulationOpportunity._fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("AInfo", AInfo_Data),
        ("APopulationOpportunity", APopulationOpportunity_Data),
    ]

    APopulationOpportunityArea_Data._fields_ = [
        ("SpawnOptions", TArray_FPopulationOptionAreaData),
        ("bContinueSpawningAfterPlayerDetected", c_bool, 1),
        ("bOpportunityVolume", c_bool, 1),
        ("bOpportunityRadius", c_bool, 1),
        ("bOpportunityLevel", c_bool, 1),
        ("bPlayerHasBeenDetected", c_bool, 1),
        ("DetectionVolumes", TArray_AVolumePtr),
        ("DetectionRadius", c_float),
        ("SelectedSpawnIdx", c_int),
        ("SpawnData", TArray_FPopulationAreaOptionSpawnData),
        ("PlayersDetected", TArray_APlayerControllerPtr),
        ("NumPlayersDetected", c_int),
    ]

    APopulationOpportunityArea._fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("AInfo", AInfo_Data),
        ("APopulationOpportunity", APopulationOpportunity_Data),
        ("APopulationOpportunityArea", APopulationOpportunityArea_Data),
    ]

    APopulationOpportunityCloner_Data._fields_ = [
        ("Conditions", POINTER(UExpressionEvaluator)),
        ("SpawnFactory", POINTER(UPopulationFactory)),
        ("MaxTotalActors", c_int),
        ("MaxActiveActors", c_int),
        ("RespawnStyle", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("bTotalResetOnLevelLoad", c_bool, 1),
        ("bReadyToSpawn", c_bool, 1),
        ("RespawnDelay", c_float),
        ("RespawnDelayAfterDeath", c_float),
        ("NumTotalActors", c_int),
        ("NumActiveActors", c_int),
    ]

    APopulationOpportunityCloner._fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("AInfo", AInfo_Data),
        ("APopulationOpportunity", APopulationOpportunity_Data),
        ("APopulationOpportunityCloner", APopulationOpportunityCloner_Data),
    ]

    APopulationOpportunityCombat_Data._fields_ = [
        ("VfTable_IIGbxMessageListener", FPointer),
        ("ParentEncounter", POINTER(APopulationEncounter)),
        ("ParentEncounterWave", c_int),
        ("PopulationDef", POINTER(UPopulationDefinition)),
        ("MaxTotalActorsFormula", FAttributeInitializationData),
        ("MaxTotalActors", c_int),
        ("MaxActiveActorsIsNormal", c_int),
        ("MaxActiveActorsThreatened", c_int),
        ("RespawnDelayFormula", FAttributeInitializationData),
        ("bAdjustForPlayerCount", c_bool, 1),
        ("bOpportunityVolume", c_bool, 1),
        ("bOpportunityRadius", c_bool, 1),
        ("bPlayerHasBeenDetected", c_bool, 1),
        ("bShowDebugEnabled", c_bool, 1),
        ("DetectionVolumes", TArray_AVolumePtr),
        ("DetectionRadius", c_float),
        ("OpportunityHeight", c_float),
        ("RadiusDebugColor", FColor),
        ("RespawnDelay", c_float),
        ("DetectionDrawSphere", POINTER(UDrawSphereComponent)),
        ("ActivePlayerScale", c_float),
        ("SpawnedMembers", TArray_AGearboxPawnPtr),
        ("SpawnData", FPopulationOptionSpawnData),
        ("PlayersDetected", TArray_APlayerControllerPtr),
        ("NumPlayersDetected", c_int),
    ]

    APopulationOpportunityCombat._fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("AInfo", AInfo_Data),
        ("APopulationOpportunity", APopulationOpportunity_Data),
        ("APopulationOpportunityCombat", APopulationOpportunityCombat_Data),
    ]

    APopulationOpportunityPoint_Data._fields_ = [
        ("VfTable_IIPopulationSpawnPoint", FPointer),
        ("PopulationDef", POINTER(UPopulationDefinition)),
        ("SpawnAndCullRadius", c_float),
        ("SpawnCustomizations", TArray_UBehaviorBasePtr),
        ("SpawnedForMatinee", c_bool, 1),
        ("bHasSpawned", c_bool, 1),
        ("bActiveSpawn", c_bool, 1),
        ("bDetectedPlayer", c_bool, 1),
        ("AISpawnStyle", c_ubyte),
        ("InitialAction", c_ubyte),
        ("Unknown1", c_ubyte * 0x2),
        ("InitialActionDestinations", TArray_AActorPtr),
    ]

    APopulationOpportunityPoint._fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("AInfo", AInfo_Data),
        ("APopulationOpportunity", APopulationOpportunity_Data),
        ("APopulationOpportunityPoint", APopulationOpportunityPoint_Data),
    ]

    UPopulationOpportunityAreaRenderingComponent_Data._fields_ = []

    UPopulationOpportunityAreaRenderingComponent._fields_ = [
        ("UObject", UObject_Data),
        ("UComponent", UComponent_Data),
        ("UActorComponent", UActorComponent_Data),
        ("UPrimitiveComponent", UPrimitiveComponent_Data),
        (
            "UPopulationOpportunityAreaRenderingComponent",
            UPopulationOpportunityAreaRenderingComponent_Data,
        ),
    ]

    UPopulationOpportunityAttributeContextResolver_Data._fields_ = []

    UPopulationOpportunityAttributeContextResolver._fields_ = [
        ("UObject", UObject_Data),
        ("UAttributeContextResolver", UAttributeContextResolver_Data),
        (
            "UPopulationOpportunityAttributeContextResolver",
            UPopulationOpportunityAttributeContextResolver_Data,
        ),
    ]

    UPopulationOpportunityPointRenderingComponent_Data._fields_ = []

    UPopulationOpportunityPointRenderingComponent._fields_ = [
        ("UObject", UObject_Data),
        ("UComponent", UComponent_Data),
        ("UActorComponent", UActorComponent_Data),
        ("UPrimitiveComponent", UPrimitiveComponent_Data),
        (
            "UPopulationOpportunityPointRenderingComponent",
            UPopulationOpportunityPointRenderingComponent_Data,
        ),
    ]

    APopulationPoint_Data._fields_ = [
        ("VfTable_IIPopulationSpawnPoint", FPointer),
        ("Flags", c_int),
        ("AISpawnStyle", c_ubyte),
        ("InitialAction", c_ubyte),
        ("ConstraintType", c_ubyte),
        ("Unknown1", c_ubyte * 0x1),
        ("InitialActionDestinations", TArray_AActorPtr),
        ("InitialMovementHoldTime", c_float),
        ("bAttachSpawnedToBase", c_bool, 1),
        ("IsEnabled", c_bool, 1),
        ("bDisableAfterUse", c_bool, 1),
        ("TestVisibility", c_bool, 1),
        ("TestFOV", c_bool, 1),
        ("InitialDestinationIndex", c_int),
        ("TagsToUseWithConstraint", TArray_UPopulationSpawnedActorTagDefinitionPtr),
        ("OnSpawnCustomizations", TArray_UBehaviorBasePtr),
        ("MinSpawnDistance", c_float),
    ]

    APopulationPoint._fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("APopulationPoint", APopulationPoint_Data),
    ]

    APopulationPoint_Dynamic_Data._fields_ = [
        ("DynamicPointName", FName),
        ("bSaveAsInstanceDataOnBase", c_bool, 1),
    ]

    APopulationPoint_Dynamic._fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("APopulationPoint", APopulationPoint_Data),
        ("APopulationPoint_Dynamic", APopulationPoint_Dynamic_Data),
    ]

    UPopulationPointRenderingComponent_Data._fields_ = []

    UPopulationPointRenderingComponent._fields_ = [
        ("UObject", UObject_Data),
        ("UComponent", UComponent_Data),
        ("UActorComponent", UActorComponent_Data),
        ("UPrimitiveComponent", UPrimitiveComponent_Data),
        ("UPopulationPointRenderingComponent", UPopulationPointRenderingComponent_Data),
    ]

    USeqEvent_EncounterWaveComplete_Data._fields_ = [("CurrentWave", c_int)]

    USeqEvent_EncounterWaveComplete._fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceEvent", USequenceEvent_Data),
        ("USeqEvent_EncounterWaveComplete", USeqEvent_EncounterWaveComplete_Data),
    ]

    USeqEvent_PopulatedActor_Data._fields_ = [
        ("DestPopulationOpportunity", POINTER(APopulationOpportunity)),
        ("SpawnPoint", POINTER(AActor)),
    ]

    USeqEvent_PopulatedActor._fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceEvent", USequenceEvent_Data),
        ("USeqEvent_PopulatedActor", USeqEvent_PopulatedActor_Data),
    ]

    USeqEvent_PopulatedPoint_Data._fields_ = [
        ("DestPopulationOpportunity", POINTER(APopulationOpportunity)),
        ("SpawnPoint", POINTER(AActor)),
    ]

    USeqEvent_PopulatedPoint._fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceEvent", USequenceEvent_Data),
        ("USeqEvent_PopulatedPoint", USeqEvent_PopulatedPoint_Data),
    ]

    AGearboxHUD_Data._fields_ = []

    AGearboxHUD._fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("AHUD", AHUD_Data),
        ("AGearboxHUD", AGearboxHUD_Data),
    ]

    UAIDefinition_Data._fields_ = [
        ("VfTable_IIBehaviorProvider", FPointer),
        ("BehaviorProviderDefinition", POINTER(UBehaviorProviderDefinition)),
        ("AIBehaviorProviderDefinition", POINTER(UAIBehaviorProviderDefinition)),
        ("bHealOnReset", c_bool, 1),
        ("NodeList", TArray_FAITreeData),
        ("TargetSearchRadius", c_float),
        ("TargetingDef", POINTER(UTargetingDefinition)),
    ]

    UAIDefinition._fields_ = [
        ("UObject", UObject_Data),
        ("UAIDefinition", UAIDefinition_Data),
    ]

    UBehaviorEventFilterBase_Data._fields_ = [("ShouldBeInstanced", c_bool, 1)]

    UBehaviorEventFilterBase._fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorEventFilterBase", UBehaviorEventFilterBase_Data),
    ]

    UBehaviorKernel_Data._fields_ = [
        ("Processes", FStableArray_Mirror),
        ("ProcessDeathList", FChunkedList_Mirror),
        ("WaitingThreads", FChunkedList_Mirror),
        ("Providers", TArray_FProviderRecord),
        ("ProvidersIndexFreeList", FChunkedList_Mirror),
        ("ProvidersPendingRemoval", FChunkedList_Mirror),
        ("ObjectVariables", TArray_UObjectPtr),
        ("ObjectVariablesIndexFreeList", FChunkedList_Mirror),
        ("DynamicBehaviors", TArray_FBehaviorSequenceActionData2),
        ("DynamicBehaviorsIndexFreeList", FChunkedList_Mirror),
        ("ProvidersListReserveLength", c_int),
        ("ObjectVariablesListReserveLength", c_int),
        ("DynamicBehaviorsListReserveLength", c_int),
        ("WatchedPID", c_int),
        ("RecentlyRunBehaviors", FChunkedList_Mirror),
        ("CurrentDebugPage", c_int),
        ("DebugPages", TArray_FString),
        ("EventFilterObjects", TArray_UObjectPtr),
    ]

    UBehaviorKernel._fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorKernel", UBehaviorKernel_Data),
    ]

    UBehaviorProviderDefinition_Data._fields_ = [
        ("CurrentVersion", c_int),
        ("BehaviorSequences", TArray_FBehaviorSequenceData),
    ]

    UBehaviorProviderDefinition._fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UBehaviorProviderDefinition", UBehaviorProviderDefinition_Data),
    ]

    UAIBehaviorProviderDefinition_Data._fields_ = []

    UAIBehaviorProviderDefinition._fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UBehaviorProviderDefinition", UBehaviorProviderDefinition_Data),
        ("UAIBehaviorProviderDefinition", UAIBehaviorProviderDefinition_Data),
    ]

    UBehaviorSequenceCustomEnableCondition_Data._fields_ = [
        ("LinkedBehaviorSequences", FChunkedList_Mirror),
        ("BehaviorKernelInstanceTagForTransientState", c_ubyte),
    ]

    UBehaviorSequenceCustomEnableCondition._fields_ = [
        ("UObject", UObject_Data),
        (
            "UBehaviorSequenceCustomEnableCondition",
            UBehaviorSequenceCustomEnableCondition_Data,
        ),
    ]

    UBehaviorSequenceEnableByMultipleConditions_Data._fields_ = [
        ("EnableConditions", TArray_UBehaviorSequenceCustomEnableConditionPtr),
        ("Operator", c_ubyte),
    ]

    UBehaviorSequenceEnableByMultipleConditions._fields_ = [
        ("UObject", UObject_Data),
        (
            "UBehaviorSequenceCustomEnableCondition",
            UBehaviorSequenceCustomEnableCondition_Data,
        ),
        (
            "UBehaviorSequenceEnableByMultipleConditions",
            UBehaviorSequenceEnableByMultipleConditions_Data,
        ),
    ]

    UIBehaviorConsumer_Data._fields_ = []

    UIBehaviorConsumer._fields_ = [
        ("UObject", UObject_Data),
        ("UInterface", UInterface_Data),
        ("UIBehaviorConsumer", UIBehaviorConsumer_Data),
    ]

    UIBehaviorProvider_Data._fields_ = []

    UIBehaviorProvider._fields_ = [
        ("UObject", UObject_Data),
        ("UInterface", UInterface_Data),
        ("UIBehaviorProvider", UIBehaviorProvider_Data),
    ]

    UICustomEvent_Data._fields_ = []

    UICustomEvent._fields_ = [
        ("UObject", UObject_Data),
        ("UInterface", UInterface_Data),
        ("UICustomEvent", UICustomEvent_Data),
    ]

    UITimerBehavior_Data._fields_ = []

    UITimerBehavior._fields_ = [
        ("UObject", UObject_Data),
        ("UInterface", UInterface_Data),
        ("UITimerBehavior", UITimerBehavior_Data),
    ]

    UGearboxAnimDefinition_Data._fields_ = [
        ("VfTable_IIBehaviorProvider", FPointer),
        ("AnimName", FName),
        ("BlendInTime", c_float),
        ("BlendOutTime", c_float),
        ("PlayRate", c_float),
        ("EndingCondition", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("AnimSet", POINTER(UAnimSet)),
        ("bMirrored", c_bool, 1),
        ("BlendPerBone", c_bool, 1),
        ("DisableAnimSequenceNotifies", c_bool, 1),
        ("bOnlyPlayNotifiesWhileActive", c_bool, 1),
        ("bReverseAnimSearchOrder", c_bool, 1),
        ("AnimNodeName", FName),
        ("RootMotionDef", POINTER(URootMotionDefinition)),
        ("BoneBlendDef", POINTER(UFeatherBoneBlendDefinition)),
        ("BoneNames", TArray_FName),
        ("StartBehaviors", TArray_FSMBehavior),
        ("SMNotifies", TArray_FSMNotify),
        ("StopBehaviors", TArray_FSMBehavior),
        ("TimedBehaviorEvents", TArray_FTimedAnimBehaviorEvent),
        ("BehaviorProviderDefinition", POINTER(UBehaviorProviderDefinition)),
    ]

    UGearboxAnimDefinition._fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("USpecialMoveDefinition", USpecialMoveDefinition_Data),
        ("UGearboxAnimDefinition", UGearboxAnimDefinition_Data),
    ]

    UBehavior_TriggerDialogEvent_Data._fields_ = [
        ("EventTag", POINTER(UGearboxDialogEventTag)),
        ("Group", POINTER(UGearboxDialogGroup)),
        ("NameTag", POINTER(UGearboxDialogNameTag)),
        ("Other", POINTER(UObject)),
        ("bForcePlayImmediate", c_bool, 1),
        ("bCheckCanPreview", c_bool, 1),
        ("bCanPreview", c_bool, 1),
        ("MyEventData", POINTER(UGearboxDialogEventData)),
        ("MyDataUseCount", c_int),
    ]

    UBehavior_TriggerDialogEvent._fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_TriggerDialogEvent", UBehavior_TriggerDialogEvent_Data),
    ]

    AGearboxDialogActor_Data._fields_ = [
        ("VfTable_IGearboxDialogInterface", FPointer),
        ("DialogGroups", TArray_UGearboxDialogGroupPtr),
        ("NameTag", POINTER(UGearboxDialogNameTag)),
        ("EditorSprite", POINTER(USpriteComponent)),
        ("DialogComponent", POINTER(UGearboxDialogComponent)),
        ("DialogReplicatedData", FGearboxDialogReplicatedData),
        ("CurrentNameTag", POINTER(UGearboxDialogNameTag)),
    ]

    AGearboxDialogActor._fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("AGearboxDialogActor", AGearboxDialogActor_Data),
    ]

    UGearboxDialogComponent_Data._fields_ = [
        ("EventData", POINTER(UGearboxDialogEventData)),
        ("ClientPlayingInfo", FAkPlayingInfo),
        ("bIsReattaching", c_bool, 1),
    ]

    UGearboxDialogComponent._fields_ = [
        ("UObject", UObject_Data),
        ("UComponent", UComponent_Data),
        ("UActorComponent", UActorComponent_Data),
        ("UGearboxDialogComponent", UGearboxDialogComponent_Data),
    ]

    UGearboxDialogEventData_Data._fields_ = [
        ("EventInfo", FDialogEventInfo),
        ("Instigator", POINTER(AActor)),
        ("Other", POINTER(AActor)),
        ("ObjectParameter", POINTER(UObject)),
        ("LastTalker", POINTER(AActor)),
        ("LiveTalkAction", POINTER(UGearboxDialogAct_Talk)),
        ("LiveTalkActionDataID", c_int),
        ("TemplateEventInfo", FDialogEventInfo),
        ("LiveTriggerAction", POINTER(UGearboxDialogAct_Trigger)),
        ("PlayingInfo", FAkPlayingInfo),
        ("TalkFinishTime", c_float),
        ("UseCount", c_int),
    ]

    UGearboxDialogEventData._fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxDialogEventData", UGearboxDialogEventData_Data),
    ]

    UGearboxDialogEventTag_Data._fields_ = [
        ("bGroupEvent", c_bool, 1),
        ("bSoundEffect", c_bool, 1),
        ("bIsDeathScream", c_bool, 1),
        ("Priority", POINTER(UGearboxDialogPriority)),
    ]

    UGearboxDialogEventTag._fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UGearboxDialogEventTag", UGearboxDialogEventTag_Data),
    ]

    UGearboxDialogGlobalsDefinition_Data._fields_ = [
        ("PitchRTPC", POINTER(UAkRtpc)),
        ("Priorities", TArray_UGearboxDialogPriorityPtr),
    ]

    UGearboxDialogGlobalsDefinition._fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UGearboxDialogGlobalsDefinition", UGearboxDialogGlobalsDefinition_Data),
    ]

    UGearboxDialogGroup_Data._fields_ = [
        ("EventTagPackages", TArray_UPackagePtr),
        ("NameTags", TArray_UGearboxDialogNameTagPtr),
        ("EventTags", TArray_UGearboxDialogEventTagPtr),
        ("ParentGroup", POINTER(UGearboxDialogGroup)),
        ("Nodes", TArray_UGearboxDialogNodePtr),
        ("SharedDialogEvent", POINTER(UGearboxDialogEvent)),
        ("SharedTalkAct", POINTER(UGearboxDialogAct_Talk)),
        ("OutputLinksToStructs", TArray_FOutputLinkToStruct),
        ("DialogEvents", TArray_FDialogEventData),
        ("TalkActs", TArray_FTalkActData),
    ]

    UGearboxDialogGroup._fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxDialogGroup", UGearboxDialogGroup_Data),
    ]

    UGearboxDialogTemplateGroup_Data._fields_ = []

    UGearboxDialogTemplateGroup._fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxDialogGroup", UGearboxDialogGroup_Data),
        ("UGearboxDialogTemplateGroup", UGearboxDialogTemplateGroup_Data),
    ]

    UGearboxDialogManager_Data._fields_ = [
        ("bEnabled", c_bool, 1),
        ("bShowDebug", c_bool, 1),
        ("Talkers", TArray_AActorPtr),
        ("DisabledTalkers", TArray_AActorPtr),
        ("Groups", TArray_UGearboxDialogGroupPtr),
        ("CurrentEventContext", POINTER(UGearboxDialogEventData)),
        ("GroupEventTagMap", FMap_Mirror),
        ("EventDataPool", TArray_UGearboxDialogEventDataPtr),
        ("EventDataClassPath", FString),
        ("EventDataClass", POINTER(UClass)),
    ]

    UGearboxDialogManager._fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxDialogManager", UGearboxDialogManager_Data),
    ]

    UGearboxDialogNameTag_Data._fields_ = [
        ("NameTag", FName),
        ("ParentTag", POINTER(UGearboxDialogNameTag)),
    ]

    UGearboxDialogNameTag._fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UGearboxDialogNameTag", UGearboxDialogNameTag_Data),
    ]

    UGearboxDialogPriority_Data._fields_ = []

    UGearboxDialogPriority._fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UGearboxDialogPriority", UGearboxDialogPriority_Data),
    ]

    UGearboxDialogNode_Data._fields_ = [("NodeID", c_int)]

    UGearboxDialogNode._fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UGearboxDialogNode", UGearboxDialogNode_Data),
    ]

    UGearboxDialogAction_Data._fields_ = []

    UGearboxDialogAction._fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UGearboxDialogNode", UGearboxDialogNode_Data),
        ("UGearboxDialogAction", UGearboxDialogAction_Data),
    ]

    UGearboxDialogAct_Chance_Data._fields_ = [
        ("Chance", c_float),
        ("QuietTimeMin", c_float),
        ("QuietTimeMax", c_float),
        ("NextFireTime", c_float),
    ]

    UGearboxDialogAct_Chance._fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UGearboxDialogNode", UGearboxDialogNode_Data),
        ("UGearboxDialogAction", UGearboxDialogAction_Data),
        ("UGearboxDialogAct_Chance", UGearboxDialogAct_Chance_Data),
    ]

    UGearboxDialogAct_Compare_Data._fields_ = []

    UGearboxDialogAct_Compare._fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UGearboxDialogNode", UGearboxDialogNode_Data),
        ("UGearboxDialogAction", UGearboxDialogAction_Data),
        ("UGearboxDialogAct_Compare", UGearboxDialogAct_Compare_Data),
    ]

    UGearboxDialogAct_ObjectParameterSwitch_Data._fields_ = [
        ("Outputs", TArray_UObjectPtr)
    ]

    UGearboxDialogAct_ObjectParameterSwitch._fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UGearboxDialogNode", UGearboxDialogNode_Data),
        ("UGearboxDialogAction", UGearboxDialogAction_Data),
        (
            "UGearboxDialogAct_ObjectParameterSwitch",
            UGearboxDialogAct_ObjectParameterSwitch_Data,
        ),
    ]

    UGearboxDialogNonTemplateAction_Data._fields_ = []

    UGearboxDialogNonTemplateAction._fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UGearboxDialogNode", UGearboxDialogNode_Data),
        ("UGearboxDialogAction", UGearboxDialogAction_Data),
        ("UGearboxDialogNonTemplateAction", UGearboxDialogNonTemplateAction_Data),
    ]

    UGearboxDialogAct_Talk_Data._fields_ = [
        ("OutputDelay", c_float),
        ("bShowTalkers", c_bool, 1),
        ("bPreviewing", c_bool, 1),
        ("bInstigatorTalker", c_bool, 1),
        ("TalkData", TArray_FGearboxDialogData),
    ]

    UGearboxDialogAct_Talk._fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UGearboxDialogNode", UGearboxDialogNode_Data),
        ("UGearboxDialogAction", UGearboxDialogAction_Data),
        ("UGearboxDialogNonTemplateAction", UGearboxDialogNonTemplateAction_Data),
        ("UGearboxDialogAct_Talk", UGearboxDialogAct_Talk_Data),
    ]

    UGearboxDialogTemplateAction_Data._fields_ = []

    UGearboxDialogTemplateAction._fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UGearboxDialogNode", UGearboxDialogNode_Data),
        ("UGearboxDialogAction", UGearboxDialogAction_Data),
        ("UGearboxDialogTemplateAction", UGearboxDialogTemplateAction_Data),
    ]

    UGearboxDialogAct_Trigger_Data._fields_ = [
        ("DialogEvent", POINTER(UGearboxDialogEventTag)),
        ("bPreviewing", c_bool, 1),
    ]

    UGearboxDialogAct_Trigger._fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UGearboxDialogNode", UGearboxDialogNode_Data),
        ("UGearboxDialogAction", UGearboxDialogAction_Data),
        ("UGearboxDialogTemplateAction", UGearboxDialogTemplateAction_Data),
        ("UGearboxDialogAct_Trigger", UGearboxDialogAct_Trigger_Data),
    ]

    UGearboxDialogEvent_Data._fields_ = [
        ("bDisabled", c_bool, 1),
        ("Tag", POINTER(UGearboxDialogEventTag)),
    ]

    UGearboxDialogEvent._fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UGearboxDialogNode", UGearboxDialogNode_Data),
        ("UGearboxDialogEvent", UGearboxDialogEvent_Data),
    ]

    UGearboxDialogTemplateEvent_Data._fields_ = []

    UGearboxDialogTemplateEvent._fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UGearboxDialogNode", UGearboxDialogNode_Data),
        ("UGearboxDialogEvent", UGearboxDialogEvent_Data),
        ("UGearboxDialogTemplateEvent", UGearboxDialogTemplateEvent_Data),
    ]

    UGearboxDialogVariable_Data._fields_ = []

    UGearboxDialogVariable._fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UGearboxDialogNode", UGearboxDialogNode_Data),
        ("UGearboxDialogVariable", UGearboxDialogVariable_Data),
    ]

    UGearboxDialogVar_Instigator_Data._fields_ = []

    UGearboxDialogVar_Instigator._fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UGearboxDialogNode", UGearboxDialogNode_Data),
        ("UGearboxDialogVariable", UGearboxDialogVariable_Data),
        ("UGearboxDialogVar_Instigator", UGearboxDialogVar_Instigator_Data),
    ]

    UGearboxDialogVar_LastTalker_Data._fields_ = []

    UGearboxDialogVar_LastTalker._fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UGearboxDialogNode", UGearboxDialogNode_Data),
        ("UGearboxDialogVariable", UGearboxDialogVariable_Data),
        ("UGearboxDialogVar_LastTalker", UGearboxDialogVar_LastTalker_Data),
    ]

    UGearboxDialogVar_NameTag_Data._fields_ = [
        ("NameTag", POINTER(UGearboxDialogNameTag))
    ]

    UGearboxDialogVar_NameTag._fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UGearboxDialogNode", UGearboxDialogNode_Data),
        ("UGearboxDialogVariable", UGearboxDialogVariable_Data),
        ("UGearboxDialogVar_NameTag", UGearboxDialogVar_NameTag_Data),
    ]

    UGearboxDialogVar_Other_Data._fields_ = []

    UGearboxDialogVar_Other._fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UGearboxDialogNode", UGearboxDialogNode_Data),
        ("UGearboxDialogVariable", UGearboxDialogVariable_Data),
        ("UGearboxDialogVar_Other", UGearboxDialogVar_Other_Data),
    ]

    UGearboxDialogVar_Random_Data._fields_ = [
        ("bNotOther", c_bool, 1),
        ("bNotInstigator", c_bool, 1),
        ("bNotLastTalker", c_bool, 1),
        ("Allegiance", POINTER(UPawnAllegiance)),
        ("DistanceLimit", FAttributeInitializationData),
    ]

    UGearboxDialogVar_Random._fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UGearboxDialogNode", UGearboxDialogNode_Data),
        ("UGearboxDialogVariable", UGearboxDialogVariable_Data),
        ("UGearboxDialogVar_Random", UGearboxDialogVar_Random_Data),
    ]

    UGearboxSeqAct_ToggleDialog_Data._fields_ = [("bDialogEnabled", c_bool, 1)]

    UGearboxSeqAct_ToggleDialog._fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        ("UGearboxSeqAct_ToggleDialog", UGearboxSeqAct_ToggleDialog_Data),
    ]

    UGearboxSeqAct_TriggerDialog_Data._fields_ = [
        ("Other", POINTER(AActor)),
        ("EventTag", POINTER(UGearboxDialogEventTag)),
        ("NameTag", POINTER(UGearboxDialogNameTag)),
        ("EventData", POINTER(UGearboxDialogEventData)),
        ("MyDataUseCount", c_int),
        ("bCheckCanPreview", c_bool, 1),
        ("bCanPreview", c_bool, 1),
    ]

    UGearboxSeqAct_TriggerDialog._fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        ("USeqAct_Latent", USeqAct_Latent_Data),
        ("UGearboxSeqAct_TriggerDialog", UGearboxSeqAct_TriggerDialog_Data),
    ]

    UGearboxSeqAct_TriggerDialogName_Data._fields_ = [
        ("Group", POINTER(UGearboxDialogGroup))
    ]

    UGearboxSeqAct_TriggerDialogName._fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        ("USeqAct_Latent", USeqAct_Latent_Data),
        ("UGearboxSeqAct_TriggerDialog", UGearboxSeqAct_TriggerDialog_Data),
        ("UGearboxSeqAct_TriggerDialogName", UGearboxSeqAct_TriggerDialogName_Data),
    ]

    UGearboxAccountActions_Data._fields_ = [
        ("CurrentConsumeCount", c_int),
        ("CurrentControllerId", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("CurrentEntitlement", POINTER(UGearboxAccountEntitlement)),
        ("CurrentBulkConsumeEntitlements", TArray_UGearboxAccountEntitlementPtr),
        ("CurrentBulkConsumeControllerIds", TArray_int),
        ("CurrentBulkConsumeCounts", TArray_int),
        ("__OnSignInGearboxAccount__Delegate", FScriptDelegate),
        ("__OnSignUpGearboxAccount__Delegate", FScriptDelegate),
        ("__OnResetPasswordGearboxAccount__Delegate", FScriptDelegate),
        ("__OnCodeRedeemed__Delegate", FScriptDelegate),
        ("__OnEntitlementConsumed__Delegate", FScriptDelegate),
    ]

    UGearboxAccountActions._fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxAccountActions", UGearboxAccountActions_Data),
    ]

    UGearboxAccountData_Data._fields_ = [
        ("RequestId", FString),
        ("SignedIn", c_bool, 1),
        ("HasValidPlatform", c_bool, 1),
        ("PlatformLoginName", FString),
        ("NextEntitlementUpdateTime", FDouble),
        ("Entitlements", TArray_UGearboxAccountEntitlementPtr),
        ("Offers", TArray_UGearboxAccountOfferPtr),
        ("EntitlementsUpdatedDelegates", TArray_FScriptDelegate),
        ("Services", TArray_USparkServiceConfigurationPtr),
        ("AgreementsSigning", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("SupportId", FString),
    ]

    UGearboxAccountData._fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxAccountData", UGearboxAccountData_Data),
    ]

    UGearboxProcess_Data._fields_ = [
        ("FirstAttemptDelay", c_int),
        ("BaseRetrySeconds", c_int),
        ("MaxRetryAttempts", c_int),
        ("RetryMultiplier", c_float),
        ("RetryJitter", c_int),
        ("CurrentRetrySeconds", c_float),
        ("Attempts", c_int),
        ("WaitTime", c_float),
        ("Waiting", c_bool, 1),
        ("CurrentStep", c_int),
        ("FailureStep", c_int),
    ]

    UGearboxProcess._fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxProcess", UGearboxProcess_Data),
    ]

    USparkInitializationProcess_Data._fields_ = [
        ("Data", POINTER(UGearboxAccountData)),
        ("PlayerIndex", c_int),
        ("SparkInitializedDelegates", TArray_FScriptDelegate),
        ("bPrimary", c_bool, 1),
        ("ValidAccount", c_bool, 1),
        ("AsyncTicket", FString),
    ]

    USparkInitializationProcess._fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxProcess", UGearboxProcess_Data),
        ("USparkInitializationProcess", USparkInitializationProcess_Data),
    ]

    ULeviathanService_Data._fields_ = [
        ("VfTable_ISparkUpdateCallback", FPointer),
        ("EventBufferSize", c_int),
        ("StatBufferSize", c_int),
        ("AtomTableBufferSize", c_int),
    ]

    ULeviathanService._fields_ = [
        ("UObject", UObject_Data),
        ("ULeviathanService", ULeviathanService_Data),
    ]

    USparkInterface_Data._fields_ = []

    USparkInterface._fields_ = [
        ("UObject", UObject_Data),
        ("UInterface", UInterface_Data),
        ("USparkInterface", USparkInterface_Data),
    ]

    USparkInterfaceImpl_Data._fields_ = [
        ("VfTable_ISparkInterface", FPointer),
        ("VfTable_FTickableObject", FPointer),
        ("SparkInitialization", POINTER(USparkInitializationProcess)),
        ("SecondaryInitialization", POINTER(USparkInitializationProcess)),
        ("Accounts", TArray_UGearboxAccountDataPtr),
        ("LeviathanServiceClassName", FString),
        ("LeviathanSvc", POINTER(ULeviathanService)),
        ("ReadBufferSize", c_int),
        ("TmsInitComplete", c_bool, 1),
        ("UpdateEmergencyMessage", c_bool, 1),
        ("EmergencyMessage", FString),
        ("Requests", TArray_FSparkOutstandingRequest),
        ("LastHttpRequestRetries", c_int),
        ("LastHttpRequestResponseTime", c_float),
        ("RecentHttpRequestFailures", c_int),
        ("InteractionMinWaitSeconds", c_int),
        ("InteractionGraceTries", c_int),
        ("InteractionPunishmentMinWaitSeconds", c_int),
        ("InteractionTries", c_int),
        ("TitleStorageService", POINTER(USparkServiceConfiguration)),
        ("TitleStorageUrl", FString),
        ("NewsService", POINTER(USparkNews)),
        ("__OnSparkRequestComplete__Delegate", FScriptDelegate),
        ("__OnSparkConfigReceived__Delegate", FScriptDelegate),
        ("__OnSparkEmergencyMessageUpdated__Delegate", FScriptDelegate),
    ]

    USparkInterfaceImpl._fields_ = [
        ("UObject", UObject_Data),
        ("USparkInterfaceImpl", USparkInterfaceImpl_Data),
    ]

    USparkServiceConfiguration_Data._fields_ = [
        ("ServiceName", FName),
        ("ConfigurationGroup", FName),
        ("Keys", TArray_FString),
        ("Values", TArray_FString),
        ("OverrideUrl", FString),
    ]

    USparkServiceConfiguration._fields_ = [
        ("UObject", UObject_Data),
        ("USparkServiceConfiguration", USparkServiceConfiguration_Data),
    ]

    USparkTypes_Data._fields_ = [
        ("__OnSparkRequestComplete__Delegate", FScriptDelegate),
        ("__OnSparkConfigReceived__Delegate", FScriptDelegate),
        ("__OnSparkInitialized__Delegate", FScriptDelegate),
        ("__OnSparkEmergencyMessageUpdated__Delegate", FScriptDelegate),
        ("__OnEntitlementsUpdated__Delegate", FScriptDelegate),
    ]

    USparkTypes._fields_ = [
        ("UObject", UObject_Data),
        ("USparkTypes", USparkTypes_Data),
    ]

    UAction_ChangeRuleSet_Data._fields_ = [("NewRuleSet", POINTER(URuleSet))]

    UAction_ChangeRuleSet._fields_ = [
        ("UObject", UObject_Data),
        ("UActionSequence", UActionSequence_Data),
        ("UAction_ChangeRuleSet", UAction_ChangeRuleSet_Data),
    ]

    URES_RuleSetChange_Data._fields_ = []

    URES_RuleSetChange._fields_ = [
        ("UObject", UObject_Data),
        ("UActionResource", UActionResource_Data),
        ("URES_RuleSetChange", URES_RuleSetChange_Data),
    ]

    UAction_FaceThreat_Data._fields_ = []

    UAction_FaceThreat._fields_ = [
        ("UObject", UObject_Data),
        ("UActionSequence", UActionSequence_Data),
        ("UActionSequencePawn", UActionSequencePawn_Data),
        ("UAction_FaceThreat", UAction_FaceThreat_Data),
    ]

    URES_FacingPolicy_Data._fields_ = []

    URES_FacingPolicy._fields_ = [
        ("UObject", UObject_Data),
        ("UActionResource", UActionResource_Data),
        ("URES_FacingPolicy", URES_FacingPolicy_Data),
    ]

    UAction_MoveRandom_Data._fields_ = []

    UAction_MoveRandom._fields_ = [
        ("UObject", UObject_Data),
        ("UActionSequence", UActionSequence_Data),
        ("UActionSequencePawn", UActionSequencePawn_Data),
        ("UAction_MoveRandom", UAction_MoveRandom_Data),
    ]

    UAction_MoveTo_Data._fields_ = []

    UAction_MoveTo._fields_ = [
        ("UObject", UObject_Data),
        ("UActionSequence", UActionSequence_Data),
        ("UActionSequencePawn", UActionSequencePawn_Data),
        ("UAction_MoveTo", UAction_MoveTo_Data),
    ]

    URES_Movement_Data._fields_ = []

    URES_Movement._fields_ = [
        ("UObject", UObject_Data),
        ("UActionResource", UActionResource_Data),
        ("URES_Movement", URES_Movement_Data),
    ]

    UAction_PopRuleSet_Data._fields_ = []

    UAction_PopRuleSet._fields_ = [
        ("UObject", UObject_Data),
        ("UActionSequence", UActionSequence_Data),
        ("UActionSequencePawn", UActionSequencePawn_Data),
        ("UAction_PopRuleSet", UAction_PopRuleSet_Data),
    ]

    UAction_PushRuleSet_Data._fields_ = [("NewRuleSet", POINTER(URuleSet))]

    UAction_PushRuleSet._fields_ = [
        ("UObject", UObject_Data),
        ("UActionSequence", UActionSequence_Data),
        ("UActionSequencePawn", UActionSequencePawn_Data),
        ("UAction_PushRuleSet", UAction_PushRuleSet_Data),
    ]

    UActorAttributeContextResolver_Data._fields_ = []

    UActorAttributeContextResolver._fields_ = [
        ("UObject", UObject_Data),
        ("UAttributeContextResolver", UAttributeContextResolver_Data),
        ("UActorAttributeContextResolver", UActorAttributeContextResolver_Data),
    ]

    UAIComponentAttributeContextResolver_Data._fields_ = []

    UAIComponentAttributeContextResolver._fields_ = [
        ("UObject", UObject_Data),
        ("UAttributeContextResolver", UAttributeContextResolver_Data),
        (
            "UAIComponentAttributeContextResolver",
            UAIComponentAttributeContextResolver_Data,
        ),
    ]

    UAIStateBase_Data._fields_ = []

    UAIStateBase._fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UAIStateBase", UAIStateBase_Data),
    ]

    UAIState_Data._fields_ = []

    UAIState._fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UAIStateBase", UAIStateBase_Data),
        ("UAIState", UAIState_Data),
    ]

    UAIState_Priority_Data._fields_ = []

    UAIState_Priority._fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UAIStateBase", UAIStateBase_Data),
        ("UAIState_Priority", UAIState_Priority_Data),
    ]

    UAIState_Random_Data._fields_ = []

    UAIState_Random._fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UAIStateBase", UAIStateBase_Data),
        ("UAIState_Random", UAIState_Random_Data),
    ]

    UAIState_Sequential_Data._fields_ = []

    UAIState_Sequential._fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxEditorNode", UGearboxEditorNode_Data),
        ("UAIStateBase", UAIStateBase_Data),
        ("UAIState_Sequential", UAIState_Sequential_Data),
    ]

    UBehavior_AIHold_Data._fields_ = [
        ("Reason", FName),
        ("Action", c_ubyte),
        ("Type", c_ubyte),
    ]

    UBehavior_AIHold._fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_AIHold", UBehavior_AIHold_Data),
    ]

    UBehavior_AIPriority_Data._fields_ = [
        ("PriorityModifier", c_float),
        ("Target", FBehaviorContextData),
    ]

    UBehavior_AIPriority._fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_AIPriority", UBehavior_AIPriority_Data),
    ]

    UBehavior_AITargeting_Data._fields_ = [
        ("NewTargetingDefinition", POINTER(UTargetingDefinition))
    ]

    UBehavior_AITargeting._fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_AITargeting", UBehavior_AITargeting_Data),
    ]

    UBehavior_ChangeAnyBehaviorSequenceState_Data._fields_ = [
        ("Action", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("SequenceName", FName),
    ]

    UBehavior_ChangeAnyBehaviorSequenceState._fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        (
            "UBehavior_ChangeAnyBehaviorSequenceState",
            UBehavior_ChangeAnyBehaviorSequenceState_Data,
        ),
    ]

    UBehavior_ChangeLocalBehaviorSequenceState_Data._fields_ = [
        ("Action", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("SequenceName", FName),
    ]

    UBehavior_ChangeLocalBehaviorSequenceState._fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        (
            "UBehavior_ChangeLocalBehaviorSequenceState",
            UBehavior_ChangeLocalBehaviorSequenceState_Data,
        ),
    ]

    UBehavior_CompareBool_Data._fields_ = [("BoolValue", c_bool, 1)]

    UBehavior_CompareBool._fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_CompareBool", UBehavior_CompareBool_Data),
    ]

    UBehavior_CompareValues_Data._fields_ = [
        ("ValueA", FAttributeInitializationData),
        ("ContextB", FBehaviorContextData),
        ("ValueB", FAttributeInitializationData),
    ]

    UBehavior_CompareValues._fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_CompareValues", UBehavior_CompareValues_Data),
    ]

    UBehavior_CustomEvent_Data._fields_ = [("CustomEventName", FName)]

    UBehavior_CustomEvent._fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_CustomEvent", UBehavior_CustomEvent_Data),
    ]

    UBehavior_Delay_Data._fields_ = [("Delay", c_float)]

    UBehavior_Delay._fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_Delay", UBehavior_Delay_Data),
    ]

    UBehavior_Gate_Data._fields_ = [("GateCount", c_int), ("ActivationCount", c_int)]

    UBehavior_Gate._fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_Gate", UBehavior_Gate_Data),
    ]

    UBehavior_GetFloatParam_Data._fields_ = []

    UBehavior_GetFloatParam._fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UParameterBehaviorBase", UParameterBehaviorBase_Data),
        ("UBehavior_GetFloatParam", UBehavior_GetFloatParam_Data),
    ]

    UBehavior_GetObjectParam_Data._fields_ = []

    UBehavior_GetObjectParam._fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UParameterBehaviorBase", UParameterBehaviorBase_Data),
        ("UBehavior_GetObjectParam", UBehavior_GetObjectParam_Data),
    ]

    UBehavior_GetVectorParam_Data._fields_ = [("bTreatAsVector", c_bool, 1)]

    UBehavior_GetVectorParam._fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UParameterBehaviorBase", UParameterBehaviorBase_Data),
        ("UBehavior_GetVectorParam", UBehavior_GetVectorParam_Data),
    ]

    UBehavior_InterpolateFloatOverTime_Data._fields_ = [
        ("Duration", c_float),
        ("UpdateInterval", c_float),
        ("EndingValue", c_float),
        ("BeginningValue", c_float),
    ]

    UBehavior_InterpolateFloatOverTime._fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_InterpolateFloatOverTime", UBehavior_InterpolateFloatOverTime_Data),
    ]

    UBehavior_Metronome_Data._fields_ = [
        ("bUseTickCount", c_bool, 1),
        ("bUseDuration", c_bool, 1),
        ("MaxTickCount", c_int),
        ("CurrentTickCount", c_int),
        ("Duration", c_float),
        ("TickInterval", c_float),
    ]

    UBehavior_Metronome._fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_Metronome", UBehavior_Metronome_Data),
    ]

    UBehavior_ModifyTimer_Data._fields_ = [
        ("TimerId", c_ubyte),
        ("Operation", c_ubyte),
        ("Unknown1", c_ubyte * 0x2),
        ("NewTimerDelay", FAttributeInitializationData),
    ]

    UBehavior_ModifyTimer._fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_ModifyTimer", UBehavior_ModifyTimer_Data),
    ]

    UBehavior_SetFloatParam_Data._fields_ = [("Value", c_float)]

    UBehavior_SetFloatParam._fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UParameterBehaviorBase", UParameterBehaviorBase_Data),
        ("UBehavior_SetFloatParam", UBehavior_SetFloatParam_Data),
    ]

    UBehavior_SetObjectParam_Data._fields_ = [("Value", POINTER(UObject))]

    UBehavior_SetObjectParam._fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UParameterBehaviorBase", UParameterBehaviorBase_Data),
        ("UBehavior_SetObjectParam", UBehavior_SetObjectParam_Data),
    ]

    UBehavior_SetVectorParam_Data._fields_ = [
        ("RValue", c_float),
        ("GValue", c_float),
        ("bValue", c_float),
        ("AValue", c_float),
        ("bKeepR", c_bool, 1),
        ("bKeepG", c_bool, 1),
        ("bKeepB", c_bool, 1),
        ("bKeepA", c_bool, 1),
        ("bTreatAsVector", c_bool, 1),
    ]

    UBehavior_SetVectorParam._fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UParameterBehaviorBase", UParameterBehaviorBase_Data),
        ("UBehavior_SetVectorParam", UBehavior_SetVectorParam_Data),
    ]

    UBehavior_SpecialMove_Data._fields_ = [
        ("SpecialMove", POINTER(USpecialMoveDefinition)),
        ("bStopCurrentMove", c_bool, 1),
        ("bQueueIfCannotPlay", c_bool, 1),
        ("bLocal", c_bool, 1),
        ("Duration", c_float),
    ]

    UBehavior_SpecialMove._fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_SpecialMove", UBehavior_SpecialMove_Data),
    ]

    UBehavior_SpecialMoveStop_Data._fields_ = [
        ("SpecificMove", POINTER(USpecialMoveDefinition))
    ]

    UBehavior_SpecialMoveStop._fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_SpecialMoveStop", UBehavior_SpecialMoveStop_Data),
    ]

    UBehavior_StartAkAmbientSound_Data._fields_ = [
        ("AkEvent", POINTER(UAkEvent)),
        ("SoundGroup", POINTER(AWwiseSoundGroup)),
    ]

    UBehavior_StartAkAmbientSound._fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_StartAkAmbientSound", UBehavior_StartAkAmbientSound_Data),
    ]

    UBehavior_StopAkAmbientSound_Data._fields_ = [
        ("AkEvent", POINTER(UAkEvent)),
        ("SoundGroup", POINTER(AWwiseSoundGroup)),
    ]

    UBehavior_StopAkAmbientSound._fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_StopAkAmbientSound", UBehavior_StopAkAmbientSound_Data),
    ]

    UBehavior_StopDialog_Data._fields_ = [("EventTag", POINTER(UGearboxDialogEventTag))]

    UBehavior_StopDialog._fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_StopDialog", UBehavior_StopDialog_Data),
    ]

    UBehavior_ToggleDialog_Data._fields_ = [("Option", c_ubyte)]

    UBehavior_ToggleDialog._fields_ = [
        ("UObject", UObject_Data),
        ("UBehaviorBase", UBehaviorBase_Data),
        ("UBehavior_ToggleDialog", UBehavior_ToggleDialog_Data),
    ]

    UCameraModifierCrossfade_Data._fields_ = [
        ("ModifierA", POINTER(UGearboxCameraModifier)),
        ("ModifierB", POINTER(UGearboxCameraModifier)),
        ("CurModifierNdx", c_int),
        ("CurBlendWeight", c_float),
        ("BlendSpeed", c_float),
        ("DebugInset", c_int),
        ("LerpMode", c_ubyte),
    ]

    UCameraModifierCrossfade._fields_ = [
        ("UObject", UObject_Data),
        ("UCameraModifier", UCameraModifier_Data),
        ("UGearboxCameraModifier", UGearboxCameraModifier_Data),
        ("UCameraModifierCrossfade", UCameraModifierCrossfade_Data),
    ]

    UCameraModifierLookAt_Data._fields_ = [
        ("LookAtMode", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("bActionFinished", c_bool, 1),
        ("Duration", c_float),
        ("TimeElapsed", c_float),
        ("ThirdPersonPullBackDistance", c_float),
        ("ThirdPersonPushSideDistance", c_float),
        ("ThirdPersonRaiseUpDistance", c_float),
        ("Zoom", c_float),
        ("TransitionInTime", c_float),
        ("TransitionOutTime", c_float),
        ("LookAtTarget", POINTER(AActor)),
        ("LookAtBone", FName),
    ]

    UCameraModifierLookAt._fields_ = [
        ("UObject", UObject_Data),
        ("UCameraModifier", UCameraModifier_Data),
        ("UGearboxCameraModifier", UGearboxCameraModifier_Data),
        ("UCameraModifierLookAt", UCameraModifierLookAt_Data),
    ]

    UDefinitionUITestCaseDefinition_Data._fields_ = [
        ("ConstantFloat", c_float),
        ("ConstantFloatArray", TArray_float),
        ("Float", c_float),
        ("FloatArray", TArray_float),
        ("EditConstReferencedDefinition", POINTER(UGBXDefinition)),
        ("EditConstArrayOfReferences", TArray_UGBXDefinitionPtr),
        ("ReferencedDefinition", POINTER(UGBXDefinition)),
        ("ArrayOfReferences", TArray_UGBXDefinitionPtr),
    ]

    UDefinitionUITestCaseDefinition._fields_ = [
        ("UObject", UObject_Data),
        ("UGBXDefinition", UGBXDefinition_Data),
        ("UDefinitionUITestCaseDefinition", UDefinitionUITestCaseDefinition_Data),
    ]

    USparkNews_Data._fields_ = [
        ("Articles", TArray_FNewsArticle),
        ("__OnNewsRetrieved__Delegate", FScriptDelegate),
    ]

    USparkNews._fields_ = [("UObject", UObject_Data), ("USparkNews", USparkNews_Data)]

    UGearboxAccountEntitlement_Data._fields_ = [
        ("Identifier", FName),
        ("Id", c_int),
        ("Consumable", c_bool, 1),
        ("ConsumableAmount", c_int),
        ("Consumed", c_int),
        ("Payload", FString),
        ("LocallyConsumed", c_int),
    ]

    UGearboxAccountEntitlement._fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxAccountEntitlement", UGearboxAccountEntitlement_Data),
    ]

    UGearboxAccountOffer_Data._fields_ = [
        ("TitleEfigs", FString),
        ("DescriptionEfigs", FString),
        ("Id", c_int),
        ("Notified", c_bool, 1),
        ("DateUnlocked", FString),
    ]

    UGearboxAccountOffer._fields_ = [
        ("UObject", UObject_Data),
        ("UGearboxAccountOffer", UGearboxAccountOffer_Data),
    ]

    APatrolDestination_Data._fields_ = [
        ("NextPatrolPoints", TArray_APatrolDestinationPtr)
    ]

    APatrolDestination._fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("APatrolDestination", APatrolDestination_Data),
    ]

    UGearboxSeqAct_TargetPriority_Data._fields_ = [
        ("AITargets", TArray_AActorPtr),
        ("PriorityModifier", c_float),
    ]

    UGearboxSeqAct_TargetPriority._fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        ("UGearboxSeqAct_TargetPriority", UGearboxSeqAct_TargetPriority_Data),
    ]

    UGearboxSeqAct_CameraShake_Data._fields_ = [("CameraShake", FGearboxViewShakeInfo)]

    UGearboxSeqAct_CameraShake._fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        ("UGearboxSeqAct_CameraShake", UGearboxSeqAct_CameraShake_Data),
    ]

    UGearboxSeqAct_PawnClonerLink_Data._fields_ = [
        ("bEnabled", c_bool, 1),
        ("bIsSpawning", c_bool, 1),
        ("ClonePoints", TArray_AActorPtr),
        ("SpawnedCount", c_int),
        ("RemainingDelay", c_float),
    ]

    UGearboxSeqAct_PawnClonerLink._fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        ("USeqAct_Latent", USeqAct_Latent_Data),
        ("UGearboxSeqAct_PawnClonerLink", UGearboxSeqAct_PawnClonerLink_Data),
    ]

    UGFxMovieDrawStyleInstanceData_Data._fields_ = [
        ("ComponentIDName", FName),
        ("MatIndexName", FName),
        ("bAlwaysInstance", c_bool, 1),
        ("MatiSource", POINTER(UMaterial)),
        ("TextureParameterName", FName),
        ("Component", POINTER(UMeshComponent)),
        ("MaterialIndex", c_int),
        ("Mati", POINTER(UMaterialInstanceConstant)),
    ]

    UGFxMovieDrawStyleInstanceData._fields_ = [
        ("UObject", UObject_Data),
        ("UGFxMovieDrawStyle", UGFxMovieDrawStyle_Data),
        ("UGFxMovieDrawStyleRTT", UGFxMovieDrawStyleRTT_Data),
        ("UGFxMovieDrawStyleInstanceData", UGFxMovieDrawStyleInstanceData_Data),
    ]

    USeqEvent_AllSpawned_Data._fields_ = []

    USeqEvent_AllSpawned._fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceEvent", USequenceEvent_Data),
        ("USeqEvent_AllSpawned", USeqEvent_AllSpawned_Data),
    ]

    UPopulationMasterAttributeContextResolver_Data._fields_ = []

    UPopulationMasterAttributeContextResolver._fields_ = [
        ("UObject", UObject_Data),
        ("UAttributeContextResolver", UAttributeContextResolver_Data),
        (
            "UPopulationMasterAttributeContextResolver",
            UPopulationMasterAttributeContextResolver_Data,
        ),
    ]

    USeqEvent_SinglePopulationDeath_Data._fields_ = []

    USeqEvent_SinglePopulationDeath._fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceEvent", USequenceEvent_Data),
        ("USeqEvent_SinglePopulationDeath", USeqEvent_SinglePopulationDeath_Data),
    ]

    URES_Rotation_Data._fields_ = []

    URES_Rotation._fields_ = [
        ("UObject", UObject_Data),
        ("UActionResource", UActionResource_Data),
        ("URES_Rotation", URES_Rotation_Data),
    ]

    URES_SpecialMove_Data._fields_ = []

    URES_SpecialMove._fields_ = [
        ("UObject", UObject_Data),
        ("UActionResource", UActionResource_Data),
        ("URES_SpecialMove", URES_SpecialMove_Data),
    ]

    USeqEvent_ArrivedAtMoveNode_Data._fields_ = []

    USeqEvent_ArrivedAtMoveNode._fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceEvent", USequenceEvent_Data),
        ("USeqEvent_ArrivedAtMoveNode", USeqEvent_ArrivedAtMoveNode_Data),
    ]

    USeqEvent_LeavingMoveNode_Data._fields_ = []

    USeqEvent_LeavingMoveNode._fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceEvent", USequenceEvent_Data),
        ("USeqEvent_LeavingMoveNode", USeqEvent_LeavingMoveNode_Data),
    ]

    UShowDebugHelpers_Data._fields_ = []

    UShowDebugHelpers._fields_ = [
        ("UObject", UObject_Data),
        ("UShowDebugHelpers", UShowDebugHelpers_Data),
    ]

    ASkeletalMeshActorGBXMatinee_Data._fields_ = []

    ASkeletalMeshActorGBXMatinee._fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("ASkeletalMeshActor", ASkeletalMeshActor_Data),
        ("ASkeletalMeshActorGBXMatinee", ASkeletalMeshActorGBXMatinee_Data),
    ]

    UGearboxEULAGFxMovie_Data._fields_ = [
        ("GearboxEULAObj", POINTER(UGearboxEULAGFxObject)),
        ("CurrentControllerId", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("EULAs", TArray_FEULAData),
        ("EULAIndexToDisplay", c_int),
        ("__OnEULAInteractionComplete__Delegate", FScriptDelegate),
    ]

    UGearboxEULAGFxMovie._fields_ = [
        ("UObject", UObject_Data),
        ("UGFxMoviePlayer", UGFxMoviePlayer_Data),
        ("UGFxMovie", UGFxMovie_Data),
        ("UGearboxGFxMovie", UGearboxGFxMovie_Data),
        ("UGearboxEULAGFxMovie", UGearboxEULAGFxMovie_Data),
    ]

    UGearboxEULAGFxObject_Data._fields_ = []

    UGearboxEULAGFxObject._fields_ = [
        ("UObject", UObject_Data),
        ("UGFxObject", UGFxObject_Data),
        ("UGearboxEULAGFxObject", UGearboxEULAGFxObject_Data),
    ]

    BL2SDK.g_loadedClasses += [("UActorFactoryClone", 2910, "UActorFactory")]
    BL2SDK.g_loadedClasses += [("UActorFactoryWireTerminal", 2912, "UActorFactory")]
    BL2SDK.g_loadedClasses += [("UAIDebugCamera", 2914, "UObject")]
    BL2SDK.g_loadedClasses += [("UAITracker", 2916, "UObject")]
    BL2SDK.g_loadedClasses += [("UAnimNodeSpecialMoveBlend", 2918, "UAnimNodeSlot")]
    BL2SDK.g_loadedClasses += [
        ("UAttributeExpressionEvaluator", 2920, "UExpressionEvaluator")
    ]
    BL2SDK.g_loadedClasses += [("UBehavior_CallFunction", 2922, "UBehaviorBase")]
    BL2SDK.g_loadedClasses += [
        ("UBehavior_ChangeRemoteBehaviorSequenceState", 2924, "UBehaviorBase")
    ]
    BL2SDK.g_loadedClasses += [("UBehavior_ChangeTimer", 2926, "UBehaviorBase")]
    BL2SDK.g_loadedClasses += [("UBehavior_IsSequenceEnabled", 2928, "UBehaviorBase")]
    BL2SDK.g_loadedClasses += [("UBehavior_PostAkEvent", 2930, "UBehaviorBase")]
    BL2SDK.g_loadedClasses += [("UBehaviorHelpers", 2932, "UObject")]
    BL2SDK.g_loadedClasses += [
        ("UCompoundExpressionEvaluator", 2934, "UExpressionEvaluator")
    ]
    BL2SDK.g_loadedClasses += [
        ("UConditionalAttributeValueResolver", 2936, "UAttributeValueResolver")
    ]
    BL2SDK.g_loadedClasses += [
        ("UConstantAttributeValueResolver", 2938, "UAttributeValueResolver")
    ]
    BL2SDK.g_loadedClasses += [
        ("UConstraintAttributeValueResolver", 2940, "UAttributeValueResolver")
    ]
    BL2SDK.g_loadedClasses += [("UFeatherBoneBlendDefinition", 2942, "UGBXDefinition")]
    BL2SDK.g_loadedClasses += [("UGBXActorList", 2944, "UObject")]
    BL2SDK.g_loadedClasses += [("UGBXObjectList", 2946, "UObject")]
    BL2SDK.g_loadedClasses += [("AGearboxAIController", 2948, "AAIController")]
    BL2SDK.g_loadedClasses += [("AGearboxAIMoveNode", 2950, "AActor")]
    BL2SDK.g_loadedClasses += [("AGearboxCameraBasic", 2952, "ACamera")]
    BL2SDK.g_loadedClasses += [("UGearboxCameraModifier", 2954, "UCameraModifier")]
    BL2SDK.g_loadedClasses += [("UGearboxCheatManager", 2956, "UCheatManager")]
    BL2SDK.g_loadedClasses += [("UGearboxDialogInterface", 2958, "UInterface")]
    BL2SDK.g_loadedClasses += [("UGearboxEditorNode", 2960, "UObject")]
    BL2SDK.g_loadedClasses += [("UGearboxEngine", 2962, "UGameEngine")]
    BL2SDK.g_loadedClasses += [("AGearboxGameInfo", 2964, "AGameInfo")]
    BL2SDK.g_loadedClasses += [("UGearboxGFxMovie", 2966, "UGFxMovie")]
    BL2SDK.g_loadedClasses += [("UGFxMovie_StateParent", 2968, "UGearboxGFxMovie")]
    BL2SDK.g_loadedClasses += [("UGearboxGlobals", 2970, "UGearboxEngineGlobals")]
    BL2SDK.g_loadedClasses += [("UGearboxGlobalsDefinition", 2972, "UGBXDefinition")]
    BL2SDK.g_loadedClasses += [("UGearboxLocationRequest", 2974, "UObject")]
    BL2SDK.g_loadedClasses += [
        ("UPawnMoveLocationRequest", 2976, "UGearboxLocationRequest")
    ]
    BL2SDK.g_loadedClasses += [("AGearboxPawn", 2978, "AGamePawn")]
    BL2SDK.g_loadedClasses += [
        ("AGearboxPlayerController", 2980, "AGamePlayerController")
    ]
    BL2SDK.g_loadedClasses += [("UGearboxPlayerInput", 2982, "UPlayerInput")]
    BL2SDK.g_loadedClasses += [
        ("AGearboxPlayerReplicationInfo", 2984, "APlayerReplicationInfo")
    ]
    BL2SDK.g_loadedClasses += [
        ("UGearboxProfileSettings", 2986, "UOnlineProfileSettings")
    ]
    BL2SDK.g_loadedClasses += [("UGearboxRenderTextureManager", 2988, "UObject")]
    BL2SDK.g_loadedClasses += [
        ("UGearboxSeqAct_DestroyPopulationActors", 2990, "USeqAct_Latent")
    ]
    BL2SDK.g_loadedClasses += [
        ("UGearboxSeqAct_ResetPopulationCount", 2992, "USequenceAction")
    ]
    BL2SDK.g_loadedClasses += [
        ("UGearboxSkeletalMeshComponent", 2994, "USkeletalMeshComponent")
    ]
    BL2SDK.g_loadedClasses += [
        ("UGearboxStaticMeshComponent", 2996, "UStaticMeshComponent")
    ]
    BL2SDK.g_loadedClasses += [
        ("UGestaltSkeletalMeshDefinition", 2998, "UGBXDefinition")
    ]
    BL2SDK.g_loadedClasses += [("UGFxActorMoviePool", 3000, "UObject")]
    BL2SDK.g_loadedClasses += [("UGFxMovieDefinition", 3002, "UGBXDefinition")]
    BL2SDK.g_loadedClasses += [
        ("UGearboxEULAGFxMovieDefinition", 3004, "UGFxMovieDefinition")
    ]
    BL2SDK.g_loadedClasses += [("UGFxMovieDrawStyle", 3006, "UObject")]
    BL2SDK.g_loadedClasses += [("UGFxMovieDrawStyleHUD", 3008, "UGFxMovieDrawStyle")]
    BL2SDK.g_loadedClasses += [("UGFxMovieDrawStyleRTT", 3010, "UGFxMovieDrawStyle")]
    BL2SDK.g_loadedClasses += [
        ("UGFxMovieDrawStyleComponent", 3012, "UGFxMovieDrawStyleRTT")
    ]
    BL2SDK.g_loadedClasses += [
        ("UGFxMovieDrawStyleMesh", 3014, "UGFxMovieDrawStyleComponent")
    ]
    BL2SDK.g_loadedClasses += [
        ("UGFxMovieDrawStyleSprite", 3016, "UGFxMovieDrawStyleComponent")
    ]
    BL2SDK.g_loadedClasses += [
        ("UGFxMovieDrawStyleSplitscreen", 3018, "UGFxMovieDrawStyle")
    ]
    BL2SDK.g_loadedClasses += [("UGFxMovieManager", 3020, "UObject")]
    BL2SDK.g_loadedClasses += [("UGFxMovieState", 3022, "UObject")]
    BL2SDK.g_loadedClasses += [("UGFxMovieStateCustom", 3024, "UGFxMovieState")]
    BL2SDK.g_loadedClasses += [("UGFxMovieStateFlags", 3026, "UGFxMovieState")]
    BL2SDK.g_loadedClasses += [("UGFxMovieStatePlayerAware", 3028, "UGFxMovieState")]
    BL2SDK.g_loadedClasses += [("UIAIInterface", 3030, "UInterface")]
    BL2SDK.g_loadedClasses += [("UIConstructObject", 3032, "UInterface")]
    BL2SDK.g_loadedClasses += [("UIGFxActorMovie", 3034, "UInterface")]
    BL2SDK.g_loadedClasses += [("UINounAttributeProvider", 3036, "UInterface")]
    BL2SDK.g_loadedClasses += [("UInterfaceGearboxCamera", 3038, "UInterface")]
    BL2SDK.g_loadedClasses += [("UIStreamingDataEvent", 3040, "UInterface")]
    BL2SDK.g_loadedClasses += [("ULeviathanChannel", 3042, "UChannel")]
    BL2SDK.g_loadedClasses += [
        ("UNoContextNeededAttributeContextResolver", 3044, "UAttributeContextResolver")
    ]
    BL2SDK.g_loadedClasses += [
        ("UNounAttributeValueResolver", 3046, "UAttributeValueResolver")
    ]
    BL2SDK.g_loadedClasses += [
        ("UObjectFunctionAttributeValueResolver", 3048, "UAttributeValueResolver")
    ]
    BL2SDK.g_loadedClasses += [
        ("UObjectPropertyContextResolver", 3050, "UAttributeContextResolver")
    ]
    BL2SDK.g_loadedClasses += [
        ("UPhysicsStateExpressionEvaluator", 3052, "UExpressionEvaluator")
    ]
    BL2SDK.g_loadedClasses += [("UPopulationAspect", 3054, "UObject")]
    BL2SDK.g_loadedClasses += [("UPopulationBodyTag", 3056, "UGBXDefinition")]
    BL2SDK.g_loadedClasses += [("APopulationEncounter", 3058, "AInfo")]
    BL2SDK.g_loadedClasses += [
        ("UPopulationEncounterRenderingComponent", 3060, "UPrimitiveComponent")
    ]
    BL2SDK.g_loadedClasses += [
        ("UPopulationOpportunityCombatRenderingComponent", 3062, "UPrimitiveComponent")
    ]
    BL2SDK.g_loadedClasses += [
        ("UPopulationSpawnedActorTagDefinition", 3064, "UGBXDefinition")
    ]
    BL2SDK.g_loadedClasses += [("UPopUpDebugBarGraph", 3066, "UObject")]
    BL2SDK.g_loadedClasses += [
        ("URandomAttributeValueResolver", 3068, "UAttributeValueResolver")
    ]
    BL2SDK.g_loadedClasses += [("URegionDefinition", 3070, "UGBXDefinition")]
    BL2SDK.g_loadedClasses += [("URootMotionDefinition", 3072, "UGBXDefinition")]
    BL2SDK.g_loadedClasses += [("URuleEngineLoadBalanceManager", 3074, "UObject")]
    BL2SDK.g_loadedClasses += [("UScreenSpaceManager", 3076, "UObject")]
    BL2SDK.g_loadedClasses += [("USeqAct_AllPlayersInVolume", 3078, "USequenceAction")]
    BL2SDK.g_loadedClasses += [("USeqCond_CompareLocation", 3080, "USequenceCondition")]
    BL2SDK.g_loadedClasses += [("USeqCond_CompareString", 3082, "USequenceCondition")]
    BL2SDK.g_loadedClasses += [("USeqCond_GetLanguage", 3084, "USequenceCondition")]
    BL2SDK.g_loadedClasses += [
        ("USimpleMathValueResolver", 3086, "UAttributeValueResolver")
    ]
    BL2SDK.g_loadedClasses += [("USpecialMoveComponent", 3088, "UActorComponent")]
    BL2SDK.g_loadedClasses += [("USpecialMoveDefinition", 3090, "UGBXDefinition")]
    BL2SDK.g_loadedClasses += [
        ("USpecialMoveExpressionList", 3092, "USpecialMoveDefinition")
    ]
    BL2SDK.g_loadedClasses += [("USpecialMoveRandom", 3094, "USpecialMoveDefinition")]
    BL2SDK.g_loadedClasses += [("USpecialMoveInterface", 3096, "UInterface")]
    BL2SDK.g_loadedClasses += [
        ("UStateAttributeResolver", 3098, "UAttributeValueResolver")
    ]
    BL2SDK.g_loadedClasses += [("UTimeValueResolver", 3100, "UAttributeValueResolver")]
    BL2SDK.g_loadedClasses += [("AWireManager", 3102, "AActor")]
    BL2SDK.g_loadedClasses += [("AWireTerminal", 3104, "AStaticMeshActor")]
    BL2SDK.g_loadedClasses += [("AWiringActor", 3106, "AStaticMeshActor")]
    BL2SDK.g_loadedClasses += [("UWiringMesh", 3108, "UStaticMesh")]
    BL2SDK.g_loadedClasses += [("UActionResource", 3110, "UObject")]
    BL2SDK.g_loadedClasses += [("UActionSequence", 3112, "UObject")]
    BL2SDK.g_loadedClasses += [("UActionSequenceList", 3114, "UActionSequence")]
    BL2SDK.g_loadedClasses += [("UActionSequencePawn", 3116, "UActionSequence")]
    BL2SDK.g_loadedClasses += [
        ("UAction_PawnMovementBase", 3118, "UActionSequencePawn")
    ]
    BL2SDK.g_loadedClasses += [("UActionSequenceRandom", 3120, "UActionSequence")]
    BL2SDK.g_loadedClasses += [("UAIComponent", 3122, "UActorComponent")]
    BL2SDK.g_loadedClasses += [
        ("UAICostExpressionEvaluator", 3124, "UExpressionEvaluator")
    ]
    BL2SDK.g_loadedClasses += [("UAIFactoryBase", 3126, "UObject")]
    BL2SDK.g_loadedClasses += [("UGearboxAIFactory", 3128, "UAIFactoryBase")]
    BL2SDK.g_loadedClasses += [("UAIResource", 3130, "UGBXDefinition")]
    BL2SDK.g_loadedClasses += [
        ("UAIResourceExpressionEvaluator", 3132, "UExpressionEvaluator")
    ]
    BL2SDK.g_loadedClasses += [
        ("UAllegianceExpressionEvaluator", 3134, "UExpressionEvaluator")
    ]
    BL2SDK.g_loadedClasses += [
        ("UAwarenessZoneCollectionDefinition", 3136, "UGBXDefinition")
    ]
    BL2SDK.g_loadedClasses += [("UAwarenessZoneDefinition", 3138, "UGBXDefinition")]
    BL2SDK.g_loadedClasses += [("UBehavior_SendGbxMessage", 3140, "UBehaviorBase")]
    BL2SDK.g_loadedClasses += [("UBehavior_SetFlag", 3142, "UBehaviorBase")]
    BL2SDK.g_loadedClasses += [
        ("UBestTargetAttributeContextResolver", 3144, "UAttributeContextResolver")
    ]
    BL2SDK.g_loadedClasses += [
        ("UCharacterClassMessageDefinition", 3146, "UGBXDefinition")
    ]
    BL2SDK.g_loadedClasses += [("UCoverSearchCriteria", 3148, "UGBXDefinition")]
    BL2SDK.g_loadedClasses += [("UExposureUtilityBase", 3150, "UObject")]
    BL2SDK.g_loadedClasses += [
        ("UExposureUtilityBasicCaching", 3152, "UExposureUtilityBase")
    ]
    BL2SDK.g_loadedClasses += [
        ("UExposureUtilityFixedCost", 3154, "UExposureUtilityBasicCaching")
    ]
    BL2SDK.g_loadedClasses += [("UExposureUtilityStrategy", 3156, "UObject")]
    BL2SDK.g_loadedClasses += [("UFiringBehaviorDefinition", 3158, "UGBXDefinition")]
    BL2SDK.g_loadedClasses += [("UFiringBehaviorManager", 3160, "UObject")]
    BL2SDK.g_loadedClasses += [("UFiringCondition", 3162, "UObject")]
    BL2SDK.g_loadedClasses += [("UFireCond_IsPlayerTarget", 3164, "UFiringCondition")]
    BL2SDK.g_loadedClasses += [("UFiringPattern", 3166, "UObject")]
    BL2SDK.g_loadedClasses += [("UFirePatt_Cone", 3168, "UFiringPattern")]
    BL2SDK.g_loadedClasses += [("UFirePatt_ShrinkingCone", 3170, "UFiringPattern")]
    BL2SDK.g_loadedClasses += [("UFirePatt_StrafeOver", 3172, "UFiringPattern")]
    BL2SDK.g_loadedClasses += [
        ("UFiringZoneCollectionDefinition", 3174, "UGBXDefinition")
    ]
    BL2SDK.g_loadedClasses += [("UFiringZoneDefinition", 3176, "UGBXDefinition")]
    BL2SDK.g_loadedClasses += [("UFlagDefinition", 3178, "UGBXDefinition")]
    BL2SDK.g_loadedClasses += [
        ("UFlagExpressionEvaluator", 3180, "UExpressionEvaluator")
    ]
    BL2SDK.g_loadedClasses += [("UFlagValueResolver", 3182, "UObject")]
    BL2SDK.g_loadedClasses += [
        ("UMultipleFlagValueResolver", 3184, "UFlagValueResolver")
    ]
    BL2SDK.g_loadedClasses += [
        ("UObjectFunctionFlagValueResolver", 3186, "UFlagValueResolver")
    ]
    BL2SDK.g_loadedClasses += [
        ("UObjectPropertyFlagValueResolver", 3188, "UFlagValueResolver")
    ]
    BL2SDK.g_loadedClasses += [
        ("URuleEngineFlagValueResolver", 3190, "UFlagValueResolver")
    ]
    BL2SDK.g_loadedClasses += [("UGbxMessage", 3192, "UObject")]
    BL2SDK.g_loadedClasses += [("UGbxMessageDefinition", 3194, "UGBXDefinition")]
    BL2SDK.g_loadedClasses += [("UGbxMessageManager", 3196, "UObject")]
    BL2SDK.g_loadedClasses += [("AGearboxMind", 3198, "AGearboxAIController")]
    BL2SDK.g_loadedClasses += [
        ("UGearboxAIMoveNodeRenderComponent", 3200, "UPrimitiveComponent")
    ]
    BL2SDK.g_loadedClasses += [("UGearboxCoverStateManager", 3202, "UObject")]
    BL2SDK.g_loadedClasses += [
        ("UGearboxMindAttributeContextResolver", 3204, "UAttributeContextResolver")
    ]
    BL2SDK.g_loadedClasses += [("UGearboxNavigationHandle", 3206, "UNavigationHandle")]
    BL2SDK.g_loadedClasses += [("UIFlagProvider", 3208, "UInterface")]
    BL2SDK.g_loadedClasses += [("UIFlagProviderGroup", 3210, "UInterface")]
    BL2SDK.g_loadedClasses += [("UIGbxMessageListener", 3212, "UInterface")]
    BL2SDK.g_loadedClasses += [("UIRuleEngineOwner", 3214, "UInterface")]
    BL2SDK.g_loadedClasses += [("UKnowledgeRecord", 3216, "UObject")]
    BL2SDK.g_loadedClasses += [("ULocationFilter", 3218, "UObject")]
    BL2SDK.g_loadedClasses += [("ULocationFilter_MustHaveLOS", 3220, "ULocationFilter")]
    BL2SDK.g_loadedClasses += [
        ("ULocationFilter_MustNotHaveLOS", 3222, "ULocationFilter")
    ]
    BL2SDK.g_loadedClasses += [("UMindTargetInfo", 3224, "UObject")]
    BL2SDK.g_loadedClasses += [("URule", 3226, "UObject")]
    BL2SDK.g_loadedClasses += [("URuleContainer", 3228, "URule")]
    BL2SDK.g_loadedClasses += [("URulePlaceholder", 3230, "URule")]
    BL2SDK.g_loadedClasses += [("URuleEngine", 3232, "UObject")]
    BL2SDK.g_loadedClasses += [("UGearboxRuleEngine", 3234, "URuleEngine")]
    BL2SDK.g_loadedClasses += [("URuleEventDef", 3236, "UGBXDefinition")]
    BL2SDK.g_loadedClasses += [("URuleSet", 3238, "UObject")]
    BL2SDK.g_loadedClasses += [("UStateRuleSet", 3240, "URuleSet")]
    BL2SDK.g_loadedClasses += [("USearchDirection", 3242, "UObject")]
    BL2SDK.g_loadedClasses += [("USearchDirection_Any", 3244, "USearchDirection")]
    BL2SDK.g_loadedClasses += [
        ("USearchDirection_AwayFromMe", 3246, "USearchDirection")
    ]
    BL2SDK.g_loadedClasses += [
        ("USearchDirection_AwayFromTarget", 3248, "USearchDirection")
    ]
    BL2SDK.g_loadedClasses += [
        ("USearchDirection_MyFacingDirection", 3250, "USearchDirection")
    ]
    BL2SDK.g_loadedClasses += [
        ("USearchDirection_OppositeMyFacingDirection", 3252, "USearchDirection")
    ]
    BL2SDK.g_loadedClasses += [
        ("USearchDirection_OppositeTargetsFacingDirection", 3254, "USearchDirection")
    ]
    BL2SDK.g_loadedClasses += [
        ("USearchDirection_RandomLeftOrRight", 3256, "USearchDirection")
    ]
    BL2SDK.g_loadedClasses += [
        ("USearchDirection_TargetsFacingDirection", 3258, "USearchDirection")
    ]
    BL2SDK.g_loadedClasses += [("USearchDirection_ToMyLeft", 3260, "USearchDirection")]
    BL2SDK.g_loadedClasses += [("USearchDirection_ToMyRight", 3262, "USearchDirection")]
    BL2SDK.g_loadedClasses += [("USearchDirection_TowardMe", 3264, "USearchDirection")]
    BL2SDK.g_loadedClasses += [
        ("USearchDirection_TowardTarget", 3266, "USearchDirection")
    ]
    BL2SDK.g_loadedClasses += [("USearchOrigin", 3268, "UObject")]
    BL2SDK.g_loadedClasses += [("USearchOrigin_CurrentLocation", 3270, "USearchOrigin")]
    BL2SDK.g_loadedClasses += [
        ("USearchOrigin_ScriptedMoveTarget", 3272, "USearchOrigin")
    ]
    BL2SDK.g_loadedClasses += [("USearchOrigin_TargetLocation", 3274, "USearchOrigin")]
    BL2SDK.g_loadedClasses += [("USnapshotRecord", 3276, "USnapshotInterface")]
    BL2SDK.g_loadedClasses += [("UGearboxPawnSnapshotRecord", 3278, "USnapshotRecord")]
    BL2SDK.g_loadedClasses += [("UTargetingDefinition", 3280, "UGBXDefinition")]
    BL2SDK.g_loadedClasses += [("UTargetIterator", 3282, "UObject")]
    BL2SDK.g_loadedClasses += [
        ("UTargetIteratorCalculateDistance", 3284, "UTargetIterator")
    ]
    BL2SDK.g_loadedClasses += [
        ("UTargetIteratorCalculateExposure", 3286, "UTargetIterator")
    ]
    BL2SDK.g_loadedClasses += [
        ("UTargetIteratorCheckAwareness", 3288, "UTargetIterator")
    ]
    BL2SDK.g_loadedClasses += [
        ("UTargetIteratorCheckRemoveTarget", 3290, "UTargetIterator")
    ]
    BL2SDK.g_loadedClasses += [
        ("UTargetIteratorForgetAboutTarget", 3292, "UTargetIterator")
    ]
    BL2SDK.g_loadedClasses += [
        ("UTargetIteratorPrioritizeTargetsIAmExposedTo", 3294, "UTargetIterator")
    ]
    BL2SDK.g_loadedClasses += [("UTI_Calc", 3296, "UTargetIterator")]
    BL2SDK.g_loadedClasses += [("UTI_Prioritize", 3298, "UTargetIterator")]
    BL2SDK.g_loadedClasses += [
        ("UTargetIteratorPrioritizeExposedTargets", 3300, "UTI_Prioritize")
    ]
    BL2SDK.g_loadedClasses += [
        ("UTargetIteratorPrioritizeHumanTargets", 3302, "UTI_Prioritize")
    ]
    BL2SDK.g_loadedClasses += [
        ("UTargetIteratorPrioritizeNearbyTarget", 3304, "UTI_Prioritize")
    ]
    BL2SDK.g_loadedClasses += [
        ("UTargetIteratorPrioritizePreviousTarget", 3306, "UTI_Prioritize")
    ]
    BL2SDK.g_loadedClasses += [
        ("UTargetIteratorPrioritizeTargetNotBeingShotAt", 3308, "UTI_Prioritize")
    ]
    BL2SDK.g_loadedClasses += [
        ("UTargetIteratorPrioritizeTargetWhoShootsAtMe", 3310, "UTI_Prioritize")
    ]
    BL2SDK.g_loadedClasses += [("UTI_PrioritizeBonus", 3312, "UTI_Prioritize")]
    BL2SDK.g_loadedClasses += [("UTI_PrioritizeConditional", 3314, "UTI_Prioritize")]
    BL2SDK.g_loadedClasses += [
        ("UGearboxSeqAct_PopulationOpportunityLink", 3316, "USeqAct_Latent")
    ]
    BL2SDK.g_loadedClasses += [("UIPopulationSpawnPoint", 3318, "UInterface")]
    BL2SDK.g_loadedClasses += [("UPopulationDefinition", 3320, "UGBXDefinition")]
    BL2SDK.g_loadedClasses += [("UPopulationFactory", 3322, "UObject")]
    BL2SDK.g_loadedClasses += [
        ("UPopulationFactoryGeneric", 3324, "UPopulationFactory")
    ]
    BL2SDK.g_loadedClasses += [
        ("UPopulationFactoryPopulationDefinition", 3326, "UPopulationFactory")
    ]
    BL2SDK.g_loadedClasses += [("UPopulationMaster", 3328, "UObject")]
    BL2SDK.g_loadedClasses += [("APopulationOpportunity", 3330, "AInfo")]
    BL2SDK.g_loadedClasses += [
        ("APopulationOpportunityArea", 3332, "APopulationOpportunity")
    ]
    BL2SDK.g_loadedClasses += [
        ("APopulationOpportunityCloner", 3334, "APopulationOpportunity")
    ]
    BL2SDK.g_loadedClasses += [
        ("APopulationOpportunityCombat", 3336, "APopulationOpportunity")
    ]
    BL2SDK.g_loadedClasses += [
        ("APopulationOpportunityPoint", 3338, "APopulationOpportunity")
    ]
    BL2SDK.g_loadedClasses += [
        ("UPopulationOpportunityAreaRenderingComponent", 3340, "UPrimitiveComponent")
    ]
    BL2SDK.g_loadedClasses += [
        (
            "UPopulationOpportunityAttributeContextResolver",
            3342,
            "UAttributeContextResolver",
        )
    ]
    BL2SDK.g_loadedClasses += [
        ("UPopulationOpportunityPointRenderingComponent", 3344, "UPrimitiveComponent")
    ]
    BL2SDK.g_loadedClasses += [("APopulationPoint", 3346, "AActor")]
    BL2SDK.g_loadedClasses += [("APopulationPoint_Dynamic", 3348, "APopulationPoint")]
    BL2SDK.g_loadedClasses += [
        ("UPopulationPointRenderingComponent", 3350, "UPrimitiveComponent")
    ]
    BL2SDK.g_loadedClasses += [
        ("USeqEvent_EncounterWaveComplete", 3352, "USequenceEvent")
    ]
    BL2SDK.g_loadedClasses += [("USeqEvent_PopulatedActor", 3354, "USequenceEvent")]
    BL2SDK.g_loadedClasses += [("USeqEvent_PopulatedPoint", 3356, "USequenceEvent")]
    BL2SDK.g_loadedClasses += [("AGearboxHUD", 3358, "AHUD")]
    BL2SDK.g_loadedClasses += [("UAIDefinition", 3360, "UObject")]
    BL2SDK.g_loadedClasses += [("UBehaviorEventFilterBase", 3362, "UObject")]
    BL2SDK.g_loadedClasses += [("UBehaviorKernel", 3364, "UObject")]
    BL2SDK.g_loadedClasses += [("UBehaviorProviderDefinition", 3366, "UGBXDefinition")]
    BL2SDK.g_loadedClasses += [
        ("UAIBehaviorProviderDefinition", 3368, "UBehaviorProviderDefinition")
    ]
    BL2SDK.g_loadedClasses += [
        ("UBehaviorSequenceCustomEnableCondition", 3370, "UObject")
    ]
    BL2SDK.g_loadedClasses += [
        (
            "UBehaviorSequenceEnableByMultipleConditions",
            3372,
            "UBehaviorSequenceCustomEnableCondition",
        )
    ]
    BL2SDK.g_loadedClasses += [("UIBehaviorConsumer", 3374, "UInterface")]
    BL2SDK.g_loadedClasses += [("UIBehaviorProvider", 3376, "UInterface")]
    BL2SDK.g_loadedClasses += [("UICustomEvent", 3378, "UInterface")]
    BL2SDK.g_loadedClasses += [("UITimerBehavior", 3380, "UInterface")]
    BL2SDK.g_loadedClasses += [
        ("UGearboxAnimDefinition", 3382, "USpecialMoveDefinition")
    ]
    BL2SDK.g_loadedClasses += [("UBehavior_TriggerDialogEvent", 3384, "UBehaviorBase")]
    BL2SDK.g_loadedClasses += [("AGearboxDialogActor", 3386, "AActor")]
    BL2SDK.g_loadedClasses += [("UGearboxDialogComponent", 3388, "UActorComponent")]
    BL2SDK.g_loadedClasses += [("UGearboxDialogEventData", 3390, "UObject")]
    BL2SDK.g_loadedClasses += [("UGearboxDialogEventTag", 3392, "UGBXDefinition")]
    BL2SDK.g_loadedClasses += [
        ("UGearboxDialogGlobalsDefinition", 3394, "UGBXDefinition")
    ]
    BL2SDK.g_loadedClasses += [("UGearboxDialogGroup", 3396, "UObject")]
    BL2SDK.g_loadedClasses += [
        ("UGearboxDialogTemplateGroup", 3398, "UGearboxDialogGroup")
    ]
    BL2SDK.g_loadedClasses += [("UGearboxDialogManager", 3400, "UObject")]
    BL2SDK.g_loadedClasses += [("UGearboxDialogNameTag", 3402, "UGBXDefinition")]
    BL2SDK.g_loadedClasses += [("UGearboxDialogPriority", 3404, "UGBXDefinition")]
    BL2SDK.g_loadedClasses += [("UGearboxDialogNode", 3406, "UGearboxEditorNode")]
    BL2SDK.g_loadedClasses += [("UGearboxDialogAction", 3408, "UGearboxDialogNode")]
    BL2SDK.g_loadedClasses += [
        ("UGearboxDialogAct_Chance", 3410, "UGearboxDialogAction")
    ]
    BL2SDK.g_loadedClasses += [
        ("UGearboxDialogAct_Compare", 3412, "UGearboxDialogAction")
    ]
    BL2SDK.g_loadedClasses += [
        ("UGearboxDialogAct_ObjectParameterSwitch", 3414, "UGearboxDialogAction")
    ]
    BL2SDK.g_loadedClasses += [
        ("UGearboxDialogNonTemplateAction", 3416, "UGearboxDialogAction")
    ]
    BL2SDK.g_loadedClasses += [
        ("UGearboxDialogAct_Talk", 3418, "UGearboxDialogNonTemplateAction")
    ]
    BL2SDK.g_loadedClasses += [
        ("UGearboxDialogTemplateAction", 3420, "UGearboxDialogAction")
    ]
    BL2SDK.g_loadedClasses += [
        ("UGearboxDialogAct_Trigger", 3422, "UGearboxDialogTemplateAction")
    ]
    BL2SDK.g_loadedClasses += [("UGearboxDialogEvent", 3424, "UGearboxDialogNode")]
    BL2SDK.g_loadedClasses += [
        ("UGearboxDialogTemplateEvent", 3426, "UGearboxDialogEvent")
    ]
    BL2SDK.g_loadedClasses += [("UGearboxDialogVariable", 3428, "UGearboxDialogNode")]
    BL2SDK.g_loadedClasses += [
        ("UGearboxDialogVar_Instigator", 3430, "UGearboxDialogVariable")
    ]
    BL2SDK.g_loadedClasses += [
        ("UGearboxDialogVar_LastTalker", 3432, "UGearboxDialogVariable")
    ]
    BL2SDK.g_loadedClasses += [
        ("UGearboxDialogVar_NameTag", 3434, "UGearboxDialogVariable")
    ]
    BL2SDK.g_loadedClasses += [
        ("UGearboxDialogVar_Other", 3436, "UGearboxDialogVariable")
    ]
    BL2SDK.g_loadedClasses += [
        ("UGearboxDialogVar_Random", 3438, "UGearboxDialogVariable")
    ]
    BL2SDK.g_loadedClasses += [("UGearboxSeqAct_ToggleDialog", 3440, "USequenceAction")]
    BL2SDK.g_loadedClasses += [("UGearboxSeqAct_TriggerDialog", 3442, "USeqAct_Latent")]
    BL2SDK.g_loadedClasses += [
        ("UGearboxSeqAct_TriggerDialogName", 3444, "UGearboxSeqAct_TriggerDialog")
    ]
    BL2SDK.g_loadedClasses += [("UGearboxAccountActions", 3446, "UObject")]
    BL2SDK.g_loadedClasses += [("UGearboxAccountData", 3448, "UObject")]
    BL2SDK.g_loadedClasses += [("UGearboxProcess", 3450, "UObject")]
    BL2SDK.g_loadedClasses += [("USparkInitializationProcess", 3452, "UGearboxProcess")]
    BL2SDK.g_loadedClasses += [("ULeviathanService", 3454, "UObject")]
    BL2SDK.g_loadedClasses += [("USparkInterface", 3456, "UInterface")]
    BL2SDK.g_loadedClasses += [("USparkInterfaceImpl", 3458, "UObject")]
    BL2SDK.g_loadedClasses += [("USparkServiceConfiguration", 3460, "UObject")]
    BL2SDK.g_loadedClasses += [("USparkTypes", 3462, "UObject")]
    BL2SDK.g_loadedClasses += [("UAction_ChangeRuleSet", 38895, "UActionSequence")]
    BL2SDK.g_loadedClasses += [("URES_RuleSetChange", 38899, "UActionResource")]
    BL2SDK.g_loadedClasses += [("UAction_FaceThreat", 38902, "UActionSequencePawn")]
    BL2SDK.g_loadedClasses += [("URES_FacingPolicy", 38909, "UActionResource")]
    BL2SDK.g_loadedClasses += [("UAction_MoveRandom", 38910, "UActionSequencePawn")]
    BL2SDK.g_loadedClasses += [("UAction_MoveTo", 38912, "UActionSequencePawn")]
    BL2SDK.g_loadedClasses += [("URES_Movement", 39140, "UActionResource")]
    BL2SDK.g_loadedClasses += [("UAction_PopRuleSet", 39141, "UActionSequencePawn")]
    BL2SDK.g_loadedClasses += [("UAction_PushRuleSet", 39144, "UActionSequencePawn")]
    BL2SDK.g_loadedClasses += [
        ("UActorAttributeContextResolver", 39162, "UAttributeContextResolver")
    ]
    BL2SDK.g_loadedClasses += [
        ("UAIComponentAttributeContextResolver", 39278, "UAttributeContextResolver")
    ]
    BL2SDK.g_loadedClasses += [("UAIStateBase", 39597, "UGearboxEditorNode")]
    BL2SDK.g_loadedClasses += [("UAIState", 39599, "UAIStateBase")]
    BL2SDK.g_loadedClasses += [("UAIState_Priority", 39601, "UAIStateBase")]
    BL2SDK.g_loadedClasses += [("UAIState_Random", 39603, "UAIStateBase")]
    BL2SDK.g_loadedClasses += [("UAIState_Sequential", 39605, "UAIStateBase")]
    BL2SDK.g_loadedClasses += [("UBehavior_AIHold", 39694, "UBehaviorBase")]
    BL2SDK.g_loadedClasses += [("UBehavior_AIPriority", 39709, "UBehaviorBase")]
    BL2SDK.g_loadedClasses += [("UBehavior_AITargeting", 39723, "UBehaviorBase")]
    BL2SDK.g_loadedClasses += [
        ("UBehavior_ChangeAnyBehaviorSequenceState", 39746, "UBehaviorBase")
    ]
    BL2SDK.g_loadedClasses += [
        ("UBehavior_ChangeLocalBehaviorSequenceState", 39762, "UBehaviorBase")
    ]
    BL2SDK.g_loadedClasses += [("UBehavior_CompareBool", 39830, "UBehaviorBase")]
    BL2SDK.g_loadedClasses += [("UBehavior_CompareValues", 39842, "UBehaviorBase")]
    BL2SDK.g_loadedClasses += [("UBehavior_CustomEvent", 39855, "UBehaviorBase")]
    BL2SDK.g_loadedClasses += [("UBehavior_Delay", 39869, "UBehaviorBase")]
    BL2SDK.g_loadedClasses += [("UBehavior_Gate", 39879, "UBehaviorBase")]
    BL2SDK.g_loadedClasses += [
        ("UBehavior_GetFloatParam", 39891, "UParameterBehaviorBase")
    ]
    BL2SDK.g_loadedClasses += [
        ("UBehavior_GetObjectParam", 39905, "UParameterBehaviorBase")
    ]
    BL2SDK.g_loadedClasses += [
        ("UBehavior_GetVectorParam", 39919, "UParameterBehaviorBase")
    ]
    BL2SDK.g_loadedClasses += [
        ("UBehavior_InterpolateFloatOverTime", 39938, "UBehaviorBase")
    ]
    BL2SDK.g_loadedClasses += [("UBehavior_Metronome", 39969, "UBehaviorBase")]
    BL2SDK.g_loadedClasses += [("UBehavior_ModifyTimer", 39984, "UBehaviorBase")]
    BL2SDK.g_loadedClasses += [
        ("UBehavior_SetFloatParam", 40110, "UParameterBehaviorBase")
    ]
    BL2SDK.g_loadedClasses += [
        ("UBehavior_SetObjectParam", 40121, "UParameterBehaviorBase")
    ]
    BL2SDK.g_loadedClasses += [
        ("UBehavior_SetVectorParam", 40132, "UParameterBehaviorBase")
    ]
    BL2SDK.g_loadedClasses += [("UBehavior_SpecialMove", 40153, "UBehaviorBase")]
    BL2SDK.g_loadedClasses += [("UBehavior_SpecialMoveStop", 40187, "UBehaviorBase")]
    BL2SDK.g_loadedClasses += [
        ("UBehavior_StartAkAmbientSound", 40201, "UBehaviorBase")
    ]
    BL2SDK.g_loadedClasses += [("UBehavior_StopAkAmbientSound", 40215, "UBehaviorBase")]
    BL2SDK.g_loadedClasses += [("UBehavior_StopDialog", 40229, "UBehaviorBase")]
    BL2SDK.g_loadedClasses += [("UBehavior_ToggleDialog", 40243, "UBehaviorBase")]
    BL2SDK.g_loadedClasses += [
        ("UCameraModifierCrossfade", 40602, "UGearboxCameraModifier")
    ]
    BL2SDK.g_loadedClasses += [
        ("UCameraModifierLookAt", 40644, "UGearboxCameraModifier")
    ]
    BL2SDK.g_loadedClasses += [
        ("UDefinitionUITestCaseDefinition", 40758, "UGBXDefinition")
    ]
    BL2SDK.g_loadedClasses += [("USparkNews", 41097, "UObject")]
    BL2SDK.g_loadedClasses += [("UGearboxAccountEntitlement", 41281, "UObject")]
    BL2SDK.g_loadedClasses += [("UGearboxAccountOffer", 41298, "UObject")]
    BL2SDK.g_loadedClasses += [("APatrolDestination", 41561, "AActor")]
    BL2SDK.g_loadedClasses += [
        ("UGearboxSeqAct_TargetPriority", 42592, "USequenceAction")
    ]
    BL2SDK.g_loadedClasses += [("UGearboxSeqAct_CameraShake", 43108, "USequenceAction")]
    BL2SDK.g_loadedClasses += [
        ("UGearboxSeqAct_PawnClonerLink", 43421, "USeqAct_Latent")
    ]
    BL2SDK.g_loadedClasses += [
        ("UGFxMovieDrawStyleInstanceData", 43594, "UGFxMovieDrawStyleRTT")
    ]
    BL2SDK.g_loadedClasses += [("USeqEvent_AllSpawned", 43898, "USequenceEvent")]
    BL2SDK.g_loadedClasses += [
        (
            "UPopulationMasterAttributeContextResolver",
            44207,
            "UAttributeContextResolver",
        )
    ]
    BL2SDK.g_loadedClasses += [
        ("USeqEvent_SinglePopulationDeath", 44385, "USequenceEvent")
    ]
    BL2SDK.g_loadedClasses += [("URES_Rotation", 44538, "UActionResource")]
    BL2SDK.g_loadedClasses += [("URES_SpecialMove", 44541, "UActionResource")]
    BL2SDK.g_loadedClasses += [("USeqEvent_ArrivedAtMoveNode", 44619, "USequenceEvent")]
    BL2SDK.g_loadedClasses += [("USeqEvent_LeavingMoveNode", 44624, "USequenceEvent")]
    BL2SDK.g_loadedClasses += [("UShowDebugHelpers", 44641, "UObject")]
    BL2SDK.g_loadedClasses += [
        ("ASkeletalMeshActorGBXMatinee", 44655, "ASkeletalMeshActor")
    ]
    BL2SDK.g_loadedClasses += [("UGearboxEULAGFxMovie", 45051, "UGearboxGFxMovie")]
    BL2SDK.g_loadedClasses += [("UGearboxEULAGFxObject", 45059, "UGFxObject")]
