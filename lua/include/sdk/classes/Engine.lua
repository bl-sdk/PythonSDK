
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
	BOOL bCastDynamicShadow :1 ; // 0x160 (0x4)
	BOOL bCastStaticShadow :1 ; // 0x160 (0x4)
	BOOL bCastOccludedShadow :1 ; // 0x160 (0x4)
	BOOL bSelfShadowOnly :1 ; // 0x160 (0x4)
	BOOL bCastHiddenShadow :1 ; // 0x160 (0x4)
	BOOL bCastShadowAsTwoSided :1 ; // 0x160 (0x4)
	BOOL bAcceptsLights :1 ; // 0x160 (0x4)
	BOOL bAcceptsDynamicLights :1 ; // 0x160 (0x4)
	BOOL bAcceptsSkyLight :1 ; // 0x160 (0x4)
	BOOL bUseOnePassLightingOnTranslucency :1 ; // 0x160 (0x4)
	BOOL bUsePrecomputedShadows :1 ; // 0x164 (0x4)
	BOOL bInstancedStaticRB :1 ; // 0x164 (0x4)
	BOOL CollideActors :1 ; // 0x164 (0x4)
	BOOL AlwaysCheckCollision :1 ; // 0x164 (0x4)
	BOOL BlockActors :1 ; // 0x164 (0x4)
	BOOL BlockZeroExtent :1 ; // 0x164 (0x4)
	BOOL BlockNonZeroExtent :1 ; // 0x164 (0x4)
	BOOL CanBlockCamera :1 ; // 0x164 (0x4)
	BOOL BlockRigidBody :1 ; // 0x164 (0x4)
	BOOL bBlockFootPlacement :1 ; // 0x164 (0x4)
	BOOL BulletListener :1 ; // 0x164 (0x4)
	BOOL bDisableAllRigidBody :1 ; // 0x164 (0x4)
	BOOL bSkipRBGeomCreation :1 ; // 0x164 (0x4)
	BOOL bNotifyRigidBodyCollision :1 ; // 0x164 (0x4)
	BOOL bFluidDrain :1 ; // 0x164 (0x4)
	BOOL bFluidTwoWay :1 ; // 0x164 (0x4)
	BOOL bIgnoreRadialImpulse :1 ; // 0x164 (0x4)
	BOOL bIgnoreRadialForce :1 ; // 0x164 (0x4)
	BOOL bIgnoreForceField :1 ; // 0x164 (0x4)
	BOOL bUseCompartment :1 ; // 0x164 (0x4)
	BOOL AlwaysLoadOnClient :1 ; // 0x164 (0x4)
	BOOL AlwaysLoadOnServer :1 ; // 0x164 (0x4)
	BOOL bPrimitiveRequiresOcclusionQuery :1 ; // 0x164 (0x4)
	BOOL bIgnoreHiddenActorsMembership :1 ; // 0x164 (0x4)
	BOOL AbsoluteTranslation :1 ; // 0x164 (0x4)
	BOOL AbsoluteRotation :1 ; // 0x164 (0x4)
	BOOL AbsoluteScale :1 ; // 0x164 (0x4)
	BOOL bUseOrthonormalizedLighting :1 ; // 0x164 (0x4)
	BOOL bBoundToGFxMovie :1 ; // 0x164 (0x4)
	BOOL bWasSNFiltered :1 ; // 0x164 (0x4)
	const unsigned long: 0;
	struct TArray_int OctreeNodes; // 0x168 (0xC)
	int VisibilityId; // 0x174 (0x4)
	struct FLightingChannelContainer LightingChannels; // 0x178 (0x4)
	struct FRBCollisionChannelContainer RBCollideWithChannels; // 0x17C (0x4)
	struct UPhysicalMaterial* PhysMaterialOverride; // 0x180 (0x4)
	struct URB_BodyInstance* BodyInstance; // 0x184 (0x4)
	const unsigned char Unknown2[0x8]; // 0x188 (0x8) > LAST OFFSET
	struct FMatrix CachedParentToWorld; // 0x190 (0x40)
	struct FVector CachedParentToWorldScale; // 0x1D0 (0xC)
	struct FVector Translation; // 0x1DC (0xC)
	struct FRotator Rotation; // 0x1E8 (0xC)
	float Scale; // 0x1F4 (0x4)
	struct FVector Scale3D; // 0x1F8 (0xC)
	float BoundsScale; // 0x204 (0x4)
	float LastSubmitTime; // 0x208 (0x4)
	float LastRenderTime; // 0x20C (0x4)
};

struct UPrimitiveComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
};

// 0x21C  (Alignment = 16)
struct UArrowComponent_Data {
	// Last Offset: 0x210
	struct FColor ArrowColor; // 0x210 (0x4)
	float ArrowSize; // 0x214 (0x4)
	BOOL bTreatAsASprite :1 ; // 0x218 (0x4)
	BOOL bIsDebugBeacon :1 ; // 0x218 (0x4)
	const unsigned long: 0;
};

struct UArrowComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UArrowComponent_Data UArrowComponent;
};

// 0x264  (Alignment = 16)
struct UBrushComponent_Data {
	// Last Offset: 0x210
	struct UModel* Brush; // 0x210 (0x4)
	struct FKAggregateGeom BrushAggGeom; // 0x214 (0x38)
	struct FPointer BrushPhysDesc; // 0x24C (0x4)
	struct FKCachedConvexData_Mirror CachedPhysBrushData; // 0x250 (0xC)
	int CachedPhysBrushDataVersion; // 0x25C (0x4)
	BOOL bBlockComplexCollisionTrace :1 ; // 0x260 (0x4)
	const unsigned long: 0;
};

struct UBrushComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UBrushComponent_Data UBrushComponent;
};

// 0x210  (Alignment = 16)
struct UCameraConeComponent_Data {
	// Last Offset: 0x210
};

struct UCameraConeComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UCameraConeComponent_Data UCameraConeComponent;
};

// 0x21C  (Alignment = 16)
struct UCylinderComponent_Data {
	// Last Offset: 0x210
	float CollisionHeight; // 0x210 (0x4)
	float CollisionRadius; // 0x214 (0x4)
	BOOL bDrawBoundingBox :1 ; // 0x218 (0x4)
	BOOL bDrawNonColliding :1 ; // 0x218 (0x4)
	BOOL bAlwaysRenderIfSelected :1 ; // 0x218 (0x4)
	const unsigned long: 0;
};

struct UCylinderComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UCylinderComponent_Data UCylinderComponent;
};

// 0x21C  (Alignment = 16)
struct USphereComponent_Data {
	// Last Offset: 0x21C
};

struct USphereComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UCylinderComponent_Data UCylinderComponent;
	struct USphereComponent_Data USphereComponent;
};

// 0x228  (Alignment = 16)
struct UDrawBoxComponent_Data {
	// Last Offset: 0x210
	struct FColor BoxColor; // 0x210 (0x4)
	struct UMaterial* BoxMaterial; // 0x214 (0x4)
	struct FVector BoxExtent; // 0x218 (0xC)
	BOOL bDrawWireBox :1 ; // 0x224 (0x4)
	BOOL bDrawLitBox :1 ; // 0x224 (0x4)
	BOOL bDrawOnlyIfSelected :1 ; // 0x224 (0x4)
	const unsigned long: 0;
};

struct UDrawBoxComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UDrawBoxComponent_Data UDrawBoxComponent;
};

// 0x224  (Alignment = 16)
struct UDrawCapsuleComponent_Data {
	// Last Offset: 0x210
	struct FColor CapsuleColor; // 0x210 (0x4)
	struct UMaterial* CapsuleMaterial; // 0x214 (0x4)
	float CapsuleHeight; // 0x218 (0x4)
	float CapsuleRadius; // 0x21C (0x4)
	BOOL bDrawWireCapsule :1 ; // 0x220 (0x4)
	BOOL bDrawLitCapsule :1 ; // 0x220 (0x4)
	BOOL bDrawOnlyIfSelected :1 ; // 0x220 (0x4)
	const unsigned long: 0;
};

struct UDrawCapsuleComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UDrawCapsuleComponent_Data UDrawCapsuleComponent;
};

// 0x220  (Alignment = 16)
struct UDrawConeComponent_Data {
	// Last Offset: 0x210
	struct FColor ConeColor; // 0x210 (0x4)
	float ConeRadius; // 0x214 (0x4)
	float ConeAngle; // 0x218 (0x4)
	int ConeSides; // 0x21C (0x4)
};

struct UDrawConeComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UDrawConeComponent_Data UDrawConeComponent;
};

// 0x230  (Alignment = 16)
struct UDrawCylinderComponent_Data {
	// Last Offset: 0x210
	struct FColor CylinderColor; // 0x210 (0x4)
	struct UMaterial* CylinderMaterial; // 0x214 (0x4)
	float CylinderRadius; // 0x218 (0x4)
	float CylinderTopRadius; // 0x21C (0x4)
	float CylinderHeight; // 0x220 (0x4)
	float CylinderHeightOffset; // 0x224 (0x4)
	int CylinderSides; // 0x228 (0x4)
	BOOL bDrawWireCylinder :1 ; // 0x22C (0x4)
	BOOL bDrawLitCylinder :1 ; // 0x22C (0x4)
	BOOL bDrawOnlyIfSelected :1 ; // 0x22C (0x4)
	const unsigned long: 0;
};

struct UDrawCylinderComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UDrawCylinderComponent_Data UDrawCylinderComponent;
};

// 0x228  (Alignment = 16)
struct UDrawFrustumComponent_Data {
	// Last Offset: 0x210
	struct FColor FrustumColor; // 0x210 (0x4)
	float FrustumAngle; // 0x214 (0x4)
	float FrustumAspectRatio; // 0x218 (0x4)
	float FrustumStartDist; // 0x21C (0x4)
	float FrustumEndDist; // 0x220 (0x4)
	struct UTexture* Texture; // 0x224 (0x4)
};

struct UDrawFrustumComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UDrawFrustumComponent_Data UDrawFrustumComponent;
};

// 0x21C  (Alignment = 16)
struct UDrawQuadComponent_Data {
	// Last Offset: 0x210
	struct UTexture* Texture; // 0x210 (0x4)
	float Width; // 0x214 (0x4)
	float Height; // 0x218 (0x4)
};

struct UDrawQuadComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UDrawQuadComponent_Data UDrawQuadComponent;
};

// 0x224  (Alignment = 16)
struct UDrawSphereComponent_Data {
	// Last Offset: 0x210
	struct FColor SphereColor; // 0x210 (0x4)
	struct UMaterial* SphereMaterial; // 0x214 (0x4)
	float SphereRadius; // 0x218 (0x4)
	int SphereSides; // 0x21C (0x4)
	BOOL bDrawWireSphere :1 ; // 0x220 (0x4)
	BOOL bDrawLitSphere :1 ; // 0x220 (0x4)
	BOOL bDrawOnlyIfSelected :1 ; // 0x220 (0x4)
	const unsigned long: 0;
};

struct UDrawSphereComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UDrawSphereComponent_Data UDrawSphereComponent;
};

// 0x224  (Alignment = 16)
struct UDrawPylonRadiusComponent_Data {
	// Last Offset: 0x224
};

struct UDrawPylonRadiusComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UDrawSphereComponent_Data UDrawSphereComponent;
	struct UDrawPylonRadiusComponent_Data UDrawPylonRadiusComponent;
};

// 0x224  (Alignment = 16)
struct UDrawSoundRadiusComponent_Data {
	// Last Offset: 0x224
};

struct UDrawSoundRadiusComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UDrawSphereComponent_Data UDrawSphereComponent;
	struct UDrawSoundRadiusComponent_Data UDrawSoundRadiusComponent;
};

// 0x224  (Alignment = 16)
struct UGBXNavMeshRenderingComponent_Data {
	// Last Offset: 0x210
	BOOL bDrawPolys :1 ; // 0x210 (0x4)
	BOOL bDrawSplitPlanes :1 ; // 0x210 (0x4)
	BOOL bDrawEdgeConnections :1 ; // 0x210 (0x4)
	BOOL bDrawSimplificationConnections :1 ; // 0x210 (0x4)
	BOOL bDrawSimplifiedShapes :1 ; // 0x210 (0x4)
	BOOL bDrawFailedSimplificationShapes :1 ; // 0x210 (0x4)
	BOOL bDrawFailedTriangulationShapes :1 ; // 0x210 (0x4)
	BOOL bDrawBlockedEdges :1 ; // 0x210 (0x4)
	const unsigned long: 0;
	struct TArray_int MeshSpacingHullsToDraw; // 0x214 (0xC)
	struct FPointer NavMeshRenderingData; // 0x220 (0x4)
};

struct UGBXNavMeshRenderingComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UGBXNavMeshRenderingComponent_Data UGBXNavMeshRenderingComponent;
};

// 0x210  (Alignment = 16)
struct ULevelGridVolumeRenderingComponent_Data {
	// Last Offset: 0x210
};

struct ULevelGridVolumeRenderingComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct ULevelGridVolumeRenderingComponent_Data ULevelGridVolumeRenderingComponent;
};

// 0x234  (Alignment = 16)
struct ULineBatchComponent_Data {
	// Last Offset: 0x210
	struct FPointer FPrimitiveDrawInterfaceVfTable; // 0x210 (0x4)
	struct FPointer FPrimitiveDrawInterfaceView; // 0x214 (0x4)
	struct TArray_FPointer BatchedLines; // 0x218 (0xC)
	struct TArray_FPointer BatchedPoints; // 0x224 (0xC)
	float DefaultLifeTime; // 0x230 (0x4)
};

struct ULineBatchComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct ULineBatchComponent_Data ULineBatchComponent;
};

// 0x234  (Alignment = 16)
struct UModelComponent_Data {
	// Last Offset: 0x210
	struct UObject* Model; // 0x210 (0x4)
	int ZoneIndex; // 0x214 (0x4)
	int ComponentIndex; // 0x218 (0x4)
	struct TArray_FPointer Nodes; // 0x21C (0xC)
	struct TArray_FPointer Elements; // 0x228 (0xC)
};

struct UModelComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UModelComponent_Data UModelComponent;
};

// 0x218  (Alignment = 16)
struct USocketComponent_Data {
	// Last Offset: 0x210
	struct FName SocketName; // 0x210 (0x8)
};

struct USocketComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct USocketComponent_Data USocketComponent;
};

// 0x218  (Alignment = 16)
struct UHomingTargetComponent_Data {
	// Last Offset: 0x218
};

struct UHomingTargetComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct USocketComponent_Data USocketComponent;
	struct UHomingTargetComponent_Data UHomingTargetComponent;
};

// 0x22C  (Alignment = 16)
struct USpriteComponent_Data {
	// Last Offset: 0x210
	struct UTexture2D* Sprite; // 0x210 (0x4)
	BOOL bIsScreenSizeScaled :1 ; // 0x214 (0x4)
	const unsigned long: 0;
	float ScreenSize; // 0x218 (0x4)
	float U; // 0x21C (0x4)
	float UL; // 0x220 (0x4)
	float V; // 0x224 (0x4)
	float VL; // 0x228 (0x4)
};

struct USpriteComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct USpriteComponent_Data USpriteComponent;
};

// 0x230  (Alignment = 16)
struct USpriteRTTComponent_Data {
	// Last Offset: 0x22C
	struct UTextureRenderTarget2D* SpriteRTT; // 0x22C (0x4)
};

struct USpriteRTTComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct USpriteComponent_Data USpriteComponent;
	struct USpriteRTTComponent_Data USpriteRTTComponent;
};

// 0xC0  (Alignment = 16)
struct URadialBlurComponent_Data {
	// Last Offset: 0x5C
	struct UMaterialInterface* Material; // 0x5C (0x4)
	unsigned char DepthPriorityGroup; // 0x60 (0x1) (Enum = ESceneDepthPriorityGroup)
	const unsigned char Unknown1[0x3]; // 0x61 (0x3) > LAST OFFSET
	float BlurScale; // 0x64 (0x4)
	float BlurFalloffExponent; // 0x68 (0x4)
	float BlurOpacity; // 0x6C (0x4)
	float MaxCullDistance; // 0x70 (0x4)
	float DistanceFalloffExponent; // 0x74 (0x4)
	BOOL bRenderAsVelocity :1 ; // 0x78 (0x4)
	BOOL bEnabled :1 ; // 0x78 (0x4)
	const unsigned long: 0;
	const unsigned char Unknown2[0x4]; // 0x7C (0x4) > LAST OFFSET
	struct FMatrix LocalToWorld; // 0x80 (0x40)
};

struct URadialBlurComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct URadialBlurComponent_Data URadialBlurComponent;
};

// 0x94 
struct USceneCaptureComponent_Data {
	// Last Offset: 0x5C
	BOOL bEnabled :1 ; // 0x5C (0x4)
	BOOL bEnablePostProcess :1 ; // 0x5C (0x4)
	BOOL bEnableFog :1 ; // 0x5C (0x4)
	BOOL bUseMainScenePostProcessSettings :1 ; // 0x5C (0x4)
	BOOL bSkipUpdateIfTextureUsersOccluded :1 ; // 0x5C (0x4)
	BOOL bSkipUpdateIfOwnerOccluded :1 ; // 0x5C (0x4)
	BOOL bSkipRenderingDepthPrepass :1 ; // 0x5C (0x4)
	const unsigned long: 0;
	struct FColor ClearColor; // 0x60 (0x4)
	unsigned char ViewMode; // 0x64 (0x1) (Enum = ESceneCaptureViewMode)
	const unsigned char Unknown1[0x3]; // 0x65 (0x3) > LAST OFFSET
	int SceneLOD; // 0x68 (0x4)
	float FrameRate; // 0x6C (0x4)
	struct UPostProcessChain* PostProcess; // 0x70 (0x4)
	float MaxUpdateDist; // 0x74 (0x4)
	float MaxViewDistanceOverride; // 0x78 (0x4)
	float MaxStreamingUpdateDist; // 0x7C (0x4)
	struct FPointer CaptureInfo; // 0x80 (0x4)
	struct FPointer ViewState; // 0x84 (0x4)
	struct TArray_FPointer PostProcessProxies; // 0x88 (0xC)
};

struct USceneCaptureComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct USceneCaptureComponent_Data USceneCaptureComponent;
};

// 0x130  (Alignment = 16)
struct USceneCapture2DComponent_Data {
	// Last Offset: 0x94
	struct UTextureRenderTarget2D* TextureTarget; // 0x94 (0x4)
	float FieldOfView; // 0x98 (0x4)
	float NearPlane; // 0x9C (0x4)
	float FarPlane; // 0xA0 (0x4)
	BOOL bUpdateMatrices :1 ; // 0xA4 (0x4)
	const unsigned long: 0;
	const unsigned char Unknown1[0x8]; // 0xA8 (0x8) > LAST OFFSET
	struct FMatrix ViewMatrix; // 0xB0 (0x40)
	struct FMatrix ProjMatrix; // 0xF0 (0x40)
};

struct USceneCapture2DComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct USceneCaptureComponent_Data USceneCaptureComponent;
	struct USceneCapture2DComponent_Data USceneCapture2DComponent;
};

// 0xB8 
struct USceneCapture2DHitMaskComponent_Data {
	// Last Offset: 0x94
	struct UTextureRenderTarget2D* TextureTarget; // 0x94 (0x4)
	struct USkeletalMeshComponent* SkeletalMeshComp; // 0x98 (0x4)
	int MaterialIndex; // 0x9C (0x4)
	int ForceLOD; // 0xA0 (0x4)
	int HitMaskCullDistance; // 0xA4 (0x4)
	float FadingStartTimeSinceHit; // 0xA8 (0x4)
	float FadingPercentage; // 0xAC (0x4)
	float FadingDurationTime; // 0xB0 (0x4)
	float FadingIntervalTime; // 0xB4 (0x4)
};

struct USceneCapture2DHitMaskComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct USceneCaptureComponent_Data USceneCaptureComponent;
	struct USceneCapture2DHitMaskComponent_Data USceneCapture2DHitMaskComponent;
};

// 0xAC 
struct USceneCaptureCubeMapComponent_Data {
	// Last Offset: 0x94
	struct UTextureRenderTargetCube* TextureTarget; // 0x94 (0x4)
	float NearPlane; // 0x98 (0x4)
	float FarPlane; // 0x9C (0x4)
	struct FVector WorldLocation; // 0xA0 (0xC)
};

struct USceneCaptureCubeMapComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct USceneCaptureComponent_Data USceneCaptureComponent;
	struct USceneCaptureCubeMapComponent_Data USceneCaptureCubeMapComponent;
};

// 0xA0 
struct USceneCapturePortalComponent_Data {
	// Last Offset: 0x94
	struct UTextureRenderTarget2D* TextureTarget; // 0x94 (0x4)
	float ScaleFOV; // 0x98 (0x4)
	struct AActor* ViewDestination; // 0x9C (0x4)
};

struct USceneCapturePortalComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct USceneCaptureComponent_Data USceneCaptureComponent;
	struct USceneCapturePortalComponent_Data USceneCapturePortalComponent;
};

// 0x9C 
struct USceneCaptureReflectComponent_Data {
	// Last Offset: 0x94
	struct UTextureRenderTarget2D* TextureTarget; // 0x94 (0x4)
	float ScaleFOV; // 0x98 (0x4)
};

struct USceneCaptureReflectComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct USceneCaptureComponent_Data USceneCaptureComponent;
	struct USceneCaptureReflectComponent_Data USceneCaptureReflectComponent;
};

// 0x70 
struct UWindDirectionalSourceComponent_Data {
	// Last Offset: 0x5C
	struct FPointer SceneProxy; // 0x5C (0x4)
	float Strength; // 0x60 (0x4)
	float Phase; // 0x64 (0x4)
	float Frequency; // 0x68 (0x4)
	float Speed; // 0x6C (0x4)
};

struct UWindDirectionalSourceComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UWindDirectionalSourceComponent_Data UWindDirectionalSourceComponent;
};

// 0x78 
struct UWindPointSourceComponent_Data {
	// Last Offset: 0x70
	struct UDrawSphereComponent* PreviewRadiusComponent; // 0x70 (0x4)
	float Radius; // 0x74 (0x4)
};

struct UWindPointSourceComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UWindDirectionalSourceComponent_Data UWindDirectionalSourceComponent;
	struct UWindPointSourceComponent_Data UWindPointSourceComponent;
};

// 0x7C 
struct UActorFactory_Data {
	// Last Offset: 0x3C
	struct UClass* GameplayActorClass; // 0x3C (0x4)
	struct FString MenuName; // 0x40 (0xC)
	int MenuPriority; // 0x4C (0x4)
	int AlternateMenuPriority; // 0x50 (0x4)
	struct UClass* NewActorClass; // 0x54 (0x4)
	BOOL bPlaceable :1 ; // 0x58 (0x4)
	BOOL bShowInEditorQuickMenu :1 ; // 0x58 (0x4)
	BOOL bUseCustomPropertyEditor :1 ; // 0x58 (0x4)
	const unsigned long: 0;
	struct FString SpecificGameName; // 0x5C (0xC)
	struct FString CustomPropertyEditorDelegateClassName; // 0x68 (0xC)
	struct UActorFactoryCustomPropertyEditorDelegate* CustomPropertyEditorDelegateInstance; // 0x74 (0x4)
	struct UClass* CustomPropertyEditorDelegateTargetClass; // 0x78 (0x4)
};

struct UActorFactory {
	struct UObject_Data UObject;
	struct UActorFactory_Data UActorFactory;
};

// 0x80 
struct UActorFactoryActor_Data {
	// Last Offset: 0x7C
	struct UClass* ActorClass; // 0x7C (0x4)
};

struct UActorFactoryActor {
	struct UObject_Data UObject;
	struct UActorFactory_Data UActorFactory;
	struct UActorFactoryActor_Data UActorFactoryActor;
};

// 0xA4 
struct UActorFactoryAI_Data {
	// Last Offset: 0x7C
	struct UClass* ControllerClass; // 0x7C (0x4)
	struct UClass* PawnClass; // 0x80 (0x4)
	struct FString PawnName; // 0x84 (0xC)
	BOOL bGiveDefaultInventory :1 ; // 0x90 (0x4)
	const unsigned long: 0;
	struct TArray_UClassPtr InventoryList; // 0x94 (0xC)
	int TeamIndex; // 0xA0 (0x4)
};

struct UActorFactoryAI {
	struct UObject_Data UObject;
	struct UActorFactory_Data UActorFactory;
	struct UActorFactoryAI_Data UActorFactoryAI;
};

// 0x8C 
struct UActorFactoryApexDestructible_Data {
	// Last Offset: 0x7C
	BOOL bStartAwake :1 ; // 0x7C (0x4)
	const unsigned long: 0;
	unsigned char RBChannel; // 0x80 (0x1) (Enum = ERBCollisionChannel)
	const unsigned char Unknown1[0x3]; // 0x81 (0x3) > LAST OFFSET
	struct FRBCollisionChannelContainer CollideWithChannels; // 0x84 (0x4)
	struct UApexDestructibleAsset* DestructibleAsset; // 0x88 (0x4)
};

struct UActorFactoryApexDestructible {
	struct UObject_Data UObject;
	struct UActorFactory_Data UActorFactory;
	struct UActorFactoryApexDestructible_Data UActorFactoryApexDestructible;
};

// 0x80 
struct UActorFactoryArchetype_Data {
	// Last Offset: 0x7C
	struct AActor* ArchetypeActor; // 0x7C (0x4)
};

struct UActorFactoryArchetype {
	struct UObject_Data UObject;
	struct UActorFactory_Data UActorFactory;
	struct UActorFactoryArchetype_Data UActorFactoryArchetype;
};

// 0x7C 
struct UActorFactoryCoverLink_Data {
	// Last Offset: 0x7C
};

struct UActorFactoryCoverLink {
	struct UObject_Data UObject;
	struct UActorFactory_Data UActorFactory;
	struct UActorFactoryCoverLink_Data UActorFactoryCoverLink;
};

// 0x7C 
struct UActorFactoryDominantDirectionalLight_Data {
	// Last Offset: 0x7C
};

struct UActorFactoryDominantDirectionalLight {
	struct UObject_Data UObject;
	struct UActorFactory_Data UActorFactory;
	struct UActorFactoryDominantDirectionalLight_Data UActorFactoryDominantDirectionalLight;
};

// 0x7C 
struct UActorFactoryDominantDirectionalLightMovable_Data {
	// Last Offset: 0x7C
};

struct UActorFactoryDominantDirectionalLightMovable {
	struct UObject_Data UObject;
	struct UActorFactory_Data UActorFactory;
	struct UActorFactoryDominantDirectionalLightMovable_Data UActorFactoryDominantDirectionalLightMovable;
};

// 0x91 
struct UActorFactoryDynamicSM_Data {
	// Last Offset: 0x7C
	struct UStaticMesh* StaticMesh; // 0x7C (0x4)
	struct FVector DrawScale3D; // 0x80 (0xC)
	BOOL bNoEncroachCheck :1 ; // 0x8C (0x4)
	BOOL bNotifyRigidBodyCollision :1 ; // 0x8C (0x4)
	BOOL bBlockRigidBody :1 ; // 0x8C (0x4)
	BOOL bUseCompartment :1 ; // 0x8C (0x4)
	BOOL bCastDynamicShadow :1 ; // 0x8C (0x4)
	const unsigned long: 0;
	unsigned char CollisionType; // 0x90 (0x1) (Enum = ECollisionType)
};

struct UActorFactoryDynamicSM {
	struct UObject_Data UObject;
	struct UActorFactory_Data UActorFactory;
	struct UActorFactoryDynamicSM_Data UActorFactoryDynamicSM;
};

// 0x94 
struct UActorFactoryMover_Data {
	// Last Offset: 0x94
};

struct UActorFactoryMover {
	struct UObject_Data UObject;
	struct UActorFactory_Data UActorFactory;
	struct UActorFactoryDynamicSM_Data UActorFactoryDynamicSM;
	struct UActorFactoryMover_Data UActorFactoryMover;
};

// 0xB8 
struct UActorFactoryRigidBody_Data {
	// Last Offset: 0x94
	BOOL bStartAwake :1 ; // 0x94 (0x4)
	BOOL bDamageAppliesImpulse :1 ; // 0x94 (0x4)
	BOOL bLocalSpaceInitialVelocity :1 ; // 0x94 (0x4)
	BOOL bEnableStayUprightSpring :1 ; // 0x94 (0x4)
	const unsigned long: 0;
	struct FVector InitialVelocity; // 0x98 (0xC)
	struct UDistributionVector* AdditionalVelocity; // 0xA4 (0x4)
	struct UDistributionVector* InitialAngularVelocity; // 0xA8 (0x4)
	unsigned char RBChannel; // 0xAC (0x1) (Enum = ERBCollisionChannel)
	const unsigned char Unknown1[0x3]; // 0xAD (0x3) > LAST OFFSET
	float StayUprightTorqueFactor; // 0xB0 (0x4)
	float StayUprightMaxTorque; // 0xB4 (0x4)
};

struct UActorFactoryRigidBody {
	struct UObject_Data UObject;
	struct UActorFactory_Data UActorFactory;
	struct UActorFactoryDynamicSM_Data UActorFactoryDynamicSM;
	struct UActorFactoryRigidBody_Data UActorFactoryRigidBody;
};

// 0x80 
struct UActorFactoryEmitter_Data {
	// Last Offset: 0x7C
	struct UParticleSystem* ParticleSystem; // 0x7C (0x4)
};

struct UActorFactoryEmitter {
	struct UObject_Data UObject;
	struct UActorFactory_Data UActorFactory;
	struct UActorFactoryEmitter_Data UActorFactoryEmitter;
};

// 0x80 
struct UActorFactoryLensFlare_Data {
	// Last Offset: 0x7C
	struct ULensFlare* LensFlareObject; // 0x7C (0x4)
};

struct UActorFactoryLensFlare {
	struct UObject_Data UObject;
	struct UActorFactory_Data UActorFactory;
	struct UActorFactoryLensFlare_Data UActorFactoryLensFlare;
};

// 0x7C 
struct UActorFactoryLight_Data {
	// Last Offset: 0x7C
};

struct UActorFactoryLight {
	struct UObject_Data UObject;
	struct UActorFactory_Data UActorFactory;
	struct UActorFactoryLight_Data UActorFactoryLight;
};

// 0x7C 
struct UActorFactoryPathNode_Data {
	// Last Offset: 0x7C
};

struct UActorFactoryPathNode {
	struct UObject_Data UObject;
	struct UActorFactory_Data UActorFactory;
	struct UActorFactoryPathNode_Data UActorFactoryPathNode;
};

// 0xA0 
struct UActorFactoryPhysicsAsset_Data {
	// Last Offset: 0x7C
	struct UPhysicsAsset* PhysicsAsset; // 0x7C (0x4)
	struct USkeletalMesh* SkeletalMesh; // 0x80 (0x4)
	BOOL bStartAwake :1 ; // 0x84 (0x4)
	BOOL bDamageAppliesImpulse :1 ; // 0x84 (0x4)
	BOOL bNotifyRigidBodyCollision :1 ; // 0x84 (0x4)
	BOOL bUseCompartment :1 ; // 0x84 (0x4)
	BOOL bCastDynamicShadow :1 ; // 0x84 (0x4)
	const unsigned long: 0;
	struct FVector InitialVelocity; // 0x88 (0xC)
	struct FVector DrawScale3D; // 0x94 (0xC)
};

struct UActorFactoryPhysicsAsset {
	struct UObject_Data UObject;
	struct UActorFactory_Data UActorFactory;
	struct UActorFactoryPhysicsAsset_Data UActorFactoryPhysicsAsset;
};

// 0x7C 
struct UActorFactoryPlayerStart_Data {
	// Last Offset: 0x7C
};

struct UActorFactoryPlayerStart {
	struct UObject_Data UObject;
	struct UActorFactory_Data UActorFactory;
	struct UActorFactoryPlayerStart_Data UActorFactoryPlayerStart;
};

// 0x7C 
struct UActorFactoryPylon_Data {
	// Last Offset: 0x7C
};

struct UActorFactoryPylon {
	struct UObject_Data UObject;
	struct UActorFactory_Data UActorFactory;
	struct UActorFactoryPylon_Data UActorFactoryPylon;
};

// 0x8C 
struct UActorFactorySkeletalMesh_Data {
	// Last Offset: 0x7C
	struct USkeletalMesh* SkeletalMesh; // 0x7C (0x4)
	struct UAnimSet* AnimSet; // 0x80 (0x4)
	struct FName AnimSequenceName; // 0x84 (0x8)
};

struct UActorFactorySkeletalMesh {
	struct UObject_Data UObject;
	struct UActorFactory_Data UActorFactory;
	struct UActorFactorySkeletalMesh_Data UActorFactorySkeletalMesh;
};

// 0x8C 
struct UActorFactoryStaticMesh_Data {
	// Last Offset: 0x7C
	struct UStaticMesh* StaticMesh; // 0x7C (0x4)
	struct FVector DrawScale3D; // 0x80 (0xC)
};

struct UActorFactoryStaticMesh {
	struct UObject_Data UObject;
	struct UActorFactory_Data UActorFactory;
	struct UActorFactoryStaticMesh_Data UActorFactoryStaticMesh;
};

// 0x7C 
struct UActorFactoryTrigger_Data {
	// Last Offset: 0x7C
};

struct UActorFactoryTrigger {
	struct UObject_Data UObject;
	struct UActorFactory_Data UActorFactory;
	struct UActorFactoryTrigger_Data UActorFactoryTrigger;
};

// 0x80 
struct UActorFactoryVehicle_Data {
	// Last Offset: 0x7C
	struct UClass* VehicleClass; // 0x7C (0x4)
};

struct UActorFactoryVehicle {
	struct UObject_Data UObject;
	struct UActorFactory_Data UActorFactory;
	struct UActorFactoryVehicle_Data UActorFactoryVehicle;
};

// 0x3C 
struct UActorFactoryCustomPropertyEditorDelegate_Data {
	// Last Offset: 0x3C
};

struct UActorFactoryCustomPropertyEditorDelegate {
	struct UObject_Data UObject;
	struct UActorFactoryCustomPropertyEditorDelegate_Data UActorFactoryCustomPropertyEditorDelegate;
};

// 0x138 
struct UAkAudioDevice_Data {
	// Last Offset: 0x40
	const unsigned char Unknown1[0xF8]; // 0x40 (0xF8) MISSING END DATA
};

struct UAkAudioDevice {
	struct UObject_Data UObject;
	struct USubsystem_Data USubsystem;
	struct UAkAudioDevice_Data UAkAudioDevice;
};

// 0x3C 
struct UAkBaseSoundObject_Data {
	// Last Offset: 0x3C
};

struct UAkBaseSoundObject {
	struct UObject_Data UObject;
	struct UAkBaseSoundObject_Data UAkBaseSoundObject;
};

// 0xD8 
struct USoundCue_Data {
	// Last Offset: 0x3C
	struct FName SoundClass; // 0x3C (0x8)
	unsigned char SoundClassName; // 0x44 (0x1) (Enum = ESoundClassName)
	const unsigned char Unknown1[0x3]; // 0x45 (0x3) > LAST OFFSET
	struct USoundNode* FirstNode; // 0x48 (0x4)
	const unsigned char Unknown2[0x3C]; // 0x4C (0x3C) UNKNOWN PROPERTY
	float MaxAudibleDistance; // 0x88 (0x4)
	float VolumeMultiplier; // 0x8C (0x4)
	float PitchMultiplier; // 0x90 (0x4)
	float Duration; // 0x94 (0x4)
	struct FString DesignerComment; // 0x98 (0xC)
	struct UFaceFXAnimSet* FaceFXAnimSetRef; // 0xA4 (0x4)
	struct FString FaceFXGroupName; // 0xA8 (0xC)
	struct FString FaceFXAnimName; // 0xB4 (0xC)
	int MaxConcurrentPlayCount; // 0xC0 (0x4)
	int CurrentPlayCount; // 0xC4 (0x4)
	struct FName SoundGroup; // 0xC8 (0x8)
	int Priority; // 0xD0 (0x4)
	int SpatializationPercent; // 0xD4 (0x4)
};

struct USoundCue {
	struct UObject_Data UObject;
	struct UAkBaseSoundObject_Data UAkBaseSoundObject;
	struct USoundCue_Data USoundCue;
};

// 0x40 
struct UAkObject_Data {
	// Last Offset: 0x3C
	int ShortId; // 0x3C (0x4)
};

struct UAkObject {
	struct UObject_Data UObject;
	struct UAkObject_Data UAkObject;
};

// 0x48 
struct UAkBank_Data {
	// Last Offset: 0x40
	BOOL AutoLoad :1 ; // 0x40 (0x4)
	BOOL GenerateDefinition :1 ; // 0x40 (0x4)
	const unsigned long: 0;
	int NumAsyncLoaders; // 0x44 (0x4)
};

struct UAkBank {
	struct UObject_Data UObject;
	struct UAkObject_Data UAkObject;
	struct UAkBank_Data UAkBank;
};

// 0x54 
struct UAkDialogueEvent_Data {
	// Last Offset: 0x40
	struct UAkBank* RequiredBank; // 0x40 (0x4)
	struct TArray_FDialogueArgument Arguments; // 0x44 (0xC)
	struct UFaceFXAnimSet* FaceFXAnimSet; // 0x50 (0x4)
};

struct UAkDialogueEvent {
	struct UObject_Data UObject;
	struct UAkObject_Data UAkObject;
	struct UAkDialogueEvent_Data UAkDialogueEvent;
};

// 0x50 
struct UAkEffect_Data {
	// Last Offset: 0x40
	struct FString EffectName; // 0x40 (0xC)
	BOOL bCanBeEnvironmental :1 ; // 0x4C (0x4)
	const unsigned long: 0;
};

struct UAkEffect {
	struct UObject_Data UObject;
	struct UAkObject_Data UAkObject;
	struct UAkEffect_Data UAkEffect;
};

// 0x54 
struct UAkEvent_Data {
	// Last Offset: 0x40
	struct UAkBank* RequiredBank; // 0x40 (0x4)
	struct UFaceFXAnimSet* FaceFXAnimSet; // 0x44 (0x4)
	float EnvironmentalEffectUpdateFrequency; // 0x48 (0x4)
	BOOL bCanBeOccluded :1 ; // 0x4C (0x4)
	BOOL bForceImmediateEnvOccRecalc :1 ; // 0x4C (0x4)
	BOOL bVoice :1 ; // 0x4C (0x4)
	BOOL bInCookedMap :1 ; // 0x4C (0x4)
	BOOL bInOnDemandPackage :1 ; // 0x4C (0x4)
	BOOL bIsSimpleEvent :1 ; // 0x4C (0x4)
	BOOL bReliable :1 ; // 0x4C (0x4)
	BOOL bWantDistanceRTPC :1 ; // 0x4C (0x4)
	BOOL bWantSpeedRTPC :1 ; // 0x4C (0x4)
	BOOL bWantApproachSpeedRTPC :1 ; // 0x4C (0x4)
	const unsigned long: 0;
	float MaxAttenuationRadius; // 0x50 (0x4)
};

struct UAkEvent {
	struct UObject_Data UObject;
	struct UAkObject_Data UAkObject;
	struct UAkEvent_Data UAkEvent;
};

// 0x48 
struct UAkRtpc_Data {
	// Last Offset: 0x40
	float MinRange; // 0x40 (0x4)
	float MaxRange; // 0x44 (0x4)
};

struct UAkRtpc {
	struct UObject_Data UObject;
	struct UAkObject_Data UAkObject;
	struct UAkRtpc_Data UAkRtpc;
};

// 0x48 
struct UAkState_Data {
	// Last Offset: 0x40
	struct UAkStateGroup* StateGroup; // 0x40 (0x4)
	BOOL bIsGroupNone :1 ; // 0x44 (0x4)
	const unsigned long: 0;
};

struct UAkState {
	struct UObject_Data UObject;
	struct UAkObject_Data UAkObject;
	struct UAkState_Data UAkState;
};

// 0x40 
struct UAkStateGroup_Data {
	// Last Offset: 0x40
};

struct UAkStateGroup {
	struct UObject_Data UObject;
	struct UAkObject_Data UAkObject;
	struct UAkStateGroup_Data UAkStateGroup;
};

// 0x44 
struct UAkSwitch_Data {
	// Last Offset: 0x40
	struct UAkSwitchGroup* SwitchGroup; // 0x40 (0x4)
};

struct UAkSwitch {
	struct UObject_Data UObject;
	struct UAkObject_Data UAkObject;
	struct UAkSwitch_Data UAkSwitch;
};

// 0x40 
struct UAkSwitchGroup_Data {
	// Last Offset: 0x40
};

struct UAkSwitchGroup {
	struct UObject_Data UObject;
	struct UAkObject_Data UAkObject;
	struct UAkSwitchGroup_Data UAkSwitchGroup;
};

// 0x40 
struct UAkTrigger_Data {
	// Last Offset: 0x40
};

struct UAkTrigger {
	struct UObject_Data UObject;
	struct UAkObject_Data UAkObject;
	struct UAkTrigger_Data UAkTrigger;
};

// 0x60 
struct UBookMark_Data {
	// Last Offset: 0x3C
	struct FVector Location; // 0x3C (0xC)
	struct FRotator Rotation; // 0x48 (0xC)
	struct TArray_FString HiddenLevels; // 0x54 (0xC)
};

struct UBookMark {
	struct UObject_Data UObject;
	struct UBookMark_Data UBookMark;
};

// 0x48 
struct UBookMark2D_Data {
	// Last Offset: 0x3C
	float Zoom2D; // 0x3C (0x4)
	struct FIntPoint Location; // 0x40 (0x8)
};

struct UBookMark2D {
	struct UObject_Data UObject;
	struct UBookMark2D_Data UBookMark2D;
};

// 0x54 
struct UKismetBookMark_Data {
	// Last Offset: 0x48
	struct FString BookMarkSequencePathName; // 0x48 (0xC)
};

struct UKismetBookMark {
	struct UObject_Data UObject;
	struct UBookMark2D_Data UBookMark2D;
	struct UKismetBookMark_Data UKismetBookMark;
};

// 0x98  (Alignment = 16)
struct UCanvas_Data {
	// Last Offset: 0x3C
	struct UFont* Font; // 0x3C (0x4)
	float OrgX; // 0x40 (0x4)
	float OrgY; // 0x44 (0x4)
	float ClipX; // 0x48 (0x4)
	float ClipY; // 0x4C (0x4)
	float CurX; // 0x50 (0x4)
	float CurY; // 0x54 (0x4)
	float CurZ; // 0x58 (0x4)
	float CurYL; // 0x5C (0x4)
	struct FColor DrawColor; // 0x60 (0x4)
	BOOL bCenter :1 ; // 0x64 (0x4)
	BOOL bNoSmooth :1 ; // 0x64 (0x4)
	const unsigned long: 0;
	int SizeX; // 0x68 (0x4)
	int SizeY; // 0x6C (0x4)
	struct FPointer Canvas; // 0x70 (0x4)
	struct FPointer SceneView; // 0x74 (0x4)
	const unsigned char Unknown1[0x8]; // 0x78 (0x8) > LAST OFFSET
	struct FPlane ColorModulate; // 0x80 (0x10)
	struct UTexture2D* DefaultTexture; // 0x90 (0x4)
	struct FColor BGColor; // 0x94 (0x4)
};

struct UCanvas {
	struct UObject_Data UObject;
	struct UCanvas_Data UCanvas;
};

// 0x68 
struct UChannel_Data {
	// Last Offset: 0x3C
	const unsigned char Unknown1[0x2C]; // 0x3C (0x2C) MISSING END DATA
};

struct UChannel {
	struct UObject_Data UObject;
	struct UChannel_Data UChannel;
};

// 0xC4 
struct UActorChannel_Data {
	// Last Offset: 0x68
	const unsigned char Unknown1[0x5C]; // 0x68 (0x5C) MISSING END DATA
};

struct UActorChannel {
	struct UObject_Data UObject;
	struct UChannel_Data UChannel;
	struct UActorChannel_Data UActorChannel;
};

// 0x78 
struct UControlChannel_Data {
	// Last Offset: 0x68
	const unsigned char Unknown1[0x10]; // 0x68 (0x10) MISSING END DATA
};

struct UControlChannel {
	struct UObject_Data UObject;
	struct UChannel_Data UChannel;
	struct UControlChannel_Data UControlChannel;
};

// 0x278 
struct UFileChannel_Data {
	// Last Offset: 0x68
	const unsigned char Unknown1[0x210]; // 0x68 (0x210) MISSING END DATA
};

struct UFileChannel {
	struct UObject_Data UObject;
	struct UChannel_Data UChannel;
	struct UFileChannel_Data UFileChannel;
};

// 0x74 
struct UVoiceChannel_Data {
	// Last Offset: 0x68
	const unsigned char Unknown1[0xC]; // 0x68 (0xC) MISSING END DATA
};

struct UVoiceChannel {
	struct UObject_Data UObject;
	struct UChannel_Data UChannel;
	struct UVoiceChannel_Data UVoiceChannel;
};

// 0x66C 
struct AController_Data {
	// Last Offset: 0x188
	struct FPointer VfTable_IIResourcePoolProvider; // 0x188 (0x4)
	struct FPointer VfTable_IInterface_NavigationHandle; // 0x18C (0x4)
	struct APawn* Pawn; // 0x190 (0x4)
	struct APlayerReplicationInfo* PlayerReplicationInfo; // 0x194 (0x4)
	int PlayerNum; // 0x198 (0x4)
	struct AController* NextController; // 0x19C (0x4)
	BOOL bIsPlayer :1 ; // 0x1A0 (0x4)
	BOOL bIsHumanPlayer :1 ; // 0x1A0 (0x4)
	BOOL bShowControllerInfo :1 ; // 0x1A0 (0x4)
	BOOL bGodMode :1 ; // 0x1A0 (0x4)
	BOOL bNonCheatGodMode :1 ; // 0x1A0 (0x4)
	BOOL bDontTargetMode :1 ; // 0x1A0 (0x4)
	BOOL bSoaking :1 ; // 0x1A0 (0x4)
	BOOL bSlowerZAcquire :1 ; // 0x1A0 (0x4)
	BOOL bNotifyPostLanded :1 ; // 0x1A0 (0x4)
	BOOL bNotifyApex :1 ; // 0x1A0 (0x4)
	BOOL bOverrideSearchStart :1 ; // 0x1A0 (0x4)
	BOOL bAdvancedTactics :1 ; // 0x1A0 (0x4)
	BOOL bCanDoSpecial :1 ; // 0x1A0 (0x4)
	BOOL bAdjusting :1 ; // 0x1A0 (0x4)
	BOOL bPreparingMove :1 ; // 0x1A0 (0x4)
	BOOL bForceStrafe :1 ; // 0x1A0 (0x4)
	BOOL bPauseNavigationUpdate :1 ; // 0x1A0 (0x4)
	BOOL bLOSflag :1 ; // 0x1A0 (0x4)
	BOOL bSkipExtraLOSChecks :1 ; // 0x1A0 (0x4)
	BOOL bNotifyFallingHitWall :1 ; // 0x1A0 (0x4)
	BOOL bEarlyOutOfSighTestsForSameType :1 ; // 0x1A0 (0x4)
	BOOL bPreciseDestination :1 ; // 0x1A0 (0x4)
	BOOL bSeeFriendly :1 ; // 0x1A0 (0x4)
	BOOL bUsingPathLanes :1 ; // 0x1A0 (0x4)
	const unsigned long: 0;
	struct FRotator PrevRotation; // 0x1A4 (0xC)
	unsigned char bFire; // 0x1B0 (0x1)
	unsigned char bAltFire; // 0x1B1 (0x1)
	const unsigned char Unknown1[0x2]; // 0x1B2 (0x2) > LAST OFFSET
	float MinHitWall; // 0x1B4 (0x4)
	struct UClass* NavigationHandleClass; // 0x1B8 (0x4)
	struct UNavigationHandle* NavigationHandle; // 0x1BC (0x4)
	struct FVector OverrideSearchStart; // 0x1C0 (0xC)
	float MoveTimer; // 0x1CC (0x4)
	struct AActor* MoveTarget; // 0x1D0 (0x4)
	struct FBasedPosition DestinationPosition; // 0x1D4 (0x34)
	struct FBasedPosition FocalPosition; // 0x208 (0x34)
	struct AActor* Focus; // 0x23C (0x4)
	struct AActor* GoalList[4]; // 0x240 (0x10)
	struct FBasedPosition AdjustPosition; // 0x250 (0x34)
	struct AActor* StartSpot; // 0x284 (0x4)
	struct TArray_ANavigationPointPtr RouteCache; // 0x288 (0xC)
	struct UReachSpec* CurrentPath; // 0x294 (0x4)
	struct UReachSpec* NextRoutePath; // 0x298 (0x4)
	struct FVector CurrentPathDir; // 0x29C (0xC)
	struct AActor* RouteGoal; // 0x2A8 (0x4)
	float RouteDist; // 0x2AC (0x4)
	float LastRouteFind; // 0x2B0 (0x4)
	struct AInterpActor* PendingMover; // 0x2B4 (0x4)
	struct AActor* FailedMoveTarget; // 0x2B8 (0x4)
	int MoveFailureCount; // 0x2BC (0x4)
	float GroundPitchTime; // 0x2C0 (0x4)
	struct FVector ViewX; // 0x2C4 (0xC)
	struct FVector ViewY; // 0x2D0 (0xC)
	struct FVector ViewZ; // 0x2DC (0xC)
	struct APawn* ShotTarget; // 0x2E8 (0x4)
	struct AActor* LastFailedReach; // 0x2EC (0x4)
	float FailedReachTime; // 0x2F0 (0x4)
	struct FVector FailedReachLocation; // 0x2F4 (0xC)
	float SightCounter; // 0x300 (0x4)
	float SightCounterInterval; // 0x304 (0x4)
	float InUseNodeCostMultiplier; // 0x308 (0x4)
	int HighJumpNodeCostModifier; // 0x30C (0x4)
	float MaxMoveTowardPawnTargetTime; // 0x310 (0x4)
	struct APawn* Enemy; // 0x314 (0x4)
	struct TArray_FVisiblePortalInfo VisiblePortals; // 0x318 (0xC)
	float LaneOffset; // 0x324 (0x4)
	struct FRotator OldBasedRotation; // 0x328 (0xC)
	struct FVector NavMeshPath_SearchExtent_Modifier; // 0x334 (0xC)
	struct AResourcePoolManager* ResourcePoolManager; // 0x340 (0x4)
	struct FResourcePoolReference AccuracyPool; // 0x344 (0xC)
	struct FResourcePoolReference OffHandAccuracyPool; // 0x350 (0xC)
	struct UCharacterClassDefinition* CharacterClass; // 0x35C (0x4)
	float InstigatedBulletDamageModifier; // 0x360 (0x4)
	float InstigatedBulletDamageModifierBaseValue; // 0x364 (0x4)
	struct TArray_UAttributeModifierPtr InstigatedBulletDamageModifierModifierStack; // 0x368 (0xC)
	float InstigatedMeleeDamageModifier; // 0x374 (0x4)
	float InstigatedMeleeDamageModifierBaseValue; // 0x378 (0x4)
	struct TArray_UAttributeModifierPtr InstigatedMeleeDamageModifierModifierStack; // 0x37C (0xC)
	float InstigatedGrenadeDamageModifier; // 0x388 (0x4)
	float InstigatedGrenadeDamageModifierBaseValue; // 0x38C (0x4)
	struct TArray_UAttributeModifierPtr InstigatedGrenadeDamageModifierModifierStack; // 0x390 (0xC)
	float InstigatedRocketDamageModifier; // 0x39C (0x4)
	float InstigatedRocketDamageModifierBaseValue; // 0x3A0 (0x4)
	struct TArray_UAttributeModifierPtr InstigatedRocketDamageModifierModifierStack; // 0x3A4 (0xC)
	float InstigatedStatusEffectDamageModifier; // 0x3B0 (0x4)
	float InstigatedStatusEffectDamageModifierBaseValue; // 0x3B4 (0x4)
	struct TArray_UAttributeModifierPtr InstigatedStatusEffectDamageModifierModifierStack; // 0x3B8 (0xC)
	float InstigatedSkillDamageModifier; // 0x3C4 (0x4)
	float InstigatedSkillDamageModifierBaseValue; // 0x3C8 (0x4)
	struct TArray_UAttributeModifierPtr InstigatedSkillDamageModifierModifierStack; // 0x3CC (0xC)
	float InstigatedStatusEffectStatusChanceModifier; // 0x3D8 (0x4)
	float InstigatedStatusEffectStatusChanceModifierBaseValue; // 0x3DC (0x4)
	struct TArray_UAttributeModifierPtr InstigatedStatusEffectStatusChanceModifierModifierStack; // 0x3E0 (0xC)
	float InstigatedIncendiaryStatusChanceModifier; // 0x3EC (0x4)
	float InstigatedIncendiaryStatusChanceModifierBaseValue; // 0x3F0 (0x4)
	struct TArray_UAttributeModifierPtr InstigatedIncendiaryStatusChanceModifierModifierStack; // 0x3F4 (0xC)
	float InstigatedShockStatusChanceModifier; // 0x400 (0x4)
	float InstigatedShockStatusChanceModifierBaseValue; // 0x404 (0x4)
	struct TArray_UAttributeModifierPtr InstigatedShockStatusChanceModifierModifierStack; // 0x408 (0xC)
	float InstigatedCorrosiveStatusChanceModifier; // 0x414 (0x4)
	float InstigatedCorrosiveStatusChanceModifierBaseValue; // 0x418 (0x4)
	struct TArray_UAttributeModifierPtr InstigatedCorrosiveStatusChanceModifierModifierStack; // 0x41C (0xC)
	float InstigatedAmpStatusChanceModifier; // 0x428 (0x4)
	float InstigatedAmpStatusChanceModifierBaseValue; // 0x42C (0x4)
	struct TArray_UAttributeModifierPtr InstigatedAmpStatusChanceModifierModifierStack; // 0x430 (0xC)
	float InstigatedStatusEffectStatusDamageModifier; // 0x43C (0x4)
	float InstigatedStatusEffectStatusDamageModifierBaseValue; // 0x440 (0x4)
	struct TArray_UAttributeModifierPtr InstigatedStatusEffectStatusDamageModifierModifierStack; // 0x444 (0xC)
	float InstigatedIncendiaryStatusDamageModifier; // 0x450 (0x4)
	float InstigatedIncendiaryStatusDamageModifierBaseValue; // 0x454 (0x4)
	struct TArray_UAttributeModifierPtr InstigatedIncendiaryStatusDamageModifierModifierStack; // 0x458 (0xC)
	float InstigatedShockStatusDamageModifier; // 0x464 (0x4)
	float InstigatedShockStatusDamageModifierBaseValue; // 0x468 (0x4)
	struct TArray_UAttributeModifierPtr InstigatedShockStatusDamageModifierModifierStack; // 0x46C (0xC)
	float InstigatedCorrosiveStatusDamageModifier; // 0x478 (0x4)
	float InstigatedCorrosiveStatusDamageModifierBaseValue; // 0x47C (0x4)
	struct TArray_UAttributeModifierPtr InstigatedCorrosiveStatusDamageModifierModifierStack; // 0x480 (0xC)
	float InstigatedAmpStatusDamageModifier; // 0x48C (0x4)
	float InstigatedAmpStatusDamageModifierBaseValue; // 0x490 (0x4)
	struct TArray_UAttributeModifierPtr InstigatedAmpStatusDamageModifierModifierStack; // 0x494 (0xC)
	float ReceivedBulletDamageModifier; // 0x4A0 (0x4)
	float ReceivedBulletDamageModifierBaseValue; // 0x4A4 (0x4)
	struct TArray_UAttributeModifierPtr ReceivedBulletDamageModifierModifierStack; // 0x4A8 (0xC)
	float ReceivedAmplifyDamageModifier; // 0x4B4 (0x4)
	float ReceivedAmplifyDamageModifierBaseValue; // 0x4B8 (0x4)
	struct TArray_UAttributeModifierPtr ReceivedAmplifyDamageModifierModifierStack; // 0x4BC (0xC)
	float ReceivedMeleeDamageModifier; // 0x4C8 (0x4)
	float ReceivedMeleeDamageModifierBaseValue; // 0x4CC (0x4)
	struct TArray_UAttributeModifierPtr ReceivedMeleeDamageModifierModifierStack; // 0x4D0 (0xC)
	float ReceivedGrenadeDamageModifier; // 0x4DC (0x4)
	float ReceivedGrenadeDamageModifierBaseValue; // 0x4E0 (0x4)
	struct TArray_UAttributeModifierPtr ReceivedGrenadeDamageModifierModifierStack; // 0x4E4 (0xC)
	float ReceivedRocketDamageModifier; // 0x4F0 (0x4)
	float ReceivedRocketDamageModifierBaseValue; // 0x4F4 (0x4)
	struct TArray_UAttributeModifierPtr ReceivedRocketDamageModifierModifierStack; // 0x4F8 (0xC)
	float ReceivedStatusEffectDamageModifier; // 0x504 (0x4)
	float ReceivedStatusEffectDamageModifierBaseValue; // 0x508 (0x4)
	struct TArray_UAttributeModifierPtr ReceivedStatusEffectDamageModifierModifierStack; // 0x50C (0xC)
	float ReceivedSkillDamageModifier; // 0x518 (0x4)
	float ReceivedSkillDamageModifierBaseValue; // 0x51C (0x4)
	struct TArray_UAttributeModifierPtr ReceivedSkillDamageModifierModifierStack; // 0x520 (0xC)
	float InstigatedIncindiaryDamageModifier; // 0x52C (0x4)
	float InstigatedIncindiaryDamageModifierBaseValue; // 0x530 (0x4)
	struct TArray_UAttributeModifierPtr InstigatedIncindiaryDamageModifierModifierStack; // 0x534 (0xC)
	float InstigatedShockDamageModifier; // 0x540 (0x4)
	float InstigatedShockDamageModifierBaseValue; // 0x544 (0x4)
	struct TArray_UAttributeModifierPtr InstigatedShockDamageModifierModifierStack; // 0x548 (0xC)
	float InstigatedExplosiveDamageModifier; // 0x554 (0x4)
	float InstigatedExplosiveDamageModifierBaseValue; // 0x558 (0x4)
	struct TArray_UAttributeModifierPtr InstigatedExplosiveDamageModifierModifierStack; // 0x55C (0xC)
	float InstigatedCorrosiveDamageModifier; // 0x568 (0x4)
	float InstigatedCorrosiveDamageModifierBaseValue; // 0x56C (0x4)
	struct TArray_UAttributeModifierPtr InstigatedCorrosiveDamageModifierModifierStack; // 0x570 (0xC)
	float InstigatedImpactDamageModifier; // 0x57C (0x4)
	float InstigatedImpactDamageModifierBaseValue; // 0x580 (0x4)
	struct TArray_UAttributeModifierPtr InstigatedImpactDamageModifierModifierStack; // 0x584 (0xC)
	float InstigatedAmpDamageModifier; // 0x590 (0x4)
	float InstigatedAmpDamageModifierBaseValue; // 0x594 (0x4)
	struct TArray_UAttributeModifierPtr InstigatedAmpDamageModifierModifierStack; // 0x598 (0xC)
	int InstigatedBulletDamageAmmoTheftAmount; // 0x5A4 (0x4)
	int InstigatedBulletDamageAmmoTheftAmountBaseValue; // 0x5A8 (0x4)
	struct TArray_UAttributeModifierPtr InstigatedBulletDamageAmmoTheftAmountModifierStack; // 0x5AC (0xC)
	int InstigatedMeleeDamageAmmoTheftAmount; // 0x5B8 (0x4)
	int InstigatedMeleeDamageAmmoTheftAmountBaseValue; // 0x5BC (0x4)
	struct TArray_UAttributeModifierPtr InstigatedMeleeDamageAmmoTheftAmountModifierStack; // 0x5C0 (0xC)
	int InstigatedGrenadeDamageAmmoTheftAmount; // 0x5CC (0x4)
	int InstigatedGrenadeDamageAmmoTheftAmountBaseValue; // 0x5D0 (0x4)
	struct TArray_UAttributeModifierPtr InstigatedGrenadeDamageAmmoTheftAmountModifierStack; // 0x5D4 (0xC)
	int InstigatedRocketDamageAmmoTheftAmount; // 0x5E0 (0x4)
	int InstigatedRocketDamageAmmoTheftAmountBaseValue; // 0x5E4 (0x4)
	struct TArray_UAttributeModifierPtr InstigatedRocketDamageAmmoTheftAmountModifierStack; // 0x5E8 (0xC)
	int InstigatedStatusEffectDamageAmmoTheftAmount; // 0x5F4 (0x4)
	int InstigatedStatusEffectDamageAmmoTheftAmountBaseValue; // 0x5F8 (0x4)
	struct TArray_UAttributeModifierPtr InstigatedStatusEffectDamageAmmoTheftAmountModifierStack; // 0x5FC (0xC)
	int ReceivedBulletDamageAmmoTheftAmount; // 0x608 (0x4)
	int ReceivedBulletDamageAmmoTheftAmountBaseValue; // 0x60C (0x4)
	struct TArray_UAttributeModifierPtr ReceivedBulletDamageAmmoTheftAmountModifierStack; // 0x610 (0xC)
	int ReceivedMeleeDamageAmmoTheftAmount; // 0x61C (0x4)
	int ReceivedMeleeDamageAmmoTheftAmountBaseValue; // 0x620 (0x4)
	struct TArray_UAttributeModifierPtr ReceivedMeleeDamageAmmoTheftAmountModifierStack; // 0x624 (0xC)
	int ReceivedGrenadeDamageAmmoTheftAmount; // 0x630 (0x4)
	int ReceivedGrenadeDamageAmmoTheftAmountBaseValue; // 0x634 (0x4)
	struct TArray_UAttributeModifierPtr ReceivedGrenadeDamageAmmoTheftAmountModifierStack; // 0x638 (0xC)
	int ReceivedRocketDamageAmmoTheftAmount; // 0x644 (0x4)
	int ReceivedRocketDamageAmmoTheftAmountBaseValue; // 0x648 (0x4)
	struct TArray_UAttributeModifierPtr ReceivedRocketDamageAmmoTheftAmountModifierStack; // 0x64C (0xC)
	int ReceivedStatusEffectDamageAmmoTheftAmount; // 0x658 (0x4)
	int ReceivedStatusEffectDamageAmmoTheftAmountBaseValue; // 0x65C (0x4)
	struct TArray_UAttributeModifierPtr ReceivedStatusEffectDamageAmmoTheftAmountModifierStack; // 0x660 (0xC)
};

struct AController {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AController_Data AController;
};

// 0x8F0 
struct APlayerController_Data {
	// Last Offset: 0x66C
	struct UPlayer* Player; // 0x66C (0x4)
	struct ACamera* PlayerCamera; // 0x670 (0x4)
	struct UClass* CameraClass; // 0x674 (0x4)
	BOOL bFrozen :1 ; // 0x678 (0x4)
	BOOL bPressedJump :1 ; // 0x678 (0x4)
	BOOL bDoubleJump :1 ; // 0x678 (0x4)
	BOOL bUpdatePosition :1 ; // 0x678 (0x4)
	BOOL bUpdating :1 ; // 0x678 (0x4)
	BOOL bNeverSwitchOnPickup :1 ; // 0x678 (0x4)
	BOOL bCheatFlying :1 ; // 0x678 (0x4)
	BOOL bCameraPositionLocked :1 ; // 0x678 (0x4)
	BOOL bShortConnectTimeOut :1 ; // 0x678 (0x4)
	BOOL bPendingDestroy :1 ; // 0x678 (0x4)
	BOOL bWasSpeedHack :1 ; // 0x678 (0x4)
	BOOL bWasSaturated :1 ; // 0x678 (0x4)
	BOOL bAimingHelp :1 ; // 0x678 (0x4)
	BOOL bCameraCut :1 ; // 0x678 (0x4)
	BOOL bClientSimulatingViewTarget :1 ; // 0x678 (0x4)
	BOOL bForegroundFOV :1 ; // 0x678 (0x4)
	BOOL bHasVoiceHandshakeCompleted :1 ; // 0x678 (0x4)
	BOOL bCinematicMode :1 ; // 0x678 (0x4)
	BOOL bCinematicSplitScreen :1 ; // 0x678 (0x4)
	BOOL bKismetEnabledCinematicMode :1 ; // 0x678 (0x4)
	BOOL bInteractiveMode :1 ; // 0x678 (0x4)
	BOOL bCinemaDisableInputMove :1 ; // 0x678 (0x4)
	BOOL bCinemaDisableInputLook :1 ; // 0x678 (0x4)
	BOOL bCinemaDisableInputButton :1 ; // 0x678 (0x4)
	BOOL bCinematicModeHidePlayer :1 ; // 0x678 (0x4)
	BOOL bIgnoreNetworkMessages :1 ; // 0x678 (0x4)
	BOOL bReplicateAllPawns :1 ; // 0x678 (0x4)
	BOOL bIsUsingStreamingVolumes :1 ; // 0x678 (0x4)
	BOOL bIsExternalUIOpen :1 ; // 0x678 (0x4)
	BOOL bIsControllerConnected :1 ; // 0x678 (0x4)
	BOOL bCheckSoundOcclusion :1 ; // 0x678 (0x4)
	BOOL bDebugCameraAnims :1 ; // 0x678 (0x4)
	BOOL bFreeCamera :1 ; // 0x67C (0x4)
	BOOL bBlockCameraAnimsFromOverridingPostProcess :1 ; // 0x67C (0x4)
	BOOL bLogHearSoundOverflow :1 ; // 0x67C (0x4)
	BOOL bCheckRelevancyThroughPortals :1 ; // 0x67C (0x4)
	BOOL bDebugClientAdjustPosition :1 ; // 0x67C (0x4)
	BOOL bIsInHolding :1 ; // 0x67C (0x4)
	BOOL bOverrideOnlineProfileName :1 ; // 0x67C (0x4)
	BOOL bEnableAnalogMovement :1 ; // 0x67C (0x4)
	BOOL bStatusMenuOpen :1 ; // 0x67C (0x4)
	BOOL bUsingVendingMachine :1 ; // 0x67C (0x4)
	BOOL bUsingVehicleSpawnStation :1 ; // 0x67C (0x4)
	BOOL bUsingFastTravelStation :1 ; // 0x67C (0x4)
	BOOL bWantsCensoredContent :1 ; // 0x67C (0x4)
	const unsigned long: 0;
	float MaxResponseTime; // 0x680 (0x4)
	float WaitDelay; // 0x684 (0x4)
	struct APawn* AcknowledgedPawn; // 0x688 (0x4)
	unsigned char DoubleClickDir; // 0x68C (0x1) (Enum = EDoubleClickDir)
	unsigned char LastAckedAnalogPct; // 0x68D (0x1)
	unsigned char bIgnoreMoveInput; // 0x68E (0x1)
	unsigned char bIgnoreLookInput; // 0x68F (0x1)
	unsigned char bIgnoreButtonInput; // 0x690 (0x1)
	unsigned char bRun; // 0x691 (0x1)
	unsigned char bDuck; // 0x692 (0x1)
	unsigned char NetPlayerIndex; // 0x693 (0x1)
	struct AActor* ViewTarget; // 0x694 (0x4)
	struct APlayerReplicationInfo* RealViewTarget; // 0x698 (0x4)
	struct UInterpTrackInstDirector* ControllingDirTrackInst; // 0x69C (0x4)
	float FOVAngle; // 0x6A0 (0x4)
	float DesiredFOV; // 0x6A4 (0x4)
	float DesiredFOVBaseValue; // 0x6A8 (0x4)
	struct TArray_UAttributeModifierPtr DesiredFOVModifierStack; // 0x6AC (0xC)
	float DefaultFOV; // 0x6B8 (0x4)
	float LODDistanceFactor; // 0x6BC (0x4)
	float ForegroundFOV; // 0x6C0 (0x4)
	struct FRotator TargetViewRotation; // 0x6C4 (0xC)
	float TargetEyeHeight; // 0x6D0 (0x4)
	struct FRotator BlendedTargetViewRotation; // 0x6D4 (0xC)
	struct AHUD* myHUD; // 0x6E0 (0x4)
	struct UClass* SavedMoveClass; // 0x6E4 (0x4)
	struct USavedMove* SavedMoves; // 0x6E8 (0x4)
	struct USavedMove* FreeMoves; // 0x6EC (0x4)
	struct USavedMove* PendingMove; // 0x6F0 (0x4)
	struct FVector LastAckedAccel; // 0x6F4 (0xC)
	float CurrentTimeStamp; // 0x700 (0x4)
	float LastUpdateTime; // 0x704 (0x4)
	float ServerTimeStamp; // 0x708 (0x4)
	float TimeMargin; // 0x70C (0x4)
	float ClientUpdateTime; // 0x710 (0x4)
	float MaxTimeMargin; // 0x714 (0x4)
	float LastActiveTime; // 0x718 (0x4)
	int ClientCap; // 0x71C (0x4)
	float DynamicPingThreshold; // 0x720 (0x4)
	float LastPingUpdate; // 0x724 (0x4)
	float LastSpeedHackLog; // 0x728 (0x4)
	struct FClientAdjustment PendingAdjustment; // 0x72C (0x34)
	int GroundPitch; // 0x760 (0x4)
	struct UCheatManager* CheatManager; // 0x764 (0x4)
	struct UClass* CheatClass; // 0x768 (0x4)
	struct UPlayerInput* PlayerInput; // 0x76C (0x4)
	struct UClass* InputClass; // 0x770 (0x4)
	struct FVector FailedPathStart; // 0x774 (0xC)
	struct UCylinderComponent* CylinderComponent; // 0x780 (0x4)
	struct FString ForceFeedbackManagerClassName; // 0x784 (0xC)
	struct UForceFeedbackManager* ForceFeedbackManager; // 0x790 (0x4)
	struct UForceFeedbackWaveform* CurrentWaveform; // 0x794 (0x4)
	struct TArray_UInteractionPtr Interactions; // 0x798 (0xC)
	struct TArray_FUniqueNetId VoiceMuteList; // 0x7A4 (0xC)
	struct TArray_FUniqueNetId GameplayVoiceMuteList; // 0x7B0 (0xC)
	struct TArray_FUniqueNetId VoicePacketFilter; // 0x7BC (0xC)
	struct TArray_FConnectedPeerInfo ConnectedPeers; // 0x7C8 (0xC)
	struct TArray_FUniqueNetId BestNextHostPeers; // 0x7D4 (0xC)
	struct UOnlineGameSearch* MigratedSearchToJoin; // 0x7E0 (0x4)
	struct UOnlineSubsystem* OnlineSub; // 0x7E4 (0x4)
	struct FScriptInterface VoiceInterface; // 0x7E8 (0x8)
	struct UUIDataStore_OnlinePlayerData* OnlinePlayerData; // 0x7F0 (0x4)
	struct UUIDataStore_StringAliasMap* StringAliasMap; // 0x7F4 (0x4)
	float InteractDistance; // 0x7F8 (0x4)
	struct FName DelayedJoinSessionName; // 0x7FC (0x8)
	struct FString LastPresenceStatusUpdateString; // 0x804 (0xC)
	struct FString LastLocationStatusUpdateString; // 0x810 (0xC)
	struct TArray_FInputMatchRequest InputRequests; // 0x81C (0xC)
	float LastBroadcastTime; // 0x828 (0x4)
	struct FString LastBroadcastString[4]; // 0x82C (0x30)
	struct TArray_FName PendingMapChangeLevelNames; // 0x85C (0xC)
	struct ACoverReplicator* MyCoverReplicator; // 0x868 (0x4)
	struct TArray_FDebugTextInfo DebugTextList; // 0x86C (0xC)
	float SpectatorCameraSpeed; // 0x878 (0x4)
	struct UNetConnection* PendingSwapConnection; // 0x87C (0x4)
	float MinRespawnDelay; // 0x880 (0x4)
	int MaxConcurrentHearSounds; // 0x884 (0x4)
	struct TArray_UAudioComponentPtr HearSoundActiveComponents; // 0x888 (0xC)
	struct TArray_UAudioComponentPtr HearSoundPoolComponents; // 0x894 (0xC)
	float LastSpectatorStateSynchTime; // 0x8A0 (0x4)
	struct FVector HoldingDest; // 0x8A4 (0xC)
	struct FRotator HoldingRotation; // 0x8B0 (0xC)
	struct AActor* HoldingDestActor; // 0x8BC (0x4)
	struct TArray_FName LoadingMovieLoadedLevelNames; // 0x8C0 (0xC)
	struct FScriptDelegate __OnMissingPeersUnregistered__Delegate; // 0x8CC (0xC)
	struct FScriptDelegate __CanUnpause__Delegate; // 0x8D8 (0xC)
	struct FScriptDelegate __InputMatchDelegate__Delegate; // 0x8E4 (0xC)
};

struct APlayerController {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AController_Data AController;
	struct APlayerController_Data APlayerController;
};

// 0x5C 
struct UCheatManager_Data {
	// Last Offset: 0x3C
	struct ADebugCameraController* DebugCameraControllerRef; // 0x3C (0x4)
	struct UClass* DebugCameraControllerClass; // 0x40 (0x4)
	struct FString ViewingFrom; // 0x44 (0xC)
	struct FString OwnCamera; // 0x50 (0xC)
};

struct UCheatManager {
	struct UObject_Data UObject;
	struct UCheatManager_Data UCheatManager;
};

// 0x50 
struct UClient_Data {
	// Last Offset: 0x3C
	const unsigned char Unknown1[0x4]; // 0x3C (0x4) > LAST OFFSET
	float MinDesiredFrameRate; // 0x40 (0x4)
	float DisplayGamma; // 0x44 (0x4)
	float InitialButtonRepeatDelay; // 0x48 (0x4)
	float ButtonRepeatDelay; // 0x4C (0x4)
};

struct UClient {
	struct UObject_Data UObject;
	struct UClient_Data UClient;
};

// 0x54 
struct UClipPadEntry_Data {
	// Last Offset: 0x3C
	struct FString Title; // 0x3C (0xC)
	struct FString Text; // 0x48 (0xC)
};

struct UClipPadEntry {
	struct UObject_Data UObject;
	struct UClipPadEntry_Data UClipPadEntry;
};

// 0x40 
struct UCodecMovie_Data {
	// Last Offset: 0x3C
	float PlaybackDuration; // 0x3C (0x4)
};

struct UCodecMovie {
	struct UObject_Data UObject;
	struct UCodecMovie_Data UCodecMovie;
};

// 0x64 
struct UCodecMovieBink_Data {
	// Last Offset: 0x40
	const unsigned char Unknown1[0x24]; // 0x40 (0x24) MISSING END DATA
};

struct UCodecMovieBink {
	struct UObject_Data UObject;
	struct UCodecMovie_Data UCodecMovie;
	struct UCodecMovieBink_Data UCodecMovieBink;
};

// 0x44 
struct UCodecMovieFallback_Data {
	// Last Offset: 0x40
	float CurrentTime; // 0x40 (0x4)
};

struct UCodecMovieFallback {
	struct UObject_Data UObject;
	struct UCodecMovie_Data UCodecMovie;
	struct UCodecMovieFallback_Data UCodecMovieFallback;
};

// 0x54 
struct UCurveEdPresetCurve_Data {
	// Last Offset: 0x3C
	struct FString CurveName; // 0x3C (0xC)
	struct TArray_FPresetGeneratedPoint Points; // 0x48 (0xC)
};

struct UCurveEdPresetCurve {
	struct UObject_Data UObject;
	struct UCurveEdPresetCurve_Data UCurveEdPresetCurve;
};

// 0x3C 
struct UCustomPropertyItemHandler_Data {
	// Last Offset: 0x3C
};

struct UCustomPropertyItemHandler {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UCustomPropertyItemHandler_Data UCustomPropertyItemHandler;
};

// 0x3C 
struct UDamageAdjuster_Data {
	// Last Offset: 0x3C
};

struct UDamageAdjuster {
	struct UObject_Data UObject;
	struct UDamageAdjuster_Data UDamageAdjuster;
};

// 0xD0 
struct UDamagePipeline_Data {
	// Last Offset: 0x3C
	BOOL bInUse :1 ; // 0x3C (0x4)
	BOOL bCanHitFriendly :1 ; // 0x3C (0x4)
	BOOL bOvercharged :1 ; // 0x3C (0x4)
	const unsigned long: 0;
	struct UDamageTypeDefinition* DamageTypeDef; // 0x40 (0x4)
	struct UImpactDefinition* ImpactDefinition; // 0x44 (0x4)
	struct UObject* DirectHitObject; // 0x48 (0x4)
	int PenetrationCount; // 0x4C (0x4)
	struct FDamageEventSummary DamageSummary; // 0x50 (0x78)
	float BarrelSourceTime; // 0xC8 (0x4)
	float PlantSourceTime; // 0xCC (0x4)
};

struct UDamagePipeline {
	struct UObject_Data UObject;
	struct UDamagePipeline_Data UDamagePipeline;
};

// 0x64 
struct UDamageType_Data {
	// Last Offset: 0x3C
	BOOL bArmorStops :1 ; // 0x3C (0x4)
	BOOL bCausedByWorld :1 ; // 0x3C (0x4)
	BOOL bExtraMomentumZ :1 ; // 0x3C (0x4)
	BOOL bCausesFracture :1 ; // 0x3C (0x4)
	BOOL bRadialDamageVelChange :1 ; // 0x3C (0x4)
	const unsigned long: 0;
	float KDamageImpulse; // 0x40 (0x4)
	float KDeathVel; // 0x44 (0x4)
	float KDeathUpKick; // 0x48 (0x4)
	float RadialDamageImpulse; // 0x4C (0x4)
	float VehicleDamageScaling; // 0x50 (0x4)
	float VehicleMomentumScaling; // 0x54 (0x4)
	struct UForceFeedbackWaveform* DamagedFFWaveform; // 0x58 (0x4)
	struct UForceFeedbackWaveform* KilledFFWaveform; // 0x5C (0x4)
	float FracturedMeshDamage; // 0x60 (0x4)
};

struct UDamageType {
	struct UObject_Data UObject;
	struct UDamageType_Data UDamageType;
};

// 0x64 
struct UKillZDamageType_Data {
	// Last Offset: 0x64
};

struct UKillZDamageType {
	struct UObject_Data UObject;
	struct UDamageType_Data UDamageType;
	struct UKillZDamageType_Data UKillZDamageType;
};

// 0x54 
struct UDistributionFloatConstant_Data {
	// Last Offset: 0x50
	float Constant; // 0x50 (0x4)
};

struct UDistributionFloatConstant {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UDistributionFloat_Data UDistributionFloat;
	struct UDistributionFloatConstant_Data UDistributionFloatConstant;
};

// 0x6D 
struct UDistributionFloatParameterBase_Data {
	// Last Offset: 0x54
	struct FName ParameterName; // 0x54 (0x8)
	float MinInput; // 0x5C (0x4)
	float MaxInput; // 0x60 (0x4)
	float MinOutput; // 0x64 (0x4)
	float MaxOutput; // 0x68 (0x4)
	unsigned char ParamMode; // 0x6C (0x1) (Enum = DistributionParamMode)
};

struct UDistributionFloatParameterBase {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UDistributionFloat_Data UDistributionFloat;
	struct UDistributionFloatConstant_Data UDistributionFloatConstant;
	struct UDistributionFloatParameterBase_Data UDistributionFloatParameterBase;
};

// 0x60 
struct UDistributionFloatConstantCurve_Data {
	// Last Offset: 0x50
	struct FInterpCurveFloat ConstantCurve; // 0x50 (0x10)
};

struct UDistributionFloatConstantCurve {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UDistributionFloat_Data UDistributionFloat;
	struct UDistributionFloatConstantCurve_Data UDistributionFloatConstantCurve;
};

// 0x58 
struct UDistributionFloatUniform_Data {
	// Last Offset: 0x50
	float Min; // 0x50 (0x4)
	float Max; // 0x54 (0x4)
};

struct UDistributionFloatUniform {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UDistributionFloat_Data UDistributionFloat;
	struct UDistributionFloatUniform_Data UDistributionFloatUniform;
};

// 0x60 
struct UDistributionFloatUniformCurve_Data {
	// Last Offset: 0x50
	struct FInterpCurveVector2D ConstantCurve; // 0x50 (0x10)
};

struct UDistributionFloatUniformCurve {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UDistributionFloat_Data UDistributionFloat;
	struct UDistributionFloatUniformCurve_Data UDistributionFloatUniformCurve;
};

// 0x61 
struct UDistributionVectorConstant_Data {
	// Last Offset: 0x50
	struct FVector Constant; // 0x50 (0xC)
	BOOL bLockAxes :1 ; // 0x5C (0x4)
	const unsigned long: 0;
	unsigned char LockedAxes; // 0x60 (0x1) (Enum = EDistributionVectorLockFlags)
};

struct UDistributionVectorConstant {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UDistributionVector_Data UDistributionVector;
	struct UDistributionVectorConstant_Data UDistributionVectorConstant;
};

// 0x9F 
struct UDistributionVectorParameterBase_Data {
	// Last Offset: 0x64
	struct FName ParameterName; // 0x64 (0x8)
	struct FVector MinInput; // 0x6C (0xC)
	struct FVector MaxInput; // 0x78 (0xC)
	struct FVector MinOutput; // 0x84 (0xC)
	struct FVector MaxOutput; // 0x90 (0xC)
	unsigned char ParamModes[3]; // 0x9C (0x3) (Enum = DistributionParamMode)
};

struct UDistributionVectorParameterBase {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UDistributionVector_Data UDistributionVector;
	struct UDistributionVectorConstant_Data UDistributionVectorConstant;
	struct UDistributionVectorParameterBase_Data UDistributionVectorParameterBase;
};

// 0x65 
struct UDistributionVectorConstantCurve_Data {
	// Last Offset: 0x50
	struct FInterpCurveVector ConstantCurve; // 0x50 (0x10)
	BOOL bLockAxes :1 ; // 0x60 (0x4)
	const unsigned long: 0;
	unsigned char LockedAxes; // 0x64 (0x1) (Enum = EDistributionVectorLockFlags)
};

struct UDistributionVectorConstantCurve {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UDistributionVector_Data UDistributionVector;
	struct UDistributionVectorConstantCurve_Data UDistributionVectorConstantCurve;
};

// 0x70 
struct UDistributionVectorUniform_Data {
	// Last Offset: 0x50
	struct FVector Max; // 0x50 (0xC)
	struct FVector Min; // 0x5C (0xC)
	BOOL bLockAxes :1 ; // 0x68 (0x4)
	BOOL bUseExtremes :1 ; // 0x68 (0x4)
	const unsigned long: 0;
	unsigned char LockedAxes; // 0x6C (0x1) (Enum = EDistributionVectorLockFlags)
	unsigned char MirrorFlags[3]; // 0x6D (0x3) (Enum = EDistributionVectorMirrorFlags)
};

struct UDistributionVectorUniform {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UDistributionVector_Data UDistributionVector;
	struct UDistributionVectorUniform_Data UDistributionVectorUniform;
};

// 0x69 
struct UDistributionVectorUniformCurve_Data {
	// Last Offset: 0x50
	struct FInterpCurveTwoVectors ConstantCurve; // 0x50 (0x10)
	BOOL bLockAxes1 :1 ; // 0x60 (0x4)
	BOOL bLockAxes2 :1 ; // 0x60 (0x4)
	BOOL bUseExtremes :1 ; // 0x60 (0x4)
	const unsigned long: 0;
	unsigned char LockedAxes[2]; // 0x64 (0x2) (Enum = EDistributionVectorLockFlags)
	unsigned char MirrorFlags[3]; // 0x66 (0x3) (Enum = EDistributionVectorMirrorFlags)
};

struct UDistributionVectorUniformCurve {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UDistributionVector_Data UDistributionVector;
	struct UDistributionVectorUniformCurve_Data UDistributionVectorUniformCurve;
};

// 0xA70 
struct UDownload_Data {
	// Last Offset: 0x3C
	const unsigned char Unknown1[0xA34]; // 0x3C (0xA34) MISSING END DATA
};

struct UDownload {
	struct UObject_Data UObject;
	struct UDownload_Data UDownload;
};

// 0xA74 
struct UChannelDownload_Data {
	// Last Offset: 0xA70
	const unsigned char Unknown1[0x4]; // 0xA70 (0x4) MISSING END DATA
};

struct UChannelDownload {
	struct UObject_Data UObject;
	struct UDownload_Data UDownload;
	struct UChannelDownload_Data UChannelDownload;
};

// 0x8C  (Alignment = 16)
struct UEdCoordSystem_Data {
	// Last Offset: 0x3C
	const unsigned char Unknown1[0x4]; // 0x3C (0x4) > LAST OFFSET
	struct FMatrix M; // 0x40 (0x40)
	struct FString Desc; // 0x80 (0xC)
};

struct UEdCoordSystem {
	struct UObject_Data UObject;
	struct UEdCoordSystem_Data UEdCoordSystem;
};

// 0x3C 
struct UEditorLinkSelectionInterface_Data {
	// Last Offset: 0x3C
};

struct UEditorLinkSelectionInterface {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UEditorLinkSelectionInterface_Data UEditorLinkSelectionInterface;
};

// 0x3C 
struct UEngineTypes_Data {
	// Last Offset: 0x3C
};

struct UEngineTypes {
	struct UObject_Data UObject;
	struct UEngineTypes_Data UEngineTypes;
};

// 0xB4 
struct UFacebookIntegration_Data {
	// Last Offset: 0x3C
	struct FString AppID; // 0x3C (0xC)
	struct FString UserName; // 0x48 (0xC)
	struct FString UserId; // 0x54 (0xC)
	struct FString AccessToken; // 0x60 (0xC)
	struct TArray_FScriptDelegate AuthorizationDelegates; // 0x6C (0xC)
	struct TArray_FScriptDelegate FacebookRequestCompleteDelegates; // 0x78 (0xC)
	struct TArray_FScriptDelegate WebRequestCompleteDelegates; // 0x84 (0xC)
	struct FScriptDelegate __OnAuthorizationComplete__Delegate; // 0x90 (0xC)
	struct FScriptDelegate __OnFacebookRequestComplete__Delegate; // 0x9C (0xC)
	struct FScriptDelegate __OnWebRequestComplete__Delegate; // 0xA8 (0xC)
};

struct UFacebookIntegration {
	struct UObject_Data UObject;
	struct UFacebookIntegration_Data UFacebookIntegration;
};

// 0x60 
struct UFaceFXAnimSet_Data {
	// Last Offset: 0x3C
	BOOL bStreamWithAudio :1 ; // 0x3C (0x4)
	const unsigned long: 0;
	struct FPointer InternalFaceFXAnimSet; // 0x40 (0x4)
	struct TArray_unsigned_char RawFaceFXAnimSetBytes; // 0x44 (0xC)
	struct TArray_unsigned_char RawFaceFXMiniSessionBytes; // 0x50 (0xC)
	int NumLoadErrors; // 0x5C (0x4)
};

struct UFaceFXAnimSet {
	struct UObject_Data UObject;
	struct UFaceFXAnimSet_Data UFaceFXAnimSet;
};

// 0x74 
struct UFaceFXAsset_Data {
	// Last Offset: 0x3C
	struct FPointer FaceFXActor; // 0x3C (0x4)
	struct TArray_unsigned_char RawFaceFXActorBytes; // 0x40 (0xC)
	struct TArray_unsigned_char RawFaceFXSessionBytes; // 0x4C (0xC)
	struct TArray_UFaceFXAnimSetPtr MountedFaceFXAnimSets; // 0x58 (0xC)
	int NumLoadErrors; // 0x64 (0x4)
	struct TArray_FGroupAnimationAndSoundIdentifier SoundNodeWaveToGroupAndAnimNameArray; // 0x68 (0xC)
};

struct UFaceFXAsset {
	struct UObject_Data UObject;
	struct UFaceFXAsset_Data UFaceFXAsset;
};

// 0x150 
struct UFont_Data {
	// Last Offset: 0x3C
	struct TArray_FFontCharacter Characters; // 0x3C (0xC)
	struct TArray_UTexture2DPtr Textures; // 0x48 (0xC)
	const unsigned char Unknown1[0x3C]; // 0x54 (0x3C) UNKNOWN PROPERTY
	int IsRemapped; // 0x90 (0x4)
	float EmScale; // 0x94 (0x4)
	float Ascent; // 0x98 (0x4)
	float Descent; // 0x9C (0x4)
	float Leading; // 0xA0 (0x4)
	int Kerning; // 0xA4 (0x4)
	struct FFontImportOptionsData ImportOptions; // 0xA8 (0x94)
	int NumCharacters; // 0x13C (0x4)
	struct TArray_int MaxCharHeight; // 0x140 (0xC)
	float ScalingFactor; // 0x14C (0x4)
};

struct UFont {
	struct UObject_Data UObject;
	struct UFont_Data UFont;
};

// 0x15C 
struct UMultiFont_Data {
	// Last Offset: 0x150
	struct TArray_float ResolutionTestTable; // 0x150 (0xC)
};

struct UMultiFont {
	struct UObject_Data UObject;
	struct UFont_Data UFont;
	struct UMultiFont_Data UMultiFont;
};

// 0xD0 
struct UFontImportOptions_Data {
	// Last Offset: 0x3C
	struct FFontImportOptionsData Data; // 0x3C (0x94)
};

struct UFontImportOptions {
	struct UObject_Data UObject;
	struct UFontImportOptions_Data UFontImportOptions;
};

// 0x58 
struct UForceFeedbackManager_Data {
	// Last Offset: 0x3C
	BOOL bAllowsForceFeedback :1 ; // 0x3C (0x4)
	BOOL bIsPaused :1 ; // 0x3C (0x4)
	const unsigned long: 0;
	struct UForceFeedbackWaveform* FFWaveform; // 0x40 (0x4)
	int CurrentSample; // 0x44 (0x4)
	float ElapsedTime; // 0x48 (0x4)
	float ScaleAllWaveformsBy; // 0x4C (0x4)
	struct AActor* WaveformInstigator; // 0x50 (0x4)
	int CurrentWaveformRef; // 0x54 (0x4)
};

struct UForceFeedbackManager {
	struct UObject_Data UObject;
	struct UForceFeedbackManager_Data UForceFeedbackManager;
};

// 0x5C 
struct UForceFeedbackWaveform_Data {
	// Last Offset: 0x3C
	BOOL bIsLooping :1 ; // 0x3C (0x4)
	const unsigned long: 0;
	struct TArray_FWaveformSample Samples; // 0x40 (0xC)
	float Scale; // 0x4C (0x4)
	float WaveformFalloffStartDistance; // 0x50 (0x4)
	float MaxWaveformDistance; // 0x54 (0x4)
	int WaveformRef; // 0x58 (0x4)
};

struct UForceFeedbackWaveform {
	struct UObject_Data UObject;
	struct UForceFeedbackWaveform_Data UForceFeedbackWaveform;
};

// 0x164 
struct UGameplayEvents_Data {
	// Last Offset: 0x3C
	struct FPointer Archive; // 0x3C (0x4)
	struct FString StatsFileName; // 0x40 (0xC)
	struct FGameplayEventsHeader Header; // 0x4C (0x2C)
	struct FGameSessionInformation CurrentSessionInfo; // 0x78 (0x80)
	struct TArray_FPlayerInformation PlayerList; // 0xF8 (0xC)
	struct TArray_FTeamInformation TeamList; // 0x104 (0xC)
	struct TArray_FGameplayEventMetaData SupportedEvents; // 0x110 (0xC)
	struct TArray_FWeaponClassEventData WeaponClassArray; // 0x11C (0xC)
	struct TArray_FDamageClassEventData DamageClassArray; // 0x128 (0xC)
	struct TArray_FProjectileClassEventData ProjectileClassArray; // 0x134 (0xC)
	struct TArray_FPawnClassEventData PawnClassArray; // 0x140 (0xC)
	struct TArray_FString ActorArray; // 0x14C (0xC)
	struct TArray_FString SoundCueArray; // 0x158 (0xC)
};

struct UGameplayEvents {
	struct UObject_Data UObject;
	struct UGameplayEvents_Data UGameplayEvents;
};

// 0x170 
struct UGameplayEventsReader_Data {
	// Last Offset: 0x164
	struct TArray_UGameplayEventsHandlerPtr RegisteredHandlers; // 0x164 (0xC)
};

struct UGameplayEventsReader {
	struct UObject_Data UObject;
	struct UGameplayEvents_Data UGameplayEvents;
	struct UGameplayEventsReader_Data UGameplayEventsReader;
};

// 0x168 
struct UGameplayEventsWriter_Data {
	// Last Offset: 0x164
	struct AGameInfo* Game; // 0x164 (0x4)
};

struct UGameplayEventsWriter {
	struct UObject_Data UObject;
	struct UGameplayEvents_Data UGameplayEvents;
	struct UGameplayEventsWriter_Data UGameplayEventsWriter;
};

// 0x58 
struct UGameplayEventsHandler_Data {
	// Last Offset: 0x3C
	struct TArray_int EventIDFilter; // 0x3C (0xC)
	struct TArray_FGameStatGroup GroupFilter; // 0x48 (0xC)
	struct UGameplayEventsReader* Reader; // 0x54 (0x4)
};

struct UGameplayEventsHandler {
	struct UObject_Data UObject;
	struct UGameplayEventsHandler_Data UGameplayEventsHandler;
};

// 0x11C 
struct UGameViewportClient_Data {
	// Last Offset: 0x3C
	struct FPointer VfTable_FViewportClient; // 0x3C (0x4)
	struct FPointer VfTable_FExec; // 0x40 (0x4)
	struct FPointer Viewport; // 0x44 (0x4)
	struct FPointer ViewportFrame; // 0x48 (0x4)
	struct TArray_UInteractionPtr GlobalInteractions; // 0x4C (0xC)
	struct UClass* UIControllerClass; // 0x58 (0x4)
	struct UUIInteraction* UIController; // 0x5C (0x4)
	struct UConsole* ViewportConsole; // 0x60 (0x4)
	struct FPointer pShowFlags; // 0x64 (0x4)
	struct FString LoadingMessage; // 0x68 (0xC)
	struct FString SavingMessage; // 0x74 (0xC)
	struct FString ConnectingMessage; // 0x80 (0xC)
	struct FString PausedMessage; // 0x8C (0xC)
	struct FString PrecachingMessage; // 0x98 (0xC)
	BOOL bShowTitleSafeZone :1 ; // 0xA4 (0x4)
	BOOL bDisplayingUIMouseCursor :1 ; // 0xA4 (0x4)
	BOOL bUIMouseCaptureOverride :1 ; // 0xA4 (0x4)
	BOOL bOverrideDiffuseAndSpecular :1 ; // 0xA4 (0x4)
	BOOL bIsPlayInEditorViewport :1 ; // 0xA4 (0x4)
	BOOL bShowSystemMouseCursor :1 ; // 0xA4 (0x4)
	BOOL bDisableWorldRendering :1 ; // 0xA4 (0x4)
	BOOL bDebugNoGFxUI :1 ; // 0xA4 (0x4)
	BOOL bUseHardwareCursorWhenWindowed :1 ; // 0xA4 (0x4)
	const unsigned long: 0;
	struct FTitleSafeZoneArea TitleSafeZone; // 0xA8 (0x10)
	struct TArray_FSplitscreenData SplitscreenInfo; // 0xB8 (0xC)
	unsigned char DesiredSplitscreenType; // 0xC4 (0x1) (Enum = ESplitScreenType)
	unsigned char ActiveSplitscreenType; // 0xC5 (0x1) (Enum = ESplitScreenType)
	unsigned char Default2PSplitType; // 0xC6 (0x1) (Enum = ESplitScreenType)
	unsigned char Default3PSplitType; // 0xC7 (0x1) (Enum = ESplitScreenType)
	struct FString ProgressMessage[2]; // 0xC8 (0x18)
	float ProgressTimeOut; // 0xE0 (0x4)
	float ProgressFadeTime; // 0xE4 (0x4)
	struct TArray_FDebugDisplayProperty DebugProperties; // 0xE8 (0xC)
	struct FPointer ScaleformInteraction; // 0xF4 (0x4)
	struct FScriptDelegate __HandleInputKey__Delegate; // 0xF8 (0xC)
	struct FScriptDelegate __HandleInputAxis__Delegate; // 0x104 (0xC)
	struct FScriptDelegate __HandleInputChar__Delegate; // 0x110 (0xC)
};

struct UGameViewportClient {
	struct UObject_Data UObject;
	struct UGameViewportClient_Data UGameViewportClient;
};

// 0x40 
struct UGBXCrossLevelReferenceContainer_Data {
	// Last Offset: 0x3C
	struct UObject* CrossLevelObjectRef; // 0x3C (0x4)
};

struct UGBXCrossLevelReferenceContainer {
	struct UObject_Data UObject;
	struct UGBXCrossLevelReferenceContainer_Data UGBXCrossLevelReferenceContainer;
};

// 0x3C 
struct UGBXDefinition_Data {
	// Last Offset: 0x3C
};

struct UGBXDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
};

// 0x3C 
struct UBaseHitRegionDefinition_Data {
	// Last Offset: 0x3C
};

struct UBaseHitRegionDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UBaseHitRegionDefinition_Data UBaseHitRegionDefinition;
};

// 0x3C 
struct UDamageTypeDefinition_Data {
	// Last Offset: 0x3C
};

struct UDamageTypeDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UDamageTypeDefinition_Data UDamageTypeDefinition;
};

// 0x3C 
struct UEngineInteractionIconDefinition_Data {
	// Last Offset: 0x3C
};

struct UEngineInteractionIconDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UEngineInteractionIconDefinition_Data UEngineInteractionIconDefinition;
};

// 0x64 
struct UPawnAllegiance_Data {
	// Last Offset: 0x3C
	unsigned char DefaultOpinion; // 0x3C (0x1) (Enum = EOpinion)
	unsigned char SelfOpinion; // 0x3D (0x1) (Enum = EOpinion)
	unsigned char ForcedOtherOpinion; // 0x3E (0x1) (Enum = EOpinion)
	const unsigned char Unknown1[0x1]; // 0x3F (0x1) > LAST OFFSET
	struct TArray_FOpinionData MyOpinions; // 0x40 (0xC)
	struct TArray_FOpinionData OtherOpinions; // 0x4C (0xC)
	BOOL bForceAllOtherOpinions :1 ; // 0x58 (0x4)
	const unsigned long: 0;
	struct FName AllegianceKilledStat; // 0x5C (0x8)
};

struct UPawnAllegiance {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UPawnAllegiance_Data UPawnAllegiance;
};

// 0x70 
struct UPawnInteractionDefinition_Data {
	// Last Offset: 0x3C
	BOOL bSupportsUseEvents :1 ; // 0x3C (0x4)
	BOOL bSupportsUseEventsWhenDead :1 ; // 0x3C (0x4)
	BOOL bAimToInteract :1 ; // 0x3C (0x4)
	BOOL bUseInteractDistance :1 ; // 0x3C (0x4)
	BOOL bSupportsTouchEvents :1 ; // 0x3C (0x4)
	BOOL bSupportsTouchEventsWhenDead :1 ; // 0x3C (0x4)
	BOOL bTouchAIPawns :1 ; // 0x3C (0x4)
	BOOL bTouchPlayerPawns :1 ; // 0x3C (0x4)
	BOOL bTouchVehicles :1 ; // 0x3C (0x4)
	BOOL bTouchProjectiles :1 ; // 0x3C (0x4)
	const unsigned long: 0;
	float InteractDistance; // 0x40 (0x4)
	float TouchRadius; // 0x44 (0x4)
	float TouchHeight; // 0x48 (0x4)
	struct TArray_UBehaviorBasePtr OnTouch; // 0x4C (0xC)
	struct TArray_UBehaviorBasePtr OnUnTouch; // 0x58 (0xC)
	struct TArray_UBehaviorBasePtr OnUse; // 0x64 (0xC)
};

struct UPawnInteractionDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UPawnInteractionDefinition_Data UPawnInteractionDefinition;
};

// 0x3C 
struct UGBXNavMeshPathModifier_Data {
	// Last Offset: 0x3C
};

struct UGBXNavMeshPathModifier {
	struct UObject_Data UObject;
	struct UGBXNavMeshPathModifier_Data UGBXNavMeshPathModifier;
};

// 0x40 
struct UGBXNavMeshPathModifier_Simplify_Data {
	// Last Offset: 0x3C
	float CornerCutInterval; // 0x3C (0x4)
};

struct UGBXNavMeshPathModifier_Simplify {
	struct UObject_Data UObject;
	struct UGBXNavMeshPathModifier_Data UGBXNavMeshPathModifier;
	struct UGBXNavMeshPathModifier_Simplify_Data UGBXNavMeshPathModifier_Simplify;
};

// 0x4C 
struct UGBXNavMeshPathModifier_SmoothTurns_Data {
	// Last Offset: 0x3C
	float TooSharpThreshold; // 0x3C (0x4)
	float MaxAdjustThreshold; // 0x40 (0x4)
	float CornerLengthModifier; // 0x44 (0x4)
	float TestInterval; // 0x48 (0x4)
};

struct UGBXNavMeshPathModifier_SmoothTurns {
	struct UObject_Data UObject;
	struct UGBXNavMeshPathModifier_Data UGBXNavMeshPathModifier;
	struct UGBXNavMeshPathModifier_SmoothTurns_Data UGBXNavMeshPathModifier_SmoothTurns;
};

// 0x84 
struct UGearboxEngineGlobals_Data {
	// Last Offset: 0x3C
	struct UTargetableList* TheTargetableList; // 0x3C (0x4)
	struct UTexture2D* AnimDebugTrack; // 0x40 (0x4)
	struct UTexture2D* AnimDebugCarat; // 0x44 (0x4)
	struct UGearboxEngineGlobals* SingletonInstance; // 0x48 (0x4)
	struct UPersistentGameDataManager* ThePersistentDataManager; // 0x4C (0x4)
	struct TArray_FPlayerOwnedComponent PlayerOwnedComponents; // 0x50 (0xC)
	struct FVector DynamicShadowDirection; // 0x5C (0xC)
	float WholeSceneDynamicShadowRadius; // 0x68 (0x4)
	struct TArray_FAkCallBackGetRTPC AkCallBackGetRTPCs; // 0x6C (0xC)
	struct FScriptDelegate __OnDlgFinished__Delegate; // 0x78 (0xC)
};

struct UGearboxEngineGlobals {
	struct UObject_Data UObject;
	struct UGearboxEngineGlobals_Data UGearboxEngineGlobals;
};

// 0x44 
struct UGenericParamListStatEntry_Data {
	// Last Offset: 0x3C
	struct FPointer StatEvent; // 0x3C (0x4)
	struct UGameplayEventsWriter* Writer; // 0x40 (0x4)
};

struct UGenericParamListStatEntry {
	struct UObject_Data UObject;
	struct UGenericParamListStatEntry_Data UGenericParamListStatEntry;
};

// 0x84 
struct UGuidCache_Data {
	// Last Offset: 0x3C
	const unsigned char Unknown1[0x48]; // 0x3C (0x48) MISSING END DATA
};

struct UGuidCache {
	struct UObject_Data UObject;
	struct UGuidCache_Data UGuidCache;
};

// 0x3C 
struct UIAnimBehavior_Data {
	// Last Offset: 0x3C
};

struct UIAnimBehavior {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UIAnimBehavior_Data UIAnimBehavior;
};

// 0x3C 
struct UIAttributeSlotEffectProvider_Data {
	// Last Offset: 0x3C
};

struct UIAttributeSlotEffectProvider {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UIAttributeSlotEffectProvider_Data UIAttributeSlotEffectProvider;
};

// 0x3C 
struct UIBalancedActor_Data {
	// Last Offset: 0x3C
};

struct UIBalancedActor {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UIBalancedActor_Data UIBalancedActor;
};

// 0x3C 
struct UIBodyCompositionInstance_Data {
	// Last Offset: 0x3C
};

struct UIBodyCompositionInstance {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UIBodyCompositionInstance_Data UIBodyCompositionInstance;
};

// 0x3C 
struct UIBodyInfoProvider_Data {
	// Last Offset: 0x3C
};

struct UIBodyInfoProvider {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UIBodyInfoProvider_Data UIBodyInfoProvider;
};

// 0x3C 
struct UIDamageCauser_Data {
	// Last Offset: 0x3C
};

struct UIDamageCauser {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UIDamageCauser_Data UIDamageCauser;
};

// 0x3C 
struct UIDialogBox_Data {
	// Last Offset: 0x3C
};

struct UIDialogBox {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UIDialogBox_Data UIDialogBox;
};

// 0x3C 
struct UIFaceFXActor_Data {
	// Last Offset: 0x3C
};

struct UIFaceFXActor {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UIFaceFXActor_Data UIFaceFXActor;
};

// 0x3C 
struct UIGBXNavMeshBuildEvents_Data {
	// Last Offset: 0x3C
};

struct UIGBXNavMeshBuildEvents {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UIGBXNavMeshBuildEvents_Data UIGBXNavMeshBuildEvents;
};

// 0x3C 
struct UIGBXNavMeshSeed_Data {
	// Last Offset: 0x3C
};

struct UIGBXNavMeshSeed {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UIGBXNavMeshSeed_Data UIGBXNavMeshSeed;
};

// 0x3C 
struct UIGBXNavMeshSpecialMove_Data {
	// Last Offset: 0x3C
};

struct UIGBXNavMeshSpecialMove {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UIGBXNavMeshSpecialMove_Data UIGBXNavMeshSpecialMove;
};

// 0x3C 
struct UIKilledBehavior_Data {
	// Last Offset: 0x3C
};

struct UIKilledBehavior {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UIKilledBehavior_Data UIKilledBehavior;
};

// 0x5C 
struct UIniLocPatcher_Data {
	// Last Offset: 0x3C
	struct TArray_FIniLocFileEntry Files; // 0x3C (0xC)
	struct FScriptInterface TitleFileInterface; // 0x48 (0x8)
	struct FScriptDelegate __OnReadTitleFileComplete__Delegate; // 0x50 (0xC)
};

struct UIniLocPatcher {
	struct UObject_Data UObject;
	struct UIniLocPatcher_Data UIniLocPatcher;
};

// 0x3C 
struct UInterface_NavigationHandle_Data {
	// Last Offset: 0x3C
};

struct UInterface_NavigationHandle {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UInterface_NavigationHandle_Data UInterface_NavigationHandle;
};

// 0x3C 
struct UInterface_Speaker_Data {
	// Last Offset: 0x3C
};

struct UInterface_Speaker {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UInterface_Speaker_Data UInterface_Speaker;
};

// 0x4C 
struct UInterpCurveEdSetup_Data {
	// Last Offset: 0x3C
	struct TArray_FCurveEdTab Tabs; // 0x3C (0xC)
	int ActiveTab; // 0x48 (0x4)
};

struct UInterpCurveEdSetup {
	struct UObject_Data UObject;
	struct UInterpCurveEdSetup_Data UInterpCurveEdSetup;
};

// 0x68 
struct UInterpTrack_Data {
	// Last Offset: 0x3C
	struct FPointer VfTable_FInterpEdInputInterface; // 0x3C (0x4)
	struct FPointer CurveEdVTable; // 0x40 (0x4)
	struct TArray_UInterpTrackPtr SubTracks; // 0x44 (0xC)
	struct UClass* TrackInstClass; // 0x50 (0x4)
	unsigned char ActiveCondition; // 0x54 (0x1) (Enum = ETrackActiveCondition)
	unsigned char TrackPlayDirection; // 0x55 (0x1) (Enum = ETrackPlayDirection)
	const unsigned char Unknown1[0x2]; // 0x56 (0x2) > LAST OFFSET
	struct FString TrackTitle; // 0x58 (0xC)
	BOOL bOnePerGroup :1 ; // 0x64 (0x4)
	BOOL bDirGroupOnly :1 ; // 0x64 (0x4)
	BOOL bDisableTrack :1 ; // 0x64 (0x4)
	BOOL bIsAnimControlTrack :1 ; // 0x64 (0x4)
	BOOL bSubTrackOnly :1 ; // 0x64 (0x4)
	BOOL bVisible :1 ; // 0x64 (0x4)
	BOOL bIsSelected :1 ; // 0x64 (0x4)
	BOOL bIsRecording :1 ; // 0x64 (0x4)
	BOOL bIsCollapsed :1 ; // 0x64 (0x4)
	const unsigned long: 0;
};

struct UInterpTrack {
	struct UObject_Data UObject;
	struct UInterpTrack_Data UInterpTrack;
};

// 0x3C 
struct UIResourcePoolProvider_Data {
	// Last Offset: 0x3C
};

struct UIResourcePoolProvider {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UIResourcePoolProvider_Data UIResourcePoolProvider;
};

// 0x3C 
struct UISpawnActor_Data {
	// Last Offset: 0x3C
};

struct UISpawnActor {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UISpawnActor_Data UISpawnActor;
};

// 0x3C 
struct UISpecialOcclusionProvider_Data {
	// Last Offset: 0x3C
};

struct UISpecialOcclusionProvider {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UISpecialOcclusionProvider_Data UISpecialOcclusionProvider;
};

// 0x3C 
struct UITargetable_Data {
	// Last Offset: 0x3C
};

struct UITargetable {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UITargetable_Data UITargetable;
};

// 0xCC 
struct UJsonObject_Data {
	// Last Offset: 0x3C
	struct FMap_Mirror ValueMap; // 0x3C (0x3C)
	struct FMap_Mirror ObjectMap; // 0x78 (0x3C)
	struct TArray_FString ValueArray; // 0xB4 (0xC)
	struct TArray_UJsonObjectPtr ObjectArray; // 0xC0 (0xC)
};

struct UJsonObject {
	struct UObject_Data UObject;
	struct UJsonObject_Data UJsonObject;
};

// 0x80 
struct UKMeshProps_Data {
	// Last Offset: 0x3C
	struct FVector COMNudge; // 0x3C (0xC)
	struct FKAggregateGeom AggGeom; // 0x48 (0x38)
};

struct UKMeshProps {
	struct UObject_Data UObject;
	struct UKMeshProps_Data UKMeshProps;
};

// 0x90 
struct ULevelBase_Data {
	// Last Offset: 0x3C
	const unsigned char Unknown1[0x54]; // 0x3C (0x54) MISSING END DATA
};

struct ULevelBase {
	struct UObject_Data UObject;
	struct ULevelBase_Data ULevelBase;
};

// 0x378 
struct ULevel_Data {
	// Last Offset: 0x90
	const unsigned char Unknown1[0xD8]; // 0x90 (0xD8) > LAST OFFSET
	float LightmapTotalSize; // 0x168 (0x4)
	float ShadowmapTotalSize; // 0x16C (0x4)
	const unsigned char Unknown2[0x208]; // 0x170 (0x208) MISSING END DATA
};

struct ULevel {
	struct UObject_Data UObject;
	struct ULevelBase_Data ULevelBase;
	struct ULevel_Data ULevel;
};

// 0xC4 
struct UPendingLevel_Data {
	// Last Offset: 0x90
	const unsigned char Unknown1[0x34]; // 0x90 (0x34) MISSING END DATA
};

struct UPendingLevel {
	struct UObject_Data UObject;
	struct ULevelBase_Data ULevelBase;
	struct UPendingLevel_Data UPendingLevel;
};

// 0xC4 
struct UDemoPlayPendingLevel_Data {
	// Last Offset: 0xC4
};

struct UDemoPlayPendingLevel {
	struct UObject_Data UObject;
	struct ULevelBase_Data ULevelBase;
	struct UPendingLevel_Data UPendingLevel;
	struct UDemoPlayPendingLevel_Data UDemoPlayPendingLevel;
};

// 0xC4 
struct UNetPendingLevel_Data {
	// Last Offset: 0xC4
};

struct UNetPendingLevel {
	struct UObject_Data UObject;
	struct ULevelBase_Data ULevelBase;
	struct UPendingLevel_Data UPendingLevel;
	struct UNetPendingLevel_Data UNetPendingLevel;
};

// 0x98 
struct ULevelStreaming_Data {
	// Last Offset: 0x3C
	struct FName PackageName; // 0x3C (0x8)
	struct ULevel* LoadedLevel; // 0x44 (0x4)
	struct FVector Offset; // 0x48 (0xC)
	struct FVector OldOffset; // 0x54 (0xC)
	BOOL bIsVisible :1 ; // 0x60 (0x4)
	BOOL bHasLoadRequestPending :1 ; // 0x60 (0x4)
	BOOL bHasUnloadRequestPending :1 ; // 0x60 (0x4)
	BOOL bShouldBeVisibleInEditor :1 ; // 0x60 (0x4)
	BOOL bShouldBeVisibleInEditorOnLoad :1 ; // 0x60 (0x4)
	BOOL bBoundingBoxVisible :1 ; // 0x60 (0x4)
	BOOL bLocked :1 ; // 0x60 (0x4)
	BOOL bIsFullyStatic :1 ; // 0x60 (0x4)
	BOOL bShouldBeLoaded :1 ; // 0x60 (0x4)
	BOOL bShouldBeVisible :1 ; // 0x60 (0x4)
	BOOL bShouldBlockOnLoad :1 ; // 0x60 (0x4)
	BOOL bDrawOnLevelStatusMap :1 ; // 0x60 (0x4)
	BOOL bIsRequestingUnloadAndRemoval :1 ; // 0x60 (0x4)
	const unsigned long: 0;
	struct FColor DrawColor; // 0x64 (0x4)
	struct TArray_ALevelStreamingVolumePtr EditorStreamingVolumes; // 0x68 (0xC)
	float MinTimeBetweenVolumeUnloadRequests; // 0x74 (0x4)
	float LastVolumeUnloadRequestTime; // 0x78 (0x4)
	struct TArray_FString Keywords; // 0x7C (0xC)
	struct ALevelGridVolume* EditorGridVolume; // 0x88 (0x4)
	int GridPosition[3]; // 0x8C (0xC)
};

struct ULevelStreaming {
	struct UObject_Data UObject;
	struct ULevelStreaming_Data ULevelStreaming;
};

// 0x9C 
struct ULevelStreamingAlwaysLoaded_Data {
	// Last Offset: 0x98
	BOOL bIsProceduralBuildingLODLevel :1 ; // 0x98 (0x4)
	const unsigned long: 0;
};

struct ULevelStreamingAlwaysLoaded {
	struct UObject_Data UObject;
	struct ULevelStreaming_Data ULevelStreaming;
	struct ULevelStreamingAlwaysLoaded_Data ULevelStreamingAlwaysLoaded;
};

// 0xA8 
struct ULevelStreamingDistance_Data {
	// Last Offset: 0x98
	struct FVector Origin; // 0x98 (0xC)
	float MaxDistance; // 0xA4 (0x4)
};

struct ULevelStreamingDistance {
	struct UObject_Data UObject;
	struct ULevelStreaming_Data ULevelStreaming;
	struct ULevelStreamingDistance_Data ULevelStreamingDistance;
};

// 0x98 
struct ULevelStreamingKismet_Data {
	// Last Offset: 0x98
};

struct ULevelStreamingKismet {
	struct UObject_Data UObject;
	struct ULevelStreaming_Data ULevelStreaming;
	struct ULevelStreamingKismet_Data ULevelStreamingKismet;
};

// 0x98 
struct ULevelStreamingPersistent_Data {
	// Last Offset: 0x98
};

struct ULevelStreamingPersistent {
	struct UObject_Data UObject;
	struct ULevelStreaming_Data ULevelStreaming;
	struct ULevelStreamingPersistent_Data ULevelStreamingPersistent;
};

// 0x4C 
struct ULightmappedSurfaceCollection_Data {
	// Last Offset: 0x3C
	struct UModel* SourceModel; // 0x3C (0x4)
	struct TArray_int Surfaces; // 0x40 (0xC)
};

struct ULightmappedSurfaceCollection {
	struct UObject_Data UObject;
	struct ULightmappedSurfaceCollection_Data ULightmappedSurfaceCollection;
};

// 0x58 
struct ULightmassPrimitiveSettingsObject_Data {
	// Last Offset: 0x3C
	struct FLightmassPrimitiveSettings LightmassSettings; // 0x3C (0x1C)
};

struct ULightmassPrimitiveSettingsObject {
	struct UObject_Data UObject;
	struct ULightmassPrimitiveSettingsObject_Data ULightmassPrimitiveSettingsObject;
};

// 0x88 
struct ULine_Data {
	// Last Offset: 0x3C
	struct ULineData* Parent; // 0x3C (0x4)
	struct TArray_ULineSegmentPtr LineSegments; // 0x40 (0xC)
	struct TArray_UVertexPtr Verts; // 0x4C (0xC)
	struct UMaterial* RegionMaterial; // 0x58 (0x4)
	struct UMaterial* SIZoneMaterial; // 0x5C (0x4)
	struct UMaterial* SIRetreatMaterial; // 0x60 (0x4)
	struct UMaterial* SIStealthMaterial; // 0x64 (0x4)
	BOOL bMakeRegion :1 ; // 0x68 (0x4)
	BOOL bIsCircular :1 ; // 0x68 (0x4)
	BOOL bIsMoving :1 ; // 0x68 (0x4)
	const unsigned long: 0;
	int CombatZoneID; // 0x6C (0x4)
	struct FString CombatZoneName; // 0x70 (0xC)
	struct TArray_FVector RegionData; // 0x7C (0xC)
};

struct ULine {
	struct UObject_Data UObject;
	struct ULine_Data ULine;
};

// 0x90 
struct ULineData_Data {
	// Last Offset: 0x3C
	struct FVector RubberBand[2]; // 0x3C (0x18)
	BOOL bShowRubberBand :1 ; // 0x54 (0x4)
	BOOL bTerrainTrace :1 ; // 0x54 (0x4)
	BOOL bShowOnlySelectedZone :1 ; // 0x54 (0x4)
	BOOL bAutoGenRedundantData :1 ; // 0x54 (0x4)
	BOOL bIsSelectedMap :1 ; // 0x54 (0x4)
	const unsigned long: 0;
	int ParentID; // 0x58 (0x4)
	int SegmentID; // 0x5C (0x4)
	int CurrentCombatZoneID; // 0x60 (0x4)
	struct FString CurrentCombatZoneName; // 0x64 (0xC)
	float VertexScale; // 0x70 (0x4)
	float VertexScaleFactor; // 0x74 (0x4)
	float LineSegmentScale; // 0x78 (0x4)
	float LineSegmentScaleFactor; // 0x7C (0x4)
	unsigned char EditorMode; // 0x80 (0x1) (Enum = ELineEditMode)
	const unsigned char Unknown1[0x3]; // 0x81 (0x3) > LAST OFFSET
	struct TArray_ULinePtr Lines; // 0x84 (0xC)
};

struct ULineData {
	struct UObject_Data UObject;
	struct ULineData_Data ULineData;
};

// 0x9C 
struct ULineSegment_Data {
	// Last Offset: 0x3C
	struct ULine* ParentLine; // 0x3C (0x4)
	struct UVertex* Verts[2]; // 0x40 (0x8)
	struct FVector Direction; // 0x48 (0xC)
	struct FVector NormalLine[2]; // 0x54 (0x18)
	BOOL RightNormal :1 ; // 0x6C (0x4)
	BOOL bIsSelected :1 ; // 0x6C (0x4)
	BOOL bDelete :1 ; // 0x6C (0x4)
	const unsigned long: 0;
	float Size; // 0x70 (0x4)
	unsigned char SegmentType; // 0x74 (0x1) (Enum = ELineSegmentType)
	unsigned char SegmentMaterial; // 0x75 (0x1) (Enum = ELineSegmentMaterial)
	const unsigned char Unknown1[0x2]; // 0x76 (0x2) > LAST OFFSET
	int SegmentID; // 0x78 (0x4)
	struct FColor LineColor; // 0x7C (0x4)
	struct FColor NormalColor; // 0x80 (0x4)
	struct FColor SelectedColor; // 0x84 (0x4)
	struct FColor VulnerableColor; // 0x88 (0x4)
	struct FColor VantageColor; // 0x8C (0x4)
	struct FColor SIColor; // 0x90 (0x4)
	struct FColor RetreatColor; // 0x94 (0x4)
	struct FColor StealthColor; // 0x98 (0x4)
};

struct ULineSegment {
	struct UObject_Data UObject;
	struct ULineSegment_Data ULineSegment;
};

// 0x3C 
struct UMapInfo_Data {
	// Last Offset: 0x3C
};

struct UMapInfo {
	struct UObject_Data UObject;
	struct UMapInfo_Data UMapInfo;
};

// 0x3C 
struct USurface_Data {
	// Last Offset: 0x3C
};

struct USurface {
	struct UObject_Data UObject;
	struct USurface_Data USurface;
};

// 0x49 
struct UMaterialInterface_Data {
	// Last Offset: 0x3C
	struct FRenderCommandFence_Mirror ParentRefFence; // 0x3C (0x4)
	struct FLightmassMaterialInterfaceSettings LightmassSettings; // 0x40 (0x8)
	unsigned char CustomSkinType; // 0x48 (0x1) (Enum = ECustomSkinType)
};

struct UMaterialInterface {
	struct UObject_Data UObject;
	struct USurface_Data USurface;
	struct UMaterialInterface_Data UMaterialInterface;
};

// 0x378 
struct UMaterial_Data {
	// Last Offset: 0x4C
	struct UPhysicalMaterial* PhysMaterial; // 0x4C (0x4)
	struct UClass* PhysicalMaterial; // 0x50 (0x4)
	struct UTexture2D* PhysMaterialMask; // 0x54 (0x4)
	int PhysMaterialMaskUVChannel; // 0x58 (0x4)
	struct UPhysicalMaterial* BlackPhysicalMaterial; // 0x5C (0x4)
	struct UPhysicalMaterial* WhitePhysicalMaterial; // 0x60 (0x4)
	struct FColorMaterialInput DiffuseColor; // 0x64 (0x24)
	struct FScalarMaterialInput DiffusePower; // 0x88 (0x24)
	struct FColorMaterialInput SpecularColor; // 0xAC (0x24)
	struct FScalarMaterialInput SpecularPower; // 0xD0 (0x24)
	struct FVectorMaterialInput Normal; // 0xF4 (0x2C)
	struct FColorMaterialInput EmissiveColor; // 0x120 (0x24)
	struct FScalarMaterialInput Opacity; // 0x144 (0x24)
	struct FScalarMaterialInput OpacityMask; // 0x168 (0x24)
	float OpacityMaskClipValue; // 0x18C (0x4)
	BOOL bNeedsShadowDepthBias :1 ; // 0x190 (0x4)
	BOOL TwoSided :1 ; // 0x190 (0x4)
	BOOL TwoSidedSeparatePass :1 ; // 0x190 (0x4)
	BOOL bDisableDepthTest :1 ; // 0x190 (0x4)
	BOOL bDisableEdgeDetection :1 ; // 0x190 (0x4)
	BOOL bSceneTextureRenderBehindTranslucency :1 ; // 0x190 (0x4)
	BOOL bAllowFog :1 ; // 0x190 (0x4)
	BOOL bTranslucencyReceiveDominantShadowsFromStatic :1 ; // 0x190 (0x4)
	BOOL bTranslucencyInheritDominantShadowsFromOpaque :1 ; // 0x190 (0x4)
	BOOL bAllowTranslucencyDoF :1 ; // 0x190 (0x4)
	BOOL bUseOneLayerDistortion :1 ; // 0x190 (0x4)
	BOOL bUseLitTranslucencyDepthPass :1 ; // 0x190 (0x4)
	BOOL bUseLitTranslucencyPostRenderDepthPass :1 ; // 0x190 (0x4)
	BOOL bCastLitTranslucencyShadowAsMasked :1 ; // 0x190 (0x4)
	BOOL bUsedAsLightFunction :1 ; // 0x190 (0x4)
	BOOL bUsedWithFogVolumes :1 ; // 0x190 (0x4)
	BOOL bUsedAsSpecialEngineMaterial :1 ; // 0x190 (0x4)
	BOOL bUsedWithSkeletalMesh :1 ; // 0x190 (0x4)
	BOOL bUsedWithTerrain :1 ; // 0x190 (0x4)
	BOOL bUsedWithLandscape :1 ; // 0x190 (0x4)
	BOOL bUsedWithFracturedMeshes :1 ; // 0x190 (0x4)
	BOOL bUsedWithParticleSystem :1 ; // 0x190 (0x4)
	BOOL bUsedWithParticleSprites :1 ; // 0x190 (0x4)
	BOOL bUsedWithBeamTrails :1 ; // 0x190 (0x4)
	BOOL bUsedWithParticleSubUV :1 ; // 0x190 (0x4)
	BOOL bUsedWithFoliage :1 ; // 0x190 (0x4)
	BOOL bUsedWithSpeedTree :1 ; // 0x190 (0x4)
	BOOL bUsedWithStaticLighting :1 ; // 0x190 (0x4)
	BOOL bUsedWithLensFlare :1 ; // 0x190 (0x4)
	BOOL bUsedWithGammaCorrection :1 ; // 0x190 (0x4)
	BOOL bUsedWithInstancedMeshParticles :1 ; // 0x190 (0x4)
	BOOL bUsedWithFluidSurfaces :1 ; // 0x190 (0x4)
	BOOL bUsedWithDecals :1 ; // 0x194 (0x4)
	BOOL bUsedWithMaterialEffect :1 ; // 0x194 (0x4)
	BOOL bUsedWithMorphTargets :1 ; // 0x194 (0x4)
	BOOL bUsedWithRadialBlur :1 ; // 0x194 (0x4)
	BOOL bUsedWithInstancedMeshes :1 ; // 0x194 (0x4)
	BOOL bUsedWithSplineMeshes :1 ; // 0x194 (0x4)
	BOOL bUsedWithAPEXMeshes :1 ; // 0x194 (0x4)
	BOOL bUsedWithSPHFluid :1 ; // 0x194 (0x4)
	BOOL bUsedWithScreenDoorFade :1 ; // 0x194 (0x4)
	BOOL bUsedWithWires :1 ; // 0x194 (0x4)
	BOOL Wireframe :1 ; // 0x194 (0x4)
	BOOL bPerPixelCameraVector :1 ; // 0x194 (0x4)
	BOOL bAllowLightmapSpecular :1 ; // 0x194 (0x4)
	BOOL bNoDraw :1 ; // 0x194 (0x4)
	BOOL bFullResTransConsole :1 ; // 0x194 (0x4)
	BOOL bIsFallbackMaterial :1 ; // 0x194 (0x4)
	BOOL bUsesDistortion :1 ; // 0x194 (0x4)
	BOOL bIsMasked :1 ; // 0x194 (0x4)
	BOOL bIsPreviewMaterial :1 ; // 0x194 (0x4)
	const unsigned long: 0;
	struct FVector2MaterialInput Distortion; // 0x198 (0x28)
	unsigned char BlendMode; // 0x1C0 (0x1) (Enum = EBlendMode)
	unsigned char LightingModel; // 0x1C1 (0x1) (Enum = EMaterialLightingModel)
	unsigned char ParticleDownsampling; // 0x1C2 (0x1) (Enum = EParticleDownsampling)
	unsigned char D3D11TessellationMode; // 0x1C3 (0x1) (Enum = EMaterialTessellationMode)
	struct FColorMaterialInput CustomLighting; // 0x1C4 (0x24)
	struct FColorMaterialInput CustomSkylightDiffuse; // 0x1E8 (0x24)
	struct FVectorMaterialInput AnisotropicDirection; // 0x20C (0x2C)
	struct FScalarMaterialInput TwoSidedLightingMask; // 0x238 (0x24)
	struct FColorMaterialInput TwoSidedLightingColor; // 0x25C (0x24)
	struct FVectorMaterialInput WorldPositionOffset; // 0x280 (0x2C)
	struct FVectorMaterialInput WorldDisplacement; // 0x2AC (0x2C)
	struct FVector2MaterialInput TessellationFactors; // 0x2D8 (0x28)
	struct FPointer MaterialResources[2]; // 0x300 (0x8)
	struct FPointer DefaultMaterialInstances[3]; // 0x308 (0xC)
	int EditorX; // 0x314 (0x4)
	int EditorY; // 0x318 (0x4)
	int EditorPitch; // 0x31C (0x4)
	int EditorYaw; // 0x320 (0x4)
	struct TArray_UMaterialExpressionPtr Expressions; // 0x324 (0xC)
	const unsigned char Unknown1[0x3C]; // 0x330 (0x3C) UNKNOWN PROPERTY
	struct TArray_UTexturePtr ReferencedTextures; // 0x36C (0xC)
};

struct UMaterial {
	struct UObject_Data UObject;
	struct USurface_Data USurface;
	struct UMaterialInterface_Data UMaterialInterface;
	struct UMaterial_Data UMaterial;
};

// 0x44 
struct UMaterialExpression_Data {
	// Last Offset: 0x3C
	BOOL bRealtimePreview :1 ; // 0x3C (0x4)
	BOOL bNeedToUpdatePreview :1 ; // 0x3C (0x4)
	BOOL bIsParameterExpression :1 ; // 0x3C (0x4)
	BOOL bShowOutputNameOnPin :1 ; // 0x3C (0x4)
	BOOL bHidePreviewWindow :1 ; // 0x3C (0x4)
	BOOL bUsedByStaticParameterSet :1 ; // 0x3C (0x4)
	const unsigned long: 0;
	struct UMaterialExpressionCompound* Compound; // 0x40 (0x4)
};

struct UMaterialExpression {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
};

// 0xA0C 
struct UModel_Data {
	// Last Offset: 0x3C
	const unsigned char Unknown1[0x9D0]; // 0x3C (0x9D0) MISSING END DATA
};

struct UModel {
	struct UObject_Data UObject;
	struct UModel_Data UModel;
};

// 0x3C 
struct UMusicTrackDataStructures_Data {
	// Last Offset: 0x3C
};

struct UMusicTrackDataStructures {
	struct UObject_Data UObject;
	struct UMusicTrackDataStructures_Data UMusicTrackDataStructures;
};

// 0x2A0  (Alignment = 16)
struct UNavigationMeshBase_Data {
	// Last Offset: 0x3C
	const unsigned char Unknown1[0x264]; // 0x3C (0x264) MISSING END DATA
};

struct UNavigationMeshBase {
	struct UObject_Data UObject;
	struct UNavigationMeshBase_Data UNavigationMeshBase;
};

// 0x1CC 
struct UNetDriver_Data {
	// Last Offset: 0x40
	const unsigned char Unknown1[0x20]; // 0x40 (0x20) > LAST OFFSET
	float ConnectionTimeout; // 0x60 (0x4)
	float InitialConnectTimeout; // 0x64 (0x4)
	float KeepAliveTime; // 0x68 (0x4)
	float RelevantTimeout; // 0x6C (0x4)
	float SpawnPrioritySeconds; // 0x70 (0x4)
	float ServerTravelPause; // 0x74 (0x4)
	int MaxClientRate; // 0x78 (0x4)
	int MaxInternetClientRate; // 0x7C (0x4)
	int NetServerMaxTickRate; // 0x80 (0x4)
	BOOL bClampListenServerTickRate; // 0x84 (0x4)
	BOOL AllowDownloads; // 0x88 (0x4)
	BOOL AllowPeerConnections; // 0x8C (0x4)
	BOOL AllowPeerVoice :1 ; // 0x90 (0x4)
	const unsigned long: 0;
	const unsigned char Unknown2[0x18]; // 0x94 (0x18) > LAST OFFSET
	int MaxDownloadSize; // 0xAC (0x4)
	struct TArray_FString DownloadManagers; // 0xB0 (0xC)
	const unsigned char Unknown3[0xC0]; // 0xBC (0xC0) > LAST OFFSET
	struct FString NetConnectionClassName; // 0x17C (0xC)
	const unsigned char Unknown4[0x44]; // 0x188 (0x44) MISSING END DATA
};

struct UNetDriver {
	struct UObject_Data UObject;
	struct USubsystem_Data USubsystem;
	struct UNetDriver_Data UNetDriver;
};

// 0x290 
struct UDemoRecDriver_Data {
	// Last Offset: 0x1CC
	const unsigned char Unknown1[0x28]; // 0x1CC (0x28) > LAST OFFSET
	struct FString DemoSpectatorClass; // 0x1F4 (0xC)
	const unsigned char Unknown2[0x7C]; // 0x200 (0x7C) > LAST OFFSET
	int MaxRewindPoints; // 0x27C (0x4)
	const unsigned char Unknown3[0x4]; // 0x280 (0x4) > LAST OFFSET
	float RewindPointInterval; // 0x284 (0x4)
	int NumRecentRewindPoints; // 0x288 (0x4)
	const unsigned char Unknown4[0x4]; // 0x28C (0x4) MISSING END DATA
};

struct UDemoRecDriver {
	struct UObject_Data UObject;
	struct USubsystem_Data USubsystem;
	struct UNetDriver_Data UNetDriver;
	struct UDemoRecDriver_Data UDemoRecDriver;
};

// 0x48 
struct UObjectReferencer_Data {
	// Last Offset: 0x3C
	struct TArray_UObjectPtr ReferencedObjects; // 0x3C (0xC)
};

struct UObjectReferencer {
	struct UObject_Data UObject;
	struct UObjectReferencer_Data UObjectReferencer;
};

// 0xE0 
struct UOnlineSubsystem_Data {
	// Last Offset: 0x3C
	struct FPointer VfTable_FTickableObject; // 0x3C (0x4)
	struct FScriptInterface AccountInterface; // 0x40 (0x8)
	struct FScriptInterface PlayerInterface; // 0x48 (0x8)
	struct FScriptInterface PlayerInterfaceEx; // 0x50 (0x8)
	struct FScriptInterface SystemInterface; // 0x58 (0x8)
	struct FScriptInterface GameInterface; // 0x60 (0x8)
	struct FScriptInterface ContentInterface; // 0x68 (0x8)
	struct FScriptInterface VoiceInterface; // 0x70 (0x8)
	struct FScriptInterface StatsInterface; // 0x78 (0x8)
	struct FScriptInterface NewsInterface; // 0x80 (0x8)
	struct FScriptInterface PartyChatInterface; // 0x88 (0x8)
	struct FScriptInterface TitleFileInterface; // 0x90 (0x8)
	struct FScriptInterface AuthInterface; // 0x98 (0x8)
	struct TArray_FNamedInterface NamedInterfaces; // 0xA0 (0xC)
	struct TArray_FNamedInterfaceDef NamedInterfaceDefs; // 0xAC (0xC)
	struct TArray_FNamedSession Sessions; // 0xB8 (0xC)
	BOOL bUseBuildIdOverride :1 ; // 0xC4 (0x4)
	const unsigned long: 0;
	int BuildIdOverride; // 0xC8 (0x4)
	struct FString IniLocPatcherClassName; // 0xCC (0xC)
	struct UIniLocPatcher* Patcher; // 0xD8 (0x4)
	float AsyncMinCompletionTime; // 0xDC (0x4)
};

struct UOnlineSubsystem {
	struct UObject_Data UObject;
	struct UOnlineSubsystem_Data UOnlineSubsystem;
};

// 0x10C 
struct UOnlineAuthInterfaceBaseImpl_Data {
	// Last Offset: 0x3C
	BOOL bAuthReady :1 ; // 0x3C (0x4)
	const unsigned long: 0;
	struct TArray_FAuthSession ClientAuthSessions; // 0x40 (0xC)
	struct TArray_FAuthSession ServerAuthSessions; // 0x4C (0xC)
	struct TArray_FAuthSession PeerAuthSessions; // 0x58 (0xC)
	struct TArray_FLocalAuthSession LocalClientAuthSessions; // 0x64 (0xC)
	struct TArray_FLocalAuthSession LocalServerAuthSessions; // 0x70 (0xC)
	struct TArray_FLocalAuthSession LocalPeerAuthSessions; // 0x7C (0xC)
	struct FScriptDelegate __OnAuthReady__Delegate; // 0x88 (0xC)
	struct FScriptDelegate __OnAuthRequestClient__Delegate; // 0x94 (0xC)
	struct FScriptDelegate __OnAuthRequestServer__Delegate; // 0xA0 (0xC)
	struct FScriptDelegate __OnAuthBlobReceivedClient__Delegate; // 0xAC (0xC)
	struct FScriptDelegate __OnAuthBlobReceivedServer__Delegate; // 0xB8 (0xC)
	struct FScriptDelegate __OnAuthCompleteClient__Delegate; // 0xC4 (0xC)
	struct FScriptDelegate __OnAuthCompleteServer__Delegate; // 0xD0 (0xC)
	struct FScriptDelegate __OnAuthKillClient__Delegate; // 0xDC (0xC)
	struct FScriptDelegate __OnAuthRetryServer__Delegate; // 0xE8 (0xC)
	struct FScriptDelegate __OnClientConnectionClose__Delegate; // 0xF4 (0xC)
	struct FScriptDelegate __OnServerConnectionClose__Delegate; // 0x100 (0xC)
};

struct UOnlineAuthInterfaceBaseImpl {
	struct UObject_Data UObject;
	struct UOnlineAuthInterfaceBaseImpl_Data UOnlineAuthInterfaceBaseImpl;
};

// 0x3C 
struct UOnlineMatchmakingStats_Data {
	// Last Offset: 0x3C
};

struct UOnlineMatchmakingStats {
	struct UObject_Data UObject;
	struct UOnlineMatchmakingStats_Data UOnlineMatchmakingStats;
};

// 0x68 
struct UOnlinePlayerStorage_Data {
	// Last Offset: 0x3C
	int VersionNumber; // 0x3C (0x4)
	int VersionSettingsId; // 0x40 (0x4)
	int SaveCountSettingId; // 0x44 (0x4)
	struct TArray_FOnlineProfileSetting ProfileSettings; // 0x48 (0xC)
	struct TArray_FSettingsPropertyPropertyMetaData ProfileMappings; // 0x54 (0xC)
	unsigned char AsyncState; // 0x60 (0x1) (Enum = EOnlinePlayerStorageAsyncState)
	const unsigned char Unknown1[0x3]; // 0x61 (0x3) > LAST OFFSET
	int DeviceID; // 0x64 (0x4)
};

struct UOnlinePlayerStorage {
	struct UObject_Data UObject;
	struct UOnlinePlayerStorage_Data UOnlinePlayerStorage;
};

// 0x98 
struct UOnlineProfileSettings_Data {
	// Last Offset: 0x68
	struct TArray_int ProfileSettingIds; // 0x68 (0xC)
	struct TArray_FOnlineProfileSetting DefaultSettings; // 0x74 (0xC)
	struct TArray_FOnlineProfileSetting DefaultConsoleSettings; // 0x80 (0xC)
	struct TArray_FIdToStringMapping OwnerMappings; // 0x8C (0xC)
};

struct UOnlineProfileSettings {
	struct UObject_Data UObject;
	struct UOnlinePlayerStorage_Data UOnlinePlayerStorage;
	struct UOnlineProfileSettings_Data UOnlineProfileSettings;
};

// 0x48 
struct UOnlineStats_Data {
	// Last Offset: 0x3C
	struct TArray_FStringIdToStringMapping ViewIdMappings; // 0x3C (0xC)
};

struct UOnlineStats {
	struct UObject_Data UObject;
	struct UOnlineStats_Data UOnlineStats;
};

// 0x88 
struct UOnlineStatsRead_Data {
	// Last Offset: 0x48
	int ViewId; // 0x48 (0x4)
	int SortColumnId; // 0x4C (0x4)
	struct TArray_int ColumnIds; // 0x50 (0xC)
	int TotalRowsInView; // 0x5C (0x4)
	struct TArray_FOnlineStatsRow Rows; // 0x60 (0xC)
	struct TArray_FColumnMetaData ColumnMappings; // 0x6C (0xC)
	struct FString ViewName; // 0x78 (0xC)
	int TitleId; // 0x84 (0x4)
};

struct UOnlineStatsRead {
	struct UObject_Data UObject;
	struct UOnlineStats_Data UOnlineStats;
	struct UOnlineStatsRead_Data UOnlineStatsRead;
};

// 0x88 
struct UOnlineStatsWrite_Data {
	// Last Offset: 0x48
	struct TArray_FStringIdToStringMapping StatMappings; // 0x48 (0xC)
	struct TArray_FSettingsProperty Properties; // 0x54 (0xC)
	struct TArray_int ViewIds; // 0x60 (0xC)
	struct TArray_int ArbitratedViewIds; // 0x6C (0xC)
	int RatingId; // 0x78 (0x4)
	struct FScriptDelegate __OnStatsWriteComplete__Delegate; // 0x7C (0xC)
};

struct UOnlineStatsWrite {
	struct UObject_Data UObject;
	struct UOnlineStats_Data UOnlineStats;
	struct UOnlineStatsWrite_Data UOnlineStatsWrite;
};

// 0xC4 
struct UPackageMapLevel_Data {
	// Last Offset: 0xC0
	const unsigned char Unknown1[0x4]; // 0xC0 (0x4) MISSING END DATA
};

struct UPackageMapLevel {
	struct UObject_Data UObject;
	struct UPackageMap_Data UPackageMap;
	struct UPackageMapLevel_Data UPackageMapLevel;
};

// 0xC4 
struct UPackageMapSeekFree_Data {
	// Last Offset: 0xC4
};

struct UPackageMapSeekFree {
	struct UObject_Data UObject;
	struct UPackageMap_Data UPackageMap;
	struct UPackageMapLevel_Data UPackageMapLevel;
	struct UPackageMapSeekFree_Data UPackageMapSeekFree;
};

// 0x80 
struct UPatchScriptCommandlet_Data {
	// Last Offset: 0x7C
	const unsigned char Unknown1[0x4]; // 0x7C (0x4) MISSING END DATA
};

struct UPatchScriptCommandlet {
	struct UObject_Data UObject;
	struct UCommandlet_Data UCommandlet;
	struct UPatchScriptCommandlet_Data UPatchScriptCommandlet;
};

// 0x60 
struct UPlayer_Data {
	// Last Offset: 0x3C
	struct FPointer VfTable_FExec; // 0x3C (0x4)
	struct APlayerController* Actor; // 0x40 (0x4)
	int CurrentNetSpeed; // 0x44 (0x4)
	int ConfiguredInternetSpeed; // 0x48 (0x4)
	int ConfiguredLanSpeed; // 0x4C (0x4)
	float PP_DesaturationMultiplier; // 0x50 (0x4)
	float PP_HighlightsMultiplier; // 0x54 (0x4)
	float PP_MidTonesMultiplier; // 0x58 (0x4)
	float PP_ShadowsMultiplier; // 0x5C (0x4)
};

struct UPlayer {
	struct UObject_Data UObject;
	struct UPlayer_Data UPlayer;
};

// 0x334  (Alignment = 16)
struct ULocalPlayer_Data {
	// Last Offset: 0x60
	struct FPointer VfTable_FObserverInterface; // 0x60 (0x4)
	int ControllerId; // 0x64 (0x4)
	struct UGameViewportClient* ViewportClient; // 0x68 (0x4)
	struct FVector2D Origin; // 0x6C (0x8)
	struct FVector2D Size; // 0x74 (0x8)
	struct UPostProcessChain* PlayerPostProcess; // 0x7C (0x4)
	struct TArray_UPostProcessChainPtr PlayerPostProcessChains; // 0x80 (0xC)
	struct FPointer ViewState; // 0x8C (0x4)
	struct FSynchronizedActorVisibilityHistory ActorVisibilityHistory; // 0x90 (0x8)
	struct FVector LastViewLocation; // 0x98 (0xC)
	struct FCurrentPostProcessVolumeInfo CurrentPPInfo; // 0xA4 (0xF4)
	struct FCurrentPostProcessVolumeInfo LevelPPInfo; // 0x198 (0xF4)
	struct TArray_FPostProcessSettingsOverride ActivePPOverrides; // 0x28C (0xC)
	struct TArray_FWorldLightingOverride WorldLightingOverrides; // 0x298 (0xC)
	unsigned char AspectRatioAxisConstraint; // 0x2A4 (0x1) (Enum = EAspectRatioAxisConstraint)
	const unsigned char Unknown1[0x3]; // 0x2A5 (0x3) > LAST OFFSET
	struct FString LastMap; // 0x2A8 (0xC)
	BOOL bWantToResetToMapDefaultPP :1 ; // 0x2B4 (0x4)
	BOOL bSentSplitJoin :1 ; // 0x2B4 (0x4)
	BOOL bPendingServerAuth :1 ; // 0x2B4 (0x4)
	BOOL bLobbyWasShown :1 ; // 0x2B4 (0x4)
	const unsigned long: 0;
	struct UTranslationContext* TagContext; // 0x2B8 (0x4)
	struct UOnlineAuthInterfaceBaseImpl* CachedAuthInt; // 0x2BC (0x4)
	float ServerAuthTimestamp; // 0x2C0 (0x4)
	int ServerAuthTimeout; // 0x2C4 (0x4)
	int ServerAuthRetryCount; // 0x2C8 (0x4)
	int MaxServerAuthRetryCount; // 0x2CC (0x4)
	struct FUniqueNetId ServerAuthUID; // 0x2D0 (0x18)
	const unsigned char Unknown2[0x8]; // 0x2E8 (0x8) > LAST OFFSET
	struct FMatrix ViewProjectionMatrix; // 0x2F0 (0x40)
	float ViewProjMatTimestamp; // 0x330 (0x4)
};

struct ULocalPlayer {
	struct UObject_Data UObject;
	struct UPlayer_Data UPlayer;
	struct ULocalPlayer_Data ULocalPlayer;
};

// 0x5058 
struct UNetConnection_Data {
	// Last Offset: 0x60
	const unsigned char Unknown1[0x4FA4]; // 0x60 (0x4FA4) > LAST OFFSET
	struct TArray_UChildConnectionPtr Children; // 0x5004 (0xC)
	const unsigned char Unknown2[0x48]; // 0x5010 (0x48) MISSING END DATA
};

struct UNetConnection {
	struct UObject_Data UObject;
	struct UPlayer_Data UPlayer;
	struct UNetConnection_Data UNetConnection;
};

// 0x505C 
struct UChildConnection_Data {
	// Last Offset: 0x5058
	struct UNetConnection* Parent; // 0x5058 (0x4)
};

struct UChildConnection {
	struct UObject_Data UObject;
	struct UPlayer_Data UPlayer;
	struct UNetConnection_Data UNetConnection;
	struct UChildConnection_Data UChildConnection;
};

// 0x5058 
struct UDemoRecConnection_Data {
	// Last Offset: 0x5058
};

struct UDemoRecConnection {
	struct UObject_Data UObject;
	struct UPlayer_Data UPlayer;
	struct UNetConnection_Data UNetConnection;
	struct UDemoRecConnection_Data UDemoRecConnection;
};

// 0x4C 
struct UPolys_Data {
	// Last Offset: 0x3C
	const unsigned char Unknown1[0x10]; // 0x3C (0x10) MISSING END DATA
};

struct UPolys {
	struct UObject_Data UObject;
	struct UPolys_Data UPolys;
};

// 0x48 
struct UPostProcessChain_Data {
	// Last Offset: 0x3C
	struct TArray_UPostProcessEffectPtr Effects; // 0x3C (0xC)
};

struct UPostProcessChain {
	struct UObject_Data UObject;
	struct UPostProcessChain_Data UPostProcessChain;
};

// 0x61 
struct UPostProcessEffect_Data {
	// Last Offset: 0x3C
	BOOL bShowInEditor :1 ; // 0x3C (0x4)
	BOOL bShowInGame :1 ; // 0x3C (0x4)
	BOOL bUseWorldSettings :1 ; // 0x3C (0x4)
	BOOL bAffectsLightingOnly :1 ; // 0x3C (0x4)
	const unsigned long: 0;
	struct FName EffectName; // 0x40 (0x8)
	int NodePosY; // 0x48 (0x4)
	int NodePosX; // 0x4C (0x4)
	int DrawWidth; // 0x50 (0x4)
	int DrawHeight; // 0x54 (0x4)
	int OutDrawY; // 0x58 (0x4)
	int InDrawY; // 0x5C (0x4)
	unsigned char SceneDPG; // 0x60 (0x1) (Enum = ESceneDepthPriorityGroup)
};

struct UPostProcessEffect {
	struct UObject_Data UObject;
	struct UPostProcessEffect_Data UPostProcessEffect;
};

// 0x64 
struct UAccumulateAlphaEffect_Data {
	// Last Offset: 0x64
};

struct UAccumulateAlphaEffect {
	struct UObject_Data UObject;
	struct UPostProcessEffect_Data UPostProcessEffect;
	struct UAccumulateAlphaEffect_Data UAccumulateAlphaEffect;
};

// 0xC0 
struct UAmbientOcclusionEffect_Data {
	// Last Offset: 0x64
	struct FLinearColor OcclusionColor; // 0x64 (0x10)
	float OcclusionPower; // 0x74 (0x4)
	float OcclusionScale; // 0x78 (0x4)
	float OcclusionBias; // 0x7C (0x4)
	float MinOcclusion; // 0x80 (0x4)
	BOOL SSAO2 :1 ; // 0x84 (0x4)
	BOOL bAngleBasedSSAO :1 ; // 0x84 (0x4)
	const unsigned long: 0;
	float OcclusionRadius; // 0x88 (0x4)
	float OcclusionAttenuation; // 0x8C (0x4)
	unsigned char OcclusionQuality; // 0x90 (0x1) (Enum = EAmbientOcclusionQuality)
	const unsigned char Unknown1[0x3]; // 0x91 (0x3) > LAST OFFSET
	float OcclusionFadeoutMinDistance; // 0x94 (0x4)
	float OcclusionFadeoutMaxDistance; // 0x98 (0x4)
	float HaloDistanceThreshold; // 0x9C (0x4)
	float HaloDistanceScale; // 0xA0 (0x4)
	float HaloOcclusion; // 0xA4 (0x4)
	float EdgeDistanceThreshold; // 0xA8 (0x4)
	float EdgeDistanceScale; // 0xAC (0x4)
	float FilterDistanceScale; // 0xB0 (0x4)
	int FilterSize; // 0xB4 (0x4)
	float HistoryConvergenceTime; // 0xB8 (0x4)
	float HistoryWeightConvergenceTime; // 0xBC (0x4)
};

struct UAmbientOcclusionEffect {
	struct UObject_Data UObject;
	struct UPostProcessEffect_Data UPostProcessEffect;
	struct UAmbientOcclusionEffect_Data UAmbientOcclusionEffect;
};

// 0x68 
struct UBlurEffect_Data {
	// Last Offset: 0x64
	int BlurKernelSize; // 0x64 (0x4)
};

struct UBlurEffect {
	struct UObject_Data UObject;
	struct UPostProcessEffect_Data UPostProcessEffect;
	struct UBlurEffect_Data UBlurEffect;
};

// 0xC0 
struct UDOFEffect_Data {
	// Last Offset: 0x64
	float FalloffExponent; // 0x64 (0x4)
	float BlurKernelSize; // 0x68 (0x4)
	float MaxNearBlurAmount; // 0x6C (0x4)
	float MinBlurAmount; // 0x70 (0x4)
	float MaxFarBlurAmount; // 0x74 (0x4)
	unsigned char FocusType; // 0x78 (0x1) (Enum = EFocusType)
	const unsigned char Unknown1[0x3]; // 0x79 (0x3) > LAST OFFSET
	float FocusInnerRadius; // 0x7C (0x4)
	float FocusDistance; // 0x80 (0x4)
	struct FVector FocusPosition; // 0x84 (0xC)
	float TunnelVisionScale; // 0x90 (0x4)
	float TunnelVisionYOffset; // 0x94 (0x4)
	BOOL bOverrideDOFSettings :1 ; // 0x98 (0x4)
	const unsigned long: 0;
	float FalloffExponentOverride; // 0x9C (0x4)
	float BlurKernelSizeOverride; // 0xA0 (0x4)
	float MaxNearBlurAmountOverride; // 0xA4 (0x4)
	float MaxFarBlurAmountOverride; // 0xA8 (0x4)
	float MinBlurAmountOverride; // 0xAC (0x4)
	float FocusInnerRadiusOverride; // 0xB0 (0x4)
	float FocusDistanceOverride; // 0xB4 (0x4)
	float TunnelVisionScaleOverride; // 0xB8 (0x4)
	float TunnelVisionYOffsetOverride; // 0xBC (0x4)
};

struct UDOFEffect {
	struct UObject_Data UObject;
	struct UPostProcessEffect_Data UPostProcessEffect;
	struct UDOFEffect_Data UDOFEffect;
};

// 0xE4 
struct UDOFAndBloomEffect_Data {
	// Last Offset: 0xC0
	float BloomScale; // 0xC0 (0x4)
	float BloomThreshold; // 0xC4 (0x4)
	struct FColor BloomTint; // 0xC8 (0x4)
	float BloomScreenBlendThreshold; // 0xCC (0x4)
	float SceneMultiplier; // 0xD0 (0x4)
	float BlurBloomKernelSize; // 0xD4 (0x4)
	BOOL bEnableReferenceDOF :1 ; // 0xD8 (0x4)
	const unsigned long: 0;
	unsigned char DepthOfFieldType; // 0xDC (0x1) (Enum = EDOFType)
	unsigned char DepthOfFieldQuality; // 0xDD (0x1) (Enum = EDOFQuality)
	const unsigned char Unknown1[0x2]; // 0xDE (0x2) > LAST OFFSET
	struct UTexture2D* BokehTexture; // 0xE0 (0x4)
};

struct UDOFAndBloomEffect {
	struct UObject_Data UObject;
	struct UPostProcessEffect_Data UPostProcessEffect;
	struct UDOFEffect_Data UDOFEffect;
	struct UDOFAndBloomEffect_Data UDOFAndBloomEffect;
};

// 0xF8 
struct UDOFBloomMotionBlurEffect_Data {
	// Last Offset: 0xE4
	float MaxVelocity; // 0xE4 (0x4)
	float MotionBlurAmount; // 0xE8 (0x4)
	BOOL FullMotionBlur :1 ; // 0xEC (0x4)
	const unsigned long: 0;
	float CameraRotationThreshold; // 0xF0 (0x4)
	float CameraTranslationThreshold; // 0xF4 (0x4)
};

struct UDOFBloomMotionBlurEffect {
	struct UObject_Data UObject;
	struct UPostProcessEffect_Data UPostProcessEffect;
	struct UDOFEffect_Data UDOFEffect;
	struct UDOFAndBloomEffect_Data UDOFAndBloomEffect;
	struct UDOFBloomMotionBlurEffect_Data UDOFBloomMotionBlurEffect;
};

// 0x198 
struct UUberPostProcessEffect_Data {
	// Last Offset: 0xF8
	struct FVector SceneShadows; // 0xF8 (0xC)
	struct FVector SceneHighLights; // 0x104 (0xC)
	struct FVector SceneMidTones; // 0x110 (0xC)
	float SceneDesaturation; // 0x11C (0x4)
	struct FVector SceneColorize; // 0x120 (0xC)
	BOOL VignetteEnabled :1 ; // 0x12C (0x4)
	BOOL bEnableImageGrain :1 ; // 0x12C (0x4)
	BOOL bScaleEffectsWithViewSize :1 ; // 0x12C (0x4)
	BOOL bEnableHDRTonemapper :1 ; // 0x12C (0x4)
	const unsigned long: 0;
	struct FLinearColor VignetteColor; // 0x130 (0x10)
	float VignetteBrightness; // 0x140 (0x4)
	struct UTexture* VignetteTexture; // 0x144 (0x4)
	unsigned char TonemapperType; // 0x148 (0x1) (Enum = ETonemapperType)
	const unsigned char Unknown1[0x3]; // 0x149 (0x3) > LAST OFFSET
	float TonemapperRange; // 0x14C (0x4)
	float TonemapperToeFactor; // 0x150 (0x4)
	float TonemapperScale; // 0x154 (0x4)
	float MotionBlurSoftEdgeKernelSize; // 0x158 (0x4)
	float SceneImageGrainScale; // 0x15C (0x4)
	float BloomWeightSmall; // 0x160 (0x4)
	float BloomWeightMedium; // 0x164 (0x4)
	float BloomWeightLarge; // 0x168 (0x4)
	float BloomSizeScaleSmall; // 0x16C (0x4)
	float BloomSizeScaleMedium; // 0x170 (0x4)
	float BloomSizeScaleLarge; // 0x174 (0x4)
	struct FLUTBlender PreviousLUTBlender; // 0x178 (0x1C)
	float SceneHDRTonemapperScale; // 0x194 (0x4)
};

struct UUberPostProcessEffect {
	struct UObject_Data UObject;
	struct UPostProcessEffect_Data UPostProcessEffect;
	struct UDOFEffect_Data UDOFEffect;
	struct UDOFAndBloomEffect_Data UDOFAndBloomEffect;
	struct UDOFBloomMotionBlurEffect_Data UDOFBloomMotionBlurEffect;
	struct UUberPostProcessEffect_Data UUberPostProcessEffect;
};

// 0x64 
struct UDwTriovizImplEffect_Data {
	// Last Offset: 0x64
};

struct UDwTriovizImplEffect {
	struct UObject_Data UObject;
	struct UPostProcessEffect_Data UPostProcessEffect;
	struct UDwTriovizImplEffect_Data UDwTriovizImplEffect;
};

// 0x64 
struct UFXAAEffect_Data {
	// Last Offset: 0x64
};

struct UFXAAEffect {
	struct UObject_Data UObject;
	struct UPostProcessEffect_Data UPostProcessEffect;
	struct UFXAAEffect_Data UFXAAEffect;
};

// 0x68 
struct UMaterialEffect_Data {
	// Last Offset: 0x64
	struct UMaterialInterface* Material; // 0x64 (0x4)
};

struct UMaterialEffect {
	struct UObject_Data UObject;
	struct UPostProcessEffect_Data UPostProcessEffect;
	struct UMaterialEffect_Data UMaterialEffect;
};

// 0x78 
struct UMotionBlurEffect_Data {
	// Last Offset: 0x64
	float MaxVelocity; // 0x64 (0x4)
	float MotionBlurAmount; // 0x68 (0x4)
	BOOL FullMotionBlur :1 ; // 0x6C (0x4)
	const unsigned long: 0;
	float CameraRotationThreshold; // 0x70 (0x4)
	float CameraTranslationThreshold; // 0x74 (0x4)
};

struct UMotionBlurEffect {
	struct UObject_Data UObject;
	struct UPostProcessEffect_Data UPostProcessEffect;
	struct UMotionBlurEffect_Data UMotionBlurEffect;
};

// 0x40 
struct UPrimitiveComponentFactory_Data {
	// Last Offset: 0x3C
	BOOL CollideActors :1 ; // 0x3C (0x4)
	BOOL BlockActors :1 ; // 0x3C (0x4)
	BOOL BlockZeroExtent :1 ; // 0x3C (0x4)
	BOOL BlockNonZeroExtent :1 ; // 0x3C (0x4)
	BOOL BlockRigidBody :1 ; // 0x3C (0x4)
	BOOL HiddenGame :1 ; // 0x3C (0x4)
	BOOL HiddenEditor :1 ; // 0x3C (0x4)
	BOOL CastShadow :1 ; // 0x3C (0x4)
	const unsigned long: 0;
};

struct UPrimitiveComponentFactory {
	struct UObject_Data UObject;
	struct UPrimitiveComponentFactory_Data UPrimitiveComponentFactory;
};

// 0x4C 
struct UMeshComponentFactory_Data {
	// Last Offset: 0x40
	struct TArray_UMaterialInterfacePtr Materials; // 0x40 (0xC)
};

struct UMeshComponentFactory {
	struct UObject_Data UObject;
	struct UPrimitiveComponentFactory_Data UPrimitiveComponentFactory;
	struct UMeshComponentFactory_Data UMeshComponentFactory;
};

// 0x50 
struct UStaticMeshComponentFactory_Data {
	// Last Offset: 0x4C
	struct UStaticMesh* StaticMesh; // 0x4C (0x4)
};

struct UStaticMeshComponentFactory {
	struct UObject_Data UObject;
	struct UPrimitiveComponentFactory_Data UPrimitiveComponentFactory;
	struct UMeshComponentFactory_Data UMeshComponentFactory;
	struct UStaticMeshComponentFactory_Data UStaticMeshComponentFactory;
};

// 0x84 
struct UReachSpec_Data {
	// Last Offset: 0x3C
	struct FPointer NavOctreeObject; // 0x3C (0x4)
	struct FVector Direction; // 0x40 (0xC)
	struct AActor* BlockedBy; // 0x4C (0x4)
	int MaxLandingVelocity; // 0x50 (0x4)
	int Distance; // 0x54 (0x4)
	struct ANavigationPoint* Start; // 0x58 (0x4)
	struct FActorReference End; // 0x5C (0x14)
	int CollisionRadius; // 0x70 (0x4)
	int CollisionHeight; // 0x74 (0x4)
	int reachFlags; // 0x78 (0x4)
	unsigned char bPruned; // 0x7C (0x1)
	unsigned char PathColorIndex; // 0x7D (0x1)
	const unsigned char Unknown1[0x2]; // 0x7E (0x2) > LAST OFFSET
	BOOL bAddToNavigationOctree :1 ; // 0x80 (0x4)
	BOOL bCanCutCorners :1 ; // 0x80 (0x4)
	BOOL bCheckForObstructions :1 ; // 0x80 (0x4)
	BOOL bSkipPrune :1 ; // 0x80 (0x4)
	BOOL bDisabled :1 ; // 0x80 (0x4)
	BOOL bRequiresSpecialMovement :1 ; // 0x80 (0x4)
	const unsigned long: 0;
};

struct UReachSpec {
	struct UObject_Data UObject;
	struct UReachSpec_Data UReachSpec;
};

// 0x84 
struct UAdvancedReachSpec_Data {
	// Last Offset: 0x84
};

struct UAdvancedReachSpec {
	struct UObject_Data UObject;
	struct UReachSpec_Data UReachSpec;
	struct UAdvancedReachSpec_Data UAdvancedReachSpec;
};

// 0x84 
struct UCeilingReachSpec_Data {
	// Last Offset: 0x84
};

struct UCeilingReachSpec {
	struct UObject_Data UObject;
	struct UReachSpec_Data UReachSpec;
	struct UCeilingReachSpec_Data UCeilingReachSpec;
};

// 0x84 
struct UForcedReachSpec_Data {
	// Last Offset: 0x84
};

struct UForcedReachSpec {
	struct UObject_Data UObject;
	struct UReachSpec_Data UReachSpec;
	struct UForcedReachSpec_Data UForcedReachSpec;
};

// 0x85 
struct UCoverSlipReachSpec_Data {
	// Last Offset: 0x84
	unsigned char SpecDirection; // 0x84 (0x1)
};

struct UCoverSlipReachSpec {
	struct UObject_Data UObject;
	struct UReachSpec_Data UReachSpec;
	struct UForcedReachSpec_Data UForcedReachSpec;
	struct UCoverSlipReachSpec_Data UCoverSlipReachSpec;
};

// 0x84 
struct UFloorToCeilingReachSpec_Data {
	// Last Offset: 0x84
};

struct UFloorToCeilingReachSpec {
	struct UObject_Data UObject;
	struct UReachSpec_Data UReachSpec;
	struct UForcedReachSpec_Data UForcedReachSpec;
	struct UFloorToCeilingReachSpec_Data UFloorToCeilingReachSpec;
};

// 0x88 
struct UMantleReachSpec_Data {
	// Last Offset: 0x84
	BOOL bClimbUp :1 ; // 0x84 (0x4)
	const unsigned long: 0;
};

struct UMantleReachSpec {
	struct UObject_Data UObject;
	struct UReachSpec_Data UReachSpec;
	struct UForcedReachSpec_Data UForcedReachSpec;
	struct UMantleReachSpec_Data UMantleReachSpec;
};

// 0x85 
struct USlotToSlotReachSpec_Data {
	// Last Offset: 0x84
	unsigned char SpecDirection; // 0x84 (0x1)
};

struct USlotToSlotReachSpec {
	struct UObject_Data UObject;
	struct UReachSpec_Data UReachSpec;
	struct UForcedReachSpec_Data UForcedReachSpec;
	struct USlotToSlotReachSpec_Data USlotToSlotReachSpec;
};

// 0x85 
struct USwatTurnReachSpec_Data {
	// Last Offset: 0x84
	unsigned char SpecDirection; // 0x84 (0x1)
};

struct USwatTurnReachSpec {
	struct UObject_Data UObject;
	struct UReachSpec_Data UReachSpec;
	struct UForcedReachSpec_Data UForcedReachSpec;
	struct USwatTurnReachSpec_Data USwatTurnReachSpec;
};

// 0x84 
struct UWallTransReachSpec_Data {
	// Last Offset: 0x84
};

struct UWallTransReachSpec {
	struct UObject_Data UObject;
	struct UReachSpec_Data UReachSpec;
	struct UForcedReachSpec_Data UForcedReachSpec;
	struct UWallTransReachSpec_Data UWallTransReachSpec;
};

// 0x84 
struct ULadderReachSpec_Data {
	// Last Offset: 0x84
};

struct ULadderReachSpec {
	struct UObject_Data UObject;
	struct UReachSpec_Data UReachSpec;
	struct ULadderReachSpec_Data ULadderReachSpec;
};

// 0x84 
struct UProscribedReachSpec_Data {
	// Last Offset: 0x84
};

struct UProscribedReachSpec {
	struct UObject_Data UObject;
	struct UReachSpec_Data UReachSpec;
	struct UProscribedReachSpec_Data UProscribedReachSpec;
};

// 0x84 
struct UTeleportReachSpec_Data {
	// Last Offset: 0x84
};

struct UTeleportReachSpec {
	struct UObject_Data UObject;
	struct UReachSpec_Data UReachSpec;
	struct UTeleportReachSpec_Data UTeleportReachSpec;
};

// 0xE8 
struct USavedMove_Data {
	// Last Offset: 0x3C
	struct USavedMove* NextMove; // 0x3C (0x4)
	float TimeStamp; // 0x40 (0x4)
	float Delta; // 0x44 (0x4)
	BOOL bRun :1 ; // 0x48 (0x4)
	BOOL bDuck :1 ; // 0x48 (0x4)
	BOOL bPressedJump :1 ; // 0x48 (0x4)
	BOOL bDoubleJump :1 ; // 0x48 (0x4)
	BOOL bPreciseDestination :1 ; // 0x48 (0x4)
	BOOL bForceRMVelocity :1 ; // 0x48 (0x4)
	BOOL bForceMaxAccel :1 ; // 0x48 (0x4)
	BOOL bRootMotionFromInterpCurve :1 ; // 0x48 (0x4)
	const unsigned long: 0;
	unsigned char DoubleClickMove; // 0x4C (0x1) (Enum = EDoubleClickDir)
	unsigned char SavedPhysics; // 0x4D (0x1) (Enum = EPhysics)
	unsigned char AnalogPct; // 0x4E (0x1)
	unsigned char RootMotionMode; // 0x4F (0x1) (Enum = ERootMotionMode)
	struct FVector StartLocation; // 0x50 (0xC)
	struct FVector StartRelativeLocation; // 0x5C (0xC)
	struct FVector StartVelocity; // 0x68 (0xC)
	struct FVector StartFloor; // 0x74 (0xC)
	struct FVector SavedLocation; // 0x80 (0xC)
	struct FVector SavedVelocity; // 0x8C (0xC)
	struct FVector SavedRelativeLocation; // 0x98 (0xC)
	struct FVector RMVelocity; // 0xA4 (0xC)
	struct FVector Acceleration; // 0xB0 (0xC)
	struct FRotator Rotation; // 0xBC (0xC)
	struct AActor* StartBase; // 0xC8 (0x4)
	struct AActor* EndBase; // 0xCC (0x4)
	float CustomTimeDilation; // 0xD0 (0x4)
	float AccelDotThreshold; // 0xD4 (0x4)
	float RootMotionInterpCurrentTime; // 0xD8 (0x4)
	struct FVector RootMotionInterpCurveLastValue; // 0xDC (0xC)
};

struct USavedMove {
	struct UObject_Data UObject;
	struct USavedMove_Data USavedMove;
};

// 0x50 
struct USaveGameSummary_Data {
	// Last Offset: 0x3C
	struct FName BaseLevel; // 0x3C (0x8)
	struct FString Description; // 0x44 (0xC)
};

struct USaveGameSummary {
	struct UObject_Data UObject;
	struct USaveGameSummary_Data USaveGameSummary;
};

// 0x60 
struct USelection_Data {
	// Last Offset: 0x3C
	const unsigned char Unknown1[0x24]; // 0x3C (0x24) MISSING END DATA
};

struct USelection {
	struct UObject_Data UObject;
	struct USelection_Data USelection;
};

// 0x7C 
struct UServerCommandlet_Data {
	// Last Offset: 0x7C
};

struct UServerCommandlet {
	struct UObject_Data UObject;
	struct UCommandlet_Data UCommandlet;
	struct UServerCommandlet_Data UServerCommandlet;
};

// 0x6C 
struct USettings_Data {
	// Last Offset: 0x3C
	struct TArray_FLocalizedStringSetting LocalizedSettings; // 0x3C (0xC)
	struct TArray_FSettingsProperty Properties; // 0x48 (0xC)
	struct TArray_FLocalizedStringSettingMetaData LocalizedSettingsMappings; // 0x54 (0xC)
	struct TArray_FSettingsPropertyPropertyMetaData PropertyMappings; // 0x60 (0xC)
};

struct USettings {
	struct UObject_Data UObject;
	struct USettings_Data USettings;
};

// 0xF8 
struct UOnlineGameSearch_Data {
	// Last Offset: 0x6C
	int MaxSearchResults; // 0x6C (0x4)
	struct FLocalizedStringSetting Query; // 0x70 (0xC)
	BOOL bIsLanQuery :1 ; // 0x7C (0x4)
	BOOL bUsesArbitration :1 ; // 0x7C (0x4)
	BOOL bIsSearchInProgress :1 ; // 0x7C (0x4)
	const unsigned long: 0;
	struct UClass* GameSettingsClass; // 0x80 (0x4)
	struct TArray_FOnlineGameSearchResult Results; // 0x84 (0xC)
	struct FOverrideSkill ManualSkillOverride; // 0x90 (0x28)
	struct TArray_FNamedObjectProperty NamedProperties; // 0xB8 (0xC)
	struct FOnlineGameSearchQuery FilterQuery; // 0xC4 (0x18)
	struct FString AdditionalSearchCriteria; // 0xDC (0xC)
	int PingBucketSize; // 0xE8 (0x4)
	int NumPingProbes; // 0xEC (0x4)
	int MaxPingBytes; // 0xF0 (0x4)
	int NumSearchUsers; // 0xF4 (0x4)
};

struct UOnlineGameSearch {
	struct UObject_Data UObject;
	struct USettings_Data USettings;
	struct UOnlineGameSearch_Data UOnlineGameSearch;
};

// 0xC8 
struct UOnlineGameSettings_Data {
	// Last Offset: 0x6C
	int NumPublicConnections; // 0x6C (0x4)
	int NumPrivateConnections; // 0x70 (0x4)
	int NumOpenPublicConnections; // 0x74 (0x4)
	int NumOpenPrivateConnections; // 0x78 (0x4)
	struct FQWord ServerNonce; // 0x7C (0x8)
	BOOL bShouldAdvertise :1 ; // 0x84 (0x4)
	BOOL bIsLanMatch :1 ; // 0x84 (0x4)
	BOOL bUsesStats :1 ; // 0x84 (0x4)
	BOOL bAllowJoinInProgress :1 ; // 0x84 (0x4)
	BOOL bAllowInvites :1 ; // 0x84 (0x4)
	BOOL bUsesPresence :1 ; // 0x84 (0x4)
	BOOL bAllowJoinViaPresence :1 ; // 0x84 (0x4)
	BOOL bAllowJoinViaPresenceFriendsOnly :1 ; // 0x84 (0x4)
	BOOL bUsesArbitration :1 ; // 0x84 (0x4)
	BOOL bAntiCheatProtected :1 ; // 0x84 (0x4)
	BOOL bWasFromInvite :1 ; // 0x84 (0x4)
	BOOL bIsDedicated :1 ; // 0x84 (0x4)
	BOOL bHasSkillUpdateInProgress :1 ; // 0x84 (0x4)
	BOOL bShouldShrinkArbitratedSessions :1 ; // 0x84 (0x4)
	const unsigned long: 0;
	struct FString OwningPlayerName; // 0x88 (0xC)
	struct FUniqueNetId OwningPlayerId; // 0x94 (0x18)
	int PingInMs; // 0xAC (0x4)
	float MatchQuality; // 0xB0 (0x4)
	unsigned char GameState; // 0xB4 (0x1) (Enum = EOnlineGameState)
	const unsigned char Unknown1[0x3]; // 0xB5 (0x3) > LAST OFFSET
	int BuildUniqueId; // 0xB8 (0x4)
	struct FString BuildUniqueString; // 0xBC (0xC)
};

struct UOnlineGameSettings {
	struct UObject_Data UObject;
	struct USettings_Data USettings;
	struct UOnlineGameSettings_Data UOnlineGameSettings;
};

// 0xFC 
struct UShaderCache_Data {
	// Last Offset: 0x3C
	const unsigned char Unknown1[0xC0]; // 0x3C (0xC0) MISSING END DATA
};

struct UShaderCache {
	struct UObject_Data UObject;
	struct UShaderCache_Data UShaderCache;
};

// 0x7C 
struct UShadowMap1D_Data {
	// Last Offset: 0x3C
	const unsigned char Unknown1[0x40]; // 0x3C (0x40) MISSING END DATA
};

struct UShadowMap1D {
	struct UObject_Data UObject;
	struct UShadowMap1D_Data UShadowMap1D;
};

// 0x6C 
struct UShadowMap2D_Data {
	// Last Offset: 0x3C
	struct UShadowMapTexture2D* Texture; // 0x3C (0x4)
	struct FVector2D CoordinateScale; // 0x40 (0x8)
	struct FVector2D CoordinateBias; // 0x48 (0x8)
	struct FGuid LightGuid; // 0x50 (0x10)
	BOOL bIsShadowFactorTexture :1 ; // 0x60 (0x4)
	const unsigned long: 0;
	struct UInstancedStaticMeshComponent* Component; // 0x64 (0x4)
	int InstanceIndex; // 0x68 (0x4)
};

struct UShadowMap2D {
	struct UObject_Data UObject;
	struct UShadowMap2D_Data UShadowMap2D;
};

// 0x7C 
struct USmokeTestCommandlet_Data {
	// Last Offset: 0x7C
};

struct USmokeTestCommandlet {
	struct UObject_Data UObject;
	struct UCommandlet_Data UCommandlet;
	struct USmokeTestCommandlet_Data USmokeTestCommandlet;
};

// 0x40 
struct USnapshotInterface_Data {
	// Last Offset: 0x3C
	BOOL bEnableInMultiplayer :1 ; // 0x3C (0x4)
	BOOL bTracked :1 ; // 0x3C (0x4)
	const unsigned long: 0;
};

struct USnapshotInterface {
	struct UObject_Data UObject;
	struct USnapshotInterface_Data USnapshotInterface;
};

// 0xC4 
struct USpeechRecognition_Data {
	// Last Offset: 0x3C
	struct FString Language; // 0x3C (0xC)
	float ConfidenceThreshhold; // 0x48 (0x4)
	struct TArray_FRecogVocabulary Vocabularies; // 0x4C (0xC)
	struct TArray_unsigned_char VoiceData; // 0x58 (0xC)
	struct TArray_unsigned_char WorkingVoiceData; // 0x64 (0xC)
	struct TArray_unsigned_char UserData; // 0x70 (0xC)
	struct FRecogUserData InstanceData[4]; // 0x7C (0x40)
	BOOL bDirty :1 ; // 0xBC (0x4)
	BOOL bInitialised :1 ; // 0xBC (0x4)
	const unsigned long: 0;
	struct FPointer FnxVoiceData; // 0xC0 (0x4)
};

struct USpeechRecognition {
	struct UObject_Data UObject;
	struct USpeechRecognition_Data USpeechRecognition;
};

// 0x130  (Alignment = 16)
struct UStaticMesh_Data {
	// Last Offset: 0x3C
	const unsigned char Unknown1[0xC]; // 0x3C (0xC) > LAST OFFSET
	struct TArray_FStaticMeshLODInfo LODInfo; // 0x48 (0xC)
	float LODDistanceRatio; // 0x54 (0x4)
	float LODMaxRange; // 0x58 (0x4)
	int LightMapResolution; // 0x5C (0x4)
	int LightMapCoordinateIndex; // 0x60 (0x4)
	const unsigned char Unknown2[0x4C]; // 0x64 (0x4C) > LAST OFFSET
	struct URB_BodySetup* BodySetup; // 0xB0 (0x4)
	const unsigned char Unknown3[0x34]; // 0xB4 (0x34) > LAST OFFSET
	BOOL UseSimpleLineCollision; // 0xE8 (0x4)
	BOOL UseSimpleBoxCollision; // 0xEC (0x4)
	BOOL UseSimpleRigidBodyCollision; // 0xF0 (0x4)
	BOOL ForceComplexRigidBodyCollisionPhysX; // 0xF4 (0x4)
	BOOL UseFullPrecisionUVs; // 0xF8 (0x4)
	BOOL bUsedForInstancing :1 ; // 0xFC (0x4)
	const unsigned long: 0;
	unsigned char DynamicShadowCastRelevance; // 0x100 (0x1) (Enum = EDynamicShadowCastRelevance)
	const unsigned char Unknown4[0x3]; // 0x101 (0x3) > LAST OFFSET
	BOOL bCanBecomeDynamic :1 ; // 0x104 (0x4)
	const unsigned long: 0;
	float StreamingDistanceMultiplier; // 0x108 (0x4)
	const unsigned char Unknown5[0x24]; // 0x10C (0x24) MISSING END DATA
};

struct UStaticMesh {
	struct UObject_Data UObject;
	struct UStaticMesh_Data UStaticMesh;
};

// 0xCC 
struct URB_BodySetup_Data {
	// Last Offset: 0x80
	unsigned char SleepFamily; // 0x80 (0x1) (Enum = ESleepFamily)
	const unsigned char Unknown1[0x3]; // 0x81 (0x3) > LAST OFFSET
	struct FName BoneName; // 0x84 (0x8)
	BOOL bFixed :1 ; // 0x8C (0x4)
	BOOL bNoCollision :1 ; // 0x8C (0x4)
	BOOL bBlockZeroExtent :1 ; // 0x8C (0x4)
	BOOL bBlockNonZeroExtent :1 ; // 0x8C (0x4)
	BOOL bEnableContinuousCollisionDetection :1 ; // 0x8C (0x4)
	BOOL bAlwaysFullAnimWeight :1 ; // 0x8C (0x4)
	BOOL bConsiderForBounds :1 ; // 0x8C (0x4)
	const unsigned long: 0;
	struct UPhysicalMaterial* PhysMaterial; // 0x90 (0x4)
	float MassScale; // 0x94 (0x4)
	struct TArray_FPointer CollisionGeom; // 0x98 (0xC)
	struct TArray_FVector CollisionGeomScale3D; // 0xA4 (0xC)
	struct TArray_FVector PreCachedPhysScale; // 0xB0 (0xC)
	struct TArray_FKCachedConvexData PreCachedPhysData; // 0xBC (0xC)
	int PreCachedPhysDataVersion; // 0xC8 (0x4)
};

struct URB_BodySetup {
	struct UObject_Data UObject;
	struct UKMeshProps_Data UKMeshProps;
	struct URB_BodySetup_Data URB_BodySetup;
};

// 0x58 
struct UTexture_Data {
	// Last Offset: 0x3C
	BOOL SRGB :1 ; // 0x3C (0x4)
	BOOL RGBE :1 ; // 0x3C (0x4)
	BOOL bIsSourceArtUncompressed :1 ; // 0x3C (0x4)
	BOOL CompressionNoAlpha :1 ; // 0x3C (0x4)
	BOOL CompressionNone :1 ; // 0x3C (0x4)
	BOOL CompressionNoMipmaps :1 ; // 0x3C (0x4)
	BOOL CompressionFullDynamicRange :1 ; // 0x3C (0x4)
	BOOL DeferCompression :1 ; // 0x3C (0x4)
	BOOL NeverStream :1 ; // 0x3C (0x4)
	BOOL bDitherMipMapAlpha :1 ; // 0x3C (0x4)
	BOOL bPreserveBorderR :1 ; // 0x3C (0x4)
	BOOL bPreserveBorderG :1 ; // 0x3C (0x4)
	BOOL bPreserveBorderB :1 ; // 0x3C (0x4)
	BOOL bPreserveBorderA :1 ; // 0x3C (0x4)
	BOOL bNoTiling :1 ; // 0x3C (0x4)
	BOOL bForcePVRTC4 :1 ; // 0x3C (0x4)
	BOOL bAsyncResourceReleaseHasBeenStarted :1 ; // 0x3C (0x4)
	BOOL bUseCinematicMipLevels :1 ; // 0x3C (0x4)
	const unsigned long: 0;
	unsigned char CompressionSettings; // 0x40 (0x1) (Enum = TextureCompressionSettings)
	unsigned char Filter; // 0x41 (0x1) (Enum = TextureFilter)
	unsigned char LODGroup; // 0x42 (0x1) (Enum = TextureGroup)
	unsigned char MipGenSettings; // 0x43 (0x1) (Enum = TextureMipGenSettings)
	int LODBias; // 0x44 (0x4)
	int CachedCombinedLODBias; // 0x48 (0x4)
	int NumCinematicMipLevels; // 0x4C (0x4)
	struct FPointer Resource; // 0x50 (0x4)
	int InternalFormatLODBias; // 0x54 (0x4)
};

struct UTexture {
	struct UObject_Data UObject;
	struct USurface_Data USurface;
	struct UTexture_Data UTexture;
};

// 0xC0 
struct UTexture2D_Data {
	// Last Offset: 0x58
	struct FIndirectArray_Mirror Mips; // 0x58 (0xC)
	int SizeX; // 0x64 (0x4)
	int SizeY; // 0x68 (0x4)
	int OriginalSizeX; // 0x6C (0x4)
	int OriginalSizeY; // 0x70 (0x4)
	unsigned char Format; // 0x74 (0x1) (Enum = EPixelFormat)
	unsigned char AddressX; // 0x75 (0x1) (Enum = TextureAddress)
	unsigned char AddressY; // 0x76 (0x1) (Enum = TextureAddress)
	const unsigned char Unknown1[0x1]; // 0x77 (0x1) > LAST OFFSET
	BOOL bIsStreamable :1 ; // 0x78 (0x4)
	BOOL bHasCancelationPending :1 ; // 0x78 (0x4)
	BOOL bHasBeenLoadedFromPersistentArchive :1 ; // 0x78 (0x4)
	BOOL bForceMiplevelsToBeResident :1 ; // 0x78 (0x4)
	BOOL bGlobalForceMipLevelsToBeResident :1 ; // 0x78 (0x4)
	BOOL bIsCompositingSource :1 ; // 0x78 (0x4)
	BOOL bGoreTexture :1 ; // 0x78 (0x4)
	const unsigned long: 0;
	float ForceMipLevelsToBeResidentTimestamp; // 0x7C (0x4)
	struct FName TextureFileCacheName; // 0x80 (0x8)
	int RequestedMips; // 0x88 (0x4)
	int ResidentMips; // 0x8C (0x4)
	struct FThreadSafeCounter PendingMipChangeRequestStatus; // 0x90 (0x4)
	struct TArray_unsigned_char SystemMemoryData; // 0x94 (0xC)
	struct FTextureLinkedListMirror StreamableTexturesLink; // 0xA0 (0xC)
	int StreamingIndex; // 0xAC (0x4)
	int MipTailBaseIdx; // 0xB0 (0x4)
	struct FPointer ResourceMem; // 0xB4 (0x4)
	int FirstResourceMemMip; // 0xB8 (0x4)
	float Timer; // 0xBC (0x4)
};

struct UTexture2D {
	struct UObject_Data UObject;
	struct USurface_Data USurface;
	struct UTexture_Data UTexture;
	struct UTexture2D_Data UTexture2D;
};

// 0xC4 
struct ULightMapTexture2D_Data {
	// Last Offset: 0xC0
	const unsigned char Unknown1[0x4]; // 0xC0 (0x4) MISSING END DATA
};

struct ULightMapTexture2D {
	struct UObject_Data UObject;
	struct USurface_Data USurface;
	struct UTexture_Data UTexture;
	struct UTexture2D_Data UTexture2D;
	struct ULightMapTexture2D_Data ULightMapTexture2D;
};

// 0xC4 
struct UShadowMapTexture2D_Data {
	// Last Offset: 0xC0
	int ShadowmapFlags; // 0xC0 (0x4)
};

struct UShadowMapTexture2D {
	struct UObject_Data UObject;
	struct USurface_Data USurface;
	struct UTexture_Data UTexture;
	struct UTexture2D_Data UTexture2D;
	struct UShadowMapTexture2D_Data UShadowMapTexture2D;
};

// 0x48 
struct UTranslationContext_Data {
	// Last Offset: 0x3C
	struct TArray_UTranslatorTagPtr TranslatorTags; // 0x3C (0xC)
};

struct UTranslationContext {
	struct UObject_Data UObject;
	struct UTranslationContext_Data UTranslationContext;
};

// 0x44 
struct UTranslatorTag_Data {
	// Last Offset: 0x3C
	struct FName Tag; // 0x3C (0x8)
};

struct UTranslatorTag {
	struct UObject_Data UObject;
	struct UTranslatorTag_Data UTranslatorTag;
};

// 0x44 
struct UStringsTag_Data {
	// Last Offset: 0x44
};

struct UStringsTag {
	struct UObject_Data UObject;
	struct UTranslatorTag_Data UTranslatorTag;
	struct UStringsTag_Data UStringsTag;
};

// 0x48 
struct UUIRoot_Data {
	// Last Offset: 0x3C
	struct TArray_FString BadCapsLocContexts; // 0x3C (0xC)
};

struct UUIRoot {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
};

// 0x78 
struct UInteraction_Data {
	// Last Offset: 0x48
	struct FScriptDelegate __OnReceivedNativeInputKey__Delegate; // 0x48 (0xC)
	struct FScriptDelegate __OnReceivedNativeInputAxis__Delegate; // 0x54 (0xC)
	struct FScriptDelegate __OnReceivedNativeInputChar__Delegate; // 0x60 (0xC)
	struct FScriptDelegate __OnInitialize__Delegate; // 0x6C (0xC)
};

struct UInteraction {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UInteraction_Data UInteraction;
};

// 0x174 
struct UUIInteraction_Data {
	// Last Offset: 0x78
	struct FPointer VfTable_FExec; // 0x78 (0x4)
	struct FPointer VfTable_FGlobalDataStoreClientManager; // 0x7C (0x4)
	struct FPointer VfTable_FCallbackEventDevice; // 0x80 (0x4)
	struct UUIManager* UIManager; // 0x84 (0x4)
	struct UClass* UIManagerClass; // 0x88 (0x4)
	struct UClass* SceneClientClass; // 0x8C (0x4)
	struct UGameUISceneClient* SceneClient; // 0x90 (0x4)
	struct TArray_FName SupportedDoubleClickKeys; // 0x94 (0xC)
	struct UDataStoreClient* DataStoreManager; // 0xA0 (0x4)
	int bProcessInput[4]; // 0xA4 (0x10)
	float UIJoystickDeadZone; // 0xB4 (0x4)
	float UIAxisMultiplier; // 0xB8 (0x4)
	float AxisRepeatDelay; // 0xBC (0x4)
	float MouseButtonRepeatDelay; // 0xC0 (0x4)
	float DoubleClickTriggerSeconds; // 0xC4 (0x4)
	int DoubleClickPixelTolerance; // 0xC8 (0x4)
	struct FUIKeyRepeatData MouseButtonRepeatInfo; // 0xCC (0x10)
	struct TArray_FUIAxisEmulationDefinition ConfiguredAxisEmulationDefinitions; // 0xDC (0xC)
	const unsigned char Unknown1[0x3C]; // 0xE8 (0x3C) UNKNOWN PROPERTY
	struct FUIAxisEmulationData AxisInputEmulation[4]; // 0x124 (0x50)
};

struct UUIInteraction {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UInteraction_Data UInteraction;
	struct UUIInteraction_Data UUIInteraction;
};

// 0x3C 
struct UUIManager_Data {
	// Last Offset: 0x3C
};

struct UUIManager {
	struct UObject_Data UObject;
	struct UUIManager_Data UUIManager;
};

// 0x5C 
struct UVertex_Data {
	// Last Offset: 0x3C
	struct ULine* ParentLine; // 0x3C (0x4)
	struct FVector Position; // 0x40 (0xC)
	struct UMaterial* Material; // 0x4C (0x4)
	struct UMaterial* Material_Selected; // 0x50 (0x4)
	BOOL bIsSelected :1 ; // 0x54 (0x4)
	const unsigned long: 0;
	struct FColor cColor; // 0x58 (0x4)
};

struct UVertex {
	struct UObject_Data UObject;
	struct UVertex_Data UVertex;
};

// 0x40 
struct UWaveFormBase_Data {
	// Last Offset: 0x3C
	struct UForceFeedbackWaveform* TheWaveForm; // 0x3C (0x4)
};

struct UWaveFormBase {
	struct UObject_Data UObject;
	struct UWaveFormBase_Data UWaveFormBase;
};

// 0x2F4 
struct UWorld_Data {
	// Last Offset: 0x3C
	const unsigned char Unknown1[0x2B8]; // 0x3C (0x2B8) MISSING END DATA
};

struct UWorld {
	struct UObject_Data UObject;
	struct UWorld_Data UWorld;
};

// 0x1C8 
struct AEnvironmentVolume_Data {
	// Last Offset: 0x1BC
	struct FPointer VfTable_IInterface_NavMeshPathObstacle; // 0x1BC (0x4)
	struct FPointer VfTable_IInterface_NavMeshPathObject; // 0x1C0 (0x4)
	BOOL bSplitNavMesh :1 ; // 0x1C4 (0x4)
	const unsigned long: 0;
};

struct AEnvironmentVolume {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ABrush_Data ABrush;
	struct AVolume_Data AVolume;
	struct AEnvironmentVolume_Data AEnvironmentVolume;
};

// 0x1C0 
struct ATestSplittingVolume_Data {
	// Last Offset: 0x1BC
	struct FPointer VfTable_IInterface_NavMeshPathObject; // 0x1BC (0x4)
};

struct ATestSplittingVolume {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ABrush_Data ABrush;
	struct AVolume_Data AVolume;
	struct ATestSplittingVolume_Data ATestSplittingVolume;
};

// 0x684 
struct AAIController_Data {
	// Last Offset: 0x66C
	BOOL bAdjustFromWalls :1 ; // 0x66C (0x4)
	BOOL bReverseScriptedRoute :1 ; // 0x66C (0x4)
	const unsigned long: 0;
	float Skill; // 0x670 (0x4)
	struct AActor* ScriptedMoveTarget; // 0x674 (0x4)
	struct ARoute* ScriptedRoute; // 0x678 (0x4)
	int ScriptedRouteIndex; // 0x67C (0x4)
	struct AActor* ScriptedFocus; // 0x680 (0x4)
};

struct AAIController {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AController_Data AController;
	struct AAIController_Data AAIController;
};

// 0x18C 
struct APathTargetPoint_Data {
	// Last Offset: 0x18C
};

struct APathTargetPoint {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AKeypoint_Data AKeypoint;
	struct APathTargetPoint_Data APathTargetPoint;
};

// 0x190 
struct ANavMeshObstacle_Data {
	// Last Offset: 0x188
	struct FPointer VfTable_IInterface_NavMeshPathObstacle; // 0x188 (0x4)
	BOOL bEnabled :1 ; // 0x18C (0x4)
	BOOL bPreserveInternalGeo :1 ; // 0x18C (0x4)
	const unsigned long: 0;
};

struct ANavMeshObstacle {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ANavMeshObstacle_Data ANavMeshObstacle;
};

// 0x190 
struct APylonSeed_Data {
	// Last Offset: 0x188
	struct FPointer VfTable_IInterface_NavMeshPathObject; // 0x188 (0x4)
	struct FPointer VfTable_IIGBXNavMeshSeed; // 0x18C (0x4)
};

struct APylonSeed {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct APylonSeed_Data APylonSeed;
};

// 0x1A0 
struct ABlockingMeshActor_Data {
	// Last Offset: 0x188
	struct FPointer VfTable_IIGBXNavMeshObstacle; // 0x188 (0x4)
	struct UBlockingMeshComponent* BlockingMeshComponent; // 0x18C (0x4)
	struct UMaterialInterface* BlockingMeshMaterial; // 0x190 (0x4)
	BOOL bBlockNavMesh :1 ; // 0x194 (0x4)
	const unsigned long: 0;
	struct UMaterialInstanceConstant* MatInstantConstant; // 0x198 (0x4)
	struct UMaterialInstanceConstant* MatInstantConstantNew; // 0x19C (0x4)
};

struct ABlockingMeshActor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AStaticMeshActorBase_Data AStaticMeshActorBase;
	struct ABlockingMeshActor_Data ABlockingMeshActor;
};

// 0x1A4 
struct ABlockingMeshReplicatedActor_Data {
	// Last Offset: 0x1A0
	BOOL bIsEnabled :1 ; // 0x1A0 (0x4)
	const unsigned long: 0;
};

struct ABlockingMeshReplicatedActor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AStaticMeshActorBase_Data AStaticMeshActorBase;
	struct ABlockingMeshActor_Data ABlockingMeshActor;
	struct ABlockingMeshReplicatedActor_Data ABlockingMeshReplicatedActor;
};

// 0x210  (Alignment = 16)
struct UCoverGroupRenderingComponent_Data {
	// Last Offset: 0x210
};

struct UCoverGroupRenderingComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UCoverGroupRenderingComponent_Data UCoverGroupRenderingComponent;
};

// 0x21C  (Alignment = 16)
struct UMeshComponent_Data {
	// Last Offset: 0x210
	struct TArray_UMaterialInterfacePtr Materials; // 0x210 (0xC)
};

struct UMeshComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UMeshComponent_Data UMeshComponent;
};

// 0x248  (Alignment = 16)
struct UStaticMeshComponent_Data {
	// Last Offset: 0x21C
	struct UStaticMesh* StaticMesh; // 0x21C (0x4)
	float OverriddenLODMaxRange; // 0x220 (0x4)
	float StreamingDistanceMultiplier; // 0x224 (0x4)
	BOOL bUseSubDivisions :1 ; // 0x228 (0x4)
	BOOL bForceStaticDecals :1 ; // 0x228 (0x4)
	BOOL bCanHighlightSelectedSections :1 ; // 0x228 (0x4)
	BOOL bNeverBecomeDynamic :1 ; // 0x228 (0x4)
	BOOL bIgnoreInstanceForTextureStreaming :1 ; // 0x228 (0x4)
	BOOL bOverrideLightMapRes :1 ; // 0x228 (0x4)
	BOOL bIgnoredByFXCoordinator :1 ; // 0x228 (0x4)
	BOOL BlockRigidBodyPhysX :1 ; // 0x228 (0x4)
	const unsigned long: 0;
	struct TArray_FGuid IrrelevantLights; // 0x22C (0xC)
	struct TArray_FStaticMeshComponentLODInfo LODData; // 0x238 (0xC)
	unsigned char ViewZeroOffset; // 0x244 (0x1)
	unsigned char ViewOneOffset; // 0x245 (0x1)
	unsigned char ForcedLodModel; // 0x246 (0x1)
	unsigned char PreviousLODLevel; // 0x247 (0x1)
};

struct UStaticMeshComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UMeshComponent_Data UMeshComponent;
	struct UStaticMeshComponent_Data UStaticMeshComponent;
};

// 0x270  (Alignment = 16)
struct UCoverMeshComponent_Data {
	// Last Offset: 0x248
	struct TArray_FCoverMeshes Meshes; // 0x248 (0xC)
	struct FVector LocationOffset; // 0x254 (0xC)
	struct UStaticMesh* AutoAdjustOn; // 0x260 (0x4)
	struct UStaticMesh* AutoAdjustOff; // 0x264 (0x4)
	struct UStaticMesh* Disabled; // 0x268 (0x4)
	BOOL bShowWhenNotSelected :1 ; // 0x26C (0x4)
	const unsigned long: 0;
};

struct UCoverMeshComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UMeshComponent_Data UMeshComponent;
	struct UStaticMeshComponent_Data UStaticMeshComponent;
	struct UCoverMeshComponent_Data UCoverMeshComponent;
};

// 0x210  (Alignment = 16)
struct UNavMeshRenderingComponent_Data {
	// Last Offset: 0x210
};

struct UNavMeshRenderingComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UNavMeshRenderingComponent_Data UNavMeshRenderingComponent;
};

// 0x210  (Alignment = 16)
struct UPathRenderingComponent_Data {
	// Last Offset: 0x210
};

struct UPathRenderingComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UPathRenderingComponent_Data UPathRenderingComponent;
};

// 0x210  (Alignment = 16)
struct URouteRenderingComponent_Data {
	// Last Offset: 0x210
};

struct URouteRenderingComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct URouteRenderingComponent_Data URouteRenderingComponent;
};

// 0x44 
struct UAutoNavMeshPathObstacleUnregister_Data {
	// Last Offset: 0x3C
	struct FScriptInterface PathObstacleRef; // 0x3C (0x8)
};

struct UAutoNavMeshPathObstacleUnregister {
	struct UObject_Data UObject;
	struct UAutoNavMeshPathObstacleUnregister_Data UAutoNavMeshPathObstacleUnregister;
};

// 0x48 
struct UGBXNavMeshPathFinder_Data {
	// Last Offset: 0x3C
	struct TArray_UGBXNavMeshPathModifierPtr PathModifiers; // 0x3C (0xC)
};

struct UGBXNavMeshPathFinder {
	struct UObject_Data UObject;
	struct UGBXNavMeshPathFinder_Data UGBXNavMeshPathFinder;
};

// 0x3C 
struct UIGBXNavMeshObstacle_Data {
	// Last Offset: 0x3C
};

struct UIGBXNavMeshObstacle {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UIGBXNavMeshObstacle_Data UIGBXNavMeshObstacle;
};

// 0x3C 
struct UInterface_NavMeshPathObject_Data {
	// Last Offset: 0x3C
};

struct UInterface_NavMeshPathObject {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UInterface_NavMeshPathObject_Data UInterface_NavMeshPathObject;
};

// 0x3C 
struct UInterface_NavMeshPathSwitch_Data {
	// Last Offset: 0x3C
};

struct UInterface_NavMeshPathSwitch {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UInterface_NavMeshPathObject_Data UInterface_NavMeshPathObject;
	struct UInterface_NavMeshPathSwitch_Data UInterface_NavMeshPathSwitch;
};

// 0x3C 
struct UInterface_NavMeshPathObstacle_Data {
	// Last Offset: 0x3C
};

struct UInterface_NavMeshPathObstacle {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UInterface_NavMeshPathObstacle_Data UInterface_NavMeshPathObstacle;
};

// 0x180 
struct UNavigationHandle_Data {
	// Last Offset: 0x3C
	struct APylon* AnchorPylon; // 0x3C (0x4)
	struct FPointer AnchorPoly; // 0x40 (0x4)
	struct FPathStore PathCache; // 0x44 (0x18)
	struct FPointer BestUnfinishedPathPoint; // 0x5C (0x4)
	struct FPointer CurrentEdge; // 0x60 (0x4)
	struct FPointer SubGoal_DestPoly; // 0x64 (0x4)
	struct FBasedPosition FinalDestination; // 0x68 (0x34)
	BOOL bSkipRouteCacheUpdates :1 ; // 0x9C (0x4)
	BOOL bUseORforEvaluateGoal :1 ; // 0x9C (0x4)
	BOOL bDebugConstraintsAndGoalEvals :1 ; // 0x9C (0x4)
	BOOL bUltraVerbosePathDebugging :1 ; // 0x9C (0x4)
	BOOL bDebug_Breadcrumbs :1 ; // 0x9C (0x4)
	const unsigned long: 0;
	struct UNavMeshPathConstraint* PathConstraintList; // 0xA0 (0x4)
	struct UNavMeshPathGoalEvaluator* PathGoalList; // 0xA4 (0x4)
	struct FNavMeshPathParams CachedPathParams; // 0xA8 (0x50)
	unsigned char LastPathError; // 0xF8 (0x1) (Enum = EPathFindingError)
	const unsigned char Unknown1[0x3]; // 0xF9 (0x3) > LAST OFFSET
	float LastPathFailTime; // 0xFC (0x4)
	struct FVector Breadcrumbs[10]; // 0x100 (0x78)
	int BreadCrumbMostRecentIdx; // 0x178 (0x4)
	float BreadCrumbDistanceInterval; // 0x17C (0x4)
};

struct UNavigationHandle {
	struct UObject_Data UObject;
	struct UNavigationHandle_Data UNavigationHandle;
};

// 0x48 
struct UNavMeshGoal_Filter_Data {
	// Last Offset: 0x3C
	BOOL bShowDebug :1 ; // 0x3C (0x4)
	const unsigned long: 0;
	int NumNodesThrownOut; // 0x40 (0x4)
	int NumNodesProcessed; // 0x44 (0x4)
};

struct UNavMeshGoal_Filter {
	struct UObject_Data UObject;
	struct UNavMeshGoal_Filter_Data UNavMeshGoal_Filter;
};

// 0x4C 
struct UNavMeshGoalFilter_MinPathDistance_Data {
	// Last Offset: 0x48
	int MinDistancePathShouldBe; // 0x48 (0x4)
};

struct UNavMeshGoalFilter_MinPathDistance {
	struct UObject_Data UObject;
	struct UNavMeshGoal_Filter_Data UNavMeshGoal_Filter;
	struct UNavMeshGoalFilter_MinPathDistance_Data UNavMeshGoalFilter_MinPathDistance;
};

// 0x4C 
struct UNavMeshGoalFilter_NotNearOtherAI_Data {
	// Last Offset: 0x48
	float DistanceToCheck; // 0x48 (0x4)
};

struct UNavMeshGoalFilter_NotNearOtherAI {
	struct UObject_Data UObject;
	struct UNavMeshGoal_Filter_Data UNavMeshGoal_Filter;
	struct UNavMeshGoalFilter_NotNearOtherAI_Data UNavMeshGoalFilter_NotNearOtherAI;
};

// 0x58 
struct UNavMeshGoalFilter_OutOfViewFrom_Data {
	// Last Offset: 0x48
	struct FPointer GoalPoly; // 0x48 (0x4)
	struct FVector OutOfViewLocation; // 0x4C (0xC)
};

struct UNavMeshGoalFilter_OutOfViewFrom {
	struct UObject_Data UObject;
	struct UNavMeshGoal_Filter_Data UNavMeshGoal_Filter;
	struct UNavMeshGoalFilter_OutOfViewFrom_Data UNavMeshGoalFilter_OutOfViewFrom;
};

// 0x64 
struct UNavMeshGoalFilter_OutSideOfDotProductWedge_Data {
	// Last Offset: 0x48
	struct FVector Location; // 0x48 (0xC)
	struct FVector Rotation; // 0x54 (0xC)
	float Epsilon; // 0x60 (0x4)
};

struct UNavMeshGoalFilter_OutSideOfDotProductWedge {
	struct UObject_Data UObject;
	struct UNavMeshGoal_Filter_Data UNavMeshGoal_Filter;
	struct UNavMeshGoalFilter_OutSideOfDotProductWedge_Data UNavMeshGoalFilter_OutSideOfDotProductWedge;
};

// 0x54 
struct UNavMeshGoalFilter_PolyEncompassesAI_Data {
	// Last Offset: 0x48
	struct FVector OverrideExtentToCheck; // 0x48 (0xC)
};

struct UNavMeshGoalFilter_PolyEncompassesAI {
	struct UObject_Data UObject;
	struct UNavMeshGoal_Filter_Data UNavMeshGoal_Filter;
	struct UNavMeshGoalFilter_PolyEncompassesAI_Data UNavMeshGoalFilter_PolyEncompassesAI;
};

// 0x50 
struct UNavMeshPathConstraint_Data {
	// Last Offset: 0x3C
	struct UNavMeshPathConstraint* NextConstraint; // 0x3C (0x4)
	int NumNodesProcessed; // 0x40 (0x4)
	int NumThrownOutNodes; // 0x44 (0x4)
	float AddedDirectCost; // 0x48 (0x4)
	float AddedHeuristicCost; // 0x4C (0x4)
};

struct UNavMeshPathConstraint {
	struct UObject_Data UObject;
	struct UNavMeshPathConstraint_Data UNavMeshPathConstraint;
};

// 0x5C 
struct UNavMeshPath_AlongLine_Data {
	// Last Offset: 0x50
	struct FVector Direction; // 0x50 (0xC)
};

struct UNavMeshPath_AlongLine {
	struct UObject_Data UObject;
	struct UNavMeshPathConstraint_Data UNavMeshPathConstraint;
	struct UNavMeshPath_AlongLine_Data UNavMeshPath_AlongLine;
};

// 0x50 
struct UNavMeshPath_EnforceTwoWayEdges_Data {
	// Last Offset: 0x50
};

struct UNavMeshPath_EnforceTwoWayEdges {
	struct UObject_Data UObject;
	struct UNavMeshPathConstraint_Data UNavMeshPathConstraint;
	struct UNavMeshPath_EnforceTwoWayEdges_Data UNavMeshPath_EnforceTwoWayEdges;
};

// 0x68 
struct UNavMeshPath_MinDistBetweenSpecsOfType_Data {
	// Last Offset: 0x50
	float MinDistBetweenEdgeTypes; // 0x50 (0x4)
	struct FVector InitLocation; // 0x54 (0xC)
	unsigned char EdgeType; // 0x60 (0x1) (Enum = ENavMeshEdgeType)
	const unsigned char Unknown1[0x3]; // 0x61 (0x3) > LAST OFFSET
	float Penalty; // 0x64 (0x4)
};

struct UNavMeshPath_MinDistBetweenSpecsOfType {
	struct UObject_Data UObject;
	struct UNavMeshPathConstraint_Data UNavMeshPathConstraint;
	struct UNavMeshPath_MinDistBetweenSpecsOfType_Data UNavMeshPath_MinDistBetweenSpecsOfType;
};

// 0x54 
struct UNavMeshPath_SameCoverLink_Data {
	// Last Offset: 0x50
	struct ACoverLink* TestLink; // 0x50 (0x4)
};

struct UNavMeshPath_SameCoverLink {
	struct UObject_Data UObject;
	struct UNavMeshPathConstraint_Data UNavMeshPathConstraint;
	struct UNavMeshPath_SameCoverLink_Data UNavMeshPath_SameCoverLink;
};

// 0x60 
struct UNavMeshPath_Toward_Data {
	// Last Offset: 0x50
	struct AActor* GoalActor; // 0x50 (0x4)
	struct FVector GoalPoint; // 0x54 (0xC)
};

struct UNavMeshPath_Toward {
	struct UObject_Data UObject;
	struct UNavMeshPathConstraint_Data UNavMeshPathConstraint;
	struct UNavMeshPath_Toward_Data UNavMeshPath_Toward;
};

// 0x6C 
struct UNavMeshPath_WithinDistanceEnvelope_Data {
	// Last Offset: 0x50
	float MaxDistance; // 0x50 (0x4)
	float MinDistance; // 0x54 (0x4)
	BOOL bSoft :1 ; // 0x58 (0x4)
	BOOL bOnlyThrowOutNodesThatLeaveEnvelope :1 ; // 0x58 (0x4)
	const unsigned long: 0;
	float SoftStartPenalty; // 0x5C (0x4)
	struct FVector EnvelopeTestPoint; // 0x60 (0xC)
};

struct UNavMeshPath_WithinDistanceEnvelope {
	struct UObject_Data UObject;
	struct UNavMeshPathConstraint_Data UNavMeshPathConstraint;
	struct UNavMeshPath_WithinDistanceEnvelope_Data UNavMeshPath_WithinDistanceEnvelope;
};

// 0x5C 
struct UNavMeshPath_WithinTraversalDist_Data {
	// Last Offset: 0x50
	float MaxTraversalDist; // 0x50 (0x4)
	BOOL bSoft :1 ; // 0x54 (0x4)
	const unsigned long: 0;
	float SoftStartPenalty; // 0x58 (0x4)
};

struct UNavMeshPath_WithinTraversalDist {
	struct UObject_Data UObject;
	struct UNavMeshPathConstraint_Data UNavMeshPathConstraint;
	struct UNavMeshPath_WithinTraversalDist_Data UNavMeshPath_WithinTraversalDist;
};

// 0x50 
struct UNavMeshPathGoalEvaluator_Data {
	// Last Offset: 0x3C
	struct UNavMeshPathGoalEvaluator* NextEvaluator; // 0x3C (0x4)
	int MaxPathVisits; // 0x40 (0x4)
	BOOL bAlwaysCallEvaluateGoal :1 ; // 0x44 (0x4)
	const unsigned long: 0;
	int NumNodesThrownOut; // 0x48 (0x4)
	int NumNodesProcessed; // 0x4C (0x4)
};

struct UNavMeshPathGoalEvaluator {
	struct UObject_Data UObject;
	struct UNavMeshPathGoalEvaluator_Data UNavMeshPathGoalEvaluator;
};

// 0x70 
struct UNavMeshGoal_At_Data {
	// Last Offset: 0x50
	struct FVector Goal; // 0x50 (0xC)
	float GoalDist; // 0x5C (0x4)
	BOOL bKeepPartial :1 ; // 0x60 (0x4)
	BOOL bWeightPartialByDist :1 ; // 0x60 (0x4)
	BOOL bGoalInSamePolyAsAnchor :1 ; // 0x60 (0x4)
	const unsigned long: 0;
	float PartialDistSq; // 0x64 (0x4)
	struct FPointer GoalPoly; // 0x68 (0x4)
	struct FPointer PartialGoal; // 0x6C (0x4)
};

struct UNavMeshGoal_At {
	struct UObject_Data UObject;
	struct UNavMeshPathGoalEvaluator_Data UNavMeshPathGoalEvaluator;
	struct UNavMeshGoal_At_Data UNavMeshGoal_At;
};

// 0x9C 
struct UNavMeshGoal_ClosestActorInList_Data {
	// Last Offset: 0x50
	struct TArray_FBiasedGoalActor GoalList; // 0x50 (0xC)
	struct FMultiMap_Mirror PolyToGoalActorMap; // 0x5C (0x3C)
	struct FPointer CachedAnchorPoly; // 0x98 (0x4)
};

struct UNavMeshGoal_ClosestActorInList {
	struct UObject_Data UObject;
	struct UNavMeshPathGoalEvaluator_Data UNavMeshPathGoalEvaluator;
	struct UNavMeshGoal_ClosestActorInList_Data UNavMeshGoal_ClosestActorInList;
};

// 0x64 
struct UNavMeshGoal_GenericFilterContainer_Data {
	// Last Offset: 0x50
	struct TArray_UNavMeshGoal_FilterPtr GoalFilters; // 0x50 (0xC)
	struct FPointer SuccessfulGoal; // 0x5C (0x4)
	struct UNavigationHandle* MyNavigationHandle; // 0x60 (0x4)
};

struct UNavMeshGoal_GenericFilterContainer {
	struct UObject_Data UObject;
	struct UNavMeshPathGoalEvaluator_Data UNavMeshPathGoalEvaluator;
	struct UNavMeshGoal_GenericFilterContainer_Data UNavMeshGoal_GenericFilterContainer;
};

// 0x54 
struct UNavMeshGoal_Null_Data {
	// Last Offset: 0x50
	struct FPointer PartialGoal; // 0x50 (0x4)
};

struct UNavMeshGoal_Null {
	struct UObject_Data UObject;
	struct UNavMeshPathGoalEvaluator_Data UNavMeshPathGoalEvaluator;
	struct UNavMeshGoal_Null_Data UNavMeshGoal_Null;
};

// 0x5C 
struct UNavMeshGoal_PolyEncompassesAI_Data {
	// Last Offset: 0x50
	struct FVector OverrideExtentToCheck; // 0x50 (0xC)
};

struct UNavMeshGoal_PolyEncompassesAI {
	struct UObject_Data UObject;
	struct UNavMeshPathGoalEvaluator_Data UNavMeshPathGoalEvaluator;
	struct UNavMeshGoal_PolyEncompassesAI_Data UNavMeshGoal_PolyEncompassesAI;
};

// 0x5C 
struct UNavMeshGoal_Random_Data {
	// Last Offset: 0x50
	int MinDist; // 0x50 (0x4)
	float BestRating; // 0x54 (0x4)
	struct FPointer PartialGoal; // 0x58 (0x4)
};

struct UNavMeshGoal_Random {
	struct UObject_Data UObject;
	struct UNavMeshPathGoalEvaluator_Data UNavMeshPathGoalEvaluator;
	struct UNavMeshGoal_Random_Data UNavMeshGoal_Random;
};

// 0x68 
struct UNavMeshGoal_WithinDistanceEnvelope_Data {
	// Last Offset: 0x50
	float MaxDistance; // 0x50 (0x4)
	float MinDistance; // 0x54 (0x4)
	float MinTraversalDist; // 0x58 (0x4)
	struct FVector EnvelopeTestPoint; // 0x5C (0xC)
};

struct UNavMeshGoal_WithinDistanceEnvelope {
	struct UObject_Data UObject;
	struct UNavMeshPathGoalEvaluator_Data UNavMeshPathGoalEvaluator;
	struct UNavMeshGoal_WithinDistanceEnvelope_Data UNavMeshGoal_WithinDistanceEnvelope;
};

// 0x44 
struct UPathConstraint_Data {
	// Last Offset: 0x3C
	int CacheIdx; // 0x3C (0x4)
	struct UPathConstraint* NextConstraint; // 0x40 (0x4)
};

struct UPathConstraint {
	struct UObject_Data UObject;
	struct UPathConstraint_Data UPathConstraint;
};

// 0x50 
struct UPath_AlongLine_Data {
	// Last Offset: 0x44
	struct FVector Direction; // 0x44 (0xC)
};

struct UPath_AlongLine {
	struct UObject_Data UObject;
	struct UPathConstraint_Data UPathConstraint;
	struct UPath_AlongLine_Data UPath_AlongLine;
};

// 0x54 
struct UPath_AvoidInEscapableNodes_Data {
	// Last Offset: 0x44
	int Radius; // 0x44 (0x4)
	int Height; // 0x48 (0x4)
	int MaxFallSpeed; // 0x4C (0x4)
	int MoveFlags; // 0x50 (0x4)
};

struct UPath_AvoidInEscapableNodes {
	struct UObject_Data UObject;
	struct UPathConstraint_Data UPathConstraint;
	struct UPath_AvoidInEscapableNodes_Data UPath_AvoidInEscapableNodes;
};

// 0x58 
struct UPath_MinDistBetweenSpecsOfType_Data {
	// Last Offset: 0x44
	float MinDistBetweenSpecTypes; // 0x44 (0x4)
	struct FVector InitLocation; // 0x48 (0xC)
	struct UClass* ReachSpecClass; // 0x54 (0x4)
};

struct UPath_MinDistBetweenSpecsOfType {
	struct UObject_Data UObject;
	struct UPathConstraint_Data UPathConstraint;
	struct UPath_MinDistBetweenSpecsOfType_Data UPath_MinDistBetweenSpecsOfType;
};

// 0x48 
struct UPath_TowardGoal_Data {
	// Last Offset: 0x44
	struct AActor* GoalActor; // 0x44 (0x4)
};

struct UPath_TowardGoal {
	struct UObject_Data UObject;
	struct UPathConstraint_Data UPathConstraint;
	struct UPath_TowardGoal_Data UPath_TowardGoal;
};

// 0x50 
struct UPath_TowardPoint_Data {
	// Last Offset: 0x44
	struct FVector GoalPoint; // 0x44 (0xC)
};

struct UPath_TowardPoint {
	struct UObject_Data UObject;
	struct UPathConstraint_Data UPathConstraint;
	struct UPath_TowardPoint_Data UPath_TowardPoint;
};

// 0x60 
struct UPath_WithinDistanceEnvelope_Data {
	// Last Offset: 0x44
	float MaxDistance; // 0x44 (0x4)
	float MinDistance; // 0x48 (0x4)
	BOOL bSoft :1 ; // 0x4C (0x4)
	BOOL bOnlyThrowOutNodesThatLeaveEnvelope :1 ; // 0x4C (0x4)
	const unsigned long: 0;
	float SoftStartPenalty; // 0x50 (0x4)
	struct FVector EnvelopeTestPoint; // 0x54 (0xC)
};

struct UPath_WithinDistanceEnvelope {
	struct UObject_Data UObject;
	struct UPathConstraint_Data UPathConstraint;
	struct UPath_WithinDistanceEnvelope_Data UPath_WithinDistanceEnvelope;
};

// 0x50 
struct UPath_WithinTraversalDist_Data {
	// Last Offset: 0x44
	float MaxTraversalDist; // 0x44 (0x4)
	BOOL bSoft :1 ; // 0x48 (0x4)
	const unsigned long: 0;
	float SoftStartPenalty; // 0x4C (0x4)
};

struct UPath_WithinTraversalDist {
	struct UObject_Data UObject;
	struct UPathConstraint_Data UPathConstraint;
	struct UPath_WithinTraversalDist_Data UPath_WithinTraversalDist;
};

// 0x4C 
struct UPathGoalEvaluator_Data {
	// Last Offset: 0x3C
	struct UPathGoalEvaluator* NextEvaluator; // 0x3C (0x4)
	struct ANavigationPoint* GeneratedGoal; // 0x40 (0x4)
	int MaxPathVisits; // 0x44 (0x4)
	int CacheIdx; // 0x48 (0x4)
};

struct UPathGoalEvaluator {
	struct UObject_Data UObject;
	struct UPathGoalEvaluator_Data UPathGoalEvaluator;
};

// 0x58 
struct UGoal_AtActor_Data {
	// Last Offset: 0x4C
	struct AActor* GoalActor; // 0x4C (0x4)
	float GoalDist; // 0x50 (0x4)
	BOOL bKeepPartial :1 ; // 0x54 (0x4)
	const unsigned long: 0;
};

struct UGoal_AtActor {
	struct UObject_Data UObject;
	struct UPathGoalEvaluator_Data UPathGoalEvaluator;
	struct UGoal_AtActor_Data UGoal_AtActor;
};

// 0x4C 
struct UGoal_Null_Data {
	// Last Offset: 0x4C
};

struct UGoal_Null {
	struct UObject_Data UObject;
	struct UPathGoalEvaluator_Data UPathGoalEvaluator;
	struct UGoal_Null_Data UGoal_Null;
};

// 0x1CC 
struct ASkeletalMeshActor_Data {
	// Last Offset: 0x188
	struct FPointer VfTable_IIFaceFXActor; // 0x188 (0x4)
	BOOL bDamageAppliesImpulse :1 ; // 0x18C (0x4)
	BOOL bShouldDoAnimNotifies :1 ; // 0x18C (0x4)
	BOOL FaceFXSpeechPending :1 ; // 0x18C (0x4)
	BOOL bForceSaveInCheckpoint :1 ; // 0x18C (0x4)
	BOOL bCollideActors_OldValue :1 ; // 0x18C (0x4)
	BOOL bShouldShadowParentAllAttachedActors :1 ; // 0x18C (0x4)
	const unsigned long: 0;
	struct USkeletalMeshComponent* SkeletalMeshComponent; // 0x190 (0x4)
	struct ULightEnvironmentComponent* LightEnvironment; // 0x194 (0x4)
	struct UAudioComponent* FacialAudioComp; // 0x198 (0x4)
	struct USkeletalMesh* ReplicatedMesh; // 0x19C (0x4)
	struct UMaterialInterface* ReplicatedMaterial0; // 0x1A0 (0x4)
	struct UMaterialInterface* ReplicatedMaterial1; // 0x1A4 (0x4)
	struct TArray_FSkelMeshActorControlTarget ControlTargets; // 0x1A8 (0xC)
	struct TArray_UInterpGroupPtr InterpGroupList; // 0x1B4 (0xC)
	struct FName SavedAnimSeqName; // 0x1C0 (0x8)
	float SavedCurrentTime; // 0x1C8 (0x4)
};

struct ASkeletalMeshActor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ASkeletalMeshActor_Data ASkeletalMeshActor;
};

// 0x1E4 
struct ASkeletalMeshActorBasedOnExtremeContent_Data {
	// Last Offset: 0x1CC
	struct TArray_FSkelMaterialSetterDatum ExtremeContent; // 0x1CC (0xC)
	struct TArray_FSkelMaterialSetterDatum NonExtremeContent; // 0x1D8 (0xC)
};

struct ASkeletalMeshActorBasedOnExtremeContent {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ASkeletalMeshActor_Data ASkeletalMeshActor;
	struct ASkeletalMeshActorBasedOnExtremeContent_Data ASkeletalMeshActorBasedOnExtremeContent;
};

// 0x1CC 
struct ASkeletalMeshActorSpawnable_Data {
	// Last Offset: 0x1CC
};

struct ASkeletalMeshActorSpawnable {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ASkeletalMeshActor_Data ASkeletalMeshActor;
	struct ASkeletalMeshActorSpawnable_Data ASkeletalMeshActorSpawnable;
};

// 0x1CC 
struct ASkeletalMeshCinematicActor_Data {
	// Last Offset: 0x1CC
};

struct ASkeletalMeshCinematicActor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ASkeletalMeshActor_Data ASkeletalMeshActor;
	struct ASkeletalMeshCinematicActor_Data ASkeletalMeshCinematicActor;
};

// 0x1D8 
struct ASkeletalMeshActorMAT_Data {
	// Last Offset: 0x1CC
	struct TArray_UAnimNodeSlotPtr SlotNodes; // 0x1CC (0xC)
};

struct ASkeletalMeshActorMAT {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ASkeletalMeshActor_Data ASkeletalMeshActor;
	struct ASkeletalMeshCinematicActor_Data ASkeletalMeshCinematicActor;
	struct ASkeletalMeshActorMAT_Data ASkeletalMeshActorMAT;
};

// 0xF8 
struct UHeadTrackingComponent_Data {
	// Last Offset: 0x5C
	struct TArray_FName TrackControllerName; // 0x5C (0xC)
	float LookAtActorRadius; // 0x68 (0x4)
	BOOL bDisableBeyondLimit :1 ; // 0x6C (0x4)
	const unsigned long: 0;
	float MaxLookAtTime; // 0x70 (0x4)
	float MinLookAtTime; // 0x74 (0x4)
	float MaxInterestTime; // 0x78 (0x4)
	struct TArray_UClassPtr ActorClassesToLookAt; // 0x7C (0xC)
	struct TArray_FName TargetBoneNames; // 0x88 (0xC)
	const unsigned char Unknown1[0x3C]; // 0x94 (0x3C) UNKNOWN PROPERTY
	struct USkeletalMeshComponent* SkeletalMeshComp; // 0xD0 (0x4)
	struct TArray_USkelControlLookAtPtr TrackControls; // 0xD4 (0xC)
	struct FVector RootMeshLocation; // 0xE0 (0xC)
	struct FRotator RootMeshRotation; // 0xEC (0xC)
};

struct UHeadTrackingComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UHeadTrackingComponent_Data UHeadTrackingComponent;
};

// 0x4E 
struct UAnimationCompressionAlgorithm_Data {
	// Last Offset: 0x3C
	struct FString Description; // 0x3C (0xC)
	BOOL bNeedsSkeleton :1 ; // 0x48 (0x4)
	const unsigned long: 0;
	unsigned char TranslationCompressionChoice; // 0x4C (0x1) (Enum = ValidTranslationCompressionFormats)
	unsigned char RotationCompressionChoice; // 0x4D (0x1) (Enum = ValidRotationCompressionFormats)
};

struct UAnimationCompressionAlgorithm {
	struct UObject_Data UObject;
	struct UAnimationCompressionAlgorithm_Data UAnimationCompressionAlgorithm;
};

// 0x58 
struct UAnimationCompressionAlgorithm_Automatic_Data {
	// Last Offset: 0x50
	float MaxEndEffectorError; // 0x50 (0x4)
	BOOL bTryFixedBitwiseCompression :1 ; // 0x54 (0x4)
	BOOL bTryPerTrackBitwiseCompression :1 ; // 0x54 (0x4)
	BOOL bTryLinearKeyRemovalCompression :1 ; // 0x54 (0x4)
	BOOL bTryIntervalKeyRemoval :1 ; // 0x54 (0x4)
	BOOL bRunCurrentDefaultCompressor :1 ; // 0x54 (0x4)
	BOOL bAutoReplaceIfExistingErrorTooGreat :1 ; // 0x54 (0x4)
	BOOL bRaiseMaxErrorToExisting :1 ; // 0x54 (0x4)
	const unsigned long: 0;
};

struct UAnimationCompressionAlgorithm_Automatic {
	struct UObject_Data UObject;
	struct UAnimationCompressionAlgorithm_Data UAnimationCompressionAlgorithm;
	struct UAnimationCompressionAlgorithm_Automatic_Data UAnimationCompressionAlgorithm_Automatic;
};

// 0x50 
struct UAnimationCompressionAlgorithm_BitwiseCompressOnly_Data {
	// Last Offset: 0x50
};

struct UAnimationCompressionAlgorithm_BitwiseCompressOnly {
	struct UObject_Data UObject;
	struct UAnimationCompressionAlgorithm_Data UAnimationCompressionAlgorithm;
	struct UAnimationCompressionAlgorithm_BitwiseCompressOnly_Data UAnimationCompressionAlgorithm_BitwiseCompressOnly;
};

// 0x60 
struct UAnimationCompressionAlgorithm_GBXCustom_Data {
	// Last Offset: 0x50
	int MinKeys; // 0x50 (0x4)
	BOOL bStartAtSecondKey :1 ; // 0x54 (0x4)
	BOOL bKeepLastKey :1 ; // 0x54 (0x4)
	const unsigned long: 0;
	float MaxPosDiff; // 0x58 (0x4)
	float MaxAngleDiff; // 0x5C (0x4)
};

struct UAnimationCompressionAlgorithm_GBXCustom {
	struct UObject_Data UObject;
	struct UAnimationCompressionAlgorithm_Data UAnimationCompressionAlgorithm;
	struct UAnimationCompressionAlgorithm_GBXCustom_Data UAnimationCompressionAlgorithm_GBXCustom;
};

// 0x50 
struct UAnimationCompressionAlgorithm_LeastDestructive_Data {
	// Last Offset: 0x50
};

struct UAnimationCompressionAlgorithm_LeastDestructive {
	struct UObject_Data UObject;
	struct UAnimationCompressionAlgorithm_Data UAnimationCompressionAlgorithm;
	struct UAnimationCompressionAlgorithm_LeastDestructive_Data UAnimationCompressionAlgorithm_LeastDestructive;
};

// 0x58 
struct UAnimationCompressionAlgorithm_RemoveEverySecondKey_Data {
	// Last Offset: 0x50
	int MinKeys; // 0x50 (0x4)
	BOOL bStartAtSecondKey :1 ; // 0x54 (0x4)
	const unsigned long: 0;
};

struct UAnimationCompressionAlgorithm_RemoveEverySecondKey {
	struct UObject_Data UObject;
	struct UAnimationCompressionAlgorithm_Data UAnimationCompressionAlgorithm;
	struct UAnimationCompressionAlgorithm_RemoveEverySecondKey_Data UAnimationCompressionAlgorithm_RemoveEverySecondKey;
};

// 0x6C 
struct UAnimationCompressionAlgorithm_RemoveLinearKeys_Data {
	// Last Offset: 0x50
	float MaxPosDiff; // 0x50 (0x4)
	float MaxAngleDiff; // 0x54 (0x4)
	float MaxEffectorDiff; // 0x58 (0x4)
	float MinEffectorDiff; // 0x5C (0x4)
	float EffectorDiffSocket; // 0x60 (0x4)
	float ParentKeyScale; // 0x64 (0x4)
	BOOL bRetarget :1 ; // 0x68 (0x4)
	BOOL bActuallyFilterLinearKeys :1 ; // 0x68 (0x4)
	const unsigned long: 0;
};

struct UAnimationCompressionAlgorithm_RemoveLinearKeys {
	struct UObject_Data UObject;
	struct UAnimationCompressionAlgorithm_Data UAnimationCompressionAlgorithm;
	struct UAnimationCompressionAlgorithm_RemoveLinearKeys_Data UAnimationCompressionAlgorithm_RemoveLinearKeys;
};

// 0xBC 
struct UAnimationCompressionAlgorithm_PerTrackCompression_Data {
	// Last Offset: 0x6C
	float MaxZeroingThreshold; // 0x6C (0x4)
	float MaxPosDiffBitwise; // 0x70 (0x4)
	float MaxAngleDiffBitwise; // 0x74 (0x4)
	struct TArray_unsigned_char AllowedRotationFormats; // 0x78 (0xC)
	struct TArray_unsigned_char AllowedTranslationFormats; // 0x84 (0xC)
	BOOL bResampleAnimation :1 ; // 0x90 (0x4)
	BOOL bUseAdaptiveError :1 ; // 0x90 (0x4)
	BOOL bUseOverrideForEndEffectors :1 ; // 0x90 (0x4)
	BOOL bUseAdaptiveError2 :1 ; // 0x90 (0x4)
	const unsigned long: 0;
	float ResampledFramerate; // 0x94 (0x4)
	int MinKeysForResampling; // 0x98 (0x4)
	int TrackHeightBias; // 0x9C (0x4)
	float ParentingDivisor; // 0xA0 (0x4)
	float ParentingDivisorExponent; // 0xA4 (0x4)
	float RotationErrorSourceRatio; // 0xA8 (0x4)
	float TranslationErrorSourceRatio; // 0xAC (0x4)
	float MaxErrorPerTrackRatio; // 0xB0 (0x4)
	float PerturbationProbeSize; // 0xB4 (0x4)
	struct FPointer PerReductionCachedData; // 0xB8 (0x4)
};

struct UAnimationCompressionAlgorithm_PerTrackCompression {
	struct UObject_Data UObject;
	struct UAnimationCompressionAlgorithm_Data UAnimationCompressionAlgorithm;
	struct UAnimationCompressionAlgorithm_RemoveLinearKeys_Data UAnimationCompressionAlgorithm_RemoveLinearKeys;
	struct UAnimationCompressionAlgorithm_PerTrackCompression_Data UAnimationCompressionAlgorithm_PerTrackCompression;
};

// 0x58 
struct UAnimationCompressionAlgorithm_RemoveTrivialKeys_Data {
	// Last Offset: 0x50
	float MaxPosDiff; // 0x50 (0x4)
	float MaxAngleDiff; // 0x54 (0x4)
};

struct UAnimationCompressionAlgorithm_RemoveTrivialKeys {
	struct UObject_Data UObject;
	struct UAnimationCompressionAlgorithm_Data UAnimationCompressionAlgorithm;
	struct UAnimationCompressionAlgorithm_RemoveTrivialKeys_Data UAnimationCompressionAlgorithm_RemoveTrivialKeys;
};

// 0x50 
struct UAnimationCompressionAlgorithm_RevertToRaw_Data {
	// Last Offset: 0x50
};

struct UAnimationCompressionAlgorithm_RevertToRaw {
	struct UObject_Data UObject;
	struct UAnimationCompressionAlgorithm_Data UAnimationCompressionAlgorithm;
	struct UAnimationCompressionAlgorithm_RevertToRaw_Data UAnimationCompressionAlgorithm_RevertToRaw;
};

// 0x3C 
struct UAnimMetaData_Data {
	// Last Offset: 0x3C
};

struct UAnimMetaData {
	struct UObject_Data UObject;
	struct UAnimMetaData_Data UAnimMetaData;
};

// 0x54 
struct UAnimMetaData_SkelControl_Data {
	// Last Offset: 0x3C
	struct TArray_FName SkelControlNameList; // 0x3C (0xC)
	BOOL bFullControlOverController :1 ; // 0x48 (0x4)
	const unsigned long: 0;
	struct FName SkelControlName; // 0x4C (0x8)
};

struct UAnimMetaData_SkelControl {
	struct UObject_Data UObject;
	struct UAnimMetaData_Data UAnimMetaData;
	struct UAnimMetaData_SkelControl_Data UAnimMetaData_SkelControl;
};

// 0x60 
struct UAnimMetaData_SkelControlKeyFrame_Data {
	// Last Offset: 0x54
	struct TArray_FTimeModifier KeyFrames; // 0x54 (0xC)
};

struct UAnimMetaData_SkelControlKeyFrame {
	struct UObject_Data UObject;
	struct UAnimMetaData_Data UAnimMetaData;
	struct UAnimMetaData_SkelControl_Data UAnimMetaData_SkelControl;
	struct UAnimMetaData_SkelControlKeyFrame_Data UAnimMetaData_SkelControlKeyFrame;
};

// 0x3C 
struct UAnimNotify_Data {
	// Last Offset: 0x3C
};

struct UAnimNotify {
	struct UObject_Data UObject;
	struct UAnimNotify_Data UAnimNotify;
};

// 0x4C 
struct UAnimNotify_AkEvent_Data {
	// Last Offset: 0x3C
	struct UAkEvent* AkEvent; // 0x3C (0x4)
	BOOL bFollowActor :1 ; // 0x40 (0x4)
	const unsigned long: 0;
	struct FName BoneName; // 0x44 (0x8)
};

struct UAnimNotify_AkEvent {
	struct UObject_Data UObject;
	struct UAnimNotify_Data UAnimNotify;
	struct UAnimNotify_AkEvent_Data UAnimNotify_AkEvent;
};

// 0x40 
struct UAnimNotify_CameraEffect_Data {
	// Last Offset: 0x3C
	struct UClass* CameraLensEffect; // 0x3C (0x4)
};

struct UAnimNotify_CameraEffect {
	struct UObject_Data UObject;
	struct UAnimNotify_Data UAnimNotify;
	struct UAnimNotify_CameraEffect_Data UAnimNotify_CameraEffect;
};

// 0x4C 
struct UAnimNotify_ClothingMaxDistanceScale_Data {
	// Last Offset: 0x3C
	float StartScale; // 0x3C (0x4)
	float EndScale; // 0x40 (0x4)
	unsigned char ScaleMode; // 0x44 (0x1) (Enum = EMaxDistanceScaleMode)
	const unsigned char Unknown1[0x3]; // 0x45 (0x3) > LAST OFFSET
	float Duration; // 0x48 (0x4)
};

struct UAnimNotify_ClothingMaxDistanceScale {
	struct UObject_Data UObject;
	struct UAnimNotify_Data UAnimNotify;
	struct UAnimNotify_ClothingMaxDistanceScale_Data UAnimNotify_ClothingMaxDistanceScale;
};

// 0x44 
struct UAnimNotify_Footstep_Data {
	// Last Offset: 0x3C
	int FootDown; // 0x3C (0x4)
	BOOL bFirstPerson :1 ; // 0x40 (0x4)
	const unsigned long: 0;
};

struct UAnimNotify_Footstep {
	struct UObject_Data UObject;
	struct UAnimNotify_Data UAnimNotify;
	struct UAnimNotify_Footstep_Data UAnimNotify_Footstep;
};

// 0x54 
struct UAnimNotify_ForceField_Data {
	// Last Offset: 0x3C
	struct UNxForceFieldComponent* ForceFieldComponent; // 0x3C (0x4)
	BOOL bAttach :1 ; // 0x40 (0x4)
	const unsigned long: 0;
	struct FName SocketName; // 0x44 (0x8)
	struct FName BoneName; // 0x4C (0x8)
};

struct UAnimNotify_ForceField {
	struct UObject_Data UObject;
	struct UAnimNotify_Data UAnimNotify;
	struct UAnimNotify_ForceField_Data UAnimNotify_ForceField;
};

// 0x44 
struct UAnimNotify_Kismet_Data {
	// Last Offset: 0x3C
	struct FName NotifyName; // 0x3C (0x8)
};

struct UAnimNotify_Kismet {
	struct UObject_Data UObject;
	struct UAnimNotify_Data UAnimNotify;
	struct UAnimNotify_Kismet_Data UAnimNotify_Kismet;
};

// 0x60 
struct UAnimNotify_PlayParticleEffect_Data {
	// Last Offset: 0x3C
	struct UParticleSystem* PSTemplate; // 0x3C (0x4)
	BOOL bIsExtremeContent :1 ; // 0x40 (0x4)
	BOOL bAttach :1 ; // 0x40 (0x4)
	BOOL bPreview :1 ; // 0x40 (0x4)
	BOOL bSkipIfOwnerIsHidden :1 ; // 0x40 (0x4)
	BOOL bOwnerNoSee :1 ; // 0x40 (0x4)
	BOOL bOnlyOwnerSee :1 ; // 0x40 (0x4)
	const unsigned long: 0;
	struct UParticleSystem* PSNonExtremeContentTemplate; // 0x44 (0x4)
	struct FName SocketName; // 0x48 (0x8)
	struct FName BoneName; // 0x50 (0x8)
	struct FName BoneSocketModuleActorName; // 0x58 (0x8)
};

struct UAnimNotify_PlayParticleEffect {
	struct UObject_Data UObject;
	struct UAnimNotify_Data UAnimNotify;
	struct UAnimNotify_PlayParticleEffect_Data UAnimNotify_PlayParticleEffect;
};

// 0x4C 
struct UAnimNotify_Rumble_Data {
	// Last Offset: 0x3C
	struct UClass* PredefinedWaveForm; // 0x3C (0x4)
	struct UForceFeedbackWaveform* WaveForm; // 0x40 (0x4)
	BOOL bCheckForBasedPlayer :1 ; // 0x44 (0x4)
	const unsigned long: 0;
	float EffectRadius; // 0x48 (0x4)
};

struct UAnimNotify_Rumble {
	struct UObject_Data UObject;
	struct UAnimNotify_Data UAnimNotify;
	struct UAnimNotify_Rumble_Data UAnimNotify_Rumble;
};

// 0x54 
struct UAnimNotify_Script_Data {
	// Last Offset: 0x3C
	struct FName NotifyName; // 0x3C (0x8)
	struct FName NotifyTickName; // 0x44 (0x8)
	struct FName NotifyEndName; // 0x4C (0x8)
};

struct UAnimNotify_Script {
	struct UObject_Data UObject;
	struct UAnimNotify_Data UAnimNotify;
	struct UAnimNotify_Script_Data UAnimNotify_Script;
};

// 0x3C 
struct UAnimNotify_Scripted_Data {
	// Last Offset: 0x3C
};

struct UAnimNotify_Scripted {
	struct UObject_Data UObject;
	struct UAnimNotify_Data UAnimNotify;
	struct UAnimNotify_Scripted_Data UAnimNotify_Scripted;
};

// 0x48 
struct UAnimNotify_PawnMaterialParam_Data {
	// Last Offset: 0x3C
	struct TArray_FScalarParameterInterpStruct ScalarParameterInterpArray; // 0x3C (0xC)
};

struct UAnimNotify_PawnMaterialParam {
	struct UObject_Data UObject;
	struct UAnimNotify_Data UAnimNotify;
	struct UAnimNotify_Scripted_Data UAnimNotify_Scripted;
	struct UAnimNotify_PawnMaterialParam_Data UAnimNotify_PawnMaterialParam;
};

// 0x8C 
struct UAnimNotify_ViewShake_Data {
	// Last Offset: 0x3C
	float Duration; // 0x3C (0x4)
	struct FVector RotAmplitude; // 0x40 (0xC)
	struct FVector RotFrequency; // 0x4C (0xC)
	struct FVector LocAmplitude; // 0x58 (0xC)
	struct FVector LocFrequency; // 0x64 (0xC)
	float FOVAmplitude; // 0x70 (0x4)
	float FOVFrequency; // 0x74 (0x4)
	BOOL bDoControllerVibration :1 ; // 0x78 (0x4)
	BOOL bUseBoneLocation :1 ; // 0x78 (0x4)
	const unsigned long: 0;
	float ShakeRadius; // 0x7C (0x4)
	struct FName BoneName; // 0x80 (0x8)
	struct UCameraShake* ShakeParams; // 0x88 (0x4)
};

struct UAnimNotify_ViewShake {
	struct UObject_Data UObject;
	struct UAnimNotify_Data UAnimNotify;
	struct UAnimNotify_Scripted_Data UAnimNotify_Scripted;
	struct UAnimNotify_ViewShake_Data UAnimNotify_ViewShake;
};

// 0x58 
struct UAnimNotify_Sound_Data {
	// Last Offset: 0x3C
	struct USoundCue* SoundCue; // 0x3C (0x4)
	BOOL bFollowActor :1 ; // 0x40 (0x4)
	BOOL bIgnoreIfActorHidden :1 ; // 0x40 (0x4)
	const unsigned long: 0;
	struct FName BoneName; // 0x44 (0x8)
	float PercentToPlay; // 0x4C (0x4)
	float VolumeMultiplier; // 0x50 (0x4)
	float PitchMultiplier; // 0x54 (0x4)
};

struct UAnimNotify_Sound {
	struct UObject_Data UObject;
	struct UAnimNotify_Data UAnimNotify;
	struct UAnimNotify_Sound_Data UAnimNotify_Sound;
};

// 0x50 
struct UAnimNotify_SoundSpatial_Data {
	// Last Offset: 0x3C
	struct USoundCue* SoundCueFirstPerson; // 0x3C (0x4)
	struct USoundCue* SoundCueThirdPerson; // 0x40 (0x4)
	BOOL bFollowActor :1 ; // 0x44 (0x4)
	const unsigned long: 0;
	struct FName BoneName; // 0x48 (0x8)
};

struct UAnimNotify_SoundSpatial {
	struct UObject_Data UObject;
	struct UAnimNotify_Data UAnimNotify;
	struct UAnimNotify_SoundSpatial_Data UAnimNotify_SoundSpatial;
};

// 0x90 
struct UAnimNotify_Trails_Data {
	// Last Offset: 0x3C
	struct UParticleSystem* PSTemplate; // 0x3C (0x4)
	BOOL bIsExtremeContent :1 ; // 0x40 (0x4)
	BOOL bPreview :1 ; // 0x40 (0x4)
	BOOL bSkipIfOwnerIsHidden :1 ; // 0x40 (0x4)
	BOOL bOwnerNoSee :1 ; // 0x40 (0x4)
	BOOL bOnlyOwnerSee :1 ; // 0x40 (0x4)
	BOOL bResampleRequired :1 ; // 0x40 (0x4)
	const unsigned long: 0;
	struct FName FirstEdgeSocketName; // 0x44 (0x8)
	struct FName ControlPointSocketName; // 0x4C (0x8)
	struct FName SecondEdgeSocketName; // 0x54 (0x8)
	float LastStartTime; // 0x5C (0x4)
	float EndTime; // 0x60 (0x4)
	float SampleTimeStep; // 0x64 (0x4)
	struct TArray_FTrailSamplePoint TrailSampleData; // 0x68 (0xC)
	float SamplesPerSecond; // 0x74 (0x4)
	struct TArray_FTrailSample TrailSampledData; // 0x78 (0xC)
	float CurrentTime; // 0x84 (0x4)
	float TimeStep; // 0x88 (0x4)
	struct UAnimNodeSequence* AnimNodeSeq; // 0x8C (0x4)
};

struct UAnimNotify_Trails {
	struct UObject_Data UObject;
	struct UAnimNotify_Data UAnimNotify;
	struct UAnimNotify_Trails_Data UAnimNotify_Trails;
};

// 0x40 
struct UAnimObject_Data {
	// Last Offset: 0x3C
	struct USkeletalMeshComponent* SkelComponent; // 0x3C (0x4)
};

struct UAnimObject {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
};

// 0xB4  (Alignment = 16)
struct UAnimNode_Data {
	// Last Offset: 0x40
	BOOL bRelevant :1 ; // 0x40 (0x4)
	BOOL bJustBecameRelevant :1 ; // 0x40 (0x4)
	BOOL bTickDuringPausedAnims :1 ; // 0x40 (0x4)
	BOOL bEditorOnly :1 ; // 0x40 (0x4)
	BOOL bDisableCaching :1 ; // 0x40 (0x4)
	BOOL bCallScriptEventOnInit :1 ; // 0x40 (0x4)
	BOOL bCallScriptEventOnBecomeRelevant :1 ; // 0x40 (0x4)
	BOOL bCallScriptEventOnCeaseRelevant :1 ; // 0x40 (0x4)
	const unsigned long: 0;
	int NodeTickTag; // 0x44 (0x4)
	int NodeInitTag; // 0x48 (0x4)
	int TickArrayIndex; // 0x4C (0x4)
	int NodeCachedAtomsTag; // 0x50 (0x4)
	float NodeTotalWeight; // 0x54 (0x4)
	struct TArray_UAnimNodeBlendBasePtr ParentNodes; // 0x58 (0xC)
	struct FName NodeName; // 0x64 (0x8)
	struct TArray_FBoneAtom CachedBoneAtoms; // 0x6C (0xC)
	unsigned char CachedNumDesiredBones; // 0x78 (0x1)
	const unsigned char Unknown1[0x7]; // 0x79 (0x7) > LAST OFFSET
	struct FBoneAtom CachedRootMotionDelta; // 0x80 (0x20)
	int bCachedHasRootMotion; // 0xA0 (0x4)
	struct TArray_FCurveKey CachedCurveKeys; // 0xA4 (0xC)
	int SearchTag; // 0xB0 (0x4)
};

struct UAnimNode {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct UAnimNode_Data UAnimNode;
};

// 0xC5  (Alignment = 16)
struct UAnimNodeBlendBase_Data {
	// Last Offset: 0xB4
	struct TArray_FAnimBlendChild Children; // 0xB4 (0xC)
	BOOL bFixNumChildren :1 ; // 0xC0 (0x4)
	const unsigned long: 0;
	unsigned char BlendType; // 0xC4 (0x1) (Enum = AlphaBlendType)
};

struct UAnimNodeBlendBase {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct UAnimNode_Data UAnimNode;
	struct UAnimNodeBlendBase_Data UAnimNodeBlendBase;
};

// 0xD9  (Alignment = 16)
struct UAnimNode_MultiBlendPerBone_Data {
	// Last Offset: 0xC8
	struct APawn* PawnOwner; // 0xC8 (0x4)
	struct TArray_FPerBoneMaskInfo MaskList; // 0xCC (0xC)
	unsigned char RotationBlendType; // 0xD8 (0x1) (Enum = EBlendType)
};

struct UAnimNode_MultiBlendPerBone {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct UAnimNode_Data UAnimNode;
	struct UAnimNodeBlendBase_Data UAnimNodeBlendBase;
	struct UAnimNode_MultiBlendPerBone_Data UAnimNode_MultiBlendPerBone;
};

// 0x110  (Alignment = 16)
struct UAnimNodeAimOffset_Data {
	// Last Offset: 0xC8
	struct FVector2D Aim; // 0xC8 (0x8)
	struct FVector2D AngleOffset; // 0xD0 (0x8)
	BOOL bForceAimDir :1 ; // 0xD8 (0x4)
	BOOL bBakeFromAnimations :1 ; // 0xD8 (0x4)
	BOOL bPassThroughWhenNotRendered :1 ; // 0xD8 (0x4)
	BOOL bSynchronizeNodesInEditor :1 ; // 0xD8 (0x4)
	BOOL bBlendInLocalSpace :1 ; // 0xD8 (0x4)
	BOOL bMoreAccurateAndMoreExpensive :1 ; // 0xD8 (0x4)
	const unsigned long: 0;
	int PassThroughAtOrAboveLOD; // 0xDC (0x4)
	unsigned char ForcedAimDir; // 0xE0 (0x1) (Enum = EAnimAimDir)
	const unsigned char Unknown1[0x3]; // 0xE1 (0x3) > LAST OFFSET
	struct TArray_unsigned_char RequiredBones; // 0xE4 (0xC)
	struct TArray_unsigned_char AimCpntIndexLUT; // 0xF0 (0xC)
	struct UAnimNodeAimOffset* TemplateNode; // 0xFC (0x4)
	struct TArray_FAimOffsetProfile Profiles; // 0x100 (0xC)
	int CurrentProfileIndex; // 0x10C (0x4)
};

struct UAnimNodeAimOffset {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct UAnimNode_Data UAnimNode;
	struct UAnimNodeBlendBase_Data UAnimNodeBlendBase;
	struct UAnimNodeAimOffset_Data UAnimNodeAimOffset;
};

// 0xD8  (Alignment = 16)
struct UAnimNodeBlend_Data {
	// Last Offset: 0xC8
	float Child2Weight; // 0xC8 (0x4)
	float Child2WeightTarget; // 0xCC (0x4)
	float BlendTimeToGo; // 0xD0 (0x4)
	BOOL bSkipBlendWhenNotRendered :1 ; // 0xD4 (0x4)
	const unsigned long: 0;
};

struct UAnimNodeBlend {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct UAnimNode_Data UAnimNode;
	struct UAnimNodeBlendBase_Data UAnimNodeBlendBase;
	struct UAnimNodeBlend_Data UAnimNodeBlend;
};

// 0xDC  (Alignment = 16)
struct UAnimNodeAdditiveBlending_Data {
	// Last Offset: 0xD8
	BOOL bPassThroughWhenNotRendered :1 ; // 0xD8 (0x4)
	const unsigned long: 0;
};

struct UAnimNodeAdditiveBlending {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct UAnimNode_Data UAnimNode;
	struct UAnimNodeBlendBase_Data UAnimNodeBlendBase;
	struct UAnimNodeBlend_Data UAnimNodeBlend;
	struct UAnimNodeAdditiveBlending_Data UAnimNodeAdditiveBlending;
};

// 0x100  (Alignment = 16)
struct UAnimNodeBlendPerBone_Data {
	// Last Offset: 0xD8
	BOOL bForceLocalSpaceBlend :1 ; // 0xD8 (0x4)
	const unsigned long: 0;
	struct TArray_FName BranchStartBoneName; // 0xDC (0xC)
	struct TArray_float Child2PerBoneWeight; // 0xE8 (0xC)
	struct TArray_unsigned_char LocalToCompReqBones; // 0xF4 (0xC)
};

struct UAnimNodeBlendPerBone {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct UAnimNode_Data UAnimNode;
	struct UAnimNodeBlendBase_Data UAnimNodeBlendBase;
	struct UAnimNodeBlend_Data UAnimNodeBlend;
	struct UAnimNodeBlendPerBone_Data UAnimNodeBlendPerBone;
};

// 0xE8  (Alignment = 16)
struct UAnimNodeCrossfader_Data {
	// Last Offset: 0xD8
	struct FName DefaultAnimSeqName; // 0xD8 (0x8)
	BOOL bDontBlendOutOneShot :1 ; // 0xE0 (0x4)
	const unsigned long: 0;
	float PendingBlendOutTimeOneShot; // 0xE4 (0x4)
};

struct UAnimNodeCrossfader {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct UAnimNode_Data UAnimNode;
	struct UAnimNodeBlendBase_Data UAnimNodeBlendBase;
	struct UAnimNodeBlend_Data UAnimNodeBlend;
	struct UAnimNodeCrossfader_Data UAnimNodeCrossfader;
};

// 0xE0  (Alignment = 16)
struct UAnimNodePlayCustomAnim_Data {
	// Last Offset: 0xD8
	BOOL bIsPlayingCustomAnim :1 ; // 0xD8 (0x4)
	const unsigned long: 0;
	float CustomPendingBlendOutTime; // 0xDC (0x4)
};

struct UAnimNodePlayCustomAnim {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct UAnimNode_Data UAnimNode;
	struct UAnimNodeBlendBase_Data UAnimNodeBlendBase;
	struct UAnimNodeBlend_Data UAnimNodeBlend;
	struct UAnimNodePlayCustomAnim_Data UAnimNodePlayCustomAnim;
};

// 0xE4  (Alignment = 16)
struct UAnimNodeBlendDirectional_Data {
	// Last Offset: 0xC8
	float DirDegreesPerSecond; // 0xC8 (0x4)
	float DirAngle; // 0xCC (0x4)
	int SingleAnimAtOrAboveLOD; // 0xD0 (0x4)
	struct FRotator RotationOffset; // 0xD4 (0xC)
	BOOL bUseAcceleration :1 ; // 0xE0 (0x4)
	const unsigned long: 0;
};

struct UAnimNodeBlendDirectional {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct UAnimNode_Data UAnimNode;
	struct UAnimNodeBlendBase_Data UAnimNodeBlendBase;
	struct UAnimNodeBlendDirectional_Data UAnimNodeBlendDirectional;
};

// 0xE4  (Alignment = 16)
struct UAnimNodeBlendList_Data {
	// Last Offset: 0xC8
	struct TArray_float TargetWeight; // 0xC8 (0xC)
	float BlendTimeToGo; // 0xD4 (0x4)
	int ActiveChildIndex; // 0xD8 (0x4)
	BOOL bPlayActiveChild :1 ; // 0xDC (0x4)
	BOOL bForceChildFullWeightWhenBecomingRelevant :1 ; // 0xDC (0x4)
	BOOL bSkipBlendWhenNotRendered :1 ; // 0xDC (0x4)
	const unsigned long: 0;
	float SliderPosition; // 0xE0 (0x4)
};

struct UAnimNodeBlendList {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct UAnimNode_Data UAnimNode;
	struct UAnimNodeBlendBase_Data UAnimNodeBlendBase;
	struct UAnimNodeBlendList_Data UAnimNodeBlendList;
};

// 0xFC  (Alignment = 16)
struct UAnimNodeBlendByBase_Data {
	// Last Offset: 0xE4
	unsigned char Type; // 0xE4 (0x1) (Enum = EBaseBlendType)
	const unsigned char Unknown1[0x3]; // 0xE5 (0x3) > LAST OFFSET
	struct FName ActorTag; // 0xE8 (0x8)
	struct UClass* ActorClass; // 0xF0 (0x4)
	float BlendTime; // 0xF4 (0x4)
	struct AActor* CachedBase; // 0xF8 (0x4)
};

struct UAnimNodeBlendByBase {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct UAnimNode_Data UAnimNode;
	struct UAnimNodeBlendBase_Data UAnimNodeBlendBase;
	struct UAnimNodeBlendList_Data UAnimNodeBlendList;
	struct UAnimNodeBlendByBase_Data UAnimNodeBlendByBase;
};

// 0xF8  (Alignment = 16)
struct UAnimNodeBlendByPhysics_Data {
	// Last Offset: 0xE4
	float DelayBeforeStartingBlend; // 0xE4 (0x4)
	struct FFlag WaitingToDoBlend; // 0xE8 (0x10)
};

struct UAnimNodeBlendByPhysics {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct UAnimNode_Data UAnimNode;
	struct UAnimNodeBlendBase_Data UAnimNodeBlendBase;
	struct UAnimNodeBlendList_Data UAnimNodeBlendList;
	struct UAnimNodeBlendByPhysics_Data UAnimNodeBlendByPhysics;
};

// 0xE8  (Alignment = 16)
struct UAnimNodeBlendByPosture_Data {
	// Last Offset: 0xE4
	BOOL bZeroPostSprintBlendWhenFiring :1 ; // 0xE4 (0x4)
	const unsigned long: 0;
};

struct UAnimNodeBlendByPosture {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct UAnimNode_Data UAnimNode;
	struct UAnimNodeBlendBase_Data UAnimNodeBlendBase;
	struct UAnimNodeBlendList_Data UAnimNodeBlendList;
	struct UAnimNodeBlendByPosture_Data UAnimNodeBlendByPosture;
};

// 0x11C  (Alignment = 16)
struct UAnimNodeBlendByProperty_Data {
	// Last Offset: 0xE4
	struct FName PropertyName; // 0xE4 (0x8)
	BOOL bUseOwnersBase :1 ; // 0xEC (0x4)
	BOOL bForceUpdate :1 ; // 0xEC (0x4)
	BOOL bUseSpecificBlendTimes :1 ; // 0xEC (0x4)
	BOOL bSynchronizeNodesInEditor :1 ; // 0xEC (0x4)
	const unsigned long: 0;
	struct FName CachedPropertyName; // 0xF0 (0x8)
	struct FPointer CachedFloatProperty; // 0xF8 (0x4)
	struct FPointer CachedBoolProperty; // 0xFC (0x4)
	struct FPointer CachedByteProperty; // 0x100 (0x4)
	struct AActor* CachedOwner; // 0x104 (0x4)
	float BlendTime; // 0x108 (0x4)
	float FloatPropMin; // 0x10C (0x4)
	float FloatPropMax; // 0x110 (0x4)
	float BlendToChild1Time; // 0x114 (0x4)
	float BlendToChild2Time; // 0x118 (0x4)
};

struct UAnimNodeBlendByProperty {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct UAnimNode_Data UAnimNode;
	struct UAnimNodeBlendBase_Data UAnimNodeBlendBase;
	struct UAnimNodeBlendList_Data UAnimNodeBlendList;
	struct UAnimNodeBlendByProperty_Data UAnimNodeBlendByProperty;
};

// 0x114  (Alignment = 16)
struct UAnimNodeBlendBySpeed_Data {
	// Last Offset: 0xE4
	float Speed; // 0xE4 (0x4)
	int LastChannel; // 0xE8 (0x4)
	float BlendUpTime; // 0xEC (0x4)
	float BlendDownTime; // 0xF0 (0x4)
	float BlendDownPerc; // 0xF4 (0x4)
	struct TArray_float Constraints; // 0xF8 (0xC)
	BOOL bUseAcceleration :1 ; // 0x104 (0x4)
	BOOL bUseBaseSkelComponentOwner :1 ; // 0x104 (0x4)
	BOOL bIgnoreZ :1 ; // 0x104 (0x4)
	BOOL bRestartChildrenOnBlendUpFromZero :1 ; // 0x104 (0x4)
	const unsigned long: 0;
	float BlendUpDelay; // 0x108 (0x4)
	float BlendDownDelay; // 0x10C (0x4)
	float BlendDelayRemaining; // 0x110 (0x4)
};

struct UAnimNodeBlendBySpeed {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct UAnimNode_Data UAnimNode;
	struct UAnimNodeBlendBase_Data UAnimNodeBlendBase;
	struct UAnimNodeBlendList_Data UAnimNodeBlendList;
	struct UAnimNodeBlendBySpeed_Data UAnimNodeBlendBySpeed;
};

// 0xFC  (Alignment = 16)
struct UAnimNodeRandom_Data {
	// Last Offset: 0xE4
	struct TArray_FRandomAnimInfo RandomInfo; // 0xE4 (0xC)
	struct UAnimNodeSequence* PlayingSeqNode; // 0xF0 (0x4)
	int PendingChildIndex; // 0xF4 (0x4)
	BOOL bPickedPendingChildIndex :1 ; // 0xF8 (0x4)
	const unsigned long: 0;
};

struct UAnimNodeRandom {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct UAnimNode_Data UAnimNode;
	struct UAnimNodeBlendBase_Data UAnimNodeBlendBase;
	struct UAnimNodeBlendList_Data UAnimNodeBlendList;
	struct UAnimNodeRandom_Data UAnimNodeRandom;
};

// 0xE0  (Alignment = 16)
struct UAnimNodeBlendMultiBone_Data {
	// Last Offset: 0xC8
	struct TArray_FChildBoneBlendInfo BlendTargetList; // 0xC8 (0xC)
	struct TArray_unsigned_char SourceRequiredBones; // 0xD4 (0xC)
};

struct UAnimNodeBlendMultiBone {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct UAnimNode_Data UAnimNode;
	struct UAnimNodeBlendBase_Data UAnimNodeBlendBase;
	struct UAnimNodeBlendMultiBone_Data UAnimNodeBlendMultiBone;
};

// 0xCC  (Alignment = 16)
struct UAnimNodeMirror_Data {
	// Last Offset: 0xC8
	BOOL bEnableMirroring :1 ; // 0xC8 (0x4)
	const unsigned long: 0;
};

struct UAnimNodeMirror {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct UAnimNode_Data UAnimNode;
	struct UAnimNodeBlendBase_Data UAnimNodeBlendBase;
	struct UAnimNodeMirror_Data UAnimNodeMirror;
};

// 0xCC  (Alignment = 16)
struct UAnimNodeScalePlayRate_Data {
	// Last Offset: 0xC8
	float ScaleByValue; // 0xC8 (0x4)
};

struct UAnimNodeScalePlayRate {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct UAnimNode_Data UAnimNode;
	struct UAnimNodeBlendBase_Data UAnimNodeBlendBase;
	struct UAnimNodeScalePlayRate_Data UAnimNodeScalePlayRate;
};

// 0xD4  (Alignment = 16)
struct UAnimNodeScaleRateBySpeed_Data {
	// Last Offset: 0xCC
	float BaseSpeed; // 0xCC (0x4)
	BOOL bUseBaseSkelComponentOwner :1 ; // 0xD0 (0x4)
	const unsigned long: 0;
};

struct UAnimNodeScaleRateBySpeed {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct UAnimNode_Data UAnimNode;
	struct UAnimNodeBlendBase_Data UAnimNodeBlendBase;
	struct UAnimNodeScalePlayRate_Data UAnimNodeScalePlayRate;
	struct UAnimNodeScaleRateBySpeed_Data UAnimNodeScaleRateBySpeed;
};

// 0xEC  (Alignment = 16)
struct UAnimNodeSlot_Data {
	// Last Offset: 0xC8
	BOOL bIsPlayingCustomAnim :1 ; // 0xC8 (0x4)
	BOOL bEarlyAnimEndNotify :1 ; // 0xC8 (0x4)
	BOOL bSkipBlendWhenNotRendered :1 ; // 0xC8 (0x4)
	BOOL bAdditiveAnimationsOverrideSource :1 ; // 0xC8 (0x4)
	BOOL bIsBeingUsedByInterpGroup :1 ; // 0xC8 (0x4)
	BOOL bReverseAnimSeqSearchOrder :1 ; // 0xC8 (0x4)
	const unsigned long: 0;
	float PendingBlendOutTime; // 0xCC (0x4)
	int CustomChildIndex; // 0xD0 (0x4)
	int TargetChildIndex; // 0xD4 (0x4)
	struct TArray_float TargetWeight; // 0xD8 (0xC)
	float BlendTimeToGo; // 0xE4 (0x4)
	struct UAnimNodeSynch* SynchNode; // 0xE8 (0x4)
};

struct UAnimNodeSlot {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct UAnimNode_Data UAnimNode;
	struct UAnimNodeBlendBase_Data UAnimNodeBlendBase;
	struct UAnimNodeSlot_Data UAnimNodeSlot;
};

// 0xD4  (Alignment = 16)
struct UAnimNodeSynch_Data {
	// Last Offset: 0xC8
	struct TArray_FSynchGroup Groups; // 0xC8 (0xC)
};

struct UAnimNodeSynch {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct UAnimNode_Data UAnimNode;
	struct UAnimNodeBlendBase_Data UAnimNodeBlendBase;
	struct UAnimNodeSynch_Data UAnimNodeSynch;
};

// 0x130  (Alignment = 16)
struct UAnimTree_Data {
	// Last Offset: 0xC8
	struct UAnimTree* AnimTreeTemplate; // 0xC8 (0x4)
	BOOL bEnablePooling :1 ; // 0xCC (0x4)
	BOOL bUseSavedPose :1 ; // 0xCC (0x4)
	BOOL bBeingEdited :1 ; // 0xCC (0x4)
	BOOL bParentNodeArrayBuilt :1 ; // 0xCC (0x4)
	BOOL bRebuildAnimTickArray :1 ; // 0xCC (0x4)
	const unsigned long: 0;
	struct TArray_FAnimGroup AnimGroups; // 0xD0 (0xC)
	struct TArray_FName PrioritizedSkelBranches; // 0xDC (0xC)
	struct TArray_FName ComposePrePassBoneNames; // 0xE8 (0xC)
	struct TArray_FName ComposePostPassBoneNames; // 0xF4 (0xC)
	struct TArray_UMorphNodeBasePtr RootMorphNodes; // 0x100 (0xC)
	struct TArray_FSkelControlListHead SkelControlLists; // 0x10C (0xC)
	struct TArray_FBoneAtom SavedPose; // 0x118 (0xC)
	struct TArray_UAnimNodePtr AnimTickArray; // 0x124 (0xC)
};

struct UAnimTree {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct UAnimNode_Data UAnimNode;
	struct UAnimNodeBlendBase_Data UAnimNodeBlendBase;
	struct UAnimTree_Data UAnimTree;
};

// 0x114  (Alignment = 16)
struct UAnimNodeSequence_Data {
	// Last Offset: 0xB4
	struct FName AnimSeqName; // 0xB4 (0x8)
	float Rate; // 0xBC (0x4)
	BOOL bPlaying :1 ; // 0xC0 (0x4)
	BOOL bLooping :1 ; // 0xC0 (0x4)
	BOOL bCauseActorAnimEnd :1 ; // 0xC0 (0x4)
	BOOL bCauseActorAnimPlay :1 ; // 0xC0 (0x4)
	BOOL bZeroRootRotation :1 ; // 0xC0 (0x4)
	BOOL bZeroRootTranslation :1 ; // 0xC0 (0x4)
	BOOL bDisableWarningWhenAnimNotFound :1 ; // 0xC0 (0x4)
	BOOL bReverseAnimSeqSearchOrder :1 ; // 0xC0 (0x4)
	BOOL bNoNotifies :1 ; // 0xC0 (0x4)
	BOOL bForceRefposeWhenNotPlaying :1 ; // 0xC0 (0x4)
	BOOL bIsIssuingNotifies :1 ; // 0xC0 (0x4)
	BOOL bForceAlwaysSlave :1 ; // 0xC0 (0x4)
	BOOL bSynchronize :1 ; // 0xC0 (0x4)
	BOOL bReverseSync :1 ; // 0xC0 (0x4)
	BOOL bShowTimeLineSlider :1 ; // 0xC0 (0x4)
	BOOL bDisableAnimNotifies :1 ; // 0xC0 (0x4)
	BOOL bLoopCameraAnim :1 ; // 0xC0 (0x4)
	BOOL bRandomizeCameraAnimLoopStartTime :1 ; // 0xC0 (0x4)
	BOOL bEditorOnlyAddRefPoseToAdditiveAnimation :1 ; // 0xC0 (0x4)
	const unsigned long: 0;
	float CurrentTime; // 0xC4 (0x4)
	float PreviousTime; // 0xC8 (0x4)
	float EndTime; // 0xCC (0x4)
	struct UAnimSequence* AnimSeq; // 0xD0 (0x4)
	int AnimLinkupIndex; // 0xD4 (0x4)
	float NotifyWeightThreshold; // 0xD8 (0x4)
	struct FName SynchGroupName; // 0xDC (0x8)
	float SynchPosOffset; // 0xE4 (0x4)
	struct UCameraAnim* CameraAnim; // 0xE8 (0x4)
	struct UCameraAnimInst* ActiveCameraAnimInstance; // 0xEC (0x4)
	float CameraAnimScale; // 0xF0 (0x4)
	float CameraAnimPlayRate; // 0xF4 (0x4)
	float CameraAnimBlendInTime; // 0xF8 (0x4)
	float CameraAnimBlendOutTime; // 0xFC (0x4)
	unsigned char RootBoneOption[3]; // 0x100 (0x3) (Enum = ERootBoneAxis)
	unsigned char RootRotationOption[3]; // 0x103 (0x3) (Enum = ERootRotationOption)
	const unsigned char Unknown1[0x2]; // 0x106 (0x2) > LAST OFFSET
	struct TArray_USkelControlBasePtr MetaDataSkelControlList; // 0x108 (0xC)
};

struct UAnimNodeSequence {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct UAnimNode_Data UAnimNode;
	struct UAnimNodeSequence_Data UAnimNodeSequence;
};

// 0x120  (Alignment = 16)
struct UAnimNodeSequenceBlendBase_Data {
	// Last Offset: 0x114
	struct TArray_FAnimBlendInfo Anims; // 0x114 (0xC)
};

struct UAnimNodeSequenceBlendBase {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct UAnimNode_Data UAnimNode;
	struct UAnimNodeSequence_Data UAnimNodeSequence;
	struct UAnimNodeSequenceBlendBase_Data UAnimNodeSequenceBlendBase;
};

// 0x190  (Alignment = 16)
struct UAnimNodeSequenceBlendByAim_Data {
	// Last Offset: 0x120
	struct FVector2D Aim; // 0x120 (0x8)
	struct FVector2D PreviousAim; // 0x128 (0x8)
	struct FVector2D HorizontalRange; // 0x130 (0x8)
	struct FVector2D VerticalRange; // 0x138 (0x8)
	struct FVector2D AngleOffset; // 0x140 (0x8)
	struct FName AnimName_LU; // 0x148 (0x8)
	struct FName AnimName_LC; // 0x150 (0x8)
	struct FName AnimName_LD; // 0x158 (0x8)
	struct FName AnimName_CU; // 0x160 (0x8)
	struct FName AnimName_CC; // 0x168 (0x8)
	struct FName AnimName_CD; // 0x170 (0x8)
	struct FName AnimName_RU; // 0x178 (0x8)
	struct FName AnimName_RC; // 0x180 (0x8)
	struct FName AnimName_RD; // 0x188 (0x8)
};

struct UAnimNodeSequenceBlendByAim {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct UAnimNode_Data UAnimNode;
	struct UAnimNodeSequence_Data UAnimNodeSequence;
	struct UAnimNodeSequenceBlendBase_Data UAnimNodeSequenceBlendBase;
	struct UAnimNodeSequenceBlendByAim_Data UAnimNodeSequenceBlendByAim;
};

// 0x4C 
struct UMorphNodeBase_Data {
	// Last Offset: 0x40
	struct FName NodeName; // 0x40 (0x8)
	BOOL bDrawSlider :1 ; // 0x48 (0x4)
	const unsigned long: 0;
};

struct UMorphNodeBase {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct UMorphNodeBase_Data UMorphNodeBase;
};

// 0x70 
struct UMorphNodeMultiPose_Data {
	// Last Offset: 0x4C
	struct TArray_UMorphTargetPtr Targets; // 0x4C (0xC)
	struct TArray_FName MorphNames; // 0x58 (0xC)
	struct TArray_float Weights; // 0x64 (0xC)
};

struct UMorphNodeMultiPose {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct UMorphNodeBase_Data UMorphNodeBase;
	struct UMorphNodeMultiPose_Data UMorphNodeMultiPose;
};

// 0x5C 
struct UMorphNodePose_Data {
	// Last Offset: 0x4C
	struct UMorphTarget* Target; // 0x4C (0x4)
	struct FName MorphName; // 0x50 (0x8)
	float Weight; // 0x58 (0x4)
};

struct UMorphNodePose {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct UMorphNodeBase_Data UMorphNodeBase;
	struct UMorphNodePose_Data UMorphNodePose;
};

// 0x58 
struct UMorphNodeWeightBase_Data {
	// Last Offset: 0x4C
	struct TArray_FMorphNodeConn NodeConns; // 0x4C (0xC)
};

struct UMorphNodeWeightBase {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct UMorphNodeBase_Data UMorphNodeBase;
	struct UMorphNodeWeightBase_Data UMorphNodeWeightBase;
};

// 0x5C 
struct UMorphNodeWeight_Data {
	// Last Offset: 0x58
	float NodeWeight; // 0x58 (0x4)
};

struct UMorphNodeWeight {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct UMorphNodeBase_Data UMorphNodeBase;
	struct UMorphNodeWeightBase_Data UMorphNodeWeightBase;
	struct UMorphNodeWeight_Data UMorphNodeWeight;
};

// 0x94 
struct UMorphNodeWeightByBoneAngle_Data {
	// Last Offset: 0x58
	float Angle; // 0x58 (0x4)
	float NodeWeight; // 0x5C (0x4)
	struct FName BaseBoneName; // 0x60 (0x8)
	unsigned char BaseBoneAxis; // 0x68 (0x1) (Enum = EAxis)
	unsigned char AngleBoneAxis; // 0x69 (0x1) (Enum = EAxis)
	const unsigned char Unknown1[0x2]; // 0x6A (0x2) > LAST OFFSET
	BOOL bInvertBaseBoneAxis :1 ; // 0x6C (0x4)
	BOOL bInvertAngleBoneAxis :1 ; // 0x6C (0x4)
	BOOL bControlMaterialParameter :1 ; // 0x6C (0x4)
	const unsigned long: 0;
	struct FName AngleBoneName; // 0x70 (0x8)
	int MaterialSlotId; // 0x78 (0x4)
	struct FName ScalarParameterName; // 0x7C (0x8)
	struct UMaterialInstanceConstant* MaterialInstanceConstant; // 0x84 (0x4)
	struct TArray_FBoneAngleMorph WeightArray; // 0x88 (0xC)
};

struct UMorphNodeWeightByBoneAngle {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct UMorphNodeBase_Data UMorphNodeBase;
	struct UMorphNodeWeightBase_Data UMorphNodeWeightBase;
	struct UMorphNodeWeightByBoneAngle_Data UMorphNodeWeightByBoneAngle;
};

// 0x8C 
struct UMorphNodeWeightByBoneRotation_Data {
	// Last Offset: 0x58
	float Angle; // 0x58 (0x4)
	float NodeWeight; // 0x5C (0x4)
	struct FName BoneName; // 0x60 (0x8)
	unsigned char BoneAxis; // 0x68 (0x1) (Enum = EAxis)
	const unsigned char Unknown1[0x3]; // 0x69 (0x3) > LAST OFFSET
	BOOL bInvertBoneAxis :1 ; // 0x6C (0x4)
	BOOL bControlMaterialParameter :1 ; // 0x6C (0x4)
	const unsigned long: 0;
	struct TArray_FBoneAngleMorph WeightArray; // 0x70 (0xC)
	int MaterialSlotId; // 0x7C (0x4)
	struct FName ScalarParameterName; // 0x80 (0x8)
	struct UMaterialInstanceConstant* MaterialInstanceConstant; // 0x88 (0x4)
};

struct UMorphNodeWeightByBoneRotation {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct UMorphNodeBase_Data UMorphNodeBase;
	struct UMorphNodeWeightBase_Data UMorphNodeWeightBase;
	struct UMorphNodeWeightByBoneRotation_Data UMorphNodeWeightByBoneRotation;
};

// 0x9C 
struct USkelControlBase_Data {
	// Last Offset: 0x40
	struct FName ControlName; // 0x40 (0x8)
	float ControlStrength; // 0x48 (0x4)
	float BlendInTime; // 0x4C (0x4)
	float BlendOutTime; // 0x50 (0x4)
	unsigned char BlendType; // 0x54 (0x1) (Enum = AlphaBlendType)
	const unsigned char Unknown1[0x3]; // 0x55 (0x3) > LAST OFFSET
	BOOL bPostPhysicsController :1 ; // 0x58 (0x4)
	BOOL bSetStrengthFromAnimNode :1 ; // 0x58 (0x4)
	BOOL bInitializedCachedNodeList :1 ; // 0x58 (0x4)
	BOOL bControlledByAnimMetada :1 ; // 0x58 (0x4)
	BOOL bInvertMetadataWeight :1 ; // 0x58 (0x4)
	BOOL bPropagateSetActive :1 ; // 0x58 (0x4)
	BOOL bIgnoreWhenNotRendered :1 ; // 0x58 (0x4)
	BOOL bShouldTickInScript :1 ; // 0x58 (0x4)
	BOOL bShouldTickOwner :1 ; // 0x58 (0x4)
	BOOL bEnableEaseInOut :1 ; // 0x58 (0x4)
	const unsigned long: 0;
	float StrengthTarget; // 0x5C (0x4)
	float BlendTimeToGo; // 0x60 (0x4)
	struct TArray_FName StrengthAnimNodeNameList; // 0x64 (0xC)
	struct TArray_UAnimNodePtr CachedNodeList; // 0x70 (0xC)
	float AnimMetadataWeight; // 0x7C (0x4)
	int AnimMetaDataUpdateTag; // 0x80 (0x4)
	float BoneScale; // 0x84 (0x4)
	int ControlTickTag; // 0x88 (0x4)
	int IgnoreAtOrAboveLOD; // 0x8C (0x4)
	struct USkelControlBase* NextControl; // 0x90 (0x4)
	int ControlPosX; // 0x94 (0x4)
	int ControlPosY; // 0x98 (0x4)
};

struct USkelControlBase {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct USkelControlBase_Data USkelControlBase;
};

// 0xE4 
struct USkelControl_CCD_IK_Data {
	// Last Offset: 0x9C
	struct FVector EffectorLocation; // 0x9C (0xC)
	unsigned char EffectorLocationSpace; // 0xA8 (0x1) (Enum = EBoneControlSpace)
	const unsigned char Unknown1[0x3]; // 0xA9 (0x3) > LAST OFFSET
	struct FName EffectorSpaceBoneName; // 0xAC (0x8)
	struct FVector EffectorTranslationFromBone; // 0xB4 (0xC)
	int NumBones; // 0xC0 (0x4)
	int MaxPerBoneIterations; // 0xC4 (0x4)
	int IterationsCount; // 0xC8 (0x4)
	float Precision; // 0xCC (0x4)
	BOOL bStartFromTail :1 ; // 0xD0 (0x4)
	BOOL bNoTurnOptimization :1 ; // 0xD0 (0x4)
	const unsigned long: 0;
	struct TArray_float AngleConstraint; // 0xD4 (0xC)
	float MaxAngleSteps; // 0xE0 (0x4)
};

struct USkelControl_CCD_IK {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct USkelControlBase_Data USkelControlBase;
	struct USkelControl_CCD_IK_Data USkelControl_CCD_IK;
};

// 0xA0 
struct USkelControl_Multiply_Data {
	// Last Offset: 0x9C
	float Multiplier; // 0x9C (0x4)
};

struct USkelControl_Multiply {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct USkelControlBase_Data USkelControlBase;
	struct USkelControl_Multiply_Data USkelControl_Multiply;
};

// 0xA8 
struct USkelControl_TwistBone_Data {
	// Last Offset: 0x9C
	struct FName SourceBoneName; // 0x9C (0x8)
	float TwistAngleScale; // 0xA4 (0x4)
};

struct USkelControl_TwistBone {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct USkelControlBase_Data USkelControlBase;
	struct USkelControl_TwistBone_Data USkelControl_TwistBone;
};

// 0x104 
struct USkelControlLimb_Data {
	// Last Offset: 0x9C
	struct FVector EffectorLocation; // 0x9C (0xC)
	struct FRotator EffectorRotation; // 0xA8 (0xC)
	unsigned char EffectorLocationSpace; // 0xB4 (0x1) (Enum = EBoneControlSpace)
	unsigned char JointTargetLocationSpace; // 0xB5 (0x1) (Enum = EBoneControlSpace)
	unsigned char JointOffsetSpace; // 0xB6 (0x1) (Enum = EBoneControlSpace)
	unsigned char BoneAxis; // 0xB7 (0x1) (Enum = EAxis)
	unsigned char JointAxis; // 0xB8 (0x1) (Enum = EAxis)
	const unsigned char Unknown1[0x3]; // 0xB9 (0x3) > LAST OFFSET
	struct FName EffectorSpaceBoneName; // 0xBC (0x8)
	struct FVector JointTargetLocation; // 0xC4 (0xC)
	struct FName JointTargetSpaceBoneName; // 0xD0 (0x8)
	struct FVector JointOffset; // 0xD8 (0xC)
	struct FName JointOffsetBoneName; // 0xE4 (0x8)
	BOOL bInvertBoneAxis :1 ; // 0xEC (0x4)
	BOOL bInvertJointAxis :1 ; // 0xEC (0x4)
	BOOL bRotateJoint :1 ; // 0xEC (0x4)
	BOOL bMaintainEffectorRelRot :1 ; // 0xEC (0x4)
	BOOL bTakeRotationFromEffectorSpace :1 ; // 0xEC (0x4)
	BOOL bAllowStretching :1 ; // 0xEC (0x4)
	BOOL SupportGearboxTwistBones :1 ; // 0xEC (0x4)
	BOOL bTakeRotationFromEffectorRotation :1 ; // 0xEC (0x4)
	const unsigned long: 0;
	struct FVector2D StretchLimits; // 0xF0 (0x8)
	struct FName StretchRollBoneName; // 0xF8 (0x8)
	int CachedTwistBoneIndex; // 0x100 (0x4)
};

struct USkelControlLimb {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct USkelControlBase_Data USkelControlBase;
	struct USkelControlLimb_Data USkelControlLimb;
};

// 0x128 
struct USkelControlFootPlacement_Data {
	// Last Offset: 0x104
	float FootOffset; // 0x104 (0x4)
	unsigned char FootUpAxis; // 0x108 (0x1) (Enum = EAxis)
	const unsigned char Unknown1[0x3]; // 0x109 (0x3) > LAST OFFSET
	struct FRotator FootRotOffset; // 0x10C (0xC)
	BOOL bInvertFootUpAxis :1 ; // 0x118 (0x4)
	BOOL bOrientFootToGround :1 ; // 0x118 (0x4)
	BOOL bOnlyEnableForUpAdjustment :1 ; // 0x118 (0x4)
	const unsigned long: 0;
	float MaxUpAdjustment; // 0x11C (0x4)
	float MaxDownAdjustment; // 0x120 (0x4)
	float MaxFootOrientAdjust; // 0x124 (0x4)
};

struct USkelControlFootPlacement {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct USkelControlBase_Data USkelControlBase;
	struct USkelControlLimb_Data USkelControlLimb;
	struct USkelControlFootPlacement_Data USkelControlFootPlacement;
};

// 0x138 
struct USkelControlLookAt_Data {
	// Last Offset: 0x9C
	struct FVector TargetLocation; // 0x9C (0xC)
	unsigned char TargetLocationSpace; // 0xA8 (0x1) (Enum = EBoneControlSpace)
	unsigned char LookAtAxis; // 0xA9 (0x1) (Enum = EAxis)
	unsigned char UpAxis; // 0xAA (0x1) (Enum = EAxis)
	unsigned char AllowRotationSpace; // 0xAB (0x1) (Enum = EBoneControlSpace)
	struct FName TargetSpaceBoneName; // 0xAC (0x8)
	BOOL bInvertLookAtAxis :1 ; // 0xB4 (0x4)
	BOOL bDefineUpAxis :1 ; // 0xB4 (0x4)
	BOOL bInvertUpAxis :1 ; // 0xB4 (0x4)
	BOOL bEnableLimit :1 ; // 0xB4 (0x4)
	BOOL bLimitBasedOnRefPose :1 ; // 0xB4 (0x4)
	BOOL bDisableBeyondLimit :1 ; // 0xB4 (0x4)
	BOOL bNotifyBeyondLimit :1 ; // 0xB4 (0x4)
	BOOL bShowLimit :1 ; // 0xB4 (0x4)
	BOOL bAllowRotationX :1 ; // 0xB4 (0x4)
	BOOL bAllowRotationY :1 ; // 0xB4 (0x4)
	BOOL bAllowRotationZ :1 ; // 0xB4 (0x4)
	const unsigned long: 0;
	float TargetLocationInterpSpeed; // 0xB8 (0x4)
	struct FVector DesiredTargetLocation; // 0xBC (0xC)
	struct FVector ActorSpaceLookAtTarget; // 0xC8 (0xC)
	float MaxAngle; // 0xD4 (0x4)
	float OuterMaxAngle; // 0xD8 (0x4)
	float DeadZoneAngle; // 0xDC (0x4)
	struct FVector2D RotationAngleRangeX; // 0xE0 (0x8)
	struct FVector2D RotationAngleRangeY; // 0xE8 (0x8)
	struct FVector2D RotationAngleRangeZ; // 0xF0 (0x8)
	struct FName AllowRotationOtherBoneName; // 0xF8 (0x8)
	float LookAtAlpha; // 0x100 (0x4)
	float LookAtAlphaTarget; // 0x104 (0x4)
	float LookAtAlphaBlendTimeToGo; // 0x108 (0x4)
	struct FVector LimitLookDir; // 0x10C (0xC)
	struct FVector BaseLookDir; // 0x118 (0xC)
	struct FVector BaseBonePos; // 0x124 (0xC)
	float LastCalcTime; // 0x130 (0x4)
	int ControlBoneIndex; // 0x134 (0x4)
};

struct USkelControlLookAt {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct USkelControlBase_Data USkelControlBase;
	struct USkelControlLookAt_Data USkelControlLookAt;
};

// 0xCC 
struct USkelControlSingleBone_Data {
	// Last Offset: 0x9C
	BOOL bApplyTranslation :1 ; // 0x9C (0x4)
	BOOL bApplyRotation :1 ; // 0x9C (0x4)
	BOOL bAddTranslation :1 ; // 0x9C (0x4)
	BOOL bAddRotation :1 ; // 0x9C (0x4)
	BOOL bRemoveMeshRotation :1 ; // 0x9C (0x4)
	const unsigned long: 0;
	struct FVector BoneTranslation; // 0xA0 (0xC)
	unsigned char BoneTranslationSpace; // 0xAC (0x1) (Enum = EBoneControlSpace)
	unsigned char BoneRotationSpace; // 0xAD (0x1) (Enum = EBoneControlSpace)
	const unsigned char Unknown1[0x2]; // 0xAE (0x2) > LAST OFFSET
	struct FName TranslationSpaceBoneName; // 0xB0 (0x8)
	struct FRotator BoneRotation; // 0xB8 (0xC)
	struct FName RotationSpaceBoneName; // 0xC4 (0x8)
};

struct USkelControlSingleBone {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct USkelControlBase_Data USkelControlBase;
	struct USkelControlSingleBone_Data USkelControlSingleBone;
};

// 0xE0 
struct USkelControlHandlebars_Data {
	// Last Offset: 0xCC
	unsigned char WheelRollAxis; // 0xCC (0x1) (Enum = EAxis)
	unsigned char HandlebarRotateAxis; // 0xCD (0x1) (Enum = EAxis)
	const unsigned char Unknown1[0x2]; // 0xCE (0x2) > LAST OFFSET
	struct FName WheelBoneName; // 0xD0 (0x8)
	BOOL bInvertRotation :1 ; // 0xD8 (0x4)
	const unsigned long: 0;
	int SteerWheelBoneIndex; // 0xDC (0x4)
};

struct USkelControlHandlebars {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct USkelControlBase_Data USkelControlBase;
	struct USkelControlSingleBone_Data USkelControlSingleBone;
	struct USkelControlHandlebars_Data USkelControlHandlebars;
};

// 0xE4 
struct USkelControlWheel_Data {
	// Last Offset: 0xCC
	float WheelDisplacement; // 0xCC (0x4)
	float WheelMaxRenderDisplacement; // 0xD0 (0x4)
	float WheelRoll; // 0xD4 (0x4)
	unsigned char WheelRollAxis; // 0xD8 (0x1) (Enum = EAxis)
	unsigned char WheelSteeringAxis; // 0xD9 (0x1) (Enum = EAxis)
	const unsigned char Unknown1[0x2]; // 0xDA (0x2) > LAST OFFSET
	float WheelSteering; // 0xDC (0x4)
	BOOL bInvertWheelRoll :1 ; // 0xE0 (0x4)
	BOOL bInvertWheelSteering :1 ; // 0xE0 (0x4)
	const unsigned long: 0;
};

struct USkelControlWheel {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct USkelControlBase_Data USkelControlBase;
	struct USkelControlSingleBone_Data USkelControlSingleBone;
	struct USkelControlWheel_Data USkelControlWheel;
};

// 0xB0 
struct USkelControlSpline_Data {
	// Last Offset: 0x9C
	int SplineLength; // 0x9C (0x4)
	unsigned char SplineBoneAxis; // 0xA0 (0x1) (Enum = EAxis)
	unsigned char BoneRotMode; // 0xA1 (0x1) (Enum = ESplineControlRotMode)
	const unsigned char Unknown1[0x2]; // 0xA2 (0x2) > LAST OFFSET
	BOOL bInvertSplineBoneAxis :1 ; // 0xA4 (0x4)
	const unsigned long: 0;
	float EndSplineTension; // 0xA8 (0x4)
	float StartSplineTension; // 0xAC (0x4)
};

struct USkelControlSpline {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct USkelControlBase_Data USkelControlBase;
	struct USkelControlSpline_Data USkelControlSpline;
};

// 0x110  (Alignment = 16)
struct USkelControlTrail_Data {
	// Last Offset: 0x9C
	int ChainLength; // 0x9C (0x4)
	unsigned char ChainBoneAxis; // 0xA0 (0x1) (Enum = EAxis)
	const unsigned char Unknown1[0x3]; // 0xA1 (0x3) > LAST OFFSET
	BOOL bInvertChainBoneAxis :1 ; // 0xA4 (0x4)
	BOOL bLimitStretch :1 ; // 0xA4 (0x4)
	BOOL bActorSpaceFakeVel :1 ; // 0xA4 (0x4)
	BOOL bHadValidStrength :1 ; // 0xA4 (0x4)
	const unsigned long: 0;
	float TrailRelaxation; // 0xA8 (0x4)
	float StretchLimit; // 0xAC (0x4)
	struct FVector FakeVelocity; // 0xB0 (0xC)
	float ThisTimstep; // 0xBC (0x4)
	struct TArray_FVector TrailBoneLocations; // 0xC0 (0xC)
	const unsigned char Unknown2[0x4]; // 0xCC (0x4) > LAST OFFSET
	struct FMatrix OldLocalToWorld; // 0xD0 (0x40)
};

struct USkelControlTrail {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct USkelControlBase_Data USkelControlBase;
	struct USkelControlTrail_Data USkelControlTrail;
};

// 0x104 
struct UAnimSequence_Data {
	// Last Offset: 0x3C
	struct FName SequenceName; // 0x3C (0x8)
	struct TArray_FAnimNotifyEvent Notifies; // 0x44 (0xC)
	struct TArray_UAnimMetaDataPtr MetaData; // 0x50 (0xC)
	struct TArray_FSkelControlModifier BoneControlModifiers; // 0x5C (0xC)
	float SequenceLength; // 0x68 (0x4)
	int NumFrames; // 0x6C (0x4)
	float RateScale; // 0x70 (0x4)
	BOOL bNoLoopingInterpolation :1 ; // 0x74 (0x4)
	BOOL bIsAdditive :1 ; // 0x74 (0x4)
	BOOL bAdditiveBuiltLooping :1 ; // 0x74 (0x4)
	BOOL bDoNotOverrideCompression :1 ; // 0x74 (0x4)
	BOOL bHasBeenUsed :1 ; // 0x74 (0x4)
	const unsigned long: 0;
	struct TArray_FRawAnimSequenceTrack RawAnimData; // 0x78 (0xC)
	struct TArray_FRawAnimSequenceTrack RawAnimationData; // 0x84 (0xC)
	struct TArray_FTranslationTrack TranslationData; // 0x90 (0xC)
	struct TArray_FRotationTrack RotationData; // 0x9C (0xC)
	struct TArray_FCurveTrack CurveData; // 0xA8 (0xC)
	unsigned char TranslationCompressionFormat; // 0xB4 (0x1) (Enum = AnimationCompressionFormat)
	unsigned char RotationCompressionFormat; // 0xB5 (0x1) (Enum = AnimationCompressionFormat)
	unsigned char KeyEncodingFormat; // 0xB6 (0x1) (Enum = AnimationKeyFormat)
	const unsigned char Unknown1[0x1]; // 0xB7 (0x1) > LAST OFFSET
	struct TArray_int CompressedTrackOffsets; // 0xB8 (0xC)
	struct TArray_unsigned_char CompressedByteStream; // 0xC4 (0xC)
	struct FPointer TranslationCodec; // 0xD0 (0x4)
	struct FPointer RotationCodec; // 0xD4 (0x4)
	struct TArray_FBoneAtom AdditiveRefPose; // 0xD8 (0xC)
	struct TArray_FRawAnimSequenceTrack AdditiveBasePose; // 0xE4 (0xC)
	int EncodingPkgVersion; // 0xF0 (0x4)
	float UseScore; // 0xF4 (0x4)
	struct TArray_FDeltaTrackInfo DeltaTrackCache; // 0xF8 (0xC)
};

struct UAnimSequence {
	struct UObject_Data UObject;
	struct UAnimSequence_Data UAnimSequence;
};

// 0x11C 
struct UAnimSet_Data {
	// Last Offset: 0x3C
	BOOL bAnimRotationOnly :1 ; // 0x3C (0x4)
	const unsigned long: 0;
	struct TArray_FName TrackBoneNames; // 0x40 (0xC)
	struct TArray_UAnimSequencePtr Sequences; // 0x4C (0xC)
	const unsigned char Unknown1[0x3C]; // 0x58 (0x3C) UNKNOWN PROPERTY
	struct TArray_FAnimSetMeshLinkup LinkupCache; // 0x94 (0xC)
	const unsigned char Unknown2[0x3C]; // 0xA0 (0x3C) UNKNOWN PROPERTY
	struct TArray_unsigned_char BoneUseAnimTranslation; // 0xDC (0xC)
	struct TArray_unsigned_char ForceUseMeshTranslation; // 0xE8 (0xC)
	struct TArray_FName UseTranslationBoneNames; // 0xF4 (0xC)
	struct TArray_FName ForceMeshTranslationBoneNames; // 0x100 (0xC)
	struct FName PreviewSkelMeshName; // 0x10C (0x8)
	struct FName BestRatioSkelMeshName; // 0x114 (0x8)
};

struct UAnimSet {
	struct UObject_Data UObject;
	struct UAnimSet_Data UAnimSet;
};

// 0x54 
struct UMorphTarget_Data {
	// Last Offset: 0x3C
	struct TArray_int MorphLODModels; // 0x3C (0xC)
	int MaterialSlotId; // 0x48 (0x4)
	struct FName ScalarParameterName; // 0x4C (0x8)
};

struct UMorphTarget {
	struct UObject_Data UObject;
	struct UMorphTarget_Data UMorphTarget;
};

// 0x58 
struct UMorphTargetSet_Data {
	// Last Offset: 0x3C
	struct TArray_UMorphTargetPtr Targets; // 0x3C (0xC)
	struct USkeletalMesh* BaseSkelMesh; // 0x48 (0x4)
	struct FArray_Mirror RawWedgePointIndices; // 0x4C (0xC)
};

struct UMorphTargetSet {
	struct UObject_Data UObject;
	struct UMorphTargetSet_Data UMorphTargetSet;
};

// 0x3C 
struct UMorphWeightSequence_Data {
	// Last Offset: 0x3C
};

struct UMorphWeightSequence {
	struct UObject_Data UObject;
	struct UMorphWeightSequence_Data UMorphWeightSequence;
};

// 0x18C 
struct ADecalActorBase_Data {
	// Last Offset: 0x188
	struct UDecalComponent* Decal; // 0x188 (0x4)
};

struct ADecalActorBase {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ADecalActorBase_Data ADecalActorBase;
};

// 0x18C 
struct ADecalActor_Data {
	// Last Offset: 0x18C
};

struct ADecalActor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ADecalActorBase_Data ADecalActorBase;
	struct ADecalActor_Data ADecalActor;
};

// 0x18C 
struct ADecalActorMovable_Data {
	// Last Offset: 0x18C
};

struct ADecalActorMovable {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ADecalActorBase_Data ADecalActorBase;
	struct ADecalActorMovable_Data ADecalActorMovable;
};

// 0x1E0 
struct ADecalManager_Data {
	// Last Offset: 0x188
	struct UDecalComponent* DecalTemplate; // 0x188 (0x4)
	struct TArray_UDecalComponentPtr PoolDecals; // 0x18C (0xC)
	int MaxActiveDecals; // 0x198 (0x4)
	int MaxActiveDecalsLow; // 0x19C (0x4)
	int MaxActiveDecalsHigh; // 0x1A0 (0x4)
	int MaxActiveDecalsSplitScreen; // 0x1A4 (0x4)
	float DecalLifeSpan; // 0x1A8 (0x4)
	float DecalDepthBias; // 0x1AC (0x4)
	struct FVector2D DecalBlendRange; // 0x1B0 (0x8)
	int MaxFadingDecals; // 0x1B8 (0x4)
	float FadingLifeSpan; // 0x1BC (0x4)
	struct FName FadeParameterName; // 0x1C0 (0x8)
	struct TArray_FActiveDecalInfo ActiveDecals; // 0x1C8 (0xC)
	struct TArray_FActiveDecalInfo FadingDecals; // 0x1D4 (0xC)
};

struct ADecalManager {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ADecalManager_Data ADecalManager;
};

// 0x370  (Alignment = 16)
struct UDecalComponent_Data {
	// Last Offset: 0x210
	struct UMaterialInterface* DecalMaterial; // 0x210 (0x4)
	float Width; // 0x214 (0x4)
	float Height; // 0x218 (0x4)
	float TileX; // 0x21C (0x4)
	float TileY; // 0x220 (0x4)
	float OffsetX; // 0x224 (0x4)
	float OffsetY; // 0x228 (0x4)
	float DecalRotation; // 0x22C (0x4)
	float FieldOfView; // 0x230 (0x4)
	float NearPlane; // 0x234 (0x4)
	float FarPlane; // 0x238 (0x4)
	struct FVector Location; // 0x23C (0xC)
	struct FRotator Orientation; // 0x248 (0xC)
	struct FVector HitLocation; // 0x254 (0xC)
	struct FVector HitNormal; // 0x260 (0xC)
	struct FVector HitTangent; // 0x26C (0xC)
	struct FVector HitBinormal; // 0x278 (0xC)
	BOOL bNoClip :1 ; // 0x284 (0x4)
	BOOL bStaticDecal :1 ; // 0x284 (0x4)
	BOOL bProjectOnBackfaces :1 ; // 0x284 (0x4)
	BOOL bProjectOnHidden :1 ; // 0x284 (0x4)
	BOOL bProjectOnBSP :1 ; // 0x284 (0x4)
	BOOL bProjectOnStaticMeshes :1 ; // 0x284 (0x4)
	BOOL bProjectOnSkeletalMeshes :1 ; // 0x284 (0x4)
	BOOL bProjectOnTerrain :1 ; // 0x284 (0x4)
	BOOL bFlipBackfaceDirection :1 ; // 0x284 (0x4)
	BOOL bMovableDecal :1 ; // 0x284 (0x4)
	BOOL bHasBeenAttached :1 ; // 0x284 (0x4)
	BOOL bDecalMaterialSetAtRunTime :1 ; // 0x284 (0x4)
	const unsigned long: 0;
	struct UPrimitiveComponent* HitComponent; // 0x288 (0x4)
	struct FName HitBone; // 0x28C (0x8)
	int HitNodeIndex; // 0x294 (0x4)
	int HitLevelIndex; // 0x298 (0x4)
	int FracturedStaticMeshComponentIndex; // 0x29C (0x4)
	struct TArray_int HitNodeIndices; // 0x2A0 (0xC)
	struct TArray_FDecalReceiver DecalReceivers; // 0x2AC (0xC)
	struct TArray_FPointer StaticReceivers; // 0x2B8 (0xC)
	struct FPointer ReleaseResourcesFence; // 0x2C4 (0x4)
	struct TArray_FPlane Planes; // 0x2C8 (0xC)
	float DepthBias; // 0x2D4 (0x4)
	float SlopeScaleDepthBias; // 0x2D8 (0x4)
	int SortOrder; // 0x2DC (0x4)
	float BackfaceAngle; // 0x2E0 (0x4)
	struct FVector2D BlendRange; // 0x2E4 (0x8)
	float StreamingDistanceMultiplier; // 0x2EC (0x4)
	unsigned char DecalTransform; // 0x2F0 (0x1) (Enum = EDecalTransform)
	unsigned char FilterMode; // 0x2F1 (0x1) (Enum = EFilterMode)
	const unsigned char Unknown1[0x2]; // 0x2F2 (0x2) > LAST OFFSET
	struct TArray_AActorPtr Filter; // 0x2F4 (0xC)
	struct TArray_UPrimitiveComponentPtr ReceiverImages; // 0x300 (0xC)
	struct FVector ParentRelativeLocation; // 0x30C (0xC)
	struct FRotator ParentRelativeOrientation; // 0x318 (0xC)
	const unsigned char Unknown2[0xC]; // 0x324 (0xC) > LAST OFFSET
	struct FMatrix ParentRelLocRotMatrix; // 0x330 (0x40)
};

struct UDecalComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UDecalComponent_Data UDecalComponent;
};

// 0x80 
struct UActorFactoryDecal_Data {
	// Last Offset: 0x7C
	struct UMaterialInterface* DecalMaterial; // 0x7C (0x4)
};

struct UActorFactoryDecal {
	struct UObject_Data UObject;
	struct UActorFactory_Data UActorFactory;
	struct UActorFactoryDecal_Data UActorFactoryDecal;
};

// 0x80 
struct UActorFactoryDecalMovable_Data {
	// Last Offset: 0x80
};

struct UActorFactoryDecalMovable {
	struct UObject_Data UObject;
	struct UActorFactory_Data UActorFactory;
	struct UActorFactoryDecal_Data UActorFactoryDecal;
	struct UActorFactoryDecalMovable_Data UActorFactoryDecalMovable;
};

// 0x378 
struct UDecalMaterial_Data {
	// Last Offset: 0x378
};

struct UDecalMaterial {
	struct UObject_Data UObject;
	struct USurface_Data USurface;
	struct UMaterialInterface_Data UMaterialInterface;
	struct UMaterial_Data UMaterial;
	struct UDecalMaterial_Data UDecalMaterial;
};

// 0x194 
struct AFogVolumeDensityInfo_Data {
	// Last Offset: 0x188
	struct UFogVolumeDensityComponent* DensityComponent; // 0x188 (0x4)
	struct UStaticMeshComponent* AutomaticMeshComponent; // 0x18C (0x4)
	BOOL bEnabled :1 ; // 0x190 (0x4)
	const unsigned long: 0;
};

struct AFogVolumeDensityInfo {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct AFogVolumeDensityInfo_Data AFogVolumeDensityInfo;
};

// 0x194 
struct AFogVolumeConeDensityInfo_Data {
	// Last Offset: 0x194
};

struct AFogVolumeConeDensityInfo {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct AFogVolumeDensityInfo_Data AFogVolumeDensityInfo;
	struct AFogVolumeConeDensityInfo_Data AFogVolumeConeDensityInfo;
};

// 0x194 
struct AFogVolumeConstantDensityInfo_Data {
	// Last Offset: 0x194
};

struct AFogVolumeConstantDensityInfo {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct AFogVolumeDensityInfo_Data AFogVolumeDensityInfo;
	struct AFogVolumeConstantDensityInfo_Data AFogVolumeConstantDensityInfo;
};

// 0x194 
struct AFogVolumeLinearHalfspaceDensityInfo_Data {
	// Last Offset: 0x194
};

struct AFogVolumeLinearHalfspaceDensityInfo {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct AFogVolumeDensityInfo_Data AFogVolumeDensityInfo;
	struct AFogVolumeLinearHalfspaceDensityInfo_Data AFogVolumeLinearHalfspaceDensityInfo;
};

// 0x194 
struct AFogVolumeSphericalDensityInfo_Data {
	// Last Offset: 0x194
};

struct AFogVolumeSphericalDensityInfo {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct AFogVolumeDensityInfo_Data AFogVolumeDensityInfo;
	struct AFogVolumeSphericalDensityInfo_Data AFogVolumeSphericalDensityInfo;
};

// 0x88 
struct UExponentialHeightFogComponent_Data {
	// Last Offset: 0x5C
	BOOL bEnabled :1 ; // 0x5C (0x4)
	const unsigned long: 0;
	float FogHeight; // 0x60 (0x4)
	float FogDensity; // 0x64 (0x4)
	float FogHeightFalloff; // 0x68 (0x4)
	float FogMaxOpacity; // 0x6C (0x4)
	float StartDistance; // 0x70 (0x4)
	float LightTerminatorAngle; // 0x74 (0x4)
	float OppositeLightBrightness; // 0x78 (0x4)
	struct FColor OppositeLightColor; // 0x7C (0x4)
	float LightInscatteringBrightness; // 0x80 (0x4)
	struct FColor LightInscatteringColor; // 0x84 (0x4)
};

struct UExponentialHeightFogComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UExponentialHeightFogComponent_Data UExponentialHeightFogComponent;
};

// 0x9C 
struct UFogVolumeDensityComponent_Data {
	// Last Offset: 0x5C
	struct UMaterialInterface* FogMaterial; // 0x5C (0x4)
	struct UMaterialInterface* DefaultFogVolumeMaterial; // 0x60 (0x4)
	BOOL bEnabled :1 ; // 0x64 (0x4)
	BOOL bAffectsTranslucency :1 ; // 0x64 (0x4)
	BOOL bOnlyAffectsTranslucency :1 ; // 0x64 (0x4)
	const unsigned long: 0;
	struct FLinearColor SimpleLightColor; // 0x68 (0x10)
	struct FLinearColor ApproxFogLightColor; // 0x78 (0x10)
	float StartDistance; // 0x88 (0x4)
	float MaxDistance; // 0x8C (0x4)
	struct TArray_AActorPtr FogVolumeActors; // 0x90 (0xC)
};

struct UFogVolumeDensityComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UFogVolumeDensityComponent_Data UFogVolumeDensityComponent;
};

// 0xC4 
struct UFogVolumeConeDensityComponent_Data {
	// Last Offset: 0x9C
	float MaxDensity; // 0x9C (0x4)
	struct FVector ConeVertex; // 0xA0 (0xC)
	float ConeRadius; // 0xAC (0x4)
	struct FVector ConeAxis; // 0xB0 (0xC)
	float ConeMaxAngle; // 0xBC (0x4)
	struct UDrawLightConeComponent* PreviewCone; // 0xC0 (0x4)
};

struct UFogVolumeConeDensityComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UFogVolumeDensityComponent_Data UFogVolumeDensityComponent;
	struct UFogVolumeConeDensityComponent_Data UFogVolumeConeDensityComponent;
};

// 0xA0 
struct UFogVolumeConstantDensityComponent_Data {
	// Last Offset: 0x9C
	float Density; // 0x9C (0x4)
};

struct UFogVolumeConstantDensityComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UFogVolumeDensityComponent_Data UFogVolumeDensityComponent;
	struct UFogVolumeConstantDensityComponent_Data UFogVolumeConstantDensityComponent;
};

// 0xB0  (Alignment = 16)
struct UFogVolumeLinearHalfspaceDensityComponent_Data {
	// Last Offset: 0x9C
	float PlaneDistanceFactor; // 0x9C (0x4)
	struct FPlane HalfspacePlane; // 0xA0 (0x10)
};

struct UFogVolumeLinearHalfspaceDensityComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UFogVolumeDensityComponent_Data UFogVolumeDensityComponent;
	struct UFogVolumeLinearHalfspaceDensityComponent_Data UFogVolumeLinearHalfspaceDensityComponent;
};

// 0xB4 
struct UFogVolumeSphericalDensityComponent_Data {
	// Last Offset: 0x9C
	float MaxDensity; // 0x9C (0x4)
	struct FVector SphereCenter; // 0xA0 (0xC)
	float SphereRadius; // 0xAC (0x4)
	struct UDrawLightRadiusComponent* PreviewSphereRadius; // 0xB0 (0x4)
};

struct UFogVolumeSphericalDensityComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UFogVolumeDensityComponent_Data UFogVolumeDensityComponent;
	struct UFogVolumeSphericalDensityComponent_Data UFogVolumeSphericalDensityComponent;
};

// 0x84 
struct UActorFactoryFogVolumeConstantDensityInfo_Data {
	// Last Offset: 0x7C
	struct UMaterialInterface* SelectedMaterial; // 0x7C (0x4)
	BOOL bNothingSelected :1 ; // 0x80 (0x4)
	const unsigned long: 0;
};

struct UActorFactoryFogVolumeConstantDensityInfo {
	struct UObject_Data UObject;
	struct UActorFactory_Data UActorFactory;
	struct UActorFactoryFogVolumeConstantDensityInfo_Data UActorFactoryFogVolumeConstantDensityInfo;
};

// 0x84 
struct UActorFactoryFogVolumeLinearHalfspaceDensityInfo_Data {
	// Last Offset: 0x84
};

struct UActorFactoryFogVolumeLinearHalfspaceDensityInfo {
	struct UObject_Data UObject;
	struct UActorFactory_Data UActorFactory;
	struct UActorFactoryFogVolumeConstantDensityInfo_Data UActorFactoryFogVolumeConstantDensityInfo;
	struct UActorFactoryFogVolumeLinearHalfspaceDensityInfo_Data UActorFactoryFogVolumeLinearHalfspaceDensityInfo;
};

// 0x84 
struct UActorFactoryFogVolumeSphericalDensityInfo_Data {
	// Last Offset: 0x84
};

struct UActorFactoryFogVolumeSphericalDensityInfo {
	struct UObject_Data UObject;
	struct UActorFactory_Data UActorFactory;
	struct UActorFactoryFogVolumeConstantDensityInfo_Data UActorFactoryFogVolumeConstantDensityInfo;
	struct UActorFactoryFogVolumeSphericalDensityInfo_Data UActorFactoryFogVolumeSphericalDensityInfo;
};

// 0x1F4 
struct AApexDestructibleActor_Data {
	// Last Offset: 0x188
	struct UDynamicLightEnvironmentComponent* LightEnvironment; // 0x188 (0x4)
	BOOL bFractureMaterialOverride :1 ; // 0x18C (0x4)
	const unsigned long: 0;
	struct TArray_UFractureMaterialPtr FractureMaterials; // 0x190 (0xC)
	struct UApexStaticDestructibleComponent* StaticDestructibleComponent; // 0x19C (0x4)
	struct TArray_unsigned_char VisibilityFactors; // 0x1A0 (0xC)
	struct TArray_USoundCuePtr FractureSounds; // 0x1AC (0xC)
	struct TArray_UParticleSystemPtr FractureParticleEffects; // 0x1B8 (0xC)
	struct F_ModifyHealthParams ModifyHealthParams; // 0x1C4 (0x30)
};

struct AApexDestructibleActor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AApexDestructibleActor_Data AApexDestructibleActor;
};

// 0x230  (Alignment = 16)
struct UApexComponentBase_Data {
	// Last Offset: 0x21C
	struct FPointer ComponentBaseResources; // 0x21C (0x4)
	struct FRenderCommandFence_Mirror ReleaseResourcesFence; // 0x220 (0x4)
	struct UApexAsset* Asset; // 0x224 (0x4)
	struct FColor WireframeColor; // 0x228 (0x4)
	BOOL bAssetChanged :1 ; // 0x22C (0x4)
	const unsigned long: 0;
};

struct UApexComponentBase {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UMeshComponent_Data UMeshComponent;
	struct UApexComponentBase_Data UApexComponentBase;
};

// 0x234  (Alignment = 16)
struct UApexDynamicComponent_Data {
	// Last Offset: 0x230
	struct FPointer ComponentDynamicResources; // 0x230 (0x4)
};

struct UApexDynamicComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UMeshComponent_Data UMeshComponent;
	struct UApexComponentBase_Data UApexComponentBase;
	struct UApexDynamicComponent_Data UApexDynamicComponent;
};

// 0x230  (Alignment = 16)
struct UApexStaticComponent_Data {
	// Last Offset: 0x230
};

struct UApexStaticComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UMeshComponent_Data UMeshComponent;
	struct UApexComponentBase_Data UApexComponentBase;
	struct UApexStaticComponent_Data UApexStaticComponent;
};

// 0x244  (Alignment = 16)
struct UApexStaticDestructibleComponent_Data {
	// Last Offset: 0x230
	float SleepEnergyThreshold; // 0x230 (0x4)
	float SleepDamping; // 0x234 (0x4)
	struct FPointer ApexDestructibleActor; // 0x238 (0x4)
	struct FPointer ApexDestructiblePreview; // 0x23C (0x4)
	BOOL bIsThumbnailComponent :1 ; // 0x240 (0x4)
	const unsigned long: 0;
};

struct UApexStaticDestructibleComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UMeshComponent_Data UMeshComponent;
	struct UApexComponentBase_Data UApexComponentBase;
	struct UApexStaticComponent_Data UApexStaticComponent;
	struct UApexStaticDestructibleComponent_Data UApexStaticDestructibleComponent;
};

// 0x24C  (Alignment = 16)
struct UBlockingMeshComponent_Data {
	// Last Offset: 0x248
	BOOL bBlockPlayers :1 ; // 0x248 (0x4)
	BOOL bBlockVehicles :1 ; // 0x248 (0x4)
	BOOL bBlockRocketsAndGrenades :1 ; // 0x248 (0x4)
	BOOL bBlockBullets :1 ; // 0x248 (0x4)
	BOOL bBlockTossedItems :1 ; // 0x248 (0x4)
	BOOL bBlockEnemyPawns :1 ; // 0x248 (0x4)
	BOOL bBlockFriendlyPawns :1 ; // 0x248 (0x4)
	BOOL bBlockPlayerVehicles :1 ; // 0x248 (0x4)
	BOOL bBlockEnemyVehicles :1 ; // 0x248 (0x4)
	BOOL bIsDisabled :1 ; // 0x248 (0x4)
	const unsigned long: 0;
};

struct UBlockingMeshComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UMeshComponent_Data UMeshComponent;
	struct UStaticMeshComponent_Data UStaticMeshComponent;
	struct UBlockingMeshComponent_Data UBlockingMeshComponent;
};

// 0x278  (Alignment = 16)
struct UInstancedStaticMeshComponent_Data {
	// Last Offset: 0x248
	struct TArray_FInstancedStaticMeshInstanceData PerInstanceData; // 0x248 (0xC)
	struct TArray_FInstancedStaticMeshInstanceData PerInstanceSMData; // 0x254 (0xC)
	int NumPendingLightmaps; // 0x260 (0x4)
	int ComponentJoinKey; // 0x264 (0x4)
	struct TArray_FInstancedStaticMeshMappingInfo CachedMappings; // 0x268 (0xC)
	int InstancingRandomSeed; // 0x274 (0x4)
};

struct UInstancedStaticMeshComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UMeshComponent_Data UMeshComponent;
	struct UStaticMeshComponent_Data UStaticMeshComponent;
	struct UInstancedStaticMeshComponent_Data UInstancedStaticMeshComponent;
};

// 0x2B0  (Alignment = 16)
struct USplineMeshComponent_Data {
	// Last Offset: 0x248
	struct FSplineMeshParams SplineParams; // 0x248 (0x58)
	struct FVector SplineXDir; // 0x2A0 (0xC)
	BOOL bSmoothInterpRollScale :1 ; // 0x2AC (0x4)
	const unsigned long: 0;
};

struct USplineMeshComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UMeshComponent_Data UMeshComponent;
	struct UStaticMeshComponent_Data UStaticMeshComponent;
	struct USplineMeshComponent_Data USplineMeshComponent;
};

// 0x54 
struct UApexAsset_Data {
	// Last Offset: 0x3C
	struct FString OriginalApexName; // 0x3C (0xC)
	struct TArray_UApexComponentBasePtr ApexComponents; // 0x48 (0xC)
};

struct UApexAsset {
	struct UObject_Data UObject;
	struct UApexAsset_Data UApexAsset;
};

// 0x80 
struct UApexClothingAsset_Data {
	// Last Offset: 0x54
	struct FPointer MApexAsset; // 0x54 (0x4)
	struct UApexGenericAsset* ApexClothingLibrary; // 0x58 (0x4)
	BOOL bUseHardwareCloth :1 ; // 0x5C (0x4)
	BOOL bFallbackSkinning :1 ; // 0x5C (0x4)
	BOOL bSlowStart :1 ; // 0x5C (0x4)
	BOOL bRecomputeNormals :1 ; // 0x5C (0x4)
	BOOL bResetAfterTeleport :1 ; // 0x5C (0x4)
	const unsigned long: 0;
	int UVChannelForTangentUpdate; // 0x60 (0x4)
	float MaxDistanceBlendTime; // 0x64 (0x4)
	float ContinuousRotationThreshold; // 0x68 (0x4)
	float ContinuousDistanceThreshold; // 0x6C (0x4)
	float LodWeightsMaxDistance; // 0x70 (0x4)
	float LodWeightsDistanceWeight; // 0x74 (0x4)
	float LodWeightsBias; // 0x78 (0x4)
	float LodWeightsBenefitsBias; // 0x7C (0x4)
};

struct UApexClothingAsset {
	struct UObject_Data UObject;
	struct UApexAsset_Data UApexAsset;
	struct UApexClothingAsset_Data UApexClothingAsset;
};

// 0x114 
struct UApexDestructibleAsset_Data {
	// Last Offset: 0x54
	struct FPointer MApexAsset; // 0x54 (0x4)
	struct TArray_UMaterialInterfacePtr Materials; // 0x58 (0xC)
	struct TArray_UFractureMaterialPtr FractureMaterials; // 0x64 (0xC)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x70 (0x4)
	struct FPointer MDestructibleThumbnailComponent; // 0x74 (0x4)
	BOOL bHasUniqueAssetMaterialNames :1 ; // 0x78 (0x4)
	BOOL bDynamic :1 ; // 0x78 (0x4)
	const unsigned long: 0;
	struct FString CrumbleEmitterName; // 0x7C (0xC)
	struct FString DustEmitterName; // 0x88 (0xC)
	struct FNxDestructibleParameters DestructibleParameters; // 0x94 (0x80)
};

struct UApexDestructibleAsset {
	struct UObject_Data UObject;
	struct UApexAsset_Data UApexAsset;
	struct UApexDestructibleAsset_Data UApexDestructibleAsset;
};

// 0x58 
struct UApexGenericAsset_Data {
	// Last Offset: 0x54
	struct FPointer MApexAsset; // 0x54 (0x4)
};

struct UApexGenericAsset {
	struct UObject_Data UObject;
	struct UApexAsset_Data UApexAsset;
	struct UApexGenericAsset_Data UApexGenericAsset;
};

// 0x48 
struct UInterpFilter_Data {
	// Last Offset: 0x3C
	struct FString Caption; // 0x3C (0xC)
};

struct UInterpFilter {
	struct UObject_Data UObject;
	struct UInterpFilter_Data UInterpFilter;
};

// 0x48 
struct UInterpFilter_Classes_Data {
	// Last Offset: 0x48
};

struct UInterpFilter_Classes {
	struct UObject_Data UObject;
	struct UInterpFilter_Data UInterpFilter;
	struct UInterpFilter_Classes_Data UInterpFilter_Classes;
};

// 0x48 
struct UInterpFilter_Custom_Data {
	// Last Offset: 0x48
};

struct UInterpFilter_Custom {
	struct UObject_Data UObject;
	struct UInterpFilter_Data UInterpFilter;
	struct UInterpFilter_Custom_Data UInterpFilter_Custom;
};

// 0x68 
struct UInterpGroup_Data {
	// Last Offset: 0x3C
	struct FPointer VfTable_FInterpEdInputInterface; // 0x3C (0x4)
	struct TArray_UInterpTrackPtr InterpTracks; // 0x40 (0xC)
	struct FName GroupName; // 0x4C (0x8)
	struct FColor GroupColor; // 0x54 (0x4)
	struct TArray_UAnimSetPtr GroupAnimSets; // 0x58 (0xC)
	BOOL bCollapsed :1 ; // 0x64 (0x4)
	BOOL bVisible :1 ; // 0x64 (0x4)
	BOOL bIsFolder :1 ; // 0x64 (0x4)
	BOOL bIsParented :1 ; // 0x64 (0x4)
	BOOL bIsSelected :1 ; // 0x64 (0x4)
	BOOL bRunTracksWhenSkippingToLastFrame :1 ; // 0x64 (0x4)
	const unsigned long: 0;
};

struct UInterpGroup {
	struct UObject_Data UObject;
	struct UInterpGroup_Data UInterpGroup;
};

// 0x7C 
struct UInterpGroupAI_Data {
	// Last Offset: 0x68
	struct FName StageMarkGroup; // 0x68 (0x8)
	BOOL SnapToRootBoneLocationWhenFinished :1 ; // 0x70 (0x4)
	BOOL bNoEncroachmentCheck :1 ; // 0x70 (0x4)
	BOOL bDisableWorldCollision :1 ; // 0x70 (0x4)
	BOOL bIgnoreLegacyHeightAdjust :1 ; // 0x70 (0x4)
	BOOL bRecreatePreviewPawn :1 ; // 0x70 (0x4)
	BOOL bRefreshStageMarkGroup :1 ; // 0x70 (0x4)
	BOOL bEnableAIWhenAllAnimsFinished :1 ; // 0x70 (0x4)
	BOOL bUseStageMarkerForInitialLocation :1 ; // 0x70 (0x4)
	BOOL bPutInDemiGod :1 ; // 0x70 (0x4)
	const unsigned long: 0;
	unsigned char Alignment; // 0x74 (0x1) (Enum = InterpGroupAlignmentTypes)
	const unsigned char Unknown1[0x3]; // 0x75 (0x3) > LAST OFFSET
	float AlignmentLerpTime; // 0x78 (0x4)
};

struct UInterpGroupAI {
	struct UObject_Data UObject;
	struct UInterpGroup_Data UInterpGroup;
	struct UInterpGroupAI_Data UInterpGroupAI;
};

// 0x70 
struct UInterpGroupDirector_Data {
	// Last Offset: 0x68
	struct FName AttachedGroupName; // 0x68 (0x8)
};

struct UInterpGroupDirector {
	struct UObject_Data UObject;
	struct UInterpGroup_Data UInterpGroup;
	struct UInterpGroupDirector_Data UInterpGroupDirector;
};

// 0x54 
struct UInterpGroupInst_Data {
	// Last Offset: 0x3C
	struct UInterpGroup* Group; // 0x3C (0x4)
	struct AActor* GroupActor; // 0x40 (0x4)
	struct TArray_UInterpTrackInstPtr TrackInst; // 0x44 (0xC)
	BOOL bWasNetworkRefreshed :1 ; // 0x50 (0x4)
	BOOL bDeleteIfNoGroupActor :1 ; // 0x50 (0x4)
	const unsigned long: 0;
};

struct UInterpGroupInst {
	struct UObject_Data UObject;
	struct UInterpGroupInst_Data UInterpGroupInst;
};

// 0x64 
struct UInterpGroupInstAI_Data {
	// Last Offset: 0x54
	struct UInterpGroupAI* AIGroup; // 0x54 (0x4)
	unsigned char SavedPhysics; // 0x58 (0x1) (Enum = EPhysics)
	const unsigned char Unknown1[0x3]; // 0x59 (0x3) > LAST OFFSET
	BOOL bSavedNoEncroachCheck :1 ; // 0x5C (0x4)
	BOOL bSavedCollideActors :1 ; // 0x5C (0x4)
	BOOL bSavedBlockActors :1 ; // 0x5C (0x4)
	const unsigned long: 0;
	struct AActor* StageMarkActor; // 0x60 (0x4)
};

struct UInterpGroupInstAI {
	struct UObject_Data UObject;
	struct UInterpGroupInst_Data UInterpGroupInst;
	struct UInterpGroupInstAI_Data UInterpGroupInstAI;
};

// 0x54 
struct UInterpGroupInstDirector_Data {
	// Last Offset: 0x54
};

struct UInterpGroupInstDirector {
	struct UObject_Data UObject;
	struct UInterpGroupInst_Data UInterpGroupInst;
	struct UInterpGroupInstDirector_Data UInterpGroupInstDirector;
};

// 0x7C 
struct UInterpTrackBoolProp_Data {
	// Last Offset: 0x68
	struct TArray_FBoolTrackKey BoolTrack; // 0x68 (0xC)
	struct FName PropertyName; // 0x74 (0x8)
};

struct UInterpTrackBoolProp {
	struct UObject_Data UObject;
	struct UInterpTrack_Data UInterpTrack;
	struct UInterpTrackBoolProp_Data UInterpTrackBoolProp;
};

// 0x78 
struct UInterpTrackComment_Data {
	// Last Offset: 0x68
	struct TArray_FCommentTrackKey CommentTrack; // 0x68 (0xC)
	BOOL bOutputCommentsToScreen :1 ; // 0x74 (0x4)
	const unsigned long: 0;
};

struct UInterpTrackComment {
	struct UObject_Data UObject;
	struct UInterpTrack_Data UInterpTrack;
	struct UInterpTrackComment_Data UInterpTrackComment;
};

// 0x78 
struct UInterpTrackDirector_Data {
	// Last Offset: 0x68
	struct TArray_FDirectorTrackCut CutTrack; // 0x68 (0xC)
	BOOL bSimulateCameraCutsOnClients :1 ; // 0x74 (0x4)
	const unsigned long: 0;
};

struct UInterpTrackDirector {
	struct UObject_Data UObject;
	struct UInterpTrack_Data UInterpTrack;
	struct UInterpTrackDirector_Data UInterpTrackDirector;
};

// 0x78 
struct UInterpTrackEvent_Data {
	// Last Offset: 0x68
	struct TArray_FEventTrackKey EventTrack; // 0x68 (0xC)
	BOOL bFireEventsWhenForwards :1 ; // 0x74 (0x4)
	BOOL bFireEventsWhenBackwards :1 ; // 0x74 (0x4)
	BOOL bFireEventsWhenJumpingForwards :1 ; // 0x74 (0x4)
	const unsigned long: 0;
};

struct UInterpTrackEvent {
	struct UObject_Data UObject;
	struct UInterpTrack_Data UInterpTrack;
	struct UInterpTrackEvent_Data UInterpTrackEvent;
};

// 0x90 
struct UInterpTrackFaceFX_Data {
	// Last Offset: 0x68
	struct TArray_UFaceFXAnimSetPtr FaceFXAnimSets; // 0x68 (0xC)
	struct TArray_FFaceFXTrackKey FaceFXSeqs; // 0x74 (0xC)
	struct UFaceFXAsset* CachedActorFXAsset; // 0x80 (0x4)
	struct TArray_FFaceFXSoundCueKey FaceFXSoundCueKeys; // 0x84 (0xC)
};

struct UInterpTrackFaceFX {
	struct UObject_Data UObject;
	struct UInterpTrack_Data UInterpTrack;
	struct UInterpTrackFaceFX_Data UInterpTrackFaceFX;
};

// 0x7C 
struct UInterpTrackFloatBase_Data {
	// Last Offset: 0x68
	struct FInterpCurveFloat FloatTrack; // 0x68 (0x10)
	float CurveTension; // 0x78 (0x4)
};

struct UInterpTrackFloatBase {
	struct UObject_Data UObject;
	struct UInterpTrack_Data UInterpTrack;
	struct UInterpTrackFloatBase_Data UInterpTrackFloatBase;
};

// 0xA0 
struct UInterpTrackAnimControl_Data {
	// Last Offset: 0x7C
	struct TArray_UAnimSetPtr AnimSets; // 0x7C (0xC)
	struct FName SlotName; // 0x88 (0x8)
	struct TArray_FAnimControlTrackKey AnimSeqs; // 0x90 (0xC)
	BOOL bEnableRootMotion :1 ; // 0x9C (0x4)
	BOOL bSkipAnimNotifiers :1 ; // 0x9C (0x4)
	const unsigned long: 0;
};

struct UInterpTrackAnimControl {
	struct UObject_Data UObject;
	struct UInterpTrack_Data UInterpTrack;
	struct UInterpTrackFloatBase_Data UInterpTrackFloatBase;
	struct UInterpTrackAnimControl_Data UInterpTrackAnimControl;
};

// 0x84 
struct UInterpTrackFade_Data {
	// Last Offset: 0x7C
	BOOL bPersistFade :1 ; // 0x7C (0x4)
	const unsigned long: 0;
	struct FColor FadeColor; // 0x80 (0x4)
};

struct UInterpTrackFade {
	struct UObject_Data UObject;
	struct UInterpTrack_Data UInterpTrack;
	struct UInterpTrackFloatBase_Data UInterpTrackFloatBase;
	struct UInterpTrackFade_Data UInterpTrackFade;
};

// 0x98 
struct UInterpTrackFloatMaterialParam_Data {
	// Last Offset: 0x7C
	struct TArray_FMaterialReferenceList Materials; // 0x7C (0xC)
	struct UMaterialInterface* Material; // 0x88 (0x4)
	struct FName ParamName; // 0x8C (0x8)
	BOOL bNeedsMaterialRefsUpdate :1 ; // 0x94 (0x4)
	const unsigned long: 0;
};

struct UInterpTrackFloatMaterialParam {
	struct UObject_Data UObject;
	struct UInterpTrack_Data UInterpTrack;
	struct UInterpTrackFloatBase_Data UInterpTrackFloatBase;
	struct UInterpTrackFloatMaterialParam_Data UInterpTrackFloatMaterialParam;
};

// 0x84 
struct UInterpTrackFloatParticleParam_Data {
	// Last Offset: 0x7C
	struct FName ParamName; // 0x7C (0x8)
};

struct UInterpTrackFloatParticleParam {
	struct UObject_Data UObject;
	struct UInterpTrack_Data UInterpTrack;
	struct UInterpTrackFloatBase_Data UInterpTrackFloatBase;
	struct UInterpTrackFloatParticleParam_Data UInterpTrackFloatParticleParam;
};

// 0x84 
struct UInterpTrackFloatProp_Data {
	// Last Offset: 0x7C
	struct FName PropertyName; // 0x7C (0x8)
};

struct UInterpTrackFloatProp {
	struct UObject_Data UObject;
	struct UInterpTrack_Data UInterpTrack;
	struct UInterpTrackFloatBase_Data UInterpTrackFloatBase;
	struct UInterpTrackFloatProp_Data UInterpTrackFloatProp;
};

// 0x84 
struct UInterpTrackMorphWeight_Data {
	// Last Offset: 0x7C
	struct FName MorphNodeName; // 0x7C (0x8)
};

struct UInterpTrackMorphWeight {
	struct UObject_Data UObject;
	struct UInterpTrack_Data UInterpTrack;
	struct UInterpTrackFloatBase_Data UInterpTrackFloatBase;
	struct UInterpTrackMorphWeight_Data UInterpTrackMorphWeight;
};

// 0x8C 
struct UInterpTrackMoveAxis_Data {
	// Last Offset: 0x7C
	unsigned char MoveAxis; // 0x7C (0x1) (Enum = EInterpMoveAxis)
	const unsigned char Unknown1[0x3]; // 0x7D (0x3) > LAST OFFSET
	struct FInterpLookupTrack LookupTrack; // 0x80 (0xC)
};

struct UInterpTrackMoveAxis {
	struct UObject_Data UObject;
	struct UInterpTrack_Data UInterpTrack;
	struct UInterpTrackFloatBase_Data UInterpTrackFloatBase;
	struct UInterpTrackMoveAxis_Data UInterpTrackMoveAxis;
};

// 0x84 
struct UInterpTrackSkelControlScale_Data {
	// Last Offset: 0x7C
	struct FName SkelControlName; // 0x7C (0x8)
};

struct UInterpTrackSkelControlScale {
	struct UObject_Data UObject;
	struct UInterpTrack_Data UInterpTrack;
	struct UInterpTrackFloatBase_Data UInterpTrackFloatBase;
	struct UInterpTrackSkelControlScale_Data UInterpTrackSkelControlScale;
};

// 0x84 
struct UInterpTrackSkelControlStrength_Data {
	// Last Offset: 0x7C
	struct FName SkelControlName; // 0x7C (0x8)
};

struct UInterpTrackSkelControlStrength {
	struct UObject_Data UObject;
	struct UInterpTrack_Data UInterpTrack;
	struct UInterpTrackFloatBase_Data UInterpTrackFloatBase;
	struct UInterpTrackSkelControlStrength_Data UInterpTrackSkelControlStrength;
};

// 0x7C 
struct UInterpTrackSlomo_Data {
	// Last Offset: 0x7C
};

struct UInterpTrackSlomo {
	struct UObject_Data UObject;
	struct UInterpTrack_Data UInterpTrack;
	struct UInterpTrackFloatBase_Data UInterpTrackFloatBase;
	struct UInterpTrackSlomo_Data UInterpTrackSlomo;
};

// 0xAC 
struct UInterpTrackHeadTracking_Data {
	// Last Offset: 0x68
	struct TArray_FHeadTrackingKey HeadTrackingTrack; // 0x68 (0xC)
	struct TArray_FName TrackControllerName; // 0x74 (0xC)
	float LookAtActorRadius; // 0x80 (0x4)
	BOOL bDisableBeyondLimit :1 ; // 0x84 (0x4)
	BOOL bLookAtPawns :1 ; // 0x84 (0x4)
	const unsigned long: 0;
	float MaxLookAtTime; // 0x88 (0x4)
	float MinLookAtTime; // 0x8C (0x4)
	float MaxInterestTime; // 0x90 (0x4)
	struct TArray_UClassPtr ActorClassesToLookAt; // 0x94 (0xC)
	struct TArray_FName TargetBoneNames; // 0xA0 (0xC)
};

struct UInterpTrackHeadTracking {
	struct UObject_Data UObject;
	struct UInterpTrack_Data UInterpTrack;
	struct UInterpTrackHeadTracking_Data UInterpTrackHeadTracking;
};

// 0x7C 
struct UInterpTrackLinearColorBase_Data {
	// Last Offset: 0x68
	struct FInterpCurveLinearColor LinearColorTrack; // 0x68 (0x10)
	float CurveTension; // 0x78 (0x4)
};

struct UInterpTrackLinearColorBase {
	struct UObject_Data UObject;
	struct UInterpTrack_Data UInterpTrack;
	struct UInterpTrackLinearColorBase_Data UInterpTrackLinearColorBase;
};

// 0x84 
struct UInterpTrackLinearColorProp_Data {
	// Last Offset: 0x7C
	struct FName PropertyName; // 0x7C (0x8)
};

struct UInterpTrackLinearColorProp {
	struct UObject_Data UObject;
	struct UInterpTrack_Data UInterpTrack;
	struct UInterpTrackLinearColorBase_Data UInterpTrackLinearColorBase;
	struct UInterpTrackLinearColorProp_Data UInterpTrackLinearColorProp;
};

// 0xAA 
struct UInterpTrackMove_Data {
	// Last Offset: 0x68
	struct FInterpCurveVector PosTrack; // 0x68 (0x10)
	struct FInterpCurveVector EulerTrack; // 0x78 (0x10)
	struct FInterpLookupTrack LookupTrack; // 0x88 (0xC)
	struct FName LookAtGroupName; // 0x94 (0x8)
	float LinCurveTension; // 0x9C (0x4)
	float AngCurveTension; // 0xA0 (0x4)
	BOOL bUseQuatInterpolation :1 ; // 0xA4 (0x4)
	BOOL bShowArrowAtKeys :1 ; // 0xA4 (0x4)
	BOOL bDisableMovement :1 ; // 0xA4 (0x4)
	BOOL bShowTranslationOnCurveEd :1 ; // 0xA4 (0x4)
	BOOL bShowRotationOnCurveEd :1 ; // 0xA4 (0x4)
	BOOL bHide3DTrack :1 ; // 0xA4 (0x4)
	const unsigned long: 0;
	unsigned char MoveFrame; // 0xA8 (0x1) (Enum = EInterpTrackMoveFrame)
	unsigned char RotMode; // 0xA9 (0x1) (Enum = EInterpTrackMoveRotMode)
};

struct UInterpTrackMove {
	struct UObject_Data UObject;
	struct UInterpTrack_Data UInterpTrack;
	struct UInterpTrackMove_Data UInterpTrackMove;
};

// 0x78 
struct UInterpTrackParticleReplay_Data {
	// Last Offset: 0x68
	struct TArray_FParticleReplayTrackKey TrackKeys; // 0x68 (0xC)
	BOOL bIsCapturingReplay :1 ; // 0x74 (0x4)
	const unsigned long: 0;
};

struct UInterpTrackParticleReplay {
	struct UObject_Data UObject;
	struct UInterpTrack_Data UInterpTrack;
	struct UInterpTrackParticleReplay_Data UInterpTrackParticleReplay;
};

// 0x74 
struct UInterpTrackTeleport_Data {
	// Last Offset: 0x68
	struct TArray_FTeleportKeyData TeleportKeys; // 0x68 (0xC)
};

struct UInterpTrackTeleport {
	struct UObject_Data UObject;
	struct UInterpTrack_Data UInterpTrack;
	struct UInterpTrackTeleport_Data UInterpTrackTeleport;
};

// 0x78 
struct UInterpTrackToggle_Data {
	// Last Offset: 0x68
	struct TArray_FToggleTrackKey ToggleTrack; // 0x68 (0xC)
	BOOL bActivateSystemEachUpdate :1 ; // 0x74 (0x4)
	BOOL bActivateWithJustAttachedFlag :1 ; // 0x74 (0x4)
	BOOL bFireEventsWhenForwards :1 ; // 0x74 (0x4)
	BOOL bFireEventsWhenBackwards :1 ; // 0x74 (0x4)
	BOOL bFireEventsWhenJumpingForwards :1 ; // 0x74 (0x4)
	const unsigned long: 0;
};

struct UInterpTrackToggle {
	struct UObject_Data UObject;
	struct UInterpTrack_Data UInterpTrack;
	struct UInterpTrackToggle_Data UInterpTrackToggle;
};

// 0x7C 
struct UInterpTrackVectorBase_Data {
	// Last Offset: 0x68
	struct FInterpCurveVector VectorTrack; // 0x68 (0x10)
	float CurveTension; // 0x78 (0x4)
};

struct UInterpTrackVectorBase {
	struct UObject_Data UObject;
	struct UInterpTrack_Data UInterpTrack;
	struct UInterpTrackVectorBase_Data UInterpTrackVectorBase;
};

// 0x7C 
struct UInterpTrackAudioMaster_Data {
	// Last Offset: 0x7C
};

struct UInterpTrackAudioMaster {
	struct UObject_Data UObject;
	struct UInterpTrack_Data UInterpTrack;
	struct UInterpTrackVectorBase_Data UInterpTrackVectorBase;
	struct UInterpTrackAudioMaster_Data UInterpTrackAudioMaster;
};

// 0x84 
struct UInterpTrackColorProp_Data {
	// Last Offset: 0x7C
	struct FName PropertyName; // 0x7C (0x8)
};

struct UInterpTrackColorProp {
	struct UObject_Data UObject;
	struct UInterpTrack_Data UInterpTrack;
	struct UInterpTrackVectorBase_Data UInterpTrackVectorBase;
	struct UInterpTrackColorProp_Data UInterpTrackColorProp;
};

// 0x7C 
struct UInterpTrackColorScale_Data {
	// Last Offset: 0x7C
};

struct UInterpTrackColorScale {
	struct UObject_Data UObject;
	struct UInterpTrack_Data UInterpTrack;
	struct UInterpTrackVectorBase_Data UInterpTrackVectorBase;
	struct UInterpTrackColorScale_Data UInterpTrackColorScale;
};

// 0x8C 
struct UInterpTrackSound_Data {
	// Last Offset: 0x7C
	struct TArray_FSoundTrackKey Sounds; // 0x7C (0xC)
	BOOL bPlayOnReverse :1 ; // 0x88 (0x4)
	BOOL bContinueSoundOnMatineeEnd :1 ; // 0x88 (0x4)
	BOOL bSuppressSubtitles :1 ; // 0x88 (0x4)
	BOOL bTreatAsDialogue :1 ; // 0x88 (0x4)
	const unsigned long: 0;
};

struct UInterpTrackSound {
	struct UObject_Data UObject;
	struct UInterpTrack_Data UInterpTrack;
	struct UInterpTrackVectorBase_Data UInterpTrackVectorBase;
	struct UInterpTrackSound_Data UInterpTrackSound;
};

// 0x98 
struct UInterpTrackVectorMaterialParam_Data {
	// Last Offset: 0x7C
	struct TArray_FMaterialReferenceList Materials; // 0x7C (0xC)
	struct UMaterialInterface* Material; // 0x88 (0x4)
	struct FName ParamName; // 0x8C (0x8)
	BOOL bNeedsMaterialRefsUpdate :1 ; // 0x94 (0x4)
	const unsigned long: 0;
};

struct UInterpTrackVectorMaterialParam {
	struct UObject_Data UObject;
	struct UInterpTrack_Data UInterpTrack;
	struct UInterpTrackVectorBase_Data UInterpTrackVectorBase;
	struct UInterpTrackVectorMaterialParam_Data UInterpTrackVectorMaterialParam;
};

// 0x84 
struct UInterpTrackVectorProp_Data {
	// Last Offset: 0x7C
	struct FName PropertyName; // 0x7C (0x8)
};

struct UInterpTrackVectorProp {
	struct UObject_Data UObject;
	struct UInterpTrack_Data UInterpTrack;
	struct UInterpTrackVectorBase_Data UInterpTrackVectorBase;
	struct UInterpTrackVectorProp_Data UInterpTrackVectorProp;
};

// 0x78 
struct UInterpTrackVisibility_Data {
	// Last Offset: 0x68
	struct TArray_FVisibilityTrackKey VisibilityTrack; // 0x68 (0xC)
	BOOL bFireEventsWhenForwards :1 ; // 0x74 (0x4)
	BOOL bFireEventsWhenBackwards :1 ; // 0x74 (0x4)
	BOOL bFireEventsWhenJumpingForwards :1 ; // 0x74 (0x4)
	const unsigned long: 0;
};

struct UInterpTrackVisibility {
	struct UObject_Data UObject;
	struct UInterpTrack_Data UInterpTrack;
	struct UInterpTrackVisibility_Data UInterpTrackVisibility;
};

// 0x3C 
struct UInterpTrackInst_Data {
	// Last Offset: 0x3C
};

struct UInterpTrackInst {
	struct UObject_Data UObject;
	struct UInterpTrackInst_Data UInterpTrackInst;
};

// 0x5C 
struct UInterpTrackInstAnimControl_Data {
	// Last Offset: 0x3C
	float LastUpdatePosition; // 0x3C (0x4)
	struct FVector ResetLocation; // 0x40 (0xC)
	struct FRotator ResetRotation; // 0x4C (0xC)
	BOOL bLastAnimFinished :1 ; // 0x58 (0x4)
	const unsigned long: 0;
};

struct UInterpTrackInstAnimControl {
	struct UObject_Data UObject;
	struct UInterpTrackInst_Data UInterpTrackInst;
	struct UInterpTrackInstAnimControl_Data UInterpTrackInstAnimControl;
};

// 0x3C 
struct UInterpTrackInstAudioMaster_Data {
	// Last Offset: 0x3C
};

struct UInterpTrackInstAudioMaster {
	struct UObject_Data UObject;
	struct UInterpTrackInst_Data UInterpTrackInst;
	struct UInterpTrackInstAudioMaster_Data UInterpTrackInstAudioMaster;
};

// 0x3C 
struct UInterpTrackInstColorScale_Data {
	// Last Offset: 0x3C
};

struct UInterpTrackInstColorScale {
	struct UObject_Data UObject;
	struct UInterpTrackInst_Data UInterpTrackInst;
	struct UInterpTrackInstColorScale_Data UInterpTrackInstColorScale;
};

// 0x40 
struct UInterpTrackInstComment_Data {
	// Last Offset: 0x3C
	float LastUpdatePosition; // 0x3C (0x4)
};

struct UInterpTrackInstComment {
	struct UObject_Data UObject;
	struct UInterpTrackInst_Data UInterpTrackInst;
	struct UInterpTrackInstComment_Data UInterpTrackInstComment;
};

// 0x44 
struct UInterpTrackInstDirector_Data {
	// Last Offset: 0x3C
	struct AActor* OldViewTarget; // 0x3C (0x4)
	struct FRenderingPerformanceOverrides OldRenderingOverrides; // 0x40 (0x4)
};

struct UInterpTrackInstDirector {
	struct UObject_Data UObject;
	struct UInterpTrackInst_Data UInterpTrackInst;
	struct UInterpTrackInstDirector_Data UInterpTrackInstDirector;
};

// 0x40 
struct UInterpTrackInstEvent_Data {
	// Last Offset: 0x3C
	float LastUpdatePosition; // 0x3C (0x4)
};

struct UInterpTrackInstEvent {
	struct UObject_Data UObject;
	struct UInterpTrackInst_Data UInterpTrackInst;
	struct UInterpTrackInstEvent_Data UInterpTrackInstEvent;
};

// 0x44 
struct UInterpTrackInstFaceFX_Data {
	// Last Offset: 0x3C
	BOOL bFirstUpdate :1 ; // 0x3C (0x4)
	const unsigned long: 0;
	float LastUpdatePosition; // 0x40 (0x4)
};

struct UInterpTrackInstFaceFX {
	struct UObject_Data UObject;
	struct UInterpTrackInst_Data UInterpTrackInst;
	struct UInterpTrackInstFaceFX_Data UInterpTrackInstFaceFX;
};

// 0x3C 
struct UInterpTrackInstFade_Data {
	// Last Offset: 0x3C
};

struct UInterpTrackInstFade {
	struct UObject_Data UObject;
	struct UInterpTrackInst_Data UInterpTrackInst;
	struct UInterpTrackInstFade_Data UInterpTrackInstFade;
};

// 0x4C 
struct UInterpTrackInstFloatMaterialParam_Data {
	// Last Offset: 0x3C
	struct TArray_FFloatMaterialParamMICData MICInfos; // 0x3C (0xC)
	struct UInterpTrackFloatMaterialParam* InstancedTrack; // 0x48 (0x4)
};

struct UInterpTrackInstFloatMaterialParam {
	struct UObject_Data UObject;
	struct UInterpTrackInst_Data UInterpTrackInst;
	struct UInterpTrackInstFloatMaterialParam_Data UInterpTrackInstFloatMaterialParam;
};

// 0x40 
struct UInterpTrackInstFloatParticleParam_Data {
	// Last Offset: 0x3C
	float ResetFloat; // 0x3C (0x4)
};

struct UInterpTrackInstFloatParticleParam {
	struct UObject_Data UObject;
	struct UInterpTrackInst_Data UInterpTrackInst;
	struct UInterpTrackInstFloatParticleParam_Data UInterpTrackInstFloatParticleParam;
};

// 0x90 
struct UInterpTrackInstHeadTracking_Data {
	// Last Offset: 0x3C
	unsigned char Action; // 0x3C (0x1) (Enum = EHeadTrackingAction)
	const unsigned char Unknown1[0x3]; // 0x3D (0x3) > LAST OFFSET
	const unsigned char Unknown2[0x3C]; // 0x40 (0x3C) UNKNOWN PROPERTY
	struct USkeletalMeshComponent* Mesh; // 0x7C (0x4)
	struct TArray_USkelControlLookAtPtr TrackControls; // 0x80 (0xC)
	float LastUpdatePosition; // 0x8C (0x4)
};

struct UInterpTrackInstHeadTracking {
	struct UObject_Data UObject;
	struct UInterpTrackInst_Data UInterpTrackInst;
	struct UInterpTrackInstHeadTracking_Data UInterpTrackInstHeadTracking;
};

// 0x3C 
struct UInterpTrackInstMorphWeight_Data {
	// Last Offset: 0x3C
};

struct UInterpTrackInstMorphWeight {
	struct UObject_Data UObject;
	struct UInterpTrackInst_Data UInterpTrackInst;
	struct UInterpTrackInstMorphWeight_Data UInterpTrackInstMorphWeight;
};

// 0xB0  (Alignment = 16)
struct UInterpTrackInstMove_Data {
	// Last Offset: 0x3C
	struct FVector ResetLocation; // 0x3C (0xC)
	struct FRotator ResetRotation; // 0x48 (0xC)
	const unsigned char Unknown1[0xC]; // 0x54 (0xC) > LAST OFFSET
	struct FMatrix InitialTM; // 0x60 (0x40)
	struct FQuat InitialQuat; // 0xA0 (0x10)
};

struct UInterpTrackInstMove {
	struct UObject_Data UObject;
	struct UInterpTrackInst_Data UInterpTrackInst;
	struct UInterpTrackInstMove_Data UInterpTrackInstMove;
};

// 0x40 
struct UInterpTrackInstParticleReplay_Data {
	// Last Offset: 0x3C
	float LastUpdatePosition; // 0x3C (0x4)
};

struct UInterpTrackInstParticleReplay {
	struct UObject_Data UObject;
	struct UInterpTrackInst_Data UInterpTrackInst;
	struct UInterpTrackInstParticleReplay_Data UInterpTrackInstParticleReplay;
};

// 0x44 
struct UInterpTrackInstProperty_Data {
	// Last Offset: 0x3C
	struct UFunction* PropertyUpdateCallback; // 0x3C (0x4)
	struct UObject* PropertyOuterObjectInst; // 0x40 (0x4)
};

struct UInterpTrackInstProperty {
	struct UObject_Data UObject;
	struct UInterpTrackInst_Data UInterpTrackInst;
	struct UInterpTrackInstProperty_Data UInterpTrackInstProperty;
};

// 0x50 
struct UInterpTrackInstBoolProp_Data {
	// Last Offset: 0x44
	struct FPointer BoolProp; // 0x44 (0x4)
	int BitMask; // 0x48 (0x4)
	BOOL ResetBool :1 ; // 0x4C (0x4)
	const unsigned long: 0;
};

struct UInterpTrackInstBoolProp {
	struct UObject_Data UObject;
	struct UInterpTrackInst_Data UInterpTrackInst;
	struct UInterpTrackInstProperty_Data UInterpTrackInstProperty;
	struct UInterpTrackInstBoolProp_Data UInterpTrackInstBoolProp;
};

// 0x4C 
struct UInterpTrackInstColorProp_Data {
	// Last Offset: 0x44
	struct FPointer ColorProp; // 0x44 (0x4)
	struct FColor ResetColor; // 0x48 (0x4)
};

struct UInterpTrackInstColorProp {
	struct UObject_Data UObject;
	struct UInterpTrackInst_Data UInterpTrackInst;
	struct UInterpTrackInstProperty_Data UInterpTrackInstProperty;
	struct UInterpTrackInstColorProp_Data UInterpTrackInstColorProp;
};

// 0x4C 
struct UInterpTrackInstFloatProp_Data {
	// Last Offset: 0x44
	struct FPointer FloatProp; // 0x44 (0x4)
	float ResetFloat; // 0x48 (0x4)
};

struct UInterpTrackInstFloatProp {
	struct UObject_Data UObject;
	struct UInterpTrackInst_Data UInterpTrackInst;
	struct UInterpTrackInstProperty_Data UInterpTrackInstProperty;
	struct UInterpTrackInstFloatProp_Data UInterpTrackInstFloatProp;
};

// 0x58 
struct UInterpTrackInstLinearColorProp_Data {
	// Last Offset: 0x44
	struct FPointer ColorProp; // 0x44 (0x4)
	struct FLinearColor ResetColor; // 0x48 (0x10)
};

struct UInterpTrackInstLinearColorProp {
	struct UObject_Data UObject;
	struct UInterpTrackInst_Data UInterpTrackInst;
	struct UInterpTrackInstProperty_Data UInterpTrackInstProperty;
	struct UInterpTrackInstLinearColorProp_Data UInterpTrackInstLinearColorProp;
};

// 0x54 
struct UInterpTrackInstVectorProp_Data {
	// Last Offset: 0x44
	struct FPointer VectorProp; // 0x44 (0x4)
	struct FVector ResetVector; // 0x48 (0xC)
};

struct UInterpTrackInstVectorProp {
	struct UObject_Data UObject;
	struct UInterpTrackInst_Data UInterpTrackInst;
	struct UInterpTrackInstProperty_Data UInterpTrackInstProperty;
	struct UInterpTrackInstVectorProp_Data UInterpTrackInstVectorProp;
};

// 0x3C 
struct UInterpTrackInstSkelControlScale_Data {
	// Last Offset: 0x3C
};

struct UInterpTrackInstSkelControlScale {
	struct UObject_Data UObject;
	struct UInterpTrackInst_Data UInterpTrackInst;
	struct UInterpTrackInstSkelControlScale_Data UInterpTrackInstSkelControlScale;
};

// 0x40 
struct UInterpTrackInstSkelControlStrength_Data {
	// Last Offset: 0x3C
	BOOL bSavedControlledByAnimMetaData :1 ; // 0x3C (0x4)
	const unsigned long: 0;
};

struct UInterpTrackInstSkelControlStrength {
	struct UObject_Data UObject;
	struct UInterpTrackInst_Data UInterpTrackInst;
	struct UInterpTrackInstSkelControlStrength_Data UInterpTrackInstSkelControlStrength;
};

// 0x40 
struct UInterpTrackInstSlomo_Data {
	// Last Offset: 0x3C
	float OldTimeDilation; // 0x3C (0x4)
};

struct UInterpTrackInstSlomo {
	struct UObject_Data UObject;
	struct UInterpTrackInst_Data UInterpTrackInst;
	struct UInterpTrackInstSlomo_Data UInterpTrackInstSlomo;
};

// 0x44 
struct UInterpTrackInstSound_Data {
	// Last Offset: 0x3C
	float LastUpdatePosition; // 0x3C (0x4)
	struct UAudioComponent* PlayAudioComp; // 0x40 (0x4)
};

struct UInterpTrackInstSound {
	struct UObject_Data UObject;
	struct UInterpTrackInst_Data UInterpTrackInst;
	struct UInterpTrackInstSound_Data UInterpTrackInstSound;
};

// 0x58 
struct UInterpTrackInstTeleport_Data {
	// Last Offset: 0x3C
	struct FVector ResetLocation; // 0x3C (0xC)
	struct FRotator ResetRotation; // 0x48 (0xC)
	float LastUpdatePosition; // 0x54 (0x4)
};

struct UInterpTrackInstTeleport {
	struct UObject_Data UObject;
	struct UInterpTrackInst_Data UInterpTrackInst;
	struct UInterpTrackInstTeleport_Data UInterpTrackInstTeleport;
};

// 0x48 
struct UInterpTrackInstToggle_Data {
	// Last Offset: 0x3C
	unsigned char Action; // 0x3C (0x1) (Enum = ETrackToggleAction)
	const unsigned char Unknown1[0x3]; // 0x3D (0x3) > LAST OFFSET
	float LastUpdatePosition; // 0x40 (0x4)
	BOOL bSavedActiveState :1 ; // 0x44 (0x4)
	const unsigned long: 0;
};

struct UInterpTrackInstToggle {
	struct UObject_Data UObject;
	struct UInterpTrackInst_Data UInterpTrackInst;
	struct UInterpTrackInstToggle_Data UInterpTrackInstToggle;
};

// 0x4C 
struct UInterpTrackInstVectorMaterialParam_Data {
	// Last Offset: 0x3C
	struct TArray_FVectorMaterialParamMICData MICInfos; // 0x3C (0xC)
	struct UInterpTrackVectorMaterialParam* InstancedTrack; // 0x48 (0x4)
};

struct UInterpTrackInstVectorMaterialParam {
	struct UObject_Data UObject;
	struct UInterpTrackInst_Data UInterpTrackInst;
	struct UInterpTrackInstVectorMaterialParam_Data UInterpTrackInstVectorMaterialParam;
};

// 0x44 
struct UInterpTrackInstVisibility_Data {
	// Last Offset: 0x3C
	unsigned char Action; // 0x3C (0x1) (Enum = EVisibilityTrackAction)
	const unsigned char Unknown1[0x3]; // 0x3D (0x3) > LAST OFFSET
	float LastUpdatePosition; // 0x40 (0x4)
};

struct UInterpTrackInstVisibility {
	struct UObject_Data UObject;
	struct UInterpTrackInst_Data UInterpTrackInst;
	struct UInterpTrackInstVisibility_Data UInterpTrackInstVisibility;
};

// 0x60 
struct UMaterialExpressionAbs_Data {
	// Last Offset: 0x44
	struct FExpressionInput Input; // 0x44 (0x1C)
};

struct UMaterialExpressionAbs {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionAbs_Data UMaterialExpressionAbs;
};

// 0x7C 
struct UMaterialExpressionAdd_Data {
	// Last Offset: 0x44
	struct FExpressionInput A; // 0x44 (0x1C)
	struct FExpressionInput B; // 0x60 (0x1C)
};

struct UMaterialExpressionAdd {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionAdd_Data UMaterialExpressionAdd;
};

// 0x7C 
struct UMaterialExpressionAppendVector_Data {
	// Last Offset: 0x44
	struct FExpressionInput A; // 0x44 (0x1C)
	struct FExpressionInput B; // 0x60 (0x1C)
};

struct UMaterialExpressionAppendVector {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionAppendVector_Data UMaterialExpressionAppendVector;
};

// 0x60 
struct UMaterialExpressionArcCosine_Data {
	// Last Offset: 0x44
	struct FExpressionInput Input; // 0x44 (0x1C)
};

struct UMaterialExpressionArcCosine {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionArcCosine_Data UMaterialExpressionArcCosine;
};

// 0x60 
struct UMaterialExpressionArcSine_Data {
	// Last Offset: 0x44
	struct FExpressionInput Input; // 0x44 (0x1C)
};

struct UMaterialExpressionArcSine {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionArcSine_Data UMaterialExpressionArcSine;
};

// 0x60 
struct UMaterialExpressionArcTangent_Data {
	// Last Offset: 0x44
	struct FExpressionInput Input; // 0x44 (0x1C)
};

struct UMaterialExpressionArcTangent {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionArcTangent_Data UMaterialExpressionArcTangent;
};

// 0x7C 
struct UMaterialExpressionArcTangent2_Data {
	// Last Offset: 0x44
	struct FExpressionInput InputX; // 0x44 (0x1C)
	struct FExpressionInput InputY; // 0x60 (0x1C)
};

struct UMaterialExpressionArcTangent2 {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionArcTangent2_Data UMaterialExpressionArcTangent2;
};

// 0x7C 
struct UMaterialExpressionBlendModeBase_Data {
	// Last Offset: 0x44
	struct FExpressionInput Base; // 0x44 (0x1C)
	struct FExpressionInput Blend; // 0x60 (0x1C)
};

struct UMaterialExpressionBlendModeBase {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionBlendModeBase_Data UMaterialExpressionBlendModeBase;
};

// 0x7C 
struct UMaterialExpressionzColorBurn_Data {
	// Last Offset: 0x7C
};

struct UMaterialExpressionzColorBurn {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionBlendModeBase_Data UMaterialExpressionBlendModeBase;
	struct UMaterialExpressionzColorBurn_Data UMaterialExpressionzColorBurn;
};

// 0x7C 
struct UMaterialExpressionzColorDodge_Data {
	// Last Offset: 0x7C
};

struct UMaterialExpressionzColorDodge {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionBlendModeBase_Data UMaterialExpressionBlendModeBase;
	struct UMaterialExpressionzColorDodge_Data UMaterialExpressionzColorDodge;
};

// 0x7C 
struct UMaterialExpressionzExclusion_Data {
	// Last Offset: 0x7C
};

struct UMaterialExpressionzExclusion {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionBlendModeBase_Data UMaterialExpressionBlendModeBase;
	struct UMaterialExpressionzExclusion_Data UMaterialExpressionzExclusion;
};

// 0x7C 
struct UMaterialExpressionzHardLight_Data {
	// Last Offset: 0x7C
};

struct UMaterialExpressionzHardLight {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionBlendModeBase_Data UMaterialExpressionBlendModeBase;
	struct UMaterialExpressionzHardLight_Data UMaterialExpressionzHardLight;
};

// 0x7C 
struct UMaterialExpressionzLinearBurn_Data {
	// Last Offset: 0x7C
};

struct UMaterialExpressionzLinearBurn {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionBlendModeBase_Data UMaterialExpressionBlendModeBase;
	struct UMaterialExpressionzLinearBurn_Data UMaterialExpressionzLinearBurn;
};

// 0x7C 
struct UMaterialExpressionzLinearLight_Data {
	// Last Offset: 0x7C
};

struct UMaterialExpressionzLinearLight {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionBlendModeBase_Data UMaterialExpressionBlendModeBase;
	struct UMaterialExpressionzLinearLight_Data UMaterialExpressionzLinearLight;
};

// 0x7C 
struct UMaterialExpressionzOverlay_Data {
	// Last Offset: 0x7C
};

struct UMaterialExpressionzOverlay {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionBlendModeBase_Data UMaterialExpressionBlendModeBase;
	struct UMaterialExpressionzOverlay_Data UMaterialExpressionzOverlay;
};

// 0x7C 
struct UMaterialExpressionzPinLight_Data {
	// Last Offset: 0x7C
};

struct UMaterialExpressionzPinLight {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionBlendModeBase_Data UMaterialExpressionBlendModeBase;
	struct UMaterialExpressionzPinLight_Data UMaterialExpressionzPinLight;
};

// 0x7C 
struct UMaterialExpressionzScreen_Data {
	// Last Offset: 0x7C
};

struct UMaterialExpressionzScreen {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionBlendModeBase_Data UMaterialExpressionBlendModeBase;
	struct UMaterialExpressionzScreen_Data UMaterialExpressionzScreen;
};

// 0x7C 
struct UMaterialExpressionzSoftLight_Data {
	// Last Offset: 0x7C
};

struct UMaterialExpressionzSoftLight {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionBlendModeBase_Data UMaterialExpressionBlendModeBase;
	struct UMaterialExpressionzSoftLight_Data UMaterialExpressionzSoftLight;
};

// 0x7C 
struct UMaterialExpressionzVividLight_Data {
	// Last Offset: 0x7C
};

struct UMaterialExpressionzVividLight {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionBlendModeBase_Data UMaterialExpressionBlendModeBase;
	struct UMaterialExpressionzVividLight_Data UMaterialExpressionzVividLight;
};

// 0x84 
struct UMaterialExpressionBumpOffset_Data {
	// Last Offset: 0x44
	struct FExpressionInput Coordinate; // 0x44 (0x1C)
	struct FExpressionInput Height; // 0x60 (0x1C)
	float HeightRatio; // 0x7C (0x4)
	float ReferencePlane; // 0x80 (0x4)
};

struct UMaterialExpressionBumpOffset {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionBumpOffset_Data UMaterialExpressionBumpOffset;
};

// 0xB4 
struct UMaterialExpressionBumpOffsetEx_Data {
	// Last Offset: 0x44
	struct FExpressionInput Coordinate; // 0x44 (0x1C)
	struct FExpressionInput Height; // 0x60 (0x1C)
	struct FExpressionInput HeightRatio; // 0x7C (0x1C)
	struct FExpressionInput ReferencePlane; // 0x98 (0x1C)
};

struct UMaterialExpressionBumpOffsetEx {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionBumpOffsetEx_Data UMaterialExpressionBumpOffsetEx;
};

// 0x74 
struct UMaterialExpressionBumpOffsetSloped_Data {
	// Last Offset: 0x44
	struct FExpressionInput Coordinate; // 0x44 (0x1C)
	struct UTexture2D* NormalTexture; // 0x60 (0x4)
	struct UTexture2D* HeightTexture; // 0x64 (0x4)
	float HeightRatio; // 0x68 (0x4)
	float ReferencePlane; // 0x6C (0x4)
	int Iterations; // 0x70 (0x4)
};

struct UMaterialExpressionBumpOffsetSloped {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionBumpOffsetSloped_Data UMaterialExpressionBumpOffsetSloped;
};

// 0x44 
struct UMaterialExpressionCameraVector_Data {
	// Last Offset: 0x44
};

struct UMaterialExpressionCameraVector {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionCameraVector_Data UMaterialExpressionCameraVector;
};

// 0x44 
struct UMaterialExpressionCameraWorldPosition_Data {
	// Last Offset: 0x44
};

struct UMaterialExpressionCameraWorldPosition {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionCameraWorldPosition_Data UMaterialExpressionCameraWorldPosition;
};

// 0x60 
struct UMaterialExpressionCeil_Data {
	// Last Offset: 0x44
	struct FExpressionInput Input; // 0x44 (0x1C)
};

struct UMaterialExpressionCeil {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionCeil_Data UMaterialExpressionCeil;
};

// 0x98 
struct UMaterialExpressionClamp_Data {
	// Last Offset: 0x44
	struct FExpressionInput Input; // 0x44 (0x1C)
	struct FExpressionInput Min; // 0x60 (0x1C)
	struct FExpressionInput Max; // 0x7C (0x1C)
};

struct UMaterialExpressionClamp {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionClamp_Data UMaterialExpressionClamp;
};

// 0x60 
struct UMaterialExpressionComment_Data {
	// Last Offset: 0x44
	int PosX; // 0x44 (0x4)
	int PosY; // 0x48 (0x4)
	int SizeX; // 0x4C (0x4)
	int SizeY; // 0x50 (0x4)
	struct FString Text; // 0x54 (0xC)
};

struct UMaterialExpressionComment {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionComment_Data UMaterialExpressionComment;
};

// 0x64 
struct UMaterialExpressionComponentMask_Data {
	// Last Offset: 0x44
	struct FExpressionInput Input; // 0x44 (0x1C)
	BOOL R :1 ; // 0x60 (0x4)
	BOOL G :1 ; // 0x60 (0x4)
	BOOL B :1 ; // 0x60 (0x4)
	BOOL A :1 ; // 0x60 (0x4)
	const unsigned long: 0;
};

struct UMaterialExpressionComponentMask {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionComponentMask_Data UMaterialExpressionComponentMask;
};

// 0x60 
struct UMaterialExpressionCompound_Data {
	// Last Offset: 0x44
	struct TArray_UMaterialExpressionPtr MaterialExpressions; // 0x44 (0xC)
	struct FString Caption; // 0x50 (0xC)
	BOOL bExpanded :1 ; // 0x5C (0x4)
	const unsigned long: 0;
};

struct UMaterialExpressionCompound {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionCompound_Data UMaterialExpressionCompound;
};

// 0x48 
struct UMaterialExpressionConstant_Data {
	// Last Offset: 0x44
	float R; // 0x44 (0x4)
};

struct UMaterialExpressionConstant {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionConstant_Data UMaterialExpressionConstant;
};

// 0x4C 
struct UMaterialExpressionConstant2Vector_Data {
	// Last Offset: 0x44
	float R; // 0x44 (0x4)
	float G; // 0x48 (0x4)
};

struct UMaterialExpressionConstant2Vector {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionConstant2Vector_Data UMaterialExpressionConstant2Vector;
};

// 0x50 
struct UMaterialExpressionConstant3Vector_Data {
	// Last Offset: 0x44
	float R; // 0x44 (0x4)
	float G; // 0x48 (0x4)
	float B; // 0x4C (0x4)
};

struct UMaterialExpressionConstant3Vector {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionConstant3Vector_Data UMaterialExpressionConstant3Vector;
};

// 0x54 
struct UMaterialExpressionConstant4Vector_Data {
	// Last Offset: 0x44
	float R; // 0x44 (0x4)
	float G; // 0x48 (0x4)
	float B; // 0x4C (0x4)
	float A; // 0x50 (0x4)
};

struct UMaterialExpressionConstant4Vector {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionConstant4Vector_Data UMaterialExpressionConstant4Vector;
};

// 0x68 
struct UMaterialExpressionConstantBiasScale_Data {
	// Last Offset: 0x44
	struct FExpressionInput Input; // 0x44 (0x1C)
	float Bias; // 0x60 (0x4)
	float Scale; // 0x64 (0x4)
};

struct UMaterialExpressionConstantBiasScale {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionConstantBiasScale_Data UMaterialExpressionConstantBiasScale;
};

// 0x68 
struct UMaterialExpressionConstantClamp_Data {
	// Last Offset: 0x44
	struct FExpressionInput Input; // 0x44 (0x1C)
	float Min; // 0x60 (0x4)
	float Max; // 0x64 (0x4)
};

struct UMaterialExpressionConstantClamp {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionConstantClamp_Data UMaterialExpressionConstantClamp;
};

// 0x64 
struct UMaterialExpressionCosine_Data {
	// Last Offset: 0x44
	struct FExpressionInput Input; // 0x44 (0x1C)
	float Period; // 0x60 (0x4)
};

struct UMaterialExpressionCosine {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionCosine_Data UMaterialExpressionCosine;
};

// 0x7C 
struct UMaterialExpressionCrossProduct_Data {
	// Last Offset: 0x44
	struct FExpressionInput A; // 0x44 (0x1C)
	struct FExpressionInput B; // 0x60 (0x1C)
};

struct UMaterialExpressionCrossProduct {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionCrossProduct_Data UMaterialExpressionCrossProduct;
};

// 0x6C 
struct UMaterialExpressionCustom_Data {
	// Last Offset: 0x44
	struct FString Code; // 0x44 (0xC)
	unsigned char OutputType; // 0x50 (0x1) (Enum = ECustomMaterialOutputType)
	const unsigned char Unknown1[0x3]; // 0x51 (0x3) > LAST OFFSET
	struct FString Description; // 0x54 (0xC)
	struct TArray_FCustomInput Inputs; // 0x60 (0xC)
};

struct UMaterialExpressionCustom {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionCustom_Data UMaterialExpressionCustom;
};

// 0x48 
struct UMaterialExpressionCustomTexture_Data {
	// Last Offset: 0x44
	struct UTexture* Texture; // 0x44 (0x4)
};

struct UMaterialExpressionCustomTexture {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionCustomTexture_Data UMaterialExpressionCustomTexture;
};

// 0x60 
struct UMaterialExpressionDdx_Data {
	// Last Offset: 0x44
	struct FExpressionInput Input; // 0x44 (0x1C)
};

struct UMaterialExpressionDdx {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionDdx_Data UMaterialExpressionDdx;
};

// 0x60 
struct UMaterialExpressionDdy_Data {
	// Last Offset: 0x44
	struct FExpressionInput Input; // 0x44 (0x1C)
};

struct UMaterialExpressionDdy {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionDdy_Data UMaterialExpressionDdy;
};

// 0x60 
struct UMaterialExpressionDegrees_Data {
	// Last Offset: 0x44
	struct FExpressionInput Input; // 0x44 (0x1C)
};

struct UMaterialExpressionDegrees {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionDegrees_Data UMaterialExpressionDegrees;
};

// 0x84 
struct UMaterialExpressionDepthBiasedAlpha_Data {
	// Last Offset: 0x44
	BOOL bNormalize :1 ; // 0x44 (0x4)
	const unsigned long: 0;
	float BiasScale; // 0x48 (0x4)
	struct FExpressionInput Alpha; // 0x4C (0x1C)
	struct FExpressionInput Bias; // 0x68 (0x1C)
};

struct UMaterialExpressionDepthBiasedAlpha {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionDepthBiasedAlpha_Data UMaterialExpressionDepthBiasedAlpha;
};

// 0xA0 
struct UMaterialExpressionDepthBiasedBlend_Data {
	// Last Offset: 0x44
	BOOL bNormalize :1 ; // 0x44 (0x4)
	const unsigned long: 0;
	float BiasScale; // 0x48 (0x4)
	struct FExpressionInput RGB; // 0x4C (0x1C)
	struct FExpressionInput Alpha; // 0x68 (0x1C)
	struct FExpressionInput Bias; // 0x84 (0x1C)
};

struct UMaterialExpressionDepthBiasedBlend {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionDepthBiasedBlend_Data UMaterialExpressionDepthBiasedBlend;
};

// 0x64 
struct UMaterialExpressionDepthOfFieldFunction_Data {
	// Last Offset: 0x44
	unsigned char FunctionValue; // 0x44 (0x1) (Enum = EDepthOfFieldFunctionValue)
	const unsigned char Unknown1[0x3]; // 0x45 (0x3) > LAST OFFSET
	struct FExpressionInput Depth; // 0x48 (0x1C)
};

struct UMaterialExpressionDepthOfFieldFunction {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionDepthOfFieldFunction_Data UMaterialExpressionDepthOfFieldFunction;
};

// 0x60 
struct UMaterialExpressionDeriveNormalZ_Data {
	// Last Offset: 0x44
	struct FExpressionInput InXY; // 0x44 (0x1C)
};

struct UMaterialExpressionDeriveNormalZ {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionDeriveNormalZ_Data UMaterialExpressionDeriveNormalZ;
};

// 0x8C 
struct UMaterialExpressionDesaturation_Data {
	// Last Offset: 0x44
	struct FExpressionInput Input; // 0x44 (0x1C)
	struct FExpressionInput Percent; // 0x60 (0x1C)
	struct FLinearColor LuminanceFactors; // 0x7C (0x10)
};

struct UMaterialExpressionDesaturation {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionDesaturation_Data UMaterialExpressionDesaturation;
};

// 0x44 
struct UMaterialExpressionDestColor_Data {
	// Last Offset: 0x44
};

struct UMaterialExpressionDestColor {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionDestColor_Data UMaterialExpressionDestColor;
};

// 0x48 
struct UMaterialExpressionDestDepth_Data {
	// Last Offset: 0x44
	BOOL bNormalize :1 ; // 0x44 (0x4)
	const unsigned long: 0;
};

struct UMaterialExpressionDestDepth {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionDestDepth_Data UMaterialExpressionDestDepth;
};

// 0x7C 
struct UMaterialExpressionDistance_Data {
	// Last Offset: 0x44
	struct FExpressionInput A; // 0x44 (0x1C)
	struct FExpressionInput B; // 0x60 (0x1C)
};

struct UMaterialExpressionDistance {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionDistance_Data UMaterialExpressionDistance;
};

// 0x7C 
struct UMaterialExpressionDivide_Data {
	// Last Offset: 0x44
	struct FExpressionInput A; // 0x44 (0x1C)
	struct FExpressionInput B; // 0x60 (0x1C)
};

struct UMaterialExpressionDivide {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionDivide_Data UMaterialExpressionDivide;
};

// 0x50 
struct UMaterialExpressionDominantSkyLight_Data {
	// Last Offset: 0x44
	BOOL bUseTimeOfDay :1 ; // 0x44 (0x4)
	const unsigned long: 0;
	float TimeOfDayMax; // 0x48 (0x4)
	float TimeOfDayMin; // 0x4C (0x4)
};

struct UMaterialExpressionDominantSkyLight {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionDominantSkyLight_Data UMaterialExpressionDominantSkyLight;
};

// 0x7C 
struct UMaterialExpressionDotProduct_Data {
	// Last Offset: 0x44
	struct FExpressionInput A; // 0x44 (0x1C)
	struct FExpressionInput B; // 0x60 (0x1C)
};

struct UMaterialExpressionDotProduct {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionDotProduct_Data UMaterialExpressionDotProduct;
};

// 0x50 
struct UMaterialExpressionDynamicParameter_Data {
	// Last Offset: 0x44
	struct TArray_FString ParamNames; // 0x44 (0xC)
};

struct UMaterialExpressionDynamicParameter {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionDynamicParameter_Data UMaterialExpressionDynamicParameter;
};

// 0x50 
struct UMaterialExpressionMeshEmitterDynamicParameter_Data {
	// Last Offset: 0x50
};

struct UMaterialExpressionMeshEmitterDynamicParameter {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionDynamicParameter_Data UMaterialExpressionDynamicParameter;
	struct UMaterialExpressionMeshEmitterDynamicParameter_Data UMaterialExpressionMeshEmitterDynamicParameter;
};

// 0x60 
struct UMaterialExpressionExp_Data {
	// Last Offset: 0x44
	struct FExpressionInput Input; // 0x44 (0x1C)
};

struct UMaterialExpressionExp {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionExp_Data UMaterialExpressionExp;
};

// 0x60 
struct UMaterialExpressionExp2_Data {
	// Last Offset: 0x44
	struct FExpressionInput Input; // 0x44 (0x1C)
};

struct UMaterialExpressionExp2 {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionExp2_Data UMaterialExpressionExp2;
};

// 0x60 
struct UMaterialExpressionFloor_Data {
	// Last Offset: 0x44
	struct FExpressionInput Input; // 0x44 (0x1C)
};

struct UMaterialExpressionFloor {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionFloor_Data UMaterialExpressionFloor;
};

// 0x60 
struct UMaterialExpressionFluidNormal_Data {
	// Last Offset: 0x44
	struct FExpressionInput Coordinates; // 0x44 (0x1C)
};

struct UMaterialExpressionFluidNormal {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionFluidNormal_Data UMaterialExpressionFluidNormal;
};

// 0x7C 
struct UMaterialExpressionFmod_Data {
	// Last Offset: 0x44
	struct FExpressionInput A; // 0x44 (0x1C)
	struct FExpressionInput B; // 0x60 (0x1C)
};

struct UMaterialExpressionFmod {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionFmod_Data UMaterialExpressionFmod;
};

// 0x44 
struct UMaterialExpressionFoliageImpulseDirection_Data {
	// Last Offset: 0x44
};

struct UMaterialExpressionFoliageImpulseDirection {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionFoliageImpulseDirection_Data UMaterialExpressionFoliageImpulseDirection;
};

// 0x44 
struct UMaterialExpressionFoliageNormalizedRotationAxisAndAngle_Data {
	// Last Offset: 0x44
};

struct UMaterialExpressionFoliageNormalizedRotationAxisAndAngle {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionFoliageNormalizedRotationAxisAndAngle_Data UMaterialExpressionFoliageNormalizedRotationAxisAndAngle;
};

// 0x4C 
struct UMaterialExpressionFontSample_Data {
	// Last Offset: 0x44
	struct UFont* Font; // 0x44 (0x4)
	int FontTexturePage; // 0x48 (0x4)
};

struct UMaterialExpressionFontSample {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionFontSample_Data UMaterialExpressionFontSample;
};

// 0x64 
struct UMaterialExpressionFontSampleParameter_Data {
	// Last Offset: 0x4C
	struct FName ParameterName; // 0x4C (0x8)
	struct FGuid ExpressionGUID; // 0x54 (0x10)
};

struct UMaterialExpressionFontSampleParameter {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionFontSample_Data UMaterialExpressionFontSample;
	struct UMaterialExpressionFontSampleParameter_Data UMaterialExpressionFontSampleParameter;
};

// 0x60 
struct UMaterialExpressionFrac_Data {
	// Last Offset: 0x44
	struct FExpressionInput Input; // 0x44 (0x1C)
};

struct UMaterialExpressionFrac {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionFrac_Data UMaterialExpressionFrac;
};

// 0x64 
struct UMaterialExpressionFresnel_Data {
	// Last Offset: 0x44
	float Exponent; // 0x44 (0x4)
	struct FExpressionInput Normal; // 0x48 (0x1C)
};

struct UMaterialExpressionFresnel {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionFresnel_Data UMaterialExpressionFresnel;
};

// 0x98 
struct UMaterialExpressionGradient_Data {
	// Last Offset: 0x44
	struct FExpressionInput Coordinates; // 0x44 (0x1C)
	unsigned char GradientStyle; // 0x60 (0x1) (Enum = EGradientStyle)
	unsigned char AddressX; // 0x61 (0x1) (Enum = TextureAddress)
	unsigned char AddressY; // 0x62 (0x1) (Enum = TextureAddress)
	const unsigned char Unknown1[0x1]; // 0x63 (0x1) > LAST OFFSET
	struct FLinearColor ForegroundColor; // 0x64 (0x10)
	struct FLinearColor BackgroundColor; // 0x74 (0x10)
	struct FVector2D ForegroundOffset; // 0x84 (0x8)
	struct FVector2D BackgroundOffset; // 0x8C (0x8)
	BOOL bReverse :1 ; // 0x94 (0x4)
	BOOL bSmoothInOut :1 ; // 0x94 (0x4)
	const unsigned long: 0;
};

struct UMaterialExpressionGradient {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionGradient_Data UMaterialExpressionGradient;
};

// 0xD0 
struct UMaterialExpressionIf_Data {
	// Last Offset: 0x44
	struct FExpressionInput A; // 0x44 (0x1C)
	struct FExpressionInput B; // 0x60 (0x1C)
	struct FExpressionInput AGreaterThanB; // 0x7C (0x1C)
	struct FExpressionInput AEqualsB; // 0x98 (0x1C)
	struct FExpressionInput ALessThanB; // 0xB4 (0x1C)
};

struct UMaterialExpressionIf {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionIf_Data UMaterialExpressionIf;
};

// 0x60 
struct UMaterialExpressionLength_Data {
	// Last Offset: 0x44
	struct FExpressionInput Input; // 0x44 (0x1C)
};

struct UMaterialExpressionLength {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionLength_Data UMaterialExpressionLength;
};

// 0x44 
struct UMaterialExpressionLensFlareIntensity_Data {
	// Last Offset: 0x44
};

struct UMaterialExpressionLensFlareIntensity {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionLensFlareIntensity_Data UMaterialExpressionLensFlareIntensity;
};

// 0x44 
struct UMaterialExpressionLensFlareOcclusion_Data {
	// Last Offset: 0x44
};

struct UMaterialExpressionLensFlareOcclusion {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionLensFlareOcclusion_Data UMaterialExpressionLensFlareOcclusion;
};

// 0x44 
struct UMaterialExpressionLensFlareRadialDistance_Data {
	// Last Offset: 0x44
};

struct UMaterialExpressionLensFlareRadialDistance {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionLensFlareRadialDistance_Data UMaterialExpressionLensFlareRadialDistance;
};

// 0x44 
struct UMaterialExpressionLensFlareRayDistance_Data {
	// Last Offset: 0x44
};

struct UMaterialExpressionLensFlareRayDistance {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionLensFlareRayDistance_Data UMaterialExpressionLensFlareRayDistance;
};

// 0x44 
struct UMaterialExpressionLensFlareSourceDistance_Data {
	// Last Offset: 0x44
};

struct UMaterialExpressionLensFlareSourceDistance {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionLensFlareSourceDistance_Data UMaterialExpressionLensFlareSourceDistance;
};

// 0x44 
struct UMaterialExpressionLightmapUVs_Data {
	// Last Offset: 0x44
};

struct UMaterialExpressionLightmapUVs {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionLightmapUVs_Data UMaterialExpressionLightmapUVs;
};

// 0x7C 
struct UMaterialExpressionLightmassReplace_Data {
	// Last Offset: 0x44
	struct FExpressionInput Realtime; // 0x44 (0x1C)
	struct FExpressionInput Lightmass; // 0x60 (0x1C)
};

struct UMaterialExpressionLightmassReplace {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionLightmassReplace_Data UMaterialExpressionLightmassReplace;
};

// 0x44 
struct UMaterialExpressionLightVector_Data {
	// Last Offset: 0x44
};

struct UMaterialExpressionLightVector {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionLightVector_Data UMaterialExpressionLightVector;
};

// 0x98 
struct UMaterialExpressionLinearInterpolate_Data {
	// Last Offset: 0x44
	struct FExpressionInput A; // 0x44 (0x1C)
	struct FExpressionInput B; // 0x60 (0x1C)
	struct FExpressionInput Alpha; // 0x7C (0x1C)
};

struct UMaterialExpressionLinearInterpolate {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionLinearInterpolate_Data UMaterialExpressionLinearInterpolate;
};

// 0x60 
struct UMaterialExpressionLog_Data {
	// Last Offset: 0x44
	struct FExpressionInput Input; // 0x44 (0x1C)
};

struct UMaterialExpressionLog {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionLog_Data UMaterialExpressionLog;
};

// 0x60 
struct UMaterialExpressionLog10_Data {
	// Last Offset: 0x44
	struct FExpressionInput Input; // 0x44 (0x1C)
};

struct UMaterialExpressionLog10 {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionLog10_Data UMaterialExpressionLog10;
};

// 0x60 
struct UMaterialExpressionLog2_Data {
	// Last Offset: 0x44
	struct FExpressionInput Input; // 0x44 (0x1C)
};

struct UMaterialExpressionLog2 {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionLog2_Data UMaterialExpressionLog2;
};

// 0x7C 
struct UMaterialExpressionMax_Data {
	// Last Offset: 0x44
	struct FExpressionInput A; // 0x44 (0x1C)
	struct FExpressionInput B; // 0x60 (0x1C)
};

struct UMaterialExpressionMax {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionMax_Data UMaterialExpressionMax;
};

// 0x44 
struct UMaterialExpressionMeshEmitterVertexColor_Data {
	// Last Offset: 0x44
};

struct UMaterialExpressionMeshEmitterVertexColor {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionMeshEmitterVertexColor_Data UMaterialExpressionMeshEmitterVertexColor;
};

// 0x7C 
struct UMaterialExpressionMin_Data {
	// Last Offset: 0x44
	struct FExpressionInput A; // 0x44 (0x1C)
	struct FExpressionInput B; // 0x60 (0x1C)
};

struct UMaterialExpressionMin {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionMin_Data UMaterialExpressionMin;
};

// 0x7C 
struct UMaterialExpressionMultiply_Data {
	// Last Offset: 0x44
	struct FExpressionInput A; // 0x44 (0x1C)
	struct FExpressionInput B; // 0x60 (0x1C)
};

struct UMaterialExpressionMultiply {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionMultiply_Data UMaterialExpressionMultiply;
};

// 0x98 
struct UMaterialExpressionMultiplyAndAdd_Data {
	// Last Offset: 0x44
	struct FExpressionInput A; // 0x44 (0x1C)
	struct FExpressionInput B; // 0x60 (0x1C)
	struct FExpressionInput WeightB; // 0x7C (0x1C)
};

struct UMaterialExpressionMultiplyAndAdd {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionMultiplyAndAdd_Data UMaterialExpressionMultiplyAndAdd;
};

// 0x60 
struct UMaterialExpressionNormalize_Data {
	// Last Offset: 0x44
	struct FExpressionInput VectorInput; // 0x44 (0x1C)
};

struct UMaterialExpressionNormalize {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionNormalize_Data UMaterialExpressionNormalize;
};

// 0x44 
struct UMaterialExpressionObjectOrientation_Data {
	// Last Offset: 0x44
};

struct UMaterialExpressionObjectOrientation {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionObjectOrientation_Data UMaterialExpressionObjectOrientation;
};

// 0x44 
struct UMaterialExpressionObjectRadius_Data {
	// Last Offset: 0x44
};

struct UMaterialExpressionObjectRadius {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionObjectRadius_Data UMaterialExpressionObjectRadius;
};

// 0x44 
struct UMaterialExpressionObjectWorldPosition_Data {
	// Last Offset: 0x44
};

struct UMaterialExpressionObjectWorldPosition {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionObjectWorldPosition_Data UMaterialExpressionObjectWorldPosition;
};

// 0x44 
struct UMaterialExpressionOcclusionPercentage_Data {
	// Last Offset: 0x44
};

struct UMaterialExpressionOcclusionPercentage {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionOcclusionPercentage_Data UMaterialExpressionOcclusionPercentage;
};

// 0x60 
struct UMaterialExpressionOneMinus_Data {
	// Last Offset: 0x44
	struct FExpressionInput Input; // 0x44 (0x1C)
};

struct UMaterialExpressionOneMinus {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionOneMinus_Data UMaterialExpressionOneMinus;
};

// 0x84 
struct UMaterialExpressionPanner_Data {
	// Last Offset: 0x44
	struct FExpressionInput Coordinate; // 0x44 (0x1C)
	struct FExpressionInput Time; // 0x60 (0x1C)
	float SpeedX; // 0x7C (0x4)
	float SpeedY; // 0x80 (0x4)
};

struct UMaterialExpressionPanner {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionPanner_Data UMaterialExpressionPanner;
};

// 0x5C 
struct UMaterialExpressionParameter_Data {
	// Last Offset: 0x44
	struct FName ParameterName; // 0x44 (0x8)
	struct FGuid ExpressionGUID; // 0x4C (0x10)
};

struct UMaterialExpressionParameter {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionParameter_Data UMaterialExpressionParameter;
};

// 0x60 
struct UMaterialExpressionScalarParameter_Data {
	// Last Offset: 0x5C
	float DefaultValue; // 0x5C (0x4)
};

struct UMaterialExpressionScalarParameter {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionParameter_Data UMaterialExpressionParameter;
	struct UMaterialExpressionScalarParameter_Data UMaterialExpressionScalarParameter;
};

// 0x80 
struct UMaterialExpressionStaticComponentMaskParameter_Data {
	// Last Offset: 0x5C
	struct FExpressionInput Input; // 0x5C (0x1C)
	BOOL DefaultR :1 ; // 0x78 (0x4)
	BOOL DefaultG :1 ; // 0x78 (0x4)
	BOOL DefaultB :1 ; // 0x78 (0x4)
	BOOL DefaultA :1 ; // 0x78 (0x4)
	const unsigned long: 0;
	struct FPointer InstanceOverride; // 0x7C (0x4)
};

struct UMaterialExpressionStaticComponentMaskParameter {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionParameter_Data UMaterialExpressionParameter;
	struct UMaterialExpressionStaticComponentMaskParameter_Data UMaterialExpressionStaticComponentMaskParameter;
};

// 0x9C 
struct UMaterialExpressionStaticSwitchParameter_Data {
	// Last Offset: 0x5C
	BOOL DefaultValue :1 ; // 0x5C (0x4)
	BOOL ExtendedCaptionDisplay :1 ; // 0x5C (0x4)
	const unsigned long: 0;
	struct FExpressionInput A; // 0x60 (0x1C)
	struct FExpressionInput B; // 0x7C (0x1C)
	struct FPointer InstanceOverride; // 0x98 (0x4)
};

struct UMaterialExpressionStaticSwitchParameter {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionParameter_Data UMaterialExpressionParameter;
	struct UMaterialExpressionStaticSwitchParameter_Data UMaterialExpressionStaticSwitchParameter;
};

// 0x6C 
struct UMaterialExpressionVectorParameter_Data {
	// Last Offset: 0x5C
	struct FLinearColor DefaultValue; // 0x5C (0x10)
};

struct UMaterialExpressionVectorParameter {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionParameter_Data UMaterialExpressionParameter;
	struct UMaterialExpressionVectorParameter_Data UMaterialExpressionVectorParameter;
};

// 0x48 
struct UMaterialExpressionParticleMacroUV_Data {
	// Last Offset: 0x44
	BOOL bUseViewSpace :1 ; // 0x44 (0x4)
	const unsigned long: 0;
};

struct UMaterialExpressionParticleMacroUV {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionParticleMacroUV_Data UMaterialExpressionParticleMacroUV;
};

// 0x44 
struct UMaterialExpressionPerInstanceRandom_Data {
	// Last Offset: 0x44
};

struct UMaterialExpressionPerInstanceRandom {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionPerInstanceRandom_Data UMaterialExpressionPerInstanceRandom;
};

// 0x48 
struct UMaterialExpressionPixelDepth_Data {
	// Last Offset: 0x44
	BOOL bNormalize :1 ; // 0x44 (0x4)
	const unsigned long: 0;
};

struct UMaterialExpressionPixelDepth {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionPixelDepth_Data UMaterialExpressionPixelDepth;
};

// 0x7C 
struct UMaterialExpressionPower_Data {
	// Last Offset: 0x44
	struct FExpressionInput Base; // 0x44 (0x1C)
	struct FExpressionInput Exponent; // 0x60 (0x1C)
};

struct UMaterialExpressionPower {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionPower_Data UMaterialExpressionPower;
};

// 0x60 
struct UMaterialExpressionRadians_Data {
	// Last Offset: 0x44
	struct FExpressionInput Input; // 0x44 (0x1C)
};

struct UMaterialExpressionRadians {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionRadians_Data UMaterialExpressionRadians;
};

// 0x60 
struct UMaterialExpressionRecipSquareRoot_Data {
	// Last Offset: 0x44
	struct FExpressionInput Input; // 0x44 (0x1C)
};

struct UMaterialExpressionRecipSquareRoot {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionRecipSquareRoot_Data UMaterialExpressionRecipSquareRoot;
};

// 0x44 
struct UMaterialExpressionReflectionVector_Data {
	// Last Offset: 0x44
};

struct UMaterialExpressionReflectionVector {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionReflectionVector_Data UMaterialExpressionReflectionVector;
};

// 0xB8 
struct UMaterialExpressionRotate3D_Data {
	// Last Offset: 0x44
	struct FExpressionInput Vec; // 0x44 (0x1C)
	struct FExpressionInput MatrixForward; // 0x60 (0x1C)
	struct FExpressionInput MatrixRight; // 0x7C (0x1C)
	struct FExpressionInput MatrixUp; // 0x98 (0x1C)
	BOOL bTranspose :1 ; // 0xB4 (0x4)
	const unsigned long: 0;
};

struct UMaterialExpressionRotate3D {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionRotate3D_Data UMaterialExpressionRotate3D;
};

// 0x98 
struct UMaterialExpressionRotateAboutAxis_Data {
	// Last Offset: 0x44
	struct FExpressionInput NormalizedRotationAxisAndAngle; // 0x44 (0x1C)
	struct FExpressionInput PositionOnAxis; // 0x60 (0x1C)
	struct FExpressionInput Position; // 0x7C (0x1C)
};

struct UMaterialExpressionRotateAboutAxis {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionRotateAboutAxis_Data UMaterialExpressionRotateAboutAxis;
};

// 0x88 
struct UMaterialExpressionRotator_Data {
	// Last Offset: 0x44
	struct FExpressionInput Coordinate; // 0x44 (0x1C)
	struct FExpressionInput Time; // 0x60 (0x1C)
	float CenterX; // 0x7C (0x4)
	float CenterY; // 0x80 (0x4)
	float Speed; // 0x84 (0x4)
};

struct UMaterialExpressionRotator {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionRotator_Data UMaterialExpressionRotator;
};

// 0x60 
struct UMaterialExpressionSaturate_Data {
	// Last Offset: 0x44
	struct FExpressionInput Input; // 0x44 (0x1C)
};

struct UMaterialExpressionSaturate {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionSaturate_Data UMaterialExpressionSaturate;
};

// 0x64 
struct UMaterialExpressionSceneDepth_Data {
	// Last Offset: 0x44
	struct FExpressionInput Coordinates; // 0x44 (0x1C)
	BOOL bNormalize :1 ; // 0x60 (0x4)
	const unsigned long: 0;
};

struct UMaterialExpressionSceneDepth {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionSceneDepth_Data UMaterialExpressionSceneDepth;
};

// 0x68 
struct UMaterialExpressionSceneTexture_Data {
	// Last Offset: 0x44
	struct FExpressionInput Coordinates; // 0x44 (0x1C)
	unsigned char SceneTextureType; // 0x60 (0x1) (Enum = ESceneTextureType)
	const unsigned char Unknown1[0x3]; // 0x61 (0x3) > LAST OFFSET
	BOOL ScreenAlign :1 ; // 0x64 (0x4)
	const unsigned long: 0;
};

struct UMaterialExpressionSceneTexture {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionSceneTexture_Data UMaterialExpressionSceneTexture;
};

// 0x48 
struct UMaterialExpressionScreenPosition_Data {
	// Last Offset: 0x44
	BOOL ScreenAlign :1 ; // 0x44 (0x4)
	const unsigned long: 0;
};

struct UMaterialExpressionScreenPosition {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionScreenPosition_Data UMaterialExpressionScreenPosition;
};

// 0x64 
struct UMaterialExpressionSine_Data {
	// Last Offset: 0x44
	struct FExpressionInput Input; // 0x44 (0x1C)
	float Period; // 0x60 (0x4)
};

struct UMaterialExpressionSine {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionSine_Data UMaterialExpressionSine;
};

// 0xBC 
struct UMaterialExpressionSphereMask_Data {
	// Last Offset: 0x44
	struct FExpressionInput A; // 0x44 (0x1C)
	struct FExpressionInput B; // 0x60 (0x1C)
	struct FExpressionInput Radius; // 0x7C (0x1C)
	struct FExpressionInput Hardness; // 0x98 (0x1C)
	float AttenuationRadius; // 0xB4 (0x4)
	float HardnessPercent; // 0xB8 (0x4)
};

struct UMaterialExpressionSphereMask {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionSphereMask_Data UMaterialExpressionSphereMask;
};

// 0x48 
struct UMaterialExpressionSPHFluidNormal_Data {
	// Last Offset: 0x44
	struct UTexture* DefaultTexture; // 0x44 (0x4)
};

struct UMaterialExpressionSPHFluidNormal {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionSPHFluidNormal_Data UMaterialExpressionSPHFluidNormal;
};

// 0x48 
struct UMaterialExpressionSPHFluidThickness_Data {
	// Last Offset: 0x44
	struct UTexture* DefaultTexture; // 0x44 (0x4)
};

struct UMaterialExpressionSPHFluidThickness {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionSPHFluidThickness_Data UMaterialExpressionSPHFluidThickness;
};

// 0x48 
struct UMaterialExpressionSPHFluidVertexColor_Data {
	// Last Offset: 0x44
	struct UTexture* DefaultTexture; // 0x44 (0x4)
};

struct UMaterialExpressionSPHFluidVertexColor {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionSPHFluidVertexColor_Data UMaterialExpressionSPHFluidVertexColor;
};

// 0x60 
struct UMaterialExpressionSquareRoot_Data {
	// Last Offset: 0x44
	struct FExpressionInput Input; // 0x44 (0x1C)
};

struct UMaterialExpressionSquareRoot {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionSquareRoot_Data UMaterialExpressionSquareRoot;
};

// 0x6C 
struct UMaterialExpressionSteepParallaxOffset_Data {
	// Last Offset: 0x44
	struct UTexture2D* ParallaxTexture; // 0x44 (0x4)
	int NumSteps; // 0x48 (0x4)
	BOOL bSmoothAndUnlit :1 ; // 0x4C (0x4)
	const unsigned long: 0;
	struct FExpressionInput HeightScaleInput; // 0x50 (0x1C)
};

struct UMaterialExpressionSteepParallaxOffset {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionSteepParallaxOffset_Data UMaterialExpressionSteepParallaxOffset;
};

// 0x7C 
struct UMaterialExpressionSubtract_Data {
	// Last Offset: 0x44
	struct FExpressionInput A; // 0x44 (0x1C)
	struct FExpressionInput B; // 0x60 (0x1C)
};

struct UMaterialExpressionSubtract {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionSubtract_Data UMaterialExpressionSubtract;
};

// 0x6C 
struct UMaterialExpressionSwizzle_Data {
	// Last Offset: 0x44
	struct FExpressionInput Input; // 0x44 (0x1C)
	struct FString SwizzleMask; // 0x60 (0xC)
};

struct UMaterialExpressionSwizzle {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionSwizzle_Data UMaterialExpressionSwizzle;
};

// 0x60 
struct UMaterialExpressionTangent_Data {
	// Last Offset: 0x44
	struct FExpressionInput Input; // 0x44 (0x1C)
};

struct UMaterialExpressionTangent {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionTangent_Data UMaterialExpressionTangent;
};

// 0x58 
struct UMaterialExpressionTerrainLayerCoords_Data {
	// Last Offset: 0x44
	unsigned char MappingType; // 0x44 (0x1) (Enum = ETerrainCoordMappingType)
	const unsigned char Unknown1[0x3]; // 0x45 (0x3) > LAST OFFSET
	float MappingScale; // 0x48 (0x4)
	float MappingRotation; // 0x4C (0x4)
	float MappingPanU; // 0x50 (0x4)
	float MappingPanV; // 0x54 (0x4)
};

struct UMaterialExpressionTerrainLayerCoords {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionTerrainLayerCoords_Data UMaterialExpressionTerrainLayerCoords;
};

// 0x9C 
struct UMaterialExpressionTerrainLayerWeight_Data {
	// Last Offset: 0x44
	struct FPointer InstanceOverride; // 0x44 (0x4)
	struct FExpressionInput Base; // 0x48 (0x1C)
	struct FExpressionInput Layer; // 0x64 (0x1C)
	struct FName ParameterName; // 0x80 (0x8)
	float PreviewWeight; // 0x88 (0x4)
	struct FGuid ExpressionGUID; // 0x8C (0x10)
};

struct UMaterialExpressionTerrainLayerWeight {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionTerrainLayerWeight_Data UMaterialExpressionTerrainLayerWeight;
};

// 0x4D 
struct UMaterialExpressionTerrainTextureCoordinate_Data {
	// Last Offset: 0x44
	BOOL WeightMap :1 ; // 0x44 (0x4)
	const unsigned long: 0;
	int LayerIndex; // 0x48 (0x4)
	unsigned char LayerProjection; // 0x4C (0x1) (Enum = ETerrainMaterialProjectionType)
};

struct UMaterialExpressionTerrainTextureCoordinate {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionTerrainTextureCoordinate_Data UMaterialExpressionTerrainTextureCoordinate;
};

// 0x54 
struct UMaterialExpressionTextureCoordinate_Data {
	// Last Offset: 0x44
	int CoordinateIndex; // 0x44 (0x4)
	float UTiling; // 0x48 (0x4)
	float VTiling; // 0x4C (0x4)
	BOOL UnMirrorU :1 ; // 0x50 (0x4)
	BOOL UnMirrorV :1 ; // 0x50 (0x4)
	const unsigned long: 0;
};

struct UMaterialExpressionTextureCoordinate {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionTextureCoordinate_Data UMaterialExpressionTextureCoordinate;
};

// 0x48 
struct UMaterialExpressionTextureDimensions_Data {
	// Last Offset: 0x44
	struct UTexture* Texture; // 0x44 (0x4)
};

struct UMaterialExpressionTextureDimensions {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionTextureDimensions_Data UMaterialExpressionTextureDimensions;
};

// 0x64 
struct UMaterialExpressionTextureSample_Data {
	// Last Offset: 0x44
	struct UTexture* Texture; // 0x44 (0x4)
	struct FExpressionInput Coordinates; // 0x48 (0x1C)
};

struct UMaterialExpressionTextureSample {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionTextureSample_Data UMaterialExpressionTextureSample;
};

// 0x88 
struct UMaterialExpressionDepthBiasBlend_Data {
	// Last Offset: 0x64
	BOOL bNormalize :1 ; // 0x64 (0x4)
	const unsigned long: 0;
	float BiasScale; // 0x68 (0x4)
	struct FExpressionInput Bias; // 0x6C (0x1C)
};

struct UMaterialExpressionDepthBiasBlend {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionTextureSample_Data UMaterialExpressionTextureSample;
	struct UMaterialExpressionDepthBiasBlend_Data UMaterialExpressionDepthBiasBlend;
};

// 0x64 
struct UMaterialExpressionFlipBookSample_Data {
	// Last Offset: 0x64
};

struct UMaterialExpressionFlipBookSample {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionTextureSample_Data UMaterialExpressionTextureSample;
	struct UMaterialExpressionFlipBookSample_Data UMaterialExpressionFlipBookSample;
};

// 0x64 
struct UMaterialExpressionMeshSubUV_Data {
	// Last Offset: 0x64
};

struct UMaterialExpressionMeshSubUV {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionTextureSample_Data UMaterialExpressionTextureSample;
	struct UMaterialExpressionMeshSubUV_Data UMaterialExpressionMeshSubUV;
};

// 0x64 
struct UMaterialExpressionMeshSubUVBlend_Data {
	// Last Offset: 0x64
};

struct UMaterialExpressionMeshSubUVBlend {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionTextureSample_Data UMaterialExpressionTextureSample;
	struct UMaterialExpressionMeshSubUV_Data UMaterialExpressionMeshSubUV;
	struct UMaterialExpressionMeshSubUVBlend_Data UMaterialExpressionMeshSubUVBlend;
};

// 0x64 
struct UMaterialExpressionParticleSubUV_Data {
	// Last Offset: 0x64
};

struct UMaterialExpressionParticleSubUV {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionTextureSample_Data UMaterialExpressionTextureSample;
	struct UMaterialExpressionParticleSubUV_Data UMaterialExpressionParticleSubUV;
};

// 0x7C 
struct UMaterialExpressionTextureSampleParameter_Data {
	// Last Offset: 0x64
	struct FName ParameterName; // 0x64 (0x8)
	struct FGuid ExpressionGUID; // 0x6C (0x10)
};

struct UMaterialExpressionTextureSampleParameter {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionTextureSample_Data UMaterialExpressionTextureSample;
	struct UMaterialExpressionTextureSampleParameter_Data UMaterialExpressionTextureSampleParameter;
};

// 0x7C 
struct UMaterialExpressionTextureSampleParameter2D_Data {
	// Last Offset: 0x7C
};

struct UMaterialExpressionTextureSampleParameter2D {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionTextureSample_Data UMaterialExpressionTextureSample;
	struct UMaterialExpressionTextureSampleParameter_Data UMaterialExpressionTextureSampleParameter;
	struct UMaterialExpressionTextureSampleParameter2D_Data UMaterialExpressionTextureSampleParameter2D;
};

// 0x81 
struct UMaterialExpressionAntialiasedTextureMask_Data {
	// Last Offset: 0x7C
	float Threshold; // 0x7C (0x4)
	unsigned char Channel; // 0x80 (0x1) (Enum = ETextureColorChannel)
};

struct UMaterialExpressionAntialiasedTextureMask {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionTextureSample_Data UMaterialExpressionTextureSample;
	struct UMaterialExpressionTextureSampleParameter_Data UMaterialExpressionTextureSampleParameter;
	struct UMaterialExpressionTextureSampleParameter2D_Data UMaterialExpressionTextureSampleParameter2D;
	struct UMaterialExpressionAntialiasedTextureMask_Data UMaterialExpressionAntialiasedTextureMask;
};

// 0x7C 
struct UMaterialExpressionTextureSampleParameterMeshSubUV_Data {
	// Last Offset: 0x7C
};

struct UMaterialExpressionTextureSampleParameterMeshSubUV {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionTextureSample_Data UMaterialExpressionTextureSample;
	struct UMaterialExpressionTextureSampleParameter_Data UMaterialExpressionTextureSampleParameter;
	struct UMaterialExpressionTextureSampleParameter2D_Data UMaterialExpressionTextureSampleParameter2D;
	struct UMaterialExpressionTextureSampleParameterMeshSubUV_Data UMaterialExpressionTextureSampleParameterMeshSubUV;
};

// 0x7C 
struct UMaterialExpressionTextureSampleParameterMeshSubUVBlend_Data {
	// Last Offset: 0x7C
};

struct UMaterialExpressionTextureSampleParameterMeshSubUVBlend {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionTextureSample_Data UMaterialExpressionTextureSample;
	struct UMaterialExpressionTextureSampleParameter_Data UMaterialExpressionTextureSampleParameter;
	struct UMaterialExpressionTextureSampleParameter2D_Data UMaterialExpressionTextureSampleParameter2D;
	struct UMaterialExpressionTextureSampleParameterMeshSubUV_Data UMaterialExpressionTextureSampleParameterMeshSubUV;
	struct UMaterialExpressionTextureSampleParameterMeshSubUVBlend_Data UMaterialExpressionTextureSampleParameterMeshSubUVBlend;
};

// 0x7C 
struct UMaterialExpressionTextureSampleParameterSubUV_Data {
	// Last Offset: 0x7C
};

struct UMaterialExpressionTextureSampleParameterSubUV {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionTextureSample_Data UMaterialExpressionTextureSample;
	struct UMaterialExpressionTextureSampleParameter_Data UMaterialExpressionTextureSampleParameter;
	struct UMaterialExpressionTextureSampleParameter2D_Data UMaterialExpressionTextureSampleParameter2D;
	struct UMaterialExpressionTextureSampleParameterSubUV_Data UMaterialExpressionTextureSampleParameterSubUV;
};

// 0x7C 
struct UMaterialExpressionTextureSampleParameterCube_Data {
	// Last Offset: 0x7C
};

struct UMaterialExpressionTextureSampleParameterCube {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionTextureSample_Data UMaterialExpressionTextureSample;
	struct UMaterialExpressionTextureSampleParameter_Data UMaterialExpressionTextureSampleParameter;
	struct UMaterialExpressionTextureSampleParameterCube_Data UMaterialExpressionTextureSampleParameterCube;
};

// 0x7C 
struct UMaterialExpressionTextureSampleParameterMovie_Data {
	// Last Offset: 0x7C
};

struct UMaterialExpressionTextureSampleParameterMovie {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionTextureSample_Data UMaterialExpressionTextureSample;
	struct UMaterialExpressionTextureSampleParameter_Data UMaterialExpressionTextureSampleParameter;
	struct UMaterialExpressionTextureSampleParameterMovie_Data UMaterialExpressionTextureSampleParameterMovie;
};

// 0x80 
struct UMaterialExpressionTextureSampleParameterNormal_Data {
	// Last Offset: 0x7C
	struct FPointer InstanceOverride; // 0x7C (0x4)
};

struct UMaterialExpressionTextureSampleParameterNormal {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionTextureSample_Data UMaterialExpressionTextureSample;
	struct UMaterialExpressionTextureSampleParameter_Data UMaterialExpressionTextureSampleParameter;
	struct UMaterialExpressionTextureSampleParameterNormal_Data UMaterialExpressionTextureSampleParameterNormal;
};

// 0xA0 
struct UMaterialExpressionTextureSplat_Data {
	// Last Offset: 0x44
	struct UTexture* BackdropTexture; // 0x44 (0x4)
	struct UTexture* OverlayTexture; // 0x48 (0x4)
	struct FExpressionInput UVs; // 0x4C (0x1C)
	struct FExpressionInput Offset; // 0x68 (0x1C)
	struct FExpressionInput Scale; // 0x84 (0x1C)
};

struct UMaterialExpressionTextureSplat {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionTextureSplat_Data UMaterialExpressionTextureSplat;
};

// 0x48 
struct UMaterialExpressionTime_Data {
	// Last Offset: 0x44
	BOOL bIgnorePause :1 ; // 0x44 (0x4)
	const unsigned long: 0;
};

struct UMaterialExpressionTime {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionTime_Data UMaterialExpressionTime;
};

// 0x62 
struct UMaterialExpressionTransform_Data {
	// Last Offset: 0x44
	struct FExpressionInput Input; // 0x44 (0x1C)
	unsigned char TransformSourceType; // 0x60 (0x1) (Enum = EMaterialVectorCoordTransformSource)
	unsigned char TransformType; // 0x61 (0x1) (Enum = EMaterialVectorCoordTransform)
};

struct UMaterialExpressionTransform {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionTransform_Data UMaterialExpressionTransform;
};

// 0x61 
struct UMaterialExpressionTransformPosition_Data {
	// Last Offset: 0x44
	struct FExpressionInput Input; // 0x44 (0x1C)
	unsigned char TransformType; // 0x60 (0x1) (Enum = EMaterialPositionTransform)
};

struct UMaterialExpressionTransformPosition {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionTransformPosition_Data UMaterialExpressionTransformPosition;
};

// 0x44 
struct UMaterialExpressionTwoSidedSign_Data {
	// Last Offset: 0x44
};

struct UMaterialExpressionTwoSidedSign {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionTwoSidedSign_Data UMaterialExpressionTwoSidedSign;
};

// 0xB5 
struct UMaterialExpressionVectorIf_Data {
	// Last Offset: 0x44
	struct FExpressionInput A; // 0x44 (0x1C)
	struct FExpressionInput B; // 0x60 (0x1C)
	struct FExpressionInput IfTrue; // 0x7C (0x1C)
	struct FExpressionInput IfFalse; // 0x98 (0x1C)
	unsigned char CompareFunc; // 0xB4 (0x1) (Enum = EVectorIfComparator)
};

struct UMaterialExpressionVectorIf {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionVectorIf_Data UMaterialExpressionVectorIf;
};

// 0x44 
struct UMaterialExpressionVertexColor_Data {
	// Last Offset: 0x44
};

struct UMaterialExpressionVertexColor {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionVertexColor_Data UMaterialExpressionVertexColor;
};

// 0x44 
struct UMaterialExpressionWindDirectionAndSpeed_Data {
	// Last Offset: 0x44
};

struct UMaterialExpressionWindDirectionAndSpeed {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionWindDirectionAndSpeed_Data UMaterialExpressionWindDirectionAndSpeed;
};

// 0x44 
struct UMaterialExpressionWorldAmbientColor_Data {
	// Last Offset: 0x44
};

struct UMaterialExpressionWorldAmbientColor {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionWorldAmbientColor_Data UMaterialExpressionWorldAmbientColor;
};

// 0x44 
struct UMaterialExpressionWorldLightColor_Data {
	// Last Offset: 0x44
};

struct UMaterialExpressionWorldLightColor {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionWorldLightColor_Data UMaterialExpressionWorldLightColor;
};

// 0x44 
struct UMaterialExpressionWorldNormal_Data {
	// Last Offset: 0x44
};

struct UMaterialExpressionWorldNormal {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionWorldNormal_Data UMaterialExpressionWorldNormal;
};

// 0x44 
struct UMaterialExpressionWorldPosition_Data {
	// Last Offset: 0x44
};

struct UMaterialExpressionWorldPosition {
	struct UObject_Data UObject;
	struct UMaterialExpression_Data UMaterialExpression;
	struct UMaterialExpressionWorldPosition_Data UMaterialExpressionWorldPosition;
};

// 0xA0 
struct UMaterialInstance_Data {
	// Last Offset: 0x4C
	struct UPhysicalMaterial* PhysMaterial; // 0x4C (0x4)
	struct UMaterialInterface* Parent; // 0x50 (0x4)
	struct UTexture2D* PhysMaterialMask; // 0x54 (0x4)
	int PhysMaterialMaskUVChannel; // 0x58 (0x4)
	struct UPhysicalMaterial* BlackPhysicalMaterial; // 0x5C (0x4)
	struct UPhysicalMaterial* WhitePhysicalMaterial; // 0x60 (0x4)
	BOOL bHasStaticPermutationResource :1 ; // 0x64 (0x4)
	BOOL bStaticPermutationDirty :1 ; // 0x64 (0x4)
	BOOL ReentrantFlag :1 ; // 0x64 (0x4)
	BOOL bNeedsMaterialFlattening :1 ; // 0x64 (0x4)
	const unsigned long: 0;
	struct FPointer StaticParameters[2]; // 0x68 (0x8)
	struct FPointer StaticPermutationResources[2]; // 0x70 (0x8)
	struct FPointer Resources[3]; // 0x78 (0xC)
	struct TArray_UTexturePtr ReferencedTextures; // 0x84 (0xC)
	struct FGuid ParentLightingGuid; // 0x90 (0x10)
};

struct UMaterialInstance {
	struct UObject_Data UObject;
	struct USurface_Data USurface;
	struct UMaterialInterface_Data UMaterialInterface;
	struct UMaterialInstance_Data UMaterialInstance;
};

// 0xD0 
struct UMaterialInstanceConstant_Data {
	// Last Offset: 0xA0
	struct TArray_FFontParameterValue FontParameterValues; // 0xA0 (0xC)
	struct TArray_FScalarParameterValue ScalarParameterValues; // 0xAC (0xC)
	struct TArray_FTextureParameterValue TextureParameterValues; // 0xB8 (0xC)
	struct TArray_FVectorParameterValue VectorParameterValues; // 0xC4 (0xC)
};

struct UMaterialInstanceConstant {
	struct UObject_Data UObject;
	struct USurface_Data USurface;
	struct UMaterialInterface_Data UMaterialInterface;
	struct UMaterialInstance_Data UMaterialInstance;
	struct UMaterialInstanceConstant_Data UMaterialInstanceConstant;
};

// 0xD8 
struct UMaterialInstanceTimeVarying_Data {
	// Last Offset: 0xA0
	BOOL bAutoActivateAll :1 ; // 0xA0 (0x4)
	const unsigned long: 0;
	float Duration; // 0xA4 (0x4)
	struct TArray_FFontParameterValueOverTime FontParameterValues; // 0xA8 (0xC)
	struct TArray_FScalarParameterValueOverTime ScalarParameterValues; // 0xB4 (0xC)
	struct TArray_FTextureParameterValueOverTime TextureParameterValues; // 0xC0 (0xC)
	struct TArray_FVectorParameterValueOverTime VectorParameterValues; // 0xCC (0xC)
};

struct UMaterialInstanceTimeVarying {
	struct UObject_Data UObject;
	struct USurface_Data USurface;
	struct UMaterialInterface_Data UMaterialInterface;
	struct UMaterialInstance_Data UMaterialInstance;
	struct UMaterialInstanceTimeVarying_Data UMaterialInstanceTimeVarying;
};

// 0x194 
struct AEmitter_Data {
	// Last Offset: 0x188
	struct UParticleSystemComponent* ParticleSystemComponent; // 0x188 (0x4)
	struct UDynamicLightEnvironmentComponent* LightEnvironment; // 0x18C (0x4)
	BOOL bDestroyOnSystemFinish :1 ; // 0x190 (0x4)
	BOOL bPostUpdateTickGroup :1 ; // 0x190 (0x4)
	BOOL bAudioEnabled :1 ; // 0x190 (0x4)
	BOOL bCurrentlyActive :1 ; // 0x190 (0x4)
	const unsigned long: 0;
};

struct AEmitter {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AEmitter_Data AEmitter;
};

// 0x1B8 
struct AEmitterCameraLensEffectBase_Data {
	// Last Offset: 0x194
	struct UParticleSystem* PS_CameraEffect; // 0x194 (0x4)
	struct UParticleSystem* PS_CameraEffectNonExtremeContent; // 0x198 (0x4)
	float BaseFOV; // 0x19C (0x4)
	float DistFromCamera; // 0x1A0 (0x4)
	BOOL bAllowMultipleInstances :1 ; // 0x1A4 (0x4)
	const unsigned long: 0;
	struct TArray_UClassPtr EmittersToTreatAsSame; // 0x1A8 (0xC)
	struct ACamera* BaseCamera; // 0x1B4 (0x4)
};

struct AEmitterCameraLensEffectBase {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AEmitter_Data AEmitter;
	struct AEmitterCameraLensEffectBase_Data AEmitterCameraLensEffectBase;
};

// 0x188 
struct AParticleEventManager_Data {
	// Last Offset: 0x188
};

struct AParticleEventManager {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AParticleEventManager_Data AParticleEventManager;
};

// 0x324  (Alignment = 16)
struct UParticleSystemComponent_Data {
	// Last Offset: 0x210
	struct UParticleSystem* Template; // 0x210 (0x4)
	struct UClass* LightEnvironmentClass; // 0x214 (0x4)
	struct AActor* LightEnvironmentSharedInstigator; // 0x218 (0x4)
	int MaxLightEnvironmentPooledReuses; // 0x21C (0x4)
	struct TArray_FPointer EmitterInstances; // 0x220 (0xC)
	struct TArray_UStaticMeshComponentPtr SMComponents; // 0x22C (0xC)
	struct TArray_UMaterialInterfacePtr SMMaterialInterfaces; // 0x238 (0xC)
	struct TArray_USkeletalMeshComponentPtr SkelMeshComponents; // 0x244 (0xC)
	struct TArray_FViewParticleEmitterInstanceMotionBlurInfo ViewMBInfoArray; // 0x250 (0xC)
	BOOL bFullResolution :1 ; // 0x25C (0x4)
	BOOL bAutoActivate :1 ; // 0x25C (0x4)
	BOOL bWasCompleted :1 ; // 0x25C (0x4)
	BOOL bSuppressSpawning :1 ; // 0x25C (0x4)
	BOOL bWasDeactivated :1 ; // 0x25C (0x4)
	BOOL bResetOnDetach :1 ; // 0x25C (0x4)
	BOOL bUpdateOnDedicatedServer :1 ; // 0x25C (0x4)
	BOOL bJustAttached :1 ; // 0x25C (0x4)
	BOOL bIsActive :1 ; // 0x25C (0x4)
	BOOL bHasBeenActivated :1 ; // 0x25C (0x4)
	BOOL bWarmingUp :1 ; // 0x25C (0x4)
	BOOL bIsCachedInPool :1 ; // 0x25C (0x4)
	BOOL bCanBeReclaimedByPool :1 ; // 0x25C (0x4)
	BOOL bOverrideLODMethod :1 ; // 0x25C (0x4)
	BOOL bSkipUpdateDynamicDataDuringTick :1 ; // 0x25C (0x4)
	BOOL bSkipBoundsUpdate :1 ; // 0x25C (0x4)
	BOOL bUpdateComponentInTick :1 ; // 0x25C (0x4)
	BOOL bDeferredBeamUpdate :1 ; // 0x25C (0x4)
	BOOL bIgnoreCollision :1 ; // 0x25C (0x4)
	BOOL bForcedInActive :1 ; // 0x25C (0x4)
	BOOL bIsWarmingUp :1 ; // 0x25C (0x4)
	BOOL bIsViewRelevanceDirty :1 ; // 0x25C (0x4)
	BOOL bRecacheViewRelevance :1 ; // 0x25C (0x4)
	BOOL bLODUpdatePending :1 ; // 0x25C (0x4)
	BOOL bSkipSpawnCountCheck :1 ; // 0x25C (0x4)
	BOOL AudioEnabled :1 ; // 0x25C (0x4)
	BOOL bStartEventPlayed :1 ; // 0x25C (0x4)
	BOOL bCheckForKillWhileIdle :1 ; // 0x25C (0x4)
	const unsigned long: 0;
	struct TArray_FParticleSysParam InstanceParameters; // 0x260 (0xC)
	struct FVector OldPosition; // 0x26C (0xC)
	struct FVector PartSysVelocity; // 0x278 (0xC)
	float WarmupTime; // 0x284 (0x4)
	int LODLevel; // 0x288 (0x4)
	float SecondsBeforeInactive; // 0x28C (0x4)
	float TimeSinceLastForceUpdateTransform; // 0x290 (0x4)
	float MaxTimeBeforeForceUpdateTransform; // 0x294 (0x4)
	float AccumTickTime; // 0x298 (0x4)
	unsigned char LODMethod; // 0x29C (0x1) (Enum = ParticleSystemLODMethod)
	unsigned char ReplayState; // 0x29D (0x1) (Enum = ParticleReplayState)
	const unsigned char Unknown1[0x2]; // 0x29E (0x2) > LAST OFFSET
	struct TArray_FMaterialViewRelevance CachedViewRelevanceFlags; // 0x2A0 (0xC)
	struct TArray_UParticleSystemReplayPtr ReplayClips; // 0x2AC (0xC)
	int ReplayClipIDNumber; // 0x2B8 (0x4)
	int ReplayFrameIndex; // 0x2BC (0x4)
	float AccumLODDistanceCheckTime; // 0x2C0 (0x4)
	struct TArray_FParticleEventSpawnData SpawnEvents; // 0x2C4 (0xC)
	struct TArray_FParticleEventDeathData DeathEvents; // 0x2D0 (0xC)
	struct TArray_FParticleEventCollideData CollisionEvents; // 0x2DC (0xC)
	struct TArray_FParticleEventTraceData TraceEvents; // 0x2E8 (0xC)
	struct TArray_FParticleEventKismetData KismetEvents; // 0x2F4 (0xC)
	struct FPointer ReleaseResourcesFence; // 0x300 (0x4)
	float CustomTimeDilation; // 0x304 (0x4)
	float EmitterDelay; // 0x308 (0x4)
	float AudioEventDelay; // 0x30C (0x4)
	struct FAkPlayingInfo LoopingAkPlayingInfo; // 0x310 (0x8)
	struct FScriptDelegate __OnSystemFinished__Delegate; // 0x318 (0xC)
};

struct UParticleSystemComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UParticleSystemComponent_Data UParticleSystemComponent;
};

// 0x70 
struct UDistributionFloatParticleParameter_Data {
	// Last Offset: 0x70
};

struct UDistributionFloatParticleParameter {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UDistributionFloat_Data UDistributionFloat;
	struct UDistributionFloatConstant_Data UDistributionFloatConstant;
	struct UDistributionFloatParameterBase_Data UDistributionFloatParameterBase;
	struct UDistributionFloatParticleParameter_Data UDistributionFloatParticleParameter;
};

// 0xA0 
struct UDistributionVectorParticleParameter_Data {
	// Last Offset: 0xA0
};

struct UDistributionVectorParticleParameter {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UDistributionVector_Data UDistributionVector;
	struct UDistributionVectorConstant_Data UDistributionVectorConstant;
	struct UDistributionVectorParameterBase_Data UDistributionVectorParameterBase;
	struct UDistributionVectorParticleParameter_Data UDistributionVectorParticleParameter;
};

// 0x68 
struct UParticleEmitter_Data {
	// Last Offset: 0x3C
	struct FName EmitterName; // 0x3C (0x8)
	int SubUVDataOffset; // 0x44 (0x4)
	unsigned char EmitterRenderMode; // 0x48 (0x1) (Enum = EEmitterRenderMode)
	const unsigned char Unknown1[0x3]; // 0x49 (0x3) > LAST OFFSET
	struct TArray_UParticleLODLevelPtr LODLevels; // 0x4C (0xC)
	BOOL ConvertedModules :1 ; // 0x58 (0x4)
	BOOL bCollapsed :1 ; // 0x58 (0x4)
	BOOL bIsSoloing :1 ; // 0x58 (0x4)
	BOOL bCookedOut :1 ; // 0x58 (0x4)
	const unsigned long: 0;
	int PeakActiveParticles; // 0x5C (0x4)
	int InitialAllocationCount; // 0x60 (0x4)
	float MediumDetailSpawnRateScale; // 0x64 (0x4)
};

struct UParticleEmitter {
	struct UObject_Data UObject;
	struct UParticleEmitter_Data UParticleEmitter;
};

// 0x68 
struct UParticleSpriteEmitter_Data {
	// Last Offset: 0x68
};

struct UParticleSpriteEmitter {
	struct UObject_Data UObject;
	struct UParticleEmitter_Data UParticleEmitter;
	struct UParticleSpriteEmitter_Data UParticleSpriteEmitter;
};

// 0xA0 
struct UParticleLODLevel_Data {
	// Last Offset: 0x3C
	int Level; // 0x3C (0x4)
	BOOL bEnabled :1 ; // 0x40 (0x4)
	BOOL ConvertedModules :1 ; // 0x40 (0x4)
	const unsigned long: 0;
	struct UParticleModuleRequired* RequiredModule; // 0x44 (0x4)
	struct TArray_UParticleModulePtr Modules; // 0x48 (0xC)
	struct UParticleModule* TypeDataModule; // 0x54 (0x4)
	struct UParticleModuleSpawn* SpawnModule; // 0x58 (0x4)
	struct UParticleModuleEventGenerator* EventGenerator; // 0x5C (0x4)
	struct TArray_UParticleModuleSpawnBasePtr SpawningModules; // 0x60 (0xC)
	struct TArray_UParticleModulePtr SpawnModules; // 0x6C (0xC)
	struct TArray_UParticleModulePtr UpdateModules; // 0x78 (0xC)
	struct TArray_UParticleModuleOrbitPtr OrbitModules; // 0x84 (0xC)
	struct TArray_UParticleModuleEventReceiverBasePtr EventReceiverModules; // 0x90 (0xC)
	int PeakActiveParticles; // 0x9C (0x4)
};

struct UParticleLODLevel {
	struct UObject_Data UObject;
	struct UParticleLODLevel_Data UParticleLODLevel;
};

// 0x41 
struct UParticleModule_Data {
	// Last Offset: 0x3C
	BOOL bSpawnModule :1 ; // 0x3C (0x4)
	BOOL bUpdateModule :1 ; // 0x3C (0x4)
	BOOL bFinalUpdateModule :1 ; // 0x3C (0x4)
	BOOL bCurvesAsColor :1 ; // 0x3C (0x4)
	BOOL b3DDrawMode :1 ; // 0x3C (0x4)
	BOOL bSupported3DDrawMode :1 ; // 0x3C (0x4)
	BOOL bEnabled :1 ; // 0x3C (0x4)
	BOOL bEditable :1 ; // 0x3C (0x4)
	BOOL LODDuplicate :1 ; // 0x3C (0x4)
	BOOL bSupportsRandomSeed :1 ; // 0x3C (0x4)
	BOOL bRequiresLoopingNotification :1 ; // 0x3C (0x4)
	const unsigned long: 0;
	unsigned char LODValidity; // 0x40 (0x1)
};

struct UParticleModule {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
};

// 0x48 
struct UParticleModuleAccelerationBase_Data {
	// Last Offset: 0x44
	BOOL bAlwaysInWorldSpace :1 ; // 0x44 (0x4)
	const unsigned long: 0;
};

struct UParticleModuleAccelerationBase {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleAccelerationBase_Data UParticleModuleAccelerationBase;
};

// 0x68 
struct UParticleModuleAcceleration_Data {
	// Last Offset: 0x48
	struct FRawDistributionVector Acceleration; // 0x48 (0x1C)
	BOOL bApplyOwnerScale :1 ; // 0x64 (0x4)
	const unsigned long: 0;
};

struct UParticleModuleAcceleration {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleAccelerationBase_Data UParticleModuleAccelerationBase;
	struct UParticleModuleAcceleration_Data UParticleModuleAcceleration;
};

// 0x64 
struct UParticleModuleAccelerationOverLifetime_Data {
	// Last Offset: 0x48
	struct FRawDistributionVector AccelOverLife; // 0x48 (0x1C)
};

struct UParticleModuleAccelerationOverLifetime {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleAccelerationBase_Data UParticleModuleAccelerationBase;
	struct UParticleModuleAccelerationOverLifetime_Data UParticleModuleAccelerationOverLifetime;
};

// 0x44 
struct UParticleModuleAttractorBase_Data {
	// Last Offset: 0x44
};

struct UParticleModuleAttractorBase {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleAttractorBase_Data UParticleModuleAttractorBase;
};

// 0x94 
struct UParticleModuleAttractorLine_Data {
	// Last Offset: 0x44
	struct FVector EndPoint0; // 0x44 (0xC)
	struct FVector EndPoint1; // 0x50 (0xC)
	struct FRawDistributionFloat Range; // 0x5C (0x1C)
	struct FRawDistributionFloat Strength; // 0x78 (0x1C)
};

struct UParticleModuleAttractorLine {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleAttractorBase_Data UParticleModuleAttractorBase;
	struct UParticleModuleAttractorLine_Data UParticleModuleAttractorLine;
};

// 0x90 
struct UParticleModuleAttractorParticle_Data {
	// Last Offset: 0x44
	struct FName EmitterName; // 0x44 (0x8)
	struct FRawDistributionFloat Range; // 0x4C (0x1C)
	BOOL bStrengthByDistance :1 ; // 0x68 (0x4)
	BOOL bAffectBaseVelocity :1 ; // 0x68 (0x4)
	BOOL bRenewSource :1 ; // 0x68 (0x4)
	BOOL bInheritSourceVel :1 ; // 0x68 (0x4)
	const unsigned long: 0;
	struct FRawDistributionFloat Strength; // 0x6C (0x1C)
	unsigned char SelectionMethod; // 0x88 (0x1) (Enum = EAttractorParticleSelectionMethod)
	const unsigned char Unknown1[0x3]; // 0x89 (0x3) > LAST OFFSET
	int LastSelIndex; // 0x8C (0x4)
};

struct UParticleModuleAttractorParticle {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleAttractorBase_Data UParticleModuleAttractorBase;
	struct UParticleModuleAttractorParticle_Data UParticleModuleAttractorParticle;
};

// 0x9C 
struct UParticleModuleAttractorPoint_Data {
	// Last Offset: 0x44
	struct FRawDistributionVector Position; // 0x44 (0x1C)
	struct FRawDistributionFloat Range; // 0x60 (0x1C)
	struct FRawDistributionFloat Strength; // 0x7C (0x1C)
	BOOL StrengthByDistance :1 ; // 0x98 (0x4)
	BOOL bAffectBaseVelocity :1 ; // 0x98 (0x4)
	BOOL bOverrideVelocity :1 ; // 0x98 (0x4)
	BOOL bUseWorldSpacePosition :1 ; // 0x98 (0x4)
	const unsigned long: 0;
};

struct UParticleModuleAttractorPoint {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleAttractorBase_Data UParticleModuleAttractorBase;
	struct UParticleModuleAttractorPoint_Data UParticleModuleAttractorPoint;
};

// 0x44 
struct UParticleModuleBeamBase_Data {
	// Last Offset: 0x44
};

struct UParticleModuleBeamBase {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleBeamBase_Data UParticleModuleBeamBase;
};

// 0xAC 
struct UParticleModuleBeamModifier_Data {
	// Last Offset: 0x44
	unsigned char ModifierType; // 0x44 (0x1) (Enum = BeamModifierType)
	const unsigned char Unknown1[0x3]; // 0x45 (0x3) > LAST OFFSET
	struct FBeamModifierOptions PositionOptions; // 0x48 (0x4)
	struct FRawDistributionVector Position; // 0x4C (0x1C)
	struct FBeamModifierOptions TangentOptions; // 0x68 (0x4)
	struct FRawDistributionVector Tangent; // 0x6C (0x1C)
	BOOL bAbsoluteTangent :1 ; // 0x88 (0x4)
	const unsigned long: 0;
	struct FBeamModifierOptions StrengthOptions; // 0x8C (0x4)
	struct FRawDistributionFloat Strength; // 0x90 (0x1C)
};

struct UParticleModuleBeamModifier {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleBeamBase_Data UParticleModuleBeamBase;
	struct UParticleModuleBeamModifier_Data UParticleModuleBeamModifier;
};

// 0xF0 
struct UParticleModuleBeamNoise_Data {
	// Last Offset: 0x44
	BOOL bLowFreq_Enabled :1 ; // 0x44 (0x4)
	BOOL bNRScaleEmitterTime :1 ; // 0x44 (0x4)
	BOOL bSmooth :1 ; // 0x44 (0x4)
	BOOL bNoiseLock :1 ; // 0x44 (0x4)
	BOOL bOscillate :1 ; // 0x44 (0x4)
	BOOL bUseNoiseTangents :1 ; // 0x44 (0x4)
	BOOL bTargetNoise :1 ; // 0x44 (0x4)
	BOOL bApplyNoiseScale :1 ; // 0x44 (0x4)
	const unsigned long: 0;
	int Frequency; // 0x48 (0x4)
	int Frequency_LowRange; // 0x4C (0x4)
	struct FRawDistributionVector NoiseRange; // 0x50 (0x1C)
	struct FRawDistributionFloat NoiseRangeScale; // 0x6C (0x1C)
	struct FRawDistributionVector NoiseSpeed; // 0x88 (0x1C)
	float NoiseLockRadius; // 0xA4 (0x4)
	float NoiseLockTime; // 0xA8 (0x4)
	float NoiseTension; // 0xAC (0x4)
	struct FRawDistributionFloat NoiseTangentStrength; // 0xB0 (0x1C)
	int NoiseTessellation; // 0xCC (0x4)
	float FrequencyDistance; // 0xD0 (0x4)
	struct FRawDistributionFloat NoiseScale; // 0xD4 (0x1C)
};

struct UParticleModuleBeamNoise {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleBeamBase_Data UParticleModuleBeamBase;
	struct UParticleModuleBeamNoise_Data UParticleModuleBeamNoise;
};

// 0xA8 
struct UParticleModuleBeamSource_Data {
	// Last Offset: 0x44
	unsigned char SourceMethod; // 0x44 (0x1) (Enum = Beam2SourceTargetMethod)
	unsigned char SourceTangentMethod; // 0x45 (0x1) (Enum = Beam2SourceTargetTangentMethod)
	const unsigned char Unknown1[0x2]; // 0x46 (0x2) > LAST OFFSET
	struct FName SourceName; // 0x48 (0x8)
	BOOL bSourceAbsolute :1 ; // 0x50 (0x4)
	BOOL bLockSource :1 ; // 0x50 (0x4)
	BOOL bLockSourceTangent :1 ; // 0x50 (0x4)
	BOOL bLockSourceStength :1 ; // 0x50 (0x4)
	const unsigned long: 0;
	struct FRawDistributionVector Source; // 0x54 (0x1C)
	struct FRawDistributionVector SourceTangent; // 0x70 (0x1C)
	struct FRawDistributionFloat SourceStrength; // 0x8C (0x1C)
};

struct UParticleModuleBeamSource {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleBeamBase_Data UParticleModuleBeamBase;
	struct UParticleModuleBeamSource_Data UParticleModuleBeamSource;
};

// 0xAC 
struct UParticleModuleBeamTarget_Data {
	// Last Offset: 0x44
	unsigned char TargetMethod; // 0x44 (0x1) (Enum = Beam2SourceTargetMethod)
	unsigned char TargetTangentMethod; // 0x45 (0x1) (Enum = Beam2SourceTargetTangentMethod)
	const unsigned char Unknown1[0x2]; // 0x46 (0x2) > LAST OFFSET
	struct FName TargetName; // 0x48 (0x8)
	struct FRawDistributionVector Target; // 0x50 (0x1C)
	BOOL bTargetAbsolute :1 ; // 0x6C (0x4)
	BOOL bLockTarget :1 ; // 0x6C (0x4)
	BOOL bLockTargetTangent :1 ; // 0x6C (0x4)
	BOOL bLockTargetStength :1 ; // 0x6C (0x4)
	const unsigned long: 0;
	struct FRawDistributionVector TargetTangent; // 0x70 (0x1C)
	struct FRawDistributionFloat TargetStrength; // 0x8C (0x1C)
	float LockRadius; // 0xA8 (0x4)
};

struct UParticleModuleBeamTarget {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleBeamBase_Data UParticleModuleBeamBase;
	struct UParticleModuleBeamTarget_Data UParticleModuleBeamTarget;
};

// 0xDC 
struct UParticleModuleBeamTrace_Data {
	// Last Offset: 0xAC
	struct FVector TraceExtent; // 0xAC (0xC)
	struct FRotator TraceRotation; // 0xB8 (0xC)
	float TraceMaxDistance; // 0xC4 (0x4)
	float UpdateDelay; // 0xC8 (0x4)
	int MaxTraceEvents; // 0xCC (0x4)
	BOOL bTraceWorld :1 ; // 0xD0 (0x4)
	BOOL bTraceActors :1 ; // 0xD0 (0x4)
	BOOL bTraceBlockers :1 ; // 0xD0 (0x4)
	BOOL bTraceMaterials :1 ; // 0xD0 (0x4)
	BOOL bTraceProjectiles :1 ; // 0xD0 (0x4)
	BOOL bTracePhysicsVolumes :1 ; // 0xD0 (0x4)
	BOOL bTraceComplexCollision :1 ; // 0xD0 (0x4)
	const unsigned long: 0;
	float LastDistance; // 0xD4 (0x4)
	float LastUpdateTime; // 0xD8 (0x4)
};

struct UParticleModuleBeamTrace {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleBeamBase_Data UParticleModuleBeamBase;
	struct UParticleModuleBeamTarget_Data UParticleModuleBeamTarget;
	struct UParticleModuleBeamTrace_Data UParticleModuleBeamTrace;
};

// 0x44 
struct UParticleModuleCameraBase_Data {
	// Last Offset: 0x44
};

struct UParticleModuleCameraBase {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleCameraBase_Data UParticleModuleCameraBase;
};

// 0x65 
struct UParticleModuleCameraOffset_Data {
	// Last Offset: 0x44
	struct FRawDistributionFloat CameraOffset; // 0x44 (0x1C)
	BOOL bSpawnTimeOnly :1 ; // 0x60 (0x4)
	const unsigned long: 0;
	unsigned char UpdateMethod; // 0x64 (0x1) (Enum = EParticleCameraOffsetUpdateMethod)
};

struct UParticleModuleCameraOffset {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleCameraBase_Data UParticleModuleCameraBase;
	struct UParticleModuleCameraOffset_Data UParticleModuleCameraOffset;
};

// 0x44 
struct UParticleModuleCollisionBase_Data {
	// Last Offset: 0x44
};

struct UParticleModuleCollisionBase {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleCollisionBase_Data UParticleModuleCollisionBase;
};

// 0xE4 
struct UParticleModuleCollision_Data {
	// Last Offset: 0x44
	struct FRawDistributionVector DampingFactor; // 0x44 (0x1C)
	struct FRawDistributionVector DampingFactorRotation; // 0x60 (0x1C)
	struct FRawDistributionFloat MaxCollisions; // 0x7C (0x1C)
	unsigned char CollisionCompletionOption; // 0x98 (0x1) (Enum = EParticleCollisionComplete)
	const unsigned char Unknown1[0x3]; // 0x99 (0x3) > LAST OFFSET
	BOOL bApplyPhysics :1 ; // 0x9C (0x4)
	BOOL bPawnsDoNotDecrementCount :1 ; // 0x9C (0x4)
	BOOL bOnlyVerticalNormalsDecrementCount :1 ; // 0x9C (0x4)
	BOOL bDropDetail :1 ; // 0x9C (0x4)
	BOOL bCollideOnlyIfVisible :1 ; // 0x9C (0x4)
	const unsigned long: 0;
	struct FRawDistributionFloat ParticleMass; // 0xA0 (0x1C)
	float DirScalar; // 0xBC (0x4)
	float VerticalFudgeFactor; // 0xC0 (0x4)
	struct FRawDistributionFloat DelayAmount; // 0xC4 (0x1C)
	float MaxCollisionDistance; // 0xE0 (0x4)
};

struct UParticleModuleCollision {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleCollisionBase_Data UParticleModuleCollisionBase;
	struct UParticleModuleCollision_Data UParticleModuleCollision;
};

// 0xF4 
struct UParticleModuleCollisionActor_Data {
	// Last Offset: 0xE4
	struct TArray_FName ActorsToCollideWith; // 0xE4 (0xC)
	BOOL bCheckPawnCollisions :1 ; // 0xF0 (0x4)
	const unsigned long: 0;
};

struct UParticleModuleCollisionActor {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleCollisionBase_Data UParticleModuleCollisionBase;
	struct UParticleModuleCollision_Data UParticleModuleCollision;
	struct UParticleModuleCollisionActor_Data UParticleModuleCollisionActor;
};

// 0x44 
struct UParticleModuleColorBase_Data {
	// Last Offset: 0x44
};

struct UParticleModuleColorBase {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleColorBase_Data UParticleModuleColorBase;
};

// 0x80 
struct UParticleModuleColor_Data {
	// Last Offset: 0x44
	struct FRawDistributionVector StartColor; // 0x44 (0x1C)
	struct FRawDistributionFloat StartAlpha; // 0x60 (0x1C)
	BOOL bClampAlpha :1 ; // 0x7C (0x4)
	const unsigned long: 0;
};

struct UParticleModuleColor {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleColorBase_Data UParticleModuleColorBase;
	struct UParticleModuleColor_Data UParticleModuleColor;
};

// 0x98 
struct UParticleModuleColor_Seeded_Data {
	// Last Offset: 0x80
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x80 (0x18)
};

struct UParticleModuleColor_Seeded {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleColorBase_Data UParticleModuleColorBase;
	struct UParticleModuleColor_Data UParticleModuleColor;
	struct UParticleModuleColor_Seeded_Data UParticleModuleColor_Seeded;
};

// 0x50 
struct UParticleModuleColorByParameter_Data {
	// Last Offset: 0x44
	struct FName ColorParam; // 0x44 (0x8)
	struct FColor DefaultColor; // 0x4C (0x4)
};

struct UParticleModuleColorByParameter {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleColorBase_Data UParticleModuleColorBase;
	struct UParticleModuleColorByParameter_Data UParticleModuleColorByParameter;
};

// 0x80 
struct UParticleModuleColorOverLife_Data {
	// Last Offset: 0x44
	struct FRawDistributionVector ColorOverLife; // 0x44 (0x1C)
	struct FRawDistributionFloat AlphaOverLife; // 0x60 (0x1C)
	BOOL bClampAlpha :1 ; // 0x7C (0x4)
	const unsigned long: 0;
};

struct UParticleModuleColorOverLife {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleColorBase_Data UParticleModuleColorBase;
	struct UParticleModuleColorOverLife_Data UParticleModuleColorOverLife;
};

// 0x7C 
struct UParticleModuleColorScaleOverDensity_Data {
	// Last Offset: 0x44
	struct FRawDistributionVector ColorScaleOverDensity; // 0x44 (0x1C)
	struct FRawDistributionFloat AlphaScaleOverDensity; // 0x60 (0x1C)
};

struct UParticleModuleColorScaleOverDensity {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleColorBase_Data UParticleModuleColorBase;
	struct UParticleModuleColorScaleOverDensity_Data UParticleModuleColorScaleOverDensity;
};

// 0x80 
struct UParticleModuleColorScaleOverLife_Data {
	// Last Offset: 0x44
	struct FRawDistributionVector ColorScaleOverLife; // 0x44 (0x1C)
	struct FRawDistributionFloat AlphaScaleOverLife; // 0x60 (0x1C)
	BOOL bEmitterTime :1 ; // 0x7C (0x4)
	const unsigned long: 0;
};

struct UParticleModuleColorScaleOverLife {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleColorBase_Data UParticleModuleColorBase;
	struct UParticleModuleColorScaleOverLife_Data UParticleModuleColorScaleOverLife;
};

// 0x44 
struct UParticleModuleEventBase_Data {
	// Last Offset: 0x44
};

struct UParticleModuleEventBase {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleEventBase_Data UParticleModuleEventBase;
};

// 0x50 
struct UParticleModuleEventGenerator_Data {
	// Last Offset: 0x44
	struct TArray_FParticleEvent_GenerateInfo Events; // 0x44 (0xC)
};

struct UParticleModuleEventGenerator {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleEventBase_Data UParticleModuleEventBase;
	struct UParticleModuleEventGenerator_Data UParticleModuleEventGenerator;
};

// 0x80 
struct UParticleModuleEventGeneratorDecal_Data {
	// Last Offset: 0x50
	struct TArray_UMaterialInterfacePtr DecalMaterials; // 0x50 (0xC)
	float DecalWidth; // 0x5C (0x4)
	float DecalHeight; // 0x60 (0x4)
	float SizeVariance; // 0x64 (0x4)
	float DecalThickness; // 0x68 (0x4)
	float DecalLifeSpan; // 0x6C (0x4)
	float DecalDepthBias; // 0x70 (0x4)
	struct FVector2D DecalBlendRange; // 0x74 (0x8)
	BOOL bNoClip :1 ; // 0x7C (0x4)
	BOOL bProjectOnTerrain :1 ; // 0x7C (0x4)
	BOOL bProjectOnSkeletalMeshes :1 ; // 0x7C (0x4)
	const unsigned long: 0;
};

struct UParticleModuleEventGeneratorDecal {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleEventBase_Data UParticleModuleEventBase;
	struct UParticleModuleEventGenerator_Data UParticleModuleEventGenerator;
	struct UParticleModuleEventGeneratorDecal_Data UParticleModuleEventGeneratorDecal;
};

// 0x50 
struct UParticleModuleEventReceiverBase_Data {
	// Last Offset: 0x44
	unsigned char EventGeneratorType; // 0x44 (0x1) (Enum = EParticleEventType)
	const unsigned char Unknown1[0x3]; // 0x45 (0x3) > LAST OFFSET
	struct FName EventName; // 0x48 (0x8)
};

struct UParticleModuleEventReceiverBase {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleEventBase_Data UParticleModuleEventBase;
	struct UParticleModuleEventReceiverBase_Data UParticleModuleEventReceiverBase;
};

// 0x54 
struct UParticleModuleEventReceiverKillParticles_Data {
	// Last Offset: 0x50
	BOOL bStopSpawning :1 ; // 0x50 (0x4)
	const unsigned long: 0;
};

struct UParticleModuleEventReceiverKillParticles {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleEventBase_Data UParticleModuleEventBase;
	struct UParticleModuleEventReceiverBase_Data UParticleModuleEventReceiverBase;
	struct UParticleModuleEventReceiverKillParticles_Data UParticleModuleEventReceiverKillParticles;
};

// 0x8C 
struct UParticleModuleEventReceiverSpawn_Data {
	// Last Offset: 0x50
	struct FRawDistributionFloat SpawnCount; // 0x50 (0x1C)
	BOOL bUseParticleTime :1 ; // 0x6C (0x4)
	BOOL bUsePSysLocation :1 ; // 0x6C (0x4)
	BOOL bInheritVelocity :1 ; // 0x6C (0x4)
	BOOL bInheritRotation :1 ; // 0x6C (0x4)
	const unsigned long: 0;
	struct FRawDistributionVector InheritVelocityScale; // 0x70 (0x1C)
};

struct UParticleModuleEventReceiverSpawn {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleEventBase_Data UParticleModuleEventBase;
	struct UParticleModuleEventReceiverBase_Data UParticleModuleEventReceiverBase;
	struct UParticleModuleEventReceiverSpawn_Data UParticleModuleEventReceiverSpawn;
};

// 0x48 
struct UParticleModuleForceFieldBase_Data {
	// Last Offset: 0x44
	struct UNxForceFieldComponent* ForceField; // 0x44 (0x4)
};

struct UParticleModuleForceFieldBase {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleForceFieldBase_Data UParticleModuleForceFieldBase;
};

// 0x44 
struct UParticleModuleKillBase_Data {
	// Last Offset: 0x44
};

struct UParticleModuleKillBase {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleKillBase_Data UParticleModuleKillBase;
};

// 0x80 
struct UParticleModuleKillBox_Data {
	// Last Offset: 0x44
	struct FRawDistributionVector LowerLeftCorner; // 0x44 (0x1C)
	struct FRawDistributionVector UpperRightCorner; // 0x60 (0x1C)
	BOOL bAbsolute :1 ; // 0x7C (0x4)
	BOOL bKillInside :1 ; // 0x7C (0x4)
	const unsigned long: 0;
};

struct UParticleModuleKillBox {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleKillBase_Data UParticleModuleKillBase;
	struct UParticleModuleKillBox_Data UParticleModuleKillBox;
};

// 0x64 
struct UParticleModuleKillHeight_Data {
	// Last Offset: 0x44
	struct FRawDistributionFloat Height; // 0x44 (0x1C)
	BOOL bAbsolute :1 ; // 0x60 (0x4)
	BOOL bFloor :1 ; // 0x60 (0x4)
	BOOL bApplyPSysScale :1 ; // 0x60 (0x4)
	const unsigned long: 0;
};

struct UParticleModuleKillHeight {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleKillBase_Data UParticleModuleKillBase;
	struct UParticleModuleKillHeight_Data UParticleModuleKillHeight;
};

// 0x44 
struct UParticleModuleLifetimeBase_Data {
	// Last Offset: 0x44
};

struct UParticleModuleLifetimeBase {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleLifetimeBase_Data UParticleModuleLifetimeBase;
};

// 0x60 
struct UParticleModuleLifetime_Data {
	// Last Offset: 0x44
	struct FRawDistributionFloat Lifetime; // 0x44 (0x1C)
};

struct UParticleModuleLifetime {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleLifetimeBase_Data UParticleModuleLifetimeBase;
	struct UParticleModuleLifetime_Data UParticleModuleLifetime;
};

// 0x78 
struct UParticleModuleLifetime_Seeded_Data {
	// Last Offset: 0x60
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x60 (0x18)
};

struct UParticleModuleLifetime_Seeded {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleLifetimeBase_Data UParticleModuleLifetimeBase;
	struct UParticleModuleLifetime_Data UParticleModuleLifetime;
	struct UParticleModuleLifetime_Seeded_Data UParticleModuleLifetime_Seeded;
};

// 0x44 
struct UParticleModuleLocationBase_Data {
	// Last Offset: 0x44
};

struct UParticleModuleLocationBase {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleLocationBase_Data UParticleModuleLocationBase;
};

// 0x60 
struct UParticleModuleLocation_Data {
	// Last Offset: 0x44
	struct FRawDistributionVector StartLocation; // 0x44 (0x1C)
};

struct UParticleModuleLocation {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleLocationBase_Data UParticleModuleLocationBase;
	struct UParticleModuleLocation_Data UParticleModuleLocation;
};

// 0x78 
struct UParticleModuleLocation_Seeded_Data {
	// Last Offset: 0x60
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x60 (0x18)
};

struct UParticleModuleLocation_Seeded {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleLocationBase_Data UParticleModuleLocationBase;
	struct UParticleModuleLocation_Data UParticleModuleLocation;
	struct UParticleModuleLocation_Seeded_Data UParticleModuleLocation_Seeded;
};

// 0x6C 
struct UParticleModuleLocationBoneSocket_Data {
	// Last Offset: 0x44
	unsigned char SourceType; // 0x44 (0x1) (Enum = ELocationBoneSocketSource)
	unsigned char SelectionMethod; // 0x45 (0x1) (Enum = ELocationBoneSocketSelectionMethod)
	const unsigned char Unknown1[0x2]; // 0x46 (0x2) > LAST OFFSET
	struct FVector UniversalOffset; // 0x48 (0xC)
	struct TArray_FLocationBoneSocketInfo SourceLocations; // 0x54 (0xC)
	BOOL bUpdatePositionEachFrame :1 ; // 0x60 (0x4)
	BOOL bOrientMeshEmitters :1 ; // 0x60 (0x4)
	const unsigned long: 0;
	struct FName SkelMeshActorParamName; // 0x64 (0x8)
};

struct UParticleModuleLocationBoneSocket {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleLocationBase_Data UParticleModuleLocationBase;
	struct UParticleModuleLocationBoneSocket_Data UParticleModuleLocationBoneSocket;
};

// 0xB4 
struct UParticleModuleLocationDirect_Data {
	// Last Offset: 0x44
	struct FRawDistributionVector Location; // 0x44 (0x1C)
	struct FRawDistributionVector LocationOffset; // 0x60 (0x1C)
	struct FRawDistributionVector ScaleFactor; // 0x7C (0x1C)
	struct FRawDistributionVector Direction; // 0x98 (0x1C)
};

struct UParticleModuleLocationDirect {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleLocationBase_Data UParticleModuleLocationBase;
	struct UParticleModuleLocationDirect_Data UParticleModuleLocationDirect;
};

// 0x5C 
struct UParticleModuleLocationEmitter_Data {
	// Last Offset: 0x44
	struct FName EmitterName; // 0x44 (0x8)
	unsigned char SelectionMethod; // 0x4C (0x1) (Enum = ELocationEmitterSelectionMethod)
	const unsigned char Unknown1[0x3]; // 0x4D (0x3) > LAST OFFSET
	BOOL InheritSourceVelocity :1 ; // 0x50 (0x4)
	BOOL bInheritSourceRotation :1 ; // 0x50 (0x4)
	const unsigned long: 0;
	float InheritSourceVelocityScale; // 0x54 (0x4)
	float InheritSourceRotationScale; // 0x58 (0x4)
};

struct UParticleModuleLocationEmitter {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleLocationBase_Data UParticleModuleLocationBase;
	struct UParticleModuleLocationEmitter_Data UParticleModuleLocationEmitter;
};

// 0x4C 
struct UParticleModuleLocationEmitterDirect_Data {
	// Last Offset: 0x44
	struct FName EmitterName; // 0x44 (0x8)
};

struct UParticleModuleLocationEmitterDirect {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleLocationBase_Data UParticleModuleLocationBase;
	struct UParticleModuleLocationEmitterDirect_Data UParticleModuleLocationEmitterDirect;
};

// 0x80 
struct UParticleModuleLocationPrimitiveBase_Data {
	// Last Offset: 0x44
	BOOL Positive_X :1 ; // 0x44 (0x4)
	BOOL Positive_Y :1 ; // 0x44 (0x4)
	BOOL Positive_Z :1 ; // 0x44 (0x4)
	BOOL Negative_X :1 ; // 0x44 (0x4)
	BOOL Negative_Y :1 ; // 0x44 (0x4)
	BOOL Negative_Z :1 ; // 0x44 (0x4)
	BOOL SurfaceOnly :1 ; // 0x44 (0x4)
	BOOL Velocity :1 ; // 0x44 (0x4)
	const unsigned long: 0;
	struct FRawDistributionFloat VelocityScale; // 0x48 (0x1C)
	struct FRawDistributionVector StartLocation; // 0x64 (0x1C)
};

struct UParticleModuleLocationPrimitiveBase {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleLocationBase_Data UParticleModuleLocationBase;
	struct UParticleModuleLocationPrimitiveBase_Data UParticleModuleLocationPrimitiveBase;
};

// 0xBD 
struct UParticleModuleLocationPrimitiveCylinder_Data {
	// Last Offset: 0x80
	BOOL RadialVelocity :1 ; // 0x80 (0x4)
	const unsigned long: 0;
	struct FRawDistributionFloat StartRadius; // 0x84 (0x1C)
	struct FRawDistributionFloat StartHeight; // 0xA0 (0x1C)
	unsigned char HeightAxis; // 0xBC (0x1) (Enum = CylinderHeightAxis)
};

struct UParticleModuleLocationPrimitiveCylinder {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleLocationBase_Data UParticleModuleLocationBase;
	struct UParticleModuleLocationPrimitiveBase_Data UParticleModuleLocationPrimitiveBase;
	struct UParticleModuleLocationPrimitiveCylinder_Data UParticleModuleLocationPrimitiveCylinder;
};

// 0xD8 
struct UParticleModuleLocationPrimitiveCylinder_Seeded_Data {
	// Last Offset: 0xC0
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0xC0 (0x18)
};

struct UParticleModuleLocationPrimitiveCylinder_Seeded {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleLocationBase_Data UParticleModuleLocationBase;
	struct UParticleModuleLocationPrimitiveBase_Data UParticleModuleLocationPrimitiveBase;
	struct UParticleModuleLocationPrimitiveCylinder_Data UParticleModuleLocationPrimitiveCylinder;
	struct UParticleModuleLocationPrimitiveCylinder_Seeded_Data UParticleModuleLocationPrimitiveCylinder_Seeded;
};

// 0x9C 
struct UParticleModuleLocationPrimitiveSphere_Data {
	// Last Offset: 0x80
	struct FRawDistributionFloat StartRadius; // 0x80 (0x1C)
};

struct UParticleModuleLocationPrimitiveSphere {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleLocationBase_Data UParticleModuleLocationBase;
	struct UParticleModuleLocationPrimitiveBase_Data UParticleModuleLocationPrimitiveBase;
	struct UParticleModuleLocationPrimitiveSphere_Data UParticleModuleLocationPrimitiveSphere;
};

// 0xB4 
struct UParticleModuleLocationPrimitiveSphere_Seeded_Data {
	// Last Offset: 0x9C
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x9C (0x18)
};

struct UParticleModuleLocationPrimitiveSphere_Seeded {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleLocationBase_Data UParticleModuleLocationBase;
	struct UParticleModuleLocationPrimitiveBase_Data UParticleModuleLocationPrimitiveBase;
	struct UParticleModuleLocationPrimitiveSphere_Data UParticleModuleLocationPrimitiveSphere;
	struct UParticleModuleLocationPrimitiveSphere_Seeded_Data UParticleModuleLocationPrimitiveSphere_Seeded;
};

// 0x8C 
struct UParticleModuleLocationSkelVertSurface_Data {
	// Last Offset: 0x44
	unsigned char SourceType; // 0x44 (0x1) (Enum = ELocationSkelVertSurfaceSource)
	const unsigned char Unknown1[0x3]; // 0x45 (0x3) > LAST OFFSET
	struct FVector UniversalOffset; // 0x48 (0xC)
	BOOL bUpdatePositionEachFrame :1 ; // 0x54 (0x4)
	BOOL bOrientMeshEmitters :1 ; // 0x54 (0x4)
	BOOL bEnforceNormalCheck :1 ; // 0x54 (0x4)
	const unsigned long: 0;
	struct FName SkelMeshActorParamName; // 0x58 (0x8)
	struct TArray_FName ValidAssociatedBones; // 0x60 (0xC)
	struct FVector NormalToCompare; // 0x6C (0xC)
	float NormalCheckToleranceDegrees; // 0x78 (0x4)
	float NormalCheckTolerance; // 0x7C (0x4)
	struct TArray_int ValidMaterialIndices; // 0x80 (0xC)
};

struct UParticleModuleLocationSkelVertSurface {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleLocationBase_Data UParticleModuleLocationBase;
	struct UParticleModuleLocationSkelVertSurface_Data UParticleModuleLocationSkelVertSurface;
};

// 0x60 
struct UParticleModuleSourceMovement_Data {
	// Last Offset: 0x44
	struct FRawDistributionVector SourceMovementScale; // 0x44 (0x1C)
};

struct UParticleModuleSourceMovement {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleLocationBase_Data UParticleModuleLocationBase;
	struct UParticleModuleSourceMovement_Data UParticleModuleSourceMovement;
};

// 0x44 
struct UParticleModuleMaterialBase_Data {
	// Last Offset: 0x44
};

struct UParticleModuleMaterialBase {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleMaterialBase_Data UParticleModuleMaterialBase;
};

// 0x5C 
struct UParticleModuleMaterialByParameter_Data {
	// Last Offset: 0x44
	struct TArray_FName MaterialParameters; // 0x44 (0xC)
	struct TArray_UMaterialInterfacePtr DefaultMaterials; // 0x50 (0xC)
};

struct UParticleModuleMaterialByParameter {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleMaterialBase_Data UParticleModuleMaterialBase;
	struct UParticleModuleMaterialByParameter_Data UParticleModuleMaterialByParameter;
};

// 0x50 
struct UParticleModuleMeshMaterial_Data {
	// Last Offset: 0x44
	struct TArray_UMaterialInterfacePtr MeshMaterials; // 0x44 (0xC)
};

struct UParticleModuleMeshMaterial {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleMaterialBase_Data UParticleModuleMaterialBase;
	struct UParticleModuleMeshMaterial_Data UParticleModuleMeshMaterial;
};

// 0x48 
struct UParticleModuleOrbitBase_Data {
	// Last Offset: 0x44
	BOOL bUseEmitterTime :1 ; // 0x44 (0x4)
	const unsigned long: 0;
};

struct UParticleModuleOrbitBase {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleOrbitBase_Data UParticleModuleOrbitBase;
};

// 0xAC 
struct UParticleModuleOrbit_Data {
	// Last Offset: 0x48
	unsigned char ChainMode; // 0x48 (0x1) (Enum = EOrbitChainMode)
	const unsigned char Unknown1[0x3]; // 0x49 (0x3) > LAST OFFSET
	struct FRawDistributionVector OffsetAmount; // 0x4C (0x1C)
	struct FOrbitOptions OffsetOptions; // 0x68 (0x4)
	struct FRawDistributionVector RotationAmount; // 0x6C (0x1C)
	struct FOrbitOptions RotationOptions; // 0x88 (0x4)
	struct FRawDistributionVector RotationRateAmount; // 0x8C (0x1C)
	struct FOrbitOptions RotationRateOptions; // 0xA8 (0x4)
};

struct UParticleModuleOrbit {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleOrbitBase_Data UParticleModuleOrbitBase;
	struct UParticleModuleOrbit_Data UParticleModuleOrbit;
};

// 0x44 
struct UParticleModuleOrientationBase_Data {
	// Last Offset: 0x44
};

struct UParticleModuleOrientationBase {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleOrientationBase_Data UParticleModuleOrientationBase;
};

// 0x45 
struct UParticleModuleOrientationAxisLock_Data {
	// Last Offset: 0x44
	unsigned char LockAxisFlags; // 0x44 (0x1) (Enum = EParticleAxisLock)
};

struct UParticleModuleOrientationAxisLock {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleOrientationBase_Data UParticleModuleOrientationBase;
	struct UParticleModuleOrientationAxisLock_Data UParticleModuleOrientationAxisLock;
};

// 0x44 
struct UParticleModuleParameterBase_Data {
	// Last Offset: 0x44
};

struct UParticleModuleParameterBase {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleParameterBase_Data UParticleModuleParameterBase;
};

// 0x58 
struct UParticleModuleParameterDynamic_Data {
	// Last Offset: 0x44
	struct TArray_FEmitterDynamicParameter DynamicParams; // 0x44 (0xC)
	int UpdateFlags; // 0x50 (0x4)
	BOOL bUsesVelocity :1 ; // 0x54 (0x4)
	const unsigned long: 0;
};

struct UParticleModuleParameterDynamic {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleParameterBase_Data UParticleModuleParameterBase;
	struct UParticleModuleParameterDynamic_Data UParticleModuleParameterDynamic;
};

// 0x70 
struct UParticleModuleParameterDynamic_Seeded_Data {
	// Last Offset: 0x58
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x58 (0x18)
};

struct UParticleModuleParameterDynamic_Seeded {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleParameterBase_Data UParticleModuleParameterBase;
	struct UParticleModuleParameterDynamic_Data UParticleModuleParameterDynamic;
	struct UParticleModuleParameterDynamic_Seeded_Data UParticleModuleParameterDynamic_Seeded;
};

// 0xC0 
struct UParticleModuleRequired_Data {
	// Last Offset: 0x44
	struct UMaterialInterface* Material; // 0x44 (0x4)
	unsigned char ScreenAlignment; // 0x48 (0x1) (Enum = EParticleScreenAlignment)
	unsigned char SortMode; // 0x49 (0x1) (Enum = EParticleSortMode)
	unsigned char ParticleBurstMethod; // 0x4A (0x1) (Enum = EParticleBurstMethod)
	unsigned char InterpolationMethod; // 0x4B (0x1) (Enum = EParticleSubUVInterpMethod)
	unsigned char EmitterNormalsMode; // 0x4C (0x1) (Enum = EEmitterNormalsMode)
	const unsigned char Unknown1[0x3]; // 0x4D (0x3) > LAST OFFSET
	BOOL bUseLocalSpace :1 ; // 0x50 (0x4)
	BOOL bKillOnDeactivate :1 ; // 0x50 (0x4)
	BOOL bKillOnCompleted :1 ; // 0x50 (0x4)
	BOOL bRequiresSorting :1 ; // 0x50 (0x4)
	BOOL bUseLegacyEmitterTime :1 ; // 0x50 (0x4)
	BOOL bEmitterDurationUseRange :1 ; // 0x50 (0x4)
	BOOL bDurationRecalcEachLoop :1 ; // 0x50 (0x4)
	BOOL bEmitterDelayUseRange :1 ; // 0x50 (0x4)
	BOOL bDelayFirstLoopOnly :1 ; // 0x50 (0x4)
	BOOL bScaleUV :1 ; // 0x50 (0x4)
	BOOL bDirectUV :1 ; // 0x50 (0x4)
	BOOL bUseMaxDrawCount :1 ; // 0x50 (0x4)
	const unsigned long: 0;
	float EmitterDuration; // 0x54 (0x4)
	float EmitterDurationLow; // 0x58 (0x4)
	int EmitterLoops; // 0x5C (0x4)
	struct FRawDistributionFloat SpawnRate; // 0x60 (0x1C)
	struct TArray_FParticleBurst BurstList; // 0x7C (0xC)
	float EmitterDelay; // 0x88 (0x4)
	float EmitterDelayLow; // 0x8C (0x4)
	int SubImages_Horizontal; // 0x90 (0x4)
	int SubImages_Vertical; // 0x94 (0x4)
	float RandomImageTime; // 0x98 (0x4)
	int RandomImageChanges; // 0x9C (0x4)
	int MaxDrawCount; // 0xA0 (0x4)
	float DownsampleThresholdScreenFraction; // 0xA4 (0x4)
	struct FVector NormalsSphereCenter; // 0xA8 (0xC)
	struct FVector NormalsCylinderDirection; // 0xB4 (0xC)
};

struct UParticleModuleRequired {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleRequired_Data UParticleModuleRequired;
};

// 0x44 
struct UParticleModuleRotationBase_Data {
	// Last Offset: 0x44
};

struct UParticleModuleRotationBase {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleRotationBase_Data UParticleModuleRotationBase;
};

// 0x64 
struct UParticleModuleMeshRotation_Data {
	// Last Offset: 0x44
	struct FRawDistributionVector StartRotation; // 0x44 (0x1C)
	BOOL bInheritParent :1 ; // 0x60 (0x4)
	const unsigned long: 0;
};

struct UParticleModuleMeshRotation {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleRotationBase_Data UParticleModuleRotationBase;
	struct UParticleModuleMeshRotation_Data UParticleModuleMeshRotation;
};

// 0x7C 
struct UParticleModuleMeshRotation_Seeded_Data {
	// Last Offset: 0x64
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x64 (0x18)
};

struct UParticleModuleMeshRotation_Seeded {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleRotationBase_Data UParticleModuleRotationBase;
	struct UParticleModuleMeshRotation_Data UParticleModuleMeshRotation;
	struct UParticleModuleMeshRotation_Seeded_Data UParticleModuleMeshRotation_Seeded;
};

// 0x60 
struct UParticleModuleRotation_Data {
	// Last Offset: 0x44
	struct FRawDistributionFloat StartRotation; // 0x44 (0x1C)
};

struct UParticleModuleRotation {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleRotationBase_Data UParticleModuleRotationBase;
	struct UParticleModuleRotation_Data UParticleModuleRotation;
};

// 0x78 
struct UParticleModuleRotation_Seeded_Data {
	// Last Offset: 0x60
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x60 (0x18)
};

struct UParticleModuleRotation_Seeded {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleRotationBase_Data UParticleModuleRotationBase;
	struct UParticleModuleRotation_Data UParticleModuleRotation;
	struct UParticleModuleRotation_Seeded_Data UParticleModuleRotation_Seeded;
};

// 0x64 
struct UParticleModuleRotationOverLifetime_Data {
	// Last Offset: 0x44
	struct FRawDistributionFloat RotationOverLife; // 0x44 (0x1C)
	BOOL Scale :1 ; // 0x60 (0x4)
	BOOL bIncrement :1 ; // 0x60 (0x4)
	BOOL bUseRelativeTime :1 ; // 0x60 (0x4)
	const unsigned long: 0;
};

struct UParticleModuleRotationOverLifetime {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleRotationBase_Data UParticleModuleRotationBase;
	struct UParticleModuleRotationOverLifetime_Data UParticleModuleRotationOverLifetime;
};

// 0x44 
struct UParticleModuleRotationRateBase_Data {
	// Last Offset: 0x44
};

struct UParticleModuleRotationRateBase {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleRotationRateBase_Data UParticleModuleRotationRateBase;
};

// 0x60 
struct UParticleModuleMeshRotationRate_Data {
	// Last Offset: 0x44
	struct FRawDistributionVector StartRotationRate; // 0x44 (0x1C)
};

struct UParticleModuleMeshRotationRate {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleRotationRateBase_Data UParticleModuleRotationRateBase;
	struct UParticleModuleMeshRotationRate_Data UParticleModuleMeshRotationRate;
};

// 0x78 
struct UParticleModuleMeshRotationRate_Seeded_Data {
	// Last Offset: 0x60
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x60 (0x18)
};

struct UParticleModuleMeshRotationRate_Seeded {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleRotationRateBase_Data UParticleModuleRotationRateBase;
	struct UParticleModuleMeshRotationRate_Data UParticleModuleMeshRotationRate;
	struct UParticleModuleMeshRotationRate_Seeded_Data UParticleModuleMeshRotationRate_Seeded;
};

// 0x60 
struct UParticleModuleMeshRotationRateMultiplyLife_Data {
	// Last Offset: 0x44
	struct FRawDistributionVector LifeMultiplier; // 0x44 (0x1C)
};

struct UParticleModuleMeshRotationRateMultiplyLife {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleRotationRateBase_Data UParticleModuleRotationRateBase;
	struct UParticleModuleMeshRotationRateMultiplyLife_Data UParticleModuleMeshRotationRateMultiplyLife;
};

// 0x64 
struct UParticleModuleMeshRotationRateOverLife_Data {
	// Last Offset: 0x44
	struct FRawDistributionVector RotRate; // 0x44 (0x1C)
	BOOL bScaleRotRate :1 ; // 0x60 (0x4)
	const unsigned long: 0;
};

struct UParticleModuleMeshRotationRateOverLife {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleRotationRateBase_Data UParticleModuleRotationRateBase;
	struct UParticleModuleMeshRotationRateOverLife_Data UParticleModuleMeshRotationRateOverLife;
};

// 0x60 
struct UParticleModuleRotationRate_Data {
	// Last Offset: 0x44
	struct FRawDistributionFloat StartRotationRate; // 0x44 (0x1C)
};

struct UParticleModuleRotationRate {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleRotationRateBase_Data UParticleModuleRotationRateBase;
	struct UParticleModuleRotationRate_Data UParticleModuleRotationRate;
};

// 0x78 
struct UParticleModuleRotationRate_Seeded_Data {
	// Last Offset: 0x60
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x60 (0x18)
};

struct UParticleModuleRotationRate_Seeded {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleRotationRateBase_Data UParticleModuleRotationRateBase;
	struct UParticleModuleRotationRate_Data UParticleModuleRotationRate;
	struct UParticleModuleRotationRate_Seeded_Data UParticleModuleRotationRate_Seeded;
};

// 0x60 
struct UParticleModuleRotationRateMultiplyLife_Data {
	// Last Offset: 0x44
	struct FRawDistributionFloat LifeMultiplier; // 0x44 (0x1C)
};

struct UParticleModuleRotationRateMultiplyLife {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleRotationRateBase_Data UParticleModuleRotationRateBase;
	struct UParticleModuleRotationRateMultiplyLife_Data UParticleModuleRotationRateMultiplyLife;
};

// 0x44 
struct UParticleModuleSizeBase_Data {
	// Last Offset: 0x44
};

struct UParticleModuleSizeBase {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleSizeBase_Data UParticleModuleSizeBase;
};

// 0x60 
struct UParticleModuleSize_Data {
	// Last Offset: 0x44
	struct FRawDistributionVector StartSize; // 0x44 (0x1C)
};

struct UParticleModuleSize {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleSizeBase_Data UParticleModuleSizeBase;
	struct UParticleModuleSize_Data UParticleModuleSize;
};

// 0x78 
struct UParticleModuleSize_Seeded_Data {
	// Last Offset: 0x60
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x60 (0x18)
};

struct UParticleModuleSize_Seeded {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleSizeBase_Data UParticleModuleSizeBase;
	struct UParticleModuleSize_Data UParticleModuleSize;
	struct UParticleModuleSize_Seeded_Data UParticleModuleSize_Seeded;
};

// 0x64 
struct UParticleModuleSizeMultiplyLife_Data {
	// Last Offset: 0x44
	struct FRawDistributionVector LifeMultiplier; // 0x44 (0x1C)
	BOOL MultiplyX :1 ; // 0x60 (0x4)
	BOOL MultiplyY :1 ; // 0x60 (0x4)
	BOOL MultiplyZ :1 ; // 0x60 (0x4)
	const unsigned long: 0;
};

struct UParticleModuleSizeMultiplyLife {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleSizeBase_Data UParticleModuleSizeBase;
	struct UParticleModuleSizeMultiplyLife_Data UParticleModuleSizeMultiplyLife;
};

// 0x64 
struct UParticleModuleSizeMultiplyVelocity_Data {
	// Last Offset: 0x44
	struct FRawDistributionVector VelocityMultiplier; // 0x44 (0x1C)
	BOOL MultiplyX :1 ; // 0x60 (0x4)
	BOOL MultiplyY :1 ; // 0x60 (0x4)
	BOOL MultiplyZ :1 ; // 0x60 (0x4)
	const unsigned long: 0;
};

struct UParticleModuleSizeMultiplyVelocity {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleSizeBase_Data UParticleModuleSizeBase;
	struct UParticleModuleSizeMultiplyVelocity_Data UParticleModuleSizeMultiplyVelocity;
};

// 0x64 
struct UParticleModuleSizeScale_Data {
	// Last Offset: 0x44
	struct FRawDistributionVector SizeScale; // 0x44 (0x1C)
	BOOL EnableX :1 ; // 0x60 (0x4)
	BOOL EnableY :1 ; // 0x60 (0x4)
	BOOL EnableZ :1 ; // 0x60 (0x4)
	const unsigned long: 0;
};

struct UParticleModuleSizeScale {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleSizeBase_Data UParticleModuleSizeBase;
	struct UParticleModuleSizeScale_Data UParticleModuleSizeScale;
};

// 0x64 
struct UParticleModuleSizeScaleByTime_Data {
	// Last Offset: 0x44
	struct FRawDistributionVector SizeScaleByTime; // 0x44 (0x1C)
	BOOL bEnableX :1 ; // 0x60 (0x4)
	BOOL bEnableY :1 ; // 0x60 (0x4)
	BOOL bEnableZ :1 ; // 0x60 (0x4)
	const unsigned long: 0;
};

struct UParticleModuleSizeScaleByTime {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleSizeBase_Data UParticleModuleSizeBase;
	struct UParticleModuleSizeScaleByTime_Data UParticleModuleSizeScaleByTime;
};

// 0x60 
struct UParticleModuleSizeScaleOverDensity_Data {
	// Last Offset: 0x44
	struct FRawDistributionVector SizeScaleOverDensity; // 0x44 (0x1C)
};

struct UParticleModuleSizeScaleOverDensity {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleSizeBase_Data UParticleModuleSizeBase;
	struct UParticleModuleSizeScaleOverDensity_Data UParticleModuleSizeScaleOverDensity;
};

// 0x48 
struct UParticleModuleSpawnBase_Data {
	// Last Offset: 0x44
	BOOL bProcessSpawnRate :1 ; // 0x44 (0x4)
	BOOL bProcessBurstList :1 ; // 0x44 (0x4)
	const unsigned long: 0;
};

struct UParticleModuleSpawnBase {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleSpawnBase_Data UParticleModuleSpawnBase;
};

// 0x90 
struct UParticleModuleSpawn_Data {
	// Last Offset: 0x48
	struct FRawDistributionFloat Rate; // 0x48 (0x1C)
	struct FRawDistributionFloat RateScale; // 0x64 (0x1C)
	unsigned char ParticleBurstMethod; // 0x80 (0x1) (Enum = EParticleBurstMethod)
	const unsigned char Unknown1[0x3]; // 0x81 (0x3) > LAST OFFSET
	struct TArray_FParticleBurst BurstList; // 0x84 (0xC)
};

struct UParticleModuleSpawn {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleSpawnBase_Data UParticleModuleSpawnBase;
	struct UParticleModuleSpawn_Data UParticleModuleSpawn;
};

// 0x74 
struct UParticleModuleSpawnPerUnit_Data {
	// Last Offset: 0x48
	float UnitScalar; // 0x48 (0x4)
	struct FRawDistributionFloat SpawnPerUnit; // 0x4C (0x1C)
	BOOL bIgnoreSpawnRateWhenMoving :1 ; // 0x68 (0x4)
	BOOL bIgnoreMovementAlongX :1 ; // 0x68 (0x4)
	BOOL bIgnoreMovementAlongY :1 ; // 0x68 (0x4)
	BOOL bIgnoreMovementAlongZ :1 ; // 0x68 (0x4)
	const unsigned long: 0;
	float MovementTolerance; // 0x6C (0x4)
	float MaxFrameDistance; // 0x70 (0x4)
};

struct UParticleModuleSpawnPerUnit {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleSpawnBase_Data UParticleModuleSpawnBase;
	struct UParticleModuleSpawnPerUnit_Data UParticleModuleSpawnPerUnit;
};

// 0x44 
struct UParticleModuleStoreSpawnTimeBase_Data {
	// Last Offset: 0x44
};

struct UParticleModuleStoreSpawnTimeBase {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleStoreSpawnTimeBase_Data UParticleModuleStoreSpawnTimeBase;
};

// 0x44 
struct UParticleModuleStoreSpawnTime_Data {
	// Last Offset: 0x44
};

struct UParticleModuleStoreSpawnTime {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleStoreSpawnTimeBase_Data UParticleModuleStoreSpawnTimeBase;
	struct UParticleModuleStoreSpawnTime_Data UParticleModuleStoreSpawnTime;
};

// 0x44 
struct UParticleModuleSubUVBase_Data {
	// Last Offset: 0x44
};

struct UParticleModuleSubUVBase {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleSubUVBase_Data UParticleModuleSubUVBase;
};

// 0x64 
struct UParticleModuleSubUV_Data {
	// Last Offset: 0x44
	struct FRawDistributionFloat SubImageIndex; // 0x44 (0x1C)
	BOOL bUseRealTime :1 ; // 0x60 (0x4)
	const unsigned long: 0;
};

struct UParticleModuleSubUV {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleSubUVBase_Data UParticleModuleSubUVBase;
	struct UParticleModuleSubUV_Data UParticleModuleSubUV;
};

// 0x88 
struct UParticleModuleSubUVMovie_Data {
	// Last Offset: 0x64
	BOOL bUseEmitterTime :1 ; // 0x64 (0x4)
	const unsigned long: 0;
	struct FRawDistributionFloat FrameRate; // 0x68 (0x1C)
	int StartingFrame; // 0x84 (0x4)
};

struct UParticleModuleSubUVMovie {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleSubUVBase_Data UParticleModuleSubUVBase;
	struct UParticleModuleSubUV_Data UParticleModuleSubUV;
	struct UParticleModuleSubUVMovie_Data UParticleModuleSubUVMovie;
};

// 0x7C 
struct UParticleModuleSubUVDirect_Data {
	// Last Offset: 0x44
	struct FRawDistributionVector SubUVPosition; // 0x44 (0x1C)
	struct FRawDistributionVector SubUVSize; // 0x60 (0x1C)
};

struct UParticleModuleSubUVDirect {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleSubUVBase_Data UParticleModuleSubUVBase;
	struct UParticleModuleSubUVDirect_Data UParticleModuleSubUVDirect;
};

// 0x60 
struct UParticleModuleSubUVSelect_Data {
	// Last Offset: 0x44
	struct FRawDistributionVector SubImageSelect; // 0x44 (0x1C)
};

struct UParticleModuleSubUVSelect {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleSubUVBase_Data UParticleModuleSubUVBase;
	struct UParticleModuleSubUVSelect_Data UParticleModuleSubUVSelect;
};

// 0x44 
struct UParticleModuleTrailBase_Data {
	// Last Offset: 0x44
};

struct UParticleModuleTrailBase {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleTrailBase_Data UParticleModuleTrailBase;
};

// 0x80 
struct UParticleModuleTrailSource_Data {
	// Last Offset: 0x44
	unsigned char SourceMethod; // 0x44 (0x1) (Enum = ETrail2SourceMethod)
	unsigned char SelectionMethod; // 0x45 (0x1) (Enum = EParticleSourceSelectionMethod)
	const unsigned char Unknown1[0x2]; // 0x46 (0x2) > LAST OFFSET
	struct FName SourceName; // 0x48 (0x8)
	struct FRawDistributionFloat SourceStrength; // 0x50 (0x1C)
	BOOL bLockSourceStength :1 ; // 0x6C (0x4)
	BOOL bInheritRotation :1 ; // 0x6C (0x4)
	const unsigned long: 0;
	int SourceOffsetCount; // 0x70 (0x4)
	struct TArray_FVector SourceOffsetDefaults; // 0x74 (0xC)
};

struct UParticleModuleTrailSource {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleTrailBase_Data UParticleModuleTrailBase;
	struct UParticleModuleTrailSource_Data UParticleModuleTrailSource;
};

// 0x4C 
struct UParticleModuleTrailSpawn_Data {
	// Last Offset: 0x44
	struct UDistributionFloatParticleParameter* SpawnDistanceMap; // 0x44 (0x4)
	float MinSpawnVelocity; // 0x48 (0x4)
};

struct UParticleModuleTrailSpawn {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleTrailBase_Data UParticleModuleTrailBase;
	struct UParticleModuleTrailSpawn_Data UParticleModuleTrailSpawn;
};

// 0x64 
struct UParticleModuleTrailTaper_Data {
	// Last Offset: 0x44
	unsigned char TaperMethod; // 0x44 (0x1) (Enum = ETrailTaperMethod)
	const unsigned char Unknown1[0x3]; // 0x45 (0x3) > LAST OFFSET
	struct FRawDistributionFloat TaperFactor; // 0x48 (0x1C)
};

struct UParticleModuleTrailTaper {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleTrailBase_Data UParticleModuleTrailBase;
	struct UParticleModuleTrailTaper_Data UParticleModuleTrailTaper;
};

// 0x44 
struct UParticleModuleTypeDataBase_Data {
	// Last Offset: 0x44
};

struct UParticleModuleTypeDataBase {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleTypeDataBase_Data UParticleModuleTypeDataBase;
};

// 0x60 
struct UParticleModuleTypeDataAnimTrail_Data {
	// Last Offset: 0x44
	struct FName ControlEdgeName; // 0x44 (0x8)
	int SheetsPerTrail; // 0x4C (0x4)
	BOOL bDeadTrailsOnDeactivate :1 ; // 0x50 (0x4)
	BOOL bClipSourceSegement :1 ; // 0x50 (0x4)
	BOOL bEnablePreviousTangentRecalculation :1 ; // 0x50 (0x4)
	BOOL bTangentRecalculationEveryFrame :1 ; // 0x50 (0x4)
	BOOL bRenderGeometry :1 ; // 0x50 (0x4)
	BOOL bRenderSpawnPoints :1 ; // 0x50 (0x4)
	BOOL bRenderTangents :1 ; // 0x50 (0x4)
	BOOL bRenderTessellation :1 ; // 0x50 (0x4)
	const unsigned long: 0;
	float TilingDistance; // 0x54 (0x4)
	float DistanceTessellationStepSize; // 0x58 (0x4)
	float TangentTessellationScalar; // 0x5C (0x4)
};

struct UParticleModuleTypeDataAnimTrail {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleTypeDataBase_Data UParticleModuleTypeDataBase;
	struct UParticleModuleTypeDataAnimTrail_Data UParticleModuleTypeDataAnimTrail;
};

// 0x4C 
struct UParticleModuleTypeDataApex_Data {
	// Last Offset: 0x44
	struct UApexGenericAsset* ApexIOFX; // 0x44 (0x4)
	struct UApexGenericAsset* ApexEmitter; // 0x48 (0x4)
};

struct UParticleModuleTypeDataApex {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleTypeDataBase_Data UParticleModuleTypeDataBase;
	struct UParticleModuleTypeDataApex_Data UParticleModuleTypeDataApex;
};

// 0xE0 
struct UParticleModuleTypeDataBeam_Data {
	// Last Offset: 0x44
	unsigned char BeamMethod; // 0x44 (0x1) (Enum = EBeamMethod)
	unsigned char EndPointMethod; // 0x45 (0x1) (Enum = EBeamEndPointMethod)
	const unsigned char Unknown1[0x2]; // 0x46 (0x2) > LAST OFFSET
	struct FRawDistributionFloat Distance; // 0x48 (0x1C)
	struct FRawDistributionVector EndPoint; // 0x64 (0x1C)
	int TessellationFactor; // 0x80 (0x4)
	struct FRawDistributionFloat EmitterStrength; // 0x84 (0x1C)
	struct FRawDistributionFloat TargetStrength; // 0xA0 (0x1C)
	struct FRawDistributionVector EndPointDirection; // 0xBC (0x1C)
	int TextureTile; // 0xD8 (0x4)
	BOOL RenderGeometry :1 ; // 0xDC (0x4)
	BOOL RenderDirectLine :1 ; // 0xDC (0x4)
	BOOL RenderLines :1 ; // 0xDC (0x4)
	BOOL RenderTessellation :1 ; // 0xDC (0x4)
	const unsigned long: 0;
};

struct UParticleModuleTypeDataBeam {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleTypeDataBase_Data UParticleModuleTypeDataBase;
	struct UParticleModuleTypeDataBeam_Data UParticleModuleTypeDataBeam;
};

// 0xC4 
struct UParticleModuleTypeDataBeam2_Data {
	// Last Offset: 0x44
	unsigned char BeamMethod; // 0x44 (0x1) (Enum = EBeam2Method)
	unsigned char TaperMethod; // 0x45 (0x1) (Enum = EBeamTaperMethod)
	const unsigned char Unknown1[0x2]; // 0x46 (0x2) > LAST OFFSET
	int TextureTile; // 0x48 (0x4)
	float TextureTileDistance; // 0x4C (0x4)
	int Sheets; // 0x50 (0x4)
	int MaxBeamCount; // 0x54 (0x4)
	float Speed; // 0x58 (0x4)
	int InterpolationPoints; // 0x5C (0x4)
	BOOL bAlwaysOn :1 ; // 0x60 (0x4)
	BOOL bSpawnPerUnitHack :1 ; // 0x60 (0x4)
	BOOL RenderGeometry :1 ; // 0x60 (0x4)
	BOOL RenderDirectLine :1 ; // 0x60 (0x4)
	BOOL RenderLines :1 ; // 0x60 (0x4)
	BOOL RenderTessellation :1 ; // 0x60 (0x4)
	const unsigned long: 0;
	int UpVectorStepSize; // 0x64 (0x4)
	struct FName BranchParentName; // 0x68 (0x8)
	struct FRawDistributionFloat Distance; // 0x70 (0x1C)
	struct FRawDistributionFloat TaperFactor; // 0x8C (0x1C)
	struct FRawDistributionFloat TaperScale; // 0xA8 (0x1C)
};

struct UParticleModuleTypeDataBeam2 {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleTypeDataBase_Data UParticleModuleTypeDataBase;
	struct UParticleModuleTypeDataBeam2_Data UParticleModuleTypeDataBeam2;
};

// 0x5C 
struct UParticleModuleTypeDataMesh_Data {
	// Last Offset: 0x44
	struct UStaticMesh* Mesh; // 0x44 (0x4)
	BOOL CastShadows :1 ; // 0x48 (0x4)
	BOOL DoCollisions :1 ; // 0x48 (0x4)
	BOOL bAllowMotionBlur :1 ; // 0x48 (0x4)
	BOOL bOverrideMaterial :1 ; // 0x48 (0x4)
	BOOL bCameraFacing :1 ; // 0x48 (0x4)
	BOOL bApplyParticleRotationAsSpin :1 ; // 0x48 (0x4)
	const unsigned long: 0;
	unsigned char MeshAlignment; // 0x4C (0x1) (Enum = EMeshScreenAlignment)
	unsigned char AxisLockOption; // 0x4D (0x1) (Enum = EParticleAxisLock)
	unsigned char CameraFacingUpAxisOption; // 0x4E (0x1) (Enum = EMeshCameraFacingUpAxis)
	unsigned char CameraFacingOption; // 0x4F (0x1) (Enum = EMeshCameraFacingOptions)
	float Pitch; // 0x50 (0x4)
	float Roll; // 0x54 (0x4)
	float Yaw; // 0x58 (0x4)
};

struct UParticleModuleTypeDataMesh {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleTypeDataBase_Data UParticleModuleTypeDataBase;
	struct UParticleModuleTypeDataMesh_Data UParticleModuleTypeDataMesh;
};

// 0x80 
struct UParticleModuleTypeDataMeshPhysX_Data {
	// Last Offset: 0x5C
	struct UPhysXParticleSystem* PhysXParSys; // 0x5C (0x4)
	unsigned char PhysXRotationMethod; // 0x60 (0x1) (Enum = EPhysXMeshRotationMethod)
	const unsigned char Unknown1[0x3]; // 0x61 (0x3) > LAST OFFSET
	float FluidRotationCoefficient; // 0x64 (0x4)
	struct FPhysXEmitterVerticalLodProperties VerticalLod; // 0x68 (0x10)
	float ZOffset; // 0x78 (0x4)
	BOOL SuppressIfLowGore :1 ; // 0x7C (0x4)
	const unsigned long: 0;
};

struct UParticleModuleTypeDataMeshPhysX {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleTypeDataBase_Data UParticleModuleTypeDataBase;
	struct UParticleModuleTypeDataMesh_Data UParticleModuleTypeDataMesh;
	struct UParticleModuleTypeDataMeshPhysX_Data UParticleModuleTypeDataMeshPhysX;
};

// 0x68 
struct UParticleModuleTypeDataPhysX_Data {
	// Last Offset: 0x44
	struct UPhysXParticleSystem* PhysXParSys; // 0x44 (0x4)
	struct FPhysXEmitterVerticalLodProperties VerticalLod; // 0x48 (0x10)
	float SPHSmoothScreenRadius; // 0x58 (0x4)
	float SPHSmoothDepthRadius; // 0x5C (0x4)
	float SPHCutoffThickness; // 0x60 (0x4)
	BOOL SuppressIfLowGore :1 ; // 0x64 (0x4)
	const unsigned long: 0;
};

struct UParticleModuleTypeDataPhysX {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleTypeDataBase_Data UParticleModuleTypeDataBase;
	struct UParticleModuleTypeDataPhysX_Data UParticleModuleTypeDataPhysX;
};

// 0x6C 
struct UParticleModuleTypeDataRibbon_Data {
	// Last Offset: 0x44
	int MaxTessellationBetweenParticles; // 0x44 (0x4)
	int SheetsPerTrail; // 0x48 (0x4)
	int MaxTrailCount; // 0x4C (0x4)
	int MaxParticleInTrailCount; // 0x50 (0x4)
	BOOL bDeadTrailsOnDeactivate :1 ; // 0x54 (0x4)
	BOOL bDeadTrailsOnSourceLoss :1 ; // 0x54 (0x4)
	BOOL bClipSourceSegement :1 ; // 0x54 (0x4)
	BOOL bEnablePreviousTangentRecalculation :1 ; // 0x54 (0x4)
	BOOL bTangentRecalculationEveryFrame :1 ; // 0x54 (0x4)
	BOOL bRenderGeometry :1 ; // 0x54 (0x4)
	BOOL bRenderSpawnPoints :1 ; // 0x54 (0x4)
	BOOL bRenderTangents :1 ; // 0x54 (0x4)
	BOOL bRenderTessellation :1 ; // 0x54 (0x4)
	BOOL bEnableTangentDiffInterpScale :1 ; // 0x54 (0x4)
	const unsigned long: 0;
	unsigned char RenderAxis; // 0x58 (0x1) (Enum = ETrailsRenderAxisOption)
	const unsigned char Unknown1[0x3]; // 0x59 (0x3) > LAST OFFSET
	float TangentSpawningScalar; // 0x5C (0x4)
	float TilingDistance; // 0x60 (0x4)
	float DistanceTessellationStepSize; // 0x64 (0x4)
	float TangentTessellationScalar; // 0x68 (0x4)
};

struct UParticleModuleTypeDataRibbon {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleTypeDataBase_Data UParticleModuleTypeDataBase;
	struct UParticleModuleTypeDataRibbon_Data UParticleModuleTypeDataRibbon;
};

// 0x74 
struct UParticleModuleTypeDataTrail_Data {
	// Last Offset: 0x44
	BOOL RenderGeometry :1 ; // 0x44 (0x4)
	BOOL RenderLines :1 ; // 0x44 (0x4)
	BOOL RenderTessellation :1 ; // 0x44 (0x4)
	BOOL Tapered :1 ; // 0x44 (0x4)
	BOOL SpawnByDistance :1 ; // 0x44 (0x4)
	const unsigned long: 0;
	int TessellationFactor; // 0x48 (0x4)
	struct FRawDistributionFloat Tension; // 0x4C (0x1C)
	struct FVector SpawnDistance; // 0x68 (0xC)
};

struct UParticleModuleTypeDataTrail {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleTypeDataBase_Data UParticleModuleTypeDataBase;
	struct UParticleModuleTypeDataTrail_Data UParticleModuleTypeDataTrail;
};

// 0x64 
struct UParticleModuleTypeDataTrail2_Data {
	// Last Offset: 0x44
	int TessellationFactor; // 0x44 (0x4)
	float TessellationFactorDistance; // 0x48 (0x4)
	float TessellationStrength; // 0x4C (0x4)
	int TextureTile; // 0x50 (0x4)
	int Sheets; // 0x54 (0x4)
	int MaxTrailCount; // 0x58 (0x4)
	int MaxParticleInTrailCount; // 0x5C (0x4)
	BOOL bClipSourceSegement :1 ; // 0x60 (0x4)
	BOOL bClearTangents :1 ; // 0x60 (0x4)
	BOOL RenderGeometry :1 ; // 0x60 (0x4)
	BOOL RenderDirectLine :1 ; // 0x60 (0x4)
	BOOL RenderLines :1 ; // 0x60 (0x4)
	BOOL RenderTessellation :1 ; // 0x60 (0x4)
	const unsigned long: 0;
};

struct UParticleModuleTypeDataTrail2 {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleTypeDataBase_Data UParticleModuleTypeDataBase;
	struct UParticleModuleTypeDataTrail2_Data UParticleModuleTypeDataTrail2;
};

// 0x50 
struct UParticleModuleUberBase_Data {
	// Last Offset: 0x44
	struct TArray_FName RequiredModules; // 0x44 (0xC)
};

struct UParticleModuleUberBase {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleUberBase_Data UParticleModuleUberBase;
};

// 0xF8 
struct UParticleModuleUberLTISIVCL_Data {
	// Last Offset: 0x50
	struct FRawDistributionFloat Lifetime; // 0x50 (0x1C)
	struct FRawDistributionVector StartSize; // 0x6C (0x1C)
	struct FRawDistributionVector StartVelocity; // 0x88 (0x1C)
	struct FRawDistributionFloat StartVelocityRadial; // 0xA4 (0x1C)
	struct FRawDistributionVector ColorOverLife; // 0xC0 (0x1C)
	struct FRawDistributionFloat AlphaOverLife; // 0xDC (0x1C)
};

struct UParticleModuleUberLTISIVCL {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleUberBase_Data UParticleModuleUberBase;
	struct UParticleModuleUberLTISIVCL_Data UParticleModuleUberLTISIVCL;
};

// 0x114 
struct UParticleModuleUberLTISIVCLIL_Data {
	// Last Offset: 0x50
	struct FRawDistributionFloat Lifetime; // 0x50 (0x1C)
	struct FRawDistributionVector StartSize; // 0x6C (0x1C)
	struct FRawDistributionVector StartVelocity; // 0x88 (0x1C)
	struct FRawDistributionFloat StartVelocityRadial; // 0xA4 (0x1C)
	struct FRawDistributionVector ColorOverLife; // 0xC0 (0x1C)
	struct FRawDistributionFloat AlphaOverLife; // 0xDC (0x1C)
	struct FRawDistributionVector StartLocation; // 0xF8 (0x1C)
};

struct UParticleModuleUberLTISIVCLIL {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleUberBase_Data UParticleModuleUberBase;
	struct UParticleModuleUberLTISIVCLIL_Data UParticleModuleUberLTISIVCLIL;
};

// 0x16C 
struct UParticleModuleUberLTISIVCLILIRSSBLIRR_Data {
	// Last Offset: 0x50
	struct FRawDistributionFloat Lifetime; // 0x50 (0x1C)
	struct FRawDistributionVector StartSize; // 0x6C (0x1C)
	struct FRawDistributionVector StartVelocity; // 0x88 (0x1C)
	struct FRawDistributionFloat StartVelocityRadial; // 0xA4 (0x1C)
	struct FRawDistributionVector ColorOverLife; // 0xC0 (0x1C)
	struct FRawDistributionFloat AlphaOverLife; // 0xDC (0x1C)
	struct FRawDistributionVector StartLocation; // 0xF8 (0x1C)
	struct FRawDistributionFloat StartRotation; // 0x114 (0x1C)
	struct FRawDistributionVector SizeLifeMultiplier; // 0x130 (0x1C)
	BOOL SizeMultiplyX :1 ; // 0x14C (0x4)
	BOOL SizeMultiplyY :1 ; // 0x14C (0x4)
	BOOL SizeMultiplyZ :1 ; // 0x14C (0x4)
	const unsigned long: 0;
	struct FRawDistributionFloat StartRotationRate; // 0x150 (0x1C)
};

struct UParticleModuleUberLTISIVCLILIRSSBLIRR {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleUberBase_Data UParticleModuleUberBase;
	struct UParticleModuleUberLTISIVCLILIRSSBLIRR_Data UParticleModuleUberLTISIVCLILIRSSBLIRR;
};

// 0xD8 
struct UParticleModuleUberRainDrops_Data {
	// Last Offset: 0x50
	float LifetimeMin; // 0x50 (0x4)
	float LifetimeMax; // 0x54 (0x4)
	struct FVector StartSizeMin; // 0x58 (0xC)
	struct FVector StartSizeMax; // 0x64 (0xC)
	struct FVector StartVelocityMin; // 0x70 (0xC)
	struct FVector StartVelocityMax; // 0x7C (0xC)
	float StartVelocityRadialMin; // 0x88 (0x4)
	float StartVelocityRadialMax; // 0x8C (0x4)
	struct FVector ColorOverLife; // 0x90 (0xC)
	float AlphaOverLife; // 0x9C (0x4)
	BOOL bIsUsingCylinder :1 ; // 0xA0 (0x4)
	BOOL bPositive_X :1 ; // 0xA0 (0x4)
	BOOL bPositive_Y :1 ; // 0xA0 (0x4)
	BOOL bPositive_Z :1 ; // 0xA0 (0x4)
	BOOL bNegative_X :1 ; // 0xA0 (0x4)
	BOOL bNegative_Y :1 ; // 0xA0 (0x4)
	BOOL bNegative_Z :1 ; // 0xA0 (0x4)
	BOOL bSurfaceOnly :1 ; // 0xA0 (0x4)
	BOOL bVelocity :1 ; // 0xA0 (0x4)
	BOOL bRadialVelocity :1 ; // 0xA0 (0x4)
	const unsigned long: 0;
	float PC_VelocityScale; // 0xA4 (0x4)
	struct FVector PC_StartLocation; // 0xA8 (0xC)
	float PC_StartRadius; // 0xB4 (0x4)
	float PC_StartHeight; // 0xB8 (0x4)
	unsigned char PC_HeightAxis; // 0xBC (0x1) (Enum = CylinderHeightAxis)
	const unsigned char Unknown1[0x3]; // 0xBD (0x3) > LAST OFFSET
	struct FVector StartLocationMin; // 0xC0 (0xC)
	struct FVector StartLocationMax; // 0xCC (0xC)
};

struct UParticleModuleUberRainDrops {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleUberBase_Data UParticleModuleUberBase;
	struct UParticleModuleUberRainDrops_Data UParticleModuleUberRainDrops;
};

// 0x170 
struct UParticleModuleUberRainImpacts_Data {
	// Last Offset: 0x50
	struct FRawDistributionFloat Lifetime; // 0x50 (0x1C)
	struct FRawDistributionVector StartSize; // 0x6C (0x1C)
	struct FRawDistributionVector StartRotation; // 0x88 (0x1C)
	BOOL bInheritParent :1 ; // 0xA4 (0x4)
	BOOL MultiplyX :1 ; // 0xA4 (0x4)
	BOOL MultiplyY :1 ; // 0xA4 (0x4)
	BOOL MultiplyZ :1 ; // 0xA4 (0x4)
	BOOL bIsUsingCylinder :1 ; // 0xA4 (0x4)
	BOOL bPositive_X :1 ; // 0xA4 (0x4)
	BOOL bPositive_Y :1 ; // 0xA4 (0x4)
	BOOL bPositive_Z :1 ; // 0xA4 (0x4)
	BOOL bNegative_X :1 ; // 0xA4 (0x4)
	BOOL bNegative_Y :1 ; // 0xA4 (0x4)
	BOOL bNegative_Z :1 ; // 0xA4 (0x4)
	BOOL bSurfaceOnly :1 ; // 0xA4 (0x4)
	BOOL bVelocity :1 ; // 0xA4 (0x4)
	BOOL bRadialVelocity :1 ; // 0xA4 (0x4)
	const unsigned long: 0;
	struct FRawDistributionVector LifeMultiplier; // 0xA8 (0x1C)
	struct FRawDistributionFloat PC_VelocityScale; // 0xC4 (0x1C)
	struct FRawDistributionVector PC_StartLocation; // 0xE0 (0x1C)
	struct FRawDistributionFloat PC_StartRadius; // 0xFC (0x1C)
	struct FRawDistributionFloat PC_StartHeight; // 0x118 (0x1C)
	unsigned char PC_HeightAxis; // 0x134 (0x1) (Enum = CylinderHeightAxis)
	const unsigned char Unknown1[0x3]; // 0x135 (0x3) > LAST OFFSET
	struct FRawDistributionVector ColorOverLife; // 0x138 (0x1C)
	struct FRawDistributionFloat AlphaOverLife; // 0x154 (0x1C)
};

struct UParticleModuleUberRainImpacts {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleUberBase_Data UParticleModuleUberBase;
	struct UParticleModuleUberRainImpacts_Data UParticleModuleUberRainImpacts;
};

// 0xFC 
struct UParticleModuleUberRainSplashA_Data {
	// Last Offset: 0x50
	struct FRawDistributionFloat Lifetime; // 0x50 (0x1C)
	struct FRawDistributionVector StartSize; // 0x6C (0x1C)
	struct FRawDistributionVector StartRotation; // 0x88 (0x1C)
	BOOL bInheritParent :1 ; // 0xA4 (0x4)
	BOOL MultiplyX :1 ; // 0xA4 (0x4)
	BOOL MultiplyY :1 ; // 0xA4 (0x4)
	BOOL MultiplyZ :1 ; // 0xA4 (0x4)
	const unsigned long: 0;
	struct FRawDistributionVector LifeMultiplier; // 0xA8 (0x1C)
	struct FRawDistributionVector ColorOverLife; // 0xC4 (0x1C)
	struct FRawDistributionFloat AlphaOverLife; // 0xE0 (0x1C)
};

struct UParticleModuleUberRainSplashA {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleUberBase_Data UParticleModuleUberBase;
	struct UParticleModuleUberRainSplashA_Data UParticleModuleUberRainSplashA;
};

// 0xFC 
struct UParticleModuleUberRainSplashB_Data {
	// Last Offset: 0x50
	struct FRawDistributionFloat Lifetime; // 0x50 (0x1C)
	struct FRawDistributionVector StartSize; // 0x6C (0x1C)
	struct FRawDistributionVector ColorOverLife; // 0x88 (0x1C)
	struct FRawDistributionFloat AlphaOverLife; // 0xA4 (0x1C)
	struct FRawDistributionVector LifeMultiplier; // 0xC0 (0x1C)
	BOOL MultiplyX :1 ; // 0xDC (0x4)
	BOOL MultiplyY :1 ; // 0xDC (0x4)
	BOOL MultiplyZ :1 ; // 0xDC (0x4)
	const unsigned long: 0;
	struct FRawDistributionFloat StartRotationRate; // 0xE0 (0x1C)
};

struct UParticleModuleUberRainSplashB {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleUberBase_Data UParticleModuleUberBase;
	struct UParticleModuleUberRainSplashB_Data UParticleModuleUberRainSplashB;
};

// 0x48 
struct UParticleModuleVelocityBase_Data {
	// Last Offset: 0x44
	BOOL bInWorldSpace :1 ; // 0x44 (0x4)
	BOOL bApplyOwnerScale :1 ; // 0x44 (0x4)
	const unsigned long: 0;
};

struct UParticleModuleVelocityBase {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleVelocityBase_Data UParticleModuleVelocityBase;
};

// 0x80 
struct UParticleModuleVelocity_Data {
	// Last Offset: 0x48
	struct FRawDistributionVector StartVelocity; // 0x48 (0x1C)
	struct FRawDistributionFloat StartVelocityRadial; // 0x64 (0x1C)
};

struct UParticleModuleVelocity {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleVelocityBase_Data UParticleModuleVelocityBase;
	struct UParticleModuleVelocity_Data UParticleModuleVelocity;
};

// 0x98 
struct UParticleModuleVelocity_Seeded_Data {
	// Last Offset: 0x80
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x80 (0x18)
};

struct UParticleModuleVelocity_Seeded {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleVelocityBase_Data UParticleModuleVelocityBase;
	struct UParticleModuleVelocity_Data UParticleModuleVelocity;
	struct UParticleModuleVelocity_Seeded_Data UParticleModuleVelocity_Seeded;
};

// 0x64 
struct UParticleModuleVelocityInheritParent_Data {
	// Last Offset: 0x48
	struct FRawDistributionVector Scale; // 0x48 (0x1C)
};

struct UParticleModuleVelocityInheritParent {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleVelocityBase_Data UParticleModuleVelocityBase;
	struct UParticleModuleVelocityInheritParent_Data UParticleModuleVelocityInheritParent;
};

// 0x68 
struct UParticleModuleVelocityOverLifetime_Data {
	// Last Offset: 0x48
	struct FRawDistributionVector VelOverLife; // 0x48 (0x1C)
	BOOL Absolute :1 ; // 0x64 (0x4)
	const unsigned long: 0;
};

struct UParticleModuleVelocityOverLifetime {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleVelocityBase_Data UParticleModuleVelocityBase;
	struct UParticleModuleVelocityOverLifetime_Data UParticleModuleVelocityOverLifetime;
};

// 0x3C 
struct UParticleModuleEventSendToGame_Data {
	// Last Offset: 0x3C
};

struct UParticleModuleEventSendToGame {
	struct UObject_Data UObject;
	struct UParticleModuleEventSendToGame_Data UParticleModuleEventSendToGame;
};

// 0xF0 
struct UParticleSystem_Data {
	// Last Offset: 0x3C
	unsigned char SystemUpdateMode; // 0x3C (0x1) (Enum = EParticleSystemUpdateMode)
	unsigned char LODMethod; // 0x3D (0x1) (Enum = ParticleSystemLODMethod)
	unsigned char OcclusionBoundsMethod; // 0x3E (0x1) (Enum = EParticleSystemOcclusionBoundsMethod)
	const unsigned char Unknown1[0x1]; // 0x3F (0x1) > LAST OFFSET
	float UpdateTime_FPS; // 0x40 (0x4)
	float UpdateTime_Delta; // 0x44 (0x4)
	float WarmupTime; // 0x48 (0x4)
	BOOL bAggressiveWithMemory :1 ; // 0x4C (0x4)
	BOOL bLit :1 ; // 0x4C (0x4)
	BOOL bOrientZAxisTowardCamera :1 ; // 0x4C (0x4)
	BOOL bFullResolution :1 ; // 0x4C (0x4)
	BOOL bRegenerateLODDuplicate :1 ; // 0x4C (0x4)
	BOOL bUseFixedRelativeBoundingBox :1 ; // 0x4C (0x4)
	BOOL bShouldResetPeakCounts :1 ; // 0x4C (0x4)
	BOOL bHasPhysics :1 ; // 0x4C (0x4)
	BOOL bUseRealtimeThumbnail :1 ; // 0x4C (0x4)
	BOOL ThumbnailImageOutOfDate :1 ; // 0x4C (0x4)
	BOOL bSkipSpawnCountCheck :1 ; // 0x4C (0x4)
	BOOL bUseDelayRange :1 ; // 0x4C (0x4)
	BOOL bUseMobilePointSprites :1 ; // 0x4C (0x4)
	BOOL bLoadIfPhysXLevel0 :1 ; // 0x4C (0x4)
	BOOL bLoadIfPhysXLevel1 :1 ; // 0x4C (0x4)
	BOOL bLoadIfPhysXLevel2 :1 ; // 0x4C (0x4)
	const unsigned long: 0;
	struct TArray_UParticleEmitterPtr Emitters; // 0x50 (0xC)
	struct UParticleSystemComponent* PreviewComponent; // 0x5C (0x4)
	struct UInterpCurveEdSetup* CurveEdSetup; // 0x60 (0x4)
	float LODDistanceCheckTime; // 0x64 (0x4)
	struct TArray_float LODDistances; // 0x68 (0xC)
	float MaxDrawDistance; // 0x74 (0x4)
	struct TArray_FParticleSystemLOD LODSettings; // 0x78 (0xC)
	struct FBox FixedRelativeBoundingBox; // 0x84 (0x1C)
	float SecondsBeforeInactive; // 0xA0 (0x4)
	float Delay; // 0xA4 (0x4)
	float DelayLow; // 0xA8 (0x4)
	struct FVector MacroUVPosition; // 0xAC (0xC)
	float MacroUVRadius; // 0xB8 (0x4)
	struct FBox CustomOcclusionBounds; // 0xBC (0x1C)
	struct UAkEvent* StartAudioEvent; // 0xD8 (0x4)
	struct UAkEvent* StopAudioEvent; // 0xDC (0x4)
	struct UAkEvent* StartLoopingAudioEvent; // 0xE0 (0x4)
	struct UAkEvent* StopLoopingAudioEvent; // 0xE4 (0x4)
	float fAudioDelaySeconds; // 0xE8 (0x4)
	struct UParticleSystem* PhysxParticleSystemRef; // 0xEC (0x4)
};

struct UParticleSystem {
	struct UObject_Data UObject;
	struct UParticleSystem_Data UParticleSystem;
};

// 0x4C 
struct UParticleSystemReplay_Data {
	// Last Offset: 0x3C
	int ClipIDNumber; // 0x3C (0x4)
	struct TArray_FParticleSystemReplayFrame Frames; // 0x40 (0xC)
};

struct UParticleSystemReplay {
	struct UObject_Data UObject;
	struct UParticleSystemReplay_Data UParticleSystemReplay;
};

// 0xA8 
struct UPhysXParticleSystem_Data {
	// Last Offset: 0x3C
	int MaxParticles1; // 0x3C (0x4)
	int MaxParticles2; // 0x40 (0x4)
	int MaxParticles; // 0x44 (0x4)
	int ParticleSpawnReserve; // 0x48 (0x4)
	unsigned char RBChannel; // 0x4C (0x1) (Enum = ERBCollisionChannel)
	unsigned char SimulationMethod; // 0x4D (0x1) (Enum = ESimulationMethod)
	unsigned char PacketSizeMultiplier; // 0x4E (0x1) (Enum = EPacketSizeMultiplier)
	const unsigned char Unknown1[0x1]; // 0x4F (0x1) > LAST OFFSET
	struct FRBCollisionChannelContainer RBCollideWithChannels; // 0x50 (0x4)
	float CollisionDistance; // 0x54 (0x4)
	float RestitutionWithStaticShapes; // 0x58 (0x4)
	float RestitutionWithDynamicShapes; // 0x5C (0x4)
	float FrictionWithStaticShapes; // 0x60 (0x4)
	float FrictionWithDynamicShapes; // 0x64 (0x4)
	float StaticFrictionWithStaticShapes; // 0x68 (0x4)
	float StaticFrictionWithDynamicShapes; // 0x6C (0x4)
	BOOL bDynamicCollision :1 ; // 0x70 (0x4)
	BOOL bDisableGravity :1 ; // 0x70 (0x4)
	BOOL bStaticCollision :1 ; // 0x70 (0x4)
	BOOL bTwoWayCollision :1 ; // 0x70 (0x4)
	BOOL bDestroy :1 ; // 0x70 (0x4)
	BOOL bSyncFailed :1 ; // 0x70 (0x4)
	BOOL bIsInGame :1 ; // 0x70 (0x4)
	const unsigned long: 0;
	float MaxMotionDistance; // 0x74 (0x4)
	float Damping; // 0x78 (0x4)
	struct FVector ExternalAcceleration; // 0x7C (0xC)
	float RestParticleDistance; // 0x88 (0x4)
	float RestDensity; // 0x8C (0x4)
	float KernelRadiusMultiplier; // 0x90 (0x4)
	float Stiffness; // 0x94 (0x4)
	float Viscosity; // 0x98 (0x4)
	float CollisionResponseCoefficient; // 0x9C (0x4)
	struct FPointer CascadeScene; // 0xA0 (0x4)
	struct FPointer PSys; // 0xA4 (0x4)
};

struct UPhysXParticleSystem {
	struct UObject_Data UObject;
	struct UPhysXParticleSystem_Data UPhysXParticleSystem;
};

// 0x288  (Alignment = 16)
struct AKActor_Data {
	// Last Offset: 0x1C4
	BOOL bDamageAppliesImpulse :1 ; // 0x1C4 (0x4)
	BOOL bWakeOnLevelStart :1 ; // 0x1C4 (0x4)
	BOOL bCurrentSlide :1 ; // 0x1C4 (0x4)
	BOOL bSlideActive :1 ; // 0x1C4 (0x4)
	BOOL bEnableStayUprightSpring :1 ; // 0x1C4 (0x4)
	BOOL bLimitMaxPhysicsVelocity :1 ; // 0x1C4 (0x4)
	BOOL bNeedsRBStateReplication :1 ; // 0x1C4 (0x4)
	BOOL bDisableClientSidePawnInteractions :1 ; // 0x1C4 (0x4)
	const unsigned long: 0;
	struct UParticleSystemComponent* ImpactEffectComponent; // 0x1C8 (0x4)
	struct UAudioComponent* ImpactSoundComponent; // 0x1CC (0x4)
	struct UAudioComponent* ImpactSoundComponent2; // 0x1D0 (0x4)
	float LastImpactTime; // 0x1D4 (0x4)
	struct FPhysEffectInfo ImpactEffectInfo; // 0x1D8 (0x14)
	struct UParticleSystemComponent* SlideEffectComponent; // 0x1EC (0x4)
	struct UAudioComponent* SlideSoundComponent; // 0x1F0 (0x4)
	float LastSlideTime; // 0x1F4 (0x4)
	struct FPhysEffectInfo SlideEffectInfo; // 0x1F8 (0x14)
	float StayUprightTorqueFactor; // 0x20C (0x4)
	float StayUprightMaxTorque; // 0x210 (0x4)
	float MaxPhysicsVelocity; // 0x214 (0x4)
	float NetRelevantDistanceSquared; // 0x218 (0x4)
	const unsigned char Unknown1[0x4]; // 0x21C (0x4) > LAST OFFSET
	struct FRigidBodyState RBState; // 0x220 (0x3C)
	const unsigned char Unknown2[0x4]; // 0x25C (0x4) > LAST OFFSET
	float AngErrorAccumulator; // 0x260 (0x4)
	struct FVector ReplicatedDrawScale3D; // 0x264 (0xC)
	struct FVector InitialLocation; // 0x270 (0xC)
	struct FRotator InitialRotation; // 0x27C (0xC)
};

struct AKActor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ADynamicSMActor_Data ADynamicSMActor;
	struct AKActor_Data AKActor;
};

// 0x290  (Alignment = 16)
struct AKActorFromStatic_Data {
	// Last Offset: 0x288
	struct AActor* MyStaticMeshActor; // 0x288 (0x4)
	float MaxImpulseSpeed; // 0x28C (0x4)
};

struct AKActorFromStatic {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ADynamicSMActor_Data ADynamicSMActor;
	struct AKActor_Data AKActor;
	struct AKActorFromStatic_Data AKActorFromStatic;
};

// 0x28C  (Alignment = 16)
struct AKActorSpawnable_Data {
	// Last Offset: 0x288
	BOOL bRecycleScaleToZero :1 ; // 0x288 (0x4)
	BOOL bScalingToZero :1 ; // 0x288 (0x4)
	BOOL bNotifyRigidBodyCollision :1 ; // 0x288 (0x4)
	const unsigned long: 0;
};

struct AKActorSpawnable {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ADynamicSMActor_Data ADynamicSMActor;
	struct AKActor_Data AKActor;
	struct AKActorSpawnable_Data AKActorSpawnable;
};

// 0x2A4  (Alignment = 16)
struct AKActorPizazz_Data {
	// Last Offset: 0x28C
	struct FImpulseData ReplicatedImpulse; // 0x28C (0x18)
};

struct AKActorPizazz {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ADynamicSMActor_Data ADynamicSMActor;
	struct AKActor_Data AKActor;
	struct AKActorSpawnable_Data AKActorSpawnable;
	struct AKActorPizazz_Data AKActorPizazz;
};

// 0x198 
struct AKAsset_Data {
	// Last Offset: 0x188
	struct USkeletalMeshComponent* SkeletalMeshComponent; // 0x188 (0x4)
	BOOL bDamageAppliesImpulse :1 ; // 0x18C (0x4)
	BOOL bWakeOnLevelStart :1 ; // 0x18C (0x4)
	BOOL bBlockPawns :1 ; // 0x18C (0x4)
	const unsigned long: 0;
	struct USkeletalMesh* ReplicatedMesh; // 0x190 (0x4)
	struct UPhysicsAsset* ReplicatedPhysAsset; // 0x194 (0x4)
};

struct AKAsset {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AKAsset_Data AKAsset;
};

// 0x690 
struct APawn_Data {
	// Last Offset: 0x188
	struct FPointer VfTable_IInterface_Speaker; // 0x188 (0x4)
	struct FPointer VfTable_IIKilledBehavior; // 0x18C (0x4)
	struct FPointer VfTable_IITargetable; // 0x190 (0x4)
	float MaxStepHeight; // 0x194 (0x4)
	float MaxJumpHeight; // 0x198 (0x4)
	float WalkableFloorZ; // 0x19C (0x4)
	float LedgeCheckThreshold; // 0x1A0 (0x4)
	struct FVector PartialLedgeMoveDir; // 0x1A4 (0xC)
	struct AController* Controller; // 0x1B0 (0x4)
	struct APawn* NextPawn; // 0x1B4 (0x4)
	float NetRelevancyTime; // 0x1B8 (0x4)
	struct APlayerController* LastRealViewer; // 0x1BC (0x4)
	struct AActor* LastViewer; // 0x1C0 (0x4)
	BOOL bScriptTickSpecial :1 ; // 0x1C4 (0x4)
	BOOL bUpAndOut :1 ; // 0x1C4 (0x4)
	BOOL bIsWalking :1 ; // 0x1C4 (0x4)
	BOOL bWantsToCrouch :1 ; // 0x1C4 (0x4)
	BOOL bIsCrouched :1 ; // 0x1C4 (0x4)
	BOOL bTryToUncrouch :1 ; // 0x1C4 (0x4)
	BOOL bCanCrouch :1 ; // 0x1C4 (0x4)
	BOOL bCrawler :1 ; // 0x1C4 (0x4)
	BOOL bReducedSpeed :1 ; // 0x1C4 (0x4)
	BOOL bJumpCapable :1 ; // 0x1C4 (0x4)
	BOOL bCanJump :1 ; // 0x1C4 (0x4)
	BOOL bCanWalk :1 ; // 0x1C4 (0x4)
	BOOL bCanSwim :1 ; // 0x1C4 (0x4)
	BOOL bCanFly :1 ; // 0x1C4 (0x4)
	BOOL bCanClimbLadders :1 ; // 0x1C4 (0x4)
	BOOL bCanStrafe :1 ; // 0x1C4 (0x4)
	BOOL bAvoidLedges :1 ; // 0x1C4 (0x4)
	BOOL bStopAtLedges :1 ; // 0x1C4 (0x4)
	BOOL bAllowLedgeOverhang :1 ; // 0x1C4 (0x4)
	BOOL bPartiallyOverLedge :1 ; // 0x1C4 (0x4)
	BOOL bSimulateGravity :1 ; // 0x1C4 (0x4)
	BOOL bIgnoreForces :1 ; // 0x1C4 (0x4)
	BOOL bCanWalkOffLedges :1 ; // 0x1C4 (0x4)
	BOOL bCanBeBaseForPawns :1 ; // 0x1C4 (0x4)
	BOOL bSimGravityDisabled :1 ; // 0x1C4 (0x4)
	BOOL bDirectHitWall :1 ; // 0x1C4 (0x4)
	BOOL bPushesRigidBodies :1 ; // 0x1C4 (0x4)
	BOOL bForceFloorCheck :1 ; // 0x1C4 (0x4)
	BOOL bForceKeepAnchor :1 ; // 0x1C4 (0x4)
	BOOL bIgnoreAllTraces :1 ; // 0x1C4 (0x4)
	BOOL bCanMantle :1 ; // 0x1C4 (0x4)
	BOOL bCanClimbUp :1 ; // 0x1C4 (0x4)
	BOOL bCanClimbCeilings :1 ; // 0x1C8 (0x4)
	BOOL bCanSwatTurn :1 ; // 0x1C8 (0x4)
	BOOL bCanLeap :1 ; // 0x1C8 (0x4)
	BOOL bCanCoverSlip :1 ; // 0x1C8 (0x4)
	BOOL bDisplayPathErrors :1 ; // 0x1C8 (0x4)
	BOOL bCanPickupInventory :1 ; // 0x1C8 (0x4)
	BOOL bAmbientCreature :1 ; // 0x1C8 (0x4)
	BOOL bLOSHearing :1 ; // 0x1C8 (0x4)
	BOOL bMuffledHearing :1 ; // 0x1C8 (0x4)
	BOOL bDontPossess :1 ; // 0x1C8 (0x4)
	BOOL bRollToDesired :1 ; // 0x1C8 (0x4)
	BOOL bStationary :1 ; // 0x1C8 (0x4)
	BOOL bCachedRelevant :1 ; // 0x1C8 (0x4)
	BOOL bNoWeaponFiring :1 ; // 0x1C8 (0x4)
	BOOL bModifyReachSpecCost :1 ; // 0x1C8 (0x4)
	BOOL bModifyNavPointDest :1 ; // 0x1C8 (0x4)
	BOOL bPathfindsAsVehicle :1 ; // 0x1C8 (0x4)
	BOOL bPrevBypassSimulatedClientPhysics :1 ; // 0x1C8 (0x4)
	BOOL bRunPhysicsWithNoController :1 ; // 0x1C8 (0x4)
	BOOL bForceMaxAccel :1 ; // 0x1C8 (0x4)
	BOOL bLimitFallAccel :1 ; // 0x1C8 (0x4)
	BOOL bReplicateHealthToAll :1 ; // 0x1C8 (0x4)
	BOOL bForceRMVelocity :1 ; // 0x1C8 (0x4)
	BOOL bForceRegularVelocity :1 ; // 0x1C8 (0x4)
	BOOL bPlayedDeath :1 ; // 0x1C8 (0x4)
	BOOL bDesiredRotationSet :1 ; // 0x1C8 (0x4)
	BOOL bLockDesiredRotation :1 ; // 0x1C8 (0x4)
	BOOL bUnlockWhenReached :1 ; // 0x1C8 (0x4)
	BOOL bCanBeInjured :1 ; // 0x1C8 (0x4)
	BOOL bIsInjured :1 ; // 0x1C8 (0x4)
	BOOL bSpawnInFixedPosition :1 ; // 0x1C8 (0x4)
	BOOL bIsDead :1 ; // 0x1C8 (0x4)
	BOOL bNeedsBaseTickedFirst :1 ; // 0x1CC (0x4)
	BOOL bUsedByMatinee :1 ; // 0x1CC (0x4)
	BOOL bRootMotionFromInterpCurve :1 ; // 0x1CC (0x4)
	BOOL bDebugShowCameraLocation :1 ; // 0x1CC (0x4)
	BOOL bFastAttachedMove :1 ; // 0x1CC (0x4)
	BOOL bSnapToTarget :1 ; // 0x1CC (0x4)
	BOOL bAutoAimTarget :1 ; // 0x1CC (0x4)
	BOOL bUnlockPreciseDestinationWhenReached :1 ; // 0x1CC (0x4)
	BOOL ImmuneToFallingDamage :1 ; // 0x1CC (0x4)
	BOOL bSkipClientAdjustment :1 ; // 0x1CC (0x4)
	const unsigned long: 0;
	int bIsSprinting; // 0x1D0 (0x4)
	int bIsSprintingBaseValue; // 0x1D4 (0x4)
	struct TArray_UAttributeModifierPtr bIsSprintingModifierStack; // 0x1D8 (0xC)
	unsigned char WalkingPhysics; // 0x1E4 (0x1) (Enum = EPhysics)
	unsigned char PathSearchType; // 0x1E5 (0x1) (Enum = EPathSearchType)
	unsigned char RemoteViewPitch; // 0x1E6 (0x1)
	unsigned char RemoteViewYaw; // 0x1E7 (0x1)
	unsigned char NextFlashLocationIdx; // 0x1E8 (0x1)
	unsigned char FlashCount; // 0x1E9 (0x1)
	unsigned char OffHandFlashCount; // 0x1EA (0x1)
	unsigned char FiringMode; // 0x1EB (0x1)
	unsigned char AutoAimProfile; // 0x1EC (0x1) (Enum = EAutoAimProfile)
	unsigned char bEnableWeaponFireSkillEvent; // 0x1ED (0x1)
	unsigned char bEnableWeaponFireSkillEventBaseValue; // 0x1EE (0x1)
	const unsigned char Unknown1[0x1]; // 0x1EF (0x1) > LAST OFFSET
	struct TArray_UAttributeModifierPtr bEnableWeaponFireSkillEventModifierStack; // 0x1F0 (0xC)
	float UncrouchTime; // 0x1FC (0x4)
	float CrouchHeight; // 0x200 (0x4)
	float CrouchRadius; // 0x204 (0x4)
	int FullHeight; // 0x208 (0x4)
	float NonPreferredVehiclePathMultiplier; // 0x20C (0x4)
	struct UPathConstraint* PathConstraintList; // 0x210 (0x4)
	struct UPathGoalEvaluator* PathGoalList; // 0x214 (0x4)
	float DesiredSpeed; // 0x218 (0x4)
	float MaxDesiredSpeed; // 0x21C (0x4)
	float HearingThreshold; // 0x220 (0x4)
	float HearingThresholdBaseValue; // 0x224 (0x4)
	struct TArray_UAttributeModifierPtr HearingThresholdModifierStack; // 0x228 (0xC)
	float Alertness; // 0x234 (0x4)
	float SightRadius; // 0x238 (0x4)
	float SightRadiusBaseValue; // 0x23C (0x4)
	struct TArray_UAttributeModifierPtr SightRadiusModifierStack; // 0x240 (0xC)
	float PeripheralVision; // 0x24C (0x4)
	float PeripheralVisionBaseValue; // 0x250 (0x4)
	struct TArray_UAttributeModifierPtr PeripheralVisionModifierStack; // 0x254 (0xC)
	float AvgPhysicsTime; // 0x260 (0x4)
	float Mass; // 0x264 (0x4)
	float Buoyancy; // 0x268 (0x4)
	float MeleeRange; // 0x26C (0x4)
	struct ANavigationPoint* Anchor; // 0x270 (0x4)
	int AnchorItem; // 0x274 (0x4)
	struct ANavigationPoint* LastAnchor; // 0x278 (0x4)
	float FindAnchorFailedTime; // 0x27C (0x4)
	float LastValidAnchorTime; // 0x280 (0x4)
	float DestinationOffset; // 0x284 (0x4)
	float NextPathRadius; // 0x288 (0x4)
	struct FVector SerpentineDir; // 0x28C (0xC)
	float SerpentineDist; // 0x298 (0x4)
	float SerpentineTime; // 0x29C (0x4)
	float SpawnTime; // 0x2A0 (0x4)
	int MaxPitchLimit; // 0x2A4 (0x4)
	float GroundSpeed; // 0x2A8 (0x4)
	float GroundSpeedBaseValue; // 0x2AC (0x4)
	struct TArray_UAttributeModifierPtr GroundSpeedModifierStack; // 0x2B0 (0xC)
	float WaterSpeed; // 0x2BC (0x4)
	float AirSpeed; // 0x2C0 (0x4)
	float AirSpeedBaseValue; // 0x2C4 (0x4)
	struct TArray_UAttributeModifierPtr AirSpeedModifierStack; // 0x2C8 (0xC)
	float LadderSpeed; // 0x2D4 (0x4)
	float AccelRate; // 0x2D8 (0x4)
	float AccelRateBaseValue; // 0x2DC (0x4)
	struct TArray_UAttributeModifierPtr AccelRateModifierStack; // 0x2E0 (0xC)
	float JumpZ; // 0x2EC (0x4)
	float JumpZBaseValue; // 0x2F0 (0x4)
	struct TArray_UAttributeModifierPtr JumpZModifierStack; // 0x2F4 (0xC)
	float OutofWaterZ; // 0x300 (0x4)
	float MaxOutOfWaterStepHeight; // 0x304 (0x4)
	float AirControl; // 0x308 (0x4)
	float WalkingPct; // 0x30C (0x4)
	float MovementSpeedModifier; // 0x310 (0x4)
	float CrouchedPct; // 0x314 (0x4)
	float SprintingPct; // 0x318 (0x4)
	float MaxFallSpeed; // 0x31C (0x4)
	float TotalEncumbrance; // 0x320 (0x4)
	float TotalEncumbranceBaseValue; // 0x324 (0x4)
	struct TArray_UAttributeModifierPtr TotalEncumbranceModifierStack; // 0x328 (0xC)
	float EncumbranceResistance; // 0x334 (0x4)
	float EncumbranceResistanceBaseValue; // 0x338 (0x4)
	struct TArray_UAttributeModifierPtr EncumbranceResistanceModifierStack; // 0x33C (0xC)
	float AIMaxFallSpeedFactor; // 0x348 (0x4)
	float AnalogMovePct; // 0x34C (0x4)
	float BaseEyeHeight; // 0x350 (0x4)
	float EyeHeight; // 0x354 (0x4)
	struct FVector Floor; // 0x358 (0xC)
	float SplashTime; // 0x364 (0x4)
	struct APhysicsVolume* HeadVolume; // 0x368 (0x4)
	float HealthVar; // 0x36C (0x4)
	float HealthMaxVar; // 0x370 (0x4)
	int LastHealthVar; // 0x374 (0x4)
	int LastHealthMaxVar; // 0x378 (0x4)
	struct FResourcePoolReference HealthPool; // 0x37C (0xC)
	float BreathTime; // 0x388 (0x4)
	float UnderWaterTime; // 0x38C (0x4)
	float LastPainTime; // 0x390 (0x4)
	float KismetDeathDelayTime; // 0x394 (0x4)
	struct FVector RMVelocity; // 0x398 (0xC)
	struct FVector noise1spot; // 0x3A4 (0xC)
	float noise1time; // 0x3B0 (0x4)
	struct APawn* noise1other; // 0x3B4 (0x4)
	float noise1loudness; // 0x3B8 (0x4)
	struct FVector noise2spot; // 0x3BC (0xC)
	float noise2time; // 0x3C8 (0x4)
	struct APawn* noise2other; // 0x3CC (0x4)
	float noise2loudness; // 0x3D0 (0x4)
	float SoundDampening; // 0x3D4 (0x4)
	float DamageScaling; // 0x3D8 (0x4)
	struct FString MenuName; // 0x3DC (0xC)
	struct UClass* ControllerClass; // 0x3E8 (0x4)
	struct APlayerReplicationInfo* PlayerReplicationInfo; // 0x3EC (0x4)
	struct ALadderVolume* OnLadder; // 0x3F0 (0x4)
	struct FName LandMovementState; // 0x3F4 (0x8)
	struct FName WaterMovementState; // 0x3FC (0x8)
	struct APlayerStart* LastStartSpot; // 0x404 (0x4)
	float LastStartTime; // 0x408 (0x4)
	struct FVector TakeHitLocation; // 0x40C (0xC)
	struct UClass* HitDamageType; // 0x418 (0x4)
	struct UDamageTypeDefinition* HitDamageTypeDefinition; // 0x41C (0x4)
	struct UImpactDefinition* HitImpactDefinition; // 0x420 (0x4)
	struct FVector TearOffMomentum; // 0x424 (0xC)
	struct USkeletalMeshComponent* Mesh; // 0x430 (0x4)
	struct UCylinderComponent* CylinderComponent; // 0x434 (0x4)
	float RBPushRadius; // 0x438 (0x4)
	float RBPushStrength; // 0x43C (0x4)
	struct AVehicle* DrivenVehicle; // 0x440 (0x4)
	float AlwaysRelevantDistanceSquared; // 0x444 (0x4)
	float VehicleCheckRadius; // 0x448 (0x4)
	struct AController* LastHitBy; // 0x44C (0x4)
	float ViewPitchMin; // 0x450 (0x4)
	float ViewPitchMax; // 0x454 (0x4)
	int AllowedYawError; // 0x458 (0x4)
	struct FRotator DesiredRotation; // 0x45C (0xC)
	struct UClass* InventoryManagerClass; // 0x468 (0x4)
	struct AInventoryManager* InvManager; // 0x46C (0x4)
	struct AWeapon* Weapon; // 0x470 (0x4)
	struct AWeapon* OffHandWeapon; // 0x474 (0x4)
	int FlashLocationWeaponID; // 0x478 (0x4)
	struct FVector FlashLocation[10]; // 0x47C (0x78)
	int ShotCount; // 0x4F4 (0x4)
	struct UPrimitiveComponent* PreRagdollCollisionComponent; // 0x4F8 (0x4)
	struct UPawnAllegiance* Allegiance; // 0x4FC (0x4)
	struct FScriptInterface AllegianceParent; // 0x500 (0x8)
	struct TArray_FScriptInterface AllegianceChildren; // 0x508 (0xC)
	struct URB_BodyInstance* PhysicsPushBody; // 0x514 (0x4)
	int FailedLandingCount; // 0x518 (0x4)
	struct TArray_UAnimNodeSlotPtr SlotNodes; // 0x51C (0xC)
	struct TArray_UInterpGroupPtr InterpGroupList; // 0x528 (0xC)
	struct UAudioComponent* FacialAudioComp; // 0x534 (0x4)
	struct TArray_FScalarParameterInterpStruct ScalarParameterInterpArray; // 0x538 (0xC)
	struct FRootMotionCurve RootMotionInterpCurve; // 0x544 (0x1C)
	float RootMotionInterpRate; // 0x560 (0x4)
	float RootMotionInterpCurrentTime; // 0x564 (0x4)
	struct FVector RootMotionInterpCurveLastValue; // 0x568 (0xC)
	float MaxPreciseDestinationSpeed; // 0x574 (0x4)
	float HorizontalPreciseDestinationThreshold; // 0x578 (0x4)
	float VerticalPreciseDestinationThreshold; // 0x57C (0x4)
	float NormalImpactDamageModifier; // 0x580 (0x4)
	float NormalImpactDamageModifierBaseValue; // 0x584 (0x4)
	struct TArray_UAttributeModifierPtr NormalImpactDamageModifierModifierStack; // 0x588 (0xC)
	float NormalStatusEffectDamageModifier; // 0x594 (0x4)
	float NormalStatusEffectDamageModifierBaseValue; // 0x598 (0x4)
	struct TArray_UAttributeModifierPtr NormalStatusEffectDamageModifierModifierStack; // 0x59C (0xC)
	float ExplosiveImpactDamageModifier; // 0x5A8 (0x4)
	float ExplosiveImpactDamageModifierBaseValue; // 0x5AC (0x4)
	struct TArray_UAttributeModifierPtr ExplosiveImpactDamageModifierModifierStack; // 0x5B0 (0xC)
	float ExplosiveStatusEffectDamageModifier; // 0x5BC (0x4)
	float ExplosiveStatusEffectDamageModifierBaseValue; // 0x5C0 (0x4)
	struct TArray_UAttributeModifierPtr ExplosiveStatusEffectDamageModifierModifierStack; // 0x5C4 (0xC)
	float ShockImpactDamageModifier; // 0x5D0 (0x4)
	float ShockImpactDamageModifierBaseValue; // 0x5D4 (0x4)
	struct TArray_UAttributeModifierPtr ShockImpactDamageModifierModifierStack; // 0x5D8 (0xC)
	float ShockStatusEffectDamageModifier; // 0x5E4 (0x4)
	float ShockStatusEffectDamageModifierBaseValue; // 0x5E8 (0x4)
	struct TArray_UAttributeModifierPtr ShockStatusEffectDamageModifierModifierStack; // 0x5EC (0xC)
	float CorrosiveImpactDamageModifier; // 0x5F8 (0x4)
	float CorrosiveImpactDamageModifierBaseValue; // 0x5FC (0x4)
	struct TArray_UAttributeModifierPtr CorrosiveImpactDamageModifierModifierStack; // 0x600 (0xC)
	float CorrosiveStatusEffectDamageModifier; // 0x60C (0x4)
	float CorrosiveStatusEffectDamageModifierBaseValue; // 0x610 (0x4)
	struct TArray_UAttributeModifierPtr CorrosiveStatusEffectDamageModifierModifierStack; // 0x614 (0xC)
	float IncendiaryImpactDamageModifier; // 0x620 (0x4)
	float IncendiaryImpactDamageModifierBaseValue; // 0x624 (0x4)
	struct TArray_UAttributeModifierPtr IncendiaryImpactDamageModifierModifierStack; // 0x628 (0xC)
	float IncendiaryStatusEffectDamageModifier; // 0x634 (0x4)
	float IncendiaryStatusEffectDamageModifierBaseValue; // 0x638 (0x4)
	struct TArray_UAttributeModifierPtr IncendiaryStatusEffectDamageModifierModifierStack; // 0x63C (0xC)
	float AmpImpactDamageModifier; // 0x648 (0x4)
	float AmpImpactDamageModifierBaseValue; // 0x64C (0x4)
	struct TArray_UAttributeModifierPtr AmpImpactDamageModifierModifierStack; // 0x650 (0xC)
	float AmpStatusEffectDamageModifier; // 0x65C (0x4)
	float AmpStatusEffectDamageModifierBaseValue; // 0x660 (0x4)
	struct TArray_UAttributeModifierPtr AmpStatusEffectDamageModifierModifierStack; // 0x664 (0xC)
	struct FRecentDamageTracker RecentDamage; // 0x670 (0xC)
	struct FBalanceDefSpawnedActorState BalanceDefinitionState; // 0x67C (0xC)
	int YawLastFrame; // 0x688 (0x4)
	float YawPerSecond; // 0x68C (0x4)
};

struct APawn {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct APawn_Data APawn;
};

// 0x704 
struct AVehicle_Data {
	// Last Offset: 0x690
	struct APawn* Driver; // 0x690 (0x4)
	BOOL bDriving :1 ; // 0x694 (0x4)
	BOOL bDriverIsVisible :1 ; // 0x694 (0x4)
	BOOL bAttachDriver :1 ; // 0x694 (0x4)
	BOOL bTurnInPlace :1 ; // 0x694 (0x4)
	BOOL bSeparateTurretFocus :1 ; // 0x694 (0x4)
	BOOL bFollowLookDir :1 ; // 0x694 (0x4)
	BOOL bHasHandbrake :1 ; // 0x694 (0x4)
	BOOL bScriptedRise :1 ; // 0x694 (0x4)
	BOOL bDuckObstacles :1 ; // 0x694 (0x4)
	BOOL bAvoidReversing :1 ; // 0x694 (0x4)
	BOOL bRetryPathfindingWithDriver :1 ; // 0x694 (0x4)
	BOOL bIgnoreStallZ :1 ; // 0x694 (0x4)
	BOOL bDoExtraNetRelevancyTraces :1 ; // 0x694 (0x4)
	const unsigned long: 0;
	struct TArray_FVector ExitPositions; // 0x698 (0xC)
	float ExitRadius; // 0x6A4 (0x4)
	struct FVector ExitOffset; // 0x6A8 (0xC)
	float Steering; // 0x6B4 (0x4)
	float Throttle; // 0x6B8 (0x4)
	float Rise; // 0x6BC (0x4)
	struct FVector TargetLocationAdjustment; // 0x6C0 (0xC)
	float DriverDamageMult; // 0x6CC (0x4)
	float MomentumMult; // 0x6D0 (0x4)
	struct UClass* CrushedDamageType; // 0x6D4 (0x4)
	float MinCrushSpeed; // 0x6D8 (0x4)
	float ForceCrushPenetration; // 0x6DC (0x4)
	unsigned char StuckCount; // 0x6E0 (0x1)
	const unsigned char Unknown1[0x3]; // 0x6E1 (0x3) > LAST OFFSET
	float ThrottleTime; // 0x6E4 (0x4)
	float StuckTime; // 0x6E8 (0x4)
	float OldSteering; // 0x6EC (0x4)
	float OnlySteeringStartTime; // 0x6F0 (0x4)
	float OldThrottle; // 0x6F4 (0x4)
	float AIMoveCheckTime; // 0x6F8 (0x4)
	float VehicleMovingTime; // 0x6FC (0x4)
	float TurnTime; // 0x700 (0x4)
};

struct AVehicle {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct APawn_Data APawn;
	struct AVehicle_Data AVehicle;
};

// 0x828  (Alignment = 16)
struct ASVehicle_Data {
	// Last Offset: 0x704
	struct USVehicleSimBase* SimObj; // 0x704 (0x4)
	struct TArray_USVehicleWheelPtr Wheels; // 0x708 (0xC)
	struct FVector COMOffset; // 0x714 (0xC)
	struct FVector InertiaTensorMultiplier; // 0x720 (0xC)
	BOOL bStayUpright :1 ; // 0x72C (0x4)
	BOOL bUseSuspensionAxis :1 ; // 0x72C (0x4)
	BOOL bUpdateWheelShapes :1 ; // 0x72C (0x4)
	BOOL bVehicleOnGround :1 ; // 0x72C (0x4)
	BOOL bVehicleOnWater :1 ; // 0x72C (0x4)
	BOOL bIsInverted :1 ; // 0x72C (0x4)
	BOOL bChassisTouchingGround :1 ; // 0x72C (0x4)
	BOOL bWasChassisTouchingGroundLastTick :1 ; // 0x72C (0x4)
	BOOL bCanFlip :1 ; // 0x72C (0x4)
	BOOL bFlipRight :1 ; // 0x72C (0x4)
	BOOL bIsUprighting :1 ; // 0x72C (0x4)
	BOOL bOutputHandbrake :1 ; // 0x72C (0x4)
	BOOL bHoldingDownHandbrake :1 ; // 0x72C (0x4)
	BOOL bAllowPhysFlying :1 ; // 0x72C (0x4)
	const unsigned long: 0;
	float StayUprightRollResistAngle; // 0x730 (0x4)
	float StayUprightPitchResistAngle; // 0x734 (0x4)
	float StayUprightStiffness; // 0x738 (0x4)
	float StayUprightDamping; // 0x73C (0x4)
	struct URB_StayUprightSetup* StayUprightConstraintSetup; // 0x740 (0x4)
	struct URB_ConstraintInstance* StayUprightConstraintInstance; // 0x744 (0x4)
	float HeavySuspensionShiftPercent; // 0x748 (0x4)
	float MaxSpeed; // 0x74C (0x4)
	float MaxAngularVelocity; // 0x750 (0x4)
	float TimeOffGround; // 0x754 (0x4)
	float UprightLiftStrength; // 0x758 (0x4)
	float UprightTorqueStrength; // 0x75C (0x4)
	float UprightTime; // 0x760 (0x4)
	float UprightStartTime; // 0x764 (0x4)
	struct UAudioComponent* EngineSound; // 0x768 (0x4)
	struct UAudioComponent* SquealSound; // 0x76C (0x4)
	struct USoundCue* CollisionSound; // 0x770 (0x4)
	struct USoundCue* EnterVehicleSound; // 0x774 (0x4)
	struct USoundCue* ExitVehicleSound; // 0x778 (0x4)
	float CollisionIntervalSecs; // 0x77C (0x4)
	float CollisionThreshold; // 0x780 (0x4)
	float SquealThreshold; // 0x784 (0x4)
	float SquealLatThreshold; // 0x788 (0x4)
	float LatAngleVolumeMult; // 0x78C (0x4)
	float EngineStartOffsetSecs; // 0x790 (0x4)
	float EngineStopOffsetSecs; // 0x794 (0x4)
	float LastCollisionSoundTime; // 0x798 (0x4)
	float OutputBrake; // 0x79C (0x4)
	float OutputGas; // 0x7A0 (0x4)
	float OutputSteering; // 0x7A4 (0x4)
	float OutputRise; // 0x7A8 (0x4)
	float ForwardVel; // 0x7AC (0x4)
	int NumPoweredWheels; // 0x7B0 (0x4)
	struct FVector BaseOffset; // 0x7B4 (0xC)
	float CamDist; // 0x7C0 (0x4)
	int DriverViewPitch; // 0x7C4 (0x4)
	int DriverViewYaw; // 0x7C8 (0x4)
	const unsigned char Unknown1[0x4]; // 0x7CC (0x4) > LAST OFFSET
	struct FVehicleState VState; // 0x7D0 (0x4C)
	const unsigned char Unknown2[0x4]; // 0x81C (0x4) > LAST OFFSET
	float AngErrorAccumulator; // 0x820 (0x4)
	float RadialImpulseScaling; // 0x824 (0x4)
};

struct ASVehicle {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct APawn_Data APawn;
	struct AVehicle_Data AVehicle;
	struct ASVehicle_Data ASVehicle;
};

// 0x1A4 
struct ARB_ConstraintActor_Data {
	// Last Offset: 0x188
	struct AActor* ConstraintActor1; // 0x188 (0x4)
	struct AActor* ConstraintActor2; // 0x18C (0x4)
	struct URB_ConstraintSetup* ConstraintSetup; // 0x190 (0x4)
	struct URB_ConstraintInstance* ConstraintInstance; // 0x194 (0x4)
	BOOL bDisableCollision :1 ; // 0x198 (0x4)
	BOOL bUpdateActor1RefFrame :1 ; // 0x198 (0x4)
	BOOL bUpdateActor2RefFrame :1 ; // 0x198 (0x4)
	const unsigned long: 0;
	struct AActor* PulleyPivotActor1; // 0x19C (0x4)
	struct AActor* PulleyPivotActor2; // 0x1A0 (0x4)
};

struct ARB_ConstraintActor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ARigidBodyBase_Data ARigidBodyBase;
	struct ARB_ConstraintActor_Data ARB_ConstraintActor;
};

// 0x199 
struct ARB_LineImpulseActor_Data {
	// Last Offset: 0x188
	float ImpulseStrength; // 0x188 (0x4)
	float ImpulseRange; // 0x18C (0x4)
	BOOL bVelChange :1 ; // 0x190 (0x4)
	BOOL bStopAtFirstHit :1 ; // 0x190 (0x4)
	BOOL bCauseFracture :1 ; // 0x190 (0x4)
	const unsigned long: 0;
	struct UArrowComponent* Arrow; // 0x194 (0x4)
	unsigned char ImpulseCount; // 0x198 (0x1)
};

struct ARB_LineImpulseActor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ARigidBodyBase_Data ARigidBodyBase;
	struct ARB_LineImpulseActor_Data ARB_LineImpulseActor;
};

// 0x191 
struct ARB_RadialImpulseActor_Data {
	// Last Offset: 0x188
	struct UDrawSphereComponent* RenderComponent; // 0x188 (0x4)
	struct URB_RadialImpulseComponent* ImpulseComponent; // 0x18C (0x4)
	unsigned char ImpulseCount; // 0x190 (0x1)
};

struct ARB_RadialImpulseActor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ARigidBodyBase_Data ARigidBodyBase;
	struct ARB_RadialImpulseActor_Data ARB_RadialImpulseActor;
};

// 0x190 
struct ARB_Thruster_Data {
	// Last Offset: 0x188
	BOOL bThrustEnabled :1 ; // 0x188 (0x4)
	const unsigned long: 0;
	float ThrustStrength; // 0x18C (0x4)
};

struct ARB_Thruster {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ARigidBodyBase_Data ARigidBodyBase;
	struct ARB_Thruster_Data ARB_Thruster;
};

// 0x214  (Alignment = 16)
struct URB_ConstraintDrawComponent_Data {
	// Last Offset: 0x210
	struct UMaterialInterface* LimitMaterial; // 0x210 (0x4)
};

struct URB_ConstraintDrawComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct URB_ConstraintDrawComponent_Data URB_ConstraintDrawComponent;
};

// 0x224  (Alignment = 16)
struct URB_RadialImpulseComponent_Data {
	// Last Offset: 0x210
	unsigned char ImpulseFalloff; // 0x210 (0x1) (Enum = ERadialImpulseFalloff)
	const unsigned char Unknown1[0x3]; // 0x211 (0x3) > LAST OFFSET
	float ImpulseStrength; // 0x214 (0x4)
	float ImpulseRadius; // 0x218 (0x4)
	BOOL bVelChange :1 ; // 0x21C (0x4)
	BOOL bCauseFracture :1 ; // 0x21C (0x4)
	const unsigned long: 0;
	struct UDrawSphereComponent* PreviewSphere; // 0x220 (0x4)
};

struct URB_RadialImpulseComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct URB_RadialImpulseComponent_Data URB_RadialImpulseComponent;
};

// 0xC4 
struct URB_Handle_Data {
	// Last Offset: 0x5C
	struct UPrimitiveComponent* GrabbedComponent; // 0x5C (0x4)
	struct FName GrabbedBoneName; // 0x60 (0x8)
	int SceneIndex; // 0x68 (0x4)
	BOOL bInHardware :1 ; // 0x6C (0x4)
	BOOL bRotationConstrained :1 ; // 0x6C (0x4)
	BOOL bInterpolating :1 ; // 0x6C (0x4)
	const unsigned long: 0;
	struct FPointer HandleData; // 0x70 (0x4)
	struct FPointer KinActorData; // 0x74 (0x4)
	float LinearDamping; // 0x78 (0x4)
	float LinearStiffness; // 0x7C (0x4)
	struct FVector LinearStiffnessScale3D; // 0x80 (0xC)
	struct FVector LinearDampingScale3D; // 0x8C (0xC)
	float AngularDamping; // 0x98 (0x4)
	float AngularStiffness; // 0x9C (0x4)
	struct FVector Destination; // 0xA0 (0xC)
	struct FVector StepSize; // 0xAC (0xC)
	struct FVector Location; // 0xB8 (0xC)
};

struct URB_Handle {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct URB_Handle_Data URB_Handle;
};

// 0xAC 
struct URB_Spring_Data {
	// Last Offset: 0x5C
	struct UPrimitiveComponent* Component1; // 0x5C (0x4)
	struct FName BoneName1; // 0x60 (0x8)
	struct UPrimitiveComponent* Component2; // 0x68 (0x4)
	struct FName BoneName2; // 0x6C (0x8)
	int SceneIndex; // 0x74 (0x4)
	BOOL bInHardware :1 ; // 0x78 (0x4)
	BOOL bEnableForceMassRatio :1 ; // 0x78 (0x4)
	const unsigned long: 0;
	struct FPointer SpringData; // 0x7C (0x4)
	float TimeSinceActivation; // 0x80 (0x4)
	float MinBodyMass; // 0x84 (0x4)
	float SpringSaturateDist; // 0x88 (0x4)
	float SpringMaxForce; // 0x8C (0x4)
	float MaxForceMassRatio; // 0x90 (0x4)
	struct FInterpCurveFloat SpringMaxForceTimeScale; // 0x94 (0x10)
	float DampSaturateVel; // 0xA4 (0x4)
	float DampMaxForce; // 0xA8 (0x4)
};

struct URB_Spring {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct URB_Spring_Data URB_Spring;
};

// 0x94 
struct USVehicleSimBase_Data {
	// Last Offset: 0x5C
	float WheelSuspensionStiffness; // 0x5C (0x4)
	float WheelSuspensionDamping; // 0x60 (0x4)
	float WheelSuspensionBias; // 0x64 (0x4)
	float WheelLongExtremumSlip; // 0x68 (0x4)
	float WheelLongExtremumValue; // 0x6C (0x4)
	float WheelLongAsymptoteSlip; // 0x70 (0x4)
	float WheelLongAsymptoteValue; // 0x74 (0x4)
	float WheelLatExtremumSlip; // 0x78 (0x4)
	float WheelLatExtremumValue; // 0x7C (0x4)
	float WheelLatAsymptoteSlip; // 0x80 (0x4)
	float WheelLatAsymptoteValue; // 0x84 (0x4)
	float WheelInertia; // 0x88 (0x4)
	BOOL bWheelSpeedOverride :1 ; // 0x8C (0x4)
	BOOL bClampedFrictionModel :1 ; // 0x8C (0x4)
	BOOL bAutoDrive :1 ; // 0x8C (0x4)
	const unsigned long: 0;
	float AutoDriveSteer; // 0x90 (0x4)
};

struct USVehicleSimBase {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct USVehicleSimBase_Data USVehicleSimBase;
};

// 0xC8 
struct USVehicleSimCar_Data {
	// Last Offset: 0x94
	float ChassisTorqueScale; // 0x94 (0x4)
	struct FInterpCurveFloat MaxSteerAngleCurve; // 0x98 (0x10)
	float SteerSpeed; // 0xA8 (0x4)
	float ReverseThrottle; // 0xAC (0x4)
	float EngineBrakeFactor; // 0xB0 (0x4)
	float MaxBrakeTorque; // 0xB4 (0x4)
	float StopThreshold; // 0xB8 (0x4)
	BOOL bIsDriving :1 ; // 0xBC (0x4)
	const unsigned long: 0;
	float ActualSteering; // 0xC0 (0x4)
	float TimeSinceThrottle; // 0xC4 (0x4)
};

struct USVehicleSimCar {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct USVehicleSimBase_Data USVehicleSimBase;
	struct USVehicleSimCar_Data USVehicleSimCar;
};

// 0xF8 
struct USVehicleSimTank_Data {
	// Last Offset: 0xC8
	float LeftTrackVel; // 0xC8 (0x4)
	float RightTrackVel; // 0xCC (0x4)
	float LeftTrackTorque; // 0xD0 (0x4)
	float RightTrackTorque; // 0xD4 (0x4)
	float MaxEngineTorque; // 0xD8 (0x4)
	float EngineDamping; // 0xDC (0x4)
	float InsideTrackTorqueFactor; // 0xE0 (0x4)
	float SteeringLatStiffnessFactor; // 0xE4 (0x4)
	float TurnInPlaceThrottle; // 0xE8 (0x4)
	float TurnMaxGripReduction; // 0xEC (0x4)
	float TurnGripScaleRate; // 0xF0 (0x4)
	BOOL bTurnInPlaceOnSteer :1 ; // 0xF4 (0x4)
	const unsigned long: 0;
};

struct USVehicleSimTank {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct USVehicleSimBase_Data USVehicleSimBase;
	struct USVehicleSimCar_Data USVehicleSimCar;
	struct USVehicleSimTank_Data USVehicleSimTank;
};

// 0xA0 
struct UActorFactoryApexClothing_Data {
	// Last Offset: 0x8C
	struct TArray_UApexClothingAssetPtr ClothingAssets; // 0x8C (0xC)
	unsigned char ClothingRBChannel; // 0x98 (0x1) (Enum = ERBCollisionChannel)
	const unsigned char Unknown1[0x3]; // 0x99 (0x3) > LAST OFFSET
	struct FRBCollisionChannelContainer ClothingRBCollideWithChannels; // 0x9C (0x4)
};

struct UActorFactoryApexClothing {
	struct UObject_Data UObject;
	struct UActorFactory_Data UActorFactory;
	struct UActorFactorySkeletalMesh_Data UActorFactorySkeletalMesh;
	struct UActorFactoryApexClothing_Data UActorFactoryApexClothing;
};

// 0x48 
struct UApexDestructibleDamageParameters_Data {
	// Last Offset: 0x3C
	struct TArray_FDamagePair DamageMap; // 0x3C (0xC)
};

struct UApexDestructibleDamageParameters {
	struct UObject_Data UObject;
	struct UApexDestructibleDamageParameters_Data UApexDestructibleDamageParameters;
};

// 0x44 
struct UFractureMaterial_Data {
	// Last Offset: 0x3C
	struct UParticleSystem* FractureEffect; // 0x3C (0x4)
	struct USoundCue* FractureSound; // 0x40 (0x4)
};

struct UFractureMaterial {
	struct UObject_Data UObject;
	struct UFractureMaterial_Data UFractureMaterial;
};

// 0xA8 
struct UPhysicalMaterial_Data {
	// Last Offset: 0x3C
	int MaterialIndex; // 0x3C (0x4)
	float Friction; // 0x40 (0x4)
	float Restitution; // 0x44 (0x4)
	BOOL bForceConeFriction :1 ; // 0x48 (0x4)
	BOOL bEnableAnisotropicFriction :1 ; // 0x48 (0x4)
	const unsigned long: 0;
	struct FVector AnisoFrictionDir; // 0x4C (0xC)
	float FrictionV; // 0x58 (0x4)
	float Density; // 0x5C (0x4)
	float AngularDamping; // 0x60 (0x4)
	float LinearDamping; // 0x64 (0x4)
	float MagneticResponse; // 0x68 (0x4)
	float WindResponse; // 0x6C (0x4)
	float ImpactThreshold; // 0x70 (0x4)
	float ImpactReFireDelay; // 0x74 (0x4)
	struct UParticleSystem* ImpactEffect; // 0x78 (0x4)
	struct USoundCue* ImpactSound; // 0x7C (0x4)
	struct UImpactDefinition* ImpactDefinition; // 0x80 (0x4)
	float SlideThreshold; // 0x84 (0x4)
	float SlideReFireDelay; // 0x88 (0x4)
	struct UParticleSystem* SlideEffect; // 0x8C (0x4)
	struct USoundCue* SlideSound; // 0x90 (0x4)
	struct UImpactDefinition* SlideImpactDefinition; // 0x94 (0x4)
	struct USoundCue* FractureSoundExplosion; // 0x98 (0x4)
	struct USoundCue* FractureSoundSingle; // 0x9C (0x4)
	struct UPhysicalMaterial* Parent; // 0xA0 (0x4)
	struct UPhysicalMaterialPropertyBase* PhysicalMaterialProperty; // 0xA4 (0x4)
};

struct UPhysicalMaterial {
	struct UObject_Data UObject;
	struct UPhysicalMaterial_Data UPhysicalMaterial;
};

// 0x3C 
struct UPhysicalMaterialPropertyBase_Data {
	// Last Offset: 0x3C
};

struct UPhysicalMaterialPropertyBase {
	struct UObject_Data UObject;
	struct UPhysicalMaterialPropertyBase_Data UPhysicalMaterialPropertyBase;
};

// 0xA0 
struct UPhysicsAsset_Data {
	// Last Offset: 0x3C
	struct TArray_URB_BodySetupPtr BodySetup; // 0x3C (0xC)
	struct FMap_Mirror BodySetupIndexMap; // 0x48 (0x3C)
	struct TArray_int BoundsBodies; // 0x84 (0xC)
	struct TArray_URB_ConstraintSetupPtr ConstraintSetup; // 0x90 (0xC)
	struct UPhysicsAssetInstance* DefaultInstance; // 0x9C (0x4)
};

struct UPhysicsAsset {
	struct UObject_Data UObject;
	struct UPhysicsAsset_Data UPhysicsAsset;
};

// 0xB4 
struct UPhysicsAssetInstance_Data {
	// Last Offset: 0x3C
	struct AActor* Owner; // 0x3C (0x4)
	int RootBodyIndex; // 0x40 (0x4)
	struct TArray_URB_BodyInstancePtr Bodies; // 0x44 (0xC)
	struct TArray_URB_ConstraintInstancePtr Constraints; // 0x50 (0xC)
	struct FMap_Mirror CollisionDisableTable; // 0x5C (0x3C)
	float LinearSpringScale; // 0x98 (0x4)
	float LinearDampingScale; // 0x9C (0x4)
	float LinearForceLimitScale; // 0xA0 (0x4)
	float AngularSpringScale; // 0xA4 (0x4)
	float AngularDampingScale; // 0xA8 (0x4)
	float AngularForceLimitScale; // 0xAC (0x4)
	BOOL bInitBodies :1 ; // 0xB0 (0x4)
	const unsigned long: 0;
};

struct UPhysicsAssetInstance {
	struct UObject_Data UObject;
	struct UPhysicsAssetInstance_Data UPhysicsAssetInstance;
};

// 0x40 
struct UPhysicsLODVerticalEmitter_Data {
	// Last Offset: 0x3C
	int ParticlePercentage; // 0x3C (0x4)
};

struct UPhysicsLODVerticalEmitter {
	struct UObject_Data UObject;
	struct UPhysicsLODVerticalEmitter_Data UPhysicsLODVerticalEmitter;
};

// 0x9C 
struct URB_BodyInstance_Data {
	// Last Offset: 0x3C
	struct UPrimitiveComponent* OwnerComponent; // 0x3C (0x4)
	int BodyIndex; // 0x40 (0x4)
	struct FVector Velocity; // 0x44 (0xC)
	struct FVector PreviousVelocity; // 0x50 (0xC)
	int SceneIndex; // 0x5C (0x4)
	struct FPointer BodyData; // 0x60 (0x4)
	struct FPointer BoneSpring; // 0x64 (0x4)
	struct FPointer BoneSpringKinActor; // 0x68 (0x4)
	BOOL bEnableBoneSpringLinear :1 ; // 0x6C (0x4)
	BOOL bEnableBoneSpringAngular :1 ; // 0x6C (0x4)
	BOOL bDisableOnOverextension :1 ; // 0x6C (0x4)
	BOOL bNotifyOwnerOnOverextension :1 ; // 0x6C (0x4)
	BOOL bTeleportOnOverextension :1 ; // 0x6C (0x4)
	BOOL bUseKinActorForBoneSpring :1 ; // 0x6C (0x4)
	BOOL bMakeSpringToBaseCollisionComponent :1 ; // 0x6C (0x4)
	BOOL bOnlyCollideWithPawns :1 ; // 0x6C (0x4)
	BOOL bEnableCollisionResponse :1 ; // 0x6C (0x4)
	BOOL bPushBody :1 ; // 0x6C (0x4)
	BOOL bForceUnfixed :1 ; // 0x6C (0x4)
	BOOL bInstanceAlwaysFullAnimWeight :1 ; // 0x6C (0x4)
	const unsigned long: 0;
	float BoneLinearSpring; // 0x70 (0x4)
	float BoneLinearDamping; // 0x74 (0x4)
	float BoneAngularSpring; // 0x78 (0x4)
	float BoneAngularDamping; // 0x7C (0x4)
	float OverextensionThreshold; // 0x80 (0x4)
	float CustomGravityFactor; // 0x84 (0x4)
	float LastEffectPlayedTime; // 0x88 (0x4)
	struct UPhysicalMaterial* PhysMaterialOverride; // 0x8C (0x4)
	float ContactReportForceThreshold; // 0x90 (0x4)
	float InstanceMassScale; // 0x94 (0x4)
	float InstanceDampingScale; // 0x98 (0x4)
};

struct URB_BodyInstance {
	struct UObject_Data UObject;
	struct URB_BodyInstance_Data URB_BodyInstance;
};

// 0xAC  (Alignment = 16)
struct URB_ConstraintInstance_Data {
	// Last Offset: 0x3C
	struct AActor* Owner; // 0x3C (0x4)
	struct UPrimitiveComponent* OwnerComponent; // 0x40 (0x4)
	int ConstraintIndex; // 0x44 (0x4)
	int SceneIndex; // 0x48 (0x4)
	BOOL bInHardware :1 ; // 0x4C (0x4)
	BOOL bLinearXPositionDrive :1 ; // 0x4C (0x4)
	BOOL bLinearXVelocityDrive :1 ; // 0x4C (0x4)
	BOOL bLinearYPositionDrive :1 ; // 0x4C (0x4)
	BOOL bLinearYVelocityDrive :1 ; // 0x4C (0x4)
	BOOL bLinearZPositionDrive :1 ; // 0x4C (0x4)
	BOOL bLinearZVelocityDrive :1 ; // 0x4C (0x4)
	BOOL bSwingPositionDrive :1 ; // 0x4C (0x4)
	BOOL bSwingVelocityDrive :1 ; // 0x4C (0x4)
	BOOL bTwistPositionDrive :1 ; // 0x4C (0x4)
	BOOL bTwistVelocityDrive :1 ; // 0x4C (0x4)
	BOOL bAngularSlerpDrive :1 ; // 0x4C (0x4)
	BOOL bTerminated :1 ; // 0x4C (0x4)
	const unsigned long: 0;
	struct FPointer ConstraintData; // 0x50 (0x4)
	struct FVector LinearPositionTarget; // 0x54 (0xC)
	struct FVector LinearVelocityTarget; // 0x60 (0xC)
	float LinearDriveSpring; // 0x6C (0x4)
	float LinearDriveDamping; // 0x70 (0x4)
	float LinearDriveForceLimit; // 0x74 (0x4)
	const unsigned char Unknown1[0x8]; // 0x78 (0x8) > LAST OFFSET
	struct FQuat AngularPositionTarget; // 0x80 (0x10)
	struct FVector AngularVelocityTarget; // 0x90 (0xC)
	float AngularDriveSpring; // 0x9C (0x4)
	float AngularDriveDamping; // 0xA0 (0x4)
	float AngularDriveForceLimit; // 0xA4 (0x4)
	struct FPointer DummyKinActor; // 0xA8 (0x4)
};

struct URB_ConstraintInstance {
	struct UObject_Data UObject;
	struct URB_ConstraintInstance_Data URB_ConstraintInstance;
};

// 0x100 
struct URB_ConstraintSetup_Data {
	// Last Offset: 0x3C
	struct FName JointName; // 0x3C (0x8)
	struct FName ConstraintBone1; // 0x44 (0x8)
	struct FName ConstraintBone2; // 0x4C (0x8)
	struct FVector Pos1; // 0x54 (0xC)
	struct FVector PriAxis1; // 0x60 (0xC)
	struct FVector SecAxis1; // 0x6C (0xC)
	struct FVector Pos2; // 0x78 (0xC)
	struct FVector PriAxis2; // 0x84 (0xC)
	struct FVector SecAxis2; // 0x90 (0xC)
	struct FVector PulleyPivot1; // 0x9C (0xC)
	struct FVector PulleyPivot2; // 0xA8 (0xC)
	BOOL bEnableProjection :1 ; // 0xB4 (0x4)
	BOOL bLinearLimitSoft :1 ; // 0xB4 (0x4)
	BOOL bLinearBreakable :1 ; // 0xB4 (0x4)
	BOOL bSwingLimited :1 ; // 0xB4 (0x4)
	BOOL bTwistLimited :1 ; // 0xB4 (0x4)
	BOOL bSwingLimitSoft :1 ; // 0xB4 (0x4)
	BOOL bTwistLimitSoft :1 ; // 0xB4 (0x4)
	BOOL bAngularBreakable :1 ; // 0xB4 (0x4)
	BOOL bIsPulley :1 ; // 0xB4 (0x4)
	BOOL bMaintainMinDistance :1 ; // 0xB4 (0x4)
	const unsigned long: 0;
	struct FLinearDOFSetup LinearXSetup; // 0xB8 (0x8)
	struct FLinearDOFSetup LinearYSetup; // 0xC0 (0x8)
	struct FLinearDOFSetup LinearZSetup; // 0xC8 (0x8)
	float LinearLimitStiffness; // 0xD0 (0x4)
	float LinearLimitDamping; // 0xD4 (0x4)
	float LinearBreakThreshold; // 0xD8 (0x4)
	float Swing1LimitAngle; // 0xDC (0x4)
	float Swing2LimitAngle; // 0xE0 (0x4)
	float TwistLimitAngle; // 0xE4 (0x4)
	float SwingLimitStiffness; // 0xE8 (0x4)
	float SwingLimitDamping; // 0xEC (0x4)
	float TwistLimitStiffness; // 0xF0 (0x4)
	float TwistLimitDamping; // 0xF4 (0x4)
	float AngularBreakThreshold; // 0xF8 (0x4)
	float PulleyRatio; // 0xFC (0x4)
};

struct URB_ConstraintSetup {
	struct UObject_Data UObject;
	struct URB_ConstraintSetup_Data URB_ConstraintSetup;
};

// 0x100 
struct URB_BSJointSetup_Data {
	// Last Offset: 0x100
};

struct URB_BSJointSetup {
	struct UObject_Data UObject;
	struct URB_ConstraintSetup_Data URB_ConstraintSetup;
	struct URB_BSJointSetup_Data URB_BSJointSetup;
};

// 0x100 
struct URB_DistanceJointSetup_Data {
	// Last Offset: 0x100
};

struct URB_DistanceJointSetup {
	struct UObject_Data UObject;
	struct URB_ConstraintSetup_Data URB_ConstraintSetup;
	struct URB_DistanceJointSetup_Data URB_DistanceJointSetup;
};

// 0x100 
struct URB_HingeSetup_Data {
	// Last Offset: 0x100
};

struct URB_HingeSetup {
	struct UObject_Data UObject;
	struct URB_ConstraintSetup_Data URB_ConstraintSetup;
	struct URB_HingeSetup_Data URB_HingeSetup;
};

// 0x100 
struct URB_PrismaticSetup_Data {
	// Last Offset: 0x100
};

struct URB_PrismaticSetup {
	struct UObject_Data UObject;
	struct URB_ConstraintSetup_Data URB_ConstraintSetup;
	struct URB_PrismaticSetup_Data URB_PrismaticSetup;
};

// 0x100 
struct URB_PulleyJointSetup_Data {
	// Last Offset: 0x100
};

struct URB_PulleyJointSetup {
	struct UObject_Data UObject;
	struct URB_ConstraintSetup_Data URB_ConstraintSetup;
	struct URB_PulleyJointSetup_Data URB_PulleyJointSetup;
};

// 0x100 
struct URB_SkelJointSetup_Data {
	// Last Offset: 0x100
};

struct URB_SkelJointSetup {
	struct UObject_Data UObject;
	struct URB_ConstraintSetup_Data URB_ConstraintSetup;
	struct URB_SkelJointSetup_Data URB_SkelJointSetup;
};

// 0x100 
struct URB_StayUprightSetup_Data {
	// Last Offset: 0x100
};

struct URB_StayUprightSetup {
	struct UObject_Data UObject;
	struct URB_ConstraintSetup_Data URB_ConstraintSetup;
	struct URB_StayUprightSetup_Data URB_StayUprightSetup;
};

// 0x120 
struct USVehicleWheel_Data {
	// Last Offset: 0x48
	float Steer; // 0x48 (0x4)
	float MotorTorque; // 0x4C (0x4)
	float BrakeTorque; // 0x50 (0x4)
	float ChassisTorque; // 0x54 (0x4)
	BOOL bPoweredWheel :1 ; // 0x58 (0x4)
	BOOL bHoverWheel :1 ; // 0x58 (0x4)
	BOOL bNoContactWheel :1 ; // 0x58 (0x4)
	BOOL bCollidesVehicles :1 ; // 0x58 (0x4)
	BOOL bCollidesPawns :1 ; // 0x58 (0x4)
	BOOL bIsSquealing :1 ; // 0x58 (0x4)
	BOOL bWheelOnGround :1 ; // 0x58 (0x4)
	BOOL bForceWantsParticleComponent :1 ; // 0x58 (0x4)
	const unsigned long: 0;
	float SteerFactor; // 0x5C (0x4)
	struct FName SkelControlName; // 0x60 (0x8)
	struct USkelControlWheel* WheelControl; // 0x68 (0x4)
	struct FName BoneName; // 0x6C (0x8)
	struct FVector BoneOffset; // 0x74 (0xC)
	float WheelRadius; // 0x80 (0x4)
	float SuspensionTravel; // 0x84 (0x4)
	float SuspensionSpeed; // 0x88 (0x4)
	struct UParticleSystem* WheelParticleSystem; // 0x8C (0x4)
	unsigned char Side; // 0x90 (0x1) (Enum = EWheelSide)
	const unsigned char Unknown1[0x3]; // 0x91 (0x3) > LAST OFFSET
	float LongSlipFactor; // 0x94 (0x4)
	float LatSlipFactor; // 0x98 (0x4)
	float HandbrakeLongSlipFactor; // 0x9C (0x4)
	float HandbrakeLatSlipFactor; // 0xA0 (0x4)
	float ParkedSlipFactorLat; // 0xA4 (0x4)
	float ParkedSlipFactorLong; // 0xA8 (0x4)
	struct FVector WheelPosition; // 0xAC (0xC)
	float SpinVel; // 0xB8 (0x4)
	float LongSlipRatio; // 0xBC (0x4)
	float LatSlipAngle; // 0xC0 (0x4)
	struct FVector ContactNormal; // 0xC4 (0xC)
	struct FVector LongDirection; // 0xD0 (0xC)
	struct FVector LatDirection; // 0xDC (0xC)
	float ContactForce; // 0xE8 (0x4)
	float LongImpulse; // 0xEC (0x4)
	float LatImpulse; // 0xF0 (0x4)
	struct UPhysicalMaterial* ContactPhysMat; // 0xF4 (0x4)
	float WaterContactZOffset; // 0xF8 (0x4)
	float DesiredSuspensionPosition; // 0xFC (0x4)
	float SuspensionPosition; // 0x100 (0x4)
	float CurrentRotation; // 0x104 (0x4)
	struct FPointer WheelShape; // 0x108 (0x4)
	int WheelMaterialIndex; // 0x10C (0x4)
	struct UClass* WheelPSCClass; // 0x110 (0x4)
	struct UParticleSystemComponent* WheelParticleComp; // 0x114 (0x4)
	struct FName SlipParticleParamName; // 0x118 (0x8)
};

struct USVehicleWheel {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct USVehicleWheel_Data USVehicleWheel;
};

// 0x288 
struct ANxGenericForceFieldBrush_Data {
	// Last Offset: 0x1BC
	int ExcludeChannel; // 0x1BC (0x4)
	struct FRBCollisionChannelContainer CollideWithChannels; // 0x1C0 (0x4)
	unsigned char RBChannel; // 0x1C4 (0x1) (Enum = ERBCollisionChannel)
	unsigned char Coordinates; // 0x1C5 (0x1) (Enum = FFB_ForceFieldCoordinates)
	const unsigned char Unknown1[0x2]; // 0x1C6 (0x2) > LAST OFFSET
	struct FVector Constant; // 0x1C8 (0xC)
	struct FVector PositionMultiplierX; // 0x1D4 (0xC)
	struct FVector PositionMultiplierY; // 0x1E0 (0xC)
	struct FVector PositionMultiplierZ; // 0x1EC (0xC)
	struct FVector PositionTarget; // 0x1F8 (0xC)
	struct FVector VelocityMultiplierX; // 0x204 (0xC)
	struct FVector VelocityMultiplierY; // 0x210 (0xC)
	struct FVector VelocityMultiplierZ; // 0x21C (0xC)
	struct FVector VelocityTarget; // 0x228 (0xC)
	struct FVector Noise; // 0x234 (0xC)
	struct FVector FalloffLinear; // 0x240 (0xC)
	struct FVector FalloffQuadratic; // 0x24C (0xC)
	float TorusRadius; // 0x258 (0x4)
	struct FPointer ForceField; // 0x25C (0x4)
	struct TArray_FPointer ConvexMeshes; // 0x260 (0xC)
	struct TArray_FPointer ExclusionShapes; // 0x26C (0xC)
	struct TArray_FPointer ExclusionShapePoses; // 0x278 (0xC)
	struct FPointer LinearKernel; // 0x284 (0x4)
};

struct ANxGenericForceFieldBrush {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ABrush_Data ABrush;
	struct AVolume_Data AVolume;
	struct ANxGenericForceFieldBrush_Data ANxGenericForceFieldBrush;
};

// 0x1C0 
struct ARB_ForceFieldExcludeVolume_Data {
	// Last Offset: 0x1BC
	int ForceFieldChannel; // 0x1BC (0x4)
};

struct ARB_ForceFieldExcludeVolume {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ABrush_Data ABrush;
	struct AVolume_Data AVolume;
	struct ARB_ForceFieldExcludeVolume_Data ARB_ForceFieldExcludeVolume;
};

// 0x1C8 
struct ANxForceField_Data {
	// Last Offset: 0x188
	int ExcludeChannel; // 0x188 (0x4)
	BOOL bForceActive :1 ; // 0x18C (0x4)
	const unsigned long: 0;
	struct FRBCollisionChannelContainer CollideWithChannels; // 0x190 (0x4)
	unsigned char RBChannel; // 0x194 (0x1) (Enum = ERBCollisionChannel)
	const unsigned char Unknown1[0x3]; // 0x195 (0x3) > LAST OFFSET
	struct FPointer ForceField; // 0x198 (0x4)
	struct TArray_FPointer ConvexMeshes; // 0x19C (0xC)
	struct TArray_FPointer ExclusionShapes; // 0x1A8 (0xC)
	struct TArray_FPointer ExclusionShapePoses; // 0x1B4 (0xC)
	struct FPointer U2NRotation; // 0x1C0 (0x4)
	int SceneIndex; // 0x1C4 (0x4)
};

struct ANxForceField {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ANxForceField_Data ANxForceField;
};

// 0x1F4 
struct ANxCylindricalForceField_Data {
	// Last Offset: 0x1C8
	float RadialStrength; // 0x1C8 (0x4)
	float RotationalStrength; // 0x1CC (0x4)
	float LiftStrength; // 0x1D0 (0x4)
	float ForceRadius; // 0x1D4 (0x4)
	float ForceTopRadius; // 0x1D8 (0x4)
	float LiftFalloffHeight; // 0x1DC (0x4)
	float EscapeVelocity; // 0x1E0 (0x4)
	float ForceHeight; // 0x1E4 (0x4)
	float HeightOffset; // 0x1E8 (0x4)
	BOOL UseSpecialRadialForce :1 ; // 0x1EC (0x4)
	const unsigned long: 0;
	struct FPointer Kernel; // 0x1F0 (0x4)
};

struct ANxCylindricalForceField {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ANxForceField_Data ANxForceField;
	struct ANxCylindricalForceField_Data ANxCylindricalForceField;
};

// 0x1F8 
struct ANxCylindricalForceFieldCapsule_Data {
	// Last Offset: 0x1F4
	struct UDrawCapsuleComponent* RenderComponent; // 0x1F4 (0x4)
};

struct ANxCylindricalForceFieldCapsule {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ANxForceField_Data ANxForceField;
	struct ANxCylindricalForceField_Data ANxCylindricalForceField;
	struct ANxCylindricalForceFieldCapsule_Data ANxCylindricalForceFieldCapsule;
};

// 0x278 
struct ANxForceFieldGeneric_Data {
	// Last Offset: 0x1C8
	struct UForceFieldShape* Shape; // 0x1C8 (0x4)
	struct UActorComponent* DrawComponent; // 0x1CC (0x4)
	float RoughExtentX; // 0x1D0 (0x4)
	float RoughExtentY; // 0x1D4 (0x4)
	float RoughExtentZ; // 0x1D8 (0x4)
	unsigned char Coordinates; // 0x1DC (0x1) (Enum = FFG_ForceFieldCoordinates)
	const unsigned char Unknown1[0x3]; // 0x1DD (0x3) > LAST OFFSET
	struct FVector Constant; // 0x1E0 (0xC)
	struct FVector PositionMultiplierX; // 0x1EC (0xC)
	struct FVector PositionMultiplierY; // 0x1F8 (0xC)
	struct FVector PositionMultiplierZ; // 0x204 (0xC)
	struct FVector PositionTarget; // 0x210 (0xC)
	struct FVector VelocityMultiplierX; // 0x21C (0xC)
	struct FVector VelocityMultiplierY; // 0x228 (0xC)
	struct FVector VelocityMultiplierZ; // 0x234 (0xC)
	struct FVector VelocityTarget; // 0x240 (0xC)
	struct FVector Noise; // 0x24C (0xC)
	struct FVector FalloffLinear; // 0x258 (0xC)
	struct FVector FalloffQuadratic; // 0x264 (0xC)
	float TorusRadius; // 0x270 (0x4)
	struct FPointer LinearKernel; // 0x274 (0x4)
};

struct ANxForceFieldGeneric {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ANxForceField_Data ANxForceField;
	struct ANxForceFieldGeneric_Data ANxForceFieldGeneric;
};

// 0x1E4 
struct ANxForceFieldRadial_Data {
	// Last Offset: 0x1C8
	struct UForceFieldShape* Shape; // 0x1C8 (0x4)
	struct UActorComponent* DrawComponent; // 0x1CC (0x4)
	float ForceStrength; // 0x1D0 (0x4)
	float ForceRadius; // 0x1D4 (0x4)
	float SelfRotationStrength; // 0x1D8 (0x4)
	unsigned char ForceFalloff; // 0x1DC (0x1) (Enum = ERadialImpulseFalloff)
	const unsigned char Unknown1[0x3]; // 0x1DD (0x3) > LAST OFFSET
	struct FPointer Kernel; // 0x1E0 (0x4)
};

struct ANxForceFieldRadial {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ANxForceField_Data ANxForceField;
	struct ANxForceFieldRadial_Data ANxForceFieldRadial;
};

// 0x200 
struct ANxForceFieldTornado_Data {
	// Last Offset: 0x1C8
	struct UForceFieldShape* Shape; // 0x1C8 (0x4)
	struct UActorComponent* DrawComponent; // 0x1CC (0x4)
	float RadialStrength; // 0x1D0 (0x4)
	float RotationalStrength; // 0x1D4 (0x4)
	float LiftStrength; // 0x1D8 (0x4)
	float ForceRadius; // 0x1DC (0x4)
	float ForceTopRadius; // 0x1E0 (0x4)
	float LiftFalloffHeight; // 0x1E4 (0x4)
	float EscapeVelocity; // 0x1E8 (0x4)
	float ForceHeight; // 0x1EC (0x4)
	float HeightOffset; // 0x1F0 (0x4)
	BOOL BSpecialRadialForceMode :1 ; // 0x1F4 (0x4)
	const unsigned long: 0;
	float SelfRotationStrength; // 0x1F8 (0x4)
	struct FPointer Kernel; // 0x1FC (0x4)
};

struct ANxForceFieldTornado {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ANxForceField_Data ANxForceField;
	struct ANxForceFieldTornado_Data ANxForceFieldTornado;
};

// 0x264 
struct ANxGenericForceField_Data {
	// Last Offset: 0x1C8
	unsigned char Coordinates; // 0x1C8 (0x1) (Enum = FFG_ForceFieldCoordinates)
	const unsigned char Unknown1[0x3]; // 0x1C9 (0x3) > LAST OFFSET
	struct FVector Constant; // 0x1CC (0xC)
	struct FVector PositionMultiplierX; // 0x1D8 (0xC)
	struct FVector PositionMultiplierY; // 0x1E4 (0xC)
	struct FVector PositionMultiplierZ; // 0x1F0 (0xC)
	struct FVector PositionTarget; // 0x1FC (0xC)
	struct FVector VelocityMultiplierX; // 0x208 (0xC)
	struct FVector VelocityMultiplierY; // 0x214 (0xC)
	struct FVector VelocityMultiplierZ; // 0x220 (0xC)
	struct FVector VelocityTarget; // 0x22C (0xC)
	struct FVector Noise; // 0x238 (0xC)
	struct FVector FalloffLinear; // 0x244 (0xC)
	struct FVector FalloffQuadratic; // 0x250 (0xC)
	float TorusRadius; // 0x25C (0x4)
	struct FPointer LinearKernel; // 0x260 (0x4)
};

struct ANxGenericForceField {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ANxForceField_Data ANxForceField;
	struct ANxGenericForceField_Data ANxGenericForceField;
};

// 0x274 
struct ANxGenericForceFieldBox_Data {
	// Last Offset: 0x264
	struct UDrawBoxComponent* RenderComponent; // 0x264 (0x4)
	struct FVector BoxExtent; // 0x268 (0xC)
};

struct ANxGenericForceFieldBox {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ANxForceField_Data ANxForceField;
	struct ANxGenericForceField_Data ANxGenericForceField;
	struct ANxGenericForceFieldBox_Data ANxGenericForceFieldBox;
};

// 0x270 
struct ANxGenericForceFieldCapsule_Data {
	// Last Offset: 0x264
	struct UDrawCapsuleComponent* RenderComponent; // 0x264 (0x4)
	float CapsuleHeight; // 0x268 (0x4)
	float CapsuleRadius; // 0x26C (0x4)
};

struct ANxGenericForceFieldCapsule {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ANxForceField_Data ANxForceField;
	struct ANxGenericForceField_Data ANxGenericForceField;
	struct ANxGenericForceFieldCapsule_Data ANxGenericForceFieldCapsule;
};

// 0x1DC 
struct ANxRadialForceField_Data {
	// Last Offset: 0x1C8
	struct UDrawSphereComponent* RenderComponent; // 0x1C8 (0x4)
	float ForceStrength; // 0x1CC (0x4)
	float ForceRadius; // 0x1D0 (0x4)
	unsigned char ForceFalloff; // 0x1D4 (0x1) (Enum = ERadialImpulseFalloff)
	const unsigned char Unknown1[0x3]; // 0x1D5 (0x3) > LAST OFFSET
	struct FPointer LinearKernel; // 0x1D8 (0x4)
};

struct ANxRadialForceField {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ANxForceField_Data ANxForceField;
	struct ANxRadialForceField_Data ANxRadialForceField;
};

// 0x1E4 
struct ANxRadialCustomForceField_Data {
	// Last Offset: 0x1DC
	float SelfRotationStrength; // 0x1DC (0x4)
	struct FPointer Kernel; // 0x1E0 (0x4)
};

struct ANxRadialCustomForceField {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ANxForceField_Data ANxForceField;
	struct ANxRadialForceField_Data ANxRadialForceField;
	struct ANxRadialCustomForceField_Data ANxRadialCustomForceField;
};

// 0x1F8 
struct ANxTornadoAngularForceField_Data {
	// Last Offset: 0x1C8
	float RadialStrength; // 0x1C8 (0x4)
	float RotationalStrength; // 0x1CC (0x4)
	float LiftStrength; // 0x1D0 (0x4)
	float ForceRadius; // 0x1D4 (0x4)
	float ForceTopRadius; // 0x1D8 (0x4)
	float LiftFalloffHeight; // 0x1DC (0x4)
	float EscapeVelocity; // 0x1E0 (0x4)
	float ForceHeight; // 0x1E4 (0x4)
	float HeightOffset; // 0x1E8 (0x4)
	BOOL BSpecialRadialForceMode :1 ; // 0x1EC (0x4)
	const unsigned long: 0;
	float SelfRotationStrength; // 0x1F0 (0x4)
	struct FPointer Kernel; // 0x1F4 (0x4)
};

struct ANxTornadoAngularForceField {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ANxForceField_Data ANxForceField;
	struct ANxTornadoAngularForceField_Data ANxTornadoAngularForceField;
};

// 0x1FC 
struct ANxTornadoAngularForceFieldCapsule_Data {
	// Last Offset: 0x1F8
	struct UDrawCapsuleComponent* RenderComponent; // 0x1F8 (0x4)
};

struct ANxTornadoAngularForceFieldCapsule {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ANxForceField_Data ANxForceField;
	struct ANxTornadoAngularForceField_Data ANxTornadoAngularForceField;
	struct ANxTornadoAngularForceFieldCapsule_Data ANxTornadoAngularForceFieldCapsule;
};

// 0x1F4 
struct ANxTornadoForceField_Data {
	// Last Offset: 0x1C8
	float RadialStrength; // 0x1C8 (0x4)
	float RotationalStrength; // 0x1CC (0x4)
	float LiftStrength; // 0x1D0 (0x4)
	float ForceRadius; // 0x1D4 (0x4)
	float ForceTopRadius; // 0x1D8 (0x4)
	float LiftFalloffHeight; // 0x1DC (0x4)
	float EscapeVelocity; // 0x1E0 (0x4)
	float ForceHeight; // 0x1E4 (0x4)
	float HeightOffset; // 0x1E8 (0x4)
	BOOL BSpecialRadialForceMode :1 ; // 0x1EC (0x4)
	const unsigned long: 0;
	struct FPointer Kernel; // 0x1F0 (0x4)
};

struct ANxTornadoForceField {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ANxForceField_Data ANxForceField;
	struct ANxTornadoForceField_Data ANxTornadoForceField;
};

// 0x1F8 
struct ANxTornadoForceFieldCapsule_Data {
	// Last Offset: 0x1F4
	struct UDrawCapsuleComponent* RenderComponent; // 0x1F4 (0x4)
};

struct ANxTornadoForceFieldCapsule {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ANxForceField_Data ANxForceField;
	struct ANxTornadoForceField_Data ANxTornadoForceField;
	struct ANxTornadoForceFieldCapsule_Data ANxTornadoForceFieldCapsule;
};

// 0x18C 
struct ANxForceFieldSpawnable_Data {
	// Last Offset: 0x188
	struct UNxForceFieldComponent* ForceFieldComponent; // 0x188 (0x4)
};

struct ANxForceFieldSpawnable {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ANxForceFieldSpawnable_Data ANxForceFieldSpawnable;
};

// 0x1B8 
struct ARB_CylindricalForceActor_Data {
	// Last Offset: 0x188
	struct UDrawCylinderComponent* RenderComponent; // 0x188 (0x4)
	float RadialStrength; // 0x18C (0x4)
	float RotationalStrength; // 0x190 (0x4)
	float LiftStrength; // 0x194 (0x4)
	float LiftFalloffHeight; // 0x198 (0x4)
	float EscapeVelocity; // 0x19C (0x4)
	float ForceRadius; // 0x1A0 (0x4)
	float ForceTopRadius; // 0x1A4 (0x4)
	float ForceHeight; // 0x1A8 (0x4)
	float HeightOffset; // 0x1AC (0x4)
	BOOL bForceActive :1 ; // 0x1B0 (0x4)
	BOOL bForceApplyToCloth :1 ; // 0x1B0 (0x4)
	BOOL bForceApplyToFluid :1 ; // 0x1B0 (0x4)
	BOOL bForceApplyToRigidBodies :1 ; // 0x1B0 (0x4)
	BOOL bForceApplyToProjectiles :1 ; // 0x1B0 (0x4)
	const unsigned long: 0;
	struct FRBCollisionChannelContainer CollideWithChannels; // 0x1B4 (0x4)
};

struct ARB_CylindricalForceActor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ARigidBodyBase_Data ARigidBodyBase;
	struct ARB_CylindricalForceActor_Data ARB_CylindricalForceActor;
};

// 0x1A8 
struct ARB_RadialForceActor_Data {
	// Last Offset: 0x188
	struct UDrawSphereComponent* RenderComponent; // 0x188 (0x4)
	float ForceStrength; // 0x18C (0x4)
	float ForceRadius; // 0x190 (0x4)
	float SwirlStrength; // 0x194 (0x4)
	float SpinTorque; // 0x198 (0x4)
	unsigned char ForceFalloff; // 0x19C (0x1) (Enum = ERadialImpulseFalloff)
	unsigned char RadialForceMode; // 0x19D (0x1) (Enum = ERadialForceType)
	const unsigned char Unknown1[0x2]; // 0x19E (0x2) > LAST OFFSET
	BOOL bForceActive :1 ; // 0x1A0 (0x4)
	BOOL bForceApplyToCloth :1 ; // 0x1A0 (0x4)
	BOOL bForceApplyToFluid :1 ; // 0x1A0 (0x4)
	BOOL bForceApplyToRigidBodies :1 ; // 0x1A0 (0x4)
	BOOL bForceApplyToProjectiles :1 ; // 0x1A0 (0x4)
	const unsigned long: 0;
	struct FRBCollisionChannelContainer CollideWithChannels; // 0x1A4 (0x4)
};

struct ARB_RadialForceActor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ARigidBodyBase_Data ARigidBodyBase;
	struct ARB_RadialForceActor_Data ARB_RadialForceActor;
};

// 0x260  (Alignment = 16)
struct UNxForceFieldComponent_Data {
	// Last Offset: 0x210
	struct UForceFieldShape* Shape; // 0x210 (0x4)
	struct UActorComponent* DrawComponent; // 0x214 (0x4)
	int ExcludeChannel; // 0x218 (0x4)
	BOOL bForceActive :1 ; // 0x21C (0x4)
	BOOL bDestroyWhenInactive :1 ; // 0x21C (0x4)
	const unsigned long: 0;
	struct FRBCollisionChannelContainer CollideWithChannels; // 0x220 (0x4)
	float Duration; // 0x224 (0x4)
	struct FPointer ForceField; // 0x228 (0x4)
	struct TArray_FPointer ConvexMeshes; // 0x22C (0xC)
	struct TArray_FPointer ExclusionShapes; // 0x238 (0xC)
	struct TArray_FPointer ExclusionShapePoses; // 0x244 (0xC)
	int SceneIndex; // 0x250 (0x4)
	float ElapsedTime; // 0x254 (0x4)
	struct UPrimitiveComponent* RenderComponent; // 0x258 (0x4)
	struct FPointer RBPhysScene; // 0x25C (0x4)
};

struct UNxForceFieldComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UNxForceFieldComponent_Data UNxForceFieldComponent;
};

// 0x28C  (Alignment = 16)
struct UNxForceFieldCylindricalComponent_Data {
	// Last Offset: 0x260
	float RadialStrength; // 0x260 (0x4)
	float RotationalStrength; // 0x264 (0x4)
	float LiftStrength; // 0x268 (0x4)
	float ForceRadius; // 0x26C (0x4)
	float ForceTopRadius; // 0x270 (0x4)
	float LiftFalloffHeight; // 0x274 (0x4)
	float EscapeVelocity; // 0x278 (0x4)
	float ForceHeight; // 0x27C (0x4)
	float HeightOffset; // 0x280 (0x4)
	BOOL UseSpecialRadialForce :1 ; // 0x284 (0x4)
	const unsigned long: 0;
	struct FPointer Kernel; // 0x288 (0x4)
};

struct UNxForceFieldCylindricalComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UNxForceFieldComponent_Data UNxForceFieldComponent;
	struct UNxForceFieldCylindricalComponent_Data UNxForceFieldCylindricalComponent;
};

// 0x308  (Alignment = 16)
struct UNxForceFieldGenericComponent_Data {
	// Last Offset: 0x260
	float RoughExtentX; // 0x260 (0x4)
	float RoughExtentY; // 0x264 (0x4)
	float RoughExtentZ; // 0x268 (0x4)
	unsigned char Coordinates; // 0x26C (0x1) (Enum = FFG_ForceFieldCoordinates)
	const unsigned char Unknown1[0x3]; // 0x26D (0x3) > LAST OFFSET
	struct FVector Constant; // 0x270 (0xC)
	struct FVector PositionMultiplierX; // 0x27C (0xC)
	struct FVector PositionMultiplierY; // 0x288 (0xC)
	struct FVector PositionMultiplierZ; // 0x294 (0xC)
	struct FVector PositionTarget; // 0x2A0 (0xC)
	struct FVector VelocityMultiplierX; // 0x2AC (0xC)
	struct FVector VelocityMultiplierY; // 0x2B8 (0xC)
	struct FVector VelocityMultiplierZ; // 0x2C4 (0xC)
	struct FVector VelocityTarget; // 0x2D0 (0xC)
	struct FVector Noise; // 0x2DC (0xC)
	struct FVector FalloffLinear; // 0x2E8 (0xC)
	struct FVector FalloffQuadratic; // 0x2F4 (0xC)
	float TorusRadius; // 0x300 (0x4)
	struct FPointer Kernel; // 0x304 (0x4)
};

struct UNxForceFieldGenericComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UNxForceFieldComponent_Data UNxForceFieldComponent;
	struct UNxForceFieldGenericComponent_Data UNxForceFieldGenericComponent;
};

// 0x274  (Alignment = 16)
struct UNxForceFieldRadialComponent_Data {
	// Last Offset: 0x260
	float ForceStrength; // 0x260 (0x4)
	float ForceRadius; // 0x264 (0x4)
	float SelfRotationStrength; // 0x268 (0x4)
	unsigned char ForceFalloff; // 0x26C (0x1) (Enum = ERadialImpulseFalloff)
	const unsigned char Unknown1[0x3]; // 0x26D (0x3) > LAST OFFSET
	struct FPointer Kernel; // 0x270 (0x4)
};

struct UNxForceFieldRadialComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UNxForceFieldComponent_Data UNxForceFieldComponent;
	struct UNxForceFieldRadialComponent_Data UNxForceFieldRadialComponent;
};

// 0x290  (Alignment = 16)
struct UNxForceFieldTornadoComponent_Data {
	// Last Offset: 0x260
	float RadialStrength; // 0x260 (0x4)
	float RotationalStrength; // 0x264 (0x4)
	float LiftStrength; // 0x268 (0x4)
	float ForceRadius; // 0x26C (0x4)
	float ForceTopRadius; // 0x270 (0x4)
	float LiftFalloffHeight; // 0x274 (0x4)
	float EscapeVelocity; // 0x278 (0x4)
	float ForceHeight; // 0x27C (0x4)
	float HeightOffset; // 0x280 (0x4)
	BOOL BSpecialRadialForceMode :1 ; // 0x284 (0x4)
	const unsigned long: 0;
	float SelfRotationStrength; // 0x288 (0x4)
	struct FPointer Kernel; // 0x28C (0x4)
};

struct UNxForceFieldTornadoComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UNxForceFieldComponent_Data UNxForceFieldComponent;
	struct UNxForceFieldTornadoComponent_Data UNxForceFieldTornadoComponent;
};

// 0x3C 
struct UForceFieldShape_Data {
	// Last Offset: 0x3C
};

struct UForceFieldShape {
	struct UObject_Data UObject;
	struct UForceFieldShape_Data UForceFieldShape;
};

// 0x40 
struct UForceFieldShapeBox_Data {
	// Last Offset: 0x3C
	struct UDrawBoxComponent* Shape; // 0x3C (0x4)
};

struct UForceFieldShapeBox {
	struct UObject_Data UObject;
	struct UForceFieldShape_Data UForceFieldShape;
	struct UForceFieldShapeBox_Data UForceFieldShapeBox;
};

// 0x40 
struct UForceFieldShapeCapsule_Data {
	// Last Offset: 0x3C
	struct UDrawCapsuleComponent* Shape; // 0x3C (0x4)
};

struct UForceFieldShapeCapsule {
	struct UObject_Data UObject;
	struct UForceFieldShape_Data UForceFieldShape;
	struct UForceFieldShapeCapsule_Data UForceFieldShapeCapsule;
};

// 0x40 
struct UForceFieldShapeSphere_Data {
	// Last Offset: 0x3C
	struct UDrawSphereComponent* Shape; // 0x3C (0x4)
};

struct UForceFieldShapeSphere {
	struct UObject_Data UObject;
	struct UForceFieldShape_Data UForceFieldShape;
	struct UForceFieldShapeSphere_Data UForceFieldShapeSphere;
};

// 0x248 
struct APrefabInstance_Data {
	// Last Offset: 0x188
	struct UPrefab* TemplatePrefab; // 0x188 (0x4)
	int TemplateVersion; // 0x18C (0x4)
	const unsigned char Unknown1[0x3C]; // 0x190 (0x3C) UNKNOWN PROPERTY
	struct UPrefabSequence* SequenceInstance; // 0x1CC (0x4)
	int PI_PackageVersion; // 0x1D0 (0x4)
	int PI_LicenseePackageVersion; // 0x1D4 (0x4)
	int PI_GamePackageVersion; // 0x1D8 (0x4)
	struct TArray_unsigned_char PI_Bytes; // 0x1DC (0xC)
	struct TArray_UObjectPtr PI_CompleteObjects; // 0x1E8 (0xC)
	struct TArray_UObjectPtr PI_ReferencedObjects; // 0x1F4 (0xC)
	struct TArray_FString PI_SavedNames; // 0x200 (0xC)
	const unsigned char Unknown2[0x3C]; // 0x20C (0x3C) UNKNOWN PROPERTY
};

struct APrefabInstance {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct APrefabInstance_Data APrefabInstance;
};

// 0x5C 
struct UPrefab_Data {
	// Last Offset: 0x3C
	int PrefabVersion; // 0x3C (0x4)
	struct TArray_UObjectPtr PrefabArchetypes; // 0x40 (0xC)
	struct TArray_UObjectPtr RemovedArchetypes; // 0x4C (0xC)
	struct UPrefabSequence* PrefabSequence; // 0x58 (0x4)
};

struct UPrefab {
	struct UObject_Data UObject;
	struct UPrefab_Data UPrefab;
};

// 0x48 
struct USequenceObject_Data {
	// Last Offset: 0x3C
	int ObjInstanceVersion; // 0x3C (0x4)
	struct USequence* ParentSequence; // 0x40 (0x4)
	BOOL bDeletable :1 ; // 0x44 (0x4)
	BOOL bDrawFirst :1 ; // 0x44 (0x4)
	BOOL bDrawLast :1 ; // 0x44 (0x4)
	BOOL bOutputObjCommentToScreen :1 ; // 0x44 (0x4)
	BOOL bSuppressAutoComment :1 ; // 0x44 (0x4)
	BOOL bShouldPersistWhenStreamedOut :1 ; // 0x44 (0x4)
	const unsigned long: 0;
};

struct USequenceObject {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
};

// 0x8C 
struct USequenceOp_Data {
	// Last Offset: 0x48
	BOOL bIsActivated :1 ; // 0x48 (0x4)
	BOOL bIsCurrentDebuggerOp :1 ; // 0x48 (0x4)
	BOOL bActive :1 ; // 0x48 (0x4)
	BOOL bLatentExecution :1 ; // 0x48 (0x4)
	BOOL bSupportsMultipleActivations :1 ; // 0x48 (0x4)
	BOOL bAutoActivateOutputLinks :1 ; // 0x48 (0x4)
	BOOL bHaveMovingVarConnector :1 ; // 0x48 (0x4)
	BOOL bHaveMovingInputConnector :1 ; // 0x48 (0x4)
	BOOL bHaveMovingOutputConnector :1 ; // 0x48 (0x4)
	BOOL bPendingVarConnectorRecalc :1 ; // 0x48 (0x4)
	BOOL bPendingInputConnectorRecalc :1 ; // 0x48 (0x4)
	BOOL bPendingOutputConnectorRecalc :1 ; // 0x48 (0x4)
	BOOL bIsBreakpointSet :1 ; // 0x48 (0x4)
	BOOL bIsHiddenBreakpointSet :1 ; // 0x48 (0x4)
	BOOL bFlipWidgetVertical :1 ; // 0x48 (0x4)
	const unsigned long: 0;
	struct TArray_FSeqOpInputLink InputLinks; // 0x4C (0xC)
	struct TArray_FSeqOpOutputLink OutputLinks; // 0x58 (0xC)
	struct TArray_FSeqVarLink VariableLinks; // 0x64 (0xC)
	struct TArray_FSeqEventLink EventLinks; // 0x70 (0xC)
	int PlayerIndex; // 0x7C (0x4)
	unsigned char GamepadID; // 0x80 (0x1)
	const unsigned char Unknown1[0x3]; // 0x81 (0x3) > LAST OFFSET
	int ActivateCount; // 0x84 (0x4)
	int SearchTag; // 0x88 (0x4)
};

struct USequenceOp {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
};

// 0xC4 
struct USequenceEvent_Data {
	// Last Offset: 0x8C
	struct TArray_USequenceEventPtr DuplicateEvts; // 0x8C (0xC)
	struct AActor* Originator; // 0x98 (0x4)
	struct AActor* Instigator; // 0x9C (0x4)
	float ActivationTime; // 0xA0 (0x4)
	int TriggerCount; // 0xA4 (0x4)
	int MaxTriggerCount; // 0xA8 (0x4)
	float ReTriggerDelay; // 0xAC (0x4)
	BOOL bEnabled :1 ; // 0xB0 (0x4)
	BOOL bPlayerOnly :1 ; // 0xB0 (0x4)
	BOOL bAIOnly :1 ; // 0xB0 (0x4)
	BOOL bRegistered :1 ; // 0xB0 (0x4)
	BOOL bClientSideOnly :1 ; // 0xB0 (0x4)
	const unsigned long: 0;
	unsigned char Priority; // 0xB4 (0x1)
	const unsigned char Unknown1[0x3]; // 0xB5 (0x3) > LAST OFFSET
	int MaxWidth; // 0xB8 (0x4)
	struct UPawnAllegiance* RequiredAllegiance; // 0xBC (0x4)
	struct USequenceEventCustomEnableCondition* CustomEnableCondition; // 0xC0 (0x4)
};

struct USequenceEvent {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceEvent_Data USequenceEvent;
};

// 0x3C 
struct USequenceEventCustomEnableCondition_Data {
	// Last Offset: 0x3C
};

struct USequenceEventCustomEnableCondition {
	struct UObject_Data UObject;
	struct USequenceEventCustomEnableCondition_Data USequenceEventCustomEnableCondition;
};

// 0x60 
struct USequenceFrame_Data {
	// Last Offset: 0x48
	int SizeX; // 0x48 (0x4)
	int SizeY; // 0x4C (0x4)
	int BorderWidth; // 0x50 (0x4)
	BOOL bDrawBox :1 ; // 0x54 (0x4)
	BOOL bFilled :1 ; // 0x54 (0x4)
	BOOL bTileFill :1 ; // 0x54 (0x4)
	const unsigned long: 0;
	struct FColor BorderColor; // 0x58 (0x4)
	struct FColor FillColor; // 0x5C (0x4)
};

struct USequenceFrame {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceFrame_Data USequenceFrame;
};

// 0x60 
struct USavingSequenceFrame_Data {
	// Last Offset: 0x60
};

struct USavingSequenceFrame {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceFrame_Data USequenceFrame;
	struct USavingSequenceFrame_Data USavingSequenceFrame;
};

// 0x60 
struct USequenceFrameWrapped_Data {
	// Last Offset: 0x60
};

struct USequenceFrameWrapped {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceFrame_Data USequenceFrame;
	struct USequenceFrameWrapped_Data USequenceFrameWrapped;
};

// 0x90 
struct USeqDef_Base_Data {
	// Last Offset: 0x8C
	struct UGBXDefinition* Definition; // 0x8C (0x4)
};

struct USeqDef_Base {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USeqDef_Base_Data USeqDef_Base;
};

// 0xE8 
struct USequence_Data {
	// Last Offset: 0x8C
	struct FPointer LogFile; // 0x8C (0x4)
	struct TArray_USequenceObjectPtr SequenceObjects; // 0x90 (0xC)
	struct TArray_USequenceOpPtr ActiveSequenceOps; // 0x9C (0xC)
	struct TArray_USequencePtr NestedSequences; // 0xA8 (0xC)
	struct TArray_USequenceEventPtr UnregisteredEvents; // 0xB4 (0xC)
	struct TArray_FActivateOp DelayedActivatedOps; // 0xC0 (0xC)
	BOOL bEnabled :1 ; // 0xCC (0x4)
	const unsigned long: 0;
	struct TArray_FQueuedActivationInfo QueuedActivations; // 0xD0 (0xC)
	int DefaultViewX; // 0xDC (0x4)
	int DefaultViewY; // 0xE0 (0x4)
	float DefaultViewZoom; // 0xE4 (0x4)
};

struct USequence {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequence_Data USequence;
};

// 0xEC 
struct UPrefabSequence_Data {
	// Last Offset: 0xE8
	struct APrefabInstance* OwnerPrefab; // 0xE8 (0x4)
};

struct UPrefabSequence {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequence_Data USequence;
	struct UPrefabSequence_Data UPrefabSequence;
};

// 0xE8 
struct UPrefabSequenceContainer_Data {
	// Last Offset: 0xE8
};

struct UPrefabSequenceContainer {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequence_Data USequence;
	struct UPrefabSequenceContainer_Data UPrefabSequenceContainer;
};

// 0xE8 
struct USequenceDefinition_Data {
	// Last Offset: 0xE8
};

struct USequenceDefinition {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequence_Data USequence;
	struct USequenceDefinition_Data USequenceDefinition;
};

// 0xA4 
struct USequenceAction_Data {
	// Last Offset: 0x8C
	struct FName HandlerName; // 0x8C (0x8)
	BOOL bCallHandler :1 ; // 0x94 (0x4)
	const unsigned long: 0;
	struct TArray_UObjectPtr Targets; // 0x98 (0xC)
};

struct USequenceAction {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
};

// 0xB4 
struct USeqAct_ActivateRemoteEvent_Data {
	// Last Offset: 0xA4
	struct AActor* Instigator; // 0xA4 (0x4)
	struct FName EventName; // 0xA8 (0x8)
	BOOL bStatusIsOk :1 ; // 0xB0 (0x4)
	const unsigned long: 0;
};

struct USeqAct_ActivateRemoteEvent {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_ActivateRemoteEvent_Data USeqAct_ActivateRemoteEvent;
};

// 0xC0 
struct USeqAct_AndGate_Data {
	// Last Offset: 0xA4
	BOOL bOpen :1 ; // 0xA4 (0x4)
	const unsigned long: 0;
	struct TArray_BOOL LinkedOutputFiredStatus; // 0xA8 (0xC)
	struct TArray_FPointer LinkedOutputs; // 0xB4 (0xC)
};

struct USeqAct_AndGate {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_AndGate_Data USeqAct_AndGate;
};

// 0xB0 
struct USeqAct_ApplyBehavior_Data {
	// Last Offset: 0xA4
	struct TArray_UBehaviorBasePtr Behaviors; // 0xA4 (0xC)
};

struct USeqAct_ApplyBehavior {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_ApplyBehavior_Data USeqAct_ApplyBehavior;
};

// 0xAC 
struct USeqAct_ApplySoundNode_Data {
	// Last Offset: 0xA4
	struct USoundCue* PlaySound; // 0xA4 (0x4)
	struct USoundNode* ApplyNode; // 0xA8 (0x4)
};

struct USeqAct_ApplySoundNode {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_ApplySoundNode_Data USeqAct_ApplySoundNode;
};

// 0xA8 
struct USeqAct_AttachToEvent_Data {
	// Last Offset: 0xA4
	BOOL bPreferController :1 ; // 0xA4 (0x4)
	const unsigned long: 0;
};

struct USeqAct_AttachToEvent {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_AttachToEvent_Data USeqAct_AttachToEvent;
};

// 0xCC 
struct USeqAct_CameraFade_Data {
	// Last Offset: 0xA4
	struct FColor FadeColor; // 0xA4 (0x4)
	struct FVector2D FadeAlpha; // 0xA8 (0x8)
	float FadeOpacity; // 0xB0 (0x4)
	float FadeTime; // 0xB4 (0x4)
	BOOL bPersistFade :1 ; // 0xB8 (0x4)
	const unsigned long: 0;
	float FadeTimeRemaining; // 0xBC (0x4)
	struct TArray_APlayerControllerPtr CachedPCs; // 0xC0 (0xC)
};

struct USeqAct_CameraFade {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_CameraFade_Data USeqAct_CameraFade;
};

// 0xD8 
struct USeqAct_CameraLookAt_Data {
	// Last Offset: 0xA4
	BOOL bAffectCamera :1 ; // 0xA4 (0x4)
	BOOL bAlwaysFocus :1 ; // 0xA4 (0x4)
	BOOL bAdjustCamera :1 ; // 0xA4 (0x4)
	BOOL bTurnInPlace :1 ; // 0xA4 (0x4)
	BOOL bIgnoreTrace :1 ; // 0xA4 (0x4)
	BOOL bAffectHead :1 ; // 0xA4 (0x4)
	BOOL bRotatePlayerWithCamera :1 ; // 0xA4 (0x4)
	BOOL bToggleGodMode :1 ; // 0xA4 (0x4)
	BOOL bLeaveCameraRotation :1 ; // 0xA4 (0x4)
	BOOL bDisableInput :1 ; // 0xA4 (0x4)
	BOOL bUsedTimer :1 ; // 0xA4 (0x4)
	BOOL bCheckLineOfSight :1 ; // 0xA4 (0x4)
	const unsigned long: 0;
	struct FVector2D InterpSpeedRange; // 0xA8 (0x8)
	struct FVector2D InFocusFOV; // 0xB0 (0x8)
	struct FName FocusBoneName; // 0xB8 (0x8)
	struct FString TextDisplay; // 0xC0 (0xC)
	float TotalTime; // 0xCC (0x4)
	float CameraFOV; // 0xD0 (0x4)
	float RemainingTime; // 0xD4 (0x4)
};

struct USeqAct_CameraLookAt {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_CameraLookAt_Data USeqAct_CameraLookAt;
};

// 0xA9 
struct USeqAct_ChangeCollision_Data {
	// Last Offset: 0xA4
	BOOL bCollideActors :1 ; // 0xA4 (0x4)
	BOOL bBlockActors :1 ; // 0xA4 (0x4)
	BOOL bIgnoreEncroachers :1 ; // 0xA4 (0x4)
	const unsigned long: 0;
	unsigned char CollisionType; // 0xA8 (0x1) (Enum = ECollisionType)
};

struct USeqAct_ChangeCollision {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_ChangeCollision_Data USeqAct_ChangeCollision;
};

// 0xA4 
struct USeqAct_CommitMapChange_Data {
	// Last Offset: 0xA4
};

struct USeqAct_CommitMapChange {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_CommitMapChange_Data USeqAct_CommitMapChange;
};

// 0xBC 
struct USeqAct_ConsoleCommand_Data {
	// Last Offset: 0xA4
	struct FString Command; // 0xA4 (0xC)
	struct TArray_FString Commands; // 0xB0 (0xC)
};

struct USeqAct_ConsoleCommand {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_ConsoleCommand_Data USeqAct_ConsoleCommand;
};

// 0xB8 
struct USeqAct_ConvertToString_Data {
	// Last Offset: 0xA4
	BOOL bIncludeVarComment :1 ; // 0xA4 (0x4)
	const unsigned long: 0;
	struct FString VarSeparator; // 0xA8 (0xC)
	int NumberOfInputs; // 0xB4 (0x4)
};

struct USeqAct_ConvertToString {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_ConvertToString_Data USeqAct_ConvertToString;
};

// 0xE0 
struct USeqAct_DrawText_Data {
	// Last Offset: 0xA4
	float DisplayTimeSeconds; // 0xA4 (0x4)
	BOOL bDisplayOnObject :1 ; // 0xA8 (0x4)
	const unsigned long: 0;
	struct FKismetDrawTextInfo DrawTextInfo; // 0xAC (0x34)
};

struct USeqAct_DrawText {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_DrawText_Data USeqAct_DrawText;
};

// 0xB0 
struct USeqAct_FinishSequence_Data {
	// Last Offset: 0xA4
	struct FString OutputLabel; // 0xA4 (0xC)
};

struct USeqAct_FinishSequence {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_FinishSequence_Data USeqAct_FinishSequence;
};

// 0xB0 
struct USeqAct_Gate_Data {
	// Last Offset: 0xA4
	BOOL bOpen :1 ; // 0xA4 (0x4)
	const unsigned long: 0;
	int AutoCloseCount; // 0xA8 (0x4)
	int CurrentCloseCount; // 0xAC (0x4)
};

struct USeqAct_Gate {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_Gate_Data USeqAct_Gate;
};

// 0xA9 
struct USeqAct_GetDistance_Data {
	// Last Offset: 0xA4
	float Distance; // 0xA4 (0x4)
	unsigned char Method; // 0xA8 (0x1) (Enum = DistanceMethod)
};

struct USeqAct_GetDistance {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_GetDistance_Data USeqAct_GetDistance;
};

// 0xD0 
struct USeqAct_GetLocationAndRotation_Data {
	// Last Offset: 0xA4
	struct FVector Location; // 0xA4 (0xC)
	struct FVector RotationVector; // 0xB0 (0xC)
	struct FVector Rotation; // 0xBC (0xC)
	struct FName SocketOrBoneName; // 0xC8 (0x8)
};

struct USeqAct_GetLocationAndRotation {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_GetLocationAndRotation_Data USeqAct_GetLocationAndRotation;
};

// 0xAC 
struct USeqAct_GetProperty_Data {
	// Last Offset: 0xA4
	struct FName PropertyName; // 0xA4 (0x8)
};

struct USeqAct_GetProperty {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_GetProperty_Data USeqAct_GetProperty;
};

// 0xBC 
struct USeqAct_GetVectorComponents_Data {
	// Last Offset: 0xA4
	struct FVector InVector; // 0xA4 (0xC)
	float X; // 0xB0 (0x4)
	float Y; // 0xB4 (0x4)
	float Z; // 0xB8 (0x4)
};

struct USeqAct_GetVectorComponents {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_GetVectorComponents_Data USeqAct_GetVectorComponents;
};

// 0xB4 
struct USeqAct_GetVelocity_Data {
	// Last Offset: 0xA4
	float VelocityMag; // 0xA4 (0x4)
	struct FVector VelocityVect; // 0xA8 (0xC)
};

struct USeqAct_GetVelocity {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_GetVelocity_Data USeqAct_GetVelocity;
};

// 0x124 
struct USeqAct_HeadTrackingControl_Data {
	// Last Offset: 0xA4
	struct TArray_FName TrackControllerName; // 0xA4 (0xC)
	float LookAtActorRadius; // 0xB0 (0x4)
	BOOL bDisableBeyondLimit :1 ; // 0xB4 (0x4)
	BOOL bLookAtPawns :1 ; // 0xB4 (0x4)
	const unsigned long: 0;
	float MaxLookAtTime; // 0xB8 (0x4)
	float MinLookAtTime; // 0xBC (0x4)
	float MaxInterestTime; // 0xC0 (0x4)
	struct TArray_UClassPtr ActorClassesToLookAt; // 0xC4 (0xC)
	struct TArray_FName TargetBoneNames; // 0xD0 (0xC)
	struct TArray_UObjectPtr LookAtTargets; // 0xDC (0xC)
	const unsigned char Unknown1[0x3C]; // 0xE8 (0x3C) UNKNOWN PROPERTY
};

struct USeqAct_HeadTrackingControl {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_HeadTrackingControl_Data USeqAct_HeadTrackingControl;
};

// 0xA8 
struct USeqAct_IsInObjectList_Data {
	// Last Offset: 0xA4
	BOOL bCheckForAllObjects :1 ; // 0xA4 (0x4)
	BOOL bObjectFound :1 ; // 0xA4 (0x4)
	const unsigned long: 0;
};

struct USeqAct_IsInObjectList {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_IsInObjectList_Data USeqAct_IsInObjectList;
};

// 0xB4 
struct USeqAct_Latent_Data {
	// Last Offset: 0xA4
	struct TArray_AActorPtr LatentActors; // 0xA4 (0xC)
	BOOL bAborted :1 ; // 0xB0 (0x4)
	const unsigned long: 0;
};

struct USeqAct_Latent {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_Latent_Data USeqAct_Latent;
};

// 0xF8 
struct USeqAct_ActorFactory_Data {
	// Last Offset: 0xB4
	BOOL bEnabled :1 ; // 0xB4 (0x4)
	BOOL bIsSpawning :1 ; // 0xB4 (0x4)
	BOOL bCheckSpawnCollision :1 ; // 0xB4 (0x4)
	const unsigned long: 0;
	struct UActorFactory* Factory; // 0xB8 (0x4)
	unsigned char PointSelection; // 0xBC (0x1) (Enum = EPointSelection)
	const unsigned char Unknown1[0x3]; // 0xBD (0x3) > LAST OFFSET
	struct TArray_AActorPtr SpawnPoints; // 0xC0 (0xC)
	struct TArray_FVector SpawnLocations; // 0xCC (0xC)
	struct TArray_FVector SpawnOrientations; // 0xD8 (0xC)
	int SpawnCount; // 0xE4 (0x4)
	float SpawnDelay; // 0xE8 (0x4)
	int LastSpawnIdx; // 0xEC (0x4)
	int SpawnedCount; // 0xF0 (0x4)
	float RemainingDelay; // 0xF4 (0x4)
};

struct USeqAct_ActorFactory {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_Latent_Data USeqAct_Latent;
	struct USeqAct_ActorFactory_Data USeqAct_ActorFactory;
};

// 0xF8 
struct USeqAct_ActorFactoryEx_Data {
	// Last Offset: 0xF8
};

struct USeqAct_ActorFactoryEx {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_Latent_Data USeqAct_Latent;
	struct USeqAct_ActorFactory_Data USeqAct_ActorFactory;
	struct USeqAct_ActorFactoryEx_Data USeqAct_ActorFactoryEx;
};

// 0x10C 
struct USeqAct_ProjectileFactory_Data {
	// Last Offset: 0xF8
	struct UParticleSystem* PSTemplate; // 0xF8 (0x4)
	struct FName SocketName; // 0xFC (0x8)
	struct FName BoneName; // 0x104 (0x8)
};

struct USeqAct_ProjectileFactory {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_Latent_Data USeqAct_Latent;
	struct USeqAct_ActorFactory_Data USeqAct_ActorFactory;
	struct USeqAct_ProjectileFactory_Data USeqAct_ProjectileFactory;
};

// 0xD0 
struct USeqAct_AIMoveToActor_Data {
	// Last Offset: 0xB4
	BOOL bInterruptable :1 ; // 0xB4 (0x4)
	BOOL bFaceDestinationDirection :1 ; // 0xB4 (0x4)
	BOOL bPickClosest :1 ; // 0xB4 (0x4)
	const unsigned long: 0;
	struct TArray_AActorPtr Destination; // 0xB8 (0xC)
	float MovementSpeedModifier; // 0xC4 (0x4)
	struct AActor* LookAt; // 0xC8 (0x4)
	int LastDestinationChoice; // 0xCC (0x4)
};

struct USeqAct_AIMoveToActor {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_Latent_Data USeqAct_Latent;
	struct USeqAct_AIMoveToActor_Data USeqAct_AIMoveToActor;
};

// 0xC8 
struct USeqAct_Delay_Data {
	// Last Offset: 0xB4
	BOOL bDelayActive :1 ; // 0xB4 (0x4)
	BOOL bStartWillRestart :1 ; // 0xB4 (0x4)
	const unsigned long: 0;
	float DefaultDuration; // 0xB8 (0x4)
	float Duration; // 0xBC (0x4)
	float LastUpdateTime; // 0xC0 (0x4)
	float RemainingTime; // 0xC4 (0x4)
};

struct USeqAct_Delay {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_Latent_Data USeqAct_Latent;
	struct USeqAct_Delay_Data USeqAct_Delay;
};

// 0xC4 
struct USeqAct_DelaySwitch_Data {
	// Last Offset: 0xB4
	int LinkCount; // 0xB4 (0x4)
	int CurrentIdx; // 0xB8 (0x4)
	float SwitchDelay; // 0xBC (0x4)
	float NextLinkTime; // 0xC0 (0x4)
};

struct USeqAct_DelaySwitch {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_Latent_Data USeqAct_Latent;
	struct USeqAct_DelaySwitch_Data USeqAct_DelaySwitch;
};

// 0xB4 
struct USeqAct_ForceGarbageCollection_Data {
	// Last Offset: 0xB4
};

struct USeqAct_ForceGarbageCollection {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_Latent_Data USeqAct_Latent;
	struct USeqAct_ForceGarbageCollection_Data USeqAct_ForceGarbageCollection;
};

// 0x178 
struct USeqAct_Interp_Data {
	// Last Offset: 0xB4
	const unsigned char Unknown1[0x3C]; // 0xB4 (0x3C) UNKNOWN PROPERTY
	const unsigned char Unknown2[0x3C]; // 0xF0 (0x3C) UNKNOWN PROPERTY
	float PlayRate; // 0x12C (0x4)
	float Position; // 0x130 (0x4)
	float ForceStartPosition; // 0x134 (0x4)
	BOOL bIsPlaying :1 ; // 0x138 (0x4)
	BOOL bPaused :1 ; // 0x138 (0x4)
	BOOL bIsBeingEdited :1 ; // 0x138 (0x4)
	BOOL bLooping :1 ; // 0x138 (0x4)
	BOOL bRewindOnPlay :1 ; // 0x138 (0x4)
	BOOL bNoResetOnRewind :1 ; // 0x138 (0x4)
	BOOL bRewindIfAlreadyPlaying :1 ; // 0x138 (0x4)
	BOOL bReversePlayback :1 ; // 0x138 (0x4)
	BOOL bInterpForPathBuilding :1 ; // 0x138 (0x4)
	BOOL bForceStartPos :1 ; // 0x138 (0x4)
	BOOL bDisableRadioFilter :1 ; // 0x138 (0x4)
	BOOL bClientSideOnly :1 ; // 0x138 (0x4)
	BOOL bSkipUpdateIfNotVisible :1 ; // 0x138 (0x4)
	BOOL bIsSkippable :1 ; // 0x138 (0x4)
	BOOL bIsSkipped :1 ; // 0x138 (0x4)
	BOOL bShouldShowGore :1 ; // 0x138 (0x4)
	BOOL TestForInputActorsOnClient :1 ; // 0x138 (0x4)
	BOOL bFireEventsWhenJumpToLastFrame :1 ; // 0x138 (0x4)
	BOOL bFireCompleteEventWhenJumpToLastFrame :1 ; // 0x138 (0x4)
	BOOL bLastFrameEventFired :1 ; // 0x138 (0x4)
	BOOL bSkipNextUpdate :1 ; // 0x138 (0x4)
	BOOL bInitialReplication :1 ; // 0x138 (0x4)
	const unsigned long: 0;
	struct TArray_ACoverLinkPtr LinkedCover; // 0x13C (0xC)
	struct UInterpData* InterpData; // 0x148 (0x4)
	struct TArray_UInterpGroupInstPtr GroupInst; // 0x14C (0xC)
	struct UClass* ReplicatedActorClass; // 0x158 (0x4)
	struct AMatineeActor* ReplicatedActor; // 0x15C (0x4)
	int PreferredSplitScreenNum; // 0x160 (0x4)
	struct TArray_FCameraCutInfo CameraCuts; // 0x164 (0xC)
	float TerminationTime; // 0x170 (0x4)
	struct FRenderingPerformanceOverrides RenderingOverrides; // 0x174 (0x4)
};

struct USeqAct_Interp {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_Latent_Data USeqAct_Latent;
	struct USeqAct_Interp_Data USeqAct_Interp;
};

// 0xB8 
struct USeqAct_LevelStreamingBase_Data {
	// Last Offset: 0xB4
	BOOL bMakeVisibleAfterLoad :1 ; // 0xB4 (0x4)
	BOOL bShouldBlockOnLoad :1 ; // 0xB4 (0x4)
	const unsigned long: 0;
};

struct USeqAct_LevelStreamingBase {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_Latent_Data USeqAct_Latent;
	struct USeqAct_LevelStreamingBase_Data USeqAct_LevelStreamingBase;
};

// 0xC8 
struct USeqAct_LevelStreaming_Data {
	// Last Offset: 0xB8
	struct ULevelStreaming* Level; // 0xB8 (0x4)
	struct FName LevelName; // 0xBC (0x8)
	BOOL bStatusIsOk :1 ; // 0xC4 (0x4)
	const unsigned long: 0;
};

struct USeqAct_LevelStreaming {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_Latent_Data USeqAct_Latent;
	struct USeqAct_LevelStreamingBase_Data USeqAct_LevelStreamingBase;
	struct USeqAct_LevelStreaming_Data USeqAct_LevelStreaming;
};

// 0xC8 
struct USeqAct_MultiLevelStreaming_Data {
	// Last Offset: 0xB8
	struct TArray_FLevelStreamingNameCombo Levels; // 0xB8 (0xC)
	BOOL bUnloadAllOtherLevels :1 ; // 0xC4 (0x4)
	BOOL bStatusIsOk :1 ; // 0xC4 (0x4)
	const unsigned long: 0;
};

struct USeqAct_MultiLevelStreaming {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_Latent_Data USeqAct_Latent;
	struct USeqAct_LevelStreamingBase_Data USeqAct_LevelStreamingBase;
	struct USeqAct_MultiLevelStreaming_Data USeqAct_MultiLevelStreaming;
};

// 0xC4 
struct USeqAct_LevelVisibility_Data {
	// Last Offset: 0xB4
	struct ULevelStreaming* Level; // 0xB4 (0x4)
	struct FName LevelName; // 0xB8 (0x8)
	BOOL bStatusIsOk :1 ; // 0xC0 (0x4)
	const unsigned long: 0;
};

struct USeqAct_LevelVisibility {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_Latent_Data USeqAct_Latent;
	struct USeqAct_LevelVisibility_Data USeqAct_LevelVisibility;
};

// 0xD4 
struct USeqAct_PlaySound_Data {
	// Last Offset: 0xB4
	struct USoundCue* PlaySound; // 0xB4 (0x4)
	float ExtraDelay; // 0xB8 (0x4)
	float SoundDuration; // 0xBC (0x4)
	float FadeInTime; // 0xC0 (0x4)
	float FadeOutTime; // 0xC4 (0x4)
	float VolumeMultiplier; // 0xC8 (0x4)
	float PitchMultiplier; // 0xCC (0x4)
	BOOL bSuppressSubtitles :1 ; // 0xD0 (0x4)
	BOOL bStopped :1 ; // 0xD0 (0x4)
	const unsigned long: 0;
};

struct USeqAct_PlaySound {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_Latent_Data USeqAct_Latent;
	struct USeqAct_PlaySound_Data USeqAct_PlaySound;
};

// 0xCC 
struct USeqAct_PrepareMapChange_Data {
	// Last Offset: 0xB4
	struct FName MainLevelName; // 0xB4 (0x8)
	struct TArray_FName InitiallyLoadedSecondaryLevelNames; // 0xBC (0xC)
	BOOL bIsHighPriority :1 ; // 0xC8 (0x4)
	BOOL bTransitionToFakeEntry :1 ; // 0xC8 (0x4)
	BOOL bStatusIsOk :1 ; // 0xC8 (0x4)
	const unsigned long: 0;
};

struct USeqAct_PrepareMapChange {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_Latent_Data USeqAct_Latent;
	struct USeqAct_PrepareMapChange_Data USeqAct_PrepareMapChange;
};

// 0x10C 
struct USeqAct_SetDOFParams_Data {
	// Last Offset: 0xB4
	float FalloffExponent; // 0xB4 (0x4)
	float BlurKernelSize; // 0xB8 (0x4)
	float MaxNearBlurAmount; // 0xBC (0x4)
	float MinBlurAmount; // 0xC0 (0x4)
	float MaxFarBlurAmount; // 0xC4 (0x4)
	float FocusInnerRadius; // 0xC8 (0x4)
	float FocusDistance; // 0xCC (0x4)
	struct FVector FocusPosition; // 0xD0 (0xC)
	float InterpolateSeconds; // 0xDC (0x4)
	float InterpolateElapsed; // 0xE0 (0x4)
	float OldFalloffExponent; // 0xE4 (0x4)
	float OldBlurKernelSize; // 0xE8 (0x4)
	float OldMaxNearBlurAmount; // 0xEC (0x4)
	float OldMinBlurAmount; // 0xF0 (0x4)
	float OldMaxFarBlurAmount; // 0xF4 (0x4)
	float OldFocusInnerRadius; // 0xF8 (0x4)
	float OldFocusDistance; // 0xFC (0x4)
	struct FVector OldFocusPosition; // 0x100 (0xC)
};

struct USeqAct_SetDOFParams {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_Latent_Data USeqAct_Latent;
	struct USeqAct_SetDOFParams_Data USeqAct_SetDOFParams;
};

// 0xC4 
struct USeqAct_SetMotionBlurParams_Data {
	// Last Offset: 0xB4
	float MotionBlurAmount; // 0xB4 (0x4)
	float InterpolateSeconds; // 0xB8 (0x4)
	float InterpolateElapsed; // 0xBC (0x4)
	float OldMotionBlurAmount; // 0xC0 (0x4)
};

struct USeqAct_SetMotionBlurParams {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_Latent_Data USeqAct_Latent;
	struct USeqAct_SetMotionBlurParams_Data USeqAct_SetMotionBlurParams;
};

// 0xE8 
struct USeqAct_StreamInTextures_Data {
	// Last Offset: 0xB4
	BOOL bLocationBased :1 ; // 0xB4 (0x4)
	BOOL bStreamingActive :1 ; // 0xB4 (0x4)
	BOOL bHasTriggeredAllLoaded :1 ; // 0xB4 (0x4)
	const unsigned long: 0;
	float Seconds; // 0xB8 (0x4)
	float StreamingDistanceMultiplier; // 0xBC (0x4)
	int NumWantingResourcesID; // 0xC0 (0x4)
	float StopTimestamp; // 0xC4 (0x4)
	struct TArray_UObjectPtr LocationActors; // 0xC8 (0xC)
	struct TArray_UMaterialInterfacePtr ForceMaterials; // 0xD4 (0xC)
	struct FTextureGroupContainer CinematicTextureGroups; // 0xE0 (0x4)
	int SelectedCinematicTextureGroups; // 0xE4 (0x4)
};

struct USeqAct_StreamInTextures {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_Latent_Data USeqAct_Latent;
	struct USeqAct_StreamInTextures_Data USeqAct_StreamInTextures;
};

// 0xC4 
struct USeqAct_WaitForLevelsVisible_Data {
	// Last Offset: 0xB4
	struct TArray_FName LevelNames; // 0xB4 (0xC)
	BOOL bShouldBlockOnLoad :1 ; // 0xC0 (0x4)
	const unsigned long: 0;
};

struct USeqAct_WaitForLevelsVisible {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_Latent_Data USeqAct_Latent;
	struct USeqAct_WaitForLevelsVisible_Data USeqAct_WaitForLevelsVisible;
};

// 0xC4 
struct USeqAct_Log_Data {
	// Last Offset: 0xA4
	BOOL bOutputToScreen :1 ; // 0xA4 (0x4)
	BOOL bIncludeObjComment :1 ; // 0xA4 (0x4)
	const unsigned long: 0;
	float TargetDuration; // 0xA8 (0x4)
	struct FVector TargetOffset; // 0xAC (0xC)
	struct FString LogMessage; // 0xB8 (0xC)
};

struct USeqAct_Log {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_Log_Data USeqAct_Log;
};

// 0xB8 
struct USeqAct_ModifyCover_Data {
	// Last Offset: 0xA4
	struct TArray_int Slots; // 0xA4 (0xC)
	unsigned char ManualCoverType; // 0xB0 (0x1) (Enum = ECoverType)
	const unsigned char Unknown1[0x3]; // 0xB1 (0x3) > LAST OFFSET
	BOOL bManualAdjustPlayersOnly :1 ; // 0xB4 (0x4)
	const unsigned long: 0;
};

struct USeqAct_ModifyCover {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_ModifyCover_Data USeqAct_ModifyCover;
};

// 0xC4 
struct USeqAct_ModifyHealth_Data {
	// Last Offset: 0xA4
	struct UClass* DamageType; // 0xA4 (0x4)
	struct UDamageTypeDefinition* DamageTypeDefinition; // 0xA8 (0x4)
	struct UImpactDefinition* ImpactDefinition; // 0xAC (0x4)
	float Momentum; // 0xB0 (0x4)
	float Amount; // 0xB4 (0x4)
	float Radius; // 0xB8 (0x4)
	BOOL bHeal :1 ; // 0xBC (0x4)
	BOOL bRadial :1 ; // 0xBC (0x4)
	BOOL bFalloff :1 ; // 0xBC (0x4)
	const unsigned long: 0;
	struct AActor* Instigator; // 0xC0 (0x4)
};

struct USeqAct_ModifyHealth {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_ModifyHealth_Data USeqAct_ModifyHealth;
};

// 0xEC 
struct USeqAct_ParticleEventGenerator_Data {
	// Last Offset: 0xA4
	BOOL bEnabled :1 ; // 0xA4 (0x4)
	BOOL bUseEmitterLocation :1 ; // 0xA4 (0x4)
	const unsigned long: 0;
	struct AActor* Instigator; // 0xA8 (0x4)
	struct TArray_FString EventNames; // 0xAC (0xC)
	float EventTime; // 0xB8 (0x4)
	struct FVector EventLocation; // 0xBC (0xC)
	struct FVector EventDirection; // 0xC8 (0xC)
	struct FVector EventVelocity; // 0xD4 (0xC)
	struct FVector EventNormal; // 0xE0 (0xC)
};

struct USeqAct_ParticleEventGenerator {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_ParticleEventGenerator_Data USeqAct_ParticleEventGenerator;
};

// 0xA4 
struct USeqAct_PhysXSwitch_Data {
	// Last Offset: 0xA4
};

struct USeqAct_PhysXSwitch {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_PhysXSwitch_Data USeqAct_PhysXSwitch;
};

// 0xC4 
struct USeqAct_PlayCameraAnim_Data {
	// Last Offset: 0xA4
	struct UCameraAnim* CameraAnim; // 0xA4 (0x4)
	BOOL bLoop :1 ; // 0xA8 (0x4)
	BOOL bRandomStartTime :1 ; // 0xA8 (0x4)
	const unsigned long: 0;
	float BlendInTime; // 0xAC (0x4)
	float BlendOutTime; // 0xB0 (0x4)
	float Rate; // 0xB4 (0x4)
	float IntensityScale; // 0xB8 (0x4)
	unsigned char PlaySpace; // 0xBC (0x1) (Enum = ECameraAnimPlaySpace)
	const unsigned char Unknown1[0x3]; // 0xBD (0x3) > LAST OFFSET
	struct AActor* UserDefinedSpaceActor; // 0xC0 (0x4)
};

struct USeqAct_PlayCameraAnim {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_PlayCameraAnim_Data USeqAct_PlayCameraAnim;
};

// 0xC8 
struct USeqAct_PlayFaceFXAnim_Data {
	// Last Offset: 0xA4
	struct UFaceFXAnimSet* FaceFXAnimSetRef; // 0xA4 (0x4)
	struct FString FaceFXGroupName; // 0xA8 (0xC)
	struct FString FaceFXAnimName; // 0xB4 (0xC)
	struct USoundCue* SoundCueToPlay; // 0xC0 (0x4)
	struct UAkEvent* AkEventToPlay; // 0xC4 (0x4)
};

struct USeqAct_PlayFaceFXAnim {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_PlayFaceFXAnim_Data USeqAct_PlayFaceFXAnim;
};

// 0xC8 
struct USeqAct_PlayMusicTrack_Data {
	// Last Offset: 0xA4
	struct FMusicTrackStruct MusicTrack; // 0xA4 (0x24)
};

struct USeqAct_PlayMusicTrack {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_PlayMusicTrack_Data USeqAct_PlayMusicTrack;
};

// 0xAC 
struct USeqAct_Possess_Data {
	// Last Offset: 0xA4
	struct APawn* PawnToPossess; // 0xA4 (0x4)
	BOOL bKillOldPawn :1 ; // 0xA8 (0x4)
	BOOL bTryToLeaveVehicle :1 ; // 0xA8 (0x4)
	BOOL bBypassVehicleEntryAnimation :1 ; // 0xA8 (0x4)
	const unsigned long: 0;
};

struct USeqAct_Possess {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_Possess_Data USeqAct_Possess;
};

// 0xA8 
struct USeqAct_SetApexClothingParam_Data {
	// Last Offset: 0xA4
	BOOL bEnableApexClothingSimulation :1 ; // 0xA4 (0x4)
	const unsigned long: 0;
};

struct USeqAct_SetApexClothingParam {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_SetApexClothingParam_Data USeqAct_SetApexClothingParam;
};

// 0xA4 
struct USeqAct_SetBlockRigidBody_Data {
	// Last Offset: 0xA4
};

struct USeqAct_SetBlockRigidBody {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_SetBlockRigidBody_Data USeqAct_SetBlockRigidBody;
};

// 0xB8 
struct USeqAct_SetCameraTarget_Data {
	// Last Offset: 0xA4
	struct AActor* CameraTarget; // 0xA4 (0x4)
	struct FViewTargetTransitionParams TransitionParams; // 0xA8 (0x10)
};

struct USeqAct_SetCameraTarget {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_SetCameraTarget_Data USeqAct_SetCameraTarget;
};

// 0xAC 
struct USeqAct_SetMaterial_Data {
	// Last Offset: 0xA4
	struct UMaterialInterface* NewMaterial; // 0xA4 (0x4)
	int MaterialIndex; // 0xA8 (0x4)
};

struct USeqAct_SetMaterial {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_SetMaterial_Data USeqAct_SetMaterial;
};

// 0xB4 
struct USeqAct_SetMatInstScalarParam_Data {
	// Last Offset: 0xA4
	struct UMaterialInstanceConstant* MatInst; // 0xA4 (0x4)
	struct FName ParamName; // 0xA8 (0x8)
	float ScalarValue; // 0xB0 (0x4)
};

struct USeqAct_SetMatInstScalarParam {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_SetMatInstScalarParam_Data USeqAct_SetMatInstScalarParam;
};

// 0xB4 
struct USeqAct_SetMesh_Data {
	// Last Offset: 0xA4
	struct USkeletalMesh* NewSkeletalMesh; // 0xA4 (0x4)
	struct UStaticMesh* NewStaticMesh; // 0xA8 (0x4)
	unsigned char MeshType; // 0xAC (0x1) (Enum = EMeshType)
	const unsigned char Unknown1[0x3]; // 0xAD (0x3) > LAST OFFSET
	BOOL bIsAllowedToMove :1 ; // 0xB0 (0x4)
	BOOL bAllowDecalsToReattach :1 ; // 0xB0 (0x4)
	const unsigned long: 0;
};

struct USeqAct_SetMesh {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_SetMesh_Data USeqAct_SetMesh;
};

// 0xA5 
struct USeqAct_SetPhysics_Data {
	// Last Offset: 0xA4
	unsigned char newPhysics; // 0xA4 (0x1) (Enum = EPhysics)
};

struct USeqAct_SetPhysics {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_SetPhysics_Data USeqAct_SetPhysics;
};

// 0xA4 
struct USeqAct_SetRigidBodyIgnoreVehicles_Data {
	// Last Offset: 0xA4
};

struct USeqAct_SetRigidBodyIgnoreVehicles {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_SetRigidBodyIgnoreVehicles_Data USeqAct_SetRigidBodyIgnoreVehicles;
};

// 0xA4 
struct USeqAct_SetSequenceVariable_Data {
	// Last Offset: 0xA4
};

struct USeqAct_SetSequenceVariable {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_SetSequenceVariable_Data USeqAct_SetSequenceVariable;
};

// 0xAC 
struct USeqAct_AccessObjectList_Data {
	// Last Offset: 0xA4
	struct UObject* OutputObject; // 0xA4 (0x4)
	int ObjectIndex; // 0xA8 (0x4)
};

struct USeqAct_AccessObjectList {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_SetSequenceVariable_Data USeqAct_SetSequenceVariable;
	struct USeqAct_AccessObjectList_Data USeqAct_AccessObjectList;
};

// 0xB4 
struct USeqAct_AddFloat_Data {
	// Last Offset: 0xA4
	float ValueA; // 0xA4 (0x4)
	float ValueB; // 0xA8 (0x4)
	float FloatResult; // 0xAC (0x4)
	int IntResult; // 0xB0 (0x4)
};

struct USeqAct_AddFloat {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_SetSequenceVariable_Data USeqAct_SetSequenceVariable;
	struct USeqAct_AddFloat_Data USeqAct_AddFloat;
};

// 0xB4 
struct USeqAct_AddInt_Data {
	// Last Offset: 0xA4
	int ValueA; // 0xA4 (0x4)
	int ValueB; // 0xA8 (0x4)
	float FloatResult; // 0xAC (0x4)
	int IntResult; // 0xB0 (0x4)
};

struct USeqAct_AddInt {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_SetSequenceVariable_Data USeqAct_SetSequenceVariable;
	struct USeqAct_AddInt_Data USeqAct_AddInt;
};

// 0xAC 
struct USeqAct_CastToFloat_Data {
	// Last Offset: 0xA4
	int Value; // 0xA4 (0x4)
	float FloatResult; // 0xA8 (0x4)
};

struct USeqAct_CastToFloat {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_SetSequenceVariable_Data USeqAct_SetSequenceVariable;
	struct USeqAct_CastToFloat_Data USeqAct_CastToFloat;
};

// 0xB0 
struct USeqAct_CastToInt_Data {
	// Last Offset: 0xA4
	BOOL bTruncate :1 ; // 0xA4 (0x4)
	const unsigned long: 0;
	float Value; // 0xA8 (0x4)
	int IntResult; // 0xAC (0x4)
};

struct USeqAct_CastToInt {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_SetSequenceVariable_Data USeqAct_SetSequenceVariable;
	struct USeqAct_CastToInt_Data USeqAct_CastToInt;
};

// 0xB4 
struct USeqAct_DivideFloat_Data {
	// Last Offset: 0xA4
	float ValueA; // 0xA4 (0x4)
	float ValueB; // 0xA8 (0x4)
	float FloatResult; // 0xAC (0x4)
	int IntResult; // 0xB0 (0x4)
};

struct USeqAct_DivideFloat {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_SetSequenceVariable_Data USeqAct_SetSequenceVariable;
	struct USeqAct_DivideFloat_Data USeqAct_DivideFloat;
};

// 0xB4 
struct USeqAct_DivideInt_Data {
	// Last Offset: 0xA4
	int ValueA; // 0xA4 (0x4)
	int ValueB; // 0xA8 (0x4)
	float FloatResult; // 0xAC (0x4)
	int IntResult; // 0xB0 (0x4)
};

struct USeqAct_DivideInt {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_SetSequenceVariable_Data USeqAct_SetSequenceVariable;
	struct USeqAct_DivideInt_Data USeqAct_DivideInt;
};

// 0xA8 
struct USeqAct_ModifyObjectList_Data {
	// Last Offset: 0xA4
	int ListEntriesCount; // 0xA4 (0x4)
};

struct USeqAct_ModifyObjectList {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_SetSequenceVariable_Data USeqAct_SetSequenceVariable;
	struct USeqAct_ModifyObjectList_Data USeqAct_ModifyObjectList;
};

// 0xB4 
struct USeqAct_MultiplyFloat_Data {
	// Last Offset: 0xA4
	float ValueA; // 0xA4 (0x4)
	float ValueB; // 0xA8 (0x4)
	float FloatResult; // 0xAC (0x4)
	int IntResult; // 0xB0 (0x4)
};

struct USeqAct_MultiplyFloat {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_SetSequenceVariable_Data USeqAct_SetSequenceVariable;
	struct USeqAct_MultiplyFloat_Data USeqAct_MultiplyFloat;
};

// 0xB4 
struct USeqAct_MultiplyInt_Data {
	// Last Offset: 0xA4
	int ValueA; // 0xA4 (0x4)
	int ValueB; // 0xA8 (0x4)
	float FloatResult; // 0xAC (0x4)
	int IntResult; // 0xB0 (0x4)
};

struct USeqAct_MultiplyInt {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_SetSequenceVariable_Data USeqAct_SetSequenceVariable;
	struct USeqAct_MultiplyInt_Data USeqAct_MultiplyInt;
};

// 0xA8 
struct USeqAct_SetBool_Data {
	// Last Offset: 0xA4
	BOOL DefaultValue :1 ; // 0xA4 (0x4)
	const unsigned long: 0;
};

struct USeqAct_SetBool {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_SetSequenceVariable_Data USeqAct_SetSequenceVariable;
	struct USeqAct_SetBool_Data USeqAct_SetBool;
};

// 0xB4 
struct USeqAct_SetFloat_Data {
	// Last Offset: 0xA4
	float Target; // 0xA4 (0x4)
	struct TArray_float Value; // 0xA8 (0xC)
};

struct USeqAct_SetFloat {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_SetSequenceVariable_Data USeqAct_SetSequenceVariable;
	struct USeqAct_SetFloat_Data USeqAct_SetFloat;
};

// 0xB4 
struct USeqAct_SetInt_Data {
	// Last Offset: 0xA4
	int Target; // 0xA4 (0x4)
	struct TArray_int Value; // 0xA8 (0xC)
};

struct USeqAct_SetInt {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_SetSequenceVariable_Data USeqAct_SetSequenceVariable;
	struct USeqAct_SetInt_Data USeqAct_SetInt;
};

// 0xC4 
struct USeqAct_SetLocation_Data {
	// Last Offset: 0xA4
	BOOL bSetLocation :1 ; // 0xA4 (0x4)
	BOOL bSetRotation :1 ; // 0xA4 (0x4)
	const unsigned long: 0;
	struct FVector LocationValue; // 0xA8 (0xC)
	struct FRotator RotationValue; // 0xB4 (0xC)
	struct UObject* Target; // 0xC0 (0x4)
};

struct USeqAct_SetLocation {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_SetSequenceVariable_Data USeqAct_SetSequenceVariable;
	struct USeqAct_SetLocation_Data USeqAct_SetLocation;
};

// 0xAC 
struct USeqAct_SetObject_Data {
	// Last Offset: 0xA4
	struct UObject* DefaultValue; // 0xA4 (0x4)
	struct UObject* Value; // 0xA8 (0x4)
};

struct USeqAct_SetObject {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_SetSequenceVariable_Data USeqAct_SetSequenceVariable;
	struct USeqAct_SetObject_Data USeqAct_SetObject;
};

// 0xBC 
struct USeqAct_SetString_Data {
	// Last Offset: 0xA4
	struct FString Target; // 0xA4 (0xC)
	struct FString Value; // 0xB0 (0xC)
};

struct USeqAct_SetString {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_SetSequenceVariable_Data USeqAct_SetSequenceVariable;
	struct USeqAct_SetString_Data USeqAct_SetString;
};

// 0xB4 
struct USeqAct_SubtractFloat_Data {
	// Last Offset: 0xA4
	float ValueA; // 0xA4 (0x4)
	float ValueB; // 0xA8 (0x4)
	float FloatResult; // 0xAC (0x4)
	int IntResult; // 0xB0 (0x4)
};

struct USeqAct_SubtractFloat {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_SetSequenceVariable_Data USeqAct_SetSequenceVariable;
	struct USeqAct_SubtractFloat_Data USeqAct_SubtractFloat;
};

// 0xB4 
struct USeqAct_SubtractInt_Data {
	// Last Offset: 0xA4
	int ValueA; // 0xA4 (0x4)
	int ValueB; // 0xA8 (0x4)
	float FloatResult; // 0xAC (0x4)
	int IntResult; // 0xB0 (0x4)
};

struct USeqAct_SubtractInt {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_SetSequenceVariable_Data USeqAct_SetSequenceVariable;
	struct USeqAct_SubtractInt_Data USeqAct_SubtractInt;
};

// 0xBC 
struct USeqAct_SetVectorComponents_Data {
	// Last Offset: 0xA4
	struct FVector OutVector; // 0xA4 (0xC)
	float X; // 0xB0 (0x4)
	float Y; // 0xB4 (0x4)
	float Z; // 0xB8 (0x4)
};

struct USeqAct_SetVectorComponents {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_SetVectorComponents_Data USeqAct_SetVectorComponents;
};

// 0xBC 
struct USeqAct_Switch_Data {
	// Last Offset: 0xA4
	int LinkCount; // 0xA4 (0x4)
	int IncrementAmount; // 0xA8 (0x4)
	BOOL bLooping :1 ; // 0xAC (0x4)
	BOOL bAutoDisableLinks :1 ; // 0xAC (0x4)
	const unsigned long: 0;
	struct TArray_int Indices; // 0xB0 (0xC)
};

struct USeqAct_Switch {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_Switch_Data USeqAct_Switch;
};

// 0xC8 
struct USeqAct_RandomSwitch_Data {
	// Last Offset: 0xBC
	struct TArray_int AutoDisabledIndices; // 0xBC (0xC)
};

struct USeqAct_RandomSwitch {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_Switch_Data USeqAct_Switch;
	struct USeqAct_RandomSwitch_Data USeqAct_RandomSwitch;
};

// 0xAC 
struct USeqAct_Timer_Data {
	// Last Offset: 0xA4
	float ActivationTime; // 0xA4 (0x4)
	float Time; // 0xA8 (0x4)
};

struct USeqAct_Timer {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_Timer_Data USeqAct_Timer;
};

// 0xA4 
struct USeqAct_Toggle_Data {
	// Last Offset: 0xA4
};

struct USeqAct_Toggle {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_Toggle_Data USeqAct_Toggle;
};

// 0xE0 
struct USeqAct_Trace_Data {
	// Last Offset: 0xA4
	BOOL bTraceActors :1 ; // 0xA4 (0x4)
	BOOL bTraceWorld :1 ; // 0xA4 (0x4)
	const unsigned long: 0;
	struct FVector TraceExtent; // 0xA8 (0xC)
	struct FVector StartOffset; // 0xB4 (0xC)
	struct FVector EndOffset; // 0xC0 (0xC)
	struct UObject* HitObject; // 0xCC (0x4)
	float Distance; // 0xD0 (0x4)
	struct FVector HitLocation; // 0xD4 (0xC)
};

struct USeqAct_Trace {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_Trace_Data USeqAct_Trace;
};

// 0x8C 
struct USequenceCondition_Data {
	// Last Offset: 0x8C
};

struct USequenceCondition {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceCondition_Data USequenceCondition;
};

// 0x90 
struct USeqCond_CompareBool_Data {
	// Last Offset: 0x8C
	BOOL bResult :1 ; // 0x8C (0x4)
	const unsigned long: 0;
};

struct USeqCond_CompareBool {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceCondition_Data USequenceCondition;
	struct USeqCond_CompareBool_Data USeqCond_CompareBool;
};

// 0x94 
struct USeqCond_CompareFloat_Data {
	// Last Offset: 0x8C
	float ValueA; // 0x8C (0x4)
	float ValueB; // 0x90 (0x4)
};

struct USeqCond_CompareFloat {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceCondition_Data USequenceCondition;
	struct USeqCond_CompareFloat_Data USeqCond_CompareFloat;
};

// 0x94 
struct USeqCond_CompareInt_Data {
	// Last Offset: 0x8C
	int ValueA; // 0x8C (0x4)
	int ValueB; // 0x90 (0x4)
};

struct USeqCond_CompareInt {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceCondition_Data USequenceCondition;
	struct USeqCond_CompareInt_Data USeqCond_CompareInt;
};

// 0x8C 
struct USeqCond_CompareObject_Data {
	// Last Offset: 0x8C
};

struct USeqCond_CompareObject {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceCondition_Data USequenceCondition;
	struct USeqCond_CompareObject_Data USeqCond_CompareObject;
};

// 0x8C 
struct USeqCond_GetServerType_Data {
	// Last Offset: 0x8C
};

struct USeqCond_GetServerType {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceCondition_Data USequenceCondition;
	struct USeqCond_GetServerType_Data USeqCond_GetServerType;
};

// 0x98 
struct USeqCond_Increment_Data {
	// Last Offset: 0x8C
	int IncrementAmount; // 0x8C (0x4)
	int ValueA; // 0x90 (0x4)
	int ValueB; // 0x94 (0x4)
};

struct USeqCond_Increment {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceCondition_Data USequenceCondition;
	struct USeqCond_Increment_Data USeqCond_Increment;
};

// 0x98 
struct USeqCond_IncrementFloat_Data {
	// Last Offset: 0x8C
	float IncrementAmount; // 0x8C (0x4)
	float ValueA; // 0x90 (0x4)
	float ValueB; // 0x94 (0x4)
};

struct USeqCond_IncrementFloat {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceCondition_Data USequenceCondition;
	struct USeqCond_IncrementFloat_Data USeqCond_IncrementFloat;
};

// 0x8C 
struct USeqCond_IsAlive_Data {
	// Last Offset: 0x8C
};

struct USeqCond_IsAlive {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceCondition_Data USequenceCondition;
	struct USeqCond_IsAlive_Data USeqCond_IsAlive;
};

// 0x8C 
struct USeqCond_IsBenchmarking_Data {
	// Last Offset: 0x8C
};

struct USeqCond_IsBenchmarking {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceCondition_Data USequenceCondition;
	struct USeqCond_IsBenchmarking_Data USeqCond_IsBenchmarking;
};

// 0x8C 
struct USeqCond_IsConsole_Data {
	// Last Offset: 0x8C
};

struct USeqCond_IsConsole {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceCondition_Data USequenceCondition;
	struct USeqCond_IsConsole_Data USeqCond_IsConsole;
};

// 0x8C 
struct USeqCond_IsInCombat_Data {
	// Last Offset: 0x8C
};

struct USeqCond_IsInCombat {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceCondition_Data USequenceCondition;
	struct USeqCond_IsInCombat_Data USeqCond_IsInCombat;
};

// 0x90 
struct USeqCond_IsLoggedIn_Data {
	// Last Offset: 0x8C
	int NumNeededLoggedIn; // 0x8C (0x4)
};

struct USeqCond_IsLoggedIn {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceCondition_Data USequenceCondition;
	struct USeqCond_IsLoggedIn_Data USeqCond_IsLoggedIn;
};

// 0x8C 
struct USeqCond_IsPIE_Data {
	// Last Offset: 0x8C
};

struct USeqCond_IsPIE {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceCondition_Data USequenceCondition;
	struct USeqCond_IsPIE_Data USeqCond_IsPIE;
};

// 0x8C 
struct USeqCond_IsSameTeam_Data {
	// Last Offset: 0x8C
};

struct USeqCond_IsSameTeam {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceCondition_Data USequenceCondition;
	struct USeqCond_IsSameTeam_Data USeqCond_IsSameTeam;
};

// 0x8C 
struct USeqCond_MatureLanguage_Data {
	// Last Offset: 0x8C
};

struct USeqCond_MatureLanguage {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceCondition_Data USequenceCondition;
	struct USeqCond_MatureLanguage_Data USeqCond_MatureLanguage;
};

// 0x8C 
struct USeqCond_ShowGore_Data {
	// Last Offset: 0x8C
};

struct USeqCond_ShowGore {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceCondition_Data USequenceCondition;
	struct USeqCond_ShowGore_Data USeqCond_ShowGore;
};

// 0x8C 
struct USeqCond_SwitchBase_Data {
	// Last Offset: 0x8C
};

struct USeqCond_SwitchBase {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceCondition_Data USequenceCondition;
	struct USeqCond_SwitchBase_Data USeqCond_SwitchBase;
};

// 0x98 
struct USeqCond_SwitchClass_Data {
	// Last Offset: 0x8C
	struct TArray_FSwitchClassInfo ClassArray; // 0x8C (0xC)
};

struct USeqCond_SwitchClass {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceCondition_Data USequenceCondition;
	struct USeqCond_SwitchBase_Data USeqCond_SwitchBase;
	struct USeqCond_SwitchClass_Data USeqCond_SwitchClass;
};

// 0x98 
struct USeqCond_SwitchObject_Data {
	// Last Offset: 0x8C
	struct TArray_FSwitchObjectCase SupportedValues; // 0x8C (0xC)
};

struct USeqCond_SwitchObject {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceCondition_Data USequenceCondition;
	struct USeqCond_SwitchBase_Data USeqCond_SwitchBase;
	struct USeqCond_SwitchObject_Data USeqCond_SwitchObject;
};

// 0x8C 
struct USeqCond_SwitchPlatform_Data {
	// Last Offset: 0x8C
};

struct USeqCond_SwitchPlatform {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceCondition_Data USequenceCondition;
	struct USeqCond_SwitchPlatform_Data USeqCond_SwitchPlatform;
};

// 0xC8 
struct USeqEvent_AISeeEnemy_Data {
	// Last Offset: 0xC4
	float MaxSightDistance; // 0xC4 (0x4)
};

struct USeqEvent_AISeeEnemy {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceEvent_Data USequenceEvent;
	struct USeqEvent_AISeeEnemy_Data USeqEvent_AISeeEnemy;
};

// 0xCC 
struct USeqEvent_AnimNotify_Data {
	// Last Offset: 0xC4
	struct FName NotifyName; // 0xC4 (0x8)
};

struct USeqEvent_AnimNotify {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceEvent_Data USequenceEvent;
	struct USeqEvent_AnimNotify_Data USeqEvent_AnimNotify;
};

// 0xD8 
struct USeqEvent_Console_Data {
	// Last Offset: 0xC4
	struct FName ConsoleEventName; // 0xC4 (0x8)
	struct FString EventDesc; // 0xCC (0xC)
};

struct USeqEvent_Console {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceEvent_Data USequenceEvent;
	struct USeqEvent_Console_Data USeqEvent_Console;
};

// 0xC4 
struct USeqEvent_ConstraintBroken_Data {
	// Last Offset: 0xC4
};

struct USeqEvent_ConstraintBroken {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceEvent_Data USequenceEvent;
	struct USeqEvent_ConstraintBroken_Data USeqEvent_ConstraintBroken;
};

// 0xC4 
struct USeqEvent_Destroyed_Data {
	// Last Offset: 0xC4
};

struct USeqEvent_Destroyed {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceEvent_Data USequenceEvent;
	struct USeqEvent_Destroyed_Data USeqEvent_Destroyed;
};

// 0xC4 
struct USeqEvent_LevelLoaded_Data {
	// Last Offset: 0xC4
};

struct USeqEvent_LevelLoaded {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceEvent_Data USequenceEvent;
	struct USeqEvent_LevelLoaded_Data USeqEvent_LevelLoaded;
};

// 0xC8 
struct USeqEvent_Mover_Data {
	// Last Offset: 0xC4
	float StayOpenTime; // 0xC4 (0x4)
};

struct USeqEvent_Mover {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceEvent_Data USequenceEvent;
	struct USeqEvent_Mover_Data USeqEvent_Mover;
};

// 0xF8 
struct USeqEvent_ParticleEvent_Data {
	// Last Offset: 0xC4
	unsigned char EventType; // 0xC4 (0x1) (Enum = EParticleEventOutputType)
	const unsigned char Unknown1[0x3]; // 0xC5 (0x3) > LAST OFFSET
	struct FVector EventPosition; // 0xC8 (0xC)
	float EventEmitterTime; // 0xD4 (0x4)
	struct FVector EventVelocity; // 0xD8 (0xC)
	float EventParticleTime; // 0xE4 (0x4)
	struct FVector EventNormal; // 0xE8 (0xC)
	BOOL UseRelfectedImpactVector :1 ; // 0xF4 (0x4)
	const unsigned long: 0;
};

struct USeqEvent_ParticleEvent {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceEvent_Data USequenceEvent;
	struct USeqEvent_ParticleEvent_Data USeqEvent_ParticleEvent;
};

// 0xC8 
struct USeqEvent_ProjectileLanded_Data {
	// Last Offset: 0xC4
	float MaxDistance; // 0xC4 (0x4)
};

struct USeqEvent_ProjectileLanded {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceEvent_Data USequenceEvent;
	struct USeqEvent_ProjectileLanded_Data USeqEvent_ProjectileLanded;
};

// 0xD0 
struct USeqEvent_RemoteEvent_Data {
	// Last Offset: 0xC4
	struct FName EventName; // 0xC4 (0x8)
	BOOL bStatusIsOk :1 ; // 0xCC (0x4)
	const unsigned long: 0;
};

struct USeqEvent_RemoteEvent {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceEvent_Data USequenceEvent;
	struct USeqEvent_RemoteEvent_Data USeqEvent_RemoteEvent;
};

// 0xC8 
struct USeqEvent_RigidBodyCollision_Data {
	// Last Offset: 0xC4
	float MinCollisionVelocity; // 0xC4 (0x4)
};

struct USeqEvent_RigidBodyCollision {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceEvent_Data USequenceEvent;
	struct USeqEvent_RigidBodyCollision_Data USeqEvent_RigidBodyCollision;
};

// 0xC4 
struct USeqEvent_SeeDeath_Data {
	// Last Offset: 0xC4
};

struct USeqEvent_SeeDeath {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceEvent_Data USequenceEvent;
	struct USeqEvent_SeeDeath_Data USeqEvent_SeeDeath;
};

// 0xD0 
struct USeqEvent_SequenceActivated_Data {
	// Last Offset: 0xC4
	struct FString InputLabel; // 0xC4 (0xC)
};

struct USeqEvent_SequenceActivated {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceEvent_Data USequenceEvent;
	struct USeqEvent_SequenceActivated_Data USeqEvent_SequenceActivated;
};

// 0x104 
struct USeqEvent_TakeDamage_Data {
	// Last Offset: 0xC4
	float MinDamageAmount; // 0xC4 (0x4)
	float DamageThreshold; // 0xC8 (0x4)
	struct TArray_UClassPtr DamageTypes; // 0xCC (0xC)
	struct TArray_UDamageTypeDefinitionPtr DamageTypeDefinitions; // 0xD8 (0xC)
	struct TArray_UClassPtr IgnoreDamageTypes; // 0xE4 (0xC)
	struct TArray_UDamageTypeDefinitionPtr IgnoreDamageTypeDefinitions; // 0xF0 (0xC)
	float CurrentDamage; // 0xFC (0x4)
	BOOL bResetDamageOnToggle :1 ; // 0x100 (0x4)
	const unsigned long: 0;
};

struct USeqEvent_TakeDamage {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceEvent_Data USequenceEvent;
	struct USeqEvent_TakeDamage_Data USeqEvent_TakeDamage;
};

// 0xF8 
struct USeqEvent_Touch_Data {
	// Last Offset: 0xC4
	struct TArray_UClassPtr ClassProximityTypes; // 0xC4 (0xC)
	struct TArray_AActorPtr ArchetypeFilter; // 0xD0 (0xC)
	struct TArray_UClassPtr IgnoredClassProximityTypes; // 0xDC (0xC)
	BOOL bForceOverlapping :1 ; // 0xE8 (0x4)
	BOOL bUseInstigator :1 ; // 0xE8 (0x4)
	BOOL bAllowDeadPawns :1 ; // 0xE8 (0x4)
	const unsigned long: 0;
	struct TArray_AActorPtr TouchedList; // 0xEC (0xC)
};

struct USeqEvent_Touch {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceEvent_Data USequenceEvent;
	struct USeqEvent_Touch_Data USeqEvent_Touch;
};

// 0xF4 
struct USeqEvent_Used_Data {
	// Last Offset: 0xC4
	BOOL bAimToInteract :1 ; // 0xC4 (0x4)
	BOOL bUseInteractDistance :1 ; // 0xC4 (0x4)
	const unsigned long: 0;
	float InteractDistance; // 0xC8 (0x4)
	struct FString InteractText; // 0xCC (0xC)
	struct UTexture2D* InteractIcon; // 0xD8 (0x4)
	struct TArray_UClassPtr ClassProximityTypes; // 0xDC (0xC)
	struct TArray_UClassPtr IgnoredClassProximityTypes; // 0xE8 (0xC)
};

struct USeqEvent_Used {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceEvent_Data USequenceEvent;
	struct USeqEvent_Used_Data USeqEvent_Used;
};

// 0x58 
struct USequenceVariable_Data {
	// Last Offset: 0x48
	struct FName VarName; // 0x48 (0x8)
	BOOL bLinkToAttribute :1 ; // 0x50 (0x4)
	const unsigned long: 0;
	struct UAttributeDefinition* OptionalAttributeDefinition; // 0x54 (0x4)
};

struct USequenceVariable {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceVariable_Data USequenceVariable;
};

// 0x8C 
struct UInterpData_Data {
	// Last Offset: 0x58
	float InterpLength; // 0x58 (0x4)
	float PathBuildTime; // 0x5C (0x4)
	struct TArray_UInterpGroupPtr InterpGroups; // 0x60 (0xC)
	struct UInterpCurveEdSetup* CurveEdSetup; // 0x6C (0x4)
	float EdSectionStart; // 0x70 (0x4)
	float EdSectionEnd; // 0x74 (0x4)
	BOOL bShouldBakeAndPrune :1 ; // 0x78 (0x4)
	const unsigned long: 0;
	struct TArray_FAnimSetBakeAndPruneStatus BakeAndPruneStatus; // 0x7C (0xC)
	struct UInterpGroupDirector* CachedDirectorGroup; // 0x88 (0x4)
};

struct UInterpData {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceVariable_Data USequenceVariable;
	struct UInterpData_Data UInterpData;
};

// 0x5C 
struct USeqVar_Bool_Data {
	// Last Offset: 0x58
	int bValue; // 0x58 (0x4)
};

struct USeqVar_Bool {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceVariable_Data USequenceVariable;
	struct USeqVar_Bool_Data USeqVar_Bool;
};

// 0x68 
struct USeqVar_External_Data {
	// Last Offset: 0x58
	struct UClass* ExpectedType; // 0x58 (0x4)
	struct FString VariableLabel; // 0x5C (0xC)
};

struct USeqVar_External {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceVariable_Data USequenceVariable;
	struct USeqVar_External_Data USeqVar_External;
};

// 0x5C 
struct USeqVar_Float_Data {
	// Last Offset: 0x58
	float FloatValue; // 0x58 (0x4)
};

struct USeqVar_Float {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceVariable_Data USequenceVariable;
	struct USeqVar_Float_Data USeqVar_Float;
};

// 0x64 
struct USeqVar_RandomFloat_Data {
	// Last Offset: 0x5C
	float Min; // 0x5C (0x4)
	float Max; // 0x60 (0x4)
};

struct USeqVar_RandomFloat {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceVariable_Data USequenceVariable;
	struct USeqVar_Float_Data USeqVar_Float;
	struct USeqVar_RandomFloat_Data USeqVar_RandomFloat;
};

// 0x5C 
struct USeqVar_Int_Data {
	// Last Offset: 0x58
	int IntValue; // 0x58 (0x4)
};

struct USeqVar_Int {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceVariable_Data USequenceVariable;
	struct USeqVar_Int_Data USeqVar_Int;
};

// 0x64 
struct USeqVar_RandomInt_Data {
	// Last Offset: 0x5C
	int Min; // 0x5C (0x4)
	int Max; // 0x60 (0x4)
};

struct USeqVar_RandomInt {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceVariable_Data USequenceVariable;
	struct USeqVar_Int_Data USeqVar_Int;
	struct USeqVar_RandomInt_Data USeqVar_RandomInt;
};

// 0x68 
struct USeqVar_Named_Data {
	// Last Offset: 0x58
	struct UClass* ExpectedType; // 0x58 (0x4)
	struct FName FindVarName; // 0x5C (0x8)
	BOOL bStatusIsOk :1 ; // 0x64 (0x4)
	const unsigned long: 0;
};

struct USeqVar_Named {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceVariable_Data USequenceVariable;
	struct USeqVar_Named_Data USeqVar_Named;
};

// 0x68 
struct USeqVar_Object_Data {
	// Last Offset: 0x58
	struct UObject* ObjValue; // 0x58 (0x4)
	struct FVector ActorLocation; // 0x5C (0xC)
};

struct USeqVar_Object {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceVariable_Data USequenceVariable;
	struct USeqVar_Object_Data USeqVar_Object;
};

// 0x6C 
struct USeqVar_Character_Data {
	// Last Offset: 0x68
	struct UClass* PawnClass; // 0x68 (0x4)
};

struct USeqVar_Character {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceVariable_Data USequenceVariable;
	struct USeqVar_Object_Data USeqVar_Object;
	struct USeqVar_Character_Data USeqVar_Character;
};

// 0x80 
struct USeqVar_Group_Data {
	// Last Offset: 0x68
	struct FName GroupName; // 0x68 (0x8)
	BOOL bCachedList :1 ; // 0x70 (0x4)
	const unsigned long: 0;
	struct TArray_UObjectPtr Actors; // 0x74 (0xC)
};

struct USeqVar_Group {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceVariable_Data USequenceVariable;
	struct USeqVar_Object_Data USeqVar_Object;
	struct USeqVar_Group_Data USeqVar_Group;
};

// 0x74 
struct USeqVar_ObjectList_Data {
	// Last Offset: 0x68
	struct TArray_UObjectPtr ObjList; // 0x68 (0xC)
};

struct USeqVar_ObjectList {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceVariable_Data USequenceVariable;
	struct USeqVar_Object_Data USeqVar_Object;
	struct USeqVar_ObjectList_Data USeqVar_ObjectList;
};

// 0x88 
struct USeqVar_ObjectVolume_Data {
	// Last Offset: 0x68
	float LastUpdateTime; // 0x68 (0x4)
	struct TArray_UObjectPtr ContainedObjects; // 0x6C (0xC)
	struct TArray_UClassPtr ExcludeClassList; // 0x78 (0xC)
	BOOL bCollidingOnly :1 ; // 0x84 (0x4)
	const unsigned long: 0;
};

struct USeqVar_ObjectVolume {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceVariable_Data USequenceVariable;
	struct USeqVar_Object_Data USeqVar_Object;
	struct USeqVar_ObjectVolume_Data USeqVar_ObjectVolume;
};

// 0x7C 
struct USeqVar_Player_Data {
	// Last Offset: 0x68
	struct TArray_UObjectPtr Players; // 0x68 (0xC)
	BOOL bAllPlayers :1 ; // 0x74 (0x4)
	const unsigned long: 0;
	int PlayerIdx; // 0x78 (0x4)
};

struct USeqVar_Player {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceVariable_Data USequenceVariable;
	struct USeqVar_Object_Data USeqVar_Object;
	struct USeqVar_Player_Data USeqVar_Player;
};

// 0x64 
struct USeqVar_String_Data {
	// Last Offset: 0x58
	struct FString StrValue; // 0x58 (0xC)
};

struct USeqVar_String {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceVariable_Data USequenceVariable;
	struct USeqVar_String_Data USeqVar_String;
};

// 0x64 
struct USeqVar_Vector_Data {
	// Last Offset: 0x58
	struct FVector VectValue; // 0x58 (0xC)
};

struct USeqVar_Vector {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceVariable_Data USequenceVariable;
	struct USeqVar_Vector_Data USeqVar_Vector;
};

// 0x194 
struct AAmbientSound_Data {
	// Last Offset: 0x18C
	BOOL bAutoPlay :1 ; // 0x18C (0x4)
	BOOL bIsPlaying :1 ; // 0x18C (0x4)
	const unsigned long: 0;
	struct UAudioComponent* AudioComponent; // 0x190 (0x4)
};

struct AAmbientSound {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AKeypoint_Data AKeypoint;
	struct AAmbientSound_Data AAmbientSound;
};

// 0x70 
struct UDistributionFloatSoundParameter_Data {
	// Last Offset: 0x70
};

struct UDistributionFloatSoundParameter {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UDistributionFloat_Data UDistributionFloat;
	struct UDistributionFloatConstant_Data UDistributionFloatConstant;
	struct UDistributionFloatParameterBase_Data UDistributionFloatParameterBase;
	struct UDistributionFloatSoundParameter_Data UDistributionFloatSoundParameter;
};

// 0x4C 
struct USoundNode_Data {
	// Last Offset: 0x3C
	int NodeUpdateHint; // 0x3C (0x4)
	struct TArray_USoundNodePtr ChildNodes; // 0x40 (0xC)
};

struct USoundNode {
	struct UObject_Data UObject;
	struct USoundNode_Data USoundNode;
};

// 0x178 
struct USoundNodeWave_Data {
	// Last Offset: 0x4C
	int CompressionQuality; // 0x4C (0x4)
	BOOL bForceRealTimeDecompression :1 ; // 0x50 (0x4)
	BOOL bLoopingSound :1 ; // 0x50 (0x4)
	BOOL bDynamicResource :1 ; // 0x50 (0x4)
	BOOL bUseTTS :1 ; // 0x50 (0x4)
	BOOL bProcedural :1 ; // 0x50 (0x4)
	BOOL bStreamable :1 ; // 0x50 (0x4)
	BOOL bLoopedOnPS3 :1 ; // 0x50 (0x4)
	BOOL bMature :1 ; // 0x50 (0x4)
	BOOL bManualWordWrap :1 ; // 0x50 (0x4)
	BOOL bSingleLine :1 ; // 0x50 (0x4)
	const unsigned long: 0;
	unsigned char TTSSpeaker; // 0x54 (0x1) (Enum = ETTSSpeaker)
	unsigned char DecompressionType; // 0x55 (0x1) (Enum = EDecompressionType)
	const unsigned char Unknown1[0x2]; // 0x56 (0x2) > LAST OFFSET
	struct FString SpokenText; // 0x58 (0xC)
	float Volume; // 0x64 (0x4)
	float Pitch; // 0x68 (0x4)
	float Duration; // 0x6C (0x4)
	int NumChannels; // 0x70 (0x4)
	int SampleRate; // 0x74 (0x4)
	struct FUntypedBulkData_Mirror RawData; // 0x78 (0x34)
	struct FPointer VorbisDecompressor; // 0xAC (0x4)
	struct FPointer RawPCMData; // 0xB0 (0x4)
	int RawPCMDataSize; // 0xB4 (0x4)
	struct FUntypedBulkData_Mirror CompressedPCData; // 0xB8 (0x34)
	struct FUntypedBulkData_Mirror CompressedXbox360Data; // 0xEC (0x34)
	struct FUntypedBulkData_Mirror CompressedPS3Data; // 0x120 (0x34)
	int ResourceID; // 0x154 (0x4)
	int ResourceSize; // 0x158 (0x4)
	struct FPointer ResourceData; // 0x15C (0x4)
	struct TArray_FSubtitleCue Subtitles; // 0x160 (0xC)
	struct TArray_FLocalizedSubtitle LocalizedSubtitles; // 0x16C (0xC)
};

struct USoundNodeWave {
	struct UObject_Data UObject;
	struct USoundNode_Data USoundNode;
	struct USoundNodeWave_Data USoundNodeWave;
};

// 0x224 
struct ALandscapeProxy_Data {
	// Last Offset: 0x188
	struct TArray_ULandscapeComponentPtr LandscapeComponents; // 0x188 (0xC)
	struct TArray_ULandscapeHeightfieldCollisionComponentPtr CollisionComponents; // 0x194 (0xC)
	const unsigned char Unknown1[0x3C]; // 0x1A0 (0x3C) UNKNOWN PROPERTY
	const unsigned char Unknown2[0x3C]; // 0x1DC (0x3C) UNKNOWN PROPERTY
	float StaticLightingResolution; // 0x218 (0x4)
	struct ALandscape* LandscapeActor; // 0x21C (0x4)
	BOOL bIsProxy :1 ; // 0x220 (0x4)
	const unsigned long: 0;
};

struct ALandscapeProxy {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct ALandscapeProxy_Data ALandscapeProxy;
};

// 0x348 
struct ALandscape_Data {
	// Last Offset: 0x224
	struct UMaterialInterface* LandscapeMaterial; // 0x224 (0x4)
	int MaxLODLevel; // 0x228 (0x4)
	struct TArray_FName LayerNames; // 0x22C (0xC)
	struct TArray_FLandscapeLayerInfo LayerInfos; // 0x238 (0xC)
	float StreamingDistanceMultiplier; // 0x244 (0x4)
	const unsigned char Unknown1[0x3C]; // 0x248 (0x3C) UNKNOWN PROPERTY
	const unsigned char Unknown2[0x3C]; // 0x284 (0x3C) UNKNOWN PROPERTY
	const unsigned char Unknown3[0x3C]; // 0x2C0 (0x3C) UNKNOWN PROPERTY
	struct FPointer DataInterface; // 0x2FC (0x4)
	int ComponentSizeQuads; // 0x300 (0x4)
	int SubsectionSizeQuads; // 0x304 (0x4)
	int NumSubsections; // 0x308 (0x4)
	struct FSet_Mirror Proxies; // 0x30C (0x3C)
};

struct ALandscape {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct ALandscapeProxy_Data ALandscapeProxy;
	struct ALandscape_Data ALandscape;
};

// 0x258 
struct ATerrain_Data {
	// Last Offset: 0x188
	struct TArray_FTerrainHeight Heights; // 0x188 (0xC)
	struct TArray_FTerrainInfoData InfoData; // 0x194 (0xC)
	struct TArray_FTerrainLayer Layers; // 0x1A0 (0xC)
	int NormalMapLayer; // 0x1AC (0x4)
	struct TArray_FTerrainDecoLayer DecoLayers; // 0x1B0 (0xC)
	struct TArray_FAlphaMap AlphaMaps; // 0x1BC (0xC)
	struct TArray_UTerrainComponentPtr TerrainComponents; // 0x1C8 (0xC)
	int NumSectionsX; // 0x1D4 (0x4)
	int NumSectionsY; // 0x1D8 (0x4)
	struct TArray_ATerrain_FTerrainWeightedMaterial WeightedMaterials; // 0x1DC (0xC)
	struct TArray_UTerrainWeightMapTexturePtr WeightedTextureMaps; // 0x1E8 (0xC)
	int MaxTesselationLevel; // 0x1F4 (0x4)
	unsigned char WeightmapQuadAlphaThreshold; // 0x1F8 (0x1)
	unsigned char WeightmapTexelAlphaThreshold; // 0x1F9 (0x1)
	unsigned char WeightmapQuadMaxLayers; // 0x1FA (0x1)
	unsigned char WeightmapTexelMaxLayers; // 0x1FB (0x1)
	int WeightmapTesselationLevel; // 0x1FC (0x4)
	int PreviousWeightmapTesselationLevel; // 0x200 (0x4)
	struct FCachedTerrainMaterialArray CachedTerrainMaterials[2]; // 0x204 (0x18)
	struct UMaterial* TerrainMaterialGBX; // 0x21C (0x4)
	struct FPointer TerrainMaterialResourceGBX; // 0x220 (0x4)
	int NumPatchesX; // 0x224 (0x4)
	int PreviousNumPatchesX; // 0x228 (0x4)
	int NumPatchesY; // 0x22C (0x4)
	int PreviousNumPatchesY; // 0x230 (0x4)
	int MaxComponentSize; // 0x234 (0x4)
	int StaticLightingResolution; // 0x238 (0x4)
	BOOL bIsOverridingLightResolution :1 ; // 0x23C (0x4)
	BOOL bBilinearFilterLightmapGeneration :1 ; // 0x23C (0x4)
	BOOL bCastShadow :1 ; // 0x23C (0x4)
	BOOL bForceDirectLightMap :1 ; // 0x23C (0x4)
	BOOL bCastDynamicShadow :1 ; // 0x23C (0x4)
	BOOL bEnableSpecular :1 ; // 0x23C (0x4)
	BOOL bBlockRigidBody :1 ; // 0x23C (0x4)
	BOOL bAllowRigidBodyUnderneath :1 ; // 0x23C (0x4)
	BOOL bAcceptsDynamicLights :1 ; // 0x23C (0x4)
	BOOL bLocked :1 ; // 0x23C (0x4)
	BOOL bHeightmapLocked :1 ; // 0x23C (0x4)
	BOOL bUseWorldOriginTextureUVs :1 ; // 0x23C (0x4)
	BOOL bAllowDuplication :1 ; // 0x23C (0x4)
	BOOL bBlockUnreal :1 ; // 0x23C (0x4)
	const unsigned long: 0;
	struct UPhysicalMaterial* TerrainPhysMaterialOverride; // 0x240 (0x4)
	struct FLightingChannelContainer LightingChannels; // 0x244 (0x4)
	struct FPointer ReleaseResourcesFence; // 0x248 (0x4)
	struct TArray_FSelectedTerrainVertex SelectedVertices; // 0x24C (0xC)
};

struct ATerrain {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct ATerrain_Data ATerrain;
};

// 0x2C0  (Alignment = 16)
struct ULandscapeComponent_Data {
	// Last Offset: 0x210
	int SectionBaseX; // 0x210 (0x4)
	int SectionBaseY; // 0x214 (0x4)
	int ComponentSizeQuads; // 0x218 (0x4)
	int SubsectionSizeQuads; // 0x21C (0x4)
	int NumSubsections; // 0x220 (0x4)
	struct UMaterialInstanceConstant* MaterialInstance; // 0x224 (0x4)
	struct TArray_FWeightmapLayerAllocationInfo WeightmapLayerAllocations; // 0x228 (0xC)
	struct TArray_UTexture2DPtr WeightmapTextures; // 0x234 (0xC)
	struct FVector4 WeightmapScaleBias; // 0x240 (0x10)
	float WeightmapSubsectionOffset; // 0x250 (0x4)
	const unsigned char Unknown1[0xC]; // 0x254 (0xC) > LAST OFFSET
	struct FVector4 HeightmapScaleBias; // 0x260 (0x10)
	struct UTexture2D* HeightmapTexture; // 0x270 (0x4)
	struct FBoxSphereBounds CachedBoxSphereBounds; // 0x274 (0x1C)
	int StaticLightingResolution; // 0x290 (0x4)
	struct TArray_UShadowMap2DPtr ShadowMaps; // 0x294 (0xC)
	struct TArray_FGuid IrrelevantLights; // 0x2A0 (0xC)
	struct FLightMapRef LightMap; // 0x2AC (0x4)
	struct FPointer EditToolRenderData; // 0x2B0 (0x4)
	int CollisionMipLevel; // 0x2B4 (0x4)
	struct FPointer PlatformData; // 0x2B8 (0x4)
	int PlatformDataSize; // 0x2BC (0x4)
};

struct ULandscapeComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct ULandscapeComponent_Data ULandscapeComponent;
};

// 0x28C  (Alignment = 16)
struct ULandscapeHeightfieldCollisionComponent_Data {
	// Last Offset: 0x210
	struct FUntypedBulkData_Mirror CollisionHeightData; // 0x210 (0x34)
	int SectionBaseX; // 0x244 (0x4)
	int SectionBaseY; // 0x248 (0x4)
	int CollisionSizeQuads; // 0x24C (0x4)
	float CollisionScale; // 0x250 (0x4)
	struct TArray_unsigned_char CollisionQuadFlags; // 0x254 (0xC)
	struct TArray_UPhysicalMaterialPtr PhysicalMaterials; // 0x260 (0xC)
	struct FPointer RBHeightfield; // 0x26C (0x4)
	struct FBoxSphereBounds CachedBoxSphereBounds; // 0x270 (0x1C)
};

struct ULandscapeHeightfieldCollisionComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct ULandscapeHeightfieldCollisionComponent_Data ULandscapeHeightfieldCollisionComponent;
};

// 0x278  (Alignment = 16)
struct UTerrainComponent_Data {
	// Last Offset: 0x210
	struct TArray_UShadowMap2DPtr ShadowMaps; // 0x210 (0xC)
	struct TArray_FGuid IrrelevantLights; // 0x21C (0xC)
	struct FPointer TerrainObject; // 0x228 (0x4)
	struct FPointer TerrainRenderResources; // 0x22C (0x4)
	int SectionBaseX; // 0x230 (0x4)
	int SectionBaseY; // 0x234 (0x4)
	int SectionSizeX; // 0x238 (0x4)
	int SectionSizeY; // 0x23C (0x4)
	int TrueSectionSizeX; // 0x240 (0x4)
	int TrueSectionSizeY; // 0x244 (0x4)
	struct FPointer LightMap; // 0x248 (0x4)
	struct TArray_int BatchMaterials; // 0x24C (0xC)
	int FullBatch; // 0x258 (0x4)
	struct FTerrainBVTree GameBVTree; // 0x25C (0xC)
	struct FTerrainBVTree EditorBVTree; // 0x268 (0xC)
	struct FPointer RBHeightfield; // 0x274 (0x4)
};

struct UTerrainComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UTerrainComponent_Data UTerrainComponent;
};

// 0xC0 
struct UTerrainWeightMapTexture_Data {
	// Last Offset: 0xC0
};

struct UTerrainWeightMapTexture {
	struct UObject_Data UObject;
	struct USurface_Data USurface;
	struct UTexture_Data UTexture;
	struct UTexture2D_Data UTexture2D;
	struct UTerrainWeightMapTexture_Data UTerrainWeightMapTexture;
};

// 0x48 
struct UTerrainLayerSetup_Data {
	// Last Offset: 0x3C
	struct TArray_FTerrainFilteredMaterial Materials; // 0x3C (0xC)
};

struct UTerrainLayerSetup {
	struct UObject_Data UObject;
	struct UTerrainLayerSetup_Data UTerrainLayerSetup;
};

// 0xAC  (Alignment = 16)
struct UTerrainMaterial_Data {
	// Last Offset: 0x3C
	const unsigned char Unknown1[0x4]; // 0x3C (0x4) > LAST OFFSET
	struct FMatrix LocalToMapping; // 0x40 (0x40)
	unsigned char MappingType; // 0x80 (0x1) (Enum = ETerrainMappingType)
	const unsigned char Unknown2[0x3]; // 0x81 (0x3) > LAST OFFSET
	float MappingScale; // 0x84 (0x4)
	float MappingRotation; // 0x88 (0x4)
	float MappingPanU; // 0x8C (0x4)
	float MappingPanV; // 0x90 (0x4)
	struct UMaterialInterface* Material; // 0x94 (0x4)
	struct UTexture2D* DisplacementMap; // 0x98 (0x4)
	float DisplacementScale; // 0x9C (0x4)
	struct TArray_FTerrainFoliageMesh FoliageMeshes; // 0xA0 (0xC)
};

struct UTerrainMaterial {
	struct UObject_Data UObject;
	struct UTerrainMaterial_Data UTerrainMaterial;
};

// 0x84 
struct UDataStoreClient_Data {
	// Last Offset: 0x48
	struct TArray_FString GlobalDataStoreClasses; // 0x48 (0xC)
	struct TArray_UUIDataStorePtr GlobalDataStores; // 0x54 (0xC)
	struct TArray_FString PlayerDataStoreClassNames; // 0x60 (0xC)
	struct TArray_UClassPtr PlayerDataStoreClasses; // 0x6C (0xC)
	struct TArray_FPlayerDataStoreGroup PlayerDataStores; // 0x78 (0xC)
};

struct UDataStoreClient {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UDataStoreClient_Data UDataStoreClient;
};

// 0x1D0 
struct UConsole_Data {
	// Last Offset: 0x78
	struct ULocalPlayer* ConsoleTargetPlayer; // 0x78 (0x4)
	struct UTexture2D* DefaultTexture_Black; // 0x7C (0x4)
	struct UTexture2D* DefaultTexture_White; // 0x80 (0x4)
	struct FName ConsoleKey; // 0x84 (0x8)
	struct FName TypeKey; // 0x8C (0x8)
	int MaxScrollbackSize; // 0x94 (0x4)
	struct TArray_FString Scrollback; // 0x98 (0xC)
	int SBHead; // 0xA4 (0x4)
	int SBPos; // 0xA8 (0x4)
	int HistoryTop; // 0xAC (0x4)
	int HistoryBot; // 0xB0 (0x4)
	int HistoryCur; // 0xB4 (0x4)
	struct FString History[16]; // 0xB8 (0xC0)
	BOOL bNavigatingHistory :1 ; // 0x178 (0x4)
	BOOL bCaptureKeyInput :1 ; // 0x178 (0x4)
	BOOL bCtrl :1 ; // 0x178 (0x4)
	BOOL bEnableUI :1 ; // 0x178 (0x4)
	BOOL bAutoCompleteLocked :1 ; // 0x178 (0x4)
	BOOL bRequireCtrlToNavigateAutoComplete :1 ; // 0x178 (0x4)
	BOOL bIsRuntimeAutoCompleteUpToDate :1 ; // 0x178 (0x4)
	const unsigned long: 0;
	struct FString TypedStr; // 0x17C (0xC)
	int TypedStrPos; // 0x188 (0x4)
	struct TArray_FAutoCompleteCommand ManualAutoCompleteList; // 0x18C (0xC)
	struct TArray_FAutoCompleteCommand AutoCompleteList; // 0x198 (0xC)
	int AutoCompleteIndex; // 0x1A4 (0x4)
	struct FAutoCompleteNode AutoCompleteTree; // 0x1A8 (0x1C)
	struct TArray_int AutoCompleteIndices; // 0x1C4 (0xC)
};

struct UConsole {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UInteraction_Data UInteraction;
	struct UConsole_Data UConsole;
};

// 0xE4 
struct UInput_Data {
	// Last Offset: 0x78
	struct TArray_FKeyBind Bindings; // 0x78 (0xC)
	struct TArray_FName PressedKeys; // 0x84 (0xC)
	unsigned char CurrentEvent; // 0x90 (0x1) (Enum = EInputEvent)
	const unsigned char Unknown1[0x3]; // 0x91 (0x3) > LAST OFFSET
	float CurrentDelta; // 0x94 (0x4)
	float CurrentDeltaTime; // 0x98 (0x4)
	const unsigned char Unknown2[0x3C]; // 0x9C (0x3C) UNKNOWN PROPERTY
	struct TArray_FPointer AxisArray; // 0xD8 (0xC)
};

struct UInput {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UInteraction_Data UInteraction;
	struct UInput_Data UInput;
};

// 0x17C 
struct UPlayerInput_Data {
	// Last Offset: 0xE4
	BOOL bUsingGamepad :1 ; // 0xE4 (0x4)
	BOOL bInvertGamepad :1 ; // 0xE4 (0x4)
	BOOL bInvertMouse :1 ; // 0xE4 (0x4)
	BOOL bInvertTurn :1 ; // 0xE4 (0x4)
	BOOL bInvertGamepadTurn :1 ; // 0xE4 (0x4)
	BOOL bInvertGamepadMove :1 ; // 0xE4 (0x4)
	BOOL bInvertGamepadStrafe :1 ; // 0xE4 (0x4)
	BOOL bWasForward :1 ; // 0xE4 (0x4)
	BOOL bWasBack :1 ; // 0xE4 (0x4)
	BOOL bWasLeft :1 ; // 0xE4 (0x4)
	BOOL bWasRight :1 ; // 0xE4 (0x4)
	BOOL bEdgeForward :1 ; // 0xE4 (0x4)
	BOOL bEdgeBack :1 ; // 0xE4 (0x4)
	BOOL bEdgeLeft :1 ; // 0xE4 (0x4)
	BOOL bEdgeRight :1 ; // 0xE4 (0x4)
	BOOL bEnableMouseSmoothing :1 ; // 0xE4 (0x4)
	BOOL bEnableFOVScaling :1 ; // 0xE4 (0x4)
	BOOL bLockTurnUntilRelease :1 ; // 0xE4 (0x4)
	const unsigned long: 0;
	struct FName LastAxisKeyName; // 0xE8 (0x8)
	float DoubleClickTimer; // 0xF0 (0x4)
	float DoubleClickTime; // 0xF4 (0x4)
	float MouseSensitivity; // 0xF8 (0x4)
	float aBaseX; // 0xFC (0x4)
	float aBaseY; // 0x100 (0x4)
	float aBaseZ; // 0x104 (0x4)
	float aMouseX; // 0x108 (0x4)
	float aMouseY; // 0x10C (0x4)
	float aForward; // 0x110 (0x4)
	float aTurn; // 0x114 (0x4)
	float aStrafe; // 0x118 (0x4)
	float aUp; // 0x11C (0x4)
	float aLookUp; // 0x120 (0x4)
	float aRightAnalogTrigger; // 0x124 (0x4)
	float aLeftAnalogTrigger; // 0x128 (0x4)
	float aPS3AccelX; // 0x12C (0x4)
	float aPS3AccelY; // 0x130 (0x4)
	float aPS3AccelZ; // 0x134 (0x4)
	float aPS3Gyro; // 0x138 (0x4)
	float RawJoyUp; // 0x13C (0x4)
	float RawJoyRight; // 0x140 (0x4)
	float RawJoyLookRight; // 0x144 (0x4)
	float RawJoyLookUp; // 0x148 (0x4)
	float MoveForwardSpeed; // 0x14C (0x4)
	float MoveStrafeSpeed; // 0x150 (0x4)
	float LookRightScale; // 0x154 (0x4)
	float LookUpScale; // 0x158 (0x4)
	unsigned char bStrafe; // 0x15C (0x1)
	unsigned char bXAxis; // 0x15D (0x1)
	unsigned char bYAxis; // 0x15E (0x1)
	const unsigned char Unknown1[0x1]; // 0x15F (0x1) > LAST OFFSET
	float ZeroTime[2]; // 0x160 (0x8)
	float SmoothedMouse[2]; // 0x168 (0x8)
	int MouseSamples; // 0x170 (0x4)
	float MouseSamplingTotal; // 0x174 (0x4)
	float AutoUnlockTurnTime; // 0x178 (0x4)
};

struct UPlayerInput {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UInteraction_Data UInteraction;
	struct UInput_Data UInput;
	struct UPlayerInput_Data UPlayerInput;
};

// 0x78 
struct UPlayerManagerInteraction_Data {
	// Last Offset: 0x78
};

struct UPlayerManagerInteraction {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UInteraction_Data UInteraction;
	struct UPlayerManagerInteraction_Data UPlayerManagerInteraction;
};

// 0xE8  (Alignment = 16)
struct UUISceneClient_Data {
	// Last Offset: 0x48
	struct FPointer VfTable_FExec; // 0x48 (0x4)
	struct FPointer RenderViewport; // 0x4C (0x4)
	struct FIntPoint MousePosition; // 0x50 (0x8)
	struct UDataStoreClient* DataStoreManager; // 0x58 (0x4)
	const unsigned char Unknown1[0x4]; // 0x5C (0x4) > LAST OFFSET
	struct FMatrix CanvasToScreen; // 0x60 (0x40)
	struct FMatrix InvCanvasToScreen; // 0xA0 (0x40)
	struct UPostProcessChain* UIScenePostProcess; // 0xE0 (0x4)
	BOOL bEnablePostProcess :1 ; // 0xE4 (0x4)
	const unsigned long: 0;
};

struct UUISceneClient {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUISceneClient_Data UUISceneClient;
};

// 0x48 
struct UUISoundTheme_Data {
	// Last Offset: 0x3C
	struct TArray_FSoundEventMapping SoundEventBindings; // 0x3C (0xC)
};

struct UUISoundTheme {
	struct UObject_Data UObject;
	struct UUISoundTheme_Data UUISoundTheme;
};

// 0x3C 
struct UUIDataStoreSubscriber_Data {
	// Last Offset: 0x3C
};

struct UUIDataStoreSubscriber {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UUIDataStoreSubscriber_Data UUIDataStoreSubscriber;
};

// 0x3C 
struct UUIDataStorePublisher_Data {
	// Last Offset: 0x3C
};

struct UUIDataStorePublisher {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UUIDataStoreSubscriber_Data UUIDataStoreSubscriber;
	struct UUIDataStorePublisher_Data UUIDataStorePublisher;
};

// 0x3C 
struct UUIListElementCellProvider_Data {
	// Last Offset: 0x3C
};

struct UUIListElementCellProvider {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UUIListElementCellProvider_Data UUIListElementCellProvider;
};

// 0x3C 
struct UUIListElementProvider_Data {
	// Last Offset: 0x3C
};

struct UUIListElementProvider {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UUIListElementProvider_Data UUIListElementProvider;
};

// 0x64 
struct UUIDataProvider_Data {
	// Last Offset: 0x48
	unsigned char WriteAccessType; // 0x48 (0x1) (Enum = EProviderAccessType)
	const unsigned char Unknown1[0x3]; // 0x49 (0x3) > LAST OFFSET
	struct TArray_FScriptDelegate ProviderChangedNotifies; // 0x4C (0xC)
	struct FScriptDelegate __OnDataProviderPropertyChange__Delegate; // 0x58 (0xC)
};

struct UUIDataProvider {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
};

// 0x64 
struct UUIConfigProvider_Data {
	// Last Offset: 0x64
};

struct UUIConfigProvider {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
	struct UUIConfigProvider_Data UUIConfigProvider;
};

// 0x7C 
struct UUIConfigFileProvider_Data {
	// Last Offset: 0x64
	struct TArray_UUIConfigSectionProviderPtr Sections; // 0x64 (0xC)
	struct FString ConfigFileName; // 0x70 (0xC)
};

struct UUIConfigFileProvider {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
	struct UUIConfigProvider_Data UUIConfigProvider;
	struct UUIConfigFileProvider_Data UUIConfigFileProvider;
};

// 0x70 
struct UUIConfigSectionProvider_Data {
	// Last Offset: 0x64
	struct FString SectionName; // 0x64 (0xC)
};

struct UUIConfigSectionProvider {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
	struct UUIConfigProvider_Data UUIConfigProvider;
	struct UUIConfigSectionProvider_Data UUIConfigSectionProvider;
};

// 0x68 
struct UUIDataProvider_OnlinePlayerDataBase_Data {
	// Last Offset: 0x64
	int PlayerControllerId; // 0x64 (0x4)
};

struct UUIDataProvider_OnlinePlayerDataBase {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
	struct UUIDataProvider_OnlinePlayerDataBase_Data UUIDataProvider_OnlinePlayerDataBase;
};

// 0xC0 
struct UUIDataProvider_OnlineFriendMessages_Data {
	// Last Offset: 0x68
	struct FPointer VfTable_IUIListElementCellProvider; // 0x68 (0x4)
	struct TArray_FOnlineFriendMessage Messages; // 0x6C (0xC)
	struct FString SendingPlayerNameCol; // 0x78 (0xC)
	struct FString bIsFriendInviteCol; // 0x84 (0xC)
	struct FString bWasAcceptedCol; // 0x90 (0xC)
	struct FString bWasDeniedCol; // 0x9C (0xC)
	struct FString MessageCol; // 0xA8 (0xC)
	struct FString LastInviteFrom; // 0xB4 (0xC)
};

struct UUIDataProvider_OnlineFriendMessages {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
	struct UUIDataProvider_OnlinePlayerDataBase_Data UUIDataProvider_OnlinePlayerDataBase;
	struct UUIDataProvider_OnlineFriendMessages_Data UUIDataProvider_OnlineFriendMessages;
};

// 0x138 
struct UUIDataProvider_OnlineFriends_Data {
	// Last Offset: 0x68
	struct FPointer VfTable_IUIListElementCellProvider; // 0x68 (0x4)
	struct TArray_FOnlineFriend FriendsList; // 0x6C (0xC)
	struct FString NickNameCol; // 0x78 (0xC)
	struct FString PresenceInfoCol; // 0x84 (0xC)
	struct FString FriendStateCol; // 0x90 (0xC)
	struct FString bIsOnlineCol; // 0x9C (0xC)
	struct FString bIsPlayingCol; // 0xA8 (0xC)
	struct FString bIsPlayingThisGameCol; // 0xB4 (0xC)
	struct FString bIsJoinableCol; // 0xC0 (0xC)
	struct FString bHasVoiceSupportCol; // 0xCC (0xC)
	struct FString bHaveInvitedCol; // 0xD8 (0xC)
	struct FString bHasInvitedYouCol; // 0xE4 (0xC)
	struct FString bHaveRequestedCol; // 0xF0 (0xC)
	struct FString bHasRequestedYouCol; // 0xFC (0xC)
	struct FString OfflineText; // 0x108 (0xC)
	struct FString OnlineText; // 0x114 (0xC)
	struct FString AwayText; // 0x120 (0xC)
	struct FString BusyText; // 0x12C (0xC)
};

struct UUIDataProvider_OnlineFriends {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
	struct UUIDataProvider_OnlinePlayerDataBase_Data UUIDataProvider_OnlinePlayerDataBase;
	struct UUIDataProvider_OnlineFriends_Data UUIDataProvider_OnlineFriends;
};

// 0xD8 
struct UUIDataProvider_OnlinePartyChatList_Data {
	// Last Offset: 0x68
	struct FPointer VfTable_IUIListElementCellProvider; // 0x68 (0x4)
	struct TArray_FOnlinePartyMember PartyMembersList; // 0x6C (0xC)
	struct TArray_FString NatTypes; // 0x78 (0xC)
	struct FString NickNameCol; // 0x84 (0xC)
	struct FString NatTypeCol; // 0x90 (0xC)
	struct FString IsLocalCol; // 0x9C (0xC)
	struct FString IsInPartyVoiceCol; // 0xA8 (0xC)
	struct FString IsTalkingCol; // 0xB4 (0xC)
	struct FString IsInGameSessionCol; // 0xC0 (0xC)
	struct FString IsPlayingThisGameCol; // 0xCC (0xC)
};

struct UUIDataProvider_OnlinePartyChatList {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
	struct UUIDataProvider_OnlinePlayerDataBase_Data UUIDataProvider_OnlinePlayerDataBase;
	struct UUIDataProvider_OnlinePartyChatList_Data UUIDataProvider_OnlinePartyChatList;
};

// 0x88 
struct UUIDataProvider_OnlinePlayerStorage_Data {
	// Last Offset: 0x68
	struct UOnlinePlayerStorage* Profile; // 0x68 (0x4)
	struct FName ProviderName; // 0x6C (0x8)
	BOOL bWasErrorLastRead :1 ; // 0x74 (0x4)
	BOOL bIsExternalUIOpen :1 ; // 0x74 (0x4)
	BOOL bNeedsDeferredRefresh :1 ; // 0x74 (0x4)
	const unsigned long: 0;
	struct TArray_FPlayerStorageArrayProvider PlayerStorageArrayProviders; // 0x78 (0xC)
	int DeviceStorageSizeNeeded; // 0x84 (0x4)
};

struct UUIDataProvider_OnlinePlayerStorage {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
	struct UUIDataProvider_OnlinePlayerDataBase_Data UUIDataProvider_OnlinePlayerDataBase;
	struct UUIDataProvider_OnlinePlayerStorage_Data UUIDataProvider_OnlinePlayerStorage;
};

// 0x88 
struct UUIDataProvider_OnlineProfileSettings_Data {
	// Last Offset: 0x88
};

struct UUIDataProvider_OnlineProfileSettings {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
	struct UUIDataProvider_OnlinePlayerDataBase_Data UUIDataProvider_OnlinePlayerDataBase;
	struct UUIDataProvider_OnlinePlayerStorage_Data UUIDataProvider_OnlinePlayerStorage;
	struct UUIDataProvider_OnlineProfileSettings_Data UUIDataProvider_OnlineProfileSettings;
};

// 0x78 
struct UUIDataProvider_PlayerAchievements_Data {
	// Last Offset: 0x68
	struct FPointer VfTable_IUIListElementCellProvider; // 0x68 (0x4)
	struct TArray_FAchievementDetails Achievements; // 0x6C (0xC)
};

struct UUIDataProvider_PlayerAchievements {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
	struct UUIDataProvider_OnlinePlayerDataBase_Data UUIDataProvider_OnlinePlayerDataBase;
	struct UUIDataProvider_PlayerAchievements_Data UUIDataProvider_PlayerAchievements;
};

// 0x94 
struct UUIDataProvider_OnlinePlayerStorageArray_Data {
	// Last Offset: 0x64
	struct FPointer VfTable_IUIListElementProvider; // 0x64 (0x4)
	struct FPointer VfTable_IUIListElementCellProvider; // 0x68 (0x4)
	struct UOnlinePlayerStorage* PlayerStorage; // 0x6C (0x4)
	int PlayerStorageId; // 0x70 (0x4)
	struct FName PlayerStorageName; // 0x74 (0x8)
	struct FString ColumnHeaderText; // 0x7C (0xC)
	struct TArray_FName Values; // 0x88 (0xC)
};

struct UUIDataProvider_OnlinePlayerStorageArray {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
	struct UUIDataProvider_OnlinePlayerStorageArray_Data UUIDataProvider_OnlinePlayerStorageArray;
};

// 0x94 
struct UUIDataProvider_SettingsArray_Data {
	// Last Offset: 0x64
	struct FPointer VfTable_IUIListElementProvider; // 0x64 (0x4)
	struct FPointer VfTable_IUIListElementCellProvider; // 0x68 (0x4)
	struct USettings* Settings; // 0x6C (0x4)
	int SettingsId; // 0x70 (0x4)
	struct FName SettingsName; // 0x74 (0x8)
	struct FString ColumnHeaderText; // 0x7C (0xC)
	struct TArray_FIdToStringMapping Values; // 0x88 (0xC)
};

struct UUIDataProvider_SettingsArray {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
	struct UUIDataProvider_SettingsArray_Data UUIDataProvider_SettingsArray;
};

// 0x84 
struct UUIDataStore_Data {
	// Last Offset: 0x64
	struct FName Tag; // 0x64 (0x8)
	struct TArray_FScriptDelegate RefreshSubscriberNotifies; // 0x6C (0xC)
	struct FScriptDelegate __OnDataStoreValueUpdated__Delegate; // 0x78 (0xC)
};

struct UUIDataStore {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
	struct UUIDataStore_Data UUIDataStore;
};

// 0xD8 
struct UUIDataStore_DynamicResource_Data {
	// Last Offset: 0x84
	struct FPointer VfTable_IUIListElementProvider; // 0x84 (0x4)
	struct UUIDataProvider_OnlineProfileSettings* ProfileProvider; // 0x88 (0x4)
	struct UUIDataStore_GameResource* GameResourceDataStore; // 0x8C (0x4)
	struct TArray_FDynamicResourceProviderDefinition ResourceProviderDefinitions; // 0x90 (0xC)
	struct FMultiMap_Mirror ResourceProviders; // 0x9C (0x3C)
};

struct UUIDataStore_DynamicResource {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
	struct UUIDataStore_Data UUIDataStore;
	struct UUIDataStore_DynamicResource_Data UUIDataStore_DynamicResource;
};

// 0x84 
struct UUIDataStore_Fonts_Data {
	// Last Offset: 0x84
};

struct UUIDataStore_Fonts {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
	struct UUIDataStore_Data UUIDataStore;
	struct UUIDataStore_Fonts_Data UUIDataStore_Fonts;
};

// 0xD0 
struct UUIDataStore_GameResource_Data {
	// Last Offset: 0x84
	struct FPointer VfTable_IUIListElementProvider; // 0x84 (0x4)
	struct TArray_FGameResourceDataProvider ElementProviderTypes; // 0x88 (0xC)
	struct FMultiMap_Mirror ListElementProviders; // 0x94 (0x3C)
};

struct UUIDataStore_GameResource {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
	struct UUIDataStore_Data UUIDataStore;
	struct UUIDataStore_GameResource_Data UUIDataStore_GameResource;
};

// 0x120 
struct UUIDataStore_MenuItems_Data {
	// Last Offset: 0xD0
	struct FName CurrentGameSettingsTag; // 0xD0 (0x8)
	struct FMultiMap_Mirror OptionProviders; // 0xD8 (0x3C)
	struct TArray_UUIDataProvider_MenuItemPtr DynamicProviders; // 0x114 (0xC)
};

struct UUIDataStore_MenuItems {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
	struct UUIDataStore_Data UUIDataStore;
	struct UUIDataStore_GameResource_Data UUIDataStore_GameResource;
	struct UUIDataStore_MenuItems_Data UUIDataStore_MenuItems;
};

// 0x90 
struct UUIDataStore_GameState_Data {
	// Last Offset: 0x84
	struct FScriptDelegate __OnRefreshDataFieldValue__Delegate; // 0x84 (0xC)
};

struct UUIDataStore_GameState {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
	struct UUIDataStore_Data UUIDataStore;
	struct UUIDataStore_GameState_Data UUIDataStore_GameState;
};

// 0x88 
struct UUIDataStore_Registry_Data {
	// Last Offset: 0x84
	struct UUIDynamicFieldProvider* RegistryDataProvider; // 0x84 (0x4)
};

struct UUIDataStore_Registry {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
	struct UUIDataStore_Data UUIDataStore;
	struct UUIDataStore_Registry_Data UUIDataStore_Registry;
};

// 0x84 
struct UUIDataStore_Remote_Data {
	// Last Offset: 0x84
};

struct UUIDataStore_Remote {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
	struct UUIDataStore_Data UUIDataStore;
	struct UUIDataStore_Remote_Data UUIDataStore_Remote;
};

// 0xB4 
struct UUIDataStore_OnlineGameSearch_Data {
	// Last Offset: 0x84
	struct FPointer VfTable_IUIListElementProvider; // 0x84 (0x4)
	struct FPointer VfTable_IUIListElementCellProvider; // 0x88 (0x4)
	struct FName SearchResultsName; // 0x8C (0x8)
	struct UOnlineSubsystem* OnlineSub; // 0x94 (0x4)
	struct FScriptInterface GameInterface; // 0x98 (0x8)
	struct TArray_FGameSearchCfg GameSearchCfgList; // 0xA0 (0xC)
	int SelectedIndex; // 0xAC (0x4)
	int ActiveSearchIndex; // 0xB0 (0x4)
};

struct UUIDataStore_OnlineGameSearch {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
	struct UUIDataStore_Data UUIDataStore;
	struct UUIDataStore_Remote_Data UUIDataStore_Remote;
	struct UUIDataStore_OnlineGameSearch_Data UUIDataStore_OnlineGameSearch;
};

// 0x130 
struct UUIDataStore_OnlinePlayerData_Data {
	// Last Offset: 0x84
	struct FPointer VfTable_IUIListElementProvider; // 0x84 (0x4)
	struct UUIDataProvider_OnlineFriends* FriendsProvider; // 0x88 (0x4)
	int PlayerControllerId; // 0x8C (0x4)
	struct FString PlayerNick; // 0x90 (0xC)
	struct FString ProfileSettingsClassName; // 0x9C (0xC)
	struct UClass* ProfileSettingsClass; // 0xA8 (0x4)
	struct UUIDataProvider_OnlineProfileSettings* ProfileProvider; // 0xAC (0x4)
	struct FString ProfileProviderClassName; // 0xB0 (0xC)
	struct UClass* ProfileProviderClass; // 0xBC (0x4)
	struct FString PlayerStorageClassName; // 0xC0 (0xC)
	struct UClass* PlayerStorageClass; // 0xCC (0x4)
	struct UUIDataProvider_OnlinePlayerStorage* StorageProvider; // 0xD0 (0x4)
	struct FString StorageProviderClassName; // 0xD4 (0xC)
	struct UClass* StorageProviderClass; // 0xE0 (0x4)
	struct UUIDataProvider_OnlineFriendMessages* FriendMessagesProvider; // 0xE4 (0x4)
	struct UUIDataProvider_PlayerAchievements* AchievementsProvider; // 0xE8 (0x4)
	struct FString FriendsProviderClassName; // 0xEC (0xC)
	struct UClass* FriendsProviderClass; // 0xF8 (0x4)
	struct FString FriendMessagesProviderClassName; // 0xFC (0xC)
	struct UClass* FriendMessagesProviderClass; // 0x108 (0x4)
	struct FString AchievementsProviderClassName; // 0x10C (0xC)
	struct UClass* AchievementsProviderClass; // 0x118 (0x4)
	struct FString PartyChatProviderClassName; // 0x11C (0xC)
	struct UClass* PartyChatProviderClass; // 0x128 (0x4)
	struct UUIDataProvider_OnlinePartyChatList* PartyChatProvider; // 0x12C (0x4)
};

struct UUIDataStore_OnlinePlayerData {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
	struct UUIDataStore_Data UUIDataStore;
	struct UUIDataStore_Remote_Data UUIDataStore_Remote;
	struct UUIDataStore_OnlinePlayerData_Data UUIDataStore_OnlinePlayerData;
};

// 0xF4 
struct UUIDataStore_OnlineStats_Data {
	// Last Offset: 0x84
	struct FPointer VfTable_IUIListElementProvider; // 0x84 (0x4)
	struct FPointer VfTable_IUIListElementCellProvider; // 0x88 (0x4)
	struct TArray_UClassPtr StatsReadClasses; // 0x8C (0xC)
	struct FName StatsReadName; // 0x98 (0x8)
	struct FPlayerNickMetaData PlayerNickData; // 0xA0 (0x14)
	struct FRankMetaData RankNameMetaData; // 0xB4 (0x14)
	struct FName TotalRowsName; // 0xC8 (0x8)
	struct TArray_UOnlineStatsReadPtr StatsReadObjects; // 0xD0 (0xC)
	struct UOnlineStatsRead* StatsRead; // 0xDC (0x4)
	unsigned char CurrentReadType; // 0xE0 (0x1) (Enum = EStatsFetchType)
	const unsigned char Unknown1[0x3]; // 0xE1 (0x3) > LAST OFFSET
	struct FScriptInterface StatsInterface; // 0xE4 (0x8)
	struct FScriptInterface PlayerInterface; // 0xEC (0x8)
};

struct UUIDataStore_OnlineStats {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
	struct UUIDataStore_Data UUIDataStore;
	struct UUIDataStore_Remote_Data UUIDataStore_Remote;
	struct UUIDataStore_OnlineStats_Data UUIDataStore_OnlineStats;
};

// 0x84 
struct UUIDataStore_Settings_Data {
	// Last Offset: 0x84
};

struct UUIDataStore_Settings {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
	struct UUIDataStore_Data UUIDataStore;
	struct UUIDataStore_Settings_Data UUIDataStore_Settings;
};

// 0x98 
struct UUIDataStore_OnlineGameSettings_Data {
	// Last Offset: 0x84
	struct TArray_FGameSettingsCfg GameSettingsCfgList; // 0x84 (0xC)
	struct UClass* SettingsProviderClass; // 0x90 (0x4)
	int SelectedIndex; // 0x94 (0x4)
};

struct UUIDataStore_OnlineGameSettings {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
	struct UUIDataStore_Data UUIDataStore;
	struct UUIDataStore_Settings_Data UUIDataStore_Settings;
	struct UUIDataStore_OnlineGameSettings_Data UUIDataStore_OnlineGameSettings;
};

// 0x84 
struct UUIDataStore_StringBase_Data {
	// Last Offset: 0x84
};

struct UUIDataStore_StringBase {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
	struct UUIDataStore_Data UUIDataStore;
	struct UUIDataStore_StringBase_Data UUIDataStore_StringBase;
};

// 0xCC 
struct UUIDataStore_InputAlias_Data {
	// Last Offset: 0x84
	struct TArray_FUIDataStoreInputAlias InputAliases; // 0x84 (0xC)
	const unsigned char Unknown1[0x3C]; // 0x90 (0x3C) UNKNOWN PROPERTY
};

struct UUIDataStore_InputAlias {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
	struct UUIDataStore_Data UUIDataStore;
	struct UUIDataStore_StringBase_Data UUIDataStore_StringBase;
	struct UUIDataStore_InputAlias_Data UUIDataStore_InputAlias;
};

// 0xD0 
struct UUIDataStore_StringAliasMap_Data {
	// Last Offset: 0x84
	struct TArray_FUIMenuInputMap MenuInputMapArray; // 0x84 (0xC)
	struct FMap_Mirror MenuInputSets; // 0x90 (0x3C)
	int PlayerIndex; // 0xCC (0x4)
};

struct UUIDataStore_StringAliasMap {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
	struct UUIDataStore_Data UUIDataStore;
	struct UUIDataStore_StringBase_Data UUIDataStore_StringBase;
	struct UUIDataStore_StringAliasMap_Data UUIDataStore_StringAliasMap;
};

// 0x90 
struct UUIDataStore_Strings_Data {
	// Last Offset: 0x84
	struct TArray_UUIConfigFileProviderPtr LocFileProviders; // 0x84 (0xC)
};

struct UUIDataStore_Strings {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
	struct UUIDataStore_Data UUIDataStore;
	struct UUIDataStore_StringBase_Data UUIDataStore_StringBase;
	struct UUIDataStore_Strings_Data UUIDataStore_Strings;
};

// 0xF4 
struct UUIDynamicFieldProvider_Data {
	// Last Offset: 0x64
	struct TArray_FUIProviderScriptFieldValue PersistentDataFields; // 0x64 (0xC)
	struct TArray_FUIProviderScriptFieldValue RuntimeDataFields; // 0x70 (0xC)
	struct FMap_Mirror PersistentCollectionData; // 0x7C (0x3C)
	struct FMap_Mirror RuntimeCollectionData; // 0xB8 (0x3C)
};

struct UUIDynamicFieldProvider {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
	struct UUIDynamicFieldProvider_Data UUIDynamicFieldProvider;
};

// 0x7C 
struct UUIPropertyDataProvider_Data {
	// Last Offset: 0x64
	struct TArray_UClassPtr ComplexPropertyTypes; // 0x64 (0xC)
	struct FScriptDelegate __CanSupportComplexPropertyType__Delegate; // 0x70 (0xC)
};

struct UUIPropertyDataProvider {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
	struct UUIPropertyDataProvider_Data UUIPropertyDataProvider;
};

// 0x88 
struct UUIDynamicDataProvider_Data {
	// Last Offset: 0x7C
	struct FPointer VfTable_IUIListElementCellProvider; // 0x7C (0x4)
	struct UClass* DataClass; // 0x80 (0x4)
	struct UObject* DataSource; // 0x84 (0x4)
};

struct UUIDynamicDataProvider {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
	struct UUIPropertyDataProvider_Data UUIPropertyDataProvider;
	struct UUIDynamicDataProvider_Data UUIDynamicDataProvider;
};

// 0x9C 
struct UUIDataProvider_Settings_Data {
	// Last Offset: 0x88
	struct USettings* Settings; // 0x88 (0x4)
	struct TArray_FSettingsArrayProvider SettingsArrayProviders; // 0x8C (0xC)
	BOOL bIsAListRow :1 ; // 0x98 (0x4)
	const unsigned long: 0;
};

struct UUIDataProvider_Settings {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
	struct UUIPropertyDataProvider_Data UUIPropertyDataProvider;
	struct UUIDynamicDataProvider_Data UUIDynamicDataProvider;
	struct UUIDataProvider_Settings_Data UUIDataProvider_Settings;
};

// 0x88 
struct UUIResourceDataProvider_Data {
	// Last Offset: 0x7C
	struct FPointer VfTable_IUIListElementProvider; // 0x7C (0x4)
	struct FPointer VfTable_IUIListElementCellProvider; // 0x80 (0x4)
	BOOL bDataBindingPropertiesOnly :1 ; // 0x84 (0x4)
	BOOL bSkipDuringEnumeration :1 ; // 0x84 (0x4)
	const unsigned long: 0;
};

struct UUIResourceDataProvider {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
	struct UUIPropertyDataProvider_Data UUIPropertyDataProvider;
	struct UUIResourceDataProvider_Data UUIResourceDataProvider;
};

// 0x110 
struct UUIDataProvider_MenuItem_Data {
	// Last Offset: 0x88
	unsigned char OptionType; // 0x88 (0x1) (Enum = EMenuOptionType)
	const unsigned char Unknown1[0x3]; // 0x89 (0x3) > LAST OFFSET
	struct TArray_FName OptionSet; // 0x8C (0xC)
	struct FString DataStoreMarkup; // 0x98 (0xC)
	struct FString DescriptionMarkup; // 0xA4 (0xC)
	struct FName RequiredGameMode; // 0xB0 (0x8)
	struct FString FriendlyName; // 0xB8 (0xC)
	struct FString CustomFriendlyName; // 0xC4 (0xC)
	struct FString Description; // 0xD0 (0xC)
	BOOL bEditableCombo :1 ; // 0xDC (0x4)
	BOOL bNumericCombo :1 ; // 0xDC (0x4)
	BOOL bKeyboardOrMouseOption :1 ; // 0xDC (0x4)
	BOOL bOnlineOnly :1 ; // 0xDC (0x4)
	BOOL bOfflineOnly :1 ; // 0xDC (0x4)
	BOOL bSearchAllInis :1 ; // 0xDC (0x4)
	BOOL bRemoveOn360 :1 ; // 0xDC (0x4)
	BOOL bRemoveOnPC :1 ; // 0xDC (0x4)
	BOOL bRemoveOnPS3 :1 ; // 0xDC (0x4)
	const unsigned long: 0;
	int EditBoxMaxLength; // 0xE0 (0x4)
	struct FUIRangeData RangeData; // 0xE4 (0x14)
	struct TArray_FName SchemaCellFields; // 0xF8 (0xC)
	struct FString IniName; // 0x104 (0xC)
};

struct UUIDataProvider_MenuItem {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
	struct UUIPropertyDataProvider_Data UUIPropertyDataProvider;
	struct UUIResourceDataProvider_Data UUIResourceDataProvider;
	struct UUIDataProvider_MenuItem_Data UUIDataProvider_MenuItem;
};

// 0xB8 
struct UUIMapSummary_Data {
	// Last Offset: 0x88
	struct FString MapName; // 0x88 (0xC)
	struct FString ScreenshotPathName; // 0x94 (0xC)
	struct FString DisplayName; // 0xA0 (0xC)
	struct FString Description; // 0xAC (0xC)
};

struct UUIMapSummary {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
	struct UUIPropertyDataProvider_Data UUIPropertyDataProvider;
	struct UUIResourceDataProvider_Data UUIResourceDataProvider;
	struct UUIMapSummary_Data UUIMapSummary;
};

// 0x74 
struct UUIResourceCombinationProvider_Data {
	// Last Offset: 0x64
	struct FPointer VfTable_IUIListElementProvider; // 0x64 (0x4)
	struct FPointer VfTable_IUIListElementCellProvider; // 0x68 (0x4)
	struct UUIResourceDataProvider* StaticDataProvider; // 0x6C (0x4)
	struct UUIDataProvider_OnlineProfileSettings* ProfileProvider; // 0x70 (0x4)
};

struct UUIResourceCombinationProvider {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
	struct UUIResourceCombinationProvider_Data UUIResourceCombinationProvider;
};

// 0x154  (Alignment = 16)
struct UGameUISceneClient_Data {
	// Last Offset: 0xE8
	float LatestDeltaTime; // 0xE8 (0x4)
	struct FDouble DoubleClickStartTime; // 0xEC (0x8)
	struct FIntPoint DoubleClickStartPosition; // 0xF4 (0x8)
	struct FMap_Mirror InitialPressedKeys; // 0xFC (0x3C)
	BOOL bUpdateInputProcessingStatus :1 ; // 0x138 (0x4)
	BOOL bUpdateSceneViewportSizes :1 ; // 0x138 (0x4)
	BOOL bEnableDebugInput :1 ; // 0x138 (0x4)
	BOOL bRenderDebugInfo :1 ; // 0x138 (0x4)
	BOOL bCaptureUnprocessedInput :1 ; // 0x138 (0x4)
	const unsigned long: 0;
	struct TArray_FName NavAliases; // 0x13C (0xC)
	struct TArray_FName AxisInputKeys; // 0x148 (0xC)
};

struct UGameUISceneClient {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUISceneClient_Data UUISceneClient;
	struct UGameUISceneClient_Data UGameUISceneClient;
};

// 0x3C 
struct UScene_Data {
	// Last Offset: 0x3C
};

struct UScene {
	struct UObject_Data UObject;
	struct UScene_Data UScene;
};

// 0x1E4 
struct AFoliageFactory_Data {
	// Last Offset: 0x1BC
	struct TArray_FFoliageMesh Meshes; // 0x1BC (0xC)
	float VolumeFalloffRadius; // 0x1C8 (0x4)
	float VolumeFalloffExponent; // 0x1CC (0x4)
	float SurfaceDensityUpFacing; // 0x1D0 (0x4)
	float SurfaceDensityDownFacing; // 0x1D4 (0x4)
	float SurfaceDensitySideFacing; // 0x1D8 (0x4)
	float FacingFalloffExponent; // 0x1DC (0x4)
	int MaxInstanceCount; // 0x1E0 (0x4)
};

struct AFoliageFactory {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ABrush_Data ABrush;
	struct AVolume_Data AVolume;
	struct AFoliageFactory_Data AFoliageFactory;
};

// 0x1C4 
struct AInstancedFoliageActor_Data {
	// Last Offset: 0x188
	struct FMap_Mirror FoliageMeshes; // 0x188 (0x3C)
};

struct AInstancedFoliageActor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInstancedFoliageActor_Data AInstancedFoliageActor;
};

// 0x1E8 
struct AInteractiveFoliageActor_Data {
	// Last Offset: 0x190
	struct UCylinderComponent* CylinderComponent; // 0x190 (0x4)
	struct FVector TouchingActorEntryPosition; // 0x194 (0xC)
	struct FVector FoliageVelocity; // 0x1A0 (0xC)
	struct FVector FoliageForce; // 0x1AC (0xC)
	struct FVector FoliagePosition; // 0x1B8 (0xC)
	float FoliageDamageImpulseScale; // 0x1C4 (0x4)
	float FoliageTouchImpulseScale; // 0x1C8 (0x4)
	float FoliageStiffness; // 0x1CC (0x4)
	float FoliageStiffnessQuadratic; // 0x1D0 (0x4)
	float FoliageDamping; // 0x1D4 (0x4)
	float MaxDamageImpulse; // 0x1D8 (0x4)
	float MaxTouchImpulse; // 0x1DC (0x4)
	float MaxForce; // 0x1E0 (0x4)
	float Mass; // 0x1E4 (0x4)
};

struct AInteractiveFoliageActor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AStaticMeshActorBase_Data AStaticMeshActorBase;
	struct AStaticMeshActor_Data AStaticMeshActor;
	struct AInteractiveFoliageActor_Data AInteractiveFoliageActor;
};

// 0x27C  (Alignment = 16)
struct UFoliageComponent_Data {
	// Last Offset: 0x210
	struct TArray_FStoredFoliageInstance LitInstances; // 0x210 (0xC)
	struct TArray_FGuid StaticallyRelevantLights; // 0x21C (0xC)
	struct TArray_FGuid StaticallyIrrelevantLights; // 0x228 (0xC)
	float DirectionalStaticLightingScale[3]; // 0x234 (0xC)
	float SimpleStaticLightingScale[3]; // 0x240 (0xC)
	struct UStaticMesh* InstanceStaticMesh; // 0x24C (0x4)
	struct UMaterialInterface* Material; // 0x250 (0x4)
	float MaxDrawRadius; // 0x254 (0x4)
	float MinTransitionRadius; // 0x258 (0x4)
	float MinThinningRadius; // 0x25C (0x4)
	struct FVector MinScale; // 0x260 (0xC)
	struct FVector MaxScale; // 0x26C (0xC)
	float SwayScale; // 0x278 (0x4)
};

struct UFoliageComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UFoliageComponent_Data UFoliageComponent;
};

// 0x24C  (Alignment = 16)
struct UInteractiveFoliageComponent_Data {
	// Last Offset: 0x248
	struct FPointer FoliageSceneProxy; // 0x248 (0x4)
};

struct UInteractiveFoliageComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UMeshComponent_Data UMeshComponent;
	struct UStaticMeshComponent_Data UStaticMeshComponent;
	struct UInteractiveFoliageComponent_Data UInteractiveFoliageComponent;
};

// 0x8C 
struct UActorFactoryInteractiveFoliage_Data {
	// Last Offset: 0x8C
};

struct UActorFactoryInteractiveFoliage {
	struct UObject_Data UObject;
	struct UActorFactory_Data UActorFactory;
	struct UActorFactoryStaticMesh_Data UActorFactoryStaticMesh;
	struct UActorFactoryInteractiveFoliage_Data UActorFactoryInteractiveFoliage;
};

// 0x198 
struct AFluidInfluenceActor_Data {
	// Last Offset: 0x188
	struct UArrowComponent* FlowDirection; // 0x188 (0x4)
	struct USpriteComponent* Sprite; // 0x18C (0x4)
	struct UFluidInfluenceComponent* InfluenceComponent; // 0x190 (0x4)
	BOOL bActive :1 ; // 0x194 (0x4)
	BOOL bToggled :1 ; // 0x194 (0x4)
	const unsigned long: 0;
};

struct AFluidInfluenceActor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AFluidInfluenceActor_Data AFluidInfluenceActor;
};

// 0x190 
struct AFluidSurfaceActor_Data {
	// Last Offset: 0x188
	struct UFluidSurfaceComponent* FluidComponent; // 0x188 (0x4)
	struct UParticleSystem* ProjectileEntryEffect; // 0x18C (0x4)
};

struct AFluidSurfaceActor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AFluidSurfaceActor_Data AFluidSurfaceActor;
};

// 0x190 
struct AFluidSurfaceActorMovable_Data {
	// Last Offset: 0x190
};

struct AFluidSurfaceActorMovable {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AFluidSurfaceActor_Data AFluidSurfaceActor;
	struct AFluidSurfaceActorMovable_Data AFluidSurfaceActorMovable;
};

// 0x270  (Alignment = 16)
struct UFluidInfluenceComponent_Data {
	// Last Offset: 0x210
	BOOL bActive :1 ; // 0x210 (0x4)
	BOOL RaindropFillEntireFluid :1 ; // 0x210 (0x4)
	BOOL bIsToggleTriggered :1 ; // 0x210 (0x4)
	const unsigned long: 0;
	struct AFluidSurfaceActor* FluidActor; // 0x214 (0x4)
	unsigned char InfluenceType; // 0x218 (0x1) (Enum = EInfluenceType)
	const unsigned char Unknown1[0x3]; // 0x219 (0x3) > LAST OFFSET
	float MaxDistance; // 0x21C (0x4)
	float WaveStrength; // 0x220 (0x4)
	float WaveFrequency; // 0x224 (0x4)
	float WavePhase; // 0x228 (0x4)
	float WaveRadius; // 0x22C (0x4)
	float RaindropAreaRadius; // 0x230 (0x4)
	float RaindropRadius; // 0x234 (0x4)
	float RaindropStrength; // 0x238 (0x4)
	float RaindropRate; // 0x23C (0x4)
	float FlowSpeed; // 0x240 (0x4)
	int FlowNumRipples; // 0x244 (0x4)
	float FlowSideMotionRadius; // 0x248 (0x4)
	float FlowWaveRadius; // 0x24C (0x4)
	float FlowStrength; // 0x250 (0x4)
	float FlowFrequency; // 0x254 (0x4)
	float SphereOuterRadius; // 0x258 (0x4)
	float SphereInnerRadius; // 0x25C (0x4)
	float SphereStrength; // 0x260 (0x4)
	float CurrentAngle; // 0x264 (0x4)
	float CurrentTimer; // 0x268 (0x4)
	struct AFluidSurfaceActor* CurrentFluidActor; // 0x26C (0x4)
};

struct UFluidInfluenceComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UFluidInfluenceComponent_Data UFluidInfluenceComponent;
};

// 0x2D4  (Alignment = 16)
struct UFluidSurfaceComponent_Data {
	// Last Offset: 0x210
	struct UMaterialInterface* FluidMaterial; // 0x210 (0x4)
	int LightMapResolution; // 0x214 (0x4)
	BOOL EnableSimulation :1 ; // 0x218 (0x4)
	BOOL EnableDetail :1 ; // 0x218 (0x4)
	BOOL bTiling :1 ; // 0x218 (0x4)
	BOOL bPause :1 ; // 0x218 (0x4)
	BOOL bShowSimulationNormals :1 ; // 0x218 (0x4)
	BOOL bShowSimulationPosition :1 ; // 0x218 (0x4)
	BOOL bShowDetailNormals :1 ; // 0x218 (0x4)
	BOOL bShowDetailPosition :1 ; // 0x218 (0x4)
	BOOL bShowFluidSimulation :1 ; // 0x218 (0x4)
	BOOL bShowFluidDetail :1 ; // 0x218 (0x4)
	BOOL bTestRipple :1 ; // 0x218 (0x4)
	BOOL bTestRippleCenterOnDetail :1 ; // 0x218 (0x4)
	const unsigned long: 0;
	int SimulationQuadsX; // 0x21C (0x4)
	int SimulationQuadsY; // 0x220 (0x4)
	float GridSpacing; // 0x224 (0x4)
	float GridSpacingLowRes; // 0x228 (0x4)
	struct AActor* TargetSimulation; // 0x22C (0x4)
	float GPUTessellationFactor; // 0x230 (0x4)
	float FluidDamping; // 0x234 (0x4)
	float FluidTravelSpeed; // 0x238 (0x4)
	float FluidHeightScale; // 0x23C (0x4)
	float FluidUpdateRate; // 0x240 (0x4)
	float ForceImpact; // 0x244 (0x4)
	float ForceContinuous; // 0x248 (0x4)
	float LightingContrast; // 0x24C (0x4)
	struct AActor* TargetDetail; // 0x250 (0x4)
	float DeactivationDistance; // 0x254 (0x4)
	int DetailResolution; // 0x258 (0x4)
	float DetailSize; // 0x25C (0x4)
	float DetailDamping; // 0x260 (0x4)
	float DetailTravelSpeed; // 0x264 (0x4)
	float DetailTransfer; // 0x268 (0x4)
	float DetailHeightScale; // 0x26C (0x4)
	float DetailUpdateRate; // 0x270 (0x4)
	float NormalLength; // 0x274 (0x4)
	float TestRippleSpeed; // 0x278 (0x4)
	float TestRippleFrequency; // 0x27C (0x4)
	float TestRippleRadius; // 0x280 (0x4)
	float FluidWidth; // 0x284 (0x4)
	float FluidHeight; // 0x288 (0x4)
	float TestRippleTime; // 0x28C (0x4)
	float TestRippleAngle; // 0x290 (0x4)
	float DeactivationTimer; // 0x294 (0x4)
	float ViewDistance; // 0x298 (0x4)
	struct FVector SimulationPosition; // 0x29C (0xC)
	struct FVector DetailPosition; // 0x2A8 (0xC)
	struct TArray_unsigned_char ClampMap; // 0x2B4 (0xC)
	struct TArray_UShadowMap2DPtr ShadowMaps; // 0x2C0 (0xC)
	struct FLightMapRef LightMap; // 0x2CC (0x4)
	struct FPointer FluidSimulation; // 0x2D0 (0x4)
};

struct UFluidSurfaceComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UFluidSurfaceComponent_Data UFluidSurfaceComponent;
};

// 0x190 
struct ALensFlareSource_Data {
	// Last Offset: 0x188
	struct ULensFlareComponent* LensFlareComp; // 0x188 (0x4)
	BOOL bCurrentlyActive :1 ; // 0x18C (0x4)
	const unsigned long: 0;
};

struct ALensFlareSource {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ALensFlareSource_Data ALensFlareSource;
};

// 0x25C  (Alignment = 16)
struct ULensFlareComponent_Data {
	// Last Offset: 0x210
	struct ULensFlare* Template; // 0x210 (0x4)
	struct UDrawLightConeComponent* PreviewInnerCone; // 0x214 (0x4)
	struct UDrawLightConeComponent* PreviewOuterCone; // 0x218 (0x4)
	struct UDrawLightRadiusComponent* PreviewRadius; // 0x21C (0x4)
	BOOL bAutoActivate :1 ; // 0x220 (0x4)
	BOOL bIsActive :1 ; // 0x220 (0x4)
	BOOL bHasTranslucency :1 ; // 0x220 (0x4)
	BOOL bHasUnlitTranslucency :1 ; // 0x220 (0x4)
	BOOL bHasUnlitDistortion :1 ; // 0x220 (0x4)
	BOOL bUsesSceneColor :1 ; // 0x220 (0x4)
	BOOL bHasSeparateTranslucency :1 ; // 0x220 (0x4)
	BOOL bUseTrueConeCalculation :1 ; // 0x220 (0x4)
	BOOL bVisibleForMobile :1 ; // 0x220 (0x4)
	const unsigned long: 0;
	float OuterCone; // 0x224 (0x4)
	float InnerCone; // 0x228 (0x4)
	float ConeFudgeFactor; // 0x22C (0x4)
	float Radius; // 0x230 (0x4)
	float MinStrength; // 0x234 (0x4)
	struct FLinearColor SourceColor; // 0x238 (0x10)
	struct TArray_FLensFlareElementMaterials Materials; // 0x248 (0xC)
	struct FPointer ReleaseResourcesFence; // 0x254 (0x4)
	float NextTraceTime; // 0x258 (0x4)
};

struct ULensFlareComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct ULensFlareComponent_Data ULensFlareComponent;
};

// 0x200 
struct ULensFlare_Data {
	// Last Offset: 0x3C
	struct FLensFlareElement SourceElement; // 0x3C (0x144)
	struct UStaticMesh* SourceMesh; // 0x180 (0x4)
	unsigned char SourceDPG; // 0x184 (0x1) (Enum = ESceneDepthPriorityGroup)
	unsigned char ReflectionsDPG; // 0x185 (0x1) (Enum = ESceneDepthPriorityGroup)
	const unsigned char Unknown1[0x2]; // 0x186 (0x2) > LAST OFFSET
	struct TArray_FLensFlareElement Reflections; // 0x188 (0xC)
	float OuterCone; // 0x194 (0x4)
	float InnerCone; // 0x198 (0x4)
	float ConeFudgeFactor; // 0x19C (0x4)
	float Radius; // 0x1A0 (0x4)
	BOOL bUseTrueConeCalculation :1 ; // 0x1A4 (0x4)
	BOOL bUseFixedRelativeBoundingBox :1 ; // 0x1A4 (0x4)
	BOOL bRenderDebugLines :1 ; // 0x1A4 (0x4)
	BOOL ThumbnailImageOutOfDate :1 ; // 0x1A4 (0x4)
	const unsigned long: 0;
	float MinStrength; // 0x1A8 (0x4)
	struct FRawDistributionFloat ScreenPercentageMap; // 0x1AC (0x1C)
	struct FBox FixedRelativeBoundingBox; // 0x1C8 (0x1C)
	struct UInterpCurveEdSetup* CurveEdSetup; // 0x1E4 (0x4)
	int ReflectionCount; // 0x1E8 (0x4)
	struct FRotator ThumbnailAngle; // 0x1EC (0xC)
	float ThumbnailDistance; // 0x1F8 (0x4)
	struct UTexture2D* ThumbnailImage; // 0x1FC (0x4)
};

struct ULensFlare {
	struct UObject_Data UObject;
	struct ULensFlare_Data ULensFlare;
};

// 0x100 
struct UTextureFlipBook_Data {
	// Last Offset: 0xC0
	struct FPointer VfTable_FTickableObject; // 0xC0 (0x4)
	float TimeIntoMovie; // 0xC4 (0x4)
	float TimeSinceLastFrame; // 0xC8 (0x4)
	float HorizontalScale; // 0xCC (0x4)
	float VerticalScale; // 0xD0 (0x4)
	BOOL bPaused :1 ; // 0xD4 (0x4)
	BOOL bStopped :1 ; // 0xD4 (0x4)
	BOOL bLooping :1 ; // 0xD4 (0x4)
	BOOL bAutoPlay :1 ; // 0xD4 (0x4)
	const unsigned long: 0;
	int HorizontalImages; // 0xD8 (0x4)
	int VerticalImages; // 0xDC (0x4)
	unsigned char FBMethod; // 0xE0 (0x1) (Enum = TextureFlipBookMethod)
	const unsigned char Unknown1[0x3]; // 0xE1 (0x3) > LAST OFFSET
	float FrameRate; // 0xE4 (0x4)
	float FrameTime; // 0xE8 (0x4)
	int CurrentRow; // 0xEC (0x4)
	int CurrentColumn; // 0xF0 (0x4)
	float RenderOffsetU; // 0xF4 (0x4)
	float RenderOffsetV; // 0xF8 (0x4)
	struct FPointer ReleaseResourcesFence; // 0xFC (0x4)
};

struct UTextureFlipBook {
	struct UObject_Data UObject;
	struct USurface_Data USurface;
	struct UTexture_Data UTexture;
	struct UTexture2D_Data UTexture2D;
	struct UTextureFlipBook_Data UTextureFlipBook;
};

// 0x68 
struct UTexture2DComposite_Data {
	// Last Offset: 0x58
	struct TArray_FSourceTexture2DRegion SourceRegions; // 0x58 (0xC)
	int MaxTextureSize; // 0x64 (0x4)
};

struct UTexture2DComposite {
	struct UObject_Data UObject;
	struct USurface_Data USurface;
	struct UTexture_Data UTexture;
	struct UTexture2DComposite_Data UTexture2DComposite;
};

// 0x6C 
struct UTexture2DDynamic_Data {
	// Last Offset: 0x58
	int SizeX; // 0x58 (0x4)
	int SizeY; // 0x5C (0x4)
	unsigned char Format; // 0x60 (0x1) (Enum = EPixelFormat)
	const unsigned char Unknown1[0x3]; // 0x61 (0x3) > LAST OFFSET
	int NumMips; // 0x64 (0x4)
	BOOL bIsResolveTarget :1 ; // 0x68 (0x4)
	const unsigned long: 0;
};

struct UTexture2DDynamic {
	struct UObject_Data UObject;
	struct USurface_Data USurface;
	struct UTexture_Data UTexture;
	struct UTexture2DDynamic_Data UTexture2DDynamic;
};

// 0x84 
struct UTextureCube_Data {
	// Last Offset: 0x58
	int SizeX; // 0x58 (0x4)
	int SizeY; // 0x5C (0x4)
	unsigned char Format; // 0x60 (0x1) (Enum = EPixelFormat)
	const unsigned char Unknown1[0x3]; // 0x61 (0x3) > LAST OFFSET
	int NumMips; // 0x64 (0x4)
	BOOL bIsCubemapValid :1 ; // 0x68 (0x4)
	const unsigned long: 0;
	struct UTexture2D* FacePosX; // 0x6C (0x4)
	struct UTexture2D* FaceNegX; // 0x70 (0x4)
	struct UTexture2D* FacePosY; // 0x74 (0x4)
	struct UTexture2D* FaceNegY; // 0x78 (0x4)
	struct UTexture2D* FacePosZ; // 0x7C (0x4)
	struct UTexture2D* FaceNegZ; // 0x80 (0x4)
};

struct UTextureCube {
	struct UObject_Data UObject;
	struct USurface_Data USurface;
	struct UTexture_Data UTexture;
	struct UTextureCube_Data UTextureCube;
};

// 0xB4 
struct UTextureMovie_Data {
	// Last Offset: 0x58
	int SizeX; // 0x58 (0x4)
	int SizeY; // 0x5C (0x4)
	unsigned char Format; // 0x60 (0x1) (Enum = EPixelFormat)
	unsigned char AddressX; // 0x61 (0x1) (Enum = TextureAddress)
	unsigned char AddressY; // 0x62 (0x1) (Enum = TextureAddress)
	unsigned char MovieStreamSource; // 0x63 (0x1) (Enum = EMovieStreamSource)
	struct UClass* DecoderClass; // 0x64 (0x4)
	struct UCodecMovie* Decoder; // 0x68 (0x4)
	BOOL Paused :1 ; // 0x6C (0x4)
	BOOL Stopped :1 ; // 0x6C (0x4)
	BOOL GamePaused :1 ; // 0x6C (0x4)
	BOOL Looping :1 ; // 0x6C (0x4)
	BOOL ResetOnLastFrame :1 ; // 0x6C (0x4)
	BOOL AutoPlay :1 ; // 0x6C (0x4)
	const unsigned long: 0;
	struct FString MovieName; // 0x70 (0xC)
	struct FUntypedBulkData_Mirror Data; // 0x7C (0x34)
	struct FPointer ReleaseCodecFence; // 0xB0 (0x4)
};

struct UTextureMovie {
	struct UObject_Data UObject;
	struct USurface_Data USurface;
	struct UTexture_Data UTexture;
	struct UTextureMovie_Data UTextureMovie;
};

// 0x60 
struct UTextureRenderTarget_Data {
	// Last Offset: 0x58
	BOOL bUpdateImmediate :1 ; // 0x58 (0x4)
	BOOL bNeedsTwoCopies :1 ; // 0x58 (0x4)
	BOOL bRenderOnce :1 ; // 0x58 (0x4)
	const unsigned long: 0;
	float TargetGamma; // 0x5C (0x4)
};

struct UTextureRenderTarget {
	struct UObject_Data UObject;
	struct USurface_Data USurface;
	struct UTexture_Data UTexture;
	struct UTextureRenderTarget_Data UTextureRenderTarget;
};

// 0x80 
struct UTextureRenderTarget2D_Data {
	// Last Offset: 0x60
	int SizeX; // 0x60 (0x4)
	int SizeY; // 0x64 (0x4)
	unsigned char Format; // 0x68 (0x1) (Enum = EPixelFormat)
	unsigned char AddressX; // 0x69 (0x1) (Enum = TextureAddress)
	unsigned char AddressY; // 0x6A (0x1) (Enum = TextureAddress)
	const unsigned char Unknown1[0x1]; // 0x6B (0x1) > LAST OFFSET
	struct FLinearColor ClearColor; // 0x6C (0x10)
	BOOL bForceLinearGamma :1 ; // 0x7C (0x4)
	const unsigned long: 0;
};

struct UTextureRenderTarget2D {
	struct UObject_Data UObject;
	struct USurface_Data USurface;
	struct UTexture_Data UTexture;
	struct UTextureRenderTarget_Data UTextureRenderTarget;
	struct UTextureRenderTarget2D_Data UTextureRenderTarget2D;
};

// 0x90 
struct UScriptedTexture_Data {
	// Last Offset: 0x80
	BOOL bNeedsUpdate :1 ; // 0x80 (0x4)
	BOOL bSkipNextClear :1 ; // 0x80 (0x4)
	const unsigned long: 0;
	struct FScriptDelegate __Render__Delegate; // 0x84 (0xC)
};

struct UScriptedTexture {
	struct UObject_Data UObject;
	struct USurface_Data USurface;
	struct UTexture_Data UTexture;
	struct UTextureRenderTarget_Data UTextureRenderTarget;
	struct UTextureRenderTarget2D_Data UTextureRenderTarget2D;
	struct UScriptedTexture_Data UScriptedTexture;
};

// 0x65 
struct UTextureRenderTargetCube_Data {
	// Last Offset: 0x60
	int SizeX; // 0x60 (0x4)
	unsigned char Format; // 0x64 (0x1) (Enum = EPixelFormat)
};

struct UTextureRenderTargetCube {
	struct UObject_Data UObject;
	struct USurface_Data USurface;
	struct UTexture_Data UTexture;
	struct UTextureRenderTarget_Data UTextureRenderTarget;
	struct UTextureRenderTargetCube_Data UTextureRenderTargetCube;
};

// 0x2C4 
struct UAudioDevice_Data {
	// Last Offset: 0x40
	int MaxChannels; // 0x40 (0x4)
	int CommonAudioPoolSize; // 0x44 (0x4)
	float LowPassFilterResonance; // 0x48 (0x4)
	BOOL WorkAroundXDKRegression :1 ; // 0x4C (0x4)
	BOOL bUsesVirtualVoices :1 ; // 0x4C (0x4)
	BOOL bGameWasTicking :1 ; // 0x4C (0x4)
	const unsigned long: 0;
	float MinCompressedDurationEditor; // 0x50 (0x4)
	float MinCompressedDurationGame; // 0x54 (0x4)
	struct FString ChirpInSoundNodeWaveName; // 0x58 (0xC)
	struct USoundNodeWave* ChirpInSoundNodeWave; // 0x64 (0x4)
	struct FString ChirpOutSoundNodeWaveName; // 0x68 (0xC)
	struct USoundNodeWave* ChirpOutSoundNodeWave; // 0x74 (0x4)
	struct FPointer CommonAudioPool; // 0x78 (0x4)
	int CommonAudioPoolFreeBytes; // 0x7C (0x4)
	struct TArray_UAudioComponentPtr AudioComponents; // 0x80 (0xC)
	struct TArray_FPointer Sources; // 0x8C (0xC)
	struct TArray_FPointer FreeSources; // 0x98 (0xC)
	const unsigned char Unknown1[0x3C]; // 0xA4 (0x3C) UNKNOWN PROPERTY
	struct TArray_FListener Listeners; // 0xE0 (0xC)
	struct FQWord CurrentTick; // 0xEC (0x8)
	const unsigned char Unknown2[0x3C]; // 0xF4 (0x3C) UNKNOWN PROPERTY
	const unsigned char Unknown3[0x3C]; // 0x130 (0x3C) UNKNOWN PROPERTY
	const unsigned char Unknown4[0x3C]; // 0x16C (0x3C) UNKNOWN PROPERTY
	const unsigned char Unknown5[0x3C]; // 0x1A8 (0x3C) UNKNOWN PROPERTY
	const unsigned char Unknown6[0x3C]; // 0x1E4 (0x3C) UNKNOWN PROPERTY
	struct FPointer Effects; // 0x220 (0x4)
	struct FName BaseSoundModeName; // 0x224 (0x8)
	struct USoundMode* CurrentMode; // 0x22C (0x4)
	struct FDouble SoundModeStartTime; // 0x230 (0x8)
	struct FDouble SoundModeFadeInStartTime; // 0x238 (0x8)
	struct FDouble SoundModeFadeInEndTime; // 0x240 (0x8)
	struct FDouble SoundModeEndTime; // 0x248 (0x8)
	int ListenerVolumeIndex; // 0x250 (0x4)
	struct FInteriorSettings ListenerInteriorSettings; // 0x254 (0x24)
	struct FDouble InteriorStartTime; // 0x278 (0x8)
	struct FDouble InteriorEndTime; // 0x280 (0x8)
	struct FDouble ExteriorEndTime; // 0x288 (0x8)
	struct FDouble InteriorLPFEndTime; // 0x290 (0x8)
	struct FDouble ExteriorLPFEndTime; // 0x298 (0x8)
	float InteriorVolumeInterp; // 0x2A0 (0x4)
	float InteriorLPFInterp; // 0x2A4 (0x4)
	float ExteriorVolumeInterp; // 0x2A8 (0x4)
	float ExteriorLPFInterp; // 0x2AC (0x4)
	struct UAudioComponent* TestAudioComponent; // 0x2B0 (0x4)
	struct FPointer TextToSpeech; // 0x2B4 (0x4)
	unsigned char DebugState; // 0x2B8 (0x1) (Enum = EDebugState)
	const unsigned char Unknown7[0x3]; // 0x2B9 (0x3) > LAST OFFSET
	float TransientMasterVolume; // 0x2BC (0x4)
	float LastUpdateTime; // 0x2C0 (0x4)
};

struct UAudioDevice {
	struct UObject_Data UObject;
	struct USubsystem_Data USubsystem;
	struct UAudioDevice_Data UAudioDevice;
};

// 0xA8 
struct USoundClass_Data {
	// Last Offset: 0x3C
	struct FSoundClassProperties Properties; // 0x3C (0x20)
	struct TArray_FName ChildClassNames; // 0x5C (0xC)
	BOOL bIsChild :1 ; // 0x68 (0x4)
	const unsigned char Unknown1[0x3C]; // 0x6C (0x3C) UNKNOWN PROPERTY
	const unsigned long: 0;
};

struct USoundClass {
	struct UObject_Data UObject;
	struct USoundClass_Data USoundClass;
};

// 0x80 
struct USoundMode_Data {
	// Last Offset: 0x3C
	BOOL bApplyEQ :1 ; // 0x3C (0x4)
	const unsigned long: 0;
	struct FAudioEQEffect EQSettings; // 0x40 (0x24)
	struct TArray_FSoundClassAdjuster SoundClassEffects; // 0x64 (0xC)
	float InitialDelay; // 0x70 (0x4)
	float FadeInTime; // 0x74 (0x4)
	float Duration; // 0x78 (0x4)
	float FadeOutTime; // 0x7C (0x4)
};

struct USoundMode {
	struct UObject_Data UObject;
	struct USoundMode_Data USoundMode;
};

// 0x920 
struct ADebugCameraController_Data {
	// Last Offset: 0x8F0
	struct FName PrimaryKey; // 0x8F0 (0x8)
	struct FName SecondaryKey; // 0x8F8 (0x8)
	struct FName UnselectKey; // 0x900 (0x8)
	BOOL bShowSelectedInfo :1 ; // 0x908 (0x4)
	BOOL bIsFrozenRendering :1 ; // 0x908 (0x4)
	const unsigned long: 0;
	struct APlayerController* OryginalControllerRef; // 0x90C (0x4)
	struct UPlayer* OryginalPlayer; // 0x910 (0x4)
	struct UDrawFrustumComponent* DrawFrustum; // 0x914 (0x4)
	struct AActor* SelectedActor; // 0x918 (0x4)
	struct UPrimitiveComponent* SelectedComponent; // 0x91C (0x4)
};

struct ADebugCameraController {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AController_Data AController;
	struct APlayerController_Data APlayerController;
	struct ADebugCameraController_Data ADebugCameraController;
};

// 0x690 
struct AMatineePawn_Data {
	// Last Offset: 0x690
};

struct AMatineePawn {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct APawn_Data APawn;
	struct AMatineePawn_Data AMatineePawn;
};

// 0x720 
struct AScout_Data {
	// Last Offset: 0x690
	struct TArray_FPathSizeInfo PathSizes; // 0x690 (0xC)
	float TestJumpZ; // 0x69C (0x4)
	float TestGroundSpeed; // 0x6A0 (0x4)
	float TestMaxFallSpeed; // 0x6A4 (0x4)
	float TestFallSpeed; // 0x6A8 (0x4)
	float MaxLandingVelocity; // 0x6AC (0x4)
	int MinNumPlayerStarts; // 0x6B0 (0x4)
	struct UClass* DefaultReachSpecClass; // 0x6B4 (0x4)
	struct TArray_FColor EdgePathColors; // 0x6B8 (0xC)
	float NavMeshGen_StepSize; // 0x6C4 (0x4)
	float NavMeshGen_EntityHalfHeight; // 0x6C8 (0x4)
	float NavMeshGen_StartingHeightOffset; // 0x6CC (0x4)
	float NavMeshGen_MaxDropHeight; // 0x6D0 (0x4)
	float NavMeshGen_MaxStepHeight; // 0x6D4 (0x4)
	float NavMeshGen_VertZDeltaSnapThresh; // 0x6D8 (0x4)
	float NavMeshGen_MinPolyArea; // 0x6DC (0x4)
	float NavMeshGen_BorderBackfill_CheckDist; // 0x6E0 (0x4)
	float NavMeshGen_MinMergeDotAreaThreshold; // 0x6E4 (0x4)
	float NavMeshGen_MinMergeDotSmallArea; // 0x6E8 (0x4)
	float NavMeshGen_MinMergeDotLargeArea; // 0x6EC (0x4)
	float NavMeshGen_MaxPolyHeight; // 0x6F0 (0x4)
	float NavMeshGen_HeightMergeThreshold; // 0x6F4 (0x4)
	float NavMeshGen_EdgeMaxDelta; // 0x6F8 (0x4)
	float NavMeshGen_MaxGroundCheckSize; // 0x6FC (0x4)
	float NavMeshGen_MinEdgeLength; // 0x700 (0x4)
	float NavMeshGen_MinConcaveMergeDot; // 0x704 (0x4)
	BOOL NavMeshGen_ExpansionDoObstacleMeshSimplification :1 ; // 0x708 (0x4)
	BOOL bHightlightOneWayReachSpecs :1 ; // 0x708 (0x4)
	const unsigned long: 0;
	float MinMantleFallDist; // 0x70C (0x4)
	float MaxMantleFallDist; // 0x710 (0x4)
	float MinMantleLateralDist; // 0x714 (0x4)
	float MaxMantleLateralDist; // 0x718 (0x4)
	float MaxMantleFallTime; // 0x71C (0x4)
};

struct AScout {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct APawn_Data APawn;
	struct AScout_Data AScout;
};

// 0x190 
struct ALight_Data {
	// Last Offset: 0x188
	struct ULightComponent* LightComponent; // 0x188 (0x4)
	BOOL bEnabled :1 ; // 0x18C (0x4)
	const unsigned long: 0;
};

struct ALight {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ALight_Data ALight;
};

// 0x190 
struct ADirectionalLight_Data {
	// Last Offset: 0x190
};

struct ADirectionalLight {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ALight_Data ALight;
	struct ADirectionalLight_Data ADirectionalLight;
};

// 0x190 
struct ADirectionalLightToggleable_Data {
	// Last Offset: 0x190
};

struct ADirectionalLightToggleable {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ALight_Data ALight;
	struct ADirectionalLight_Data ADirectionalLight;
	struct ADirectionalLightToggleable_Data ADirectionalLightToggleable;
};

// 0x190 
struct ADominantDirectionalLight_Data {
	// Last Offset: 0x190
};

struct ADominantDirectionalLight {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ALight_Data ALight;
	struct ADirectionalLight_Data ADirectionalLight;
	struct ADominantDirectionalLight_Data ADominantDirectionalLight;
};

// 0x190 
struct ADominantDirectionalLightMovable_Data {
	// Last Offset: 0x190
};

struct ADominantDirectionalLightMovable {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ALight_Data ALight;
	struct ADirectionalLight_Data ADirectionalLight;
	struct ADominantDirectionalLight_Data ADominantDirectionalLight;
	struct ADominantDirectionalLightMovable_Data ADominantDirectionalLightMovable;
};

// 0x190 
struct ALightShafts_Data {
	// Last Offset: 0x190
};

struct ALightShafts {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ALight_Data ALight;
	struct ALightShafts_Data ALightShafts;
};

// 0x190 
struct APointLight_Data {
	// Last Offset: 0x190
};

struct APointLight {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ALight_Data ALight;
	struct APointLight_Data APointLight;
};

// 0x190 
struct ADominantPointLight_Data {
	// Last Offset: 0x190
};

struct ADominantPointLight {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ALight_Data ALight;
	struct APointLight_Data APointLight;
	struct ADominantPointLight_Data ADominantPointLight;
};

// 0x190 
struct APointLightMovable_Data {
	// Last Offset: 0x190
};

struct APointLightMovable {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ALight_Data ALight;
	struct APointLight_Data APointLight;
	struct APointLightMovable_Data APointLightMovable;
};

// 0x190 
struct APointLightToggleable_Data {
	// Last Offset: 0x190
};

struct APointLightToggleable {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ALight_Data ALight;
	struct APointLight_Data APointLight;
	struct APointLightToggleable_Data APointLightToggleable;
};

// 0x190 
struct ASkyLight_Data {
	// Last Offset: 0x190
};

struct ASkyLight {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ALight_Data ALight;
	struct ASkyLight_Data ASkyLight;
};

// 0x190 
struct ASkyLightToggleable_Data {
	// Last Offset: 0x190
};

struct ASkyLightToggleable {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ALight_Data ALight;
	struct ASkyLight_Data ASkyLight;
	struct ASkyLightToggleable_Data ASkyLightToggleable;
};

// 0x190 
struct ASpotLight_Data {
	// Last Offset: 0x190
};

struct ASpotLight {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ALight_Data ALight;
	struct ASpotLight_Data ASpotLight;
};

// 0x190 
struct ADominantSpotLight_Data {
	// Last Offset: 0x190
};

struct ADominantSpotLight {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ALight_Data ALight;
	struct ASpotLight_Data ASpotLight;
	struct ADominantSpotLight_Data ADominantSpotLight;
};

// 0x190 
struct AGeneratedMeshAreaLight_Data {
	// Last Offset: 0x190
};

struct AGeneratedMeshAreaLight {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ALight_Data ALight;
	struct ASpotLight_Data ASpotLight;
	struct AGeneratedMeshAreaLight_Data AGeneratedMeshAreaLight;
};

// 0x190 
struct ASpotLightMovable_Data {
	// Last Offset: 0x190
};

struct ASpotLightMovable {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ALight_Data ALight;
	struct ASpotLight_Data ASpotLight;
	struct ASpotLightMovable_Data ASpotLightMovable;
};

// 0x190 
struct ASpotLightToggleable_Data {
	// Last Offset: 0x190
};

struct ASpotLightToggleable {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ALight_Data ALight;
	struct ASpotLight_Data ASpotLight;
	struct ASpotLightToggleable_Data ASpotLightToggleable;
};

// 0x1A0 
struct AStaticLightCollectionActor_Data {
	// Last Offset: 0x190
	struct TArray_ULightComponentPtr LightComponents; // 0x190 (0xC)
	int MaxLightComponents; // 0x19C (0x4)
};

struct AStaticLightCollectionActor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ALight_Data ALight;
	struct AStaticLightCollectionActor_Data AStaticLightCollectionActor;
};

// 0x164  (Alignment = 16)
struct ULightComponent_Data {
	// Last Offset: 0x5C
	struct FPointer SceneInfo; // 0x5C (0x4)
	struct FMatrix WorldToLight; // 0x60 (0x40)
	struct FMatrix LightToWorld; // 0xA0 (0x40)
	struct FGuid LightGuid; // 0xE0 (0x10)
	struct FGuid LightmapGuid; // 0xF0 (0x10)
	float Brightness; // 0x100 (0x4)
	struct FColor LightColor; // 0x104 (0x4)
	struct ULightFunction* Function; // 0x108 (0x4)
	BOOL bEnabled :1 ; // 0x10C (0x4)
	BOOL CastShadows :1 ; // 0x10C (0x4)
	BOOL CastStaticShadows :1 ; // 0x10C (0x4)
	BOOL CastDynamicShadows :1 ; // 0x10C (0x4)
	BOOL bCastCompositeShadow :1 ; // 0x10C (0x4)
	BOOL bAffectCompositeShadowDirection :1 ; // 0x10C (0x4)
	BOOL bNonModulatedSelfShadowing :1 ; // 0x10C (0x4)
	BOOL bSelfShadowOnly :1 ; // 0x10C (0x4)
	BOOL bAllowPreShadow :1 ; // 0x10C (0x4)
	BOOL bForceDynamicLight :1 ; // 0x10C (0x4)
	BOOL UseDirectLightMap :1 ; // 0x10C (0x4)
	BOOL bHasLightEverBeenBuiltIntoLightMap :1 ; // 0x10C (0x4)
	BOOL bCanAffectDynamicPrimitivesOutsideDynamicChannel :1 ; // 0x10C (0x4)
	BOOL bAllowProjectedShadowing :1 ; // 0x10C (0x4)
	BOOL bRenderLightShafts :1 ; // 0x10C (0x4)
	BOOL bPrecomputedLightingIsValid :1 ; // 0x10C (0x4)
	BOOL bExplicitlyAssignedLight :1 ; // 0x10C (0x4)
	BOOL bAllowCompositingIntoDLE :1 ; // 0x10C (0x4)
	const unsigned long: 0;
	struct ULightEnvironmentComponent* LightEnvironment; // 0x110 (0x4)
	struct FLightingChannelContainer LightingChannels; // 0x114 (0x4)
	unsigned char LightAffectsClassification; // 0x118 (0x1) (Enum = ELightAffectsClassification)
	unsigned char LightShadowMode; // 0x119 (0x1) (Enum = ELightShadowMode)
	const unsigned char Unknown1[0x2]; // 0x11A (0x2) > LAST OFFSET
	struct FLinearColor ModShadowColor; // 0x11C (0x10)
	float ModShadowFadeoutTime; // 0x12C (0x4)
	float ModShadowFadeoutExponent; // 0x130 (0x4)
	int LightListIndex; // 0x134 (0x4)
	unsigned char ShadowProjectionTechnique; // 0x138 (0x1) (Enum = EShadowProjectionTechnique)
	unsigned char ShadowFilterQuality; // 0x139 (0x1) (Enum = EShadowFilterQuality)
	const unsigned char Unknown2[0x2]; // 0x13A (0x2) > LAST OFFSET
	int MinShadowResolution; // 0x13C (0x4)
	int MaxShadowResolution; // 0x140 (0x4)
	int ShadowFadeResolution; // 0x144 (0x4)
	float OcclusionDepthRange; // 0x148 (0x4)
	float BloomScale; // 0x14C (0x4)
	float BloomThreshold; // 0x150 (0x4)
	float BloomScreenBlendThreshold; // 0x154 (0x4)
	struct FColor BloomTint; // 0x158 (0x4)
	float RadialBlurPercent; // 0x15C (0x4)
	float OcclusionMaskDarkness; // 0x160 (0x4)
};

struct ULightComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct ULightComponent_Data ULightComponent;
};

// 0x184  (Alignment = 16)
struct UDirectionalLightComponent_Data {
	// Last Offset: 0x164
	float TraceDistance; // 0x164 (0x4)
	float WholeSceneDynamicShadowRadius; // 0x168 (0x4)
	int NumWholeSceneDynamicShadowCascades; // 0x16C (0x4)
	float CascadeDistributionExponent; // 0x170 (0x4)
	struct FLightmassDirectionalLightSettings LightmassSettings; // 0x174 (0x10)
};

struct UDirectionalLightComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct ULightComponent_Data ULightComponent;
	struct UDirectionalLightComponent_Data UDirectionalLightComponent;
};

// 0x25C  (Alignment = 16)
struct UDominantDirectionalLightComponent_Data {
	// Last Offset: 0x184
	float DominantLightmassBrightness; // 0x184 (0x4)
	float TimeOfDayDiffuseBrightness; // 0x188 (0x4)
	struct FColor TimeOfDayDiffuseColor; // 0x18C (0x4)
	float TimeOfDaySpecularBrightness; // 0x190 (0x4)
	struct FColor TimeOfDaySpecularColor; // 0x194 (0x4)
	const unsigned char Unknown1[0x8]; // 0x198 (0x8) > LAST OFFSET
	struct FDominantShadowInfo DominantLightShadowInfo; // 0x1A0 (0xA4)
	const unsigned char Unknown2[0xC]; // 0x244 (0xC) > LAST OFFSET
	struct FArray_Mirror DominantLightShadowMap; // 0x250 (0xC)
};

struct UDominantDirectionalLightComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct ULightComponent_Data ULightComponent;
	struct UDirectionalLightComponent_Data UDirectionalLightComponent;
	struct UDominantDirectionalLightComponent_Data UDominantDirectionalLightComponent;
};

// 0x170  (Alignment = 16)
struct ULightShaftComponent_Data {
	// Last Offset: 0x164
	float TraceDistance; // 0x164 (0x4)
	unsigned char LightShaftType; // 0x168 (0x1) (Enum = ELightShaftType)
	const unsigned char Unknown1[0x3]; // 0x169 (0x3) > LAST OFFSET
	float Radius; // 0x16C (0x4)
};

struct ULightShaftComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct ULightComponent_Data ULightComponent;
	struct ULightShaftComponent_Data ULightShaftComponent;
};

// 0x1F8  (Alignment = 16)
struct UPointLightComponent_Data {
	// Last Offset: 0x164
	float ShadowRadiusMultiplier; // 0x164 (0x4)
	float Radius; // 0x168 (0x4)
	float FalloffExponent; // 0x16C (0x4)
	float ShadowFalloffExponent; // 0x170 (0x4)
	float MinShadowFalloffRadius; // 0x174 (0x4)
	const unsigned char Unknown1[0x8]; // 0x178 (0x8) > LAST OFFSET
	struct FMatrix CachedParentToWorld; // 0x180 (0x40)
	struct FVector Translation; // 0x1C0 (0xC)
	const unsigned char Unknown2[0x4]; // 0x1CC (0x4) > LAST OFFSET
	struct FPlane ShadowPlane; // 0x1D0 (0x10)
	struct UDrawLightRadiusComponent* PreviewLightRadius; // 0x1E0 (0x4)
	struct FLightmassPointLightSettings LightmassSettings; // 0x1E4 (0x10)
	struct UDrawLightRadiusComponent* PreviewLightSourceRadius; // 0x1F4 (0x4)
};

struct UPointLightComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct ULightComponent_Data ULightComponent;
	struct UPointLightComponent_Data UPointLightComponent;
};

// 0x1F8  (Alignment = 16)
struct UDominantPointLightComponent_Data {
	// Last Offset: 0x1F8
};

struct UDominantPointLightComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct ULightComponent_Data ULightComponent;
	struct UPointLightComponent_Data UPointLightComponent;
	struct UDominantPointLightComponent_Data UDominantPointLightComponent;
};

// 0x218  (Alignment = 16)
struct USpotLightComponent_Data {
	// Last Offset: 0x1F8
	float InnerConeAngle; // 0x1F8 (0x4)
	float OuterConeAngle; // 0x1FC (0x4)
	float LightShaftConeAngle; // 0x200 (0x4)
	struct UDrawLightConeComponent* PreviewInnerCone; // 0x204 (0x4)
	struct UDrawLightConeComponent* PreviewOuterCone; // 0x208 (0x4)
	struct FRotator Rotation; // 0x20C (0xC)
};

struct USpotLightComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct ULightComponent_Data ULightComponent;
	struct UPointLightComponent_Data UPointLightComponent;
	struct USpotLightComponent_Data USpotLightComponent;
};

// 0x2DC  (Alignment = 16)
struct UDominantSpotLightComponent_Data {
	// Last Offset: 0x218
	const unsigned char Unknown1[0x8]; // 0x218 (0x8) > LAST OFFSET
	struct FDominantShadowInfo DominantLightShadowInfo; // 0x220 (0xA4)
	const unsigned char Unknown2[0xC]; // 0x2C4 (0xC) > LAST OFFSET
	struct FArray_Mirror DominantLightShadowMap; // 0x2D0 (0xC)
};

struct UDominantSpotLightComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct ULightComponent_Data ULightComponent;
	struct UPointLightComponent_Data UPointLightComponent;
	struct USpotLightComponent_Data USpotLightComponent;
	struct UDominantSpotLightComponent_Data UDominantSpotLightComponent;
};

// 0x16C  (Alignment = 16)
struct USkyLightComponent_Data {
	// Last Offset: 0x164
	float LowerBrightness; // 0x164 (0x4)
	struct FColor LowerColor; // 0x168 (0x4)
};

struct USkyLightComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct ULightComponent_Data ULightComponent;
	struct USkyLightComponent_Data USkyLightComponent;
};

// 0x220  (Alignment = 16)
struct USphericalHarmonicLightComponent_Data {
	// Last Offset: 0x164
	const unsigned char Unknown1[0xC]; // 0x164 (0xC) > LAST OFFSET
	struct FSHVectorRGB WorldSpaceIncidentLighting; // 0x170 (0x90)
	struct FLinearColor IndirectColor; // 0x200 (0x10)
	struct FVector IndirectDirection; // 0x210 (0xC)
	BOOL bRenderBeforeModShadows :1 ; // 0x21C (0x4)
	const unsigned long: 0;
};

struct USphericalHarmonicLightComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct ULightComponent_Data ULightComponent;
	struct USphericalHarmonicLightComponent_Data USphericalHarmonicLightComponent;
};

// 0x74 
struct ULightEnvironmentComponent_Data {
	// Last Offset: 0x5C
	BOOL bEnabled :1 ; // 0x5C (0x4)
	BOOL bForceNonCompositeDynamicLights :1 ; // 0x5C (0x4)
	BOOL bAllowDynamicShadowsOnTranslucency :1 ; // 0x5C (0x4)
	BOOL bAllowPreShadow :1 ; // 0x5C (0x4)
	BOOL bTranslucencyShadowed :1 ; // 0x5C (0x4)
	const unsigned long: 0;
	float DominantShadowFactor; // 0x60 (0x4)
	struct ULightComponent* AffectingDominantLight; // 0x64 (0x4)
	struct TArray_UPrimitiveComponentPtr AffectedComponents; // 0x68 (0xC)
};

struct ULightEnvironmentComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct ULightEnvironmentComponent_Data ULightEnvironmentComponent;
};

// 0x11C 
struct UDynamicLightEnvironmentComponent_Data {
	// Last Offset: 0x74
	struct FPointer State; // 0x74 (0x4)
	float InvisibleUpdateTime; // 0x78 (0x4)
	float MinTimeBetweenFullUpdates; // 0x7C (0x4)
	float VelocityUpdateTimeScale; // 0x80 (0x4)
	float ShadowInterpolationSpeed; // 0x84 (0x4)
	int NumVolumeVisibilitySamples; // 0x88 (0x4)
	float LightingBoundsScale; // 0x8C (0x4)
	struct FLinearColor AmbientShadowColor; // 0x90 (0x10)
	struct FVector AmbientShadowSourceDirection; // 0xA0 (0xC)
	struct FLinearColor AmbientGlow; // 0xAC (0x10)
	float LightDistance; // 0xBC (0x4)
	float ShadowDistance; // 0xC0 (0x4)
	BOOL bCastShadows :1 ; // 0xC4 (0x4)
	BOOL bCompositeShadowsFromDynamicLights :1 ; // 0xC4 (0x4)
	BOOL bForceCompositeAllLights :1 ; // 0xC4 (0x4)
	BOOL bAffectedBySmallDynamicLights :1 ; // 0xC4 (0x4)
	BOOL bUseBooleanEnvironmentShadowing :1 ; // 0xC4 (0x4)
	BOOL bShadowFromEnvironment :1 ; // 0xC4 (0x4)
	BOOL bDynamic :1 ; // 0xC4 (0x4)
	BOOL bSynthesizeDirectionalLight :1 ; // 0xC4 (0x4)
	BOOL bSynthesizeSHLight :1 ; // 0xC4 (0x4)
	BOOL bRequiresNonLatentUpdates :1 ; // 0xC4 (0x4)
	BOOL bTraceFromClosestBoundsPoint :1 ; // 0xC4 (0x4)
	BOOL bIsCharacterLightEnvironment :1 ; // 0xC4 (0x4)
	BOOL bOverrideOwnerLightingChannels :1 ; // 0xC4 (0x4)
	BOOL bAlwaysInfluencedByDominantDirectionalLight :1 ; // 0xC4 (0x4)
	const unsigned long: 0;
	float ModShadowFadeoutTime; // 0xC8 (0x4)
	float ModShadowFadeoutExponent; // 0xCC (0x4)
	struct FLinearColor MaxModulatedShadowColor; // 0xD0 (0x10)
	float DominantShadowTransitionStartDistance; // 0xE0 (0x4)
	float DominantShadowTransitionEndDistance; // 0xE4 (0x4)
	float MinShadowAngle; // 0xE8 (0x4)
	unsigned char BoundsMethod; // 0xEC (0x1) (Enum = EDynamicLightEnvironmentBoundsMethod)
	const unsigned char Unknown1[0x3]; // 0xED (0x3) > LAST OFFSET
	struct FBoxSphereBounds OverriddenBounds; // 0xF0 (0x1C)
	struct FLightingChannelContainer OverriddenLightingChannels; // 0x10C (0x4)
	struct TArray_ULightComponentPtr OverriddenLightComponents; // 0x110 (0xC)
};

struct UDynamicLightEnvironmentComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct ULightEnvironmentComponent_Data ULightEnvironmentComponent;
	struct UDynamicLightEnvironmentComponent_Data UDynamicLightEnvironmentComponent;
};

// 0x130 
struct UParticleLightEnvironmentComponent_Data {
	// Last Offset: 0x11C
	int ReferenceCount; // 0x11C (0x4)
	int NumPooledReuses; // 0x120 (0x4)
	struct AActor* SharedInstigator; // 0x124 (0x4)
	struct UParticleSystem* SharedParticleSystem; // 0x128 (0x4)
	BOOL bAllowDLESharing :1 ; // 0x12C (0x4)
	const unsigned long: 0;
};

struct UParticleLightEnvironmentComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct ULightEnvironmentComponent_Data ULightEnvironmentComponent;
	struct UDynamicLightEnvironmentComponent_Data UDynamicLightEnvironmentComponent;
	struct UParticleLightEnvironmentComponent_Data UParticleLightEnvironmentComponent;
};

// 0x220  (Alignment = 16)
struct UDrawLightConeComponent_Data {
	// Last Offset: 0x220
};

struct UDrawLightConeComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UDrawConeComponent_Data UDrawConeComponent;
	struct UDrawLightConeComponent_Data UDrawLightConeComponent;
};

// 0x224  (Alignment = 16)
struct UDrawLightRadiusComponent_Data {
	// Last Offset: 0x224
};

struct UDrawLightRadiusComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UDrawSphereComponent_Data UDrawSphereComponent;
	struct UDrawLightRadiusComponent_Data UDrawLightRadiusComponent;
};

// 0x50 
struct ULightFunction_Data {
	// Last Offset: 0x3C
	struct UMaterialInterface* SourceMaterial; // 0x3C (0x4)
	struct FVector Scale; // 0x40 (0xC)
	float DisabledBrightness; // 0x4C (0x4)
};

struct ULightFunction {
	struct UObject_Data UObject;
	struct ULightFunction_Data ULightFunction;
};

// 0x6AC  (Alignment = 16)
struct USkeletalMeshComponent_Data {
	// Last Offset: 0x21C
	struct FPointer VfTable_IIAnimBehavior; // 0x21C (0x4)
	struct USkeletalMesh* SkeletalMesh; // 0x220 (0x4)
	struct USkeletalMeshComponent* AttachedToSkelComponent; // 0x224 (0x4)
	struct FGestaltDataContainer GestaltData; // 0x228 (0x48)
	struct UAnimTree* AnimTreeTemplate; // 0x270 (0x4)
	struct UAnimNode* Animations; // 0x274 (0x4)
	struct TArray_UAnimNodePtr AnimTickArray; // 0x278 (0xC)
	struct TArray_UAnimNodePtr AnimAlwaysTickArray; // 0x284 (0xC)
	struct TArray_int AnimTickRelevancyArray; // 0x290 (0xC)
	struct TArray_float AnimTickWeightsArray; // 0x29C (0xC)
	struct TArray_USkelControlBasePtr SkelControlTickArray; // 0x2A8 (0xC)
	struct UPhysicsAsset* PhysicsAsset; // 0x2B4 (0x4)
	struct UPhysicsAssetInstance* PhysicsAssetInstance; // 0x2B8 (0x4)
	struct FPointer ApexClothing; // 0x2BC (0x4)
	float PhysicsWeight; // 0x2C0 (0x4)
	float GlobalAnimRateScale; // 0x2C4 (0x4)
	float StreamingDistanceMultiplier; // 0x2C8 (0x4)
	struct FPointer MeshObject; // 0x2CC (0x4)
	struct TArray_FBoneAtom SpaceBases; // 0x2D0 (0xC)
	struct TArray_FBoneAtom LocalAtoms; // 0x2DC (0xC)
	struct TArray_FBoneAtom CachedLocalAtoms; // 0x2E8 (0xC)
	struct TArray_FBoneAtom CachedSpaceBases; // 0x2F4 (0xC)
	int LowUpdateFrameRate; // 0x300 (0x4)
	struct TArray_unsigned_char RequiredBones; // 0x304 (0xC)
	struct TArray_unsigned_char ComposeOrderedRequiredBones; // 0x310 (0xC)
	struct USkeletalMeshComponent* ParentAnimComponent; // 0x31C (0x4)
	struct TArray_int ParentBoneMap; // 0x320 (0xC)
	struct TArray_UAnimSetPtr AnimSets; // 0x32C (0xC)
	struct TArray_UAnimSetPtr TemporarySavedAnimSets; // 0x338 (0xC)
	struct TArray_UMorphTargetSetPtr MorphSets; // 0x344 (0xC)
	struct TArray_FActiveMorph ActiveMorphs; // 0x350 (0xC)
	struct TArray_FActiveMorph ActiveCurveMorphs; // 0x35C (0xC)
	const unsigned char Unknown1[0x3C]; // 0x368 (0x3C) UNKNOWN PROPERTY
	struct TArray_FAttachment Attachments; // 0x3A4 (0xC)
	struct TArray_unsigned_char SkelControlIndex; // 0x3B0 (0xC)
	struct TArray_unsigned_char PostPhysSkelControlIndex; // 0x3BC (0xC)
	int ForcedLodModel; // 0x3C8 (0x4)
	int MinLodModel; // 0x3CC (0x4)
	int PredictedLODLevel; // 0x3D0 (0x4)
	int OldPredictedLODLevel; // 0x3D4 (0x4)
	float AnimationLODDistanceFactor; // 0x3D8 (0x4)
	int AnimationLODFrameRate; // 0x3DC (0x4)
	float MaxDistanceFactor; // 0x3E0 (0x4)
	int bForceWireframe; // 0x3E4 (0x4)
	int bForceRefpose; // 0x3E8 (0x4)
	int bOldForceRefPose; // 0x3EC (0x4)
	BOOL bNoSkeletonUpdate :1 ; // 0x3F0 (0x4)
	const unsigned long: 0;
	int bDisplayBones; // 0x3F4 (0x4)
	int bShowPrePhysBones; // 0x3F8 (0x4)
	int bHideSkin; // 0x3FC (0x4)
	int bForceRawOffset; // 0x400 (0x4)
	int bIgnoreControllers; // 0x404 (0x4)
	int bTransformFromAnimParent; // 0x408 (0x4)
	int TickTag; // 0x40C (0x4)
	int InitTag; // 0x410 (0x4)
	int CachedAtomsTag; // 0x414 (0x4)
	int bUseSingleBodyPhysics; // 0x418 (0x4)
	int bRequiredBonesUpToDate; // 0x41C (0x4)
	float MinDistFactorForKinematicUpdate; // 0x420 (0x4)
	int FramesPhysicsAsleep; // 0x424 (0x4)
	BOOL bHasValidBodies :1 ; // 0x428 (0x4)
	BOOL bSkipAllUpdateWhenPhysicsAsleep :1 ; // 0x428 (0x4)
	BOOL bComponentUseFixedSkelBounds :1 ; // 0x428 (0x4)
	BOOL bUseBoundsFromParentAnimComponent :1 ; // 0x428 (0x4)
	BOOL bDoKinematicUpdatePostFence :1 ; // 0x428 (0x4)
	BOOL bConsiderAllBodiesForBounds :1 ; // 0x428 (0x4)
	BOOL bUpdateSkelWhenNotRendered :1 ; // 0x428 (0x4)
	BOOL bIgnoreControllersWhenNotRendered :1 ; // 0x428 (0x4)
	BOOL bTickAnimNodesWhenNotRendered :1 ; // 0x428 (0x4)
	BOOL bNotUpdatingKinematicDueToDistance :1 ; // 0x428 (0x4)
	BOOL bForceDiscardRootMotion :1 ; // 0x428 (0x4)
	BOOL bNotifyRootMotionProcessed :1 ; // 0x428 (0x4)
	BOOL bRootMotionModeChangeNotify :1 ; // 0x428 (0x4)
	BOOL bRootMotionExtractedNotify :1 ; // 0x428 (0x4)
	BOOL bProcessingRootMotion :1 ; // 0x428 (0x4)
	BOOL bDisableFaceFXMaterialInstanceCreation :1 ; // 0x428 (0x4)
	BOOL bDisableFaceFX :1 ; // 0x428 (0x4)
	BOOL bAnimTreeInitialised :1 ; // 0x428 (0x4)
	BOOL bForceMeshObjectUpdate :1 ; // 0x428 (0x4)
	BOOL bHasPhysicsAssetInstance :1 ; // 0x428 (0x4)
	BOOL bUpdateKinematicBonesFromAnimation :1 ; // 0x428 (0x4)
	BOOL bUpdateJointsFromAnimation :1 ; // 0x428 (0x4)
	BOOL bSkelCompFixed :1 ; // 0x428 (0x4)
	BOOL bHasHadPhysicsBlendedIn :1 ; // 0x428 (0x4)
	BOOL bForceUpdateAttachmentsInTick :1 ; // 0x428 (0x4)
	BOOL bEnableFullAnimWeightBodies :1 ; // 0x428 (0x4)
	BOOL bPerBoneVolumeEffects :1 ; // 0x428 (0x4)
	BOOL bPerBoneMotionBlur :1 ; // 0x428 (0x4)
	BOOL bSyncActorLocationToRootRigidBody :1 ; // 0x428 (0x4)
	BOOL bUseRawData :1 ; // 0x428 (0x4)
	BOOL bDisableWarningWhenAnimNotFound :1 ; // 0x428 (0x4)
	BOOL bOverrideAttachmentOwnerVisibility :1 ; // 0x428 (0x4)
	BOOL bNeedsToDeleteHitMask :1 ; // 0x42C (0x4)
	BOOL bPauseAnims :1 ; // 0x42C (0x4)
	BOOL bChartDistanceFactor :1 ; // 0x42C (0x4)
	BOOL bEnableLineCheckWithBounds :1 ; // 0x42C (0x4)
	BOOL bCanHighlightSelectedSections :1 ; // 0x42C (0x4)
	BOOL bIgnorePitchRollForRootRotation :1 ; // 0x42C (0x4)
	BOOL bIgnoredByFXCoordinator :1 ; // 0x42C (0x4)
	BOOL bSkipUpdateSkelPose :1 ; // 0x42C (0x4)
	BOOL bForceNonThreadedSkelUpdate :1 ; // 0x42C (0x4)
	BOOL bWaitingForThreadedAnimResults :1 ; // 0x42C (0x4)
	const unsigned long: 0;
	struct FVector LineCheckBoundsScale; // 0x430 (0xC)
	BOOL bEnableClothSimulation :1 ; // 0x43C (0x4)
	BOOL bDisableClothCollision :1 ; // 0x43C (0x4)
	BOOL bClothFrozen :1 ; // 0x43C (0x4)
	BOOL bAutoFreezeClothWhenNotRendered :1 ; // 0x43C (0x4)
	BOOL bResetWhenInactive :1 ; // 0x43C (0x4)
	BOOL bClothAwakeOnStartup :1 ; // 0x43C (0x4)
	BOOL bClothBaseVelClamp :1 ; // 0x43C (0x4)
	BOOL bClothBaseVelInterp :1 ; // 0x43C (0x4)
	BOOL bAttachClothVertsToBaseBody :1 ; // 0x43C (0x4)
	BOOL bIsClothOnStaticObject :1 ; // 0x43C (0x4)
	BOOL bUpdatedFixedClothVerts :1 ; // 0x43C (0x4)
	BOOL bClothPositionalDampening :1 ; // 0x43C (0x4)
	BOOL bClothWindRelativeToOwner :1 ; // 0x43C (0x4)
	BOOL bRecentlyRendered :1 ; // 0x43C (0x4)
	BOOL bCacheAnimSequenceNodes :1 ; // 0x43C (0x4)
	BOOL bIsGestaltAccessoryMesh :1 ; // 0x43C (0x4)
	BOOL bNeedsInstanceWeightUpdate :1 ; // 0x43C (0x4)
	BOOL bAlwaysUseInstanceWeights :1 ; // 0x43C (0x4)
	BOOL bUpdateComposeSkeletonPasses :1 ; // 0x43C (0x4)
	BOOL bValidTemporarySavedAnimSets :1 ; // 0x43C (0x4)
	const unsigned long: 0;
	struct TArray_FBonePair InstanceVertexWeightBones; // 0x440 (0xC)
	struct TArray_FSkelMeshComponentLODInfo LODInfo; // 0x44C (0xC)
	struct FVector FrozenLocalToWorldPos; // 0x458 (0xC)
	struct FRotator FrozenLocalToWorldRot; // 0x464 (0xC)
	struct FVector ClothExternalForce; // 0x470 (0xC)
	struct FVector ClothWind; // 0x47C (0xC)
	struct FVector ClothBaseVelClampRange; // 0x488 (0xC)
	float ClothBlendWeight; // 0x494 (0x4)
	float ClothDynamicBlendWeight; // 0x498 (0x4)
	float ClothBlendMinDistanceFactor; // 0x49C (0x4)
	float ClothBlendMaxDistanceFactor; // 0x4A0 (0x4)
	struct FVector MinPosDampRange; // 0x4A4 (0xC)
	struct FVector MaxPosDampRange; // 0x4B0 (0xC)
	struct FVector MinPosDampScale; // 0x4BC (0xC)
	struct FVector MaxPosDampScale; // 0x4C8 (0xC)
	struct FPointer ClothSim; // 0x4D4 (0x4)
	int SceneIndex; // 0x4D8 (0x4)
	struct TArray_FVector ClothMeshPosData; // 0x4DC (0xC)
	struct TArray_FVector ClothMeshNormalData; // 0x4E8 (0xC)
	struct TArray_int ClothMeshIndexData; // 0x4F4 (0xC)
	int NumClothMeshVerts; // 0x500 (0x4)
	int NumClothMeshIndices; // 0x504 (0x4)
	struct TArray_int ClothMeshParentData; // 0x508 (0xC)
	int NumClothMeshParentIndices; // 0x514 (0x4)
	int LastClothHitVertexId; // 0x518 (0x4)
	struct TArray_FVector ClothMeshWeldedPosData; // 0x51C (0xC)
	struct TArray_FVector ClothMeshWeldedNormalData; // 0x528 (0xC)
	struct TArray_int ClothMeshWeldedIndexData; // 0x534 (0xC)
	int ClothDirtyBufferFlag; // 0x540 (0x4)
	unsigned char ClothRBChannel; // 0x544 (0x1) (Enum = ERBCollisionChannel)
	const unsigned char Unknown2[0x3]; // 0x545 (0x3) > LAST OFFSET
	struct FRBCollisionChannelContainer ClothRBCollideWithChannels; // 0x548 (0x4)
	float ClothForceScale; // 0x54C (0x4)
	float ClothImpulseScale; // 0x550 (0x4)
	float ClothAttachmentTearFactor; // 0x554 (0x4)
	BOOL bClothUseCompartment :1 ; // 0x558 (0x4)
	const unsigned long: 0;
	float MinDistanceForClothReset; // 0x55C (0x4)
	struct FVector LastClothLocation; // 0x560 (0xC)
	unsigned char ApexClothingRBChannel; // 0x56C (0x1) (Enum = ERBCollisionChannel)
	const unsigned char Unknown3[0x3]; // 0x56D (0x3) > LAST OFFSET
	struct FRBCollisionChannelContainer ApexClothingRBCollideWithChannels; // 0x570 (0x4)
	unsigned char ApexClothingCollisionRBChannel; // 0x574 (0x1) (Enum = ERBCollisionChannel)
	const unsigned char Unknown4[0x3]; // 0x575 (0x3) > LAST OFFSET
	BOOL bAutoFreezeApexClothingWhenNotRendered :1 ; // 0x578 (0x4)
	BOOL bLocalSpaceWind :1 ; // 0x578 (0x4)
	const unsigned long: 0;
	struct FVector WindVelocity; // 0x57C (0xC)
	float WindVelocityBlendTime; // 0x588 (0x4)
	BOOL bSkipInitClothing :1 ; // 0x58C (0x4)
	const unsigned long: 0;
	struct FPointer SoftBodySim; // 0x590 (0x4)
	int SoftBodySceneIndex; // 0x594 (0x4)
	BOOL bEnableSoftBodySimulation :1 ; // 0x598 (0x4)
	const unsigned long: 0;
	struct TArray_FVector SoftBodyTetraPosData; // 0x59C (0xC)
	struct TArray_int SoftBodyTetraIndexData; // 0x5A8 (0xC)
	int NumSoftBodyTetraVerts; // 0x5B4 (0x4)
	int NumSoftBodyTetraIndices; // 0x5B8 (0x4)
	float SoftBodyImpulseScale; // 0x5BC (0x4)
	BOOL bSoftBodyFrozen :1 ; // 0x5C0 (0x4)
	BOOL bAutoFreezeSoftBodyWhenNotRendered :1 ; // 0x5C0 (0x4)
	BOOL bSoftBodyAwakeOnStartup :1 ; // 0x5C0 (0x4)
	BOOL bSoftBodyUseCompartment :1 ; // 0x5C0 (0x4)
	const unsigned long: 0;
	unsigned char SoftBodyRBChannel; // 0x5C4 (0x1) (Enum = ERBCollisionChannel)
	const unsigned char Unknown5[0x3]; // 0x5C5 (0x3) > LAST OFFSET
	struct FRBCollisionChannelContainer SoftBodyRBCollideWithChannels; // 0x5C8 (0x4)
	struct FPointer SoftBodyASVPlane; // 0x5CC (0x4)
	struct UMaterial* LimitMaterial; // 0x5D0 (0x4)
	const unsigned char Unknown6[0xC]; // 0x5D4 (0xC) > LAST OFFSET
	struct FBoneAtom RootMotionDelta; // 0x5E0 (0x20)
	struct FVector RootMotionVelocity; // 0x600 (0xC)
	struct FVector RootBoneTranslation; // 0x60C (0xC)
	struct FVector RootMotionAccelScale; // 0x618 (0xC)
	unsigned char RootMotionMode; // 0x624 (0x1) (Enum = ERootMotionMode)
	unsigned char PreviousRMM; // 0x625 (0x1) (Enum = ERootMotionMode)
	unsigned char PendingRMM; // 0x626 (0x1) (Enum = ERootMotionMode)
	unsigned char OldPendingRMM; // 0x627 (0x1) (Enum = ERootMotionMode)
	int bRMMOneFrameDelay; // 0x628 (0x4)
	unsigned char RootMotionRotationMode; // 0x62C (0x1) (Enum = ERootMotionRotationMode)
	unsigned char AnimRotationOnly; // 0x62D (0x1) (Enum = EAnimRotationOnly)
	const unsigned char Unknown7[0x2]; // 0x62E (0x2) > LAST OFFSET
	int bRemoveRootBoneScale; // 0x630 (0x4)
	BOOL bOverrideRootMotionSpace :1 ; // 0x634 (0x4)
	const unsigned long: 0;
	struct FRotator RootMotionSpace; // 0x638 (0xC)
	unsigned char FaceFXBlendMode; // 0x644 (0x1) (Enum = EFaceFXBlendMode)
	const unsigned char Unknown8[0x3]; // 0x645 (0x3) > LAST OFFSET
	struct FPointer FaceFXActorInstance; // 0x648 (0x4)
	struct UAudioComponent* CachedFaceFXAudioComp; // 0x64C (0x4)
	struct TArray_unsigned_char BoneVisibilityStates; // 0x650 (0xC)
	struct UAkEvent* CachedFaceFxAkEvent; // 0x65C (0x4)
	float FaceFXPlayTime; // 0x660 (0x4)
	struct FAkPlayingInfo CachedPlayingInfo; // 0x664 (0x8)
	struct UFaceFXAnimSet* PlayingFXAnimSet; // 0x66C (0x4)
	struct FBoneAtom LocalToWorldBoneAtom; // 0x670 (0x20)
	float ProgressiveDrawingFraction; // 0x690 (0x4)
	unsigned char CustomSortAlternateIndexMode; // 0x694 (0x1)
	unsigned char ViewZeroOffset; // 0x695 (0x1)
	unsigned char ViewOneOffset; // 0x696 (0x1)
	const unsigned char Unknown9[0x1]; // 0x697 (0x1) > LAST OFFSET
	struct UMorphNodeWeight* BlendMorphNode; // 0x698 (0x4)
	float MorphWeightTarget; // 0x69C (0x4)
	float MorphWeightStart; // 0x6A0 (0x4)
	float MorphBlendTime; // 0x6A4 (0x4)
	float MorphBlendCurr; // 0x6A8 (0x4)
};

struct USkeletalMeshComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UMeshComponent_Data UMeshComponent;
	struct USkeletalMeshComponent_Data USkeletalMeshComponent;
};

// 0x3B4 
struct USkeletalMesh_Data {
	// Last Offset: 0x3C
	struct FBoxSphereBounds Bounds; // 0x3C (0x1C)
	struct TArray_UMaterialInterfacePtr Materials; // 0x58 (0xC)
	struct TArray_UApexClothingAssetPtr ClothingAssets; // 0x64 (0xC)
	struct FVector Origin; // 0x70 (0xC)
	struct FRotator RotOrigin; // 0x7C (0xC)
	struct TArray_int RefSkeleton; // 0x88 (0xC)
	int SkeletalDepth; // 0x94 (0x4)
	const unsigned char Unknown1[0x3C]; // 0x98 (0x3C) UNKNOWN PROPERTY
	struct FIndirectArray_Mirror LODModels; // 0xD4 (0xC)
	struct TArray_FBoneAtom RefBasesInvMatrix; // 0xE0 (0xC)
	struct FBoxSphereBounds ReferencePoseBounds; // 0xEC (0x1C)
	struct TArray_FBoneMirrorInfo SkelMirrorTable; // 0x108 (0xC)
	unsigned char SkelMirrorAxis; // 0x114 (0x1) (Enum = EAxis)
	unsigned char SkelMirrorFlipAxis; // 0x115 (0x1) (Enum = EAxis)
	const unsigned char Unknown2[0x2]; // 0x116 (0x2) > LAST OFFSET
	struct TArray_USkeletalMeshSocketPtr Sockets; // 0x118 (0xC)
	struct TArray_FString BoneBreakNames; // 0x124 (0xC)
	struct TArray_unsigned_char BoneBreakOptions; // 0x130 (0xC)
	struct TArray_FSkeletalMeshLODInfo LODInfo; // 0x13C (0xC)
	struct TArray_FName PerPolyCollisionBones; // 0x148 (0xC)
	struct TArray_FName AddToParentPerPolyCollisionBone; // 0x154 (0xC)
	struct TArray_int PerPolyBoneKDOPs; // 0x160 (0xC)
	BOOL bPerPolyUseSoftWeighting :1 ; // 0x16C (0x4)
	BOOL bUseSimpleLineCollision :1 ; // 0x16C (0x4)
	BOOL bUseSimpleBoxCollision :1 ; // 0x16C (0x4)
	BOOL bForceCPUSkinning :1 ; // 0x16C (0x4)
	BOOL bUseFullPrecisionUVs :1 ; // 0x16C (0x4)
	const unsigned long: 0;
	struct UFaceFXAsset* FaceFXAsset; // 0x170 (0x4)
	int LODBiasPC; // 0x174 (0x4)
	int LODBiasPS3; // 0x178 (0x4)
	int LODBiasXbox360; // 0x17C (0x4)
	struct TArray_FPointer ClothMesh; // 0x180 (0xC)
	struct TArray_float ClothMeshScale; // 0x18C (0xC)
	struct TArray_int ClothToGraphicsVertMap; // 0x198 (0xC)
	struct TArray_float ClothMovementScale; // 0x1A4 (0xC)
	unsigned char ClothMovementScaleGenMode; // 0x1B0 (0x1) (Enum = ClothMovementScaleGen)
	const unsigned char Unknown3[0x3]; // 0x1B1 (0x3) > LAST OFFSET
	float ClothToAnimMeshMaxDist; // 0x1B4 (0x4)
	BOOL bLimitClothToAnimMesh :1 ; // 0x1B8 (0x4)
	const unsigned long: 0;
	struct TArray_int ClothWeldingMap; // 0x1BC (0xC)
	int ClothWeldingDomain; // 0x1C8 (0x4)
	struct TArray_int ClothWeldedIndices; // 0x1CC (0xC)
	BOOL bForceNoWelding :1 ; // 0x1D8 (0x4)
	const unsigned long: 0;
	int NumFreeClothVerts; // 0x1DC (0x4)
	struct TArray_int ClothIndexBuffer; // 0x1E0 (0xC)
	struct TArray_FName ClothBones; // 0x1EC (0xC)
	int ClothHierarchyLevels; // 0x1F8 (0x4)
	BOOL bEnableClothBendConstraints :1 ; // 0x1FC (0x4)
	BOOL bEnableClothDamping :1 ; // 0x1FC (0x4)
	BOOL bUseClothCOMDamping :1 ; // 0x1FC (0x4)
	const unsigned long: 0;
	float ClothStretchStiffness; // 0x200 (0x4)
	float ClothBendStiffness; // 0x204 (0x4)
	float ClothDensity; // 0x208 (0x4)
	float ClothThickness; // 0x20C (0x4)
	float ClothDamping; // 0x210 (0x4)
	int ClothIterations; // 0x214 (0x4)
	int ClothHierarchicalIterations; // 0x218 (0x4)
	float ClothFriction; // 0x21C (0x4)
	float ClothRelativeGridSpacing; // 0x220 (0x4)
	float ClothPressure; // 0x224 (0x4)
	float ClothCollisionResponseCoefficient; // 0x228 (0x4)
	float ClothAttachmentResponseCoefficient; // 0x22C (0x4)
	float ClothAttachmentTearFactor; // 0x230 (0x4)
	float ClothSleepLinearVelocity; // 0x234 (0x4)
	float HardStretchLimitFactor; // 0x238 (0x4)
	BOOL bHardStretchLimit :1 ; // 0x23C (0x4)
	BOOL bEnableClothOrthoBendConstraints :1 ; // 0x23C (0x4)
	BOOL bEnableClothSelfCollision :1 ; // 0x23C (0x4)
	BOOL bEnableClothPressure :1 ; // 0x23C (0x4)
	BOOL bEnableClothTwoWayCollision :1 ; // 0x23C (0x4)
	const unsigned long: 0;
	struct TArray_FClothSpecialBoneInfo ClothSpecialBones; // 0x240 (0xC)
	BOOL bEnableClothLineChecks :1 ; // 0x24C (0x4)
	BOOL bClothMetal :1 ; // 0x24C (0x4)
	const unsigned long: 0;
	float ClothMetalImpulseThreshold; // 0x250 (0x4)
	float ClothMetalPenetrationDepth; // 0x254 (0x4)
	float ClothMetalMaxDeformationDistance; // 0x258 (0x4)
	BOOL bEnableClothTearing :1 ; // 0x25C (0x4)
	const unsigned long: 0;
	float ClothTearFactor; // 0x260 (0x4)
	int ClothTearReserve; // 0x264 (0x4)
	BOOL bEnableValidBounds :1 ; // 0x268 (0x4)
	const unsigned long: 0;
	struct FVector ValidBoundsMin; // 0x26C (0xC)
	struct FVector ValidBoundsMax; // 0x278 (0xC)
	struct FMap_Mirror ClothTornTriMap; // 0x284 (0x3C)
	struct TArray_int SoftBodySurfaceToGraphicsVertMap; // 0x2C0 (0xC)
	struct TArray_int SoftBodySurfaceIndices; // 0x2CC (0xC)
	struct TArray_FVector SoftBodyTetraVertsUnscaled; // 0x2D8 (0xC)
	struct TArray_int SoftBodyTetraIndices; // 0x2E4 (0xC)
	struct TArray_FSoftBodyTetraLink SoftBodyTetraLinks; // 0x2F0 (0xC)
	struct TArray_FPointer CachedSoftBodyMeshes; // 0x2FC (0xC)
	struct TArray_float CachedSoftBodyMeshScales; // 0x308 (0xC)
	struct TArray_FName SoftBodyBones; // 0x314 (0xC)
	struct TArray_FSoftBodySpecialBoneInfo SoftBodySpecialBones; // 0x320 (0xC)
	float SoftBodyVolumeStiffness; // 0x32C (0x4)
	float SoftBodyStretchingStiffness; // 0x330 (0x4)
	float SoftBodyDensity; // 0x334 (0x4)
	float SoftBodyParticleRadius; // 0x338 (0x4)
	float SoftBodyDamping; // 0x33C (0x4)
	int SoftBodySolverIterations; // 0x340 (0x4)
	float SoftBodyFriction; // 0x344 (0x4)
	float SoftBodyRelativeGridSpacing; // 0x348 (0x4)
	float SoftBodySleepLinearVelocity; // 0x34C (0x4)
	BOOL bEnableSoftBodySelfCollision :1 ; // 0x350 (0x4)
	const unsigned long: 0;
	float SoftBodyAttachmentResponse; // 0x354 (0x4)
	float SoftBodyCollisionResponse; // 0x358 (0x4)
	float SoftBodyDetailLevel; // 0x35C (0x4)
	int SoftBodySubdivisionLevel; // 0x360 (0x4)
	BOOL bSoftBodyIsoSurface :1 ; // 0x364 (0x4)
	BOOL bEnableSoftBodyDamping :1 ; // 0x364 (0x4)
	BOOL bUseSoftBodyCOMDamping :1 ; // 0x364 (0x4)
	const unsigned long: 0;
	float SoftBodyAttachmentThreshold; // 0x368 (0x4)
	BOOL bEnableSoftBodyTwoWayCollision :1 ; // 0x36C (0x4)
	const unsigned long: 0;
	float SoftBodyAttachmentTearFactor; // 0x370 (0x4)
	BOOL bEnableSoftBodyLineChecks :1 ; // 0x374 (0x4)
	BOOL bHasVertexColors :1 ; // 0x374 (0x4)
	const unsigned long: 0;
	struct TArray_BOOL GraphicsIndexIsCloth; // 0x378 (0xC)
	struct TArray_float CachedStreamingTextureFactors; // 0x384 (0xC)
	float StreamingDistanceMultiplier; // 0x390 (0x4)
	int ReleaseResourcesFence; // 0x394 (0x4)
	struct FQWord SkelMeshRUID; // 0x398 (0x8)
	struct TArray_FBoneAtom CachedRefBoneAtoms; // 0x3A0 (0xC)
	struct FName CachedAnimSetLinkupName; // 0x3AC (0x8)
};

struct USkeletalMesh {
	struct UObject_Data UObject;
	struct USkeletalMesh_Data USkeletalMesh;
};

// 0x70 
struct USkeletalMeshSocket_Data {
	// Last Offset: 0x3C
	struct FName SocketName; // 0x3C (0x8)
	struct FName BoneName; // 0x44 (0x8)
	struct FVector RelativeLocation; // 0x4C (0xC)
	struct FRotator RelativeRotation; // 0x58 (0xC)
	struct FVector RelativeScale; // 0x64 (0xC)
};

struct USkeletalMeshSocket {
	struct UObject_Data UObject;
	struct USkeletalMeshSocket_Data USkeletalMeshSocket;
};

// 0x1D8 
struct ASplineActor_Data {
	// Last Offset: 0x188
	struct TArray_FSplineConnection Connections; // 0x188 (0xC)
	struct FVector SplineActorTangent; // 0x194 (0xC)
	struct FColor SplineColor; // 0x1A0 (0x4)
	BOOL bDisableDestination :1 ; // 0x1A4 (0x4)
	BOOL bAlreadyVisited :1 ; // 0x1A4 (0x4)
	const unsigned long: 0;
	struct TArray_ASplineActorPtr LinksFrom; // 0x1A8 (0xC)
	struct ASplineActor* nextOrdered; // 0x1B4 (0x4)
	struct ASplineActor* prevOrdered; // 0x1B8 (0x4)
	struct ASplineActor* previousPath; // 0x1BC (0x4)
	int bestPathWeight; // 0x1C0 (0x4)
	int visitedWeight; // 0x1C4 (0x4)
	struct FInterpCurveFloat SplineVelocityOverTime; // 0x1C8 (0x10)
};

struct ASplineActor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ASplineActor_Data ASplineActor;
};

// 0x220 
struct ASplineLoftActor_Data {
	// Last Offset: 0x1D8
	float ScaleX; // 0x1D8 (0x4)
	float ScaleY; // 0x1DC (0x4)
	struct TArray_USplineMeshComponentPtr SplineMeshComps; // 0x1E0 (0xC)
	struct UStaticMesh* DeformMesh; // 0x1EC (0x4)
	struct TArray_UMaterialInterfacePtr DeformMeshMaterials; // 0x1F0 (0xC)
	float Roll; // 0x1FC (0x4)
	struct FVector WorldXDir; // 0x200 (0xC)
	struct FVector2D Offset; // 0x20C (0x8)
	BOOL bSmoothInterpRollAndScale :1 ; // 0x214 (0x4)
	BOOL bAcceptsLights :1 ; // 0x214 (0x4)
	const unsigned long: 0;
	struct UDynamicLightEnvironmentComponent* MeshLightEnvironment; // 0x218 (0x4)
	float MeshMaxDrawDistance; // 0x21C (0x4)
};

struct ASplineLoftActor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ASplineActor_Data ASplineActor;
	struct ASplineLoftActor_Data ASplineLoftActor;
};

// 0x220 
struct ASplineLoftActorMovable_Data {
	// Last Offset: 0x220
};

struct ASplineLoftActorMovable {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ASplineActor_Data ASplineActor;
	struct ASplineLoftActor_Data ASplineLoftActor;
	struct ASplineLoftActorMovable_Data ASplineLoftActorMovable;
};

// 0x244  (Alignment = 16)
struct USplineComponent_Data {
	// Last Offset: 0x210
	struct FInterpCurveVector SplineInfo; // 0x210 (0x10)
	float SplineCurviness; // 0x220 (0x4)
	struct FColor SplineColor; // 0x224 (0x4)
	float SplineDrawRes; // 0x228 (0x4)
	float SplineArrowSize; // 0x22C (0x4)
	BOOL bSplineDisabled :1 ; // 0x230 (0x4)
	const unsigned long: 0;
	struct FInterpCurveFloat SplineReparamTable; // 0x234 (0x10)
};

struct USplineComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct USplineComponent_Data USplineComponent;
};

// 0x188 
struct AReplicationInfo_Data {
	// Last Offset: 0x188
};

struct AReplicationInfo {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct AReplicationInfo_Data AReplicationInfo;
};

// 0x1EC 
struct AGameReplicationInfo_Data {
	// Last Offset: 0x188
	struct FPointer VfTable_IIResourcePoolProvider; // 0x188 (0x4)
	struct UClass* GameClass; // 0x18C (0x4)
	BOOL bStopCountDown :1 ; // 0x190 (0x4)
	BOOL bMatchHasBegun :1 ; // 0x190 (0x4)
	BOOL bMatchIsOver :1 ; // 0x190 (0x4)
	BOOL bAllInCinematicMode :1 ; // 0x190 (0x4)
	BOOL bIgnoreMoveInput :1 ; // 0x190 (0x4)
	BOOL bIgnoreLookInput :1 ; // 0x190 (0x4)
	BOOL bIgnoreButtonInput :1 ; // 0x190 (0x4)
	const unsigned long: 0;
	int RemainingTime; // 0x194 (0x4)
	int ElapsedTime; // 0x198 (0x4)
	int RemainingMinute; // 0x19C (0x4)
	int GoalScore; // 0x1A0 (0x4)
	int TimeLimit; // 0x1A4 (0x4)
	struct TArray_ATeamInfoPtr Teams; // 0x1A8 (0xC)
	struct FString ServerName; // 0x1B4 (0xC)
	struct AActor* Winner; // 0x1C0 (0x4)
	struct TArray_APlayerReplicationInfoPtr PRIArray; // 0x1C4 (0xC)
	struct TArray_APlayerReplicationInfoPtr InactivePRIArray; // 0x1D0 (0xC)
	struct AResourcePoolManager* ResourcePoolManager; // 0x1DC (0x4)
	struct FMusicStateInfo MusicInfo; // 0x1E0 (0xC)
};

struct AGameReplicationInfo {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct AReplicationInfo_Data AReplicationInfo;
	struct AGameReplicationInfo_Data AGameReplicationInfo;
};

// 0x254 
struct APlayerReplicationInfo_Data {
	// Last Offset: 0x188
	float Score; // 0x188 (0x4)
	int Deaths; // 0x18C (0x4)
	unsigned char Ping; // 0x190 (0x1)
	unsigned char TTSSpeaker; // 0x191 (0x1) (Enum = ETTSSpeaker)
	const unsigned char Unknown1[0x2]; // 0x192 (0x2) > LAST OFFSET
	int NumLives; // 0x194 (0x4)
	struct FString PlayerName; // 0x198 (0xC)
	struct FString PlayerNameHTML; // 0x1A4 (0xC)
	struct FString OldName; // 0x1B0 (0xC)
	int PlayerID; // 0x1BC (0x4)
	struct ATeamInfo* Team; // 0x1C0 (0x4)
	BOOL bAdmin :1 ; // 0x1C4 (0x4)
	BOOL bIsSpectator :1 ; // 0x1C4 (0x4)
	BOOL bOnlySpectator :1 ; // 0x1C4 (0x4)
	BOOL bWaitingPlayer :1 ; // 0x1C4 (0x4)
	BOOL bReadyToPlay :1 ; // 0x1C4 (0x4)
	BOOL bOutOfLives :1 ; // 0x1C4 (0x4)
	BOOL bBot :1 ; // 0x1C4 (0x4)
	BOOL bHasBeenWelcomed :1 ; // 0x1C4 (0x4)
	BOOL bIsInactive :1 ; // 0x1C4 (0x4)
	BOOL bFromPreviousLevel :1 ; // 0x1C4 (0x4)
	const unsigned long: 0;
	int StartTime; // 0x1C8 (0x4)
	struct FString StringSpectating; // 0x1CC (0xC)
	struct FString StringUnknown; // 0x1D8 (0xC)
	int Kills; // 0x1E4 (0x4)
	struct UClass* GameMessageClass; // 0x1E8 (0x4)
	float ExactPing; // 0x1EC (0x4)
	struct FString SavedNetworkAddress; // 0x1F0 (0xC)
	struct FUniqueNetId UniqueId; // 0x1FC (0x18)
	struct FName SessionName; // 0x214 (0x8)
	struct FAutomatedTestingDatum AutomatedTestingData; // 0x21C (0x8)
	int StatConnectionCounts; // 0x224 (0x4)
	int StatPingTotals; // 0x228 (0x4)
	int StatPingMin; // 0x22C (0x4)
	int StatPingMax; // 0x230 (0x4)
	int StatPKLTotal; // 0x234 (0x4)
	int StatPKLMin; // 0x238 (0x4)
	int StatPKLMax; // 0x23C (0x4)
	int StatMaxInBPS; // 0x240 (0x4)
	int StatAvgInBPS; // 0x244 (0x4)
	int StatMaxOutBPS; // 0x248 (0x4)
	int StatAvgOutBPS; // 0x24C (0x4)
	struct UTexture2D* Avatar; // 0x250 (0x4)
};

struct APlayerReplicationInfo {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct AReplicationInfo_Data AReplicationInfo;
	struct APlayerReplicationInfo_Data APlayerReplicationInfo;
};

// 0x1A4 
struct ATeamInfo_Data {
	// Last Offset: 0x188
	struct FString TeamName; // 0x188 (0xC)
	int Size; // 0x194 (0x4)
	float Score; // 0x198 (0x4)
	int TeamIndex; // 0x19C (0x4)
	struct FColor TeamColor; // 0x1A0 (0x4)
};

struct ATeamInfo {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct AReplicationInfo_Data AReplicationInfo;
	struct ATeamInfo_Data ATeamInfo;
};

// 0x3FC 
struct ACamera_Data {
	// Last Offset: 0x188
	struct APlayerController* PCOwner; // 0x188 (0x4)
	struct FName CameraStyle; // 0x18C (0x8)
	float DefaultFOV; // 0x194 (0x4)
	BOOL bLockedFOV :1 ; // 0x198 (0x4)
	BOOL bConstrainAspectRatio :1 ; // 0x198 (0x4)
	BOOL bEnableFading :1 ; // 0x198 (0x4)
	BOOL bForceDisableTemporalAA :1 ; // 0x198 (0x4)
	BOOL bEnableColorScaling :1 ; // 0x198 (0x4)
	BOOL bEnableColorScaleInterp :1 ; // 0x198 (0x4)
	BOOL bUseClientSideCameraUpdates :1 ; // 0x198 (0x4)
	BOOL bDebugClientSideCamera :1 ; // 0x198 (0x4)
	BOOL bShouldSendClientSideCameraUpdate :1 ; // 0x198 (0x4)
	const unsigned long: 0;
	float LockedFOV; // 0x19C (0x4)
	float ConstrainedAspectRatio; // 0x1A0 (0x4)
	float DefaultAspectRatio; // 0x1A4 (0x4)
	float OffAxisYawAngle; // 0x1A8 (0x4)
	float OffAxisPitchAngle; // 0x1AC (0x4)
	struct FColor FadeColor; // 0x1B0 (0x4)
	float FadeAmount; // 0x1B4 (0x4)
	float CamOverridePostProcessAlpha; // 0x1B8 (0x4)
	struct FPostProcessSettings CamPostProcessSettings; // 0x1BC (0xE8)
	struct FRenderingPerformanceOverrides RenderingOverrides; // 0x2A4 (0x4)
	struct FVector ColorScale; // 0x2A8 (0xC)
	struct FVector DesiredColorScale; // 0x2B4 (0xC)
	struct FVector OriginalColorScale; // 0x2C0 (0xC)
	float ColorScaleInterpDuration; // 0x2CC (0x4)
	float ColorScaleInterpStartTime; // 0x2D0 (0x4)
	struct FTCameraCache CameraCache; // 0x2D4 (0x20)
	struct FTCameraCache LastFrameCameraCache; // 0x2F4 (0x20)
	struct FTViewTarget ViewTarget; // 0x314 (0x2C)
	struct FTViewTarget PendingViewTarget; // 0x340 (0x2C)
	float BlendTimeToGo; // 0x36C (0x4)
	struct FViewTargetTransitionParams BlendParams; // 0x370 (0x10)
	struct TArray_UCameraModifierPtr ModifierList; // 0x380 (0xC)
	float FreeCamDistance; // 0x38C (0x4)
	struct FVector FreeCamOffset; // 0x390 (0xC)
	struct FVector2D FadeAlpha; // 0x39C (0x8)
	float FadeTime; // 0x3A4 (0x4)
	float FadeTimeRemaining; // 0x3A8 (0x4)
	struct TArray_AEmitterCameraLensEffectBasePtr CameraLensEffects; // 0x3AC (0xC)
	struct UCameraModifier_CameraShake* CameraShakeCamMod; // 0x3B8 (0x4)
	struct UClass* CameraShakeCamModClass; // 0x3BC (0x4)
	struct UCameraAnimInst* AnimInstPool[8]; // 0x3C0 (0x20)
	struct TArray_UCameraAnimInstPtr ActiveAnims; // 0x3E0 (0xC)
	struct TArray_UCameraAnimInstPtr FreeAnims; // 0x3EC (0xC)
	struct ADynamicCameraActor* AnimCameraActor; // 0x3F8 (0x4)
};

struct ACamera {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ACamera_Data ACamera;
};

// 0x288 
struct ACameraActor_Data {
	// Last Offset: 0x188
	BOOL bConstrainAspectRatio :1 ; // 0x188 (0x4)
	BOOL bCamOverridePostProcess :1 ; // 0x188 (0x4)
	const unsigned long: 0;
	float AspectRatio; // 0x18C (0x4)
	float FOVAngle; // 0x190 (0x4)
	float CamOverridePostProcessAlpha; // 0x194 (0x4)
	struct FPostProcessSettings CamOverridePostProcess; // 0x198 (0xE8)
	struct UDrawFrustumComponent* DrawFrustum; // 0x280 (0x4)
	struct UStaticMeshComponent* MeshComp; // 0x284 (0x4)
};

struct ACameraActor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ACameraActor_Data ACameraActor;
};

// 0x288 
struct ADynamicCameraActor_Data {
	// Last Offset: 0x288
};

struct ADynamicCameraActor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ACameraActor_Data ACameraActor;
	struct ADynamicCameraActor_Data ADynamicCameraActor;
};

// 0x150 
struct UCameraAnim_Data {
	// Last Offset: 0x3C
	struct UInterpGroup* CameraInterpGroup; // 0x3C (0x4)
	float AnimLength; // 0x40 (0x4)
	struct FBox BoundingBox; // 0x44 (0x1C)
	struct FPostProcessSettings BasePPSettings; // 0x60 (0xE8)
	float BasePPSettingsAlpha; // 0x148 (0x4)
	float BaseFOV; // 0x14C (0x4)
};

struct UCameraAnim {
	struct UObject_Data UObject;
	struct UCameraAnim_Data UCameraAnim;
};

// 0x1B8  (Alignment = 16)
struct UCameraAnimInst_Data {
	// Last Offset: 0x3C
	struct UCameraAnim* CamAnim; // 0x3C (0x4)
	struct UInterpGroupInst* InterpGroupInst; // 0x40 (0x4)
	float CurTime; // 0x44 (0x4)
	BOOL bLooping :1 ; // 0x48 (0x4)
	BOOL bFinished :1 ; // 0x48 (0x4)
	BOOL bAutoReleaseWhenFinished :1 ; // 0x48 (0x4)
	BOOL bBlendingIn :1 ; // 0x48 (0x4)
	BOOL bBlendingOut :1 ; // 0x48 (0x4)
	const unsigned long: 0;
	float BlendInTime; // 0x4C (0x4)
	float BlendOutTime; // 0x50 (0x4)
	float CurBlendInTime; // 0x54 (0x4)
	float CurBlendOutTime; // 0x58 (0x4)
	float PlayRate; // 0x5C (0x4)
	float BasePlayScale; // 0x60 (0x4)
	float TransientScaleModifier; // 0x64 (0x4)
	float CurrentBlendWeight; // 0x68 (0x4)
	float RemainingTime; // 0x6C (0x4)
	struct UInterpTrackMove* MoveTrack; // 0x70 (0x4)
	struct UInterpTrackInstMove* MoveInst; // 0x74 (0x4)
	struct UAnimNodeSequence* SourceAnimNode; // 0x78 (0x4)
	unsigned char PlaySpace; // 0x7C (0x1) (Enum = ECameraAnimPlaySpace)
	unsigned char MirrorAxes; // 0x7D (0x1)
	const unsigned char Unknown1[0x2]; // 0x7E (0x2) > LAST OFFSET
	struct FMatrix UserPlaySpaceMatrix; // 0x80 (0x40)
	struct FPostProcessSettings LastPPSettings; // 0xC0 (0xE8)
	float LastPPSettingsAlpha; // 0x1A8 (0x4)
	struct FVector LastCameraLoc; // 0x1AC (0xC)
};

struct UCameraAnimInst {
	struct UObject_Data UObject;
	struct UCameraAnimInst_Data UCameraAnimInst;
};

// 0x58 
struct UCameraModifier_Data {
	// Last Offset: 0x3C
	BOOL bDisabled :1 ; // 0x3C (0x4)
	BOOL bPendingDisable :1 ; // 0x3C (0x4)
	BOOL bExclusive :1 ; // 0x3C (0x4)
	BOOL bDebug :1 ; // 0x3C (0x4)
	const unsigned long: 0;
	struct ACamera* CameraOwner; // 0x40 (0x4)
	unsigned char Priority; // 0x44 (0x1)
	const unsigned char Unknown1[0x3]; // 0x45 (0x3) > LAST OFFSET
	float AlphaInTime; // 0x48 (0x4)
	float AlphaOutTime; // 0x4C (0x4)
	float Alpha; // 0x50 (0x4)
	float TargetAlpha; // 0x54 (0x4)
};

struct UCameraModifier {
	struct UObject_Data UObject;
	struct UCameraModifier_Data UCameraModifier;
};

// 0x68 
struct UCameraModifier_CameraShake_Data {
	// Last Offset: 0x58
	struct TArray_FCameraShakeInstance ActiveShakes; // 0x58 (0xC)
	float SplitScreenShakeScale; // 0x64 (0x4)
};

struct UCameraModifier_CameraShake {
	struct UObject_Data UObject;
	struct UCameraModifier_Data UCameraModifier;
	struct UCameraModifier_CameraShake_Data UCameraModifier_CameraShake;
};

// 0xB8 
struct UCameraShake_Data {
	// Last Offset: 0x3C
	BOOL bSingleInstance :1 ; // 0x3C (0x4)
	BOOL bRandomAnimSegment :1 ; // 0x3C (0x4)
	const unsigned long: 0;
	float OscillationDuration; // 0x40 (0x4)
	float OscillationBlendInTime; // 0x44 (0x4)
	float OscillationBlendOutTime; // 0x48 (0x4)
	struct FROscillator RotOscillation; // 0x4C (0x24)
	struct FVOscillator LocOscillation; // 0x70 (0x24)
	struct FFOscillator FOVOscillation; // 0x94 (0xC)
	struct UCameraAnim* Anim; // 0xA0 (0x4)
	float AnimPlayRate; // 0xA4 (0x4)
	float AnimScale; // 0xA8 (0x4)
	float AnimBlendInTime; // 0xAC (0x4)
	float AnimBlendOutTime; // 0xB0 (0x4)
	float RandomAnimSegmentDuration; // 0xB4 (0x4)
};

struct UCameraShake {
	struct UObject_Data UObject;
	struct UCameraShake_Data UCameraShake;
};

// 0x488 
struct AResourcePoolManager_Data {
	// Last Offset: 0x188
	struct UResourcePool* ResourcePools[16]; // 0x188 (0x40)
	const unsigned char Unknown1[0x3C]; // 0x1C8 (0x3C) UNKNOWN PROPERTY
	unsigned char NextPoolGUID; // 0x204 (0x1)
	const unsigned char Unknown2[0x3]; // 0x205 (0x3) > LAST OFFSET
	struct FResourcePoolIdentityState ReplicatedPoolIdentities[16]; // 0x208 (0x80)
	float ReplicatedCurrentValues[16]; // 0x288 (0x40)
	float ReplicatedMinValues[16]; // 0x2C8 (0x40)
	float ReplicatedMaxValues[16]; // 0x308 (0x40)
	struct FRarelyChangedPoolState ReplicatedRarelyChangedState[16]; // 0x348 (0x140)
};

struct AResourcePoolManager {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct AReplicationInfo_Data AReplicationInfo;
	struct AResourcePoolManager_Data AResourcePoolManager;
};

// 0x19C 
struct AWorldSoundManager_Data {
	// Last Offset: 0x188
	struct TArray_FWorldEventSource EventSources; // 0x188 (0xC)
	struct UAkComponent* UIAkComponent; // 0x194 (0x4)
	BOOL bHasTicked :1 ; // 0x198 (0x4)
	const unsigned long: 0;
};

struct AWorldSoundManager {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct AWorldSoundManager_Data AWorldSoundManager;
};

// 0x6C 
struct UComponentLifetimeManagerComponent_Data {
	// Last Offset: 0x5C
	struct TArray_UActorComponentPtr ManagedComponents; // 0x5C (0xC)
	float ManagedComponentsLifeSpan; // 0x68 (0x4)
};

struct UComponentLifetimeManagerComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UComponentLifetimeManagerComponent_Data UComponentLifetimeManagerComponent;
};

// 0x3C 
struct UAttributeContextResolver_Data {
	// Last Offset: 0x3C
};

struct UAttributeContextResolver {
	struct UObject_Data UObject;
	struct UAttributeContextResolver_Data UAttributeContextResolver;
};

// 0x3C 
struct UBalancedActorAttributeContextResolver_Data {
	// Last Offset: 0x3C
};

struct UBalancedActorAttributeContextResolver {
	struct UObject_Data UObject;
	struct UAttributeContextResolver_Data UAttributeContextResolver;
	struct UBalancedActorAttributeContextResolver_Data UBalancedActorAttributeContextResolver;
};

// 0x3C 
struct UCharacterClassAttributeContextResolver_Data {
	// Last Offset: 0x3C
};

struct UCharacterClassAttributeContextResolver {
	struct UObject_Data UObject;
	struct UAttributeContextResolver_Data UAttributeContextResolver;
	struct UCharacterClassAttributeContextResolver_Data UCharacterClassAttributeContextResolver;
};

// 0x3C 
struct UControllerAttributeContextResolver_Data {
	// Last Offset: 0x3C
};

struct UControllerAttributeContextResolver {
	struct UObject_Data UObject;
	struct UAttributeContextResolver_Data UAttributeContextResolver;
	struct UControllerAttributeContextResolver_Data UControllerAttributeContextResolver;
};

// 0x3C 
struct UGameInfoAttributeContextResolver_Data {
	// Last Offset: 0x3C
};

struct UGameInfoAttributeContextResolver {
	struct UObject_Data UObject;
	struct UAttributeContextResolver_Data UAttributeContextResolver;
	struct UGameInfoAttributeContextResolver_Data UGameInfoAttributeContextResolver;
};

// 0x3C 
struct UOffHandWeaponAttributeContextResolver_Data {
	// Last Offset: 0x3C
};

struct UOffHandWeaponAttributeContextResolver {
	struct UObject_Data UObject;
	struct UAttributeContextResolver_Data UAttributeContextResolver;
	struct UOffHandWeaponAttributeContextResolver_Data UOffHandWeaponAttributeContextResolver;
};

// 0x3C 
struct UPawnAttributeContextResolver_Data {
	// Last Offset: 0x3C
};

struct UPawnAttributeContextResolver {
	struct UObject_Data UObject;
	struct UAttributeContextResolver_Data UAttributeContextResolver;
	struct UPawnAttributeContextResolver_Data UPawnAttributeContextResolver;
};

// 0x40 
struct UResourcePoolAttributeContextResolver_Data {
	// Last Offset: 0x3C
	struct UResourceDefinition* Resource; // 0x3C (0x4)
};

struct UResourcePoolAttributeContextResolver {
	struct UObject_Data UObject;
	struct UAttributeContextResolver_Data UAttributeContextResolver;
	struct UResourcePoolAttributeContextResolver_Data UResourcePoolAttributeContextResolver;
};

// 0x3C 
struct UWeaponAttributeContextResolver_Data {
	// Last Offset: 0x3C
};

struct UWeaponAttributeContextResolver {
	struct UObject_Data UObject;
	struct UAttributeContextResolver_Data UAttributeContextResolver;
	struct UWeaponAttributeContextResolver_Data UWeaponAttributeContextResolver;
};

// 0x44 
struct UWeaponResourcePoolAttributeContextResolver_Data {
	// Last Offset: 0x3C
	struct UResourceDefinition* PrimaryHandResource; // 0x3C (0x4)
	struct UResourceDefinition* OffHandResource; // 0x40 (0x4)
};

struct UWeaponResourcePoolAttributeContextResolver {
	struct UObject_Data UObject;
	struct UAttributeContextResolver_Data UAttributeContextResolver;
	struct UWeaponResourcePoolAttributeContextResolver_Data UWeaponResourcePoolAttributeContextResolver;
};

// 0x3C 
struct UAttributeEffect_Data {
	// Last Offset: 0x3C
};

struct UAttributeEffect {
	struct UObject_Data UObject;
	struct UAttributeEffect_Data UAttributeEffect;
};

// 0x3C 
struct UAttributeExpression_Data {
	// Last Offset: 0x3C
};

struct UAttributeExpression {
	struct UObject_Data UObject;
	struct UAttributeExpression_Data UAttributeExpression;
};

// 0x3C 
struct UAttributeMultiContextResolver_Data {
	// Last Offset: 0x3C
};

struct UAttributeMultiContextResolver {
	struct UObject_Data UObject;
	struct UAttributeMultiContextResolver_Data UAttributeMultiContextResolver;
};

// 0x3C 
struct UWeaponAttributeMultiContextResolver_Data {
	// Last Offset: 0x3C
};

struct UWeaponAttributeMultiContextResolver {
	struct UObject_Data UObject;
	struct UAttributeMultiContextResolver_Data UAttributeMultiContextResolver;
	struct UWeaponAttributeMultiContextResolver_Data UWeaponAttributeMultiContextResolver;
};

// 0x3C 
struct UAttributeValueResolver_Data {
	// Last Offset: 0x3C
};

struct UAttributeValueResolver {
	struct UObject_Data UObject;
	struct UAttributeValueResolver_Data UAttributeValueResolver;
};

// 0x48 
struct UObjectPropertyAttributeValueResolver_Data {
	// Last Offset: 0x3C
	struct FName PropertyName; // 0x3C (0x8)
	struct UProperty* CachedProperty; // 0x44 (0x4)
};

struct UObjectPropertyAttributeValueResolver {
	struct UObject_Data UObject;
	struct UAttributeValueResolver_Data UAttributeValueResolver;
	struct UObjectPropertyAttributeValueResolver_Data UObjectPropertyAttributeValueResolver;
};

// 0x48 
struct UReadOnlyObjectPropertyAttributeValueResolver_Data {
	// Last Offset: 0x48
};

struct UReadOnlyObjectPropertyAttributeValueResolver {
	struct UObject_Data UObject;
	struct UAttributeValueResolver_Data UAttributeValueResolver;
	struct UObjectPropertyAttributeValueResolver_Data UObjectPropertyAttributeValueResolver;
	struct UReadOnlyObjectPropertyAttributeValueResolver_Data UReadOnlyObjectPropertyAttributeValueResolver;
};

// 0x4C 
struct UBehaviorBase_Data {
	// Last Offset: 0x3C
	struct FBehaviorContextData Context; // 0x3C (0x10)
};

struct UBehaviorBase {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
};

// 0x64 
struct UBehavior_Kill_Data {
	// Last Offset: 0x4C
	unsigned char DeathType; // 0x4C (0x1) (Enum = EScriptedKillType)
	const unsigned char Unknown1[0x3]; // 0x4D (0x3) > LAST OFFSET
	struct UDamageTypeDefinition* DamageType; // 0x50 (0x4)
	struct FBehaviorContextData TargetContext; // 0x54 (0x10)
};

struct UBehavior_Kill {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_Kill_Data UBehavior_Kill;
};

// 0x54 
struct UBehavior_PlaySound_Data {
	// Last Offset: 0x4C
	struct UAkEvent* Sound; // 0x4C (0x4)
	BOOL bReplicateSound :1 ; // 0x50 (0x4)
	const unsigned long: 0;
};

struct UBehavior_PlaySound {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_PlaySound_Data UBehavior_PlaySound;
};

// 0x58 
struct UBehavior_RemoteEvent_Data {
	// Last Offset: 0x4C
	struct FName EventName; // 0x4C (0x8)
	BOOL bDebug :1 ; // 0x54 (0x4)
	const unsigned long: 0;
};

struct UBehavior_RemoteEvent {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_RemoteEvent_Data UBehavior_RemoteEvent;
};

// 0x3C 
struct UExpressionEvaluator_Data {
	// Last Offset: 0x3C
};

struct UExpressionEvaluator {
	struct UObject_Data UObject;
	struct UExpressionEvaluator_Data UExpressionEvaluator;
};

// 0x40 
struct UExpressionTree_Data {
	// Last Offset: 0x3C
	struct UExpressionEvaluator* RootChild; // 0x3C (0x4)
};

struct UExpressionTree {
	struct UObject_Data UObject;
	struct UExpressionEvaluator_Data UExpressionEvaluator;
	struct UExpressionTree_Data UExpressionTree;
};

// 0x5C 
struct UAttributeDefinitionBase_Data {
	// Last Offset: 0x3C
	BOOL bIsSimpleAttribute :1 ; // 0x3C (0x4)
	const unsigned long: 0;
	unsigned char AttributeDataType; // 0x40 (0x1) (Enum = EAttributeDataType)
	const unsigned char Unknown1[0x3]; // 0x41 (0x3) > LAST OFFSET
	struct TArray_UAttributeContextResolverPtr ContextResolverChain; // 0x44 (0xC)
	struct TArray_UAttributeValueResolverPtr ValueResolverChain; // 0x50 (0xC)
};

struct UAttributeDefinitionBase {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UAttributeDefinitionBase_Data UAttributeDefinitionBase;
};

// 0x5C 
struct UAttributeDefinition_Data {
	// Last Offset: 0x5C
};

struct UAttributeDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UAttributeDefinitionBase_Data UAttributeDefinitionBase;
	struct UAttributeDefinition_Data UAttributeDefinition;
};

// 0x64 
struct UNestedAttributeDefinition_Data {
	// Last Offset: 0x5C
	struct UAttributeDefinition* OuterContextAttributeDefinition; // 0x5C (0x4)
	struct UAttributeDefinition* InnerContextAttributeDefinition; // 0x60 (0x4)
};

struct UNestedAttributeDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UAttributeDefinitionBase_Data UAttributeDefinitionBase;
	struct UAttributeDefinition_Data UAttributeDefinition;
	struct UNestedAttributeDefinition_Data UNestedAttributeDefinition;
};

// 0x60 
struct UAttributeDefinitionMultiContext_Data {
	// Last Offset: 0x5C
	struct UAttributeMultiContextResolver* MultiContextResolver; // 0x5C (0x4)
};

struct UAttributeDefinitionMultiContext {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UAttributeDefinitionBase_Data UAttributeDefinitionBase;
	struct UAttributeDefinitionMultiContext_Data UAttributeDefinitionMultiContext;
};

// 0xF0 
struct UAttributeInitializationDefinition_Data {
	// Last Offset: 0x3C
	unsigned char BaseValueMode; // 0x3C (0x1) (Enum = EBaseValueMode)
	unsigned char RoundingMode; // 0x3D (0x1) (Enum = EAttributeInitializationRounding)
	const unsigned char Unknown1[0x2]; // 0x3E (0x2) > LAST OFFSET
	struct FBalanceFormula ValueFormula; // 0x40 (0x44)
	struct FConditionalInitializationExpressions ConditionalInitialization; // 0x84 (0x20)
	struct FVariance RandomVariance; // 0xA4 (0x24)
	struct FRange RangeRestriction; // 0xC8 (0x28)
};

struct UAttributeInitializationDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UAttributeInitializationDefinition_Data UAttributeInitializationDefinition;
};

// 0x3C 
struct UBaseBalanceDefinition_Data {
	// Last Offset: 0x3C
};

struct UBaseBalanceDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UBaseBalanceDefinition_Data UBaseBalanceDefinition;
};

// 0x158 
struct UCharacterClassDefinition_Data {
	// Last Offset: 0x3C
	float GroundSpeed; // 0x3C (0x4)
	float AirSpeed; // 0x40 (0x4)
	float WalkingPct; // 0x44 (0x4)
	float SprintingPct; // 0x48 (0x4)
	float JumpZ; // 0x4C (0x4)
	float CrouchedPct; // 0x50 (0x4)
	struct FAttributeInitializationData BaseEncumbranceResistance; // 0x54 (0x10)
	float MaxFallSpeed; // 0x64 (0x4)
	struct UResourcePoolDefinition* HealthPoolDefinition; // 0x68 (0x4)
	struct UResourcePoolDefinition* ShieldPoolDefinition; // 0x6C (0x4)
	struct UResourcePoolDefinition* AccuracyPoolDefinition; // 0x70 (0x4)
	struct UResourcePoolDefinition* OffHandAccuracyPoolDefinition; // 0x74 (0x4)
	struct TArray_UResourcePoolDefinitionPtr ResourcePools; // 0x78 (0xC)
	BOOL bDealsLocationalDamage :1 ; // 0x84 (0x4)
	BOOL CanHarmSelf :1 ; // 0x84 (0x4)
	BOOL bAutoDisableAttractorOnDeath :1 ; // 0x84 (0x4)
	const unsigned long: 0;
	struct FAttributeInitializationData BaseArmor; // 0x88 (0x10)
	struct FDamageTypeResistance BaseNormalDamageModifiers; // 0x98 (0x20)
	struct FDamageTypeResistance BaseExplosiveDamageModifiers; // 0xB8 (0x20)
	struct FDamageTypeResistance BaseShockDamageModifiers; // 0xD8 (0x20)
	struct FDamageTypeResistance BaseCorrosiveDamageModifiers; // 0xF8 (0x20)
	struct FDamageTypeResistance BaseIncendiaryDamageModifiers; // 0x118 (0x20)
	struct FDamageTypeResistance BaseAmpDamageModifiers; // 0x138 (0x20)
};

struct UCharacterClassDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UCharacterClassDefinition_Data UCharacterClassDefinition;
};

// 0x40 
struct UExpressionEvaluatorDefinition_Data {
	// Last Offset: 0x3C
	struct UExpressionEvaluator* Expression; // 0x3C (0x4)
};

struct UExpressionEvaluatorDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UExpressionEvaluatorDefinition_Data UExpressionEvaluatorDefinition;
};

// 0x48 
struct UGestaltPartMatricesCollectionDefinition_Data {
	// Last Offset: 0x3C
	struct TArray_FGPMCollection Collection; // 0x3C (0xC)
};

struct UGestaltPartMatricesCollectionDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UGestaltPartMatricesCollectionDefinition_Data UGestaltPartMatricesCollectionDefinition;
};

// 0x3C 
struct UImpactDefinition_Data {
	// Last Offset: 0x3C
};

struct UImpactDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UImpactDefinition_Data UImpactDefinition;
};

// 0x58 
struct UResourceDefinition_Data {
	// Last Offset: 0x3C
	struct FString ResourceName; // 0x3C (0xC)
	BOOL bIntegerOnlyUpdates :1 ; // 0x48 (0x4)
	BOOL bSerializeInSaveGame :1 ; // 0x48 (0x4)
	const unsigned long: 0;
	struct UClass* DefaultResourcePoolClass; // 0x4C (0x4)
	struct UResourcePoolDefinition* DefaultResourcePoolDefinition; // 0x50 (0x4)
	struct UAttributeContextResolver* ResourceContextResolver; // 0x54 (0x4)
};

struct UResourceDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UResourceDefinition_Data UResourceDefinition;
};

// 0xCC 
struct UResourcePoolDefinition_Data {
	// Last Offset: 0x3C
	struct UResourceDefinition* Resource; // 0x3C (0x4)
	unsigned char NetRelevancy; // 0x40 (0x1) (Enum = ENetRelevantFor)
	const unsigned char Unknown1[0x3]; // 0x41 (0x3) > LAST OFFSET
	struct UResourceDefinition* RegenerationResource; // 0x44 (0x4)
	float BaseMinValue; // 0x48 (0x4)
	struct FAttributeInitializationData BaseMaxValue; // 0x4C (0x10)
	float StartingValue; // 0x5C (0x4)
	BOOL StartWithMinValue :1 ; // 0x60 (0x4)
	BOOL StartWithMaxValue :1 ; // 0x60 (0x4)
	BOOL bUpdateCurrentValueOnExtremaChange :1 ; // 0x60 (0x4)
	BOOL bPulseBasedOnRegenRate :1 ; // 0x60 (0x4)
	BOOL bPulseWhenLow :1 ; // 0x60 (0x4)
	const unsigned long: 0;
	float BaseConsumptionRate; // 0x64 (0x4)
	float BaseActiveRegenerationRate; // 0x68 (0x4)
	float BasePassiveRegenerationRate; // 0x6C (0x4)
	float BaseOnIdleRegenerationRate; // 0x70 (0x4)
	float BaseOnIdleRegenerationDelay; // 0x74 (0x4)
	float RecentImpulseTimer; // 0x78 (0x4)
	float PercBarPulseSpeed; // 0x7C (0x4)
	float PercPulseResourceLow; // 0x80 (0x4)
	struct TArray_UBehaviorBasePtr OnResourceDepleted; // 0x84 (0xC)
	struct TArray_UBehaviorBasePtr OnResourceNotDepleted; // 0x90 (0xC)
	struct TArray_UBehaviorBasePtr OnResourceRegenerated; // 0x9C (0xC)
	struct TArray_UBehaviorBasePtr OnResourceNotRegenerated; // 0xA8 (0xC)
	struct UAttributeDefinition* UpgradeLevelAttribute; // 0xB4 (0x4)
	int TotalUpgradeCount; // 0xB8 (0x4)
	struct FAttributeInitializationData MaxValueUpgrade; // 0xBC (0x10)
};

struct UResourcePoolDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UResourcePoolDefinition_Data UResourcePoolDefinition;
};

// 0x5C 
struct UGestaltPartMatrices_Data {
	// Last Offset: 0x3C
	struct TArray_FGestaltAccessoryMeshEntry GestaltAccessoryMeshList; // 0x3C (0xC)
	struct TArray_FMatrix Matrices; // 0x48 (0xC)
	struct FName ArchetypeName; // 0x54 (0x8)
};

struct UGestaltPartMatrices {
	struct UObject_Data UObject;
	struct UGestaltPartMatrices_Data UGestaltPartMatrices;
};

// 0x3C 
struct UICounterBehavior_Data {
	// Last Offset: 0x3C
};

struct UICounterBehavior {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UICounterBehavior_Data UICounterBehavior;
};

// 0x3C 
struct UIInstanceData_Data {
	// Last Offset: 0x3C
};

struct UIInstanceData {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UIInstanceData_Data UIInstanceData;
};

// 0x3C 
struct UInstanceDataHelper_Data {
	// Last Offset: 0x3C
};

struct UInstanceDataHelper {
	struct UObject_Data UObject;
	struct UInstanceDataHelper_Data UInstanceDataHelper;
};

// 0x48 
struct UPackageReferencer_Data {
	// Last Offset: 0x3C
	struct TArray_FString PackageNames; // 0x3C (0xC)
};

struct UPackageReferencer {
	struct UObject_Data UObject;
	struct UPackageReferencer_Data UPackageReferencer;
};

// 0x48 
struct UPersistentGameDataManager_Data {
	// Last Offset: 0x3C
	struct TArray_UPersistentSequenceDataPtr SequencesWithPersistentData; // 0x3C (0xC)
};

struct UPersistentGameDataManager {
	struct UObject_Data UObject;
	struct UPersistentGameDataManager_Data UPersistentGameDataManager;
};

// 0x88 
struct UPersistentSequenceData_Data {
	// Last Offset: 0x3C
	struct FName LevelPackageName; // 0x3C (0x8)
	struct FName SequenceName; // 0x44 (0x8)
	const unsigned char Unknown1[0x3C]; // 0x4C (0x3C) UNKNOWN PROPERTY
};

struct UPersistentSequenceData {
	struct UObject_Data UObject;
	struct UPersistentSequenceData_Data UPersistentSequenceData;
};

// 0x118 
struct UResourcePool_Data {
	// Last Offset: 0x3C
	struct UResourcePoolDefinition* Definition; // 0x3C (0x4)
	unsigned char PoolGUID; // 0x40 (0x1)
	const unsigned char Unknown1[0x3]; // 0x41 (0x3) > LAST OFFSET
	float MinValue; // 0x44 (0x4)
	float MinValueBaseValue; // 0x48 (0x4)
	struct TArray_UAttributeModifierPtr MinValueModifierStack; // 0x4C (0xC)
	float MaxValue; // 0x58 (0x4)
	float MaxValueBaseValue; // 0x5C (0x4)
	struct TArray_UAttributeModifierPtr MaxValueModifierStack; // 0x60 (0xC)
	float CurrentValue; // 0x6C (0x4)
	float ConsumptionRate; // 0x70 (0x4)
	float ConsumptionRateBaseValue; // 0x74 (0x4)
	struct TArray_UAttributeModifierPtr ConsumptionRateModifierStack; // 0x78 (0xC)
	float ActiveRegenerationRate; // 0x84 (0x4)
	float ActiveRegenerationRateBaseValue; // 0x88 (0x4)
	struct TArray_UAttributeModifierPtr ActiveRegenerationRateModifierStack; // 0x8C (0xC)
	float OnIdleRegenerationRate; // 0x98 (0x4)
	float OnIdleRegenerationRateBaseValue; // 0x9C (0x4)
	struct TArray_UAttributeModifierPtr OnIdleRegenerationRateModifierStack; // 0xA0 (0xC)
	float OnIdleRegenerationDelay; // 0xAC (0x4)
	float OnIdleRegenerationDelayBaseValue; // 0xB0 (0x4)
	struct TArray_UAttributeModifierPtr OnIdleRegenerationDelayModifierStack; // 0xB4 (0xC)
	float PassiveRegenerationRate; // 0xC0 (0x4)
	float PassiveRegenerationRateBaseValue; // 0xC4 (0x4)
	struct TArray_UAttributeModifierPtr PassiveRegenerationRateModifierStack; // 0xC8 (0xC)
	float LastMinValue; // 0xD4 (0x4)
	float LastMaxValue; // 0xD8 (0x4)
	float LastCurrentValue; // 0xDC (0x4)
	float PoolIdleDelayStartTime; // 0xE0 (0x4)
	float RateRemainder; // 0xE4 (0x4)
	int RecentImpulseCount; // 0xE8 (0x4)
	int RegenerationDisabled; // 0xEC (0x4)
	int RegenerationDisabledBaseValue; // 0xF0 (0x4)
	struct TArray_UAttributeModifierPtr RegenerationDisabledModifierStack; // 0xF4 (0xC)
	float ResetRecentImpulseCountTime; // 0x100 (0x4)
	BOOL bIsAuthoritative :1 ; // 0x104 (0x4)
	BOOL bIsBeingInitialized :1 ; // 0x104 (0x4)
	BOOL bHasPoolBeenFullSinceLastBeingDepleted :1 ; // 0x104 (0x4)
	BOOL bDisallowReinitialization :1 ; // 0x104 (0x4)
	BOOL bHideHUDDisplay :1 ; // 0x104 (0x4)
	BOOL bCreatedAndNotModified :1 ; // 0x104 (0x4)
	BOOL WasRegenerating :1 ; // 0x104 (0x4)
	const unsigned long: 0;
	struct UObject* AssociatedProvider; // 0x108 (0x4)
	struct UMaterialInstanceConstant* HUDMaterialInstance; // 0x10C (0x4)
	struct UResourcePool* RegenerationPool; // 0x110 (0x4)
	int IsRegenerating; // 0x114 (0x4)
};

struct UResourcePool {
	struct UObject_Data UObject;
	struct UResourcePool_Data UResourcePool;
};

// 0x118 
struct UHealthResourcePool_Data {
	// Last Offset: 0x118
};

struct UHealthResourcePool {
	struct UObject_Data UObject;
	struct UResourcePool_Data UResourcePool;
	struct UHealthResourcePool_Data UHealthResourcePool;
};

// 0x84 
struct UTargetableList_Data {
	// Last Offset: 0x3C
	struct FMultiMap_Mirror TargetableAllegianceMap; // 0x3C (0x3C)
	struct TArray_FScriptInterface FullTargetableList; // 0x78 (0xC)
};

struct UTargetableList {
	struct UObject_Data UObject;
	struct UTargetableList_Data UTargetableList;
};

// 0x198 
struct AHybridNavigationArea_Data {
	// Last Offset: 0x188
	struct FName CustomAreaName; // 0x188 (0x8)
	struct FColor AreaColor; // 0x190 (0x4)
	BOOL bShowArea :1 ; // 0x194 (0x4)
	const unsigned long: 0;
};

struct AHybridNavigationArea {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct AHybridNavigationArea_Data AHybridNavigationArea;
};

// 0x198 
struct APickupableMeshActor_Data {
	// Last Offset: 0x188
	struct AActor* MyTarget; // 0x188 (0x4)
	float MoveSpeed; // 0x18C (0x4)
	int RotateSpeed; // 0x190 (0x4)
	float PawnEyeHeightAdjustment; // 0x194 (0x4)
};

struct APickupableMeshActor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct APickupableMeshActor_Data APickupableMeshActor;
};

// 0x214  (Alignment = 16)
struct UHybridNavigationAreaDebugRenderingComponent_Data {
	// Last Offset: 0x210
	float DebugSphereRadius; // 0x210 (0x4)
};

struct UHybridNavigationAreaDebugRenderingComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UHybridNavigationAreaDebugRenderingComponent_Data UHybridNavigationAreaDebugRenderingComponent;
};

// 0x26C  (Alignment = 16)
struct UHybridNavigationVisualizationComponent_Data {
	// Last Offset: 0x210
	struct TArray_ANavigationPointPtr AllNavPoints; // 0x210 (0xC)
	struct TArray_ANavigationPointPtr NavPointsToRepresent; // 0x21C (0xC)
	int NextNavPointToProcess; // 0x228 (0x4)
	BOOL bIsVisualizationInProgress :1 ; // 0x22C (0x4)
	BOOL bIsVisualizationReady :1 ; // 0x22C (0x4)
	const unsigned long: 0;
	struct TArray_FHybridNavVisualizationVertsForNavPoint VisualizationVertsByNavPoint; // 0x230 (0xC)
	struct FColor VisualizationColor; // 0x23C (0x4)
	struct FHybridNavVisualizationPerfStats VisualizationStats; // 0x240 (0x2C)
};

struct UHybridNavigationVisualizationComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UHybridNavigationVisualizationComponent_Data UHybridNavigationVisualizationComponent;
};

// 0x60 
struct UInventoryCardPresentationDefinition_Data {
	// Last Offset: 0x3C
	struct FString ZippyFrame; // 0x3C (0xC)
	struct FString ItemFrame; // 0x48 (0xC)
	struct FString DescriptionLocReference; // 0x54 (0xC)
};

struct UInventoryCardPresentationDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UInventoryCardPresentationDefinition_Data UInventoryCardPresentationDefinition;
};

// 0x64 
struct UManufacturerDefinition_Data {
	// Last Offset: 0x3C
	struct TArray_FManufacturerGradeData Grades; // 0x3C (0xC)
	struct FString FlashLabelName; // 0x48 (0xC)
	int IconX; // 0x54 (0x4)
	int IconY; // 0x58 (0x4)
	struct FName StatId; // 0x5C (0x8)
};

struct UManufacturerDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UManufacturerDefinition_Data UManufacturerDefinition;
};

// 0xA4 
struct ULevelStreamingDomino_Data {
	// Last Offset: 0x98
	struct TArray_FName TilePossibilities; // 0x98 (0xC)
};

struct ULevelStreamingDomino {
	struct UObject_Data UObject;
	struct ULevelStreaming_Data ULevelStreaming;
	struct ULevelStreamingKismet_Data ULevelStreamingKismet;
	struct ULevelStreamingDomino_Data ULevelStreamingDomino;
};

// 0x49 
struct ULocalMessage_Data {
	// Last Offset: 0x3C
	BOOL bIsSpecial :1 ; // 0x3C (0x4)
	BOOL bIsUnique :1 ; // 0x3C (0x4)
	BOOL bIsPartiallyUnique :1 ; // 0x3C (0x4)
	BOOL bIsConsoleMessage :1 ; // 0x3C (0x4)
	BOOL bBeep :1 ; // 0x3C (0x4)
	BOOL bCountInstances :1 ; // 0x3C (0x4)
	const unsigned long: 0;
	float Lifetime; // 0x40 (0x4)
	struct FColor DrawColor; // 0x44 (0x4)
	unsigned char MsgType; // 0x48 (0x1) (Enum = ELocalMessageType)
};

struct ULocalMessage {
	struct UObject_Data UObject;
	struct ULocalMessage_Data ULocalMessage;
};

// 0x84 
struct UEdgeDetectionPostProcessEffect_Data {
	// Last Offset: 0x64
	float HFilterAxisCoeff; // 0x64 (0x4)
	float HFilterDiagCoeff; // 0x68 (0x4)
	float VFilterAxisCoeff; // 0x6C (0x4)
	float VFilterDiagCoeff; // 0x70 (0x4)
	float FarDist; // 0x74 (0x4)
	float NearDist; // 0x78 (0x4)
	float SobelPower; // 0x7C (0x4)
	float TexelOffset; // 0x80 (0x4)
};

struct UEdgeDetectionPostProcessEffect {
	struct UObject_Data UObject;
	struct UPostProcessEffect_Data UPostProcessEffect;
	struct UEdgeDetectionPostProcessEffect_Data UEdgeDetectionPostProcessEffect;
};

// 0x1C4 
struct ADroppedPickup_Data {
	// Last Offset: 0x188
	struct FPointer VfTable_IIPickupable; // 0x188 (0x4)
	struct AWillowInventory* Inventory; // 0x18C (0x4)
	struct ANavigationPoint* PickupCache; // 0x190 (0x4)
	BOOL bFadeOut :1 ; // 0x194 (0x4)
	BOOL bUseRBPhysics :1 ; // 0x194 (0x4)
	BOOL bIsDiscovered :1 ; // 0x194 (0x4)
	BOOL bClientIsDiscovered :1 ; // 0x194 (0x4)
	BOOL bTorque :1 ; // 0x194 (0x4)
	BOOL bTorqueTemporary :1 ; // 0x194 (0x4)
	const unsigned long: 0;
	struct UManufacturerDefinition* Manufacturer; // 0x198 (0x4)
	struct FBoxSphereBounds MeshBounds; // 0x19C (0x1C)
	struct FVector Torque; // 0x1B8 (0xC)
};

struct ADroppedPickup {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ADroppedPickup_Data ADroppedPickup;
};

// 0x1C8 
struct AInventory_Data {
	// Last Offset: 0x188
	struct AInventory* Inventory; // 0x188 (0x4)
	struct AInventoryManager* InvManager; // 0x18C (0x4)
	struct FString ItemName; // 0x190 (0xC)
	BOOL bDropOnDeath :1 ; // 0x19C (0x4)
	BOOL bReadied :1 ; // 0x19C (0x4)
	BOOL bDelayedSpawn :1 ; // 0x19C (0x4)
	BOOL bPredictRespawns :1 ; // 0x19C (0x4)
	const unsigned long: 0;
	float RespawnTime; // 0x1A0 (0x4)
	float MaxDesireability; // 0x1A4 (0x4)
	struct FString PickupMessage; // 0x1A8 (0xC)
	struct UClass* MessageClass; // 0x1B4 (0x4)
	struct USoundCue* PickupSound; // 0x1B8 (0x4)
	struct UClass* DroppedPickupClass; // 0x1BC (0x4)
	struct UPrimitiveComponent* DroppedPickupMesh; // 0x1C0 (0x4)
	struct UPrimitiveComponent* PickupFactoryMesh; // 0x1C4 (0x4)
};

struct AInventory {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInventory_Data AInventory;
};

// 0x898 
struct AWillowInventory_Data {
	// Last Offset: 0x1C8
	struct FPointer VfTable_IIBalancedActor; // 0x1C8 (0x4)
	struct FPointer VfTable_IIAttributeSlotEffectProvider; // 0x1CC (0x4)
	int MonetaryValue; // 0x1D0 (0x4)
	float MonetaryValueModifierTotal; // 0x1D4 (0x4)
	int Quantity; // 0x1D8 (0x4)
	int RarityLevel; // 0x1DC (0x4)
	int ExpLevel; // 0x1E0 (0x4)
	int GameStage; // 0x1E4 (0x4)
	int AwesomeLevel; // 0x1E8 (0x4)
	struct UObject* AdditionalQueryInterfaceSource; // 0x1EC (0x4)
	float ClonedForSharing; // 0x1F0 (0x4)
	int LastCanBeUsedByResult; // 0x1F4 (0x4)
	struct FName ZippyFrame; // 0x1F8 (0x8)
	struct FString ItemFrame; // 0x200 (0xC)
	struct FName ElementalFrame; // 0x20C (0x8)
	struct FName SourceDefinitionName; // 0x214 (0x8)
	struct FName SourceResponsibleName; // 0x21C (0x8)
	unsigned char ItemLocation; // 0x224 (0x1)
	unsigned char Mark; // 0x225 (0x1) (Enum = PlayerMark)
	const unsigned char Unknown1[0x2]; // 0x226 (0x2) > LAST OFFSET
	BOOL bShopsHaveInfiniteQuantity :1 ; // 0x228 (0x4)
	BOOL bOnlyCompareStatsForMatchingAttributes :1 ; // 0x228 (0x4)
	const unsigned long: 0;
	struct FAttributeSlotData AttributeSlots[19]; // 0x22C (0x5F0)
	float ReplicatedAttributeSlotModifierValues[19]; // 0x81C (0x4C)
	struct UGBXDefinition* RuntimeAttributeSlotSkill; // 0x868 (0x4)
	float TempStatModifier; // 0x86C (0x4)
	float TempStatModifierBaseValue; // 0x870 (0x4)
	struct TArray_UAttributeModifierPtr TempStatModifierModifierStack; // 0x874 (0xC)
	struct TArray_FAppliedAttributeEffect AppliedAttributeSlotEffects; // 0x880 (0xC)
	struct TArray_AActorPtr ExternalLikenessConsumers; // 0x88C (0xC)
};

struct AWillowInventory {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInventory_Data AInventory;
	struct AWillowInventory_Data AWillowInventory;
};

// 0x9AC 
struct AWeapon_Data {
	// Last Offset: 0x898
	unsigned char CurrentFireMode; // 0x898 (0x1)
	unsigned char bOffHand; // 0x899 (0x1)
	const unsigned char Unknown1[0x2]; // 0x89A (0x2) > LAST OFFSET
	struct TArray_FName FiringStatesArray; // 0x89C (0xC)
	struct TArray_unsigned_char WeaponFireTypes; // 0x8A8 (0xC)
	struct TArray_UClassPtr WeaponProjectiles; // 0x8B4 (0xC)
	float FireInterval; // 0x8C0 (0x4)
	float FireIntervalBaseValue; // 0x8C4 (0x4)
	struct TArray_UAttributeModifierPtr FireIntervalModifierStack; // 0x8C8 (0xC)
	float Spread; // 0x8D4 (0x4)
	float SpreadBaseValue; // 0x8D8 (0x4)
	struct TArray_UAttributeModifierPtr SpreadModifierStack; // 0x8DC (0xC)
	float InstantHitDamage; // 0x8E8 (0x4)
	float InstantHitDamageBaseValue; // 0x8EC (0x4)
	struct TArray_UAttributeModifierPtr InstantHitDamageModifierStack; // 0x8F0 (0xC)
	float InstantHitMomentum; // 0x8FC (0x4)
	float InstantHitMomentumBaseValue; // 0x900 (0x4)
	struct TArray_UAttributeModifierPtr InstantHitMomentumModifierStack; // 0x904 (0xC)
	struct TArray_UClassPtr InstantHitDamageTypes; // 0x910 (0xC)
	struct TArray_UDamageTypeDefinitionPtr InstantHitDamageTypeDefinitions; // 0x91C (0xC)
	struct TArray_UImpactDefinitionPtr InstantHitImpactDefinitions; // 0x928 (0xC)
	float EquipTime; // 0x934 (0x4)
	float EquipTimeBaseValue; // 0x938 (0x4)
	struct TArray_UAttributeModifierPtr EquipTimeModifierStack; // 0x93C (0xC)
	float PutDownTime; // 0x948 (0x4)
	float PutDownTimeBaseValue; // 0x94C (0x4)
	struct TArray_UAttributeModifierPtr PutDownTimeModifierStack; // 0x950 (0xC)
	struct FVector FireOffset; // 0x95C (0xC)
	BOOL bWeaponPutDown :1 ; // 0x968 (0x4)
	BOOL bCanThrow :1 ; // 0x968 (0x4)
	BOOL bWasOptionalSet :1 ; // 0x968 (0x4)
	BOOL bWasDoNotActivate :1 ; // 0x968 (0x4)
	BOOL bInstantHit :1 ; // 0x968 (0x4)
	BOOL bMeleeWeapon :1 ; // 0x968 (0x4)
	BOOL bIsFiringWeapon :1 ; // 0x968 (0x4)
	const unsigned long: 0;
	float WeaponRange; // 0x96C (0x4)
	float WeaponRangeBaseValue; // 0x970 (0x4)
	struct TArray_UAttributeModifierPtr WeaponRangeModifierStack; // 0x974 (0xC)
	float ClothImpulseRadius; // 0x980 (0x4)
	float ClothImpulseScale; // 0x984 (0x4)
	struct USkeletalMeshComponent* FirstPersonMesh; // 0x988 (0x4)
	float DefaultAnimSpeed; // 0x98C (0x4)
	float Priority; // 0x990 (0x4)
	struct AAIController* AIController; // 0x994 (0x4)
	struct TArray_unsigned_char ShouldFireOnRelease; // 0x998 (0xC)
	float AIRating; // 0x9A4 (0x4)
	float CachedMaxRange; // 0x9A8 (0x4)
};

struct AWeapon {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInventory_Data AInventory;
	struct AWillowInventory_Data AWillowInventory;
	struct AWeapon_Data AWeapon;
};

// 0x1B4 
struct AInventoryManager_Data {
	// Last Offset: 0x188
	struct AInventory* InventoryChain; // 0x188 (0x4)
	struct AWeapon* PendingWeapon; // 0x18C (0x4)
	struct AWeapon* PendingOffHandWeapon; // 0x190 (0x4)
	struct AWeapon* LastAttemptedSwitchToWeapon; // 0x194 (0x4)
	BOOL bMustHoldWeapon :1 ; // 0x198 (0x4)
	BOOL bInfiniteAmmo :1 ; // 0x198 (0x4)
	BOOL bForceOwnedItemsToBeRelevantToAll :1 ; // 0x198 (0x4)
	const unsigned long: 0;
	struct TArray_int PendingFire; // 0x19C (0xC)
	struct TArray_int OffHandPendingFire; // 0x1A8 (0xC)
};

struct AInventoryManager {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInventoryManager_Data AInventoryManager;
};

// 0x4C 
struct UGearboxCalloutDefinition_Data {
	// Last Offset: 0x3C
	float MaxCallOutDistance; // 0x3C (0x4)
	float MinCallOutDistance; // 0x40 (0x4)
	BOOL bCheckRarity :1 ; // 0x44 (0x4)
	const unsigned long: 0;
	int MinRarityCallOutLevel; // 0x48 (0x4)
};

struct UGearboxCalloutDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UGearboxCalloutDefinition_Data UGearboxCalloutDefinition;
};

// 0x180 
struct UWillowInventoryDefinition_Data {
	// Last Offset: 0x3C
	struct UClass* InventoryClass; // 0x3C (0x4)
	BOOL bAutomaticallyPickup :1 ; // 0x40 (0x4)
	BOOL bPickupInBulk :1 ; // 0x40 (0x4)
	BOOL bDisallowAIFromGrabbingPickup :1 ; // 0x40 (0x4)
	BOOL bDuplicatePickupJustAddsQuantity :1 ; // 0x40 (0x4)
	BOOL bSuppressPickupCard :1 ; // 0x40 (0x4)
	BOOL bTorque :1 ; // 0x40 (0x4)
	BOOL bNeverDisplayPickupMessage :1 ; // 0x40 (0x4)
	BOOL bShopsHaveInfiniteQuantity :1 ; // 0x40 (0x4)
	BOOL bCanCompare :1 ; // 0x40 (0x4)
	BOOL bUsesPlayerLevelRequirement :1 ; // 0x40 (0x4)
	BOOL bUIMeshRotationNeedsTransformFixup :1 ; // 0x40 (0x4)
	BOOL bIsConsumable :1 ; // 0x40 (0x4)
	BOOL bAllowInventoryDefToModifyPartWeight :1 ; // 0x40 (0x4)
	const unsigned long: 0;
	unsigned char PlayerDroppability; // 0x44 (0x1) (Enum = EPlayerDroppability)
	unsigned char FormOfCurrency; // 0x45 (0x1) (Enum = ECurrencyType)
	unsigned char OnUseConstraintsMode; // 0x46 (0x1) (Enum = EExpressionEvaluationMode)
	unsigned char AttributeSlotEffectMode; // 0x47 (0x1) (Enum = EAttributeSlotEffectMode)
	float PickupLifeSpan; // 0x48 (0x4)
	float PickupFlagScale; // 0x4C (0x4)
	struct UTexture2D* PickupFlagIcon; // 0x50 (0x4)
	struct FVector PickupFlagOffset; // 0x54 (0xC)
	struct FVector Torque; // 0x60 (0xC)
	float ThirdPersonMeshScale; // 0x6C (0x4)
	struct TArray_FConditionalSoundData PickupSounds; // 0x70 (0xC)
	struct TArray_FConditionalSoundData PickupAndEquipSounds; // 0x7C (0xC)
	struct UClass* MaterialClass; // 0x88 (0x4)
	struct UPhysicsAsset* PhysicsAsset; // 0x8C (0x4)
	struct FString PickupMessage; // 0x90 (0xC)
	struct FString UseFailureLevelMessage; // 0x9C (0xC)
	struct FString UseFailureConstraintsMessage; // 0xA8 (0xC)
	struct FString NoManufacturerName; // 0xB4 (0xC)
	struct FAttributeInitializationData BaseRarity; // 0xC0 (0x10)
	struct FAttributeInitializationData MonetaryValue; // 0xD0 (0x10)
	float BaseMonetaryValueModifier; // 0xE0 (0x4)
	struct FAttributeInitializationData PlayerUseLevelBonus; // 0xE4 (0x10)
	struct TArray_FAttributeExpressionData OnUseConstraints; // 0xF4 (0xC)
	struct TArray_FUIStatData UIStatList; // 0x100 (0xC)
	struct FRotator UIMeshRotation; // 0x10C (0xC)
	struct UInventoryCardPresentationDefinition* Presentation; // 0x118 (0x4)
	struct UGearboxCalloutDefinition* CalloutDefinition; // 0x11C (0x4)
	struct FName PickedUpStatID; // 0x120 (0x8)
	struct FName PurchasedStatID; // 0x128 (0x8)
	float FocusRadius; // 0x130 (0x4)
	struct FVector FocusOffset; // 0x134 (0xC)
	struct FAttributeInitializationData AttributeSlotEffectSkillDuration; // 0x140 (0x10)
	struct FAttributeInitializationData AttributeSlotBaseGrade; // 0x150 (0x10)
	int AttributeSlotMaxActivated; // 0x160 (0x4)
	struct TArray_FAttributeSlotEffectData AttributeSlotEffects; // 0x164 (0xC)
	struct TArray_FAttributeSlotUpgradeData AttributeSlotUpgrades; // 0x170 (0xC)
	struct FColor LootBeamColorOverride; // 0x17C (0x4)
};

struct UWillowInventoryDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UWillowInventoryDefinition_Data UWillowInventoryDefinition;
};

// 0x98 
struct UWillowInventoryPartDefinition_Data {
	// Last Offset: 0x3C
	struct UMaterialInstanceConstant* Material; // 0x3C (0x4)
	BOOL bIsGestaltMode :1 ; // 0x40 (0x4)
	const unsigned long: 0;
	struct FName GestaltModeSkeletalMeshName; // 0x44 (0x8)
	struct USkeletalMesh* NongestaltSkeletalMesh; // 0x4C (0x4)
	struct FName AdditionalGestaltModeSkeletalMeshNames[2]; // 0x50 (0x10)
	struct TArray_FAttributeSlotEffectData AttributeSlotEffects; // 0x60 (0xC)
	struct TArray_FAttributeSlotUpgradeData AttributeSlotUpgrades; // 0x6C (0xC)
	struct UAttributeDefinition* MonetaryValueMod; // 0x78 (0x4)
	struct FAttributeInitializationData Rarity; // 0x7C (0x10)
	struct TArray_FVectorParameterValue MaterialVectorParameterValues; // 0x8C (0xC)
};

struct UWillowInventoryPartDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UWillowInventoryPartDefinition_Data UWillowInventoryPartDefinition;
};

// 0x3C 
struct UIPickupable_Data {
	// Last Offset: 0x3C
};

struct UIPickupable {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UIPickupable_Data UIPickupable;
};

// 0xC4 
struct USeqEvent_HitWall_Data {
	// Last Offset: 0xC4
};

struct USeqEvent_HitWall {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceEvent_Data USequenceEvent;
	struct USeqEvent_HitWall_Data USeqEvent_HitWall;
};

// 0xB4 
struct USeqAct_Destroy_Data {
	// Last Offset: 0xA4
	BOOL bDestroyBasedActors :1 ; // 0xA4 (0x4)
	const unsigned long: 0;
	struct TArray_UClassPtr IgnoreBasedClasses; // 0xA8 (0xC)
};

struct USeqAct_Destroy {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_Destroy_Data USeqAct_Destroy;
};

// 0xC0 
struct USeqAct_Teleport_Data {
	// Last Offset: 0xA4
	BOOL bUpdateRotation :1 ; // 0xA4 (0x4)
	BOOL bCheckOverlap :1 ; // 0xA4 (0x4)
	BOOL bSkipHoldingCell :1 ; // 0xA4 (0x4)
	BOOL bTurnOffCinematicModeAfterTeleport :1 ; // 0xA4 (0x4)
	BOOL bHideTeleportEffect :1 ; // 0xA4 (0x4)
	const unsigned long: 0;
	float TeleportDistance; // 0xA8 (0x4)
	struct TArray_AVolumePtr TeleportVolumes; // 0xAC (0xC)
	struct UObject* Source; // 0xB8 (0x4)
	struct AActor* ResurrectStation; // 0xBC (0x4)
};

struct USeqAct_Teleport {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_Teleport_Data USeqAct_Teleport;
};

// 0xB8 
struct USeqAct_SetVelocity_Data {
	// Last Offset: 0xA4
	struct FVector VelocityDir; // 0xA4 (0xC)
	float VelocityMag; // 0xB0 (0x4)
	BOOL bVelocityRelativeToActorRotation :1 ; // 0xB4 (0x4)
	const unsigned long: 0;
};

struct USeqAct_SetVelocity {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_SetVelocity_Data USeqAct_SetVelocity;
};

// 0xB4 
struct USeqAct_ToggleHidden_Data {
	// Last Offset: 0xA4
	BOOL bToggleBasedActors :1 ; // 0xA4 (0x4)
	const unsigned long: 0;
	struct TArray_UClassPtr IgnoreBasedClasses; // 0xA8 (0xC)
};

struct USeqAct_ToggleHidden {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_Toggle_Data USeqAct_Toggle;
	struct USeqAct_ToggleHidden_Data USeqAct_ToggleHidden;
};

// 0xC8 
struct USeqAct_AttachToActor_Data {
	// Last Offset: 0xA4
	BOOL bDetach :1 ; // 0xA4 (0x4)
	BOOL bHardAttach :1 ; // 0xA4 (0x4)
	BOOL bUseRelativeOffset :1 ; // 0xA4 (0x4)
	BOOL bUseRelativeRotation :1 ; // 0xA4 (0x4)
	BOOL bUseConstructAttachment :1 ; // 0xA4 (0x4)
	const unsigned long: 0;
	struct FName BoneName; // 0xA8 (0x8)
	struct FVector RelativeOffset; // 0xB0 (0xC)
	struct FRotator RelativeRotation; // 0xBC (0xC)
};

struct USeqAct_AttachToActor {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_AttachToActor_Data USeqAct_AttachToActor;
};

// 0x3C 
struct UIConsoleCommandBehavior_Data {
	// Last Offset: 0x3C
};

struct UIConsoleCommandBehavior {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UIConsoleCommandBehavior_Data UIConsoleCommandBehavior;
};

// 0x3C 
struct UIAppearanceBehavior_Data {
	// Last Offset: 0x3C
};

struct UIAppearanceBehavior {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UIAppearanceBehavior_Data UIAppearanceBehavior;
};

// 0x3C 
struct UIPhysicsBehavior_Data {
	// Last Offset: 0x3C
};

struct UIPhysicsBehavior {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UIPhysicsBehavior_Data UIPhysicsBehavior;
};

// 0x3C 
struct UIChangeCollisionBehavior_Data {
	// Last Offset: 0x3C
};

struct UIChangeCollisionBehavior {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UIChangeCollisionBehavior_Data UIChangeCollisionBehavior;
};

// 0x3C 
struct UIDestroyBehavior_Data {
	// Last Offset: 0x3C
};

struct UIDestroyBehavior {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UIDestroyBehavior_Data UIDestroyBehavior;
};

// 0x3C 
struct UISoundBehavior_Data {
	// Last Offset: 0x3C
};

struct UISoundBehavior {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UISoundBehavior_Data UISoundBehavior;
};

// 0xC0 
struct UOnlineAuthInterface_Data {
	// Last Offset: 0x3C
	struct FScriptDelegate __OnAuthReady__Delegate; // 0x3C (0xC)
	struct FScriptDelegate __OnAuthRequestClient__Delegate; // 0x48 (0xC)
	struct FScriptDelegate __OnAuthRequestServer__Delegate; // 0x54 (0xC)
	struct FScriptDelegate __OnAuthBlobReceivedClient__Delegate; // 0x60 (0xC)
	struct FScriptDelegate __OnAuthBlobReceivedServer__Delegate; // 0x6C (0xC)
	struct FScriptDelegate __OnAuthCompleteClient__Delegate; // 0x78 (0xC)
	struct FScriptDelegate __OnAuthCompleteServer__Delegate; // 0x84 (0xC)
	struct FScriptDelegate __OnAuthKillClient__Delegate; // 0x90 (0xC)
	struct FScriptDelegate __OnAuthRetryServer__Delegate; // 0x9C (0xC)
	struct FScriptDelegate __OnClientConnectionClose__Delegate; // 0xA8 (0xC)
	struct FScriptDelegate __OnServerConnectionClose__Delegate; // 0xB4 (0xC)
};

struct UOnlineAuthInterface {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UOnlineAuthInterface_Data UOnlineAuthInterface;
};

// 0x54 
struct UOnlineTitleFileInterface_Data {
	// Last Offset: 0x3C
	struct FScriptDelegate __OnReadTitleFileComplete__Delegate; // 0x3C (0xC)
	struct FScriptDelegate __OnShareTitleFileComplete__Delegate; // 0x48 (0xC)
};

struct UOnlineTitleFileInterface {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UOnlineTitleFileInterface_Data UOnlineTitleFileInterface;
};

// 0x60 
struct UOnlinePartyChatInterface_Data {
	// Last Offset: 0x3C
	struct FScriptDelegate __OnSendPartyGameInvitesComplete__Delegate; // 0x3C (0xC)
	struct FScriptDelegate __OnPartyMemberListChanged__Delegate; // 0x48 (0xC)
	struct FScriptDelegate __OnPartyMembersInfoChanged__Delegate; // 0x54 (0xC)
};

struct UOnlinePartyChatInterface {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UOnlinePartyChatInterface_Data UOnlinePartyChatInterface;
};

// 0x48 
struct UOnlineNewsInterface_Data {
	// Last Offset: 0x3C
	struct FScriptDelegate __OnReadNewsCompleted__Delegate; // 0x3C (0xC)
};

struct UOnlineNewsInterface {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UOnlineNewsInterface_Data UOnlineNewsInterface;
};

// 0x60 
struct UOnlineStatsInterface_Data {
	// Last Offset: 0x3C
	struct FScriptDelegate __OnReadOnlineStatsComplete__Delegate; // 0x3C (0xC)
	struct FScriptDelegate __OnFlushOnlineStatsComplete__Delegate; // 0x48 (0xC)
	struct FScriptDelegate __OnRegisterHostStatGuidComplete__Delegate; // 0x54 (0xC)
};

struct UOnlineStatsInterface {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UOnlineStatsInterface_Data UOnlineStatsInterface;
};

// 0x54 
struct UOnlineVoiceInterface_Data {
	// Last Offset: 0x3C
	struct FScriptDelegate __OnPlayerTalkingStateChange__Delegate; // 0x3C (0xC)
	struct FScriptDelegate __OnRecognitionComplete__Delegate; // 0x48 (0xC)
};

struct UOnlineVoiceInterface {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UOnlineVoiceInterface_Data UOnlineVoiceInterface;
};

// 0xCC 
struct UOnlineContentInterface_Data {
	// Last Offset: 0x3C
	struct FScriptDelegate __OnContentChange__Delegate; // 0x3C (0xC)
	struct FScriptDelegate __OnReadContentComplete__Delegate; // 0x48 (0xC)
	struct FScriptDelegate __OnReadCrossTitleContentComplete__Delegate; // 0x54 (0xC)
	struct FScriptDelegate __OnReadCrossTitleSaveGameDataComplete__Delegate; // 0x60 (0xC)
	struct FScriptDelegate __OnQueryAvailableDownloadsComplete__Delegate; // 0x6C (0xC)
	struct FScriptDelegate __OnReadSaveGameDataComplete__Delegate; // 0x78 (0xC)
	struct FScriptDelegate __OnWriteSaveGameDataComplete__Delegate; // 0x84 (0xC)
	struct FScriptDelegate __OnReadSaveGamesComplete__Delegate; // 0x90 (0xC)
	struct FScriptDelegate __OnReadDownloadableContentListComplete__Delegate; // 0x9C (0xC)
	struct FScriptDelegate __OnReadHiddenDownloadableContentListComplete__Delegate; // 0xA8 (0xC)
	struct FScriptDelegate __OnReadCriticalDownloadableContentListComplete__Delegate; // 0xB4 (0xC)
	struct FScriptDelegate __OnCheckDownloadableContentList__Delegate; // 0xC0 (0xC)
};

struct UOnlineContentInterface {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UOnlineContentInterface_Data UOnlineContentInterface;
};

// 0x108 
struct UOnlineGameInterface_Data {
	// Last Offset: 0x3C
	struct FScriptDelegate __OnCreateOnlineGameComplete__Delegate; // 0x3C (0xC)
	struct FScriptDelegate __OnUpdateOnlineGameComplete__Delegate; // 0x48 (0xC)
	struct FScriptDelegate __OnDestroyOnlineGameComplete__Delegate; // 0x54 (0xC)
	struct FScriptDelegate __OnFindOnlineGamesComplete__Delegate; // 0x60 (0xC)
	struct FScriptDelegate __OnCancelFindOnlineGamesComplete__Delegate; // 0x6C (0xC)
	struct FScriptDelegate __OnQosStatusChanged__Delegate; // 0x78 (0xC)
	struct FScriptDelegate __OnJoinOnlineGameComplete__Delegate; // 0x84 (0xC)
	struct FScriptDelegate __OnRegisterPlayerComplete__Delegate; // 0x90 (0xC)
	struct FScriptDelegate __OnUnregisterPlayerComplete__Delegate; // 0x9C (0xC)
	struct FScriptDelegate __OnStartOnlineGameComplete__Delegate; // 0xA8 (0xC)
	struct FScriptDelegate __OnEndOnlineGameComplete__Delegate; // 0xB4 (0xC)
	struct FScriptDelegate __OnArbitrationRegistrationComplete__Delegate; // 0xC0 (0xC)
	struct FScriptDelegate __OnGameInviteAccepted__Delegate; // 0xCC (0xC)
	struct FScriptDelegate __OnGameInviteProcessingStarted__Delegate; // 0xD8 (0xC)
	struct FScriptDelegate __OnRecalculateSkillRatingComplete__Delegate; // 0xE4 (0xC)
	struct FScriptDelegate __OnMigrateOnlineGameComplete__Delegate; // 0xF0 (0xC)
	struct FScriptDelegate __OnJoinMigratedOnlineGameComplete__Delegate; // 0xFC (0xC)
};

struct UOnlineGameInterface {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UOnlineGameInterface_Data UOnlineGameInterface;
};

// 0x84 
struct UOnlineSystemInterface_Data {
	// Last Offset: 0x3C
	struct FScriptDelegate __OnLinkStatusChange__Delegate; // 0x3C (0xC)
	struct FScriptDelegate __OnExternalUIChange__Delegate; // 0x48 (0xC)
	struct FScriptDelegate __OnControllerChange__Delegate; // 0x54 (0xC)
	struct FScriptDelegate __OnConnectionStatusChange__Delegate; // 0x60 (0xC)
	struct FScriptDelegate __OnStorageDeviceChange__Delegate; // 0x6C (0xC)
	struct FScriptDelegate __OnContentChange__Delegate; // 0x78 (0xC)
};

struct UOnlineSystemInterface {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UOnlineSystemInterface_Data UOnlineSystemInterface;
};

// 0x6C 
struct UOnlinePlayerInterfaceEx_Data {
	// Last Offset: 0x3C
	struct FScriptDelegate __OnDeviceSelectionComplete__Delegate; // 0x3C (0xC)
	struct FScriptDelegate __OnProfileDataChanged__Delegate; // 0x48 (0xC)
	struct FScriptDelegate __OnReadCrossTitleProfileSettingsComplete__Delegate; // 0x54 (0xC)
	struct FScriptDelegate __OnUnlockAvatarAwardComplete__Delegate; // 0x60 (0xC)
};

struct UOnlinePlayerInterfaceEx {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UOnlinePlayerInterfaceEx_Data UOnlinePlayerInterfaceEx;
};

// 0x150 
struct UOnlinePlayerInterface_Data {
	// Last Offset: 0x3C
	struct FScriptDelegate __OnLoginChange__Delegate; // 0x3C (0xC)
	struct FScriptDelegate __OnLoginCancelled__Delegate; // 0x48 (0xC)
	struct FScriptDelegate __OnMutingChange__Delegate; // 0x54 (0xC)
	struct FScriptDelegate __OnFriendsChange__Delegate; // 0x60 (0xC)
	struct FScriptDelegate __OnLoginFailed__Delegate; // 0x6C (0xC)
	struct FScriptDelegate __OnLogoutCompleted__Delegate; // 0x78 (0xC)
	struct FScriptDelegate __OnGetUserAgeGroup__Delegate; // 0x84 (0xC)
	struct FScriptDelegate __OnLoginStatusChange__Delegate; // 0x90 (0xC)
	struct FScriptDelegate __OnReadProfileSettingsComplete__Delegate; // 0x9C (0xC)
	struct FScriptDelegate __OnWriteProfileSettingsComplete__Delegate; // 0xA8 (0xC)
	struct FScriptDelegate __OnReadPlayerStorageComplete__Delegate; // 0xB4 (0xC)
	struct FScriptDelegate __OnReadPlayerStorageForNetIdComplete__Delegate; // 0xC0 (0xC)
	struct FScriptDelegate __OnWritePlayerStorageComplete__Delegate; // 0xCC (0xC)
	struct FScriptDelegate __OnReadFriendsComplete__Delegate; // 0xD8 (0xC)
	struct FScriptDelegate __OnKeyboardInputComplete__Delegate; // 0xE4 (0xC)
	struct FScriptDelegate __OnAddFriendByNameComplete__Delegate; // 0xF0 (0xC)
	struct FScriptDelegate __OnFriendInviteReceived__Delegate; // 0xFC (0xC)
	struct FScriptDelegate __OnSentGameInvite__Delegate; // 0x108 (0xC)
	struct FScriptDelegate __OnReceivedGameInvite__Delegate; // 0x114 (0xC)
	struct FScriptDelegate __OnJoinFriendGameComplete__Delegate; // 0x120 (0xC)
	struct FScriptDelegate __OnFriendMessageReceived__Delegate; // 0x12C (0xC)
	struct FScriptDelegate __OnUnlockAchievementComplete__Delegate; // 0x138 (0xC)
	struct FScriptDelegate __OnReadAchievementsComplete__Delegate; // 0x144 (0xC)
};

struct UOnlinePlayerInterface {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UOnlinePlayerInterface_Data UOnlinePlayerInterface;
};

// 0x48 
struct UOnlineAccountInterface_Data {
	// Last Offset: 0x3C
	struct FScriptDelegate __OnCreateOnlineAccountCompleted__Delegate; // 0x3C (0xC)
};

struct UOnlineAccountInterface {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UOnlineAccountInterface_Data UOnlineAccountInterface;
};

// 0x298 
struct AAccessControl_Data {
	// Last Offset: 0x188
	struct TArray_FString IPPolicies; // 0x188 (0xC)
	struct TArray_FUniqueNetId BannedIDs; // 0x194 (0xC)
	struct FString IPBanned; // 0x1A0 (0xC)
	struct FString WrongPassword; // 0x1AC (0xC)
	struct FString NeedPassword; // 0x1B8 (0xC)
	struct FString SessionBanned; // 0x1C4 (0xC)
	struct FString KickedMsg; // 0x1D0 (0xC)
	struct FString DefaultKickReason; // 0x1DC (0xC)
	struct FString IdleKickReason; // 0x1E8 (0xC)
	struct FString AuthenticationFailed; // 0x1F4 (0xC)
	struct UClass* AdminClass; // 0x200 (0x4)
	struct FString AdminPassword; // 0x204 (0xC)
	struct FString GamePassword; // 0x210 (0xC)
	struct FString ACDisplayText[3]; // 0x21C (0x24)
	struct FString ACDescText[3]; // 0x240 (0x24)
	BOOL bDontAddDefaultAdmin :1 ; // 0x264 (0x4)
	BOOL bPendingPostSeamlessInit :1 ; // 0x264 (0x4)
	BOOL bAuthenticateClients :1 ; // 0x264 (0x4)
	BOOL bAuthenticateServer :1 ; // 0x264 (0x4)
	BOOL bAuthenticateListenHost :1 ; // 0x264 (0x4)
	BOOL bPendingListenAuth :1 ; // 0x264 (0x4)
	const unsigned long: 0;
	int MaxAuthRetryCount; // 0x268 (0x4)
	int AuthRetryDelay; // 0x26C (0x4)
	struct UOnlineSubsystem* OnlineSub; // 0x270 (0x4)
	struct UOnlineAuthInterfaceBaseImpl* CachedAuthInt; // 0x274 (0x4)
	struct TArray_FPendingClientAuth ClientsPendingAuth; // 0x278 (0xC)
	struct TArray_FServerAuthRetry ServerAuthRetries; // 0x284 (0xC)
	int ListenAuthBlobUID; // 0x290 (0x4)
	int ListenAuthRetryCount; // 0x294 (0x4)
};

struct AAccessControl {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct AAccessControl_Data AAccessControl;
};

// 0x8F0 
struct AAdmin_Data {
	// Last Offset: 0x8F0
};

struct AAdmin {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AController_Data AController;
	struct APlayerController_Data APlayerController;
	struct AAdmin_Data AAdmin;
};

// 0x3C 
struct UIScaleBehavior_Data {
	// Last Offset: 0x3C
};

struct UIScaleBehavior {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UIScaleBehavior_Data UIScaleBehavior;
};

// 0x1F4 
struct AApexDestructibleActorSpawnable_Data {
	// Last Offset: 0x1F4
};

struct AApexDestructibleActorSpawnable {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AApexDestructibleActor_Data AApexDestructibleActor;
	struct AApexDestructibleActorSpawnable_Data AApexDestructibleActorSpawnable;
};

// 0x198 
struct AEmitterSpawnable_Data {
	// Last Offset: 0x194
	struct UParticleSystem* ParticleTemplate; // 0x194 (0x4)
};

struct AEmitterSpawnable {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AEmitter_Data AEmitter;
	struct AEmitterSpawnable_Data AEmitterSpawnable;
};

// 0x198 
struct AKAssetSpawnable_Data {
	// Last Offset: 0x198
};

struct AKAssetSpawnable {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AKAsset_Data AKAsset;
	struct AKAssetSpawnable_Data AKAssetSpawnable;
};

// 0x8C 
struct UActorFactorySkeletalMeshCinematic_Data {
	// Last Offset: 0x8C
};

struct UActorFactorySkeletalMeshCinematic {
	struct UObject_Data UObject;
	struct UActorFactory_Data UActorFactory;
	struct UActorFactorySkeletalMesh_Data UActorFactorySkeletalMesh;
	struct UActorFactorySkeletalMeshCinematic_Data UActorFactorySkeletalMeshCinematic;
};

// 0x8C 
struct UActorFactorySkeletalMeshMAT_Data {
	// Last Offset: 0x8C
};

struct UActorFactorySkeletalMeshMAT {
	struct UObject_Data UObject;
	struct UActorFactory_Data UActorFactory;
	struct UActorFactorySkeletalMesh_Data UActorFactorySkeletalMesh;
	struct UActorFactorySkeletalMeshMAT_Data UActorFactorySkeletalMeshMAT;
};

// 0xC4 
struct USeqEvent_Death_Data {
	// Last Offset: 0xC4
};

struct USeqEvent_Death {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceEvent_Data USequenceEvent;
	struct USeqEvent_Death_Data USeqEvent_Death;
};

// 0xA4 
struct USeqAct_ToggleGodMode_Data {
	// Last Offset: 0xA4
};

struct USeqAct_ToggleGodMode {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_ToggleGodMode_Data USeqAct_ToggleGodMode;
};

// 0xA8 
struct USeqAct_ControlMovieTexture_Data {
	// Last Offset: 0xA4
	struct UTextureMovie* MovieTexture; // 0xA4 (0x4)
};

struct USeqAct_ControlMovieTexture {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_ControlMovieTexture_Data USeqAct_ControlMovieTexture;
};

// 0x3C 
struct UIParameterBehavior_Data {
	// Last Offset: 0x3C
};

struct UIParameterBehavior {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UIParameterBehavior_Data UIParameterBehavior;
};

// 0x194 
struct ACoverReplicator_Data {
	// Last Offset: 0x188
	struct TArray_FCoverReplicationInfo CoverReplicationData; // 0x188 (0xC)
};

struct ACoverReplicator {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct AReplicationInfo_Data AReplicationInfo;
	struct ACoverReplicator_Data ACoverReplicator;
};

// 0x160 
struct UGameMessage_Data {
	// Last Offset: 0x4C
	struct FString SwitchLevelMessage; // 0x4C (0xC)
	struct FString LeftMessage; // 0x58 (0xC)
	struct FString FailedTeamMessage; // 0x64 (0xC)
	struct FString FailedPlaceMessage; // 0x70 (0xC)
	struct FString FailedSpawnMessage; // 0x7C (0xC)
	struct FString EnteredMessage; // 0x88 (0xC)
	struct FString MaxedOutMessage; // 0x94 (0xC)
	struct FString ArbitrationMessage; // 0xA0 (0xC)
	struct FString OvertimeMessage; // 0xAC (0xC)
	struct FString GlobalNameChange; // 0xB8 (0xC)
	struct FString NewTeamMessage; // 0xC4 (0xC)
	struct FString NewTeamMessageTrailer; // 0xD0 (0xC)
	struct FString NoNameChange; // 0xDC (0xC)
	struct FString VoteStarted; // 0xE8 (0xC)
	struct FString VotePassed; // 0xF4 (0xC)
	struct FString MustHaveStats; // 0x100 (0xC)
	struct FString CantBeSpectator; // 0x10C (0xC)
	struct FString CantBePlayer; // 0x118 (0xC)
	struct FString BecameSpectator; // 0x124 (0xC)
	struct FString NewPlayerMessage; // 0x130 (0xC)
	struct FString KickWarning; // 0x13C (0xC)
	struct FString NewSpecMessage; // 0x148 (0xC)
	struct FString SpecEnteredMessage; // 0x154 (0xC)
};

struct UGameMessage {
	struct UObject_Data UObject;
	struct ULocalMessage_Data ULocalMessage;
	struct UGameMessage_Data UGameMessage;
};

// 0x64 
struct UDmgType_Suicided_Data {
	// Last Offset: 0x64
};

struct UDmgType_Suicided {
	struct UObject_Data UObject;
	struct UDamageType_Data UDamageType;
	struct UKillZDamageType_Data UKillZDamageType;
	struct UDmgType_Suicided_Data UDmgType_Suicided;
};

// 0xA8 
struct USeqAct_ToggleInput_Data {
	// Last Offset: 0xA4
	BOOL bToggleMovement :1 ; // 0xA4 (0x4)
	BOOL bToggleTurning :1 ; // 0xA4 (0x4)
	const unsigned long: 0;
};

struct USeqAct_ToggleInput {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_Toggle_Data USeqAct_Toggle;
	struct USeqAct_ToggleInput_Data USeqAct_ToggleInput;
};

// 0xA4 
struct USeqAct_ToggleHUD_Data {
	// Last Offset: 0xA4
};

struct USeqAct_ToggleHUD {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_ToggleHUD_Data USeqAct_ToggleHUD;
};

// 0xAC 
struct USeqAct_ForceFeedback_Data {
	// Last Offset: 0xA4
	struct UForceFeedbackWaveform* FFWaveform; // 0xA4 (0x4)
	struct UClass* PredefinedWaveForm; // 0xA8 (0x4)
};

struct USeqAct_ForceFeedback {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_ForceFeedback_Data USeqAct_ForceFeedback;
};

// 0xA8 
struct USeqAct_ToggleCinematicMode_Data {
	// Last Offset: 0xA4
	BOOL bDisableMovement :1 ; // 0xA4 (0x4)
	BOOL bDisableTurning :1 ; // 0xA4 (0x4)
	BOOL bHidePlayer :1 ; // 0xA4 (0x4)
	BOOL bDisableInput :1 ; // 0xA4 (0x4)
	BOOL bHideHUD :1 ; // 0xA4 (0x4)
	BOOL bEnableGodMode :1 ; // 0xA4 (0x4)
	BOOL bEnableNoTarget :1 ; // 0xA4 (0x4)
	BOOL bPauseDialog :1 ; // 0xA4 (0x4)
	BOOL bCinematicSplitScreen :1 ; // 0xA4 (0x4)
	const unsigned long: 0;
};

struct USeqAct_ToggleCinematicMode {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_ToggleCinematicMode_Data USeqAct_ToggleCinematicMode;
};

// 0xA4 
struct USeqAct_FlyThroughHasEnded_Data {
	// Last Offset: 0xA4
};

struct USeqAct_FlyThroughHasEnded {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_FlyThroughHasEnded_Data USeqAct_FlyThroughHasEnded;
};

// 0xAC 
struct USeqAct_SetSoundMode_Data {
	// Last Offset: 0xA4
	struct USoundMode* SoundMode; // 0xA4 (0x4)
	BOOL bTopPriority :1 ; // 0xA8 (0x4)
	const unsigned long: 0;
};

struct USeqAct_SetSoundMode {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_SetSoundMode_Data USeqAct_SetSoundMode;
};

// 0x68 
struct UAnimNotify_PlayFaceFXAnim_Data {
	// Last Offset: 0x3C
	struct UFaceFXAnimSet* FaceFXAnimSetRef; // 0x3C (0x4)
	struct FString GroupName; // 0x40 (0xC)
	struct FString AnimName; // 0x4C (0xC)
	struct USoundCue* SoundCueToPlay; // 0x58 (0x4)
	struct UAkEvent* AkEventToPlay; // 0x5C (0x4)
	BOOL bOverridePlayingAnim :1 ; // 0x60 (0x4)
	const unsigned long: 0;
	float PlayFrequency; // 0x64 (0x4)
};

struct UAnimNotify_PlayFaceFXAnim {
	struct UObject_Data UObject;
	struct UAnimNotify_Data UAnimNotify;
	struct UAnimNotify_Scripted_Data UAnimNotify_Scripted;
	struct UAnimNotify_PlayFaceFXAnim_Data UAnimNotify_PlayFaceFXAnim;
};

// 0x54 
struct UBehavior_ChangeAllegiance_Data {
	// Last Offset: 0x4C
	BOOL bResetAllegiance :1 ; // 0x4C (0x4)
	const unsigned long: 0;
	struct UPawnAllegiance* Allegiance; // 0x50 (0x4)
};

struct UBehavior_ChangeAllegiance {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_ChangeAllegiance_Data UBehavior_ChangeAllegiance;
};

// 0x58 
struct UBehavior_ChangeBoneVisibility_Data {
	// Last Offset: 0x4C
	unsigned char Status; // 0x4C (0x1) (Enum = EChangeStatus)
	const unsigned char Unknown1[0x3]; // 0x4D (0x3) > LAST OFFSET
	struct FName BoneName; // 0x50 (0x8)
};

struct UBehavior_ChangeBoneVisibility {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_ChangeBoneVisibility_Data UBehavior_ChangeBoneVisibility;
};

// 0x4D 
struct UBehavior_ChangeCollision_Data {
	// Last Offset: 0x4C
	unsigned char NewCollisionType; // 0x4C (0x1) (Enum = ECollisionType)
};

struct UBehavior_ChangeCollision {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_ChangeCollision_Data UBehavior_ChangeCollision;
};

// 0x54 
struct UBehavior_ChangeCollisionSize_Data {
	// Last Offset: 0x4C
	float Radius; // 0x4C (0x4)
	float Height; // 0x50 (0x4)
};

struct UBehavior_ChangeCollisionSize {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_ChangeCollisionSize_Data UBehavior_ChangeCollisionSize;
};

// 0x60 
struct UBehavior_ChangeCounter_Data {
	// Last Offset: 0x4C
	unsigned char CounterId; // 0x4C (0x1) (Enum = EBehaviorCounterID)
	const unsigned char Unknown1[0x3]; // 0x4D (0x3) > LAST OFFSET
	int CounterAdjustment; // 0x50 (0x4)
	BOOL bSetNewCounterValue :1 ; // 0x54 (0x4)
	BOOL bSetNewCounterTarget :1 ; // 0x54 (0x4)
	const unsigned long: 0;
	int NewCounterValue; // 0x58 (0x4)
	int NewCounterTarget; // 0x5C (0x4)
};

struct UBehavior_ChangeCounter {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_ChangeCounter_Data UBehavior_ChangeCounter;
};

// 0x4D 
struct UBehavior_ChangeParticleSystemActiveState_Data {
	// Last Offset: 0x4C
	unsigned char Status; // 0x4C (0x1) (Enum = EChangeStatus)
};

struct UBehavior_ChangeParticleSystemActiveState {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_ChangeParticleSystemActiveState_Data UBehavior_ChangeParticleSystemActiveState;
};

// 0x3C 
struct UIParticleSystemBehavior_Data {
	// Last Offset: 0x3C
};

struct UIParticleSystemBehavior {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UIParticleSystemBehavior_Data UIParticleSystemBehavior;
};

// 0x50 
struct UBehavior_ChangeScale_Data {
	// Last Offset: 0x4C
	float Scale; // 0x4C (0x4)
};

struct UBehavior_ChangeScale {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_ChangeScale_Data UBehavior_ChangeScale;
};

// 0x5C 
struct UBehavior_ChangeSpin_Data {
	// Last Offset: 0x4C
	BOOL bApplyRandomScaleToSpin :1 ; // 0x4C (0x4)
	BOOL bInheritInstigatorRotation :1 ; // 0x4C (0x4)
	const unsigned long: 0;
	int YawRate; // 0x50 (0x4)
	int PitchRate; // 0x54 (0x4)
	int RollRate; // 0x58 (0x4)
};

struct UBehavior_ChangeSpin {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_ChangeSpin_Data UBehavior_ChangeSpin;
};

// 0x3C 
struct UIBasicBehavior_Data {
	// Last Offset: 0x3C
};

struct UIBasicBehavior {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UIBasicBehavior_Data UIBasicBehavior;
};

// 0x4D 
struct UBehavior_ChangeVisibility_Data {
	// Last Offset: 0x4C
	unsigned char Status; // 0x4C (0x1) (Enum = EChangeStatus)
};

struct UBehavior_ChangeVisibility {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_ChangeVisibility_Data UBehavior_ChangeVisibility;
};

// 0x58 
struct UBehavior_ClientConsoleCommand_Data {
	// Last Offset: 0x4C
	struct FString Command; // 0x4C (0xC)
};

struct UBehavior_ClientConsoleCommand {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_ClientConsoleCommand_Data UBehavior_ClientConsoleCommand;
};

// 0x58 
struct UBehavior_ConsoleCommand_Data {
	// Last Offset: 0x4C
	struct FString Command; // 0x4C (0xC)
};

struct UBehavior_ConsoleCommand {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_ConsoleCommand_Data UBehavior_ConsoleCommand;
};

// 0x74 
struct UBehavior_CustomAnimation_Data {
	// Last Offset: 0x4C
	unsigned char Reaction; // 0x4C (0x1) (Enum = EBehaviorCustomAnimationReaction)
	const unsigned char Unknown1[0x3]; // 0x4D (0x3) > LAST OFFSET
	struct FName CustomAnimNodeName; // 0x50 (0x8)
	struct FName AnimName; // 0x58 (0x8)
	float AnimDuration; // 0x60 (0x4)
	float BlendInTime; // 0x64 (0x4)
	float BlendOutTime; // 0x68 (0x4)
	float AnimRate; // 0x6C (0x4)
	BOOL bLooping :1 ; // 0x70 (0x4)
	const unsigned long: 0;
};

struct UBehavior_CustomAnimation {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_CustomAnimation_Data UBehavior_CustomAnimation;
};

// 0x4C 
struct UBehavior_Destroy_Data {
	// Last Offset: 0x4C
};

struct UBehavior_Destroy {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_Destroy_Data UBehavior_Destroy;
};

// 0x60 
struct UBehavior_FollowAllegiance_Data {
	// Last Offset: 0x4C
	unsigned char Action; // 0x4C (0x1) (Enum = EFollowAllegiance)
	const unsigned char Unknown1[0x3]; // 0x4D (0x3) > LAST OFFSET
	struct FBehaviorContextData AllegianceParent; // 0x50 (0x10)
};

struct UBehavior_FollowAllegiance {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_FollowAllegiance_Data UBehavior_FollowAllegiance;
};

// 0x70 
struct UBehavior_RandomlyRunBehaviors_Data {
	// Last Offset: 0x4C
	struct FBehaviorContextData ProbabilityContext; // 0x4C (0x10)
	float ProbabilityLowerBound; // 0x5C (0x4)
	float ProbabilityUpperBound; // 0x60 (0x4)
	struct TArray_FIndependentSelectionData Possibilities; // 0x64 (0xC)
};

struct UBehavior_RandomlyRunBehaviors {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_RandomlyRunBehaviors_Data UBehavior_RandomlyRunBehaviors;
};

// 0x68 
struct UBehavior_RunBehaviorCollection_Data {
	// Last Offset: 0x4C
	struct UBehaviorCollectionDefinition* CollectionDefinition; // 0x4C (0x4)
	struct FName OverrideName; // 0x50 (0x8)
	struct FBehaviorContextData OverrideContext; // 0x58 (0x10)
};

struct UBehavior_RunBehaviorCollection {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_RunBehaviorCollection_Data UBehavior_RunBehaviorCollection;
};

// 0x48 
struct UBehaviorCollectionDefinition_Data {
	// Last Offset: 0x3C
	struct TArray_UBehaviorBasePtr Behaviors; // 0x3C (0xC)
};

struct UBehaviorCollectionDefinition {
	struct UObject_Data UObject;
	struct UGBXDefinition_Data UGBXDefinition;
	struct UBehaviorCollectionDefinition_Data UBehaviorCollectionDefinition;
};

// 0x84 
struct UBehavior_SetMaterialParameters_Data {
	// Last Offset: 0x4C
	struct FBehaviorContextData AttributeContext; // 0x4C (0x10)
	int MeshSection; // 0x5C (0x4)
	struct TArray_FScalarMaterialParameter ScalarParameterValues; // 0x60 (0xC)
	struct TArray_FVectorMaterialParameter VectorParameterValues; // 0x6C (0xC)
	struct TArray_FTextureMaterialParameter TextureParameterValues; // 0x78 (0xC)
};

struct UBehavior_SetMaterialParameters {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_SetMaterialParameters_Data UBehavior_SetMaterialParameters;
};

// 0x3C 
struct UIMaterialBehavior_Data {
	// Last Offset: 0x3C
};

struct UIMaterialBehavior {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UIMaterialBehavior_Data UIMaterialBehavior;
};

// 0x98 
struct UBehavior_SetParticleSystemParameters_Data {
	// Last Offset: 0x4C
	struct FBehaviorContextData AttributeContext; // 0x4C (0x10)
	struct TArray_FScalarParticleSystemParameter ScalarParameterValues; // 0x5C (0xC)
	struct TArray_FVectorParticleSystemParameter VectorParameterValues; // 0x68 (0xC)
	struct TArray_FColorParticleSystemParameter ColorParameterValues; // 0x74 (0xC)
	struct TArray_FMaterialParticleSystemParameter MaterialParameterValues; // 0x80 (0xC)
	struct TArray_FActorParticleSystemParameter ActorParameterValues; // 0x8C (0xC)
};

struct UBehavior_SetParticleSystemParameters {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_SetParticleSystemParameters_Data UBehavior_SetParticleSystemParameters;
};

// 0x4F 
struct UBehavior_SetPhysics_Data {
	// Last Offset: 0x4C
	unsigned char Physics; // 0x4C (0x1) (Enum = EPhysics)
	unsigned char BodyAction; // 0x4D (0x1) (Enum = EBodyAction)
	unsigned char SimulationAction; // 0x4E (0x1) (Enum = ESimulationAction)
};

struct UBehavior_SetPhysics {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_SetPhysics_Data UBehavior_SetPhysics;
};

// 0x58 
struct UBehavior_SetSkelControlActive_Data {
	// Last Offset: 0x4C
	struct FName SkelControlName; // 0x4C (0x8)
	BOOL bActive :1 ; // 0x54 (0x4)
	const unsigned long: 0;
};

struct UBehavior_SetSkelControlActive {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_SetSkelControlActive_Data UBehavior_SetSkelControlActive;
};

// 0x4C 
struct UBehavior_ToggleVisibility_Data {
	// Last Offset: 0x4C
};

struct UBehavior_ToggleVisibility {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UBehavior_ToggleVisibility_Data UBehavior_ToggleVisibility;
};

// 0x190 
struct ABroadcastHandler_Data {
	// Last Offset: 0x188
	int SentText; // 0x188 (0x4)
	BOOL bMuteSpectators :1 ; // 0x18C (0x4)
	const unsigned long: 0;
};

struct ABroadcastHandler {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct ABroadcastHandler_Data ABroadcastHandler;
};

// 0x1CC 
struct AColorScaleVolume_Data {
	// Last Offset: 0x1BC
	struct FVector ColorScale; // 0x1BC (0xC)
	float InterpTime; // 0x1C8 (0x4)
};

struct AColorScaleVolume {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ABrush_Data ABrush;
	struct AVolume_Data AVolume;
	struct AColorScaleVolume_Data AColorScaleVolume;
};

// 0x224 
struct ADebugCameraHUD_Data {
	// Last Offset: 0x224
};

struct ADebugCameraHUD {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AHUD_Data AHUD;
	struct ADebugCameraHUD_Data ADebugCameraHUD;
};

// 0x17C 
struct UDebugCameraInput_Data {
	// Last Offset: 0x17C
};

struct UDebugCameraInput {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UInteraction_Data UInteraction;
	struct UInput_Data UInput;
	struct UPlayerInput_Data UPlayerInput;
	struct UDebugCameraInput_Data UDebugCameraInput;
};

// 0x18C 
struct AVolumeTimer_Data {
	// Last Offset: 0x188
	struct APhysicsVolume* V; // 0x188 (0x4)
};

struct AVolumeTimer {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct AVolumeTimer_Data AVolumeTimer;
};

// 0xA8 
struct USeqAct_SetDamageInstigator_Data {
	// Last Offset: 0xA4
	struct AActor* DamageInstigator; // 0xA4 (0x4)
};

struct USeqAct_SetDamageInstigator {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_SetDamageInstigator_Data USeqAct_SetDamageInstigator;
};

// 0x64 
struct UDmgType_Crushed_Data {
	// Last Offset: 0x64
};

struct UDmgType_Crushed {
	struct UObject_Data UObject;
	struct UDamageType_Data UDamageType;
	struct UDmgType_Crushed_Data UDmgType_Crushed;
};

// 0x64 
struct UDmgType_Fell_Data {
	// Last Offset: 0x64
};

struct UDmgType_Fell {
	struct UObject_Data UObject;
	struct UDamageType_Data UDamageType;
	struct UDmgType_Fell_Data UDmgType_Fell;
};

// 0x64 
struct UDmgType_Telefragged_Data {
	// Last Offset: 0x64
};

struct UDmgType_Telefragged {
	struct UObject_Data UObject;
	struct UDamageType_Data UDamageType;
	struct UDmgType_Telefragged_Data UDmgType_Telefragged;
};

// 0x208 
struct ADynamicPhysicsVolume_Data {
	// Last Offset: 0x204
	BOOL bEnabled :1 ; // 0x204 (0x4)
	const unsigned long: 0;
};

struct ADynamicPhysicsVolume {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ABrush_Data ABrush;
	struct AVolume_Data AVolume;
	struct APhysicsVolume_Data APhysicsVolume;
	struct ADynamicPhysicsVolume_Data ADynamicPhysicsVolume;
};

// 0x1C4 
struct ADynamicSMActor_Spawnable_Data {
	// Last Offset: 0x1C4
};

struct ADynamicSMActor_Spawnable {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ADynamicSMActor_Data ADynamicSMActor;
	struct ADynamicSMActor_Spawnable_Data ADynamicSMActor_Spawnable;
};

// 0x1C0 
struct ADynamicTriggerVolume_Data {
	// Last Offset: 0x1BC
	BOOL bEnabled :1 ; // 0x1BC (0x4)
	const unsigned long: 0;
};

struct ADynamicTriggerVolume {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ABrush_Data ABrush;
	struct AVolume_Data AVolume;
	struct ATriggerVolume_Data ATriggerVolume;
	struct ADynamicTriggerVolume_Data ADynamicTriggerVolume;
};

// 0xB8 
struct USeqAct_SetParticleSysParam_Data {
	// Last Offset: 0xA4
	struct TArray_FParticleSysParam InstanceParameters; // 0xA4 (0xC)
	BOOL bOverrideScalar :1 ; // 0xB0 (0x4)
	const unsigned long: 0;
	float ScalarValue; // 0xB4 (0x4)
};

struct USeqAct_SetParticleSysParam {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_SetParticleSysParam_Data USeqAct_SetParticleSysParam;
};

// 0x190 
struct AExponentialHeightFog_Data {
	// Last Offset: 0x188
	struct UExponentialHeightFogComponent* Component; // 0x188 (0x4)
	BOOL bEnabled :1 ; // 0x18C (0x4)
	const unsigned long: 0;
};

struct AExponentialHeightFog {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct AExponentialHeightFog_Data AExponentialHeightFog;
};

// 0x7C 
struct UFailedConnect_Data {
	// Last Offset: 0x4C
	struct FString FailMessage[4]; // 0x4C (0x30)
};

struct UFailedConnect {
	struct UObject_Data UObject;
	struct ULocalMessage_Data ULocalMessage;
	struct UFailedConnect_Data UFailedConnect;
};

// 0xC8 
struct USeqEvent_PlayerSpawned_Data {
	// Last Offset: 0xC4
	struct UObject* SpawnPoint; // 0xC4 (0x4)
};

struct USeqEvent_PlayerSpawned {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceEvent_Data USequenceEvent;
	struct USeqEvent_PlayerSpawned_Data USeqEvent_PlayerSpawned;
};

// 0x3C 
struct UGameReplicationInfoAttributeContextResolver_Data {
	// Last Offset: 0x3C
};

struct UGameReplicationInfoAttributeContextResolver {
	struct UObject_Data UObject;
	struct UAttributeContextResolver_Data UAttributeContextResolver;
	struct UGameReplicationInfoAttributeContextResolver_Data UGameReplicationInfoAttributeContextResolver;
};

// 0x19C 
struct AHoldingAreaDestination_Data {
	// Last Offset: 0x19C
};

struct AHoldingAreaDestination {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ATeleporterDestination_Data ATeleporterDestination;
	struct AHoldingAreaDestination_Data AHoldingAreaDestination;
};

// 0x190 
struct AHeightFog_Data {
	// Last Offset: 0x188
	struct UHeightFogComponent* Component; // 0x188 (0x4)
	BOOL bEnabled :1 ; // 0x18C (0x4)
	const unsigned long: 0;
};

struct AHeightFog {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct AHeightFog_Data AHeightFog;
};

// 0x3C 
struct UIChangeBehaviorSetStateBehavior_Data {
	// Last Offset: 0x3C
};

struct UIChangeBehaviorSetStateBehavior {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UIChangeBehaviorSetStateBehavior_Data UIChangeBehaviorSetStateBehavior;
};

// 0x3C 
struct UIDamageBehavior_Data {
	// Last Offset: 0x3C
};

struct UIDamageBehavior {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UIDamageBehavior_Data UIDamageBehavior;
};

// 0x1F4 
struct AInterpActor_ForCinematic_Data {
	// Last Offset: 0x1F4
};

struct AInterpActor_ForCinematic {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ADynamicSMActor_Data ADynamicSMActor;
	struct AInterpActor_Data AInterpActor;
	struct AInterpActor_ForCinematic_Data AInterpActor_ForCinematic;
};

// 0x18C 
struct AMaterialInstanceTimeVaryingActor_Data {
	// Last Offset: 0x188
	struct UMaterialInstanceTimeVarying* MatInst; // 0x188 (0x4)
};

struct AMaterialInstanceTimeVaryingActor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AMaterialInstanceTimeVaryingActor_Data AMaterialInstanceTimeVaryingActor;
};

// 0xA8 
struct USeqAct_AssignController_Data {
	// Last Offset: 0xA4
	struct UClass* ControllerClass; // 0xA4 (0x4)
};

struct USeqAct_AssignController {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_AssignController_Data USeqAct_AssignController;
};

// 0x78 
struct UOnlineCommunityContentInterface_Data {
	// Last Offset: 0x3C
	struct FScriptDelegate __OnReadContentListComplete__Delegate; // 0x3C (0xC)
	struct FScriptDelegate __OnReadFriendsContentListComplete__Delegate; // 0x48 (0xC)
	struct FScriptDelegate __OnUploadContentComplete__Delegate; // 0x54 (0xC)
	struct FScriptDelegate __OnDownloadContentComplete__Delegate; // 0x60 (0xC)
	struct FScriptDelegate __OnGetContentPayloadComplete__Delegate; // 0x6C (0xC)
};

struct UOnlineCommunityContentInterface {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UOnlineCommunityContentInterface_Data UOnlineCommunityContentInterface;
};

// 0x3C 
struct UOnlineEventsInterface_Data {
	// Last Offset: 0x3C
};

struct UOnlineEventsInterface {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UOnlineEventsInterface_Data UOnlineEventsInterface;
};

// 0xAC 
struct UOnlinePlaylistGameTypeProvider_Data {
	// Last Offset: 0x88
	struct FName PlaylistGameTypeName; // 0x88 (0x8)
	struct FString DisplayName; // 0x90 (0xC)
	struct FString Description; // 0x9C (0xC)
	int GameTypeId; // 0xA8 (0x4)
};

struct UOnlinePlaylistGameTypeProvider {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
	struct UUIPropertyDataProvider_Data UUIPropertyDataProvider;
	struct UUIResourceDataProvider_Data UUIResourceDataProvider;
	struct UOnlinePlaylistGameTypeProvider_Data UOnlinePlaylistGameTypeProvider;
};

// 0x94 
struct UOnlineRecentPlayersList_Data {
	// Last Offset: 0x3C
	struct TArray_FUniqueNetId RecentPlayers; // 0x3C (0xC)
	struct TArray_FRecentParty RecentParties; // 0x48 (0xC)
	struct FRecentParty LastParty; // 0x54 (0x24)
	int MaxRecentPlayers; // 0x78 (0x4)
	int MaxRecentParties; // 0x7C (0x4)
	int RecentPlayersAddIndex; // 0x80 (0x4)
	int RecentPartiesAddIndex; // 0x84 (0x4)
	struct TArray_FCurrentPlayerMet CurrentPlayers; // 0x88 (0xC)
};

struct UOnlineRecentPlayersList {
	struct UObject_Data UObject;
	struct UOnlineRecentPlayersList_Data UOnlineRecentPlayersList;
};

// 0x48 
struct UOnlineSuppliedUIInterface_Data {
	// Last Offset: 0x3C
	struct FScriptDelegate __OnShowOnlineStatsUIComplete__Delegate; // 0x3C (0xC)
};

struct UOnlineSuppliedUIInterface {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UOnlineSuppliedUIInterface_Data UOnlineSuppliedUIInterface;
};

// 0x3C 
struct UOwnerAttributeContextResolver_Data {
	// Last Offset: 0x3C
};

struct UOwnerAttributeContextResolver {
	struct UObject_Data UObject;
	struct UAttributeContextResolver_Data UAttributeContextResolver;
	struct UOwnerAttributeContextResolver_Data UOwnerAttributeContextResolver;
};

// 0x58 
struct UParameterBehaviorBase_Data {
	// Last Offset: 0x4C
	struct FName ParameterName; // 0x4C (0x8)
	int SectionIndex; // 0x54 (0x4)
};

struct UParameterBehaviorBase {
	struct UObject_Data UObject;
	struct UBehaviorBase_Data UBehaviorBase;
	struct UParameterBehaviorBase_Data UParameterBehaviorBase;
};

// 0x48 
struct UParticleModuleForceFieldCylindrical_Data {
	// Last Offset: 0x48
};

struct UParticleModuleForceFieldCylindrical {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleForceFieldBase_Data UParticleModuleForceFieldBase;
	struct UParticleModuleForceFieldCylindrical_Data UParticleModuleForceFieldCylindrical;
};

// 0x48 
struct UParticleModuleForceFieldGeneric_Data {
	// Last Offset: 0x48
};

struct UParticleModuleForceFieldGeneric {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleForceFieldBase_Data UParticleModuleForceFieldBase;
	struct UParticleModuleForceFieldGeneric_Data UParticleModuleForceFieldGeneric;
};

// 0x48 
struct UParticleModuleForceFieldRadial_Data {
	// Last Offset: 0x48
};

struct UParticleModuleForceFieldRadial {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleForceFieldBase_Data UParticleModuleForceFieldBase;
	struct UParticleModuleForceFieldRadial_Data UParticleModuleForceFieldRadial;
};

// 0x48 
struct UParticleModuleForceFieldTornado_Data {
	// Last Offset: 0x48
};

struct UParticleModuleForceFieldTornado {
	struct UObject_Data UObject;
	struct UParticleModule_Data UParticleModule;
	struct UParticleModuleForceFieldBase_Data UParticleModuleForceFieldBase;
	struct UParticleModuleForceFieldTornado_Data UParticleModuleForceFieldTornado;
};

// 0x244 
struct APathNode_Dynamic_Data {
	// Last Offset: 0x244
};

struct APathNode_Dynamic {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ANavigationPoint_Data ANavigationPoint;
	struct APathNode_Data APathNode;
	struct APathNode_Dynamic_Data APathNode_Dynamic;
};

// 0xC4 
struct USeqEvent_PickupStatusChange_Data {
	// Last Offset: 0xC4
};

struct USeqEvent_PickupStatusChange {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceEvent_Data USequenceEvent;
	struct USeqEvent_PickupStatusChange_Data USeqEvent_PickupStatusChange;
};

// 0x3C 
struct UProjectileAttributeContextResolver_Data {
	// Last Offset: 0x3C
};

struct UProjectileAttributeContextResolver {
	struct UObject_Data UObject;
	struct UAttributeContextResolver_Data UAttributeContextResolver;
	struct UProjectileAttributeContextResolver_Data UProjectileAttributeContextResolver;
};

// 0x18C 
struct ARadialBlurActor_Data {
	// Last Offset: 0x188
	struct URadialBlurComponent* RadialBlur; // 0x188 (0x4)
};

struct ARadialBlurActor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ARadialBlurActor_Data ARadialBlurActor;
};

// 0xA8 
struct USeqAct_ToggleConstraintDrive_Data {
	// Last Offset: 0xA4
	BOOL bEnableAngularPositionDrive :1 ; // 0xA4 (0x4)
	BOOL bEnableAngularVelocityDrive :1 ; // 0xA4 (0x4)
	BOOL bEnableLinearPositionDrive :1 ; // 0xA4 (0x4)
	BOOL bEnableLinearvelocityDrive :1 ; // 0xA4 (0x4)
	const unsigned long: 0;
};

struct USeqAct_ToggleConstraintDrive {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_ToggleConstraintDrive_Data USeqAct_ToggleConstraintDrive;
};

// 0x1A4 
struct ARB_BSJointActor_Data {
	// Last Offset: 0x1A4
};

struct ARB_BSJointActor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ARigidBodyBase_Data ARigidBodyBase;
	struct ARB_ConstraintActor_Data ARB_ConstraintActor;
	struct ARB_BSJointActor_Data ARB_BSJointActor;
};

// 0x1A4 
struct ARB_ConstraintActorSpawnable_Data {
	// Last Offset: 0x1A4
};

struct ARB_ConstraintActorSpawnable {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ARigidBodyBase_Data ARigidBodyBase;
	struct ARB_ConstraintActor_Data ARB_ConstraintActor;
	struct ARB_ConstraintActorSpawnable_Data ARB_ConstraintActorSpawnable;
};

// 0x1A4 
struct ARB_HingeActor_Data {
	// Last Offset: 0x1A4
};

struct ARB_HingeActor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ARigidBodyBase_Data ARigidBodyBase;
	struct ARB_ConstraintActor_Data ARB_ConstraintActor;
	struct ARB_HingeActor_Data ARB_HingeActor;
};

// 0x1A4 
struct ARB_PrismaticActor_Data {
	// Last Offset: 0x1A4
};

struct ARB_PrismaticActor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ARigidBodyBase_Data ARigidBodyBase;
	struct ARB_ConstraintActor_Data ARB_ConstraintActor;
	struct ARB_PrismaticActor_Data ARB_PrismaticActor;
};

// 0x1A4 
struct ARB_PulleyJointActor_Data {
	// Last Offset: 0x1A4
};

struct ARB_PulleyJointActor {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ARigidBodyBase_Data ARigidBodyBase;
	struct ARB_ConstraintActor_Data ARB_ConstraintActor;
	struct ARB_PulleyJointActor_Data ARB_PulleyJointActor;
};

// 0x208 
struct AReverbVolumeToggleable_Data {
	// Last Offset: 0x208
};

struct AReverbVolumeToggleable {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ABrush_Data ABrush;
	struct AVolume_Data AVolume;
	struct AReverbVolume_Data AReverbVolume;
	struct AReverbVolumeToggleable_Data AReverbVolumeToggleable;
};

// 0xB0 
struct USeqAct_AddRemoveFaceFXAnimSet_Data {
	// Last Offset: 0xA4
	struct TArray_UFaceFXAnimSetPtr FaceFXAnimSets; // 0xA4 (0xC)
};

struct USeqAct_AddRemoveFaceFXAnimSet {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_AddRemoveFaceFXAnimSet_Data USeqAct_AddRemoveFaceFXAnimSet;
};

// 0xA4 
struct USeqAct_AIAbortMoveToActor_Data {
	// Last Offset: 0xA4
};

struct USeqAct_AIAbortMoveToActor {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_AIAbortMoveToActor_Data USeqAct_AIAbortMoveToActor;
};

// 0xA8 
struct USeqAct_MITV_Activate_Data {
	// Last Offset: 0xA4
	float DurationOfMITV; // 0xA4 (0x4)
};

struct USeqAct_MITV_Activate {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_MITV_Activate_Data USeqAct_MITV_Activate;
};

// 0xB8 
struct USeqAct_SetSkelControlTarget_Data {
	// Last Offset: 0xA4
	struct FName SkelControlName; // 0xA4 (0x8)
	struct TArray_UObjectPtr TargetActors; // 0xAC (0xC)
};

struct USeqAct_SetSkelControlTarget {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_SetSkelControlTarget_Data USeqAct_SetSkelControlTarget;
};

// 0xB0 
struct USeqAct_SetVector_Data {
	// Last Offset: 0xA4
	struct FVector DefaultValue; // 0xA4 (0xC)
};

struct USeqAct_SetVector {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_SetSequenceVariable_Data USeqAct_SetSequenceVariable;
	struct USeqAct_SetVector_Data USeqAct_SetVector;
};

// 0xA4 
struct USeqAct_UpdatePhysBonesFromAnim_Data {
	// Last Offset: 0xA4
};

struct USeqAct_UpdatePhysBonesFromAnim {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_UpdatePhysBonesFromAnim_Data USeqAct_UpdatePhysBonesFromAnim;
};

// 0xC4 
struct USeqEvent_AIReachedRouteActor_Data {
	// Last Offset: 0xC4
};

struct USeqEvent_AIReachedRouteActor {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceEvent_Data USequenceEvent;
	struct USeqEvent_AIReachedRouteActor_Data USeqEvent_AIReachedRouteActor;
};

// 0xD0 
struct USeqEvent_LOS_Data {
	// Last Offset: 0xC4
	float ScreenCenterDistance; // 0xC4 (0x4)
	float TriggerDistance; // 0xC8 (0x4)
	BOOL bCheckForObstructions :1 ; // 0xCC (0x4)
	const unsigned long: 0;
};

struct USeqEvent_LOS {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceEvent_Data USequenceEvent;
	struct USeqEvent_LOS_Data USeqEvent_LOS;
};

// 0x58 
struct USeqVar_Byte_Data {
	// Last Offset: 0x58
};

struct USeqVar_Byte {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceVariable_Data USequenceVariable;
	struct USeqVar_Byte_Data USeqVar_Byte;
};

// 0x58 
struct USeqVar_Name_Data {
	// Last Offset: 0x58
};

struct USeqVar_Name {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceVariable_Data USequenceVariable;
	struct USeqVar_Name_Data USeqVar_Name;
};

// 0x58 
struct USeqVar_Union_Data {
	// Last Offset: 0x58
};

struct USeqVar_Union {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceVariable_Data USequenceVariable;
	struct USeqVar_Union_Data USeqVar_Union;
};

// 0x1D8 
struct ASkeletalMeshActorMATSpawnable_Data {
	// Last Offset: 0x1D8
};

struct ASkeletalMeshActorMATSpawnable {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ASkeletalMeshActor_Data ASkeletalMeshActor;
	struct ASkeletalMeshCinematicActor_Data ASkeletalMeshCinematicActor;
	struct ASkeletalMeshActorMAT_Data ASkeletalMeshActorMAT;
	struct ASkeletalMeshActorMATSpawnable_Data ASkeletalMeshActorMATSpawnable;
};

// 0x1D8 
struct ASkeletalMeshActorMATWalkable_Data {
	// Last Offset: 0x1D8
};

struct ASkeletalMeshActorMATWalkable {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ASkeletalMeshActor_Data ASkeletalMeshActor;
	struct ASkeletalMeshCinematicActor_Data ASkeletalMeshCinematicActor;
	struct ASkeletalMeshActorMAT_Data ASkeletalMeshActorMAT;
	struct ASkeletalMeshActorMATWalkable_Data ASkeletalMeshActorMATWalkable;
};

// 0x194 
struct ATrigger_Dynamic_Data {
	// Last Offset: 0x194
};

struct ATrigger_Dynamic {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ATrigger_Data ATrigger;
	struct ATrigger_Dynamic_Data ATrigger_Dynamic;
};

// 0x1A0 
struct ATrigger_LOS_Data {
	// Last Offset: 0x194
	struct TArray_APlayerControllerPtr PCsWithLOS; // 0x194 (0xC)
};

struct ATrigger_LOS {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ATrigger_Data ATrigger;
	struct ATrigger_LOS_Data ATrigger_LOS;
};

// 0x24C 
struct ATriggeredPath_Data {
	// Last Offset: 0x244
	BOOL bOpen :1 ; // 0x244 (0x4)
	const unsigned long: 0;
	struct AActor* MyTrigger; // 0x248 (0x4)
};

struct ATriggeredPath {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ANavigationPoint_Data ANavigationPoint;
	struct ATriggeredPath_Data ATriggeredPath;
};

// 0x1A0 
struct ATriggerStreamingLevel_Data {
	// Last Offset: 0x194
	struct TArray_FLevelStreamingData Levels; // 0x194 (0xC)
};

struct ATriggerStreamingLevel {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ATrigger_Data ATrigger;
	struct ATriggerStreamingLevel_Data ATriggerStreamingLevel;
};

// 0xB0 
struct UUICharacterSummary_Data {
	// Last Offset: 0x88
	struct FString ClassPathName; // 0x88 (0xC)
	struct FString CharacterName; // 0x94 (0xC)
	struct FString CharacterBio; // 0xA0 (0xC)
	BOOL bIsDisabled :1 ; // 0xAC (0x4)
	const unsigned long: 0;
};

struct UUICharacterSummary {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
	struct UUIPropertyDataProvider_Data UUIPropertyDataProvider;
	struct UUIResourceDataProvider_Data UUIResourceDataProvider;
	struct UUICharacterSummary_Data UUICharacterSummary;
};

// 0xD4 
struct UUIGameInfoSummary_Data {
	// Last Offset: 0x88
	struct FString ClassName; // 0x88 (0xC)
	struct FString GameAcronym; // 0x94 (0xC)
	struct FString MapPrefix; // 0xA0 (0xC)
	BOOL bIsTeamGame :1 ; // 0xAC (0x4)
	BOOL bIsDisabled :1 ; // 0xAC (0x4)
	const unsigned long: 0;
	struct FString GameSettingsClassName; // 0xB0 (0xC)
	struct FString GameName; // 0xBC (0xC)
	struct FString Description; // 0xC8 (0xC)
};

struct UUIGameInfoSummary {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
	struct UUIPropertyDataProvider_Data UUIPropertyDataProvider;
	struct UUIResourceDataProvider_Data UUIResourceDataProvider;
	struct UUIGameInfoSummary_Data UUIGameInfoSummary;
};

// 0xB0 
struct UUIWeaponSummary_Data {
	// Last Offset: 0x88
	struct FString ClassPathName; // 0x88 (0xC)
	struct FString FriendlyName; // 0x94 (0xC)
	struct FString WeaponDescription; // 0xA0 (0xC)
	BOOL bIsDisabled :1 ; // 0xAC (0x4)
	const unsigned long: 0;
};

struct UUIWeaponSummary {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
	struct UUIPropertyDataProvider_Data UUIPropertyDataProvider;
	struct UUIResourceDataProvider_Data UUIResourceDataProvider;
	struct UUIWeaponSummary_Data UUIWeaponSummary;
};

// 0x3C 
struct UVehicleAttributeContextResolver_Data {
	// Last Offset: 0x3C
};

struct UVehicleAttributeContextResolver {
	struct UObject_Data UObject;
	struct UAttributeContextResolver_Data UAttributeContextResolver;
	struct UVehicleAttributeContextResolver_Data UVehicleAttributeContextResolver;
};

// 0x214 
struct AWaterVolume_Data {
	// Last Offset: 0x204
	struct USoundCue* EntrySound; // 0x204 (0x4)
	struct UClass* EntryActor; // 0x208 (0x4)
	struct USoundCue* ExitSound; // 0x20C (0x4)
	struct UClass* ExitActor; // 0x210 (0x4)
};

struct AWaterVolume {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ABrush_Data ABrush;
	struct AVolume_Data AVolume;
	struct APhysicsVolume_Data APhysicsVolume;
	struct AWaterVolume_Data AWaterVolume;
};

// 0x18C 
struct AWindDirectionalSource_Data {
	// Last Offset: 0x188
	struct UWindDirectionalSourceComponent* Component; // 0x188 (0x4)
};

struct AWindDirectionalSource {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct AWindDirectionalSource_Data AWindDirectionalSource;
};

]]

table.insert(g_loadedClasses, { "UIWorldBody", 143, "UInterface" })
table.insert(g_loadedClasses, { "AActor", 145, "UObject" })
table.insert(g_loadedClasses, { "AInfo", 147, "AActor" })
table.insert(g_loadedClasses, { "AZoneInfo", 149, "AInfo" })
table.insert(g_loadedClasses, { "AWorldInfo", 151, "AZoneInfo" })
table.insert(g_loadedClasses, { "UDownloadableContentEnumerator", 153, "UObject" })
table.insert(g_loadedClasses, { "UDownloadableContentManager", 155, "UObject" })
table.insert(g_loadedClasses, { "UDownloadableContentOfferEnumerator", 157, "UObject" })
table.insert(g_loadedClasses, { "UEngine", 159, "USubsystem" })
table.insert(g_loadedClasses, { "UGameEngine", 161, "UEngine" })
table.insert(g_loadedClasses, { "UInGameAdManager", 163, "UObject" })
table.insert(g_loadedClasses, { "UEngineBaseTypes", 165, "UObject" })
table.insert(g_loadedClasses, { "ABrush", 167, "AActor" })
table.insert(g_loadedClasses, { "ABrushShape", 169, "ABrush" })
table.insert(g_loadedClasses, { "AVolume", 171, "ABrush" })
table.insert(g_loadedClasses, { "ABlockingVolume", 173, "AVolume" })
table.insert(g_loadedClasses, { "ADynamicBlockingVolume", 175, "ABlockingVolume" })
table.insert(g_loadedClasses, { "ACullDistanceVolume", 177, "AVolume" })
table.insert(g_loadedClasses, { "ALevelGridVolume", 179, "AVolume" })
table.insert(g_loadedClasses, { "ALevelStreamingVolume", 181, "AVolume" })
table.insert(g_loadedClasses, { "ALightmassCharacterIndirectDetailVolume", 183, "AVolume" })
table.insert(g_loadedClasses, { "ALightmassImportanceVolume", 185, "AVolume" })
table.insert(g_loadedClasses, { "AMassiveLODOverrideVolume", 187, "AVolume" })
table.insert(g_loadedClasses, { "ANavMeshBoundsVolume", 189, "AVolume" })
table.insert(g_loadedClasses, { "APathBlockingVolume", 191, "AVolume" })
table.insert(g_loadedClasses, { "APhysicsVolume", 193, "AVolume" })
table.insert(g_loadedClasses, { "ADefaultPhysicsVolume", 195, "APhysicsVolume" })
table.insert(g_loadedClasses, { "AGravityVolume", 197, "APhysicsVolume" })
table.insert(g_loadedClasses, { "ALadderVolume", 199, "APhysicsVolume" })
table.insert(g_loadedClasses, { "APortalVolume", 201, "AVolume" })
table.insert(g_loadedClasses, { "APostProcessVolume", 203, "AVolume" })
table.insert(g_loadedClasses, { "APrecomputedVisibilityOverrideVolume", 205, "AVolume" })
table.insert(g_loadedClasses, { "APrecomputedVisibilityVolume", 207, "AVolume" })
table.insert(g_loadedClasses, { "AReverbVolume", 209, "AVolume" })
table.insert(g_loadedClasses, { "AShadowRelevanceVolume", 211, "AVolume" })
table.insert(g_loadedClasses, { "ATriggerVolume", 213, "AVolume" })
table.insert(g_loadedClasses, { "ADynamicSMActor", 215, "AActor" })
table.insert(g_loadedClasses, { "AInterpActor", 217, "ADynamicSMActor" })
table.insert(g_loadedClasses, { "AEmitterPool", 219, "AActor" })
table.insert(g_loadedClasses, { "AGBXNavMesh", 221, "AActor" })
table.insert(g_loadedClasses, { "AHUD", 223, "AActor" })
table.insert(g_loadedClasses, { "AIDestructibleObject", 225, "AActor" })
table.insert(g_loadedClasses, { "AAutoTestManager", 227, "AInfo" })
table.insert(g_loadedClasses, { "ACoverGroup", 229, "AInfo" })
table.insert(g_loadedClasses, { "AFileWriter", 231, "AInfo" })
table.insert(g_loadedClasses, { "AFileLog", 233, "AFileWriter" })
table.insert(g_loadedClasses, { "AGameInfo", 235, "AInfo" })
table.insert(g_loadedClasses, { "AMutator", 237, "AInfo" })
table.insert(g_loadedClasses, { "APotentialClimbWatcher", 239, "AInfo" })
table.insert(g_loadedClasses, { "ARoute", 241, "AInfo" })
table.insert(g_loadedClasses, { "AWindPointSource", 243, "AInfo" })
table.insert(g_loadedClasses, { "AKeypoint", 245, "AActor" })
table.insert(g_loadedClasses, { "ATargetPoint", 247, "AKeypoint" })
table.insert(g_loadedClasses, { "ALevelLandmark", 249, "AActor" })
table.insert(g_loadedClasses, { "APersistentTransitionLandmark", 251, "ALevelLandmark" })
table.insert(g_loadedClasses, { "AMaterialInstanceActor", 253, "AActor" })
table.insert(g_loadedClasses, { "AMatineeActor", 255, "AActor" })
table.insert(g_loadedClasses, { "ANavigationPoint", 257, "AActor" })
table.insert(g_loadedClasses, { "ACoverLink", 259, "ANavigationPoint" })
table.insert(g_loadedClasses, { "ADoorMarker", 261, "ANavigationPoint" })
table.insert(g_loadedClasses, { "ADynamicAnchor", 263, "ANavigationPoint" })
table.insert(g_loadedClasses, { "ALadder", 265, "ANavigationPoint" })
table.insert(g_loadedClasses, { "AAutoLadder", 267, "ALadder" })
table.insert(g_loadedClasses, { "ALiftCenter", 269, "ANavigationPoint" })
table.insert(g_loadedClasses, { "ALiftExit", 271, "ANavigationPoint" })
table.insert(g_loadedClasses, { "APathNode", 273, "ANavigationPoint" })
table.insert(g_loadedClasses, { "AVolumePathNode", 275, "APathNode" })
table.insert(g_loadedClasses, { "APickupFactory", 277, "ANavigationPoint" })
table.insert(g_loadedClasses, { "APlayerStart", 279, "ANavigationPoint" })
table.insert(g_loadedClasses, { "APortalMarker", 281, "ANavigationPoint" })
table.insert(g_loadedClasses, { "APylon", 283, "ANavigationPoint" })
table.insert(g_loadedClasses, { "AAISwitchablePylon", 285, "APylon" })
table.insert(g_loadedClasses, { "ADynamicPylon", 287, "APylon" })
table.insert(g_loadedClasses, { "ATeleporter", 289, "ANavigationPoint" })
table.insert(g_loadedClasses, { "ANote", 291, "AActor" })
table.insert(g_loadedClasses, { "AProjectile", 293, "AActor" })
table.insert(g_loadedClasses, { "ARigidBodyBase", 295, "AActor" })
table.insert(g_loadedClasses, { "ASceneCaptureActor", 297, "AActor" })
table.insert(g_loadedClasses, { "ASceneCapture2DActor", 299, "ASceneCaptureActor" })
table.insert(g_loadedClasses, { "ASceneCaptureCubeMapActor", 301, "ASceneCaptureActor" })
table.insert(g_loadedClasses, { "ASceneCaptureReflectActor", 303, "ASceneCaptureActor" })
table.insert(g_loadedClasses, { "ASceneCapturePortalActor", 305, "ASceneCaptureReflectActor" })
table.insert(g_loadedClasses, { "APortalTeleporter", 307, "ASceneCapturePortalActor" })
table.insert(g_loadedClasses, { "AStaticMeshActorBase", 309, "AActor" })
table.insert(g_loadedClasses, { "ABlockingMeshCollectionActor", 311, "AStaticMeshActorBase" })
table.insert(g_loadedClasses, { "AStaticMeshActor", 313, "AStaticMeshActorBase" })
table.insert(g_loadedClasses, { "AStaticMeshCollectionActor", 315, "AStaticMeshActorBase" })
table.insert(g_loadedClasses, { "AStaticMeshActorBasedOnExtremeContent", 317, "AActor" })
table.insert(g_loadedClasses, { "ATeleporterDestination", 319, "AActor" })
table.insert(g_loadedClasses, { "ATrigger", 321, "AActor" })
table.insert(g_loadedClasses, { "ATrigger_PawnsOnly", 323, "ATrigger" })
table.insert(g_loadedClasses, { "UActorComponent", 325, "UComponent" })
table.insert(g_loadedClasses, { "UAkComponent", 327, "UActorComponent" })
table.insert(g_loadedClasses, { "UAudioComponent", 329, "UActorComponent" })
table.insert(g_loadedClasses, { "UHeightFogComponent", 331, "UActorComponent" })
table.insert(g_loadedClasses, { "UPrimitiveComponent", 333, "UActorComponent" })
table.insert(g_loadedClasses, { "UArrowComponent", 335, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "UBrushComponent", 337, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "UCameraConeComponent", 339, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "UCylinderComponent", 341, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "USphereComponent", 343, "UCylinderComponent" })
table.insert(g_loadedClasses, { "UDrawBoxComponent", 345, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "UDrawCapsuleComponent", 347, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "UDrawConeComponent", 349, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "UDrawCylinderComponent", 351, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "UDrawFrustumComponent", 353, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "UDrawQuadComponent", 355, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "UDrawSphereComponent", 357, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "UDrawPylonRadiusComponent", 359, "UDrawSphereComponent" })
table.insert(g_loadedClasses, { "UDrawSoundRadiusComponent", 361, "UDrawSphereComponent" })
table.insert(g_loadedClasses, { "UGBXNavMeshRenderingComponent", 363, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "ULevelGridVolumeRenderingComponent", 365, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "ULineBatchComponent", 367, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "UModelComponent", 369, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "USocketComponent", 371, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "UHomingTargetComponent", 373, "USocketComponent" })
table.insert(g_loadedClasses, { "USpriteComponent", 375, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "USpriteRTTComponent", 377, "USpriteComponent" })
table.insert(g_loadedClasses, { "URadialBlurComponent", 379, "UActorComponent" })
table.insert(g_loadedClasses, { "USceneCaptureComponent", 381, "UActorComponent" })
table.insert(g_loadedClasses, { "USceneCapture2DComponent", 383, "USceneCaptureComponent" })
table.insert(g_loadedClasses, { "USceneCapture2DHitMaskComponent", 385, "USceneCaptureComponent" })
table.insert(g_loadedClasses, { "USceneCaptureCubeMapComponent", 387, "USceneCaptureComponent" })
table.insert(g_loadedClasses, { "USceneCapturePortalComponent", 389, "USceneCaptureComponent" })
table.insert(g_loadedClasses, { "USceneCaptureReflectComponent", 391, "USceneCaptureComponent" })
table.insert(g_loadedClasses, { "UWindDirectionalSourceComponent", 393, "UActorComponent" })
table.insert(g_loadedClasses, { "UWindPointSourceComponent", 395, "UWindDirectionalSourceComponent" })
table.insert(g_loadedClasses, { "UActorFactory", 397, "UObject" })
table.insert(g_loadedClasses, { "UActorFactoryActor", 399, "UActorFactory" })
table.insert(g_loadedClasses, { "UActorFactoryAI", 401, "UActorFactory" })
table.insert(g_loadedClasses, { "UActorFactoryApexDestructible", 403, "UActorFactory" })
table.insert(g_loadedClasses, { "UActorFactoryArchetype", 405, "UActorFactory" })
table.insert(g_loadedClasses, { "UActorFactoryCoverLink", 407, "UActorFactory" })
table.insert(g_loadedClasses, { "UActorFactoryDominantDirectionalLight", 409, "UActorFactory" })
table.insert(g_loadedClasses, { "UActorFactoryDominantDirectionalLightMovable", 411, "UActorFactory" })
table.insert(g_loadedClasses, { "UActorFactoryDynamicSM", 413, "UActorFactory" })
table.insert(g_loadedClasses, { "UActorFactoryMover", 415, "UActorFactoryDynamicSM" })
table.insert(g_loadedClasses, { "UActorFactoryRigidBody", 417, "UActorFactoryDynamicSM" })
table.insert(g_loadedClasses, { "UActorFactoryEmitter", 419, "UActorFactory" })
table.insert(g_loadedClasses, { "UActorFactoryLensFlare", 421, "UActorFactory" })
table.insert(g_loadedClasses, { "UActorFactoryLight", 423, "UActorFactory" })
table.insert(g_loadedClasses, { "UActorFactoryPathNode", 425, "UActorFactory" })
table.insert(g_loadedClasses, { "UActorFactoryPhysicsAsset", 427, "UActorFactory" })
table.insert(g_loadedClasses, { "UActorFactoryPlayerStart", 429, "UActorFactory" })
table.insert(g_loadedClasses, { "UActorFactoryPylon", 431, "UActorFactory" })
table.insert(g_loadedClasses, { "UActorFactorySkeletalMesh", 433, "UActorFactory" })
table.insert(g_loadedClasses, { "UActorFactoryStaticMesh", 435, "UActorFactory" })
table.insert(g_loadedClasses, { "UActorFactoryTrigger", 437, "UActorFactory" })
table.insert(g_loadedClasses, { "UActorFactoryVehicle", 439, "UActorFactory" })
table.insert(g_loadedClasses, { "UActorFactoryCustomPropertyEditorDelegate", 441, "UObject" })
table.insert(g_loadedClasses, { "UAkAudioDevice", 443, "USubsystem" })
table.insert(g_loadedClasses, { "UAkBaseSoundObject", 445, "UObject" })
table.insert(g_loadedClasses, { "USoundCue", 447, "UAkBaseSoundObject" })
table.insert(g_loadedClasses, { "UAkObject", 449, "UObject" })
table.insert(g_loadedClasses, { "UAkBank", 451, "UAkObject" })
table.insert(g_loadedClasses, { "UAkDialogueEvent", 453, "UAkObject" })
table.insert(g_loadedClasses, { "UAkEffect", 455, "UAkObject" })
table.insert(g_loadedClasses, { "UAkEvent", 457, "UAkObject" })
table.insert(g_loadedClasses, { "UAkRtpc", 459, "UAkObject" })
table.insert(g_loadedClasses, { "UAkState", 461, "UAkObject" })
table.insert(g_loadedClasses, { "UAkStateGroup", 463, "UAkObject" })
table.insert(g_loadedClasses, { "UAkSwitch", 465, "UAkObject" })
table.insert(g_loadedClasses, { "UAkSwitchGroup", 467, "UAkObject" })
table.insert(g_loadedClasses, { "UAkTrigger", 469, "UAkObject" })
table.insert(g_loadedClasses, { "UBookMark", 471, "UObject" })
table.insert(g_loadedClasses, { "UBookMark2D", 473, "UObject" })
table.insert(g_loadedClasses, { "UKismetBookMark", 475, "UBookMark2D" })
table.insert(g_loadedClasses, { "UCanvas", 477, "UObject" })
table.insert(g_loadedClasses, { "UChannel", 479, "UObject" })
table.insert(g_loadedClasses, { "UActorChannel", 481, "UChannel" })
table.insert(g_loadedClasses, { "UControlChannel", 483, "UChannel" })
table.insert(g_loadedClasses, { "UFileChannel", 485, "UChannel" })
table.insert(g_loadedClasses, { "UVoiceChannel", 487, "UChannel" })
table.insert(g_loadedClasses, { "AController", 489, "AActor" })
table.insert(g_loadedClasses, { "APlayerController", 491, "AController" })
table.insert(g_loadedClasses, { "UCheatManager", 493, "UObject" })
table.insert(g_loadedClasses, { "UClient", 495, "UObject" })
table.insert(g_loadedClasses, { "UClipPadEntry", 501, "UObject" })
table.insert(g_loadedClasses, { "UCodecMovie", 503, "UObject" })
table.insert(g_loadedClasses, { "UCodecMovieBink", 505, "UCodecMovie" })
table.insert(g_loadedClasses, { "UCodecMovieFallback", 507, "UCodecMovie" })
table.insert(g_loadedClasses, { "UCurveEdPresetCurve", 509, "UObject" })
table.insert(g_loadedClasses, { "UCustomPropertyItemHandler", 511, "UInterface" })
table.insert(g_loadedClasses, { "UDamageAdjuster", 513, "UObject" })
table.insert(g_loadedClasses, { "UDamagePipeline", 515, "UObject" })
table.insert(g_loadedClasses, { "UDamageType", 517, "UObject" })
table.insert(g_loadedClasses, { "UKillZDamageType", 519, "UDamageType" })
table.insert(g_loadedClasses, { "UDistributionFloatConstant", 521, "UDistributionFloat" })
table.insert(g_loadedClasses, { "UDistributionFloatParameterBase", 523, "UDistributionFloatConstant" })
table.insert(g_loadedClasses, { "UDistributionFloatConstantCurve", 525, "UDistributionFloat" })
table.insert(g_loadedClasses, { "UDistributionFloatUniform", 527, "UDistributionFloat" })
table.insert(g_loadedClasses, { "UDistributionFloatUniformCurve", 529, "UDistributionFloat" })
table.insert(g_loadedClasses, { "UDistributionVectorConstant", 531, "UDistributionVector" })
table.insert(g_loadedClasses, { "UDistributionVectorParameterBase", 533, "UDistributionVectorConstant" })
table.insert(g_loadedClasses, { "UDistributionVectorConstantCurve", 535, "UDistributionVector" })
table.insert(g_loadedClasses, { "UDistributionVectorUniform", 537, "UDistributionVector" })
table.insert(g_loadedClasses, { "UDistributionVectorUniformCurve", 539, "UDistributionVector" })
table.insert(g_loadedClasses, { "UDownload", 541, "UObject" })
table.insert(g_loadedClasses, { "UChannelDownload", 543, "UDownload" })
table.insert(g_loadedClasses, { "UEdCoordSystem", 545, "UObject" })
table.insert(g_loadedClasses, { "UEditorLinkSelectionInterface", 547, "UInterface" })
table.insert(g_loadedClasses, { "UEngineTypes", 549, "UObject" })
table.insert(g_loadedClasses, { "UFacebookIntegration", 551, "UObject" })
table.insert(g_loadedClasses, { "UFaceFXAnimSet", 553, "UObject" })
table.insert(g_loadedClasses, { "UFaceFXAsset", 555, "UObject" })
table.insert(g_loadedClasses, { "UFont", 557, "UObject" })
table.insert(g_loadedClasses, { "UMultiFont", 559, "UFont" })
table.insert(g_loadedClasses, { "UFontImportOptions", 561, "UObject" })
table.insert(g_loadedClasses, { "UForceFeedbackManager", 563, "UObject" })
table.insert(g_loadedClasses, { "UForceFeedbackWaveform", 565, "UObject" })
table.insert(g_loadedClasses, { "UGameplayEvents", 567, "UObject" })
table.insert(g_loadedClasses, { "UGameplayEventsReader", 569, "UGameplayEvents" })
table.insert(g_loadedClasses, { "UGameplayEventsWriter", 571, "UGameplayEvents" })
table.insert(g_loadedClasses, { "UGameplayEventsHandler", 573, "UObject" })
table.insert(g_loadedClasses, { "UGameViewportClient", 575, "UObject" })
table.insert(g_loadedClasses, { "UGBXCrossLevelReferenceContainer", 577, "UObject" })
table.insert(g_loadedClasses, { "UGBXDefinition", 579, "UObject" })
table.insert(g_loadedClasses, { "UBaseHitRegionDefinition", 581, "UGBXDefinition" })
table.insert(g_loadedClasses, { "UDamageTypeDefinition", 583, "UGBXDefinition" })
table.insert(g_loadedClasses, { "UEngineInteractionIconDefinition", 585, "UGBXDefinition" })
table.insert(g_loadedClasses, { "UPawnAllegiance", 587, "UGBXDefinition" })
table.insert(g_loadedClasses, { "UPawnInteractionDefinition", 589, "UGBXDefinition" })
table.insert(g_loadedClasses, { "UGBXNavMeshPathModifier", 591, "UObject" })
table.insert(g_loadedClasses, { "UGBXNavMeshPathModifier_Simplify", 593, "UGBXNavMeshPathModifier" })
table.insert(g_loadedClasses, { "UGBXNavMeshPathModifier_SmoothTurns", 595, "UGBXNavMeshPathModifier" })
table.insert(g_loadedClasses, { "UGearboxEngineGlobals", 597, "UObject" })
table.insert(g_loadedClasses, { "UGenericParamListStatEntry", 599, "UObject" })
table.insert(g_loadedClasses, { "UGuidCache", 601, "UObject" })
table.insert(g_loadedClasses, { "UIAnimBehavior", 603, "UInterface" })
table.insert(g_loadedClasses, { "UIAttributeSlotEffectProvider", 605, "UInterface" })
table.insert(g_loadedClasses, { "UIBalancedActor", 607, "UInterface" })
table.insert(g_loadedClasses, { "UIBodyCompositionInstance", 609, "UInterface" })
table.insert(g_loadedClasses, { "UIBodyInfoProvider", 611, "UInterface" })
table.insert(g_loadedClasses, { "UIDamageCauser", 613, "UInterface" })
table.insert(g_loadedClasses, { "UIDialogBox", 615, "UInterface" })
table.insert(g_loadedClasses, { "UIFaceFXActor", 617, "UInterface" })
table.insert(g_loadedClasses, { "UIGBXNavMeshBuildEvents", 619, "UInterface" })
table.insert(g_loadedClasses, { "UIGBXNavMeshSeed", 621, "UInterface" })
table.insert(g_loadedClasses, { "UIGBXNavMeshSpecialMove", 623, "UInterface" })
table.insert(g_loadedClasses, { "UIKilledBehavior", 625, "UInterface" })
table.insert(g_loadedClasses, { "UIniLocPatcher", 627, "UObject" })
table.insert(g_loadedClasses, { "UInterface_NavigationHandle", 629, "UInterface" })
table.insert(g_loadedClasses, { "UInterface_Speaker", 631, "UInterface" })
table.insert(g_loadedClasses, { "UInterpCurveEdSetup", 633, "UObject" })
table.insert(g_loadedClasses, { "UInterpTrack", 635, "UObject" })
table.insert(g_loadedClasses, { "UIResourcePoolProvider", 637, "UInterface" })
table.insert(g_loadedClasses, { "UISpawnActor", 639, "UInterface" })
table.insert(g_loadedClasses, { "UISpecialOcclusionProvider", 641, "UInterface" })
table.insert(g_loadedClasses, { "UITargetable", 643, "UInterface" })
table.insert(g_loadedClasses, { "UJsonObject", 645, "UObject" })
table.insert(g_loadedClasses, { "UKMeshProps", 647, "UObject" })
table.insert(g_loadedClasses, { "ULevelBase", 649, "UObject" })
table.insert(g_loadedClasses, { "ULevel", 651, "ULevelBase" })
table.insert(g_loadedClasses, { "UPendingLevel", 655, "ULevelBase" })
table.insert(g_loadedClasses, { "UDemoPlayPendingLevel", 657, "UPendingLevel" })
table.insert(g_loadedClasses, { "UNetPendingLevel", 659, "UPendingLevel" })
table.insert(g_loadedClasses, { "ULevelStreaming", 661, "UObject" })
table.insert(g_loadedClasses, { "ULevelStreamingAlwaysLoaded", 663, "ULevelStreaming" })
table.insert(g_loadedClasses, { "ULevelStreamingDistance", 665, "ULevelStreaming" })
table.insert(g_loadedClasses, { "ULevelStreamingKismet", 667, "ULevelStreaming" })
table.insert(g_loadedClasses, { "ULevelStreamingPersistent", 669, "ULevelStreaming" })
table.insert(g_loadedClasses, { "ULightmappedSurfaceCollection", 671, "UObject" })
table.insert(g_loadedClasses, { "ULightmassPrimitiveSettingsObject", 673, "UObject" })
table.insert(g_loadedClasses, { "ULine", 675, "UObject" })
table.insert(g_loadedClasses, { "ULineData", 677, "UObject" })
table.insert(g_loadedClasses, { "ULineSegment", 679, "UObject" })
table.insert(g_loadedClasses, { "UMapInfo", 681, "UObject" })
table.insert(g_loadedClasses, { "USurface", 683, "UObject" })
table.insert(g_loadedClasses, { "UMaterialInterface", 685, "USurface" })
table.insert(g_loadedClasses, { "UMaterial", 687, "UMaterialInterface" })
table.insert(g_loadedClasses, { "UMaterialExpression", 689, "UObject" })
table.insert(g_loadedClasses, { "UModel", 691, "UObject" })
table.insert(g_loadedClasses, { "UMusicTrackDataStructures", 693, "UObject" })
table.insert(g_loadedClasses, { "UNavigationMeshBase", 695, "UObject" })
table.insert(g_loadedClasses, { "UNetDriver", 697, "USubsystem" })
table.insert(g_loadedClasses, { "UDemoRecDriver", 716, "UNetDriver" })
table.insert(g_loadedClasses, { "UObjectReferencer", 722, "UObject" })
table.insert(g_loadedClasses, { "UOnlineSubsystem", 724, "UObject" })
table.insert(g_loadedClasses, { "UOnlineAuthInterfaceBaseImpl", 726, "UObject" })
table.insert(g_loadedClasses, { "UOnlineMatchmakingStats", 728, "UObject" })
table.insert(g_loadedClasses, { "UOnlinePlayerStorage", 730, "UObject" })
table.insert(g_loadedClasses, { "UOnlineProfileSettings", 732, "UOnlinePlayerStorage" })
table.insert(g_loadedClasses, { "UOnlineStats", 734, "UObject" })
table.insert(g_loadedClasses, { "UOnlineStatsRead", 736, "UOnlineStats" })
table.insert(g_loadedClasses, { "UOnlineStatsWrite", 738, "UOnlineStats" })
table.insert(g_loadedClasses, { "UPackageMapLevel", 740, "UPackageMap" })
table.insert(g_loadedClasses, { "UPackageMapSeekFree", 742, "UPackageMapLevel" })
table.insert(g_loadedClasses, { "UPatchScriptCommandlet", 744, "UCommandlet" })
table.insert(g_loadedClasses, { "UPlayer", 746, "UObject" })
table.insert(g_loadedClasses, { "ULocalPlayer", 748, "UPlayer" })
table.insert(g_loadedClasses, { "UNetConnection", 750, "UPlayer" })
table.insert(g_loadedClasses, { "UChildConnection", 754, "UNetConnection" })
table.insert(g_loadedClasses, { "UDemoRecConnection", 757, "UNetConnection" })
table.insert(g_loadedClasses, { "UPolys", 759, "UObject" })
table.insert(g_loadedClasses, { "UPostProcessChain", 761, "UObject" })
table.insert(g_loadedClasses, { "UPostProcessEffect", 763, "UObject" })
table.insert(g_loadedClasses, { "UAccumulateAlphaEffect", 765, "UPostProcessEffect" })
table.insert(g_loadedClasses, { "UAmbientOcclusionEffect", 767, "UPostProcessEffect" })
table.insert(g_loadedClasses, { "UBlurEffect", 769, "UPostProcessEffect" })
table.insert(g_loadedClasses, { "UDOFEffect", 771, "UPostProcessEffect" })
table.insert(g_loadedClasses, { "UDOFAndBloomEffect", 773, "UDOFEffect" })
table.insert(g_loadedClasses, { "UDOFBloomMotionBlurEffect", 775, "UDOFAndBloomEffect" })
table.insert(g_loadedClasses, { "UUberPostProcessEffect", 777, "UDOFBloomMotionBlurEffect" })
table.insert(g_loadedClasses, { "UDwTriovizImplEffect", 779, "UPostProcessEffect" })
table.insert(g_loadedClasses, { "UFXAAEffect", 781, "UPostProcessEffect" })
table.insert(g_loadedClasses, { "UMaterialEffect", 783, "UPostProcessEffect" })
table.insert(g_loadedClasses, { "UMotionBlurEffect", 785, "UPostProcessEffect" })
table.insert(g_loadedClasses, { "UPrimitiveComponentFactory", 787, "UObject" })
table.insert(g_loadedClasses, { "UMeshComponentFactory", 789, "UPrimitiveComponentFactory" })
table.insert(g_loadedClasses, { "UStaticMeshComponentFactory", 791, "UMeshComponentFactory" })
table.insert(g_loadedClasses, { "UReachSpec", 793, "UObject" })
table.insert(g_loadedClasses, { "UAdvancedReachSpec", 795, "UReachSpec" })
table.insert(g_loadedClasses, { "UCeilingReachSpec", 797, "UReachSpec" })
table.insert(g_loadedClasses, { "UForcedReachSpec", 799, "UReachSpec" })
table.insert(g_loadedClasses, { "UCoverSlipReachSpec", 801, "UForcedReachSpec" })
table.insert(g_loadedClasses, { "UFloorToCeilingReachSpec", 803, "UForcedReachSpec" })
table.insert(g_loadedClasses, { "UMantleReachSpec", 805, "UForcedReachSpec" })
table.insert(g_loadedClasses, { "USlotToSlotReachSpec", 807, "UForcedReachSpec" })
table.insert(g_loadedClasses, { "USwatTurnReachSpec", 809, "UForcedReachSpec" })
table.insert(g_loadedClasses, { "UWallTransReachSpec", 811, "UForcedReachSpec" })
table.insert(g_loadedClasses, { "ULadderReachSpec", 813, "UReachSpec" })
table.insert(g_loadedClasses, { "UProscribedReachSpec", 815, "UReachSpec" })
table.insert(g_loadedClasses, { "UTeleportReachSpec", 817, "UReachSpec" })
table.insert(g_loadedClasses, { "USavedMove", 819, "UObject" })
table.insert(g_loadedClasses, { "USaveGameSummary", 821, "UObject" })
table.insert(g_loadedClasses, { "USelection", 823, "UObject" })
table.insert(g_loadedClasses, { "UServerCommandlet", 825, "UCommandlet" })
table.insert(g_loadedClasses, { "USettings", 827, "UObject" })
table.insert(g_loadedClasses, { "UOnlineGameSearch", 829, "USettings" })
table.insert(g_loadedClasses, { "UOnlineGameSettings", 831, "USettings" })
table.insert(g_loadedClasses, { "UShaderCache", 833, "UObject" })
table.insert(g_loadedClasses, { "UShadowMap1D", 835, "UObject" })
table.insert(g_loadedClasses, { "UShadowMap2D", 837, "UObject" })
table.insert(g_loadedClasses, { "USmokeTestCommandlet", 839, "UCommandlet" })
table.insert(g_loadedClasses, { "USnapshotInterface", 841, "UObject" })
table.insert(g_loadedClasses, { "USpeechRecognition", 843, "UObject" })
table.insert(g_loadedClasses, { "UStaticMesh", 845, "UObject" })
table.insert(g_loadedClasses, { "URB_BodySetup", 871, "UKMeshProps" })
table.insert(g_loadedClasses, { "UTexture", 873, "USurface" })
table.insert(g_loadedClasses, { "UTexture2D", 875, "UTexture" })
table.insert(g_loadedClasses, { "ULightMapTexture2D", 877, "UTexture2D" })
table.insert(g_loadedClasses, { "UShadowMapTexture2D", 879, "UTexture2D" })
table.insert(g_loadedClasses, { "UTranslationContext", 881, "UObject" })
table.insert(g_loadedClasses, { "UTranslatorTag", 883, "UObject" })
table.insert(g_loadedClasses, { "UStringsTag", 885, "UTranslatorTag" })
table.insert(g_loadedClasses, { "UUIRoot", 887, "UObject" })
table.insert(g_loadedClasses, { "UInteraction", 889, "UUIRoot" })
table.insert(g_loadedClasses, { "UUIInteraction", 891, "UInteraction" })
table.insert(g_loadedClasses, { "UUIManager", 893, "UObject" })
table.insert(g_loadedClasses, { "UVertex", 895, "UObject" })
table.insert(g_loadedClasses, { "UWaveFormBase", 897, "UObject" })
table.insert(g_loadedClasses, { "UWorld", 899, "UObject" })
table.insert(g_loadedClasses, { "AEnvironmentVolume", 901, "AVolume" })
table.insert(g_loadedClasses, { "ATestSplittingVolume", 903, "AVolume" })
table.insert(g_loadedClasses, { "AAIController", 905, "AController" })
table.insert(g_loadedClasses, { "APathTargetPoint", 907, "AKeypoint" })
table.insert(g_loadedClasses, { "ANavMeshObstacle", 909, "AActor" })
table.insert(g_loadedClasses, { "APylonSeed", 911, "AActor" })
table.insert(g_loadedClasses, { "ABlockingMeshActor", 913, "AStaticMeshActorBase" })
table.insert(g_loadedClasses, { "ABlockingMeshReplicatedActor", 915, "ABlockingMeshActor" })
table.insert(g_loadedClasses, { "UCoverGroupRenderingComponent", 917, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "UMeshComponent", 919, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "UStaticMeshComponent", 921, "UMeshComponent" })
table.insert(g_loadedClasses, { "UCoverMeshComponent", 923, "UStaticMeshComponent" })
table.insert(g_loadedClasses, { "UNavMeshRenderingComponent", 925, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "UPathRenderingComponent", 927, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "URouteRenderingComponent", 929, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "UAutoNavMeshPathObstacleUnregister", 931, "UObject" })
table.insert(g_loadedClasses, { "UGBXNavMeshPathFinder", 933, "UObject" })
table.insert(g_loadedClasses, { "UIGBXNavMeshObstacle", 935, "UInterface" })
table.insert(g_loadedClasses, { "UInterface_NavMeshPathObject", 937, "UInterface" })
table.insert(g_loadedClasses, { "UInterface_NavMeshPathSwitch", 939, "UInterface_NavMeshPathObject" })
table.insert(g_loadedClasses, { "UInterface_NavMeshPathObstacle", 941, "UInterface" })
table.insert(g_loadedClasses, { "UNavigationHandle", 943, "UObject" })
table.insert(g_loadedClasses, { "UNavMeshGoal_Filter", 945, "UObject" })
table.insert(g_loadedClasses, { "UNavMeshGoalFilter_MinPathDistance", 947, "UNavMeshGoal_Filter" })
table.insert(g_loadedClasses, { "UNavMeshGoalFilter_NotNearOtherAI", 949, "UNavMeshGoal_Filter" })
table.insert(g_loadedClasses, { "UNavMeshGoalFilter_OutOfViewFrom", 951, "UNavMeshGoal_Filter" })
table.insert(g_loadedClasses, { "UNavMeshGoalFilter_OutSideOfDotProductWedge", 953, "UNavMeshGoal_Filter" })
table.insert(g_loadedClasses, { "UNavMeshGoalFilter_PolyEncompassesAI", 955, "UNavMeshGoal_Filter" })
table.insert(g_loadedClasses, { "UNavMeshPathConstraint", 957, "UObject" })
table.insert(g_loadedClasses, { "UNavMeshPath_AlongLine", 959, "UNavMeshPathConstraint" })
table.insert(g_loadedClasses, { "UNavMeshPath_EnforceTwoWayEdges", 961, "UNavMeshPathConstraint" })
table.insert(g_loadedClasses, { "UNavMeshPath_MinDistBetweenSpecsOfType", 963, "UNavMeshPathConstraint" })
table.insert(g_loadedClasses, { "UNavMeshPath_SameCoverLink", 965, "UNavMeshPathConstraint" })
table.insert(g_loadedClasses, { "UNavMeshPath_Toward", 967, "UNavMeshPathConstraint" })
table.insert(g_loadedClasses, { "UNavMeshPath_WithinDistanceEnvelope", 969, "UNavMeshPathConstraint" })
table.insert(g_loadedClasses, { "UNavMeshPath_WithinTraversalDist", 971, "UNavMeshPathConstraint" })
table.insert(g_loadedClasses, { "UNavMeshPathGoalEvaluator", 973, "UObject" })
table.insert(g_loadedClasses, { "UNavMeshGoal_At", 975, "UNavMeshPathGoalEvaluator" })
table.insert(g_loadedClasses, { "UNavMeshGoal_ClosestActorInList", 977, "UNavMeshPathGoalEvaluator" })
table.insert(g_loadedClasses, { "UNavMeshGoal_GenericFilterContainer", 979, "UNavMeshPathGoalEvaluator" })
table.insert(g_loadedClasses, { "UNavMeshGoal_Null", 981, "UNavMeshPathGoalEvaluator" })
table.insert(g_loadedClasses, { "UNavMeshGoal_PolyEncompassesAI", 983, "UNavMeshPathGoalEvaluator" })
table.insert(g_loadedClasses, { "UNavMeshGoal_Random", 985, "UNavMeshPathGoalEvaluator" })
table.insert(g_loadedClasses, { "UNavMeshGoal_WithinDistanceEnvelope", 987, "UNavMeshPathGoalEvaluator" })
table.insert(g_loadedClasses, { "UPathConstraint", 989, "UObject" })
table.insert(g_loadedClasses, { "UPath_AlongLine", 991, "UPathConstraint" })
table.insert(g_loadedClasses, { "UPath_AvoidInEscapableNodes", 993, "UPathConstraint" })
table.insert(g_loadedClasses, { "UPath_MinDistBetweenSpecsOfType", 995, "UPathConstraint" })
table.insert(g_loadedClasses, { "UPath_TowardGoal", 997, "UPathConstraint" })
table.insert(g_loadedClasses, { "UPath_TowardPoint", 999, "UPathConstraint" })
table.insert(g_loadedClasses, { "UPath_WithinDistanceEnvelope", 1001, "UPathConstraint" })
table.insert(g_loadedClasses, { "UPath_WithinTraversalDist", 1003, "UPathConstraint" })
table.insert(g_loadedClasses, { "UPathGoalEvaluator", 1005, "UObject" })
table.insert(g_loadedClasses, { "UGoal_AtActor", 1007, "UPathGoalEvaluator" })
table.insert(g_loadedClasses, { "UGoal_Null", 1009, "UPathGoalEvaluator" })
table.insert(g_loadedClasses, { "ASkeletalMeshActor", 1011, "AActor" })
table.insert(g_loadedClasses, { "ASkeletalMeshActorBasedOnExtremeContent", 1013, "ASkeletalMeshActor" })
table.insert(g_loadedClasses, { "ASkeletalMeshActorSpawnable", 1015, "ASkeletalMeshActor" })
table.insert(g_loadedClasses, { "ASkeletalMeshCinematicActor", 1017, "ASkeletalMeshActor" })
table.insert(g_loadedClasses, { "ASkeletalMeshActorMAT", 1019, "ASkeletalMeshCinematicActor" })
table.insert(g_loadedClasses, { "UHeadTrackingComponent", 1021, "UActorComponent" })
table.insert(g_loadedClasses, { "UAnimationCompressionAlgorithm", 1023, "UObject" })
table.insert(g_loadedClasses, { "UAnimationCompressionAlgorithm_Automatic", 1025, "UAnimationCompressionAlgorithm" })
table.insert(g_loadedClasses, { "UAnimationCompressionAlgorithm_BitwiseCompressOnly", 1027, "UAnimationCompressionAlgorithm" })
table.insert(g_loadedClasses, { "UAnimationCompressionAlgorithm_GBXCustom", 1029, "UAnimationCompressionAlgorithm" })
table.insert(g_loadedClasses, { "UAnimationCompressionAlgorithm_LeastDestructive", 1031, "UAnimationCompressionAlgorithm" })
table.insert(g_loadedClasses, { "UAnimationCompressionAlgorithm_RemoveEverySecondKey", 1033, "UAnimationCompressionAlgorithm" })
table.insert(g_loadedClasses, { "UAnimationCompressionAlgorithm_RemoveLinearKeys", 1035, "UAnimationCompressionAlgorithm" })
table.insert(g_loadedClasses, { "UAnimationCompressionAlgorithm_PerTrackCompression", 1037, "UAnimationCompressionAlgorithm_RemoveLinearKeys" })
table.insert(g_loadedClasses, { "UAnimationCompressionAlgorithm_RemoveTrivialKeys", 1039, "UAnimationCompressionAlgorithm" })
table.insert(g_loadedClasses, { "UAnimationCompressionAlgorithm_RevertToRaw", 1041, "UAnimationCompressionAlgorithm" })
table.insert(g_loadedClasses, { "UAnimMetaData", 1043, "UObject" })
table.insert(g_loadedClasses, { "UAnimMetaData_SkelControl", 1045, "UAnimMetaData" })
table.insert(g_loadedClasses, { "UAnimMetaData_SkelControlKeyFrame", 1047, "UAnimMetaData_SkelControl" })
table.insert(g_loadedClasses, { "UAnimNotify", 1049, "UObject" })
table.insert(g_loadedClasses, { "UAnimNotify_AkEvent", 1051, "UAnimNotify" })
table.insert(g_loadedClasses, { "UAnimNotify_CameraEffect", 1053, "UAnimNotify" })
table.insert(g_loadedClasses, { "UAnimNotify_ClothingMaxDistanceScale", 1055, "UAnimNotify" })
table.insert(g_loadedClasses, { "UAnimNotify_Footstep", 1057, "UAnimNotify" })
table.insert(g_loadedClasses, { "UAnimNotify_ForceField", 1059, "UAnimNotify" })
table.insert(g_loadedClasses, { "UAnimNotify_Kismet", 1061, "UAnimNotify" })
table.insert(g_loadedClasses, { "UAnimNotify_PlayParticleEffect", 1063, "UAnimNotify" })
table.insert(g_loadedClasses, { "UAnimNotify_Rumble", 1065, "UAnimNotify" })
table.insert(g_loadedClasses, { "UAnimNotify_Script", 1067, "UAnimNotify" })
table.insert(g_loadedClasses, { "UAnimNotify_Scripted", 1069, "UAnimNotify" })
table.insert(g_loadedClasses, { "UAnimNotify_PawnMaterialParam", 1071, "UAnimNotify_Scripted" })
table.insert(g_loadedClasses, { "UAnimNotify_ViewShake", 1073, "UAnimNotify_Scripted" })
table.insert(g_loadedClasses, { "UAnimNotify_Sound", 1075, "UAnimNotify" })
table.insert(g_loadedClasses, { "UAnimNotify_SoundSpatial", 1077, "UAnimNotify" })
table.insert(g_loadedClasses, { "UAnimNotify_Trails", 1079, "UAnimNotify" })
table.insert(g_loadedClasses, { "UAnimObject", 1081, "UObject" })
table.insert(g_loadedClasses, { "UAnimNode", 1083, "UAnimObject" })
table.insert(g_loadedClasses, { "UAnimNodeBlendBase", 1085, "UAnimNode" })
table.insert(g_loadedClasses, { "UAnimNode_MultiBlendPerBone", 1087, "UAnimNodeBlendBase" })
table.insert(g_loadedClasses, { "UAnimNodeAimOffset", 1089, "UAnimNodeBlendBase" })
table.insert(g_loadedClasses, { "UAnimNodeBlend", 1091, "UAnimNodeBlendBase" })
table.insert(g_loadedClasses, { "UAnimNodeAdditiveBlending", 1093, "UAnimNodeBlend" })
table.insert(g_loadedClasses, { "UAnimNodeBlendPerBone", 1095, "UAnimNodeBlend" })
table.insert(g_loadedClasses, { "UAnimNodeCrossfader", 1097, "UAnimNodeBlend" })
table.insert(g_loadedClasses, { "UAnimNodePlayCustomAnim", 1099, "UAnimNodeBlend" })
table.insert(g_loadedClasses, { "UAnimNodeBlendDirectional", 1101, "UAnimNodeBlendBase" })
table.insert(g_loadedClasses, { "UAnimNodeBlendList", 1103, "UAnimNodeBlendBase" })
table.insert(g_loadedClasses, { "UAnimNodeBlendByBase", 1105, "UAnimNodeBlendList" })
table.insert(g_loadedClasses, { "UAnimNodeBlendByPhysics", 1107, "UAnimNodeBlendList" })
table.insert(g_loadedClasses, { "UAnimNodeBlendByPosture", 1109, "UAnimNodeBlendList" })
table.insert(g_loadedClasses, { "UAnimNodeBlendByProperty", 1111, "UAnimNodeBlendList" })
table.insert(g_loadedClasses, { "UAnimNodeBlendBySpeed", 1113, "UAnimNodeBlendList" })
table.insert(g_loadedClasses, { "UAnimNodeRandom", 1115, "UAnimNodeBlendList" })
table.insert(g_loadedClasses, { "UAnimNodeBlendMultiBone", 1117, "UAnimNodeBlendBase" })
table.insert(g_loadedClasses, { "UAnimNodeMirror", 1119, "UAnimNodeBlendBase" })
table.insert(g_loadedClasses, { "UAnimNodeScalePlayRate", 1121, "UAnimNodeBlendBase" })
table.insert(g_loadedClasses, { "UAnimNodeScaleRateBySpeed", 1123, "UAnimNodeScalePlayRate" })
table.insert(g_loadedClasses, { "UAnimNodeSlot", 1125, "UAnimNodeBlendBase" })
table.insert(g_loadedClasses, { "UAnimNodeSynch", 1127, "UAnimNodeBlendBase" })
table.insert(g_loadedClasses, { "UAnimTree", 1129, "UAnimNodeBlendBase" })
table.insert(g_loadedClasses, { "UAnimNodeSequence", 1131, "UAnimNode" })
table.insert(g_loadedClasses, { "UAnimNodeSequenceBlendBase", 1133, "UAnimNodeSequence" })
table.insert(g_loadedClasses, { "UAnimNodeSequenceBlendByAim", 1135, "UAnimNodeSequenceBlendBase" })
table.insert(g_loadedClasses, { "UMorphNodeBase", 1137, "UAnimObject" })
table.insert(g_loadedClasses, { "UMorphNodeMultiPose", 1139, "UMorphNodeBase" })
table.insert(g_loadedClasses, { "UMorphNodePose", 1141, "UMorphNodeBase" })
table.insert(g_loadedClasses, { "UMorphNodeWeightBase", 1143, "UMorphNodeBase" })
table.insert(g_loadedClasses, { "UMorphNodeWeight", 1145, "UMorphNodeWeightBase" })
table.insert(g_loadedClasses, { "UMorphNodeWeightByBoneAngle", 1147, "UMorphNodeWeightBase" })
table.insert(g_loadedClasses, { "UMorphNodeWeightByBoneRotation", 1149, "UMorphNodeWeightBase" })
table.insert(g_loadedClasses, { "USkelControlBase", 1151, "UAnimObject" })
table.insert(g_loadedClasses, { "USkelControl_CCD_IK", 1153, "USkelControlBase" })
table.insert(g_loadedClasses, { "USkelControl_Multiply", 1155, "USkelControlBase" })
table.insert(g_loadedClasses, { "USkelControl_TwistBone", 1157, "USkelControlBase" })
table.insert(g_loadedClasses, { "USkelControlLimb", 1159, "USkelControlBase" })
table.insert(g_loadedClasses, { "USkelControlFootPlacement", 1161, "USkelControlLimb" })
table.insert(g_loadedClasses, { "USkelControlLookAt", 1163, "USkelControlBase" })
table.insert(g_loadedClasses, { "USkelControlSingleBone", 1165, "USkelControlBase" })
table.insert(g_loadedClasses, { "USkelControlHandlebars", 1167, "USkelControlSingleBone" })
table.insert(g_loadedClasses, { "USkelControlWheel", 1169, "USkelControlSingleBone" })
table.insert(g_loadedClasses, { "USkelControlSpline", 1171, "USkelControlBase" })
table.insert(g_loadedClasses, { "USkelControlTrail", 1173, "USkelControlBase" })
table.insert(g_loadedClasses, { "UAnimSequence", 1175, "UObject" })
table.insert(g_loadedClasses, { "UAnimSet", 1177, "UObject" })
table.insert(g_loadedClasses, { "UMorphTarget", 1179, "UObject" })
table.insert(g_loadedClasses, { "UMorphTargetSet", 1181, "UObject" })
table.insert(g_loadedClasses, { "UMorphWeightSequence", 1183, "UObject" })
table.insert(g_loadedClasses, { "ADecalActorBase", 1185, "AActor" })
table.insert(g_loadedClasses, { "ADecalActor", 1187, "ADecalActorBase" })
table.insert(g_loadedClasses, { "ADecalActorMovable", 1189, "ADecalActorBase" })
table.insert(g_loadedClasses, { "ADecalManager", 1191, "AActor" })
table.insert(g_loadedClasses, { "UDecalComponent", 1193, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "UActorFactoryDecal", 1195, "UActorFactory" })
table.insert(g_loadedClasses, { "UActorFactoryDecalMovable", 1197, "UActorFactoryDecal" })
table.insert(g_loadedClasses, { "UDecalMaterial", 1199, "UMaterial" })
table.insert(g_loadedClasses, { "AFogVolumeDensityInfo", 1201, "AInfo" })
table.insert(g_loadedClasses, { "AFogVolumeConeDensityInfo", 1203, "AFogVolumeDensityInfo" })
table.insert(g_loadedClasses, { "AFogVolumeConstantDensityInfo", 1205, "AFogVolumeDensityInfo" })
table.insert(g_loadedClasses, { "AFogVolumeLinearHalfspaceDensityInfo", 1207, "AFogVolumeDensityInfo" })
table.insert(g_loadedClasses, { "AFogVolumeSphericalDensityInfo", 1209, "AFogVolumeDensityInfo" })
table.insert(g_loadedClasses, { "UExponentialHeightFogComponent", 1211, "UActorComponent" })
table.insert(g_loadedClasses, { "UFogVolumeDensityComponent", 1213, "UActorComponent" })
table.insert(g_loadedClasses, { "UFogVolumeConeDensityComponent", 1215, "UFogVolumeDensityComponent" })
table.insert(g_loadedClasses, { "UFogVolumeConstantDensityComponent", 1217, "UFogVolumeDensityComponent" })
table.insert(g_loadedClasses, { "UFogVolumeLinearHalfspaceDensityComponent", 1219, "UFogVolumeDensityComponent" })
table.insert(g_loadedClasses, { "UFogVolumeSphericalDensityComponent", 1221, "UFogVolumeDensityComponent" })
table.insert(g_loadedClasses, { "UActorFactoryFogVolumeConstantDensityInfo", 1223, "UActorFactory" })
table.insert(g_loadedClasses, { "UActorFactoryFogVolumeLinearHalfspaceDensityInfo", 1225, "UActorFactoryFogVolumeConstantDensityInfo" })
table.insert(g_loadedClasses, { "UActorFactoryFogVolumeSphericalDensityInfo", 1227, "UActorFactoryFogVolumeConstantDensityInfo" })
table.insert(g_loadedClasses, { "AApexDestructibleActor", 1229, "AActor" })
table.insert(g_loadedClasses, { "UApexComponentBase", 1231, "UMeshComponent" })
table.insert(g_loadedClasses, { "UApexDynamicComponent", 1233, "UApexComponentBase" })
table.insert(g_loadedClasses, { "UApexStaticComponent", 1235, "UApexComponentBase" })
table.insert(g_loadedClasses, { "UApexStaticDestructibleComponent", 1237, "UApexStaticComponent" })
table.insert(g_loadedClasses, { "UBlockingMeshComponent", 1239, "UStaticMeshComponent" })
table.insert(g_loadedClasses, { "UInstancedStaticMeshComponent", 1241, "UStaticMeshComponent" })
table.insert(g_loadedClasses, { "USplineMeshComponent", 1243, "UStaticMeshComponent" })
table.insert(g_loadedClasses, { "UApexAsset", 1245, "UObject" })
table.insert(g_loadedClasses, { "UApexClothingAsset", 1247, "UApexAsset" })
table.insert(g_loadedClasses, { "UApexDestructibleAsset", 1249, "UApexAsset" })
table.insert(g_loadedClasses, { "UApexGenericAsset", 1251, "UApexAsset" })
table.insert(g_loadedClasses, { "UInterpFilter", 1253, "UObject" })
table.insert(g_loadedClasses, { "UInterpFilter_Classes", 1255, "UInterpFilter" })
table.insert(g_loadedClasses, { "UInterpFilter_Custom", 1257, "UInterpFilter" })
table.insert(g_loadedClasses, { "UInterpGroup", 1259, "UObject" })
table.insert(g_loadedClasses, { "UInterpGroupAI", 1261, "UInterpGroup" })
table.insert(g_loadedClasses, { "UInterpGroupDirector", 1263, "UInterpGroup" })
table.insert(g_loadedClasses, { "UInterpGroupInst", 1265, "UObject" })
table.insert(g_loadedClasses, { "UInterpGroupInstAI", 1267, "UInterpGroupInst" })
table.insert(g_loadedClasses, { "UInterpGroupInstDirector", 1269, "UInterpGroupInst" })
table.insert(g_loadedClasses, { "UInterpTrackBoolProp", 1271, "UInterpTrack" })
table.insert(g_loadedClasses, { "UInterpTrackComment", 1273, "UInterpTrack" })
table.insert(g_loadedClasses, { "UInterpTrackDirector", 1275, "UInterpTrack" })
table.insert(g_loadedClasses, { "UInterpTrackEvent", 1277, "UInterpTrack" })
table.insert(g_loadedClasses, { "UInterpTrackFaceFX", 1279, "UInterpTrack" })
table.insert(g_loadedClasses, { "UInterpTrackFloatBase", 1281, "UInterpTrack" })
table.insert(g_loadedClasses, { "UInterpTrackAnimControl", 1283, "UInterpTrackFloatBase" })
table.insert(g_loadedClasses, { "UInterpTrackFade", 1285, "UInterpTrackFloatBase" })
table.insert(g_loadedClasses, { "UInterpTrackFloatMaterialParam", 1287, "UInterpTrackFloatBase" })
table.insert(g_loadedClasses, { "UInterpTrackFloatParticleParam", 1289, "UInterpTrackFloatBase" })
table.insert(g_loadedClasses, { "UInterpTrackFloatProp", 1291, "UInterpTrackFloatBase" })
table.insert(g_loadedClasses, { "UInterpTrackMorphWeight", 1293, "UInterpTrackFloatBase" })
table.insert(g_loadedClasses, { "UInterpTrackMoveAxis", 1295, "UInterpTrackFloatBase" })
table.insert(g_loadedClasses, { "UInterpTrackSkelControlScale", 1297, "UInterpTrackFloatBase" })
table.insert(g_loadedClasses, { "UInterpTrackSkelControlStrength", 1299, "UInterpTrackFloatBase" })
table.insert(g_loadedClasses, { "UInterpTrackSlomo", 1301, "UInterpTrackFloatBase" })
table.insert(g_loadedClasses, { "UInterpTrackHeadTracking", 1303, "UInterpTrack" })
table.insert(g_loadedClasses, { "UInterpTrackLinearColorBase", 1305, "UInterpTrack" })
table.insert(g_loadedClasses, { "UInterpTrackLinearColorProp", 1307, "UInterpTrackLinearColorBase" })
table.insert(g_loadedClasses, { "UInterpTrackMove", 1309, "UInterpTrack" })
table.insert(g_loadedClasses, { "UInterpTrackParticleReplay", 1311, "UInterpTrack" })
table.insert(g_loadedClasses, { "UInterpTrackTeleport", 1313, "UInterpTrack" })
table.insert(g_loadedClasses, { "UInterpTrackToggle", 1315, "UInterpTrack" })
table.insert(g_loadedClasses, { "UInterpTrackVectorBase", 1317, "UInterpTrack" })
table.insert(g_loadedClasses, { "UInterpTrackAudioMaster", 1319, "UInterpTrackVectorBase" })
table.insert(g_loadedClasses, { "UInterpTrackColorProp", 1321, "UInterpTrackVectorBase" })
table.insert(g_loadedClasses, { "UInterpTrackColorScale", 1323, "UInterpTrackVectorBase" })
table.insert(g_loadedClasses, { "UInterpTrackSound", 1325, "UInterpTrackVectorBase" })
table.insert(g_loadedClasses, { "UInterpTrackVectorMaterialParam", 1327, "UInterpTrackVectorBase" })
table.insert(g_loadedClasses, { "UInterpTrackVectorProp", 1329, "UInterpTrackVectorBase" })
table.insert(g_loadedClasses, { "UInterpTrackVisibility", 1331, "UInterpTrack" })
table.insert(g_loadedClasses, { "UInterpTrackInst", 1333, "UObject" })
table.insert(g_loadedClasses, { "UInterpTrackInstAnimControl", 1335, "UInterpTrackInst" })
table.insert(g_loadedClasses, { "UInterpTrackInstAudioMaster", 1337, "UInterpTrackInst" })
table.insert(g_loadedClasses, { "UInterpTrackInstColorScale", 1339, "UInterpTrackInst" })
table.insert(g_loadedClasses, { "UInterpTrackInstComment", 1341, "UInterpTrackInst" })
table.insert(g_loadedClasses, { "UInterpTrackInstDirector", 1343, "UInterpTrackInst" })
table.insert(g_loadedClasses, { "UInterpTrackInstEvent", 1345, "UInterpTrackInst" })
table.insert(g_loadedClasses, { "UInterpTrackInstFaceFX", 1347, "UInterpTrackInst" })
table.insert(g_loadedClasses, { "UInterpTrackInstFade", 1349, "UInterpTrackInst" })
table.insert(g_loadedClasses, { "UInterpTrackInstFloatMaterialParam", 1351, "UInterpTrackInst" })
table.insert(g_loadedClasses, { "UInterpTrackInstFloatParticleParam", 1353, "UInterpTrackInst" })
table.insert(g_loadedClasses, { "UInterpTrackInstHeadTracking", 1355, "UInterpTrackInst" })
table.insert(g_loadedClasses, { "UInterpTrackInstMorphWeight", 1357, "UInterpTrackInst" })
table.insert(g_loadedClasses, { "UInterpTrackInstMove", 1359, "UInterpTrackInst" })
table.insert(g_loadedClasses, { "UInterpTrackInstParticleReplay", 1361, "UInterpTrackInst" })
table.insert(g_loadedClasses, { "UInterpTrackInstProperty", 1363, "UInterpTrackInst" })
table.insert(g_loadedClasses, { "UInterpTrackInstBoolProp", 1365, "UInterpTrackInstProperty" })
table.insert(g_loadedClasses, { "UInterpTrackInstColorProp", 1367, "UInterpTrackInstProperty" })
table.insert(g_loadedClasses, { "UInterpTrackInstFloatProp", 1369, "UInterpTrackInstProperty" })
table.insert(g_loadedClasses, { "UInterpTrackInstLinearColorProp", 1371, "UInterpTrackInstProperty" })
table.insert(g_loadedClasses, { "UInterpTrackInstVectorProp", 1373, "UInterpTrackInstProperty" })
table.insert(g_loadedClasses, { "UInterpTrackInstSkelControlScale", 1375, "UInterpTrackInst" })
table.insert(g_loadedClasses, { "UInterpTrackInstSkelControlStrength", 1377, "UInterpTrackInst" })
table.insert(g_loadedClasses, { "UInterpTrackInstSlomo", 1379, "UInterpTrackInst" })
table.insert(g_loadedClasses, { "UInterpTrackInstSound", 1381, "UInterpTrackInst" })
table.insert(g_loadedClasses, { "UInterpTrackInstTeleport", 1383, "UInterpTrackInst" })
table.insert(g_loadedClasses, { "UInterpTrackInstToggle", 1385, "UInterpTrackInst" })
table.insert(g_loadedClasses, { "UInterpTrackInstVectorMaterialParam", 1387, "UInterpTrackInst" })
table.insert(g_loadedClasses, { "UInterpTrackInstVisibility", 1389, "UInterpTrackInst" })
table.insert(g_loadedClasses, { "UMaterialExpressionAbs", 1391, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionAdd", 1393, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionAppendVector", 1395, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionArcCosine", 1397, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionArcSine", 1399, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionArcTangent", 1401, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionArcTangent2", 1403, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionBlendModeBase", 1405, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionzColorBurn", 1407, "UMaterialExpressionBlendModeBase" })
table.insert(g_loadedClasses, { "UMaterialExpressionzColorDodge", 1409, "UMaterialExpressionBlendModeBase" })
table.insert(g_loadedClasses, { "UMaterialExpressionzExclusion", 1411, "UMaterialExpressionBlendModeBase" })
table.insert(g_loadedClasses, { "UMaterialExpressionzHardLight", 1413, "UMaterialExpressionBlendModeBase" })
table.insert(g_loadedClasses, { "UMaterialExpressionzLinearBurn", 1415, "UMaterialExpressionBlendModeBase" })
table.insert(g_loadedClasses, { "UMaterialExpressionzLinearLight", 1417, "UMaterialExpressionBlendModeBase" })
table.insert(g_loadedClasses, { "UMaterialExpressionzOverlay", 1419, "UMaterialExpressionBlendModeBase" })
table.insert(g_loadedClasses, { "UMaterialExpressionzPinLight", 1421, "UMaterialExpressionBlendModeBase" })
table.insert(g_loadedClasses, { "UMaterialExpressionzScreen", 1423, "UMaterialExpressionBlendModeBase" })
table.insert(g_loadedClasses, { "UMaterialExpressionzSoftLight", 1425, "UMaterialExpressionBlendModeBase" })
table.insert(g_loadedClasses, { "UMaterialExpressionzVividLight", 1427, "UMaterialExpressionBlendModeBase" })
table.insert(g_loadedClasses, { "UMaterialExpressionBumpOffset", 1429, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionBumpOffsetEx", 1431, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionBumpOffsetSloped", 1433, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionCameraVector", 1435, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionCameraWorldPosition", 1437, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionCeil", 1439, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionClamp", 1441, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionComment", 1443, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionComponentMask", 1445, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionCompound", 1447, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionConstant", 1449, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionConstant2Vector", 1451, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionConstant3Vector", 1453, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionConstant4Vector", 1455, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionConstantBiasScale", 1457, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionConstantClamp", 1459, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionCosine", 1461, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionCrossProduct", 1463, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionCustom", 1465, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionCustomTexture", 1467, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionDdx", 1469, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionDdy", 1471, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionDegrees", 1473, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionDepthBiasedAlpha", 1475, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionDepthBiasedBlend", 1477, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionDepthOfFieldFunction", 1479, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionDeriveNormalZ", 1481, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionDesaturation", 1483, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionDestColor", 1485, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionDestDepth", 1487, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionDistance", 1489, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionDivide", 1491, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionDominantSkyLight", 1493, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionDotProduct", 1495, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionDynamicParameter", 1497, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionMeshEmitterDynamicParameter", 1499, "UMaterialExpressionDynamicParameter" })
table.insert(g_loadedClasses, { "UMaterialExpressionExp", 1501, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionExp2", 1503, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionFloor", 1505, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionFluidNormal", 1507, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionFmod", 1509, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionFoliageImpulseDirection", 1511, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionFoliageNormalizedRotationAxisAndAngle", 1513, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionFontSample", 1515, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionFontSampleParameter", 1517, "UMaterialExpressionFontSample" })
table.insert(g_loadedClasses, { "UMaterialExpressionFrac", 1519, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionFresnel", 1521, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionGradient", 1523, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionIf", 1525, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionLength", 1527, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionLensFlareIntensity", 1529, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionLensFlareOcclusion", 1531, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionLensFlareRadialDistance", 1533, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionLensFlareRayDistance", 1535, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionLensFlareSourceDistance", 1537, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionLightmapUVs", 1539, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionLightmassReplace", 1541, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionLightVector", 1543, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionLinearInterpolate", 1545, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionLog", 1547, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionLog10", 1549, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionLog2", 1551, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionMax", 1553, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionMeshEmitterVertexColor", 1555, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionMin", 1557, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionMultiply", 1559, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionMultiplyAndAdd", 1561, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionNormalize", 1563, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionObjectOrientation", 1565, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionObjectRadius", 1567, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionObjectWorldPosition", 1569, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionOcclusionPercentage", 1571, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionOneMinus", 1573, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionPanner", 1575, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionParameter", 1577, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionScalarParameter", 1579, "UMaterialExpressionParameter" })
table.insert(g_loadedClasses, { "UMaterialExpressionStaticComponentMaskParameter", 1581, "UMaterialExpressionParameter" })
table.insert(g_loadedClasses, { "UMaterialExpressionStaticSwitchParameter", 1583, "UMaterialExpressionParameter" })
table.insert(g_loadedClasses, { "UMaterialExpressionVectorParameter", 1585, "UMaterialExpressionParameter" })
table.insert(g_loadedClasses, { "UMaterialExpressionParticleMacroUV", 1587, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionPerInstanceRandom", 1589, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionPixelDepth", 1591, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionPower", 1593, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionRadians", 1595, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionRecipSquareRoot", 1597, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionReflectionVector", 1599, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionRotate3D", 1601, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionRotateAboutAxis", 1603, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionRotator", 1605, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionSaturate", 1607, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionSceneDepth", 1609, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionSceneTexture", 1611, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionScreenPosition", 1613, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionSine", 1615, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionSphereMask", 1617, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionSPHFluidNormal", 1619, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionSPHFluidThickness", 1621, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionSPHFluidVertexColor", 1623, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionSquareRoot", 1625, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionSteepParallaxOffset", 1627, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionSubtract", 1629, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionSwizzle", 1631, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionTangent", 1633, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionTerrainLayerCoords", 1635, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionTerrainLayerWeight", 1637, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionTerrainTextureCoordinate", 1639, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionTextureCoordinate", 1641, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionTextureDimensions", 1643, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionTextureSample", 1645, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionDepthBiasBlend", 1647, "UMaterialExpressionTextureSample" })
table.insert(g_loadedClasses, { "UMaterialExpressionFlipBookSample", 1649, "UMaterialExpressionTextureSample" })
table.insert(g_loadedClasses, { "UMaterialExpressionMeshSubUV", 1651, "UMaterialExpressionTextureSample" })
table.insert(g_loadedClasses, { "UMaterialExpressionMeshSubUVBlend", 1653, "UMaterialExpressionMeshSubUV" })
table.insert(g_loadedClasses, { "UMaterialExpressionParticleSubUV", 1655, "UMaterialExpressionTextureSample" })
table.insert(g_loadedClasses, { "UMaterialExpressionTextureSampleParameter", 1657, "UMaterialExpressionTextureSample" })
table.insert(g_loadedClasses, { "UMaterialExpressionTextureSampleParameter2D", 1659, "UMaterialExpressionTextureSampleParameter" })
table.insert(g_loadedClasses, { "UMaterialExpressionAntialiasedTextureMask", 1661, "UMaterialExpressionTextureSampleParameter2D" })
table.insert(g_loadedClasses, { "UMaterialExpressionTextureSampleParameterMeshSubUV", 1663, "UMaterialExpressionTextureSampleParameter2D" })
table.insert(g_loadedClasses, { "UMaterialExpressionTextureSampleParameterMeshSubUVBlend", 1665, "UMaterialExpressionTextureSampleParameterMeshSubUV" })
table.insert(g_loadedClasses, { "UMaterialExpressionTextureSampleParameterSubUV", 1667, "UMaterialExpressionTextureSampleParameter2D" })
table.insert(g_loadedClasses, { "UMaterialExpressionTextureSampleParameterCube", 1669, "UMaterialExpressionTextureSampleParameter" })
table.insert(g_loadedClasses, { "UMaterialExpressionTextureSampleParameterMovie", 1671, "UMaterialExpressionTextureSampleParameter" })
table.insert(g_loadedClasses, { "UMaterialExpressionTextureSampleParameterNormal", 1673, "UMaterialExpressionTextureSampleParameter" })
table.insert(g_loadedClasses, { "UMaterialExpressionTextureSplat", 1675, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionTime", 1677, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionTransform", 1679, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionTransformPosition", 1681, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionTwoSidedSign", 1683, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionVectorIf", 1685, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionVertexColor", 1687, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionWindDirectionAndSpeed", 1689, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionWorldAmbientColor", 1691, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionWorldLightColor", 1693, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionWorldNormal", 1695, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialExpressionWorldPosition", 1697, "UMaterialExpression" })
table.insert(g_loadedClasses, { "UMaterialInstance", 1699, "UMaterialInterface" })
table.insert(g_loadedClasses, { "UMaterialInstanceConstant", 1701, "UMaterialInstance" })
table.insert(g_loadedClasses, { "UMaterialInstanceTimeVarying", 1703, "UMaterialInstance" })
table.insert(g_loadedClasses, { "AEmitter", 1705, "AActor" })
table.insert(g_loadedClasses, { "AEmitterCameraLensEffectBase", 1707, "AEmitter" })
table.insert(g_loadedClasses, { "AParticleEventManager", 1709, "AActor" })
table.insert(g_loadedClasses, { "UParticleSystemComponent", 1711, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "UDistributionFloatParticleParameter", 1713, "UDistributionFloatParameterBase" })
table.insert(g_loadedClasses, { "UDistributionVectorParticleParameter", 1715, "UDistributionVectorParameterBase" })
table.insert(g_loadedClasses, { "UParticleEmitter", 1717, "UObject" })
table.insert(g_loadedClasses, { "UParticleSpriteEmitter", 1719, "UParticleEmitter" })
table.insert(g_loadedClasses, { "UParticleLODLevel", 1721, "UObject" })
table.insert(g_loadedClasses, { "UParticleModule", 1723, "UObject" })
table.insert(g_loadedClasses, { "UParticleModuleAccelerationBase", 1725, "UParticleModule" })
table.insert(g_loadedClasses, { "UParticleModuleAcceleration", 1727, "UParticleModuleAccelerationBase" })
table.insert(g_loadedClasses, { "UParticleModuleAccelerationOverLifetime", 1729, "UParticleModuleAccelerationBase" })
table.insert(g_loadedClasses, { "UParticleModuleAttractorBase", 1731, "UParticleModule" })
table.insert(g_loadedClasses, { "UParticleModuleAttractorLine", 1733, "UParticleModuleAttractorBase" })
table.insert(g_loadedClasses, { "UParticleModuleAttractorParticle", 1735, "UParticleModuleAttractorBase" })
table.insert(g_loadedClasses, { "UParticleModuleAttractorPoint", 1737, "UParticleModuleAttractorBase" })
table.insert(g_loadedClasses, { "UParticleModuleBeamBase", 1739, "UParticleModule" })
table.insert(g_loadedClasses, { "UParticleModuleBeamModifier", 1741, "UParticleModuleBeamBase" })
table.insert(g_loadedClasses, { "UParticleModuleBeamNoise", 1743, "UParticleModuleBeamBase" })
table.insert(g_loadedClasses, { "UParticleModuleBeamSource", 1745, "UParticleModuleBeamBase" })
table.insert(g_loadedClasses, { "UParticleModuleBeamTarget", 1747, "UParticleModuleBeamBase" })
table.insert(g_loadedClasses, { "UParticleModuleBeamTrace", 1749, "UParticleModuleBeamTarget" })
table.insert(g_loadedClasses, { "UParticleModuleCameraBase", 1751, "UParticleModule" })
table.insert(g_loadedClasses, { "UParticleModuleCameraOffset", 1753, "UParticleModuleCameraBase" })
table.insert(g_loadedClasses, { "UParticleModuleCollisionBase", 1755, "UParticleModule" })
table.insert(g_loadedClasses, { "UParticleModuleCollision", 1757, "UParticleModuleCollisionBase" })
table.insert(g_loadedClasses, { "UParticleModuleCollisionActor", 1759, "UParticleModuleCollision" })
table.insert(g_loadedClasses, { "UParticleModuleColorBase", 1761, "UParticleModule" })
table.insert(g_loadedClasses, { "UParticleModuleColor", 1763, "UParticleModuleColorBase" })
table.insert(g_loadedClasses, { "UParticleModuleColor_Seeded", 1765, "UParticleModuleColor" })
table.insert(g_loadedClasses, { "UParticleModuleColorByParameter", 1767, "UParticleModuleColorBase" })
table.insert(g_loadedClasses, { "UParticleModuleColorOverLife", 1769, "UParticleModuleColorBase" })
table.insert(g_loadedClasses, { "UParticleModuleColorScaleOverDensity", 1771, "UParticleModuleColorBase" })
table.insert(g_loadedClasses, { "UParticleModuleColorScaleOverLife", 1773, "UParticleModuleColorBase" })
table.insert(g_loadedClasses, { "UParticleModuleEventBase", 1775, "UParticleModule" })
table.insert(g_loadedClasses, { "UParticleModuleEventGenerator", 1777, "UParticleModuleEventBase" })
table.insert(g_loadedClasses, { "UParticleModuleEventGeneratorDecal", 1779, "UParticleModuleEventGenerator" })
table.insert(g_loadedClasses, { "UParticleModuleEventReceiverBase", 1781, "UParticleModuleEventBase" })
table.insert(g_loadedClasses, { "UParticleModuleEventReceiverKillParticles", 1783, "UParticleModuleEventReceiverBase" })
table.insert(g_loadedClasses, { "UParticleModuleEventReceiverSpawn", 1785, "UParticleModuleEventReceiverBase" })
table.insert(g_loadedClasses, { "UParticleModuleForceFieldBase", 1787, "UParticleModule" })
table.insert(g_loadedClasses, { "UParticleModuleKillBase", 1789, "UParticleModule" })
table.insert(g_loadedClasses, { "UParticleModuleKillBox", 1791, "UParticleModuleKillBase" })
table.insert(g_loadedClasses, { "UParticleModuleKillHeight", 1793, "UParticleModuleKillBase" })
table.insert(g_loadedClasses, { "UParticleModuleLifetimeBase", 1795, "UParticleModule" })
table.insert(g_loadedClasses, { "UParticleModuleLifetime", 1797, "UParticleModuleLifetimeBase" })
table.insert(g_loadedClasses, { "UParticleModuleLifetime_Seeded", 1799, "UParticleModuleLifetime" })
table.insert(g_loadedClasses, { "UParticleModuleLocationBase", 1801, "UParticleModule" })
table.insert(g_loadedClasses, { "UParticleModuleLocation", 1803, "UParticleModuleLocationBase" })
table.insert(g_loadedClasses, { "UParticleModuleLocation_Seeded", 1805, "UParticleModuleLocation" })
table.insert(g_loadedClasses, { "UParticleModuleLocationBoneSocket", 1807, "UParticleModuleLocationBase" })
table.insert(g_loadedClasses, { "UParticleModuleLocationDirect", 1809, "UParticleModuleLocationBase" })
table.insert(g_loadedClasses, { "UParticleModuleLocationEmitter", 1811, "UParticleModuleLocationBase" })
table.insert(g_loadedClasses, { "UParticleModuleLocationEmitterDirect", 1813, "UParticleModuleLocationBase" })
table.insert(g_loadedClasses, { "UParticleModuleLocationPrimitiveBase", 1815, "UParticleModuleLocationBase" })
table.insert(g_loadedClasses, { "UParticleModuleLocationPrimitiveCylinder", 1817, "UParticleModuleLocationPrimitiveBase" })
table.insert(g_loadedClasses, { "UParticleModuleLocationPrimitiveCylinder_Seeded", 1819, "UParticleModuleLocationPrimitiveCylinder" })
table.insert(g_loadedClasses, { "UParticleModuleLocationPrimitiveSphere", 1821, "UParticleModuleLocationPrimitiveBase" })
table.insert(g_loadedClasses, { "UParticleModuleLocationPrimitiveSphere_Seeded", 1823, "UParticleModuleLocationPrimitiveSphere" })
table.insert(g_loadedClasses, { "UParticleModuleLocationSkelVertSurface", 1825, "UParticleModuleLocationBase" })
table.insert(g_loadedClasses, { "UParticleModuleSourceMovement", 1827, "UParticleModuleLocationBase" })
table.insert(g_loadedClasses, { "UParticleModuleMaterialBase", 1829, "UParticleModule" })
table.insert(g_loadedClasses, { "UParticleModuleMaterialByParameter", 1831, "UParticleModuleMaterialBase" })
table.insert(g_loadedClasses, { "UParticleModuleMeshMaterial", 1833, "UParticleModuleMaterialBase" })
table.insert(g_loadedClasses, { "UParticleModuleOrbitBase", 1835, "UParticleModule" })
table.insert(g_loadedClasses, { "UParticleModuleOrbit", 1837, "UParticleModuleOrbitBase" })
table.insert(g_loadedClasses, { "UParticleModuleOrientationBase", 1839, "UParticleModule" })
table.insert(g_loadedClasses, { "UParticleModuleOrientationAxisLock", 1841, "UParticleModuleOrientationBase" })
table.insert(g_loadedClasses, { "UParticleModuleParameterBase", 1843, "UParticleModule" })
table.insert(g_loadedClasses, { "UParticleModuleParameterDynamic", 1845, "UParticleModuleParameterBase" })
table.insert(g_loadedClasses, { "UParticleModuleParameterDynamic_Seeded", 1847, "UParticleModuleParameterDynamic" })
table.insert(g_loadedClasses, { "UParticleModuleRequired", 1849, "UParticleModule" })
table.insert(g_loadedClasses, { "UParticleModuleRotationBase", 1851, "UParticleModule" })
table.insert(g_loadedClasses, { "UParticleModuleMeshRotation", 1853, "UParticleModuleRotationBase" })
table.insert(g_loadedClasses, { "UParticleModuleMeshRotation_Seeded", 1855, "UParticleModuleMeshRotation" })
table.insert(g_loadedClasses, { "UParticleModuleRotation", 1857, "UParticleModuleRotationBase" })
table.insert(g_loadedClasses, { "UParticleModuleRotation_Seeded", 1859, "UParticleModuleRotation" })
table.insert(g_loadedClasses, { "UParticleModuleRotationOverLifetime", 1861, "UParticleModuleRotationBase" })
table.insert(g_loadedClasses, { "UParticleModuleRotationRateBase", 1863, "UParticleModule" })
table.insert(g_loadedClasses, { "UParticleModuleMeshRotationRate", 1865, "UParticleModuleRotationRateBase" })
table.insert(g_loadedClasses, { "UParticleModuleMeshRotationRate_Seeded", 1867, "UParticleModuleMeshRotationRate" })
table.insert(g_loadedClasses, { "UParticleModuleMeshRotationRateMultiplyLife", 1869, "UParticleModuleRotationRateBase" })
table.insert(g_loadedClasses, { "UParticleModuleMeshRotationRateOverLife", 1871, "UParticleModuleRotationRateBase" })
table.insert(g_loadedClasses, { "UParticleModuleRotationRate", 1873, "UParticleModuleRotationRateBase" })
table.insert(g_loadedClasses, { "UParticleModuleRotationRate_Seeded", 1875, "UParticleModuleRotationRate" })
table.insert(g_loadedClasses, { "UParticleModuleRotationRateMultiplyLife", 1877, "UParticleModuleRotationRateBase" })
table.insert(g_loadedClasses, { "UParticleModuleSizeBase", 1879, "UParticleModule" })
table.insert(g_loadedClasses, { "UParticleModuleSize", 1881, "UParticleModuleSizeBase" })
table.insert(g_loadedClasses, { "UParticleModuleSize_Seeded", 1883, "UParticleModuleSize" })
table.insert(g_loadedClasses, { "UParticleModuleSizeMultiplyLife", 1885, "UParticleModuleSizeBase" })
table.insert(g_loadedClasses, { "UParticleModuleSizeMultiplyVelocity", 1887, "UParticleModuleSizeBase" })
table.insert(g_loadedClasses, { "UParticleModuleSizeScale", 1889, "UParticleModuleSizeBase" })
table.insert(g_loadedClasses, { "UParticleModuleSizeScaleByTime", 1891, "UParticleModuleSizeBase" })
table.insert(g_loadedClasses, { "UParticleModuleSizeScaleOverDensity", 1893, "UParticleModuleSizeBase" })
table.insert(g_loadedClasses, { "UParticleModuleSpawnBase", 1895, "UParticleModule" })
table.insert(g_loadedClasses, { "UParticleModuleSpawn", 1897, "UParticleModuleSpawnBase" })
table.insert(g_loadedClasses, { "UParticleModuleSpawnPerUnit", 1899, "UParticleModuleSpawnBase" })
table.insert(g_loadedClasses, { "UParticleModuleStoreSpawnTimeBase", 1901, "UParticleModule" })
table.insert(g_loadedClasses, { "UParticleModuleStoreSpawnTime", 1903, "UParticleModuleStoreSpawnTimeBase" })
table.insert(g_loadedClasses, { "UParticleModuleSubUVBase", 1905, "UParticleModule" })
table.insert(g_loadedClasses, { "UParticleModuleSubUV", 1907, "UParticleModuleSubUVBase" })
table.insert(g_loadedClasses, { "UParticleModuleSubUVMovie", 1909, "UParticleModuleSubUV" })
table.insert(g_loadedClasses, { "UParticleModuleSubUVDirect", 1911, "UParticleModuleSubUVBase" })
table.insert(g_loadedClasses, { "UParticleModuleSubUVSelect", 1913, "UParticleModuleSubUVBase" })
table.insert(g_loadedClasses, { "UParticleModuleTrailBase", 1915, "UParticleModule" })
table.insert(g_loadedClasses, { "UParticleModuleTrailSource", 1917, "UParticleModuleTrailBase" })
table.insert(g_loadedClasses, { "UParticleModuleTrailSpawn", 1919, "UParticleModuleTrailBase" })
table.insert(g_loadedClasses, { "UParticleModuleTrailTaper", 1921, "UParticleModuleTrailBase" })
table.insert(g_loadedClasses, { "UParticleModuleTypeDataBase", 1923, "UParticleModule" })
table.insert(g_loadedClasses, { "UParticleModuleTypeDataAnimTrail", 1925, "UParticleModuleTypeDataBase" })
table.insert(g_loadedClasses, { "UParticleModuleTypeDataApex", 1927, "UParticleModuleTypeDataBase" })
table.insert(g_loadedClasses, { "UParticleModuleTypeDataBeam", 1929, "UParticleModuleTypeDataBase" })
table.insert(g_loadedClasses, { "UParticleModuleTypeDataBeam2", 1931, "UParticleModuleTypeDataBase" })
table.insert(g_loadedClasses, { "UParticleModuleTypeDataMesh", 1933, "UParticleModuleTypeDataBase" })
table.insert(g_loadedClasses, { "UParticleModuleTypeDataMeshPhysX", 1935, "UParticleModuleTypeDataMesh" })
table.insert(g_loadedClasses, { "UParticleModuleTypeDataPhysX", 1937, "UParticleModuleTypeDataBase" })
table.insert(g_loadedClasses, { "UParticleModuleTypeDataRibbon", 1939, "UParticleModuleTypeDataBase" })
table.insert(g_loadedClasses, { "UParticleModuleTypeDataTrail", 1941, "UParticleModuleTypeDataBase" })
table.insert(g_loadedClasses, { "UParticleModuleTypeDataTrail2", 1943, "UParticleModuleTypeDataBase" })
table.insert(g_loadedClasses, { "UParticleModuleUberBase", 1945, "UParticleModule" })
table.insert(g_loadedClasses, { "UParticleModuleUberLTISIVCL", 1947, "UParticleModuleUberBase" })
table.insert(g_loadedClasses, { "UParticleModuleUberLTISIVCLIL", 1949, "UParticleModuleUberBase" })
table.insert(g_loadedClasses, { "UParticleModuleUberLTISIVCLILIRSSBLIRR", 1951, "UParticleModuleUberBase" })
table.insert(g_loadedClasses, { "UParticleModuleUberRainDrops", 1953, "UParticleModuleUberBase" })
table.insert(g_loadedClasses, { "UParticleModuleUberRainImpacts", 1955, "UParticleModuleUberBase" })
table.insert(g_loadedClasses, { "UParticleModuleUberRainSplashA", 1957, "UParticleModuleUberBase" })
table.insert(g_loadedClasses, { "UParticleModuleUberRainSplashB", 1959, "UParticleModuleUberBase" })
table.insert(g_loadedClasses, { "UParticleModuleVelocityBase", 1961, "UParticleModule" })
table.insert(g_loadedClasses, { "UParticleModuleVelocity", 1963, "UParticleModuleVelocityBase" })
table.insert(g_loadedClasses, { "UParticleModuleVelocity_Seeded", 1965, "UParticleModuleVelocity" })
table.insert(g_loadedClasses, { "UParticleModuleVelocityInheritParent", 1967, "UParticleModuleVelocityBase" })
table.insert(g_loadedClasses, { "UParticleModuleVelocityOverLifetime", 1969, "UParticleModuleVelocityBase" })
table.insert(g_loadedClasses, { "UParticleModuleEventSendToGame", 1971, "UObject" })
table.insert(g_loadedClasses, { "UParticleSystem", 1973, "UObject" })
table.insert(g_loadedClasses, { "UParticleSystemReplay", 1975, "UObject" })
table.insert(g_loadedClasses, { "UPhysXParticleSystem", 1977, "UObject" })
table.insert(g_loadedClasses, { "AKActor", 1979, "ADynamicSMActor" })
table.insert(g_loadedClasses, { "AKActorFromStatic", 1981, "AKActor" })
table.insert(g_loadedClasses, { "AKActorSpawnable", 1983, "AKActor" })
table.insert(g_loadedClasses, { "AKActorPizazz", 1985, "AKActorSpawnable" })
table.insert(g_loadedClasses, { "AKAsset", 1987, "AActor" })
table.insert(g_loadedClasses, { "APawn", 1989, "AActor" })
table.insert(g_loadedClasses, { "AVehicle", 1991, "APawn" })
table.insert(g_loadedClasses, { "ASVehicle", 1993, "AVehicle" })
table.insert(g_loadedClasses, { "ARB_ConstraintActor", 1995, "ARigidBodyBase" })
table.insert(g_loadedClasses, { "ARB_LineImpulseActor", 1997, "ARigidBodyBase" })
table.insert(g_loadedClasses, { "ARB_RadialImpulseActor", 1999, "ARigidBodyBase" })
table.insert(g_loadedClasses, { "ARB_Thruster", 2001, "ARigidBodyBase" })
table.insert(g_loadedClasses, { "URB_ConstraintDrawComponent", 2003, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "URB_RadialImpulseComponent", 2005, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "URB_Handle", 2007, "UActorComponent" })
table.insert(g_loadedClasses, { "URB_Spring", 2009, "UActorComponent" })
table.insert(g_loadedClasses, { "USVehicleSimBase", 2011, "UActorComponent" })
table.insert(g_loadedClasses, { "USVehicleSimCar", 2013, "USVehicleSimBase" })
table.insert(g_loadedClasses, { "USVehicleSimTank", 2015, "USVehicleSimCar" })
table.insert(g_loadedClasses, { "UActorFactoryApexClothing", 2017, "UActorFactorySkeletalMesh" })
table.insert(g_loadedClasses, { "UApexDestructibleDamageParameters", 2019, "UObject" })
table.insert(g_loadedClasses, { "UFractureMaterial", 2021, "UObject" })
table.insert(g_loadedClasses, { "UPhysicalMaterial", 2023, "UObject" })
table.insert(g_loadedClasses, { "UPhysicalMaterialPropertyBase", 2025, "UObject" })
table.insert(g_loadedClasses, { "UPhysicsAsset", 2027, "UObject" })
table.insert(g_loadedClasses, { "UPhysicsAssetInstance", 2029, "UObject" })
table.insert(g_loadedClasses, { "UPhysicsLODVerticalEmitter", 2031, "UObject" })
table.insert(g_loadedClasses, { "URB_BodyInstance", 2033, "UObject" })
table.insert(g_loadedClasses, { "URB_ConstraintInstance", 2035, "UObject" })
table.insert(g_loadedClasses, { "URB_ConstraintSetup", 2037, "UObject" })
table.insert(g_loadedClasses, { "URB_BSJointSetup", 2039, "URB_ConstraintSetup" })
table.insert(g_loadedClasses, { "URB_DistanceJointSetup", 2041, "URB_ConstraintSetup" })
table.insert(g_loadedClasses, { "URB_HingeSetup", 2043, "URB_ConstraintSetup" })
table.insert(g_loadedClasses, { "URB_PrismaticSetup", 2045, "URB_ConstraintSetup" })
table.insert(g_loadedClasses, { "URB_PulleyJointSetup", 2047, "URB_ConstraintSetup" })
table.insert(g_loadedClasses, { "URB_SkelJointSetup", 2049, "URB_ConstraintSetup" })
table.insert(g_loadedClasses, { "URB_StayUprightSetup", 2051, "URB_ConstraintSetup" })
table.insert(g_loadedClasses, { "USVehicleWheel", 2053, "UComponent" })
table.insert(g_loadedClasses, { "ANxGenericForceFieldBrush", 2055, "AVolume" })
table.insert(g_loadedClasses, { "ARB_ForceFieldExcludeVolume", 2057, "AVolume" })
table.insert(g_loadedClasses, { "ANxForceField", 2059, "AActor" })
table.insert(g_loadedClasses, { "ANxCylindricalForceField", 2061, "ANxForceField" })
table.insert(g_loadedClasses, { "ANxCylindricalForceFieldCapsule", 2063, "ANxCylindricalForceField" })
table.insert(g_loadedClasses, { "ANxForceFieldGeneric", 2065, "ANxForceField" })
table.insert(g_loadedClasses, { "ANxForceFieldRadial", 2067, "ANxForceField" })
table.insert(g_loadedClasses, { "ANxForceFieldTornado", 2069, "ANxForceField" })
table.insert(g_loadedClasses, { "ANxGenericForceField", 2071, "ANxForceField" })
table.insert(g_loadedClasses, { "ANxGenericForceFieldBox", 2073, "ANxGenericForceField" })
table.insert(g_loadedClasses, { "ANxGenericForceFieldCapsule", 2075, "ANxGenericForceField" })
table.insert(g_loadedClasses, { "ANxRadialForceField", 2077, "ANxForceField" })
table.insert(g_loadedClasses, { "ANxRadialCustomForceField", 2079, "ANxRadialForceField" })
table.insert(g_loadedClasses, { "ANxTornadoAngularForceField", 2081, "ANxForceField" })
table.insert(g_loadedClasses, { "ANxTornadoAngularForceFieldCapsule", 2083, "ANxTornadoAngularForceField" })
table.insert(g_loadedClasses, { "ANxTornadoForceField", 2085, "ANxForceField" })
table.insert(g_loadedClasses, { "ANxTornadoForceFieldCapsule", 2087, "ANxTornadoForceField" })
table.insert(g_loadedClasses, { "ANxForceFieldSpawnable", 2089, "AActor" })
table.insert(g_loadedClasses, { "ARB_CylindricalForceActor", 2091, "ARigidBodyBase" })
table.insert(g_loadedClasses, { "ARB_RadialForceActor", 2093, "ARigidBodyBase" })
table.insert(g_loadedClasses, { "UNxForceFieldComponent", 2095, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "UNxForceFieldCylindricalComponent", 2097, "UNxForceFieldComponent" })
table.insert(g_loadedClasses, { "UNxForceFieldGenericComponent", 2099, "UNxForceFieldComponent" })
table.insert(g_loadedClasses, { "UNxForceFieldRadialComponent", 2101, "UNxForceFieldComponent" })
table.insert(g_loadedClasses, { "UNxForceFieldTornadoComponent", 2103, "UNxForceFieldComponent" })
table.insert(g_loadedClasses, { "UForceFieldShape", 2105, "UObject" })
table.insert(g_loadedClasses, { "UForceFieldShapeBox", 2107, "UForceFieldShape" })
table.insert(g_loadedClasses, { "UForceFieldShapeCapsule", 2109, "UForceFieldShape" })
table.insert(g_loadedClasses, { "UForceFieldShapeSphere", 2111, "UForceFieldShape" })
table.insert(g_loadedClasses, { "APrefabInstance", 2113, "AActor" })
table.insert(g_loadedClasses, { "UPrefab", 2115, "UObject" })
table.insert(g_loadedClasses, { "USequenceObject", 2117, "UObject" })
table.insert(g_loadedClasses, { "USequenceOp", 2119, "USequenceObject" })
table.insert(g_loadedClasses, { "USequenceEvent", 2121, "USequenceOp" })
table.insert(g_loadedClasses, { "USequenceEventCustomEnableCondition", 2123, "UObject" })
table.insert(g_loadedClasses, { "USequenceFrame", 2125, "USequenceObject" })
table.insert(g_loadedClasses, { "USavingSequenceFrame", 2127, "USequenceFrame" })
table.insert(g_loadedClasses, { "USequenceFrameWrapped", 2129, "USequenceFrame" })
table.insert(g_loadedClasses, { "USeqDef_Base", 2131, "USequenceOp" })
table.insert(g_loadedClasses, { "USequence", 2133, "USequenceOp" })
table.insert(g_loadedClasses, { "UPrefabSequence", 2135, "USequence" })
table.insert(g_loadedClasses, { "UPrefabSequenceContainer", 2137, "USequence" })
table.insert(g_loadedClasses, { "USequenceDefinition", 2139, "USequence" })
table.insert(g_loadedClasses, { "USequenceAction", 2141, "USequenceOp" })
table.insert(g_loadedClasses, { "USeqAct_ActivateRemoteEvent", 2143, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_AndGate", 2145, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_ApplyBehavior", 2147, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_ApplySoundNode", 2149, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_AttachToEvent", 2151, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_CameraFade", 2153, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_CameraLookAt", 2155, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_ChangeCollision", 2157, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_CommitMapChange", 2159, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_ConsoleCommand", 2161, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_ConvertToString", 2163, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_DrawText", 2165, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_FinishSequence", 2167, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_Gate", 2169, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_GetDistance", 2171, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_GetLocationAndRotation", 2173, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_GetProperty", 2175, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_GetVectorComponents", 2177, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_GetVelocity", 2179, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_HeadTrackingControl", 2181, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_IsInObjectList", 2183, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_Latent", 2185, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_ActorFactory", 2187, "USeqAct_Latent" })
table.insert(g_loadedClasses, { "USeqAct_ActorFactoryEx", 2189, "USeqAct_ActorFactory" })
table.insert(g_loadedClasses, { "USeqAct_ProjectileFactory", 2191, "USeqAct_ActorFactory" })
table.insert(g_loadedClasses, { "USeqAct_AIMoveToActor", 2193, "USeqAct_Latent" })
table.insert(g_loadedClasses, { "USeqAct_Delay", 2195, "USeqAct_Latent" })
table.insert(g_loadedClasses, { "USeqAct_DelaySwitch", 2197, "USeqAct_Latent" })
table.insert(g_loadedClasses, { "USeqAct_ForceGarbageCollection", 2199, "USeqAct_Latent" })
table.insert(g_loadedClasses, { "USeqAct_Interp", 2201, "USeqAct_Latent" })
table.insert(g_loadedClasses, { "USeqAct_LevelStreamingBase", 2203, "USeqAct_Latent" })
table.insert(g_loadedClasses, { "USeqAct_LevelStreaming", 2205, "USeqAct_LevelStreamingBase" })
table.insert(g_loadedClasses, { "USeqAct_MultiLevelStreaming", 2207, "USeqAct_LevelStreamingBase" })
table.insert(g_loadedClasses, { "USeqAct_LevelVisibility", 2209, "USeqAct_Latent" })
table.insert(g_loadedClasses, { "USeqAct_PlaySound", 2211, "USeqAct_Latent" })
table.insert(g_loadedClasses, { "USeqAct_PrepareMapChange", 2213, "USeqAct_Latent" })
table.insert(g_loadedClasses, { "USeqAct_SetDOFParams", 2215, "USeqAct_Latent" })
table.insert(g_loadedClasses, { "USeqAct_SetMotionBlurParams", 2217, "USeqAct_Latent" })
table.insert(g_loadedClasses, { "USeqAct_StreamInTextures", 2219, "USeqAct_Latent" })
table.insert(g_loadedClasses, { "USeqAct_WaitForLevelsVisible", 2221, "USeqAct_Latent" })
table.insert(g_loadedClasses, { "USeqAct_Log", 2223, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_ModifyCover", 2225, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_ModifyHealth", 2227, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_ParticleEventGenerator", 2229, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_PhysXSwitch", 2231, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_PlayCameraAnim", 2233, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_PlayFaceFXAnim", 2235, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_PlayMusicTrack", 2237, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_Possess", 2239, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_SetApexClothingParam", 2241, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_SetBlockRigidBody", 2243, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_SetCameraTarget", 2245, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_SetMaterial", 2247, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_SetMatInstScalarParam", 2249, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_SetMesh", 2251, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_SetPhysics", 2253, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_SetRigidBodyIgnoreVehicles", 2255, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_SetSequenceVariable", 2257, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_AccessObjectList", 2259, "USeqAct_SetSequenceVariable" })
table.insert(g_loadedClasses, { "USeqAct_AddFloat", 2261, "USeqAct_SetSequenceVariable" })
table.insert(g_loadedClasses, { "USeqAct_AddInt", 2263, "USeqAct_SetSequenceVariable" })
table.insert(g_loadedClasses, { "USeqAct_CastToFloat", 2265, "USeqAct_SetSequenceVariable" })
table.insert(g_loadedClasses, { "USeqAct_CastToInt", 2267, "USeqAct_SetSequenceVariable" })
table.insert(g_loadedClasses, { "USeqAct_DivideFloat", 2269, "USeqAct_SetSequenceVariable" })
table.insert(g_loadedClasses, { "USeqAct_DivideInt", 2271, "USeqAct_SetSequenceVariable" })
table.insert(g_loadedClasses, { "USeqAct_ModifyObjectList", 2273, "USeqAct_SetSequenceVariable" })
table.insert(g_loadedClasses, { "USeqAct_MultiplyFloat", 2275, "USeqAct_SetSequenceVariable" })
table.insert(g_loadedClasses, { "USeqAct_MultiplyInt", 2277, "USeqAct_SetSequenceVariable" })
table.insert(g_loadedClasses, { "USeqAct_SetBool", 2279, "USeqAct_SetSequenceVariable" })
table.insert(g_loadedClasses, { "USeqAct_SetFloat", 2281, "USeqAct_SetSequenceVariable" })
table.insert(g_loadedClasses, { "USeqAct_SetInt", 2283, "USeqAct_SetSequenceVariable" })
table.insert(g_loadedClasses, { "USeqAct_SetLocation", 2285, "USeqAct_SetSequenceVariable" })
table.insert(g_loadedClasses, { "USeqAct_SetObject", 2287, "USeqAct_SetSequenceVariable" })
table.insert(g_loadedClasses, { "USeqAct_SetString", 2289, "USeqAct_SetSequenceVariable" })
table.insert(g_loadedClasses, { "USeqAct_SubtractFloat", 2291, "USeqAct_SetSequenceVariable" })
table.insert(g_loadedClasses, { "USeqAct_SubtractInt", 2293, "USeqAct_SetSequenceVariable" })
table.insert(g_loadedClasses, { "USeqAct_SetVectorComponents", 2295, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_Switch", 2297, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_RandomSwitch", 2299, "USeqAct_Switch" })
table.insert(g_loadedClasses, { "USeqAct_Timer", 2301, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_Toggle", 2303, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_Trace", 2305, "USequenceAction" })
table.insert(g_loadedClasses, { "USequenceCondition", 2307, "USequenceOp" })
table.insert(g_loadedClasses, { "USeqCond_CompareBool", 2309, "USequenceCondition" })
table.insert(g_loadedClasses, { "USeqCond_CompareFloat", 2311, "USequenceCondition" })
table.insert(g_loadedClasses, { "USeqCond_CompareInt", 2313, "USequenceCondition" })
table.insert(g_loadedClasses, { "USeqCond_CompareObject", 2315, "USequenceCondition" })
table.insert(g_loadedClasses, { "USeqCond_GetServerType", 2317, "USequenceCondition" })
table.insert(g_loadedClasses, { "USeqCond_Increment", 2319, "USequenceCondition" })
table.insert(g_loadedClasses, { "USeqCond_IncrementFloat", 2321, "USequenceCondition" })
table.insert(g_loadedClasses, { "USeqCond_IsAlive", 2323, "USequenceCondition" })
table.insert(g_loadedClasses, { "USeqCond_IsBenchmarking", 2325, "USequenceCondition" })
table.insert(g_loadedClasses, { "USeqCond_IsConsole", 2327, "USequenceCondition" })
table.insert(g_loadedClasses, { "USeqCond_IsInCombat", 2329, "USequenceCondition" })
table.insert(g_loadedClasses, { "USeqCond_IsLoggedIn", 2331, "USequenceCondition" })
table.insert(g_loadedClasses, { "USeqCond_IsPIE", 2333, "USequenceCondition" })
table.insert(g_loadedClasses, { "USeqCond_IsSameTeam", 2335, "USequenceCondition" })
table.insert(g_loadedClasses, { "USeqCond_MatureLanguage", 2337, "USequenceCondition" })
table.insert(g_loadedClasses, { "USeqCond_ShowGore", 2339, "USequenceCondition" })
table.insert(g_loadedClasses, { "USeqCond_SwitchBase", 2341, "USequenceCondition" })
table.insert(g_loadedClasses, { "USeqCond_SwitchClass", 2343, "USeqCond_SwitchBase" })
table.insert(g_loadedClasses, { "USeqCond_SwitchObject", 2345, "USeqCond_SwitchBase" })
table.insert(g_loadedClasses, { "USeqCond_SwitchPlatform", 2347, "USequenceCondition" })
table.insert(g_loadedClasses, { "USeqEvent_AISeeEnemy", 2349, "USequenceEvent" })
table.insert(g_loadedClasses, { "USeqEvent_AnimNotify", 2351, "USequenceEvent" })
table.insert(g_loadedClasses, { "USeqEvent_Console", 2353, "USequenceEvent" })
table.insert(g_loadedClasses, { "USeqEvent_ConstraintBroken", 2355, "USequenceEvent" })
table.insert(g_loadedClasses, { "USeqEvent_Destroyed", 2357, "USequenceEvent" })
table.insert(g_loadedClasses, { "USeqEvent_LevelLoaded", 2359, "USequenceEvent" })
table.insert(g_loadedClasses, { "USeqEvent_Mover", 2361, "USequenceEvent" })
table.insert(g_loadedClasses, { "USeqEvent_ParticleEvent", 2363, "USequenceEvent" })
table.insert(g_loadedClasses, { "USeqEvent_ProjectileLanded", 2365, "USequenceEvent" })
table.insert(g_loadedClasses, { "USeqEvent_RemoteEvent", 2367, "USequenceEvent" })
table.insert(g_loadedClasses, { "USeqEvent_RigidBodyCollision", 2369, "USequenceEvent" })
table.insert(g_loadedClasses, { "USeqEvent_SeeDeath", 2371, "USequenceEvent" })
table.insert(g_loadedClasses, { "USeqEvent_SequenceActivated", 2373, "USequenceEvent" })
table.insert(g_loadedClasses, { "USeqEvent_TakeDamage", 2375, "USequenceEvent" })
table.insert(g_loadedClasses, { "USeqEvent_Touch", 2377, "USequenceEvent" })
table.insert(g_loadedClasses, { "USeqEvent_Used", 2379, "USequenceEvent" })
table.insert(g_loadedClasses, { "USequenceVariable", 2381, "USequenceObject" })
table.insert(g_loadedClasses, { "UInterpData", 2383, "USequenceVariable" })
table.insert(g_loadedClasses, { "USeqVar_Bool", 2385, "USequenceVariable" })
table.insert(g_loadedClasses, { "USeqVar_External", 2387, "USequenceVariable" })
table.insert(g_loadedClasses, { "USeqVar_Float", 2389, "USequenceVariable" })
table.insert(g_loadedClasses, { "USeqVar_RandomFloat", 2391, "USeqVar_Float" })
table.insert(g_loadedClasses, { "USeqVar_Int", 2393, "USequenceVariable" })
table.insert(g_loadedClasses, { "USeqVar_RandomInt", 2395, "USeqVar_Int" })
table.insert(g_loadedClasses, { "USeqVar_Named", 2397, "USequenceVariable" })
table.insert(g_loadedClasses, { "USeqVar_Object", 2399, "USequenceVariable" })
table.insert(g_loadedClasses, { "USeqVar_Character", 2401, "USeqVar_Object" })
table.insert(g_loadedClasses, { "USeqVar_Group", 2403, "USeqVar_Object" })
table.insert(g_loadedClasses, { "USeqVar_ObjectList", 2405, "USeqVar_Object" })
table.insert(g_loadedClasses, { "USeqVar_ObjectVolume", 2407, "USeqVar_Object" })
table.insert(g_loadedClasses, { "USeqVar_Player", 2409, "USeqVar_Object" })
table.insert(g_loadedClasses, { "USeqVar_String", 2411, "USequenceVariable" })
table.insert(g_loadedClasses, { "USeqVar_Vector", 2413, "USequenceVariable" })
table.insert(g_loadedClasses, { "AAmbientSound", 2415, "AKeypoint" })
table.insert(g_loadedClasses, { "UDistributionFloatSoundParameter", 2417, "UDistributionFloatParameterBase" })
table.insert(g_loadedClasses, { "USoundNode", 2419, "UObject" })
table.insert(g_loadedClasses, { "USoundNodeWave", 2421, "USoundNode" })
table.insert(g_loadedClasses, { "ALandscapeProxy", 2423, "AInfo" })
table.insert(g_loadedClasses, { "ALandscape", 2425, "ALandscapeProxy" })
table.insert(g_loadedClasses, { "ATerrain", 2427, "AInfo" })
table.insert(g_loadedClasses, { "ULandscapeComponent", 2429, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "ULandscapeHeightfieldCollisionComponent", 2431, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "UTerrainComponent", 2433, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "UTerrainWeightMapTexture", 2435, "UTexture2D" })
table.insert(g_loadedClasses, { "UTerrainLayerSetup", 2437, "UObject" })
table.insert(g_loadedClasses, { "UTerrainMaterial", 2439, "UObject" })
table.insert(g_loadedClasses, { "UDataStoreClient", 2441, "UUIRoot" })
table.insert(g_loadedClasses, { "UConsole", 2443, "UInteraction" })
table.insert(g_loadedClasses, { "UInput", 2445, "UInteraction" })
table.insert(g_loadedClasses, { "UPlayerInput", 2447, "UInput" })
table.insert(g_loadedClasses, { "UPlayerManagerInteraction", 2449, "UInteraction" })
table.insert(g_loadedClasses, { "UUISceneClient", 2451, "UUIRoot" })
table.insert(g_loadedClasses, { "UUISoundTheme", 2453, "UObject" })
table.insert(g_loadedClasses, { "UUIDataStoreSubscriber", 2455, "UInterface" })
table.insert(g_loadedClasses, { "UUIDataStorePublisher", 2457, "UUIDataStoreSubscriber" })
table.insert(g_loadedClasses, { "UUIListElementCellProvider", 2459, "UInterface" })
table.insert(g_loadedClasses, { "UUIListElementProvider", 2461, "UInterface" })
table.insert(g_loadedClasses, { "UUIDataProvider", 2463, "UUIRoot" })
table.insert(g_loadedClasses, { "UUIConfigProvider", 2465, "UUIDataProvider" })
table.insert(g_loadedClasses, { "UUIConfigFileProvider", 2467, "UUIConfigProvider" })
table.insert(g_loadedClasses, { "UUIConfigSectionProvider", 2469, "UUIConfigProvider" })
table.insert(g_loadedClasses, { "UUIDataProvider_OnlinePlayerDataBase", 2471, "UUIDataProvider" })
table.insert(g_loadedClasses, { "UUIDataProvider_OnlineFriendMessages", 2473, "UUIDataProvider_OnlinePlayerDataBase" })
table.insert(g_loadedClasses, { "UUIDataProvider_OnlineFriends", 2475, "UUIDataProvider_OnlinePlayerDataBase" })
table.insert(g_loadedClasses, { "UUIDataProvider_OnlinePartyChatList", 2477, "UUIDataProvider_OnlinePlayerDataBase" })
table.insert(g_loadedClasses, { "UUIDataProvider_OnlinePlayerStorage", 2479, "UUIDataProvider_OnlinePlayerDataBase" })
table.insert(g_loadedClasses, { "UUIDataProvider_OnlineProfileSettings", 2481, "UUIDataProvider_OnlinePlayerStorage" })
table.insert(g_loadedClasses, { "UUIDataProvider_PlayerAchievements", 2483, "UUIDataProvider_OnlinePlayerDataBase" })
table.insert(g_loadedClasses, { "UUIDataProvider_OnlinePlayerStorageArray", 2485, "UUIDataProvider" })
table.insert(g_loadedClasses, { "UUIDataProvider_SettingsArray", 2487, "UUIDataProvider" })
table.insert(g_loadedClasses, { "UUIDataStore", 2489, "UUIDataProvider" })
table.insert(g_loadedClasses, { "UUIDataStore_DynamicResource", 2491, "UUIDataStore" })
table.insert(g_loadedClasses, { "UUIDataStore_Fonts", 2493, "UUIDataStore" })
table.insert(g_loadedClasses, { "UUIDataStore_GameResource", 2495, "UUIDataStore" })
table.insert(g_loadedClasses, { "UUIDataStore_MenuItems", 2497, "UUIDataStore_GameResource" })
table.insert(g_loadedClasses, { "UUIDataStore_GameState", 2499, "UUIDataStore" })
table.insert(g_loadedClasses, { "UUIDataStore_Registry", 2501, "UUIDataStore" })
table.insert(g_loadedClasses, { "UUIDataStore_Remote", 2503, "UUIDataStore" })
table.insert(g_loadedClasses, { "UUIDataStore_OnlineGameSearch", 2505, "UUIDataStore_Remote" })
table.insert(g_loadedClasses, { "UUIDataStore_OnlinePlayerData", 2507, "UUIDataStore_Remote" })
table.insert(g_loadedClasses, { "UUIDataStore_OnlineStats", 2509, "UUIDataStore_Remote" })
table.insert(g_loadedClasses, { "UUIDataStore_Settings", 2511, "UUIDataStore" })
table.insert(g_loadedClasses, { "UUIDataStore_OnlineGameSettings", 2513, "UUIDataStore_Settings" })
table.insert(g_loadedClasses, { "UUIDataStore_StringBase", 2515, "UUIDataStore" })
table.insert(g_loadedClasses, { "UUIDataStore_InputAlias", 2517, "UUIDataStore_StringBase" })
table.insert(g_loadedClasses, { "UUIDataStore_StringAliasMap", 2519, "UUIDataStore_StringBase" })
table.insert(g_loadedClasses, { "UUIDataStore_Strings", 2521, "UUIDataStore_StringBase" })
table.insert(g_loadedClasses, { "UUIDynamicFieldProvider", 2523, "UUIDataProvider" })
table.insert(g_loadedClasses, { "UUIPropertyDataProvider", 2525, "UUIDataProvider" })
table.insert(g_loadedClasses, { "UUIDynamicDataProvider", 2527, "UUIPropertyDataProvider" })
table.insert(g_loadedClasses, { "UUIDataProvider_Settings", 2529, "UUIDynamicDataProvider" })
table.insert(g_loadedClasses, { "UUIResourceDataProvider", 2531, "UUIPropertyDataProvider" })
table.insert(g_loadedClasses, { "UUIDataProvider_MenuItem", 2533, "UUIResourceDataProvider" })
table.insert(g_loadedClasses, { "UUIMapSummary", 2535, "UUIResourceDataProvider" })
table.insert(g_loadedClasses, { "UUIResourceCombinationProvider", 2537, "UUIDataProvider" })
table.insert(g_loadedClasses, { "UGameUISceneClient", 2539, "UUISceneClient" })
table.insert(g_loadedClasses, { "UScene", 2541, "UObject" })
table.insert(g_loadedClasses, { "AFoliageFactory", 2543, "AVolume" })
table.insert(g_loadedClasses, { "AInstancedFoliageActor", 2545, "AActor" })
table.insert(g_loadedClasses, { "AInteractiveFoliageActor", 2547, "AStaticMeshActor" })
table.insert(g_loadedClasses, { "UFoliageComponent", 2549, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "UInteractiveFoliageComponent", 2551, "UStaticMeshComponent" })
table.insert(g_loadedClasses, { "UActorFactoryInteractiveFoliage", 2553, "UActorFactoryStaticMesh" })
table.insert(g_loadedClasses, { "AFluidInfluenceActor", 2555, "AActor" })
table.insert(g_loadedClasses, { "AFluidSurfaceActor", 2557, "AActor" })
table.insert(g_loadedClasses, { "AFluidSurfaceActorMovable", 2559, "AFluidSurfaceActor" })
table.insert(g_loadedClasses, { "UFluidInfluenceComponent", 2561, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "UFluidSurfaceComponent", 2563, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "ALensFlareSource", 2565, "AActor" })
table.insert(g_loadedClasses, { "ULensFlareComponent", 2567, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "ULensFlare", 2569, "UObject" })
table.insert(g_loadedClasses, { "UTextureFlipBook", 2571, "UTexture2D" })
table.insert(g_loadedClasses, { "UTexture2DComposite", 2573, "UTexture" })
table.insert(g_loadedClasses, { "UTexture2DDynamic", 2575, "UTexture" })
table.insert(g_loadedClasses, { "UTextureCube", 2577, "UTexture" })
table.insert(g_loadedClasses, { "UTextureMovie", 2579, "UTexture" })
table.insert(g_loadedClasses, { "UTextureRenderTarget", 2581, "UTexture" })
table.insert(g_loadedClasses, { "UTextureRenderTarget2D", 2583, "UTextureRenderTarget" })
table.insert(g_loadedClasses, { "UScriptedTexture", 2585, "UTextureRenderTarget2D" })
table.insert(g_loadedClasses, { "UTextureRenderTargetCube", 2587, "UTextureRenderTarget" })
table.insert(g_loadedClasses, { "UAudioDevice", 2589, "USubsystem" })
table.insert(g_loadedClasses, { "USoundClass", 2591, "UObject" })
table.insert(g_loadedClasses, { "USoundMode", 2593, "UObject" })
table.insert(g_loadedClasses, { "ADebugCameraController", 2595, "APlayerController" })
table.insert(g_loadedClasses, { "AMatineePawn", 2597, "APawn" })
table.insert(g_loadedClasses, { "AScout", 2599, "APawn" })
table.insert(g_loadedClasses, { "ALight", 2601, "AActor" })
table.insert(g_loadedClasses, { "ADirectionalLight", 2603, "ALight" })
table.insert(g_loadedClasses, { "ADirectionalLightToggleable", 2605, "ADirectionalLight" })
table.insert(g_loadedClasses, { "ADominantDirectionalLight", 2607, "ADirectionalLight" })
table.insert(g_loadedClasses, { "ADominantDirectionalLightMovable", 2609, "ADominantDirectionalLight" })
table.insert(g_loadedClasses, { "ALightShafts", 2611, "ALight" })
table.insert(g_loadedClasses, { "APointLight", 2613, "ALight" })
table.insert(g_loadedClasses, { "ADominantPointLight", 2615, "APointLight" })
table.insert(g_loadedClasses, { "APointLightMovable", 2617, "APointLight" })
table.insert(g_loadedClasses, { "APointLightToggleable", 2619, "APointLight" })
table.insert(g_loadedClasses, { "ASkyLight", 2621, "ALight" })
table.insert(g_loadedClasses, { "ASkyLightToggleable", 2623, "ASkyLight" })
table.insert(g_loadedClasses, { "ASpotLight", 2625, "ALight" })
table.insert(g_loadedClasses, { "ADominantSpotLight", 2627, "ASpotLight" })
table.insert(g_loadedClasses, { "AGeneratedMeshAreaLight", 2629, "ASpotLight" })
table.insert(g_loadedClasses, { "ASpotLightMovable", 2631, "ASpotLight" })
table.insert(g_loadedClasses, { "ASpotLightToggleable", 2633, "ASpotLight" })
table.insert(g_loadedClasses, { "AStaticLightCollectionActor", 2635, "ALight" })
table.insert(g_loadedClasses, { "ULightComponent", 2637, "UActorComponent" })
table.insert(g_loadedClasses, { "UDirectionalLightComponent", 2639, "ULightComponent" })
table.insert(g_loadedClasses, { "UDominantDirectionalLightComponent", 2641, "UDirectionalLightComponent" })
table.insert(g_loadedClasses, { "ULightShaftComponent", 2643, "ULightComponent" })
table.insert(g_loadedClasses, { "UPointLightComponent", 2645, "ULightComponent" })
table.insert(g_loadedClasses, { "UDominantPointLightComponent", 2647, "UPointLightComponent" })
table.insert(g_loadedClasses, { "USpotLightComponent", 2649, "UPointLightComponent" })
table.insert(g_loadedClasses, { "UDominantSpotLightComponent", 2651, "USpotLightComponent" })
table.insert(g_loadedClasses, { "USkyLightComponent", 2653, "ULightComponent" })
table.insert(g_loadedClasses, { "USphericalHarmonicLightComponent", 2655, "ULightComponent" })
table.insert(g_loadedClasses, { "ULightEnvironmentComponent", 2657, "UActorComponent" })
table.insert(g_loadedClasses, { "UDynamicLightEnvironmentComponent", 2659, "ULightEnvironmentComponent" })
table.insert(g_loadedClasses, { "UParticleLightEnvironmentComponent", 2661, "UDynamicLightEnvironmentComponent" })
table.insert(g_loadedClasses, { "UDrawLightConeComponent", 2663, "UDrawConeComponent" })
table.insert(g_loadedClasses, { "UDrawLightRadiusComponent", 2665, "UDrawSphereComponent" })
table.insert(g_loadedClasses, { "ULightFunction", 2667, "UObject" })
table.insert(g_loadedClasses, { "USkeletalMeshComponent", 2669, "UMeshComponent" })
table.insert(g_loadedClasses, { "USkeletalMesh", 2671, "UObject" })
table.insert(g_loadedClasses, { "USkeletalMeshSocket", 2673, "UObject" })
table.insert(g_loadedClasses, { "ASplineActor", 2675, "AActor" })
table.insert(g_loadedClasses, { "ASplineLoftActor", 2677, "ASplineActor" })
table.insert(g_loadedClasses, { "ASplineLoftActorMovable", 2679, "ASplineLoftActor" })
table.insert(g_loadedClasses, { "USplineComponent", 2681, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "AReplicationInfo", 2683, "AInfo" })
table.insert(g_loadedClasses, { "AGameReplicationInfo", 2685, "AReplicationInfo" })
table.insert(g_loadedClasses, { "APlayerReplicationInfo", 2687, "AReplicationInfo" })
table.insert(g_loadedClasses, { "ATeamInfo", 2689, "AReplicationInfo" })
table.insert(g_loadedClasses, { "ACamera", 2691, "AActor" })
table.insert(g_loadedClasses, { "ACameraActor", 2693, "AActor" })
table.insert(g_loadedClasses, { "ADynamicCameraActor", 2695, "ACameraActor" })
table.insert(g_loadedClasses, { "UCameraAnim", 2697, "UObject" })
table.insert(g_loadedClasses, { "UCameraAnimInst", 2699, "UObject" })
table.insert(g_loadedClasses, { "UCameraModifier", 2701, "UObject" })
table.insert(g_loadedClasses, { "UCameraModifier_CameraShake", 2703, "UCameraModifier" })
table.insert(g_loadedClasses, { "UCameraShake", 2705, "UObject" })
table.insert(g_loadedClasses, { "AResourcePoolManager", 2707, "AReplicationInfo" })
table.insert(g_loadedClasses, { "AWorldSoundManager", 2709, "AInfo" })
table.insert(g_loadedClasses, { "UComponentLifetimeManagerComponent", 2711, "UActorComponent" })
table.insert(g_loadedClasses, { "UAttributeContextResolver", 2713, "UObject" })
table.insert(g_loadedClasses, { "UBalancedActorAttributeContextResolver", 2715, "UAttributeContextResolver" })
table.insert(g_loadedClasses, { "UCharacterClassAttributeContextResolver", 2717, "UAttributeContextResolver" })
table.insert(g_loadedClasses, { "UControllerAttributeContextResolver", 2719, "UAttributeContextResolver" })
table.insert(g_loadedClasses, { "UGameInfoAttributeContextResolver", 2721, "UAttributeContextResolver" })
table.insert(g_loadedClasses, { "UOffHandWeaponAttributeContextResolver", 2723, "UAttributeContextResolver" })
table.insert(g_loadedClasses, { "UPawnAttributeContextResolver", 2725, "UAttributeContextResolver" })
table.insert(g_loadedClasses, { "UResourcePoolAttributeContextResolver", 2727, "UAttributeContextResolver" })
table.insert(g_loadedClasses, { "UWeaponAttributeContextResolver", 2729, "UAttributeContextResolver" })
table.insert(g_loadedClasses, { "UWeaponResourcePoolAttributeContextResolver", 2731, "UAttributeContextResolver" })
table.insert(g_loadedClasses, { "UAttributeEffect", 2733, "UObject" })
table.insert(g_loadedClasses, { "UAttributeExpression", 2735, "UObject" })
table.insert(g_loadedClasses, { "UAttributeMultiContextResolver", 2737, "UObject" })
table.insert(g_loadedClasses, { "UWeaponAttributeMultiContextResolver", 2739, "UAttributeMultiContextResolver" })
table.insert(g_loadedClasses, { "UAttributeValueResolver", 2741, "UObject" })
table.insert(g_loadedClasses, { "UObjectPropertyAttributeValueResolver", 2743, "UAttributeValueResolver" })
table.insert(g_loadedClasses, { "UReadOnlyObjectPropertyAttributeValueResolver", 2745, "UObjectPropertyAttributeValueResolver" })
table.insert(g_loadedClasses, { "UBehaviorBase", 2747, "UObject" })
table.insert(g_loadedClasses, { "UBehavior_Kill", 2749, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_PlaySound", 2751, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_RemoteEvent", 2753, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UExpressionEvaluator", 2755, "UObject" })
table.insert(g_loadedClasses, { "UExpressionTree", 2757, "UExpressionEvaluator" })
table.insert(g_loadedClasses, { "UAttributeDefinitionBase", 2759, "UGBXDefinition" })
table.insert(g_loadedClasses, { "UAttributeDefinition", 2761, "UAttributeDefinitionBase" })
table.insert(g_loadedClasses, { "UNestedAttributeDefinition", 2763, "UAttributeDefinition" })
table.insert(g_loadedClasses, { "UAttributeDefinitionMultiContext", 2765, "UAttributeDefinitionBase" })
table.insert(g_loadedClasses, { "UAttributeInitializationDefinition", 2767, "UGBXDefinition" })
table.insert(g_loadedClasses, { "UBaseBalanceDefinition", 2769, "UGBXDefinition" })
table.insert(g_loadedClasses, { "UCharacterClassDefinition", 2771, "UGBXDefinition" })
table.insert(g_loadedClasses, { "UExpressionEvaluatorDefinition", 2773, "UGBXDefinition" })
table.insert(g_loadedClasses, { "UGestaltPartMatricesCollectionDefinition", 2775, "UGBXDefinition" })
table.insert(g_loadedClasses, { "UImpactDefinition", 2777, "UGBXDefinition" })
table.insert(g_loadedClasses, { "UResourceDefinition", 2779, "UGBXDefinition" })
table.insert(g_loadedClasses, { "UResourcePoolDefinition", 2781, "UGBXDefinition" })
table.insert(g_loadedClasses, { "UGestaltPartMatrices", 2783, "UObject" })
table.insert(g_loadedClasses, { "UICounterBehavior", 2785, "UInterface" })
table.insert(g_loadedClasses, { "UIInstanceData", 2787, "UInterface" })
table.insert(g_loadedClasses, { "UInstanceDataHelper", 2789, "UObject" })
table.insert(g_loadedClasses, { "UPackageReferencer", 2791, "UObject" })
table.insert(g_loadedClasses, { "UPersistentGameDataManager", 2793, "UObject" })
table.insert(g_loadedClasses, { "UPersistentSequenceData", 2795, "UObject" })
table.insert(g_loadedClasses, { "UResourcePool", 2797, "UObject" })
table.insert(g_loadedClasses, { "UHealthResourcePool", 2799, "UResourcePool" })
table.insert(g_loadedClasses, { "UTargetableList", 2801, "UObject" })
table.insert(g_loadedClasses, { "AHybridNavigationArea", 2803, "AInfo" })
table.insert(g_loadedClasses, { "APickupableMeshActor", 2805, "AActor" })
table.insert(g_loadedClasses, { "UHybridNavigationAreaDebugRenderingComponent", 2807, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "UHybridNavigationVisualizationComponent", 2809, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "UInventoryCardPresentationDefinition", 2811, "UGBXDefinition" })
table.insert(g_loadedClasses, { "UManufacturerDefinition", 2813, "UGBXDefinition" })
table.insert(g_loadedClasses, { "ULevelStreamingDomino", 2815, "ULevelStreamingKismet" })
table.insert(g_loadedClasses, { "ULocalMessage", 2817, "UObject" })
table.insert(g_loadedClasses, { "UEdgeDetectionPostProcessEffect", 2819, "UPostProcessEffect" })
table.insert(g_loadedClasses, { "ADroppedPickup", 2821, "AActor" })
table.insert(g_loadedClasses, { "AInventory", 2823, "AActor" })
table.insert(g_loadedClasses, { "AWillowInventory", 2825, "AInventory" })
table.insert(g_loadedClasses, { "AWeapon", 2827, "AWillowInventory" })
table.insert(g_loadedClasses, { "AInventoryManager", 2829, "AActor" })
table.insert(g_loadedClasses, { "UGearboxCalloutDefinition", 2831, "UGBXDefinition" })
table.insert(g_loadedClasses, { "UWillowInventoryDefinition", 2833, "UGBXDefinition" })
table.insert(g_loadedClasses, { "UWillowInventoryPartDefinition", 2835, "UGBXDefinition" })
table.insert(g_loadedClasses, { "UIPickupable", 2837, "UInterface" })
table.insert(g_loadedClasses, { "USeqEvent_HitWall", 7250, "USequenceEvent" })
table.insert(g_loadedClasses, { "USeqAct_Destroy", 7890, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_Teleport", 7935, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_SetVelocity", 7950, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_ToggleHidden", 7976, "USeqAct_Toggle" })
table.insert(g_loadedClasses, { "USeqAct_AttachToActor", 7983, "USequenceAction" })
table.insert(g_loadedClasses, { "UIConsoleCommandBehavior", 8459, "UInterface" })
table.insert(g_loadedClasses, { "UIAppearanceBehavior", 8460, "UInterface" })
table.insert(g_loadedClasses, { "UIPhysicsBehavior", 8461, "UInterface" })
table.insert(g_loadedClasses, { "UIChangeCollisionBehavior", 8462, "UInterface" })
table.insert(g_loadedClasses, { "UIDestroyBehavior", 8463, "UInterface" })
table.insert(g_loadedClasses, { "UISoundBehavior", 8464, "UInterface" })
table.insert(g_loadedClasses, { "UOnlineAuthInterface", 8798, "UInterface" })
table.insert(g_loadedClasses, { "UOnlineTitleFileInterface", 8803, "UInterface" })
table.insert(g_loadedClasses, { "UOnlinePartyChatInterface", 8808, "UInterface" })
table.insert(g_loadedClasses, { "UOnlineNewsInterface", 8813, "UInterface" })
table.insert(g_loadedClasses, { "UOnlineStatsInterface", 8818, "UInterface" })
table.insert(g_loadedClasses, { "UOnlineVoiceInterface", 8823, "UInterface" })
table.insert(g_loadedClasses, { "UOnlineContentInterface", 8828, "UInterface" })
table.insert(g_loadedClasses, { "UOnlineGameInterface", 8833, "UInterface" })
table.insert(g_loadedClasses, { "UOnlineSystemInterface", 8838, "UInterface" })
table.insert(g_loadedClasses, { "UOnlinePlayerInterfaceEx", 8843, "UInterface" })
table.insert(g_loadedClasses, { "UOnlinePlayerInterface", 8848, "UInterface" })
table.insert(g_loadedClasses, { "UOnlineAccountInterface", 8853, "UInterface" })
table.insert(g_loadedClasses, { "AAccessControl", 9242, "AInfo" })
table.insert(g_loadedClasses, { "AAdmin", 9270, "APlayerController" })
table.insert(g_loadedClasses, { "UIScaleBehavior", 9859, "UInterface" })
table.insert(g_loadedClasses, { "AApexDestructibleActorSpawnable", 9868, "AApexDestructibleActor" })
table.insert(g_loadedClasses, { "AEmitterSpawnable", 9880, "AEmitter" })
table.insert(g_loadedClasses, { "AKAssetSpawnable", 9895, "AKAsset" })
table.insert(g_loadedClasses, { "UActorFactorySkeletalMeshCinematic", 9906, "UActorFactorySkeletalMesh" })
table.insert(g_loadedClasses, { "UActorFactorySkeletalMeshMAT", 9908, "UActorFactorySkeletalMesh" })
table.insert(g_loadedClasses, { "USeqEvent_Death", 10282, "USequenceEvent" })
table.insert(g_loadedClasses, { "USeqAct_ToggleGodMode", 10597, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_ControlMovieTexture", 11268, "USequenceAction" })
table.insert(g_loadedClasses, { "UIParameterBehavior", 11347, "UInterface" })
table.insert(g_loadedClasses, { "ACoverReplicator", 12216, "AReplicationInfo" })
table.insert(g_loadedClasses, { "UGameMessage", 12345, "ULocalMessage" })
table.insert(g_loadedClasses, { "UDmgType_Suicided", 12603, "UKillZDamageType" })
table.insert(g_loadedClasses, { "USeqAct_ToggleInput", 13582, "USeqAct_Toggle" })
table.insert(g_loadedClasses, { "USeqAct_ToggleHUD", 13657, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_ForceFeedback", 13693, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_ToggleCinematicMode", 13717, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_FlyThroughHasEnded", 14077, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_SetSoundMode", 14120, "USequenceAction" })
table.insert(g_loadedClasses, { "UAnimNotify_PlayFaceFXAnim", 16156, "UAnimNotify_Scripted" })
table.insert(g_loadedClasses, { "UBehavior_ChangeAllegiance", 17126, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_ChangeBoneVisibility", 17138, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_ChangeCollision", 17150, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_ChangeCollisionSize", 17161, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_ChangeCounter", 17195, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_ChangeParticleSystemActiveState", 17213, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UIParticleSystemBehavior", 17217, "UInterface" })
table.insert(g_loadedClasses, { "UBehavior_ChangeScale", 17225, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_ChangeSpin", 17236, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UIBasicBehavior", 17245, "UInterface" })
table.insert(g_loadedClasses, { "UBehavior_ChangeVisibility", 17255, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_ClientConsoleCommand", 17266, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_ConsoleCommand", 17277, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_CustomAnimation", 17288, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_Destroy", 17310, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_FollowAllegiance", 17320, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_RandomlyRunBehaviors", 17362, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_RunBehaviorCollection", 17389, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBehaviorCollectionDefinition", 17393, "UGBXDefinition" })
table.insert(g_loadedClasses, { "UBehavior_SetMaterialParameters", 17417, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UIMaterialBehavior", 17420, "UInterface" })
table.insert(g_loadedClasses, { "UBehavior_SetParticleSystemParameters", 17451, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_SetPhysics", 17495, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_SetSkelControlActive", 17517, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UBehavior_ToggleVisibility", 17529, "UBehaviorBase" })
table.insert(g_loadedClasses, { "ABroadcastHandler", 17626, "AInfo" })
table.insert(g_loadedClasses, { "AColorScaleVolume", 18275, "AVolume" })
table.insert(g_loadedClasses, { "ADebugCameraHUD", 19223, "AHUD" })
table.insert(g_loadedClasses, { "UDebugCameraInput", 19255, "UPlayerInput" })
table.insert(g_loadedClasses, { "AVolumeTimer", 19827, "AInfo" })
table.insert(g_loadedClasses, { "USeqAct_SetDamageInstigator", 19859, "USequenceAction" })
table.insert(g_loadedClasses, { "UDmgType_Crushed", 19993, "UDamageType" })
table.insert(g_loadedClasses, { "UDmgType_Fell", 19995, "UDamageType" })
table.insert(g_loadedClasses, { "UDmgType_Telefragged", 19998, "UDamageType" })
table.insert(g_loadedClasses, { "ADynamicPhysicsVolume", 20480, "APhysicsVolume" })
table.insert(g_loadedClasses, { "ADynamicSMActor_Spawnable", 20531, "ADynamicSMActor" })
table.insert(g_loadedClasses, { "ADynamicTriggerVolume", 20540, "ATriggerVolume" })
table.insert(g_loadedClasses, { "USeqAct_SetParticleSysParam", 20881, "USequenceAction" })
table.insert(g_loadedClasses, { "AExponentialHeightFog", 21372, "AInfo" })
table.insert(g_loadedClasses, { "UFailedConnect", 21466, "ULocalMessage" })
table.insert(g_loadedClasses, { "USeqEvent_PlayerSpawned", 22175, "USequenceEvent" })
table.insert(g_loadedClasses, { "UGameReplicationInfoAttributeContextResolver", 23013, "UAttributeContextResolver" })
table.insert(g_loadedClasses, { "AHoldingAreaDestination", 23408, "ATeleporterDestination" })
table.insert(g_loadedClasses, { "AHeightFog", 24210, "AInfo" })
table.insert(g_loadedClasses, { "UIChangeBehaviorSetStateBehavior", 24363, "UInterface" })
table.insert(g_loadedClasses, { "UIDamageBehavior", 24379, "UInterface" })
table.insert(g_loadedClasses, { "AInterpActor_ForCinematic", 24821, "AInterpActor" })
table.insert(g_loadedClasses, { "AMaterialInstanceTimeVaryingActor", 26744, "AActor" })
table.insert(g_loadedClasses, { "USeqAct_AssignController", 27232, "USequenceAction" })
table.insert(g_loadedClasses, { "UOnlineCommunityContentInterface", 28620, "UInterface" })
table.insert(g_loadedClasses, { "UOnlineEventsInterface", 28970, "UInterface" })
table.insert(g_loadedClasses, { "UOnlinePlaylistGameTypeProvider", 30041, "UUIResourceDataProvider" })
table.insert(g_loadedClasses, { "UOnlineRecentPlayersList", 30090, "UObject" })
table.insert(g_loadedClasses, { "UOnlineSuppliedUIInterface", 30335, "UInterface" })
table.insert(g_loadedClasses, { "UOwnerAttributeContextResolver", 30523, "UAttributeContextResolver" })
table.insert(g_loadedClasses, { "UParameterBehaviorBase", 30531, "UBehaviorBase" })
table.insert(g_loadedClasses, { "UParticleModuleForceFieldCylindrical", 30842, "UParticleModuleForceFieldBase" })
table.insert(g_loadedClasses, { "UParticleModuleForceFieldGeneric", 30845, "UParticleModuleForceFieldBase" })
table.insert(g_loadedClasses, { "UParticleModuleForceFieldRadial", 30848, "UParticleModuleForceFieldBase" })
table.insert(g_loadedClasses, { "UParticleModuleForceFieldTornado", 30851, "UParticleModuleForceFieldBase" })
table.insert(g_loadedClasses, { "APathNode_Dynamic", 31587, "APathNode" })
table.insert(g_loadedClasses, { "USeqEvent_PickupStatusChange", 31864, "USequenceEvent" })
table.insert(g_loadedClasses, { "UProjectileAttributeContextResolver", 32281, "UAttributeContextResolver" })
table.insert(g_loadedClasses, { "ARadialBlurActor", 32313, "AActor" })
table.insert(g_loadedClasses, { "USeqAct_ToggleConstraintDrive", 32531, "USequenceAction" })
table.insert(g_loadedClasses, { "ARB_BSJointActor", 32574, "ARB_ConstraintActor" })
table.insert(g_loadedClasses, { "ARB_ConstraintActorSpawnable", 32579, "ARB_ConstraintActor" })
table.insert(g_loadedClasses, { "ARB_HingeActor", 32639, "ARB_ConstraintActor" })
table.insert(g_loadedClasses, { "ARB_PrismaticActor", 32656, "ARB_ConstraintActor" })
table.insert(g_loadedClasses, { "ARB_PulleyJointActor", 32661, "ARB_ConstraintActor" })
table.insert(g_loadedClasses, { "AReverbVolumeToggleable", 32815, "AReverbVolume" })
table.insert(g_loadedClasses, { "USeqAct_AddRemoveFaceFXAnimSet", 33041, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_AIAbortMoveToActor", 33045, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_MITV_Activate", 33257, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_SetSkelControlTarget", 33399, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_SetVector", 33413, "USeqAct_SetSequenceVariable" })
table.insert(g_loadedClasses, { "USeqAct_UpdatePhysBonesFromAnim", 33493, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqEvent_AIReachedRouteActor", 33582, "USequenceEvent" })
table.insert(g_loadedClasses, { "USeqEvent_LOS", 33590, "USequenceEvent" })
table.insert(g_loadedClasses, { "USeqVar_Byte", 33692, "USequenceVariable" })
table.insert(g_loadedClasses, { "USeqVar_Name", 33706, "USequenceVariable" })
table.insert(g_loadedClasses, { "USeqVar_Union", 33735, "USequenceVariable" })
table.insert(g_loadedClasses, { "ASkeletalMeshActorMATSpawnable", 34308, "ASkeletalMeshActorMAT" })
table.insert(g_loadedClasses, { "ASkeletalMeshActorMATWalkable", 34313, "ASkeletalMeshActorMAT" })
table.insert(g_loadedClasses, { "ATrigger_Dynamic", 35452, "ATrigger" })
table.insert(g_loadedClasses, { "ATrigger_LOS", 35456, "ATrigger" })
table.insert(g_loadedClasses, { "ATriggeredPath", 35472, "ANavigationPoint" })
table.insert(g_loadedClasses, { "ATriggerStreamingLevel", 35485, "ATrigger" })
table.insert(g_loadedClasses, { "UUICharacterSummary", 35528, "UUIResourceDataProvider" })
table.insert(g_loadedClasses, { "UUIGameInfoSummary", 36329, "UUIResourceDataProvider" })
table.insert(g_loadedClasses, { "UUIWeaponSummary", 36510, "UUIResourceDataProvider" })
table.insert(g_loadedClasses, { "UVehicleAttributeContextResolver", 36518, "UAttributeContextResolver" })
table.insert(g_loadedClasses, { "AWaterVolume", 36537, "APhysicsVolume" })
table.insert(g_loadedClasses, { "AWindDirectionalSource", 37367, "AInfo" })
