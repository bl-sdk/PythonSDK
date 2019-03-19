from ctypes import *
import BL2SDK


class FStaticMeshLODElement(Structure):
    pass


class FStaticMeshLODInfo(Structure):
    pass


class FAnimSlotDesc(Structure):
    pass


class FRigidBodyState(Structure):
    pass


class FRigidBodyContactInfo(Structure):
    pass


class FCollisionImpactData(Structure):
    pass


class FPhysEffectInfo(Structure):
    pass


class FActorReference(Structure):
    pass


class FNavReference(Structure):
    pass


class FBasedPosition(Structure):
    pass


class FResourcePoolReference(Structure):
    pass


class FTraceHitInfo(Structure):
    pass


class FImpactInfo(Structure):
    pass


class FAkPlayingInfo(Structure):
    pass


class FSeqOpInputLink(Structure):
    pass


class FAnimSlotInfo(Structure):
    pass


class FTraceNotifyInfo(Structure):
    pass


class FTimerData(Structure):
    pass


class FKeyValuePair(Structure):
    pass


class FPlayerResponseLine(Structure):
    pass


class FServerResponseLine(Structure):
    pass


class FLocalizedStringSetting(Structure):
    pass


class FSettingsData(Structure):
    pass


class FSettingsProperty(Structure):
    pass


class FIdToStringMapping(Structure):
    pass


class FStringIdToStringMapping(Structure):
    pass


class FLocalizedStringSettingMetaData(Structure):
    pass


class FSettingsPropertyPropertyMetaData(Structure):
    pass


class FUniqueNetId(Structure):
    pass


class FOnlineRegistrant(Structure):
    pass


class FOnlineArbitrationRegistrant(Structure):
    pass


class FNamedSession(Structure):
    pass


class FNamedInterface(Structure):
    pass


class FOnlinePartyMember(Structure):
    pass


class FAchievementDetails(Structure):
    pass


class FCommunityContentMetadata(Structure):
    pass


class FCommunityContentFile(Structure):
    pass


class FTitleFile(Structure):
    pass


class FNamedInterfaceDef(Structure):
    pass


class FOnlineFriendMessage(Structure):
    pass


class FRemoteTalker(Structure):
    pass


class FLocalTalker(Structure):
    pass


class FOnlinePlayerScore(Structure):
    pass


class FSpeechRecognizedWord(Structure):
    pass


class FMarketplaceContent(Structure):
    pass


class FAppIdLicenseInfo(Structure):
    pass


class FTOCInfo(Structure):
    pass


class FOnlineContent(Structure):
    pass


class FOnlineContentNameInfo(Structure):
    pass


class FNamedOnlineContent(Structure):
    pass


class FCompatibilityOnlineContent(Structure):
    pass


class FOnlineFriend(Structure):
    pass


class FOnlineCrossTitleContent(Structure):
    pass


class FFriendsQuery(Structure):
    pass


class FBaseAuthSession(Structure):
    pass


class FLocalAuthSession(Structure):
    pass


class FAuthSession(Structure):
    pass


class FPendingClientAuth(Structure):
    pass


class FServerAuthRetry(Structure):
    pass


class FRBCollisionChannelContainer(Structure):
    pass


class FLightingChannelContainer(Structure):
    pass


class FMaterialViewRelevance(Structure):
    pass


class FReplicatedInstanceDataState(Structure):
    pass


class FComponentData(Structure):
    pass


class FInstanceDataUnion(Structure):
    pass


class FInstanceDataSet(Structure):
    pass


class FVisiblePortalInfo(Structure):
    pass


class FOnlineGameSearchParameter(Structure):
    pass


class FOnlineGameSearchORClause(Structure):
    pass


class FOnlineGameSearchSortClause(Structure):
    pass


class FOnlineGameSearchQuery(Structure):
    pass


class FOverrideSkill(Structure):
    pass


class FNamedObjectProperty(Structure):
    pass


class FOnlineGameSearchResult(Structure):
    pass


class FTViewTarget(Structure):
    pass


class FTCameraCache(Structure):
    pass


class FViewTargetTransitionParams(Structure):
    pass


class FLUTBlender(Structure):
    pass


class FPostProcessSettings(Structure):
    pass


class FRenderingPerformanceOverrides(Structure):
    pass


class FSeqOpOutputInputLink(Structure):
    pass


class FSeqOpOutputLink(Structure):
    pass


class FSeqVarLink(Structure):
    pass


class FSeqEventLink(Structure):
    pass


class FDebugTextInfo(Structure):
    pass


class FBonePair(Structure):
    pass


class FAnimBlendChild(Structure):
    pass


class FSkelMeshComponentLODInfo(Structure):
    pass


class FAttachment(Structure):
    pass


class FActiveMorph(Structure):
    pass


class FGestaltLODModelFragment(Structure):
    pass


class FGestaltLODModel(Structure):
    pass


class FSocketRemapEntry(Structure):
    pass


class FGestaltAccessoryEntry(Structure):
    pass


class FGestaltDataContainer(Structure):
    pass


class FConnectedPeerInfo(Structure):
    pass


class FClientAdjustment(Structure):
    pass


class FKismetDrawTextInfo(Structure):
    pass


class FConsoleMessage(Structure):
    pass


class FAutomatedTestingDatum(Structure):
    pass


class FInputEntry(Structure):
    pass


class FInputMatchRequest(Structure):
    pass


class FNavigationOctreeObject(Structure):
    pass


class ANavigationPoint_FCheckpointRecord(Structure):
    pass


class FAreaTestSortedPoint(Structure):
    pass


class FNavMeshPathSize(Structure):
    pass


class FPolyReference(Structure):
    pass


class FPendingSubtitleInfo(Structure):
    pass


class FPendingFaceFXInfo(Structure):
    pass


class FDialogueArgument(Structure):
    pass


class FKSphereElem(Structure):
    pass


class FKBoxElem(Structure):
    pass


class FKSphylElem(Structure):
    pass


class FKConvexElem(Structure):
    pass


class FKAggregateGeom(Structure):
    pass


class FKCachedConvexData_Mirror(Structure):
    pass


class FGeomSelection(Structure):
    pass


class FInteriorSettings(Structure):
    pass


class FReverbSettings(Structure):
    pass


class FAudioComponentParam(Structure):
    pass


class FSubtitleCue(Structure):
    pass


class FCompressedTrack(Structure):
    pass


class FDeltaTrackInfo(Structure):
    pass


class FCurveTrack(Structure):
    pass


class FRotationTrack(Structure):
    pass


class FTranslationTrack(Structure):
    pass


class FTimeModifier(Structure):
    pass


class FSkelControlModifier(Structure):
    pass


class FAnimNotifyEvent(Structure):
    pass


class FRawAnimSequenceTrack(Structure):
    pass


class FCurveKey(Structure):
    pass


class FWeightNodeRule(Structure):
    pass


class FWeightRule(Structure):
    pass


class FBranchInfo(Structure):
    pass


class FPerBoneMaskInfo(Structure):
    pass


class FAimTransform(Structure):
    pass


class FAimComponent(Structure):
    pass


class FAimOffsetProfile(Structure):
    pass


class FChildBoneBlendInfo(Structure):
    pass


class FRandomAnimInfo(Structure):
    pass


class FAnimInfo(Structure):
    pass


class FAnimBlendInfo(Structure):
    pass


class FSynchGroup(Structure):
    pass


class FOpinionData(Structure):
    pass


class FInfoBarData(Structure):
    pass


class FLocalizedSubtitle(Structure):
    pass


class FLightMapRef(Structure):
    pass


class FDominantShadowInfo(Structure):
    pass


class FLightmassLightSettings(Structure):
    pass


class FScalarParameterInterpStruct(Structure):
    pass


class FLightmassPointLightSettings(Structure):
    pass


class FLightmassDirectionalLightSettings(Structure):
    pass


class FLightmassPrimitiveSettings(Structure):
    pass


class FLightmassDebugOptions(Structure):
    pass


class FSwarmDebugOptions(Structure):
    pass


class FRootMotionCurve(Structure):
    pass


class FRecentDamageTracker(Structure):
    pass


class FBalanceDefSpawnedActorState(Structure):
    pass


class FTrailSocketSamplePoint(Structure):
    pass


class FTrailSamplePoint(Structure):
    pass


class FTrailSample(Structure):
    pass


class FAnimSetMeshLinkup(Structure):
    pass


class FAnimGroup(Structure):
    pass


class FSkelControlListHead(Structure):
    pass


class FPreviewSkelMeshStruct(Structure):
    pass


class FPreviewSocketStruct(Structure):
    pass


class FPreviewAnimSetsStruct(Structure):
    pass


class F_ModifyHealthParams(Structure):
    pass


class FNxDestructibleParametersFlag(Structure):
    pass


class FNxDestructibleDepthParameters(Structure):
    pass


class FNxDestructibleParameters(Structure):
    pass


class FDamageParameters(Structure):
    pass


class FDamagePair(Structure):
    pass


class FAttributePriorityData(Structure):
    pass


class FAppliedAttributeEffect(Structure):
    pass


class FAttributeInitializationData(Structure):
    pass


class FAttributeEffectData(Structure):
    pass


class FAttributeExpressionData(Structure):
    pass


class FConditionalSoundData(Structure):
    pass


class FBalanceFormula(Structure):
    pass


class FVariance(Structure):
    pass


class FRange(Structure):
    pass


class FConditionalValueExpression(Structure):
    pass


class FConditionalInitializationExpressions(Structure):
    pass


class FAttributeBaseValueData(Structure):
    pass


class FListener(Structure):
    pass


class FAudioClassInfo(Structure):
    pass


class FGameStageRangeData(Structure):
    pass


class FGameStageGradeWeightData(Structure):
    pass


class FBehaviorContextData(Structure):
    pass


class FBehaviorParameterUnion(Structure):
    pass


class FBehaviorParameters(Structure):
    pass


class FBehaviorOutputLinkDescriptionData(Structure):
    pass


class FBehaviorKernelInfo(Structure):
    pass


class FCounterEventReactionData(Structure):
    pass


class FBehaviorCounterState(Structure):
    pass


class FCounterBehaviorUserState(Structure):
    pass


class FIndependentSelectionData(Structure):
    pass


class FScalarMaterialParameter(Structure):
    pass


class FVectorMaterialParameter(Structure):
    pass


class FTextureMaterialParameter(Structure):
    pass


class FScalarParticleSystemParameter(Structure):
    pass


class FVectorParticleSystemParameter(Structure):
    pass


class FColorParticleSystemParameter(Structure):
    pass


class FMaterialParticleSystemParameter(Structure):
    pass


class FActorParticleSystemParameter(Structure):
    pass


class FStaticMeshComponentLODInfo(Structure):
    pass


class FPaintedVertex(Structure):
    pass


class FFOscillator(Structure):
    pass


class FVOscillator(Structure):
    pass


class FROscillator(Structure):
    pass


class FCameraShakeInstance(Structure):
    pass


class FTextureGroupContainer(Structure):
    pass


class FTexture2DMipMap(Structure):
    pass


class FTextureLinkedListMirror(Structure):
    pass


class FCanvasIcon(Structure):
    pass


class FDepthFieldGlowInfo(Structure):
    pass


class FFontRenderInfo(Structure):
    pass


class FCanvasUVTri(Structure):
    pass


class FTextSizingParameters(Structure):
    pass


class FWrappedStringElement(Structure):
    pass


class FDamageTypeResistance(Structure):
    pass


class FUIRangeData(Structure):
    pass


class FTextureCoordinates(Structure):
    pass


class FUIProviderScriptFieldValue(Structure):
    pass


class FUIProviderFieldValue(Structure):
    pass


class FInputKeyAction(Structure):
    pass


class FUIDataStoreBinding(Structure):
    pass


class FInputEventParameters(Structure):
    pass


class FSubscribedInputEventParameters(Structure):
    pass


class FUIAxisEmulationDefinition(Structure):
    pass


class FRawInputKeyEventData(Structure):
    pass


class FAutoCompleteCommand(Structure):
    pass


class FAutoCompleteNode(Structure):
    pass


class FCovPosInfo(Structure):
    pass


class FFireLinkItem(Structure):
    pass


class FFireLink(Structure):
    pass


class FDynamicLinkInfo(Structure):
    pass


class FCoverReference(Structure):
    pass


class FExposedLink(Structure):
    pass


class FSlotMoveRef(Structure):
    pass


class FCoverInfo(Structure):
    pass


class FCoverSlot(Structure):
    pass


class FCoverMeshes(Structure):
    pass


class FManualCoverTypeInfo(Structure):
    pass


class FCoverReplicationInfo(Structure):
    pass


class FCullDistanceSizePair(Structure):
    pass


class FPresetGeneratedPoint(Structure):
    pass


class FDamageInfo(Structure):
    pass


class FReflectionInfo(Structure):
    pass


class FDamageEventSummary(Structure):
    pass


class FPlayerDataStoreGroup(Structure):
    pass


class FKeyBind(Structure):
    pass


class FDecalReceiver(Structure):
    pass


class FActiveDecalInfo(Structure):
    pass


class FLightmassMaterialInterfaceSettings(Structure):
    pass


class FMaterialInput(Structure):
    pass


class FColorMaterialInput(Structure):
    pass


class FScalarMaterialInput(Structure):
    pass


class FVectorMaterialInput(Structure):
    pass


class FVector2MaterialInput(Structure):
    pass


class APhysicsVolume_FCheckpointRecord(Structure):
    pass


class FMarketplaceOffer(Structure):
    pass


class FInstalledContentInfo(Structure):
    pass


class FMarketplaceOfferDownloadState(Structure):
    pass


class FRejectedContentInfo(Structure):
    pass


class FDlcContentId(Structure):
    pass


class FDlcContentInfo(Structure):
    pass


class FDlcCompatibilityData(Structure):
    pass


class FDlcCompatibilityDataEx(Structure):
    pass


class ADynamicBlockingVolume_FCheckpointRecord(Structure):
    pass


class FViewParticleEmitterInstanceMotionBlurInfo(Structure):
    pass


class FParticleSysParam(Structure):
    pass


class FParticleEventData(Structure):
    pass


class FParticleEventSpawnData(Structure):
    pass


class FParticleEventDeathData(Structure):
    pass


class FParticleEventCollideData(Structure):
    pass


class FParticleEventTraceData(Structure):
    pass


class FParticleEventKismetData(Structure):
    pass


class FParticleEmitterInstanceMotionBlurInfo(Structure):
    pass


class FParticleEmitterInstance(Structure):
    pass


class AEmitter_FCheckpointRecord(Structure):
    pass


class FEmitterBaseInfo(Structure):
    pass


class FParticleSystemLOD(Structure):
    pass


class FStatColorMapEntry(Structure):
    pass


class FStatColorMapping(Structure):
    pass


class FDropNoteInfo(Structure):
    pass


class FPrimitiveMaterialRef(Structure):
    pass


class FPostProcessMaterialRef(Structure):
    pass


class FMaterialReferenceList(Structure):
    pass


class FVelocityObstacleStat(Structure):
    pass


class FGroupAnimationAndSoundIdentifier(Structure):
    pass


class AFogVolumeDensityInfo_FCheckpointRecord(Structure):
    pass


class FFoliageInstanceBase(Structure):
    pass


class FStoredFoliageInstance(Structure):
    pass


class FFoliageMesh(Structure):
    pass


class FFontImportOptionsData(Structure):
    pass


class FFontCharacter(Structure):
    pass


class FWaveformSample(Structure):
    pass


class FLevelStreamingStatus(Structure):
    pass


class FFullyLoadedPackagesInfo(Structure):
    pass


class FNamedNetDriver(Structure):
    pass


class FAnimTag(Structure):
    pass


class FURL(Structure):
    pass


class FGameClassShortName(Structure):
    pass


class FGameTypePrefix(Structure):
    pass


class FPlayerInformation(Structure):
    pass


class FTeamInformation(Structure):
    pass


class FGameStatGroup(Structure):
    pass


class FGameplayEventMetaData(Structure):
    pass


class FWeaponClassEventData(Structure):
    pass


class FDamageClassEventData(Structure):
    pass


class FProjectileClassEventData(Structure):
    pass


class FPawnClassEventData(Structure):
    pass


class FGameplayEventsHeader(Structure):
    pass


class FGameSessionInformation(Structure):
    pass


class FMusicStateInfo(Structure):
    pass


class FMusicTrackStruct(Structure):
    pass


class FNavMeshPathGoalEvaluatorCacheDatum(Structure):
    pass


class FPhysXEmitterVerticalProperties(Structure):
    pass


class FPhysXVerticalProperties(Structure):
    pass


class FHostMigrationState(Structure):
    pass


class FNavigationArea(Structure):
    pass


class FWorldFractureSettings(Structure):
    pass


class FNavMeshPathConstraintCacheDatum(Structure):
    pass


class FLightmassWorldInfoSettings(Structure):
    pass


class FScreenMessageString(Structure):
    pass


class FApexModuleDestructibleSettings(Structure):
    pass


class FPhysXSimulationProperties(Structure):
    pass


class FPhysXSceneProperties(Structure):
    pass


class FCompartmentRunList(Structure):
    pass


class FNetViewer(Structure):
    pass


class FLevelGroup(Structure):
    pass


class FTitleSafeZoneArea(Structure):
    pass


class FPerPlayerSplitscreenData(Structure):
    pass


class FSplitscreenData(Structure):
    pass


class FDebugDisplayProperty(Structure):
    pass


class FGBXConnectedNavMesh(Structure):
    pass


class FGBXNavMeshVertex(Structure):
    pass


class FGBXNavMeshPoly(Structure):
    pass


class FGBXNavmeshCrossLevelConnection(Structure):
    pass


class FGBXNavMeshSpecialMove(Structure):
    pass


class FGBXNavMeshPolyData(Structure):
    pass


class FGBXNavMeshPathSize(Structure):
    pass


class FGBXNavMeshObstacleData(Structure):
    pass


class FGBXNavMeshPolyRef(Structure):
    pass


class FGBXNavMeshLookupCell(Structure):
    pass


class FGBXNavMeshPolyLookup(Structure):
    pass


class FGBXLineCheckResult(Structure):
    pass


class FIGBXNavMeshObstaclePointer(Structure):
    pass


class FGBXNavMeshPathPoint(Structure):
    pass


class FGBXNavMeshPath(Structure):
    pass


class FNavMeshPathParams(Structure):
    pass


class FPolySegmentSpan(Structure):
    pass


class FEdgePointer(Structure):
    pass


class FPathStore(Structure):
    pass


class FPlayerOwnedComponent(Structure):
    pass


class FAkCallBackGetRTPC(Structure):
    pass


class FGestaltAccessoryPartEntry(Structure):
    pass


class FGestaltAccessoryGroupEntry(Structure):
    pass


class FGestaltAccessoryMeshEntry(Structure):
    pass


class FGPMCollection(Structure):
    pass


class FActorToLookAt(Structure):
    pass


class FHybridNavVisualizationVert(Structure):
    pass


class FHybridNavVisualizationVertsForNavPoint(Structure):
    pass


class FHybridNavVisualizationPerfStats(Structure):
    pass


class FReplicatedCoordinatedEffect(Structure):
    pass


class FGBXNavMeshSpecialMoveConnection(Structure):
    pass


class FIniLocFileEntry(Structure):
    pass


class FBodyInstanceDataUnion(Structure):
    pass


class FBodyCompositionData(Structure):
    pass


class FInstancedStaticMeshInstanceData(Structure):
    pass


class FInstancedStaticMeshMappingInfo(Structure):
    pass


class AInterpActor_FCheckpointRecord(Structure):
    pass


class FCurveEdEntry(Structure):
    pass


class FCurveEdTab(Structure):
    pass


class FAnimSetBakeAndPruneStatus(Structure):
    pass


class FInterpEdSelKey(Structure):
    pass


class FSubTrackGroup(Structure):
    pass


class FSupportedSubTrackInfo(Structure):
    pass


class FAnimControlTrackKey(Structure):
    pass


class FBoolTrackKey(Structure):
    pass


class FCommentTrackKey(Structure):
    pass


class FDirectorTrackCut(Structure):
    pass


class FEventTrackKey(Structure):
    pass


class FFaceFXTrackKey(Structure):
    pass


class FFaceFXSoundCueKey(Structure):
    pass


class FHeadTrackingKey(Structure):
    pass


class FFloatMaterialParamMICData(Structure):
    pass


class FToggleTrackKey(Structure):
    pass


class FVectorMaterialParamMICData(Structure):
    pass


class FVisibilityTrackKey(Structure):
    pass


class FInterpLookupPoint(Structure):
    pass


class FInterpLookupTrack(Structure):
    pass


class FParticleReplayTrackKey(Structure):
    pass


class FSoundTrackKey(Structure):
    pass


class FTeleportKeyData(Structure):
    pass


class FImpulseData(Structure):
    pass


class FLandscapeWeightmapUsage(Structure):
    pass


class FLandscapeLayerInfo(Structure):
    pass


class FLandscapeAddCollision(Structure):
    pass


class FWeightmapLayerAllocationInfo(Structure):
    pass


class FLensFlareElement(Structure):
    pass


class FLensFlareElementCurvePair(Structure):
    pass


class FLensFlareElementMaterials(Structure):
    pass


class FLensFlareElementInstance(Structure):
    pass


class FLevelGridCellCoordinate(Structure):
    pass


class ALevelStreamingVolume_FCheckpointRecord(Structure):
    pass


class FPostProcessSettingsOverride(Structure):
    pass


class FWorldLightingOverride(Structure):
    pass


class FCurrentPostProcessVolumeInfo(Structure):
    pass


class FSynchronizedActorVisibilityHistory(Structure):
    pass


class FManufacturerGradeData(Structure):
    pass


class FManufacturerCustomGradeWeightData(Structure):
    pass


class FExpressionInput(Structure):
    pass


class FCustomInput(Structure):
    pass


class FFontParameterValue(Structure):
    pass


class FScalarParameterValue(Structure):
    pass


class FTextureParameterValue(Structure):
    pass


class FVectorParameterValue(Structure):
    pass


class FParameterValueOverTime(Structure):
    pass


class FFontParameterValueOverTime(Structure):
    pass


class FScalarParameterValueOverTime(Structure):
    pass


class FTextureParameterValueOverTime(Structure):
    pass


class FVectorParameterValueOverTime(Structure):
    pass


class FMorphNodeConn(Structure):
    pass


class FBoneAngleMorph(Structure):
    pass


class FBiasedGoalActor(Structure):
    pass


class ANavMeshObstacle_FCheckpointRecord(Structure):
    pass


class FMMStats_Timer(Structure):
    pass


class FOnlineProfileSetting(Structure):
    pass


class FUIDataProviderField(Structure):
    pass


class FRecentParty(Structure):
    pass


class FCurrentPlayerMet(Structure):
    pass


class FOnlineStatsColumn(Structure):
    pass


class FOnlineStatsRow(Structure):
    pass


class FColumnMetaData(Structure):
    pass


class FParticleBurst(Structure):
    pass


class FParticleCurvePair(Structure):
    pass


class FParticleRandomSeedInfo(Structure):
    pass


class FBeamModifierOptions(Structure):
    pass


class FParticleEvent_GenerateInfo(Structure):
    pass


class FLocationBoneSocketInfo(Structure):
    pass


class FOrbitOptions(Structure):
    pass


class FEmitterDynamicParameter(Structure):
    pass


class FBeamTargetData(Structure):
    pass


class FPhysXEmitterVerticalLodProperties(Structure):
    pass


class FLODSoloTrack(Structure):
    pass


class FParticleEmitterReplayFrame(Structure):
    pass


class FParticleSystemReplayFrame(Structure):
    pass


class FPersistentData(Structure):
    pass


class FPersistentSequenceEventData(Structure):
    pass


class FPersistentSeqAct_InterpData(Structure):
    pass


class APointLightToggleable_FCheckpointRecord(Structure):
    pass


class FActivateOp(Structure):
    pass


class FQueuedActivationInfo(Structure):
    pass


class FKCachedConvexDataElement(Structure):
    pass


class FKCachedConvexData(Structure):
    pass


class FLinearDOFSetup(Structure):
    pass


class FResourcePoolIdentityState(Structure):
    pass


class FRarelyChangedPoolState(Structure):
    pass


class FPathSizeInfo(Structure):
    pass


class FCameraCutInfo(Structure):
    pass


class FSavedTransform(Structure):
    pass


class FLevelStreamingNameCombo(Structure):
    pass


class FSwitchClassInfo(Structure):
    pass


class FSwitchObjectCase(Structure):
    pass


class FShadowRelevanceSizePair(Structure):
    pass


class FSoftBodyTetraLink(Structure):
    pass


class FSoftBodySpecialBoneInfo(Structure):
    pass


class FClothSpecialBoneInfo(Structure):
    pass


class FTriangleSortSettings(Structure):
    pass


class FSkeletalMeshLODInfo(Structure):
    pass


class FBoneMirrorExport(Structure):
    pass


class FBoneMirrorInfo(Structure):
    pass


class FSkelMeshActorControlTarget(Structure):
    pass


class ASkeletalMeshActor_FCheckpointRecord(Structure):
    pass


class FSkelMaterialSetterDatum(Structure):
    pass


class FSoundClassEditorData(Structure):
    pass


class FSoundClassProperties(Structure):
    pass


class FSoundNodeEditorData(Structure):
    pass


class FSoundClassAdjuster(Structure):
    pass


class FAudioEQEffect(Structure):
    pass


class FRecognisableWord(Structure):
    pass


class FRecogVocabulary(Structure):
    pass


class FRecogUserData(Structure):
    pass


class FSplineConnection(Structure):
    pass


class FSplineMeshParams(Structure):
    pass


class ASpotLightToggleable_FCheckpointRecord(Structure):
    pass


class FSMMaterialSetterDatum(Structure):
    pass


class FVehicleState(Structure):
    pass


class FSearchState(Structure):
    pass


class FTerrainHeight(Structure):
    pass


class FTerrainInfoData(Structure):
    pass


class FTerrainLayer(Structure):
    pass


class FTerrainDecorationInstance(Structure):
    pass


class FTerrainDecoration(Structure):
    pass


class FTerrainDecoLayer(Structure):
    pass


class FAlphaMap(Structure):
    pass


class ATerrain_FTerrainWeightedMaterial(Structure):
    pass


class FSelectedTerrainVertex(Structure):
    pass


class FTerrainMaterialResource(Structure):
    pass


class FCachedTerrainMaterialArray(Structure):
    pass


class FTerrainBVTree(Structure):
    pass


class FTerrainkDOPTree(Structure):
    pass


class FFilterLimit(Structure):
    pass


class FTerrainFilteredMaterial(Structure):
    pass


class FTerrainFoliageMesh(Structure):
    pass


class UTerrainWeightMapTexture_FTerrainWeightedMaterial(Structure):
    pass


class FSourceTexture2DRegion(Structure):
    pass


class ATrigger_FCheckpointRecord(Structure):
    pass


class FLevelStreamingData(Structure):
    pass


class FPlayerStorageArrayProvider(Structure):
    pass


class FSettingsArrayProvider(Structure):
    pass


class FDynamicResourceProviderDefinition(Structure):
    pass


class FGameResourceDataProvider(Structure):
    pass


class FUIInputKeyData(Structure):
    pass


class FUIDataStoreInputAlias(Structure):
    pass


class FGameSearchCfg(Structure):
    pass


class FGameSettingsCfg(Structure):
    pass


class FRankMetaData(Structure):
    pass


class FPlayerNickMetaData(Structure):
    pass


class FUIMenuInputMap(Structure):
    pass


class FUIKeyRepeatData(Structure):
    pass


class FUIAxisEmulationData(Structure):
    pass


class FSoundEventMapping(Structure):
    pass


class FUIStatData(Structure):
    pass


class FAttributeSlotEffectData(Structure):
    pass


class FAttributeSlotUpgradeData(Structure):
    pass


class FInventorySerialNumber(Structure):
    pass


class FAttributeSlotData(Structure):
    pass


class FWorldEventSource(Structure):
    pass


from ..TArrayTypes import *
from ..structs.Base import *
from ..structs.Core import *

from ..classes.Base import *
from ..classes.Core import *
from ..classes.Engine import *


def init():
    FStaticMeshLODElement._fields_ = [
        ("Material", POINTER(UMaterialInterface)),
        ("bEnableShadowCasting", c_bool, 1),
        ("Unknown1", c_ubyte * 0x4),
        ("bEnableCollision", c_bool, 1),
    ]

    FStaticMeshLODInfo._fields_ = [("Elements", TArray_FStaticMeshLODElement)]

    FAnimSlotDesc._fields_ = [("SlotName", FName), ("NumChannels", c_int)]

    FRigidBodyState._fields_ = [
        ("Position", FVector),
        ("Unknown1", c_ubyte * 0x4),
        ("Quaternion", FQuat),
        ("LinVel", FVector),
        ("AngVel", FVector),
        ("bNewData", c_ubyte),
    ]

    FRigidBodyContactInfo._fields_ = [
        ("ContactPosition", FVector),
        ("ContactNormal", FVector),
        ("ContactPenetration", c_float),
        ("ContactVelocity", FVector * 2),
        ("PhysMaterial", POINTER(UPhysicalMaterial) * 2),
    ]

    FCollisionImpactData._fields_ = [
        ("ContactInfos", TArray_FRigidBodyContactInfo),
        ("TotalNormalForceVector", FVector),
        ("TotalFrictionForceVector", FVector),
    ]

    FPhysEffectInfo._fields_ = [
        ("Threshold", c_float),
        ("ReFireDelay", c_float),
        ("Effect", POINTER(UParticleSystem)),
        ("Sound", POINTER(USoundCue)),
        ("ImpactDefinition", POINTER(UImpactDefinition)),
    ]

    FActorReference._fields_ = [("Actor", POINTER(AActor)), ("Guid", FGuid)]

    FNavReference._fields_ = [("Nav", POINTER(ANavigationPoint)), ("Guid", FGuid)]

    FBasedPosition._fields_ = [
        ("Base", POINTER(AActor)),
        ("Position", FVector),
        ("CachedBaseLocation", FVector),
        ("CachedBaseRotation", FRotator),
        ("CachedTransPosition", FVector),
    ]

    FResourcePoolReference._fields_ = [
        ("PoolManager", POINTER(AResourcePoolManager)),
        ("PoolIndexInManager", c_ubyte),
        ("PoolGUID", c_ubyte),
        ("Unknown1", c_ubyte * 0x2),
        ("Data", POINTER(UResourcePool)),
    ]

    FTraceHitInfo._fields_ = [
        ("Material", POINTER(UMaterial)),
        ("PhysMaterial", POINTER(UPhysicalMaterial)),
        ("Item", c_int),
        ("LevelIndex", c_int),
        ("BoneName", FName),
        ("HitComponent", POINTER(UPrimitiveComponent)),
    ]

    FImpactInfo._fields_ = [
        ("HitActor", POINTER(AActor)),
        ("HitLocation", FVector),
        ("HitNormal", FVector),
        ("RayDir", FVector),
        ("StartTrace", FVector),
        ("HitInfo", FTraceHitInfo),
        ("EndTrace", FVector),
    ]

    FAkPlayingInfo._fields_ = [
        ("SourceComponent", POINTER(UAkComponent)),
        ("AkPlayingId", c_int),
    ]

    FSeqOpInputLink._fields_ = [
        ("LinkDesc", FString),
        ("QueuedActivations", c_int),
        ("LinkedOp", POINTER(USequenceOp)),
        ("bHidden", c_bool, 1),
        ("bMoving", c_bool, 1),
        ("bClampedMax", c_bool, 1),
        ("bClampedMin", c_bool, 1),
        ("bDisabled", c_bool, 1),
        ("bDisabledPIE", c_bool, 1),
        ("bHasImpulse", c_bool, 1),
        ("ActivateDelay", c_float),
    ]

    FAnimSlotInfo._fields_ = [("SlotName", FName), ("ChannelWeights", TArray_float)]

    FTraceNotifyInfo._fields_ = [
        ("ActorToNotify", POINTER(AActor)),
        ("ActorCallingTrace", POINTER(AActor)),
        ("ComponentHit", POINTER(UComponent)),
        ("HitTime", c_float),
        ("HitLocation", FVector),
        ("HitNormal", FVector),
        ("End", FVector),
        ("Start", FVector),
        ("Extent", FVector),
        ("TraceFlags", c_int),
    ]

    FTimerData._fields_ = [
        ("bLoop", c_bool, 1),
        ("bPaused", c_bool, 1),
        ("FuncName", FName),
        ("Rate", c_float),
        ("Count", c_float),
        ("TimerTimeDilation", c_float),
        ("TimerObj", POINTER(UObject)),
    ]

    FKeyValuePair._fields_ = [("Key", FString), ("Value", FString)]

    FPlayerResponseLine._fields_ = [
        ("PlayerNum", c_int),
        ("PlayerID", c_int),
        ("PlayerName", FString),
        ("Ping", c_int),
        ("Score", c_int),
        ("StatsID", c_int),
        ("PlayerInfo", TArray_FKeyValuePair),
    ]

    FServerResponseLine._fields_ = [
        ("ServerID", c_int),
        ("IP", FString),
        ("Port", c_int),
        ("QueryPort", c_int),
        ("ServerName", FString),
        ("MapName", FString),
        ("GameType", FString),
        ("CurrentPlayers", c_int),
        ("MaxPlayers", c_int),
        ("Ping", c_int),
        ("ServerInfo", TArray_FKeyValuePair),
        ("PlayerInfo", TArray_FPlayerResponseLine),
    ]

    FLocalizedStringSetting._fields_ = [
        ("Id", c_int),
        ("ValueIndex", c_int),
        ("AdvertisementType", c_ubyte),
    ]

    FSettingsData._fields_ = [
        ("Type", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Value1", c_int),
        ("Value2", FPointer),
    ]

    FSettingsProperty._fields_ = [
        ("PropertyId", c_int),
        ("Data", FSettingsData),
        ("AdvertisementType", c_ubyte),
    ]

    FIdToStringMapping._fields_ = [("Id", c_int), ("Name", FString)]

    FStringIdToStringMapping._fields_ = [
        ("Id", c_int),
        ("Name", FName),
        ("bIsWildcard", c_bool, 1),
    ]

    FLocalizedStringSettingMetaData._fields_ = [
        ("Id", c_int),
        ("Name", FName),
        ("ColumnHeaderText", FString),
        ("ValueMappings", TArray_FStringIdToStringMapping),
    ]

    FSettingsPropertyPropertyMetaData._fields_ = [
        ("Id", c_int),
        ("Name", FName),
        ("ColumnHeaderText", FString),
        ("MappingType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("ValueMappings", TArray_FIdToStringMapping),
        ("PredefinedValues", TArray_FSettingsData),
        ("MinVal", c_float),
        ("MaxVal", c_float),
        ("RangeIncrement", c_float),
    ]

    FUniqueNetId._fields_ = [("Uid", FQWord), ("NpId", c_ubyte * 16)]

    FOnlineRegistrant._fields_ = [("PlayerNetId", FUniqueNetId)]

    FOnlineArbitrationRegistrant._fields_ = [
        ("PlayerNetId", FUniqueNetId),
        ("MachineId", FQWord),
        ("Trustworthiness", c_int),
    ]

    FNamedSession._fields_ = [
        ("SessionName", FName),
        ("SessionInfo", FPointer),
        ("GameSettings", POINTER(UOnlineGameSettings)),
        ("Registrants", TArray_FOnlineRegistrant),
        ("ArbitrationRegistrants", TArray_FOnlineArbitrationRegistrant),
    ]

    FNamedInterface._fields_ = [
        ("InterfaceName", FName),
        ("InterfaceObject", POINTER(UObject)),
    ]

    FOnlinePartyMember._fields_ = [
        ("UniqueId", FUniqueNetId),
        ("NickName", FString),
        ("LocalUserNum", c_ubyte),
        ("NatType", c_ubyte),
        ("Unknown1", c_ubyte * 0x2),
        ("TitleId", c_int),
        ("bIsLocal", c_bool, 1),
        ("bIsInPartyVoice", c_bool, 1),
        ("bIsTalking", c_bool, 1),
        ("bIsInGameSession", c_bool, 1),
        ("bIsPlayingThisGame", c_bool, 1),
        ("SessionId", FQWord),
        ("Data1", c_int),
        ("Data2", c_int),
        ("Data3", c_int),
        ("Data4", c_int),
    ]

    FAchievementDetails._fields_ = [
        ("Id", c_int),
        ("AchievementName", FString),
        ("Description", FString),
        ("HowTo", FString),
        ("Image", POINTER(USurface)),
        ("MonthEarned", c_ubyte),
        ("DayEarned", c_ubyte),
        ("YearEarned", c_ubyte),
        ("DayOfWeekEarned", c_ubyte),
        ("GamerPoints", c_int),
        ("bIsSecret", c_bool, 1),
        ("bWasAchievedOnline", c_bool, 1),
        ("bWasAchievedOffline", c_bool, 1),
    ]

    FCommunityContentMetadata._fields_ = [
        ("ContentType", c_int),
        ("MetadataItems", TArray_FSettingsProperty),
    ]

    FCommunityContentFile._fields_ = [
        ("ContentId", c_int),
        ("FileId", c_int),
        ("ContentType", c_int),
        ("FileSize", c_int),
        ("Owner", FUniqueNetId),
        ("DownloadCount", c_int),
        ("AverageRating", c_float),
        ("RatingCount", c_int),
        ("LastRatingGiven", c_int),
        ("LocalFilePath", FString),
    ]

    FTitleFile._fields_ = [
        ("Filename", FString),
        ("AsyncState", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Data", TArray_unsigned_char),
    ]

    FNamedInterfaceDef._fields_ = [
        ("InterfaceName", FName),
        ("InterfaceClassName", FString),
    ]

    FOnlineFriendMessage._fields_ = [
        ("SendingPlayerId", FUniqueNetId),
        ("SendingPlayerNick", FString),
        ("bIsFriendInvite", c_bool, 1),
        ("bIsGameInvite", c_bool, 1),
        ("bWasAccepted", c_bool, 1),
        ("bWasDenied", c_bool, 1),
        ("Message", FString),
    ]

    FRemoteTalker._fields_ = [
        ("TalkerId", FUniqueNetId),
        ("LastNotificationTime", c_float),
        ("bWasTalking", c_bool, 1),
        ("bIsTalking", c_bool, 1),
        ("bIsRegistered", c_bool, 1),
    ]

    FLocalTalker._fields_ = [
        ("bHasVoice", c_bool, 1),
        ("bHasNetworkedVoice", c_bool, 1),
        ("bIsRecognizingSpeech", c_bool, 1),
        ("bWasTalking", c_bool, 1),
        ("bIsTalking", c_bool, 1),
        ("bIsRegistered", c_bool, 1),
    ]

    FOnlinePlayerScore._fields_ = [
        ("PlayerID", FUniqueNetId),
        ("TeamID", c_int),
        ("Score", c_int),
    ]

    FSpeechRecognizedWord._fields_ = [
        ("WordId", c_int),
        ("WordText", FString),
        ("Confidence", c_float),
    ]

    FMarketplaceContent._fields_ = [
        ("UserIndex", c_int),
        ("OfferId", c_int),
        ("PreviewOfferId", c_int),
        ("OfferName", FString),
        ("OfferType", c_int),
        ("ContentId", TArray_unsigned_char),
        ("bIsUnrestrictedLicense", c_bool, 1),
        ("LicenseMask", c_int),
        ("TitleId", c_int),
        ("ContentCategory", c_int),
        ("TitleName", FString),
        ("bUserHasPurchased", c_bool, 1),
        ("PackageSize", c_int),
        ("InstallSize", c_int),
        ("SellText", FString),
        ("AssetId", c_int),
        ("PurchaseQuantity", c_int),
        ("PointsPrice", c_int),
        ("PriceText", FString),
        ("OfferIdText", FString),
    ]

    FAppIdLicenseInfo._fields_ = [("AppID", c_int), ("LicenseMask", c_int)]

    FTOCInfo._fields_ = [("TOC", FString), ("RootPath", FString), ("Path", FString)]

    FOnlineContent._fields_ = [
        ("ContentType", c_ubyte),
        ("UserIndex", c_ubyte),
        ("Unknown1", c_ubyte * 0x2),
        ("bIsCorrupt", c_bool, 1),
        ("DeviceID", c_int),
        ("LicenseMask", c_int),
        ("FriendlyName", FString),
        ("Filename", FString),
        ("ContentPath", FString),
        ("ContentPackages", TArray_FString),
        ("ContentFiles", TArray_FString),
        ("CachedAppIdInfo", TArray_FAppIdLicenseInfo),
        ("TOCInfo", FTOCInfo),
    ]

    FOnlineContentNameInfo._fields_ = [
        ("ContentName", FString),
        ("EngineVersion", c_int),
        ("CookedVersionID", FGuid),
    ]

    FNamedOnlineContent._fields_ = [
        ("ContentType", c_ubyte),
        ("UserIndex", c_ubyte),
        ("Unknown1", c_ubyte * 0x2),
        ("bIsCorrupt", c_bool, 1),
        ("DeviceID", c_int),
        ("LicenseMask", c_int),
        ("FriendlyName", FString),
        ("Filename", FString),
        ("ContentPath", FString),
        ("ContentPackages", TArray_FString),
        ("ContentFiles", TArray_FString),
        ("CachedAppIdInfo", TArray_FAppIdLicenseInfo),
        ("TOCInfo", FTOCInfo),
        ("NameInfo", FOnlineContentNameInfo),
        ("NamedContentType", c_ubyte),
    ]

    FCompatibilityOnlineContent._fields_ = [
        ("VersionNumber", c_int),
        ("Container", FNamedOnlineContent),
        ("Content", TArray_FNamedOnlineContent),
    ]

    FOnlineFriend._fields_ = [
        ("UniqueId", FUniqueNetId),
        ("SessionId", FQWord),
        ("SessionInfo", FString),
        ("NickName", FString),
        ("PresenceInfo", FString),
        ("FriendState", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("bIsOnline", c_bool, 1),
        ("bIsPlaying", c_bool, 1),
        ("bIsPlayingThisGame", c_bool, 1),
        ("bIsJoinable", c_bool, 1),
        ("bHasVoiceSupport", c_bool, 1),
        ("bHaveInvited", c_bool, 1),
        ("bHasInvitedYou", c_bool, 1),
        ("bHaveRequested", c_bool, 1),
        ("bHasRequestedYou", c_bool, 1),
    ]

    FOnlineCrossTitleContent._fields_ = [
        ("ContentType", c_ubyte),
        ("UserIndex", c_ubyte),
        ("Unknown1", c_ubyte * 0x2),
        ("bIsCorrupt", c_bool, 1),
        ("DeviceID", c_int),
        ("LicenseMask", c_int),
        ("FriendlyName", FString),
        ("Filename", FString),
        ("ContentPath", FString),
        ("ContentPackages", TArray_FString),
        ("ContentFiles", TArray_FString),
        ("CachedAppIdInfo", TArray_FAppIdLicenseInfo),
        ("TOCInfo", FTOCInfo),
        ("TitleId", c_int),
    ]

    FFriendsQuery._fields_ = [("UniqueId", FUniqueNetId), ("bIsFriend", c_bool, 1)]

    FBaseAuthSession._fields_ = [
        ("EndPointIP", c_int),
        ("EndPointPort", c_int),
        ("EndPointUID", FUniqueNetId),
    ]

    FLocalAuthSession._fields_ = [
        ("EndPointIP", c_int),
        ("EndPointPort", c_int),
        ("EndPointUID", FUniqueNetId),
        ("SessionUID", c_int),
    ]

    FAuthSession._fields_ = [
        ("EndPointIP", c_int),
        ("EndPointPort", c_int),
        ("EndPointUID", FUniqueNetId),
        ("AuthStatus", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("AuthBlobUID", c_int),
    ]

    FPendingClientAuth._fields_ = [
        ("ClientConnection", POINTER(UPlayer)),
        ("ClientUID", FUniqueNetId),
        ("AuthTimestamp", c_float),
        ("AuthRetryCount", c_int),
    ]

    FServerAuthRetry._fields_ = [("ClientUID", FUniqueNetId), ("AuthRetryCount", c_int)]

    FRBCollisionChannelContainer._fields_ = [
        ("Default", c_bool, 1),
        ("Nothing", c_bool, 1),
        ("Pawn", c_bool, 1),
        ("Vehicle", c_bool, 1),
        ("Water", c_bool, 1),
        ("GameplayPhysics", c_bool, 1),
        ("EffectPhysics", c_bool, 1),
        ("Untitled1", c_bool, 1),
        ("Untitled2", c_bool, 1),
        ("TossedItems", c_bool, 1),
        ("TossedItemsPlayerVehicle", c_bool, 1),
        ("Cloth", c_bool, 1),
        ("FluidDrain", c_bool, 1),
        ("SoftBody", c_bool, 1),
        ("FracturedMeshPart", c_bool, 1),
        ("BlockingVolume", c_bool, 1),
        ("DeadPawn", c_bool, 1),
        ("Clothing", c_bool, 1),
        ("ClothingCollision", c_bool, 1),
        ("TossedItemsEnemyVehicle", c_bool, 1),
        ("PlayerVehicle", c_bool, 1),
        ("EnemyVehicle", c_bool, 1),
        ("PlayerVehicleEnemyVehicle", c_bool, 1),
        ("TossedItemsPlayerVehicleEnemyVehicle", c_bool, 1),
        ("WillowPickup", c_bool, 1),
    ]

    FLightingChannelContainer._fields_ = [
        ("bInitialized", c_bool, 1),
        ("BSP", c_bool, 1),
        ("Static", c_bool, 1),
        ("Dynamic", c_bool, 1),
        ("CompositeDynamic", c_bool, 1),
        ("Skybox", c_bool, 1),
        ("Unnamed", c_bool, 1),
        ("Unnamed", c_bool, 1),
        ("Unnamed", c_bool, 1),
        ("Unnamed", c_bool, 1),
        ("Unnamed", c_bool, 1),
        ("Unnamed", c_bool, 1),
        ("Cinematic", c_bool, 1),
        ("Cinematic", c_bool, 1),
        ("Cinematic", c_bool, 1),
        ("Cinematic", c_bool, 1),
        ("Cinematic", c_bool, 1),
        ("Cinematic", c_bool, 1),
        ("Cinematic", c_bool, 1),
        ("Cinematic", c_bool, 1),
        ("Cinematic", c_bool, 1),
        ("Cinematic", c_bool, 1),
        ("Gameplay", c_bool, 1),
        ("Gameplay", c_bool, 1),
        ("Gameplay", c_bool, 1),
        ("Gameplay", c_bool, 1),
        ("Crowd", c_bool, 1),
        ("PhysX", c_bool, 1),
    ]

    FMaterialViewRelevance._fields_ = [
        ("bOpaque", c_bool, 1),
        ("bTranslucent", c_bool, 1),
        ("bDistortion", c_bool, 1),
        ("bOneLayerDistortionRelevance", c_bool, 1),
        ("bLit", c_bool, 1),
        ("bUsesSceneColor", c_bool, 1),
    ]

    FReplicatedInstanceDataState._fields_ = [
        ("SwitchStateBitField", c_int),
        ("ActiveSwitchValues", c_int),
        ("RemovedBodyCompositionPartsBitField", c_int),
        ("bNeedToApplyThisState", c_bool, 1),
    ]

    FComponentData._fields_ = [
        ("Component", POINTER(UActorComponent)),
        ("CollisionType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("bAttachToMesh", c_bool, 1),
        ("bIsUsable", c_bool, 1),
        ("bIsSecondaryUsable", c_bool, 1),
        ("MeshSocketName", FName),
        ("HitRegionDefinition", POINTER(UBaseHitRegionDefinition)),
        ("InteractIcon", POINTER(UEngineInteractionIconDefinition)),
        ("SecondaryInteractIcon", POINTER(UEngineInteractionIconDefinition)),
    ]

    FInstanceDataUnion._fields_ = [
        ("Name", FName),
        ("Type", c_ubyte),
        ("Replication", c_ubyte),
        ("MaxSwitchValue", c_ubyte),
        ("BitsRequiredForMaxSwitchValue", c_ubyte),
        ("Bool", c_bool, 1),
        ("DeleteByOwner", c_bool, 1),
        ("Int", c_int),
        ("Float", c_float),
        ("Vector", FVector),
        ("Object", POINTER(UObject)),
        ("ComponentData", FComponentData),
        ("String", FString),
        ("BodyCompositionIndex", c_int),
    ]

    FInstanceDataSet._fields_ = [("Data", TArray_FInstanceDataUnion)]

    FVisiblePortalInfo._fields_ = [
        ("Source", POINTER(AActor)),
        ("Destination", POINTER(AActor)),
    ]

    FOnlineGameSearchParameter._fields_ = [
        ("EntryId", c_int),
        ("CompareValueId", c_int),
        ("ObjectPropertyName", FName),
        ("EntryType", c_ubyte),
        ("ComparisonType", c_ubyte),
    ]

    FOnlineGameSearchORClause._fields_ = [
        ("OrParams", TArray_FOnlineGameSearchParameter)
    ]

    FOnlineGameSearchSortClause._fields_ = [
        ("EntryId", c_int),
        ("ObjectPropertyName", FName),
        ("EntryType", c_ubyte),
        ("SortType", c_ubyte),
    ]

    FOnlineGameSearchQuery._fields_ = [
        ("OrClauses", TArray_FOnlineGameSearchORClause),
        ("SortClauses", TArray_FOnlineGameSearchSortClause),
    ]

    FOverrideSkill._fields_ = [
        ("LeaderboardId", c_int),
        ("Players", TArray_FUniqueNetId),
        ("Mus", TArray_FDouble),
        ("Sigmas", TArray_FDouble),
    ]

    FNamedObjectProperty._fields_ = [
        ("ObjectPropertyName", FName),
        ("ObjectPropertyValue", FString),
    ]

    FOnlineGameSearchResult._fields_ = [
        ("GameSettings", POINTER(UOnlineGameSettings)),
        ("PlatformData", FPointer),
    ]

    FTViewTarget._fields_ = [
        ("Target", POINTER(AActor)),
        ("Controller", POINTER(AController)),
        ("POV", FTPOV),
        ("AspectRatio", c_float),
        ("PRI", POINTER(APlayerReplicationInfo)),
    ]

    FTCameraCache._fields_ = [("TimeStamp", c_float), ("POV", FTPOV)]

    FViewTargetTransitionParams._fields_ = [
        ("BlendTime", c_float),
        ("BlendFunction", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("BlendExp", c_float),
        ("bLockOutgoing", c_bool, 1),
    ]

    FLUTBlender._fields_ = [
        ("LUTTextures", TArray_UTexturePtr),
        ("LUTWeights", TArray_float),
        ("bHasChanged", c_bool, 1),
    ]

    FPostProcessSettings._fields_ = [
        ("bOverride_EnableBloom", c_bool, 1),
        ("bOverride_EnableDOF", c_bool, 1),
        ("bOverride_EnableMotionBlur", c_bool, 1),
        ("bOverride_EnableSceneEffect", c_bool, 1),
        ("bOverride_AllowAmbientOcclusion", c_bool, 1),
        ("bOverride_OverrideRimShaderColor", c_bool, 1),
        ("bOverride_Bloom_Scale", c_bool, 1),
        ("bOverride_Bloom_Threshold", c_bool, 1),
        ("bOverride_Bloom_Tint", c_bool, 1),
        ("bOverride_Bloom_ScreenBlendThreshold", c_bool, 1),
        ("bOverride_Bloom_InterpolationDuration", c_bool, 1),
        ("bOverride_DOF_FalloffExponent", c_bool, 1),
        ("bOverride_DOF_BlurKernelSize", c_bool, 1),
        ("bOverride_DOF_BlurBloomKernelSize", c_bool, 1),
        ("bOverride_DOF_MaxNearBlurAmount", c_bool, 1),
        ("bOverride_DOF_MinBlurAmount", c_bool, 1),
        ("bOverride_DOF_MaxFarBlurAmount", c_bool, 1),
        ("bOverride_DOF_FocusType", c_bool, 1),
        ("bOverride_DOF_FocusInnerRadius", c_bool, 1),
        ("bOverride_DOF_FocusDistance", c_bool, 1),
        ("bOverride_DOF_FocusPosition", c_bool, 1),
        ("bOverride_DOF_TunnelVisionScale", c_bool, 1),
        ("bOverride_DOF_TunnelVisionYOffset", c_bool, 1),
        ("bOverride_DOF_InterpolationDuration", c_bool, 1),
        ("bOverride_DOF_BokehTexture", c_bool, 1),
        ("bOverride_MotionBlur_MaxVelocity", c_bool, 1),
        ("bOverride_MotionBlur_Amount", c_bool, 1),
        ("bOverride_MotionBlur_FullMotionBlur", c_bool, 1),
        ("bOverride_MotionBlur_CameraRotationThreshold", c_bool, 1),
        ("bOverride_MotionBlur_CameraTranslationThreshold", c_bool, 1),
        ("bOverride_MotionBlur_InterpolationDuration", c_bool, 1),
        ("bOverride_Scene_Desaturation", c_bool, 1),
        ("bOverride_Scene_Colorize", c_bool, 1),
        ("bOverride_Scene_TonemapperScale", c_bool, 1),
        ("bOverride_Scene_ImageGrainScale", c_bool, 1),
        ("bOverride_Scene_HighLights", c_bool, 1),
        ("bOverride_Scene_MidTones", c_bool, 1),
        ("bOverride_Scene_Shadows", c_bool, 1),
        ("bOverride_Scene_InterpolationDuration", c_bool, 1),
        ("bOverride_Scene_ColorGradingLUT", c_bool, 1),
        ("bOverride_RimShader_Color", c_bool, 1),
        ("bOverride_RimShader_InterpolationDuration", c_bool, 1),
        ("bEnableBloom", c_bool, 1),
        ("bEnableDOF", c_bool, 1),
        ("bTwoLayerSimpleDepthOfField", c_bool, 1),
        ("bEnableMotionBlur", c_bool, 1),
        ("bEnableSceneEffect", c_bool, 1),
        ("bAllowAmbientOcclusion", c_bool, 1),
        ("bOverrideRimShaderColor", c_bool, 1),
        ("Bloom_Scale", c_float),
        ("Bloom_Threshold", c_float),
        ("Bloom_Tint", FColor),
        ("Bloom_ScreenBlendThreshold", c_float),
        ("Bloom_InterpolationDuration", c_float),
        ("DOF_BlurBloomKernelSize", c_float),
        ("DOF_FalloffExponent", c_float),
        ("DOF_BlurKernelSize", c_float),
        ("DOF_MaxNearBlurAmount", c_float),
        ("DOF_MinBlurAmount", c_float),
        ("DOF_MaxFarBlurAmount", c_float),
        ("DOF_FocusType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("DOF_FocusInnerRadius", c_float),
        ("DOF_FocusDistance", c_float),
        ("DOF_FocusPosition", FVector),
        ("DOF_TunnelVisionScale", c_float),
        ("DOF_TunnelVisionYOffset", c_float),
        ("DOF_InterpolationDuration", c_float),
        ("DOF_BokehTexture", POINTER(UTexture2D)),
        ("MotionBlur_MaxVelocity", c_float),
        ("MotionBlur_Amount", c_float),
        ("MotionBlur_FullMotionBlur", c_bool, 1),
        ("MotionBlur_CameraRotationThreshold", c_float),
        ("MotionBlur_CameraTranslationThreshold", c_float),
        ("MotionBlur_InterpolationDuration", c_float),
        ("Scene_Desaturation", c_float),
        ("Scene_Colorize", FVector),
        ("Scene_TonemapperScale", c_float),
        ("Scene_ImageGrainScale", c_float),
        ("Scene_HighLights", FVector),
        ("Scene_MidTones", FVector),
        ("Scene_Shadows", FVector),
        ("Scene_InterpolationDuration", c_float),
        ("RimShader_Color", FLinearColor),
        ("RimShader_InterpolationDuration", c_float),
        ("ColorGrading_LookupTable", POINTER(UTexture)),
        ("ColorGradingLUT", FLUTBlender),
    ]

    FRenderingPerformanceOverrides._fields_ = [
        ("bAllowAmbientOcclusion", c_bool, 1),
        ("bAllowDominantWholeSceneDynamicShadows", c_bool, 1),
        ("bAllowMotionBlurSkinning", c_bool, 1),
        ("bAllowTemporalAA", c_bool, 1),
        ("bAllowLightShafts", c_bool, 1),
    ]

    FSeqOpOutputInputLink._fields_ = [
        ("LinkedOp", POINTER(USequenceOp)),
        ("InputLinkIdx", c_int),
    ]

    FSeqOpOutputLink._fields_ = [
        ("Links", TArray_FSeqOpOutputInputLink),
        ("LinkDesc", FString),
        ("bHasImpulse", c_bool, 1),
        ("bDisabled", c_bool, 1),
        ("bDisabledPIE", c_bool, 1),
        ("bClampedMax", c_bool, 1),
        ("bClampedMin", c_bool, 1),
        ("bHidden", c_bool, 1),
        ("bIsActivated", c_bool, 1),
        ("bMoving", c_bool, 1),
        ("LinkedOp", POINTER(USequenceOp)),
        ("ActivateDelay", c_float),
    ]

    FSeqVarLink._fields_ = [
        ("ExpectedType", POINTER(UClass)),
        ("LinkedVariables", TArray_USequenceVariablePtr),
        ("LinkDesc", FString),
        ("LinkVar", FName),
        ("PropertyName", FName),
        ("bWriteable", c_bool, 1),
        ("bSequenceNeverReadsOnlyWritesToThisVar", c_bool, 1),
        ("bModifiesLinkedObject", c_bool, 1),
        ("bHidden", c_bool, 1),
        ("bClampedMax", c_bool, 1),
        ("bClampedMin", c_bool, 1),
        ("bMoving", c_bool, 1),
        ("bAllowAnyType", c_bool, 1),
        ("MinVars", c_int),
        ("MaxVars", c_int),
        ("CachedProperty", POINTER(UProperty)),
    ]

    FSeqEventLink._fields_ = [
        ("LinkedEvents", TArray_USequenceEventPtr),
        ("LinkDesc", FString),
        ("bHidden", c_bool, 1),
        ("bMoving", c_bool, 1),
        ("bClampedMax", c_bool, 1),
        ("bClampedMin", c_bool, 1),
    ]

    FDebugTextInfo._fields_ = [
        ("SrcActor", POINTER(AActor)),
        ("SrcActorOffset", FVector),
        ("SrcActorDesiredOffset", FVector),
        ("DebugText", FString),
        ("TimeRemaining", c_float),
        ("Duration", c_float),
        ("TextColor", FColor),
        ("bAbsoluteLocation", c_bool, 1),
        ("bKeepAttachedToActor", c_bool, 1),
        ("OrigActorLocation", FVector),
        ("Font", POINTER(UFont)),
    ]

    FBonePair._fields_ = [("Bones", FName * 2)]

    FAnimBlendChild._fields_ = [
        ("Name", FName),
        ("Anim", POINTER(UAnimNode)),
        ("Weight", c_float),
        ("BlendWeight", c_float),
        ("bMirrorSkeleton", c_bool, 1),
        ("bIsAdditive", c_bool, 1),
        ("AdditiveWeightScale", c_float),
    ]

    FSkelMeshComponentLODInfo._fields_ = [
        ("HiddenMaterials", TArray_BOOL),
        ("bNeedsInstanceWeightUpdate", c_bool, 1),
        ("bAlwaysUseInstanceWeights", c_bool, 1),
        ("InstanceWeightUsage", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("InstanceWeightIdx", c_int),
    ]

    FAttachment._fields_ = [
        ("Component", POINTER(UActorComponent)),
        ("BoneName", FName),
        ("RelativeLocation", FVector),
        ("RelativeRotation", FRotator),
        ("RelativeScale", FVector),
    ]

    FActiveMorph._fields_ = [("Target", POINTER(UMorphTarget)), ("Weight", c_float)]

    FGestaltLODModelFragment._fields_ = [
        ("MaterialIndex", c_int),
        ("FirstIndex", c_int),
        ("NumPrimitives", c_int),
    ]

    FGestaltLODModel._fields_ = [("GestaltFragments", TArray_FGestaltLODModelFragment)]

    FSocketRemapEntry._fields_ = [
        ("OriginalSocketName", FName),
        ("MangledSocketName", FName),
    ]

    FGestaltAccessoryEntry._fields_ = [
        ("TransformIndex", c_int),
        ("OriginalBoneIndex", c_int),
        ("GPUBoneIndex", c_int),
    ]

    FGestaltDataContainer._fields_ = [
        ("SkeletalMesh", POINTER(USkeletalMesh)),
        ("LODModelData", TArray_FGestaltLODModel),
        ("SocketMappings", TArray_FSocketRemapEntry),
        ("GestaltAccessoryList", TArray_FGestaltAccessoryEntry),
        ("GestaltPartMatricesContainer", POINTER(UGestaltPartMatrices)),
        ("ReferencePoseBounds", FBoxSphereBounds),
    ]

    FConnectedPeerInfo._fields_ = [
        ("PlayerID", FUniqueNetId),
        ("NatType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("bLostConnectionToHost", c_bool, 1),
    ]

    FClientAdjustment._fields_ = [
        ("TimeStamp", c_float),
        ("newPhysics", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("NewLoc", FVector),
        ("NewVel", FVector),
        ("NewBase", POINTER(AActor)),
        ("NewFloor", FVector),
        ("bAckGoodMove", c_ubyte),
    ]

    FKismetDrawTextInfo._fields_ = [
        ("MessageText", FString),
        ("AppendedText", FString),
        ("MessageFont", POINTER(UFont)),
        ("MessageFontScale", FVector2D),
        ("MessageOffset", FVector2D),
        ("MessageColor", FColor),
        ("MessageEndTime", c_float),
    ]

    FConsoleMessage._fields_ = [
        ("Text", FString),
        ("TextColor", FColor),
        ("MessageLife", c_float),
        ("PRI", POINTER(APlayerReplicationInfo)),
    ]

    FAutomatedTestingDatum._fields_ = [
        ("NumberOfMatchesPlayed", c_int),
        ("NumMapListCyclesDone", c_int),
    ]

    FInputEntry._fields_ = [
        ("Type", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Value", c_float),
        ("TimeDelta", c_float),
        ("Action", c_ubyte),
    ]

    FInputMatchRequest._fields_ = [
        ("Inputs", TArray_FInputEntry),
        ("MatchActor", POINTER(AActor)),
        ("MatchFuncName", FName),
        ("MatchDelegate", FScriptDelegate),
        ("FailedFuncName", FName),
        ("RequestName", FName),
        ("MatchIdx", c_int),
        ("LastMatchTime", c_float),
    ]

    FNavigationOctreeObject._fields_ = [
        ("BoundingBox", FBox),
        ("BoxCenter", FVector),
        ("OctreeNode", FPointer),
        ("Owner", POINTER(UObject)),
        ("OwnerType", c_ubyte),
    ]

    ANavigationPoint_FCheckpointRecord._fields_ = [
        ("bDisabled", c_bool, 1),
        ("bBlocked", c_bool, 1),
    ]

    FAreaTestSortedPoint._fields_ = [
        ("Nav", POINTER(ANavigationPoint)),
        ("DistSq", c_float),
    ]

    FNavMeshPathSize._fields_ = [
        ("Size", c_float),
        ("Height", c_float),
        ("PolyColor", FColor),
        ("ObstacleColor", FColor),
    ]

    FPolyReference._fields_ = [
        ("OwningPylon", FActorReference),
        ("PolyId", c_int),
        ("CachedPoly", FPointer),
    ]

    FPendingSubtitleInfo._fields_ = [
        ("PendingSubtitlePlayingInfoPtr", FPointer),
        ("OriginalFileName", FString),
        ("StreamedSubtitleData", TArray_unsigned_char),
    ]

    FPendingFaceFXInfo._fields_ = [
        ("PendingFaceFXPlayingInfoPtr", FPointer),
        ("AnimName", FString),
        ("RawData", TArray_unsigned_char),
    ]

    FDialogueArgument._fields_ = [("Source", c_ubyte)]

    FKSphereElem._fields_ = [
        ("TM", FMatrix),
        ("Radius", c_float),
        ("bNoRBCollision", c_bool, 1),
        ("bPerPolyShape", c_bool, 1),
    ]

    FKBoxElem._fields_ = [
        ("TM", FMatrix),
        ("X", c_float),
        ("Y", c_float),
        ("Z", c_float),
        ("bNoRBCollision", c_bool, 1),
        ("bPerPolyShape", c_bool, 1),
    ]

    FKSphylElem._fields_ = [
        ("TM", FMatrix),
        ("Radius", c_float),
        ("Length", c_float),
        ("bNoRBCollision", c_bool, 1),
        ("bPerPolyShape", c_bool, 1),
    ]

    FKConvexElem._fields_ = [
        ("VertexData", TArray_FVector),
        ("PermutedVertexData", TArray_FPlane),
        ("FaceTriData", TArray_int),
        ("EdgeDirections", TArray_FVector),
        ("FaceNormalDirections", TArray_FVector),
        ("FacePlaneData", TArray_FPlane),
        ("ElemBox", FBox),
    ]

    FKAggregateGeom._fields_ = [
        ("SphereElems", TArray_FKSphereElem),
        ("BoxElems", TArray_FKBoxElem),
        ("SphylElems", TArray_FKSphylElem),
        ("ConvexElems", TArray_FKConvexElem),
        ("RenderInfo", FPointer),
        ("bSkipCloseAndParallelChecks", c_bool, 1),
    ]

    FKCachedConvexData_Mirror._fields_ = [("CachedConvexElements", TArray_int)]

    FGeomSelection._fields_ = [
        ("Type", c_int),
        ("Index", c_int),
        ("SelectionIndex", c_int),
    ]

    FInteriorSettings._fields_ = [
        ("bIsWorldInfo", c_bool, 1),
        ("ExteriorVolume", c_float),
        ("ExteriorTime", c_float),
        ("ExteriorLPF", c_float),
        ("ExteriorLPFTime", c_float),
        ("InteriorVolume", c_float),
        ("InteriorTime", c_float),
        ("InteriorLPF", c_float),
        ("InteriorLPFTime", c_float),
    ]

    FReverbSettings._fields_ = [
        ("bApplyReverb", c_bool, 1),
        ("ReverbType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Volume", c_float),
        ("FadeTime", c_float),
        ("ReflectionsDelayOverride", c_float),
        ("LateDelayOverride", c_float),
        ("DecayHighFrequencyRatioOverride", c_float),
    ]

    FAudioComponentParam._fields_ = [
        ("ParamName", FName),
        ("FloatParam", c_float),
        ("WaveParam", POINTER(USoundNodeWave)),
    ]

    FSubtitleCue._fields_ = [("Text", FString), ("Time", c_float)]

    FCompressedTrack._fields_ = [
        ("ByteStream", TArray_unsigned_char),
        ("Times", TArray_float),
        ("Mins", c_float * 3),
        ("Ranges", c_float * 3),
    ]

    FDeltaTrackInfo._fields_ = [
        ("RotKey", FQuat * 2),
        ("PosKey", FVector * 2),
        ("RotKeyIndex", c_int * 2),
        ("PosKeyIndex", c_int * 2),
    ]

    FCurveTrack._fields_ = [("CurveName", FName), ("CurveWeights", TArray_float)]

    FRotationTrack._fields_ = [("RotKeys", TArray_FQuat), ("Times", TArray_float)]

    FTranslationTrack._fields_ = [("PosKeys", TArray_FVector), ("Times", TArray_float)]

    FTimeModifier._fields_ = [("Time", c_float), ("TargetStrength", c_float)]

    FSkelControlModifier._fields_ = [
        ("SkelControlName", FName),
        ("Modifiers", TArray_FTimeModifier),
    ]

    FAnimNotifyEvent._fields_ = [
        ("Time", c_float),
        ("Notify", POINTER(UAnimNotify)),
        ("Duration", c_float),
    ]

    FRawAnimSequenceTrack._fields_ = [
        ("PosKeys", TArray_FVector),
        ("RotKeys", TArray_FQuat),
    ]

    FCurveKey._fields_ = [("CurveName", FName), ("Weight", c_float)]

    FWeightNodeRule._fields_ = [
        ("NodeName", FName),
        ("CachedNode", POINTER(UAnimNodeBlendBase)),
        ("CachedSlotNode", POINTER(UAnimNodeSlot)),
        ("WeightCheck", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("ChildIndex", c_int),
    ]

    FWeightRule._fields_ = [
        ("FirstNode", FWeightNodeRule),
        ("SecondNode", FWeightNodeRule),
    ]

    FBranchInfo._fields_ = [("BoneName", FName), ("PerBoneWeightIncrease", c_float)]

    FPerBoneMaskInfo._fields_ = [
        ("BranchList", TArray_FBranchInfo),
        ("DesiredWeight", c_float),
        ("BlendTimeToGo", c_float),
        ("WeightRuleList", TArray_FWeightRule),
        ("bWeightBasedOnNodeRules", c_bool, 1),
        ("bDisableForNonLocalHumanPlayers", c_bool, 1),
        ("bPendingBlend", c_bool, 1),
        ("PerBoneWeights", TArray_float),
        ("TransformReqBone", TArray_unsigned_char),
        ("TransformReqBoneIndex", c_int),
    ]

    FAimTransform._fields_ = [("Quaternion", FQuat), ("Translation", FVector)]

    FAimComponent._fields_ = [
        ("BoneName", FName),
        ("Unknown1", c_ubyte * 0x8),
        ("LU", FAimTransform),
        ("Unknown2", c_ubyte * 0x4),
        ("LC", FAimTransform),
        ("Unknown3", c_ubyte * 0x4),
        ("LD", FAimTransform),
        ("Unknown4", c_ubyte * 0x4),
        ("CU", FAimTransform),
        ("Unknown5", c_ubyte * 0x4),
        ("CC", FAimTransform),
        ("Unknown6", c_ubyte * 0x4),
        ("CD", FAimTransform),
        ("Unknown7", c_ubyte * 0x4),
        ("RU", FAimTransform),
        ("Unknown8", c_ubyte * 0x4),
        ("RC", FAimTransform),
        ("Unknown9", c_ubyte * 0x4),
        ("RD", FAimTransform),
        ("Unknown10", c_ubyte * 0x4),
    ]

    FAimOffsetProfile._fields_ = [
        ("ProfileName", FName),
        ("HorizontalRange", FVector2D),
        ("VerticalRange", FVector2D),
        ("AimComponents", TArray_FAimComponent),
        ("AimTransformsCache", TArray_FBoneAtom),
        ("bDirtyAimTransformsCache", c_bool, 1),
        ("AnimName_LU", FName),
        ("AnimName_LC", FName),
        ("AnimName_LD", FName),
        ("AnimName_CU", FName),
        ("AnimName_CC", FName),
        ("AnimName_CD", FName),
        ("AnimName_RU", FName),
        ("AnimName_RC", FName),
        ("AnimName_RD", FName),
    ]

    FChildBoneBlendInfo._fields_ = [
        ("TargetPerBoneWeight", TArray_float),
        ("InitTargetStartBone", FName),
        ("InitPerBoneIncrease", c_float),
        ("OldStartBone", FName),
        ("OldBoneIncrease", c_float),
        ("TargetRequiredBones", TArray_unsigned_char),
    ]

    FRandomAnimInfo._fields_ = [
        ("Chance", c_float),
        ("LoopCountMin", c_ubyte),
        ("LoopCountMax", c_ubyte),
        ("Unknown1", c_ubyte * 0x2),
        ("BlendInTime", c_float),
        ("PlayRateRange", FVector2D),
        ("bStillFrame", c_bool, 1),
        ("LoopCount", c_ubyte),
        ("Unknown2", c_ubyte * 0x3),
        ("LastPosition", c_float),
    ]

    FAnimInfo._fields_ = [
        ("AnimSeqName", FName),
        ("AnimSeq", POINTER(UAnimSequence)),
        ("AnimLinkupIndex", c_int),
    ]

    FAnimBlendInfo._fields_ = [
        ("AnimName", FName),
        ("AnimInfo", FAnimInfo),
        ("Weight", c_float),
    ]

    FSynchGroup._fields_ = [
        ("SeqNodes", TArray_UAnimNodeSequencePtr),
        ("MasterNode", POINTER(UAnimNodeSequence)),
        ("GroupName", FName),
        ("bFireSlaveNotifies", c_bool, 1),
        ("RateScale", c_float),
    ]

    FOpinionData._fields_ = [
        ("Opinion", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Allegiance", POINTER(UPawnAllegiance)),
    ]

    FInfoBarData._fields_ = [
        ("Type", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Amount", c_float),
        ("bFullyArmored", c_bool, 1),
    ]

    FLocalizedSubtitle._fields_ = [
        ("LanguageExt", FString),
        ("Subtitles", TArray_FSubtitleCue),
        ("bMature", c_bool, 1),
        ("bManualWordWrap", c_bool, 1),
        ("bSingleLine", c_bool, 1),
    ]

    FLightMapRef._fields_ = [("Reference", FPointer)]

    FDominantShadowInfo._fields_ = [
        ("WorldToLight", FMatrix),
        ("LightToWorld", FMatrix),
        ("LightSpaceImportanceBounds", FBox),
        ("ShadowMapSizeX", c_int),
        ("ShadowMapSizeY", c_int),
    ]

    FLightmassLightSettings._fields_ = [
        ("IndirectLightingScale", c_float),
        ("IndirectLightingSaturation", c_float),
        ("ShadowExponent", c_float),
    ]

    FScalarParameterInterpStruct._fields_ = [
        ("ParameterName", FName),
        ("ParameterValue", c_float),
        ("InterpTime", c_float),
        ("WarmupTime", c_float),
    ]

    FLightmassPointLightSettings._fields_ = [
        ("IndirectLightingScale", c_float),
        ("IndirectLightingSaturation", c_float),
        ("ShadowExponent", c_float),
        ("LightSourceRadius", c_float),
    ]

    FLightmassDirectionalLightSettings._fields_ = [
        ("IndirectLightingScale", c_float),
        ("IndirectLightingSaturation", c_float),
        ("ShadowExponent", c_float),
        ("LightSourceAngle", c_float),
    ]

    FLightmassPrimitiveSettings._fields_ = [
        ("bUseTwoSidedLighting", c_bool, 1),
        ("bShadowIndirectOnly", c_bool, 1),
        ("bUseEmissiveForStaticLighting", c_bool, 1),
        ("bGenerateVolumeLightingSamples", c_bool, 1),
        ("EmissiveLightFalloffExponent", c_float),
        ("EmissiveLightExplicitInfluenceRadius", c_float),
        ("EmissiveBoost", c_float),
        ("DiffuseBoost", c_float),
        ("SpecularBoost", c_float),
        ("FullyOccludedSamplesFraction", c_float),
    ]

    FLightmassDebugOptions._fields_ = [
        ("bDebugMode", c_bool, 1),
        ("bStatsEnabled", c_bool, 1),
        ("bGatherBSPSurfacesAcrossComponents", c_bool, 1),
        ("CoplanarTolerance", c_float),
        ("bUseDeterministicLighting", c_bool, 1),
        ("bUseImmediateImport", c_bool, 1),
        ("bImmediateProcessMappings", c_bool, 1),
        ("bSortMappings", c_bool, 1),
        ("bDumpBinaryFiles", c_bool, 1),
        ("bDebugMaterials", c_bool, 1),
        ("bPadMappings", c_bool, 1),
        ("bDebugPaddings", c_bool, 1),
        ("bOnlyCalcDebugTexelMappings", c_bool, 1),
        ("bUseRandomColors", c_bool, 1),
        ("bColorBordersGreen", c_bool, 1),
        ("bColorByExecutionTime", c_bool, 1),
        ("ExecutionTimeDivisor", c_float),
        ("bInitialized", c_bool, 1),
    ]

    FSwarmDebugOptions._fields_ = [
        ("bDistributionEnabled", c_bool, 1),
        ("bForceContentExport", c_bool, 1),
        ("bInitialized", c_bool, 1),
    ]

    FRootMotionCurve._fields_ = [
        ("AnimName", FName),
        ("Curve", FInterpCurveVector),
        ("MaxCurveTime", c_float),
    ]

    FRecentDamageTracker._fields_ = [
        ("TotalDamage", c_float),
        ("HealthDamage", c_float),
        ("ShieldDamage", c_float),
    ]

    FBalanceDefSpawnedActorState._fields_ = [
        ("BalanceDefinition", POINTER(UBaseBalanceDefinition)),
        ("GradeIndex", c_int),
        ("bGradeCustomizationsApplied", c_bool, 1),
    ]

    FTrailSocketSamplePoint._fields_ = [("Position", FVector), ("Velocity", FVector)]

    FTrailSamplePoint._fields_ = [
        ("RelativeTime", c_float),
        ("FirstEdgeSample", FTrailSocketSamplePoint),
        ("ControlPointSample", FTrailSocketSamplePoint),
        ("SecondEdgeSample", FTrailSocketSamplePoint),
    ]

    FTrailSample._fields_ = [
        ("RelativeTime", c_float),
        ("FirstEdgeSample", FVector),
        ("ControlPointSample", FVector),
        ("SecondEdgeSample", FVector),
    ]

    FAnimSetMeshLinkup._fields_ = [("BoneToTrackTable", TArray_int)]

    FAnimGroup._fields_ = [
        ("SeqNodes", TArray_UAnimNodeSequencePtr),
        ("SynchMaster", POINTER(UAnimNodeSequence)),
        ("NotifyMaster", POINTER(UAnimNodeSequence)),
        ("GroupName", FName),
        ("RateScale", c_float),
        ("SynchPctPosition", c_float),
    ]

    FSkelControlListHead._fields_ = [
        ("BoneName", FName),
        ("ControlHead", POINTER(USkelControlBase)),
    ]

    FPreviewSkelMeshStruct._fields_ = [
        ("DisplayName", FName),
        ("PreviewSkelMesh", POINTER(USkeletalMesh)),
        ("PreviewMorphSets", TArray_UMorphTargetSetPtr),
    ]

    FPreviewSocketStruct._fields_ = [
        ("DisplayName", FName),
        ("SocketName", FName),
        ("PreviewSkelMesh", POINTER(USkeletalMesh)),
        ("PreviewStaticMesh", POINTER(UStaticMesh)),
    ]

    FPreviewAnimSetsStruct._fields_ = [
        ("DisplayName", FName),
        ("PreviewAnimSets", TArray_UAnimSetPtr),
    ]

    F_ModifyHealthParams._fields_ = [
        ("bHeal", c_bool, 1),
        ("DamageAmount", c_float),
        ("EventInstigator", POINTER(AController)),
        ("HitLocation", FVector),
        ("Momentum", FVector),
        ("DamageType", POINTER(UClass)),
        ("DamageTypeDefinition", POINTER(UDamageTypeDefinition)),
        ("ImpactDefinition", POINTER(UImpactDefinition)),
    ]

    FNxDestructibleParametersFlag._fields_ = [
        ("ACCUMULATE_DAMAGE", c_bool, 1),
        ("ASSET_DEFINED_SUPPORT", c_bool, 1),
        ("WORLD_SUPPORT", c_bool, 1),
        ("DEBRIS_TIMEOUT", c_bool, 1),
        ("DEBRIS_MAX_SEPARATION", c_bool, 1),
        ("CRUMBLE_SMALLEST_CHUNKS", c_bool, 1),
        ("ACCURATE_RAYCASTS", c_bool, 1),
        ("USE_VALID_BOUNDS", c_bool, 1),
    ]

    FNxDestructibleDepthParameters._fields_ = [
        ("TAKE_IMPACT_DAMAGE", c_bool, 1),
        ("IGNORE_POSE_UPDATES", c_bool, 1),
        ("IGNORE_RAYCAST_CALLBACKS", c_bool, 1),
        ("IGNORE_CONTACT_CALLBACKS", c_bool, 1),
        ("USER_FLAG", c_bool, 1),
        ("USER_FLAG", c_bool, 1),
        ("USER_FLAG", c_bool, 1),
        ("USER_FLAG", c_bool, 1),
    ]

    FNxDestructibleParameters._fields_ = [
        ("DamageThreshold", c_float),
        ("DamageToRadius", c_float),
        ("DamageCap", c_float),
        ("ForceToDamage", c_float),
        ("ImpactVelocityThreshold", c_float),
        ("MaterialStrength", c_float),
        ("DamageToPercentDeformation", c_float),
        ("DeformationPercentLimit", c_float),
        ("bFormExtendedStructures", c_bool, 1),
        ("SupportDepth", c_int),
        ("DebrisDepth", c_int),
        ("EssentialDepth", c_int),
        ("DebrisLifetimeMin", c_float),
        ("DebrisLifetimeMax", c_float),
        ("DebrisMaxSeparationMin", c_float),
        ("DebrisMaxSeparationMax", c_float),
        ("ValidBounds", FBox),
        ("MaxChunkSpeed", c_float),
        ("MassScaleExponent", c_float),
        ("Flags", FNxDestructibleParametersFlag),
        ("GrbVolumeLimit", c_float),
        ("GrbParticleSpacing", c_float),
        ("FractureImpulseScale", c_float),
        ("DepthParameters", TArray_FNxDestructibleDepthParameters),
    ]

    FDamageParameters._fields_ = [
        ("OverrideMode", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("BaseDamage", c_float),
        ("Radius", c_float),
        ("Momentum", c_float),
    ]

    FDamagePair._fields_ = [("DamageCauserName", FName), ("Params", FDamageParameters)]

    FAttributePriorityData._fields_ = [
        ("Attribute", POINTER(UAttributeDefinition)),
        ("PriorityIncrease", c_float),
    ]

    FAppliedAttributeEffect._fields_ = [
        ("Context", POINTER(UObject)),
        ("Attribute", POINTER(UAttributeDefinition)),
        ("Modifier", POINTER(UAttributeModifier)),
    ]

    FAttributeInitializationData._fields_ = [
        ("BaseValueConstant", c_float),
        ("BaseValueAttribute", POINTER(UAttributeDefinition)),
        ("InitializationDefinition", POINTER(UAttributeInitializationDefinition)),
        ("BaseValueScaleConstant", c_float),
    ]

    FAttributeEffectData._fields_ = [
        ("AttributeToModify", POINTER(UAttributeDefinition)),
        ("ModifierType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("BaseModifierValue", FAttributeInitializationData),
    ]

    FAttributeExpressionData._fields_ = [
        ("AttributeOperand1", POINTER(UAttributeDefinition)),
        ("ComparisonOperator", c_ubyte),
        ("Operand2Usage", c_ubyte),
        ("Unknown1", c_ubyte * 0x2),
        ("AttributeOperand2", POINTER(UAttributeDefinition)),
        ("ConstantOperand2", c_float),
    ]

    FConditionalSoundData._fields_ = [
        ("Event", POINTER(UAkEvent)),
        ("Cue", POINTER(USoundCue)),
        ("Expressions", TArray_FAttributeExpressionData),
    ]

    FBalanceFormula._fields_ = [
        ("bEnabled", c_bool, 1),
        ("Multiplier", FAttributeInitializationData),
        ("Level", FAttributeInitializationData),
        ("Power", FAttributeInitializationData),
        ("Offset", FAttributeInitializationData),
    ]

    FVariance._fields_ = [
        ("bEnabled", c_bool, 1),
        ("bUseIntegerRandomization", c_bool, 1),
        ("LowerBound", FAttributeInitializationData),
        ("UpperBound", FAttributeInitializationData),
    ]

    FRange._fields_ = [
        ("bEnableMinValueRestriction", c_bool, 1),
        ("MinValue", FAttributeInitializationData),
        ("bEnableMaxValueRestriction", c_bool, 1),
        ("MaxValue", FAttributeInitializationData),
    ]

    FConditionalValueExpression._fields_ = [
        ("BaseValueIfTrue", FAttributeInitializationData),
        ("Expressions", TArray_FAttributeExpressionData),
    ]

    FConditionalInitializationExpressions._fields_ = [
        ("bEnabled", c_bool, 1),
        ("ConditionalExpressionList", TArray_FConditionalValueExpression),
        ("DefaultBaseValue", FAttributeInitializationData),
    ]

    FAttributeBaseValueData._fields_ = [
        ("Attribute", POINTER(UAttributeDefinition)),
        ("BaseValue", FAttributeInitializationData),
    ]

    FListener._fields_ = [
        ("PortalVolume", POINTER(APortalVolume)),
        ("Location", FVector),
        ("Up", FVector),
        ("Right", FVector),
        ("Front", FVector),
    ]

    FAudioClassInfo._fields_ = [
        ("NumResident", c_int),
        ("SizeResident", c_int),
        ("NumRealTime", c_int),
        ("SizeRealTime", c_int),
    ]

    FGameStageRangeData._fields_ = [("MinGameStage", c_int), ("MaxGameStage", c_int)]

    FGameStageGradeWeightData._fields_ = [
        ("GameStageRequirement", FGameStageRangeData),
        ("MinSpawnProbabilityModifier", FAttributeInitializationData),
        ("MaxSpawnProbabilityModifier", FAttributeInitializationData),
    ]

    FBehaviorContextData._fields_ = [
        ("InstancedDataContextName", FName),
        ("ContextObject", POINTER(UObject)),
        ("BehaviorContext", c_ubyte),
        ("bSupportsDefaultOutputLink", c_ubyte),
    ]

    FBehaviorParameterUnion._fields_ = [
        ("ParameterName", FName),
        ("VectorData", FVector),
        ("ActorData", POINTER(AActor)),
        ("ImpactInfoData", FImpactInfo),
    ]

    FBehaviorParameters._fields_ = [("Parameters", TArray_FBehaviorParameterUnion)]

    FBehaviorOutputLinkDescriptionData._fields_ = [("LinkId", c_int)]

    FBehaviorKernelInfo._fields_ = [
        ("StateForThreadRunningThisBehavior", FPointer),
        ("WorldTime", c_float),
        ("ExecutionTime", c_float),
        ("WorldDeltaTime", c_float),
        ("ExecutionDelayError", c_float),
        ("NextExecutionDelayTime", c_float),
        ("bHasLinkedOutputs", c_bool, 1),
        ("bIsInitialRunOfThisBehavior", c_bool, 1),
    ]

    FCounterEventReactionData._fields_ = [
        ("EventType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Behaviors", TArray_UBehaviorBasePtr),
    ]

    FBehaviorCounterState._fields_ = [("CurrentValue", c_int), ("Target", c_int)]

    FCounterBehaviorUserState._fields_ = [("Counters", FBehaviorCounterState * 2)]

    FIndependentSelectionData._fields_ = [
        ("Probability", FAttributeInitializationData),
        ("Behaviors", TArray_UBehaviorBasePtr),
    ]

    FScalarMaterialParameter._fields_ = [
        ("Name", FName),
        ("Value", c_float),
        ("ValueFromAttribute", FAttributeInitializationData),
    ]

    FVectorMaterialParameter._fields_ = [
        ("Name", FName),
        ("Value", FLinearColor),
        ("VectorScale", FAttributeInitializationData),
    ]

    FTextureMaterialParameter._fields_ = [("Name", FName), ("Value", POINTER(UTexture))]

    FScalarParticleSystemParameter._fields_ = [
        ("Name", FName),
        ("Value", FAttributeInitializationData),
    ]

    FVectorParticleSystemParameter._fields_ = [
        ("Name", FName),
        ("Value", FVector),
        ("VectorScale", FAttributeInitializationData),
    ]

    FColorParticleSystemParameter._fields_ = [("Name", FName), ("Value", FColor)]

    FMaterialParticleSystemParameter._fields_ = [
        ("Name", FName),
        ("Value", POINTER(UMaterialInterface)),
    ]

    FActorParticleSystemParameter._fields_ = [
        ("Name", FName),
        ("Context", FBehaviorContextData),
    ]

    FStaticMeshComponentLODInfo._fields_ = [
        ("ShadowMaps", TArray_UShadowMap2DPtr),
        ("ShadowVertexBuffers", TArray_UObjectPtr),
        ("LightMap", FPointer),
        ("OverrideVertexColors", FPointer),
    ]

    FPaintedVertex._fields_ = [
        ("Position", FVector),
        ("Normal", FPackedNormal),
        ("Color", FColor),
    ]

    FFOscillator._fields_ = [
        ("Amplitude", c_float),
        ("Frequency", c_float),
        ("InitialOffset", c_ubyte),
    ]

    FVOscillator._fields_ = [
        ("X", FFOscillator),
        ("Y", FFOscillator),
        ("Z", FFOscillator),
    ]

    FROscillator._fields_ = [
        ("Pitch", FFOscillator),
        ("Yaw", FFOscillator),
        ("Roll", FFOscillator),
    ]

    FCameraShakeInstance._fields_ = [
        ("SourceShake", POINTER(UCameraShake)),
        ("SourceShakeName", FName),
        ("OscillatorTimeRemaining", c_float),
        ("bBlendingIn", c_bool, 1),
        ("CurrentBlendInTime", c_float),
        ("bBlendingOut", c_bool, 1),
        ("CurrentBlendOutTime", c_float),
        ("LocSinOffset", FVector),
        ("RotSinOffset", FVector),
        ("FOVSinOffset", c_float),
        ("Scale", c_float),
        ("AnimInst", POINTER(UCameraAnimInst)),
        ("PlaySpace", c_ubyte),
        ("Unknown1", c_ubyte * 0xB),
        ("UserPlaySpaceMatrix", FMatrix),
    ]

    FTextureGroupContainer._fields_ = [
        ("TEXTUREGROUP_World", c_bool, 1),
        ("TEXTUREGROUP_WorldNormalMap", c_bool, 1),
        ("TEXTUREGROUP_WorldSpecular", c_bool, 1),
        ("TEXTUREGROUP_Character", c_bool, 1),
        ("TEXTUREGROUP_CharacterNormalMap", c_bool, 1),
        ("TEXTUREGROUP_CharacterSpecular", c_bool, 1),
        ("TEXTUREGROUP_Weapon", c_bool, 1),
        ("TEXTUREGROUP_WeaponNormalMap", c_bool, 1),
        ("TEXTUREGROUP_WeaponSpecular", c_bool, 1),
        ("TEXTUREGROUP_Vehicle", c_bool, 1),
        ("TEXTUREGROUP_VehicleNormalMap", c_bool, 1),
        ("TEXTUREGROUP_VehicleSpecular", c_bool, 1),
        ("TEXTUREGROUP_Cinematic", c_bool, 1),
        ("TEXTUREGROUP_Effects", c_bool, 1),
        ("TEXTUREGROUP_EffectsNotFiltered", c_bool, 1),
        ("TEXTUREGROUP_Skybox", c_bool, 1),
        ("TEXTUREGROUP_UI", c_bool, 1),
        ("TEXTUREGROUP_Lightmap", c_bool, 1),
        ("TEXTUREGROUP_RenderTarget", c_bool, 1),
        ("TEXTUREGROUP_MobileFlattened", c_bool, 1),
        ("TEXTUREGROUP_ProcBuilding_Face", c_bool, 1),
        ("TEXTUREGROUP_ProcBuilding_LightMap", c_bool, 1),
        ("TEXTUREGROUP_Shadowmap", c_bool, 1),
        ("TEXTUREGROUP_ColorLookupTable", c_bool, 1),
        ("TEXTUREGROUP_Terrain_Heightmap", c_bool, 1),
        ("TEXTUREGROUP_Terrain_Weightmap", c_bool, 1),
        ("TEXTUREGROUP_ImageBasedReflection", c_bool, 1),
        ("TEXTUREGROUP_Bokeh", c_bool, 1),
    ]

    FTexture2DMipMap._fields_ = [
        ("Data", FUntypedBulkData_Mirror),
        ("SizeX", c_int),
        ("SizeY", c_int),
    ]

    FTextureLinkedListMirror._fields_ = [
        ("Element", FPointer),
        ("Next", FPointer),
        ("PrevLink", FPointer),
    ]

    FCanvasIcon._fields_ = [
        ("Texture", POINTER(UTexture)),
        ("U", c_float),
        ("V", c_float),
        ("UL", c_float),
        ("VL", c_float),
    ]

    FDepthFieldGlowInfo._fields_ = [
        ("bEnableGlow", c_bool, 1),
        ("GlowColor", FLinearColor),
        ("GlowOuterRadius", FVector2D),
        ("GlowInnerRadius", FVector2D),
    ]

    FFontRenderInfo._fields_ = [
        ("bClipText", c_bool, 1),
        ("bEnableShadow", c_bool, 1),
        ("GlowInfo", FDepthFieldGlowInfo),
    ]

    FCanvasUVTri._fields_ = [
        ("V0_Pos", FVector2D),
        ("V0_UV", FVector2D),
        ("V1_Pos", FVector2D),
        ("V1_UV", FVector2D),
        ("V2_Pos", FVector2D),
        ("V2_UV", FVector2D),
    ]

    FTextSizingParameters._fields_ = [
        ("DrawX", c_float),
        ("DrawY", c_float),
        ("DrawXL", c_float),
        ("DrawYL", c_float),
        ("Scaling", FVector2D),
        ("DrawFont", POINTER(UFont)),
        ("SpacingAdjust", FVector2D),
        ("ViewportHeight", c_float),
    ]

    FWrappedStringElement._fields_ = [("Value", FString), ("LineExtent", FVector2D)]

    FDamageTypeResistance._fields_ = [
        ("ResistanceToImpact", FAttributeInitializationData),
        ("ResistanceToStatusEffect", FAttributeInitializationData),
    ]

    FUIRangeData._fields_ = [
        ("CurrentValue", c_float),
        ("MinValue", c_float),
        ("MaxValue", c_float),
        ("NudgeValue", c_float),
        ("bIntRange", c_bool, 1),
    ]

    FTextureCoordinates._fields_ = [
        ("U", c_float),
        ("V", c_float),
        ("UL", c_float),
        ("VL", c_float),
    ]

    FUIProviderScriptFieldValue._fields_ = [
        ("PropertyTag", FName),
        ("PropertyType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("StringValue", FString),
        ("ImageValue", POINTER(USurface)),
        ("ArrayValue", TArray_int),
        ("RangeValue", FUIRangeData),
        ("NetIdValue", FUniqueNetId),
        ("AtlasCoordinates", FTextureCoordinates),
    ]

    FUIProviderFieldValue._fields_ = [
        ("PropertyTag", FName),
        ("PropertyType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("StringValue", FString),
        ("ImageValue", POINTER(USurface)),
        ("ArrayValue", TArray_int),
        ("RangeValue", FUIRangeData),
        ("NetIdValue", FUniqueNetId),
        ("AtlasCoordinates", FTextureCoordinates),
        ("CustomStringNode", FPointer),
    ]

    FInputKeyAction._fields_ = [
        ("InputKeyName", FName),
        ("InputKeyState", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("TriggeredOps", TArray_FSeqOpOutputInputLink),
        ("ActionsToExecute", TArray_USequenceOpPtr),
    ]

    FUIDataStoreBinding._fields_ = [
        ("Subscriber", FScriptInterface),
        ("RequiredFieldType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("MarkupString", FString),
        ("BindingIndex", c_int),
        ("DataStoreName", FName),
        ("DataStoreField", FName),
        ("ResolvedDataStore", POINTER(UUIDataStore)),
    ]

    FInputEventParameters._fields_ = [
        ("PlayerIndex", c_int),
        ("ControllerId", c_int),
        ("InputKeyName", FName),
        ("EventType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("InputDelta", c_float),
        ("DeltaTime", c_float),
        ("bAltPressed", c_bool, 1),
        ("bCtrlPressed", c_bool, 1),
        ("bShiftPressed", c_bool, 1),
    ]

    FSubscribedInputEventParameters._fields_ = [
        ("PlayerIndex", c_int),
        ("ControllerId", c_int),
        ("InputKeyName", FName),
        ("EventType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("InputDelta", c_float),
        ("DeltaTime", c_float),
        ("bAltPressed", c_bool, 1),
        ("bCtrlPressed", c_bool, 1),
        ("bShiftPressed", c_bool, 1),
        ("InputAliasName", FName),
    ]

    FUIAxisEmulationDefinition._fields_ = [
        ("AxisInputKey", FName),
        ("AdjacentAxisInputKey", FName),
        ("bEmulateButtonPress", c_bool, 1),
        ("InputKeyToEmulate", FName * 2),
    ]

    FRawInputKeyEventData._fields_ = [
        ("InputKeyName", FName),
        ("ModifierKeyFlags", c_ubyte),
    ]

    FAutoCompleteCommand._fields_ = [("Command", FString), ("Desc", FString)]

    FAutoCompleteNode._fields_ = [
        ("IndexChar", c_int),
        ("AutoCompleteListIndices", TArray_int),
        ("ChildNodes", TArray_FPointer),
    ]

    FCovPosInfo._fields_ = [
        ("Link", POINTER(ACoverLink)),
        ("LtSlotIdx", c_int),
        ("RtSlotIdx", c_int),
        ("LtToRtPct", c_float),
        ("Location", FVector),
        ("Normal", FVector),
        ("Tangent", FVector),
    ]

    FFireLinkItem._fields_ = [
        ("SrcType", c_ubyte),
        ("SrcAction", c_ubyte),
        ("DestType", c_ubyte),
        ("DestAction", c_ubyte),
    ]

    FFireLink._fields_ = [
        ("Interactions", TArray_unsigned_char),
        ("PackedProperties_CoverPairRefAndDynamicInfo", c_int),
        ("bFallbackLink", c_bool, 1),
        ("bDynamicIndexInited", c_bool, 1),
    ]

    FDynamicLinkInfo._fields_ = [
        ("LastTargetLocation", FVector),
        ("LastSrcLocation", FVector),
    ]

    FCoverReference._fields_ = [
        ("Actor", POINTER(AActor)),
        ("Guid", FGuid),
        ("SlotIdx", c_int),
    ]

    FExposedLink._fields_ = [
        ("TargetActor", FCoverReference),
        ("ExposedScale", c_ubyte),
    ]

    FSlotMoveRef._fields_ = [
        ("Poly", FPolyReference),
        ("Dest", FBasedPosition),
        ("Direction", c_int),
    ]

    FCoverInfo._fields_ = [("Link", POINTER(ACoverLink)), ("SlotIdx", c_int)]

    FCoverSlot._fields_ = [
        ("SlotOwner", POINTER(APawn)),
        ("SlotValidAfterTime", c_float),
        ("ForceCoverType", c_ubyte),
        ("CoverType", c_ubyte),
        ("LocationDescription", c_ubyte),
        ("Unknown1", c_ubyte * 0x1),
        ("LocationOffset", FVector),
        ("RotationOffset", FRotator),
        ("Actions", TArray_unsigned_char),
        ("FireLinks", TArray_FFireLink),
        ("RejectedFireLinks", TArray_FFireLink),
        ("ExposedCoverPackedProperties", TArray_int),
        ("TurnTargetPackedProperties", c_int),
        ("SlipRefs", TArray_FSlotMoveRef),
        ("OverlapClaimsList", TArray_FCoverInfo),
        ("bLeanLeft", c_bool, 1),
        ("bLeanRight", c_bool, 1),
        ("bForceCanPopUp", c_bool, 1),
        ("bCanPopUp", c_bool, 1),
        ("bCanMantle", c_bool, 1),
        ("bCanClimbUp", c_bool, 1),
        ("bForceCanCoverSlip_Left", c_bool, 1),
        ("bForceCanCoverSlip_Right", c_bool, 1),
        ("bCanCoverSlip_Left", c_bool, 1),
        ("bCanCoverSlip_Right", c_bool, 1),
        ("bCanSwatTurn_Left", c_bool, 1),
        ("bCanSwatTurn_Right", c_bool, 1),
        ("bEnabled", c_bool, 1),
        ("bAllowPopup", c_bool, 1),
        ("bAllowMantle", c_bool, 1),
        ("bAllowCoverSlip", c_bool, 1),
        ("bAllowClimbUp", c_bool, 1),
        ("bAllowSwatTurn", c_bool, 1),
        ("bForceNoGroundAdjust", c_bool, 1),
        ("bPlayerOnly", c_bool, 1),
        ("bPreferLeanOverPopup", c_bool, 1),
        ("bDestructible", c_bool, 1),
        ("bSelected", c_bool, 1),
        ("bFailedToFindSurface", c_bool, 1),
    ]

    FCoverMeshes._fields_ = [
        ("Base", POINTER(UStaticMesh)),
        ("LeanLeft", POINTER(UStaticMesh)),
        ("LeanRight", POINTER(UStaticMesh)),
        ("LeanLeftPref", POINTER(UStaticMesh)),
        ("LeanRightPref", POINTER(UStaticMesh)),
        ("Climb", POINTER(UStaticMesh)),
        ("Mantle", POINTER(UStaticMesh)),
        ("SlipLeft", POINTER(UStaticMesh)),
        ("SlipRight", POINTER(UStaticMesh)),
        ("SwatLeft", POINTER(UStaticMesh)),
        ("SwatRight", POINTER(UStaticMesh)),
        ("PopUp", POINTER(UStaticMesh)),
        ("PlayerOnly", POINTER(UStaticMesh)),
    ]

    FManualCoverTypeInfo._fields_ = [
        ("SlotIndex", c_ubyte),
        ("ManualCoverType", c_ubyte),
    ]

    FCoverReplicationInfo._fields_ = [
        ("Link", POINTER(ACoverLink)),
        ("SlotsEnabled", TArray_unsigned_char),
        ("SlotsDisabled", TArray_unsigned_char),
        ("SlotsAdjusted", TArray_unsigned_char),
        ("SlotsCoverTypeChanged", TArray_FManualCoverTypeInfo),
    ]

    FCullDistanceSizePair._fields_ = [("Size", c_float), ("CullDistance", c_float)]

    FPresetGeneratedPoint._fields_ = [
        ("KeyIn", c_float),
        ("KeyOut", c_float),
        ("TangentsValid", c_bool, 1),
        ("TangentIn", c_float),
        ("TangentOut", c_float),
        ("IntepMode", c_ubyte),
    ]

    FDamageInfo._fields_ = [
        ("Instigator", POINTER(AController)),
        ("HitLocation", FVector),
        ("DamageType", POINTER(UClass)),
        ("DamageTypeDefinition", POINTER(UDamageTypeDefinition)),
        ("ImpactDefinition", POINTER(UImpactDefinition)),
    ]

    FReflectionInfo._fields_ = [
        ("ReflectionType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("ReflectedDamageScale", c_float),
        ("ReflectedDamageToReflector", c_float),
        ("bReflectTowardAttacker", c_bool, 1),
        ("ReflectedInaccuracyModifier", c_float),
        ("bReflectProjectiles", c_bool, 1),
    ]

    FDamageEventSummary._fields_ = [
        ("InitialDamage", c_float),
        ("AIDamageScaleReduction", c_float),
        ("DamageSourceReduction", c_float),
        ("InstigatorDamageTypeReduction", c_float),
        ("ExpLevelDifferenceReduction", c_float),
        ("RecipientDamageTypeReduction", c_float),
        ("HitRegionReduction", c_float),
        ("ShieldReduction", c_float),
        ("IntrinsicArmorReduction", c_float),
        ("DamageSurfaceReduction", c_float),
        ("HitRegionCapReduction", c_float),
        ("ProtectionTimerReduction", c_float),
        ("ProjectileReflectionReduction", c_float),
        ("DamageSeverityPercent", c_float),
        ("DamageDealtToShields", c_float),
        ("ExtraDamageDealtDueToAmplify", c_float),
        ("FinalDamage", c_float),
        ("PreviousHealth", c_float),
        ("HitRegion", POINTER(UBaseHitRegionDefinition)),
        ("bWasCrit", c_bool, 1),
        ("bWasInjured", c_bool, 1),
        ("bWasMaxShield", c_bool, 1),
        ("bWasMaxHealth", c_bool, 1),
        ("bWasOneShotKill", c_bool, 1),
        ("ReflectionData", FReflectionInfo),
        ("DamageTakenSkillEventsTriggered", c_ubyte * 8),
        ("DamageDealtSkillEventsTriggered", c_ubyte * 8),
    ]

    FPlayerDataStoreGroup._fields_ = [
        ("PlayerOwner", POINTER(ULocalPlayer)),
        ("DataStores", TArray_UUIDataStorePtr),
    ]

    FKeyBind._fields_ = [
        ("Name", FName),
        ("Command", FString),
        ("Control", c_bool, 1),
        ("Shift", c_bool, 1),
        ("Alt", c_bool, 1),
        ("LeftTrigger", c_bool, 1),
        ("RightTrigger", c_bool, 1),
        ("bIgnoreCtrl", c_bool, 1),
        ("bIgnoreShift", c_bool, 1),
        ("bIgnoreAlt", c_bool, 1),
    ]

    FDecalReceiver._fields_ = [
        ("Component", POINTER(UPrimitiveComponent)),
        ("RenderData", FPointer),
    ]

    FActiveDecalInfo._fields_ = [
        ("Decal", POINTER(UDecalComponent)),
        ("LifetimeRemaining", c_float),
    ]

    FLightmassMaterialInterfaceSettings._fields_ = [
        ("DistanceFieldPenumbraScale", c_float),
        ("bCastShadowAsMasked", c_bool, 1),
        ("bOverrideCastShadowAsMasked", c_bool, 1),
        ("bOverrideEmissiveBoost", c_bool, 1),
        ("bOverrideDiffuseBoost", c_bool, 1),
        ("bOverrideSpecularBoost", c_bool, 1),
        ("bOverrideExportResolutionScale", c_bool, 1),
        ("bOverrideDistanceFieldPenumbraScale", c_bool, 1),
    ]

    FMaterialInput._fields_ = [
        ("Expression", POINTER(UMaterialExpression)),
        ("Mask", c_int),
        ("MaskR", c_int),
        ("MaskG", c_int),
        ("MaskB", c_int),
        ("MaskA", c_int),
        ("GCC64_Padding", c_int),
    ]

    FColorMaterialInput._fields_ = [
        ("Expression", POINTER(UMaterialExpression)),
        ("Mask", c_int),
        ("MaskR", c_int),
        ("MaskG", c_int),
        ("MaskB", c_int),
        ("MaskA", c_int),
        ("GCC64_Padding", c_int),
        ("UseConstant", c_bool, 1),
        ("Constant", FColor),
    ]

    FScalarMaterialInput._fields_ = [
        ("Expression", POINTER(UMaterialExpression)),
        ("Mask", c_int),
        ("MaskR", c_int),
        ("MaskG", c_int),
        ("MaskB", c_int),
        ("MaskA", c_int),
        ("GCC64_Padding", c_int),
        ("UseConstant", c_bool, 1),
        ("Constant", c_float),
    ]

    FVectorMaterialInput._fields_ = [
        ("Expression", POINTER(UMaterialExpression)),
        ("Mask", c_int),
        ("MaskR", c_int),
        ("MaskG", c_int),
        ("MaskB", c_int),
        ("MaskA", c_int),
        ("GCC64_Padding", c_int),
        ("UseConstant", c_bool, 1),
        ("Constant", FVector),
    ]

    FVector2MaterialInput._fields_ = [
        ("Expression", POINTER(UMaterialExpression)),
        ("Mask", c_int),
        ("MaskR", c_int),
        ("MaskG", c_int),
        ("MaskB", c_int),
        ("MaskA", c_int),
        ("GCC64_Padding", c_int),
        ("UseConstant", c_bool, 1),
        ("ConstantX", c_float),
        ("ConstantY", c_float),
    ]

    APhysicsVolume_FCheckpointRecord._fields_ = [
        ("bPainCausing", c_bool, 1),
        ("bActive", c_bool, 1),
    ]

    FMarketplaceOffer._fields_ = [
        ("OfferId", c_int),
        ("ContentCategory", c_int),
        ("OfferName", FString),
        ("ContentId", TArray_unsigned_char),
        ("bIsUnrestrictedLicense", c_bool, 1),
        ("LicenseMask", c_int),
        ("bUserHasPurchased", c_bool, 1),
    ]

    FInstalledContentInfo._fields_ = [
        ("ContentType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("ContentName", FString),
        ("ContentPath", FString),
        ("Filename", FString),
        ("DeviceID", c_int),
        ("LicenseMask", c_int),
        ("bHasSeen", c_bool, 1),
        ("CachedAppIdInfo", TArray_FAppIdLicenseInfo),
    ]

    FMarketplaceOfferDownloadState._fields_ = [
        ("bIsDownloaded", c_bool, 1),
        ("bIsInstalled", c_bool, 1),
    ]

    FRejectedContentInfo._fields_ = [
        ("ContentType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("ContentName", FString),
        ("ContentPath", FString),
        ("Filename", FString),
        ("DeviceID", c_int),
        ("LicenseMask", c_int),
        ("bHasSeen", c_bool, 1),
        ("CachedAppIdInfo", TArray_FAppIdLicenseInfo),
        ("Result", c_ubyte),
    ]

    FDlcContentId._fields_ = [("PackageId", c_int), ("ContentId", c_int)]

    FDlcContentInfo._fields_ = [
        ("ContentId", FDlcContentId),
        ("bIsInstalled", c_bool, 1),
        ("bIsLicensed", c_bool, 1),
    ]

    FDlcCompatibilityData._fields_ = [
        ("A", c_int),
        ("B", c_int),
        ("C", c_int),
        ("D", c_int),
    ]

    FDlcCompatibilityDataEx._fields_ = [
        ("A", c_int),
        ("B", c_int),
        ("C", c_int),
        ("D", c_int),
    ]

    ADynamicBlockingVolume_FCheckpointRecord._fields_ = [
        ("Location", FVector),
        ("Rotation", FRotator),
        ("bCollideActors", c_bool, 1),
        ("bBlockActors", c_bool, 1),
        ("bNeedsReplication", c_bool, 1),
    ]

    FViewParticleEmitterInstanceMotionBlurInfo._fields_ = [
        ("EmitterInstanceMBInfoMap", FMap_Mirror)
    ]

    FParticleSysParam._fields_ = [
        ("Name", FName),
        ("ParamType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Scalar", c_float),
        ("Scalar_Low", c_float),
        ("Vector", FVector),
        ("Vector_Low", FVector),
        ("Color", FColor),
        ("Actor", POINTER(AActor)),
        ("Material", POINTER(UMaterialInterface)),
        ("Socket", FName),
    ]

    FParticleEventData._fields_ = [
        ("Type", c_int),
        ("EventName", FName),
        ("EmitterTime", c_float),
        ("Location", FVector),
        ("Direction", FVector),
        ("Velocity", FVector),
    ]

    FParticleEventSpawnData._fields_ = [
        ("Type", c_int),
        ("EventName", FName),
        ("EmitterTime", c_float),
        ("Location", FVector),
        ("Direction", FVector),
        ("Velocity", FVector),
    ]

    FParticleEventDeathData._fields_ = [
        ("Type", c_int),
        ("EventName", FName),
        ("EmitterTime", c_float),
        ("Location", FVector),
        ("Direction", FVector),
        ("Velocity", FVector),
        ("ParticleTime", c_float),
    ]

    FParticleEventCollideData._fields_ = [
        ("Type", c_int),
        ("EventName", FName),
        ("EmitterTime", c_float),
        ("Location", FVector),
        ("Direction", FVector),
        ("Velocity", FVector),
        ("ParticleTime", c_float),
        ("Normal", FVector),
        ("Time", c_float),
        ("Item", c_int),
        ("BoneName", FName),
    ]

    FParticleEventTraceData._fields_ = [
        ("Type", c_int),
        ("EventName", FName),
        ("EmitterTime", c_float),
        ("Location", FVector),
        ("Direction", FVector),
        ("Velocity", FVector),
        ("ParticleTime", c_float),
    ]

    FParticleEventKismetData._fields_ = [
        ("Type", c_int),
        ("EventName", FName),
        ("EmitterTime", c_float),
        ("Location", FVector),
        ("Direction", FVector),
        ("Velocity", FVector),
        ("UsePSysCompLocation", c_bool, 1),
        ("Normal", FVector),
    ]

    FParticleEmitterInstanceMotionBlurInfo._fields_ = [
        ("ParticleMBInfoMap", FMap_Mirror)
    ]

    FParticleEmitterInstance._fields_ = []

    AEmitter_FCheckpointRecord._fields_ = [("bIsActive", c_bool, 1)]

    FEmitterBaseInfo._fields_ = [
        ("PSC", POINTER(UParticleSystemComponent)),
        ("Base", POINTER(AActor)),
        ("RelativeLocation", FVector),
        ("RelativeRotation", FRotator),
        ("bInheritBaseScale", c_bool, 1),
    ]

    FParticleSystemLOD._fields_ = [("bLit", c_bool, 1)]

    FStatColorMapEntry._fields_ = [("In", c_float), ("Out", FColor)]

    FStatColorMapping._fields_ = [
        ("StatName", FString),
        ("ColorMap", TArray_FStatColorMapEntry),
        ("DisableBlend", c_bool, 1),
    ]

    FDropNoteInfo._fields_ = [
        ("Location", FVector),
        ("Rotation", FRotator),
        ("Comment", FString),
    ]

    FPrimitiveMaterialRef._fields_ = [
        ("Primitive", POINTER(UPrimitiveComponent)),
        ("MaterialIndex", c_int),
    ]

    FPostProcessMaterialRef._fields_ = [("Effect", POINTER(UMaterialEffect))]

    FMaterialReferenceList._fields_ = [
        ("TargetMaterial", POINTER(UMaterialInterface)),
        ("AffectedMaterialRefs", TArray_FPrimitiveMaterialRef),
        ("AffectedPPChainMaterialRefs", TArray_FPostProcessMaterialRef),
    ]

    FVelocityObstacleStat._fields_ = [
        ("Position", FVector),
        ("Velocity", FVector),
        ("Radius", c_float),
        ("Priority", c_int),
    ]

    FGroupAnimationAndSoundIdentifier._fields_ = [
        ("SoundNodeWaveName", FString),
        ("FaceFXGroupName", FString),
        ("FaceFXAnimName", FString),
    ]

    AFogVolumeDensityInfo_FCheckpointRecord._fields_ = [("bEnabled", c_bool, 1)]

    FFoliageInstanceBase._fields_ = [
        ("Location", FVector),
        ("XAxis", FVector),
        ("YAxis", FVector),
        ("ZAxis", FVector),
        ("DistanceFactorSquared", c_float),
    ]

    FStoredFoliageInstance._fields_ = [
        ("Location", FVector),
        ("XAxis", FVector),
        ("YAxis", FVector),
        ("ZAxis", FVector),
        ("DistanceFactorSquared", c_float),
        ("StaticLighting", FColor * 3),
    ]

    FFoliageMesh._fields_ = [
        ("InstanceStaticMesh", POINTER(UStaticMesh)),
        ("Material", POINTER(UMaterialInterface)),
        ("MaxDrawRadius", c_float),
        ("MinTransitionRadius", c_float),
        ("MinThinningRadius", c_float),
        ("MinScale", FVector),
        ("MaxScale", FVector),
        ("MinUniformScale", c_float),
        ("MaxUniformScale", c_float),
        ("SwayScale", c_float),
        ("Seed", c_int),
        ("SurfaceAreaPerInstance", c_float),
        ("bCreateInstancesOnBSP", c_bool, 1),
        ("bCreateInstancesOnStaticMeshes", c_bool, 1),
        ("bCreateInstancesOnTerrain", c_bool, 1),
        ("Component", POINTER(UFoliageComponent)),
    ]

    FFontImportOptionsData._fields_ = [
        ("FontName", FString),
        ("Height", c_float),
        ("bEnableAntialiasing", c_bool, 1),
        ("bEnableBold", c_bool, 1),
        ("bEnableItalic", c_bool, 1),
        ("bEnableUnderline", c_bool, 1),
        ("bAlphaOnly", c_bool, 1),
        ("CharacterSet", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Chars", FString),
        ("UnicodeRange", FString),
        ("CharsFilePath", FString),
        ("CharsFileWildcard", FString),
        ("bCreatePrintableOnly", c_bool, 1),
        ("bIncludeASCIIRange", c_bool, 1),
        ("ForegroundColor", FLinearColor),
        ("bEnableDropShadow", c_bool, 1),
        ("TexturePageWidth", c_int),
        ("TexturePageMaxHeight", c_int),
        ("XPadding", c_int),
        ("YPadding", c_int),
        ("ExtendBoxTop", c_int),
        ("ExtendBoxBottom", c_int),
        ("ExtendBoxRight", c_int),
        ("ExtendBoxLeft", c_int),
        ("bEnableLegacyMode", c_bool, 1),
        ("Kerning", c_int),
        ("bUseDistanceFieldAlpha", c_bool, 1),
        ("DistanceFieldScaleFactor", c_int),
        ("DistanceFieldScanRadiusScale", c_float),
    ]

    FFontCharacter._fields_ = [
        ("StartU", c_int),
        ("StartV", c_int),
        ("USize", c_int),
        ("VSize", c_int),
        ("TextureIndex", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("VerticalOffset", c_int),
    ]

    FWaveformSample._fields_ = [
        ("LeftAmplitude", c_ubyte),
        ("RightAmplitude", c_ubyte),
        ("LeftFunction", c_ubyte),
        ("RightFunction", c_ubyte),
        ("Duration", c_float),
    ]

    FLevelStreamingStatus._fields_ = [
        ("PackageName", FName),
        ("bShouldBeLoaded", c_bool, 1),
        ("bShouldBeVisible", c_bool, 1),
    ]

    FFullyLoadedPackagesInfo._fields_ = [
        ("FullyLoadType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Tag", FString),
        ("PackagesToLoad", TArray_FName),
        ("LoadedObjects", TArray_UObjectPtr),
    ]

    FNamedNetDriver._fields_ = [("NetDriverName", FName), ("NetDriver", FPointer)]

    FAnimTag._fields_ = [("Tag", FString), ("Contains", TArray_FString)]

    FURL._fields_ = [
        ("Protocol", FString),
        ("Host", FString),
        ("Port", c_int),
        ("Map", FString),
        ("Op", TArray_FString),
        ("Portal", FString),
        ("Valid", c_int),
    ]

    FGameClassShortName._fields_ = [("ShortName", FString), ("GameClassName", FString)]

    FGameTypePrefix._fields_ = [
        ("Prefix", FString),
        ("bUsesCommonPackage", c_bool, 1),
        ("GameType", FString),
        ("AdditionalGameTypes", TArray_FString),
        ("ForcedObjects", TArray_FString),
    ]

    FPlayerInformation._fields_ = [
        ("ControllerName", FName),
        ("PlayerName", FString),
        ("UniqueId", FUniqueNetId),
        ("bIsBot", c_bool, 1),
    ]

    FTeamInformation._fields_ = [
        ("TeamIndex", c_int),
        ("TeamName", FString),
        ("TeamColor", FColor),
        ("MaxSize", c_int),
    ]

    FGameStatGroup._fields_ = [
        ("Group", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Level", c_int),
    ]

    FGameplayEventMetaData._fields_ = [
        ("EventID", c_int),
        ("EventName", FName),
        ("StatGroup", FGameStatGroup),
        ("EventDataType", c_int),
    ]

    FWeaponClassEventData._fields_ = [("WeaponClassName", FName)]

    FDamageClassEventData._fields_ = [("DamageClassName", FName)]

    FProjectileClassEventData._fields_ = [("ProjectileClassName", FName)]

    FPawnClassEventData._fields_ = [("PawnClassName", FName)]

    FGameplayEventsHeader._fields_ = [
        ("EngineVersion", c_int),
        ("StatsWriterVersion", c_int),
        ("StreamOffset", c_int),
        ("AggregateOffset", c_int),
        ("FooterOffset", c_int),
        ("TotalStreamSize", c_int),
        ("FileSize", c_int),
        ("FilterClass", FString),
        ("Flags", c_int),
    ]

    FGameSessionInformation._fields_ = [
        ("AppTitleID", c_int),
        ("PlatformType", c_int),
        ("Language", FString),
        ("GameplaySessionTimestamp", FString),
        ("GameplaySessionStartTime", c_float),
        ("GameplaySessionEndTime", c_float),
        ("bGameplaySessionInProgress", c_bool, 1),
        ("GameplaySessionID", FString),
        ("GameClassName", FString),
        ("MapName", FString),
        ("MapURL", FString),
        ("SessionInstance", c_int),
        ("GameTypeId", c_int),
        ("OwningNetId", FUniqueNetId),
        ("PlaylistId", c_int),
    ]

    FMusicStateInfo._fields_ = [
        ("State", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("CustomCombatMusicAkState", POINTER(UAkState)),
        ("CustomAmbientMusicAkState", POINTER(UAkState)),
    ]

    FMusicTrackStruct._fields_ = [
        ("TheSoundCue", POINTER(USoundCue)),
        ("bAutoPlay", c_bool, 1),
        ("bPersistentAcrossLevels", c_bool, 1),
        ("FadeInTime", c_float),
        ("FadeInVolumeLevel", c_float),
        ("FadeOutTime", c_float),
        ("FadeOutVolumeLevel", c_float),
        ("MP3Filename", FString),
    ]

    FNavMeshPathGoalEvaluatorCacheDatum._fields_ = [
        ("ListIdx", c_int),
        ("List", POINTER(UNavMeshPathGoalEvaluator) * 5),
    ]

    FPhysXEmitterVerticalProperties._fields_ = [
        ("bDisableLod", c_bool, 1),
        ("ParticlesLodMin", c_int),
        ("ParticlesLodMax", c_int),
        ("PacketsPerPhysXParticleSystemMax", c_int),
        ("bApplyCylindricalPacketCulling", c_bool, 1),
        ("SpawnLodVsFifoBias", c_float),
    ]

    FPhysXVerticalProperties._fields_ = [("Emitters", FPhysXEmitterVerticalProperties)]

    FHostMigrationState._fields_ = [
        ("HostMigrationProgress", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("HostMigrationElapsedTime", c_float),
        ("HostMigrationTravelCountdown", c_float),
        ("HostMigrationTravelURL", FString),
        ("bHostMigrationEnabled", c_bool, 1),
    ]

    FNavigationArea._fields_ = [("AreaName", FName), ("AreaColor", FColor)]

    FWorldFractureSettings._fields_ = [
        ("ChanceOfPhysicsChunkOverride", c_float),
        ("bEnableChanceOfPhysicsChunkOverride", c_bool, 1),
        ("bLimitExplosionChunkSize", c_bool, 1),
        ("MaxExplosionChunkSize", c_float),
        ("bLimitDamageChunkSize", c_bool, 1),
        ("MaxDamageChunkSize", c_float),
        ("MaxNumFacturedChunksToSpawnInAFrame", c_int),
        ("FractureExplosionVelScale", c_float),
    ]

    FNavMeshPathConstraintCacheDatum._fields_ = [
        ("ListIdx", c_int),
        ("List", POINTER(UNavMeshPathConstraint) * 5),
    ]

    FLightmassWorldInfoSettings._fields_ = [
        ("StaticLightingLevelScale", c_float),
        ("NumIndirectLightingBounces", c_int),
        ("EnvironmentColor", FColor),
        ("EnvironmentIntensity", c_float),
        ("EmissiveBoost", c_float),
        ("DiffuseBoost", c_float),
        ("SpecularBoost", c_float),
        ("IndirectNormalInfluenceBoost", c_float),
        ("bUseAmbientOcclusion", c_bool, 1),
        ("DirectIlluminationOcclusionFraction", c_float),
        ("IndirectIlluminationOcclusionFraction", c_float),
        ("OcclusionExponent", c_float),
        ("FullyOccludedSamplesFraction", c_float),
        ("MaxOcclusionDistance", c_float),
        ("bVisualizeMaterialDiffuse", c_bool, 1),
        ("bVisualizeAmbientOcclusion", c_bool, 1),
        ("bCompressShadowmap", c_bool, 1),
    ]

    FScreenMessageString._fields_ = [
        ("Key", FQWord),
        ("ScreenMessage", FString),
        ("DisplayColor", FColor),
        ("TimeToDisplay", c_float),
        ("CurrentTimeDisplayed", c_float),
    ]

    FApexModuleDestructibleSettings._fields_ = [
        ("MaxChunkIslandCount", c_int),
        ("MaxRrbActorCount", c_int),
        ("MaxChunkSeparationLOD", c_float),
        ("bOverrideMaxChunkSeparationLOD", c_bool, 1),
    ]

    FPhysXSimulationProperties._fields_ = [
        ("bUseHardware", c_bool, 1),
        ("bFixedTimeStep", c_bool, 1),
        ("TimeStep", c_float),
        ("MaxSubSteps", c_int),
    ]

    FPhysXSceneProperties._fields_ = [
        ("PrimaryScene", FPhysXSimulationProperties),
        ("CompartmentRigidBody", FPhysXSimulationProperties),
        ("CompartmentFluid", FPhysXSimulationProperties),
        ("CompartmentCloth", FPhysXSimulationProperties),
        ("CompartmentSoftBody", FPhysXSimulationProperties),
    ]

    FCompartmentRunList._fields_ = [
        ("RigidBody", c_bool, 1),
        ("Fluid", c_bool, 1),
        ("Cloth", c_bool, 1),
        ("SoftBody", c_bool, 1),
    ]

    FNetViewer._fields_ = [
        ("InViewer", POINTER(APlayerController)),
        ("Viewer", POINTER(AActor)),
        ("ViewLocation", FVector),
        ("ViewDir", FVector),
    ]

    FLevelGroup._fields_ = [
        ("bCollapsed", c_bool, 1),
        ("GroupColor", FColor),
        ("Levels", TArray_int),
        ("LevelGridVolumes", TArray_FString),
        ("GroupName", FString),
    ]

    FTitleSafeZoneArea._fields_ = [
        ("MaxPercentX", c_float),
        ("MaxPercentY", c_float),
        ("RecommendedPercentX", c_float),
        ("RecommendedPercentY", c_float),
    ]

    FPerPlayerSplitscreenData._fields_ = [
        ("SizeX", c_float),
        ("SizeY", c_float),
        ("OriginX", c_float),
        ("OriginY", c_float),
    ]

    FSplitscreenData._fields_ = [("PlayerData", TArray_FPerPlayerSplitscreenData)]

    FDebugDisplayProperty._fields_ = [
        ("Obj", POINTER(UObject)),
        ("PropertyName", FName),
        ("bSpecialProperty", c_bool, 1),
    ]

    FGBXConnectedNavMesh._fields_ = [("Mesh", POINTER(AGBXNavMesh)), ("MeshID", c_int)]

    FGBXNavMeshVertex._fields_ = [("X", c_float), ("Y", c_float), ("Z", c_float)]

    FGBXNavMeshPoly._fields_ = [
        ("Verts", c_ubyte * 6),
        ("ConnectedPolys", c_ubyte * 6),
        ("PolyDataIdx", c_ubyte * 2),
    ]

    FGBXNavmeshCrossLevelConnection._fields_ = [
        ("EdgeIdx", c_ubyte * 2),
        ("ConnectedNavmeshIdx", c_ubyte * 2),
        ("PolyIdx", c_ubyte * 2),
    ]

    FGBXNavMeshSpecialMove._fields_ = [
        ("DestinationPolyIdx", c_int),
        ("DestinationMeshIdx", c_int),
        ("CrossLevelMoverIdx", c_int),
        ("ActorSpecialMoveId", c_int),
        ("Mover", FScriptInterface),
        ("LocalSpaceSrcLocation", FVector),
        ("LocalSpaceDestLocation", FVector),
    ]

    FGBXNavMeshPolyData._fields_ = [
        ("CrossLevelConnections", TArray_FGBXNavmeshCrossLevelConnection),
        ("SpecialMoves", TArray_FGBXNavMeshSpecialMove),
        ("Obstacles", c_ubyte * 12),
    ]

    FGBXNavMeshPathSize._fields_ = [
        ("Radius", c_float),
        ("Height", c_float),
        ("DrawColor", FColor),
        ("ObstacleDrawColor", FColor),
        ("StartIndex", c_int),
    ]

    FGBXNavMeshObstacleData._fields_ = [
        ("Obstacle", POINTER(UGBXCrossLevelReferenceContainer)),
        ("MinAffectedPathSize", c_int),
    ]

    FGBXNavMeshPolyRef._fields_ = [
        ("NavMesh", POINTER(AGBXNavMesh)),
        ("PolyIdx", c_int),
    ]

    FGBXNavMeshLookupCell._fields_ = [("IntersectingPolys", FArray_Mirror)]

    FGBXNavMeshPolyLookup._fields_ = [
        ("XCells", c_int),
        ("YCells", c_int),
        ("Origin", FVector),
        ("CellSize", FVector),
        ("CellIndices", TArray_int),
        ("Cells", TArray_FGBXNavMeshLookupCell),
    ]

    FGBXLineCheckResult._fields_ = [
        ("Location", FVector),
        ("Normal", FVector),
        ("Time", c_float),
    ]

    FIGBXNavMeshObstaclePointer._fields_ = [("Dummy", FPointer)]

    FGBXNavMeshPathPoint._fields_ = [
        ("Poly", FGBXNavMeshPolyRef),
        ("Location", FVector),
        ("SpecialMoveId", c_int),
        ("NextPathObjectDistance", c_float),
        ("CrossedObstacles", TArray_FIGBXNavMeshObstaclePointer),
    ]

    FGBXNavMeshPath._fields_ = [
        ("PathPoints", TArray_FGBXNavMeshPathPoint),
        ("CurrentPathIdx", c_int),
    ]

    FNavMeshPathParams._fields_ = [
        ("Interface", FPointer),
        ("bCanMantle", c_bool, 1),
        ("bCanPhysicsJump", c_bool, 1),
        ("PhysicsJumpCostMultiplier", c_float),
        ("bNeedsMantleValidityTest", c_bool, 1),
        ("bAbleToSearch", c_bool, 1),
        ("SearchExtent", FVector),
        ("SearchLaneMultiplier", c_float),
        ("SearchStart", FVector),
        ("MaxDropHeight", c_float),
        ("MinWalkableZ", c_float),
        ("MaxHoverDistance", c_float),
        ("ObstaclesToIgnore", TArray_UObjectPtr),
        ("LookAheadDistance", c_float),
        ("CornerCutDistance", c_float),
        ("LookInterpRate", c_float),
    ]

    FPolySegmentSpan._fields_ = [("Poly", FPointer), ("P1", FVector), ("P2", FVector)]

    FEdgePointer._fields_ = [("Dummy", FPointer)]

    FPathStore._fields_ = [
        ("EdgeList", TArray_FEdgePointer),
        ("PathDistances", TArray_float),
    ]

    FPlayerOwnedComponent._fields_ = [
        ("PlayerOwner", POINTER(AActor)),
        ("Component", POINTER(UActorComponent)),
    ]

    FAkCallBackGetRTPC._fields_ = [
        ("RTPC", POINTER(UAkRtpc)),
        ("Owner", POINTER(UObject)),
        ("Component", POINTER(UAkComponent)),
        ("CallbackValue", c_float),
    ]

    FGestaltAccessoryPartEntry._fields_ = [
        ("PartName", FName),
        ("BoneName", FName),
        ("MatrixIndex", c_int),
    ]

    FGestaltAccessoryGroupEntry._fields_ = [
        ("GroupName", FName),
        ("GestaltAccessoryPartList", TArray_FGestaltAccessoryPartEntry),
    ]

    FGestaltAccessoryMeshEntry._fields_ = [
        ("MeshName", FName),
        ("GestaltAccessoryGroupList", TArray_FGestaltAccessoryGroupEntry),
    ]

    FGPMCollection._fields_ = [("CollectionData", POINTER(UGestaltPartMatrices))]

    FActorToLookAt._fields_ = [
        ("Actor", POINTER(AActor)),
        ("Rating", c_float),
        ("EnteredTime", c_float),
        ("LastKnownDistance", c_float),
        ("StartTimeBeingLookedAt", c_float),
        ("CurrentlyBeingLookedAt", c_bool, 1),
    ]

    FHybridNavVisualizationVert._fields_ = [
        ("Vert", FVector),
        ("bValidSegmentEndpoint", c_bool, 1),
    ]

    FHybridNavVisualizationVertsForNavPoint._fields_ = [
        ("Verts", TArray_FHybridNavVisualizationVert),
        ("bWasDrawn", c_bool, 1),
        ("FirstVertDrawn", FVector),
        ("LastVertDrawn", FVector),
        ("VerticalReach", c_float),
    ]

    FHybridNavVisualizationPerfStats._fields_ = [
        ("VisualizationBuildingStartTime", c_int),
        ("VisualizationBuildingEndTime", c_int),
        ("CyclesBuildingVisualization", c_int),
        ("NumberOfNodesConsidered", c_int),
        ("NumberOfTraces", c_int),
        ("NumberOfEndPointAttempts", c_int),
        ("NumberOfSideAttempts", c_int),
        ("NumberOfNodesInVisualization", c_int),
        ("NumberOfPointsInVisualization", c_int),
        ("NumClosestNodesRequests", c_int),
        ("NumClosestNodeTests", c_int),
    ]

    FReplicatedCoordinatedEffect._fields_ = [("Effects", c_int), ("Targets", c_int)]

    FGBXNavMeshSpecialMoveConnection._fields_ = [
        ("SrcPoly", FGBXNavMeshPolyRef),
        ("SrcLocation", FVector),
        ("DestPoly", FGBXNavMeshPolyRef),
        ("DestLocation", FVector),
        ("MoveId", c_int),
    ]

    FIniLocFileEntry._fields_ = [
        ("Filename", FString),
        ("bIsUnicode", c_bool, 1),
        ("ReadState", c_ubyte),
    ]

    FBodyInstanceDataUnion._fields_ = [
        ("Data", FInstanceDataUnion),
        ("ParentAttachmentIdentifier", FName),
        ("AttachmentBaseInstanceDataIndex", c_int),
        ("SwitchIdentifier", c_ubyte),
    ]

    FBodyCompositionData._fields_ = [
        ("Attachments", TArray_FBodyInstanceDataUnion),
        ("MaxExpectedComponents", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("HasHomingTargetComponents", c_bool, 1),
    ]

    FInstancedStaticMeshInstanceData._fields_ = [
        ("Transform", FMatrix),
        ("LightmapUVBias", FVector2D),
        ("ShadowmapUVBias", FVector2D),
    ]

    FInstancedStaticMeshMappingInfo._fields_ = [
        ("Mapping", FPointer),
        ("LightMap", FPointer),
        ("LightmapTexture", POINTER(UTexture2D)),
        ("ShadowmapTexture", POINTER(UShadowMap2D)),
    ]

    AInterpActor_FCheckpointRecord._fields_ = [
        ("Location", FVector),
        ("Rotation", FRotator),
        ("CollisionType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("bHidden", c_bool, 1),
        ("bIsShutdown", c_bool, 1),
        ("bNeedsPositionReplication", c_bool, 1),
    ]

    FCurveEdEntry._fields_ = [
        ("CurveObject", POINTER(UObject)),
        ("CurveColor", FColor),
        ("CurveName", FString),
        ("bHideCurve", c_int),
        ("bColorCurve", c_int),
        ("bFloatingPointColorCurve", c_int),
        ("bClamp", c_int),
        ("ClampLow", c_float),
        ("ClampHigh", c_float),
    ]

    FCurveEdTab._fields_ = [
        ("TabName", FString),
        ("Curves", TArray_FCurveEdEntry),
        ("ViewStartInput", c_float),
        ("ViewEndInput", c_float),
        ("ViewStartOutput", c_float),
        ("ViewEndOutput", c_float),
    ]

    FAnimSetBakeAndPruneStatus._fields_ = [
        ("AnimSetName", FString),
        ("bReferencedButUnused", c_bool, 1),
        ("bSkipBakeAndPrune", c_bool, 1),
    ]

    FInterpEdSelKey._fields_ = [
        ("Group", POINTER(UInterpGroup)),
        ("Track", POINTER(UInterpTrack)),
        ("KeyIndex", c_int),
        ("UnsnappedPosition", c_float),
    ]

    FSubTrackGroup._fields_ = [
        ("GroupName", FString),
        ("TrackIndices", TArray_int),
        ("bIsCollapsed", c_bool, 1),
        ("bIsSelected", c_bool, 1),
    ]

    FSupportedSubTrackInfo._fields_ = [
        ("SupportedClass", POINTER(UClass)),
        ("SubTrackName", FString),
        ("GroupIndex", c_int),
    ]

    FAnimControlTrackKey._fields_ = [
        ("StartTime", c_float),
        ("AnimSeqName", FName),
        ("AnimStartOffset", c_float),
        ("AnimEndOffset", c_float),
        ("AnimPlayRate", c_float),
        ("bLooping", c_bool, 1),
        ("bReverse", c_bool, 1),
    ]

    FBoolTrackKey._fields_ = [("Time", c_float), ("Value", c_bool, 1)]

    FCommentTrackKey._fields_ = [("Time", c_float), ("Comment", FString)]

    FDirectorTrackCut._fields_ = [
        ("Time", c_float),
        ("TransitionTime", c_float),
        ("TargetCamGroup", FName),
    ]

    FEventTrackKey._fields_ = [("Time", c_float), ("EventName", FName)]

    FFaceFXTrackKey._fields_ = [
        ("StartTime", c_float),
        ("FaceFXGroupName", FString),
        ("FaceFXSeqName", FString),
    ]

    FFaceFXSoundCueKey._fields_ = [
        ("FaceFXSoundCue", POINTER(USoundCue)),
        ("FaceFXAkEvent", POINTER(UAkEvent)),
    ]

    FHeadTrackingKey._fields_ = [("Time", c_float), ("Action", c_ubyte)]

    FFloatMaterialParamMICData._fields_ = [
        ("MICs", TArray_UMaterialInstanceConstantPtr),
        ("MICResetFloats", TArray_float),
    ]

    FToggleTrackKey._fields_ = [("Time", c_float), ("ToggleAction", c_ubyte)]

    FVectorMaterialParamMICData._fields_ = [
        ("MICs", TArray_UMaterialInstanceConstantPtr),
        ("MICResetVectors", TArray_FVector),
    ]

    FVisibilityTrackKey._fields_ = [
        ("Time", c_float),
        ("Action", c_ubyte),
        ("ActiveCondition", c_ubyte),
    ]

    FInterpLookupPoint._fields_ = [("GroupName", FName), ("Time", c_float)]

    FInterpLookupTrack._fields_ = [("Points", TArray_FInterpLookupPoint)]

    FParticleReplayTrackKey._fields_ = [
        ("Time", c_float),
        ("Duration", c_float),
        ("ClipIDNumber", c_int),
    ]

    FSoundTrackKey._fields_ = [
        ("Time", c_float),
        ("Volume", c_float),
        ("Pitch", c_float),
        ("Sound", POINTER(USoundCue)),
    ]

    FTeleportKeyData._fields_ = [
        ("KeyTime", c_float),
        ("LocationKey", FVector),
        ("RotationKey", FRotator),
    ]

    FImpulseData._fields_ = [("Impulse", FVector), ("Source", FVector)]

    FLandscapeWeightmapUsage._fields_ = [
        ("ChannelUsage", POINTER(ULandscapeComponent) * 4)
    ]

    FLandscapeLayerInfo._fields_ = [
        ("LayerName", FName),
        ("Hardness", c_float),
        ("bNoWeightBlend", c_bool, 1),
    ]

    FLandscapeAddCollision._fields_ = []

    FWeightmapLayerAllocationInfo._fields_ = [
        ("LayerName", FName),
        ("WeightmapTextureIndex", c_ubyte),
        ("WeightmapTextureChannel", c_ubyte),
    ]

    FLensFlareElement._fields_ = [
        ("ElementName", FName),
        ("RayDistance", c_float),
        ("bIsEnabled", c_bool, 1),
        ("bUseSourceDistance", c_bool, 1),
        ("bNormalizeRadialDistance", c_bool, 1),
        ("bModulateColorBySource", c_bool, 1),
        ("Size", FVector),
        ("LFMaterials", TArray_UMaterialInterfacePtr),
        ("LFMaterialIndex", FRawDistributionFloat),
        ("Scaling", FRawDistributionFloat),
        ("AxisScaling", FRawDistributionVector),
        ("Rotation", FRawDistributionFloat),
        ("bOrientTowardsSource", c_bool, 1),
        ("Color", FRawDistributionVector),
        ("Alpha", FRawDistributionFloat),
        ("Offset", FRawDistributionVector),
        ("DistMap_Scale", FRawDistributionVector),
        ("DistMap_Color", FRawDistributionVector),
        ("DistMap_Alpha", FRawDistributionFloat),
    ]

    FLensFlareElementCurvePair._fields_ = [
        ("CurveName", FString),
        ("CurveObject", POINTER(UObject)),
    ]

    FLensFlareElementMaterials._fields_ = [
        ("ElementMaterials", TArray_UMaterialInterfacePtr)
    ]

    FLensFlareElementInstance._fields_ = []

    FLevelGridCellCoordinate._fields_ = [("X", c_int), ("Y", c_int), ("Z", c_int)]

    ALevelStreamingVolume_FCheckpointRecord._fields_ = [("bDisabled", c_bool, 1)]

    FPostProcessSettingsOverride._fields_ = [
        ("Settings", FPostProcessSettings),
        ("bBlendingIn", c_bool, 1),
        ("bBlendingOut", c_bool, 1),
        ("CurrentBlendInTime", c_float),
        ("CurrentBlendOutTime", c_float),
        ("BlendInDuration", c_float),
        ("BlendOutDuration", c_float),
        ("BlendStartTime", c_float),
    ]

    FWorldLightingOverride._fields_ = [
        ("DirectionOffset", FRotator),
        ("FadeInTime", c_float),
        ("FadeOutTime", c_float),
        ("RemainingFadeTime", c_float),
        ("RemovalRequested", c_bool, 1),
        ("pMovie", FPointer),
    ]

    FCurrentPostProcessVolumeInfo._fields_ = [
        ("LastSettings", FPostProcessSettings),
        ("LastVolumeUsed", POINTER(APostProcessVolume)),
        ("BlendStartTime", c_float),
        ("LastBlendTime", c_float),
    ]

    FSynchronizedActorVisibilityHistory._fields_ = [
        ("State", FPointer),
        ("CriticalSection", FPointer),
    ]

    FManufacturerGradeData._fields_ = [("DisplayName", FString)]

    FManufacturerCustomGradeWeightData._fields_ = [
        ("Manufacturer", POINTER(UManufacturerDefinition)),
        ("DefaultWeightIndex", c_ubyte),
    ]

    FExpressionInput._fields_ = [
        ("Expression", POINTER(UMaterialExpression)),
        ("Mask", c_int),
        ("MaskR", c_int),
        ("MaskG", c_int),
        ("MaskB", c_int),
        ("MaskA", c_int),
        ("GCC64_Padding", c_int),
    ]

    FCustomInput._fields_ = [("InputName", FString), ("Input", FExpressionInput)]

    FFontParameterValue._fields_ = [
        ("ParameterName", FName),
        ("FontValue", POINTER(UFont)),
        ("FontPage", c_int),
        ("ExpressionGUID", FGuid),
    ]

    FScalarParameterValue._fields_ = [
        ("ParameterName", FName),
        ("ParameterValue", c_float),
        ("ExpressionGUID", FGuid),
    ]

    FTextureParameterValue._fields_ = [
        ("ParameterName", FName),
        ("ParameterValue", POINTER(UTexture)),
        ("ExpressionGUID", FGuid),
    ]

    FVectorParameterValue._fields_ = [
        ("ParameterName", FName),
        ("ParameterValue", FLinearColor),
        ("ExpressionGUID", FGuid),
    ]

    FParameterValueOverTime._fields_ = [
        ("ExpressionGUID", FGuid),
        ("StartTime", c_float),
        ("ParameterName", FName),
        ("bLoop", c_bool, 1),
        ("bAutoActivate", c_bool, 1),
        ("CycleTime", c_float),
        ("bNormalizeTime", c_bool, 1),
        ("OffsetTime", c_float),
        ("bOffsetFromEnd", c_bool, 1),
    ]

    FFontParameterValueOverTime._fields_ = [
        ("ExpressionGUID", FGuid),
        ("StartTime", c_float),
        ("ParameterName", FName),
        ("bLoop", c_bool, 1),
        ("bAutoActivate", c_bool, 1),
        ("CycleTime", c_float),
        ("bNormalizeTime", c_bool, 1),
        ("OffsetTime", c_float),
        ("bOffsetFromEnd", c_bool, 1),
        ("FontValue", POINTER(UFont)),
        ("FontPage", c_int),
    ]

    FScalarParameterValueOverTime._fields_ = [
        ("ExpressionGUID", FGuid),
        ("StartTime", c_float),
        ("ParameterName", FName),
        ("bLoop", c_bool, 1),
        ("bAutoActivate", c_bool, 1),
        ("CycleTime", c_float),
        ("bNormalizeTime", c_bool, 1),
        ("OffsetTime", c_float),
        ("bOffsetFromEnd", c_bool, 1),
        ("ParameterValue", c_float),
        ("ParameterValueCurve", FInterpCurveFloat),
    ]

    FTextureParameterValueOverTime._fields_ = [
        ("ExpressionGUID", FGuid),
        ("StartTime", c_float),
        ("ParameterName", FName),
        ("bLoop", c_bool, 1),
        ("bAutoActivate", c_bool, 1),
        ("CycleTime", c_float),
        ("bNormalizeTime", c_bool, 1),
        ("OffsetTime", c_float),
        ("bOffsetFromEnd", c_bool, 1),
        ("ParameterValue", POINTER(UTexture)),
    ]

    FVectorParameterValueOverTime._fields_ = [
        ("ExpressionGUID", FGuid),
        ("StartTime", c_float),
        ("ParameterName", FName),
        ("bLoop", c_bool, 1),
        ("bAutoActivate", c_bool, 1),
        ("CycleTime", c_float),
        ("bNormalizeTime", c_bool, 1),
        ("OffsetTime", c_float),
        ("bOffsetFromEnd", c_bool, 1),
        ("ParameterValue", FLinearColor),
        ("ParameterValueCurve", FInterpCurveVector),
    ]

    FMorphNodeConn._fields_ = [
        ("ChildNodes", TArray_UMorphNodeBasePtr),
        ("ConnName", FName),
        ("DrawY", c_int),
    ]

    FBoneAngleMorph._fields_ = [("Angle", c_float), ("TargetWeight", c_float)]

    FBiasedGoalActor._fields_ = [("Goal", POINTER(AActor)), ("ExtraCost", c_int)]

    ANavMeshObstacle_FCheckpointRecord._fields_ = [("bEnabled", c_bool, 1)]

    FMMStats_Timer._fields_ = [("bInProgress", c_bool, 1), ("MSecs", FDouble)]

    FOnlineProfileSetting._fields_ = [
        ("Owner", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("ProfileSetting", FSettingsProperty),
    ]

    FUIDataProviderField._fields_ = [
        ("FieldTag", FName),
        ("FieldType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("FieldProviders", TArray_UUIDataProviderPtr),
    ]

    FRecentParty._fields_ = [
        ("PartyLeader", FUniqueNetId),
        ("PartyMembers", TArray_FUniqueNetId),
    ]

    FCurrentPlayerMet._fields_ = [
        ("TeamNum", c_int),
        ("Skill", c_int),
        ("NetId", FUniqueNetId),
    ]

    FOnlineStatsColumn._fields_ = [("ColumnNo", c_int), ("StatValue", FSettingsData)]

    FOnlineStatsRow._fields_ = [
        ("PlayerID", FUniqueNetId),
        ("Rank", FSettingsData),
        ("NickName", FString),
        ("Columns", TArray_FOnlineStatsColumn),
    ]

    FColumnMetaData._fields_ = [("Id", c_int), ("Name", FName), ("ColumnName", FString)]

    FParticleBurst._fields_ = [
        ("Count", c_int),
        ("CountLow", c_int),
        ("Time", c_float),
        ("CountDistribution", FRawDistributionFloat),
    ]

    FParticleCurvePair._fields_ = [
        ("CurveName", FString),
        ("CurveObject", POINTER(UObject)),
    ]

    FParticleRandomSeedInfo._fields_ = [
        ("ParameterName", FName),
        ("bGetSeedFromInstance", c_bool, 1),
        ("bInstanceSeedIsIndex", c_bool, 1),
        ("bResetSeedOnEmitterLooping", c_bool, 1),
        ("RandomSeeds", TArray_int),
    ]

    FBeamModifierOptions._fields_ = [
        ("bModify", c_bool, 1),
        ("bScale", c_bool, 1),
        ("bLock", c_bool, 1),
    ]

    FParticleEvent_GenerateInfo._fields_ = [
        ("Type", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Frequency", c_int),
        ("LowFreq", c_int),
        ("ParticleFrequency", c_int),
        ("FirstTimeOnly", c_bool, 1),
        ("LastTimeOnly", c_bool, 1),
        ("UseReflectedImpactVector", c_bool, 1),
        ("CustomName", FName),
        ("ParticleModuleEventsToSendToGame", TArray_UParticleModuleEventSendToGamePtr),
    ]

    FLocationBoneSocketInfo._fields_ = [("BoneSocketName", FName), ("Offset", FVector)]

    FOrbitOptions._fields_ = [
        ("bProcessDuringSpawn", c_bool, 1),
        ("bProcessDuringUpdate", c_bool, 1),
        ("bUseEmitterTime", c_bool, 1),
    ]

    FEmitterDynamicParameter._fields_ = [
        ("ParamName", FName),
        ("bUseEmitterTime", c_bool, 1),
        ("bSpawnTimeOnly", c_bool, 1),
        ("ValueMethod", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("bScaleVelocityByParamValue", c_bool, 1),
        ("ParamValue", FRawDistributionFloat),
    ]

    FBeamTargetData._fields_ = [("TargetName", FName), ("TargetPercentage", c_float)]

    FPhysXEmitterVerticalLodProperties._fields_ = [
        ("WeightForFifo", c_float),
        ("WeightForSpawnLod", c_float),
        ("SpawnLodRateVsLifeBias", c_float),
        ("RelativeFadeoutTime", c_float),
    ]

    FLODSoloTrack._fields_ = [("SoloEnableSetting", TArray_unsigned_char)]

    FParticleEmitterReplayFrame._fields_ = [
        ("EmitterType", c_int),
        ("OriginalEmitterIndex", c_int),
        ("FrameState", FPointer),
    ]

    FParticleSystemReplayFrame._fields_ = [
        ("Emitters", TArray_FParticleEmitterReplayFrame)
    ]

    FPersistentData._fields_ = [("VfTable", FPointer)]

    FPersistentSequenceEventData._fields_ = [
        ("VfTable", FPointer),
        ("TriggerCount", c_int),
    ]

    FPersistentSeqAct_InterpData._fields_ = [
        ("VfTable", FPointer),
        ("Position", c_float),
    ]

    APointLightToggleable_FCheckpointRecord._fields_ = [("bEnabled", c_bool, 1)]

    FActivateOp._fields_ = [
        ("ActivatorOp", POINTER(USequenceOp)),
        ("Op", POINTER(USequenceOp)),
        ("InputIdx", c_int),
        ("RemainingDelay", c_float),
    ]

    FQueuedActivationInfo._fields_ = [
        ("ActivatedEvent", POINTER(USequenceEvent)),
        ("InOriginator", POINTER(AActor)),
        ("InInstigator", POINTER(AActor)),
        ("ActivateIndices", TArray_int),
        ("bPushTop", c_bool, 1),
    ]

    FKCachedConvexDataElement._fields_ = [("ConvexElementData", TArray_unsigned_char)]

    FKCachedConvexData._fields_ = [
        ("CachedConvexElements", TArray_FKCachedConvexDataElement)
    ]

    FLinearDOFSetup._fields_ = [
        ("bLimited", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("LimitSize", c_float),
    ]

    FResourcePoolIdentityState._fields_ = [
        ("PoolDefinition", POINTER(UResourcePoolDefinition)),
        ("PoolGUID", c_ubyte),
    ]

    FRarelyChangedPoolState._fields_ = [
        ("ConsumptionRate", c_float),
        ("ActiveRegenerationRate", c_float),
        ("OnIdleRegenerationRate", c_float),
        ("OnIdleRegenerationDelay", c_float),
        ("PassiveRegenerationRate", c_float),
    ]

    FPathSizeInfo._fields_ = [
        ("Desc", FName),
        ("Radius", c_float),
        ("Height", c_float),
        ("CrouchHeight", c_float),
        ("PathColor", c_ubyte),
    ]

    FCameraCutInfo._fields_ = [("Location", FVector), ("TimeStamp", c_float)]

    FSavedTransform._fields_ = [("Location", FVector), ("Rotation", FRotator)]

    FLevelStreamingNameCombo._fields_ = [
        ("Level", POINTER(ULevelStreaming)),
        ("LevelName", FName),
    ]

    FSwitchClassInfo._fields_ = [("ClassName", FName), ("bFallThru", c_ubyte)]

    FSwitchObjectCase._fields_ = [
        ("ObjectValue", POINTER(UObject)),
        ("bFallThru", c_bool, 1),
        ("bDefaultValue", c_bool, 1),
    ]

    FShadowRelevanceSizePair._fields_ = [
        ("Size", c_float),
        ("DynamicShadowCastRelevance", c_ubyte),
        ("OverrideStaticShadowSettings", c_ubyte),
    ]

    FSoftBodyTetraLink._fields_ = [("Index", c_int), ("Bary", FVector)]

    FSoftBodySpecialBoneInfo._fields_ = [
        ("BoneName", FName),
        ("BoneType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("AttachedVertexIndices", TArray_int),
    ]

    FClothSpecialBoneInfo._fields_ = [
        ("BoneName", FName),
        ("BoneType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("AttachedVertexIndices", TArray_int),
    ]

    FTriangleSortSettings._fields_ = [
        ("TriangleSorting", c_ubyte),
        ("CustomLeftRightAxis", c_ubyte),
        ("Unknown1", c_ubyte * 0x2),
        ("CustomLeftRightBoneName", FName),
    ]

    FSkeletalMeshLODInfo._fields_ = [
        ("DisplayFactor", c_float),
        ("LODHysteresis", c_float),
        ("LODMaterialMap", TArray_int),
        ("bEnableShadowCasting", TArray_BOOL),
        ("TriangleSorting", TArray_unsigned_char),
        ("TriangleSortSettings", TArray_FTriangleSortSettings),
        ("bDisableCompressions", c_bool, 1),
    ]

    FBoneMirrorExport._fields_ = [
        ("BoneName", FName),
        ("SourceBoneName", FName),
        ("BoneFlipAxis", c_ubyte),
    ]

    FBoneMirrorInfo._fields_ = [("SourceIndex", c_int), ("BoneFlipAxis", c_ubyte)]

    FSkelMeshActorControlTarget._fields_ = [
        ("ControlName", FName),
        ("TargetActor", POINTER(AActor)),
    ]

    ASkeletalMeshActor_FCheckpointRecord._fields_ = [
        ("bReplicated", c_bool, 1),
        ("bHidden", c_bool, 1),
        ("bSavedPosition", c_bool, 1),
        ("Location", FVector),
        ("Rotation", FRotator),
    ]

    FSkelMaterialSetterDatum._fields_ = [
        ("MaterialIndex", c_int),
        ("TheMaterial", POINTER(UMaterialInterface)),
    ]

    FSoundClassEditorData._fields_ = [("NodePosX", c_int), ("NodePosY", c_int)]

    FSoundClassProperties._fields_ = [
        ("Volume", c_float),
        ("Pitch", c_float),
        ("StereoBleed", c_float),
        ("LFEBleed", c_float),
        ("VoiceCenterChannelVolume", c_float),
        ("RadioFilterVolume", c_float),
        ("RadioFilterVolumeThreshold", c_float),
        ("bApplyEffects", c_bool, 1),
        ("bAlwaysPlay", c_bool, 1),
        ("bIsUISound", c_bool, 1),
        ("bIsMusic", c_bool, 1),
        ("bReverb", c_bool, 1),
        ("bCenterChannelOnly", c_bool, 1),
        ("bIsDialog", c_bool, 1),
        ("bIsAmbience", c_bool, 1),
    ]

    FSoundNodeEditorData._fields_ = [("NodePosX", c_int), ("NodePosY", c_int)]

    FSoundClassAdjuster._fields_ = [
        ("SoundClassName", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("SoundClass", FName),
        ("VolumeAdjuster", c_float),
        ("PitchAdjuster", c_float),
        ("bApplyToChildren", c_bool, 1),
        ("VoiceCenterChannelVolumeAdjuster", c_float),
    ]

    FAudioEQEffect._fields_ = [
        ("RootTime", FDouble),
        ("HFFrequency", c_float),
        ("HFGain", c_float),
        ("MFCutoffFrequency", c_float),
        ("MFBandwidth", c_float),
        ("MFGain", c_float),
        ("LFFrequency", c_float),
        ("LFGain", c_float),
    ]

    FRecognisableWord._fields_ = [
        ("Id", c_int),
        ("ReferenceWord", FString),
        ("PhoneticWord", FString),
    ]

    FRecogVocabulary._fields_ = [
        ("WhoDictionary", TArray_FRecognisableWord),
        ("WhatDictionary", TArray_FRecognisableWord),
        ("WhereDictionary", TArray_FRecognisableWord),
        ("VocabName", FString),
        ("VocabData", TArray_unsigned_char),
        ("WorkingVocabData", TArray_unsigned_char),
    ]

    FRecogUserData._fields_ = [
        ("ActiveVocabularies", c_int),
        ("UserData", TArray_unsigned_char),
    ]

    FSplineConnection._fields_ = [
        ("SplineComponent", POINTER(USplineComponent)),
        ("ConnectTo", POINTER(ASplineActor)),
    ]

    FSplineMeshParams._fields_ = [
        ("StartPos", FVector),
        ("StartTangent", FVector),
        ("StartScale", FVector2D),
        ("StartRoll", c_float),
        ("StartOffset", FVector2D),
        ("EndPos", FVector),
        ("EndTangent", FVector),
        ("EndScale", FVector2D),
        ("EndRoll", c_float),
        ("EndOffset", FVector2D),
    ]

    ASpotLightToggleable_FCheckpointRecord._fields_ = [("bEnabled", c_bool, 1)]

    FSMMaterialSetterDatum._fields_ = [
        ("MaterialIndex", c_int),
        ("TheMaterial", POINTER(UMaterialInterface)),
    ]

    FVehicleState._fields_ = [
        ("RBState", FRigidBodyState),
        ("Unknown1", c_ubyte * 0x4),
        ("ServerBrake", c_ubyte),
        ("ServerGas", c_ubyte),
        ("ServerSteering", c_ubyte),
        ("ServerRise", c_ubyte),
        ("bServerHandbrake", c_bool, 1),
        ("ServerView", c_int),
    ]

    FSearchState._fields_ = [
        ("Subject", FScriptInterface),
        ("Type", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("ListIndex", c_int),
        ("CurrentList", TArray_FScriptInterface),
    ]

    FTerrainHeight._fields_ = []

    FTerrainInfoData._fields_ = []

    FTerrainLayer._fields_ = [
        ("Name", FString),
        ("Setup", POINTER(UTerrainLayerSetup)),
        ("AlphaMapIndex", c_int),
        ("Highlighted", c_bool, 1),
        ("WireframeHighlighted", c_bool, 1),
        ("Hidden", c_bool, 1),
        ("HighlightColor", FColor),
        ("WireframeColor", FColor),
    ]

    FTerrainDecorationInstance._fields_ = [
        ("Component", POINTER(UPrimitiveComponent)),
        ("X", c_float),
        ("Y", c_float),
        ("Scale", c_float),
        ("Yaw", c_int),
    ]

    FTerrainDecoration._fields_ = [
        ("Factory", POINTER(UPrimitiveComponentFactory)),
        ("MinScale", c_float),
        ("MaxScale", c_float),
        ("Density", c_float),
        ("SlopeRotationBlend", c_float),
        ("RandSeed", c_int),
        ("Instances", TArray_FTerrainDecorationInstance),
    ]

    FTerrainDecoLayer._fields_ = [
        ("Name", FString),
        ("Decorations", TArray_FTerrainDecoration),
        ("AlphaMapIndex", c_int),
    ]

    FAlphaMap._fields_ = []

    ATerrain_FTerrainWeightedMaterial._fields_ = []

    FSelectedTerrainVertex._fields_ = [("X", c_int), ("Y", c_int), ("Weight", c_int)]

    FTerrainMaterialResource._fields_ = []

    FCachedTerrainMaterialArray._fields_ = [("CachedMaterials", TArray_FPointer)]

    FTerrainBVTree._fields_ = [("Nodes", TArray_int)]

    FTerrainkDOPTree._fields_ = [("Nodes", TArray_int), ("Triangles", TArray_int)]

    FFilterLimit._fields_ = [
        ("Enabled", c_bool, 1),
        ("Base", c_float),
        ("NoiseScale", c_float),
        ("NoiseAmount", c_float),
    ]

    FTerrainFilteredMaterial._fields_ = [
        ("UseNoise", c_bool, 1),
        ("NoiseScale", c_float),
        ("NoisePercent", c_float),
        ("MinHeight", FFilterLimit),
        ("MaxHeight", FFilterLimit),
        ("MinSlope", FFilterLimit),
        ("MaxSlope", FFilterLimit),
        ("Alpha", c_float),
        ("Material", POINTER(UTerrainMaterial)),
    ]

    FTerrainFoliageMesh._fields_ = [
        ("StaticMesh", POINTER(UStaticMesh)),
        ("Material", POINTER(UMaterialInterface)),
        ("Density", c_int),
        ("MaxDrawRadius", c_float),
        ("MinTransitionRadius", c_float),
        ("MinScale", c_float),
        ("MaxScale", c_float),
        ("MinUniformScale", c_float),
        ("MaxUniformScale", c_float),
        ("MinThinningRadius", c_float),
        ("Seed", c_int),
        ("SwayScale", c_float),
        ("AlphaMapThreshold", c_float),
        ("SlopeRotationBlend", c_float),
    ]

    UTerrainWeightMapTexture_FTerrainWeightedMaterial._fields_ = []

    FSourceTexture2DRegion._fields_ = [
        ("OffsetX", c_int),
        ("OffsetY", c_int),
        ("SizeX", c_int),
        ("SizeY", c_int),
        ("Texture2D", POINTER(UTexture2D)),
    ]

    ATrigger_FCheckpointRecord._fields_ = [("bCollideActors", c_bool, 1)]

    FLevelStreamingData._fields_ = [
        ("bShouldBeLoaded", c_bool, 1),
        ("bShouldBeVisible", c_bool, 1),
        ("bShouldBlockOnLoad", c_bool, 1),
        ("Level", POINTER(ULevelStreaming)),
    ]

    FPlayerStorageArrayProvider._fields_ = [
        ("PlayerStorageId", c_int),
        ("PlayerStorageName", FName),
        ("Provider", POINTER(UUIDataProvider_OnlinePlayerStorageArray)),
    ]

    FSettingsArrayProvider._fields_ = [
        ("SettingsId", c_int),
        ("SettingsName", FName),
        ("Provider", POINTER(UUIDataProvider_SettingsArray)),
    ]

    FDynamicResourceProviderDefinition._fields_ = [
        ("ProviderTag", FName),
        ("ProviderClassName", FString),
        ("ProviderClass", POINTER(UClass)),
    ]

    FGameResourceDataProvider._fields_ = [
        ("ProviderTag", FName),
        ("ProviderClassName", FString),
        ("bExpandProviders", c_bool, 1),
        ("ProviderClass", POINTER(UClass)),
    ]

    FUIInputKeyData._fields_ = [
        ("InputKeyData", FRawInputKeyEventData),
        ("ButtonFontMarkupString", FString),
    ]

    FUIDataStoreInputAlias._fields_ = [
        ("AliasName", FName),
        ("PlatformInputKeys", FUIInputKeyData * 3),
    ]

    FGameSearchCfg._fields_ = [
        ("GameSearchClass", POINTER(UClass)),
        ("DefaultGameSettingsClass", POINTER(UClass)),
        ("SearchResultsProviderClass", POINTER(UClass)),
        ("DesiredSettingsProvider", POINTER(UUIDataProvider_Settings)),
        ("SearchResults", TArray_UUIDataProvider_SettingsPtr),
        ("Search", POINTER(UOnlineGameSearch)),
        ("SearchName", FName),
    ]

    FGameSettingsCfg._fields_ = [
        ("GameSettingsClass", POINTER(UClass)),
        ("Provider", POINTER(UUIDataProvider_Settings)),
        ("GameSettings", POINTER(UOnlineGameSettings)),
        ("SettingsName", FName),
    ]

    FRankMetaData._fields_ = [("RankName", FName), ("RankColumnName", FString)]

    FPlayerNickMetaData._fields_ = [
        ("PlayerNickName", FName),
        ("PlayerNickColumnName", FString),
    ]

    FUIMenuInputMap._fields_ = [
        ("FieldName", FName),
        ("Set", FName),
        ("MappedText", FString),
    ]

    FUIKeyRepeatData._fields_ = [
        ("CurrentRepeatKey", FName),
        ("NextRepeatTime", FDouble),
    ]

    FUIAxisEmulationData._fields_ = [
        ("CurrentRepeatKey", FName),
        ("NextRepeatTime", FDouble),
        ("bEnabled", c_bool, 1),
    ]

    FSoundEventMapping._fields_ = [
        ("SoundEventName", FName),
        ("SoundToPlay", POINTER(USoundCue)),
    ]

    FUIStatData._fields_ = [
        ("bDisplayAsModifierOnly", c_bool, 1),
        ("AttributeStyle", c_ubyte),
        ("SupplementalAttributeStyle", c_ubyte),
        ("StatCombinationMethod", c_ubyte),
        ("Unknown1", c_ubyte * 0x1),
        ("Attribute", POINTER(UAttributeDefinition)),
        ("ConstraintAttribute", POINTER(UAttributeDefinition)),
        ("SupplementalAttributeExpression", FAttributeExpressionData),
        ("SupplementalAttributeToAppend", POINTER(UAttributeDefinition)),
    ]

    FAttributeSlotEffectData._fields_ = [
        ("SlotName", FName),
        ("bExternalSlot", c_bool, 1),
        ("bRunEffectsAsSkill", c_bool, 1),
        ("AttributeToModify", POINTER(UAttributeDefinition)),
        ("ConstraintAttribute", POINTER(UAttributeDefinition)),
        ("ModifierType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("BaseModifierValue", FAttributeInitializationData),
        ("PerGradeUpgrade", FAttributeInitializationData),
        ("bIncludeInFunStats", c_bool, 1),
        ("bIncludeAlliesAsTarget", c_bool, 1),
        ("bEnforceMinimumGrade", c_bool, 1),
        ("bEnforceMaximumGrade", c_bool, 1),
        ("MinimumGrade", c_int),
        ("MaximumGrade", c_int),
        ("TargetInstanceDataName", FName),
    ]

    FAttributeSlotUpgradeData._fields_ = [
        ("SlotName", FName),
        ("GradeIncrease", c_int),
        ("bActivateSlot", c_bool, 1),
    ]

    FInventorySerialNumber._fields_ = [
        ("Buffer", c_ubyte * 40),
        ("State", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("RunningCounter", c_int),
        ("EncryptedLength", c_int),
    ]

    FAttributeSlotData._fields_ = [
        ("SlotName", FName),
        ("bExternalSlot", c_bool, 1),
        ("bRunEffectsAsSkill", c_bool, 1),
        ("bActivated", c_bool, 1),
        ("bIncludeAlliesAsTarget", c_bool, 1),
        ("bIncludeInModifierText", c_bool, 1),
        ("bEnforceMinimumGrade", c_bool, 1),
        ("bEnforceMaximumGrade", c_bool, 1),
        ("MinimumGrade", c_int),
        ("MaximumGrade", c_int),
        ("TargetInstanceDataName", FName),
        ("EffectGrade", c_int),
        ("AttributeToModify", POINTER(UAttributeDefinition)),
        ("ConstraintAttribute", POINTER(UAttributeDefinition)),
        ("ModifierType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("BaseModifierValue", FAttributeInitializationData),
        ("PerGradeUpgrade", FAttributeInitializationData),
        ("ComputedModifierValue", c_float),
    ]

    FWorldEventSource._fields_ = [
        ("AkEvent", POINTER(UAkEvent)),
        ("GroupActor", POINTER(AActor)),
        ("AkComponents", TArray_UAkComponentPtr),
        ("Sources", TArray_AActorPtr),
        ("LastUpdateTime", c_float),
        ("bNeedsUpdate", c_bool, 1),
    ]
