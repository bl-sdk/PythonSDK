from ctypes import *
import BL2SDK


class FAchievementUnlockData(Structure):
    _fields_ = [
        ("UnlockType", c_ubyte),
        ("Achievement", c_ubyte),
        ("Unknown1", c_ubyte, 0x2),
        ("StringData", FString),
        ("IntData", c_int),
    ]


class FPlayerRecentDamageEventData(Structure):
    _fields_ = [
        ("DamageTypeDefinition", POINTER(UWillowDamageTypeDefinition)),
        ("DamageLocation", FVector),
        ("TotalDamageForDamageType", c_float),
        ("DamageEventFlags", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("bDirty", c_bool, 1),
        ("", c_ulong, 0),
        ("DamageTime", c_float),
        ("DamagedActor", POINTER(AActor)),
    ]


class FVehicleCrewMappingStruct(Structure):
    _fields_ = [("VehicleArchetypeName", FName), ("AnimSet", POINTER(UAnimSet))]


class FInjuredLoopOverride(Structure):
    _fields_ = [
        ("NameTag", POINTER(UWillowDialogNameTag)),
        ("StartAkEvent", POINTER(UAkEvent)),
    ]


class FBreathingLoopInfo(Structure):
    _fields_ = [
        ("Condition", POINTER(UExpressionEvaluator)),
        ("StartAkEvent", POINTER(UAkEvent)),
        ("StopAkEvent", POINTER(UAkEvent)),
    ]


class FCustomCringeData(Structure):
    _fields_ = [
        ("bDOT", c_bool, 1),
        ("", c_ulong, 0),
        ("DamageType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("Cringes", TArray_USpecialMove_CringePtr),
    ]


class FPainDialogLine(Structure):
    _fields_ = [
        ("DET_Pain", POINTER(UGearboxDialogEventTag)),
        ("DamageThresholdPct", c_float),
        ("ChanceToPlay", c_float),
        ("AkEvent", POINTER(UAkEvent)),
        ("bDeathSound", c_bool, 1),
        ("bCriticalHitSound", c_bool, 1),
        ("bRanOverSound", c_bool, 1),
        ("bGoreTechDeathSound", c_bool, 1),
        ("", c_ulong, 0),
        ("FlinchAnimType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("FlinchImpulseStrength", c_float),
        ("PainBehaviors", TArray_UBehaviorBasePtr),
    ]


class FExtraWeaponSlot(Structure):
    _fields_ = [
        ("Socket", FName),
        ("bShowWeaponMesh", c_bool, 1),
        ("", c_ulong, 0),
        ("Mesh", POINTER(USkeletalMeshComponent)),
        ("MuzzleFlash", POINTER(UParticleSystemComponent)),
        ("AltMuzzleFlashes", TArray_UParticleSystemComponentPtr),
        ("MuzzleFlashLight", POINTER(UWillowPointLight)),
    ]


class FTurnData(Structure):
    _fields_ = [
        ("MinRepeatTime", c_float),
        ("Left", POINTER(USpecialMove_Turn)),
        ("Right", POINTER(USpecialMove_Turn)),
        ("Left", POINTER(USpecialMove_Turn)),
        ("Right", POINTER(USpecialMove_Turn)),
        ("Left", POINTER(USpecialMove_Turn)),
        ("Right", POINTER(USpecialMove_Turn)),
    ]


class FCombatZone(Structure):
    _fields_ = [("Index", c_int), ("Bounds", FBox)]


class FCoverExposureData(Structure):
    _fields_ = [
        ("bExposedUp", c_bool, 1),
        ("bExposedLeft", c_bool, 1),
        ("bExposedRight", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FCombatPointDebugData(Structure):
    _fields_ = [
        ("bBest", c_bool, 1),
        ("", c_ulong, 0),
        ("Score", c_float),
        ("Location", FVector),
    ]


class FCombatPointData(Structure):
    _fields_ = [
        ("Slot", c_int),
        ("Location", FVector),
        ("Actor", FActorReference),
        ("ConstraintType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("ConstraintTags", TArray_UPopulationSpawnedActorTagDefinitionPtr),
        ("bClaimed", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FCombatZoneSearchData(Structure):
    _fields_ = [
        ("ZoneMoveDist", c_float),
        ("ZoneTimeLimit", FAIRange),
        ("TargetRange", FAIRange),
        ("MinHeight", c_float),
        ("bCanFail", c_bool, 1),
        ("", c_ulong, 0),
        ("LineOfSight", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("LineOfSightTimeLimit", FAIRange),
    ]


class FCombatPointSearchData(Structure):
    _fields_ = [
        ("ZoneMoveDist", c_float),
        ("ZoneTimeLimit", FAIRange),
        ("TargetRange", FAIRange),
        ("MinHeight", c_float),
        ("bCanFail", c_bool, 1),
        ("", c_ulong, 0),
        ("LineOfSight", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("LineOfSightTimeLimit", FAIRange),
        ("bUseCover", c_bool, 1),
        ("", c_ulong, 0),
        ("PointRadius", c_float),
    ]


class FPerchAnimData(Structure):
    _fields_ = [
        ("Key", POINTER(UPopulationBodyTag)),
        ("StartAnim", POINTER(USpecialMove_Perch)),
        ("StopAnim", POINTER(USpecialMove_Perch)),
        ("IdleAnim", POINTER(USpecialMove_PerchLoop)),
    ]


class FWillowCoverState(Structure):
    _fields_ = [
        ("Action", FName),
        ("Cover", FCoverInfo),
        ("Stance", POINTER(UWillowCoverStanceDefinition)),
    ]


class FEnemyBreadCrumbStruct(Structure):
    _fields_ = [("pos", FVector), ("CombatArea", POINTER(AWillowVehicleCombatArea))]


class FSplineAnimPathData(Structure):
    _fields_ = [
        ("StartSpline", POINTER(ASplineActor)),
        ("AnimSeqName", FName),
        ("bReverse", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FTrajectoryData(Structure):
    _fields_ = [
        ("Speed", c_float),
        ("AnglePct", c_float),
        ("Angle", c_float),
        ("Error", c_float),
        ("Offset", FVector),
        ("PredictDistMax", c_float),
    ]


class FBeamDamageData(Structure):
    _fields_ = [
        ("Momentum", c_float),
        ("Amount", c_float),
        ("Radius", c_float),
        ("Source", POINTER(UClass)),
        ("TypeDefinition", POINTER(UDamageTypeDefinition)),
        ("BarrelSourceTime", c_float),
        ("PlantSourceTime", c_float),
        ("DamageCauser", FScriptInterface),
        ("bCanDamageFriendlies", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FServerBeamState(Structure):
    _fields_ = [
        ("bDeleteMe", c_bool, 1),
        ("", c_ulong, 0),
        ("DamageData", FBeamDamageData),
        ("DamageInstigator", POINTER(AController)),
        ("StartTime", c_float),
        ("LockTime", c_float),
        ("NextTraceTime", c_float),
        ("BeamNetUpdateTime", c_float),
        ("LastDamageApplicationTime", c_float),
        ("LastDamagedActor", POINTER(AActor)),
        ("NextRandomBoneTime", c_float),
        ("ParentBeamIndex", c_int),
        ("ChildBeamsIndicies", TArray_int),
    ]


class FBeamLocationData(Structure):
    _fields_ = [
        ("Actor", POINTER(AActor)),
        ("Socket", FName),
        ("Offset", FVector),
        ("bUseWeapon", c_bool, 1),
        ("", c_ulong, 0),
        ("WorldBody", FScriptInterface),
    ]


class FReplicatedBeamState(Structure):
    _fields_ = [
        ("bEnabled", c_bool, 1),
        ("", c_ulong, 0),
        ("FireDef", POINTER(UFiringModeDefinition)),
        ("ImpactDefinition", POINTER(UImpactDefinition)),
        ("bLocked", c_bool, 1),
        ("", c_ulong, 0),
        ("SourceData", FBeamLocationData),
        ("TargetData", FBeamLocationData),
        ("bPlayImpactAudio", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FBeamState(Structure):
    _fields_ = [
        ("BeamIndex", c_int),
        ("ServerOnlyState", FServerBeamState),
        ("CoreBeamState", FReplicatedBeamState),
        ("PartRef", POINTER(UParticleSystemComponent)),
        ("BeamAudioInfo", FAkPlayingInfo),
        ("BeamImpactAudioInfo", FAkPlayingInfo),
        ("CurrentStartPoint", FVector),
        ("CurrentEndPoint", FVector),
        ("CurrentStartTangent", FVector),
        ("CurrentEndTangent", FVector),
        ("CurrentDirection", FRotator),
        ("LastImpactLocation", FVector),
    ]


class FLightProjectile(Structure):
    _fields_ = [
        ("bEnabled", c_bool, 1),
        ("bPendingAdd", c_bool, 1),
        ("bNeedsConstantTrace", c_bool, 1),
        ("bStartParticleTracerAtWeapon", c_bool, 1),
        ("bActorReflected", c_bool, 1),
        ("bEnemyPenetrating", c_bool, 1),
        ("bOvercharged", c_bool, 1),
        ("bRicochetTowardsEnemy", c_bool, 1),
        ("bPenetrateUsingOriginalTraceDirection", c_bool, 1),
        ("", c_ulong, 0),
        ("Location", FVector),
        ("PartLocation", FVector),
        ("Velocity", FVector),
        ("PartRef", POINTER(UParticleSystemComponent)),
        ("AudioRef", FAkPlayingInfo),
        ("FireDef", POINTER(UFiringModeDefinition)),
        ("StartTime", c_float),
        ("NumRicochets", c_int),
        ("LastTraceTime", c_float),
        ("LastSafeTraceStartLocation", FVector),
        ("LastHitActor", POINTER(AActor)),
        ("Instigator", POINTER(APawn)),
        ("Damage", c_float),
        ("FiringPatternIdx", c_int),
        ("BulletFromClipType", c_ubyte),
        ("bHitWater", c_ubyte),
        ("PenetrationCount", c_ubyte),
        ("Id", c_ubyte),
        ("StartTrace", FVector),
        ("EndTrace", FVector),
        ("OriginalStartTrace", FVector),
    ]


class FReplicatedLightProjectile(Structure):
    _fields_ = [
        ("bEnabled", c_bool, 1),
        ("bStartParticleTracerAtWeapon", c_bool, 1),
        ("bActorReflected", c_bool, 1),
        ("bEnemyPenetrating", c_bool, 1),
        ("bOvercharged", c_bool, 1),
        ("bRicochetTowardsEnemy", c_bool, 1),
        ("", c_ulong, 0),
        ("Id", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("StartTrace", FVector),
        ("EndTrace", FVector),
        ("ReflectSpeed", c_float),
        ("FireDef", POINTER(UFiringModeDefinition)),
        ("FiringPatternIdx", c_int),
        ("Instigator", POINTER(APawn)),
        ("StartTime", c_float),
    ]


class FReplicatedBeamEndPoints(Structure):
    _fields_ = [("StartPoint", FVector), ("EndPoint", FVector)]


class FSwoopAttackData(Structure):
    _fields_ = [
        ("bTriggered", c_bool, 1),
        ("bCacheTargetLocation", c_bool, 1),
        ("", c_ulong, 0),
        ("Distance", c_float),
    ]


class FActionSkillCustomEventReplicationData(Structure):
    _fields_ = [
        ("EventCountForReplication", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("EventName", FName),
    ]


class FCachedWeaponInfo(Structure):
    _fields_ = [
        ("CachedClipSize", c_int),
        ("CachedAmmoInClip", c_int),
        ("CachedAmmoNotInClip", c_int),
        ("CachedWeaponIsReloading", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("CachedWeaponType", FString),
        ("CachedWeaponTypeDLCClip", POINTER(USwfMovie)),
        ("IsReloadIconDisplayed", c_int),
        ("IsInteractionIconDisplayed", c_int),
    ]


class FWillowStatProperty(Structure):
    _fields_ = [
        ("Id", FName),
        ("Data", FSettingsData),
        ("MaxData", FSettingsData),
        ("ChallengeBaseData", FSettingsData),
        ("OnlineId", c_int),
        ("bSparkStatDirty", c_bool, 1),
        ("bSparkStatInFlight", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FAttributeCategory(Structure):
    _fields_ = [("Category", FString), ("Attributes", TArray_FAttributeBaseValueData)]


class FDeathByWeaponStatID(Structure):
    _fields_ = [
        ("DamageCauserType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("StatId", FName),
    ]


class FDeathByDamageTypeStatID(Structure):
    _fields_ = [("DamageType", c_ubyte), ("Unknown1", c_ubyte, 0x3), ("StatId", FName)]


class FDeathByWeaponDamageStatID(Structure):
    _fields_ = [
        ("DamageType", c_ubyte),
        ("DamageCauserType", c_ubyte),
        ("Unknown1", c_ubyte, 0x2),
        ("StatId", FName),
    ]


class FInteractionIconWithOverrides(Structure):
    _fields_ = [
        ("IconDef", POINTER(UInteractionIconDefinition)),
        ("OverrideIconDef", POINTER(UInteractionIconDefinition)),
        ("bOverrideIcon", c_bool, 1),
        ("bOverrideAction", c_bool, 1),
        ("bOverrideText", c_bool, 1),
        ("", c_ulong, 0),
        ("bCostsToUse", c_ubyte),
        ("CostsCurrencyType", c_ubyte),
        ("Unknown1", c_ubyte, 0x2),
        ("CostsAmount", c_int),
    ]


class FServerDynamicRadarIconData(Structure):
    _fields_ = [
        ("SourceObject", POINTER(UObject)),
        ("Duration", c_float),
        ("StartTime", c_float),
    ]


class FRemoteDynamicRadarIconData(Structure):
    _fields_ = [
        ("IconType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("Location", FVector),
        ("bActive", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FAITransformedName(Structure):
    _fields_ = [
        ("Type", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("TransformedName", FString),
        ("TransformedKillStat", FName),
    ]


class FItemPoolInfo(Structure):
    _fields_ = [
        ("ItemPool", POINTER(UItemPoolDefinition)),
        ("PoolProbability", FAttributeInitializationData),
    ]


class FAIPawnPlaythroughData(Structure):
    _fields_ = [
        ("PlayThrough", int),
        ("DisplayName", FString),
        ("TransformedNames", TArray_FAITransformedName),
        ("OnSpawnCustomizations", TArray_UBehaviorBasePtr),
        ("AttributeStartingValues", TArray_FAttributeBaseValueData),
        ("CustomItemPoolIncludedLists", TArray_UItemPoolListDefinitionPtr),
        ("CustomItemPoolList", TArray_FItemPoolInfo),
        ("MeshMaterial", POINTER(UMaterialInstance)),
    ]


class FAIPawnGradeModifierData(Structure):
    _fields_ = [
        ("CustomAIPawnArchetype", POINTER(AWillowAIPawn)),
        ("DisplayName", FString),
        ("ExpLevel", int),
        ("OnSpawnCustomizations", TArray_UBehaviorBasePtr),
        ("AttributeStartingValues", TArray_FAttributeBaseValueData),
        ("CustomItemPoolIncludedLists", TArray_UItemPoolListDefinitionPtr),
        ("CustomItemPoolList", TArray_FItemPoolInfo),
        ("TransformedNames", TArray_FAITransformedName),
    ]


class FAIPawnGameStageGradeWeightData(Structure):
    _fields_ = [
        ("GameStageRequirement", FGameStageRangeData),
        ("MinSpawnProbabilityModifier", FAttributeInitializationData),
        ("MaxSpawnProbabilityModifier", FAttributeInitializationData),
        ("GradeModifiers", FAIPawnGradeModifierData),
    ]


class FCellInfo(Structure):
    _fields_ = [
        ("AbsolutePosition", FVector),
        ("Width", c_float),
        ("Height", c_float),
        ("CellName", FString),
    ]


class FCellContentData(Structure):
    _fields_ = [
        ("Tex", POINTER(UTexture)),
        ("Mesh", POINTER(UMeshComponent)),
        ("Inv", POINTER(AWillowInventory)),
        ("ExtArrayIndex", c_int),
    ]


class FPanelInfo(Structure):
    _fields_ = [
        ("PanelName", FName),
        ("PanelFocused", FVector),
        ("PanelUnfocused", FVector),
        ("PanelCompare", FVector),
        ("PanelBackground", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("CellWidth", c_int),
        ("CellHeight", c_int),
        ("TextureWidth", c_int),
        ("TextureHeight", c_int),
    ]


class FCardInfoRelativeToPanel(Structure):
    _fields_ = [
        ("PanelName", FName),
        ("ComparePosition", FVector),
        ("CompareScale", c_float),
    ]


class FCardInfo(Structure):
    _fields_ = [
        ("CardName", FName),
        ("CellWidth", c_int),
        ("CellHeight", c_int),
        ("TextureWidth", c_int),
        ("TextureHeight", c_int),
        ("MainPlayerLinkageName", FString),
        ("SplitPlayerLinkageName", FString),
        ("CompareSettings", TArray_FCardInfoRelativeToPanel),
    ]


class FWeaponAccessorySetup(Structure):
    _fields_ = [
        ("WeaponArchetypeName", FName),
        ("AccessoryDefinition", POINTER(UGestaltSkeletalMeshDefinition)),
        ("AccessoryTransforms", POINTER(UGestaltPartMatrices)),
        ("AccessoryParts", TArray_FGestaltPartPermutation),
    ]


class FWeaponDefinitionData(Structure):
    _fields_ = [
        ("WeaponTypeDefinition", POINTER(UWeaponTypeDefinition)),
        ("BalanceDefinition", POINTER(UInventoryBalanceDefinition)),
        ("ManufacturerDefinition", POINTER(UManufacturerDefinition)),
        ("ManufacturerGradeIndex", c_int),
        ("BodyPartDefinition", POINTER(UWeaponPartDefinition)),
        ("GripPartDefinition", POINTER(UWeaponPartDefinition)),
        ("BarrelPartDefinition", POINTER(UWeaponPartDefinition)),
        ("SightPartDefinition", POINTER(UWeaponPartDefinition)),
        ("StockPartDefinition", POINTER(UWeaponPartDefinition)),
        ("ElementalPartDefinition", POINTER(UWeaponPartDefinition)),
        ("Accessory1PartDefinition", POINTER(UWeaponPartDefinition)),
        ("Accessory2PartDefinition", POINTER(UWeaponPartDefinition)),
        ("MaterialPartDefinition", POINTER(UWeaponPartDefinition)),
        ("PrefixPartDefinition", POINTER(UWeaponNamePartDefinition)),
        ("TitlePartDefinition", POINTER(UWeaponNamePartDefinition)),
        ("GameStage", c_int),
        ("UniqueId", c_int),
    ]


class FItemDefinitionData(Structure):
    _fields_ = [
        ("ItemDefinition", POINTER(UItemDefinition)),
        ("BalanceDefinition", POINTER(UInventoryBalanceDefinition)),
        ("ManufacturerDefinition", POINTER(UManufacturerDefinition)),
        ("ManufacturerGradeIndex", c_int),
        ("AlphaItemPartDefinition", POINTER(UItemPartDefinition)),
        ("BetaItemPartDefinition", POINTER(UItemPartDefinition)),
        ("GammaItemPartDefinition", POINTER(UItemPartDefinition)),
        ("DeltaItemPartDefinition", POINTER(UItemPartDefinition)),
        ("EpsilonItemPartDefinition", POINTER(UItemPartDefinition)),
        ("ZetaItemPartDefinition", POINTER(UItemPartDefinition)),
        ("EtaItemPartDefinition", POINTER(UItemPartDefinition)),
        ("ThetaItemPartDefinition", POINTER(UItemPartDefinition)),
        ("MaterialItemPartDefinition", POINTER(UItemPartDefinition)),
        ("PrefixItemNamePartDefinition", POINTER(UItemNamePartDefinition)),
        ("TitleItemNamePartDefinition", POINTER(UItemNamePartDefinition)),
        ("GameStage", c_int),
        ("UniqueId", c_int),
    ]


class FPendingMissionRewardData(Structure):
    _fields_ = [
        ("Mission", POINTER(UMissionDefinition)),
        ("WeaponRewards", FWeaponDefinitionData * 2),
        ("ItemRewards", FItemDefinitionData * 2),
        ("bGrantAltReward", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FUnloadableDlcPendingRewardData(Structure):
    _fields_ = [
        ("MissionDefName", FString),
        ("WeaponRewards", FInventorySerialNumber * 2),
        ("ItemRewards", FInventorySerialNumber * 2),
        ("DlcPackageId", c_int),
        ("bGrantAltReward", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FMissionStatusPresentation(Structure):
    _fields_ = [("TextColor", FColor), ("IconFrame", FString)]


class FItemBehaviorSet(Structure):
    _fields_ = [("OnUsed", TArray_UBehaviorBasePtr)]


class FSKULibrarySet(Structure):
    _fields_ = [
        ("Id", c_int),
        ("NameID", FString),
        ("LibrarySetPackage", FString),
        ("CachedDlcALDefRef", POINTER(UObject)),
    ]


class FSKURuntimeLibrarySet(Structure):
    _fields_ = [("Id", c_int), ("Libraries", POINTER(UPackageAssetLibrary) * 6)]


class FAssetLibConfig(Structure):
    _fields_ = [
        ("SublibraryBits", c_int),
        ("AssetBits", c_int),
        ("Desc", FString),
        ("LibraryType", POINTER(UClass)),
    ]


class FAttributePresentationValueRemappingData(Structure):
    _fields_ = [
        ("bUseContextOverride", c_bool, 1),
        ("", c_ulong, 0),
        ("InputValueMn", FAttributeInitializationData),
        ("InputValueMx", FAttributeInitializationData),
        ("OutputValueMn", FAttributeInitializationData),
        ("OutputValueMx", FAttributeInitializationData),
    ]


class FModifierValuePresentationData(Structure):
    _fields_ = [
        ("AttributePresentation", POINTER(UAttributePresentationDefinition)),
        ("OptionalConstraintPresentation", POINTER(UAttributePresentationDefinition)),
        ("ModifierValue", c_float),
        ("bShouldDisplay", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FCustomizationUnlockData(Structure):
    _fields_ = [
        ("ProductID", c_int),
        ("NumUnlockedCustomizations", c_int),
        ("UnlockedMask", TArray_unsigned_char),
    ]


class FMissionRewardPresentationData(Structure):
    _fields_ = [
        ("PresentationDefinition", POINTER(UInventoryCardPresentationDefinition)),
        ("Rarity", c_ubyte),
    ]


class FReplicatedMissionFilterData(Structure):
    _fields_ = [
        ("Mission", POINTER(UMissionDefinition)),
        ("bFiltered", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FReplicatedMissionObjectiveData(Structure):
    _fields_ = [
        ("Objective", POINTER(UMissionObjectiveDefinition)),
        ("ObjectiveBit", c_int),
    ]


class FReplicatedMissionStatusData(Structure):
    _fields_ = [("Mission", POINTER(UMissionDefinition)), ("Status", c_ubyte)]


class FReplicatedMissionData(Structure):
    _fields_ = [
        ("Mission", POINTER(UMissionDefinition)),
        ("Status", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("bTimerRunning", c_bool, 1),
        ("", c_ulong, 0),
        ("ActiveObjectiveSet", POINTER(UMissionObjectiveSetDefinition)),
        ("SubObjectiveSets", POINTER(UMissionObjectiveSetDefinition) * 4),
        ("SecondsLeft", c_int),
        ("ObjectiveCounts", int * 20),
        ("GameStage", c_int),
        ("bFiltered", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FMissionDirectorData(Structure):
    _fields_ = [
        ("MissionDefinition", POINTER(UMissionDefinition)),
        ("bBeginsMission", c_bool, 1),
        ("bEndsMission", c_bool, 1),
        ("", c_ulong, 0),
        ("BranchEnding", c_ubyte),
    ]


class FReplicatedMissionDirectiveData(Structure):
    _fields_ = [
        ("MissionDirector", FScriptInterface),
        ("MissionDirective", FMissionDirectorData),
    ]


class FMissionStatusData(Structure):
    _fields_ = [
        ("MissionDefinition", POINTER(UMissionDefinition)),
        ("MissionStatus", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("bIsObjectiveSpecific", c_bool, 1),
        ("", c_ulong, 0),
        ("MissionObjective", POINTER(UMissionObjectiveDefinition)),
        ("ObjectiveStatus", c_ubyte),
    ]


class FUnloadableDlcMissionStatusData(Structure):
    _fields_ = [
        ("MissionDefName", FString),
        ("Status", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("DlcPackageId", c_int),
        ("ObjectivesProgress", TArray_int),
        ("ActiveObjectiveSetIndex", c_int),
        ("SubObjectiveSetsIndices", TArray_int),
        ("GameStage", c_int),
        ("NeedsRewards", c_int),
        ("HeardKickoff", c_int),
    ]


class FMissionRewardData(Structure):
    _fields_ = [
        ("MissionDef", POINTER(UMissionDefinition)),
        ("bGrantAltReward", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FMissionStatusPlayerData(Structure):
    _fields_ = [
        ("MissionDef", POINTER(UMissionDefinition)),
        ("Status", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("ObjectivesProgress", TArray_int),
        ("ActiveObjectiveSet", POINTER(UMissionObjectiveSetDefinition)),
        ("SubObjectiveSets", TArray_UMissionObjectiveSetDefinitionPtr),
        ("GameStage", c_int),
        ("bNeedsRewards", c_bool, 1),
        ("bHeardKickoff", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FMissionData(Structure):
    _fields_ = [
        ("MissionDef", POINTER(UMissionDefinition)),
        ("Status", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("ObjectivesProgress", TArray_int),
        ("ActiveObjectiveSet", POINTER(UMissionObjectiveSetDefinition)),
        ("SubObjectiveSets", TArray_UMissionObjectiveSetDefinitionPtr),
        ("bInitialized", c_bool, 1),
        ("bHeardKickoff", c_bool, 1),
        ("bFiltered", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FObjectiveStatusData(Structure):
    _fields_ = [("Objectives", TArray_int)]


class FTradeSlot(Structure):
    _fields_ = [
        ("Status", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("WeaponData", FWeaponDefinitionData),
        ("ItemData", FItemDefinitionData),
        ("Quantity", c_int),
        ("WInv", POINTER(AWillowInventory)),
    ]


class FHUDWidget_ChallengeData(Structure):
    _fields_ = [
        ("Challenge", POINTER(UChallengeDefinition)),
        ("LevelIndex", c_int),
        ("ConditionIndex", c_int),
        ("CurrStatVal", c_int),
        ("GoalStatVal", c_int),
        ("bComplete", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FFadePickupParticle(Structure):
    _fields_ = [
        ("SourceActor", POINTER(AActor)),
        ("Particle", POINTER(UParticleSystemComponent)),
        ("FadeEndTime", c_float),
    ]


class FPlayerSaveData(Structure):
    _fields_ = [
        ("FilePath", FString),
        ("TimeStamp", FDouble),
        ("PlayerClassDefName", FString),
        ("ClassName", FString),
        ("CharacterName", FString),
        ("ExpLevel", c_int),
        ("CurrencyOnHand", int * 13),
        ("UICharacterName", FString),
        ("PlaythroughsCompleted", c_int),
        ("LastVisitedTeleporter", FString),
        ("ActiveMissionNumber", c_int),
        ("PlotMissionNumber", c_int),
        ("TotalPlayTime", c_int),
        ("LastPlaythroughNumber", c_int),
        ("LastSaveDate", FString),
        ("SaveGuid", FGuid),
        ("bIsUnloadedDlcCharacter", c_bool, 1),
        ("", c_ulong, 0),
        ("SaveGameFileId", c_int),
        ("ExpPoints", c_int),
    ]


class FLoadInfo(Structure):
    _fields_ = [
        ("CharacterData", FPlayerSaveData),
        ("LoadInfoReady", c_bool, 1),
        ("LoadSucceeded", c_bool, 1),
        ("LoadCancelled", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FAttributeDefinitionDefault(Structure):
    _fields_ = [("Attribute", POINTER(UAttributeDefinition)), ("DefaultValue", c_float)]


class FAttributeScalarParam(Structure):
    _fields_ = [
        ("ParamName", FName),
        ("bVectorParam", c_bool, 1),
        ("bClampInput", c_bool, 1),
        ("", c_ulong, 0),
        ("Input", FAttributeDefinitionDefault),
        ("MinInput", FAttributeDefinitionDefault),
        ("MaxInput", FAttributeDefinitionDefault),
        ("MinOutput", FAttributeDefinitionDefault),
        ("MaxOutput", FAttributeDefinitionDefault),
        ("ScalarParamOperand", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("CurrentValue", c_float),
    ]


class FScreenParticleModifier(Structure):
    _fields_ = [
        ("ScalarParams", TArray_FAttributeScalarParam),
        ("CachedValue", c_float),
    ]


class FScreenParticleScalarParamOverTime(Structure):
    _fields_ = [
        ("ParameterName", FName),
        ("TotalTime", c_float),
        ("StartValue", c_float),
        ("EndValue", c_float),
        ("LastValue", c_float),
    ]


class FScreenParticleVectorParamOverTime(Structure):
    _fields_ = [
        ("ParameterName", FName),
        ("TotalTime", c_float),
        ("VectorStartValue", FVector),
        ("VectorEndValue", FVector),
        ("LastValue", FVector),
    ]


class FScreenParticleParamOverTime(Structure):
    _fields_ = [
        ("ScalarParams", TArray_FScreenParticleScalarParamOverTime),
        ("VectorParams", TArray_FScreenParticleVectorParamOverTime),
    ]


class FScreenParticleInitParams(Structure):
    _fields_ = [
        ("Template", POINTER(UParticleSystem)),
        ("ScreenParticleModifiers", TArray_FScreenParticleModifier),
        ("TemplateScreenParticleMaterial", POINTER(UMaterialInterface)),
        ("MatParamName", FName),
        ("bHideWhenFinished", c_bool, 1),
        ("", c_ulong, 0),
        ("ParticleTag", FName),
        ("ContentDims", FVector2D),
        ("ParticleDepth", c_float),
        ("ScalingMode", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("StopParamsOT", FScreenParticleParamOverTime),
        ("bOnlyOwnerSee", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FScreenParticleRecord(Structure):
    _fields_ = [
        ("Tag", FName),
        ("Template", POINTER(UParticleSystem)),
        ("MatParamName", FName),
        ("Component", POINTER(UParticleSystemComponent)),
        ("AppliedModifiers", TArray_FScreenParticleModifier),
        ("ContentDims", FVector2D),
        ("ParticleDepth", c_float),
        ("ScalingMode", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("StopParamsOT", FScreenParticleParamOverTime),
        ("StopTime", c_float),
    ]


class FPostProcessOverlay(Structure):
    _fields_ = [
        ("OverlayName", FName),
        ("DestPostProcessOverlay", FPostProcessSettings),
        ("MinTransitionInDuration", c_float),
        ("MinTransitionHoldDuration", c_float),
        ("MinTransitionOutDuration", c_float),
        ("MaxTransitionInDuration", c_float),
        ("MaxTransitionHoldDuration", c_float),
        ("MaxTransitionOutDuration", c_float),
        ("ClearOverlayQueueAfterTransition", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FMaterialEffectModifier(Structure):
    _fields_ = [
        ("EffectName", FName),
        ("ScalarParams", TArray_FAttributeScalarParam),
        ("CachedValue", c_float),
        ("MaterialInstance", POINTER(UMaterialInstanceConstant)),
    ]


class FDOFEffectModifierData(Structure):
    _fields_ = [
        ("AutoRelcalculateFocusDistance", c_bool, 1),
        ("", c_ulong, 0),
        ("RecalculateFocusDistanceRate", c_float),
        ("FocusDistanceLerpRate", c_float),
    ]


class FPostProcessChainOptions(Structure):
    _fields_ = [
        ("MaterialEffectModifiers", TArray_FMaterialEffectModifier),
        ("DOFEffectModifier", FDOFEffectModifierData),
    ]


class FDOFEffectData(Structure):
    _fields_ = [
        ("FalloffExponent", c_float),
        ("BlurKernelSize", c_float),
        ("MaxNearBlurAmount", c_float),
        ("MaxFarBlurAmount", c_float),
        ("ModulateBlurColor", FColor),
        ("FocusType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("FocusInnerRadius", c_float),
        ("FocusDistance", c_float),
        ("FocusPosition", FVector),
    ]


class FPostProcessChainRecord(Structure):
    _fields_ = [
        ("Template", POINTER(UPostProcessChain)),
        ("Instance", POINTER(UPostProcessChain)),
        ("AppliedModifiers", TArray_FMaterialEffectModifier),
        ("PopWhenScalarParamIsMaxedOut", c_bool, 1),
        ("", c_ulong, 0),
        ("DOFEffectModifier", FDOFEffectModifierData),
        ("NextDOFUpdateTime", c_float),
    ]


class FRtpcParameterValue(Structure):
    _fields_ = [("AkRtpc", POINTER(UAkRtpc)), ("Value", c_float)]


class FImpactResponseParameters(Structure):
    _fields_ = [
        ("ParticleParameters", TArray_FParticleSysParam),
        ("FontParameterValues", TArray_FFontParameterValue),
        ("ScalarParameterValues", TArray_FScalarParameterValue),
        ("TextureParameterValues", TArray_FTextureParameterValue),
        ("VectorParameterValues", TArray_FVectorParameterValue),
        ("RtpcParameterValues", TArray_FRtpcParameterValue),
        ("bNoSound", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FImpactResponseEffect(Structure):
    _fields_ = [
        ("bCensorThisEffect", c_bool, 1),
        ("", c_ulong, 0),
        ("CensoredEffectAlternative", POINTER(UWillowImpactDefinition)),
        ("DamageModifierPercent", c_float),
        ("ImpactEvent", POINTER(UAkEvent)),
        ("AINoiseLevel", c_float),
        ("ParticleTemplate", POINTER(UParticleSystem)),
        ("bAttachParticleToHitActor", c_bool, 1),
        ("bHideEffectFromHitActor", c_bool, 1),
        ("", c_ulong, 0),
        ("MaxEffectDistance", c_float),
        ("DecalMaterials", TArray_UMaterialInterfacePtr),
        ("DecalWidth", c_float),
        ("DecalHeight", c_float),
        ("DecalMinScale", c_float),
        ("DecalMaxScale", c_float),
        ("DecalDepth", c_float),
        ("DecalRandomRotation", c_bool, 1),
        ("DecalCreateNewMaterialInstanceConstant", c_bool, 1),
        ("", c_ulong, 0),
        ("ImpactFlashLightClass", POINTER(UClass)),
        ("EffectParameters", FImpactResponseParameters),
    ]


class FImpactResponseData(Structure):
    _fields_ = [
        ("ImpactType", POINTER(UWillowImpactDefinition)),
        ("ResponseEffect", FImpactResponseEffect),
    ]


class FWheelSlipModifierData(Structure):
    _fields_ = [("LongSlipFactor", c_float), ("LatSlipFactor", c_float)]


class FDamageSurfaceTypeModifier(Structure):
    _fields_ = [
        ("SurfaceType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("BaseChance", FAttributeInitializationData),
        ("BaseSpreadChance", FAttributeInitializationData),
        ("SpreadChanceDecayMultiplier", FAttributeInitializationData),
    ]


class FActiveStatusEffect(Structure):
    _fields_ = [
        ("Duration", c_float),
        ("TotalElapsedTime", c_float),
        ("AccumulatedTime", c_float),
        ("DamagePerSecond", c_float),
        ("EventInstigator", POINTER(AActor)),
        ("DamageCauser", FScriptInterface),
        ("DamageSource", POINTER(UClass)),
        ("StatusEffectDefinition", POINTER(UStatusEffectDefinition)),
        ("HitRegion", POINTER(UBodyHitRegionDefinition)),
        ("HitInfo", FTraceHitInfo),
        ("DamageNumberSocket", FName),
        ("AccumulatedSpreadTime", c_float),
        ("SpreadTimeInterval", c_float),
        ("SpreadCount", c_int),
        ("SpreadAttempt", c_int),
        ("SpreadRadius", c_float),
        ("TravelledRegions", TArray_UBodyHitRegionDefinitionPtr),
        ("TravelledTargets", TArray_FScriptInterface),
        ("OwnerComponent", POINTER(UStatusEffectsComponent)),
        ("SpreadCap", c_int),
        ("bIsInfiniteDuration", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FSocketEmitter(Structure):
    _fields_ = [("Emitter", POINTER(AEmitter)), ("SocketName", FName)]


class FHitRegionEmitters(Structure):
    _fields_ = [
        ("Emitters", TArray_FSocketEmitter),
        ("HitRegion", POINTER(UBodyHitRegionDefinition)),
        ("bDeleteOnDeactivation", c_bool, 1),
        ("", c_ulong, 0),
        ("TimeWaitingToDie", c_float),
    ]


class FEffectSoundData(Structure):
    _fields_ = [("Type", c_ubyte), ("Unknown1", c_ubyte, 0x3), ("AkPlayingId", c_int)]


class FOngoingEffectInfo(Structure):
    _fields_ = [
        ("TotalDamageDealtToHealth", c_float),
        ("TotalDamageDealtToShields", c_float),
        ("Duration", c_float),
    ]


class FShopItemData(Structure):
    _fields_ = [
        ("Item", POINTER(AWillowInventory)),
        ("Price", c_int),
        ("ItemStatus", c_ubyte),
    ]


class FConditionalAnimData(Structure):
    _fields_ = [
        ("Expression", POINTER(UExpressionEvaluator)),
        ("SpecialMove", POINTER(USpecialMoveDefinition)),
    ]


class FBodyWeaponActionData(Structure):
    _fields_ = [
        ("Action", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("Expression", POINTER(UExpressionEvaluator)),
        ("Animations", TArray_FConditionalAnimData),
    ]


class FBodyWeaponActionPostureData(Structure):
    _fields_ = [
        ("Posture", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("Actions", TArray_FBodyWeaponActionData),
    ]


class FBodyHandIKHoldData(Structure):
    _fields_ = [
        ("JointLocation", FVector),
        ("HandLocation", FVector),
        ("HandRotation", FRotator),
    ]


class FCustomBodyHandIKHoldData(Structure):
    _fields_ = [("HoldName", FName), ("IKData", FBodyHandIKHoldData)]


class FExtraMuzzleEffect(Structure):
    _fields_ = [("Particles", POINTER(UParticleSystem)), ("Sound", POINTER(UAkEvent))]


class FWeaponBoneControllerData(Structure):
    _fields_ = [
        ("BoneName", FName),
        ("ControlType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("bUseInFirstPerson", c_bool, 1),
        ("bUseInThirdPerson", c_bool, 1),
        ("", c_ulong, 0),
        ("ControlTemplate", POINTER(USkelControlBase)),
    ]


class FWeaponMemento(Structure):
    _fields_ = [
        ("SerialNumber", FInventorySerialNumber),
        ("StoredAmmo", c_int),
        ("bEquipped", c_bool, 1),
        ("bDropOnDeath", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FBloodSplatterTrace(Structure):
    _fields_ = [
        ("HitRegion", POINTER(UBodyHitRegionDefinition)),
        ("HitLocation", FVector),
        ("Momentum", FVector),
        ("DamageSeverityPercent", c_float),
    ]


class FGoreEffect(Structure):
    _fields_ = [
        ("HitRegion", POINTER(UBodyHitRegionDefinition)),
        ("GoreDataIndex", c_int),
        ("InstigatedBy", POINTER(AController)),
        ("HitLocation", FVector),
        ("Momentum", FVector),
    ]


class FMaterialScalarFadeReplication(Structure):
    _fields_ = [
        ("Name", FName),
        ("StartValue", c_float),
        ("EndValue", c_float),
        ("FadeTime", c_float),
        ("bRunning", c_bool, 1),
        ("bIsForGoreDeath", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FHolsteredGearDisplaySlot(Structure):
    _fields_ = [
        ("State", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("Item", POINTER(AWillowInventory)),
    ]


class FGoreTriggerData(Structure):
    _fields_ = [
        ("DamageTypeTrigger", POINTER(UDamageTypeDefinition)),
        ("DamageSourceTrigger", POINTER(UClass)),
        ("HealthPctDamageThreshold", c_float),
    ]


class FDamageReactionData(Structure):
    _fields_ = [
        ("EventName", FName),
        ("DamageTriggers", TArray_FGoreTriggerData),
        ("PercentOfHealthTrigger", c_float),
        ("DamageSpecialMove", POINTER(USpecialMoveDefinition)),
        ("ReactionBehaviors", TArray_UBehaviorBasePtr),
        ("bDamageThreshold", c_bool, 1),
        ("bRepeatableEvent", c_bool, 1),
        ("bCensored", c_bool, 1),
        ("bOnlyTriggeredOnOwnerDeath", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FWeaponPartAttachmentData(Structure):
    _fields_ = [
        ("FirstPersonAttachmentSocket", FName),
        ("ThirdPersonAttachmentSocket", FName),
        ("FirstPersonOffHandAttachmentSocket", FName),
        ("ThirdPersonOffHandAttachmentSocket", FName),
    ]


class FMeleeOverTimeState(Structure):
    _fields_ = [
        ("bIsMeleeActive", c_bool, 1),
        ("", c_ulong, 0),
        ("MeleeDefinition", POINTER(UMeleeDefinition)),
        ("MeleeStartTime", c_float),
        ("TimeElapsedSinceLastMelee", c_float),
        ("HitActors", TArray_AActorPtr),
        ("MeleeStartLocation", FVector),
        ("MeleeStartRotation", FRotator),
    ]


class FObstacleData(Structure):
    _fields_ = [
        ("Actor", POINTER(AActor)),
        ("Leader", POINTER(AActor)),
        ("Radius", c_float),
        ("HalfHeight", c_float),
        ("MaxSpeed", c_float),
        ("Location", FVector),
        ("Velocity", FVector),
        ("OldVelocity", FVector),
        ("LastOffset", FVector2D),
        ("IDO", FScriptInterface),
        ("bWasAvoiding", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FSimpleAnimData(Structure):
    _fields_ = [
        ("AnimName", FName),
        ("Tree", POINTER(UWillowAnimTree)),
        ("Nodes", TArray_UWillowAnimNode_SimplePtr),
    ]


class FSkillDamagedEventConstraintData(Structure):
    _fields_ = [
        ("DamageTypeConstraint", POINTER(UDamageTypeDefinition)),
        ("DamageSourceConstraint", POINTER(UClass)),
        ("bMustBeCriticalDamage", c_bool, 1),
        ("bMustBeOneShotKill", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FSkillKillEventData(Structure):
    _fields_ = [
        ("EventName", FName),
        ("EventType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("EventConstraints", TArray_FSkillDamagedEventConstraintData),
    ]


class FSkillDamageEventData(Structure):
    _fields_ = [
        ("EventName", FName),
        ("EventType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("EventConstraints", TArray_FSkillDamagedEventConstraintData),
    ]


class FNamedSkillEvent(Structure):
    _fields_ = [
        ("EventName", FName),
        ("RequiredSkills", TArray_USkillDefinitionPtr),
        ("EventResponses", TArray_UBehaviorBasePtr),
        ("RequiredActionSkillState", c_ubyte),
    ]


class FSkillActionData(Structure):
    _fields_ = [
        ("ClientConsoleCommand", FString),
        ("bSkillOnInstigator", c_bool, 1),
        ("bSkillOnRecipient", c_bool, 1),
        ("", c_ulong, 0),
        ("GradeType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("HardcodedGrade", int),
        ("SkillToActivate", POINTER(USkillDefinition)),
        ("SkillToDeactivate", POINTER(USkillDefinition)),
        ("AkEvent", POINTER(UAkEvent)),
        ("bInstigatorPlaysSound", c_bool, 1),
        ("bRecipientPlaysSound", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FSkillEventResponseData(Structure):
    _fields_ = [
        ("bPredictOnClient", c_bool, 1),
        ("", c_ulong, 0),
        ("EventType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("Action", FSkillActionData),
    ]


class FSkillConstraintData(Structure):
    _fields_ = [
        ("bApplyConstraintOnActivatation", c_bool, 1),
        ("bApplyConstraintWhileActive", c_bool, 1),
        ("bApplyConstraintWhilePaused", c_bool, 1),
        ("", c_ulong, 0),
        ("OnFailure", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("Evaluator", POINTER(UExpressionEvaluator)),
        ("EvaluatorDefinitions", TArray_USkillExpressionEvaluatorDefinitionPtr),
    ]


class FBonusAttributeModifierUpgrade(Structure):
    _fields_ = [("GradeToApplyAt", int), ("Modifier", c_float)]


class FSkillEffectData(Structure):
    _fields_ = [
        ("AttributeToModify", POINTER(UAttributeDefinitionBase)),
        ("bIncludeDuelingTargets", c_bool, 1),
        ("bIncludeSelfAsTarget", c_bool, 1),
        ("bOnlyEffectTargetsInRange", c_bool, 1),
        ("bExcludeNonPlayerCharacters", c_bool, 1),
        ("", c_ulong, 0),
        ("EffectTarget", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("TargetInstanceDataName", FName),
        ("TargetCriteria", c_ubyte),
        ("ModifierType", c_ubyte),
        ("Unknown2", c_ubyte, 0x2),
        ("BaseModifierValue", FAttributeInitializationData),
        ("GradeToStartApplyingEffect", int),
        ("PerGradeUpgradeInterval", int),
        ("PerGradeUpgrade", FAttributeInitializationData),
        ("BonusUpgradeList", TArray_FBonusAttributeModifierUpgrade),
    ]


class FInputContextData(Structure):
    _fields_ = [
        ("ContextName", FName),
        ("Definition", POINTER(UInputContextDefinition)),
    ]


class FSlaughterMissionChain(Structure):
    _fields_ = [("SlaughterMissions", TArray_UMissionDefinitionPtr)]


class FLevelBasedExpScale(Structure):
    _fields_ = [
        ("LevelDifference", int),
        ("HigherLevelEnemyExpScale", c_float),
        ("LowerLevelEnemyExpScale", c_float),
    ]


class FStatusEffectTypeCommonProperties(Structure):
    _fields_ = [
        ("StatusEffectType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("EffectStartAkEvent", POINTER(UAkEvent)),
        ("EffectStopAkEvent", POINTER(UAkEvent)),
    ]


class FLevelBasedStatusEffectChanceScale(Structure):
    _fields_ = [
        ("LevelDifference", int),
        ("HigherLevelChanceScale", c_float),
        ("LowerLevelChanceScale", c_float),
    ]


class FPlayThroughData(Structure):
    _fields_ = [
        ("PlayThroughNumber", int),
        ("BalanceDefinitions", TArray_UGameBalanceDefinitionPtr),
    ]


class FLevelBasedDamageScale(Structure):
    _fields_ = [
        ("LevelDifference", int),
        ("HigherLevelAttackerDmgScale", c_float),
        ("LowerLevelAttackerDmgScale", c_float),
    ]


class FRarityLevelColor(Structure):
    _fields_ = [
        ("MinLevel", c_int),
        ("MaxLevel", c_int),
        ("Color", FColor),
        ("DropLifeSpanType", c_ubyte),
        ("RarityRating", c_ubyte),
    ]


class FExpAwardWeight(Structure):
    _fields_ = [("Players", int), ("KillerExpBonus", c_float), ("ExpWeight", c_float)]


class FKillSkillDuration(Structure):
    _fields_ = [("Players", int), ("Duration", c_float)]


class FDamageTypeExpModifier(Structure):
    _fields_ = [
        ("DamageSource", POINTER(UClass)),
        ("TypeDefinition", POINTER(UDamageTypeDefinition)),
        ("Multiplier", c_float),
    ]


class FPlayerClassAchievementUnlockData(Structure):
    _fields_ = [
        ("UnlockType", c_ubyte),
        ("Achievement", c_ubyte),
        ("Unknown1", c_ubyte, 0x2),
        ("IntData", c_int),
    ]


class FPendingClientTrainingMessage(Structure):
    _fields_ = [
        ("Message", POINTER(UClass)),
        ("TrainingDefinition", POINTER(UTrainingMessageDefinition)),
        ("Duration", c_float),
    ]


class FPendingMissionRewardsData(Structure):
    _fields_ = [
        ("PendingMissionRewards", TArray_FPendingMissionRewardData),
        ("PlaythroughIndex", c_int),
    ]


class FOneOffLevelChallengeData(Structure):
    _fields_ = [
        ("PackageId", c_ubyte),
        ("ContentId", c_ubyte),
        ("Unknown1", c_ubyte, 0x2),
        ("Completion", TArray_int),
    ]


class FPlayerUIPreferences(Structure):
    _fields_ = [
        ("CharacterName", FString),
        ("PrimaryColor", FColor),
        ("SecondaryColor", FColor),
        ("TertiaryColor", FColor),
    ]


class FCurrencyState(Structure):
    _fields_ = [
        ("FormOfCurrency", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("StatName", FName),
        ("CurrentAmount", c_int),
        ("LastKnownAmount", c_int),
    ]


class FBankSlot(Structure):
    _fields_ = [("InventorySerialNumber", FInventorySerialNumber)]


class FChestData(Structure):
    _fields_ = [
        ("InventoryClass", POINTER(UClass)),
        ("InventorySerialNumber", FInventorySerialNumber),
        ("Inventory", POINTER(AWillowInventory)),
    ]


class FMissionPlaythroughData(Structure):
    _fields_ = [
        ("MissionList", TArray_FMissionStatusPlayerData),
        ("UnloadableDlcMissionList", TArray_FUnloadableDlcMissionStatusData),
        ("UnloadableDlcPendingMissionRewards", TArray_FUnloadableDlcPendingRewardData),
        ("FilteredMissions", TArray_UMissionDefinitionPtr),
        ("ActiveMission", POINTER(UMissionDefinition)),
        ("PlayThroughNumber", c_int),
    ]


class FStatusMenuMissionEligibilityData(Structure):
    _fields_ = [
        ("MissionDef", POINTER(UMissionDefinition)),
        ("MissionStatus", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("bIsBlocked", c_bool, 1),
        ("bIsFiltered", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FInventorySaveGameData(Structure):
    _fields_ = [
        ("DefinitionData", FItemDefinitionData),
        ("Quantity", c_int),
        ("bEquipped", c_bool, 1),
        ("", c_ulong, 0),
        ("Mark", c_ubyte),
    ]


class FLoginState(Structure):
    _fields_ = [("LoginName", FString), ("bIsDirty", c_bool, 1), ("", c_ulong, 0)]


class FLungeData(Structure):
    _fields_ = [
        ("Target", POINTER(AActor)),
        ("Length", c_float),
        ("Start", c_float),
        ("SavedAccelRate", c_float),
    ]


class FTimePosition(Structure):
    _fields_ = [("Position", FVector), ("Time", c_float)]


class FVehicleSeatInstance(Structure):
    _fields_ = [
        ("StoragePawn", POINTER(APawn)),
        ("LastStoragePawn", POINTER(APawn)),
        ("SeatPawn", POINTER(AVehicle)),
        ("Gun", POINTER(AWillowVehicleWeapon)),
        ("GunMesh", POINTER(UMeshComponent)),
        ("GunDefinition", POINTER(UWeaponTypeDefinition)),
        ("BarrelIndex", c_int),
        ("WeaponRotationName", FName),
        ("FlashLocationName", FName),
        ("FlashCountName", FName),
        ("FiringModeName", FName),
        ("AttachedWeaponName", FName),
        ("TurretControllers", TArray_UWillowSkelControl_TurretConstrainedPtr),
        ("WeaponFireSMD", POINTER(USpecialMoveDefinition)),
        ("OldPositions", TArray_FTimePosition),
        ("SmoothedCameraOffset", FVector),
        ("IncomingSeatIndex", c_int),
        ("SeatLockTime", c_float),
        ("bDontStopAnimOnExit", c_bool, 1),
        ("bSwitchingSeats", c_bool, 1),
        ("bExiting", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FTombstoneData(Structure):
    _fields_ = [
        ("TotalTimePlayed", c_int),
        ("CharacterLevel", c_int),
        ("PercentMissionsComplete", c_int),
        ("PercentChallengesComplete", c_int),
        ("CharacterName", FString),
        ("FavoriteManufacturer", FString),
        ("FavoriteWeaponType", FString),
        ("KilledByDescription", FString),
        ("ScreenshotFilename", FString),
    ]


class FResourceSaveGameData(Structure):
    _fields_ = [
        ("ResourceDefinition", POINTER(UResourceDefinition)),
        ("ResourcePoolDefinition", POINTER(UResourcePoolDefinition)),
        ("Amount", c_float),
        ("UpgradeLevel", c_int),
    ]


class FInventorySlotSaveGameData(Structure):
    _fields_ = [
        ("InventorySlotMax_Misc", c_int),
        ("WeaponReadyMax", c_int),
        ("NumQuickSlotsFlourished", c_int),
    ]


class FWeaponSaveGameData(Structure):
    _fields_ = [
        ("WeaponDefinitionData", FWeaponDefinitionData),
        ("QuickSlot", c_ubyte),
        ("Mark", c_ubyte),
    ]


class FWorldDiscoveryData(Structure):
    _fields_ = [
        ("DiscoveryName", FName),
        ("HasBeenUncovered", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FMissionPlaythroughSaveGameData(Structure):
    _fields_ = [
        ("PlayThroughNumber", c_int),
        ("MissionData", TArray_FMissionStatusPlayerData),
        ("UnloadableDlcMissionData", TArray_FUnloadableDlcMissionStatusData),
        ("PendingMissionRewards", TArray_FPendingMissionRewardData),
        ("UnloadableDlcPendingMissionRewards", TArray_FUnloadableDlcPendingRewardData),
        ("ActiveMission", FString),
        ("FilteredMissions", TArray_UMissionDefinitionPtr),
    ]


class FSkillSaveGameData(Structure):
    _fields_ = [
        ("SkillDefinition", POINTER(USkillDefinition)),
        ("Grade", c_int),
        ("GradePoints", c_int),
        ("EquippedSlotIndex", c_int),
    ]


class FUnloadableDlcItemSaveGameData(Structure):
    _fields_ = [
        ("SerialNumber", FInventorySerialNumber),
        ("Quantity", c_int),
        ("bEquipped", c_bool, 1),
        ("", c_ulong, 0),
        ("Mark", c_ubyte),
    ]


class FUnloadableDlcWeaponSaveGameData(Structure):
    _fields_ = [
        ("SerialNumber", FInventorySerialNumber),
        ("QuickSlot", c_ubyte),
        ("Mark", c_ubyte),
    ]


class FPostProcessOverlayInfo(Structure):
    _fields_ = [
        ("PostProcessOverlay", FPostProcessOverlay),
        ("SceneInterpolationPhaseTime", c_float),
        ("SceneInterpolationDuration", c_float),
        ("PostProcessOverlayPhase", c_ubyte),
    ]


class FSpeedKillData(Structure):
    _fields_ = [("VictimName", FString), ("VictimKillTime", c_float)]


class FLurchData(Structure):
    _fields_ = [
        ("StartTime", c_float),
        ("LocMagnitude", c_float),
        ("RotMagnitude", c_float),
        ("Duration", c_float),
        ("FalloffRate", c_float),
    ]


class FSkillTreeSkillStateData(Structure):
    _fields_ = [
        ("SkillDefinition", POINTER(USkillDefinition)),
        ("ParentBranchDefinition", POINTER(USkillTreeBranchDefinition)),
        ("TierNumber", c_int),
        ("SkillGrade", c_int),
        ("bIsUnlocked", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FPlayerSkillTreeSkillData(Structure):
    _fields_ = [
        ("Definition", POINTER(USkillDefinition)),
        ("Index", c_int),
        ("PrevSkillIndex", c_int),
        ("NextSkillIndex", c_int),
        ("ParentTierIndex", c_int),
        ("PrevSkillTypeIndex", c_int),
        ("NextSkillTypeIndex", c_int),
        ("Grade", c_int),
        ("Owner", POINTER(UPlayerSkillTree)),
    ]


class FAppliedSkillEffect(Structure):
    _fields_ = [
        ("EffectData", FSkillEffectData),
        ("Contexts", TArray_UObjectPtr),
        ("Modifier", POINTER(UAttributeModifier)),
    ]


class FVehicleSeatDefinition(Structure):
    _fields_ = [
        ("SeatDefinition", POINTER(UWillowVehicleSeatDefinition)),
        ("bDoNotUseThisSeat", c_bool, 1),
        ("", c_ulong, 0),
        ("WeaponBalanceDefinition", POINTER(UInventoryBalanceDefinition)),
        ("WeaponFireSMD", POINTER(USpecialMoveDefinition)),
        ("NextSeatIndex", c_int),
        ("Anim_SeatSwap", TArray_USpecialMove_VehiclePtr),
        ("SeatAIDef", POINTER(UAIDefinition)),
        ("SeatInteractTextDefinition", POINTER(ULocalizedStringDefinition)),
        ("GunSocket", TArray_FName),
        ("SeatNameEnter", FName),
        ("SeatNameExit", FName),
    ]


class FConditionLevel(Structure):
    _fields_ = [
        ("ConditionDefinitions", TArray_UChallengeConditionDefinitionPtr),
        ("ProgressNotificationOverride", TArray_c_float),
        ("CompletedAttributeEffects", TArray_FAttributeEffectData),
        ("BadassPointReward", FAttributeInitializationData),
        ("RewardItemPool", POINTER(UItemPoolDefinition)),
        ("RewardTextKey", FName),
    ]


class FChallengeData(Structure):
    _fields_ = [
        ("PCOwner", POINTER(AWillowPlayerController)),
        ("ChallengeDefinition", POINTER(UChallengeDefinition)),
    ]


class FTrainingData(Structure):
    _fields_ = [
        ("PCOwner", POINTER(AWillowPlayerController)),
        ("TrainingDefinition", POINTER(UTrainingMessageDefinition)),
    ]


class FTaggedGFxMovie(Structure):
    _fields_ = [("Movie", POINTER(UGearboxGFxMovie)), ("Tag", FName)]


class FSpawnedAttachedLootData(Structure):
    _fields_ = [("Inv", POINTER(AWillowInventory)), ("AttachmentPointName", FName)]


class FSpawnedDroppedLootData(Structure):
    _fields_ = [
        ("Inv", POINTER(AWillowInventory)),
        ("bDisableRigidBodyPhysics", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FPlayerSkillTreeBranchData(Structure):
    _fields_ = [
        ("Definition", POINTER(USkillTreeBranchDefinition)),
        ("BranchPointsToUnlockNextBranch", c_int),
        ("Index", c_int),
        ("ParentBranchIndex", c_int),
        ("PrevBranchIndex", c_int),
        ("NextBranchIndex", c_int),
        ("ChildBranchIndices", TArray_int),
        ("TierIndices", TArray_int),
        ("Owner", POINTER(UPlayerSkillTree)),
    ]


class FPlayerSkillTreeTierData(Structure):
    _fields_ = [
        ("SkillIndices", TArray_int),
        ("BranchPointsToUnlockTier", c_int),
        ("Index", c_int),
        ("PrevTierIndex", c_int),
        ("NextTierIndex", c_int),
        ("ParentBranchIndex", c_int),
        ("TierNumber", c_int),
        ("bUnlocked", c_bool, 1),
        ("", c_ulong, 0),
        ("Owner", POINTER(UPlayerSkillTree)),
    ]


class FKillMissionData(Structure):
    _fields_ = [
        ("bUseKillRestrictions", c_bool, 1),
        ("bCriticalHit", c_bool, 1),
        ("bNotCriticalHit", c_bool, 1),
        ("bNotHitRegion", c_bool, 1),
        ("bMissionWeapon", c_bool, 1),
        ("", c_ulong, 0),
        ("DamageCauserType", c_ubyte),
        ("DamageType", c_ubyte),
        ("Unknown1", c_ubyte, 0x2),
        ("HitRegionName", FName),
    ]


class FBalancedInventoryData(Structure):
    _fields_ = [
        ("ItmPoolDefinition", POINTER(UItemPoolDefinition)),
        ("InvBalanceDefinition", POINTER(UInventoryBalanceDefinition)),
        ("Probability", FAttributeInitializationData),
        ("bDropOnDeath", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FGoldenKeySource(Structure):
    _fields_ = [
        ("SourceId", c_ubyte),
        ("NumKeys", c_ubyte),
        ("NumKeysSpent", c_ubyte),
        ("Empty", c_ubyte),
    ]


class FSeasonPassOfferUnion(Structure):
    _fields_ = [
        ("AssociatedSeasonPassOfferId", c_int),
        ("PaidOfferId", c_int),
        ("FreeOfferId", c_int),
        ("SeasonPassId", c_int),
    ]


class FSeasonPassPackageCount(Structure):
    _fields_ = [
        ("SeasonPassId", c_int),
        ("PackageCount", c_int),
        ("bPreOrder", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FDLCMissionData(Structure):
    _fields_ = [
        ("MinMissionNumber", c_int),
        ("MaxMissionNumber", c_int),
        ("MissionNameLocKey", FString),
    ]


class FCompatibilityVersionInfo(Structure):
    _fields_ = [
        ("CurrentCompatPackVersion", c_int),
        ("CurrentCompatibilityMask", FDlcCompatibilityData),
    ]


class FContentState(Structure):
    _fields_ = [("LicensedMask", c_int), ("InstalledMask", c_int)]


class FRecentlyResistedAttackData(Structure):
    _fields_ = [
        ("DamagedActor", POINTER(AActor)),
        ("DamageType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("LastResistTime", c_float),
    ]


class FExpansionData(Structure):
    _fields_ = [("Tag", c_int), ("Data", TArray_unsigned_char)]


class FRegionGameStageData(Structure):
    _fields_ = [
        ("RegionDef", POINTER(URegionDefinition)),
        ("GameStage", c_int),
        ("PlaythroughIdx", c_int),
    ]


class FUnloadableDlcRegionGameStageData(Structure):
    _fields_ = [
        ("RegionDefName", FString),
        ("GameStage", c_int),
        ("PlaythroughIdx", c_int),
        ("DlcPackageId", c_int),
    ]


class FUnloadableDlcChallengeData(Structure):
    _fields_ = [("ChallengeDefName", FString), ("DlcPackageId", c_int)]


class FLockoutData(Structure):
    _fields_ = [("LockoutDef", POINTER(ULockoutDefinition)), ("LockoutTime", c_int)]


class FUnloadableDlcLockoutData(Structure):
    _fields_ = [
        ("LockoutDefName", FString),
        ("LockoutTime", c_int),
        ("DlcPackageId", c_int),
    ]


class FChosenVehicleCustomization(Structure):
    _fields_ = [
        ("FamilyDef", POINTER(UVehicleFamilyDefinition)),
        ("CustomizationDef", POINTER(UCustomizationDefinition) * 2),
    ]


class FThirdPersonMenuView(Structure):
    _fields_ = [
        ("RelativeCameraLocation", FVector),
        ("RelativeCameraRotation", FRotator),
        ("RelativeMenuLocation", FVector),
        ("RelativeMenuRotation", FRotator),
        ("CameraYawMin", c_float),
        ("CameraYawMax", c_float),
        ("VerticalSplitscreenCameraOffset", c_float),
        ("VerticalSplitscreenCameraSpread", c_float),
        ("FocusBoneName", FName),
        ("FocusScreenYaw", c_float),
    ]


class FOneTimeDataElement(Structure):
    _fields_ = [
        ("Text", FString),
        ("Icon", FString),
        ("IconOverride", FString),
        ("TextColor", FColor),
        ("Data", POINTER(UObject)),
    ]


class FSortableDataElement(Structure):
    _fields_ = [
        ("bFiltered", c_bool, 1),
        ("", c_ulong, 0),
        ("OneTimeIdx", c_int),
        ("CategoryIdx", c_int),
        ("Data", POINTER(UObject)),
    ]


class FGFxTextEntry(Structure):
    _fields_ = [("ArrayIdx", c_int), ("Kind", c_ubyte)]


class FSortFilterConfiguration(Structure):
    _fields_ = [
        ("SortType", c_ubyte),
        ("FilterType", c_ubyte),
        ("CategoryType", c_ubyte),
        ("Unknown1", c_ubyte, 0x1),
        ("SortTitleLookupKey", FString),
    ]


class FHeavyInventoryElement(Structure):
    _fields_ = [("Text", FString), ("Color", FColor), ("Data", POINTER(UObject))]


class FItemCardInfo(Structure):
    _fields_ = [
        ("CardName", FName),
        ("ContentIdx", c_int),
        ("ItemCard", POINTER(UItemCardGFxObject)),
    ]


class FAIThrowProjectileBehaviorSequenceStateData(Structure):
    _fields_ = [
        ("Action", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("SequenceName", FName),
    ]


class FPerchStateData(Structure):
    _fields_ = [
        ("AttachmentName", FName),
        ("StaticMesh", POINTER(UStaticMesh)),
        ("SkelMesh", POINTER(USkeletalMesh)),
        ("LocOffset", FVector),
        ("RotOffset", FRotator),
        ("Scale", c_float),
        ("Actor", POINTER(AActor)),
    ]


class FBehaviorCondition(Structure):
    _fields_ = [
        ("ConditionId", int),
        ("Condition", POINTER(UExpressionEvaluator)),
        ("Behaviors", TArray_UBehaviorBasePtr),
    ]


class FDropProjectileBehaviorSequenceStateData(Structure):
    _fields_ = [
        ("Action", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("SequenceName", FName),
    ]


class FBehaviorsSelectionData(Structure):
    _fields_ = [
        ("Weight", FAttributeInitializationData),
        ("Behaviors", TArray_UBehaviorBasePtr),
    ]


class FRemoveObject(Structure):
    _fields_ = [("Name", FName)]


class FTurretConstraintData(Structure):
    _fields_ = [
        ("PitchConstraint", c_int),
        ("YawConstraint", c_int),
        ("RollConstraint", c_int),
    ]


class UBehavior_SpawnProjectile_FProjectileBehaviorSequenceStateData(Structure):
    _fields_ = [
        ("Action", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("SequenceName", FName),
    ]


class UBehavior_SpawnProjectileFromImpact_FProjectileBehaviorSequenceStateData(
    Structure
):
    _fields_ = [
        ("Action", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("SequenceName", FName),
    ]


class FCustomizationItemData(Structure):
    _fields_ = [
        ("ItemPoolKey", c_int),
        ("CustomizationItemPool", POINTER(UItemPoolDefinition)),
    ]


class FBehaviorAliasReference(Structure):
    _fields_ = [
        ("BehaviorAlias", POINTER(UBehaviorAliasDefinition)),
        ("BehaviorList", TArray_UBehaviorBasePtr),
    ]


class FMissionObjectiveStateSelectionData(Structure):
    _fields_ = [
        ("bNotStarted", c_bool, 1),
        ("bActive", c_bool, 1),
        ("bComplete", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FMissionStateSelectionData(Structure):
    _fields_ = [
        ("bNotStarted", c_bool, 1),
        ("bActive", c_bool, 1),
        ("bRequiredObjectivesComplete", c_bool, 1),
        ("bReadyToTurnIn", c_bool, 1),
        ("bComplete", c_bool, 1),
        ("bFailed", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FBlackMarketUpgradeLevelData(Structure):
    _fields_ = [
        ("UpgradeDefinition", POINTER(UBlackMarketUpgradeDefinition)),
        ("MaxUpgradeLevel", c_int),
    ]


class FTechDeathData(Structure):
    _fields_ = [
        ("EventName", FName),
        ("DamageTypeTriggers", TArray_UDamageTypeDefinitionPtr),
        ("DeathAnimation", POINTER(USpecialMoveDefinition)),
    ]


class FVehicleHandlingWheelData(Structure):
    _fields_ = [("BoneName", FName), ("WheelDef", POINTER(UVehicleWheelDefinition))]


class FFishtailingInfo(Structure):
    _fields_ = [("ContactPoint", FVector), ("Impulse", FVector)]


class FMoveToCellData(Structure):
    _fields_ = [
        ("IndexInCellsList", c_int),
        ("DistanceFromCurrentCell", c_float),
        ("CosAngle", c_float),
    ]


class FInventoryGradeModifierData(Structure):
    _fields_ = [
        ("ExpLevel", int),
        ("CustomInventoryDefinition", POINTER(UWillowInventoryDefinition)),
    ]


class FInventoryGameStageGradeWeightData(Structure):
    _fields_ = [
        ("GameStageRequirement", FGameStageRangeData),
        ("MinSpawnProbabilityModifier", FAttributeInitializationData),
        ("MaxSpawnProbabilityModifier", FAttributeInitializationData),
        ("GradeModifiers", FInventoryGradeModifierData),
    ]


class FInventoryManufacturerBalanceData(Structure):
    _fields_ = [
        ("Manufacturer", POINTER(UManufacturerDefinition)),
        ("Grades", TArray_FInventoryGameStageGradeWeightData),
    ]


class FItemPartGradeWeightData(Structure):
    _fields_ = [
        ("Part", POINTER(UItemPartDefinition)),
        ("Manufacturers", TArray_FManufacturerCustomGradeWeightData),
        ("MinGameStageIndex", c_ubyte),
        ("MaxGameStageIndex", c_ubyte),
        ("DefaultWeightIndex", c_ubyte),
    ]


class FItemCustomPartTypeData(Structure):
    _fields_ = [
        ("bEnabled", c_bool, 1),
        ("", c_ulong, 0),
        ("WeightedParts", TArray_FItemPartGradeWeightData),
    ]


class FTargetedPlayerState(Structure):
    _fields_ = [
        ("Enemy", POINTER(AWillowMind)),
        ("Player", POINTER(AActor)),
        ("InitialThreat", c_float),
        ("StoppedTargetingPlayerTime", c_float),
        ("bIsPlayerPet", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FCoordinatedVectorParameter(Structure):
    _fields_ = [("ParamName", FName), ("ParamValueOverTime", FInterpCurveVector)]


class FCoordinatedScalarParameter(Structure):
    _fields_ = [
        ("ParamName", FName),
        ("ParamValueOverTime", FInterpCurveFloat),
        ("BoundsScale", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("bConvertAxisToWorldSpace", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FCoordinatedParticleSystemDefinition(Structure):
    _fields_ = [
        ("ParticleSystem", POINTER(UParticleSystem)),
        ("LocationOffset", FVector),
        ("RotationOffset", FRotator),
        ("TriggerTime", c_float),
        ("ParticleScale", c_float),
        ("Parameters", TArray_FCoordinatedScalarParameter),
        ("VectorParameters", TArray_FCoordinatedVectorParameter),
        ("ScaleByObjectSize", c_ubyte),
    ]


class FCoordinatedAudioDefinition(Structure):
    _fields_ = [
        ("TriggerEvent", POINTER(UAkEvent)),
        ("TriggerTime", c_float),
        ("RTPC", POINTER(UAkRtpc)),
        ("RTPCOverTime", FInterpCurveFloat),
    ]


class FCreditsLine(Structure):
    _fields_ = [("LineType", POINTER(UCreditsLineDefinition)), ("Text", FString)]


class FCreditsTextureInfo(Structure):
    _fields_ = [("TexturePath", FString)]


class FCurrencyPresentation(Structure):
    _fields_ = [
        ("Type", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("WidgetFrame", FString),
        ("WidgetClip", POINTER(USwfMovie)),
    ]


class FSkillTreeTierStateData(Structure):
    _fields_ = [
        ("ParentBranchDefinition", POINTER(USkillTreeBranchDefinition)),
        ("TierNumber", c_int),
        ("PointsSpentInTier", c_int),
        ("bIsUnlocked", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FSkillTreeBranchStateData(Structure):
    _fields_ = [
        ("BranchDefinition", POINTER(USkillTreeBranchDefinition)),
        ("PointsSpentInBranch", c_int),
        ("MaxPointsForBranch", c_int),
        ("bIsUnlocked", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FTaggedMarketplaceContent(Structure):
    _fields_ = [
        ("Tag", FString),
        ("OfferId", c_int),
        ("OfferIdText", FString),
        ("OfferName", FString),
        ("SellText", FString),
        ("ContentCategory", c_int),
        ("PackageId", c_int),
        ("ContentId", c_int),
        ("bShowInStore", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FSourceObjectData(Structure):
    _fields_ = [
        ("UniqueId", c_int),
        ("SourceObject", POINTER(UObject)),
        ("SourceLocation", FVector),
        ("InstigatedByController", POINTER(AController)),
        ("DamageContext", FScriptInterface),
        ("StartDamageTime", c_float),
        ("TimeElapsedSinceLastDamage", c_float),
        ("ExplosionDef", POINTER(UExplosionDefinition)),
        ("ExplosionScaleIndex", c_int),
        ("InitialDamageRadius", c_float),
        ("Damage", c_float),
        ("bFullDamage", c_bool, 1),
        ("", c_ulong, 0),
        ("Momentum", c_float),
        ("DamageSource", POINTER(UClass)),
        ("DamageTypeDef", POINTER(UDamageTypeDefinition)),
        ("ImpactDefinition", POINTER(UImpactDefinition)),
        ("bCanDamageFriendlies", c_bool, 1),
        ("", c_ulong, 0),
        ("DamageCauser", FScriptInterface),
        ("bSkipTraceTest", c_bool, 1),
        ("", c_ulong, 0),
        ("HitObject", POINTER(UObject)),
        ("BarrelSourceTime", c_float),
        ("PlantSourceTime", c_float),
    ]


class FDamageOnlyOnceData(Structure):
    _fields_ = [("UniqueId", c_int), ("HurtActor", POINTER(AActor))]


class FDamageTypeSelectorData(Structure):
    _fields_ = [
        ("AssociatedDamageTypeName", FName),
        ("ValueIfMatched", FAttributeInitializationData),
    ]


class FDefinitionIconDatum(Structure):
    _fields_ = [
        ("DefColor", FColor),
        ("DefIcon", POINTER(UTexture2D)),
        ("DefClass", POINTER(UClass)),
    ]


class FDamageLocationData(Structure):
    _fields_ = [("Time", c_float), ("Location", FVector)]


class FRagdollDeathImpulseStruct(Structure):
    _fields_ = [
        ("Impulse", FVector),
        ("Offset", FVector),
        ("BoneName", FName),
        ("VelocityRatherThanForce", c_bool, 1),
        ("TransformImpulseByVelocityDirection", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FStaggerStateData(Structure):
    _fields_ = [
        ("bIsStaggered", c_bool, 1),
        ("bIsUnstaggering", c_bool, 1),
        ("bForced", c_bool, 1),
        ("", c_ulong, 0),
        ("State", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("StaggerStartTime", c_float),
        ("StaggerEndTime", c_float),
        ("StaggerEndRagdollTime", c_float),
        ("StaggerRecoveryStartTime", c_float),
        ("NextUnstaggerCheckTime", c_float),
        ("PreviousOverridePhysicalMaterial", POINTER(UPhysicalMaterial)),
        ("PreviousCollisionChannel", c_ubyte),
        ("Unknown2", c_ubyte, 0x3),
        ("PreviousCollisionComponent", POINTER(UPrimitiveComponent)),
        ("StaggerInstigator", POINTER(APawn)),
        ("RestaggeredCount", c_int),
    ]


class FStaggeredRecoveryRotationData(Structure):
    _fields_ = [("BoneName", FName), ("BoneAxis", c_ubyte)]


class FTurretEffect(Structure):
    _fields_ = [
        ("EffectStartTag", FName),
        ("EffectEndTag", FName),
        ("EffectTemplate", POINTER(UParticleSystem)),
        ("EffectSocket", FName),
        ("EffectRef", POINTER(UParticleSystemComponent)),
        ("EffectAudioStartAkEvent", POINTER(UAkEvent)),
        ("EffectAudioStopAkEvent", POINTER(UAkEvent)),
        ("bShutOffOnDeath", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FTurretDamageEffectData(Structure):
    _fields_ = [
        ("DamageThreshold", c_float),
        ("DamageStartTagName", FName),
        ("DamageEndTagName", FName),
        ("EffectActive", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FDeveloperData(Structure):
    _fields_ = [
        ("Gamertag", FString),
        ("UniqueId", FString),
        ("Platform", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("UnlocksGamerpics", TArray_unsigned_char),
        ("bEligibleForGearboxCustomizations", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FPerkData(Structure):
    _fields_ = [
        ("ButtonChain", TArray_FName),
        ("Command", FString),
        ("bMustBeDeveloper", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FDlcLevelTravelPair(Structure):
    _fields_ = [
        ("NonDlcStationDef", POINTER(ULevelTravelStationDefinition)),
        ("DlcStationDef", POINTER(ULevelTravelStationDefinition)),
    ]


class FDrunkenWaveFormData(Structure):
    _fields_ = [
        ("WaveFreq", FVector2D),
        ("WaveAmp", FVector2D),
        ("WavePhase", FVector2D),
    ]


class FConditionalParticleEffectData(Structure):
    _fields_ = [
        ("Expression", POINTER(UExpressionEvaluator)),
        ("ParticleEffect", POINTER(UParticleSystem)),
    ]


class FConditionalExplosionData(Structure):
    _fields_ = [
        ("Expression", POINTER(UExpressionEvaluator)),
        ("Explosion", POINTER(UExplosionDefinition)),
    ]


class FExplosionScaleData(Structure):
    _fields_ = [
        ("ExplosionPSTemplate", POINTER(UParticleSystem)),
        ("MinRadius", int),
        ("MaxRadius", int),
        ("MinParticleScale", c_float),
        ("MaxParticleScale", c_float),
        ("ExplosionAkEvent", POINTER(UAkEvent)),
        ("CameraAnim", POINTER(UCameraAnim)),
        ("MinCameraEffectDistance", c_float),
        ("MaxCameraEffectDistance", c_float),
        ("FFWaveform", POINTER(UForceFeedbackWaveform)),
        ("ImpactEffect", POINTER(UWillowExplosionImpactDefinition)),
        ("bDamageOverPeriodOfTime", c_bool, 1),
        ("", c_ulong, 0),
        ("MaxDamageDuration", c_float),
        ("DamageInterval", c_float),
        ("bDamageEachTargetOnlyOnce", c_bool, 1),
        ("bExpandRadiusOverTime", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FRecentExplosion(Structure):
    _fields_ = [
        ("ExplosionInstigatorName", FName),
        ("ExplosionLocation", FVector),
        ("ExpirationTime", c_float),
    ]


class FLootAttachmentData(Structure):
    _fields_ = [
        ("ItemPool", POINTER(UItemPoolDefinition)),
        ("PoolProbability", FAttributeInitializationData),
        ("AttachmentPointName", FName),
    ]


class FLootConfigurationData(Structure):
    _fields_ = [
        ("ConfigurationName", FName),
        ("LootGameStageVarianceFormula", POINTER(UAttributeInitializationDefinition)),
        ("Weight", FAttributeInitializationData),
        ("ItemAttachments", TArray_FLootAttachmentData),
    ]


class FInteractiveObjectReplicatedStateData(Structure):
    _fields_ = [
        ("ReplicatedBehaviorConsumerState", FReplicatedBehaviorConsumerState),
        ("ReplicatedInstanceDataState", FReplicatedInstanceDataState),
    ]


class FInteractiveObjectGradeModifierData(Structure):
    _fields_ = [
        ("CustomInteractiveObject", POINTER(UInteractiveObjectDefinition)),
        ("DisplayName", FString),
        ("ExpLevel", FAttributeInitializationData),
        ("IncludedCustomLootLists", TArray_UInteractiveObjectLootListDefinitionPtr),
        ("CustomLoot", TArray_FLootConfigurationData),
    ]


class FInteractiveObjectGameStageGradeWeightData(Structure):
    _fields_ = [
        ("GameStageRequirement", FGameStageRangeData),
        ("MinSpawnProbabilityModifier", FAttributeInitializationData),
        ("MaxSpawnProbabilityModifier", FAttributeInitializationData),
        ("GradeModifiers", FInteractiveObjectGradeModifierData),
    ]


class FBulletImpactEventData(Structure):
    _fields_ = [
        ("DamageSurfaceType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("bDisableRegularBulletDamage", c_bool, 1),
        ("", c_ulong, 0),
        ("Behaviors", TArray_UBehaviorBasePtr),
    ]


class FBulletEventResponse(Structure):
    _fields_ = [
        ("SplitNum", int),
        ("SplitAngle", c_float),
        ("SplitAngleOffset", c_float),
        ("SplitDistance", c_float),
        ("SplitFire", POINTER(UFiringModeDefinition)),
        ("NewSpeed", c_float),
        ("bDetonate", c_bool, 1),
        ("bRespawnTracer", c_bool, 1),
        ("bUpdateBeamSourceLocation", c_bool, 1),
        ("", c_ulong, 0),
        ("Behaviors", TArray_UBehaviorBasePtr),
    ]


class FBulletTimerEvent(Structure):
    _fields_ = [("Time", c_float), ("Response", FBulletEventResponse)]


class FWaveMotionData(Structure):
    _fields_ = [
        ("bUseCustomWaveMotion", c_bool, 1),
        ("", c_ulong, 0),
        ("WaveFreq", FVector),
        ("WaveAmp", FVector),
        ("WavePhase", FVector),
    ]


class FFiringPatternLine(Structure):
    _fields_ = [
        ("StartPoint", FRotator),
        ("EndPoint", FRotator),
        ("bUseStartPointOnly", c_bool, 1),
        ("", c_ulong, 0),
        ("CustomWaveMotion", FWaveMotionData),
    ]


class FActiveAreaWaypointData(Structure):
    _fields_ = [
        ("WaypointLocation", FVector),
        ("WaypointRadius", c_int),
        ("WaypointObjective", POINTER(UMissionObjectiveDefinition)),
    ]


class FActiveWaypointData(Structure):
    _fields_ = [
        ("WaypointLocation", FVector),
        ("WaypointActor", POINTER(AActor)),
        ("WaypointObjective", POINTER(UMissionObjectiveDefinition)),
        ("bCanTransition", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FColiseumStat(Structure):
    _fields_ = [("StatType", c_ubyte), ("Unknown1", c_ubyte, 0x3), ("StatValue", c_int)]


class FColiseumPlayerInfo(Structure):
    _fields_ = [
        ("WPC", POINTER(AWillowPlayerController)),
        ("Stats", TArray_FColiseumStat),
    ]


class FAreaWaypointData(Structure):
    _fields_ = [
        ("WaypointActor", POINTER(AActor)),
        ("WaypointRadius", c_int),
        ("WaypointObjective", POINTER(UMissionObjectiveDefinition)),
    ]


class FWaypointActorData(Structure):
    _fields_ = [
        ("WaypointActor", POINTER(AActor)),
        ("WaypointObjective", POINTER(UMissionObjectiveDefinition)),
        ("Waypoints", TArray_UWaypointComponentPtr),
    ]


class FMessageOfTheDay(Structure):
    _fields_ = [("Header", FString), ("Body", FString), ("DisplayTime", c_int)]


class FDataProviderInfo(Structure):
    _fields_ = [("DataProvider", FScriptInterface), ("SelectedIndex", c_int)]


class FDialogBoxButton(Structure):
    _fields_ = [
        ("Caption", FString),
        ("TipText", FString),
        ("Tag", FName),
        ("Keys", TArray_FName),
        ("OnButtonClicked", FScriptDelegate),
    ]


class FPauseTimerData(Structure):
    _fields_ = [
        ("FuncName", FName),
        ("bLoop", c_bool, 1),
        ("", c_ulong, 0),
        ("Rate", c_float),
        ("Count", c_float),
        ("TimerObj", POINTER(UObject)),
    ]


class FMissionStateBalanceAdjustment(Structure):
    _fields_ = [
        ("Mission", POINTER(UMissionDefinition)),
        ("MinGameStage", FAttributeInitializationData),
        ("MaxGameStage", FAttributeInitializationData),
        ("AwesomeLevel", FAttributeInitializationData),
    ]


class FRegionBalanceData(Structure):
    _fields_ = [
        ("Region", POINTER(URegionDefinition)),
        ("MinDefaultGameStage", FAttributeInitializationData),
        ("MaxDefaultGameStage", FAttributeInitializationData),
        ("DefaultAwesomeLevel", FAttributeInitializationData),
        ("bSpecifyBoostAbovePlayer", c_bool, 1),
        ("", c_ulong, 0),
        ("GameStageIncreaseAbovePlayer", FAttributeInitializationData),
        ("MissionOverrides", TArray_FMissionStateBalanceAdjustment),
    ]


class FFlashTextEntry(Structure):
    _fields_ = [
        ("TextEntry", FString),
        ("IconFrameLabel", FString),
        ("ArrayType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("Obj", POINTER(UObject)),
    ]


class FGrenadeModBehaviorSequenceStateData(Structure):
    _fields_ = [
        ("Action", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("SequenceName", FName),
    ]


class FGrenadeModPartBehaviorSequenceStateData(Structure):
    _fields_ = [
        ("Action", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("SequenceName", FName),
    ]


class FHitRegionDamage(Structure):
    _fields_ = [
        ("BodyHitRegion", POINTER(UBodyHitRegionDefinition)),
        ("Damage", c_float),
        ("RecentDamage", c_float),
        ("bHasGored", c_bool, 1),
        ("", c_ulong, 0),
        ("LastPctHealthForRunDamageTriggeredBehaviors", TArray_float),
        ("LastPctHealthForRunHealingTriggeredBehaviors", TArray_float),
    ]


class FMinimapIconClip(Structure):
    _fields_ = [
        ("Object", POINTER(UGFxObject)),
        ("bVisible", c_bool, 1),
        ("", c_ulong, 0),
        ("MapPos", FVector2D),
    ]


class FMinimapObjectiveIconClip(Structure):
    _fields_ = [
        ("Object", POINTER(UGFxObject)),
        ("bVisible", c_bool, 1),
        ("", c_ulong, 0),
        ("MapPos", FVector2D),
        ("OptionalClip", POINTER(UGFxObject)),
        ("AboveClip", POINTER(UGFxObject)),
        ("BelowClip", POINTER(UGFxObject)),
    ]


class FUnloadableDlcEchoCallData(Structure):
    _fields_ = [("CallDefName", FString), ("DlcPackageId", c_int)]


class FMissionWidgetMessage(Structure):
    _fields_ = [
        ("Type", c_ubyte),
        ("Category", c_ubyte),
        ("Unknown1", c_ubyte, 0x2),
        ("MissDef", POINTER(UMissionDefinition)),
        ("ObjDef", POINTER(UMissionObjectiveDefinition)),
        ("bBranch", c_bool, 1),
        ("", c_ulong, 0),
        ("Slot", c_int),
        ("SwapFromSlot", c_int),
        ("bSkipAnim", c_bool, 1),
        ("", c_ulong, 0),
        ("ModuleNum", c_int),
        ("EventTime", c_float),
    ]


class FWorldSpaceIcon(Structure):
    _fields_ = [
        ("IconClip", POINTER(UGFxObject)),
        ("ArrowClip", POINTER(UGFxObject)),
        ("bOccluded", c_bool, 1),
        ("", c_ulong, 0),
        ("NextOcclusionTestTime", c_float),
        ("CachedTextboxWidth", c_float),
        ("CachedTextboxHeight", c_float),
    ]


class FObjectiveIcon(Structure):
    _fields_ = [
        ("IconClip", POINTER(UGFxObject)),
        ("ArrowClip", POINTER(UGFxObject)),
        ("bOccluded", c_bool, 1),
        ("", c_ulong, 0),
        ("NextOcclusionTestTime", c_float),
        ("CachedTextboxWidth", c_float),
        ("CachedTextboxHeight", c_float),
        ("bInWorldSpace", c_bool, 1),
        ("", c_ulong, 0),
        ("TransitionStartTime", c_float),
        ("LastLocation", FVector),
        ("FadeAlpha", c_float),
        ("FadeScale", c_float),
        ("ObjectiveClip", POINTER(UGFxObject)),
        ("AboveClip", POINTER(UGFxObject)),
        ("BelowClip", POINTER(UGFxObject)),
        ("OptionalClip", POINTER(UGFxObject)),
    ]


class FPlayerIcon(Structure):
    _fields_ = [
        ("IconClip", POINTER(UGFxObject)),
        ("ArrowClip", POINTER(UGFxObject)),
        ("bOccluded", c_bool, 1),
        ("", c_ulong, 0),
        ("NextOcclusionTestTime", c_float),
        ("CachedTextboxWidth", c_float),
        ("CachedTextboxHeight", c_float),
        ("TextClip", POINTER(UGFxObject)),
        ("StateClip", POINTER(UGFxObject)),
    ]


class FWorldSpacePlayerInfo(Structure):
    _fields_ = [
        ("WPRI", POINTER(AWillowPlayerReplicationInfo)),
        ("WPP", POINTER(AWillowPlayerPawn)),
    ]


class FDesignerAttributeDefaultValueData(Structure):
    _fields_ = [
        ("DesignerAttribute", POINTER(UDesignerAttributeDefinition)),
        ("BaseValue", FAttributeInitializationData),
    ]


class FTopStatData(Structure):
    _fields_ = [
        ("LabelText", FString),
        ("ValueText", FString),
        ("AuxText", FString),
        ("Arrow", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("IconName", FString),
    ]


class FInputDeviceAxisData(Structure):
    _fields_ = [
        ("AxisName", FName),
        ("AxisParameter", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("DeadZone", c_float),
        ("Speed", c_float),
        ("AbsoluteAxis", c_float),
        ("InvertMultiplier", int),
        ("ActionName", FName),
        ("Caption", FString),
        ("KeyBindGroup", FName),
    ]


class FInputDeviceButtonData(Structure):
    _fields_ = [
        ("KeyName", FName),
        ("PressActions", TArray_UInputActionDefinitionPtr),
        ("TapActions", TArray_UInputActionDefinitionPtr),
        ("HoldActions", TArray_UInputActionDefinitionPtr),
        ("Caption", FString),
        ("KeyBindGroup", FName),
        ("RemapToDefaultLayoutInputAction", POINTER(UInputActionDefinition)),
    ]


class FLookAxisDefinitionData(Structure):
    _fields_ = [
        ("Horizontal", POINTER(ULookAxisDefinition)),
        ("Vertical", POINTER(ULookAxisDefinition)),
    ]


class FInputRemappingAxisData(Structure):
    _fields_ = [
        ("DefaultAxisName", FName),
        ("RemappedAxisName", FName),
        ("RemappedAxisParameter", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("bInvertInput", c_bool, 1),
        ("", c_ulong, 0),
        ("Caption", FString),
    ]


class FInputRemappingButtonData(Structure):
    _fields_ = [
        ("DefaultKeyName", FName),
        ("RemappedKeyName", FName),
        ("RemappedPressActions", TArray_UInputActionDefinitionPtr),
        ("RemappedTapActions", TArray_UInputActionDefinitionPtr),
        ("RemappedHoldActions", TArray_UInputActionDefinitionPtr),
        ("Caption", FString),
    ]


class FBehaviorKeyFrameEventData(Structure):
    _fields_ = [("EventName", FName), ("KeyTime", c_float)]


class FSimpleAnimStateData(Structure):
    _fields_ = [("AnimState", c_int)]


class FResultEntry(Structure):
    _fields_ = [
        ("Game", FOnlineGameSearchResult),
        ("Name", FString),
        ("ExpLevel", c_int),
        ("Mission", c_int),
        ("PlayThrough", c_int),
        ("NumPlayers", c_int),
        ("MaxPlayers", c_int),
        ("Ping", c_int),
    ]


class FPersistentMapDependencies(Structure):
    _fields_ = [
        ("PersistentMap", FName),
        ("SecondaryMaps", TArray_FName),
        ("ConnectedPersistents", TArray_FName),
        ("LevelName", FString),
        ("GameReleaseDef", POINTER(UGameReleaseDefinition)),
        ("DiscoveryAchievements", TArray_unsigned_char),
    ]


class FLiftBodyPair(Structure):
    _fields_ = [
        ("BodyTag", POINTER(UPopulationBodyTag)),
        ("PhaseLockDef", POINTER(UPhaseLockDefinition)),
    ]


class FLootData(Structure):
    _fields_ = [
        ("Weight", FAttributeInitializationData),
        ("ItemPools", TArray_UItemPoolDefinitionPtr),
    ]


class FManufacturerSelectorData(Structure):
    _fields_ = [
        ("AssociatedManufacturerName", FName),
        ("ValueIfMatched", FAttributeInitializationData),
    ]


class FUnlockItemData(Structure):
    _fields_ = [
        ("GameStage", c_int),
        ("UnlockItems", TArray_UInventoryBalanceDefinitionPtr),
        ("UnlockItemPools", TArray_UItemPoolDefinitionPtr),
    ]


class FMarketPlaceFilter(Structure):
    _fields_ = [("Tag", FString), ("Caption", FString), ("Filter", FString)]


class FMatchmakingResultEntry(Structure):
    _fields_ = [
        ("MatchTypeIconFrameName", FString),
        ("StatusIconFrameName", FString),
        ("Message", FString),
    ]


class FRewardData(Structure):
    _fields_ = [
        ("ExperienceRewardPercentage", FAttributeInitializationData),
        ("CurrencyRewardType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("CreditRewardMultiplier", FAttributeInitializationData),
        ("OtherCurrencyReward", FAttributeInitializationData),
        ("RewardItems", TArray_UInventoryBalanceDefinitionPtr),
        ("RewardItemPools", TArray_UItemPoolDefinitionPtr),
    ]


class FObjectiveDependencyData(Structure):
    _fields_ = [
        ("Objective", POINTER(UMissionObjectiveDefinition)),
        ("Status", c_ubyte),
    ]


class FMissionObjectiveWaypointData(Structure):
    _fields_ = [
        ("LinkedObjective", POINTER(UMissionObjectiveDefinition)),
        ("ObjectiveSetRestrictions", TArray_UMissionObjectiveSetDefinitionPtr),
    ]


class FMissionItemPoolData(Structure):
    _fields_ = [
        ("bItemAlwaysGranted", c_bool, 1),
        ("", c_ulong, 0),
        ("ItemObjective", POINTER(UMissionObjectiveDefinition)),
        ("DirectiveDefinition", POINTER(UMissionDefinition)),
        ("ItemPool", POINTER(UItemPoolDefinition)),
    ]


class FMissionKickoffData(Structure):
    _fields_ = [
        ("Mission", POINTER(UMissionDefinition)),
        ("PlayerThatAcceptedMission", POINTER(AWillowPlayerController)),
        ("bFromActivation", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FMinimapIconHelper_Director(Structure):
    _fields_ = [
        ("Director", FScriptInterface),
        ("Location", FVector),
        ("ActionableMissionDefinition", POINTER(UMissionDefinition)),
        ("bHasMoreActionableMissions", c_bool, 1),
        ("bBegins", c_bool, 1),
        ("bEnds", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FObjectiveUpdateData(Structure):
    _fields_ = [
        ("Objective", POINTER(UMissionObjectiveDefinition)),
        ("ObjectiveBit", c_int),
    ]


class FBlockedMissionData(Structure):
    _fields_ = [
        ("BlockedMission", POINTER(UMissionDefinition)),
        ("MissionBlockers", TArray_UMissionDefinitionPtr),
    ]


class FDefendTargetData(Structure):
    _fields_ = [
        ("Objective", POINTER(UMissionObjectiveDefinition)),
        ("PercentHealth", c_int),
    ]


class FDefendMissionData(Structure):
    _fields_ = [
        ("Objective", POINTER(UMissionObjectiveDefinition)),
        ("Target", FScriptInterface),
    ]


class FTimedMissionData(Structure):
    _fields_ = [
        ("Mission", POINTER(UMissionDefinition)),
        ("SecondsLeft", c_float),
        ("bTimerRunning", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FLevelTransitionData(Structure):
    _fields_ = [
        ("TargetLevel", FName),
        ("LevelTransition", POINTER(ALevelTravelStation)),
    ]


class FMissionWaypointsData(Structure):
    _fields_ = [
        ("Mission", POINTER(UMissionDefinition)),
        ("Waypoints", TArray_UWaypointComponentPtr),
    ]


class FMissionObserversData(Structure):
    _fields_ = [
        ("Mission", POINTER(UMissionDefinition)),
        ("Observers", TArray_FScriptInterface),
    ]


class FMissionSetData(Structure):
    _fields_ = [("PackageName", FName), ("Missions", TArray_UMissionDefinitionPtr)]


class FPartGradeWeightData(Structure):
    _fields_ = [
        ("Part", POINTER(UWeaponPartDefinition)),
        ("Manufacturers", TArray_FManufacturerCustomGradeWeightData),
        ("MinGameStageIndex", c_ubyte),
        ("MaxGameStageIndex", c_ubyte),
        ("DefaultWeightIndex", c_ubyte),
    ]


class FWeaponCustomPartTypeData(Structure):
    _fields_ = [
        ("bEnabled", c_bool, 1),
        ("", c_ulong, 0),
        ("WeightedParts", TArray_FPartGradeWeightData),
    ]


class FNPCList(Structure):
    _fields_ = [
        ("Mind", POINTER(AWillowMind)),
        ("LastPathTime", c_float),
        ("PathRequestTime", c_float),
        ("bWantsToPath", c_bool, 1),
        ("bOnPerch", c_bool, 1),
        ("bForceStopped", c_bool, 1),
        ("bIsPathing", c_bool, 1),
        ("bCanPath", c_bool, 1),
        ("", c_ulong, 0),
        ("Score", c_float),
    ]


class FSystemOption(Structure):
    _fields_ = [
        ("Name", FName),
        ("ValueCount", c_int),
        ("CurrValue", c_int),
        ("ValueStrings", TArray_FString),
    ]


class FCameraLerpKeyFrame(Structure):
    _fields_ = [
        ("Alpha", c_float),
        ("CameraTargetThisKeyFrame", c_ubyte),
        ("CameraRotationBehavior", c_ubyte),
        ("Unknown1", c_ubyte, 0x2),
        ("BaseCameraPosition", FVector),
        ("CameraOffset", c_float),
        ("ForcedCameraRotation", FRotator),
    ]


class FRelevanceCacheStruct(Structure):
    _fields_ = [
        ("RealViewerName", FName),
        ("ToPawnName", FName),
        ("TimeCached", c_float),
        ("NextUpdateTime", c_float),
        ("bIsRelevant", c_bool, 1),
        ("", c_ulong, 0),
        ("FromLoc", FVector),
        ("ToLoc", FVector),
        ("RotatingIndex", c_int),
    ]


class FRelevanceUpdateStruct(Structure):
    _fields_ = [
        ("FromRealViewer", POINTER(APlayerController)),
        ("SrcLocation", FVector),
        ("ToPawn", POINTER(AWillowPawn)),
        ("TimeRequested", c_float),
        ("bRelevant", c_bool, 1),
        ("", c_ulong, 0),
        ("ShouldRemove", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("bIsForcedValue", c_bool, 1),
        ("bForceNextCheckTrue", c_bool, 1),
        ("", c_ulong, 0),
        ("NextUpdateTime", c_float),
    ]


class FRelevanceBucketStruct(Structure):
    _fields_ = [
        ("NdxToStartCheckFrom", c_int),
        ("DistanceSquared", c_float),
        ("MinLineChecksPerFrame", c_int),
        ("MaxLineChecksPerFrame", c_int),
        ("MaxIterationsPerFrame", c_int),
        ("Relevance", TArray_FRelevanceUpdateStruct),
    ]


class FPCContextMenuItem(Structure):
    _fields_ = [("Caption", FString), ("Action", FString)]


class FEvalActionData(Structure):
    _fields_ = [("bIsActive", c_bool, 1), ("", c_ulong, 0), ("Action", c_ubyte)]


class FPlayerClassCountOverride(Structure):
    _fields_ = [
        ("Override", c_int),
        ("PlayerClassIdDef", POINTER(UPlayerClassIdentifierDefinition)),
    ]


class FActiveInteraction(Structure):
    _fields_ = [
        ("TimeLength", c_float),
        ("TimeRemaining", c_float),
        ("InteractionServer", POINTER(UPlayerInteractionServer)),
        ("Players", TArray_AWillowPlayerControllerPtr),
        ("Instigator", POINTER(AWillowPlayerController)),
        ("IsValid", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FSkillTreeTierLayoutData(Structure):
    _fields_ = [
        ("ParentBranchDefinition", POINTER(USkillTreeBranchDefinition)),
        ("TierNumber", c_int),
        ("DependencyBranchDefinition", POINTER(USkillTreeBranchDefinition)),
        ("DependencyTierNumber", c_int),
        ("Skills", TArray_USkillDefinitionPtr),
    ]


class FItemMemento(Structure):
    _fields_ = [
        ("SerialNumber", FInventorySerialNumber),
        ("bEquipped", c_bool, 1),
        ("bDropOnDeath", c_bool, 1),
        ("bShopsHaveInfiniteQuantity", c_bool, 1),
        ("bGrenadeStored", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FPopulatedAIPawnMemento(Structure):
    _fields_ = [
        ("PawnWeapons", TArray_FWeaponMemento),
        ("PawnItems", TArray_FItemMemento),
    ]


class FPopulatedInteractiveObjectMemento(Structure):
    _fields_ = [("BehaviorSequenceState", c_int), ("bCanBeUsed", c_ubyte * 2)]


class FFeaturedItemData(Structure):
    _fields_ = [
        ("CommerceMarkup", FAttributeInitializationData),
        ("LootConfiguration", FName),
        ("GameStageValue", FAttributeInitializationData),
        ("AwesomeLevelValue", FAttributeInitializationData),
    ]


class FPickupMemento(Structure):
    _fields_ = [
        ("Rotation", FRotator),
        ("bIsAttachedToSomething", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FPopulatedPickupMemento(Structure):
    _fields_ = [
        ("SavedInventoryClass", POINTER(UClass)),
        ("PickupMemento", FPickupMemento),
        ("WeaponMemento", FWeaponMemento),
        ("ItemMemento", FItemMemento),
    ]


class FVehicleDefaultCrewStruct(Structure):
    _fields_ = [
        ("PopulationDefForRole", POINTER(UPopulationDefinition)),
        ("Role", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("ProbabilityOfSpawn", FAttributeInitializationData),
        ("OverrideDefaultSeat", c_bool, 1),
        ("", c_ulong, 0),
        ("PreferredSeat", c_int),
    ]


class FVehicleGradeModifierData(Structure):
    _fields_ = [
        ("CustomVehicle", POINTER(AWillowVehicle)),
        ("DisplayName", FString),
        ("ExpLevel", int),
        ("OnSpawnCustomizations", TArray_UBehaviorBasePtr),
    ]


class FVehicleGameStageGradeWeightData(Structure):
    _fields_ = [
        ("GameStageRequirement", FGameStageRangeData),
        ("MinSpawnProbabilityModifier", FAttributeInitializationData),
        ("MaxSpawnProbabilityModifier", FAttributeInitializationData),
        ("GradeModifiers", FVehicleGradeModifierData),
    ]


class FPopulationOptionDenSpawnData(Structure):
    _fields_ = [
        ("PopulationDefName", FString),
        ("MaxActiveActors", c_int),
        ("NumTotalActors", c_int),
        ("NumActiveActors", c_int),
        ("NextSpawnTime", c_float),
        ("NumTotalExternalActors", c_int),
        ("NumActiveExternalActors", c_int),
    ]


class FHomingRadiusThreshold(Structure):
    _fields_ = [
        ("Radius", c_float),
        ("MaxAngleCos", c_float),
        ("Behaviors", TArray_UBehaviorBasePtr),
    ]


class FObjectReference(Structure):
    _fields_ = [("Obj", POINTER(UObject))]


class FDeferredSkillActivationData(Structure):
    _fields_ = [
        ("SkillInstigator", POINTER(AController)),
        ("Definition", POINTER(USkillDefinition)),
        ("AdditionalSkillTarget", POINTER(UObject)),
        ("SkillGrade", c_int),
        ("StateChangeDelegate", FScriptDelegate),
    ]


class FTier(Structure):
    _fields_ = [("Skills", TArray_USkillDefinitionPtr), ("PointsToUnlockNextTier", int)]


class FTierLayout(Structure):
    _fields_ = [("bCellIsOccupied", TArray_BOOL)]


class FSkillTreeUICell(Structure):
    _fields_ = [
        ("BranchNum", c_int),
        ("TierNum", c_int),
        ("CellNum", c_int),
        ("Clip_Cell", POINTER(UGFxObject)),
        ("Clip_Highlight", POINTER(UGFxObject)),
        ("Clip_Outline", POINTER(UGFxObject)),
        ("Clip_Overclocked", POINTER(UGFxObject)),
    ]


class Fartifact_datum(Structure):
    _fields_ = [("SkillIndex", c_int), ("Grade", c_int), ("Name", FString)]


class FSMPerchRandomPair(Structure):
    _fields_ = [("Weight", c_float), ("SMD", POINTER(USpecialMove_Perch))]


class FCachedInvData(Structure):
    _fields_ = [
        ("Inv", POINTER(AWillowInventory)),
        ("bReadied", c_bool, 1),
        ("", c_ulong, 0),
        ("TrashOrFavorite", c_ubyte),
    ]


class FDirectionData(Structure):
    _fields_ = [
        ("This", FName),
        ("Left", FName),
        ("Right", FName),
        ("Up", FName),
        ("Down", FName),
    ]


class FClipRect(Structure):
    _fields_ = [
        ("Top", c_float),
        ("Right", c_float),
        ("Bottom", c_float),
        ("Left", c_float),
    ]


class FMapObjectData(Structure):
    _fields_ = [
        ("Player", POINTER(AWillowPlayerController)),
        ("Vehicle", POINTER(AWillowVehicle)),
        ("Landmark", POINTER(ALevelLandmark)),
        ("ClientInteractiveObject", POINTER(AWillowInteractiveObject)),
        ("WPRI", POINTER(AWillowPlayerReplicationInfo)),
        ("bWaypoint", c_bool, 1),
        ("bAreaWaypoint", c_bool, 1),
        ("bOptional", c_bool, 1),
        ("", c_ulong, 0),
        ("WaypointIndex", c_int),
        ("CustomObjectLoc", FVector),
        ("bIsDirty", c_bool, 1),
        ("", c_ulong, 0),
        ("TransformedLocation", FVector2D),
        ("Angle", c_float),
        ("Scale", c_float),
        ("AS_IconClipPath", FString),
        ("AS_IconClipFrame", FString),
        ("AS_IconClipInnerFrame", FString),
        ("AS_IconPath", FString),
        ("bShowInfoBox", c_bool, 1),
        ("", c_ulong, 0),
        ("InfoBoxTitle", FString),
        ("InfoBoxDesc", FString),
    ]


class FTestMapsListDatum(Structure):
    _fields_ = [
        ("bUseLoader", c_bool, 1),
        ("", c_ulong, 0),
        ("MapDisplayName", FString),
        ("MapName", FName),
    ]


class FTextMarkupEntry(Structure):
    _fields_ = [
        ("MarkupTag", FString),
        ("HTMLMarkupBeginText", FString),
        ("HTMLMarkupEndText", FString),
        ("MarkupBeginTag", FString),
        ("MarkupEndTag", FString),
    ]


class FConditionalAnimationData(Structure):
    _fields_ = [
        ("Expression", POINTER(UExpressionEvaluator)),
        ("AnimationName", FName),
        ("CameraAnim", POINTER(UCameraAnim)),
        ("AnimSet", POINTER(UAnimSet)),
    ]


class FNameExpressionData(Structure):
    _fields_ = [
        ("Expressions", TArray_FAttributeExpressionData),
        ("PreModifier", FString),
        ("PostModifier", FString),
    ]


class FDamageTypeBySpeedStruct(Structure):
    _fields_ = [("Speed", c_float), ("DamageType", POINTER(UDamageTypeDefinition))]


class FCollisionDamageCalculation(Structure):
    _fields_ = [
        ("DamageType", POINTER(UDamageTypeDefinition)),
        ("DamageTypes", TArray_FDamageTypeBySpeedStruct),
        ("Formula", FAttributeInitializationData),
        ("MomentumFactor", c_float),
        ("AddZMomentum", c_float),
        ("bApplyReverseMomentum", c_bool, 1),
        ("bPercentOfTargetHealth", c_bool, 1),
        ("bApplySpeedDamage", c_bool, 1),
        ("bApplySpeedMomentum", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FVStatusEffectResistance(Structure):
    _fields_ = [
        ("ChanceResistance", FAttributeInitializationData),
        ("DurationResistance", FAttributeInitializationData),
    ]


class FVehicleCrewAnimSetMapping(Structure):
    _fields_ = [("CharacterName", FName), ("TheAnimSet", POINTER(UAnimSet))]


class FVSSUsageTracking(Structure):
    _fields_ = [
        ("TheTerminal", POINTER(AVehicleSpawnStationTerminal)),
        ("ThePlayerName", FName),
    ]


class FWeaponAmmoResourceSelectorData(Structure):
    _fields_ = [
        ("AssociatedResourceName", FName),
        ("ValueIfMatched", FAttributeInitializationData),
    ]


class FLabelToLinkageMapping(Structure):
    _fields_ = [("LabelName", FString), ("LinkageName", FString)]


class FAttributePresentationDamageTypeMapping(Structure):
    _fields_ = [
        ("Presentation", POINTER(UAttributePresentationDefinition)),
        ("DamageType", POINTER(UDamageTypeDefinition)),
    ]


class FWeaponTypeSelectorData(Structure):
    _fields_ = [
        ("WeaponType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("ValueIfMatched", FAttributeInitializationData),
    ]


class FAimAnimTransitionData(Structure):
    _fields_ = [
        ("FromState", c_ubyte),
        ("ToState", c_ubyte),
        ("Unknown1", c_ubyte, 0x2),
        ("AnimName", FName),
        ("BlendInTime", c_float),
        ("BlendOutTime", c_float),
        ("bPlayInReverse", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FBoneRotateData(Structure):
    _fields_ = [("Index", c_int), ("Rotation", FRotator)]


class FAnimDeltaDataList(Structure):
    _fields_ = [("IndexList", TArray_int)]


class FAnimSwapData(Structure):
    _fields_ = [("Index1", c_int), ("Index2", c_int)]


class FPrismDataContainer(Structure):
    _fields_ = [
        ("RotateBoneTranslation", TArray_FBoneRotateData),
        ("RotateBone", TArray_FBoneRotateData),
        ("RotateRefBone", TArray_FBoneRotateData),
        ("AnimDeltaList", TArray_FAnimDeltaDataList),
        ("AnimDeltaRefList", TArray_FAnimDeltaDataList),
        ("SwapList", TArray_FAnimSwapData),
        ("RotateRootMotion", FRotator),
    ]


class FFeatherBoneBlendTarget(Structure):
    _fields_ = [("StartBoneName", FName), ("BlendWeight", c_float)]


class FReplicatedInventoryCardData(Structure):
    _fields_ = [("ModifierValue", c_float), ("ModifierStatIndex", c_int)]


class FUIStatModifierData(Structure):
    _fields_ = [
        ("AttributePresentation", POINTER(UAttributePresentationDefinition)),
        ("ConstraintAttributePresentation", POINTER(UAttributePresentationDefinition)),
        ("AttributeStyle", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("ModifierTotal", c_float),
        ("CompareModifierTotal", c_float),
        ("DefinitionIndex", c_int),
        (
            "SupplementalAttributePresentation",
            POINTER(UAttributePresentationDefinition),
        ),
        ("SupplementalAttributeStyle", c_ubyte),
        ("Unknown2", c_ubyte, 0x3),
        ("SupplementalModifierTotal", c_float),
        ("bUseSupplementalModifier", c_bool, 1),
        ("", c_ulong, 0),
        ("StatCombinationMethod", c_ubyte),
    ]


class FProfileDefinition(Structure):
    _fields_ = [
        ("Profile", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("Definition", POINTER(UWillowAutoAimProfileDefinition)),
    ]


class FLockOnProfile(Structure):
    _fields_ = [
        ("Target", FScriptInterface),
        ("Intersection", FVector),
        ("MagneticCenterToIntersect", FVector),
        ("bWithinWorldSpaceRadius", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FViewProfile(Structure):
    _fields_ = [
        ("InPlayer", POINTER(AWillowPlayerController)),
        ("ViewNormal", FVector),
        ("ViewLocation", FVector),
        ("ViewRotation", FRotator),
        ("ViewNormalDotViewNormal", c_float),
        ("Unknown1", c_ubyte, 0x4),
        ("ViewMatrix", FMatrix),
    ]


class FBalanceMeResourceUpgradePath(Structure):
    _fields_ = [("ResourceName", FString), ("PlayerLevelForEachUpgrade", TArray_int)]


class FStatusEffectNameMapping(Structure):
    _fields_ = [("StatusEffectName", FString), ("StatusEffectDefinitionName", FString)]


class FClanMaterialData(Structure):
    _fields_ = [
        ("SourceMaterial", POINTER(UMaterialInstance)),
        ("ReplacementMaterial", POINTER(UMaterialInstance)),
    ]


class FClanSwitchData(Structure):
    _fields_ = [("SwitchName", FName), ("SwitchValue", c_int)]


class FPendingCustomization(Structure):
    _fields_ = [
        ("Definition", POINTER(UCustomizationDefinition)),
        ("Targets", TArray_FScriptInterface),
    ]


class FProductCustomizationInfo(Structure):
    _fields_ = [
        ("ProductID", c_int),
        ("NumUnlockableCustomizations", c_int),
        ("NumCustomizations", c_int),
    ]


class FCustomizationSizeMapping(Structure):
    _fields_ = [("ProductID", c_int), ("NumCustomizations", c_int)]


class FQueuedPersonalEchoLog(Structure):
    _fields_ = [
        ("Event", POINTER(UWillowDialogEventTag)),
        ("Group", POINTER(UGearboxDialogGroup)),
    ]


class FScaleformPortraitData(Structure):
    _fields_ = [("ScaleformName", FString), ("PortraitMovie", POINTER(USwfMovie))]


class FVideoPortraitData(Structure):
    _fields_ = [("VideoMovie", POINTER(UTextureMovie))]


class FEchoPortraitInfo(Structure):
    _fields_ = [
        ("PortraitType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("ScaleformPortrait", FScaleformPortraitData),
        ("VideoPortrait", FVideoPortraitData),
    ]


class FEmotePortraitInfo(Structure):
    _fields_ = [
        ("Emote", POINTER(UWillowDialogEmoteDefinition)),
        ("EmotePortrait", FEchoPortraitInfo),
    ]


class FEmoteStance(Structure):
    _fields_ = [
        ("Emote", POINTER(UWillowDialogEmoteDefinition)),
        ("StanceSpecialMove", POINTER(USpecialMoveDefinition)),
    ]


class FDynamicNavMeshConnection(Structure):
    _fields_ = [
        ("MaxConnectionDistance", c_float),
        ("ConnectedPoint", POINTER(AWillowDynamicNavMeshConnectionPoint)),
    ]


class FCoordinatedEffectIndices(Structure):
    _fields_ = [("StartingIndex", c_int), ("EndingIndex", c_int)]


class FCoordinatedEffectThread(Structure):
    _fields_ = [
        ("EffectDefinition", POINTER(UCoordinatedEffectDefinition)),
        ("IgnoreInstanceData", FName),
        ("LatentFloat", c_float),
        ("TargetFloat", c_float),
        ("ParticleSpeedMultiplier", c_float),
        ("CriticalParticleEffects", FCoordinatedEffectIndices),
        ("ParticleEffects", FCoordinatedEffectIndices),
        ("AudioEffects", FCoordinatedEffectIndices),
        ("HiddenParticles", FCoordinatedEffectIndices),
        ("EffectOwner", POINTER(AActor)),
        ("EffectID", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("bHideInstanceDataParticles", c_bool, 1),
        ("bPendingDelete", c_bool, 1),
        ("", c_ulong, 0),
        ("EffectCompleteDelegate", FScriptDelegate),
    ]


class FCoordinatedEffectProcess(Structure):
    _fields_ = [
        ("Target", POINTER(UObject)),
        ("Threads", TArray_FCoordinatedEffectThread),
        ("Player0MatIndex", c_ubyte),
        ("Player1MatIndex", c_ubyte),
    ]


class FFloatParameter(Structure):
    _fields_ = [("Name", FName), ("Value", c_float)]


class FVectorParameter(Structure):
    _fields_ = [("Name", FName), ("Value", FVector)]


class FColorParameter(Structure):
    _fields_ = [("Name", FName), ("Value", FColor)]


class FEmitterTemplateOptions(Structure):
    _fields_ = [
        ("DefaultTemplate", POINTER(UParticleSystem)),
        ("CensoredTemplateAlternative", POINTER(UParticleSystem)),
        ("bEffectEligibleForCensoring", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FDecalData(Structure):
    _fields_ = [
        ("Materials", TArray_UMaterialInterfacePtr),
        ("Width", c_float),
        ("Height", c_float),
        ("MinScale", c_float),
        ("MaxScale", c_float),
        ("RandomRotation", c_bool, 1),
        ("CreateNewMaterialInstanceConstant", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FGamepadState(Structure):
    _fields_ = [("bConnected", c_bool, 1), ("", c_ulong, 0)]


class FSubtitleProfile(Structure):
    _fields_ = [
        ("MinX", c_float),
        ("MaxX", c_float),
        ("MinY", c_float),
        ("MaxY", c_float),
    ]


class FtMenuTextPos(Structure):
    _fields_ = [
        ("TextHAlign", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("TextXPos", c_int),
        ("TextVAlign", c_ubyte),
        ("Unknown2", c_ubyte, 0x3),
        ("TextYPos", c_int),
    ]


class FColumnLayoutData(Structure):
    _fields_ = [
        ("HeaderHAlign", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("Header", FString),
        ("Width", c_float),
        ("DataHAlign", c_ubyte),
    ]


class FtMenuLayout(Structure):
    _fields_ = [
        ("Background", POINTER(UTexture2D)),
        ("BackgroundXPos", c_int),
        ("BackgroundYPos", c_int),
        ("BackgroundXL", c_int),
        ("BackgroundYL", c_int),
        ("bDrawOutlineToShowInputFocus", c_bool, 1),
        ("", c_ulong, 0),
        ("ColumnDataYL", c_int),
        ("ItemDetailYL", c_int),
        ("DescriptionBoxHeader", FString),
        ("DescriptionBoxHeaderHAlign", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("bUnderlineDescriptionBoxHeader", c_bool, 1),
        ("", c_ulong, 0),
        ("DescriptionBoxXPos", c_int),
        ("DescriptionBoxYPos", c_int),
        ("DescriptionBoxXL", c_int),
        ("TitlePos", FtMenuTextPos),
        ("bDrawHintSeparatorLine", c_bool, 1),
        ("", c_ulong, 0),
        ("HintPos", FtMenuTextPos),
        ("ColumnPadding", c_int),
        ("ColumnLayout", TArray_FColumnLayoutData),
        ("ColumnDataFont", POINTER(UFont)),
    ]


class FPlayerLineInfo(Structure):
    _fields_ = [
        ("bUpdatedThisRound", c_bool, 1),
        ("", c_ulong, 0),
        ("Avatar", FString),
        ("PRI", POINTER(APlayerReplicationInfo)),
        ("PlayerID", c_int),
        ("RoundKills", c_int),
        ("TotalKills", c_int),
    ]


class FDialogBoxLayout(Structure):
    _fields_ = [
        ("LayoutTag", FName),
        ("CancelTag", FName),
        ("Buttons", TArray_FDialogBoxButton),
    ]


class FMenuItemCallback(Structure):
    _fields_ = [("Tag", FName), ("OnClicked", FScriptDelegate)]


class FLoadCharacterData(Structure):
    _fields_ = [
        ("SaveDataId", c_int),
        ("CharLevel", c_int),
        ("CharName", FString),
        ("CharClass", FString),
        ("PlayThrough", FString),
        ("ActiveMission", FString),
        ("PlotMission", FString),
        ("CharSaveDate", FString),
        ("CharPlayedTime", FString),
        ("CharPlayedTimeInt", c_int),
        ("SaveGuid", FGuid),
        ("DlcCharDef", POINTER(UDownloadableCharacterDefinition)),
    ]


class FSaveResult(Structure):
    _fields_ = [("charID", c_int), ("Data", FPlayerSaveData)]


class FLoadingMovieExceptionInfo(Structure):
    _fields_ = [("PersistentMapName", FName), ("Tag", FName)]


class FAvailableTrackedSkill(Structure):
    _fields_ = [("SkillDef", POINTER(USkillDefinition)), ("RemappedSlot", c_int)]


class FTrackedSkillIconState(Structure):
    _fields_ = [
        ("Type", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("Icon", POINTER(USwfMovie)),
        ("PercentComplete", c_int),
        ("StackCount", c_int),
    ]


class FHUDInteractionIcon(Structure):
    _fields_ = [("Icons", FInteractionIconWithOverrides * 2)]


class FCriticalTextMessage(Structure):
    _fields_ = [
        ("Message", FString),
        ("Title", FString),
        ("DestroyTime", c_float),
        ("DrawColor", FColor),
    ]


class FCriticalTextMessageArray(Structure):
    _fields_ = [("MessageArray", TArray_FCriticalTextMessage)]


class FInjuredStringReplacementSet(Structure):
    _fields_ = [
        ("Skills", TArray_FName),
        ("NewPlayerInjuredString", FString),
        ("NewInjuredTooltipString1", FString),
        ("NewInjuredTooltipString2", FString),
    ]


class FTrackedSkillState(Structure):
    _fields_ = [
        ("SkillDef", POINTER(USkillDefinition)),
        ("PackedStackCountAndPercentComplete", c_int),
    ]


class FReplicatedStandInGear(Structure):
    _fields_ = [
        ("Weapon1Data", FWeaponDefinitionData),
        ("Weapon2Data", FWeaponDefinitionData),
        ("ShieldData", FItemDefinitionData),
        ("GrenadeModData", FItemDefinitionData),
        ("ClassModData", FItemDefinitionData),
    ]


class FScaledHUDElement(Structure):
    _fields_ = [
        ("ElementName", FString),
        ("Anchor", POINTER(UHUDScalingAnchorDefinition)),
    ]


class FTouchingPawn(Structure):
    _fields_ = [("Pawn", POINTER(APawn)), ("VolumesTouched", c_int)]


class FHitActorData(Structure):
    _fields_ = [
        ("HitActor", POINTER(AActor)),
        ("HitInfo", FTraceHitInfo),
        ("HitLocation", FVector),
        ("HitLocationRelativeToHitActor", FVector),
        ("HitNormal", FVector),
    ]


class FHomingTargetedActorInfo(Structure):
    _fields_ = [("HomingActor", POINTER(AActor)), ("HomingActorCount", c_int)]


class FObstaclePoint(Structure):
    _fields_ = [("Value", c_float), ("Offset", FVector2D)]


class FObstacleSegment(Structure):
    _fields_ = [("P1", FVector2D), ("P2", FVector2D), ("Normal", FVector2D)]


class FVelocityObstacle(Structure):
    _fields_ = [("Segments", FObstacleSegment * 3)]


class FInputDeviceButtonAddress(Structure):
    _fields_ = [
        ("SourceDevice", POINTER(UInputDeviceDefinition)),
        ("SourceIndex", c_int),
        ("RemappedButton", FPointer),
    ]


class FInputButtonData(Structure):
    _fields_ = [
        ("InputDeviceHandlers", TArray_FInputDeviceButtonAddress),
        ("ButtonName", FName),
        ("State", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("LastPressedTime", c_float),
    ]


class FDeviceLookAxisData(Structure):
    _fields_ = [
        ("SourceDevice", POINTER(UInputDeviceDefinition)),
        ("LookXAxisName", FName),
        ("LookYAxisName", FName),
    ]


class FKeyRebindingData(Structure):
    _fields_ = [("DefaultKeyName", FName), ("RemappedKeyName", FName)]


class FInputDeviceAxisAddress(Structure):
    _fields_ = [
        ("SourceDevice", POINTER(UInputDeviceDefinition)),
        ("SourceIndex", c_int),
    ]


class FAccelStateData(Structure):
    _fields_ = [
        ("bIsAccelerating", c_bool, 1),
        ("", c_ulong, 0),
        ("Warmup", c_float),
        ("CurrentSpeed", c_float),
        ("Direction", c_int),
    ]


class FInputAxisData(Structure):
    _fields_ = [
        ("AxisName", FName),
        ("InputDeviceHandler", FInputDeviceAxisAddress),
        ("ParameterPtr", FPointer),
        ("AccelState", FAccelStateData),
        ("bIsLookAxis", c_bool, 1),
        ("bIsRemappedInverted", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FSpeedTravelData(Structure):
    _fields_ = [("OriginLeaveTime", c_float), ("OriginRegion", c_ubyte)]


class FWeatherSystemEffects(Structure):
    _fields_ = [
        ("WeatherSystemTemplate", POINTER(UParticleSystem)),
        ("ScreenEffectsTemplate", POINTER(UParticleSystem)),
    ]


class FAttachmentData(Structure):
    _fields_ = [
        ("AttachmentBase", POINTER(AActor)),
        ("AttachmentBaseBoneName", FName),
        ("AttachmentRelativeOffset", FVector),
        ("AttachmentRelativeRotation", FRotator),
        ("AttachmentPhysicsMode", c_ubyte),
    ]


class FAsyncDataRequest(Structure):
    _fields_ = [
        ("RequestType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("ObjectPath", FString),
        ("Instigator", POINTER(UObject)),
        ("PlayerContext", POINTER(AWillowPlayerController)),
        ("Payload", POINTER(UObject)),
        ("CallbackEventName", FName),
        ("IntParam", c_int),
        ("FloatParam", c_float),
    ]


class FLightValues(Structure):
    _fields_ = [
        ("StartTime", c_float),
        ("Radius", c_float),
        ("Brightness", c_float),
        ("LightColor", FColor),
    ]


class FVehicleSpawnStationPooledVehicle(Structure):
    _fields_ = [
        ("SpawnedVehicle", POINTER(AWillowVehicle)),
        ("SpawnVehicleDef", POINTER(UVehicleSpawnStationVehicleDefinition)),
    ]


class FVehicleSpawnStationSlot(Structure):
    _fields_ = [
        ("PooledVehicles", TArray_FVehicleSpawnStationPooledVehicle),
        ("PooledVehicleIndex", c_int),
    ]


class FPopOppSummary(Structure):
    _fields_ = [("Summary", FString), ("Count", c_int)]


class FSpawnAnimPair(Structure):
    _fields_ = [
        ("SpawnedAnim", POINTER(USpecialMove_Spawned)),
        ("PointAnim", POINTER(USpecialMove_PopulationPoint)),
    ]


class FSpawnAnimData(Structure):
    _fields_ = [
        ("Key", POINTER(UPopulationBodyTag)),
        ("AnimPairs", TArray_FSpawnAnimPair),
        ("PreviewMeshOffset", FVector),
        ("PreviewMeshScale", c_float),
    ]


class FPursuitNode(Structure):
    _fields_ = [
        ("RelativeLocation", FVector),
        ("RelativeDistance", c_float),
        ("EvasiveActionDistance", c_float),
        ("NodeType", FName),
        ("bNeverFallback", c_bool, 1),
        ("bMultipleReservations", c_bool, 1),
        ("bIsReserved", c_bool, 1),
        ("", c_ulong, 0),
        ("LastReservedTime", c_float),
        ("ReservedBy", POINTER(AActor)),
        ("AIAlertDistance", c_float),
        ("AIAlertFlagDef", POINTER(UFlagDefinition)),
    ]


class FPursuitNodeData(Structure):
    _fields_ = [
        ("RelativeLocation", FVector),
        ("NodeType", FName),
        ("EvasiveActionDistance", c_float),
        ("AIAlertDistance", c_float),
        ("AIAlertFlagDef", POINTER(UFlagDefinition)),
        ("bNeverFallback", c_bool, 1),
        ("bMultipleReservations", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FDescriptionEntry(Structure):
    _fields_ = [("EventID", c_int), ("Description", FString)]


class FKeyBindInfo(Structure):
    _fields_ = [
        ("Tag", FName),
        ("ActionName", FName),
        ("Caption", FString),
        ("CurrentKey", FName),
        ("Object", POINTER(UGFxObject)),
    ]


class FReferencePoint(Structure):
    _fields_ = [("Type", c_ubyte), ("Unknown1", c_ubyte, 0x3), ("Name", FName)]


class FReferencePointComparisonData(Structure):
    _fields_ = [("A", FReferencePoint), ("B", FReferencePoint)]


class FResolution(Structure):
    _fields_ = [("Width", c_int), ("Height", c_int)]


class FLockOnTargetStateStruct(Structure):
    _fields_ = [
        ("CurrentTarget", POINTER(AActor)),
        ("StartTime", c_float),
        ("LockOnRequested", c_bool, 1),
        ("LockOnInProgress", c_bool, 1),
        ("", c_ulong, 0),
        ("CoolDownStartTime", c_float),
    ]


class FWeaponBoneControllerInstance(Structure):
    _fields_ = [
        ("SourcePartType", c_ubyte),
        ("BoneControlType", c_ubyte),
        ("Unknown1", c_ubyte, 0x2),
        ("BoneController", FScriptInterface),
    ]


class FShellCasingImpact(Structure):
    _fields_ = [("ImpactTime", c_float), ("ImpactLocation", FVector)]


class FColumnData(Structure):
    _fields_ = [
        ("Text", FString),
        ("HAlign", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("TextColor", FColor),
    ]


class FtMenuData(Structure):
    _fields_ = [
        ("bIsSelectable", c_bool, 1),
        ("", c_ulong, 0),
        ("ColumnText", TArray_FColumnData),
        ("PrimaryActionCmd", FString),
        ("SecondaryActionCmd", FString),
        ("TertiaryActionCmd", FString),
        ("QuaternaryActionCmd", FString),
        ("QuinaryActionCmd", FString),
        ("OverCmd", FString),
        ("LeaveCmd", FString),
        ("Data", FString),
        ("HintFontSize", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("Hint", FString),
        ("ItemDetail", FString),
        ("DescriptionBoxStr", FString),
    ]


class FMenuHeaderData(Structure):
    _fields_ = [
        ("Header", FString),
        ("Width", c_float),
        ("InterfaceName", FString),
        ("FontSize", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("TextColor", FColor),
        ("TextHighlightColor", FColor),
        ("IconColor", FColor),
        ("bDrawIcon", c_bool, 1),
        ("", c_ulong, 0),
        ("IconU", c_int),
        ("IconV", c_int),
        ("IconUL", c_int),
        ("IconVL", c_int),
    ]


class FSkillIndexLevelRequirementPair(Structure):
    _fields_ = [("SkillIndex", c_int), ("PlayerLevelRequirement", c_int)]


class FDebugConsoleCommand(Structure):
    _fields_ = [
        ("MenuName", FString),
        ("CommandName", FString),
        ("Description", FString),
        ("Command", FString),
        ("bOnClient", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FNetworkChannelData(Structure):
    _fields_ = [
        ("ChannelName", FString),
        ("StateName", FString),
        ("ActorClass", POINTER(UClass)),
        ("ActorClassName", FString),
        ("Role", FString),
        ("RemoteRole", FString),
        ("ActorClassCount", c_int),
        ("ActorClassPercent", c_float),
    ]


class FItemPartSettings(Structure):
    _fields_ = [
        ("PartList", POINTER(UItemPartListDefinition)),
        ("Part", POINTER(UItemPartDefinition)),
        ("PartName", FString),
    ]


class FGearBuilderWeightedInventoryPart(Structure):
    _fields_ = [
        ("Part", POINTER(UWillowInventoryPartDefinition)),
        ("Weight", c_float),
        ("ProbabilityOfPickingThisPart", c_float),
    ]


class FGearBuilderInventoryPartSlot(Structure):
    _fields_ = [
        ("PartName", FString),
        ("SelectedPart", c_int),
        ("WeightedPartList", TArray_FGearBuilderWeightedInventoryPart),
    ]


class FItemSettings(Structure):
    _fields_ = [
        ("ItemDefinition", POINTER(UItemDefinition)),
        ("BalanceDefinition", POINTER(UInventoryBalanceDefinition)),
        ("ManufacturerDefinition", POINTER(UManufacturerDefinition)),
        ("ManufacturerGradeIndex", c_int),
        ("Level", c_int),
        ("GenericParts", FGearBuilderInventoryPartSlot * 9),
        ("CurrentPartBeingSet", c_int),
        ("ItemBuilderIndex", c_int),
        ("ActiveSubmenuForThisItem", c_int),
    ]


class FGearBuilderWeightedWeaponPart(Structure):
    _fields_ = [
        ("Part", POINTER(UWeaponPartDefinition)),
        ("Weight", c_float),
        ("ProbabilityOfPickingThisPart", c_float),
    ]


class FGearBuilderWeaponPartSlot(Structure):
    _fields_ = [
        ("PartName", FString),
        ("SelectedPart", c_int),
        ("WeightedPartList", TArray_FGearBuilderWeightedWeaponPart),
    ]


class FWeaponSettings(Structure):
    _fields_ = [
        ("WeaponTypeDefinition", POINTER(UWeaponTypeDefinition)),
        ("BalanceDefinition", POINTER(UWeaponBalanceDefinition)),
        ("ManufacturerDefinition", POINTER(UManufacturerDefinition)),
        ("ManufacturerGradeIndex", c_int),
        ("Level", c_int),
        ("GenericParts", FGearBuilderWeaponPartSlot * 9),
        ("CurrentPartBeingSet", c_int),
    ]


class FItemBuilderData(Structure):
    _fields_ = [
        ("TabName", FString),
        ("ItemName", FString),
        ("BuildItemMessage", FString),
        ("InventoryDefinitionClassName", FString),
        ("InventoryBalanceDefinitionNames", TArray_FString),
    ]


class FItemBuilderBalanceDefinition(Structure):
    _fields_ = [
        ("InventoryDefinitionClass", POINTER(UClass)),
        ("BalanceDefinitions", TArray_FString),
    ]


class FGearBuilderCustomizationData(Structure):
    _fields_ = [("SortValue", c_int), ("BalanceDefinition", FString)]


class FGearBuilderCustomizationUsageData(Structure):
    _fields_ = [
        ("Usage", POINTER(UClass)),
        ("CustomizationBalanceDefinitions", TArray_FGearBuilderCustomizationData),
    ]


class FVirtualSeatStruct(Structure):
    _fields_ = [("NameKey", FName), ("CurrentRealSeat", c_int)]


class FVehicleEffect(Structure):
    _fields_ = [
        ("EffectStartTag", FName),
        ("EffectEndTag", FName),
        ("EffectTemplate", POINTER(UParticleSystem)),
        ("EffectSocket", FName),
        ("EffectRef", POINTER(UParticleSystemComponent)),
        ("EffectAudioStartAkEvent", POINTER(UAkEvent)),
        ("EffectAudioStopAkEvent", POINTER(UAkEvent)),
        ("bOnlyPassengersSee", c_bool, 1),
        ("bShutOffOnDeath", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FFDamageMorphTargets(Structure):
    _fields_ = [
        ("MorphNodeName", FName),
        ("MorphNode", POINTER(UMorphNodeWeight)),
        ("LinkedMorphNodeName", FName),
        ("LinkedMorphNodeIndex", c_int),
        ("AssociatedSkelControl", FName),
        ("InfluenceBone", FName),
        ("Health", c_int),
        ("DamagePropNames", TArray_FName),
    ]


class FSuspensionSound(Structure):
    _fields_ = [
        ("LastSuspensionTravel", c_float),
        ("LastPlayTime", c_float),
        ("PlayingInfo", FAkPlayingInfo),
    ]


class FIndexPair(Structure):
    _fields_ = [("Index1", c_int), ("Index2", c_int)]


class FTankSensor(Structure):
    _fields_ = [
        ("Socket", FName),
        ("Type", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("SearchLength", c_float),
        ("HitLength", c_float),
    ]


class FPhysicalMaterialTireModel(Structure):
    _fields_ = [
        ("PhysMaterial", POINTER(UPhysicalMaterial)),
        ("LongGripScaler", c_float),
        ("LatGripScaler", c_float),
    ]


class FDuelTeamInfo(Structure):
    _fields_ = [("TeamAllegiance", POINTER(UPawnAllegiance)), ("TeamColor", FColor)]


class FDuelTeamPair(Structure):
    _fields_ = [("ChallengerTeam", FDuelTeamInfo), ("CompetitorTeam", FDuelTeamInfo)]


class FTempWeaponStruct(Structure):
    _fields_ = [("DefinitionData", FWeaponDefinitionData), ("Ammo", c_int)]


class FTempProfileStruct(Structure):
    _fields_ = [
        ("Allegiance", POINTER(UPawnAllegiance)),
        ("Health", c_float),
        ("Shield", c_float),
        ("Weapons", TArray_FTempWeaponStruct),
    ]


class FBalanceModification(Structure):
    _fields_ = [
        ("MinEffectiveLevel", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("EnemyHealthMultiplier", c_float),
        ("BadassEnemyHealthMultiplier", c_float),
        ("EnemyShieldStrengthMultiplier", c_float),
        ("BadassEnemyShieldStrengthMultiplier", c_float),
        ("EnemyDamageMultiplier", c_float),
        ("BadassEnemyDamageMultiplier", c_float),
        ("XPGainedFromCombatMultiplier", c_float),
        ("XPGainedFromQuestsMultiplier", c_float),
        ("BadassRankGainMultiplier", c_float),
        ("AmplifiedDamageMultiplier", c_float),
        ("PlayerVehicleWeaponDamageMultiplier", c_float),
        ("AttributeEffectsForSpawnedEnemies", TArray_FAttributeEffectData),
        ("AttributeEffectsForPlayers", TArray_FAttributeEffectData),
        ("AmmoDropsPerPlayerMultiplier", FAttributeInitializationData),
        (
            "GearDrops_CommonWeightModifier_PT3_BaseValueOverride",
            FAttributeInitializationData,
        ),
        (
            "ChestItemPool_Weight_2_Uncommon_PT3_Multiplier",
            FAttributeInitializationData,
        ),
        ("StatusEffectChanceScales", TArray_FLevelBasedStatusEffectChanceScale),
        ("AIDamageScaleByLevelDifference", TArray_FLevelBasedDamageScale),
    ]


class FBlackMarketPostLaunchUpgradeData(Structure):
    _fields_ = [("EridiumCostForUpgrade", c_int)]


class FMapSpecificBalanceModificationList(Structure):
    _fields_ = [
        ("MapName", FName),
        ("AIPawnBalanceModifiers", TArray_UAIPawnBalanceModifierDefinitionPtr),
    ]


class FBalancedInventoryDataMirror(Structure):
    _fields_ = [
        ("bIsItemPool", c_bool, 1),
        ("", c_ulong, 0),
        ("ObjectName", FName),
        ("ObjectPath", FString),
    ]


class FLegacyCustomizationItemData(Structure):
    _fields_ = [
        ("ItemPoolDefPath", FString),
        ("ItemPoolKey", c_int),
        ("CustomizationItemPool", POINTER(UItemPoolDefinition)),
    ]


class FPremiumCustomizationInfo(Structure):
    _fields_ = [
        ("OfferId", c_int),
        ("PackageId", c_int),
        ("ContentId", c_int),
        ("PS3TitleId", FString),
    ]


class FAIPawnPlaythroughThreeData(Structure):
    _fields_ = [
        ("AIPawnBalanceDefinitionFullObjectName", FString),
        ("DisplayName", FString),
        ("TransformedNames", TArray_FAITransformedName),
    ]


class FDirChangeRateRange(Structure):
    _fields_ = [("DirDegreesPerSecond", c_float), ("SpeedRange", c_float)]
