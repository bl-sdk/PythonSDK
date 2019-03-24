
local ffi = require("ffi")

ffi.cdef[[


// 0x3C 
struct UIWorldBody_Data {
	// Last Offset: 0x3C
};

struct UIWorldBody {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UIWorldBody_Data UIWorldBody;
};

// 0x188 
struct AActor_Data {
	// Last Offset: 0x3C
	struct FPointer VfTable_IIWorldBody; // 0x3C (0x4)
	struct FPointer VfTable_IISpawnActor; // 0x40 (0x4)
	struct FPointer VfTable_IIDamageCauser; // 0x44 (0x4)
	struct TArray_UActorComponentPtr Components; // 0x48 (0xC)
	struct TArray_UActorComponentPtr AllComponents; // 0x54 (0xC)
	struct FVector Location; // 0x60 (0xC)
	struct FRotator Rotation; // 0x6C (0xC)
	float DrawScale; // 0x78 (0x4)
	struct FVector DrawScale3D; // 0x7C (0xC)
	struct FVector PrePivot; // 0x88 (0xC)
	struct FRenderCommandFence DetachFence; // 0x94 (0x4)
	float CustomTimeDilation; // 0x98 (0x4)
	unsigned char Physics; // 0x9C (0x1) (Enum = EPhysics)
	unsigned char RemoteRole; // 0x9D (0x1) (Enum = ENetRole)
	unsigned char Role; // 0x9E (0x1) (Enum = ENetRole)
	unsigned char CollisionType; // 0x9F (0x1) (Enum = ECollisionType)
	unsigned char ReplicatedCollisionType; // 0xA0 (0x1) (Enum = ECollisionType)
	unsigned char TickGroup; // 0xA1 (0x1) (Enum = ETickingGroup)
	const unsigned char Unknown1[0x2]; // 0xA2 (0x2) > LAST OFFSET
	struct AActor* Owner; // 0xA4 (0x4)
	struct AActor* Base; // 0xA8 (0x4)
	struct TArray_FTimerData Timers; // 0xAC (0xC)
	BOOL bUseOrthonormalizedLighting :1 ; // 0xB8 (0x4)
	BOOL bStatic :1 ; // 0xB8 (0x4)
	BOOL bHidden :1 ; // 0xB8 (0x4)
	BOOL bNoDelete :1 ; // 0xB8 (0x4)
	BOOL bDeleteMe :1 ; // 0xB8 (0x4)
	BOOL bTicked :1 ; // 0xB8 (0x4)
	BOOL bOnlyOwnerSee :1 ; // 0xB8 (0x4)
	BOOL bTickIsDisabled :1 ; // 0xB8 (0x4)
	BOOL bWorldGeometry :1 ; // 0xB8 (0x4)
	BOOL bIgnoreRigidBodyPawns :1 ; // 0xB8 (0x4)
	BOOL bOrientOnSlope :1 ; // 0xB8 (0x4)
	BOOL bIgnoreEncroachers :1 ; // 0xB8 (0x4)
	BOOL bPushedByEncroachers :1 ; // 0xB8 (0x4)
	BOOL bRouteBeginPlayEvenIfStatic :1 ; // 0xB8 (0x4)
	BOOL bIsMoving :1 ; // 0xB8 (0x4)
	BOOL bAlwaysEncroachCheck :1 ; // 0xB8 (0x4)
	BOOL bCanStepUpOn :1 ; // 0xB8 (0x4)
	BOOL bNetTemporary :1 ; // 0xB8 (0x4)
	BOOL bOnlyRelevantToOwner :1 ; // 0xB8 (0x4)
	BOOL bNetDirty :1 ; // 0xB8 (0x4)
	BOOL bAlwaysRelevant :1 ; // 0xB8 (0x4)
	BOOL bReplicateInstigator :1 ; // 0xB8 (0x4)
	BOOL bReplicateMovement :1 ; // 0xB8 (0x4)
	BOOL bSkipRotationReplication :1 ; // 0xB8 (0x4)
	BOOL bForceRotationReplication :1 ; // 0xB8 (0x4)
	BOOL bSkipActorPropertyReplication :1 ; // 0xB8 (0x4)
	BOOL bUpdateSimulatedPosition :1 ; // 0xB8 (0x4)
	BOOL bTearOff :1 ; // 0xB8 (0x4)
	BOOL bOnlyDirtyReplication :1 ; // 0xB8 (0x4)
	BOOL bSkipHiddenReplication :1 ; // 0xB8 (0x4)
	BOOL bAllowFluidSurfaceInteraction :1 ; // 0xB8 (0x4)
	BOOL bDemoRecording :1 ; // 0xB8 (0x4)
	BOOL bDemoOwner :1 ; // 0xBC (0x4)
	BOOL bForceDemoRelevant :1 ; // 0xBC (0x4)
	BOOL bNetInitialRotation :1 ; // 0xBC (0x4)
	BOOL bReplicateRigidBodyLocation :1 ; // 0xBC (0x4)
	BOOL bKillDuringLevelTransition :1 ; // 0xBC (0x4)
	BOOL bExchangedRoles :1 ; // 0xBC (0x4)
	BOOL bConsiderAllStaticMeshComponentsForStreaming :1 ; // 0xBC (0x4)
	BOOL bPostRenderIfNotVisible :1 ; // 0xBC (0x4)
	BOOL bForceNetUpdate :1 ; // 0xBC (0x4)
	BOOL bPendingNetUpdate :1 ; // 0xBC (0x4)
	BOOL bHardAttach :1 ; // 0xBC (0x4)
	BOOL bIgnoreBaseRotation :1 ; // 0xBC (0x4)
	BOOL bSkipAttachedMoves :1 ; // 0xBC (0x4)
	BOOL bHurtEntry :1 ; // 0xBC (0x4)
	BOOL bGameRelevant :1 ; // 0xBC (0x4)
	BOOL bMovable :1 ; // 0xBC (0x4)
	BOOL bDestroyInPainVolume :1 ; // 0xBC (0x4)
	BOOL bCanBeDamaged :1 ; // 0xBC (0x4)
	BOOL bShouldBaseAtStartup :1 ; // 0xBC (0x4)
	BOOL bPendingDelete :1 ; // 0xBC (0x4)
	BOOL bCanTeleport :1 ; // 0xBC (0x4)
	BOOL bAlwaysTick :1 ; // 0xBC (0x4)
	BOOL bBlocksNavigation :1 ; // 0xBC (0x4)
	BOOL bCanTarget :1 ; // 0xBC (0x4)
	BOOL bCanTargetCheat :1 ; // 0xBC (0x4)
	BOOL BlockRigidBody :1 ; // 0xBC (0x4)
	BOOL bCollideWhenPlacing :1 ; // 0xBC (0x4)
	BOOL bCollideActors :1 ; // 0xBC (0x4)
	BOOL bCollideWorld :1 ; // 0xBC (0x4)
	BOOL bCollideComplex :1 ; // 0xBC (0x4)
	BOOL bBlockActors :1 ; // 0xBC (0x4)
	BOOL bProjTarget :1 ; // 0xBC (0x4)
	BOOL bBlocksTeleport :1 ; // 0xC0 (0x4)
	BOOL bProjectileMoveSingleBlocking :1 ; // 0xC0 (0x4)
	BOOL bTraceListeners :1 ; // 0xC0 (0x4)
	BOOL bIsBlockingMesh :1 ; // 0xC0 (0x4)
	BOOL bIsWillowInteractiveObject :1 ; // 0xC0 (0x4)
	BOOL bIgnoreRadiusDamageCheck :1 ; // 0xC0 (0x4)
	BOOL bNoEncroachCheck :1 ; // 0xC0 (0x4)
	BOOL bCollideAsEncroacher :1 ; // 0xC0 (0x4)
	BOOL bPhysRigidBodyOutOfWorldCheck :1 ; // 0xC0 (0x4)
	BOOL bComponentOutsideWorld :1 ; // 0xC0 (0x4)
	BOOL bForceOctreeSNFilter :1 ; // 0xC0 (0x4)
	BOOL bRigidBodyWasAwake :1 ; // 0xC0 (0x4)
	BOOL bCallRigidBodyWakeEvents :1 ; // 0xC0 (0x4)
	BOOL bBounce :1 ; // 0xC0 (0x4)
	BOOL bJustTeleported :1 ; // 0xC0 (0x4)
	BOOL bNetInitial :1 ; // 0xC0 (0x4)
	BOOL bNetOwner :1 ; // 0xC0 (0x4)
	BOOL bHiddenEd :1 ; // 0xC0 (0x4)
	BOOL bEditable :1 ; // 0xC0 (0x4)
	BOOL bHiddenEdLayer :1 ; // 0xC0 (0x4)
	BOOL bHiddenEdTemporary :1 ; // 0xC0 (0x4)
	BOOL bHiddenEdLevel :1 ; // 0xC0 (0x4)
	BOOL bEdShouldSnap :1 ; // 0xC0 (0x4)
	BOOL bTempEditor :1 ; // 0xC0 (0x4)
	BOOL bPathColliding :1 ; // 0xC0 (0x4)
	BOOL bPathTemp :1 ; // 0xC0 (0x4)
	BOOL bScriptInitialized :1 ; // 0xC0 (0x4)
	BOOL bLockLocation :1 ; // 0xC0 (0x4)
	BOOL bForceAllowKismetModification :1 ; // 0xC0 (0x4)
	BOOL bTraceIgnoreRigidBodyForPawns :1 ; // 0xC0 (0x4)
	BOOL bAutoMovePlayerOnInterpActor :1 ; // 0xC0 (0x4)
	BOOL bMoveActorDoZeroExtentTrace :1 ; // 0xC0 (0x4)
	BOOL bDebugEffectIsRelevant :1 ; // 0xC4 (0x4)
	BOOL bLoadIfPhysXLevel0 :1 ; // 0xC4 (0x4)
	BOOL bLoadIfPhysXLevel1 :1 ; // 0xC4 (0x4)
	BOOL bLoadIfPhysXLevel2 :1 ; // 0xC4 (0x4)
	const unsigned long: 0;
	int NetTag; // 0xC8 (0x4)
	float NetUpdateTime; // 0xCC (0x4)
	float NetUpdateFrequency; // 0xD0 (0x4)
	float NetPriority; // 0xD4 (0x4)
	float LastNetUpdateTime; // 0xD8 (0x4)
	struct APawn* Instigator; // 0xDC (0x4)
	struct AWorldInfo* WorldInfo; // 0xE0 (0x4)
	float LifeSpan; // 0xE4 (0x4)
	float CreationTime; // 0xE8 (0x4)
	float LastRenderTime; // 0xEC (0x4)
	struct TArray_AActorPtr Touching; // 0xF0 (0xC)
	float LatentFloat; // 0xFC (0x4)
	struct APhysicsVolume* PhysicsVolume; // 0x100 (0x4)
	struct FVector Velocity; // 0x104 (0xC)
	struct FVector Acceleration; // 0x110 (0xC)
	struct FVector AngularVelocity; // 0x11C (0xC)
	struct USkeletalMeshComponent* BaseSkelComponent; // 0x128 (0x4)
	struct FName BaseBoneName; // 0x12C (0x8)
	struct TArray_AActorPtr Attached; // 0x134 (0xC)
	struct FVector RelativeLocation; // 0x140 (0xC)
	struct FRotator RelativeRotation; // 0x14C (0xC)
	struct UPrimitiveComponent* CollisionComponent; // 0x158 (0x4)
	int OverlapTag; // 0x15C (0x4)
	struct FRotator RotationRate; // 0x160 (0xC)
	struct TArray_USequenceEventPtr GeneratedEvents; // 0x16C (0xC)
	struct TArray_USeqAct_LatentPtr LatentActions; // 0x178 (0xC)
	float MostRecentDamageTaken; // 0x184 (0x4)
};

struct AActor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
};

// 0x188 
struct AInfo_Data {
	// Last Offset: 0x188
};

struct AInfo {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
};

// 0x198 
struct AZoneInfo_Data {
	// Last Offset: 0x188
	float KillZ; // 0x188 (0x4)
	float SoftKill; // 0x18C (0x4)
	struct UClass* KillZDamageType; // 0x190 (0x4)
	BOOL bSoftKillZ :1 ; // 0x194 (0x4)
	const unsigned long: 0;
};

struct AZoneInfo {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct AZoneInfo_Data AZoneInfo;
};

// 0x690 
struct AWorldInfo_Data {
	// Last Offset: 0x198
	struct FPostProcessSettings DefaultPostProcessSettings; // 0x198 (0xE8)
	struct UPostProcessChain* WorldPostProcessChain; // 0x280 (0x4)
	BOOL bPersistPostProcessToNextLevel :1 ; // 0x284 (0x4)
	BOOL bFogEnabled :1 ; // 0x284 (0x4)
	BOOL bBumpOffsetEnabled :1 ; // 0x284 (0x4)
	BOOL bUseGammaCorrection :1 ; // 0x284 (0x4)
	BOOL bMapNeedsLightingFullyRebuilt :1 ; // 0x284 (0x4)
	BOOL bMapHasMultipleDominantLightsAffectingOnePrimitive :1 ; // 0x284 (0x4)
	BOOL bMapHasPathingErrors :1 ; // 0x284 (0x4)
	BOOL bRequestedBlockOnAsyncLoading :1 ; // 0x284 (0x4)
	BOOL bBegunPlay :1 ; // 0x284 (0x4)
	BOOL bPlayersOnly :1 ; // 0x284 (0x4)
	BOOL bPlayersOnlyPending :1 ; // 0x284 (0x4)
	BOOL bSuspendAI :1 ; // 0x284 (0x4)
	BOOL bStatusMenuOnly :1 ; // 0x284 (0x4)
	BOOL bDropDetail :1 ; // 0x284 (0x4)
	BOOL bAggressiveLOD :1 ; // 0x284 (0x4)
	BOOL bDontTickMind :1 ; // 0x284 (0x4)
	BOOL bStartup :1 ; // 0x284 (0x4)
	BOOL bPathsRebuilt :1 ; // 0x284 (0x4)
	BOOL bHasPathNodes :1 ; // 0x284 (0x4)
	BOOL bIsMenuLevel :1 ; // 0x284 (0x4)
	BOOL bDebugPauseExecution :1 ; // 0x284 (0x4)
	BOOL bDebugStepExecution :1 ; // 0x284 (0x4)
	BOOL bUseConsoleInput :1 ; // 0x284 (0x4)
	BOOL bNoDefaultInventoryForPlayer :1 ; // 0x284 (0x4)
	BOOL bNoPathWarnings :1 ; // 0x284 (0x4)
	BOOL bHighPriorityLoading :1 ; // 0x284 (0x4)
	BOOL bHighPriorityLoadingLocal :1 ; // 0x284 (0x4)
	BOOL bSupportDoubleBufferedPhysics :1 ; // 0x284 (0x4)
	BOOL bPhysicsIgnoreDeltaTime :1 ; // 0x284 (0x4)
	BOOL bEnableChanceOfPhysicsChunkOverride :1 ; // 0x284 (0x4)
	BOOL bLimitExplosionChunkSize :1 ; // 0x284 (0x4)
	BOOL bLimitDamageChunkSize :1 ; // 0x284 (0x4)
	BOOL bPrecomputeVisibility :1 ; // 0x288 (0x4)
	BOOL bPlaceCellsOnSurfaces :1 ; // 0x288 (0x4)
	BOOL bAllowTemporalAA :1 ; // 0x288 (0x4)
	BOOL bUseGlobalIllumination :1 ; // 0x288 (0x4)
	BOOL bForceNoPrecomputedLighting :1 ; // 0x288 (0x4)
	BOOL bAllowHostMigration :1 ; // 0x288 (0x4)
	BOOL bAssertOnGBXCheck :1 ; // 0x288 (0x4)
	BOOL bSupportsTimeOfDay :1 ; // 0x288 (0x4)
	const unsigned long: 0;
	float SquintModeKernelSize; // 0x28C (0x4)
	float ShadowmapStreamingFactorMultiplier; // 0x290 (0x4)
	struct APostProcessVolume* HighestPriorityPostProcessVolume; // 0x294 (0x4)
	struct FReverbSettings DefaultReverbSettings; // 0x298 (0x1C)
	struct FInteriorSettings DefaultAmbientZoneSettings; // 0x2B4 (0x24)
	float FogStart; // 0x2D8 (0x4)
	float FogEnd; // 0x2DC (0x4)
	struct FColor FogColor; // 0x2E0 (0x4)
	float BumpEnd; // 0x2E4 (0x4)
	struct AReverbVolume* HighestPriorityReverbVolume; // 0x2E8 (0x4)
	struct TArray_AMassiveLODOverrideVolumePtr MassiveLODOverrideVolumes; // 0x2EC (0xC)
	struct AWorldSoundManager* WorldSoundManager; // 0x2F8 (0x4)
	struct TArray_APortalVolumePtr PortalVolumes; // 0x2FC (0xC)
	struct TArray_AEnvironmentVolumePtr EnvironmentVolumes; // 0x308 (0xC)
	struct TArray_ULevelStreamingPtr StreamingLevels; // 0x314 (0xC)
	struct FDouble LastTimeUnbuiltLightingWasEncountered; // 0x320 (0x8)
	float TimeDilation; // 0x328 (0x4)
	float DemoPlayTimeDilation; // 0x32C (0x4)
	float TimeSeconds; // 0x330 (0x4)
	float RealTimeSeconds; // 0x334 (0x4)
	float AudioTimeSeconds; // 0x338 (0x4)
	float DeltaSeconds; // 0x33C (0x4)
	float PauseDelay; // 0x340 (0x4)
	float RealTimeToUnPause; // 0x344 (0x4)
	struct APlayerReplicationInfo* Pauser; // 0x348 (0x4)
	struct UTexture2D* DefaultTexture; // 0x34C (0x4)
	struct UTexture2D* WireframeTexture; // 0x350 (0x4)
	struct UTexture2D* WhiteSquareTexture; // 0x354 (0x4)
	struct UTexture2D* LargeVertex; // 0x358 (0x4)
	struct UTexture2D* BSPVertex; // 0x35C (0x4)
	struct TArray_FString DeferredExecs; // 0x360 (0xC)
	struct AGameReplicationInfo* GRI; // 0x36C (0x4)
	unsigned char NetMode; // 0x370 (0x1) (Enum = ENetMode)
	unsigned char NextTravelType; // 0x371 (0x1) (Enum = ETravelType)
	unsigned char VisibilityAggressiveness; // 0x372 (0x1) (Enum = EVisibilityAggressiveness)
	unsigned char LevelLightingQuality; // 0x373 (0x1) (Enum = ELightingBuildQuality)
	struct FString ComputerName; // 0x374 (0xC)
	struct FString EngineVersion; // 0x380 (0xC)
	struct FString MinNetVersion; // 0x38C (0xC)
	struct AGameInfo* Game; // 0x398 (0x4)
	float StallZ; // 0x39C (0x4)
	float WorldGravityZ; // 0x3A0 (0x4)
	float DefaultGravityZ; // 0x3A4 (0x4)
	float GlobalGravityZ; // 0x3A8 (0x4)
	float RBPhysicsGravityScaling; // 0x3AC (0x4)
	struct ANavigationPoint* NavigationPointList; // 0x3B0 (0x4)
	struct AController* ControllerList; // 0x3B4 (0x4)
	struct APawn* PawnList; // 0x3B8 (0x4)
	struct ACoverLink* CoverList; // 0x3BC (0x4)
	struct APylon* PylonList; // 0x3C0 (0x4)
	struct AGBXNavMesh* NavMeshList; // 0x3C4 (0x4)
	float MoveRepSize; // 0x3C8 (0x4)
	struct TArray_FNetViewer ReplicationViewers; // 0x3CC (0xC)
	struct FString NextURL; // 0x3D8 (0xC)
	float NextSwitchCountdown; // 0x3E4 (0x4)
	int PackedLightAndShadowMapTextureSize; // 0x3E8 (0x4)
	struct FVector DefaultColorScale; // 0x3EC (0xC)
	struct UClass* DefaultGameType; // 0x3F8 (0x4)
	struct TArray_UClassPtr GameTypesSupportedOnThisMap; // 0x3FC (0xC)
	struct TArray_UObjectPtr ClientDestroyedActorContent; // 0x408 (0xC)
	struct TArray_FName PreparingLevelNames; // 0x414 (0xC)
	struct ULevel* CommittedPersistentLevel; // 0x420 (0x4)
	struct UObjectReferencer* PersistentMapForcedObjects; // 0x424 (0x4)
	struct FString Title; // 0x428 (0xC)
	struct FString Author; // 0x434 (0xC)
	struct UMapInfo* MyMapInfo; // 0x440 (0x4)
	struct FString EmitterPoolClassPath; // 0x444 (0xC)
	struct AEmitterPool* MyEmitterPool; // 0x450 (0x4)
	struct FString DecalManagerClassPath; // 0x454 (0xC)
	struct ADecalManager* MyDecalManager; // 0x460 (0x4)
	struct FString ParticleEventManagerClassPath; // 0x464 (0xC)
	struct AParticleEventManager* MyParticleEventManager; // 0x470 (0x4)
	struct FString ParentLoader; // 0x474 (0xC)
	float MaxPhysicsDeltaTime; // 0x480 (0x4)
	int MaxPhysicsSubsteps; // 0x484 (0x4)
	struct FPhysXSceneProperties PhysicsProperties; // 0x488 (0x3C)
	struct TArray_FCompartmentRunList CompartmentRunFrames; // 0x4C4 (0xC)
	float DefaultSkinWidth; // 0x4D0 (0x4)
	float ApexLODResourceBudget; // 0x4D4 (0x4)
	struct FApexModuleDestructibleSettings DestructibleSettings; // 0x4D8 (0x10)
	struct UPhysicsLODVerticalEmitter* EmitterVertical; // 0x4E8 (0x4)
	struct FPhysXVerticalProperties VerticalProperties; // 0x4EC (0x18)
	float ChanceOfPhysicsChunkOverride; // 0x504 (0x4)
	float MaxExplosionChunkSize; // 0x508 (0x4)
	float MaxDamageChunkSize; // 0x50C (0x4)
	float FractureExplosionVelScale; // 0x510 (0x4)
	int MaxNumFacturedChunksToSpawnInAFrame; // 0x514 (0x4)
	int NumFacturedChunksSpawnedThisFrame; // 0x518 (0x4)
	float FracturedMeshWeaponDamage; // 0x51C (0x4)
	int VisibilityCellSize; // 0x520 (0x4)
	float CharacterLitIndirectBrightness; // 0x524 (0x4)
	float CharacterLitIndirectContrastFactor; // 0x528 (0x4)
	float CharacterShadowedIndirectBrightness; // 0x52C (0x4)
	float CharacterShadowedIndirectContrastFactor; // 0x530 (0x4)
	float CharacterLightingContrastFactor; // 0x534 (0x4)
	struct FMap_Mirror ScreenMessages; // 0x538 (0x3C)
	struct TArray_FScreenMessageString PriorityScreenMessages; // 0x574 (0xC)
	struct FLightmassWorldInfoSettings LightmassSettings; // 0x580 (0x3C)
	const unsigned char Unknown1[0x3C]; // 0x5BC (0x3C) UNKNOWN PROPERTY
	const unsigned char Unknown2[0x3C]; // 0x5F8 (0x3C) UNKNOWN PROPERTY
	struct FHostMigrationState PeerHostMigration; // 0x634 (0x1C)
	float HostMigrationTimeout; // 0x650 (0x4)
	struct TArray_FNavigationArea NavigationAreas; // 0x654 (0xC)
	struct AHoldingAreaDestination* HoldingCell; // 0x660 (0x4)
	struct ATeleporterDestination* PersonalTeleporterDestination; // 0x664 (0x4)
	struct AActor* PersonalReturnTeleporterLocation; // 0x668 (0x4)
	struct FName CommonsLevelName; // 0x66C (0x8)
	struct FName TeleporterPlacedEventName; // 0x674 (0x8)
	struct USoundCue* CombatMusic; // 0x67C (0x4)
	int GBXCheckDisplayDuration; // 0x680 (0x4)
	struct TArray_UTextureMoviePtr TextureMovies; // 0x684 (0xC)
};

struct AWorldInfo {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct AZoneInfo_Data AZoneInfo;
	struct AWorldInfo_Data AWorldInfo;
};

// 0x98 
struct UDownloadableContentEnumerator_Data {
	// Last Offset: 0x3C
	struct TArray_FOnlineContent DLCBundles; // 0x3C (0xC)
	struct TArray_FNamedOnlineContent NamedDLCBundles; // 0x48 (0xC)
	struct TArray_FNamedOnlineContent NamedDLCCompatibilityBundles; // 0x54 (0xC)
	BOOL bNeedsRefresh :1 ; // 0x60 (0x4)
	const unsigned long: 0;
	unsigned char CurrentEnumerationState; // 0x64 (0x1) (Enum = EDlcEnumerationState)
	const unsigned char Unknown1[0x3]; // 0x65 (0x3) > LAST OFFSET
	struct FString DLCRootDir; // 0x68 (0xC)
	struct TArray_FScriptDelegate FindDLCDelegates; // 0x74 (0xC)
	struct TArray_FCompatibilityOnlineContent OldCompatibilityBundles; // 0x80 (0xC)
	struct FScriptDelegate __OnFindDLCComplete__Delegate; // 0x8C (0xC)
};

struct UDownloadableContentEnumerator {
	struct UObject_Data UObject;
	struct UDownloadableContentEnumerator_Data UDownloadableContentEnumerator;
};

// 0x158 
struct UDownloadableContentManager_Data {
	// Last Offset: 0x3C
	struct TArray_FPointer DLCConfigCacheChanges; // 0x3C (0xC)
	struct TArray_FMarketplaceOffer DlcOffers; // 0x48 (0xC)
	struct TArray_FInstalledContentInfo InstalledContent; // 0x54 (0xC)
	struct TArray_FRejectedContentInfo RejectedContent; // 0x60 (0xC)
	struct FGuid CookInstanceGuid; // 0x6C (0x10)
	struct TArray_FString NonPackageFilePathMapExtensions; // 0x7C (0xC)
	struct FMap_Mirror NonPackageFilePathMap; // 0x88 (0x3C)
	struct FMap_Mirror AudioPackageFilePathmap; // 0xC4 (0x3C)
	struct TArray_UClassPtr ClassesToReload; // 0x100 (0xC)
	struct TArray_UObjectPtr ObjectsToReload; // 0x10C (0xC)
	BOOL bCanInstallCompatibilityContent :1 ; // 0x118 (0x4)
	BOOL bCanEnumerateMarketplaceContent :1 ; // 0x118 (0x4)
	BOOL bCouldInstallCompatibilityContent :1 ; // 0x118 (0x4)
	BOOL bCouldEnumerateMarketplaceContent :1 ; // 0x118 (0x4)
	BOOL bRefreshRequestWhileBusy :1 ; // 0x118 (0x4)
	BOOL bDlcEnumOutstanding :1 ; // 0x118 (0x4)
	BOOL bDlcOfferEnumOutstanding :1 ; // 0x118 (0x4)
	BOOL bDlcOfferEnumInstallPending :1 ; // 0x118 (0x4)
	const unsigned long: 0;
	struct TArray_int LicensedSeasonPassIds; // 0x11C (0xC)
	struct FDouble LastRefreshStartTime; // 0x128 (0x8)
	struct FDouble LastRefreshFinishTime; // 0x130 (0x8)
	int RefreshCount; // 0x138 (0x4)
	struct UGameEngine* GameEngine; // 0x13C (0x4)
	struct TArray_FScriptDelegate RefreshCompleteDelegates; // 0x140 (0xC)
	struct FScriptDelegate __OnRefreshComplete__Delegate; // 0x14C (0xC)
};

struct UDownloadableContentManager {
	struct UObject_Data UObject;
	struct UDownloadableContentManager_Data UDownloadableContentManager;
};

// 0x68 
struct UDownloadableContentOfferEnumerator_Data {
	// Last Offset: 0x3C
	BOOL bHasBeenEnumerated :1 ; // 0x3C (0x4)
	const unsigned long: 0;
	unsigned char CurrentEnumerationState; // 0x40 (0x1) (Enum = EDlcOfferEnumerationState)
	const unsigned char Unknown1[0x3]; // 0x41 (0x3) > LAST OFFSET
	struct TArray_FMarketplaceOffer MarketplaceOffers; // 0x44 (0xC)
	struct TArray_FScriptDelegate FindDlcOfferDelegates; // 0x50 (0xC)
	struct FScriptDelegate __OnFindDlcOfferComplete__Delegate; // 0x5C (0xC)
};

struct UDownloadableContentOfferEnumerator {
	struct UObject_Data UObject;
	struct UDownloadableContentOfferEnumerator_Data UDownloadableContentOfferEnumerator;
};

// 0x640 
struct UEngine_Data {
	// Last Offset: 0x40
	struct UFont* TinyFont; // 0x40 (0x4)
	struct FString TinyFontName; // 0x44 (0xC)
	struct UFont* SmallFont; // 0x50 (0x4)
	struct FString SmallFontName; // 0x54 (0xC)
	struct UFont* MediumFont; // 0x60 (0x4)
	struct FString MediumFontName; // 0x64 (0xC)
	struct UFont* LargeFont; // 0x70 (0x4)
	struct FString LargeFontName; // 0x74 (0xC)
	struct UFont* NonShipMediumFont; // 0x80 (0x4)
	struct UFont* NonShipLargeFont; // 0x84 (0x4)
	struct UFont* SubtitleFont; // 0x88 (0x4)
	struct FString SubtitleFontName; // 0x8C (0xC)
	struct UFont* GlyphFont; // 0x98 (0x4)
	struct FString GlyphFontName; // 0x9C (0xC)
	struct TArray_UFontPtr AdditionalFonts; // 0xA8 (0xC)
	struct TArray_FString AdditionalFontNames; // 0xB4 (0xC)
	struct UClass* ConsoleClass; // 0xC0 (0x4)
	struct FString ConsoleClassName; // 0xC4 (0xC)
	struct UClass* GameViewportClientClass; // 0xD0 (0x4)
	struct FString GameViewportClientClassName; // 0xD4 (0xC)
	struct UClass* DataStoreClientClass; // 0xE0 (0x4)
	struct FString DataStoreClientClassName; // 0xE4 (0xC)
	struct UClass* LocalPlayerClass; // 0xF0 (0x4)
	struct FString LocalPlayerClassName; // 0xF4 (0xC)
	struct UMaterial* DefaultMaterial; // 0x100 (0x4)
	struct FString DefaultMaterialName; // 0x104 (0xC)
	struct UMaterial* DefaultDecalMaterial; // 0x110 (0x4)
	struct FString DefaultDecalMaterialName; // 0x114 (0xC)
	struct UTexture* DefaultTexture; // 0x120 (0x4)
	struct FString DefaultTextureName; // 0x124 (0xC)
	struct UMaterial* WireframeMaterial; // 0x130 (0x4)
	struct FString WireframeMaterialName; // 0x134 (0xC)
	struct UMaterial* EmissiveTexturedMaterial; // 0x140 (0x4)
	struct FString EmissiveTexturedMaterialName; // 0x144 (0xC)
	struct UMaterial* GeomMaterial; // 0x150 (0x4)
	struct FString GeomMaterialName; // 0x154 (0xC)
	struct UMaterial* DefaultFogVolumeMaterial; // 0x160 (0x4)
	struct FString DefaultFogVolumeMaterialName; // 0x164 (0xC)
	struct UMaterial* TickMaterial; // 0x170 (0x4)
	struct FString TickMaterialName; // 0x174 (0xC)
	struct UMaterial* CrossMaterial; // 0x180 (0x4)
	struct FString CrossMaterialName; // 0x184 (0xC)
	struct UMaterial* LevelColorationLitMaterial; // 0x190 (0x4)
	struct FString LevelColorationLitMaterialName; // 0x194 (0xC)
	struct UMaterial* LevelColorationUnlitMaterial; // 0x1A0 (0x4)
	struct FString LevelColorationUnlitMaterialName; // 0x1A4 (0xC)
	struct UMaterial* LightingTexelDensityMaterial; // 0x1B0 (0x4)
	struct FString LightingTexelDensityName; // 0x1B4 (0xC)
	struct UMaterial* ShadedLevelColorationLitMaterial; // 0x1C0 (0x4)
	struct FString ShadedLevelColorationLitMaterialName; // 0x1C4 (0xC)
	struct UMaterial* ShadedLevelColorationUnlitMaterial; // 0x1D0 (0x4)
	struct FString ShadedLevelColorationUnlitMaterialName; // 0x1D4 (0xC)
	struct UMaterial* RemoveSurfaceMaterial; // 0x1E0 (0x4)
	struct FString RemoveSurfaceMaterialName; // 0x1E4 (0xC)
	struct UMaterial* VertexColorMaterial; // 0x1F0 (0x4)
	struct FString VertexColorMaterialName; // 0x1F4 (0xC)
	struct UMaterial* VertexColorViewModeMaterial_ColorOnly; // 0x200 (0x4)
	struct FString VertexColorViewModeMaterialName_ColorOnly; // 0x204 (0xC)
	struct UMaterial* VertexColorViewModeMaterial_AlphaAsColor; // 0x210 (0x4)
	struct FString VertexColorViewModeMaterialName_AlphaAsColor; // 0x214 (0xC)
	struct UMaterial* VertexColorViewModeMaterial_RedOnly; // 0x220 (0x4)
	struct FString VertexColorViewModeMaterialName_RedOnly; // 0x224 (0xC)
	struct UMaterial* VertexColorViewModeMaterial_GreenOnly; // 0x230 (0x4)
	struct FString VertexColorViewModeMaterialName_GreenOnly; // 0x234 (0xC)
	struct UMaterial* VertexColorViewModeMaterial_BlueOnly; // 0x240 (0x4)
	struct FString VertexColorViewModeMaterialName_BlueOnly; // 0x244 (0xC)
	struct UMaterial* HeatmapMaterial; // 0x250 (0x4)
	struct FString HeatmapMaterialName; // 0x254 (0xC)
	struct UMaterial* BoneWeightMaterial; // 0x260 (0x4)
	struct FString BoneWeightMaterialName; // 0x264 (0xC)
	struct UMaterial* TangentColorMaterial; // 0x270 (0x4)
	struct FString TangentColorMaterialName; // 0x274 (0xC)
	struct UFacebookIntegration* FacebookIntegration; // 0x280 (0x4)
	struct FString FacebookIntegrationClassName; // 0x284 (0xC)
	BOOL bCombineSimilarMappings :1 ; // 0x290 (0x4)
	BOOL bRenderLightMapDensityGrayscale :1 ; // 0x290 (0x4)
	BOOL bUseSound :1 ; // 0x290 (0x4)
	BOOL bUseAudioStreaming :1 ; // 0x290 (0x4)
	BOOL bUseBackgroundLevelStreaming :1 ; // 0x290 (0x4)
	BOOL bSubtitlesEnabled :1 ; // 0x290 (0x4)
	BOOL bSubtitlesForcedOff :1 ; // 0x290 (0x4)
	BOOL bSmoothFrameRate :1 ; // 0x290 (0x4)
	BOOL bSmoothFrameRateRuntimeToggle :1 ; // 0x290 (0x4)
	BOOL bCheckForMultiplePawnsSpawnedInAFrame :1 ; // 0x290 (0x4)
	BOOL bShouldGenerateSimpleLightmaps :1 ; // 0x290 (0x4)
	BOOL bForceStaticTerrain :1 ; // 0x290 (0x4)
	BOOL bForceCPUSkinning :1 ; // 0x290 (0x4)
	BOOL bUsePostProcessEffects :1 ; // 0x290 (0x4)
	BOOL bOnScreenKismetWarnings :1 ; // 0x290 (0x4)
	BOOL bEnableKismetLogging :1 ; // 0x290 (0x4)
	BOOL bAllowMatureLanguage :1 ; // 0x290 (0x4)
	BOOL bRenderTerrainCollisionAsOverlay :1 ; // 0x290 (0x4)
	BOOL bPauseOnLossOfFocus :1 ; // 0x290 (0x4)
	BOOL bCheckParticleRenderSize :1 ; // 0x290 (0x4)
	BOOL bEnableColorClear :1 ; // 0x290 (0x4)
	BOOL bAreConstraintsDirty :1 ; // 0x290 (0x4)
	BOOL bHasPendingGlobalReattach :1 ; // 0x290 (0x4)
	BOOL bEnableOnScreenDebugMessages :1 ; // 0x290 (0x4)
	BOOL bEnableOnScreenDebugMessagesDisplay :1 ; // 0x290 (0x4)
	BOOL bSuppressMapWarnings :1 ; // 0x290 (0x4)
	BOOL bCookSeparateSharedMPGameContent :1 ; // 0x290 (0x4)
	BOOL bDisableAILogging :1 ; // 0x290 (0x4)
	BOOL bUseNormalMapsForSimpleLightMaps :1 ; // 0x290 (0x4)
	BOOL bStartWithMatineeCapture :1 ; // 0x290 (0x4)
	BOOL bCompressMatineeCapture :1 ; // 0x290 (0x4)
	BOOL bMuteAudioWhenNotInFocus :1 ; // 0x290 (0x4)
	BOOL bIsPauseGFxMovieOpen :1 ; // 0x294 (0x4)
	BOOL bNoBuildLightingMessage :1 ; // 0x294 (0x4)
	BOOL bCinematicAutoSkip :1 ; // 0x294 (0x4)
	const unsigned long: 0;
	float MaxRMSDForCombiningMappings; // 0x298 (0x4)
	struct FLinearColor LightingOnlyBrightness; // 0x29C (0x10)
	struct TArray_FColor LightComplexityColors; // 0x2AC (0xC)
	struct TArray_FLinearColor ShaderComplexityColors; // 0x2B8 (0xC)
	float MaxPixelShaderAdditiveComplexityCount; // 0x2C4 (0x4)
	float MinTextureDensity; // 0x2C8 (0x4)
	float IdealTextureDensity; // 0x2CC (0x4)
	float MaxTextureDensity; // 0x2D0 (0x4)
	float MinLightMapDensity; // 0x2D4 (0x4)
	float IdealLightMapDensity; // 0x2D8 (0x4)
	float MaxLightMapDensity; // 0x2DC (0x4)
	float RenderLightMapDensityGrayscaleScale; // 0x2E0 (0x4)
	float RenderLightMapDensityColorScale; // 0x2E4 (0x4)
	struct FLinearColor LightMapDensityVertexMappedColor; // 0x2E8 (0x10)
	struct FLinearColor LightMapDensitySelectedColor; // 0x2F8 (0x10)
	float MinVertexDensity; // 0x308 (0x4)
	float IdealVertexDensity; // 0x30C (0x4)
	float MaxVertexDensity; // 0x310 (0x4)
	struct TArray_FStatColorMapping StatColorMappings; // 0x314 (0xC)
	struct UMaterial* EditorBrushMaterial; // 0x320 (0x4)
	struct FString EditorBrushMaterialName; // 0x324 (0xC)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x330 (0x4)
	struct FString DefaultPhysMaterialName; // 0x334 (0xC)
	struct UApexDestructibleDamageParameters* ApexDamageParams; // 0x340 (0x4)
	struct FString ApexDamageParamsName; // 0x344 (0xC)
	struct UMaterial* TerrainErrorMaterial; // 0x350 (0x4)
	struct FString TerrainErrorMaterialName; // 0x354 (0xC)
	int TerrainMaterialMaxTextureCount; // 0x360 (0x4)
	struct UClass* OnlineSubsystemClass; // 0x364 (0x4)
	struct FString DefaultOnlineSubsystemName; // 0x368 (0xC)
	struct UPostProcessChain* DefaultPostProcess; // 0x374 (0x4)
	struct FString DefaultPostProcessName; // 0x378 (0xC)
	struct UPostProcessChain* ThumbnailSkeletalMeshPostProcess; // 0x384 (0x4)
	struct FString ThumbnailSkeletalMeshPostProcessName; // 0x388 (0xC)
	struct UPostProcessChain* ThumbnailParticleSystemPostProcess; // 0x394 (0x4)
	struct FString ThumbnailParticleSystemPostProcessName; // 0x398 (0xC)
	struct UPostProcessChain* ThumbnailMaterialPostProcess; // 0x3A4 (0x4)
	struct FString ThumbnailMaterialPostProcessName; // 0x3A8 (0xC)
	struct UPostProcessChain* DefaultUIScenePostProcess; // 0x3B4 (0x4)
	struct FString DefaultUIScenePostProcessName; // 0x3B8 (0xC)
	struct UMaterial* DefaultUICaretMaterial; // 0x3C4 (0x4)
	struct FString DefaultUICaretMaterialName; // 0x3C8 (0xC)
	struct UMaterial* SceneCaptureReflectActorMaterial; // 0x3D4 (0x4)
	struct FString SceneCaptureReflectActorMaterialName; // 0x3D8 (0xC)
	struct UMaterial* SceneCaptureCubeActorMaterial; // 0x3E4 (0x4)
	struct FString SceneCaptureCubeActorMaterialName; // 0x3E8 (0xC)
	struct UTexture2D* ScreenDoorNoiseTexture; // 0x3F4 (0x4)
	struct FString ScreenDoorNoiseTextureName; // 0x3F8 (0xC)
	struct UTexture2D* ImageGrainNoiseTexture; // 0x404 (0x4)
	struct FString ImageGrainNoiseTextureName; // 0x408 (0xC)
	struct UTexture2D* RandomAngleTexture; // 0x414 (0x4)
	struct FString RandomAngleTextureName; // 0x418 (0xC)
	struct UTexture2D* RandomNormalTexture; // 0x424 (0x4)
	struct FString RandomNormalTextureName; // 0x428 (0xC)
	struct UTexture2D* RandomMirrorDiscTexture; // 0x434 (0x4)
	struct FString RandomMirrorDiscTextureName; // 0x438 (0xC)
	struct UTexture* WeightMapPlaceholderTexture; // 0x444 (0x4)
	struct FString WeightMapPlaceholderTextureName; // 0x448 (0xC)
	struct UTexture2D* LightMapDensityTexture; // 0x454 (0x4)
	struct FString LightMapDensityTextureName; // 0x458 (0xC)
	struct UTexture2D* LightMapDensityNormal; // 0x464 (0x4)
	struct FString LightMapDensityNormalName; // 0x468 (0xC)
	struct USoundNodeWave* DefaultSound; // 0x474 (0x4)
	struct FString DefaultSoundName; // 0x478 (0xC)
	float TimeBetweenPurgingPendingKillObjects; // 0x484 (0x4)
	struct UClient* Client; // 0x488 (0x4)
	struct TArray_ULocalPlayerPtr GamePlayers; // 0x48C (0xC)
	struct UGameViewportClient* GameViewport; // 0x498 (0x4)
	struct TArray_FString DeferredCommands; // 0x49C (0xC)
	int TickCycles; // 0x4A8 (0x4)
	int GameCycles; // 0x4AC (0x4)
	int ClientCycles; // 0x4B0 (0x4)
	float MaxSmoothedFrameRate; // 0x4B4 (0x4)
	float MinSmoothedFrameRate; // 0x4B8 (0x4)
	int NumPawnsAllowedToBeSpawnedInAFrame; // 0x4BC (0x4)
	struct FPointer RemoteControlExec; // 0x4C0 (0x4)
	struct FPointer MobileMaterialEmulator; // 0x4C4 (0x4)
	struct FColor C_WorldBox; // 0x4C8 (0x4)
	struct FColor C_BrushWire; // 0x4CC (0x4)
	struct FColor C_AddWire; // 0x4D0 (0x4)
	struct FColor C_SubtractWire; // 0x4D4 (0x4)
	struct FColor C_SemiSolidWire; // 0x4D8 (0x4)
	struct FColor C_NonSolidWire; // 0x4DC (0x4)
	struct FColor C_WireBackground; // 0x4E0 (0x4)
	struct FColor C_ScaleBoxHi; // 0x4E4 (0x4)
	struct FColor C_VolumeCollision; // 0x4E8 (0x4)
	struct FColor C_BSPCollision; // 0x4EC (0x4)
	struct FColor C_OrthoBackground; // 0x4F0 (0x4)
	struct FColor C_Volume; // 0x4F4 (0x4)
	struct FColor C_BrushShape; // 0x4F8 (0x4)
	float StreamingDistanceFactor; // 0x4FC (0x4)
	struct FString ScoutClassName; // 0x500 (0xC)
	unsigned char TransitionType; // 0x50C (0x1) (Enum = ETransitionType)
	const unsigned char Unknown1[0x3]; // 0x50D (0x3) > LAST OFFSET
	struct FString TransitionDescription; // 0x510 (0xC)
	struct FString TransitionGameType; // 0x51C (0xC)
	float MeshLODRange; // 0x528 (0x4)
	float CameraRotationThreshold; // 0x52C (0x4)
	float CameraTranslationThreshold; // 0x530 (0x4)
	float PrimitiveProbablyVisibleTime; // 0x534 (0x4)
	float PercentUnoccludedRequeries; // 0x538 (0x4)
	float MaxOcclusionPixelsFraction; // 0x53C (0x4)
	int PhysXLevel; // 0x540 (0x4)
	int MaxFluidNumVerts; // 0x544 (0x4)
	float FluidSimulationTimeLimit; // 0x548 (0x4)
	int MaxParticleResize; // 0x54C (0x4)
	int MaxParticleResizeWarn; // 0x550 (0x4)
	int MaxParticleVertexMemory; // 0x554 (0x4)
	int MaxParticleSpriteCount; // 0x558 (0x4)
	int MaxParticleSubUVCount; // 0x55C (0x4)
	int BeginUPTryCount; // 0x560 (0x4)
	struct TArray_FDropNoteInfo PendingDroppedNotes; // 0x564 (0xC)
	struct FString DynamicCoverMeshComponentName; // 0x570 (0xC)
	float NetClientTicksPerSecond; // 0x57C (0x4)
	float MaxTrackedOcclusionIncrement; // 0x580 (0x4)
	float TrackedOcclusionStepSize; // 0x584 (0x4)
	struct FLinearColor DefaultSelectedMaterialColor; // 0x588 (0x10)
	struct FLinearColor DefaultHoveredMaterialColor; // 0x598 (0x10)
	struct FLinearColor SelectedMaterialColor; // 0x5A8 (0x10)
	struct FLinearColor UnselectedMaterialColor; // 0x5B8 (0x10)
	int NumberOfOnScreenDebugMessages; // 0x5C8 (0x4)
	struct TArray_FName IgnoreSimulatedFuncWarnings; // 0x5CC (0xC)
	int ScreenSaverInhibitorSemaphore; // 0x5D8 (0x4)
	struct FPointer ScreenSaverInhibitor; // 0x5DC (0x4)
	int HitchWatcherThreadSemaphore; // 0x5E0 (0x4)
	struct UTranslationContext* GlobalTranslationContext; // 0x5E4 (0x4)
	struct FDouble LoadingMovieStartTime; // 0x5E8 (0x8)
	struct FString MatineeCaptureName; // 0x5F0 (0xC)
	struct FString MatineePackageCaptureName; // 0x5FC (0xC)
	struct FString VisibleLevelsForMatineeCapture; // 0x608 (0xC)
	int MatineeCaptureFPS; // 0x614 (0x4)
	int MatineeCaptureType; // 0x618 (0x4)
	struct FColor BlockingMeshColor; // 0x61C (0x4)
	float BlockingMeshOpacity; // 0x620 (0x4)
	float CinematicAutoSkipDelay; // 0x624 (0x4)
	struct TArray_FString CinematicAutoSkipMaps; // 0x628 (0xC)
	float SFXVolume; // 0x634 (0x4)
	float VoiceOverVolume; // 0x638 (0x4)
	float BinkMovieVolumeScaleFactor; // 0x63C (0x4)
};

struct UEngine {
	struct UObject_Data UObject;
	struct USubsystem_Data USubsystem;
	struct UEngine_Data UEngine;
};

// 0x7AC 
struct UGameEngine_Data {
	// Last Offset: 0x640
	struct UPendingLevel* GPendingLevel; // 0x640 (0x4)
	BOOL bCleanupForPendingLevel :1 ; // 0x644 (0x4)
	BOOL bWorldWasLoadedThisTick :1 ; // 0x644 (0x4)
	BOOL bCheckForMovieCapture :1 ; // 0x644 (0x4)
	BOOL bTriggerPostLoadMap :1 ; // 0x644 (0x4)
	BOOL bStartedLoadMapMovie :1 ; // 0x644 (0x4)
	BOOL bShouldCommitPendingMapChange :1 ; // 0x644 (0x4)
	BOOL bClearAnimSetLinkupCachesOnLoadMap :1 ; // 0x644 (0x4)
	const unsigned long: 0;
	struct FString PendingLevelPlayerControllerClassName; // 0x648 (0xC)
	struct FURL LastURL; // 0x654 (0x44)
	struct FURL LastRemoteURL; // 0x698 (0x44)
	struct TArray_FString ServerActors; // 0x6DC (0xC)
	struct FString TravelURL; // 0x6E8 (0xC)
	unsigned char TravelType; // 0x6F4 (0x1)
	const unsigned char Unknown1[0x3]; // 0x6F5 (0x3) > LAST OFFSET
	struct UOnlineSubsystem* OnlineSubsystem; // 0x6F8 (0x4)
	struct UDownloadableContentEnumerator* DLCEnumerator; // 0x6FC (0x4)
	struct FString DownloadableContentEnumeratorClassName; // 0x700 (0xC)
	struct FString DevDownloadableContentEnumeratorClassName; // 0x70C (0xC)
	struct UDownloadableContentManager* DLCManager; // 0x718 (0x4)
	struct FString DownloadableContentOfferEnumeratorClassName; // 0x71C (0xC)
	struct UDownloadableContentOfferEnumerator* DLCOfferEnumerator; // 0x728 (0x4)
	struct FString DownloadableContentManagerClassName; // 0x72C (0xC)
	struct UInGameAdManager* AdManager; // 0x738 (0x4)
	struct FString InGameAdManagerClassName; // 0x73C (0xC)
	struct TArray_FName LevelsToLoadForPendingMapChange; // 0x748 (0xC)
	struct TArray_ULevelPtr LoadedLevelsForPendingMapChange; // 0x754 (0xC)
	struct FString PendingMapChangeFailureDescription; // 0x760 (0xC)
	float MaxDeltaTime; // 0x76C (0x4)
	struct TArray_FLevelStreamingStatus PendingLevelStreamingStatusUpdates; // 0x770 (0xC)
	struct TArray_UObjectReferencerPtr ObjectReferencers; // 0x77C (0xC)
	struct TArray_FFullyLoadedPackagesInfo PackagesToFullyLoad; // 0x788 (0xC)
	struct TArray_FNamedNetDriver NamedNetDrivers; // 0x794 (0xC)
	struct TArray_FAnimTag AnimTags; // 0x7A0 (0xC)
};

struct UGameEngine {
	struct UObject_Data UObject;
	struct USubsystem_Data USubsystem;
	struct UEngine_Data UEngine;
	struct UGameEngine_Data UGameEngine;
};

// 0x70 
struct UInGameAdManager_Data {
	// Last Offset: 0x3C
	BOOL bShouldPauseWhileAdOpen :1 ; // 0x3C (0x4)
	const unsigned long: 0;
	struct TArray_FScriptDelegate ClickedBannerDelegates; // 0x40 (0xC)
	struct TArray_FScriptDelegate ClosedAdDelegates; // 0x4C (0xC)
	struct FScriptDelegate __OnUserClickedBanner__Delegate; // 0x58 (0xC)
	struct FScriptDelegate __OnUserClosedAdvertisement__Delegate; // 0x64 (0xC)
};

struct UInGameAdManager {
	struct UObject_Data UObject;
	struct UInGameAdManager_Data UInGameAdManager;
};

// 0x3C 
struct UEngineBaseTypes_Data {
	// Last Offset: 0x3C
};

struct UEngineBaseTypes {
	struct UObject_Data UObject;
	struct UEngineBaseTypes_Data UEngineBaseTypes;
};

// 0x1AC 
struct ABrush_Data {
	// Last Offset: 0x188
	unsigned char CsgOper; // 0x188 (0x1) (Enum = ECsgOper)
	const unsigned char Unknown1[0x3]; // 0x189 (0x3) > LAST OFFSET
	struct FColor BrushColor; // 0x18C (0x4)
	int PolyFlags; // 0x190 (0x4)
	BOOL bColored :1 ; // 0x194 (0x4)
	BOOL bSolidWhenSelected :1 ; // 0x194 (0x4)
	BOOL bPlaceableFromClassBrowser :1 ; // 0x194 (0x4)
	const unsigned long: 0;
	struct UModel* Brush; // 0x198 (0x4)
	struct UBrushComponent* BrushComponent; // 0x19C (0x4)
	struct TArray_FGeomSelection SavedSelections; // 0x1A0 (0xC)
};

struct ABrush {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ABrush_Data ABrush;
};

// 0x1AC 
struct ABrushShape_Data {
	// Last Offset: 0x1AC
};

struct ABrushShape {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ABrush_Data ABrush;
	struct ABrushShape_Data ABrushShape;
};

// 0x1BC 
struct AVolume_Data {
	// Last Offset: 0x1AC
	struct TArray_AActorPtr AssociatedActors; // 0x1AC (0xC)
	BOOL bForcePawnWalk :1 ; // 0x1B8 (0x4)
	BOOL bProcessAllActors :1 ; // 0x1B8 (0x4)
	BOOL bPawnsOnly :1 ; // 0x1B8 (0x4)
	const unsigned long: 0;
};

struct AVolume {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ABrush_Data ABrush;
	struct AVolume_Data AVolume;
};

// 0x1C0 
struct ABlockingVolume_Data {
	// Last Offset: 0x1BC
	BOOL bBlockCamera :1 ; // 0x1BC (0x4)
	BOOL bBlockProjectiles :1 ; // 0x1BC (0x4)
	const unsigned long: 0;
};

struct ABlockingVolume {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ABrush_Data ABrush;
	struct AVolume_Data AVolume;
	struct ABlockingVolume_Data ABlockingVolume;
};

// 0x1C4 
struct ADynamicBlockingVolume_Data {
	// Last Offset: 0x1C0
	BOOL bEnabled :1 ; // 0x1C0 (0x4)
	const unsigned long: 0;
};

struct ADynamicBlockingVolume {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ABrush_Data ABrush;
	struct AVolume_Data AVolume;
	struct ABlockingVolume_Data ABlockingVolume;
	struct ADynamicBlockingVolume_Data ADynamicBlockingVolume;
};

// 0x1CC 
struct ACullDistanceVolume_Data {
	// Last Offset: 0x1BC
	struct TArray_FCullDistanceSizePair CullDistances; // 0x1BC (0xC)
	BOOL bEnabled :1 ; // 0x1C8 (0x4)
	const unsigned long: 0;
};

struct ACullDistanceVolume {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ABrush_Data ABrush;
	struct AVolume_Data AVolume;
	struct ACullDistanceVolume_Data ACullDistanceVolume;
};

// 0x244 
struct ALevelGridVolume_Data {
	// Last Offset: 0x1BC
	struct FString LevelGridVolumeName; // 0x1BC (0xC)
	unsigned char CellShape; // 0x1C8 (0x1) (Enum = LevelGridCellShape)
	const unsigned char Unknown1[0x3]; // 0x1C9 (0x3) > LAST OFFSET
	int Subdivisions[3]; // 0x1CC (0xC)
	float LoadingDistance; // 0x1D8 (0x4)
	float KeepLoadedRange; // 0x1DC (0x4)
	struct FKConvexElem CellConvexElem; // 0x1E0 (0x64)
};

struct ALevelGridVolume {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ABrush_Data ABrush;
	struct AVolume_Data AVolume;
	struct ALevelGridVolume_Data ALevelGridVolume;
};

// 0x1D4 
struct ALevelStreamingVolume_Data {
	// Last Offset: 0x1BC
	struct TArray_ULevelStreamingPtr StreamingLevels; // 0x1BC (0xC)
	BOOL bEditorPreVisOnly :1 ; // 0x1C8 (0x4)
	BOOL bDisabled :1 ; // 0x1C8 (0x4)
	BOOL bTestDistanceToVolume :1 ; // 0x1C8 (0x4)
	const unsigned long: 0;
	unsigned char StreamingUsage; // 0x1CC (0x1) (Enum = EStreamingVolumeUsage)
	unsigned char Usage; // 0x1CD (0x1) (Enum = EStreamingVolumeUsage)
	unsigned char CurrentVisibility; // 0x1CE (0x1) (Enum = ECurrentVisibility)
	const unsigned char Unknown1[0x1]; // 0x1CF (0x1) > LAST OFFSET
	float TestVolumeDistance; // 0x1D0 (0x4)
};

struct ALevelStreamingVolume {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ABrush_Data ABrush;
	struct AVolume_Data AVolume;
	struct ALevelStreamingVolume_Data ALevelStreamingVolume;
};

// 0x1BC 
struct ALightmassCharacterIndirectDetailVolume_Data {
	// Last Offset: 0x1BC
};

struct ALightmassCharacterIndirectDetailVolume {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ABrush_Data ABrush;
	struct AVolume_Data AVolume;
	struct ALightmassCharacterIndirectDetailVolume_Data ALightmassCharacterIndirectDetailVolume;
};

// 0x1BC 
struct ALightmassImportanceVolume_Data {
	// Last Offset: 0x1BC
};

struct ALightmassImportanceVolume {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ABrush_Data ABrush;
	struct AVolume_Data AVolume;
	struct ALightmassImportanceVolume_Data ALightmassImportanceVolume;
};

// 0x1BC 
struct AMassiveLODOverrideVolume_Data {
	// Last Offset: 0x1BC
};

struct AMassiveLODOverrideVolume {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ABrush_Data ABrush;
	struct AVolume_Data AVolume;
	struct AMassiveLODOverrideVolume_Data AMassiveLODOverrideVolume;
};

// 0x1BC 
struct ANavMeshBoundsVolume_Data {
	// Last Offset: 0x1BC
};

struct ANavMeshBoundsVolume {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ABrush_Data ABrush;
	struct AVolume_Data AVolume;
	struct ANavMeshBoundsVolume_Data ANavMeshBoundsVolume;
};

// 0x1BC 
struct APathBlockingVolume_Data {
	// Last Offset: 0x1BC
};

struct APathBlockingVolume {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ABrush_Data ABrush;
	struct AVolume_Data AVolume;
	struct APathBlockingVolume_Data APathBlockingVolume;
};

// 0x204 
struct APhysicsVolume_Data {
	// Last Offset: 0x1BC
	struct FVector ZoneVelocity; // 0x1BC (0xC)
	BOOL bVelocityAffectsWalking :1 ; // 0x1C8 (0x4)
	BOOL bPainCausing :1 ; // 0x1C8 (0x4)
	BOOL bAIShouldIgnorePain :1 ; // 0x1C8 (0x4)
	BOOL bEntryPain :1 ; // 0x1C8 (0x4)
	BOOL BACKUP_bPainCausing :1 ; // 0x1C8 (0x4)
	BOOL bDestructive :1 ; // 0x1C8 (0x4)
	BOOL bNoInventory :1 ; // 0x1C8 (0x4)
	BOOL bMoveProjectiles :1 ; // 0x1C8 (0x4)
	BOOL bBounceVelocity :1 ; // 0x1C8 (0x4)
	BOOL bNeutralZone :1 ; // 0x1C8 (0x4)
	BOOL bCrowdAgentsPlayDeathAnim :1 ; // 0x1C8 (0x4)
	BOOL bPhysicsOnContact :1 ; // 0x1C8 (0x4)
	BOOL bWaterVolume :1 ; // 0x1C8 (0x4)
	const unsigned long: 0;
	float GroundFriction; // 0x1CC (0x4)
	float TerminalVelocity; // 0x1D0 (0x4)
	float DamagePerSec; // 0x1D4 (0x4)
	struct UClass* DamageType; // 0x1D8 (0x4)
	struct UDamageTypeDefinition* DamageTypeDefinition; // 0x1DC (0x4)
	struct UImpactDefinition* ImpactDefinition; // 0x1E0 (0x4)
	int Priority; // 0x1E4 (0x4)
	float FluidFriction; // 0x1E8 (0x4)
	float PainInterval; // 0x1EC (0x4)
	float RigidBodyDamping; // 0x1F0 (0x4)
	float MaxDampingForce; // 0x1F4 (0x4)
	struct AInfo* PainTimer; // 0x1F8 (0x4)
	struct AController* DamageInstigator; // 0x1FC (0x4)
	struct APhysicsVolume* NextPhysicsVolume; // 0x200 (0x4)
};

struct APhysicsVolume {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ABrush_Data ABrush;
	struct AVolume_Data AVolume;
	struct APhysicsVolume_Data APhysicsVolume;
};

// 0x204 
struct ADefaultPhysicsVolume_Data {
	// Last Offset: 0x204
};

struct ADefaultPhysicsVolume {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ABrush_Data ABrush;
	struct AVolume_Data AVolume;
	struct APhysicsVolume_Data APhysicsVolume;
	struct ADefaultPhysicsVolume_Data ADefaultPhysicsVolume;
};

// 0x208 
struct AGravityVolume_Data {
	// Last Offset: 0x204
	float GravityZ; // 0x204 (0x4)
};

struct AGravityVolume {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ABrush_Data ABrush;
	struct AVolume_Data AVolume;
	struct APhysicsVolume_Data APhysicsVolume;
	struct AGravityVolume_Data AGravityVolume;
};

// 0x238 
struct ALadderVolume_Data {
	// Last Offset: 0x204
	struct FRotator WallDir; // 0x204 (0xC)
	struct FVector LookDir; // 0x210 (0xC)
	struct FVector ClimbDir; // 0x21C (0xC)
	struct ALadder* LadderList; // 0x228 (0x4)
	BOOL bNoPhysicalLadder :1 ; // 0x22C (0x4)
	BOOL bAutoPath :1 ; // 0x22C (0x4)
	BOOL bAllowLadderStrafing :1 ; // 0x22C (0x4)
	const unsigned long: 0;
	struct APawn* PendingClimber; // 0x230 (0x4)
	struct UArrowComponent* WallDirArrow; // 0x234 (0x4)
};

struct ALadderVolume {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ABrush_Data ABrush;
	struct AVolume_Data AVolume;
	struct APhysicsVolume_Data APhysicsVolume;
	struct ALadderVolume_Data ALadderVolume;
};

// 0x1C8 
struct APortalVolume_Data {
	// Last Offset: 0x1BC
	struct TArray_APortalTeleporterPtr Portals; // 0x1BC (0xC)
};

struct APortalVolume {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ABrush_Data ABrush;
	struct AVolume_Data AVolume;
	struct APortalVolume_Data APortalVolume;
};

// 0x2B0 
struct APostProcessVolume_Data {
	// Last Offset: 0x1BC
	float Priority; // 0x1BC (0x4)
	struct FPostProcessSettings Settings; // 0x1C0 (0xE8)
	struct APostProcessVolume* NextLowerPriorityVolume; // 0x2A8 (0x4)
	BOOL bEnabled :1 ; // 0x2AC (0x4)
	const unsigned long: 0;
};

struct APostProcessVolume {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ABrush_Data ABrush;
	struct AVolume_Data AVolume;
	struct APostProcessVolume_Data APostProcessVolume;
};

// 0x1D4 
struct APrecomputedVisibilityOverrideVolume_Data {
	// Last Offset: 0x1BC
	struct TArray_AActorPtr OverrideVisibleActors; // 0x1BC (0xC)
	struct TArray_AActorPtr OverrideInvisibleActors; // 0x1C8 (0xC)
};

struct APrecomputedVisibilityOverrideVolume {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ABrush_Data ABrush;
	struct AVolume_Data AVolume;
	struct APrecomputedVisibilityOverrideVolume_Data APrecomputedVisibilityOverrideVolume;
};

// 0x1BC 
struct APrecomputedVisibilityVolume_Data {
	// Last Offset: 0x1BC
};

struct APrecomputedVisibilityVolume {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ABrush_Data ABrush;
	struct AVolume_Data AVolume;
	struct APrecomputedVisibilityVolume_Data APrecomputedVisibilityVolume;
};

// 0x208 
struct AReverbVolume_Data {
	// Last Offset: 0x1BC
	float Priority; // 0x1BC (0x4)
	BOOL bEnabled :1 ; // 0x1C0 (0x4)
	const unsigned long: 0;
	struct FReverbSettings Settings; // 0x1C4 (0x1C)
	struct FInteriorSettings AmbientZoneSettings; // 0x1E0 (0x24)
	struct AReverbVolume* NextLowerPriorityVolume; // 0x204 (0x4)
};

struct AReverbVolume {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ABrush_Data ABrush;
	struct AVolume_Data AVolume;
	struct AReverbVolume_Data AReverbVolume;
};

// 0x1CC 
struct AShadowRelevanceVolume_Data {
	// Last Offset: 0x1BC
	struct TArray_FShadowRelevanceSizePair ShadowRelevanceList; // 0x1BC (0xC)
	BOOL bEnabled :1 ; // 0x1C8 (0x4)
	const unsigned long: 0;
};

struct AShadowRelevanceVolume {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ABrush_Data ABrush;
	struct AVolume_Data AVolume;
	struct AShadowRelevanceVolume_Data AShadowRelevanceVolume;
};

// 0x1BC 
struct ATriggerVolume_Data {
	// Last Offset: 0x1BC
};

struct ATriggerVolume {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ABrush_Data ABrush;
	struct AVolume_Data AVolume;
	struct ATriggerVolume_Data ATriggerVolume;
};

// 0x1C4 
struct ADynamicSMActor_Data {
	// Last Offset: 0x188
	struct UStaticMeshComponent* StaticMeshComponent; // 0x188 (0x4)
	struct UDynamicLightEnvironmentComponent* LightEnvironment; // 0x18C (0x4)
	struct UStaticMesh* ReplicatedMesh; // 0x190 (0x4)
	struct UMaterialInterface* ReplicatedMaterial0; // 0x194 (0x4)
	struct UMaterialInterface* ReplicatedMaterial1; // 0x198 (0x4)
	BOOL bForceStaticDecals :1 ; // 0x19C (0x4)
	BOOL bPawnCanBaseOn :1 ; // 0x19C (0x4)
	BOOL bSafeBaseIfAsleep :1 ; // 0x19C (0x4)
	const unsigned long: 0;
	struct FVector ReplicatedMeshTranslation; // 0x1A0 (0xC)
	struct FRotator ReplicatedMeshRotation; // 0x1AC (0xC)
	struct FVector ReplicatedMeshScale3D; // 0x1B8 (0xC)
};

struct ADynamicSMActor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ADynamicSMActor_Data ADynamicSMActor;
};

// 0x1F4 
struct AInterpActor_Data {
	// Last Offset: 0x1C4
	BOOL bShouldSaveForCheckpoint :1 ; // 0x1C4 (0x4)
	BOOL bMonitorMover :1 ; // 0x1C4 (0x4)
	BOOL bMonitorZVelocity :1 ; // 0x1C4 (0x4)
	BOOL bDestroyProjectilesOnEncroach :1 ; // 0x1C4 (0x4)
	BOOL bContinueOnEncroachPhysicsObject :1 ; // 0x1C4 (0x4)
	BOOL bStopOnEncroach :1 ; // 0x1C4 (0x4)
	BOOL bCrushPawnsWhenEncroaching :1 ; // 0x1C4 (0x4)
	BOOL bCrushPawnsWhenGoingDown :1 ; // 0x1C4 (0x4)
	BOOL bCrushPawnsWhenGoingUp :1 ; // 0x1C4 (0x4)
	BOOL bCrushVehiclesWhenGoingDown :1 ; // 0x1C4 (0x4)
	BOOL bCrushVehiclesWhenGoingUp :1 ; // 0x1C4 (0x4)
	BOOL bShouldShadowParentAllAttachedActors :1 ; // 0x1C4 (0x4)
	BOOL bTreatAsStaticForGBXNavMeshBuilding :1 ; // 0x1C4 (0x4)
	BOOL bIsLift :1 ; // 0x1C4 (0x4)
	const unsigned long: 0;
	struct ANavigationPoint* MyMarker; // 0x1C8 (0x4)
	float MaxZVelocity; // 0x1CC (0x4)
	float StayOpenTime; // 0x1D0 (0x4)
	struct USoundCue* OpenSound; // 0x1D4 (0x4)
	struct USoundCue* OpeningAmbientSound; // 0x1D8 (0x4)
	struct USoundCue* OpenedSound; // 0x1DC (0x4)
	struct USoundCue* CloseSound; // 0x1E0 (0x4)
	struct USoundCue* ClosingAmbientSound; // 0x1E4 (0x4)
	struct USoundCue* ClosedSound; // 0x1E8 (0x4)
	struct UAudioComponent* AmbientSoundComponent; // 0x1EC (0x4)
	float BeforeStoppingVelocityZ; // 0x1F0 (0x4)
};

struct AInterpActor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ADynamicSMActor_Data ADynamicSMActor;
	struct AInterpActor_Data AInterpActor;
};

// 0x1F0 
struct AEmitterPool_Data {
	// Last Offset: 0x188
	struct UParticleSystemComponent* PSCTemplate; // 0x188 (0x4)
	struct TArray_UParticleSystemComponentPtr PoolComponents; // 0x18C (0xC)
	struct TArray_UParticleSystemComponentPtr ActiveComponents; // 0x198 (0xC)
	struct UParticleSystemComponent* PhysXSurrogateComponent; // 0x1A4 (0x4)
	struct UParticleSystemComponent* PhysXSurrogateComponentHalfDownsampling; // 0x1A8 (0x4)
	struct UParticleSystemComponent* PhysXSurrogateComponentQuarterDownsampling; // 0x1AC (0x4)
	struct UParticleSystemComponent* PhysXSurrogateComponentSPHFluid; // 0x1B0 (0x4)
	int MaxActiveEffects; // 0x1B4 (0x4)
	BOOL bLogPoolOverflow :1 ; // 0x1B8 (0x4)
	BOOL bLogPoolOverflowList :1 ; // 0x1B8 (0x4)
	const unsigned long: 0;
	struct TArray_FEmitterBaseInfo RelativePSCs; // 0x1BC (0xC)
	float SMC_MIC_ReductionTime; // 0x1C8 (0x4)
	float SMC_MIC_CurrentReductionTime; // 0x1CC (0x4)
	int IdealStaticMeshComponents; // 0x1D0 (0x4)
	int IdealMaterialInstanceConstants; // 0x1D4 (0x4)
	struct TArray_UStaticMeshComponentPtr FreeSMComponents; // 0x1D8 (0xC)
	struct TArray_UMaterialInstanceConstantPtr FreeMatInstConsts; // 0x1E4 (0xC)
};

struct AEmitterPool {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AEmitterPool_Data AEmitterPool;
};

// 0x2D8  (Alignment = 16)
struct AGBXNavMesh_Data {
	// Last Offset: 0x188
	int BuildVersion; // 0x188 (0x4)
	struct FGuid BuildGUID; // 0x18C (0x10)
	int MeshID; // 0x19C (0x4)
	struct TArray_FGBXConnectedNavMesh ConnectedMeshes; // 0x1A0 (0xC)
	struct TArray_FGBXNavMeshVertex Vertices; // 0x1AC (0xC)
	struct TArray_FGBXNavMeshPoly Polys; // 0x1B8 (0xC)
	struct TArray_FGBXNavMeshPolyData PolyData; // 0x1C4 (0xC)
	struct TArray_FGBXNavMeshPathSize PathSizes; // 0x1D0 (0xC)
	struct TArray_FGBXNavMeshObstacleData Obstacles; // 0x1DC (0xC)
	struct TArray_UGBXCrossLevelReferenceContainerPtr SpecialMovers; // 0x1E8 (0xC)
	struct AActor* MeshBase; // 0x1F4 (0x4)
	struct FGBXNavMeshPolyLookup PolyLookup; // 0x1F8 (0x38)
	struct FMatrix CachedLocalToWorld; // 0x230 (0x40)
	struct FMatrix CachedWorldToLocal; // 0x270 (0x40)
	struct FVector CachedBaseLocation; // 0x2B0 (0xC)
	struct FRotator CachedBaseRotation; // 0x2BC (0xC)
	struct AGBXNavMesh* NextNavMesh; // 0x2C8 (0x4)
	struct FPointer BuildData; // 0x2CC (0x4)
	BOOL bShowPolyDebugText :1 ; // 0x2D0 (0x4)
	const unsigned long: 0;
	struct UGBXNavMeshRenderingComponent* RenderComponent; // 0x2D4 (0x4)
};

struct AGBXNavMesh {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AGBXNavMesh_Data AGBXNavMesh;
};

// 0x224 
struct AHUD_Data {
	// Last Offset: 0x188
	struct FColor WhiteColor; // 0x188 (0x4)
	struct FColor GreenColor; // 0x18C (0x4)
	struct FColor RedColor; // 0x190 (0x4)
	struct APlayerController* PlayerOwner; // 0x194 (0x4)
	struct AActor* AnimDebugThis; // 0x198 (0x4)
	struct FName AnimDebugStartingPoint; // 0x19C (0x8)
	BOOL bLostFocusPaused :1 ; // 0x1A4 (0x4)
	BOOL bShowHUD :1 ; // 0x1A4 (0x4)
	BOOL bShowScores :1 ; // 0x1A4 (0x4)
	BOOL bShowDebugInfo :1 ; // 0x1A4 (0x4)
	BOOL bShowAnimDebug :1 ; // 0x1A4 (0x4)
	BOOL bShowBadConnectionAlert :1 ; // 0x1A4 (0x4)
	BOOL bMessageBeep :1 ; // 0x1A4 (0x4)
	BOOL bShowOverlays :1 ; // 0x1A4 (0x4)
	const unsigned long: 0;
	float HudCanvasScale; // 0x1A8 (0x4)
	struct TArray_AActorPtr PostRenderedActors; // 0x1AC (0xC)
	struct TArray_FConsoleMessage ConsoleMessages; // 0x1B8 (0xC)
	struct FColor ConsoleColor; // 0x1C4 (0x4)
	int ConsoleMessageCount; // 0x1C8 (0x4)
	int ConsoleFontSize; // 0x1CC (0x4)
	int MessageFontOffset; // 0x1D0 (0x4)
	int MaxHUDAreaMessageCount; // 0x1D4 (0x4)
	float ConsoleMessagePosX; // 0x1D8 (0x4)
	float ConsoleMessagePosY; // 0x1DC (0x4)
	struct UCanvas* Canvas; // 0x1E0 (0x4)
	float LastHUDRenderTime; // 0x1E4 (0x4)
	float RenderDelta; // 0x1E8 (0x4)
	float SizeX; // 0x1EC (0x4)
	float SizeY; // 0x1F0 (0x4)
	float CenterX; // 0x1F4 (0x4)
	float CenterY; // 0x1F8 (0x4)
	float RatioX; // 0x1FC (0x4)
	float RatioY; // 0x200 (0x4)
	struct TArray_FName DebugDisplay; // 0x204 (0xC)
	struct FName ActiveDebugDisplay; // 0x210 (0x8)
	struct TArray_FKismetDrawTextInfo KismetTextInfo; // 0x218 (0xC)
};

struct AHUD {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AHUD_Data AHUD;
};

// 0x188 
struct AIDestructibleObject_Data {
	// Last Offset: 0x188
};

struct AIDestructibleObject {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AIDestructibleObject_Data AIDestructibleObject;
};

// 0x254 
struct AAutoTestManager_Data {
	// Last Offset: 0x188
	BOOL bAutomatedPerfTesting :1 ; // 0x188 (0x4)
	BOOL bAutoContinueToNextRound :1 ; // 0x188 (0x4)
	BOOL bUsingAutomatedTestingMapList :1 ; // 0x188 (0x4)
	BOOL bExitOnCyclesComplete :1 ; // 0x188 (0x4)
	BOOL bCheckingForFragmentation :1 ; // 0x188 (0x4)
	BOOL bCheckingForMemLeaks :1 ; // 0x188 (0x4)
	BOOL bDoingASentinelRun :1 ; // 0x188 (0x4)
	BOOL bSentinelStreamingLevelStillLoading :1 ; // 0x188 (0x4)
	BOOL bCanCollectStatsWhilePaused :1 ; // 0x188 (0x4)
	BOOL bFinishedTraversal :1 ; // 0x188 (0x4)
	const unsigned long: 0;
	int AutomatedPerfRemainingTime; // 0x18C (0x4)
	int AutomatedTestingMapIndex; // 0x190 (0x4)
	struct TArray_FString AutomatedMapTestingList; // 0x194 (0xC)
	struct TArray_FString AutomatedMapDLC1TestingList; // 0x1A0 (0xC)
	int NumAutomatedMapTestingCycles; // 0x1AC (0x4)
	int NumberOfMatchesPlayed; // 0x1B0 (0x4)
	int NumMapListCyclesDone; // 0x1B4 (0x4)
	struct FString AutomatedTestingExecCommandToRunAtStartMatch; // 0x1B8 (0xC)
	struct FString AutomatedMapTestingTransitionMap; // 0x1C4 (0xC)
	struct FString SentinelTaskDescription; // 0x1D0 (0xC)
	struct FString SentinelTaskParameter; // 0x1DC (0xC)
	struct FString SentinelTagDesc; // 0x1E8 (0xC)
	struct APlayerController* SentinelPC; // 0x1F4 (0x4)
	struct TArray_FVector SentinelTravelArray; // 0x1F8 (0xC)
	int SentinelNavigationIdx; // 0x204 (0x4)
	int SentinelIdx; // 0x208 (0x4)
	int NumRotationsIncrement; // 0x20C (0x4)
	int TravelPointsIncrement; // 0x210 (0x4)
	int NumMinutesPerMap; // 0x214 (0x4)
	struct TArray_FString CommandsToRunAtEachTravelTheWorldNode; // 0x218 (0xC)
	struct FString CommandStringToExec; // 0x224 (0xC)
	struct FString SelectedCharacterClass; // 0x230 (0xC)
	struct FName StationDefName; // 0x23C (0x8)
	struct FString AutomatedTestingTravelType; // 0x244 (0xC)
	int NumOfDLCsToIncludeInRun; // 0x250 (0x4)
};

struct AAutoTestManager {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct AAutoTestManager_Data AAutoTestManager;
};

// 0x19C 
struct ACoverGroup_Data {
	// Last Offset: 0x188
	struct TArray_FActorReference CoverLinkRefs; // 0x188 (0xC)
	float AutoSelectRadius; // 0x194 (0x4)
	float AutoSelectHeight; // 0x198 (0x4)
};

struct ACoverGroup {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct ACoverGroup_Data ACoverGroup;
};

// 0x1A0 
struct AFileWriter_Data {
	// Last Offset: 0x188
	struct FPointer ArchivePtr; // 0x188 (0x4)
	struct FString Filename; // 0x18C (0xC)
	unsigned char FileType; // 0x198 (0x1) (Enum = FWFileType)
	const unsigned char Unknown1[0x3]; // 0x199 (0x3) > LAST OFFSET
	BOOL bFlushEachWrite :1 ; // 0x19C (0x4)
	BOOL bWantsAsyncWrites :1 ; // 0x19C (0x4)
	const unsigned long: 0;
};

struct AFileWriter {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct AFileWriter_Data AFileWriter;
};

// 0x1A0 
struct AFileLog_Data {
	// Last Offset: 0x1A0
};

struct AFileLog {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct AFileWriter_Data AFileWriter;
	struct AFileLog_Data AFileLog;
};

// 0x330 
struct AGameInfo_Data {
	// Last Offset: 0x188
	BOOL bRestartLevel :1 ; // 0x188 (0x4)
	BOOL bPauseable :1 ; // 0x188 (0x4)
	BOOL bTeamGame :1 ; // 0x188 (0x4)
	BOOL bGameEnded :1 ; // 0x188 (0x4)
	BOOL bOverTime :1 ; // 0x188 (0x4)
	BOOL bDelayedStart :1 ; // 0x188 (0x4)
	BOOL bWaitingToStartMatch :1 ; // 0x188 (0x4)
	BOOL bChangeLevels :1 ; // 0x188 (0x4)
	BOOL bAlreadyChanged :1 ; // 0x188 (0x4)
	BOOL bAdminCanPause :1 ; // 0x188 (0x4)
	BOOL bGameRestarted :1 ; // 0x188 (0x4)
	BOOL bLevelChange :1 ; // 0x188 (0x4)
	BOOL bKickLiveIdlers :1 ; // 0x188 (0x4)
	BOOL bShutdownAIWhenIrrelevant :1 ; // 0x188 (0x4)
	BOOL bUsingArbitration :1 ; // 0x188 (0x4)
	BOOL bHasArbitratedHandshakeBegun :1 ; // 0x188 (0x4)
	BOOL bNeedsEndGameHandshake :1 ; // 0x188 (0x4)
	BOOL bIsEndGameHandshakeComplete :1 ; // 0x188 (0x4)
	BOOL bHasEndGameHandshakeBegun :1 ; // 0x188 (0x4)
	BOOL bFixedPlayerStart :1 ; // 0x188 (0x4)
	BOOL bUseSeamlessTravel :1 ; // 0x188 (0x4)
	BOOL bHasNetworkError :1 ; // 0x188 (0x4)
	BOOL bRequiresPushToTalk :1 ; // 0x188 (0x4)
	BOOL bIsStandbyCheckingEnabled :1 ; // 0x188 (0x4)
	BOOL bIsStandbyCheckingOn :1 ; // 0x188 (0x4)
	BOOL bHasStandbyCheatTriggered :1 ; // 0x188 (0x4)
	BOOL bNewOnlineSessionOnTravel :1 ; // 0x188 (0x4)
	const unsigned long: 0;
	struct FString CauseEventCommand; // 0x18C (0xC)
	struct FString BugLocString; // 0x198 (0xC)
	struct FString BugRotString; // 0x1A4 (0xC)
	struct TArray_APlayerControllerPtr PendingArbitrationPCs; // 0x1B0 (0xC)
	struct TArray_APlayerControllerPtr ArbitrationPCs; // 0x1BC (0xC)
	float ArbitrationHandshakeTimeout; // 0x1C8 (0x4)
	float GameDifficulty; // 0x1CC (0x4)
	int GoreLevel; // 0x1D0 (0x4)
	float GameSpeed; // 0x1D4 (0x4)
	struct UClass* DefaultPawnClass; // 0x1D8 (0x4)
	struct UClass* HUDType; // 0x1DC (0x4)
	int MaxSpectators; // 0x1E0 (0x4)
	int MaxSpectatorsAllowed; // 0x1E4 (0x4)
	int NumSpectators; // 0x1E8 (0x4)
	int MaxPlayers; // 0x1EC (0x4)
	int MaxPlayersAllowed; // 0x1F0 (0x4)
	int NumPlayers; // 0x1F4 (0x4)
	int EffectiveNumPlayers; // 0x1F8 (0x4)
	int NumBots; // 0x1FC (0x4)
	int NumTravellingPlayers; // 0x200 (0x4)
	int CurrentID; // 0x204 (0x4)
	struct FString DefaultPlayerName; // 0x208 (0xC)
	struct FString GameName; // 0x214 (0xC)
	int GoalScore; // 0x220 (0x4)
	int MaxLives; // 0x224 (0x4)
	int TimeLimit; // 0x228 (0x4)
	struct UClass* DeathMessageClass; // 0x22C (0x4)
	struct UClass* GameMessageClass; // 0x230 (0x4)
	struct AMutator* BaseMutator; // 0x234 (0x4)
	struct UClass* AccessControlClass; // 0x238 (0x4)
	struct AAccessControl* AccessControl; // 0x23C (0x4)
	struct UClass* BroadcastHandlerClass; // 0x240 (0x4)
	struct ABroadcastHandler* BroadcastHandler; // 0x244 (0x4)
	struct UClass* AutoTestManagerClass; // 0x248 (0x4)
	struct AAutoTestManager* MyAutoTestManager; // 0x24C (0x4)
	struct UClass* PlayerControllerClass; // 0x250 (0x4)
	struct UClass* PlayerReplicationInfoClass; // 0x254 (0x4)
	struct UClass* GameReplicationInfoClass; // 0x258 (0x4)
	struct AGameReplicationInfo* GameReplicationInfo; // 0x25C (0x4)
	float MaxIdleTime; // 0x260 (0x4)
	float MaxTimeMargin; // 0x264 (0x4)
	float TimeMarginSlack; // 0x268 (0x4)
	float MinTimeMargin; // 0x26C (0x4)
	struct TArray_APlayerReplicationInfoPtr InactivePRIArray; // 0x270 (0xC)
	struct TArray_FScriptDelegate Pausers; // 0x27C (0xC)
	struct UOnlineSubsystem* OnlineSub; // 0x288 (0x4)
	struct FScriptInterface GameInterface; // 0x28C (0x8)
	struct UClass* OnlineStatsWriteClass; // 0x294 (0x4)
	int LeaderboardId; // 0x298 (0x4)
	int ArbitratedLeaderboardId; // 0x29C (0x4)
	struct ACoverReplicator* CoverReplicatorBase; // 0x2A0 (0x4)
	struct UClass* OnlineGameSettingsClass; // 0x2A4 (0x4)
	struct TArray_UClassPtr DebugBeaconActorClasses; // 0x2A8 (0xC)
	struct FString ServerOptions; // 0x2B4 (0xC)
	int AdjustedNetSpeed; // 0x2C0 (0x4)
	float LastNetSpeedUpdateTime; // 0x2C4 (0x4)
	int TotalNetBandwidth; // 0x2C8 (0x4)
	int MinDynamicBandwidth; // 0x2CC (0x4)
	int MaxDynamicBandwidth; // 0x2D0 (0x4)
	float StandbyRxCheatTime; // 0x2D4 (0x4)
	float StandbyTxCheatTime; // 0x2D8 (0x4)
	int BadPingThreshold; // 0x2DC (0x4)
	float PercentMissingForRxStandby; // 0x2E0 (0x4)
	float PercentMissingForTxStandby; // 0x2E4 (0x4)
	float PercentForBadPing; // 0x2E8 (0x4)
	float JoinInProgressStandbyWaitTime; // 0x2EC (0x4)
	struct TArray_FGameClassShortName GameInfoClassAliases; // 0x2F0 (0xC)
	struct FString DefaultGameType; // 0x2FC (0xC)
	struct TArray_FGameTypePrefix DefaultMapPrefixes; // 0x308 (0xC)
	struct TArray_FGameTypePrefix CustomMapPrefixes; // 0x314 (0xC)
	int AnimTreePoolSize; // 0x320 (0x4)
	struct FScriptDelegate __CanUnpause__Delegate; // 0x324 (0xC)
};

struct AGameInfo {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct AGameInfo_Data AGameInfo;
};

// 0x19C 
struct AMutator_Data {
	// Last Offset: 0x188
	struct AMutator* NextMutator; // 0x188 (0x4)
	struct TArray_FString GroupNames; // 0x18C (0xC)
	BOOL bUserAdded :1 ; // 0x198 (0x4)
	const unsigned long: 0;
};

struct AMutator {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct AMutator_Data AMutator;
};

// 0x188 
struct APotentialClimbWatcher_Data {
	// Last Offset: 0x188
};

struct APotentialClimbWatcher {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct APotentialClimbWatcher_Data APotentialClimbWatcher;
};

// 0x1A4 
struct ARoute_Data {
	// Last Offset: 0x188
	struct FPointer VfTable_IEditorLinkSelectionInterface; // 0x188 (0x4)
	unsigned char RouteType; // 0x18C (0x1) (Enum = ERouteType)
	const unsigned char Unknown1[0x3]; // 0x18D (0x3) > LAST OFFSET
	struct TArray_FActorReference RouteList; // 0x190 (0xC)
	float FudgeFactor; // 0x19C (0x4)
	int RouteIndexOffset; // 0x1A0 (0x4)
};

struct ARoute {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct ARoute_Data ARoute;
};

// 0x18C 
struct AWindPointSource_Data {
	// Last Offset: 0x188
	struct UWindPointSourceComponent* Component; // 0x188 (0x4)
};

struct AWindPointSource {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct AWindPointSource_Data AWindPointSource;
};

// 0x18C 
struct AKeypoint_Data {
	// Last Offset: 0x188
	struct USpriteComponent* SpriteComp; // 0x188 (0x4)
};

struct AKeypoint {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AKeypoint_Data AKeypoint;
};

// 0x190 
struct ATargetPoint_Data {
	// Last Offset: 0x18C
	int SpawnRefCount; // 0x18C (0x4)
};

struct ATargetPoint {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AKeypoint_Data AKeypoint;
	struct ATargetPoint_Data ATargetPoint;
};

// 0x1A0 
struct ALevelLandmark_Data {
	// Last Offset: 0x188
	struct FString LandmarkName; // 0x188 (0xC)
	unsigned char LandmarkType; // 0x194 (0x1) (Enum = ELandmarkType)
	const unsigned char Unknown1[0x3]; // 0x195 (0x3) > LAST OFFSET
	struct FName AssociatedStationDefinitionName; // 0x198 (0x8)
};

struct ALevelLandmark {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ALevelLandmark_Data ALevelLandmark;
};

// 0x1C4 
struct APersistentTransitionLandmark_Data {
	// Last Offset: 0x1A0
	struct FString FromMapName; // 0x1A0 (0xC)
	struct FString ToMapName; // 0x1AC (0xC)
	struct TArray_FName RequiredSublevelNames; // 0x1B8 (0xC)
};

struct APersistentTransitionLandmark {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ALevelLandmark_Data ALevelLandmark;
	struct APersistentTransitionLandmark_Data APersistentTransitionLandmark;
};

// 0x18C 
struct AMaterialInstanceActor_Data {
	// Last Offset: 0x188
	struct UMaterialInstanceConstant* MatInst; // 0x188 (0x4)
};

struct AMaterialInstanceActor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AMaterialInstanceActor_Data AMaterialInstanceActor;
};

// 0x23C 
struct AMatineeActor_Data {
	// Last Offset: 0x188
	struct USeqAct_Interp* InterpAction; // 0x188 (0x4)
	BOOL bIsPlaying :1 ; // 0x18C (0x4)
	BOOL bReversePlayback :1 ; // 0x18C (0x4)
	BOOL bPaused :1 ; // 0x18C (0x4)
	BOOL AllAIGroupsInitialized :1 ; // 0x18C (0x4)
	const unsigned long: 0;
	float PlayRate; // 0x190 (0x4)
	float Position; // 0x194 (0x4)
	struct FName AIGroupNames[10]; // 0x198 (0x50)
	struct APawn* AIGroupPawns[10]; // 0x1E8 (0x28)
	int AIGroupInitStage[10]; // 0x210 (0x28)
	float ClientSidePositionErrorTolerance; // 0x238 (0x4)
};

struct AMatineeActor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AMatineeActor_Data AMatineeActor;
};

// 0x244 
struct ANavigationPoint_Data {
	// Last Offset: 0x188
	BOOL bEndPoint :1 ; // 0x188 (0x4)
	BOOL bTransientEndPoint :1 ; // 0x188 (0x4)
	BOOL bHideEditorPaths :1 ; // 0x188 (0x4)
	BOOL bCanReach :1 ; // 0x188 (0x4)
	BOOL bBlocked :1 ; // 0x188 (0x4)
	BOOL bOneWayPath :1 ; // 0x188 (0x4)
	BOOL bNeverUseStrafing :1 ; // 0x188 (0x4)
	BOOL bAlwaysUseStrafing :1 ; // 0x188 (0x4)
	BOOL bForceNoStrafing :1 ; // 0x188 (0x4)
	BOOL bAutoBuilt :1 ; // 0x188 (0x4)
	BOOL bSpecialMove :1 ; // 0x188 (0x4)
	BOOL bNoAutoConnect :1 ; // 0x188 (0x4)
	BOOL bNotBased :1 ; // 0x188 (0x4)
	BOOL bPathsChanged :1 ; // 0x188 (0x4)
	BOOL bDestinationOnly :1 ; // 0x188 (0x4)
	BOOL bSourceOnly :1 ; // 0x188 (0x4)
	BOOL bSpecialForced :1 ; // 0x188 (0x4)
	BOOL bMustBeReachable :1 ; // 0x188 (0x4)
	BOOL bBlockable :1 ; // 0x188 (0x4)
	BOOL bFlyingPreferred :1 ; // 0x188 (0x4)
	BOOL bMayCausePain :1 ; // 0x188 (0x4)
	BOOL bAlreadyVisited :1 ; // 0x188 (0x4)
	BOOL bVehicleDestination :1 ; // 0x188 (0x4)
	BOOL bMakeSourceOnly :1 ; // 0x188 (0x4)
	BOOL bMustTouchToReach :1 ; // 0x188 (0x4)
	BOOL bCanWalkOnToReach :1 ; // 0x188 (0x4)
	BOOL bBuildLongPaths :1 ; // 0x188 (0x4)
	BOOL bBlockedForVehicles :1 ; // 0x188 (0x4)
	BOOL bPreferredVehiclePath :1 ; // 0x188 (0x4)
	BOOL bHasCrossLevelPaths :1 ; // 0x188 (0x4)
	BOOL bShouldSaveForCheckpoint :1 ; // 0x188 (0x4)
	BOOL bRequireTraceTest :1 ; // 0x188 (0x4)
	BOOL bIsValidStoppingPoint :1 ; // 0x18C (0x4)
	BOOL bReservationRequiredToStopHere :1 ; // 0x18C (0x4)
	BOOL bDisplayAreaReach :1 ; // 0x18C (0x4)
	const unsigned long: 0;
	struct FNavigationOctreeObject NavOctreeObject; // 0x190 (0x34)
	struct UClass* PathRenderingComponentClass; // 0x1C4 (0x4)
	struct TArray_UReachSpecPtr PathList; // 0x1C8 (0xC)
	int visitedWeight; // 0x1D4 (0x4)
	int bestPathWeight; // 0x1D8 (0x4)
	struct ANavigationPoint* nextNavigationPoint; // 0x1DC (0x4)
	struct ANavigationPoint* nextOrdered; // 0x1E0 (0x4)
	struct ANavigationPoint* prevOrdered; // 0x1E4 (0x4)
	struct ANavigationPoint* previousPath; // 0x1E8 (0x4)
	int Cost; // 0x1EC (0x4)
	int ExtraCost; // 0x1F0 (0x4)
	int TransientCost; // 0x1F4 (0x4)
	float LastDetourWeight; // 0x1F8 (0x4)
	struct UCylinderComponent* CylinderComponent; // 0x1FC (0x4)
	struct FCylinder MaxPathSize; // 0x200 (0x8)
	struct FGuid NavGuid; // 0x208 (0x10)
	int NetworkID; // 0x218 (0x4)
	struct APawn* AnchoredPawn; // 0x21C (0x4)
	float LastAnchoredPawnTime; // 0x220 (0x4)
	int NodeSearchFlags; // 0x224 (0x4)
	struct AHybridNavigationArea* AreaActor; // 0x228 (0x4)
	struct FName AreaName; // 0x22C (0x8)
	int AreaReach; // 0x234 (0x4)
	int AreaVerticalReach; // 0x238 (0x4)
	int NoStoppingRadius; // 0x23C (0x4)
	float BusyPathCostMultiplier; // 0x240 (0x4)
};

struct ANavigationPoint {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ANavigationPoint_Data ANavigationPoint;
};

// 0x2DD 
struct ACoverLink_Data {
	// Last Offset: 0x244
	struct FPointer VfTable_IIGBXNavMeshSpecialMove; // 0x244 (0x4)
	BOOL GLOBAL_bUseSlotMarkers :1 ; // 0x248 (0x4)
	BOOL bDisabled :1 ; // 0x248 (0x4)
	BOOL bClaimAllSlots :1 ; // 0x248 (0x4)
	BOOL bAutoSort :1 ; // 0x248 (0x4)
	BOOL bAutoAdjust :1 ; // 0x248 (0x4)
	BOOL bCircular :1 ; // 0x248 (0x4)
	BOOL bLooped :1 ; // 0x248 (0x4)
	BOOL bPlayerOnly :1 ; // 0x248 (0x4)
	BOOL bDynamicCover :1 ; // 0x248 (0x4)
	BOOL bFractureOnTouch :1 ; // 0x248 (0x4)
	BOOL bDebug :1 ; // 0x248 (0x4)
	BOOL bDebug_FireLinks :1 ; // 0x248 (0x4)
	BOOL bDebug_ExposedLinks :1 ; // 0x248 (0x4)
	BOOL bDebug_CoverGen :1 ; // 0x248 (0x4)
	BOOL bDoAutoSlotDensityFixup :1 ; // 0x248 (0x4)
	const unsigned long: 0;
	float LeanTraceDist; // 0x24C (0x4)
	struct TArray_FCoverSlot Slots; // 0x250 (0xC)
	struct TArray_FDynamicLinkInfo DynamicLinkInfos; // 0x25C (0xC)
	struct TArray_APawnPtr Claims; // 0x268 (0xC)
	float InvalidateDistance; // 0x274 (0x4)
	float MaxFireLinkDist; // 0x278 (0x4)
	struct FVector CircularOrigin; // 0x27C (0xC)
	float CircularRadius; // 0x288 (0x4)
	float AlignDist; // 0x28C (0x4)
	float AutoCoverSlotInterval; // 0x290 (0x4)
	float StandHeight; // 0x294 (0x4)
	float MidHeight; // 0x298 (0x4)
	struct FVector StandingLeanOffset; // 0x29C (0xC)
	struct FVector CrouchLeanOffset; // 0x2A8 (0xC)
	struct FVector PopupOffset; // 0x2B4 (0xC)
	float SlipDist; // 0x2C0 (0x4)
	float TurnDist; // 0x2C4 (0x4)
	float DangerScale; // 0x2C8 (0x4)
	struct FString CoverSlotMarkerClassName; // 0x2CC (0xC)
	struct ACoverLink* NextCoverLink; // 0x2D8 (0x4)
	unsigned char LocationDescription; // 0x2DC (0x1) (Enum = ECoverLocationDescription)
};

struct ACoverLink {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ANavigationPoint_Data ANavigationPoint;
	struct ACoverLink_Data ACoverLink;
};

// 0x254 
struct ADoorMarker_Data {
	// Last Offset: 0x244
	struct AInterpActor* MyDoor; // 0x244 (0x4)
	unsigned char DoorType; // 0x248 (0x1) (Enum = EDoorType)
	const unsigned char Unknown1[0x3]; // 0x249 (0x3) > LAST OFFSET
	struct AActor* DoorTrigger; // 0x24C (0x4)
	BOOL bWaitUntilCompletelyOpened :1 ; // 0x250 (0x4)
	BOOL bInitiallyClosed :1 ; // 0x250 (0x4)
	BOOL bBlockedWhenClosed :1 ; // 0x250 (0x4)
	BOOL bDoorOpen :1 ; // 0x250 (0x4)
	BOOL bTempDisabledCollision :1 ; // 0x250 (0x4)
	const unsigned long: 0;
};

struct ADoorMarker {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ANavigationPoint_Data ANavigationPoint;
	struct ADoorMarker_Data ADoorMarker;
};

// 0x248 
struct ADynamicAnchor_Data {
	// Last Offset: 0x244
	struct AController* CurrentUser; // 0x244 (0x4)
};

struct ADynamicAnchor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ANavigationPoint_Data ANavigationPoint;
	struct ADynamicAnchor_Data ADynamicAnchor;
};

// 0x24C 
struct ALadder_Data {
	// Last Offset: 0x244
	struct ALadderVolume* MyLadder; // 0x244 (0x4)
	struct ALadder* LadderList; // 0x248 (0x4)
};

struct ALadder {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ANavigationPoint_Data ANavigationPoint;
	struct ALadder_Data ALadder;
};

// 0x24C 
struct AAutoLadder_Data {
	// Last Offset: 0x24C
};

struct AAutoLadder {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ANavigationPoint_Data ANavigationPoint;
	struct ALadder_Data ALadder;
	struct AAutoLadder_Data AAutoLadder;
};

// 0x264 
struct ALiftCenter_Data {
	// Last Offset: 0x244
	struct AInterpActor* MyLift; // 0x244 (0x4)
	float MaxDist2D; // 0x248 (0x4)
	struct FVector LiftOffset; // 0x24C (0xC)
	BOOL bJumpLift :1 ; // 0x258 (0x4)
	const unsigned long: 0;
	float CollisionHeight; // 0x25C (0x4)
	struct ATrigger* LiftTrigger; // 0x260 (0x4)
};

struct ALiftCenter {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ANavigationPoint_Data ANavigationPoint;
	struct ALiftCenter_Data ALiftCenter;
};

// 0x24C 
struct ALiftExit_Data {
	// Last Offset: 0x244
	struct ALiftCenter* MyLiftCenter; // 0x244 (0x4)
	BOOL bExitOnly :1 ; // 0x248 (0x4)
	const unsigned long: 0;
};

struct ALiftExit {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ANavigationPoint_Data ANavigationPoint;
	struct ALiftExit_Data ALiftExit;
};

// 0x244 
struct APathNode_Data {
	// Last Offset: 0x244
};

struct APathNode {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ANavigationPoint_Data ANavigationPoint;
	struct APathNode_Data APathNode;
};

// 0x24C 
struct AVolumePathNode_Data {
	// Last Offset: 0x244
	float StartingRadius; // 0x244 (0x4)
	float StartingHeight; // 0x248 (0x4)
};

struct AVolumePathNode {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ANavigationPoint_Data ANavigationPoint;
	struct APathNode_Data APathNode;
	struct AVolumePathNode_Data AVolumePathNode;
};

// 0x260 
struct APickupFactory_Data {
	// Last Offset: 0x244
	BOOL bOnlyReplicateHidden :1 ; // 0x244 (0x4)
	BOOL bPickupHidden :1 ; // 0x244 (0x4)
	BOOL bPredictRespawns :1 ; // 0x244 (0x4)
	BOOL bIsSuperItem :1 ; // 0x244 (0x4)
	BOOL bRespawnPaused :1 ; // 0x244 (0x4)
	const unsigned long: 0;
	struct UClass* InventoryType; // 0x248 (0x4)
	float RespawnEffectTime; // 0x24C (0x4)
	float MaxDesireability; // 0x250 (0x4)
	struct UPrimitiveComponent* PickupMesh; // 0x254 (0x4)
	struct APickupFactory* ReplacementFactory; // 0x258 (0x4)
	struct APickupFactory* OriginalFactory; // 0x25C (0x4)
};

struct APickupFactory {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ANavigationPoint_Data ANavigationPoint;
	struct APickupFactory_Data APickupFactory;
};

// 0x254 
struct APlayerStart_Data {
	// Last Offset: 0x244
	BOOL bEnabled :1 ; // 0x244 (0x4)
	BOOL bPrimaryStart :1 ; // 0x244 (0x4)
	BOOL bBestStart :1 ; // 0x244 (0x4)
	const unsigned long: 0;
	int TeamIndex; // 0x248 (0x4)
	int Score; // 0x24C (0x4)
	int SelectionIndex; // 0x250 (0x4)
};

struct APlayerStart {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ANavigationPoint_Data ANavigationPoint;
	struct APlayerStart_Data APlayerStart;
};

// 0x248 
struct APortalMarker_Data {
	// Last Offset: 0x244
	struct APortalTeleporter* MyPortal; // 0x244 (0x4)
};

struct APortalMarker {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ANavigationPoint_Data ANavigationPoint;
	struct APortalMarker_Data APortalMarker;
};

// 0x2F4 
struct APylon_Data {
	// Last Offset: 0x244
	struct FPointer VfTable_IEditorLinkSelectionInterface; // 0x244 (0x4)
	struct FPointer NavMeshPtr; // 0x248 (0x4)
	struct FPointer ObstacleMesh; // 0x24C (0x4)
	struct FPointer DynamicObstacleMesh; // 0x250 (0x4)
	struct FPointer WorkingSetPtr; // 0x254 (0x4)
	struct FPointer PathObjectsThatAffectThisPylon; // 0x258 (0x4)
	struct TArray_FVector NextPassSeedList; // 0x25C (0xC)
	struct FOctreeElementId OctreeId; // 0x268 (0x8)
	struct FPointer OctreeIWasAddedTo; // 0x270 (0x4)
	struct APylon* NextPylon; // 0x274 (0x4)
	struct TArray_AVolumePtr ExpansionVolumes; // 0x278 (0xC)
	float ExpansionRadius; // 0x284 (0x4)
	float MaxExpansionRadius; // 0x288 (0x4)
	struct TArray_FNavMeshPathSize PathSizes; // 0x28C (0xC)
	struct UDrawPylonRadiusComponent* PylonRadiusPreview; // 0x298 (0x4)
	BOOL bImportedMesh :1 ; // 0x29C (0x4)
	BOOL bUseExpansionSphereOverride :1 ; // 0x29C (0x4)
	BOOL bNeedsCostCheck :1 ; // 0x29C (0x4)
	BOOL bDrawEdgePolys :1 ; // 0x29C (0x4)
	BOOL bDrawPolyBounds :1 ; // 0x29C (0x4)
	BOOL bRenderInShowPaths :1 ; // 0x29C (0x4)
	BOOL bDrawWalkableSurface :1 ; // 0x29C (0x4)
	BOOL bDrawObstacleSurface :1 ; // 0x29C (0x4)
	BOOL bUseGBXValues :1 ; // 0x29C (0x4)
	BOOL bUseGBXExpansion :1 ; // 0x29C (0x4)
	BOOL bExpansionDoSimplification :1 ; // 0x29C (0x4)
	BOOL bExpansionDoThreeToTwoMerge :1 ; // 0x29C (0x4)
	BOOL bExpansionDoPolyMerge :1 ; // 0x29C (0x4)
	BOOL bExpansionDoPolyConcaveMerge :1 ; // 0x29C (0x4)
	BOOL bExpansionDoSquareMerge :1 ; // 0x29C (0x4)
	BOOL bExpansionDoSaveFixup :1 ; // 0x29C (0x4)
	BOOL bExpansionCullPolys :1 ; // 0x29C (0x4)
	BOOL bExpansionBuildObstacleMesh :1 ; // 0x29C (0x4)
	BOOL bExpansionCreateEdgeConnections :1 ; // 0x29C (0x4)
	BOOL bExpansionDoSubdivisionMerging :1 ; // 0x29C (0x4)
	BOOL bExpansionDoObstacleMeshSimplification :1 ; // 0x29C (0x4)
	BOOL bExpansionDoEdgeSmoothing :1 ; // 0x29C (0x4)
	BOOL bExpansionDoRawGridOnly :1 ; // 0x29C (0x4)
	BOOL bExpansionDoConcaveSlabsOnly :1 ; // 0x29C (0x4)
	BOOL bExpansionDoEdgeSimplificationEvenInConcaveSlabMode :1 ; // 0x29C (0x4)
	BOOL bExpansionDrawDropDownPolys :1 ; // 0x29C (0x4)
	BOOL bExpansionDrawPolyParents :1 ; // 0x29C (0x4)
	BOOL bExpansionDisableSubdivisionHeightSnapping :1 ; // 0x29C (0x4)
	BOOL bExpansionDisableVertMaxHeightSlopeMax :1 ; // 0x29C (0x4)
	BOOL bBuildThisPylon :1 ; // 0x29C (0x4)
	BOOL bDisabled :1 ; // 0x29C (0x4)
	BOOL bForceObstacleMeshCollision :1 ; // 0x29C (0x4)
	const unsigned long: 0;
	struct FVector ExpansionSphereCenter; // 0x2A0 (0xC)
	struct UNavMeshRenderingComponent* RenderingComp; // 0x2AC (0x4)
	struct USpriteComponent* BrokenSprite; // 0x2B0 (0x4)
	struct TArray_APylonPtr ImposterPylons; // 0x2B4 (0xC)
	struct TArray_AActorPtr OnBuild_DisableCollisionForThese; // 0x2C0 (0xC)
	struct TArray_AActorPtr OnBuild_EnableCollisionForThese; // 0x2CC (0xC)
	float MaxPolyHeight_Optional; // 0x2D8 (0x4)
	int DebugEdgeCount; // 0x2DC (0x4)
	float IconScale; // 0x2E0 (0x4)
	int GBX_PolySize; // 0x2E4 (0x4)
	float EdgeCheckHeight; // 0x2E8 (0x4)
	float PolyMergeThreshold; // 0x2EC (0x4)
	struct APylon* OuterPylon; // 0x2F0 (0x4)
};

struct APylon {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ANavigationPoint_Data ANavigationPoint;
	struct APylon_Data APylon;
};

// 0x2F8 
struct AAISwitchablePylon_Data {
	// Last Offset: 0x2F4
	BOOL bOpen :1 ; // 0x2F4 (0x4)
	const unsigned long: 0;
};

struct AAISwitchablePylon {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ANavigationPoint_Data ANavigationPoint;
	struct APylon_Data APylon;
	struct AAISwitchablePylon_Data AAISwitchablePylon;
};

// 0x2F8 
struct ADynamicPylon_Data {
	// Last Offset: 0x2F4
	BOOL bMoving :1 ; // 0x2F4 (0x4)
	const unsigned long: 0;
};

struct ADynamicPylon {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ANavigationPoint_Data ANavigationPoint;
	struct APylon_Data APylon;
	struct ADynamicPylon_Data ADynamicPylon;
};

// 0x26C 
struct ATeleporter_Data {
	// Last Offset: 0x244
	struct FString URL; // 0x244 (0xC)
	struct FName ProductRequired; // 0x250 (0x8)
	BOOL bChangesVelocity :1 ; // 0x258 (0x4)
	BOOL bChangesYaw :1 ; // 0x258 (0x4)
	BOOL bReversesX :1 ; // 0x258 (0x4)
	BOOL bReversesY :1 ; // 0x258 (0x4)
	BOOL bReversesZ :1 ; // 0x258 (0x4)
	BOOL bEnabled :1 ; // 0x258 (0x4)
	BOOL bCanTeleportVehicles :1 ; // 0x258 (0x4)
	const unsigned long: 0;
	struct FVector TargetVelocity; // 0x25C (0xC)
	float LastFired; // 0x268 (0x4)
};

struct ATeleporter {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ANavigationPoint_Data ANavigationPoint;
	struct ATeleporter_Data ATeleporter;
};

// 0x188 
struct ANote_Data {
	// Last Offset: 0x188
};

struct ANote {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ANote_Data ANote;
};

// 0x1F4 
struct AProjectile_Data {
	// Last Offset: 0x188
	float Speed; // 0x188 (0x4)
	float MaxSpeed; // 0x18C (0x4)
	BOOL bSwitchToZeroCollision :1 ; // 0x190 (0x4)
	BOOL bBlockedByInstigator :1 ; // 0x190 (0x4)
	BOOL bBegunPlay :1 ; // 0x190 (0x4)
	BOOL bRotationFollowsVelocity :1 ; // 0x190 (0x4)
	BOOL bIgnoreFoliageTouch :1 ; // 0x190 (0x4)
	const unsigned long: 0;
	struct AActor* ZeroCollider; // 0x194 (0x4)
	struct UPrimitiveComponent* ZeroColliderComponent; // 0x198 (0x4)
	float Damage; // 0x19C (0x4)
	float DamageBaseValue; // 0x1A0 (0x4)
	struct TArray_UAttributeModifierPtr DamageModifierStack; // 0x1A4 (0xC)
	float DamageRadius; // 0x1B0 (0x4)
	float DamageRadiusBaseValue; // 0x1B4 (0x4)
	struct TArray_UAttributeModifierPtr DamageRadiusModifierStack; // 0x1B8 (0xC)
	float MomentumTransfer; // 0x1C4 (0x4)
	float MomentumTransferBaseValue; // 0x1C8 (0x4)
	struct TArray_UAttributeModifierPtr MomentumTransferModifierStack; // 0x1CC (0xC)
	struct UClass* MyDamageType; // 0x1D8 (0x4)
	struct USoundCue* SpawnSound; // 0x1DC (0x4)
	struct USoundCue* ImpactSound; // 0x1E0 (0x4)
	struct AController* InstigatorController; // 0x1E4 (0x4)
	struct AActor* ImpactedActor; // 0x1E8 (0x4)
	float NetCullDistanceSquared; // 0x1EC (0x4)
	struct UCylinderComponent* CylinderComponent; // 0x1F0 (0x4)
};

struct AProjectile {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AProjectile_Data AProjectile;
};

// 0x188 
struct ARigidBodyBase_Data {
	// Last Offset: 0x188
};

struct ARigidBodyBase {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ARigidBodyBase_Data ARigidBodyBase;
};

// 0x18C 
struct ASceneCaptureActor_Data {
	// Last Offset: 0x188
	struct USceneCaptureComponent* SceneCapture; // 0x188 (0x4)
};

struct ASceneCaptureActor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ASceneCaptureActor_Data ASceneCaptureActor;
};

// 0x190 
struct ASceneCapture2DActor_Data {
	// Last Offset: 0x18C
	struct UDrawFrustumComponent* DrawFrustum; // 0x18C (0x4)
};

struct ASceneCapture2DActor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ASceneCaptureActor_Data ASceneCaptureActor;
	struct ASceneCapture2DActor_Data ASceneCapture2DActor;
};

// 0x194 
struct ASceneCaptureCubeMapActor_Data {
	// Last Offset: 0x18C
	struct UStaticMeshComponent* StaticMesh; // 0x18C (0x4)
	struct UMaterialInstanceConstant* CubeMaterialInst; // 0x190 (0x4)
};

struct ASceneCaptureCubeMapActor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ASceneCaptureActor_Data ASceneCaptureActor;
	struct ASceneCaptureCubeMapActor_Data ASceneCaptureCubeMapActor;
};

// 0x194 
struct ASceneCaptureReflectActor_Data {
	// Last Offset: 0x18C
	struct UStaticMeshComponent* StaticMesh; // 0x18C (0x4)
	struct UMaterialInstanceConstant* ReflectMaterialInst; // 0x190 (0x4)
};

struct ASceneCaptureReflectActor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ASceneCaptureActor_Data ASceneCaptureActor;
	struct ASceneCaptureReflectActor_Data ASceneCaptureReflectActor;
};

// 0x194 
struct ASceneCapturePortalActor_Data {
	// Last Offset: 0x194
};

struct ASceneCapturePortalActor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ASceneCaptureActor_Data ASceneCaptureActor;
	struct ASceneCaptureReflectActor_Data ASceneCaptureReflectActor;
	struct ASceneCapturePortalActor_Data ASceneCapturePortalActor;
};

// 0x1A8 
struct APortalTeleporter_Data {
	// Last Offset: 0x194
	struct APortalTeleporter* SisterPortal; // 0x194 (0x4)
	int TextureResolutionX; // 0x198 (0x4)
	int TextureResolutionY; // 0x19C (0x4)
	struct APortalMarker* MyMarker; // 0x1A0 (0x4)
	BOOL bMovablePortal :1 ; // 0x1A4 (0x4)
	BOOL bAlwaysTeleportNonPawns :1 ; // 0x1A4 (0x4)
	BOOL bCanTeleportVehicles :1 ; // 0x1A4 (0x4)
	const unsigned long: 0;
};

struct APortalTeleporter {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ASceneCaptureActor_Data ASceneCaptureActor;
	struct ASceneCaptureReflectActor_Data ASceneCaptureReflectActor;
	struct ASceneCapturePortalActor_Data ASceneCapturePortalActor;
	struct APortalTeleporter_Data APortalTeleporter;
};

// 0x188 
struct AStaticMeshActorBase_Data {
	// Last Offset: 0x188
};

struct AStaticMeshActorBase {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AStaticMeshActorBase_Data AStaticMeshActorBase;
};

// 0x198 
struct ABlockingMeshCollectionActor_Data {
	// Last Offset: 0x188
	struct TArray_UBlockingMeshComponentPtr BlockingMeshComponents; // 0x188 (0xC)
	int MaxBlockingMeshComponents; // 0x194 (0x4)
};

struct ABlockingMeshCollectionActor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AStaticMeshActorBase_Data AStaticMeshActorBase;
	struct ABlockingMeshCollectionActor_Data ABlockingMeshCollectionActor;
};

// 0x190 
struct AStaticMeshActor_Data {
	// Last Offset: 0x188
	struct UStaticMeshComponent* StaticMeshComponent; // 0x188 (0x4)
	BOOL bDisableAutoBaseOnProcBuilding :1 ; // 0x18C (0x4)
	const unsigned long: 0;
};

struct AStaticMeshActor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AStaticMeshActorBase_Data AStaticMeshActorBase;
	struct AStaticMeshActor_Data AStaticMeshActor;
};

// 0x198 
struct AStaticMeshCollectionActor_Data {
	// Last Offset: 0x188
	struct TArray_UStaticMeshComponentPtr StaticMeshComponents; // 0x188 (0xC)
	int MaxStaticMeshComponents; // 0x194 (0x4)
};

struct AStaticMeshCollectionActor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AStaticMeshActorBase_Data AStaticMeshActorBase;
	struct AStaticMeshCollectionActor_Data AStaticMeshCollectionActor;
};

// 0x1A4 
struct AStaticMeshActorBasedOnExtremeContent_Data {
	// Last Offset: 0x188
	struct UStaticMeshComponent* StaticMeshComponent; // 0x188 (0x4)
	struct TArray_FSMMaterialSetterDatum ExtremeContent; // 0x18C (0xC)
	struct TArray_FSMMaterialSetterDatum NonExtremeContent; // 0x198 (0xC)
};

struct AStaticMeshActorBasedOnExtremeContent {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AStaticMeshActorBasedOnExtremeContent_Data AStaticMeshActorBasedOnExtremeContent;
};

// 0x19C 
struct ATeleporterDestination_Data {
	// Last Offset: 0x188
	struct TArray_AActorPtr ExitPoints; // 0x188 (0xC)
	int ExitPointsCounter; // 0x194 (0x4)
	BOOL IsEnabled :1 ; // 0x198 (0x4)
	BOOL Resurrect :1 ; // 0x198 (0x4)
	const unsigned long: 0;
};

struct ATeleporterDestination {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ATeleporterDestination_Data ATeleporterDestination;
};

// 0x194 
struct ATrigger_Data {
	// Last Offset: 0x188
	struct UCylinderComponent* CylinderComponent; // 0x188 (0x4)
	BOOL bRecentlyTriggered :1 ; // 0x18C (0x4)
	const unsigned long: 0;
	float AITriggerDelay; // 0x190 (0x4)
};

struct ATrigger {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ATrigger_Data ATrigger;
};

// 0x194 
struct ATrigger_PawnsOnly_Data {
	// Last Offset: 0x194
};

struct ATrigger_PawnsOnly {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ATrigger_Data ATrigger;
	struct ATrigger_PawnsOnly_Data ATrigger_PawnsOnly;
};

// 0x59 
struct UActorComponent_Data {
	// Last Offset: 0x48
	struct FPointer VfTable_IIWorldBody; // 0x48 (0x4)
	struct FPointer Scene; // 0x4C (0x4)
	struct AActor* Owner; // 0x50 (0x4)
	BOOL bAttached :1 ; // 0x54 (0x4)
	BOOL bSkipChildComponentUpdate :1 ; // 0x54 (0x4)
	BOOL bTickInEditor :1 ; // 0x54 (0x4)
	BOOL bTickInGame :1 ; // 0x54 (0x4)
	BOOL bTickInStatusMenu :1 ; // 0x54 (0x4)
	BOOL bNeedsReattach :1 ; // 0x54 (0x4)
	BOOL bNeedsUpdateTransform :1 ; // 0x54 (0x4)
	const unsigned long: 0;
	unsigned char TickGroup; // 0x58 (0x1) (Enum = ETickingGroup)
};

struct UActorComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
};

// 0x1EC 
struct UAkComponent_Data {
	// Last Offset: 0x5C
	struct FName SocketName; // 0x5C (0x8)
	BOOL bUseCustomTransform :1 ; // 0x64 (0x4)
	BOOL bCustomTransformChanged :1 ; // 0x64 (0x4)
	BOOL bShouldAllSourcesActAsOneSound :1 ; // 0x64 (0x4)
	BOOL bForceRecalcEnvironmentAndOcclusion :1 ; // 0x64 (0x4)
	BOOL bReturnToPoolWhenFinishedPlaying :1 ; // 0x64 (0x4)
	BOOL bNeverReturnToPoolAutomatically :1 ; // 0x64 (0x4)
	BOOL bCanBeOccluded :1 ; // 0x64 (0x4)
	BOOL bPersistAcrossWorldChanges :1 ; // 0x64 (0x4)
	BOOL bIsReattaching :1 ; // 0x64 (0x4)
	BOOL bRegistered :1 ; // 0x64 (0x4)
	const unsigned long: 0;
	struct TArray_FVector CustomLocations; // 0x68 (0xC)
	struct TArray_FRotator CustomRotations; // 0x74 (0xC)
	float LastEnvironmentalAndOcclusionUpdateTime; // 0x80 (0x4)
	float LastSubtitleUpdateTime; // 0x84 (0x4)
	struct FPointer HeadPlayingInfoPtr; // 0x88 (0x4)
	struct FPointer TailPlayingInfoPtr; // 0x8C (0x4)
	struct FPendingFaceFXInfo PendingFaceFX; // 0x90 (0x1C)
	struct FPendingSubtitleInfo PendingSubtitle; // 0xAC (0x1C)
	struct TArray_FPointer SubtitlesPendingKill; // 0xC8 (0xC)
	float CurrentObstructionLevels[8]; // 0xD4 (0x20)
	float TargetObstructionLevels[8]; // 0xF4 (0x20)
	float CurrentOcclusionLevels[8]; // 0x114 (0x20)
	float TargetOcclusionLevels[8]; // 0x134 (0x20)
	struct FScriptInterface SpecialOcclusionProvider; // 0x154 (0x8)
	struct FMap_Mirror KnownRTPCs; // 0x15C (0x3C)
	struct FMap_Mirror KnownSwitches; // 0x198 (0x3C)
	struct FScriptDelegate __OnAkEventCompleted__Delegate; // 0x1D4 (0xC)
	struct FScriptDelegate __UpdateComponentPosition__Delegate; // 0x1E0 (0xC)
};

struct UAkComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UAkComponent_Data UAkComponent;
};

// 0x21C 
struct UAudioComponent_Data {
	// Last Offset: 0x5C
	struct USoundCue* SoundCue; // 0x5C (0x4)
	struct USoundNode* CueFirstNode; // 0x60 (0x4)
	struct TArray_FAudioComponentParam InstanceParameters; // 0x64 (0xC)
	BOOL bUseOwnerLocation :1 ; // 0x70 (0x4)
	BOOL bAutoPlay :1 ; // 0x70 (0x4)
	BOOL bAutoDestroy :1 ; // 0x70 (0x4)
	BOOL bStopWhenOwnerDestroyed :1 ; // 0x70 (0x4)
	BOOL bShouldRemainActiveIfDropped :1 ; // 0x70 (0x4)
	BOOL bWasOccluded :1 ; // 0x70 (0x4)
	BOOL bSuppressSubtitles :1 ; // 0x70 (0x4)
	BOOL bWasPlaying :1 ; // 0x70 (0x4)
	BOOL bAllowSpatialization :1 ; // 0x70 (0x4)
	BOOL bFinished :1 ; // 0x70 (0x4)
	BOOL bApplyRadioFilter :1 ; // 0x70 (0x4)
	BOOL bRadioFilterSelected :1 ; // 0x70 (0x4)
	BOOL bPreviewComponent :1 ; // 0x70 (0x4)
	BOOL bIgnoreForFlushing :1 ; // 0x70 (0x4)
	const unsigned long: 0;
	float StereoBleed; // 0x74 (0x4)
	float LFEBleed; // 0x78 (0x4)
	BOOL bEQFilterApplied :1 ; // 0x7C (0x4)
	BOOL bAlwaysPlay :1 ; // 0x7C (0x4)
	BOOL bIsUISound :1 ; // 0x7C (0x4)
	BOOL bIsMusic :1 ; // 0x7C (0x4)
	BOOL bReverb :1 ; // 0x7C (0x4)
	BOOL bCenterChannelOnly :1 ; // 0x7C (0x4)
	BOOL bIsDialog :1 ; // 0x7C (0x4)
	BOOL bIsAmbience :1 ; // 0x7C (0x4)
	const unsigned long: 0;
	struct TArray_FPointer WaveInstances; // 0x80 (0xC)
	struct TArray_unsigned_char SoundNodeData; // 0x8C (0xC)
	const unsigned char Unknown1[0x3C]; // 0x98 (0x3C) UNKNOWN PROPERTY
	struct FMultiMap_Mirror SoundNodeResetWaveMap; // 0xD4 (0x3C)
	struct FPointer Listener; // 0x110 (0x4)
	float PlaybackTime; // 0x114 (0x4)
	struct APortalVolume* PortalVolume; // 0x118 (0x4)
	struct FVector Location; // 0x11C (0xC)
	struct FVector ComponentLocation; // 0x128 (0xC)
	struct AActor* LastOwner; // 0x134 (0x4)
	float SubtitlePriority; // 0x138 (0x4)
	float FadeInStartTime; // 0x13C (0x4)
	float FadeInStopTime; // 0x140 (0x4)
	float FadeInTargetVolume; // 0x144 (0x4)
	float FadeOutStartTime; // 0x148 (0x4)
	float FadeOutStopTime; // 0x14C (0x4)
	float FadeOutTargetVolume; // 0x150 (0x4)
	float AdjustVolumeStartTime; // 0x154 (0x4)
	float AdjustVolumeStopTime; // 0x158 (0x4)
	float AdjustVolumeTargetVolume; // 0x15C (0x4)
	float CurrAdjustVolumeTargetVolume; // 0x160 (0x4)
	struct USoundNode* CurrentNotifyBufferFinishedHook; // 0x164 (0x4)
	struct FVector CurrentLocation; // 0x168 (0xC)
	float CurrentVolume; // 0x174 (0x4)
	float CurrentPitch; // 0x178 (0x4)
	float CurrentHighFrequencyGain; // 0x17C (0x4)
	int CurrentUseSpatialization; // 0x180 (0x4)
	int CurrentNotifyOnLoop; // 0x184 (0x4)
	float CurrentVolumeMultiplier; // 0x188 (0x4)
	float CurrentPitchMultiplier; // 0x18C (0x4)
	float CurrentHighFrequencyGainMultiplier; // 0x190 (0x4)
	float CurrentVoiceCenterChannelVolume; // 0x194 (0x4)
	float CurrentRadioFilterVolume; // 0x198 (0x4)
	float CurrentRadioFilterVolumeThreshold; // 0x19C (0x4)
	struct FDouble LastUpdateTime; // 0x1A0 (0x8)
	float SourceInteriorVolume; // 0x1A8 (0x4)
	float SourceInteriorLPF; // 0x1AC (0x4)
	float CurrentInteriorVolume; // 0x1B0 (0x4)
	float CurrentInteriorLPF; // 0x1B4 (0x4)
	struct FVector LastLocation; // 0x1B8 (0xC)
	struct FInteriorSettings LastInteriorSettings; // 0x1C4 (0x24)
	int LastReverbVolumeIndex; // 0x1E8 (0x4)
	float VolumeMultiplier; // 0x1EC (0x4)
	float PitchMultiplier; // 0x1F0 (0x4)
	float HighFrequencyGainMultiplier; // 0x1F4 (0x4)
	float OcclusionCheckInterval; // 0x1F8 (0x4)
	float LastOcclusionCheckTime; // 0x1FC (0x4)
	struct UDrawSoundRadiusComponent* PreviewSoundRadius; // 0x200 (0x4)
	struct FScriptDelegate __OnAudioFinished__Delegate; // 0x204 (0xC)
	struct FScriptDelegate __OnQueueSubtitles__Delegate; // 0x210 (0xC)
};

struct UAudioComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UAudioComponent_Data UAudioComponent;
};

// 0x78 
struct UHeightFogComponent_Data {
	// Last Offset: 0x5C
	BOOL bEnabled :1 ; // 0x5C (0x4)
	const unsigned long: 0;
	float Height; // 0x60 (0x4)
	float Density; // 0x64 (0x4)
	float LightBrightness; // 0x68 (0x4)
	struct FColor LightColor; // 0x6C (0x4)
	float ExtinctionDistance; // 0x70 (0x4)
	float StartDistance; // 0x74 (0x4)
};

struct UHeightFogComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UHeightFogComponent_Data UHeightFogComponent;
};

// 0x210  (Alignment = 16)
struct UPrimitiveComponent_Data {
	// Last Offset: 0x5C
	int Tag; // 0x5C (0x4)
	struct FBoxSphereBounds Bounds; // 0x60 (0x1C)
	struct FPointer SceneInfo; // 0x7C (0x4)
	int DetachFence; // 0x80 (0x4)
	float _LocalToWorldDeterminant; // 0x84 (0x4)
	const unsigned char Unknown1[0x8]; // 0x88 (0x8) > LAST OFFSET
	struct FMatrix _LocalToWorld; // 0x90 (0x40)
	struct FMatrix _WorldToLocal; // 0xD0 (0x40)
	struct FVector _LocalToWorldScale; // 0x110 (0xC)
	int MotionBlurInfoIndex; // 0x11C (0x4)
	struct TArray_FPointer DecalList; // 0x120 (0xC)
	struct TArray_UDecalComponentPtr DecalsToReattach; // 0x12C (0xC)
	struct UFogVolumeDensityComponent* FogVolumeComponent; // 0x138 (0x4)
	struct ULightComponent* OverrideLightComponent; // 0x13C (0x4)
	struct ULightEnvironmentComponent* LightEnvironment; // 0x140 (0x4)
	struct ULightEnvironmentComponent* PreviousLightEnvironment; // 0x144 (0x4)
	float MinDrawDistance; // 0x148 (0x4)
	float MaxDrawDistance; // 0x14C (0x4)
	float CachedMaxDrawDistance; // 0x150 (0x4)
	float MotionBlurInstanceScale; // 0x154 (0x4)
	unsigned char DepthPriorityGroup; // 0x158 (0x1) (Enum = ESceneDepthPriorityGroup)
	unsigned char DetailMode; // 0x159 (0x1) (Enum = EDetailMode)
	unsigned char RBChannel; // 0x15A (0x1) (Enum = ERBCollisionChannel)
	unsigned char DynamicShadowCastRelevance; // 0x15B (0x1) (Enum = EDynamicShadowCastRelevance)
	unsigned char RBDominanceGroup; // 0x15C (0x1)
	unsigned char PreviewEnvironmentShadowing; // 0x15D (0x1)
	unsigned char ScriptRigidBodyCollisionThresholdCompiled; // 0x15E (0x1)
	unsigned char TranslucencySortPriority; // 0x15F (0x1)
	BOOL bAllowCullDistanceVolume :1 ; // 0x160 (0x4)
	BOOL bAllowShadowRelevanceVolume :1 ; // 0x160 (0x4)
	BOOL HiddenGame :1 ; // 0x160 (0x4)
	BOOL HiddenEditor :1 ; // 0x160 (0x4)
	BOOL bOwnerNoSee :1 ; // 0x160 (0x4)
	BOOL bOnlyOwnerSee :1 ; // 0x160 (0x4)
	BOOL bOnlyPlayerOwnerSee :1 ; // 0x160 (0x4)
	BOOL bPlayerOwnerNoSee :1 ; // 0x160 (0x4)
	BOOL bIgnoreOwnerHidden :1 ; // 0x160 (0x4)
	BOOL bUseAsOccluder :1 ; // 0x160 (0x4)
	BOOL bAllowApproximateOcclusion :1 ; // 0x160 (0x4)
	BOOL bFirstFrameOcclusion :1 ; // 0x160 (0x4)
	BOOL bIgnoreNearPlaneIntersection :1 ; // 0x160 (0x4)
	BOOL bSelectable :1 ; // 0x160 (0x4)
	BOOL bForceMipStreaming :1 ; // 0x160 (0x4)
	BOOL bAcceptsStaticDecals :1 ; // 0x160 (0x4)
	BOOL bAcceptsDynamicDecals :1 ; // 0x160 (0x4)
	BOOL bAllowDecalAutomaticReAttach :1 ; // 0x160 (0x4)
	BOOL bAcceptsFoliage :1 ; // 0x160 (0x4)
	BOOL bInWorldForeground :1 ; // 0x160 (0x4)
	BOOL CastShadow :1 ; // 0x160 (0x4)
	BOOL bForceDirectLightMap :1 ; // 0x160 (0x4)
