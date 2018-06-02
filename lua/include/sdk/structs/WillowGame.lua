// 0x14 
struct FAchievementUnlockData {
	unsigned char UnlockType; // 0x0 (0x1) (Enum = EAchievementUnlockType)
	unsigned char Achievement; // 0x1 (0x1) (Enum = EWillowAchievementList)
	const unsigned char Unknown1[0x2]; // 0x2 (0x2) > LAST OFFSET
	struct FString StringData; // 0x4 (0xC)
	int IntData; // 0x10 (0x4)
};

// 0x24 
struct FPlayerRecentDamageEventData {
	struct UWillowDamageTypeDefinition* DamageTypeDefinition; // 0x0 (0x4)
	struct FVector DamageLocation; // 0x4 (0xC)
	float TotalDamageForDamageType; // 0x10 (0x4)
	unsigned char DamageEventFlags; // 0x14 (0x1)
	const unsigned char Unknown1[0x3]; // 0x15 (0x3) > LAST OFFSET
	BOOL bDirty : 1; // 0x18 (0x4)
	const unsigned long: 0;
	float DamageTime; // 0x1C (0x4)
	struct AActor* DamagedActor; // 0x20 (0x4)
};

// 0xC 
struct FVehicleCrewMappingStruct {
	const struct FName VehicleArchetypeName; // 0x0 (0x8)
	const struct UAnimSet* AnimSet; // 0x8 (0x4)
};

// 0x8 
struct FInjuredLoopOverride {
	const struct UWillowDialogNameTag* NameTag; // 0x0 (0x4)
	const struct UAkEvent* StartAkEvent; // 0x4 (0x4)
};

// 0xC 
struct FBreathingLoopInfo {
	const struct UExpressionEvaluator* Condition; // 0x0 (0x4)
	const struct UAkEvent* StartAkEvent; // 0x4 (0x4)
	const struct UAkEvent* StopAkEvent; // 0x8 (0x4)
};

// 0x14 
struct FCustomCringeData {
	const BOOL bDOT : 1; // 0x0 (0x4)
	const unsigned long: 0;
	const unsigned char DamageType; // 0x4 (0x1) (Enum = EDamageType)
	const unsigned char Unknown1[0x3]; // 0x5 (0x3) > LAST OFFSET
	const struct TArray_USpecialMove_CringePtr Cringes; // 0x8 (0xC)
};

// 0x28 
struct FPainDialogLine {
	const struct UGearboxDialogEventTag* DET_Pain; // 0x0 (0x4)
	const float DamageThresholdPct; // 0x4 (0x4)
	const float ChanceToPlay; // 0x8 (0x4)
	const struct UAkEvent* AkEvent; // 0xC (0x4)
	const BOOL bDeathSound : 1; // 0x10 (0x4)
	const BOOL bCriticalHitSound : 1; // 0x10 (0x4)
	const BOOL bRanOverSound : 1; // 0x10 (0x4)
	const BOOL bGoreTechDeathSound : 1; // 0x10 (0x4)
	const unsigned long: 0;
	const unsigned char FlinchAnimType; // 0x14 (0x1) (Enum = EFlinchSeverity)
	const unsigned char Unknown1[0x3]; // 0x15 (0x3) > LAST OFFSET
	const float FlinchImpulseStrength; // 0x18 (0x4)
	const struct TArray_UBehaviorBasePtr PainBehaviors; // 0x1C (0xC)
};

// 0x24 
struct FExtraWeaponSlot {
	struct FName Socket; // 0x0 (0x8)
	BOOL bShowWeaponMesh : 1; // 0x8 (0x4)
	const unsigned long: 0;
	struct USkeletalMeshComponent* Mesh; // 0xC (0x4)
	struct UParticleSystemComponent* MuzzleFlash; // 0x10 (0x4)
	struct TArray_UParticleSystemComponentPtr AltMuzzleFlashes; // 0x14 (0xC)
	struct UWillowPointLight* MuzzleFlashLight; // 0x20 (0x4)
};

// 0x1C 
struct FTurnData {
	const float MinRepeatTime; // 0x0 (0x4)
	const struct USpecialMove_Turn* Left; // 0x4 (0x4)
	const struct USpecialMove_Turn* Right; // 0x8 (0x4)
	const struct USpecialMove_Turn* Left; // 0xC (0x4)
	const struct USpecialMove_Turn* Right; // 0x10 (0x4)
	const struct USpecialMove_Turn* Left; // 0x14 (0x4)
	const struct USpecialMove_Turn* Right; // 0x18 (0x4)
};

// 0x20 
struct FCombatZone {
	int Index; // 0x0 (0x4)
	struct FBox Bounds; // 0x4 (0x1C)
};

// 0x4 
struct FCoverExposureData {
	BOOL bExposedUp : 1; // 0x0 (0x4)
	BOOL bExposedLeft : 1; // 0x0 (0x4)
	BOOL bExposedRight : 1; // 0x0 (0x4)
	const unsigned long: 0;
};

// 0x14 
struct FCombatPointDebugData {
	BOOL bBest : 1; // 0x0 (0x4)
	const unsigned long: 0;
	float Score; // 0x4 (0x4)
	struct FVector Location; // 0x8 (0xC)
};

// 0x38 
struct FCombatPointData {
	int Slot; // 0x0 (0x4)
	struct FVector Location; // 0x4 (0xC)
	struct FActorReference Actor; // 0x10 (0x14)
	unsigned char ConstraintType; // 0x24 (0x1) (Enum = EPopPointContraintType)
	const unsigned char Unknown1[0x3]; // 0x25 (0x3) > LAST OFFSET
	struct TArray_UPopulationSpawnedActorTagDefinitionPtr ConstraintTags; // 0x28 (0xC)
	BOOL bClaimed : 1; // 0x34 (0x4)
	const unsigned long: 0;
};

// 0x28 
struct FCombatZoneSearchData {
	const float ZoneMoveDist; // 0x0 (0x4)
	const struct FAIRange ZoneTimeLimit; // 0x4 (0x8)
	const struct FAIRange TargetRange; // 0xC (0x8)
	const float MinHeight; // 0x14 (0x4)
	const BOOL bCanFail : 1; // 0x18 (0x4)
	const unsigned long: 0;
	const unsigned char LineOfSight; // 0x1C (0x1) (Enum = ECombatPointLOS)
	const unsigned char Unknown1[0x3]; // 0x1D (0x3) > LAST OFFSET
	const struct FAIRange LineOfSightTimeLimit; // 0x20 (0x8)
};

// 0x30 
struct FCombatPointSearchData {
	const float ZoneMoveDist; // 0x0 (0x4)
	const struct FAIRange ZoneTimeLimit; // 0x4 (0x8)
	const struct FAIRange TargetRange; // 0xC (0x8)
	const float MinHeight; // 0x14 (0x4)
	const BOOL bCanFail : 1; // 0x18 (0x4)
	const unsigned long: 0;
	const unsigned char LineOfSight; // 0x1C (0x1) (Enum = ECombatPointLOS)
	const unsigned char Unknown1[0x3]; // 0x1D (0x3) > LAST OFFSET
	const struct FAIRange LineOfSightTimeLimit; // 0x20 (0x8)
	BOOL bUseCover : 1; // 0x28 (0x4)
	const unsigned long: 0;
	float PointRadius; // 0x2C (0x4)
};

// 0x10 
struct FPerchAnimData {
	struct UPopulationBodyTag* Key; // 0x0 (0x4)
	struct USpecialMove_Perch* StartAnim; // 0x4 (0x4)
	struct USpecialMove_Perch* StopAnim; // 0x8 (0x4)
	struct USpecialMove_PerchLoop* IdleAnim; // 0xC (0x4)
};

// 0x14 
struct FWillowCoverState {
	struct FName Action; // 0x0 (0x8)
	struct FCoverInfo Cover; // 0x8 (0x8)
	struct UWillowCoverStanceDefinition* Stance; // 0x10 (0x4)
};

// 0x10 
struct FEnemyBreadCrumbStruct {
	struct FVector pos; // 0x0 (0xC)
	struct AWillowVehicleCombatArea* CombatArea; // 0xC (0x4)
};

// 0x10 
struct FSplineAnimPathData {
	struct ASplineActor* StartSpline; // 0x0 (0x4)
	struct FName AnimSeqName; // 0x4 (0x8)
	BOOL bReverse : 1; // 0xC (0x4)
	const unsigned long: 0;
};

// 0x20 
struct FTrajectoryData {
	float Speed; // 0x0 (0x4)
	float AnglePct; // 0x4 (0x4)
	float Angle; // 0x8 (0x4)
	float Error; // 0xC (0x4)
	struct FVector Offset; // 0x10 (0xC)
	float PredictDistMax; // 0x1C (0x4)
};

// 0x28 
struct FBeamDamageData {
	float Momentum; // 0x0 (0x4)
	float Amount; // 0x4 (0x4)
	float Radius; // 0x8 (0x4)
	struct UClass* Source; // 0xC (0x4)
	struct UDamageTypeDefinition* TypeDefinition; // 0x10 (0x4)
	float BarrelSourceTime; // 0x14 (0x4)
	float PlantSourceTime; // 0x18 (0x4)
	struct FScriptInterface DamageCauser; // 0x1C (0x8)
	BOOL bCanDamageFriendlies : 1; // 0x24 (0x4)
	const unsigned long: 0;
};

// 0x5C 
struct FServerBeamState {
	BOOL bDeleteMe : 1; // 0x0 (0x4)
	const unsigned long: 0;
	struct FBeamDamageData DamageData; // 0x4 (0x28)
	struct AController* DamageInstigator; // 0x2C (0x4)
	float StartTime; // 0x30 (0x4)
	float LockTime; // 0x34 (0x4)
	float NextTraceTime; // 0x38 (0x4)
	float BeamNetUpdateTime; // 0x3C (0x4)
	float LastDamageApplicationTime; // 0x40 (0x4)
	struct AActor* LastDamagedActor; // 0x44 (0x4)
	float NextRandomBoneTime; // 0x48 (0x4)
	int ParentBeamIndex; // 0x4C (0x4)
	struct TArray_int ChildBeamsIndicies; // 0x50 (0xC)
};

// 0x24 
struct FBeamLocationData {
	struct AActor* Actor; // 0x0 (0x4)
	struct FName Socket; // 0x4 (0x8)
	struct FVector Offset; // 0xC (0xC)
	BOOL bUseWeapon : 1; // 0x18 (0x4)
	const unsigned long: 0;
	struct FScriptInterface WorldBody; // 0x1C (0x8)
};

// 0x5C 
struct FReplicatedBeamState {
	BOOL bEnabled : 1; // 0x0 (0x4)
	const unsigned long: 0;
	struct UFiringModeDefinition* FireDef; // 0x4 (0x4)
	struct UImpactDefinition* ImpactDefinition; // 0x8 (0x4)
	BOOL bLocked : 1; // 0xC (0x4)
	const unsigned long: 0;
	struct FBeamLocationData SourceData; // 0x10 (0x24)
	struct FBeamLocationData TargetData; // 0x34 (0x24)
	BOOL bPlayImpactAudio : 1; // 0x58 (0x4)
	const unsigned long: 0;
};

// 0x118 
struct FBeamState {
	int BeamIndex; // 0x0 (0x4)
	struct FServerBeamState ServerOnlyState; // 0x4 (0x5C)
	struct FReplicatedBeamState CoreBeamState; // 0x60 (0x5C)
	struct UParticleSystemComponent* PartRef; // 0xBC (0x4)
	struct FAkPlayingInfo BeamAudioInfo; // 0xC0 (0x8)
	struct FAkPlayingInfo BeamImpactAudioInfo; // 0xC8 (0x8)
	struct FVector CurrentStartPoint; // 0xD0 (0xC)
	struct FVector CurrentEndPoint; // 0xDC (0xC)
	struct FVector CurrentStartTangent; // 0xE8 (0xC)
	struct FVector CurrentEndTangent; // 0xF4 (0xC)
	struct FRotator CurrentDirection; // 0x100 (0xC)
	struct FVector LastImpactLocation; // 0x10C (0xC)
};

// 0x88 
struct FLightProjectile {
	BOOL bEnabled : 1; // 0x0 (0x4)
	BOOL bPendingAdd : 1; // 0x0 (0x4)
	BOOL bNeedsConstantTrace : 1; // 0x0 (0x4)
	BOOL bStartParticleTracerAtWeapon : 1; // 0x0 (0x4)
	BOOL bActorReflected : 1; // 0x0 (0x4)
	BOOL bEnemyPenetrating : 1; // 0x0 (0x4)
	BOOL bOvercharged : 1; // 0x0 (0x4)
	BOOL bRicochetTowardsEnemy : 1; // 0x0 (0x4)
	BOOL bPenetrateUsingOriginalTraceDirection : 1; // 0x0 (0x4)
	const unsigned long: 0;
	struct FVector Location; // 0x4 (0xC)
	struct FVector PartLocation; // 0x10 (0xC)
	struct FVector Velocity; // 0x1C (0xC)
	struct UParticleSystemComponent* PartRef; // 0x28 (0x4)
	struct FAkPlayingInfo AudioRef; // 0x2C (0x8)
	struct UFiringModeDefinition* FireDef; // 0x34 (0x4)
	float StartTime; // 0x38 (0x4)
	int NumRicochets; // 0x3C (0x4)
	float LastTraceTime; // 0x40 (0x4)
	struct FVector LastSafeTraceStartLocation; // 0x44 (0xC)
	struct AActor* LastHitActor; // 0x50 (0x4)
	struct APawn* Instigator; // 0x54 (0x4)
	float Damage; // 0x58 (0x4)
	int FiringPatternIdx; // 0x5C (0x4)
	unsigned char BulletFromClipType; // 0x60 (0x1) (Enum = EBulletFromClip)
	unsigned char bHitWater; // 0x61 (0x1)
	unsigned char PenetrationCount; // 0x62 (0x1)
	unsigned char Id; // 0x63 (0x1)
	struct FVector StartTrace; // 0x64 (0xC)
	struct FVector EndTrace; // 0x70 (0xC)
	struct FVector OriginalStartTrace; // 0x7C (0xC)
};

// 0x34 
struct FReplicatedLightProjectile {
	BOOL bEnabled : 1; // 0x0 (0x4)
	BOOL bStartParticleTracerAtWeapon : 1; // 0x0 (0x4)
	BOOL bActorReflected : 1; // 0x0 (0x4)
	BOOL bEnemyPenetrating : 1; // 0x0 (0x4)
	BOOL bOvercharged : 1; // 0x0 (0x4)
	BOOL bRicochetTowardsEnemy : 1; // 0x0 (0x4)
	const unsigned long: 0;
	unsigned char Id; // 0x4 (0x1)
	const unsigned char Unknown1[0x3]; // 0x5 (0x3) > LAST OFFSET
	struct FVector StartTrace; // 0x8 (0xC)
	struct FVector EndTrace; // 0x14 (0xC)
	float ReflectSpeed; // 0x20 (0x4)
	struct UFiringModeDefinition* FireDef; // 0x24 (0x4)
	int FiringPatternIdx; // 0x28 (0x4)
	struct APawn* Instigator; // 0x2C (0x4)
	float StartTime; // 0x30 (0x4)
};

// 0x18 
struct FReplicatedBeamEndPoints {
	struct FVector StartPoint; // 0x0 (0xC)
	struct FVector EndPoint; // 0xC (0xC)
};

// 0x8 
struct FSwoopAttackData {
	BOOL bTriggered : 1; // 0x0 (0x4)
	const BOOL bCacheTargetLocation : 1; // 0x0 (0x4)
	const unsigned long: 0;
	const float Distance; // 0x4 (0x4)
};

// 0xC 
struct FActionSkillCustomEventReplicationData {
	unsigned char EventCountForReplication; // 0x0 (0x1)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	struct FName EventName; // 0x4 (0x8)
};

// 0x28 
struct FCachedWeaponInfo {
	int CachedClipSize; // 0x0 (0x4)
	int CachedAmmoInClip; // 0x4 (0x4)
	int CachedAmmoNotInClip; // 0x8 (0x4)
	unsigned char CachedWeaponIsReloading; // 0xC (0x1)
	const unsigned char Unknown1[0x3]; // 0xD (0x3) > LAST OFFSET
	struct FString CachedWeaponType; // 0x10 (0xC)
	struct USwfMovie* CachedWeaponTypeDLCClip; // 0x1C (0x4)
	int IsReloadIconDisplayed; // 0x20 (0x4)
	int IsInteractionIconDisplayed; // 0x24 (0x4)
};

// 0x34 
struct FWillowStatProperty {
	struct FName Id; // 0x0 (0x8)
	struct FSettingsData Data; // 0x8 (0xC)
	struct FSettingsData MaxData; // 0x14 (0xC)
	struct FSettingsData ChallengeBaseData; // 0x20 (0xC)
	int OnlineId; // 0x2C (0x4)
	BOOL bSparkStatDirty : 1; // 0x30 (0x4)
	BOOL bSparkStatInFlight : 1; // 0x30 (0x4)
	const unsigned long: 0;
};

// 0x18 
struct FAttributeCategory {
	struct FString Category; // 0x0 (0xC)
	struct TArray_FAttributeBaseValueData Attributes; // 0xC (0xC)
};

// 0xC 
struct FDeathByWeaponStatID {
	unsigned char DamageCauserType; // 0x0 (0x1) (Enum = EDamageCauserType)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	struct FName StatId; // 0x4 (0x8)
};

// 0xC 
struct FDeathByDamageTypeStatID {
	unsigned char DamageType; // 0x0 (0x1) (Enum = EDamageType)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	struct FName StatId; // 0x4 (0x8)
};

// 0xC 
struct FDeathByWeaponDamageStatID {
	unsigned char DamageType; // 0x0 (0x1) (Enum = EDamageType)
	unsigned char DamageCauserType; // 0x1 (0x1) (Enum = EDamageCauserType)
	const unsigned char Unknown1[0x2]; // 0x2 (0x2) > LAST OFFSET
	struct FName StatId; // 0x4 (0x8)
};

// 0x14 
struct FInteractionIconWithOverrides {
	struct UInteractionIconDefinition* IconDef; // 0x0 (0x4)
	struct UInteractionIconDefinition* OverrideIconDef; // 0x4 (0x4)
	BOOL bOverrideIcon : 1; // 0x8 (0x4)
	BOOL bOverrideAction : 1; // 0x8 (0x4)
	BOOL bOverrideText : 1; // 0x8 (0x4)
	const unsigned long: 0;
	unsigned char bCostsToUse; // 0xC (0x1)
	unsigned char CostsCurrencyType; // 0xD (0x1) (Enum = ECurrencyType)
	const unsigned char Unknown1[0x2]; // 0xE (0x2) > LAST OFFSET
	int CostsAmount; // 0x10 (0x4)
};

// 0xC 
struct FServerDynamicRadarIconData {
	struct UObject* SourceObject; // 0x0 (0x4)
	float Duration; // 0x4 (0x4)
	float StartTime; // 0x8 (0x4)
};

// 0x14 
struct FRemoteDynamicRadarIconData {
	unsigned char IconType; // 0x0 (0x1) (Enum = ERadarIconType)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	struct FVector Location; // 0x4 (0xC)
	BOOL bActive : 1; // 0x10 (0x4)
	const unsigned long: 0;
};

// 0x18 
struct FAITransformedName {
	const unsigned char Type; // 0x0 (0x1) (Enum = EAITransformed)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	const struct FString TransformedName; // 0x4 (0xC)
	const struct FName TransformedKillStat; // 0x10 (0x8)
};

// 0x14 
struct FItemPoolInfo {
	const struct UItemPoolDefinition* ItemPool; // 0x0 (0x4)
	const struct FAttributeInitializationData PoolProbability; // 0x4 (0x10)
};

// 0x50 
struct FAIPawnPlaythroughData {
	const int PlayThrough; // 0x0 (0x4)
	const struct FString DisplayName; // 0x4 (0xC)
	struct TArray_FAITransformedName TransformedNames; // 0x10 (0xC)
	const struct TArray_UBehaviorBasePtr OnSpawnCustomizations; // 0x1C (0xC)
	const struct TArray_FAttributeBaseValueData AttributeStartingValues; // 0x28 (0xC)
	const struct TArray_UItemPoolListDefinitionPtr CustomItemPoolIncludedLists; // 0x34 (0xC)
	const struct TArray_FItemPoolInfo CustomItemPoolList; // 0x40 (0xC)
	const struct UMaterialInstance* MeshMaterial; // 0x4C (0x4)
};

// 0x50 
struct FAIPawnGradeModifierData {
	const struct AWillowAIPawn* CustomAIPawnArchetype; // 0x0 (0x4)
	const struct FString DisplayName; // 0x4 (0xC)
	const int ExpLevel; // 0x10 (0x4)
	const struct TArray_UBehaviorBasePtr OnSpawnCustomizations; // 0x14 (0xC)
	const struct TArray_FAttributeBaseValueData AttributeStartingValues; // 0x20 (0xC)
	const struct TArray_UItemPoolListDefinitionPtr CustomItemPoolIncludedLists; // 0x2C (0xC)
	const struct TArray_FItemPoolInfo CustomItemPoolList; // 0x38 (0xC)
	struct TArray_FAITransformedName TransformedNames; // 0x44 (0xC)
};

// 0x78 
struct FAIPawnGameStageGradeWeightData {
	const struct FGameStageRangeData GameStageRequirement; // 0x0 (0x8)
	const struct FAttributeInitializationData MinSpawnProbabilityModifier; // 0x8 (0x10)
	const struct FAttributeInitializationData MaxSpawnProbabilityModifier; // 0x18 (0x10)
	const struct FAIPawnGradeModifierData GradeModifiers; // 0x28 (0x50)
};

// 0x20 
struct FCellInfo {
	struct FVector AbsolutePosition; // 0x0 (0xC)
	float Width; // 0xC (0x4)
	float Height; // 0x10 (0x4)
	struct FString CellName; // 0x14 (0xC)
};

// 0x10 
struct FCellContentData {
	struct UTexture* Tex; // 0x0 (0x4)
	struct UMeshComponent* Mesh; // 0x4 (0x4)
	struct AWillowInventory* Inv; // 0x8 (0x4)
	int ExtArrayIndex; // 0xC (0x4)
};

// 0x40 
struct FPanelInfo {
	struct FName PanelName; // 0x0 (0x8)
	struct FVector PanelFocused; // 0x8 (0xC)
	struct FVector PanelUnfocused; // 0x14 (0xC)
	struct FVector PanelCompare; // 0x20 (0xC)
	unsigned char PanelBackground; // 0x2C (0x1) (Enum = EStoragePanelBackground)
	const unsigned char Unknown1[0x3]; // 0x2D (0x3) > LAST OFFSET
	int CellWidth; // 0x30 (0x4)
	int CellHeight; // 0x34 (0x4)
	int TextureWidth; // 0x38 (0x4)
	int TextureHeight; // 0x3C (0x4)
};

// 0x18 
struct FCardInfoRelativeToPanel {
	struct FName PanelName; // 0x0 (0x8)
	struct FVector ComparePosition; // 0x8 (0xC)
	float CompareScale; // 0x14 (0x4)
};

// 0x3C 
struct FCardInfo {
	struct FName CardName; // 0x0 (0x8)
	int CellWidth; // 0x8 (0x4)
	int CellHeight; // 0xC (0x4)
	int TextureWidth; // 0x10 (0x4)
	int TextureHeight; // 0x14 (0x4)
	struct FString MainPlayerLinkageName; // 0x18 (0xC)
	struct FString SplitPlayerLinkageName; // 0x24 (0xC)
	struct TArray_FCardInfoRelativeToPanel CompareSettings; // 0x30 (0xC)
};

// 0x1C 
struct FWeaponAccessorySetup {
	struct FName WeaponArchetypeName; // 0x0 (0x8)
	struct UGestaltSkeletalMeshDefinition* AccessoryDefinition; // 0x8 (0x4)
	struct UGestaltPartMatrices* AccessoryTransforms; // 0xC (0x4)
	struct TArray_FGestaltPartPermutation AccessoryParts; // 0x10 (0xC)
};

// 0x44 
struct FWeaponDefinitionData {
	struct UWeaponTypeDefinition* WeaponTypeDefinition; // 0x0 (0x4)
	struct UInventoryBalanceDefinition* BalanceDefinition; // 0x4 (0x4)
	struct UManufacturerDefinition* ManufacturerDefinition; // 0x8 (0x4)
	int ManufacturerGradeIndex; // 0xC (0x4)
	struct UWeaponPartDefinition* BodyPartDefinition; // 0x10 (0x4)
	struct UWeaponPartDefinition* GripPartDefinition; // 0x14 (0x4)
	struct UWeaponPartDefinition* BarrelPartDefinition; // 0x18 (0x4)
	struct UWeaponPartDefinition* SightPartDefinition; // 0x1C (0x4)
	struct UWeaponPartDefinition* StockPartDefinition; // 0x20 (0x4)
	struct UWeaponPartDefinition* ElementalPartDefinition; // 0x24 (0x4)
	struct UWeaponPartDefinition* Accessory1PartDefinition; // 0x28 (0x4)
	struct UWeaponPartDefinition* Accessory2PartDefinition; // 0x2C (0x4)
	struct UWeaponPartDefinition* MaterialPartDefinition; // 0x30 (0x4)
	struct UWeaponNamePartDefinition* PrefixPartDefinition; // 0x34 (0x4)
	struct UWeaponNamePartDefinition* TitlePartDefinition; // 0x38 (0x4)
	int GameStage; // 0x3C (0x4)
	int UniqueId; // 0x40 (0x4)
};

// 0x44 
struct FItemDefinitionData {
	struct UItemDefinition* ItemDefinition; // 0x0 (0x4)
	struct UInventoryBalanceDefinition* BalanceDefinition; // 0x4 (0x4)
	struct UManufacturerDefinition* ManufacturerDefinition; // 0x8 (0x4)
	int ManufacturerGradeIndex; // 0xC (0x4)
	struct UItemPartDefinition* AlphaItemPartDefinition; // 0x10 (0x4)
	struct UItemPartDefinition* BetaItemPartDefinition; // 0x14 (0x4)
	struct UItemPartDefinition* GammaItemPartDefinition; // 0x18 (0x4)
	struct UItemPartDefinition* DeltaItemPartDefinition; // 0x1C (0x4)
	struct UItemPartDefinition* EpsilonItemPartDefinition; // 0x20 (0x4)
	struct UItemPartDefinition* ZetaItemPartDefinition; // 0x24 (0x4)
	struct UItemPartDefinition* EtaItemPartDefinition; // 0x28 (0x4)
	struct UItemPartDefinition* ThetaItemPartDefinition; // 0x2C (0x4)
	struct UItemPartDefinition* MaterialItemPartDefinition; // 0x30 (0x4)
	struct UItemNamePartDefinition* PrefixItemNamePartDefinition; // 0x34 (0x4)
	struct UItemNamePartDefinition* TitleItemNamePartDefinition; // 0x38 (0x4)
	int GameStage; // 0x3C (0x4)
	int UniqueId; // 0x40 (0x4)
};

// 0x118 
struct FPendingMissionRewardData {
	struct UMissionDefinition* Mission; // 0x0 (0x4)
	struct FWeaponDefinitionData WeaponRewards[2]; // 0x4 (0x88)
	struct FItemDefinitionData ItemRewards[2]; // 0x8C (0x88)
	BOOL bGrantAltReward : 1; // 0x114 (0x4)
	const unsigned long: 0;
};

// 0xE4 
struct FUnloadableDlcPendingRewardData {
	struct FString MissionDefName; // 0x0 (0xC)
	struct FInventorySerialNumber WeaponRewards[2]; // 0xC (0x68)
	struct FInventorySerialNumber ItemRewards[2]; // 0x74 (0x68)
	int DlcPackageId; // 0xDC (0x4)
	BOOL bGrantAltReward : 1; // 0xE0 (0x4)
	const unsigned long: 0;
};

// 0x10 
struct FMissionStatusPresentation {
	struct FColor TextColor; // 0x0 (0x4)
	struct FString IconFrame; // 0x4 (0xC)
};

// 0xC 
struct FItemBehaviorSet {
	const struct TArray_UBehaviorBasePtr OnUsed; // 0x0 (0xC)
};

// 0x20 
struct FSKULibrarySet {
	int Id; // 0x0 (0x4)
	struct FString NameID; // 0x4 (0xC)
	struct FString LibrarySetPackage; // 0x10 (0xC)
	struct UObject* CachedDlcALDefRef; // 0x1C (0x4)
};

// 0x1C 
struct FSKURuntimeLibrarySet {
	int Id; // 0x0 (0x4)
	struct UPackageAssetLibrary* Libraries[6]; // 0x4 (0x18)
};

// 0x18 
struct FAssetLibConfig {
	int SublibraryBits; // 0x0 (0x4)
	int AssetBits; // 0x4 (0x4)
	struct FString Desc; // 0x8 (0xC)
	struct UClass* LibraryType; // 0x14 (0x4)
};

// 0x44 
struct FAttributePresentationValueRemappingData {
	const BOOL bUseContextOverride : 1; // 0x0 (0x4)
	const unsigned long: 0;
	const struct FAttributeInitializationData InputValueMn; // 0x4 (0x10)
	const struct FAttributeInitializationData InputValueMx; // 0x14 (0x10)
	const struct FAttributeInitializationData OutputValueMn; // 0x24 (0x10)
	const struct FAttributeInitializationData OutputValueMx; // 0x34 (0x10)
};

// 0x10 
struct FModifierValuePresentationData {
	struct UAttributePresentationDefinition* AttributePresentation; // 0x0 (0x4)
	struct UAttributePresentationDefinition* OptionalConstraintPresentation; // 0x4 (0x4)
	float ModifierValue; // 0x8 (0x4)
	BOOL bShouldDisplay : 1; // 0xC (0x4)
	const unsigned long: 0;
};

// 0x14 
struct FCustomizationUnlockData {
	int ProductID; // 0x0 (0x4)
	int NumUnlockedCustomizations; // 0x4 (0x4)
	struct TArray_unsigned_char UnlockedMask; // 0x8 (0xC)
};

// 0x5 
struct FMissionRewardPresentationData {
	struct UInventoryCardPresentationDefinition* PresentationDefinition; // 0x0 (0x4)
	unsigned char Rarity; // 0x4 (0x1) (Enum = EItemRarity)
};

// 0x8 
struct FReplicatedMissionFilterData {
	struct UMissionDefinition* Mission; // 0x0 (0x4)
	BOOL bFiltered : 1; // 0x4 (0x4)
	const unsigned long: 0;
};

// 0x8 
struct FReplicatedMissionObjectiveData {
	struct UMissionObjectiveDefinition* Objective; // 0x0 (0x4)
	int ObjectiveBit; // 0x4 (0x4)
};

// 0x5 
struct FReplicatedMissionStatusData {
	struct UMissionDefinition* Mission; // 0x0 (0x4)
	unsigned char Status; // 0x4 (0x1) (Enum = EMissionStatus)
};

// 0x7C 
struct FReplicatedMissionData {
	struct UMissionDefinition* Mission; // 0x0 (0x4)
	unsigned char Status; // 0x4 (0x1) (Enum = EMissionStatus)
	const unsigned char Unknown1[0x3]; // 0x5 (0x3) > LAST OFFSET
	BOOL bTimerRunning : 1; // 0x8 (0x4)
	const unsigned long: 0;
	struct UMissionObjectiveSetDefinition* ActiveObjectiveSet; // 0xC (0x4)
	struct UMissionObjectiveSetDefinition* SubObjectiveSets[4]; // 0x10 (0x10)
	int SecondsLeft; // 0x20 (0x4)
	int ObjectiveCounts[20]; // 0x24 (0x50)
	int GameStage; // 0x74 (0x4)
	BOOL bFiltered : 1; // 0x78 (0x4)
	const unsigned long: 0;
};

// 0x9 
struct FMissionDirectorData {
	struct UMissionDefinition* MissionDefinition; // 0x0 (0x4)
	BOOL bBeginsMission : 1; // 0x4 (0x4)
	BOOL bEndsMission : 1; // 0x4 (0x4)
	const unsigned long: 0;
	unsigned char BranchEnding; // 0x8 (0x1) (Enum = EMissionBranchEnding)
};

// 0x14 
struct FReplicatedMissionDirectiveData {
	struct FScriptInterface MissionDirector; // 0x0 (0x8)
	struct FMissionDirectorData MissionDirective; // 0x8 (0xC)
};

// 0x11 
struct FMissionStatusData {
	struct UMissionDefinition* MissionDefinition; // 0x0 (0x4)
	unsigned char MissionStatus; // 0x4 (0x1) (Enum = EMissionStatus)
	const unsigned char Unknown1[0x3]; // 0x5 (0x3) > LAST OFFSET
	BOOL bIsObjectiveSpecific : 1; // 0x8 (0x4)
	const unsigned long: 0;
	struct UMissionObjectiveDefinition* MissionObjective; // 0xC (0x4)
	unsigned char ObjectiveStatus; // 0x10 (0x1) (Enum = EObjectiveDependencyStatus)
};

// 0x3C 
struct FUnloadableDlcMissionStatusData {
	struct FString MissionDefName; // 0x0 (0xC)
	unsigned char Status; // 0xC (0x1) (Enum = EMissionStatus)
	const unsigned char Unknown1[0x3]; // 0xD (0x3) > LAST OFFSET
	int DlcPackageId; // 0x10 (0x4)
	struct TArray_int ObjectivesProgress; // 0x14 (0xC)
	int ActiveObjectiveSetIndex; // 0x20 (0x4)
	struct TArray_int SubObjectiveSetsIndices; // 0x24 (0xC)
	int GameStage; // 0x30 (0x4)
	int NeedsRewards; // 0x34 (0x4)
	int HeardKickoff; // 0x38 (0x4)
};

// 0x8 
struct FMissionRewardData {
	struct UMissionDefinition* MissionDef; // 0x0 (0x4)
	BOOL bGrantAltReward : 1; // 0x4 (0x4)
	const unsigned long: 0;
};

// 0x2C 
struct FMissionStatusPlayerData {
	struct UMissionDefinition* MissionDef; // 0x0 (0x4)
	unsigned char Status; // 0x4 (0x1) (Enum = EMissionStatus)
	const unsigned char Unknown1[0x3]; // 0x5 (0x3) > LAST OFFSET
	struct TArray_int ObjectivesProgress; // 0x8 (0xC)
	struct UMissionObjectiveSetDefinition* ActiveObjectiveSet; // 0x14 (0x4)
	struct TArray_UMissionObjectiveSetDefinitionPtr SubObjectiveSets; // 0x18 (0xC)
	int GameStage; // 0x24 (0x4)
	BOOL bNeedsRewards : 1; // 0x28 (0x4)
	BOOL bHeardKickoff : 1; // 0x28 (0x4)
	const unsigned long: 0;
};

// 0x28 
struct FMissionData {
	struct UMissionDefinition* MissionDef; // 0x0 (0x4)
	unsigned char Status; // 0x4 (0x1) (Enum = EMissionStatus)
	const unsigned char Unknown1[0x3]; // 0x5 (0x3) > LAST OFFSET
	struct TArray_int ObjectivesProgress; // 0x8 (0xC)
	struct UMissionObjectiveSetDefinition* ActiveObjectiveSet; // 0x14 (0x4)
	struct TArray_UMissionObjectiveSetDefinitionPtr SubObjectiveSets; // 0x18 (0xC)
	BOOL bInitialized : 1; // 0x24 (0x4)
	BOOL bHeardKickoff : 1; // 0x24 (0x4)
	BOOL bFiltered : 1; // 0x24 (0x4)
	const unsigned long: 0;
};

// 0xC 
struct FObjectiveStatusData {
	struct TArray_int Objectives; // 0x0 (0xC)
};

// 0x94 
struct FTradeSlot {
	unsigned char Status; // 0x0 (0x1) (Enum = TradeSlotStatus)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	struct FWeaponDefinitionData WeaponData; // 0x4 (0x44)
	struct FItemDefinitionData ItemData; // 0x48 (0x44)
	int Quantity; // 0x8C (0x4)
	struct AWillowInventory* WInv; // 0x90 (0x4)
};

// 0x18 
struct FHUDWidget_ChallengeData {
	struct UChallengeDefinition* Challenge; // 0x0 (0x4)
	int LevelIndex; // 0x4 (0x4)
	int ConditionIndex; // 0x8 (0x4)
	int CurrStatVal; // 0xC (0x4)
	int GoalStatVal; // 0x10 (0x4)
	BOOL bComplete : 1; // 0x14 (0x4)
	const unsigned long: 0;
};

// 0xC 
struct FFadePickupParticle {
	struct AActor* SourceActor; // 0x0 (0x4)
	struct UParticleSystemComponent* Particle; // 0x4 (0x4)
	float FadeEndTime; // 0x8 (0x4)
};

// 0xC4 
struct FPlayerSaveData {
	struct FString FilePath; // 0x0 (0xC)
	struct FDouble TimeStamp; // 0xC (0x8)
	struct FString PlayerClassDefName; // 0x14 (0xC)
	struct FString ClassName; // 0x20 (0xC)
	struct FString CharacterName; // 0x2C (0xC)
	int ExpLevel; // 0x38 (0x4)
	int CurrencyOnHand[13]; // 0x3C (0x34)
	struct FString UICharacterName; // 0x70 (0xC)
	int PlaythroughsCompleted; // 0x7C (0x4)
	struct FString LastVisitedTeleporter; // 0x80 (0xC)
	int ActiveMissionNumber; // 0x8C (0x4)
	int PlotMissionNumber; // 0x90 (0x4)
	int TotalPlayTime; // 0x94 (0x4)
	int LastPlaythroughNumber; // 0x98 (0x4)
	struct FString LastSaveDate; // 0x9C (0xC)
	struct FGuid SaveGuid; // 0xA8 (0x10)
	BOOL bIsUnloadedDlcCharacter : 1; // 0xB8 (0x4)
	const unsigned long: 0;
	int SaveGameFileId; // 0xBC (0x4)
	int ExpPoints; // 0xC0 (0x4)
};

// 0xC8 
struct FLoadInfo {
	struct FPlayerSaveData CharacterData; // 0x0 (0xC4)
	BOOL LoadInfoReady : 1; // 0xC4 (0x4)
	BOOL LoadSucceeded : 1; // 0xC4 (0x4)
	BOOL LoadCancelled : 1; // 0xC4 (0x4)
	const unsigned long: 0;
};

// 0x8 
struct FAttributeDefinitionDefault {
	struct UAttributeDefinition* Attribute; // 0x0 (0x4)
	float DefaultValue; // 0x4 (0x4)
};

// 0x3C 
struct FAttributeScalarParam {
	struct FName ParamName; // 0x0 (0x8)
	BOOL bVectorParam : 1; // 0x8 (0x4)
	BOOL bClampInput : 1; // 0x8 (0x4)
	const unsigned long: 0;
	struct FAttributeDefinitionDefault Input; // 0xC (0x8)
	struct FAttributeDefinitionDefault MinInput; // 0x14 (0x8)
	struct FAttributeDefinitionDefault MaxInput; // 0x1C (0x8)
	struct FAttributeDefinitionDefault MinOutput; // 0x24 (0x8)
	struct FAttributeDefinitionDefault MaxOutput; // 0x2C (0x8)
	unsigned char ScalarParamOperand; // 0x34 (0x1) (Enum = EAttributeScalarParamOperand)
	const unsigned char Unknown1[0x3]; // 0x35 (0x3) > LAST OFFSET
	float CurrentValue; // 0x38 (0x4)
};

// 0x10 
struct FScreenParticleModifier {
	struct TArray_FAttributeScalarParam ScalarParams; // 0x0 (0xC)
	float CachedValue; // 0xC (0x4)
};

// 0x18 
struct FScreenParticleScalarParamOverTime {
	struct FName ParameterName; // 0x0 (0x8)
	float TotalTime; // 0x8 (0x4)
	float StartValue; // 0xC (0x4)
	float EndValue; // 0x10 (0x4)
	float LastValue; // 0x14 (0x4)
};

// 0x30 
struct FScreenParticleVectorParamOverTime {
	struct FName ParameterName; // 0x0 (0x8)
	float TotalTime; // 0x8 (0x4)
	struct FVector VectorStartValue; // 0xC (0xC)
	struct FVector VectorEndValue; // 0x18 (0xC)
	struct FVector LastValue; // 0x24 (0xC)
};

// 0x18 
struct FScreenParticleParamOverTime {
	struct TArray_FScreenParticleScalarParamOverTime ScalarParams; // 0x0 (0xC)
	struct TArray_FScreenParticleVectorParamOverTime VectorParams; // 0xC (0xC)
};

// 0x54 
struct FScreenParticleInitParams {
	struct UParticleSystem* Template; // 0x0 (0x4)
	struct TArray_FScreenParticleModifier ScreenParticleModifiers; // 0x4 (0xC)
	struct UMaterialInterface* TemplateScreenParticleMaterial; // 0x10 (0x4)
	struct FName MatParamName; // 0x14 (0x8)
	BOOL bHideWhenFinished : 1; // 0x1C (0x4)
	const unsigned long: 0;
	struct FName ParticleTag; // 0x20 (0x8)
	struct FVector2D ContentDims; // 0x28 (0x8)
	float ParticleDepth; // 0x30 (0x4)
	unsigned char ScalingMode; // 0x34 (0x1) (Enum = ScreenParticleScalingMode)
	const unsigned char Unknown1[0x3]; // 0x35 (0x3) > LAST OFFSET
	struct FScreenParticleParamOverTime StopParamsOT; // 0x38 (0x18)
	BOOL bOnlyOwnerSee : 1; // 0x50 (0x4)
	const unsigned long: 0;
};

// 0x50 
struct FScreenParticleRecord {
	struct FName Tag; // 0x0 (0x8)
	struct UParticleSystem* Template; // 0x8 (0x4)
	struct FName MatParamName; // 0xC (0x8)
	struct UParticleSystemComponent* Component; // 0x14 (0x4)
	struct TArray_FScreenParticleModifier AppliedModifiers; // 0x18 (0xC)
	struct FVector2D ContentDims; // 0x24 (0x8)
	float ParticleDepth; // 0x2C (0x4)
	unsigned char ScalingMode; // 0x30 (0x1) (Enum = ScreenParticleScalingMode)
	const unsigned char Unknown1[0x3]; // 0x31 (0x3) > LAST OFFSET
	struct FScreenParticleParamOverTime StopParamsOT; // 0x34 (0x18)
	float StopTime; // 0x4C (0x4)
};

// 0x10C 
struct FPostProcessOverlay {
	const struct FName OverlayName; // 0x0 (0x8)
	const struct FPostProcessSettings DestPostProcessOverlay; // 0x8 (0xE8)
	const float MinTransitionInDuration; // 0xF0 (0x4)
	const float MinTransitionHoldDuration; // 0xF4 (0x4)
	const float MinTransitionOutDuration; // 0xF8 (0x4)
	const float MaxTransitionInDuration; // 0xFC (0x4)
	const float MaxTransitionHoldDuration; // 0x100 (0x4)
	const float MaxTransitionOutDuration; // 0x104 (0x4)
	const BOOL ClearOverlayQueueAfterTransition : 1; // 0x108 (0x4)
	const unsigned long: 0;
};

// 0x1C 
struct FMaterialEffectModifier {
	struct FName EffectName; // 0x0 (0x8)
	struct TArray_FAttributeScalarParam ScalarParams; // 0x8 (0xC)
	float CachedValue; // 0x14 (0x4)
	struct UMaterialInstanceConstant* MaterialInstance; // 0x18 (0x4)
};

// 0xC 
struct FDOFEffectModifierData {
	BOOL AutoRelcalculateFocusDistance : 1; // 0x0 (0x4)
	const unsigned long: 0;
	float RecalculateFocusDistanceRate; // 0x4 (0x4)
	float FocusDistanceLerpRate; // 0x8 (0x4)
};

// 0x18 
struct FPostProcessChainOptions {
	struct TArray_FMaterialEffectModifier MaterialEffectModifiers; // 0x0 (0xC)
	struct FDOFEffectModifierData DOFEffectModifier; // 0xC (0xC)
};

// 0x2C 
struct FDOFEffectData {
	float FalloffExponent; // 0x0 (0x4)
	float BlurKernelSize; // 0x4 (0x4)
	float MaxNearBlurAmount; // 0x8 (0x4)
	float MaxFarBlurAmount; // 0xC (0x4)
	struct FColor ModulateBlurColor; // 0x10 (0x4)
	unsigned char FocusType; // 0x14 (0x1) (Enum = EFocusType)
	const unsigned char Unknown1[0x3]; // 0x15 (0x3) > LAST OFFSET
	float FocusInnerRadius; // 0x18 (0x4)
	float FocusDistance; // 0x1C (0x4)
	struct FVector FocusPosition; // 0x20 (0xC)
};

// 0x28 
struct FPostProcessChainRecord {
	struct UPostProcessChain* Template; // 0x0 (0x4)
	struct UPostProcessChain* Instance; // 0x4 (0x4)
	struct TArray_FMaterialEffectModifier AppliedModifiers; // 0x8 (0xC)
	BOOL PopWhenScalarParamIsMaxedOut : 1; // 0x14 (0x4)
	const unsigned long: 0;
	struct FDOFEffectModifierData DOFEffectModifier; // 0x18 (0xC)
	float NextDOFUpdateTime; // 0x24 (0x4)
};

// 0x8 
struct FRtpcParameterValue {
	struct UAkRtpc* AkRtpc; // 0x0 (0x4)
	float Value; // 0x4 (0x4)
};

// 0x4C 
struct FImpactResponseParameters {
	struct TArray_FParticleSysParam ParticleParameters; // 0x0 (0xC)
	struct TArray_FFontParameterValue FontParameterValues; // 0xC (0xC)
	struct TArray_FScalarParameterValue ScalarParameterValues; // 0x18 (0xC)
	struct TArray_FTextureParameterValue TextureParameterValues; // 0x24 (0xC)
	struct TArray_FVectorParameterValue VectorParameterValues; // 0x30 (0xC)
	struct TArray_FRtpcParameterValue RtpcParameterValues; // 0x3C (0xC)
	BOOL bNoSound : 1; // 0x48 (0x4)
	const unsigned long: 0;
};

// 0x94 
struct FImpactResponseEffect {
	const BOOL bCensorThisEffect : 1; // 0x0 (0x4)
	const unsigned long: 0;
	const struct UWillowImpactDefinition* CensoredEffectAlternative; // 0x4 (0x4)
	const float DamageModifierPercent; // 0x8 (0x4)
	const struct UAkEvent* ImpactEvent; // 0xC (0x4)
	const float AINoiseLevel; // 0x10 (0x4)
	const struct UParticleSystem* ParticleTemplate; // 0x14 (0x4)
	const BOOL bAttachParticleToHitActor : 1; // 0x18 (0x4)
	BOOL bHideEffectFromHitActor : 1; // 0x18 (0x4)
	const unsigned long: 0;
	const float MaxEffectDistance; // 0x1C (0x4)
	const struct TArray_UMaterialInterfacePtr DecalMaterials; // 0x20 (0xC)
	const float DecalWidth; // 0x2C (0x4)
	const float DecalHeight; // 0x30 (0x4)
	const float DecalMinScale; // 0x34 (0x4)
	const float DecalMaxScale; // 0x38 (0x4)
	const float DecalDepth; // 0x3C (0x4)
	const BOOL DecalRandomRotation : 1; // 0x40 (0x4)
	const BOOL DecalCreateNewMaterialInstanceConstant : 1; // 0x40 (0x4)
	const unsigned long: 0;
	const struct UClass* ImpactFlashLightClass; // 0x44 (0x4)
	const struct FImpactResponseParameters EffectParameters; // 0x48 (0x4C)
};

// 0x98 
struct FImpactResponseData {
	const struct UWillowImpactDefinition* ImpactType; // 0x0 (0x4)
	const struct FImpactResponseEffect ResponseEffect; // 0x4 (0x94)
};

// 0x8 
struct FWheelSlipModifierData {
	const float LongSlipFactor; // 0x0 (0x4)
	const float LatSlipFactor; // 0x4 (0x4)
};

// 0x34 
struct FDamageSurfaceTypeModifier {
	unsigned char SurfaceType; // 0x0 (0x1) (Enum = EDamageSurfaceType)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	struct FAttributeInitializationData BaseChance; // 0x4 (0x10)
	struct FAttributeInitializationData BaseSpreadChance; // 0x14 (0x10)
	struct FAttributeInitializationData SpreadChanceDecayMultiplier; // 0x24 (0x10)
};

// 0x84 
struct FActiveStatusEffect {
	float Duration; // 0x0 (0x4)
	float TotalElapsedTime; // 0x4 (0x4)
	float AccumulatedTime; // 0x8 (0x4)
	float DamagePerSecond; // 0xC (0x4)
	struct AActor* EventInstigator; // 0x10 (0x4)
	struct FScriptInterface DamageCauser; // 0x14 (0x8)
	struct UClass* DamageSource; // 0x1C (0x4)
	struct UStatusEffectDefinition* StatusEffectDefinition; // 0x20 (0x4)
	struct UBodyHitRegionDefinition* HitRegion; // 0x24 (0x4)
	struct FTraceHitInfo HitInfo; // 0x28 (0x1C)
	struct FName DamageNumberSocket; // 0x44 (0x8)
	float AccumulatedSpreadTime; // 0x4C (0x4)
	float SpreadTimeInterval; // 0x50 (0x4)
	int SpreadCount; // 0x54 (0x4)
	int SpreadAttempt; // 0x58 (0x4)
	float SpreadRadius; // 0x5C (0x4)
	struct TArray_UBodyHitRegionDefinitionPtr TravelledRegions; // 0x60 (0xC)
	struct TArray_FScriptInterface TravelledTargets; // 0x6C (0xC)
	struct UStatusEffectsComponent* OwnerComponent; // 0x78 (0x4)
	int SpreadCap; // 0x7C (0x4)
	BOOL bIsInfiniteDuration : 1; // 0x80 (0x4)
	const unsigned long: 0;
};

// 0xC 
struct FSocketEmitter {
	struct AEmitter* Emitter; // 0x0 (0x4)
	struct FName SocketName; // 0x4 (0x8)
};

// 0x18 
struct FHitRegionEmitters {
	struct TArray_FSocketEmitter Emitters; // 0x0 (0xC)
	struct UBodyHitRegionDefinition* HitRegion; // 0xC (0x4)
	BOOL bDeleteOnDeactivation : 1; // 0x10 (0x4)
	const unsigned long: 0;
	float TimeWaitingToDie; // 0x14 (0x4)
};

// 0x8 
struct FEffectSoundData {
	unsigned char Type; // 0x0 (0x1) (Enum = EStatusEffectType)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	int AkPlayingId; // 0x4 (0x4)
};

// 0xC 
struct FOngoingEffectInfo {
	float TotalDamageDealtToHealth; // 0x0 (0x4)
	float TotalDamageDealtToShields; // 0x4 (0x4)
	float Duration; // 0x8 (0x4)
};

// 0x9 
struct FShopItemData {
	struct AWillowInventory* Item; // 0x0 (0x4)
	int Price; // 0x4 (0x4)
	unsigned char ItemStatus; // 0x8 (0x1) (Enum = EShopItemStatus)
};

// 0x8 
struct FConditionalAnimData {
	const struct UExpressionEvaluator* Expression; // 0x0 (0x4)
	const struct USpecialMoveDefinition* SpecialMove; // 0x4 (0x4)
};

// 0x14 
struct FBodyWeaponActionData {
	const unsigned char Action; // 0x0 (0x1) (Enum = EBodyWeaponAction)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	const struct UExpressionEvaluator* Expression; // 0x4 (0x4)
	const struct TArray_FConditionalAnimData Animations; // 0x8 (0xC)
};

// 0x10 
struct FBodyWeaponActionPostureData {
	const unsigned char Posture; // 0x0 (0x1) (Enum = EBodyWeaponActionPosture)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	const struct TArray_FBodyWeaponActionData Actions; // 0x4 (0xC)
};

// 0x24 
struct FBodyHandIKHoldData {
	const struct FVector JointLocation; // 0x0 (0xC)
	const struct FVector HandLocation; // 0xC (0xC)
	const struct FRotator HandRotation; // 0x18 (0xC)
};

// 0x2C 
struct FCustomBodyHandIKHoldData {
	const struct FName HoldName; // 0x0 (0x8)
	const struct FBodyHandIKHoldData IKData; // 0x8 (0x24)
};

// 0x8 
struct FExtraMuzzleEffect {
	struct UParticleSystem* Particles; // 0x0 (0x4)
	struct UAkEvent* Sound; // 0x4 (0x4)
};

// 0x14 
struct FWeaponBoneControllerData {
	const struct FName BoneName; // 0x0 (0x8)
	const unsigned char ControlType; // 0x8 (0x1) (Enum = EWeaponBoneControllerType)
	const unsigned char Unknown1[0x3]; // 0x9 (0x3) > LAST OFFSET
	const BOOL bUseInFirstPerson : 1; // 0xC (0x4)
	const BOOL bUseInThirdPerson : 1; // 0xC (0x4)
	const unsigned long: 0;
	struct USkelControlBase* ControlTemplate; // 0x10 (0x4)
};

// 0x3C 
struct FWeaponMemento {
	struct FInventorySerialNumber SerialNumber; // 0x0 (0x34)
	int StoredAmmo; // 0x34 (0x4)
	BOOL bEquipped : 1; // 0x38 (0x4)
	BOOL bDropOnDeath : 1; // 0x38 (0x4)
	const unsigned long: 0;
};

// 0x20 
struct FBloodSplatterTrace {
	struct UBodyHitRegionDefinition* HitRegion; // 0x0 (0x4)
	struct FVector HitLocation; // 0x4 (0xC)
	struct FVector Momentum; // 0x10 (0xC)
	float DamageSeverityPercent; // 0x1C (0x4)
};

// 0x24 
struct FGoreEffect {
	struct UBodyHitRegionDefinition* HitRegion; // 0x0 (0x4)
	int GoreDataIndex; // 0x4 (0x4)
	struct AController* InstigatedBy; // 0x8 (0x4)
	struct FVector HitLocation; // 0xC (0xC)
	struct FVector Momentum; // 0x18 (0xC)
};

// 0x18 
struct FMaterialScalarFadeReplication {
	struct FName Name; // 0x0 (0x8)
	float StartValue; // 0x8 (0x4)
	float EndValue; // 0xC (0x4)
	float FadeTime; // 0x10 (0x4)
	BOOL bRunning : 1; // 0x14 (0x4)
	BOOL bIsForGoreDeath : 1; // 0x14 (0x4)
	const unsigned long: 0;
};

// 0x8 
struct FHolsteredGearDisplaySlot {
	unsigned char State; // 0x0 (0x1) (Enum = EHolsteredGearState)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	struct AWillowInventory* Item; // 0x4 (0x4)
};

// 0xC 
struct FGoreTriggerData {
	struct UDamageTypeDefinition* DamageTypeTrigger; // 0x0 (0x4)
	struct UClass* DamageSourceTrigger; // 0x4 (0x4)
	float HealthPctDamageThreshold; // 0x8 (0x4)
};

// 0x2C 
struct FDamageReactionData {
	const struct FName EventName; // 0x0 (0x8)
	struct TArray_FGoreTriggerData DamageTriggers; // 0x8 (0xC)
	float PercentOfHealthTrigger; // 0x14 (0x4)
	struct USpecialMoveDefinition* DamageSpecialMove; // 0x18 (0x4)
	const struct TArray_UBehaviorBasePtr ReactionBehaviors; // 0x1C (0xC)
	BOOL bDamageThreshold : 1; // 0x28 (0x4)
	BOOL bRepeatableEvent : 1; // 0x28 (0x4)
	BOOL bCensored : 1; // 0x28 (0x4)
	BOOL bOnlyTriggeredOnOwnerDeath : 1; // 0x28 (0x4)
	const unsigned long: 0;
};

// 0x20 
struct FWeaponPartAttachmentData {
	const struct FName FirstPersonAttachmentSocket; // 0x0 (0x8)
	const struct FName ThirdPersonAttachmentSocket; // 0x8 (0x8)
	const struct FName FirstPersonOffHandAttachmentSocket; // 0x10 (0x8)
	const struct FName ThirdPersonOffHandAttachmentSocket; // 0x18 (0x8)
};

// 0x34 
struct FMeleeOverTimeState {
	BOOL bIsMeleeActive : 1; // 0x0 (0x4)
	const unsigned long: 0;
	struct UMeleeDefinition* MeleeDefinition; // 0x4 (0x4)
	float MeleeStartTime; // 0x8 (0x4)
	float TimeElapsedSinceLastMelee; // 0xC (0x4)
	struct TArray_AActorPtr HitActors; // 0x10 (0xC)
	struct FVector MeleeStartLocation; // 0x1C (0xC)
	struct FRotator MeleeStartRotation; // 0x28 (0xC)
};

// 0x4C 
struct FObstacleData {
	struct AActor* Actor; // 0x0 (0x4)
	struct AActor* Leader; // 0x4 (0x4)
	float Radius; // 0x8 (0x4)
	float HalfHeight; // 0xC (0x4)
	float MaxSpeed; // 0x10 (0x4)
	struct FVector Location; // 0x14 (0xC)
	struct FVector Velocity; // 0x20 (0xC)
	struct FVector OldVelocity; // 0x2C (0xC)
	struct FVector2D LastOffset; // 0x38 (0x8)
	struct FScriptInterface IDO; // 0x40 (0x8)
	BOOL bWasAvoiding : 1; // 0x48 (0x4)
	const unsigned long: 0;
};

// 0x18 
struct FSimpleAnimData {
	struct FName AnimName; // 0x0 (0x8)
	struct UWillowAnimTree* Tree; // 0x8 (0x4)
	struct TArray_UWillowAnimNode_SimplePtr Nodes; // 0xC (0xC)
};

// 0xC 
struct FSkillDamagedEventConstraintData {
	struct UDamageTypeDefinition* DamageTypeConstraint; // 0x0 (0x4)
	struct UClass* DamageSourceConstraint; // 0x4 (0x4)
	BOOL bMustBeCriticalDamage : 1; // 0x8 (0x4)
	BOOL bMustBeOneShotKill : 1; // 0x8 (0x4)
	const unsigned long: 0;
};

// 0x18 
struct FSkillKillEventData {
	const struct FName EventName; // 0x0 (0x8)
	const unsigned char EventType; // 0x8 (0x1) (Enum = ESkillKillEvents)
	const unsigned char Unknown1[0x3]; // 0x9 (0x3) > LAST OFFSET
	const struct TArray_FSkillDamagedEventConstraintData EventConstraints; // 0xC (0xC)
};

// 0x18 
struct FSkillDamageEventData {
	const struct FName EventName; // 0x0 (0x8)
	const unsigned char EventType; // 0x8 (0x1) (Enum = ESkillDamageEvents)
	const unsigned char Unknown1[0x3]; // 0x9 (0x3) > LAST OFFSET
	const struct TArray_FSkillDamagedEventConstraintData EventConstraints; // 0xC (0xC)
};

// 0x21 
struct FNamedSkillEvent {
	const struct FName EventName; // 0x0 (0x8)
	const struct TArray_USkillDefinitionPtr RequiredSkills; // 0x8 (0xC)
	const struct TArray_UBehaviorBasePtr EventResponses; // 0x14 (0xC)
	const unsigned char RequiredActionSkillState; // 0x20 (0x1) (Enum = ERequiredActionSkillState)
};

// 0x28 
struct FSkillActionData {
	const struct FString ClientConsoleCommand; // 0x0 (0xC)
	const BOOL bSkillOnInstigator : 1; // 0xC (0x4)
	const BOOL bSkillOnRecipient : 1; // 0xC (0x4)
	const unsigned long: 0;
	const unsigned char GradeType; // 0x10 (0x1) (Enum = ESkillEventGradeType)
	const unsigned char Unknown1[0x3]; // 0x11 (0x3) > LAST OFFSET
	const int HardcodedGrade; // 0x14 (0x4)
	const struct USkillDefinition* SkillToActivate; // 0x18 (0x4)
	const struct USkillDefinition* SkillToDeactivate; // 0x1C (0x4)
	const struct UAkEvent* AkEvent; // 0x20 (0x4)
	const BOOL bInstigatorPlaysSound : 1; // 0x24 (0x4)
	const BOOL bRecipientPlaysSound : 1; // 0x24 (0x4)
	const unsigned long: 0;
};

// 0x30 
struct FSkillEventResponseData {
	const BOOL bPredictOnClient : 1; // 0x0 (0x4)
	const unsigned long: 0;
	const unsigned char EventType; // 0x4 (0x1) (Enum = ESkillEventType)
	const unsigned char Unknown1[0x3]; // 0x5 (0x3) > LAST OFFSET
	const struct FSkillActionData Action; // 0x8 (0x28)
};

// 0x18 
struct FSkillConstraintData {
	const BOOL bApplyConstraintOnActivatation : 1; // 0x0 (0x4)
	const BOOL bApplyConstraintWhileActive : 1; // 0x0 (0x4)
	const BOOL bApplyConstraintWhilePaused : 1; // 0x0 (0x4)
	const unsigned long: 0;
	const unsigned char OnFailure; // 0x4 (0x1) (Enum = ESkillState)
	const unsigned char Unknown1[0x3]; // 0x5 (0x3) > LAST OFFSET
	const struct UExpressionEvaluator* Evaluator; // 0x8 (0x4)
	const struct TArray_USkillExpressionEvaluatorDefinitionPtr EvaluatorDefinitions; // 0xC (0xC)
};

// 0x8 
struct FBonusAttributeModifierUpgrade {
	const int GradeToApplyAt; // 0x0 (0x4)
	const float Modifier; // 0x4 (0x4)
};

// 0x4C 
struct FSkillEffectData {
	const struct UAttributeDefinitionBase* AttributeToModify; // 0x0 (0x4)
	const BOOL bIncludeDuelingTargets : 1; // 0x4 (0x4)
	const BOOL bIncludeSelfAsTarget : 1; // 0x4 (0x4)
	const BOOL bOnlyEffectTargetsInRange : 1; // 0x4 (0x4)
	const BOOL bExcludeNonPlayerCharacters : 1; // 0x4 (0x4)
	const unsigned long: 0;
	const unsigned char EffectTarget; // 0x8 (0x1) (Enum = EEffectTarget)
	const unsigned char Unknown1[0x3]; // 0x9 (0x3) > LAST OFFSET
	const struct FName TargetInstanceDataName; // 0xC (0x8)
	const unsigned char TargetCriteria; // 0x14 (0x1) (Enum = ETargetCriteria)
	const unsigned char ModifierType; // 0x15 (0x1) (Enum = EModifierType)
	const unsigned char Unknown2[0x2]; // 0x16 (0x2) > LAST OFFSET
	const struct FAttributeInitializationData BaseModifierValue; // 0x18 (0x10)
	const int GradeToStartApplyingEffect; // 0x28 (0x4)
	const int PerGradeUpgradeInterval; // 0x2C (0x4)
	const struct FAttributeInitializationData PerGradeUpgrade; // 0x30 (0x10)
	const struct TArray_FBonusAttributeModifierUpgrade BonusUpgradeList; // 0x40 (0xC)
};

// 0xC 
struct FInputContextData {
	struct FName ContextName; // 0x0 (0x8)
	struct UInputContextDefinition* Definition; // 0x8 (0x4)
};

// 0xC 
struct FSlaughterMissionChain {
	struct TArray_UMissionDefinitionPtr SlaughterMissions; // 0x0 (0xC)
};

// 0xC 
struct FLevelBasedExpScale {
	const int LevelDifference; // 0x0 (0x4)
	float HigherLevelEnemyExpScale; // 0x4 (0x4)
	float LowerLevelEnemyExpScale; // 0x8 (0x4)
};

// 0xC 
struct FStatusEffectTypeCommonProperties {
	unsigned char StatusEffectType; // 0x0 (0x1) (Enum = EStatusEffectType)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	struct UAkEvent* EffectStartAkEvent; // 0x4 (0x4)
	struct UAkEvent* EffectStopAkEvent; // 0x8 (0x4)
};

// 0xC 
struct FLevelBasedStatusEffectChanceScale {
	const int LevelDifference; // 0x0 (0x4)
	float HigherLevelChanceScale; // 0x4 (0x4)
	float LowerLevelChanceScale; // 0x8 (0x4)
};

// 0x10 
struct FPlayThroughData {
	const int PlayThroughNumber; // 0x0 (0x4)
	const struct TArray_UGameBalanceDefinitionPtr BalanceDefinitions; // 0x4 (0xC)
};

// 0xC 
struct FLevelBasedDamageScale {
	const int LevelDifference; // 0x0 (0x4)
	float HigherLevelAttackerDmgScale; // 0x4 (0x4)
	float LowerLevelAttackerDmgScale; // 0x8 (0x4)
};

// 0xE 
struct FRarityLevelColor {
	int MinLevel; // 0x0 (0x4)
	int MaxLevel; // 0x4 (0x4)
	struct FColor Color; // 0x8 (0x4)
	unsigned char DropLifeSpanType; // 0xC (0x1) (Enum = EDropLifeSpanType)
	unsigned char RarityRating; // 0xD (0x1) (Enum = EItemRarity)
};

// 0xC 
struct FExpAwardWeight {
	const int Players; // 0x0 (0x4)
	const float KillerExpBonus; // 0x4 (0x4)
	const float ExpWeight; // 0x8 (0x4)
};

// 0x8 
struct FKillSkillDuration {
	const int Players; // 0x0 (0x4)
	const float Duration; // 0x4 (0x4)
};

// 0xC 
struct FDamageTypeExpModifier {
	struct UClass* DamageSource; // 0x0 (0x4)
	struct UDamageTypeDefinition* TypeDefinition; // 0x4 (0x4)
	float Multiplier; // 0x8 (0x4)
};

// 0x8 
struct FPlayerClassAchievementUnlockData {
	unsigned char UnlockType; // 0x0 (0x1) (Enum = EPlayerClassAchievementUnlockType)
	unsigned char Achievement; // 0x1 (0x1) (Enum = EWillowAchievementList)
	const unsigned char Unknown1[0x2]; // 0x2 (0x2) > LAST OFFSET
	int IntData; // 0x4 (0x4)
};

// 0xC 
struct FPendingClientTrainingMessage {
	struct UClass* Message; // 0x0 (0x4)
	struct UTrainingMessageDefinition* TrainingDefinition; // 0x4 (0x4)
	float Duration; // 0x8 (0x4)
};

// 0x10 
struct FPendingMissionRewardsData {
	struct TArray_FPendingMissionRewardData PendingMissionRewards; // 0x0 (0xC)
	int PlaythroughIndex; // 0xC (0x4)
};

// 0x10 
struct FOneOffLevelChallengeData {
	unsigned char PackageId; // 0x0 (0x1)
	unsigned char ContentId; // 0x1 (0x1)
	const unsigned char Unknown1[0x2]; // 0x2 (0x2) > LAST OFFSET
	struct TArray_int Completion; // 0x4 (0xC)
};

// 0x18 
struct FPlayerUIPreferences {
	struct FString CharacterName; // 0x0 (0xC)
	struct FColor PrimaryColor; // 0xC (0x4)
	struct FColor SecondaryColor; // 0x10 (0x4)
	struct FColor TertiaryColor; // 0x14 (0x4)
};

// 0x14 
struct FCurrencyState {
	const unsigned char FormOfCurrency; // 0x0 (0x1) (Enum = ECurrencyType)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	const struct FName StatName; // 0x4 (0x8)
	int CurrentAmount; // 0xC (0x4)
	int LastKnownAmount; // 0x10 (0x4)
};

// 0x34 
struct FBankSlot {
	struct FInventorySerialNumber InventorySerialNumber; // 0x0 (0x34)
};

// 0x3C 
struct FChestData {
	struct UClass* InventoryClass; // 0x0 (0x4)
	struct FInventorySerialNumber InventorySerialNumber; // 0x4 (0x34)
	struct AWillowInventory* Inventory; // 0x38 (0x4)
};

// 0x38 
struct FMissionPlaythroughData {
	struct TArray_FMissionStatusPlayerData MissionList; // 0x0 (0xC)
	struct TArray_FUnloadableDlcMissionStatusData UnloadableDlcMissionList; // 0xC (0xC)
	struct TArray_FUnloadableDlcPendingRewardData UnloadableDlcPendingMissionRewards; // 0x18 (0xC)
	struct TArray_UMissionDefinitionPtr FilteredMissions; // 0x24 (0xC)
	struct UMissionDefinition* ActiveMission; // 0x30 (0x4)
	int PlayThroughNumber; // 0x34 (0x4)
};

// 0xC 
struct FStatusMenuMissionEligibilityData {
	struct UMissionDefinition* MissionDef; // 0x0 (0x4)
	unsigned char MissionStatus; // 0x4 (0x1) (Enum = EMissionStatus)
	const unsigned char Unknown1[0x3]; // 0x5 (0x3) > LAST OFFSET
	BOOL bIsBlocked : 1; // 0x8 (0x4)
	BOOL bIsFiltered : 1; // 0x8 (0x4)
	const unsigned long: 0;
};

// 0x4D 
struct FInventorySaveGameData {
	struct FItemDefinitionData DefinitionData; // 0x0 (0x44)
	int Quantity; // 0x44 (0x4)
	BOOL bEquipped : 1; // 0x48 (0x4)
	const unsigned long: 0;
	unsigned char Mark; // 0x4C (0x1) (Enum = PlayerMark)
};

// 0x10 
struct FLoginState {
	struct FString LoginName; // 0x0 (0xC)
	BOOL bIsDirty : 1; // 0xC (0x4)
	const unsigned long: 0;
};

// 0x10 
struct FLungeData {
	struct AActor* Target; // 0x0 (0x4)
	float Length; // 0x4 (0x4)
	float Start; // 0x8 (0x4)
	float SavedAccelRate; // 0xC (0x4)
};

// 0x10 
struct FTimePosition {
	struct FVector Position; // 0x0 (0xC)
	float Time; // 0xC (0x4)
};

// 0x78 
struct FVehicleSeatInstance {
	struct APawn* StoragePawn; // 0x0 (0x4)
	struct APawn* LastStoragePawn; // 0x4 (0x4)
	struct AVehicle* SeatPawn; // 0x8 (0x4)
	struct AWillowVehicleWeapon* Gun; // 0xC (0x4)
	struct UMeshComponent* GunMesh; // 0x10 (0x4)
	struct UWeaponTypeDefinition* GunDefinition; // 0x14 (0x4)
	int BarrelIndex; // 0x18 (0x4)
	struct FName WeaponRotationName; // 0x1C (0x8)
	struct FName FlashLocationName; // 0x24 (0x8)
	struct FName FlashCountName; // 0x2C (0x8)
	struct FName FiringModeName; // 0x34 (0x8)
	struct FName AttachedWeaponName; // 0x3C (0x8)
	struct TArray_UWillowSkelControl_TurretConstrainedPtr TurretControllers; // 0x44 (0xC)
	struct USpecialMoveDefinition* WeaponFireSMD; // 0x50 (0x4)
	struct TArray_FTimePosition OldPositions; // 0x54 (0xC)
	struct FVector SmoothedCameraOffset; // 0x60 (0xC)
	int IncomingSeatIndex; // 0x6C (0x4)
	float SeatLockTime; // 0x70 (0x4)
	BOOL bDontStopAnimOnExit : 1; // 0x74 (0x4)
	BOOL bSwitchingSeats : 1; // 0x74 (0x4)
	BOOL bExiting : 1; // 0x74 (0x4)
	const unsigned long: 0;
};

// 0x4C 
struct FTombstoneData {
	int TotalTimePlayed; // 0x0 (0x4)
	int CharacterLevel; // 0x4 (0x4)
	int PercentMissionsComplete; // 0x8 (0x4)
	int PercentChallengesComplete; // 0xC (0x4)
	struct FString CharacterName; // 0x10 (0xC)
	struct FString FavoriteManufacturer; // 0x1C (0xC)
	struct FString FavoriteWeaponType; // 0x28 (0xC)
	struct FString KilledByDescription; // 0x34 (0xC)
	struct FString ScreenshotFilename; // 0x40 (0xC)
};

// 0x10 
struct FResourceSaveGameData {
	struct UResourceDefinition* ResourceDefinition; // 0x0 (0x4)
	struct UResourcePoolDefinition* ResourcePoolDefinition; // 0x4 (0x4)
	float Amount; // 0x8 (0x4)
	int UpgradeLevel; // 0xC (0x4)
};

// 0xC 
struct FInventorySlotSaveGameData {
	int InventorySlotMax_Misc; // 0x0 (0x4)
	int WeaponReadyMax; // 0x4 (0x4)
	int NumQuickSlotsFlourished; // 0x8 (0x4)
};

// 0x46 
struct FWeaponSaveGameData {
	struct FWeaponDefinitionData WeaponDefinitionData; // 0x0 (0x44)
	unsigned char QuickSlot; // 0x44 (0x1) (Enum = EQuickWeaponSlot)
	unsigned char Mark; // 0x45 (0x1) (Enum = PlayerMark)
};

// 0xC 
struct FWorldDiscoveryData {
	struct FName DiscoveryName; // 0x0 (0x8)
	BOOL HasBeenUncovered : 1; // 0x8 (0x4)
	const unsigned long: 0;
};

// 0x4C 
struct FMissionPlaythroughSaveGameData {
	int PlayThroughNumber; // 0x0 (0x4)
	struct TArray_FMissionStatusPlayerData MissionData; // 0x4 (0xC)
	struct TArray_FUnloadableDlcMissionStatusData UnloadableDlcMissionData; // 0x10 (0xC)
	struct TArray_FPendingMissionRewardData PendingMissionRewards; // 0x1C (0xC)
	struct TArray_FUnloadableDlcPendingRewardData UnloadableDlcPendingMissionRewards; // 0x28 (0xC)
	struct FString ActiveMission; // 0x34 (0xC)
	struct TArray_UMissionDefinitionPtr FilteredMissions; // 0x40 (0xC)
};

// 0x10 
struct FSkillSaveGameData {
	struct USkillDefinition* SkillDefinition; // 0x0 (0x4)
	int Grade; // 0x4 (0x4)
	int GradePoints; // 0x8 (0x4)
	int EquippedSlotIndex; // 0xC (0x4)
};

// 0x3D 
struct FUnloadableDlcItemSaveGameData {
	struct FInventorySerialNumber SerialNumber; // 0x0 (0x34)
	int Quantity; // 0x34 (0x4)
	BOOL bEquipped : 1; // 0x38 (0x4)
	const unsigned long: 0;
	unsigned char Mark; // 0x3C (0x1) (Enum = PlayerMark)
};

// 0x36 
struct FUnloadableDlcWeaponSaveGameData {
	struct FInventorySerialNumber SerialNumber; // 0x0 (0x34)
	unsigned char QuickSlot; // 0x34 (0x1) (Enum = EQuickWeaponSlot)
	unsigned char Mark; // 0x35 (0x1) (Enum = PlayerMark)
};

// 0x115 
struct FPostProcessOverlayInfo {
	struct FPostProcessOverlay PostProcessOverlay; // 0x0 (0x10C)
	float SceneInterpolationPhaseTime; // 0x10C (0x4)
	float SceneInterpolationDuration; // 0x110 (0x4)
	unsigned char PostProcessOverlayPhase; // 0x114 (0x1) (Enum = EPostProcessOverrideUpdatePhase)
};

// 0x10 
struct FSpeedKillData {
	struct FString VictimName; // 0x0 (0xC)
	float VictimKillTime; // 0xC (0x4)
};

// 0x14 
struct FLurchData {
	float StartTime; // 0x0 (0x4)
	float LocMagnitude; // 0x4 (0x4)
	float RotMagnitude; // 0x8 (0x4)
	float Duration; // 0xC (0x4)
	float FalloffRate; // 0x10 (0x4)
};

// 0x14 
struct FSkillTreeSkillStateData {
	struct USkillDefinition* SkillDefinition; // 0x0 (0x4)
	struct USkillTreeBranchDefinition* ParentBranchDefinition; // 0x4 (0x4)
	int TierNumber; // 0x8 (0x4)
	int SkillGrade; // 0xC (0x4)
	BOOL bIsUnlocked : 1; // 0x10 (0x4)
	const unsigned long: 0;
};

// 0x24 
struct FPlayerSkillTreeSkillData {
	struct USkillDefinition* Definition; // 0x0 (0x4)
	int Index; // 0x4 (0x4)
	int PrevSkillIndex; // 0x8 (0x4)
	int NextSkillIndex; // 0xC (0x4)
	int ParentTierIndex; // 0x10 (0x4)
	int PrevSkillTypeIndex; // 0x14 (0x4)
	int NextSkillTypeIndex; // 0x18 (0x4)
	int Grade; // 0x1C (0x4)
	struct UPlayerSkillTree* Owner; // 0x20 (0x4)
};

// 0x5C 
struct FAppliedSkillEffect {
	struct FSkillEffectData EffectData; // 0x0 (0x4C)
	struct TArray_UObjectPtr Contexts; // 0x4C (0xC)
	struct UAttributeModifier* Modifier; // 0x58 (0x4)
};

// 0x44 
struct FVehicleSeatDefinition {
	struct UWillowVehicleSeatDefinition* SeatDefinition; // 0x0 (0x4)
	BOOL bDoNotUseThisSeat : 1; // 0x4 (0x4)
	const unsigned long: 0;
	struct UInventoryBalanceDefinition* WeaponBalanceDefinition; // 0x8 (0x4)
	struct USpecialMoveDefinition* WeaponFireSMD; // 0xC (0x4)
	int NextSeatIndex; // 0x10 (0x4)
	struct TArray_USpecialMove_VehiclePtr Anim_SeatSwap; // 0x14 (0xC)
	const struct UAIDefinition* SeatAIDef; // 0x20 (0x4)
	struct ULocalizedStringDefinition* SeatInteractTextDefinition; // 0x24 (0x4)
	struct TArray_FName GunSocket; // 0x28 (0xC)
	struct FName SeatNameEnter; // 0x34 (0x8)
	struct FName SeatNameExit; // 0x3C (0x8)
};

// 0x40 
struct FConditionLevel {
	const struct TArray_UChallengeConditionDefinitionPtr ConditionDefinitions; // 0x0 (0xC)
	const struct TArray_float ProgressNotificationOverride; // 0xC (0xC)
	const struct TArray_FAttributeEffectData CompletedAttributeEffects; // 0x18 (0xC)
	const struct FAttributeInitializationData BadassPointReward; // 0x24 (0x10)
	const struct UItemPoolDefinition* RewardItemPool; // 0x34 (0x4)
	const struct FName RewardTextKey; // 0x38 (0x8)
};

// 0x8 
struct FChallengeData {
	struct AWillowPlayerController* PCOwner; // 0x0 (0x4)
	struct UChallengeDefinition* ChallengeDefinition; // 0x4 (0x4)
};

// 0x8 
struct FTrainingData {
	struct AWillowPlayerController* PCOwner; // 0x0 (0x4)
	struct UTrainingMessageDefinition* TrainingDefinition; // 0x4 (0x4)
};

// 0xC 
struct FTaggedGFxMovie {
	struct UGearboxGFxMovie* Movie; // 0x0 (0x4)
	struct FName Tag; // 0x4 (0x8)
};

// 0xC 
struct FSpawnedAttachedLootData {
	struct AWillowInventory* Inv; // 0x0 (0x4)
	struct FName AttachmentPointName; // 0x4 (0x8)
};

// 0x8 
struct FSpawnedDroppedLootData {
	struct AWillowInventory* Inv; // 0x0 (0x4)
	BOOL bDisableRigidBodyPhysics : 1; // 0x4 (0x4)
	const unsigned long: 0;
};

// 0x34 
struct FPlayerSkillTreeBranchData {
	struct USkillTreeBranchDefinition* Definition; // 0x0 (0x4)
	int BranchPointsToUnlockNextBranch; // 0x4 (0x4)
	int Index; // 0x8 (0x4)
	int ParentBranchIndex; // 0xC (0x4)
	int PrevBranchIndex; // 0x10 (0x4)
	int NextBranchIndex; // 0x14 (0x4)
	struct TArray_int ChildBranchIndices; // 0x18 (0xC)
	struct TArray_int TierIndices; // 0x24 (0xC)
	struct UPlayerSkillTree* Owner; // 0x30 (0x4)
};

// 0x2C 
struct FPlayerSkillTreeTierData {
	struct TArray_int SkillIndices; // 0x0 (0xC)
	int BranchPointsToUnlockTier; // 0xC (0x4)
	int Index; // 0x10 (0x4)
	int PrevTierIndex; // 0x14 (0x4)
	int NextTierIndex; // 0x18 (0x4)
	int ParentBranchIndex; // 0x1C (0x4)
	int TierNumber; // 0x20 (0x4)
	BOOL bUnlocked : 1; // 0x24 (0x4)
	const unsigned long: 0;
	struct UPlayerSkillTree* Owner; // 0x28 (0x4)
};

// 0x10 
struct FKillMissionData {
	BOOL bUseKillRestrictions : 1; // 0x0 (0x4)
	BOOL bCriticalHit : 1; // 0x0 (0x4)
	BOOL bNotCriticalHit : 1; // 0x0 (0x4)
	BOOL bNotHitRegion : 1; // 0x0 (0x4)
	BOOL bMissionWeapon : 1; // 0x0 (0x4)
	const unsigned long: 0;
	unsigned char DamageCauserType; // 0x4 (0x1) (Enum = EDamageCauserType)
	unsigned char DamageType; // 0x5 (0x1) (Enum = EDamageType)
	const unsigned char Unknown1[0x2]; // 0x6 (0x2) > LAST OFFSET
	struct FName HitRegionName; // 0x8 (0x8)
};

// 0x1C 
struct FBalancedInventoryData {
	const struct UItemPoolDefinition* ItmPoolDefinition; // 0x0 (0x4)
	const struct UInventoryBalanceDefinition* InvBalanceDefinition; // 0x4 (0x4)
	const struct FAttributeInitializationData Probability; // 0x8 (0x10)
	const BOOL bDropOnDeath : 1; // 0x18 (0x4)
	const unsigned long: 0;
};

// 0x4 
struct FGoldenKeySource {
	unsigned char SourceId; // 0x0 (0x1)
	unsigned char NumKeys; // 0x1 (0x1)
	unsigned char NumKeysSpent; // 0x2 (0x1)
	unsigned char Empty; // 0x3 (0x1)
};

// 0x10 
struct FSeasonPassOfferUnion {
	int AssociatedSeasonPassOfferId; // 0x0 (0x4)
	int PaidOfferId; // 0x4 (0x4)
	int FreeOfferId; // 0x8 (0x4)
	int SeasonPassId; // 0xC (0x4)
};

// 0xC 
struct FSeasonPassPackageCount {
	int SeasonPassId; // 0x0 (0x4)
	int PackageCount; // 0x4 (0x4)
	BOOL bPreOrder : 1; // 0x8 (0x4)
	const unsigned long: 0;
};

// 0x14 
struct FDLCMissionData {
	int MinMissionNumber; // 0x0 (0x4)
	int MaxMissionNumber; // 0x4 (0x4)
	struct FString MissionNameLocKey; // 0x8 (0xC)
};

// 0x14 
struct FCompatibilityVersionInfo {
	int CurrentCompatPackVersion; // 0x0 (0x4)
	struct FDlcCompatibilityData CurrentCompatibilityMask; // 0x4 (0x10)
};

// 0x8 
struct FContentState {
	int LicensedMask; // 0x0 (0x4)
	int InstalledMask; // 0x4 (0x4)
};

// 0xC 
struct FRecentlyResistedAttackData {
	struct AActor* DamagedActor; // 0x0 (0x4)
	unsigned char DamageType; // 0x4 (0x1) (Enum = EDamageType)
	const unsigned char Unknown1[0x3]; // 0x5 (0x3) > LAST OFFSET
	float LastResistTime; // 0x8 (0x4)
};

// 0x10 
struct FExpansionData {
	int Tag; // 0x0 (0x4)
	struct TArray_unsigned_char Data; // 0x4 (0xC)
};

// 0xC 
struct FRegionGameStageData {
	struct URegionDefinition* RegionDef; // 0x0 (0x4)
	int GameStage; // 0x4 (0x4)
	int PlaythroughIdx; // 0x8 (0x4)
};

// 0x18 
struct FUnloadableDlcRegionGameStageData {
	struct FString RegionDefName; // 0x0 (0xC)
	int GameStage; // 0xC (0x4)
	int PlaythroughIdx; // 0x10 (0x4)
	int DlcPackageId; // 0x14 (0x4)
};

// 0x10 
struct FUnloadableDlcChallengeData {
	struct FString ChallengeDefName; // 0x0 (0xC)
	int DlcPackageId; // 0xC (0x4)
};

// 0x8 
struct FLockoutData {
	struct ULockoutDefinition* LockoutDef; // 0x0 (0x4)
	int LockoutTime; // 0x4 (0x4)
};

// 0x14 
struct FUnloadableDlcLockoutData {
	struct FString LockoutDefName; // 0x0 (0xC)
	int LockoutTime; // 0xC (0x4)
	int DlcPackageId; // 0x10 (0x4)
};

// 0xC 
struct FChosenVehicleCustomization {
	struct UVehicleFamilyDefinition* FamilyDef; // 0x0 (0x4)
	struct UCustomizationDefinition* CustomizationDef[2]; // 0x4 (0x8)
};

// 0x4C 
struct FThirdPersonMenuView {
	struct FVector RelativeCameraLocation; // 0x0 (0xC)
	struct FRotator RelativeCameraRotation; // 0xC (0xC)
	struct FVector RelativeMenuLocation; // 0x18 (0xC)
	struct FRotator RelativeMenuRotation; // 0x24 (0xC)
	float CameraYawMin; // 0x30 (0x4)
	float CameraYawMax; // 0x34 (0x4)
	float VerticalSplitscreenCameraOffset; // 0x38 (0x4)
	float VerticalSplitscreenCameraSpread; // 0x3C (0x4)
	struct FName FocusBoneName; // 0x40 (0x8)
	float FocusScreenYaw; // 0x48 (0x4)
};

// 0x2C 
struct FOneTimeDataElement {
	struct FString Text; // 0x0 (0xC)
	struct FString Icon; // 0xC (0xC)
	struct FString IconOverride; // 0x18 (0xC)
	struct FColor TextColor; // 0x24 (0x4)
	struct UObject* Data; // 0x28 (0x4)
};

// 0x10 
struct FSortableDataElement {
	BOOL bFiltered : 1; // 0x0 (0x4)
	const unsigned long: 0;
	int OneTimeIdx; // 0x4 (0x4)
	int CategoryIdx; // 0x8 (0x4)
	struct UObject* Data; // 0xC (0x4)
};

// 0x5 
struct FGFxTextEntry {
	int ArrayIdx; // 0x0 (0x4)
	unsigned char Kind; // 0x4 (0x1) (Enum = EArrayKind)
};

// 0x10 
struct FSortFilterConfiguration {
	unsigned char SortType; // 0x0 (0x1) (Enum = EInventorySortType)
	unsigned char FilterType; // 0x1 (0x1) (Enum = EInventoryFilterType)
	unsigned char CategoryType; // 0x2 (0x1) (Enum = ECategoryAssignmentType)
	const unsigned char Unknown1[0x1]; // 0x3 (0x1) > LAST OFFSET
	struct FString SortTitleLookupKey; // 0x4 (0xC)
};

// 0x14 
struct FHeavyInventoryElement {
	struct FString Text; // 0x0 (0xC)
	struct FColor Color; // 0xC (0x4)
	struct UObject* Data; // 0x10 (0x4)
};

// 0x10 
struct FItemCardInfo {
	struct FName CardName; // 0x0 (0x8)
	int ContentIdx; // 0x8 (0x4)
	struct UItemCardGFxObject* ItemCard; // 0xC (0x4)
};

// 0xC 
struct FAIThrowProjectileBehaviorSequenceStateData {
	const unsigned char Action; // 0x0 (0x1) (Enum = EChangeStatus)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	const struct FName SequenceName; // 0x4 (0x8)
};

// 0x30 
struct FPerchStateData {
	struct FName AttachmentName; // 0x0 (0x8)
	struct UStaticMesh* StaticMesh; // 0x8 (0x4)
	struct USkeletalMesh* SkelMesh; // 0xC (0x4)
	struct FVector LocOffset; // 0x10 (0xC)
	struct FRotator RotOffset; // 0x1C (0xC)
	float Scale; // 0x28 (0x4)
	struct AActor* Actor; // 0x2C (0x4)
};

// 0x14 
struct FBehaviorCondition {
	const int ConditionId; // 0x0 (0x4)
	const struct UExpressionEvaluator* Condition; // 0x4 (0x4)
	const struct TArray_UBehaviorBasePtr Behaviors; // 0x8 (0xC)
};

// 0xC 
struct FDropProjectileBehaviorSequenceStateData {
	const unsigned char Action; // 0x0 (0x1) (Enum = EChangeStatus)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	const struct FName SequenceName; // 0x4 (0x8)
};

// 0x1C 
struct FBehaviorsSelectionData {
	const struct FAttributeInitializationData Weight; // 0x0 (0x10)
	const struct TArray_UBehaviorBasePtr Behaviors; // 0x10 (0xC)
};

// 0x8 
struct FRemoveObject {
	struct FName Name; // 0x0 (0x8)
};

// 0xC 
struct FTurretConstraintData {
	int PitchConstraint; // 0x0 (0x4)
	int YawConstraint; // 0x4 (0x4)
	int RollConstraint; // 0x8 (0x4)
};

// 0xC 
struct UBehavior_SpawnProjectile_FProjectileBehaviorSequenceStateData {
	const unsigned char Action; // 0x0 (0x1) (Enum = EChangeStatus)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	const struct FName SequenceName; // 0x4 (0x8)
};

// 0xC 
struct UBehavior_SpawnProjectileFromImpact_FProjectileBehaviorSequenceStateData {
	const unsigned char Action; // 0x0 (0x1) (Enum = EChangeStatus)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	const struct FName SequenceName; // 0x4 (0x8)
};

// 0x8 
struct FCustomizationItemData {
	int ItemPoolKey; // 0x0 (0x4)
	struct UItemPoolDefinition* CustomizationItemPool; // 0x4 (0x4)
};

// 0x10 
struct FBehaviorAliasReference {
	const struct UBehaviorAliasDefinition* BehaviorAlias; // 0x0 (0x4)
	const struct TArray_UBehaviorBasePtr BehaviorList; // 0x4 (0xC)
};

// 0x4 
struct FMissionObjectiveStateSelectionData {
	BOOL bNotStarted : 1; // 0x0 (0x4)
	BOOL bActive : 1; // 0x0 (0x4)
	BOOL bComplete : 1; // 0x0 (0x4)
	const unsigned long: 0;
};

// 0x4 
struct FMissionStateSelectionData {
	BOOL bNotStarted : 1; // 0x0 (0x4)
	BOOL bActive : 1; // 0x0 (0x4)
	BOOL bRequiredObjectivesComplete : 1; // 0x0 (0x4)
	BOOL bReadyToTurnIn : 1; // 0x0 (0x4)
	BOOL bComplete : 1; // 0x0 (0x4)
	BOOL bFailed : 1; // 0x0 (0x4)
	const unsigned long: 0;
};

// 0x8 
struct FBlackMarketUpgradeLevelData {
	struct UBlackMarketUpgradeDefinition* UpgradeDefinition; // 0x0 (0x4)
	int MaxUpgradeLevel; // 0x4 (0x4)
};

// 0x18 
struct FTechDeathData {
	const struct FName EventName; // 0x0 (0x8)
	const struct TArray_UDamageTypeDefinitionPtr DamageTypeTriggers; // 0x8 (0xC)
	const struct USpecialMoveDefinition* DeathAnimation; // 0x14 (0x4)
};

// 0xC 
struct FVehicleHandlingWheelData {
	struct FName BoneName; // 0x0 (0x8)
	struct UVehicleWheelDefinition* WheelDef; // 0x8 (0x4)
};

// 0x18 
struct FFishtailingInfo {
	const struct FVector ContactPoint; // 0x0 (0xC)
	const struct FVector Impulse; // 0xC (0xC)
};

// 0xC 
struct FMoveToCellData {
	int IndexInCellsList; // 0x0 (0x4)
	float DistanceFromCurrentCell; // 0x4 (0x4)
	float CosAngle; // 0x8 (0x4)
};

// 0x8 
struct FInventoryGradeModifierData {
	const int ExpLevel; // 0x0 (0x4)
	const struct UWillowInventoryDefinition* CustomInventoryDefinition; // 0x4 (0x4)
};

// 0x30 
struct FInventoryGameStageGradeWeightData {
	const struct FGameStageRangeData GameStageRequirement; // 0x0 (0x8)
	const struct FAttributeInitializationData MinSpawnProbabilityModifier; // 0x8 (0x10)
	const struct FAttributeInitializationData MaxSpawnProbabilityModifier; // 0x18 (0x10)
	const struct FInventoryGradeModifierData GradeModifiers; // 0x28 (0x8)
};

// 0x10 
struct FInventoryManufacturerBalanceData {
	const struct UManufacturerDefinition* Manufacturer; // 0x0 (0x4)
	const struct TArray_FInventoryGameStageGradeWeightData Grades; // 0x4 (0xC)
};

// 0x13 
struct FItemPartGradeWeightData {
	const struct UItemPartDefinition* Part; // 0x0 (0x4)
	const struct TArray_FManufacturerCustomGradeWeightData Manufacturers; // 0x4 (0xC)
	const unsigned char MinGameStageIndex; // 0x10 (0x1)
	const unsigned char MaxGameStageIndex; // 0x11 (0x1)
	const unsigned char DefaultWeightIndex; // 0x12 (0x1)
};

// 0x10 
struct FItemCustomPartTypeData {
	const BOOL bEnabled : 1; // 0x0 (0x4)
	const unsigned long: 0;
	const struct TArray_FItemPartGradeWeightData WeightedParts; // 0x4 (0xC)
};

// 0x14 
struct FTargetedPlayerState {
	struct AWillowMind* Enemy; // 0x0 (0x4)
	struct AActor* Player; // 0x4 (0x4)
	float InitialThreat; // 0x8 (0x4)
	float StoppedTargetingPlayerTime; // 0xC (0x4)
	BOOL bIsPlayerPet : 1; // 0x10 (0x4)
	const unsigned long: 0;
};

// 0x18 
struct FCoordinatedVectorParameter {
	struct FName ParamName; // 0x0 (0x8)
	struct FInterpCurveVector ParamValueOverTime; // 0x8 (0x10)
};

// 0x20 
struct FCoordinatedScalarParameter {
	struct FName ParamName; // 0x0 (0x8)
	struct FInterpCurveFloat ParamValueOverTime; // 0x8 (0x10)
	unsigned char BoundsScale; // 0x18 (0x1)
	const unsigned char Unknown1[0x3]; // 0x19 (0x3) > LAST OFFSET
	BOOL bConvertAxisToWorldSpace : 1; // 0x1C (0x4)
	const unsigned long: 0;
};

// 0x3D 
struct FCoordinatedParticleSystemDefinition {
	struct UParticleSystem* ParticleSystem; // 0x0 (0x4)
	struct FVector LocationOffset; // 0x4 (0xC)
	struct FRotator RotationOffset; // 0x10 (0xC)
	float TriggerTime; // 0x1C (0x4)
	float ParticleScale; // 0x20 (0x4)
	struct TArray_FCoordinatedScalarParameter Parameters; // 0x24 (0xC)
	struct TArray_FCoordinatedVectorParameter VectorParameters; // 0x30 (0xC)
	unsigned char ScaleByObjectSize; // 0x3C (0x1) (Enum = ECoordinatedParticleScaleMode)
};

// 0x1C 
struct FCoordinatedAudioDefinition {
	struct UAkEvent* TriggerEvent; // 0x0 (0x4)
	float TriggerTime; // 0x4 (0x4)
	struct UAkRtpc* RTPC; // 0x8 (0x4)
	struct FInterpCurveFloat RTPCOverTime; // 0xC (0x10)
};

// 0x10 
struct FCreditsLine {
	struct UCreditsLineDefinition* LineType; // 0x0 (0x4)
	struct FString Text; // 0x4 (0xC)
};

// 0xC 
struct FCreditsTextureInfo {
	struct FString TexturePath; // 0x0 (0xC)
};

// 0x14 
struct FCurrencyPresentation {
	unsigned char Type; // 0x0 (0x1) (Enum = ECurrencyType)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	struct FString WidgetFrame; // 0x4 (0xC)
	struct USwfMovie* WidgetClip; // 0x10 (0x4)
};

// 0x10 
struct FSkillTreeTierStateData {
	struct USkillTreeBranchDefinition* ParentBranchDefinition; // 0x0 (0x4)
	int TierNumber; // 0x4 (0x4)
	int PointsSpentInTier; // 0x8 (0x4)
	BOOL bIsUnlocked : 1; // 0xC (0x4)
	const unsigned long: 0;
};

// 0x10 
struct FSkillTreeBranchStateData {
	struct USkillTreeBranchDefinition* BranchDefinition; // 0x0 (0x4)
	int PointsSpentInBranch; // 0x4 (0x4)
	int MaxPointsForBranch; // 0x8 (0x4)
	BOOL bIsUnlocked : 1; // 0xC (0x4)
	const unsigned long: 0;
};

// 0x44 
struct FTaggedMarketplaceContent {
	struct FString Tag; // 0x0 (0xC)
	int OfferId; // 0xC (0x4)
	struct FString OfferIdText; // 0x10 (0xC)
	struct FString OfferName; // 0x1C (0xC)
	struct FString SellText; // 0x28 (0xC)
	int ContentCategory; // 0x34 (0x4)
	int PackageId; // 0x38 (0x4)
	int ContentId; // 0x3C (0x4)
	BOOL bShowInStore : 1; // 0x40 (0x4)
	const unsigned long: 0;
};

// 0x68 
struct FSourceObjectData {
	int UniqueId; // 0x0 (0x4)
	struct UObject* SourceObject; // 0x4 (0x4)
	struct FVector SourceLocation; // 0x8 (0xC)
	struct AController* InstigatedByController; // 0x14 (0x4)
	struct FScriptInterface DamageContext; // 0x18 (0x8)
	float StartDamageTime; // 0x20 (0x4)
	float TimeElapsedSinceLastDamage; // 0x24 (0x4)
	struct UExplosionDefinition* ExplosionDef; // 0x28 (0x4)
	int ExplosionScaleIndex; // 0x2C (0x4)
	float InitialDamageRadius; // 0x30 (0x4)
	float Damage; // 0x34 (0x4)
	BOOL bFullDamage : 1; // 0x38 (0x4)
	const unsigned long: 0;
	float Momentum; // 0x3C (0x4)
	struct UClass* DamageSource; // 0x40 (0x4)
	struct UDamageTypeDefinition* DamageTypeDef; // 0x44 (0x4)
	struct UImpactDefinition* ImpactDefinition; // 0x48 (0x4)
	BOOL bCanDamageFriendlies : 1; // 0x4C (0x4)
	const unsigned long: 0;
	struct FScriptInterface DamageCauser; // 0x50 (0x8)
	BOOL bSkipTraceTest : 1; // 0x58 (0x4)
	const unsigned long: 0;
	struct UObject* HitObject; // 0x5C (0x4)
	float BarrelSourceTime; // 0x60 (0x4)
	float PlantSourceTime; // 0x64 (0x4)
};

// 0x8 
struct FDamageOnlyOnceData {
	int UniqueId; // 0x0 (0x4)
	struct AActor* HurtActor; // 0x4 (0x4)
};

// 0x18 
struct FDamageTypeSelectorData {
	const struct FName AssociatedDamageTypeName; // 0x0 (0x8)
	const struct FAttributeInitializationData ValueIfMatched; // 0x8 (0x10)
};

// 0xC 
struct FDefinitionIconDatum {
	struct FColor DefColor; // 0x0 (0x4)
	struct UTexture2D* DefIcon; // 0x4 (0x4)
	struct UClass* DefClass; // 0x8 (0x4)
};

// 0x10 
struct FDamageLocationData {
	float Time; // 0x0 (0x4)
	struct FVector Location; // 0x4 (0xC)
};

// 0x24 
struct FRagdollDeathImpulseStruct {
	struct FVector Impulse; // 0x0 (0xC)
	struct FVector Offset; // 0xC (0xC)
	struct FName BoneName; // 0x18 (0x8)
	BOOL VelocityRatherThanForce : 1; // 0x20 (0x4)
	BOOL TransformImpulseByVelocityDirection : 1; // 0x20 (0x4)
	const unsigned long: 0;
};

// 0x30 
struct FStaggerStateData {
	BOOL bIsStaggered : 1; // 0x0 (0x4)
	BOOL bIsUnstaggering : 1; // 0x0 (0x4)
	BOOL bForced : 1; // 0x0 (0x4)
	const unsigned long: 0;
	unsigned char State; // 0x4 (0x1) (Enum = EStaggerState)
	const unsigned char Unknown1[0x3]; // 0x5 (0x3) > LAST OFFSET
	float StaggerStartTime; // 0x8 (0x4)
	float StaggerEndTime; // 0xC (0x4)
	float StaggerEndRagdollTime; // 0x10 (0x4)
	float StaggerRecoveryStartTime; // 0x14 (0x4)
	float NextUnstaggerCheckTime; // 0x18 (0x4)
	struct UPhysicalMaterial* PreviousOverridePhysicalMaterial; // 0x1C (0x4)
	unsigned char PreviousCollisionChannel; // 0x20 (0x1) (Enum = ERBCollisionChannel)
	const unsigned char Unknown2[0x3]; // 0x21 (0x3) > LAST OFFSET
	struct UPrimitiveComponent* PreviousCollisionComponent; // 0x24 (0x4)
	struct APawn* StaggerInstigator; // 0x28 (0x4)
	int RestaggeredCount; // 0x2C (0x4)
};

// 0x9 
struct FStaggeredRecoveryRotationData {
	struct FName BoneName; // 0x0 (0x8)
	unsigned char BoneAxis; // 0x8 (0x1) (Enum = EAxis)
};

// 0x2C 
struct FTurretEffect {
	struct FName EffectStartTag; // 0x0 (0x8)
	struct FName EffectEndTag; // 0x8 (0x8)
	struct UParticleSystem* EffectTemplate; // 0x10 (0x4)
	struct FName EffectSocket; // 0x14 (0x8)
	struct UParticleSystemComponent* EffectRef; // 0x1C (0x4)
	struct UAkEvent* EffectAudioStartAkEvent; // 0x20 (0x4)
	struct UAkEvent* EffectAudioStopAkEvent; // 0x24 (0x4)
	BOOL bShutOffOnDeath : 1; // 0x28 (0x4)
	const unsigned long: 0;
};

// 0x18 
struct FTurretDamageEffectData {
	float DamageThreshold; // 0x0 (0x4)
	struct FName DamageStartTagName; // 0x4 (0x8)
	struct FName DamageEndTagName; // 0xC (0x8)
	BOOL EffectActive : 1; // 0x14 (0x4)
	const unsigned long: 0;
};

// 0x2C 
struct FDeveloperData {
	struct FString Gamertag; // 0x0 (0xC)
	struct FString UniqueId; // 0xC (0xC)
	unsigned char Platform; // 0x18 (0x1) (Enum = EDeveloperPerksPlatforms)
	const unsigned char Unknown1[0x3]; // 0x19 (0x3) > LAST OFFSET
	struct TArray_unsigned_char UnlocksGamerpics; // 0x1C (0xC)
	BOOL bEligibleForGearboxCustomizations : 1; // 0x28 (0x4)
	const unsigned long: 0;
};

// 0x1C 
struct FPerkData {
	struct TArray_FName ButtonChain; // 0x0 (0xC)
	struct FString Command; // 0xC (0xC)
	BOOL bMustBeDeveloper : 1; // 0x18 (0x4)
	const unsigned long: 0;
};

// 0x8 
struct FDlcLevelTravelPair {
	struct ULevelTravelStationDefinition* NonDlcStationDef; // 0x0 (0x4)
	struct ULevelTravelStationDefinition* DlcStationDef; // 0x4 (0x4)
};

// 0x18 
struct FDrunkenWaveFormData {
	const struct FVector2D WaveFreq; // 0x0 (0x8)
	const struct FVector2D WaveAmp; // 0x8 (0x8)
	const struct FVector2D WavePhase; // 0x10 (0x8)
};

// 0x8 
struct FConditionalParticleEffectData {
	const struct UExpressionEvaluator* Expression; // 0x0 (0x4)
	const struct UParticleSystem* ParticleEffect; // 0x4 (0x4)
};

// 0x8 
struct FConditionalExplosionData {
	const struct UExpressionEvaluator* Expression; // 0x0 (0x4)
	const struct UExplosionDefinition* Explosion; // 0x4 (0x4)
};

// 0x3C 
struct FExplosionScaleData {
	const struct UParticleSystem* ExplosionPSTemplate; // 0x0 (0x4)
	const int MinRadius; // 0x4 (0x4)
	const int MaxRadius; // 0x8 (0x4)
	const float MinParticleScale; // 0xC (0x4)
	const float MaxParticleScale; // 0x10 (0x4)
	const struct UAkEvent* ExplosionAkEvent; // 0x14 (0x4)
	const struct UCameraAnim* CameraAnim; // 0x18 (0x4)
	const float MinCameraEffectDistance; // 0x1C (0x4)
	const float MaxCameraEffectDistance; // 0x20 (0x4)
	const struct UForceFeedbackWaveform* FFWaveform; // 0x24 (0x4)
	const struct UWillowExplosionImpactDefinition* ImpactEffect; // 0x28 (0x4)
	BOOL bDamageOverPeriodOfTime : 1; // 0x2C (0x4)
	const unsigned long: 0;
	float MaxDamageDuration; // 0x30 (0x4)
	float DamageInterval; // 0x34 (0x4)
	BOOL bDamageEachTargetOnlyOnce : 1; // 0x38 (0x4)
	BOOL bExpandRadiusOverTime : 1; // 0x38 (0x4)
	const unsigned long: 0;
};

// 0x18 
struct FRecentExplosion {
	struct FName ExplosionInstigatorName; // 0x0 (0x8)
	struct FVector ExplosionLocation; // 0x8 (0xC)
	float ExpirationTime; // 0x14 (0x4)
};

// 0x1C 
struct FLootAttachmentData {
	struct UItemPoolDefinition* ItemPool; // 0x0 (0x4)
	struct FAttributeInitializationData PoolProbability; // 0x4 (0x10)
	struct FName AttachmentPointName; // 0x14 (0x8)
};

// 0x28 
struct FLootConfigurationData {
	struct FName ConfigurationName; // 0x0 (0x8)
	const struct UAttributeInitializationDefinition* LootGameStageVarianceFormula; // 0x8 (0x4)
	struct FAttributeInitializationData Weight; // 0xC (0x10)
	struct TArray_FLootAttachmentData ItemAttachments; // 0x1C (0xC)
};

// 0x1C 
struct FInteractiveObjectReplicatedStateData {
	struct FReplicatedBehaviorConsumerState ReplicatedBehaviorConsumerState; // 0x0 (0xC)
	struct FReplicatedInstanceDataState ReplicatedInstanceDataState; // 0xC (0x10)
};

// 0x38 
struct FInteractiveObjectGradeModifierData {
	const struct UInteractiveObjectDefinition* CustomInteractiveObject; // 0x0 (0x4)
	const struct FString DisplayName; // 0x4 (0xC)
	const struct FAttributeInitializationData ExpLevel; // 0x10 (0x10)
	const struct TArray_UInteractiveObjectLootListDefinitionPtr IncludedCustomLootLists; // 0x20 (0xC)
	const struct TArray_FLootConfigurationData CustomLoot; // 0x2C (0xC)
};

// 0x60 
struct FInteractiveObjectGameStageGradeWeightData {
	const struct FGameStageRangeData GameStageRequirement; // 0x0 (0x8)
	const struct FAttributeInitializationData MinSpawnProbabilityModifier; // 0x8 (0x10)
	const struct FAttributeInitializationData MaxSpawnProbabilityModifier; // 0x18 (0x10)
	const struct FInteractiveObjectGradeModifierData GradeModifiers; // 0x28 (0x38)
};

// 0x14 
struct FBulletImpactEventData {
	const unsigned char DamageSurfaceType; // 0x0 (0x1) (Enum = EDamageSurfaceType)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	const BOOL bDisableRegularBulletDamage : 1; // 0x4 (0x4)
	const unsigned long: 0;
	const struct TArray_UBehaviorBasePtr Behaviors; // 0x8 (0xC)
};

// 0x28 
struct FBulletEventResponse {
	const int SplitNum; // 0x0 (0x4)
	const float SplitAngle; // 0x4 (0x4)
	const float SplitAngleOffset; // 0x8 (0x4)
	const float SplitDistance; // 0xC (0x4)
	const struct UFiringModeDefinition* SplitFire; // 0x10 (0x4)
	const float NewSpeed; // 0x14 (0x4)
	const BOOL bDetonate : 1; // 0x18 (0x4)
	const BOOL bRespawnTracer : 1; // 0x18 (0x4)
	const BOOL bUpdateBeamSourceLocation : 1; // 0x18 (0x4)
	const unsigned long: 0;
	const struct TArray_UBehaviorBasePtr Behaviors; // 0x1C (0xC)
};

// 0x2C 
struct FBulletTimerEvent {
	float Time; // 0x0 (0x4)
	struct FBulletEventResponse Response; // 0x4 (0x28)
};

// 0x28 
struct FWaveMotionData {
	BOOL bUseCustomWaveMotion : 1; // 0x0 (0x4)
	const unsigned long: 0;
	struct FVector WaveFreq; // 0x4 (0xC)
	struct FVector WaveAmp; // 0x10 (0xC)
	struct FVector WavePhase; // 0x1C (0xC)
};

// 0x44 
struct FFiringPatternLine {
	struct FRotator StartPoint; // 0x0 (0xC)
	struct FRotator EndPoint; // 0xC (0xC)
	BOOL bUseStartPointOnly : 1; // 0x18 (0x4)
	const unsigned long: 0;
	struct FWaveMotionData CustomWaveMotion; // 0x1C (0x28)
};

// 0x14 
struct FActiveAreaWaypointData {
	struct FVector WaypointLocation; // 0x0 (0xC)
	int WaypointRadius; // 0xC (0x4)
	struct UMissionObjectiveDefinition* WaypointObjective; // 0x10 (0x4)
};

// 0x18 
struct FActiveWaypointData {
	struct FVector WaypointLocation; // 0x0 (0xC)
	struct AActor* WaypointActor; // 0xC (0x4)
	struct UMissionObjectiveDefinition* WaypointObjective; // 0x10 (0x4)
	BOOL bCanTransition : 1; // 0x14 (0x4)
	const unsigned long: 0;
};

// 0x8 
struct FColiseumStat {
	unsigned char StatType; // 0x0 (0x1) (Enum = EColiseumStatType)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	int StatValue; // 0x4 (0x4)
};

// 0x10 
struct FColiseumPlayerInfo {
	struct AWillowPlayerController* WPC; // 0x0 (0x4)
	struct TArray_FColiseumStat Stats; // 0x4 (0xC)
};

// 0xC 
struct FAreaWaypointData {
	struct AActor* WaypointActor; // 0x0 (0x4)
	int WaypointRadius; // 0x4 (0x4)
	struct UMissionObjectiveDefinition* WaypointObjective; // 0x8 (0x4)
};

// 0x14 
struct FWaypointActorData {
	struct AActor* WaypointActor; // 0x0 (0x4)
	struct UMissionObjectiveDefinition* WaypointObjective; // 0x4 (0x4)
	struct TArray_UWaypointComponentPtr Waypoints; // 0x8 (0xC)
};

// 0x1C 
struct FMessageOfTheDay {
	struct FString Header; // 0x0 (0xC)
	struct FString Body; // 0xC (0xC)
	int DisplayTime; // 0x18 (0x4)
};

// 0xC 
struct FDataProviderInfo {
	struct FScriptInterface DataProvider; // 0x0 (0x8)
	int SelectedIndex; // 0x8 (0x4)
};

// 0x38 
struct FDialogBoxButton {
	struct FString Caption; // 0x0 (0xC)
	struct FString TipText; // 0xC (0xC)
	struct FName Tag; // 0x18 (0x8)
	struct TArray_FName Keys; // 0x20 (0xC)
	struct FScriptDelegate OnButtonClicked; // 0x2C (0xC)
};

// 0x18 
struct FPauseTimerData {
	struct FName FuncName; // 0x0 (0x8)
	BOOL bLoop : 1; // 0x8 (0x4)
	const unsigned long: 0;
	float Rate; // 0xC (0x4)
	float Count; // 0x10 (0x4)
	struct UObject* TimerObj; // 0x14 (0x4)
};

// 0x34 
struct FMissionStateBalanceAdjustment {
	const struct UMissionDefinition* Mission; // 0x0 (0x4)
	const struct FAttributeInitializationData MinGameStage; // 0x4 (0x10)
	const struct FAttributeInitializationData MaxGameStage; // 0x14 (0x10)
	const struct FAttributeInitializationData AwesomeLevel; // 0x24 (0x10)
};

// 0x54 
struct FRegionBalanceData {
	const struct URegionDefinition* Region; // 0x0 (0x4)
	const struct FAttributeInitializationData MinDefaultGameStage; // 0x4 (0x10)
	const struct FAttributeInitializationData MaxDefaultGameStage; // 0x14 (0x10)
	const struct FAttributeInitializationData DefaultAwesomeLevel; // 0x24 (0x10)
	const BOOL bSpecifyBoostAbovePlayer : 1; // 0x34 (0x4)
	const unsigned long: 0;
	const struct FAttributeInitializationData GameStageIncreaseAbovePlayer; // 0x38 (0x10)
	const struct TArray_FMissionStateBalanceAdjustment MissionOverrides; // 0x48 (0xC)
};

// 0x20 
struct FFlashTextEntry {
	struct FString TextEntry; // 0x0 (0xC)
	struct FString IconFrameLabel; // 0xC (0xC)
	unsigned char ArrayType; // 0x18 (0x1) (Enum = EArrayKind)
	const unsigned char Unknown1[0x3]; // 0x19 (0x3) > LAST OFFSET
	struct UObject* Obj; // 0x1C (0x4)
};

// 0xC 
struct FGrenadeModBehaviorSequenceStateData {
	const unsigned char Action; // 0x0 (0x1) (Enum = EChangeStatus)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	const struct FName SequenceName; // 0x4 (0x8)
};

// 0xC 
struct FGrenadeModPartBehaviorSequenceStateData {
	const unsigned char Action; // 0x0 (0x1) (Enum = EChangeStatus)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	const struct FName SequenceName; // 0x4 (0x8)
};

// 0x28 
struct FHitRegionDamage {
	struct UBodyHitRegionDefinition* BodyHitRegion; // 0x0 (0x4)
	float Damage; // 0x4 (0x4)
	float RecentDamage; // 0x8 (0x4)
	BOOL bHasGored : 1; // 0xC (0x4)
	const unsigned long: 0;
	struct TArray_float LastPctHealthForRunDamageTriggeredBehaviors; // 0x10 (0xC)
	struct TArray_float LastPctHealthForRunHealingTriggeredBehaviors; // 0x1C (0xC)
};

// 0x10 
struct FMinimapIconClip {
	struct UGFxObject* Object; // 0x0 (0x4)
	BOOL bVisible : 1; // 0x4 (0x4)
	const unsigned long: 0;
	struct FVector2D MapPos; // 0x8 (0x8)
};

// 0x1C 
struct FMinimapObjectiveIconClip {
	struct UGFxObject* Object; // 0x0 (0x4)
	BOOL bVisible : 1; // 0x4 (0x4)
	const unsigned long: 0;
	struct FVector2D MapPos; // 0x8 (0x8)
	struct UGFxObject* OptionalClip; // 0x10 (0x4)
	struct UGFxObject* AboveClip; // 0x14 (0x4)
	struct UGFxObject* BelowClip; // 0x18 (0x4)
};

// 0x10 
struct FUnloadableDlcEchoCallData {
	struct FString CallDefName; // 0x0 (0xC)
	int DlcPackageId; // 0xC (0x4)
};

// 0x24 
struct FMissionWidgetMessage {
	unsigned char Type; // 0x0 (0x1) (Enum = EMissionWidgetMessageType)
	unsigned char Category; // 0x1 (0x1) (Enum = EMissionWidgetMessageCategory)
	const unsigned char Unknown1[0x2]; // 0x2 (0x2) > LAST OFFSET
	struct UMissionDefinition* MissDef; // 0x4 (0x4)
	struct UMissionObjectiveDefinition* ObjDef; // 0x8 (0x4)
	BOOL bBranch : 1; // 0xC (0x4)
	const unsigned long: 0;
	int Slot; // 0x10 (0x4)
	int SwapFromSlot; // 0x14 (0x4)
	BOOL bSkipAnim : 1; // 0x18 (0x4)
	const unsigned long: 0;
	int ModuleNum; // 0x1C (0x4)
	float EventTime; // 0x20 (0x4)
};

// 0x18 
struct FWorldSpaceIcon {
	struct UGFxObject* IconClip; // 0x0 (0x4)
	struct UGFxObject* ArrowClip; // 0x4 (0x4)
	BOOL bOccluded : 1; // 0x8 (0x4)
	const unsigned long: 0;
	float NextOcclusionTestTime; // 0xC (0x4)
	float CachedTextboxWidth; // 0x10 (0x4)
	float CachedTextboxHeight; // 0x14 (0x4)
};

// 0x44 
struct FObjectiveIcon {
	struct UGFxObject* IconClip; // 0x0 (0x4)
	struct UGFxObject* ArrowClip; // 0x4 (0x4)
	BOOL bOccluded : 1; // 0x8 (0x4)
	const unsigned long: 0;
	float NextOcclusionTestTime; // 0xC (0x4)
	float CachedTextboxWidth; // 0x10 (0x4)
	float CachedTextboxHeight; // 0x14 (0x4)
	BOOL bInWorldSpace : 1; // 0x18 (0x4)
	const unsigned long: 0;
	float TransitionStartTime; // 0x1C (0x4)
	struct FVector LastLocation; // 0x20 (0xC)
	float FadeAlpha; // 0x2C (0x4)
	float FadeScale; // 0x30 (0x4)
	struct UGFxObject* ObjectiveClip; // 0x34 (0x4)
	struct UGFxObject* AboveClip; // 0x38 (0x4)
	struct UGFxObject* BelowClip; // 0x3C (0x4)
	struct UGFxObject* OptionalClip; // 0x40 (0x4)
};

// 0x20 
struct FPlayerIcon {
	struct UGFxObject* IconClip; // 0x0 (0x4)
	struct UGFxObject* ArrowClip; // 0x4 (0x4)
	BOOL bOccluded : 1; // 0x8 (0x4)
	const unsigned long: 0;
	float NextOcclusionTestTime; // 0xC (0x4)
	float CachedTextboxWidth; // 0x10 (0x4)
	float CachedTextboxHeight; // 0x14 (0x4)
	struct UGFxObject* TextClip; // 0x18 (0x4)
	struct UGFxObject* StateClip; // 0x1C (0x4)
};

// 0x8 
struct FWorldSpacePlayerInfo {
	struct AWillowPlayerReplicationInfo* WPRI; // 0x0 (0x4)
	struct AWillowPlayerPawn* WPP; // 0x4 (0x4)
};

// 0x14 
struct FDesignerAttributeDefaultValueData {
	struct UDesignerAttributeDefinition* DesignerAttribute; // 0x0 (0x4)
	struct FAttributeInitializationData BaseValue; // 0x4 (0x10)
};

// 0x34 
struct FTopStatData {
	struct FString LabelText; // 0x0 (0xC)
	struct FString ValueText; // 0xC (0xC)
	struct FString AuxText; // 0x18 (0xC)
	unsigned char Arrow; // 0x24 (0x1) (Enum = ETopStatArrow)
	const unsigned char Unknown1[0x3]; // 0x25 (0x3) > LAST OFFSET
	struct FString IconName; // 0x28 (0xC)
};

// 0x38 
struct FInputDeviceAxisData {
	const struct FName AxisName; // 0x0 (0x8)
	const unsigned char AxisParameter; // 0x8 (0x1) (Enum = EAxisParameter)
	const unsigned char Unknown1[0x3]; // 0x9 (0x3) > LAST OFFSET
	const float DeadZone; // 0xC (0x4)
	const float Speed; // 0x10 (0x4)
	const float AbsoluteAxis; // 0x14 (0x4)
	const int InvertMultiplier; // 0x18 (0x4)
	const struct FName ActionName; // 0x1C (0x8)
	const struct FString Caption; // 0x24 (0xC)
	const struct FName KeyBindGroup; // 0x30 (0x8)
};

// 0x44 
struct FInputDeviceButtonData {
	const struct FName KeyName; // 0x0 (0x8)
	const struct TArray_UInputActionDefinitionPtr PressActions; // 0x8 (0xC)
	const struct TArray_UInputActionDefinitionPtr TapActions; // 0x14 (0xC)
	const struct TArray_UInputActionDefinitionPtr HoldActions; // 0x20 (0xC)
	const struct FString Caption; // 0x2C (0xC)
	const struct FName KeyBindGroup; // 0x38 (0x8)
	const struct UInputActionDefinition* RemapToDefaultLayoutInputAction; // 0x40 (0x4)
};

// 0x8 
struct FLookAxisDefinitionData {
	const struct ULookAxisDefinition* Horizontal; // 0x0 (0x4)
	const struct ULookAxisDefinition* Vertical; // 0x4 (0x4)
};

// 0x24 
struct FInputRemappingAxisData {
	const struct FName DefaultAxisName; // 0x0 (0x8)
	const struct FName RemappedAxisName; // 0x8 (0x8)
	const unsigned char RemappedAxisParameter; // 0x10 (0x1) (Enum = EAxisParameter)
	const unsigned char Unknown1[0x3]; // 0x11 (0x3) > LAST OFFSET
	const BOOL bInvertInput : 1; // 0x14 (0x4)
	const unsigned long: 0;
	const struct FString Caption; // 0x18 (0xC)
};

// 0x40 
struct FInputRemappingButtonData {
	const struct FName DefaultKeyName; // 0x0 (0x8)
	const struct FName RemappedKeyName; // 0x8 (0x8)
	const struct TArray_UInputActionDefinitionPtr RemappedPressActions; // 0x10 (0xC)
	const struct TArray_UInputActionDefinitionPtr RemappedTapActions; // 0x1C (0xC)
	const struct TArray_UInputActionDefinitionPtr RemappedHoldActions; // 0x28 (0xC)
	const struct FString Caption; // 0x34 (0xC)
};

// 0xC 
struct FBehaviorKeyFrameEventData {
	const struct FName EventName; // 0x0 (0x8)
	float KeyTime; // 0x8 (0x4)
};

// 0x4 
struct FSimpleAnimStateData {
	int AnimState; // 0x0 (0x4)
};

// 0x2C 
struct FResultEntry {
	struct FOnlineGameSearchResult Game; // 0x0 (0x8)
	struct FString Name; // 0x8 (0xC)
	int ExpLevel; // 0x14 (0x4)
	int Mission; // 0x18 (0x4)
	int PlayThrough; // 0x1C (0x4)
	int NumPlayers; // 0x20 (0x4)
	int MaxPlayers; // 0x24 (0x4)
	int Ping; // 0x28 (0x4)
};

// 0x3C 
struct FPersistentMapDependencies {
	struct FName PersistentMap; // 0x0 (0x8)
	struct TArray_FName SecondaryMaps; // 0x8 (0xC)
	struct TArray_FName ConnectedPersistents; // 0x14 (0xC)
	const struct FString LevelName; // 0x20 (0xC)
	struct UGameReleaseDefinition* GameReleaseDef; // 0x2C (0x4)
	struct TArray_unsigned_char DiscoveryAchievements; // 0x30 (0xC)
};

// 0x8 
struct FLiftBodyPair {
	const struct UPopulationBodyTag* BodyTag; // 0x0 (0x4)
	const struct UPhaseLockDefinition* PhaseLockDef; // 0x4 (0x4)
};

// 0x1C 
struct FLootData {
	struct FAttributeInitializationData Weight; // 0x0 (0x10)
	struct TArray_UItemPoolDefinitionPtr ItemPools; // 0x10 (0xC)
};

// 0x18 
struct FManufacturerSelectorData {
	const struct FName AssociatedManufacturerName; // 0x0 (0x8)
	const struct FAttributeInitializationData ValueIfMatched; // 0x8 (0x10)
};

// 0x1C 
struct FUnlockItemData {
	int GameStage; // 0x0 (0x4)
	const struct TArray_UInventoryBalanceDefinitionPtr UnlockItems; // 0x4 (0xC)
	const struct TArray_UItemPoolDefinitionPtr UnlockItemPools; // 0x10 (0xC)
};

// 0x24 
struct FMarketPlaceFilter {
	struct FString Tag; // 0x0 (0xC)
	struct FString Caption; // 0xC (0xC)
	struct FString Filter; // 0x18 (0xC)
};

// 0x24 
struct FMatchmakingResultEntry {
	struct FString MatchTypeIconFrameName; // 0x0 (0xC)
	struct FString StatusIconFrameName; // 0xC (0xC)
	struct FString Message; // 0x18 (0xC)
};

// 0x4C 
struct FRewardData {
	const struct FAttributeInitializationData ExperienceRewardPercentage; // 0x0 (0x10)
	const unsigned char CurrencyRewardType; // 0x10 (0x1) (Enum = ECurrencyType)
	const unsigned char Unknown1[0x3]; // 0x11 (0x3) > LAST OFFSET
	const struct FAttributeInitializationData CreditRewardMultiplier; // 0x14 (0x10)
	const struct FAttributeInitializationData OtherCurrencyReward; // 0x24 (0x10)
	const struct TArray_UInventoryBalanceDefinitionPtr RewardItems; // 0x34 (0xC)
	const struct TArray_UItemPoolDefinitionPtr RewardItemPools; // 0x40 (0xC)
};

// 0x5 
struct FObjectiveDependencyData {
	struct UMissionObjectiveDefinition* Objective; // 0x0 (0x4)
	unsigned char Status; // 0x4 (0x1) (Enum = EObjectiveDependencyStatus)
};

// 0x10 
struct FMissionObjectiveWaypointData {
	struct UMissionObjectiveDefinition* LinkedObjective; // 0x0 (0x4)
	struct TArray_UMissionObjectiveSetDefinitionPtr ObjectiveSetRestrictions; // 0x4 (0xC)
};

// 0x10 
struct FMissionItemPoolData {
	BOOL bItemAlwaysGranted : 1; // 0x0 (0x4)
	const unsigned long: 0;
	struct UMissionObjectiveDefinition* ItemObjective; // 0x4 (0x4)
	struct UMissionDefinition* DirectiveDefinition; // 0x8 (0x4)
	struct UItemPoolDefinition* ItemPool; // 0xC (0x4)
};

// 0xC 
struct FMissionKickoffData {
	struct UMissionDefinition* Mission; // 0x0 (0x4)
	struct AWillowPlayerController* PlayerThatAcceptedMission; // 0x4 (0x4)
	BOOL bFromActivation : 1; // 0x8 (0x4)
	const unsigned long: 0;
};

// 0x1C 
struct FMinimapIconHelper_Director {
	struct FScriptInterface Director; // 0x0 (0x8)
	struct FVector Location; // 0x8 (0xC)
	struct UMissionDefinition* ActionableMissionDefinition; // 0x14 (0x4)
	BOOL bHasMoreActionableMissions : 1; // 0x18 (0x4)
	BOOL bBegins : 1; // 0x18 (0x4)
	BOOL bEnds : 1; // 0x18 (0x4)
	const unsigned long: 0;
};

// 0x8 
struct FObjectiveUpdateData {
	struct UMissionObjectiveDefinition* Objective; // 0x0 (0x4)
	int ObjectiveBit; // 0x4 (0x4)
};

// 0x10 
struct FBlockedMissionData {
	struct UMissionDefinition* BlockedMission; // 0x0 (0x4)
	struct TArray_UMissionDefinitionPtr MissionBlockers; // 0x4 (0xC)
};

// 0x8 
struct FDefendTargetData {
	struct UMissionObjectiveDefinition* Objective; // 0x0 (0x4)
	int PercentHealth; // 0x4 (0x4)
};

// 0xC 
struct FDefendMissionData {
	struct UMissionObjectiveDefinition* Objective; // 0x0 (0x4)
	struct FScriptInterface Target; // 0x4 (0x8)
};

// 0xC 
struct FTimedMissionData {
	struct UMissionDefinition* Mission; // 0x0 (0x4)
	float SecondsLeft; // 0x4 (0x4)
	BOOL bTimerRunning : 1; // 0x8 (0x4)
	const unsigned long: 0;
};

// 0xC 
struct FLevelTransitionData {
	struct FName TargetLevel; // 0x0 (0x8)
	struct ALevelTravelStation* LevelTransition; // 0x8 (0x4)
};

// 0x10 
struct FMissionWaypointsData {
	struct UMissionDefinition* Mission; // 0x0 (0x4)
	struct TArray_UWaypointComponentPtr Waypoints; // 0x4 (0xC)
};

// 0x10 
struct FMissionObserversData {
	struct UMissionDefinition* Mission; // 0x0 (0x4)
	struct TArray_FScriptInterface Observers; // 0x4 (0xC)
};

// 0x14 
struct FMissionSetData {
	struct FName PackageName; // 0x0 (0x8)
	struct TArray_UMissionDefinitionPtr Missions; // 0x8 (0xC)
};

// 0x13 
struct FPartGradeWeightData {
	const struct UWeaponPartDefinition* Part; // 0x0 (0x4)
	const struct TArray_FManufacturerCustomGradeWeightData Manufacturers; // 0x4 (0xC)
	const unsigned char MinGameStageIndex; // 0x10 (0x1)
	const unsigned char MaxGameStageIndex; // 0x11 (0x1)
	const unsigned char DefaultWeightIndex; // 0x12 (0x1)
};

// 0x10 
struct FWeaponCustomPartTypeData {
	const BOOL bEnabled : 1; // 0x0 (0x4)
	const unsigned long: 0;
	const struct TArray_FPartGradeWeightData WeightedParts; // 0x4 (0xC)
};

// 0x14 
struct FNPCList {
	struct AWillowMind* Mind; // 0x0 (0x4)
	float LastPathTime; // 0x4 (0x4)
	float PathRequestTime; // 0x8 (0x4)
	BOOL bWantsToPath : 1; // 0xC (0x4)
	BOOL bOnPerch : 1; // 0xC (0x4)
	BOOL bForceStopped : 1; // 0xC (0x4)
	BOOL bIsPathing : 1; // 0xC (0x4)
	BOOL bCanPath : 1; // 0xC (0x4)
	const unsigned long: 0;
	float Score; // 0x10 (0x4)
};

// 0x1C 
struct FSystemOption {
	struct FName Name; // 0x0 (0x8)
	int ValueCount; // 0x8 (0x4)
	int CurrValue; // 0xC (0x4)
	const struct TArray_FString ValueStrings; // 0x10 (0xC)
};

// 0x24 
struct FCameraLerpKeyFrame {
	float Alpha; // 0x0 (0x4)
	unsigned char CameraTargetThisKeyFrame; // 0x4 (0x1) (Enum = ECameraTargetForPassenger)
	unsigned char CameraRotationBehavior; // 0x5 (0x1) (Enum = ECameraRotationThisFrame)
	const unsigned char Unknown1[0x2]; // 0x6 (0x2) > LAST OFFSET
	struct FVector BaseCameraPosition; // 0x8 (0xC)
	float CameraOffset; // 0x14 (0x4)
	struct FRotator ForcedCameraRotation; // 0x18 (0xC)
};

// 0x38 
struct FRelevanceCacheStruct {
	struct FName RealViewerName; // 0x0 (0x8)
	struct FName ToPawnName; // 0x8 (0x8)
	float TimeCached; // 0x10 (0x4)
	float NextUpdateTime; // 0x14 (0x4)
	BOOL bIsRelevant : 1; // 0x18 (0x4)
	const unsigned long: 0;
	struct FVector FromLoc; // 0x1C (0xC)
	struct FVector ToLoc; // 0x28 (0xC)
	int RotatingIndex; // 0x34 (0x4)
};

// 0x28 
struct FRelevanceUpdateStruct {
	struct APlayerController* FromRealViewer; // 0x0 (0x4)
	struct FVector SrcLocation; // 0x4 (0xC)
	struct AWillowPawn* ToPawn; // 0x10 (0x4)
	float TimeRequested; // 0x14 (0x4)
	BOOL bRelevant : 1; // 0x18 (0x4)
	const unsigned long: 0;
	unsigned char ShouldRemove; // 0x1C (0x1)
	const unsigned char Unknown1[0x3]; // 0x1D (0x3) > LAST OFFSET
	BOOL bIsForcedValue : 1; // 0x20 (0x4)
	BOOL bForceNextCheckTrue : 1; // 0x20 (0x4)
	const unsigned long: 0;
	float NextUpdateTime; // 0x24 (0x4)
};

// 0x20 
struct FRelevanceBucketStruct {
	int NdxToStartCheckFrom; // 0x0 (0x4)
	float DistanceSquared; // 0x4 (0x4)
	int MinLineChecksPerFrame; // 0x8 (0x4)
	int MaxLineChecksPerFrame; // 0xC (0x4)
	int MaxIterationsPerFrame; // 0x10 (0x4)
	struct TArray_FRelevanceUpdateStruct Relevance; // 0x14 (0xC)
};

// 0x18 
struct FPCContextMenuItem {
	struct FString Caption; // 0x0 (0xC)
	struct FString Action; // 0xC (0xC)
};

// 0x5 
struct FEvalActionData {
	BOOL bIsActive : 1; // 0x0 (0x4)
	const unsigned long: 0;
	unsigned char Action; // 0x4 (0x1) (Enum = EPlayerEvalAction)
};

// 0x8 
struct FPlayerClassCountOverride {
	int Override; // 0x0 (0x4)
	struct UPlayerClassIdentifierDefinition* PlayerClassIdDef; // 0x4 (0x4)
};

// 0x20 
struct FActiveInteraction {
	float TimeLength; // 0x0 (0x4)
	float TimeRemaining; // 0x4 (0x4)
	struct UPlayerInteractionServer* InteractionServer; // 0x8 (0x4)
	struct TArray_AWillowPlayerControllerPtr Players; // 0xC (0xC)
	struct AWillowPlayerController* Instigator; // 0x18 (0x4)
	BOOL IsValid : 1; // 0x1C (0x4)
	const unsigned long: 0;
};

// 0x1C 
struct FSkillTreeTierLayoutData {
	struct USkillTreeBranchDefinition* ParentBranchDefinition; // 0x0 (0x4)
	int TierNumber; // 0x4 (0x4)
	struct USkillTreeBranchDefinition* DependencyBranchDefinition; // 0x8 (0x4)
	int DependencyTierNumber; // 0xC (0x4)
	struct TArray_USkillDefinitionPtr Skills; // 0x10 (0xC)
};

// 0x38 
struct FItemMemento {
	struct FInventorySerialNumber SerialNumber; // 0x0 (0x34)
	BOOL bEquipped : 1; // 0x34 (0x4)
	BOOL bDropOnDeath : 1; // 0x34 (0x4)
	BOOL bShopsHaveInfiniteQuantity : 1; // 0x34 (0x4)
	BOOL bGrenadeStored : 1; // 0x34 (0x4)
	const unsigned long: 0;
};

// 0x18 
struct FPopulatedAIPawnMemento {
	struct TArray_FWeaponMemento PawnWeapons; // 0x0 (0xC)
	struct TArray_FItemMemento PawnItems; // 0xC (0xC)
};

// 0x6 
struct FPopulatedInteractiveObjectMemento {
	int BehaviorSequenceState; // 0x0 (0x4)
	unsigned char bCanBeUsed[2]; // 0x4 (0x2)
};

// 0x38 
struct FFeaturedItemData {
	const struct FAttributeInitializationData CommerceMarkup; // 0x0 (0x10)
	const struct FName LootConfiguration; // 0x10 (0x8)
	const struct FAttributeInitializationData GameStageValue; // 0x18 (0x10)
	const struct FAttributeInitializationData AwesomeLevelValue; // 0x28 (0x10)
};

// 0x10 
struct FPickupMemento {
	struct FRotator Rotation; // 0x0 (0xC)
	BOOL bIsAttachedToSomething : 1; // 0xC (0x4)
	const unsigned long: 0;
};

// 0x88 
struct FPopulatedPickupMemento {
	struct UClass* SavedInventoryClass; // 0x0 (0x4)
	struct FPickupMemento PickupMemento; // 0x4 (0x10)
	struct FWeaponMemento WeaponMemento; // 0x14 (0x3C)
	struct FItemMemento ItemMemento; // 0x50 (0x38)
};

// 0x20 
struct FVehicleDefaultCrewStruct {
	struct UPopulationDefinition* PopulationDefForRole; // 0x0 (0x4)
	unsigned char Role; // 0x4 (0x1) (Enum = WillowVehicleRoles)
	const unsigned char Unknown1[0x3]; // 0x5 (0x3) > LAST OFFSET
	const struct FAttributeInitializationData ProbabilityOfSpawn; // 0x8 (0x10)
	BOOL OverrideDefaultSeat : 1; // 0x18 (0x4)
	const unsigned long: 0;
	int PreferredSeat; // 0x1C (0x4)
};

// 0x20 
struct FVehicleGradeModifierData {
	const struct AWillowVehicle* CustomVehicle; // 0x0 (0x4)
	const struct FString DisplayName; // 0x4 (0xC)
	const int ExpLevel; // 0x10 (0x4)
	const struct TArray_UBehaviorBasePtr OnSpawnCustomizations; // 0x14 (0xC)
};

// 0x48 
struct FVehicleGameStageGradeWeightData {
	const struct FGameStageRangeData GameStageRequirement; // 0x0 (0x8)
	const struct FAttributeInitializationData MinSpawnProbabilityModifier; // 0x8 (0x10)
	const struct FAttributeInitializationData MaxSpawnProbabilityModifier; // 0x18 (0x10)
	const struct FVehicleGradeModifierData GradeModifiers; // 0x28 (0x20)
};

// 0x24 
struct FPopulationOptionDenSpawnData {
	struct FString PopulationDefName; // 0x0 (0xC)
	int MaxActiveActors; // 0xC (0x4)
	int NumTotalActors; // 0x10 (0x4)
	int NumActiveActors; // 0x14 (0x4)
	float NextSpawnTime; // 0x18 (0x4)
	int NumTotalExternalActors; // 0x1C (0x4)
	int NumActiveExternalActors; // 0x20 (0x4)
};

// 0x14 
struct FHomingRadiusThreshold {
	const float Radius; // 0x0 (0x4)
	const float MaxAngleCos; // 0x4 (0x4)
	const struct TArray_UBehaviorBasePtr Behaviors; // 0x8 (0xC)
};

// 0x4 
struct FObjectReference {
	struct UObject* Obj; // 0x0 (0x4)
};

// 0x1C 
struct FDeferredSkillActivationData {
	struct AController* SkillInstigator; // 0x0 (0x4)
	struct USkillDefinition* Definition; // 0x4 (0x4)
	struct UObject* AdditionalSkillTarget; // 0x8 (0x4)
	int SkillGrade; // 0xC (0x4)
	struct FScriptDelegate StateChangeDelegate; // 0x10 (0xC)
};

// 0x10 
struct FTier {
	struct TArray_USkillDefinitionPtr Skills; // 0x0 (0xC)
	const int PointsToUnlockNextTier; // 0xC (0x4)
};

// 0xC 
struct FTierLayout {
	const struct TArray_BOOL bCellIsOccupied; // 0x0 (0xC)
};

// 0x1C 
struct FSkillTreeUICell {
	int BranchNum; // 0x0 (0x4)
	int TierNum; // 0x4 (0x4)
	int CellNum; // 0x8 (0x4)
	struct UGFxObject* Clip_Cell; // 0xC (0x4)
	struct UGFxObject* Clip_Highlight; // 0x10 (0x4)
	struct UGFxObject* Clip_Outline; // 0x14 (0x4)
	struct UGFxObject* Clip_Overclocked; // 0x18 (0x4)
};

// 0x14 
struct Fartifact_datum {
	int SkillIndex; // 0x0 (0x4)
	int Grade; // 0x4 (0x4)
	struct FString Name; // 0x8 (0xC)
};

// 0x8 
struct FSMPerchRandomPair {
	float Weight; // 0x0 (0x4)
	struct USpecialMove_Perch* SMD; // 0x4 (0x4)
};

// 0x9 
struct FCachedInvData {
	struct AWillowInventory* Inv; // 0x0 (0x4)
	BOOL bReadied : 1; // 0x4 (0x4)
	const unsigned long: 0;
	unsigned char TrashOrFavorite; // 0x8 (0x1) (Enum = PlayerMark)
};

// 0x28 
struct FDirectionData {
	struct FName This; // 0x0 (0x8)
	struct FName Left; // 0x8 (0x8)
	struct FName Right; // 0x10 (0x8)
	struct FName Up; // 0x18 (0x8)
	struct FName Down; // 0x20 (0x8)
};

// 0x10 
struct FClipRect {
	float Top; // 0x0 (0x4)
	float Right; // 0x4 (0x4)
	float Bottom; // 0x8 (0x4)
	float Left; // 0xC (0x4)
};

// 0x88 
struct FMapObjectData {
	struct AWillowPlayerController* Player; // 0x0 (0x4)
	struct AWillowVehicle* Vehicle; // 0x4 (0x4)
	struct ALevelLandmark* Landmark; // 0x8 (0x4)
	struct AWillowInteractiveObject* ClientInteractiveObject; // 0xC (0x4)
	struct AWillowPlayerReplicationInfo* WPRI; // 0x10 (0x4)
	BOOL bWaypoint : 1; // 0x14 (0x4)
	BOOL bAreaWaypoint : 1; // 0x14 (0x4)
	BOOL bOptional : 1; // 0x14 (0x4)
	const unsigned long: 0;
	int WaypointIndex; // 0x18 (0x4)
	struct FVector CustomObjectLoc; // 0x1C (0xC)
	BOOL bIsDirty : 1; // 0x28 (0x4)
	const unsigned long: 0;
	struct FVector2D TransformedLocation; // 0x2C (0x8)
	float Angle; // 0x34 (0x4)
	float Scale; // 0x38 (0x4)
	struct FString AS_IconClipPath; // 0x3C (0xC)
	struct FString AS_IconClipFrame; // 0x48 (0xC)
	struct FString AS_IconClipInnerFrame; // 0x54 (0xC)
	struct FString AS_IconPath; // 0x60 (0xC)
	BOOL bShowInfoBox : 1; // 0x6C (0x4)
	const unsigned long: 0;
	struct FString InfoBoxTitle; // 0x70 (0xC)
	struct FString InfoBoxDesc; // 0x7C (0xC)
};

// 0x18 
struct FTestMapsListDatum {
	const BOOL bUseLoader : 1; // 0x0 (0x4)
	const unsigned long: 0;
	const struct FString MapDisplayName; // 0x4 (0xC)
	const struct FName MapName; // 0x10 (0x8)
};

// 0x3C 
struct FTextMarkupEntry {
	struct FString MarkupTag; // 0x0 (0xC)
	struct FString HTMLMarkupBeginText; // 0xC (0xC)
	struct FString HTMLMarkupEndText; // 0x18 (0xC)
	struct FString MarkupBeginTag; // 0x24 (0xC)
	struct FString MarkupEndTag; // 0x30 (0xC)
};

// 0x14 
struct FConditionalAnimationData {
	const struct UExpressionEvaluator* Expression; // 0x0 (0x4)
	const struct FName AnimationName; // 0x4 (0x8)
	const struct UCameraAnim* CameraAnim; // 0xC (0x4)
	const struct UAnimSet* AnimSet; // 0x10 (0x4)
};

// 0x24 
struct FNameExpressionData {
	const struct TArray_FAttributeExpressionData Expressions; // 0x0 (0xC)
	const struct FString PreModifier; // 0xC (0xC)
	const struct FString PostModifier; // 0x18 (0xC)
};

// 0x8 
struct FDamageTypeBySpeedStruct {
	float Speed; // 0x0 (0x4)
	struct UDamageTypeDefinition* DamageType; // 0x4 (0x4)
};

// 0x2C 
struct FCollisionDamageCalculation {
	const struct UDamageTypeDefinition* DamageType; // 0x0 (0x4)
	const struct TArray_FDamageTypeBySpeedStruct DamageTypes; // 0x4 (0xC)
	struct FAttributeInitializationData Formula; // 0x10 (0x10)
	float MomentumFactor; // 0x20 (0x4)
	float AddZMomentum; // 0x24 (0x4)
	BOOL bApplyReverseMomentum : 1; // 0x28 (0x4)
	BOOL bPercentOfTargetHealth : 1; // 0x28 (0x4)
	BOOL bApplySpeedDamage : 1; // 0x28 (0x4)
	BOOL bApplySpeedMomentum : 1; // 0x28 (0x4)
	const unsigned long: 0;
};

// 0x20 
struct FVStatusEffectResistance {
	const struct FAttributeInitializationData ChanceResistance; // 0x0 (0x10)
	const struct FAttributeInitializationData DurationResistance; // 0x10 (0x10)
};

// 0xC 
struct FVehicleCrewAnimSetMapping {
	struct FName CharacterName; // 0x0 (0x8)
	struct UAnimSet* TheAnimSet; // 0x8 (0x4)
};

// 0xC 
struct FVSSUsageTracking {
	struct AVehicleSpawnStationTerminal* TheTerminal; // 0x0 (0x4)
	struct FName ThePlayerName; // 0x4 (0x8)
};

// 0x18 
struct FWeaponAmmoResourceSelectorData {
	const struct FName AssociatedResourceName; // 0x0 (0x8)
	const struct FAttributeInitializationData ValueIfMatched; // 0x8 (0x10)
};

// 0x18 
struct FLabelToLinkageMapping {
	struct FString LabelName; // 0x0 (0xC)
	struct FString LinkageName; // 0xC (0xC)
};

// 0x8 
struct FAttributePresentationDamageTypeMapping {
	const struct UAttributePresentationDefinition* Presentation; // 0x0 (0x4)
	const struct UDamageTypeDefinition* DamageType; // 0x4 (0x4)
};

// 0x14 
struct FWeaponTypeSelectorData {
	const unsigned char WeaponType; // 0x0 (0x1) (Enum = EWeaponType)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	const struct FAttributeInitializationData ValueIfMatched; // 0x4 (0x10)
};

// 0x18 
struct FAimAnimTransitionData {
	unsigned char FromState; // 0x0 (0x1) (Enum = EAimAnimState)
	unsigned char ToState; // 0x1 (0x1) (Enum = EAimAnimState)
	const unsigned char Unknown1[0x2]; // 0x2 (0x2) > LAST OFFSET
	struct FName AnimName; // 0x4 (0x8)
	float BlendInTime; // 0xC (0x4)
	float BlendOutTime; // 0x10 (0x4)
	BOOL bPlayInReverse : 1; // 0x14 (0x4)
	const unsigned long: 0;
};

// 0x10 
struct FBoneRotateData {
	int Index; // 0x0 (0x4)
	struct FRotator Rotation; // 0x4 (0xC)
};

// 0xC 
struct FAnimDeltaDataList {
	struct TArray_int IndexList; // 0x0 (0xC)
};

// 0x8 
struct FAnimSwapData {
	int Index1; // 0x0 (0x4)
	int Index2; // 0x4 (0x4)
};

// 0x54 
struct FPrismDataContainer {
	struct TArray_FBoneRotateData RotateBoneTranslation; // 0x0 (0xC)
	struct TArray_FBoneRotateData RotateBone; // 0xC (0xC)
	struct TArray_FBoneRotateData RotateRefBone; // 0x18 (0xC)
	struct TArray_FAnimDeltaDataList AnimDeltaList; // 0x24 (0xC)
	struct TArray_FAnimDeltaDataList AnimDeltaRefList; // 0x30 (0xC)
	struct TArray_FAnimSwapData SwapList; // 0x3C (0xC)
	struct FRotator RotateRootMotion; // 0x48 (0xC)
};

// 0xC 
struct FFeatherBoneBlendTarget {
	struct FName StartBoneName; // 0x0 (0x8)
	float BlendWeight; // 0x8 (0x4)
};

// 0x8 
struct FReplicatedInventoryCardData {
	float ModifierValue; // 0x0 (0x4)
	int ModifierStatIndex; // 0x4 (0x4)
};

// 0x29 
struct FUIStatModifierData {
	struct UAttributePresentationDefinition* AttributePresentation; // 0x0 (0x4)
	struct UAttributePresentationDefinition* ConstraintAttributePresentation; // 0x4 (0x4)
	unsigned char AttributeStyle; // 0x8 (0x1) (Enum = EAttributeTranslationStyle)
	const unsigned char Unknown1[0x3]; // 0x9 (0x3) > LAST OFFSET
	float ModifierTotal; // 0xC (0x4)
	float CompareModifierTotal; // 0x10 (0x4)
	int DefinitionIndex; // 0x14 (0x4)
	struct UAttributePresentationDefinition* SupplementalAttributePresentation; // 0x18 (0x4)
	unsigned char SupplementalAttributeStyle; // 0x1C (0x1) (Enum = EAttributeTranslationStyle)
	const unsigned char Unknown2[0x3]; // 0x1D (0x3) > LAST OFFSET
	float SupplementalModifierTotal; // 0x20 (0x4)
	BOOL bUseSupplementalModifier : 1; // 0x24 (0x4)
	const unsigned long: 0;
	unsigned char StatCombinationMethod; // 0x28 (0x1) (Enum = EStatCombinationMethod)
};

// 0x8 
struct FProfileDefinition {
	unsigned char Profile; // 0x0 (0x1) (Enum = EAutoAimProfile)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	struct UWillowAutoAimProfileDefinition* Definition; // 0x4 (0x4)
};

// 0x24 
struct FLockOnProfile {
	struct FScriptInterface Target; // 0x0 (0x8)
	struct FVector Intersection; // 0x8 (0xC)
	struct FVector MagneticCenterToIntersect; // 0x14 (0xC)
	BOOL bWithinWorldSpaceRadius : 1; // 0x20 (0x4)
	const unsigned long: 0;
};

// 0x70 (Alignment = 16)
struct FViewProfile {
	struct AWillowPlayerController* InPlayer; // 0x0 (0x4)
	struct FVector ViewNormal; // 0x4 (0xC)
	struct FVector ViewLocation; // 0x10 (0xC)
	struct FRotator ViewRotation; // 0x1C (0xC)
	float ViewNormalDotViewNormal; // 0x28 (0x4)
	const unsigned char Unknown1[0x4]; // 0x2C (0x4) > LAST OFFSET
	struct FMatrix ViewMatrix; // 0x30 (0x40)
};

// 0x18 
struct FBalanceMeResourceUpgradePath {
	struct FString ResourceName; // 0x0 (0xC)
	struct TArray_int PlayerLevelForEachUpgrade; // 0xC (0xC)
};

// 0x18 
struct FStatusEffectNameMapping {
	struct FString StatusEffectName; // 0x0 (0xC)
	struct FString StatusEffectDefinitionName; // 0xC (0xC)
};

// 0x8 
struct FClanMaterialData {
	struct UMaterialInstance* SourceMaterial; // 0x0 (0x4)
	struct UMaterialInstance* ReplacementMaterial; // 0x4 (0x4)
};

// 0xC 
struct FClanSwitchData {
	struct FName SwitchName; // 0x0 (0x8)
	int SwitchValue; // 0x8 (0x4)
};

// 0x10 
struct FPendingCustomization {
	struct UCustomizationDefinition* Definition; // 0x0 (0x4)
	struct TArray_FScriptInterface Targets; // 0x4 (0xC)
};

// 0xC 
struct FProductCustomizationInfo {
	int ProductID; // 0x0 (0x4)
	int NumUnlockableCustomizations; // 0x4 (0x4)
	int NumCustomizations; // 0x8 (0x4)
};

// 0x8 
struct FCustomizationSizeMapping {
	int ProductID; // 0x0 (0x4)
	int NumCustomizations; // 0x4 (0x4)
};

// 0x8 
struct FQueuedPersonalEchoLog {
	struct UWillowDialogEventTag* Event; // 0x0 (0x4)
	struct UGearboxDialogGroup* Group; // 0x4 (0x4)
};

// 0x10 
struct FScaleformPortraitData {
	const struct FString ScaleformName; // 0x0 (0xC)
	const struct USwfMovie* PortraitMovie; // 0xC (0x4)
};

// 0x4 
struct FVideoPortraitData {
	const struct UTextureMovie* VideoMovie; // 0x0 (0x4)
};

// 0x18 
struct FEchoPortraitInfo {
	const unsigned char PortraitType; // 0x0 (0x1) (Enum = EchoPortraitType)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	const struct FScaleformPortraitData ScaleformPortrait; // 0x4 (0x10)
	const struct FVideoPortraitData VideoPortrait; // 0x14 (0x4)
};

// 0x1C 
struct FEmotePortraitInfo {
	const struct UWillowDialogEmoteDefinition* Emote; // 0x0 (0x4)
	const struct FEchoPortraitInfo EmotePortrait; // 0x4 (0x18)
};

// 0x8 
struct FEmoteStance {
	const struct UWillowDialogEmoteDefinition* Emote; // 0x0 (0x4)
	const struct USpecialMoveDefinition* StanceSpecialMove; // 0x4 (0x4)
};

// 0x8 
struct FDynamicNavMeshConnection {
	float MaxConnectionDistance; // 0x0 (0x4)
	struct AWillowDynamicNavMeshConnectionPoint* ConnectedPoint; // 0x4 (0x4)
};

// 0x8 
struct FCoordinatedEffectIndices {
	int StartingIndex; // 0x0 (0x4)
	int EndingIndex; // 0x4 (0x4)
};

// 0x50 
struct FCoordinatedEffectThread {
	struct UCoordinatedEffectDefinition* EffectDefinition; // 0x0 (0x4)
	struct FName IgnoreInstanceData; // 0x4 (0x8)
	float LatentFloat; // 0xC (0x4)
	float TargetFloat; // 0x10 (0x4)
	float ParticleSpeedMultiplier; // 0x14 (0x4)
	struct FCoordinatedEffectIndices CriticalParticleEffects; // 0x18 (0x8)
	struct FCoordinatedEffectIndices ParticleEffects; // 0x20 (0x8)
	struct FCoordinatedEffectIndices AudioEffects; // 0x28 (0x8)
	struct FCoordinatedEffectIndices HiddenParticles; // 0x30 (0x8)
	struct AActor* EffectOwner; // 0x38 (0x4)
	unsigned char EffectID; // 0x3C (0x1)
	const unsigned char Unknown1[0x3]; // 0x3D (0x3) > LAST OFFSET
	BOOL bHideInstanceDataParticles : 1; // 0x40 (0x4)
	BOOL bPendingDelete : 1; // 0x40 (0x4)
	const unsigned long: 0;
	struct FScriptDelegate EffectCompleteDelegate; // 0x44 (0xC)
};

// 0x12 
struct FCoordinatedEffectProcess {
	struct UObject* Target; // 0x0 (0x4)
	struct TArray_FCoordinatedEffectThread Threads; // 0x4 (0xC)
	unsigned char Player0MatIndex; // 0x10 (0x1)
	unsigned char Player1MatIndex; // 0x11 (0x1)
};

// 0xC 
struct FFloatParameter {
	struct FName Name; // 0x0 (0x8)
	float Value; // 0x8 (0x4)
};

// 0x14 
struct FVectorParameter {
	struct FName Name; // 0x0 (0x8)
	struct FVector Value; // 0x8 (0xC)
};

// 0xC 
struct FColorParameter {
	struct FName Name; // 0x0 (0x8)
	struct FColor Value; // 0x8 (0x4)
};

// 0xC 
struct FEmitterTemplateOptions {
	struct UParticleSystem* DefaultTemplate; // 0x0 (0x4)
	struct UParticleSystem* CensoredTemplateAlternative; // 0x4 (0x4)
	BOOL bEffectEligibleForCensoring : 1; // 0x8 (0x4)
	const unsigned long: 0;
};

// 0x20 
struct FDecalData {
	const struct TArray_UMaterialInterfacePtr Materials; // 0x0 (0xC)
	const float Width; // 0xC (0x4)
	const float Height; // 0x10 (0x4)
	const float MinScale; // 0x14 (0x4)
	const float MaxScale; // 0x18 (0x4)
	const BOOL RandomRotation : 1; // 0x1C (0x4)
	const BOOL CreateNewMaterialInstanceConstant : 1; // 0x1C (0x4)
	const unsigned long: 0;
};

// 0x4 
struct FGamepadState {
	BOOL bConnected : 1; // 0x0 (0x4)
	const unsigned long: 0;
};

// 0x10 
struct FSubtitleProfile {
	float MinX; // 0x0 (0x4)
	float MaxX; // 0x4 (0x4)
	float MinY; // 0x8 (0x4)
	float MaxY; // 0xC (0x4)
};

// 0x10 
struct FtMenuTextPos {
	unsigned char TextHAlign; // 0x0 (0x1) (Enum = ETextHAlignment)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	int TextXPos; // 0x4 (0x4)
	unsigned char TextVAlign; // 0x8 (0x1) (Enum = ETextVAlignment)
	const unsigned char Unknown2[0x3]; // 0x9 (0x3) > LAST OFFSET
	int TextYPos; // 0xC (0x4)
};

// 0x15 
struct FColumnLayoutData {
	unsigned char HeaderHAlign; // 0x0 (0x1) (Enum = ETextHAlignment)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	struct FString Header; // 0x4 (0xC)
	float Width; // 0x10 (0x4)
	unsigned char DataHAlign; // 0x14 (0x1) (Enum = ETextHAlignment)
};

// 0x78 
struct FtMenuLayout {
	struct UTexture2D* Background; // 0x0 (0x4)
	int BackgroundXPos; // 0x4 (0x4)
	int BackgroundYPos; // 0x8 (0x4)
	int BackgroundXL; // 0xC (0x4)
	int BackgroundYL; // 0x10 (0x4)
	BOOL bDrawOutlineToShowInputFocus : 1; // 0x14 (0x4)
	const unsigned long: 0;
	int ColumnDataYL; // 0x18 (0x4)
	int ItemDetailYL; // 0x1C (0x4)
	struct FString DescriptionBoxHeader; // 0x20 (0xC)
	unsigned char DescriptionBoxHeaderHAlign; // 0x2C (0x1) (Enum = ETextHAlignment)
	const unsigned char Unknown1[0x3]; // 0x2D (0x3) > LAST OFFSET
	BOOL bUnderlineDescriptionBoxHeader : 1; // 0x30 (0x4)
	const unsigned long: 0;
	int DescriptionBoxXPos; // 0x34 (0x4)
	int DescriptionBoxYPos; // 0x38 (0x4)
	int DescriptionBoxXL; // 0x3C (0x4)
	struct FtMenuTextPos TitlePos; // 0x40 (0x10)
	BOOL bDrawHintSeparatorLine : 1; // 0x50 (0x4)
	const unsigned long: 0;
	struct FtMenuTextPos HintPos; // 0x54 (0x10)
	int ColumnPadding; // 0x64 (0x4)
	struct TArray_FColumnLayoutData ColumnLayout; // 0x68 (0xC)
	struct UFont* ColumnDataFont; // 0x74 (0x4)
};

// 0x20 
struct FPlayerLineInfo {
	BOOL bUpdatedThisRound : 1; // 0x0 (0x4)
	const unsigned long: 0;
	struct FString Avatar; // 0x4 (0xC)
	struct APlayerReplicationInfo* PRI; // 0x10 (0x4)
	int PlayerID; // 0x14 (0x4)
	int RoundKills; // 0x18 (0x4)
	int TotalKills; // 0x1C (0x4)
};

// 0x1C 
struct FDialogBoxLayout {
	struct FName LayoutTag; // 0x0 (0x8)
	struct FName CancelTag; // 0x8 (0x8)
	struct TArray_FDialogBoxButton Buttons; // 0x10 (0xC)
};

// 0x14 
struct FMenuItemCallback {
	struct FName Tag; // 0x0 (0x8)
	struct FScriptDelegate OnClicked; // 0x8 (0xC)
};

// 0x74 
struct FLoadCharacterData {
	int SaveDataId; // 0x0 (0x4)
	int CharLevel; // 0x4 (0x4)
	struct FString CharName; // 0x8 (0xC)
	struct FString CharClass; // 0x14 (0xC)
	struct FString PlayThrough; // 0x20 (0xC)
	struct FString ActiveMission; // 0x2C (0xC)
	struct FString PlotMission; // 0x38 (0xC)
	struct FString CharSaveDate; // 0x44 (0xC)
	struct FString CharPlayedTime; // 0x50 (0xC)
	int CharPlayedTimeInt; // 0x5C (0x4)
	struct FGuid SaveGuid; // 0x60 (0x10)
	struct UDownloadableCharacterDefinition* DlcCharDef; // 0x70 (0x4)
};

// 0xC8 
struct FSaveResult {
	int charID; // 0x0 (0x4)
	struct FPlayerSaveData Data; // 0x4 (0xC4)
};

// 0x10 
struct FLoadingMovieExceptionInfo {
	struct FName PersistentMapName; // 0x0 (0x8)
	struct FName Tag; // 0x8 (0x8)
};

// 0x8 
struct FAvailableTrackedSkill {
	struct USkillDefinition* SkillDef; // 0x0 (0x4)
	int RemappedSlot; // 0x4 (0x4)
};

// 0x10 
struct FTrackedSkillIconState {
	unsigned char Type; // 0x0 (0x1) (Enum = ETrackedSkillType)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	struct USwfMovie* Icon; // 0x4 (0x4)
	int PercentComplete; // 0x8 (0x4)
	int StackCount; // 0xC (0x4)
};

// 0x28 
struct FHUDInteractionIcon {
	struct FInteractionIconWithOverrides Icons[2]; // 0x0 (0x28)
};

// 0x20 
struct FCriticalTextMessage {
	struct FString Message; // 0x0 (0xC)
	struct FString Title; // 0xC (0xC)
	float DestroyTime; // 0x18 (0x4)
	struct FColor DrawColor; // 0x1C (0x4)
};

// 0xC 
struct FCriticalTextMessageArray {
	struct TArray_FCriticalTextMessage MessageArray; // 0x0 (0xC)
};

// 0x30 
struct FInjuredStringReplacementSet {
	struct TArray_FName Skills; // 0x0 (0xC)
	const struct FString NewPlayerInjuredString; // 0xC (0xC)
	const struct FString NewInjuredTooltipString1; // 0x18 (0xC)
	const struct FString NewInjuredTooltipString2; // 0x24 (0xC)
};

// 0x8 
struct FTrackedSkillState {
	struct USkillDefinition* SkillDef; // 0x0 (0x4)
	int PackedStackCountAndPercentComplete; // 0x4 (0x4)
};

// 0x154 
struct FReplicatedStandInGear {
	struct FWeaponDefinitionData Weapon1Data; // 0x0 (0x44)
	struct FWeaponDefinitionData Weapon2Data; // 0x44 (0x44)
	struct FItemDefinitionData ShieldData; // 0x88 (0x44)
	struct FItemDefinitionData GrenadeModData; // 0xCC (0x44)
	struct FItemDefinitionData ClassModData; // 0x110 (0x44)
};

// 0x10 
struct FScaledHUDElement {
	struct FString ElementName; // 0x0 (0xC)
	struct UHUDScalingAnchorDefinition* Anchor; // 0xC (0x4)
};

// 0x8 
struct FTouchingPawn {
	struct APawn* Pawn; // 0x0 (0x4)
	int VolumesTouched; // 0x4 (0x4)
};

// 0x44 
struct FHitActorData {
	struct AActor* HitActor; // 0x0 (0x4)
	struct FTraceHitInfo HitInfo; // 0x4 (0x1C)
	struct FVector HitLocation; // 0x20 (0xC)
	struct FVector HitLocationRelativeToHitActor; // 0x2C (0xC)
	struct FVector HitNormal; // 0x38 (0xC)
};

// 0x8 
struct FHomingTargetedActorInfo {
	struct AActor* HomingActor; // 0x0 (0x4)
	int HomingActorCount; // 0x4 (0x4)
};

// 0xC 
struct FObstaclePoint {
	float Value; // 0x0 (0x4)
	struct FVector2D Offset; // 0x4 (0x8)
};

// 0x18 
struct FObstacleSegment {
	struct FVector2D P1; // 0x0 (0x8)
	struct FVector2D P2; // 0x8 (0x8)
	struct FVector2D Normal; // 0x10 (0x8)
};

// 0x48 
struct FVelocityObstacle {
	struct FObstacleSegment Segments[3]; // 0x0 (0x48)
};

// 0xC 
struct FInputDeviceButtonAddress {
	struct UInputDeviceDefinition* SourceDevice; // 0x0 (0x4)
	int SourceIndex; // 0x4 (0x4)
	struct FPointer RemappedButton; // 0x8 (0x4)
};

// 0x1C 
struct FInputButtonData {
	struct TArray_FInputDeviceButtonAddress InputDeviceHandlers; // 0x0 (0xC)
	struct FName ButtonName; // 0xC (0x8)
	unsigned char State; // 0x14 (0x1) (Enum = EButtonState)
	const unsigned char Unknown1[0x3]; // 0x15 (0x3) > LAST OFFSET
	float LastPressedTime; // 0x18 (0x4)
};

// 0x14 
struct FDeviceLookAxisData {
	struct UInputDeviceDefinition* SourceDevice; // 0x0 (0x4)
	struct FName LookXAxisName; // 0x4 (0x8)
	struct FName LookYAxisName; // 0xC (0x8)
};

// 0x10 
struct FKeyRebindingData {
	struct FName DefaultKeyName; // 0x0 (0x8)
	struct FName RemappedKeyName; // 0x8 (0x8)
};

// 0x8 
struct FInputDeviceAxisAddress {
	struct UInputDeviceDefinition* SourceDevice; // 0x0 (0x4)
	int SourceIndex; // 0x4 (0x4)
};

// 0x10 
struct FAccelStateData {
	BOOL bIsAccelerating : 1; // 0x0 (0x4)
	const unsigned long: 0;
	float Warmup; // 0x4 (0x4)
	float CurrentSpeed; // 0x8 (0x4)
	int Direction; // 0xC (0x4)
};

// 0x28 
struct FInputAxisData {
	struct FName AxisName; // 0x0 (0x8)
	struct FInputDeviceAxisAddress InputDeviceHandler; // 0x8 (0x8)
	struct FPointer ParameterPtr; // 0x10 (0x4)
	struct FAccelStateData AccelState; // 0x14 (0x10)
	BOOL bIsLookAxis : 1; // 0x24 (0x4)
	BOOL bIsRemappedInverted : 1; // 0x24 (0x4)
	const unsigned long: 0;
};

// 0x5 
struct FSpeedTravelData {
	float OriginLeaveTime; // 0x0 (0x4)
	unsigned char OriginRegion; // 0x4 (0x1) (Enum = ERegionList)
};

// 0x8 
struct FWeatherSystemEffects {
	struct UParticleSystem* WeatherSystemTemplate; // 0x0 (0x4)
	struct UParticleSystem* ScreenEffectsTemplate; // 0x4 (0x4)
};

// 0x25 
struct FAttachmentData {
	struct AActor* AttachmentBase; // 0x0 (0x4)
	struct FName AttachmentBaseBoneName; // 0x4 (0x8)
	struct FVector AttachmentRelativeOffset; // 0xC (0xC)
	struct FRotator AttachmentRelativeRotation; // 0x18 (0xC)
	unsigned char AttachmentPhysicsMode; // 0x24 (0x1) (Enum = EPhysics)
};

// 0x2C 
struct FAsyncDataRequest {
	unsigned char RequestType; // 0x0 (0x1) (Enum = DataRequestType)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	struct FString ObjectPath; // 0x4 (0xC)
	struct UObject* Instigator; // 0x10 (0x4)
	struct AWillowPlayerController* PlayerContext; // 0x14 (0x4)
	struct UObject* Payload; // 0x18 (0x4)
	struct FName CallbackEventName; // 0x1C (0x8)
	int IntParam; // 0x24 (0x4)
	float FloatParam; // 0x28 (0x4)
};

// 0x10 
struct FLightValues {
	float StartTime; // 0x0 (0x4)
	float Radius; // 0x4 (0x4)
	float Brightness; // 0x8 (0x4)
	struct FColor LightColor; // 0xC (0x4)
};

// 0x8 
struct FVehicleSpawnStationPooledVehicle {
	struct AWillowVehicle* SpawnedVehicle; // 0x0 (0x4)
	struct UVehicleSpawnStationVehicleDefinition* SpawnVehicleDef; // 0x4 (0x4)
};

// 0x10 
struct FVehicleSpawnStationSlot {
	struct TArray_FVehicleSpawnStationPooledVehicle PooledVehicles; // 0x0 (0xC)
	int PooledVehicleIndex; // 0xC (0x4)
};

// 0x10 
struct FPopOppSummary {
	struct FString Summary; // 0x0 (0xC)
	int Count; // 0xC (0x4)
};

// 0x8 
struct FSpawnAnimPair {
	struct USpecialMove_Spawned* SpawnedAnim; // 0x0 (0x4)
	struct USpecialMove_PopulationPoint* PointAnim; // 0x4 (0x4)
};

// 0x20 
struct FSpawnAnimData {
	struct UPopulationBodyTag* Key; // 0x0 (0x4)
	struct TArray_FSpawnAnimPair AnimPairs; // 0x4 (0xC)
	const struct FVector PreviewMeshOffset; // 0x10 (0xC)
	const float PreviewMeshScale; // 0x1C (0x4)
};

// 0x30 
struct FPursuitNode {
	struct FVector RelativeLocation; // 0x0 (0xC)
	float RelativeDistance; // 0xC (0x4)
	float EvasiveActionDistance; // 0x10 (0x4)
	struct FName NodeType; // 0x14 (0x8)
	BOOL bNeverFallback : 1; // 0x1C (0x4)
	BOOL bMultipleReservations : 1; // 0x1C (0x4)
	BOOL bIsReserved : 1; // 0x1C (0x4)
	const unsigned long: 0;
	float LastReservedTime; // 0x20 (0x4)
	struct AActor* ReservedBy; // 0x24 (0x4)
	float AIAlertDistance; // 0x28 (0x4)
	struct UFlagDefinition* AIAlertFlagDef; // 0x2C (0x4)
};

// 0x24 
struct FPursuitNodeData {
	struct FVector RelativeLocation; // 0x0 (0xC)
	struct FName NodeType; // 0xC (0x8)
	float EvasiveActionDistance; // 0x14 (0x4)
	float AIAlertDistance; // 0x18 (0x4)
	struct UFlagDefinition* AIAlertFlagDef; // 0x1C (0x4)
	BOOL bNeverFallback : 1; // 0x20 (0x4)
	BOOL bMultipleReservations : 1; // 0x20 (0x4)
	const unsigned long: 0;
};

// 0x10 
struct FDescriptionEntry {
	int EventID; // 0x0 (0x4)
	struct FString Description; // 0x4 (0xC)
};

// 0x28 
struct FKeyBindInfo {
	struct FName Tag; // 0x0 (0x8)
	struct FName ActionName; // 0x8 (0x8)
	struct FString Caption; // 0x10 (0xC)
	struct FName CurrentKey; // 0x1C (0x8)
	struct UGFxObject* Object; // 0x24 (0x4)
};

// 0xC 
struct FReferencePoint {
	const unsigned char Type; // 0x0 (0x1) (Enum = EReferencePointType)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	const struct FName Name; // 0x4 (0x8)
};

// 0x18 
struct FReferencePointComparisonData {
	const struct FReferencePoint A; // 0x0 (0xC)
	const struct FReferencePoint B; // 0xC (0xC)
};

// 0x8 
struct FResolution {
	int Width; // 0x0 (0x4)
	int Height; // 0x4 (0x4)
};

// 0x10 
struct FLockOnTargetStateStruct {
	struct AActor* CurrentTarget; // 0x0 (0x4)
	float StartTime; // 0x4 (0x4)
	BOOL LockOnRequested : 1; // 0x8 (0x4)
	BOOL LockOnInProgress : 1; // 0x8 (0x4)
	const unsigned long: 0;
	float CoolDownStartTime; // 0xC (0x4)
};

// 0xC 
struct FWeaponBoneControllerInstance {
	unsigned char SourcePartType; // 0x0 (0x1) (Enum = EWeaponPartType)
	unsigned char BoneControlType; // 0x1 (0x1) (Enum = EWeaponBoneControllerType)
	const unsigned char Unknown1[0x2]; // 0x2 (0x2) > LAST OFFSET
	struct FScriptInterface BoneController; // 0x4 (0x8)
};

// 0x10 
struct FShellCasingImpact {
	float ImpactTime; // 0x0 (0x4)
	struct FVector ImpactLocation; // 0x4 (0xC)
};

// 0x14 
struct FColumnData {
	struct FString Text; // 0x0 (0xC)
	unsigned char HAlign; // 0xC (0x1) (Enum = ETextHAlignment)
	const unsigned char Unknown1[0x3]; // 0xD (0x3) > LAST OFFSET
	struct FColor TextColor; // 0x10 (0x4)
};

// 0x98 
struct FtMenuData {
	BOOL bIsSelectable : 1; // 0x0 (0x4)
	const unsigned long: 0;
	struct TArray_FColumnData ColumnText; // 0x4 (0xC)
	struct FString PrimaryActionCmd; // 0x10 (0xC)
	struct FString SecondaryActionCmd; // 0x1C (0xC)
	struct FString TertiaryActionCmd; // 0x28 (0xC)
	struct FString QuaternaryActionCmd; // 0x34 (0xC)
	struct FString QuinaryActionCmd; // 0x40 (0xC)
	struct FString OverCmd; // 0x4C (0xC)
	struct FString LeaveCmd; // 0x58 (0xC)
	struct FString Data; // 0x64 (0xC)
	unsigned char HintFontSize; // 0x70 (0x1) (Enum = EFontSize)
	const unsigned char Unknown1[0x3]; // 0x71 (0x3) > LAST OFFSET
	struct FString Hint; // 0x74 (0xC)
	struct FString ItemDetail; // 0x80 (0xC)
	struct FString DescriptionBoxStr; // 0x8C (0xC)
};

// 0x40 
struct FMenuHeaderData {
	struct FString Header; // 0x0 (0xC)
	float Width; // 0xC (0x4)
	struct FString InterfaceName; // 0x10 (0xC)
	unsigned char FontSize; // 0x1C (0x1) (Enum = EFontSize)
	const unsigned char Unknown1[0x3]; // 0x1D (0x3) > LAST OFFSET
	struct FColor TextColor; // 0x20 (0x4)
	struct FColor TextHighlightColor; // 0x24 (0x4)
	struct FColor IconColor; // 0x28 (0x4)
	BOOL bDrawIcon : 1; // 0x2C (0x4)
	const unsigned long: 0;
	int IconU; // 0x30 (0x4)
	int IconV; // 0x34 (0x4)
	int IconUL; // 0x38 (0x4)
	int IconVL; // 0x3C (0x4)
};

// 0x8 
struct FSkillIndexLevelRequirementPair {
	int SkillIndex; // 0x0 (0x4)
	int PlayerLevelRequirement; // 0x4 (0x4)
};

// 0x34 
struct FDebugConsoleCommand {
	struct FString MenuName; // 0x0 (0xC)
	struct FString CommandName; // 0xC (0xC)
	struct FString Description; // 0x18 (0xC)
	struct FString Command; // 0x24 (0xC)
	BOOL bOnClient : 1; // 0x30 (0x4)
	const unsigned long: 0;
};

// 0x48 
struct FNetworkChannelData {
	struct FString ChannelName; // 0x0 (0xC)
	struct FString StateName; // 0xC (0xC)
	struct UClass* ActorClass; // 0x18 (0x4)
	struct FString ActorClassName; // 0x1C (0xC)
	struct FString Role; // 0x28 (0xC)
	struct FString RemoteRole; // 0x34 (0xC)
	int ActorClassCount; // 0x40 (0x4)
	float ActorClassPercent; // 0x44 (0x4)
};

// 0x14 
struct FItemPartSettings {
	struct UItemPartListDefinition* PartList; // 0x0 (0x4)
	struct UItemPartDefinition* Part; // 0x4 (0x4)
	struct FString PartName; // 0x8 (0xC)
};

// 0xC 
struct FGearBuilderWeightedInventoryPart {
	struct UWillowInventoryPartDefinition* Part; // 0x0 (0x4)
	float Weight; // 0x4 (0x4)
	float ProbabilityOfPickingThisPart; // 0x8 (0x4)
};

// 0x1C 
struct FGearBuilderInventoryPartSlot {
	struct FString PartName; // 0x0 (0xC)
	int SelectedPart; // 0xC (0x4)
	struct TArray_FGearBuilderWeightedInventoryPart WeightedPartList; // 0x10 (0xC)
};

// 0x11C 
struct FItemSettings {
	struct UItemDefinition* ItemDefinition; // 0x0 (0x4)
	struct UInventoryBalanceDefinition* BalanceDefinition; // 0x4 (0x4)
	struct UManufacturerDefinition* ManufacturerDefinition; // 0x8 (0x4)
	int ManufacturerGradeIndex; // 0xC (0x4)
	int Level; // 0x10 (0x4)
	struct FGearBuilderInventoryPartSlot GenericParts[9]; // 0x14 (0xFC)
	int CurrentPartBeingSet; // 0x110 (0x4)
	int ItemBuilderIndex; // 0x114 (0x4)
	int ActiveSubmenuForThisItem; // 0x118 (0x4)
};

// 0xC 
struct FGearBuilderWeightedWeaponPart {
	struct UWeaponPartDefinition* Part; // 0x0 (0x4)
	float Weight; // 0x4 (0x4)
	float ProbabilityOfPickingThisPart; // 0x8 (0x4)
};

// 0x1C 
struct FGearBuilderWeaponPartSlot {
	struct FString PartName; // 0x0 (0xC)
	int SelectedPart; // 0xC (0x4)
	struct TArray_FGearBuilderWeightedWeaponPart WeightedPartList; // 0x10 (0xC)
};

// 0x114 
struct FWeaponSettings {
	struct UWeaponTypeDefinition* WeaponTypeDefinition; // 0x0 (0x4)
	struct UWeaponBalanceDefinition* BalanceDefinition; // 0x4 (0x4)
	struct UManufacturerDefinition* ManufacturerDefinition; // 0x8 (0x4)
	int ManufacturerGradeIndex; // 0xC (0x4)
	int Level; // 0x10 (0x4)
	struct FGearBuilderWeaponPartSlot GenericParts[9]; // 0x14 (0xFC)
	int CurrentPartBeingSet; // 0x110 (0x4)
};

// 0x3C 
struct FItemBuilderData {
	struct FString TabName; // 0x0 (0xC)
	struct FString ItemName; // 0xC (0xC)
	struct FString BuildItemMessage; // 0x18 (0xC)
	struct FString InventoryDefinitionClassName; // 0x24 (0xC)
	struct TArray_FString InventoryBalanceDefinitionNames; // 0x30 (0xC)
};

// 0x10 
struct FItemBuilderBalanceDefinition {
	struct UClass* InventoryDefinitionClass; // 0x0 (0x4)
	struct TArray_FString BalanceDefinitions; // 0x4 (0xC)
};

// 0x10 
struct FGearBuilderCustomizationData {
	int SortValue; // 0x0 (0x4)
	struct FString BalanceDefinition; // 0x4 (0xC)
};

// 0x10 
struct FGearBuilderCustomizationUsageData {
	struct UClass* Usage; // 0x0 (0x4)
	struct TArray_FGearBuilderCustomizationData CustomizationBalanceDefinitions; // 0x4 (0xC)
};

// 0xC 
struct FVirtualSeatStruct {
	struct FName NameKey; // 0x0 (0x8)
	int CurrentRealSeat; // 0x8 (0x4)
};

// 0x2C 
struct FVehicleEffect {
	struct FName EffectStartTag; // 0x0 (0x8)
	struct FName EffectEndTag; // 0x8 (0x8)
	struct UParticleSystem* EffectTemplate; // 0x10 (0x4)
	struct FName EffectSocket; // 0x14 (0x8)
	struct UParticleSystemComponent* EffectRef; // 0x1C (0x4)
	struct UAkEvent* EffectAudioStartAkEvent; // 0x20 (0x4)
	struct UAkEvent* EffectAudioStopAkEvent; // 0x24 (0x4)
	BOOL bOnlyPassengersSee : 1; // 0x28 (0x4)
	BOOL bShutOffOnDeath : 1; // 0x28 (0x4)
	const unsigned long: 0;
};

// 0x38 
struct FFDamageMorphTargets {
	struct FName MorphNodeName; // 0x0 (0x8)
	struct UMorphNodeWeight* MorphNode; // 0x8 (0x4)
	struct FName LinkedMorphNodeName; // 0xC (0x8)
	int LinkedMorphNodeIndex; // 0x14 (0x4)
	struct FName AssociatedSkelControl; // 0x18 (0x8)
	struct FName InfluenceBone; // 0x20 (0x8)
	int Health; // 0x28 (0x4)
	struct TArray_FName DamagePropNames; // 0x2C (0xC)
};

// 0x10 
struct FSuspensionSound {
	float LastSuspensionTravel; // 0x0 (0x4)
	float LastPlayTime; // 0x4 (0x4)
	struct FAkPlayingInfo PlayingInfo; // 0x8 (0x8)
};

// 0x8 
struct FIndexPair {
	int Index1; // 0x0 (0x4)
	int Index2; // 0x4 (0x4)
};

// 0x14 
struct FTankSensor {
	const struct FName Socket; // 0x0 (0x8)
	const unsigned char Type; // 0x8 (0x1) (Enum = TankSensorType)
	const unsigned char Unknown1[0x3]; // 0x9 (0x3) > LAST OFFSET
	const float SearchLength; // 0xC (0x4)
	float HitLength; // 0x10 (0x4)
};

// 0xC 
struct FPhysicalMaterialTireModel {
	struct UPhysicalMaterial* PhysMaterial; // 0x0 (0x4)
	float LongGripScaler; // 0x4 (0x4)
	float LatGripScaler; // 0x8 (0x4)
};

// 0x8 
struct FDuelTeamInfo {
	const struct UPawnAllegiance* TeamAllegiance; // 0x0 (0x4)
	const struct FColor TeamColor; // 0x4 (0x4)
};

// 0x10 
struct FDuelTeamPair {
	const struct FDuelTeamInfo ChallengerTeam; // 0x0 (0x8)
	const struct FDuelTeamInfo CompetitorTeam; // 0x8 (0x8)
};

// 0x48 
struct FTempWeaponStruct {
	struct FWeaponDefinitionData DefinitionData; // 0x0 (0x44)
	int Ammo; // 0x44 (0x4)
};

// 0x18 
struct FTempProfileStruct {
	struct UPawnAllegiance* Allegiance; // 0x0 (0x4)
	float Health; // 0x4 (0x4)
	float Shield; // 0x8 (0x4)
	struct TArray_FTempWeaponStruct Weapons; // 0xC (0xC)
};

// 0x90 
struct FBalanceModification {
	unsigned char MinEffectiveLevel; // 0x0 (0x1)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	float EnemyHealthMultiplier; // 0x4 (0x4)
	float BadassEnemyHealthMultiplier; // 0x8 (0x4)
	float EnemyShieldStrengthMultiplier; // 0xC (0x4)
	float BadassEnemyShieldStrengthMultiplier; // 0x10 (0x4)
	float EnemyDamageMultiplier; // 0x14 (0x4)
	float BadassEnemyDamageMultiplier; // 0x18 (0x4)
	float XPGainedFromCombatMultiplier; // 0x1C (0x4)
	float XPGainedFromQuestsMultiplier; // 0x20 (0x4)
	float BadassRankGainMultiplier; // 0x24 (0x4)
	float AmplifiedDamageMultiplier; // 0x28 (0x4)
	float PlayerVehicleWeaponDamageMultiplier; // 0x2C (0x4)
	struct TArray_FAttributeEffectData AttributeEffectsForSpawnedEnemies; // 0x30 (0xC)
	struct TArray_FAttributeEffectData AttributeEffectsForPlayers; // 0x3C (0xC)
	struct FAttributeInitializationData AmmoDropsPerPlayerMultiplier; // 0x48 (0x10)
	struct FAttributeInitializationData GearDrops_CommonWeightModifier_PT3_BaseValueOverride; // 0x58 (0x10)
	const struct FAttributeInitializationData ChestItemPool_Weight_2_Uncommon_PT3_Multiplier; // 0x68 (0x10)
	const struct TArray_FLevelBasedStatusEffectChanceScale StatusEffectChanceScales; // 0x78 (0xC)
	const struct TArray_FLevelBasedDamageScale AIDamageScaleByLevelDifference; // 0x84 (0xC)
};

// 0x4 
struct FBlackMarketPostLaunchUpgradeData {
	int EridiumCostForUpgrade; // 0x0 (0x4)
};

// 0x14 
struct FMapSpecificBalanceModificationList {
	struct FName MapName; // 0x0 (0x8)
	struct TArray_UAIPawnBalanceModifierDefinitionPtr AIPawnBalanceModifiers; // 0x8 (0xC)
};

// 0x18 
struct FBalancedInventoryDataMirror {
	BOOL bIsItemPool : 1; // 0x0 (0x4)
	const unsigned long: 0;
	struct FName ObjectName; // 0x4 (0x8)
	struct FString ObjectPath; // 0xC (0xC)
};

// 0x14 
struct FLegacyCustomizationItemData {
	struct FString ItemPoolDefPath; // 0x0 (0xC)
	int ItemPoolKey; // 0xC (0x4)
	struct UItemPoolDefinition* CustomizationItemPool; // 0x10 (0x4)
};

// 0x18 
struct FPremiumCustomizationInfo {
	int OfferId; // 0x0 (0x4)
	int PackageId; // 0x4 (0x4)
	int ContentId; // 0x8 (0x4)
	struct FString PS3TitleId; // 0xC (0xC)
};

// 0x24 
struct FAIPawnPlaythroughThreeData {
	struct FString AIPawnBalanceDefinitionFullObjectName; // 0x0 (0xC)
	const struct FString DisplayName; // 0xC (0xC)
	struct TArray_FAITransformedName TransformedNames; // 0x18 (0xC)
};

// 0x8 
struct FDirChangeRateRange {
	float DirDegreesPerSecond; // 0x0 (0x4)
	float SpeedRange; // 0x4 (0x4)
};

