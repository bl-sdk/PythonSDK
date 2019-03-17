
local ffi = require("ffi")

ffi.cdef[[


// 0x690 
struct AGamePawn_Data {
	// Last Offset: 0x690
};

struct AGamePawn {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct APawn_Data APawn;
	struct AGamePawn_Data AGamePawn;
};

// 0x8FC 
struct AGamePlayerController_Data {
	// Last Offset: 0x8F0
	struct FName CurrentSoundMode; // 0x8F0 (0x8)
	BOOL bIsWarmupPaused :1 ; // 0x8F8 (0x4)
	const unsigned long: 0;
};

struct AGamePlayerController {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AController_Data AController;
	struct APlayerController_Data APlayerController;
	struct AGamePlayerController_Data AGamePlayerController;
};

// 0x3C 
struct UGameTypes_Data {
	// Last Offset: 0x3C
};

struct UGameTypes {
	struct UObject_Data UObject;
	struct UGameTypes_Data UGameTypes;
};

// 0x64 
struct UNavMeshGoal_OutOfViewFrom_Data {
	// Last Offset: 0x50
	struct FPointer GoalPoly; // 0x50 (0x4)
	struct FVector OutOfViewLocation; // 0x54 (0xC)
	BOOL bShowDebug :1 ; // 0x60 (0x4)
	const unsigned long: 0;
};

struct UNavMeshGoal_OutOfViewFrom {
	struct UObject_Data UObject;
	struct UNavMeshPathGoalEvaluator_Data UNavMeshPathGoalEvaluator;
	struct UNavMeshGoal_OutOfViewFrom_Data UNavMeshGoal_OutOfViewFrom;
};

// 0x78 
struct UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_Data {
	// Last Offset: 0x50
	struct FVector Location; // 0x50 (0xC)
	struct FVector Rotation; // 0x5C (0xC)
	float DistanceToCheck; // 0x68 (0x4)
	struct TArray_FVector LocationsToCheck; // 0x6C (0xC)
};

struct UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations {
	struct UObject_Data UObject;
	struct UNavMeshPathConstraint_Data UNavMeshPathConstraint;
	struct UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_Data UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations;
};

// 0xC8 
struct USeqAct_ControlGameMovie_Data {
	// Last Offset: 0xB4
	struct FString MovieName; // 0xB4 (0xC)
	int StartOfRenderingMovieFrame; // 0xC0 (0x4)
	int EndOfRenderingMovieFrame; // 0xC4 (0x4)
};

struct USeqAct_ControlGameMovie {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_Latent_Data USeqAct_Latent;
	struct USeqAct_ControlGameMovie_Data USeqAct_ControlGameMovie;
};

// 0xCC 
struct USeqAct_Deproject_Data {
	// Last Offset: 0xA4
	float ScreenX; // 0xA4 (0x4)
	float ScreenY; // 0xA8 (0x4)
	float TraceDistance; // 0xAC (0x4)
	struct UObject* HitObject; // 0xB0 (0x4)
	struct FVector HitLocation; // 0xB4 (0xC)
	struct FVector HitNormal; // 0xC0 (0xC)
};

struct USeqAct_Deproject {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_Deproject_Data USeqAct_Deproject;
};

// 0xB0 
struct USeqAct_ModifyProperty_Data {
	// Last Offset: 0xA4
	struct TArray_FPropertyInfo Properties; // 0xA4 (0xC)
};

struct USeqAct_ModifyProperty {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_ModifyProperty_Data USeqAct_ModifyProperty;
};

// 0x118 
struct UGameSkelCtrl_Recoil_Data {
	// Last Offset: 0x9C
	BOOL bBoneSpaceRecoil :1 ; // 0x9C (0x4)
	BOOL bPlayRecoil :1 ; // 0x9C (0x4)
	BOOL bOldPlayRecoil :1 ; // 0x9C (0x4)
	BOOL bApplyControl :1 ; // 0x9C (0x4)
	const unsigned long: 0;
	struct FRecoilDef Recoil; // 0xA0 (0x70)
	struct FVector2D Aim; // 0x110 (0x8)
};

struct UGameSkelCtrl_Recoil {
	struct UObject_Data UObject;
	struct UAnimObject_Data UAnimObject;
	struct USkelControlBase_Data USkelControlBase;
	struct UGameSkelCtrl_Recoil_Data UGameSkelCtrl_Recoil;
};

// 0x80 
struct UGameStateObject_Data {
	// Last Offset: 0x58
	struct FArray_Mirror TeamStates; // 0x58 (0xC)
	struct FArray_Mirror PlayerStates; // 0x64 (0xC)
	unsigned char SessionType; // 0x70 (0x1) (Enum = GameSessionType)
	const unsigned char Unknown1[0x3]; // 0x71 (0x3) > LAST OFFSET
	BOOL bIsMatchStarted :1 ; // 0x74 (0x4)
	BOOL bIsRoundStarted :1 ; // 0x74 (0x4)
	const unsigned long: 0;
	int RoundNumber; // 0x78 (0x4)
	int MaxRoundNumber; // 0x7C (0x4)
};

struct UGameStateObject {
	struct UObject_Data UObject;
	struct UGameplayEventsHandler_Data UGameplayEventsHandler;
	struct UGameStateObject_Data UGameStateObject;
};

// 0x230 
struct UGameStatsAggregator_Data {
	// Last Offset: 0x58
	struct UGameStateObject* GameState; // 0x58 (0x4)
	struct TArray_FAggregateEventMapping AggregatesList; // 0x5C (0xC)
	struct FMap_Mirror AggregateEventsMapping; // 0x68 (0x3C)
	struct TArray_FGameplayEventMetaData AggregateEvents; // 0xA4 (0xC)
	struct TArray_int AggregatesFound; // 0xB0 (0xC)
	struct FGameEvents AllGameEvents; // 0xBC (0x3C)
	struct TArray_FTeamEvents AllTeamEvents; // 0xF8 (0xC)
	struct TArray_FPlayerEvents AllPlayerEvents; // 0x104 (0xC)
	struct FWeaponEvents AllWeaponEvents; // 0x110 (0x48)
	struct FProjectileEvents AllProjectileEvents; // 0x158 (0x48)
	struct FPawnEvents AllPawnEvents; // 0x1A0 (0x48)
	struct FDamageEvents AllDamageEvents; // 0x1E8 (0x48)
};

struct UGameStatsAggregator {
	struct UObject_Data UObject;
	struct UGameplayEventsHandler_Data UGameplayEventsHandler;
	struct UGameStatsAggregator_Data UGameStatsAggregator;
};

// 0x4C 
struct UGameWaveForms_Data {
	// Last Offset: 0x3C
	struct UForceFeedbackWaveform* CameraShakeMediumShort; // 0x3C (0x4)
	struct UForceFeedbackWaveform* CameraShakeMediumLong; // 0x40 (0x4)
	struct UForceFeedbackWaveform* CameraShakeBigShort; // 0x44 (0x4)
	struct UForceFeedbackWaveform* CameraShakeBigLong; // 0x48 (0x4)
};

struct UGameWaveForms {
	struct UObject_Data UObject;
	struct UGameWaveForms_Data UGameWaveForms;
};

// 0x340 
struct APlayerCollectorGame_Data {
	// Last Offset: 0x330
	int NumberOfClientsToWaitFor; // 0x330 (0x4)
	struct FString URLToLoad; // 0x334 (0xC)
};

struct APlayerCollectorGame {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct AGameInfo_Data AGameInfo;
	struct APlayerCollectorGame_Data APlayerCollectorGame;
};

// 0x40 
struct UPMESTG_LeaveADecalBase_Data {
	// Last Offset: 0x3C
	struct UClass* PhysicalMaterialPropertyClass; // 0x3C (0x4)
};

struct UPMESTG_LeaveADecalBase {
	struct UObject_Data UObject;
	struct UParticleModuleEventSendToGame_Data UParticleModuleEventSendToGame;
	struct UPMESTG_LeaveADecalBase_Data UPMESTG_LeaveADecalBase;
};
]]

table.insert(g_loadedClasses, { "AGamePawn", 2840, "APawn" })
table.insert(g_loadedClasses, { "AGamePlayerController", 2842, "APlayerController" })
table.insert(g_loadedClasses, { "UGameTypes", 2844, "UObject" })
table.insert(g_loadedClasses, { "UNavMeshGoal_OutOfViewFrom", 2846, "UNavMeshPathGoalEvaluator" })
table.insert(g_loadedClasses, { "UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations", 2848, "UNavMeshPathConstraint" })
table.insert(g_loadedClasses, { "USeqAct_ControlGameMovie", 2850, "USeqAct_Latent" })
table.insert(g_loadedClasses, { "USeqAct_Deproject", 2852, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_ModifyProperty", 2854, "USequenceAction" })
table.insert(g_loadedClasses, { "UGameSkelCtrl_Recoil", 2856, "USkelControlBase" })
table.insert(g_loadedClasses, { "UGameStateObject", 2858, "UGameplayEventsHandler" })
table.insert(g_loadedClasses, { "UGameStatsAggregator", 2860, "UGameplayEventsHandler" })
table.insert(g_loadedClasses, { "UGameWaveForms", 38392, "UObject" })
table.insert(g_loadedClasses, { "APlayerCollectorGame", 38589, "AGameInfo" })
table.insert(g_loadedClasses, { "UPMESTG_LeaveADecalBase", 38603, "UParticleModuleEventSendToGame" })
