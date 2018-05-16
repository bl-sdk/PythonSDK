/*
#############################################################################################
# Borderlands 2 (1.0.35.4705) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct WillowGame.AchievementUtility.AchievementUnlockData
// 0x0014
struct FAchievementUnlockData
{
	unsigned char                                      UnlockType;                                       		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Achievement;                                      		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     StringData;                                       		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                IntData;                                          		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.WillowDamageTypeDefinition.PlayerRecentDamageEventData
// 0x0024
struct FPlayerRecentDamageEventData
{
	class UWillowDamageTypeDefinition*                 DamageTypeDefinition;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     DamageLocation;                                   		// 0x0004 (0x000C) [0x0000000000000000]              
	float                                              TotalDamageForDamageType;                         		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned char                                      DamageEventFlags;                                 		// 0x0014 (0x0001) [0x0000000000000000]              
	unsigned long                                      bDirty : 1;                                       		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              DamageTime;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	class AActor*                                      DamagedActor;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.BodyClassDefinition.VehicleCrewMappingStruct
// 0x000C
struct FVehicleCrewMappingStruct
{
	struct FName                                       VehicleArchetypeName;                             		// 0x0000 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UAnimSet*                                    AnimSet;                                          		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.BodyClassDefinition.InjuredLoopOverride
// 0x0008
struct FInjuredLoopOverride
{
	class UWillowDialogNameTag*                        NameTag;                                          		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UAkEvent*                                    StartAkEvent;                                     		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.BodyClassDefinition.BreathingLoopInfo
// 0x000C
struct FBreathingLoopInfo
{
	class UExpressionEvaluator*                        Condition;                                        		// 0x0000 (0x0004) [0x0000000004000003]              ( CPF_Edit | CPF_Const | CPF_EditInline )
	class UAkEvent*                                    StartAkEvent;                                     		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UAkEvent*                                    StopAkEvent;                                      		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.BodyClassDefinition.CustomCringeData
// 0x0014
struct FCustomCringeData
{
	unsigned long                                      bDOT : 1;                                         		// 0x0000 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned char                                      DamageType;                                       		// 0x0004 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< class USpecialMove_Cringe* >               Cringes;                                          		// 0x0008 (0x000C) [0x0000000004400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct WillowGame.BodyClassDefinition.PainDialogLine
// 0x0028
struct FPainDialogLine
{
	class UGearboxDialogEventTag*                      DET_Pain;                                         		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              DamageThresholdPct;                               		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              ChanceToPlay;                                     		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UAkEvent*                                    AkEvent;                                          		// 0x000C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      bDeathSound : 1;                                  		// 0x0010 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      bCriticalHitSound : 1;                            		// 0x0010 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	unsigned long                                      bRanOverSound : 1;                                		// 0x0010 (0x0004) [0x0000000000000003] [0x00000004] ( CPF_Edit | CPF_Const )
	unsigned long                                      bGoreTechDeathSound : 1;                          		// 0x0010 (0x0004) [0x0000000000000003] [0x00000008] ( CPF_Edit | CPF_Const )
	unsigned char                                      FlinchAnimType;                                   		// 0x0014 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              FlinchImpulseStrength;                            		// 0x0018 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< class UBehaviorBase* >                     PainBehaviors;                                    		// 0x001C (0x000C) [0x0000000004400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct WillowGame.BodyClassDefinition.ExtraWeaponSlot
// 0x0024
struct FExtraWeaponSlot
{
	struct FName                                       Socket;                                           		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bShowWeaponMesh : 1;                              		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class USkeletalMeshComponent*                      Mesh;                                             		// 0x000C (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    MuzzleFlash;                                      		// 0x0010 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	TArray< class UParticleSystemComponent* >          AltMuzzleFlashes;                                 		// 0x0014 (0x000C) [0x0000000004482008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
	class UWillowPointLight*                           MuzzleFlashLight;                                 		// 0x0020 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
};

// ScriptStruct WillowGame.BodyClassDefinition.TurnData
// 0x001C
struct FTurnData
{
	float                                              MinRepeatTime;                                    		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class USpecialMove_Turn*                           Left;                                             		// 0x0004 (0x0004) [0x0000000004000003]              ( CPF_Edit | CPF_Const | CPF_EditInline )
	class USpecialMove_Turn*                           Right;                                            		// 0x0008 (0x0004) [0x0000000004000003]              ( CPF_Edit | CPF_Const | CPF_EditInline )
	class USpecialMove_Turn*                           Left01;                                           		// 0x000C (0x0004) [0x0000000004000003]              ( CPF_Edit | CPF_Const | CPF_EditInline )
	class USpecialMove_Turn*                           Right01;                                          		// 0x0010 (0x0004) [0x0000000004000003]              ( CPF_Edit | CPF_Const | CPF_EditInline )
	class USpecialMove_Turn*                           Left02;                                           		// 0x0014 (0x0004) [0x0000000004000003]              ( CPF_Edit | CPF_Const | CPF_EditInline )
	class USpecialMove_Turn*                           Right02;                                          		// 0x0018 (0x0004) [0x0000000004000003]              ( CPF_Edit | CPF_Const | CPF_EditInline )
};

// ScriptStruct WillowGame.WillowAIComponent.CombatZone
// 0x0020
struct FCombatZone
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FBox                                        Bounds;                                           		// 0x0004 (0x001C) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowAIComponent.CoverExposureData
// 0x0004
struct FCoverExposureData
{
	unsigned long                                      bExposedUp : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bExposedLeft : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bExposedRight : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct WillowGame.WillowAIComponent.CombatPointDebugData
// 0x0014
struct FCombatPointDebugData
{
	unsigned long                                      bBest : 1;                                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Score;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0008 (0x000C) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowAIComponent.CombatPointData
// 0x0038
struct FCombatPointData
{
	int                                                Slot;                                             		// 0x0000 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	struct FActorReference                             Actor;                                            		// 0x0010 (0x0014) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	unsigned char                                      ConstraintType;                                   		// 0x0024 (0x0001) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	TArray< class UPopulationSpawnedActorTagDefinition* > ConstraintTags;                                   		// 0x0028 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	unsigned long                                      bClaimed : 1;                                     		// 0x0034 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
};

// ScriptStruct WillowGame.WillowAIComponent.CombatZoneSearchData
// 0x0028
struct FCombatZoneSearchData
{
	float                                              ZoneMoveDist;                                     		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAIRange                                    ZoneTimeLimit;                                    		// 0x0004 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAIRange                                    TargetRange;                                      		// 0x000C (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              MinHeight;                                        		// 0x0014 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      bCanFail : 1;                                     		// 0x0018 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned char                                      LineOfSight;                                      		// 0x001C (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAIRange                                    LineOfSightTimeLimit;                             		// 0x0020 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.WillowAIComponent.CombatPointSearchData
// 0x0008(0x0030 - 0x0028)
struct FCombatPointSearchData : FCombatZoneSearchData
{
	unsigned long                                      bUseCover : 1;                                    		// 0x0028 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              PointRadius;                                      		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.PerchDefinition.PerchAnimData
// 0x0010
struct FPerchAnimData
{
	class UPopulationBodyTag*                          Key;                                              		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USpecialMove_Perch*                          StartAnim;                                        		// 0x0004 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class USpecialMove_Perch*                          StopAnim;                                         		// 0x0008 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class USpecialMove_PerchLoop*                      IdleAnim;                                         		// 0x000C (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
};

// ScriptStruct WillowGame.WillowAIPawn.WillowCoverState
// 0x0014
struct FWillowCoverState
{
	struct FName                                       Action;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FCoverInfo                                  Cover;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
	class UWillowCoverStanceDefinition*                Stance;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.Action_Drive_Pursuit.EnemyBreadCrumbStruct
// 0x0010
struct FEnemyBreadCrumbStruct
{
	struct FVector                                     pos;                                              		// 0x0000 (0x000C) [0x0000000000000000]              
	class AWillowVehicleCombatArea*                    CombatArea;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowAIPawn.SplineAnimPathData
// 0x0010
struct FSplineAnimPathData
{
	class ASplineActor*                                StartSpline;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       AnimSeqName;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	unsigned long                                      bReverse : 1;                                     		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct WillowGame.Behavior_AIThrowProjectileAtTarget.TrajectoryData
// 0x0020
struct FTrajectoryData
{
	float                                              Speed;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AnglePct;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Angle;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Error;                                            		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Offset;                                           		// 0x0010 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              PredictDistMax;                                   		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.WillowLightProjectileManager.BeamDamageData
// 0x0028
struct FBeamDamageData
{
	float                                              Momentum;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Amount;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Radius;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	class UClass*                                      Source;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	class UDamageTypeDefinition*                       TypeDefinition;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              BarrelSourceTime;                                 		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              PlantSourceTime;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
	class UIDamageCauser*                              DamageCauser;                                     		// 0x001C (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0020 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned long                                      bCanDamageFriendlies : 1;                         		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct WillowGame.WillowLightProjectileManager.ServerBeamState
// 0x005C
struct FServerBeamState
{
	unsigned long                                      bDeleteMe : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FBeamDamageData                             DamageData;                                       		// 0x0004 (0x0028) [0x0000000000000000]              
	class AController*                                 DamageInstigator;                                 		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              StartTime;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              LockTime;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              NextTraceTime;                                    		// 0x0038 (0x0004) [0x0000000000000000]              
	float                                              BeamNetUpdateTime;                                		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              LastDamageApplicationTime;                        		// 0x0040 (0x0004) [0x0000000000000000]              
	class AActor*                                      LastDamagedActor;                                 		// 0x0044 (0x0004) [0x0000000000000000]              
	float                                              NextRandomBoneTime;                               		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                ParentBeamIndex;                                  		// 0x004C (0x0004) [0x0000000000000000]              
	TArray< int >                                      ChildBeamsIndicies;                               		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.WillowLightProjectileManager.BeamLocationData
// 0x0024
struct FBeamLocationData
{
	class AActor*                                      Actor;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       Socket;                                           		// 0x0004 (0x0008) [0x0000000000000000]              
	struct FVector                                     Offset;                                           		// 0x000C (0x000C) [0x0000000000000000]              
	unsigned long                                      bUseWeapon : 1;                                   		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	class UIWorldBody*                                 WorldBody;                                        		// 0x001C (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0020 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
};

// ScriptStruct WillowGame.WillowLightProjectileManager.ReplicatedBeamState
// 0x005C
struct FReplicatedBeamState
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class UFiringModeDefinition*                       FireDef;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	class UImpactDefinition*                           ImpactDefinition;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLocked : 1;                                      		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FBeamLocationData                           SourceData;                                       		// 0x0010 (0x0024) [0x0000000000000000]              
	struct FBeamLocationData                           TargetData;                                       		// 0x0034 (0x0024) [0x0000000000000000]              
	unsigned long                                      bPlayImpactAudio : 1;                             		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct WillowGame.WillowLightProjectileManager.BeamState
// 0x0118
struct FBeamState
{
	int                                                BeamIndex;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FServerBeamState                            ServerOnlyState;                                  		// 0x0004 (0x005C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FReplicatedBeamState                        CoreBeamState;                                    		// 0x0060 (0x005C) [0x0000000000000000]              
	class UParticleSystemComponent*                    PartRef;                                          		// 0x00BC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FAkPlayingInfo                              BeamAudioInfo;                                    		// 0x00C0 (0x0008) [0x0000000000080000]              ( CPF_Component )
	struct FAkPlayingInfo                              BeamImpactAudioInfo;                              		// 0x00C8 (0x0008) [0x0000000000080000]              ( CPF_Component )
	struct FVector                                     CurrentStartPoint;                                		// 0x00D0 (0x000C) [0x0000000000000000]              
	struct FVector                                     CurrentEndPoint;                                  		// 0x00DC (0x000C) [0x0000000000000000]              
	struct FVector                                     CurrentStartTangent;                              		// 0x00E8 (0x000C) [0x0000000000000000]              
	struct FVector                                     CurrentEndTangent;                                		// 0x00F4 (0x000C) [0x0000000000000000]              
	struct FRotator                                    CurrentDirection;                                 		// 0x0100 (0x000C) [0x0000000000000000]              
	struct FVector                                     LastImpactLocation;                               		// 0x010C (0x000C) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowLightProjectileManager.LightProjectile
// 0x0088
struct FLightProjectile
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPendingAdd : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bNeedsConstantTrace : 1;                          		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bStartParticleTracerAtWeapon : 1;                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bActorReflected : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bEnemyPenetrating : 1;                            		// 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bOvercharged : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bRicochetTowardsEnemy : 1;                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bPenetrateUsingOriginalTraceDirection : 1;        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000100] 
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     PartLocation;                                     		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FVector                                     Velocity;                                         		// 0x001C (0x000C) [0x0000000000000000]              
	class UParticleSystemComponent*                    PartRef;                                          		// 0x0028 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FAkPlayingInfo                              AudioRef;                                         		// 0x002C (0x0008) [0x0000000000080000]              ( CPF_Component )
	class UFiringModeDefinition*                       FireDef;                                          		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              StartTime;                                        		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                NumRicochets;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              LastTraceTime;                                    		// 0x0040 (0x0004) [0x0000000000000000]              
	struct FVector                                     LastSafeTraceStartLocation;                       		// 0x0044 (0x000C) [0x0000000000000000]              
	class AActor*                                      LastHitActor;                                     		// 0x0050 (0x0004) [0x0000000000000000]              
	class APawn*                                       Instigator;                                       		// 0x0054 (0x0004) [0x0000000000000000]              
	float                                              Damage;                                           		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                FiringPatternIdx;                                 		// 0x005C (0x0004) [0x0000000000000000]              
	unsigned char                                      BulletFromClipType;                               		// 0x0060 (0x0001) [0x0000000000000000]              
	unsigned char                                      bHitWater;                                        		// 0x0061 (0x0001) [0x0000000000000000]              
	unsigned char                                      PenetrationCount;                                 		// 0x0062 (0x0001) [0x0000000000000000]              
	unsigned char                                      Id;                                               		// 0x0063 (0x0001) [0x0000000000000000]              
	struct FVector                                     StartTrace;                                       		// 0x0064 (0x000C) [0x0000000000000000]              
	struct FVector                                     EndTrace;                                         		// 0x0070 (0x000C) [0x0000000000000000]              
	struct FVector                                     OriginalStartTrace;                               		// 0x007C (0x000C) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowLightProjectileManager.ReplicatedLightProjectile
// 0x0034
struct FReplicatedLightProjectile
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bStartParticleTracerAtWeapon : 1;                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bActorReflected : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bEnemyPenetrating : 1;                            		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bOvercharged : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bRicochetTowardsEnemy : 1;                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned char                                      Id;                                               		// 0x0004 (0x0001) [0x0000000000000000]              
	struct FVector                                     StartTrace;                                       		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FVector                                     EndTrace;                                         		// 0x0014 (0x000C) [0x0000000000000000]              
	float                                              ReflectSpeed;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	class UFiringModeDefinition*                       FireDef;                                          		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                FiringPatternIdx;                                 		// 0x0028 (0x0004) [0x0000000000000000]              
	class APawn*                                       Instigator;                                       		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              StartTime;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowLightProjectileManager.ReplicatedBeamEndPoints
// 0x0018
struct FReplicatedBeamEndPoints
{
	struct FVector                                     StartPoint;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     EndPoint;                                         		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct WillowGame.Action_SwoopAttack.SwoopAttackData
// 0x0008
struct FSwoopAttackData
{
	unsigned long                                      bTriggered : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCacheTargetLocation : 1;                         		// 0x0000 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	float                                              Distance;                                         		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.ActionSkill.ActionSkillCustomEventReplicationData
// 0x000C
struct FActionSkillCustomEventReplicationData
{
	unsigned char                                      EventCountForReplication;                         		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FName                                       EventName;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct WillowGame.ActionSkill.CachedWeaponInfo
// 0x0028
struct FCachedWeaponInfo
{
	int                                                CachedClipSize;                                   		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                CachedAmmoInClip;                                 		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                CachedAmmoNotInClip;                              		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      CachedWeaponIsReloading;                          		// 0x000C (0x0001) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     CachedWeaponType;                                 		// 0x0010 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class USwfMovie*                                   CachedWeaponTypeDLCClip;                          		// 0x001C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                IsReloadIconDisplayed;                            		// 0x0020 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                IsInteractionIconDisplayed;                       		// 0x0024 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct WillowGame.WillowBaseStats.WillowStatProperty
// 0x0034
struct FWillowStatProperty
{
	struct FName                                       Id;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FSettingsData                               Data;                                             		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FSettingsData                               MaxData;                                          		// 0x0014 (0x000C) [0x0000000000000000]              
	struct FSettingsData                               ChallengeBaseData;                                		// 0x0020 (0x000C) [0x0000000000000000]              
	int                                                OnlineId;                                         		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned long                                      bSparkStatDirty : 1;                              		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSparkStatInFlight : 1;                           		// 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct WillowGame.WillowCharacterClassDefinition.AttributeCategory
// 0x0018
struct FAttributeCategory
{
	struct FString                                     Category;                                         		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FAttributeBaseValueData >           Attributes;                                       		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.WillowCharacterClassDefinition.DeathByWeaponStatID
// 0x000C
struct FDeathByWeaponStatID
{
	unsigned char                                      DamageCauserType;                                 		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       StatId;                                           		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.WillowCharacterClassDefinition.DeathByDamageTypeStatID
// 0x000C
struct FDeathByDamageTypeStatID
{
	unsigned char                                      DamageType;                                       		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       StatId;                                           		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.WillowCharacterClassDefinition.DeathByWeaponDamageStatID
// 0x000C
struct FDeathByWeaponDamageStatID
{
	unsigned char                                      DamageType;                                       		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      DamageCauserType;                                 		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       StatId;                                           		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.InteractionIconDefinition.InteractionIconWithOverrides
// 0x0014
struct FInteractionIconWithOverrides
{
	class UInteractionIconDefinition*                  IconDef;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	class UInteractionIconDefinition*                  OverrideIconDef;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bOverrideIcon : 1;                                		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOverrideAction : 1;                              		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bOverrideText : 1;                                		// 0x0008 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned char                                      bCostsToUse;                                      		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned char                                      CostsCurrencyType;                                		// 0x000D (0x0001) [0x0000000000000000]              
	int                                                CostsAmount;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowRadarManager.ServerDynamicRadarIconData
// 0x000C
struct FServerDynamicRadarIconData
{
	class UObject*                                     SourceObject;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              StartTime;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowRadarManager.RemoteDynamicRadarIconData
// 0x0014
struct FRemoteDynamicRadarIconData
{
	unsigned char                                      IconType;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	unsigned long                                      bActive : 1;                                      		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct WillowGame.AIPawnBalanceDefinition.AITransformedName
// 0x0018
struct FAITransformedName
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FString                                     TransformedName;                                  		// 0x0004 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FName                                       TransformedKillStat;                              		// 0x0010 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.ItemPool.ItemPoolInfo
// 0x0014
struct FItemPoolInfo
{
	class UItemPoolDefinition*                         ItemPool;                                         		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                PoolProbability;                                  		// 0x0004 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.AIPawnBalanceDefinition.AIPawnPlaythroughData
// 0x0050
struct FAIPawnPlaythroughData
{
	int                                                PlayThrough;                                      		// 0x0000 (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	struct FString                                     DisplayName;                                      		// 0x0004 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FAITransformedName >                TransformedNames;                                 		// 0x0010 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UBehaviorBase* >                     OnSpawnCustomizations;                            		// 0x001C (0x000C) [0x0000000004400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline )
	TArray< struct FAttributeBaseValueData >           AttributeStartingValues;                          		// 0x0028 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< class UItemPoolListDefinition* >           CustomItemPoolIncludedLists;                      		// 0x0034 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< struct FItemPoolInfo >                     CustomItemPoolList;                               		// 0x0040 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	class UMaterialInstance*                           MeshMaterial;                                     		// 0x004C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.AIPawnBalanceDefinition.AIPawnGradeModifierData
// 0x0050
struct FAIPawnGradeModifierData
{
	class AWillowAIPawn*                               CustomAIPawnArchetype;                            		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FString                                     DisplayName;                                      		// 0x0004 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	int                                                ExpLevel;                                         		// 0x0010 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< class UBehaviorBase* >                     OnSpawnCustomizations;                            		// 0x0014 (0x000C) [0x0000000004400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline )
	TArray< struct FAttributeBaseValueData >           AttributeStartingValues;                          		// 0x0020 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< class UItemPoolListDefinition* >           CustomItemPoolIncludedLists;                      		// 0x002C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< struct FItemPoolInfo >                     CustomItemPoolList;                               		// 0x0038 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< struct FAITransformedName >                TransformedNames;                                 		// 0x0044 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.AIPawnBalanceDefinition.AIPawnGameStageGradeWeightData
// 0x0050(0x0078 - 0x0028)
struct FAIPawnGameStageGradeWeightData : FGameStageGradeWeightData
{
	struct FAIPawnGradeModifierData                    GradeModifiers;                                   		// 0x0028 (0x0050) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.WillowDeclarations.CellInfo
// 0x0020
struct FCellInfo
{
	struct FVector                                     AbsolutePosition;                                 		// 0x0000 (0x000C) [0x0000000000000000]              
	float                                              Width;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              Height;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FString                                     CellName;                                         		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.WillowDeclarations.CellContentData
// 0x0010
struct FCellContentData
{
	class UTexture*                                    Tex;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	class UMeshComponent*                              Mesh;                                             		// 0x0004 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class AWillowInventory*                            Inv;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                ExtArrayIndex;                                    		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowDeclarations.PanelInfo
// 0x0040
struct FPanelInfo
{
	struct FName                                       PanelName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     PanelFocused;                                     		// 0x0008 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     PanelUnfocused;                                   		// 0x0014 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     PanelCompare;                                     		// 0x0020 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      PanelBackground;                                  		// 0x002C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                CellWidth;                                        		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CellHeight;                                       		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TextureWidth;                                     		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TextureHeight;                                    		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.WillowDeclarations.CardInfoRelativeToPanel
// 0x0018
struct FCardInfoRelativeToPanel
{
	struct FName                                       PanelName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     ComparePosition;                                  		// 0x0008 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              CompareScale;                                     		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.WillowDeclarations.CardInfo
// 0x003C
struct FCardInfo
{
	struct FName                                       CardName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                CellWidth;                                        		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CellHeight;                                       		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TextureWidth;                                     		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TextureHeight;                                    		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     MainPlayerLinkageName;                            		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     SplitPlayerLinkageName;                           		// 0x0024 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FCardInfoRelativeToPanel >          CompareSettings;                                  		// 0x0030 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.WillowWeaponTypes.WeaponAccessorySetup
// 0x001C
struct FWeaponAccessorySetup
{
	struct FName                                       WeaponArchetypeName;                              		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UGestaltSkeletalMeshDefinition*              AccessoryDefinition;                              		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UGestaltPartMatrices*                        AccessoryTransforms;                              		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FGestaltPartPermutation >           AccessoryParts;                                   		// 0x0010 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.WillowWeaponTypes.WeaponDefinitionData
// 0x0044
struct FWeaponDefinitionData
{
	class UWeaponTypeDefinition*                       WeaponTypeDefinition;                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UInventoryBalanceDefinition*                 BalanceDefinition;                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UManufacturerDefinition*                     ManufacturerDefinition;                           		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ManufacturerGradeIndex;                           		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UWeaponPartDefinition*                       BodyPartDefinition;                               		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UWeaponPartDefinition*                       GripPartDefinition;                               		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UWeaponPartDefinition*                       BarrelPartDefinition;                             		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UWeaponPartDefinition*                       SightPartDefinition;                              		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UWeaponPartDefinition*                       StockPartDefinition;                              		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UWeaponPartDefinition*                       ElementalPartDefinition;                          		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UWeaponPartDefinition*                       Accessory1PartDefinition;                         		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UWeaponPartDefinition*                       Accessory2PartDefinition;                         		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UWeaponPartDefinition*                       MaterialPartDefinition;                           		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UWeaponNamePartDefinition*                   PrefixPartDefinition;                             		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UWeaponNamePartDefinition*                   TitlePartDefinition;                              		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                GameStage;                                        		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                UniqueId;                                         		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.WillowItemTypes.ItemDefinitionData
// 0x0044
struct FItemDefinitionData
{
	class UItemDefinition*                             ItemDefinition;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UInventoryBalanceDefinition*                 BalanceDefinition;                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UManufacturerDefinition*                     ManufacturerDefinition;                           		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ManufacturerGradeIndex;                           		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UItemPartDefinition*                         AlphaItemPartDefinition;                          		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UItemPartDefinition*                         BetaItemPartDefinition;                           		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UItemPartDefinition*                         GammaItemPartDefinition;                          		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UItemPartDefinition*                         DeltaItemPartDefinition;                          		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UItemPartDefinition*                         EpsilonItemPartDefinition;                        		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UItemPartDefinition*                         ZetaItemPartDefinition;                           		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UItemPartDefinition*                         EtaItemPartDefinition;                            		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UItemPartDefinition*                         ThetaItemPartDefinition;                          		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UItemPartDefinition*                         MaterialItemPartDefinition;                       		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UItemNamePartDefinition*                     PrefixItemNamePartDefinition;                     		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UItemNamePartDefinition*                     TitleItemNamePartDefinition;                      		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                GameStage;                                        		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                UniqueId;                                         		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.WillowDeclarations.PendingMissionRewardData
// 0x0118
struct FPendingMissionRewardData
{
	class UMissionDefinition*                          Mission;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FWeaponDefinitionData                       WeaponRewards[ 0x2 ];                             		// 0x0004 (0x0088) [0x0000000000000000]              
	struct FItemDefinitionData                         ItemRewards[ 0x2 ];                               		// 0x008C (0x0088) [0x0000000000000000]              
	unsigned long                                      bGrantAltReward : 1;                              		// 0x0114 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct WillowGame.WillowDeclarations.UnloadableDlcPendingRewardData
// 0x00E4
struct FUnloadableDlcPendingRewardData
{
	struct FString                                     MissionDefName;                                   		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FInventorySerialNumber                      WeaponRewards[ 0x2 ];                             		// 0x000C (0x0068) [0x0000000000000000]              
	struct FInventorySerialNumber                      ItemRewards[ 0x2 ];                               		// 0x0074 (0x0068) [0x0000000000000000]              
	int                                                DlcPackageId;                                     		// 0x00DC (0x0004) [0x0000000000000000]              
	unsigned long                                      bGrantAltReward : 1;                              		// 0x00E0 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct WillowGame.WillowDeclarations.MissionStatusPresentation
// 0x0010
struct FMissionStatusPresentation
{
	struct FColor                                      TextColor;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     IconFrame;                                        		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.ItemDefinition.ItemBehaviorSet
// 0x000C
struct FItemBehaviorSet
{
	TArray< class UBehaviorBase* >                     OnUsed;                                           		// 0x0000 (0x000C) [0x0000000004400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct WillowGame.AssetLibraryManager.SKULibrarySet
// 0x0020
struct FSKULibrarySet
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     NameID;                                           		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LibrarySetPackage;                                		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UObject*                                     CachedDlcALDefRef;                                		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.AssetLibraryManager.SKURuntimeLibrarySet
// 0x001C
struct FSKURuntimeLibrarySet
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	class UPackageAssetLibrary*                        Libraries[ 0x6 ];                                 		// 0x0004 (0x0018) [0x0000000000000000]              
};

// ScriptStruct WillowGame.AssetLibraryManager.AssetLibConfig
// 0x0018
struct FAssetLibConfig
{
	int                                                SublibraryBits;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                AssetBits;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     Desc;                                             		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      LibraryType;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.AttributePresentationDefinition.AttributePresentationValueRemappingData
// 0x0044
struct FAttributePresentationValueRemappingData
{
	unsigned long                                      bUseContextOverride : 1;                          		// 0x0000 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                InputValueMn;                                     		// 0x0004 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                InputValueMx;                                     		// 0x0014 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                OutputValueMn;                                    		// 0x0024 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                OutputValueMx;                                    		// 0x0034 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.AttributePresentationDefinition.ModifierValuePresentationData
// 0x0010
struct FModifierValuePresentationData
{
	class UAttributePresentationDefinition*            AttributePresentation;                            		// 0x0000 (0x0004) [0x0000000000100000]              
	class UAttributePresentationDefinition*            OptionalConstraintPresentation;                   		// 0x0004 (0x0004) [0x0000000000100000]              
	float                                              ModifierValue;                                    		// 0x0008 (0x0004) [0x0000000000100000]              
	unsigned long                                      bShouldDisplay : 1;                               		// 0x000C (0x0004) [0x0000000000100000] [0x00000001] 
};

// ScriptStruct WillowGame.WillowPlayerController.CustomizationUnlockData
// 0x0014
struct FCustomizationUnlockData
{
	int                                                ProductID;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                NumUnlockedCustomizations;                        		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< unsigned char >                            UnlockedMask;                                     		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.IMission.MissionRewardPresentationData
// 0x0005
struct FMissionRewardPresentationData
{
	class UInventoryCardPresentationDefinition*        PresentationDefinition;                           		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Rarity;                                           		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct WillowGame.IMission.ReplicatedMissionFilterData
// 0x0008
struct FReplicatedMissionFilterData
{
	class UMissionDefinition*                          Mission;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bFiltered : 1;                                    		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct WillowGame.IMission.ReplicatedMissionObjectiveData
// 0x0008
struct FReplicatedMissionObjectiveData
{
	class UMissionObjectiveDefinition*                 Objective;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ObjectiveBit;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.IMission.ReplicatedMissionStatusData
// 0x0005
struct FReplicatedMissionStatusData
{
	class UMissionDefinition*                          Mission;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Status;                                           		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct WillowGame.IMission.ReplicatedMissionData
// 0x007C
struct FReplicatedMissionData
{
	class UMissionDefinition*                          Mission;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Status;                                           		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned long                                      bTimerRunning : 1;                                		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	class UMissionObjectiveSetDefinition*              ActiveObjectiveSet;                               		// 0x000C (0x0004) [0x0000000000000000]              
	class UMissionObjectiveSetDefinition*              SubObjectiveSets[ 0x4 ];                          		// 0x0010 (0x0010) [0x0000000000000000]              
	int                                                SecondsLeft;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                ObjectiveCounts[ 0x14 ];                          		// 0x0024 (0x0050) [0x0000000000000000]              
	int                                                GameStage;                                        		// 0x0074 (0x0004) [0x0000000000000000]              
	unsigned long                                      bFiltered : 1;                                    		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct WillowGame.IMissionDirector.MissionDirectorData
// 0x0009
struct FMissionDirectorData
{
	class UMissionDefinition*                          MissionDefinition;                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bBeginsMission : 1;                               		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bEndsMission : 1;                                 		// 0x0004 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned char                                      BranchEnding;                                     		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.IMission.ReplicatedMissionDirectiveData
// 0x0014
struct FReplicatedMissionDirectiveData
{
	class UIMissionDirector*                           MissionDirector;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0004 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FMissionDirectorData                        MissionDirective;                                 		// 0x0008 (0x000C) [0x0000000000000000]              
};

// ScriptStruct WillowGame.IMission.MissionStatusData
// 0x0011
struct FMissionStatusData
{
	class UMissionDefinition*                          MissionDefinition;                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      MissionStatus;                                    		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bIsObjectiveSpecific : 1;                         		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class UMissionObjectiveDefinition*                 MissionObjective;                                 		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ObjectiveStatus;                                  		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.IMission.UnloadableDlcMissionStatusData
// 0x003C
struct FUnloadableDlcMissionStatusData
{
	struct FString                                     MissionDefName;                                   		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      Status;                                           		// 0x000C (0x0001) [0x0000000000000000]              
	int                                                DlcPackageId;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	TArray< int >                                      ObjectivesProgress;                               		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ActiveObjectiveSetIndex;                          		// 0x0020 (0x0004) [0x0000000000000000]              
	TArray< int >                                      SubObjectiveSetsIndices;                          		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                GameStage;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                NeedsRewards;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                HeardKickoff;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.IMission.MissionRewardData
// 0x0008
struct FMissionRewardData
{
	class UMissionDefinition*                          MissionDef;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bGrantAltReward : 1;                              		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct WillowGame.IMission.MissionStatusPlayerData
// 0x002C
struct FMissionStatusPlayerData
{
	class UMissionDefinition*                          MissionDef;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Status;                                           		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      ObjectivesProgress;                               		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UMissionObjectiveSetDefinition*              ActiveObjectiveSet;                               		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UMissionObjectiveSetDefinition* >    SubObjectiveSets;                                 		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                GameStage;                                        		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bNeedsRewards : 1;                                		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHeardKickoff : 1;                                		// 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct WillowGame.IMission.MissionData
// 0x0028
struct FMissionData
{
	class UMissionDefinition*                          MissionDef;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Status;                                           		// 0x0004 (0x0001) [0x0000000000000000]              
	TArray< int >                                      ObjectivesProgress;                               		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UMissionObjectiveSetDefinition*              ActiveObjectiveSet;                               		// 0x0014 (0x0004) [0x0000000000000000]              
	TArray< class UMissionObjectiveSetDefinition* >    SubObjectiveSets;                                 		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bInitialized : 1;                                 		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHeardKickoff : 1;                                		// 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bFiltered : 1;                                    		// 0x0024 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct WillowGame.IMission.ObjectiveStatusData
// 0x000C
struct FObjectiveStatusData
{
	TArray< int >                                      Objectives;                                       		// 0x0000 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.WillowTradeManager.TradeSlot
// 0x0094
struct FTradeSlot
{
	unsigned char                                      Status;                                           		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FWeaponDefinitionData                       WeaponData;                                       		// 0x0004 (0x0044) [0x0000000000000000]              
	struct FItemDefinitionData                         ItemData;                                         		// 0x0048 (0x0044) [0x0000000000000000]              
	int                                                Quantity;                                         		// 0x008C (0x0004) [0x0000000000000000]              
	class AWillowInventory*                            WInv;                                             		// 0x0090 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowHUD.HUDWidget_ChallengeData
// 0x0018
struct FHUDWidget_ChallengeData
{
	class UChallengeDefinition*                        Challenge;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                LevelIndex;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ConditionIndex;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                CurrStatVal;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                GoalStatVal;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bComplete : 1;                                    		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct WillowGame.WillowHUD.FadePickupParticle
// 0x000C
struct FFadePickupParticle
{
	class AActor*                                      SourceActor;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    Particle;                                         		// 0x0004 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              FadeEndTime;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowSaveGameManager.PlayerSaveData
// 0x00C0
struct FPlayerSaveData
{
	struct FString                                     FilePath;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FDouble                                     TimeStamp;                                        		// 0x000C (0x0008) [0x0000000000000000]              
	struct FString                                     PlayerClassDefName;                               		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClassName;                                        		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CharacterName;                                    		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ExpLevel;                                         		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                CurrencyOnHand[ 0xD ];                            		// 0x003C (0x0034) [0x0000000000000000]              
	struct FString                                     UICharacterName;                                  		// 0x0070 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PlaythroughsCompleted;                            		// 0x007C (0x0004) [0x0000000000000000]              
	struct FString                                     LastVisitedTeleporter;                            		// 0x0080 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ActiveMissionNumber;                              		// 0x008C (0x0004) [0x0000000000000000]              
	int                                                PlotMissionNumber;                                		// 0x0090 (0x0004) [0x0000000000000000]              
	int                                                TotalPlayTime;                                    		// 0x0094 (0x0004) [0x0000000000000000]              
	int                                                LastPlaythroughNumber;                            		// 0x0098 (0x0004) [0x0000000000000000]              
	struct FString                                     LastSaveDate;                                     		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FGuid                                       SaveGuid;                                         		// 0x00A8 (0x0010) [0x0000000000000000]              
	unsigned long                                      bIsUnloadedDlcCharacter : 1;                      		// 0x00B8 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                SaveGameFileId;                                   		// 0x00BC (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowSaveGameManager.LoadInfo
// 0x00C4
struct FLoadInfo
{
	struct FPlayerSaveData                             CharacterData;                                    		// 0x0000 (0x00C0) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      LoadInfoReady : 1;                                		// 0x00C0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      LoadSucceeded : 1;                                		// 0x00C0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      LoadCancelled : 1;                                		// 0x00C0 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct WillowGame.IUpdatePostProcessOverride.AttributeDefinitionDefault
// 0x0008
struct FAttributeDefinitionDefault
{
	class UAttributeDefinition*                        Attribute;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DefaultValue;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.IUpdatePostProcessOverride.AttributeScalarParam
// 0x003C
struct FAttributeScalarParam
{
	struct FName                                       ParamName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bVectorParam : 1;                                 		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bClampInput : 1;                                  		// 0x0008 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	struct FAttributeDefinitionDefault                 Input;                                            		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FAttributeDefinitionDefault                 MinInput;                                         		// 0x0014 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FAttributeDefinitionDefault                 MaxInput;                                         		// 0x001C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FAttributeDefinitionDefault                 MinOutput;                                        		// 0x0024 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FAttributeDefinitionDefault                 MaxOutput;                                        		// 0x002C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ScalarParamOperand;                               		// 0x0034 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              CurrentValue;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.IScreenParticle.ScreenParticleModifier
// 0x0010
struct FScreenParticleModifier
{
	TArray< struct FAttributeScalarParam >             ScalarParams;                                     		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              CachedValue;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.IScreenParticle.ScreenParticleScalarParamOverTime
// 0x0018
struct FScreenParticleScalarParamOverTime
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              TotalTime;                                        		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StartValue;                                       		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EndValue;                                         		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastValue;                                        		// 0x0014 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct WillowGame.IScreenParticle.ScreenParticleVectorParamOverTime
// 0x0030
struct FScreenParticleVectorParamOverTime
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              TotalTime;                                        		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     VectorStartValue;                                 		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     VectorEndValue;                                   		// 0x0018 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LastValue;                                        		// 0x0024 (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct WillowGame.IScreenParticle.ScreenParticleParamOverTime
// 0x0018
struct FScreenParticleParamOverTime
{
	TArray< struct FScreenParticleScalarParamOverTime > ScalarParams;                                     		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FScreenParticleVectorParamOverTime > VectorParams;                                     		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.IScreenParticle.ScreenParticleInitParams
// 0x0054
struct FScreenParticleInitParams
{
	class UParticleSystem*                             Template;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FScreenParticleModifier >           ScreenParticleModifiers;                          		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UMaterialInterface*                          TemplateScreenParticleMaterial;                   		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       MatParamName;                                     		// 0x0014 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bHideWhenFinished : 1;                            		// 0x001C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FName                                       ParticleTag;                                      		// 0x0020 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   ContentDims;                                      		// 0x0028 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              ParticleDepth;                                    		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ScalingMode;                                      		// 0x0034 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FScreenParticleParamOverTime                StopParamsOT;                                     		// 0x0038 (0x0018) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bOnlyOwnerSee : 1;                                		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct WillowGame.IScreenParticle.ScreenParticleRecord
// 0x0050
struct FScreenParticleRecord
{
	struct FName                                       Tag;                                              		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             Template;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       MatParamName;                                     		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystemComponent*                    Component;                                        		// 0x0014 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< struct FScreenParticleModifier >           AppliedModifiers;                                 		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FVector2D                                   ContentDims;                                      		// 0x0024 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              ParticleDepth;                                    		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ScalingMode;                                      		// 0x0030 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FScreenParticleParamOverTime                StopParamsOT;                                     		// 0x0034 (0x0018) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              StopTime;                                         		// 0x004C (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct WillowGame.IUpdatePostProcessOverride.PostProcessOverlay
// 0x010C
struct FPostProcessOverlay
{
	struct FName                                       OverlayName;                                      		// 0x0000 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FPostProcessSettings                        DestPostProcessOverlay;                           		// 0x0008 (0x00E8) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	float                                              MinTransitionInDuration;                          		// 0x00F0 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              MinTransitionHoldDuration;                        		// 0x00F4 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              MinTransitionOutDuration;                         		// 0x00F8 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              MaxTransitionInDuration;                          		// 0x00FC (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              MaxTransitionHoldDuration;                        		// 0x0100 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              MaxTransitionOutDuration;                         		// 0x0104 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      ClearOverlayQueueAfterTransition : 1;             		// 0x0108 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.IUpdatePostProcessOverride.MaterialEffectModifier
// 0x001C
struct FMaterialEffectModifier
{
	struct FName                                       EffectName;                                       		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FAttributeScalarParam >             ScalarParams;                                     		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              CachedValue;                                      		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstanceConstant*                   MaterialInstance;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.IUpdatePostProcessOverride.DOFEffectModifierData
// 0x000C
struct FDOFEffectModifierData
{
	unsigned long                                      AutoRelcalculateFocusDistance : 1;                		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              RecalculateFocusDistanceRate;                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FocusDistanceLerpRate;                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.IUpdatePostProcessOverride.PostProcessChainOptions
// 0x0018
struct FPostProcessChainOptions
{
	TArray< struct FMaterialEffectModifier >           MaterialEffectModifiers;                          		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FDOFEffectModifierData                      DOFEffectModifier;                                		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.IUpdatePostProcessOverride.DOFEffectData
// 0x002C
struct FDOFEffectData
{
	float                                              FalloffExponent;                                  		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlurKernelSize;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxNearBlurAmount;                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxFarBlurAmount;                                 		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      ModulateBlurColor;                                		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      FocusType;                                        		// 0x0014 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              FocusInnerRadius;                                 		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FocusDistance;                                    		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     FocusPosition;                                    		// 0x0020 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.IUpdatePostProcessOverride.PostProcessChainRecord
// 0x0028
struct FPostProcessChainRecord
{
	class UPostProcessChain*                           Template;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPostProcessChain*                           Instance;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FMaterialEffectModifier >           AppliedModifiers;                                 		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      PopWhenScalarParamIsMaxedOut : 1;                 		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FDOFEffectModifierData                      DOFEffectModifier;                                		// 0x0018 (0x000C) [0x0000000000000000]              
	float                                              NextDOFUpdateTime;                                		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowPhysicalMaterialProperty.RtpcParameterValue
// 0x0008
struct FRtpcParameterValue
{
	class UAkRtpc*                                     AkRtpc;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Value;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.WillowPhysicalMaterialProperty.ImpactResponseParameters
// 0x004C
struct FImpactResponseParameters
{
	TArray< struct FParticleSysParam >                 ParticleParameters;                               		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FFontParameterValue >               FontParameterValues;                              		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FScalarParameterValue >             ScalarParameterValues;                            		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FTextureParameterValue >            TextureParameterValues;                           		// 0x0024 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FVectorParameterValue >             VectorParameterValues;                            		// 0x0030 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FRtpcParameterValue >               RtpcParameterValues;                              		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bNoSound : 1;                                     		// 0x0048 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct WillowGame.WillowPhysicalMaterialProperty.ImpactResponseEffect
// 0x0094
struct FImpactResponseEffect
{
	unsigned long                                      bCensorThisEffect : 1;                            		// 0x0000 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	class UWillowImpactDefinition*                     CensoredEffectAlternative;                        		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              DamageModifierPercent;                            		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UAkEvent*                                    ImpactEvent;                                      		// 0x000C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              AINoiseLevel;                                     		// 0x0010 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UParticleSystem*                             ParticleTemplate;                                 		// 0x0014 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      bAttachParticleToHitActor : 1;                    		// 0x0018 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      bHideEffectFromHitActor : 1;                      		// 0x0018 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	float                                              MaxEffectDistance;                                		// 0x001C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< class UMaterialInterface* >                DecalMaterials;                                   		// 0x0020 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	float                                              DecalWidth;                                       		// 0x002C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              DecalHeight;                                      		// 0x0030 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              DecalMinScale;                                    		// 0x0034 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              DecalMaxScale;                                    		// 0x0038 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              DecalDepth;                                       		// 0x003C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      DecalRandomRotation : 1;                          		// 0x0040 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      DecalCreateNewMaterialInstanceConstant : 1;       		// 0x0040 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	class UClass*                                      ImpactFlashLightClass;                            		// 0x0044 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FImpactResponseParameters                   EffectParameters;                                 		// 0x0048 (0x004C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.WillowPhysicalMaterialProperty.ImpactResponseData
// 0x0098
struct FImpactResponseData
{
	class UWillowImpactDefinition*                     ImpactType;                                       		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FImpactResponseEffect                       ResponseEffect;                                   		// 0x0004 (0x0094) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.WillowPhysicalMaterialProperty.WheelSlipModifierData
// 0x0008
struct FWheelSlipModifierData
{
	float                                              LongSlipFactor;                                   		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              LatSlipFactor;                                    		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.StatusEffectDefinition.DamageSurfaceTypeModifier
// 0x0034
struct FDamageSurfaceTypeModifier
{
	unsigned char                                      SurfaceType;                                      		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FAttributeInitializationData                BaseChance;                                       		// 0x0004 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FAttributeInitializationData                BaseSpreadChance;                                 		// 0x0014 (0x0010) [0x0000000000000000]              
	struct FAttributeInitializationData                SpreadChanceDecayMultiplier;                      		// 0x0024 (0x0010) [0x0000000000000000]              
};

// ScriptStruct WillowGame.StatusEffectsComponent.ActiveStatusEffect
// 0x0084
struct FActiveStatusEffect
{
	float                                              Duration;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              TotalElapsedTime;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              AccumulatedTime;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              DamagePerSecond;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	class AActor*                                      EventInstigator;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	class UIDamageCauser*                              DamageCauser;                                     		// 0x0014 (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0018 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class UClass*                                      DamageSource;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	class UStatusEffectDefinition*                     StatusEffectDefinition;                           		// 0x0020 (0x0004) [0x0000000000000000]              
	class UBodyHitRegionDefinition*                    HitRegion;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0028 (0x001C) [0x0000000000080000]              ( CPF_Component )
	struct FName                                       DamageNumberSocket;                               		// 0x0044 (0x0008) [0x0000000000000000]              
	float                                              AccumulatedSpreadTime;                            		// 0x004C (0x0004) [0x0000000000000000]              
	float                                              SpreadTimeInterval;                               		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                SpreadCount;                                      		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                SpreadAttempt;                                    		// 0x0058 (0x0004) [0x0000000000000000]              
	float                                              SpreadRadius;                                     		// 0x005C (0x0004) [0x0000000000000000]              
	TArray< class UBodyHitRegionDefinition* >          TravelledRegions;                                 		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UIStatusEffectTarget* >              TravelledTargets;                                 		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UStatusEffectsComponent*                     OwnerComponent;                                   		// 0x0078 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                SpreadCap;                                        		// 0x007C (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsInfiniteDuration : 1;                          		// 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct WillowGame.StatusEffectsComponent.SocketEmitter
// 0x000C
struct FSocketEmitter
{
	class AEmitter*                                    Emitter;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       SocketName;                                       		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct WillowGame.StatusEffectsComponent.HitRegionEmitters
// 0x0018
struct FHitRegionEmitters
{
	TArray< struct FSocketEmitter >                    Emitters;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UBodyHitRegionDefinition*                    HitRegion;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bDeleteOnDeactivation : 1;                        		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              TimeWaitingToDie;                                 		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.StatusEffectsComponent.EffectSoundData
// 0x0008
struct FEffectSoundData
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                AkPlayingId;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.IShop.ShopItemData
// 0x0009
struct FShopItemData
{
	class AWillowInventory*                            Item;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Price;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      ItemStatus;                                       		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct WillowGame.BodyWeaponHoldDefinition.ConditionalAnimData
// 0x0008
struct FConditionalAnimData
{
	class UExpressionEvaluator*                        Expression;                                       		// 0x0000 (0x0004) [0x0000000004000003]              ( CPF_Edit | CPF_Const | CPF_EditInline )
	class USpecialMoveDefinition*                      SpecialMove;                                      		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.BodyWeaponHoldDefinition.BodyWeaponActionData
// 0x0014
struct FBodyWeaponActionData
{
	unsigned char                                      Action;                                           		// 0x0000 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UExpressionEvaluator*                        Expression;                                       		// 0x0004 (0x0004) [0x0000000004000003]              ( CPF_Edit | CPF_Const | CPF_EditInline )
	TArray< struct FConditionalAnimData >              Animations;                                       		// 0x0008 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.BodyWeaponHoldDefinition.BodyWeaponActionPostureData
// 0x0010
struct FBodyWeaponActionPostureData
{
	unsigned char                                      Posture;                                          		// 0x0000 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< struct FBodyWeaponActionData >             Actions;                                          		// 0x0004 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.BodyWeaponHoldDefinition.BodyHandIKHoldData
// 0x0024
struct FBodyHandIKHoldData
{
	struct FVector                                     JointLocation;                                    		// 0x0000 (0x000C) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector                                     HandLocation;                                     		// 0x000C (0x000C) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FRotator                                    HandRotation;                                     		// 0x0018 (0x000C) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.BodyWeaponHoldDefinition.CustomBodyHandIKHoldData
// 0x002C
struct FCustomBodyHandIKHoldData
{
	struct FName                                       HoldName;                                         		// 0x0000 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FBodyHandIKHoldData                         IKData;                                           		// 0x0008 (0x0024) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.WillowWeaponTypes.ExtraMuzzleEffect
// 0x0008
struct FExtraMuzzleEffect
{
	class UParticleSystem*                             Particles;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAkEvent*                                    Sound;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.WillowWeaponTypes.WeaponBoneControllerData
// 0x0014
struct FWeaponBoneControllerData
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      ControlType;                                      		// 0x0008 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      bUseInFirstPerson : 1;                            		// 0x000C (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      bUseInThirdPerson : 1;                            		// 0x000C (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	class USkelControlBase*                            ControlTemplate;                                  		// 0x0010 (0x0004) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct WillowGame.WillowWeaponTypes.WeaponMemento
// 0x003C
struct FWeaponMemento
{
	struct FInventorySerialNumber                      SerialNumber;                                     		// 0x0000 (0x0034) [0x0000000000000000]              
	int                                                StoredAmmo;                                       		// 0x0034 (0x0004) [0x0000000000000000]              
	unsigned long                                      bEquipped : 1;                                    		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDropOnDeath : 1;                                 		// 0x0038 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct WillowGame.WillowPawn.BloodSplatterTrace
// 0x0020
struct FBloodSplatterTrace
{
	class UBodyHitRegionDefinition*                    HitRegion;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     Momentum;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
	float                                              DamageSeverityPercent;                            		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowPawn.GoreEffect
// 0x0024
struct FGoreEffect
{
	class UBodyHitRegionDefinition*                    HitRegion;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                GoreDataIndex;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	class AController*                                 InstigatedBy;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowPawn.MaterialScalarFadeReplication
// 0x0018
struct FMaterialScalarFadeReplication
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              StartValue;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              EndValue;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              FadeTime;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bRunning : 1;                                     		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsForGoreDeath : 1;                              		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct WillowGame.WillowPawn.HolsteredGearDisplaySlot
// 0x0008
struct FHolsteredGearDisplaySlot
{
	unsigned char                                      State;                                            		// 0x0000 (0x0001) [0x0000000000000000]              
	class AWillowInventory*                            Item;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.BodyHitRegionDefinition.GoreTriggerData
// 0x000C
struct FGoreTriggerData
{
	class UDamageTypeDefinition*                       DamageTypeTrigger;                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      DamageSourceTrigger;                              		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HealthPctDamageThreshold;                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.BodyHitRegionDefinition.DamageReactionData
// 0x0024(0x002C - 0x0008)
struct FDamageReactionData : FSpecializedBehaviorEvent
{
	TArray< struct FGoreTriggerData >                  DamageTriggers;                                   		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              PercentOfHealthTrigger;                           		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USpecialMoveDefinition*                      DamageSpecialMove;                                		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UBehaviorBase* >                     ReactionBehaviors;                                		// 0x001C (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	unsigned long                                      bDamageThreshold : 1;                             		// 0x0028 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bRepeatableEvent : 1;                             		// 0x0028 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bCensored : 1;                                    		// 0x0028 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bOnlyTriggeredOnOwnerDeath : 1;                   		// 0x0028 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
};

// ScriptStruct WillowGame.WeaponTypeDefinition.WeaponPartAttachmentData
// 0x0020
struct FWeaponPartAttachmentData
{
	struct FName                                       FirstPersonAttachmentSocket;                      		// 0x0000 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       ThirdPersonAttachmentSocket;                      		// 0x0008 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       FirstPersonOffHandAttachmentSocket;               		// 0x0010 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       ThirdPersonOffHandAttachmentSocket;               		// 0x0018 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.IMeleeAttacker.MeleeOverTimeState
// 0x0034
struct FMeleeOverTimeState
{
	unsigned long                                      bIsMeleeActive : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class UMeleeDefinition*                            MeleeDefinition;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              MeleeStartTime;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              TimeElapsedSinceLastMelee;                        		// 0x000C (0x0004) [0x0000000000000000]              
	TArray< class AActor* >                            HitActors;                                        		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     MeleeStartLocation;                               		// 0x001C (0x000C) [0x0000000000000000]              
	struct FRotator                                    MeleeStartRotation;                               		// 0x0028 (0x000C) [0x0000000000000000]              
};

// ScriptStruct WillowGame.IDynamicObstacle.ObstacleData
// 0x004C
struct FObstacleData
{
	class AActor*                                      Actor;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	class AActor*                                      Leader;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Radius;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              HalfHeight;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              MaxSpeed;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0014 (0x000C) [0x0000000000000000]              
	struct FVector                                     Velocity;                                         		// 0x0020 (0x000C) [0x0000000000000000]              
	struct FVector                                     OldVelocity;                                      		// 0x002C (0x000C) [0x0000000000000000]              
	struct FVector2D                                   LastOffset;                                       		// 0x0038 (0x0008) [0x0000000000000000]              
	class UIDynamicObstacle*                           IDO;                                              		// 0x0040 (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0044 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned long                                      bWasAvoiding : 1;                                 		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct WillowGame.ISimpleAnimPlayer.SimpleAnimData
// 0x0018
struct FSimpleAnimData
{
	struct FName                                       AnimName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	class UWillowAnimTree*                             Tree;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	TArray< class UWillowAnimNode_Simple* >            Nodes;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.SkillDefinition.SkillDamagedEventConstraintData
// 0x000C
struct FSkillDamagedEventConstraintData
{
	class UDamageTypeDefinition*                       DamageTypeConstraint;                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      DamageSourceConstraint;                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bMustBeCriticalDamage : 1;                        		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bMustBeOneShotKill : 1;                           		// 0x0008 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct WillowGame.SkillDefinition.SkillKillEventData
// 0x0010(0x0018 - 0x0008)
struct FSkillKillEventData : FSpecializedBehaviorEvent
{
	unsigned char                                      EventType;                                        		// 0x0008 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< struct FSkillDamagedEventConstraintData >  EventConstraints;                                 		// 0x000C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.SkillDefinition.SkillDamageEventData
// 0x0010(0x0018 - 0x0008)
struct FSkillDamageEventData : FSpecializedBehaviorEvent
{
	unsigned char                                      EventType;                                        		// 0x0008 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< struct FSkillDamagedEventConstraintData >  EventConstraints;                                 		// 0x000C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.SkillDefinition.NamedSkillEvent
// 0x0021
struct FNamedSkillEvent
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< class USkillDefinition* >                  RequiredSkills;                                   		// 0x0008 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< class UBehaviorBase* >                     EventResponses;                                   		// 0x0014 (0x000C) [0x0000000004400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline )
	unsigned char                                      RequiredActionSkillState;                         		// 0x0020 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.SkillDefinition.SkillActionData
// 0x0028
struct FSkillActionData
{
	struct FString                                     ClientConsoleCommand;                             		// 0x0000 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	unsigned long                                      bSkillOnInstigator : 1;                           		// 0x000C (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      bSkillOnRecipient : 1;                            		// 0x000C (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	unsigned char                                      GradeType;                                        		// 0x0010 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                HardcodedGrade;                                   		// 0x0014 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class USkillDefinition*                            SkillToActivate;                                  		// 0x0018 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class USkillDefinition*                            SkillToDeactivate;                                		// 0x001C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UAkEvent*                                    AkEvent;                                          		// 0x0020 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      bInstigatorPlaysSound : 1;                        		// 0x0024 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      bRecipientPlaysSound : 1;                         		// 0x0024 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.SkillDefinition.SkillEventResponseData
// 0x0030
struct FSkillEventResponseData
{
	unsigned long                                      bPredictOnClient : 1;                             		// 0x0000 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned char                                      EventType;                                        		// 0x0004 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FSkillActionData                            Action;                                           		// 0x0008 (0x0028) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.SkillDefinition.SkillConstraintData
// 0x0018
struct FSkillConstraintData
{
	unsigned long                                      bApplyConstraintOnActivatation : 1;               		// 0x0000 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      bApplyConstraintWhileActive : 1;                  		// 0x0000 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	unsigned long                                      bApplyConstraintWhilePaused : 1;                  		// 0x0000 (0x0004) [0x0000000000000003] [0x00000004] ( CPF_Edit | CPF_Const )
	unsigned char                                      OnFailure;                                        		// 0x0004 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UExpressionEvaluator*                        Evaluator;                                        		// 0x0008 (0x0004) [0x0000000004000003]              ( CPF_Edit | CPF_Const | CPF_EditInline )
	TArray< class USkillExpressionEvaluatorDefinition* > EvaluatorDefinitions;                             		// 0x000C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.SkillDefinition.BonusAttributeModifierUpgrade
// 0x0008
struct FBonusAttributeModifierUpgrade
{
	int                                                GradeToApplyAt;                                   		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              Modifier;                                         		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.SkillDefinition.SkillEffectData
// 0x004C
struct FSkillEffectData
{
	class UAttributeDefinitionBase*                    AttributeToModify;                                		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      bIncludeDuelingTargets : 1;                       		// 0x0004 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      bIncludeSelfAsTarget : 1;                         		// 0x0004 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	unsigned long                                      bOnlyEffectTargetsInRange : 1;                    		// 0x0004 (0x0004) [0x0000000000000003] [0x00000004] ( CPF_Edit | CPF_Const )
	unsigned long                                      bExcludeNonPlayerCharacters : 1;                  		// 0x0004 (0x0004) [0x0000000000000003] [0x00000008] ( CPF_Edit | CPF_Const )
	unsigned char                                      EffectTarget;                                     		// 0x0008 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       TargetInstanceDataName;                           		// 0x000C (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      TargetCriteria;                                   		// 0x0014 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      ModifierType;                                     		// 0x0015 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                BaseModifierValue;                                		// 0x0018 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                GradeToStartApplyingEffect;                       		// 0x0028 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                PerGradeUpgradeInterval;                          		// 0x002C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                PerGradeUpgrade;                                  		// 0x0030 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< struct FBonusAttributeModifierUpgrade >    BonusUpgradeList;                                 		// 0x0040 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.GlobalsDefinition.InputContextData
// 0x000C
struct FInputContextData
{
	struct FName                                       ContextName;                                      		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UInputContextDefinition*                     Definition;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.GlobalsDefinition.SlaughterMissionChain
// 0x000C
struct FSlaughterMissionChain
{
	TArray< class UMissionDefinition* >                SlaughterMissions;                                		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.GlobalsDefinition.LevelBasedExpScale
// 0x000C
struct FLevelBasedExpScale
{
	int                                                LevelDifference;                                  		// 0x0000 (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	float                                              HigherLevelEnemyExpScale;                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LowerLevelEnemyExpScale;                          		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.GlobalsDefinition.StatusEffectTypeCommonProperties
// 0x000C
struct FStatusEffectTypeCommonProperties
{
	unsigned char                                      StatusEffectType;                                 		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class UAkEvent*                                    EffectStartAkEvent;                               		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAkEvent*                                    EffectStopAkEvent;                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.GlobalsDefinition.LevelBasedStatusEffectChanceScale
// 0x000C
struct FLevelBasedStatusEffectChanceScale
{
	int                                                LevelDifference;                                  		// 0x0000 (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	float                                              HigherLevelChanceScale;                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LowerLevelChanceScale;                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.GlobalsDefinition.PlayThroughData
// 0x0010
struct FPlayThroughData
{
	int                                                PlayThroughNumber;                                		// 0x0000 (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	TArray< class UGameBalanceDefinition* >            BalanceDefinitions;                               		// 0x0004 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.GlobalsDefinition.LevelBasedDamageScale
// 0x000C
struct FLevelBasedDamageScale
{
	int                                                LevelDifference;                                  		// 0x0000 (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	float                                              HigherLevelAttackerDmgScale;                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LowerLevelAttackerDmgScale;                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.GlobalsDefinition.RarityLevelColor
// 0x000E
struct FRarityLevelColor
{
	int                                                MinLevel;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxLevel;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      Color;                                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      DropLifeSpanType;                                 		// 0x000C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      RarityRating;                                     		// 0x000D (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.GlobalsDefinition.ExpAwardWeight
// 0x000C
struct FExpAwardWeight
{
	int                                                Players;                                          		// 0x0000 (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	float                                              KillerExpBonus;                                   		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              ExpWeight;                                        		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.GlobalsDefinition.KillSkillDuration
// 0x0008
struct FKillSkillDuration
{
	int                                                Players;                                          		// 0x0000 (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.WillowExperiencePipeline.DamageTypeExpModifier
// 0x000C
struct FDamageTypeExpModifier
{
	class UClass*                                      DamageSource;                                     		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UDamageTypeDefinition*                       TypeDefinition;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Multiplier;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.PlayerClassDefinition.PlayerClassAchievementUnlockData
// 0x0008
struct FPlayerClassAchievementUnlockData
{
	unsigned char                                      UnlockType;                                       		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Achievement;                                      		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                IntData;                                          		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.WillowPlayerController.PendingClientTrainingMessage
// 0x000C
struct FPendingClientTrainingMessage
{
	class UClass*                                      Message;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTrainingMessageDefinition*                  TrainingDefinition;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Duration;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.PlayerSaveGame.OneOffLevelChallengeData
// 0x0010
struct FOneOffLevelChallengeData
{
	unsigned char                                      PackageId;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      ContentId;                                        		// 0x0001 (0x0001) [0x0000000000000000]              
	TArray< int >                                      Completion;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.PlayerSaveGame.PlayerUIPreferences
// 0x0018
struct FPlayerUIPreferences
{
	struct FString                                     CharacterName;                                    		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FColor                                      PrimaryColor;                                     		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      SecondaryColor;                                   		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      TertiaryColor;                                    		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.CurrencyAttributeValueResolver.CurrencyState
// 0x0014
struct FCurrencyState
{
	unsigned char                                      FormOfCurrency;                                   		// 0x0000 (0x0001) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       StatName;                                         		// 0x0004 (0x0008) [0x0000000000000002]              ( CPF_Const )
	int                                                CurrentAmount;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                LastKnownAmount;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.PlayerSaveGame.BankSlot
// 0x0034
struct FBankSlot
{
	struct FInventorySerialNumber                      InventorySerialNumber;                            		// 0x0000 (0x0034) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.WillowInventoryStorage.ChestData
// 0x003C
struct FChestData
{
	class UClass*                                      InventoryClass;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FInventorySerialNumber                      InventorySerialNumber;                            		// 0x0004 (0x0034) [0x0000000000000000]              
	class AWillowInventory*                            Inventory;                                        		// 0x0038 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowPlayerController.MissionPlaythroughData
// 0x0038
struct FMissionPlaythroughData
{
	TArray< struct FMissionStatusPlayerData >          MissionList;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FUnloadableDlcMissionStatusData >   UnloadableDlcMissionList;                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FUnloadableDlcPendingRewardData >   UnloadableDlcPendingMissionRewards;               		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMissionDefinition* >                FilteredMissions;                                 		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UMissionDefinition*                          ActiveMission;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                PlayThroughNumber;                                		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowPlayerController.StatusMenuMissionEligibilityData
// 0x000C
struct FStatusMenuMissionEligibilityData
{
	class UMissionDefinition*                          MissionDef;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      MissionStatus;                                    		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned long                                      bIsBlocked : 1;                                   		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsFiltered : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct WillowGame.PlayerSaveGame.InventorySaveGameData
// 0x004D
struct FInventorySaveGameData
{
	struct FItemDefinitionData                         DefinitionData;                                   		// 0x0000 (0x0044) [0x0000000000000001]              ( CPF_Edit )
	int                                                Quantity;                                         		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bEquipped : 1;                                    		// 0x0048 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      Mark;                                             		// 0x004C (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.WillowGameViewportClient.LoginState
// 0x0010
struct FLoginState
{
	struct FString                                     LoginName;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIsDirty : 1;                                     		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct WillowGame.WillowPlayerController.LungeData
// 0x0010
struct FLungeData
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Length;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Start;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              SavedAccelRate;                                   		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowVehicle.TimePosition
// 0x0010
struct FTimePosition
{
	struct FVector                                     Position;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	float                                              Time;                                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowVehicle.VehicleSeatInstance
// 0x0078
struct FVehicleSeatInstance
{
	class APawn*                                       StoragePawn;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	class APawn*                                       LastStoragePawn;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	class AVehicle*                                    SeatPawn;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	class AWillowVehicleWeapon*                        Gun;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	class UMeshComponent*                              GunMesh;                                          		// 0x0010 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UWeaponTypeDefinition*                       GunDefinition;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                BarrelIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FName                                       WeaponRotationName;                               		// 0x001C (0x0008) [0x0000000000000000]              
	struct FName                                       FlashLocationName;                                		// 0x0024 (0x0008) [0x0000000000000000]              
	struct FName                                       FlashCountName;                                   		// 0x002C (0x0008) [0x0000000000000000]              
	struct FName                                       FiringModeName;                                   		// 0x0034 (0x0008) [0x0000000000000000]              
	struct FName                                       AttachedWeaponName;                               		// 0x003C (0x0008) [0x0000000000000000]              
	TArray< class UWillowSkelControl_TurretConstrained* > TurretControllers;                                		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USpecialMoveDefinition*                      WeaponFireSMD;                                    		// 0x0050 (0x0004) [0x0000000000000000]              
	TArray< struct FTimePosition >                     OldPositions;                                     		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     SmoothedCameraOffset;                             		// 0x0060 (0x000C) [0x0000000000000000]              
	int                                                IncomingSeatIndex;                                		// 0x006C (0x0004) [0x0000000000000000]              
	float                                              SeatLockTime;                                     		// 0x0070 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDontStopAnimOnExit : 1;                          		// 0x0074 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSwitchingSeats : 1;                              		// 0x0074 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bExiting : 1;                                     		// 0x0074 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct WillowGame.UBMGraveyardSaveData.TombstoneData
// 0x004C
struct FTombstoneData
{
	int                                                TotalTimePlayed;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                CharacterLevel;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                PercentMissionsComplete;                          		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                PercentChallengesComplete;                        		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     CharacterName;                                    		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     FavoriteManufacturer;                             		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     FavoriteWeaponType;                               		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     KilledByDescription;                              		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ScreenshotFilename;                               		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.PlayerSaveGame.ResourceSaveGameData
// 0x0010
struct FResourceSaveGameData
{
	class UResourceDefinition*                         ResourceDefinition;                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UResourcePoolDefinition*                     ResourcePoolDefinition;                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Amount;                                           		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                UpgradeLevel;                                     		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.PlayerSaveGame.InventorySlotSaveGameData
// 0x000C
struct FInventorySlotSaveGameData
{
	int                                                InventorySlotMax_Misc;                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                WeaponReadyMax;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                NumQuickSlotsFlourished;                          		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.PlayerSaveGame.WeaponSaveGameData
// 0x0046
struct FWeaponSaveGameData
{
	struct FWeaponDefinitionData                       WeaponDefinitionData;                             		// 0x0000 (0x0044) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      QuickSlot;                                        		// 0x0044 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Mark;                                             		// 0x0045 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.PlayerSaveGame.WorldDiscoveryData
// 0x000C
struct FWorldDiscoveryData
{
	struct FName                                       DiscoveryName;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      HasBeenUncovered : 1;                             		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct WillowGame.PlayerSaveGame.MissionPlaythroughSaveGameData
// 0x004C
struct FMissionPlaythroughSaveGameData
{
	int                                                PlayThroughNumber;                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FMissionStatusPlayerData >          MissionData;                                      		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FUnloadableDlcMissionStatusData >   UnloadableDlcMissionData;                         		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FPendingMissionRewardData >         PendingMissionRewards;                            		// 0x001C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FUnloadableDlcPendingRewardData >   UnloadableDlcPendingMissionRewards;               		// 0x0028 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     ActiveMission;                                    		// 0x0034 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UMissionDefinition* >                FilteredMissions;                                 		// 0x0040 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.PlayerSaveGame.SkillSaveGameData
// 0x0010
struct FSkillSaveGameData
{
	class USkillDefinition*                            SkillDefinition;                                  		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Grade;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                GradePoints;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                EquippedSlotIndex;                                		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.PlayerSaveGame.UnloadableDlcItemSaveGameData
// 0x003D
struct FUnloadableDlcItemSaveGameData
{
	struct FInventorySerialNumber                      SerialNumber;                                     		// 0x0000 (0x0034) [0x0000000000000001]              ( CPF_Edit )
	int                                                Quantity;                                         		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bEquipped : 1;                                    		// 0x0038 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      Mark;                                             		// 0x003C (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.PlayerSaveGame.UnloadableDlcWeaponSaveGameData
// 0x0036
struct FUnloadableDlcWeaponSaveGameData
{
	struct FInventorySerialNumber                      SerialNumber;                                     		// 0x0000 (0x0034) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      QuickSlot;                                        		// 0x0034 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Mark;                                             		// 0x0035 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.WillowPlayerController.PostProcessOverlayInfo
// 0x0115
struct FPostProcessOverlayInfo
{
	struct FPostProcessOverlay                         PostProcessOverlay;                               		// 0x0000 (0x010C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              SceneInterpolationPhaseTime;                      		// 0x010C (0x0004) [0x0000000000000000]              
	float                                              SceneInterpolationDuration;                       		// 0x0110 (0x0004) [0x0000000000000000]              
	unsigned char                                      PostProcessOverlayPhase;                          		// 0x0114 (0x0001) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowPlayerController.SpeedKillData
// 0x0010
struct FSpeedKillData
{
	struct FString                                     VictimName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              VictimKillTime;                                   		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowPlayerController.LurchData
// 0x0014
struct FLurchData
{
	float                                              StartTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              LocMagnitude;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              RotMagnitude;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Duration;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              FalloffRate;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.PlayerSkillTree.SkillTreeSkillStateData
// 0x0014
struct FSkillTreeSkillStateData
{
	class USkillDefinition*                            SkillDefinition;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	class USkillTreeBranchDefinition*                  ParentBranchDefinition;                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                TierNumber;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                SkillGrade;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsUnlocked : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct WillowGame.PlayerSkillTree.PlayerSkillTreeSkillData
// 0x0024
struct FPlayerSkillTreeSkillData
{
	class USkillDefinition*                            Definition;                                       		// 0x0000 (0x0004) [0x0000000000100000]              
	int                                                Index;                                            		// 0x0004 (0x0004) [0x0000000000100000]              
	int                                                PrevSkillIndex;                                   		// 0x0008 (0x0004) [0x0000000000100000]              
	int                                                NextSkillIndex;                                   		// 0x000C (0x0004) [0x0000000000100000]              
	int                                                ParentTierIndex;                                  		// 0x0010 (0x0004) [0x0000000000100000]              
	int                                                PrevSkillTypeIndex;                               		// 0x0014 (0x0004) [0x0000000000100000]              
	int                                                NextSkillTypeIndex;                               		// 0x0018 (0x0004) [0x0000000000100000]              
	int                                                Grade;                                            		// 0x001C (0x0004) [0x0000000000100000]              
	class UPlayerSkillTree*                            Owner;                                            		// 0x0020 (0x0004) [0x0000000000100000]              
};

// ScriptStruct WillowGame.Skill.AppliedSkillEffect
// 0x005C
struct FAppliedSkillEffect
{
	struct FSkillEffectData                            EffectData;                                       		// 0x0000 (0x004C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UObject* >                           Contexts;                                         		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UAttributeModifier*                          Modifier;                                         		// 0x0058 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.VehicleClassDefinition.VehicleSeatDefinition
// 0x0044
struct FVehicleSeatDefinition
{
	class UWillowVehicleSeatDefinition*                SeatDefinition;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bDoNotUseThisSeat : 1;                            		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class UInventoryBalanceDefinition*                 WeaponBalanceDefinition;                          		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USpecialMoveDefinition*                      WeaponFireSMD;                                    		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                NextSeatIndex;                                    		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class USpecialMove_Vehicle* >              Anim_SeatSwap;                                    		// 0x0014 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UAIDefinition*                               SeatAIDef;                                        		// 0x0020 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class ULocalizedStringDefinition*                  SeatInteractTextDefinition;                       		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FName >                             GunSocket;                                        		// 0x0028 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       SeatNameEnter;                                    		// 0x0034 (0x0008) [0x0000000000000000]              
	struct FName                                       SeatNameExit;                                     		// 0x003C (0x0008) [0x0000000000000000]              
};

// ScriptStruct WillowGame.ChallengeDefinition.ConditionLevel
// 0x0040
struct FConditionLevel
{
	TArray< class UChallengeConditionDefinition* >     ConditionDefinitions;                             		// 0x0000 (0x000C) [0x0000000004400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline )
	TArray< float >                                    ProgressNotificationOverride;                     		// 0x000C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< struct FAttributeEffectData >              CompletedAttributeEffects;                        		// 0x0018 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FAttributeInitializationData                BadassPointReward;                                		// 0x0024 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UItemPoolDefinition*                         RewardItemPool;                                   		// 0x0034 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       RewardTextKey;                                    		// 0x0038 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.WillowPlayerController.TrainingData
// 0x0008
struct FTrainingData
{
	class AWillowPlayerController*                     PCOwner;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTrainingMessageDefinition*                  TrainingDefinition;                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.ChallengeDefinition.ChallengeData
// 0x0008
struct FChallengeData
{
	class AWillowPlayerController*                     PCOwner;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	class UChallengeDefinition*                        ChallengeDefinition;                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowPlayerController.TaggedGFxMovie
// 0x000C
struct FTaggedGFxMovie
{
	class UGearboxGFxMovie*                            Movie;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       Tag;                                              		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct WillowGame.ILootable.SpawnedAttachedLootData
// 0x000C
struct FSpawnedAttachedLootData
{
	class AWillowInventory*                            Inv;                                              		// 0x0000 (0x0004) [0x0000000000100000]              
	struct FName                                       AttachmentPointName;                              		// 0x0004 (0x0008) [0x0000000000100000]              
};

// ScriptStruct WillowGame.ILootable.SpawnedDroppedLootData
// 0x0008
struct FSpawnedDroppedLootData
{
	class AWillowInventory*                            Inv;                                              		// 0x0000 (0x0004) [0x0000000000100000]              
	unsigned long                                      bDisableRigidBodyPhysics : 1;                     		// 0x0004 (0x0004) [0x0000000000100000] [0x00000001] 
};

// ScriptStruct WillowGame.PlayerSkillTree.PlayerSkillTreeBranchData
// 0x0034
struct FPlayerSkillTreeBranchData
{
	class USkillTreeBranchDefinition*                  Definition;                                       		// 0x0000 (0x0004) [0x0000000000100000]              
	int                                                BranchPointsToUnlockNextBranch;                   		// 0x0004 (0x0004) [0x0000000000100000]              
	int                                                Index;                                            		// 0x0008 (0x0004) [0x0000000000100000]              
	int                                                ParentBranchIndex;                                		// 0x000C (0x0004) [0x0000000000100000]              
	int                                                PrevBranchIndex;                                  		// 0x0010 (0x0004) [0x0000000000100000]              
	int                                                NextBranchIndex;                                  		// 0x0014 (0x0004) [0x0000000000100000]              
	TArray< int >                                      ChildBranchIndices;                               		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      TierIndices;                                      		// 0x0024 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class UPlayerSkillTree*                            Owner;                                            		// 0x0030 (0x0004) [0x0000000000100000]              
};

// ScriptStruct WillowGame.PlayerSkillTree.PlayerSkillTreeTierData
// 0x002C
struct FPlayerSkillTreeTierData
{
	TArray< int >                                      SkillIndices;                                     		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                BranchPointsToUnlockTier;                         		// 0x000C (0x0004) [0x0000000000100000]              
	int                                                Index;                                            		// 0x0010 (0x0004) [0x0000000000100000]              
	int                                                PrevTierIndex;                                    		// 0x0014 (0x0004) [0x0000000000100000]              
	int                                                NextTierIndex;                                    		// 0x0018 (0x0004) [0x0000000000100000]              
	int                                                ParentBranchIndex;                                		// 0x001C (0x0004) [0x0000000000100000]              
	int                                                TierNumber;                                       		// 0x0020 (0x0004) [0x0000000000100000]              
	unsigned long                                      bUnlocked : 1;                                    		// 0x0024 (0x0004) [0x0000000000100000] [0x00000001] 
	class UPlayerSkillTree*                            Owner;                                            		// 0x0028 (0x0004) [0x0000000000100000]              
};

// ScriptStruct WillowGame.MissionObjectiveDefinition.KillMissionData
// 0x0010
struct FKillMissionData
{
	unsigned long                                      bUseKillRestrictions : 1;                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bCriticalHit : 1;                                 		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bNotCriticalHit : 1;                              		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bNotHitRegion : 1;                                		// 0x0000 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bMissionWeapon : 1;                               		// 0x0000 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned char                                      DamageCauserType;                                 		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      DamageType;                                       		// 0x0005 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       HitRegionName;                                    		// 0x0008 (0x0008) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
};

// ScriptStruct WillowGame.ItemPoolDefinition.BalancedInventoryData
// 0x001C
struct FBalancedInventoryData
{
	class UItemPoolDefinition*                         ItmPoolDefinition;                                		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UInventoryBalanceDefinition*                 InvBalanceDefinition;                             		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                Probability;                                      		// 0x0008 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      bDropOnDeath : 1;                                 		// 0x0018 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.WillowDownloadableContentManager.GoldenKeySource
// 0x0004
struct FGoldenKeySource
{
	unsigned char                                      SourceId;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      NumKeys;                                          		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      NumKeysSpent;                                     		// 0x0002 (0x0001) [0x0000000000000000]              
	unsigned char                                      Empty;                                            		// 0x0003 (0x0001) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowDownloadableContentManager.SeasonPassOfferUnion
// 0x0010
struct FSeasonPassOfferUnion
{
	int                                                AssociatedSeasonPassOfferId;                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                PaidOfferId;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                FreeOfferId;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                SeasonPassId;                                     		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowDownloadableContentManager.SeasonPassPackageCount
// 0x000C
struct FSeasonPassPackageCount
{
	int                                                SeasonPassId;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                PackageCount;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bPreOrder : 1;                                    		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct WillowGame.WillowDownloadableContentManager.DLCMissionData
// 0x0014
struct FDLCMissionData
{
	int                                                MinMissionNumber;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                MaxMissionNumber;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     MissionNameLocKey;                                		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.WillowDownloadableContentManager.CompatibilityVersionInfo
// 0x0014
struct FCompatibilityVersionInfo
{
	int                                                CurrentCompatPackVersion;                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FDlcCompatibilityData                       CurrentCompatibilityMask;                         		// 0x0004 (0x0010) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowDownloadableContentManager.ContentState
// 0x0008
struct FContentState
{
	int                                                LicensedMask;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                InstalledMask;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowPlayerController.RecentlyResistedAttackData
// 0x000C
struct FRecentlyResistedAttackData
{
	class AActor*                                      DamagedActor;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      DamageType;                                       		// 0x0004 (0x0001) [0x0000000000000000]              
	float                                              LastResistTime;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.PlayerSaveGame.ExpansionData
// 0x0010
struct FExpansionData
{
	int                                                Tag;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< unsigned char >                            Data;                                             		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.PlayerSaveGame.RegionGameStageData
// 0x000C
struct FRegionGameStageData
{
	class URegionDefinition*                           RegionDef;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                GameStage;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                PlaythroughIdx;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.PlayerSaveGame.UnloadableDlcRegionGameStageData
// 0x0018
struct FUnloadableDlcRegionGameStageData
{
	struct FString                                     RegionDefName;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                GameStage;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                PlaythroughIdx;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                DlcPackageId;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.PlayerSaveGame.UnloadableDlcChallengeData
// 0x0010
struct FUnloadableDlcChallengeData
{
	struct FString                                     ChallengeDefName;                                 		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                DlcPackageId;                                     		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.PlayerSaveGame.LockoutData
// 0x0008
struct FLockoutData
{
	class ULockoutDefinition*                          LockoutDef;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                LockoutTime;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.PlayerSaveGame.UnloadableDlcLockoutData
// 0x0014
struct FUnloadableDlcLockoutData
{
	struct FString                                     LockoutDefName;                                   		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                LockoutTime;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                DlcPackageId;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowGFxThirdPersonDefinition.ThirdPersonMenuView
// 0x004C
struct FThirdPersonMenuView
{
	struct FVector                                     RelativeCameraLocation;                           		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    RelativeCameraRotation;                           		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RelativeMenuLocation;                             		// 0x0018 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    RelativeMenuRotation;                             		// 0x0024 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              CameraYawMin;                                     		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CameraYawMax;                                     		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              VerticalSplitscreenCameraOffset;                  		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              VerticalSplitscreenCameraSpread;                  		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       FocusBoneName;                                    		// 0x0040 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              FocusScreenYaw;                                   		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.GFxTextListContainer.OneTimeDataElement
// 0x002C
struct FOneTimeDataElement
{
	struct FString                                     Text;                                             		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Icon;                                             		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     IconOverride;                                     		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FColor                                      TextColor;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	class UObject*                                     Data;                                             		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.GFxTextListContainer.SortableDataElement
// 0x0010
struct FSortableDataElement
{
	unsigned long                                      bFiltered : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                OneTimeIdx;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                CategoryIdx;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	class UObject*                                     Data;                                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.GFxTextListContainer.GFxTextEntry
// 0x0005
struct FGFxTextEntry
{
	int                                                ArrayIdx;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Kind;                                             		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct WillowGame.InventoryDataProviderGFxObject.SortFilterConfiguration
// 0x0010
struct FSortFilterConfiguration
{
	unsigned char                                      SortType;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      FilterType;                                       		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      CategoryType;                                     		// 0x0002 (0x0001) [0x0000000000000000]              
	struct FString                                     SortTitleLookupKey;                               		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.InventoryDataProviderGFxObject.HeavyInventoryElement
// 0x0014
struct FHeavyInventoryElement
{
	struct FString                                     Text;                                             		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FColor                                      Color;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	class UObject*                                     Data;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.BaseTopLevelPanelGFxObject.ItemCardInfo
// 0x0010
struct FItemCardInfo
{
	struct FName                                       CardName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                ContentIdx;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	class UItemCardGFxObject*                          ItemCard;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.Behavior_AIThrowProjectileAtTarget.AIThrowProjectileBehaviorSequenceStateData
// 0x000C
struct FAIThrowProjectileBehaviorSequenceStateData
{
	unsigned char                                      Action;                                           		// 0x0000 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       SequenceName;                                     		// 0x0004 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.WillowAIPawn.PerchStateData
// 0x0030
struct FPerchStateData
{
	struct FName                                       AttachmentName;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	class UStaticMesh*                                 StaticMesh;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	class USkeletalMesh*                               SkelMesh;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	struct FVector                                     LocOffset;                                        		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FRotator                                    RotOffset;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	float                                              Scale;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
	class AActor*                                      Actor;                                            		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.Behavior_Conditional.BehaviorCondition
// 0x0014
struct FBehaviorCondition
{
	int                                                ConditionId;                                      		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UExpressionEvaluator*                        Condition;                                        		// 0x0004 (0x0004) [0x0000000004000003]              ( CPF_Edit | CPF_Const | CPF_EditInline )
	TArray< class UBehaviorBase* >                     Behaviors;                                        		// 0x0008 (0x000C) [0x0000000004400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct WillowGame.Behavior_DropProjectile.DropProjectileBehaviorSequenceStateData
// 0x000C
struct FDropProjectileBehaviorSequenceStateData
{
	unsigned char                                      Action;                                           		// 0x0000 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       SequenceName;                                     		// 0x0004 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.Behavior_RandomlySelectBehaviors.BehaviorsSelectionData
// 0x001C
struct FBehaviorsSelectionData
{
	struct FAttributeInitializationData                Weight;                                           		// 0x0000 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< class UBehaviorBase* >                     Behaviors;                                        		// 0x0010 (0x000C) [0x0000000004400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct WillowGame.Behavior_RemoveInstanceData.RemoveObject
// 0x0008
struct FRemoveObject
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.WillowSkelControl_TurretConstrained.TurretConstraintData
// 0x000C
struct FTurretConstraintData
{
	int                                                PitchConstraint;                                  		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                YawConstraint;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                RollConstraint;                                   		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.Behavior_SpawnProjectile.ProjectileBehaviorSequenceStateData
// 0x000C
struct UBehavior_SpawnProjectile_FProjectileBehaviorSequenceStateData
{
	unsigned char                                      Action;                                           		// 0x0000 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       SequenceName;                                     		// 0x0004 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.Behavior_SpawnProjectileFromImpact.ProjectileBehaviorSequenceStateData
// 0x000C
struct UBehavior_SpawnProjectileFromImpact_FProjectileBehaviorSequenceStateData
{
	unsigned char                                      Action;                                           		// 0x0000 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       SequenceName;                                     		// 0x0004 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.PlayerClassIdentifierDefinition.CustomizationItemData
// 0x0008
struct FCustomizationItemData
{
	int                                                ItemPoolKey;                                      		// 0x0000 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	class UItemPoolDefinition*                         CustomizationItemPool;                            		// 0x0004 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
};

// ScriptStruct WillowGame.BehaviorAliasLookupDefinition.BehaviorAliasReference
// 0x0010
struct FBehaviorAliasReference
{
	class UBehaviorAliasDefinition*                    BehaviorAlias;                                    		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< class UBehaviorBase* >                     BehaviorList;                                     		// 0x0004 (0x000C) [0x0000000004400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct WillowGame.BehaviorSequenceEnableByMission.MissionObjectiveStateSelectionData
// 0x0004
struct FMissionObjectiveStateSelectionData
{
	unsigned long                                      bNotStarted : 1;                                  		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bActive : 1;                                      		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bComplete : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
};

// ScriptStruct WillowGame.BehaviorSequenceEnableByMission.MissionStateSelectionData
// 0x0004
struct FMissionStateSelectionData
{
	unsigned long                                      bNotStarted : 1;                                  		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bActive : 1;                                      		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bRequiredObjectivesComplete : 1;                  		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bReadyToTurnIn : 1;                               		// 0x0000 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bComplete : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bFailed : 1;                                      		// 0x0000 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
};

// ScriptStruct WillowGame.BlackMarketDefinition.BlackMarketUpgradeLevelData
// 0x0008
struct FBlackMarketUpgradeLevelData
{
	class UBlackMarketUpgradeDefinition*               UpgradeDefinition;                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxUpgradeLevel;                                  		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.BodyClassDeathDefinition.TechDeathData
// 0x0010(0x0018 - 0x0008)
struct FTechDeathData : FSpecializedBehaviorEvent
{
	TArray< class UDamageTypeDefinition* >             DamageTypeTriggers;                               		// 0x0008 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	class USpecialMoveDefinition*                      DeathAnimation;                                   		// 0x0014 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.VehicleHandlingDefinition.VehicleHandlingWheelData
// 0x000C
struct FVehicleHandlingWheelData
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UVehicleWheelDefinition*                     WheelDef;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.VehicleHandlingDefinition.FishtailingInfo
// 0x0018
struct FFishtailingInfo
{
	struct FVector                                     ContactPoint;                                     		// 0x0000 (0x000C) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector                                     Impulse;                                          		// 0x000C (0x000C) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.CellsNavigator.MoveToCellData
// 0x000C
struct FMoveToCellData
{
	int                                                IndexInCellsList;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              DistanceFromCurrentCell;                          		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              CosAngle;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.InventoryBalanceDefinition.InventoryGradeModifierData
// 0x0008
struct FInventoryGradeModifierData
{
	int                                                ExpLevel;                                         		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UWillowInventoryDefinition*                  CustomInventoryDefinition;                        		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.InventoryBalanceDefinition.InventoryGameStageGradeWeightData
// 0x0008(0x0030 - 0x0028)
struct FInventoryGameStageGradeWeightData : FGameStageGradeWeightData
{
	struct FInventoryGradeModifierData                 GradeModifiers;                                   		// 0x0028 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.InventoryBalanceDefinition.InventoryManufacturerBalanceData
// 0x0010
struct FInventoryManufacturerBalanceData
{
	class UManufacturerDefinition*                     Manufacturer;                                     		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< struct FInventoryGameStageGradeWeightData > Grades;                                           		// 0x0004 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.ItemPartListDefinition.ItemPartGradeWeightData
// 0x0013
struct FItemPartGradeWeightData
{
	class UItemPartDefinition*                         Part;                                             		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< struct FManufacturerCustomGradeWeightData > Manufacturers;                                    		// 0x0004 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	unsigned char                                      MinGameStageIndex;                                		// 0x0010 (0x0001) [0x0000000000020002]              ( CPF_Const | CPF_EditConst )
	unsigned char                                      MaxGameStageIndex;                                		// 0x0011 (0x0001) [0x0000000000020002]              ( CPF_Const | CPF_EditConst )
	unsigned char                                      DefaultWeightIndex;                               		// 0x0012 (0x0001) [0x0000000000020002]              ( CPF_Const | CPF_EditConst )
};

// ScriptStruct WillowGame.ItemPartListCollectionDefinition.ItemCustomPartTypeData
// 0x0010
struct FItemCustomPartTypeData
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	TArray< struct FItemPartGradeWeightData >          WeightedParts;                                    		// 0x0004 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.CombatMusicManager.TargetedPlayerState
// 0x0014
struct FTargetedPlayerState
{
	class AWillowMind*                                 Enemy;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	class AActor*                                      Player;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              InitialThreat;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              StoppedTargetingPlayerTime;                       		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsPlayerPet : 1;                                 		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct WillowGame.CoordinatedEffectDefinition.CoordinatedVectorParameter
// 0x0018
struct FCoordinatedVectorParameter
{
	struct FName                                       ParamName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FInterpCurveVector                          ParamValueOverTime;                               		// 0x0008 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.CoordinatedEffectDefinition.CoordinatedScalarParameter
// 0x0020
struct FCoordinatedScalarParameter
{
	struct FName                                       ParamName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FInterpCurveFloat                           ParamValueOverTime;                               		// 0x0008 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      BoundsScale;                                      		// 0x0018 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bConvertAxisToWorldSpace : 1;                     		// 0x001C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct WillowGame.CoordinatedEffectDefinition.CoordinatedParticleSystemDefinition
// 0x003D
struct FCoordinatedParticleSystemDefinition
{
	class UParticleSystem*                             ParticleSystem;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LocationOffset;                                   		// 0x0004 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    RotationOffset;                                   		// 0x0010 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              TriggerTime;                                      		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ParticleScale;                                    		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FCoordinatedScalarParameter >       Parameters;                                       		// 0x0024 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FCoordinatedVectorParameter >       VectorParameters;                                 		// 0x0030 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      ScaleByObjectSize;                                		// 0x003C (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.CoordinatedEffectDefinition.CoordinatedAudioDefinition
// 0x001C
struct FCoordinatedAudioDefinition
{
	class UAkEvent*                                    TriggerEvent;                                     		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TriggerTime;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAkRtpc*                                     RTPC;                                             		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FInterpCurveFloat                           RTPCOverTime;                                     		// 0x000C (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.CreditsGFxDefinition.CreditsLine
// 0x0010
struct FCreditsLine
{
	class UCreditsLineDefinition*                      LineType;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Text;                                             		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.CreditsGFxDefinition.CreditsTextureInfo
// 0x000C
struct FCreditsTextureInfo
{
	struct FString                                     TexturePath;                                      		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.CurrencyListDefinition.CurrencyPresentation
// 0x0014
struct FCurrencyPresentation
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     WidgetFrame;                                      		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class USwfMovie*                                   WidgetClip;                                       		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.PlayerSkillTree.SkillTreeTierStateData
// 0x0010
struct FSkillTreeTierStateData
{
	class USkillTreeBranchDefinition*                  ParentBranchDefinition;                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TierNumber;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                PointsSpentInTier;                                		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsUnlocked : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct WillowGame.PlayerSkillTree.SkillTreeBranchStateData
// 0x0010
struct FSkillTreeBranchStateData
{
	class USkillTreeBranchDefinition*                  BranchDefinition;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                PointsSpentInBranch;                              		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                MaxPointsForBranch;                               		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsUnlocked : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct WillowGame.DamageOverTimeManager.SourceObjectData
// 0x0068
struct FSourceObjectData
{
	int                                                UniqueId;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class UObject*                                     SourceObject;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     SourceLocation;                                   		// 0x0008 (0x000C) [0x0000000000000000]              
	class AController*                                 InstigatedByController;                           		// 0x0014 (0x0004) [0x0000000000000000]              
	class UIDamageBehavior*                            DamageContext;                                    		// 0x0018 (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x001C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	float                                              StartDamageTime;                                  		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              TimeElapsedSinceLastDamage;                       		// 0x0024 (0x0004) [0x0000000000000000]              
	class UExplosionDefinition*                        ExplosionDef;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                ExplosionScaleIndex;                              		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              InitialDamageRadius;                              		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              Damage;                                           		// 0x0034 (0x0004) [0x0000000000000000]              
	unsigned long                                      bFullDamage : 1;                                  		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Momentum;                                         		// 0x003C (0x0004) [0x0000000000000000]              
	class UClass*                                      DamageSource;                                     		// 0x0040 (0x0004) [0x0000000000000000]              
	class UDamageTypeDefinition*                       DamageTypeDef;                                    		// 0x0044 (0x0004) [0x0000000000000000]              
	class UImpactDefinition*                           ImpactDefinition;                                 		// 0x0048 (0x0004) [0x0000000000000000]              
	unsigned long                                      bCanDamageFriendlies : 1;                         		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	class UIDamageCauser*                              DamageCauser;                                     		// 0x0050 (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0054 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned long                                      bSkipTraceTest : 1;                               		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	class UObject*                                     HitObject;                                        		// 0x005C (0x0004) [0x0000000000000000]              
	float                                              BarrelSourceTime;                                 		// 0x0060 (0x0004) [0x0000000000000000]              
	float                                              PlantSourceTime;                                  		// 0x0064 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.DamageOverTimeManager.DamageOnlyOnceData
// 0x0008
struct FDamageOnlyOnceData
{
	int                                                UniqueId;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class AActor*                                      HurtActor;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.DamageTypeAttributeValueResolver.DamageTypeSelectorData
// 0x0018
struct FDamageTypeSelectorData
{
	struct FName                                       AssociatedDamageTypeName;                         		// 0x0000 (0x0008) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	struct FAttributeInitializationData                ValueIfMatched;                                   		// 0x0008 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.DefinitionGlobalsDefinition.DefinitionIconDatum
// 0x000C
struct FDefinitionIconDatum
{
	struct FColor                                      DefColor;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  DefIcon;                                          		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      DefClass;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.WillowAIPawn.DamageLocationData
// 0x0010
struct FDamageLocationData
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowAIPawn.RagdollDeathImpulseStruct
// 0x0024
struct FRagdollDeathImpulseStruct
{
	struct FVector                                     Impulse;                                          		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Offset;                                           		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       BoneName;                                         		// 0x0018 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      VelocityRatherThanForce : 1;                      		// 0x0020 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      TransformImpulseByVelocityDirection : 1;          		// 0x0020 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct WillowGame.WillowAIPawn.StaggerStateData
// 0x0030
struct FStaggerStateData
{
	unsigned long                                      bIsStaggered : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsUnstaggering : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bForced : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned char                                      State;                                            		// 0x0004 (0x0001) [0x0000000000000000]              
	float                                              StaggerStartTime;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              StaggerEndTime;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              StaggerEndRagdollTime;                            		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              StaggerRecoveryStartTime;                         		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              NextUnstaggerCheckTime;                           		// 0x0018 (0x0004) [0x0000000000000000]              
	class UPhysicalMaterial*                           PreviousOverridePhysicalMaterial;                 		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned char                                      PreviousCollisionChannel;                         		// 0x0020 (0x0001) [0x0000000000000000]              
	class UPrimitiveComponent*                         PreviousCollisionComponent;                       		// 0x0024 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class APawn*                                       StaggerInstigator;                                		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                RestaggeredCount;                                 		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.StaggerDefinition.StaggeredRecoveryRotationData
// 0x0009
struct FStaggeredRecoveryRotationData
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      BoneAxis;                                         		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.DeployableTurretActor.TurretEffect
// 0x002C
struct FTurretEffect
{
	struct FName                                       EffectStartTag;                                   		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       EffectEndTag;                                     		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             EffectTemplate;                                   		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       EffectSocket;                                     		// 0x0014 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystemComponent*                    EffectRef;                                        		// 0x001C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAkEvent*                                    EffectAudioStartAkEvent;                          		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAkEvent*                                    EffectAudioStopAkEvent;                           		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bShutOffOnDeath : 1;                              		// 0x0028 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct WillowGame.DeployableTurretActor.TurretDamageEffectData
// 0x0018
struct FTurretDamageEffectData
{
	float                                              DamageThreshold;                                  		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       DamageStartTagName;                               		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       DamageEndTagName;                                 		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      EffectActive : 1;                                 		// 0x0014 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
};

// ScriptStruct WillowGame.DeveloperPerksDefinition.DeveloperData
// 0x002C
struct FDeveloperData
{
	struct FString                                     Gamertag;                                         		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     UniqueId;                                         		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      Platform;                                         		// 0x0018 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	TArray< unsigned char >                            UnlocksGamerpics;                                 		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bEligibleForGearboxCustomizations : 1;            		// 0x0028 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct WillowGame.DeveloperPerksDefinition.PerkData
// 0x001C
struct FPerkData
{
	TArray< struct FName >                             ButtonChain;                                      		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Command;                                          		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bMustBeDeveloper : 1;                             		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct WillowGame.DLCLegacyPlayerClassIdentifierDefinition.LegacyCustomizationItemData
// 0x0014
struct FLegacyCustomizationItemData
{
	struct FString                                     ItemPoolDefPath;                                  		// 0x0000 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	int                                                ItemPoolKey;                                      		// 0x000C (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	class UItemPoolDefinition*                         CustomizationItemPool;                            		// 0x0010 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
};

// ScriptStruct WillowGame.DownloadableExpansionDefinition.DlcLevelTravelPair
// 0x0008
struct FDlcLevelTravelPair
{
	class ULevelTravelStationDefinition*               NonDlcStationDef;                                 		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ULevelTravelStationDefinition*               DlcStationDef;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.DrunkenWaveComponent.DrunkenWaveFormData
// 0x0018
struct FDrunkenWaveFormData
{
	struct FVector2D                                   WaveFreq;                                         		// 0x0000 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector2D                                   WaveAmp;                                          		// 0x0008 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector2D                                   WavePhase;                                        		// 0x0010 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.EffectCollectionDefinition.ConditionalParticleEffectData
// 0x0008
struct FConditionalParticleEffectData
{
	class UExpressionEvaluator*                        Expression;                                       		// 0x0000 (0x0004) [0x0000000004000003]              ( CPF_Edit | CPF_Const | CPF_EditInline )
	class UParticleSystem*                             ParticleEffect;                                   		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.ExplosionCollectionDefinition.ConditionalExplosionData
// 0x0008
struct FConditionalExplosionData
{
	class UExpressionEvaluator*                        Expression;                                       		// 0x0000 (0x0004) [0x0000000004000003]              ( CPF_Edit | CPF_Const | CPF_EditInline )
	class UExplosionDefinition*                        Explosion;                                        		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.ExplosionDefinition.ExplosionScaleData
// 0x003C
struct FExplosionScaleData
{
	class UParticleSystem*                             ExplosionPSTemplate;                              		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                MinRadius;                                        		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                MaxRadius;                                        		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              MinParticleScale;                                 		// 0x000C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              MaxParticleScale;                                 		// 0x0010 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UAkEvent*                                    ExplosionAkEvent;                                 		// 0x0014 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UCameraAnim*                                 CameraAnim;                                       		// 0x0018 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              MinCameraEffectDistance;                          		// 0x001C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              MaxCameraEffectDistance;                          		// 0x0020 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UForceFeedbackWaveform*                      FFWaveform;                                       		// 0x0024 (0x0004) [0x0000000004000003]              ( CPF_Edit | CPF_Const | CPF_EditInline )
	class UWillowExplosionImpactDefinition*            ImpactEffect;                                     		// 0x0028 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      bDamageOverPeriodOfTime : 1;                      		// 0x002C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              MaxDamageDuration;                                		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageInterval;                                   		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bDamageEachTargetOnlyOnce : 1;                    		// 0x0038 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bExpandRadiusOverTime : 1;                        		// 0x0038 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct WillowGame.ExplosionDefinition.RecentExplosion
// 0x0018
struct FRecentExplosion
{
	struct FName                                       ExplosionInstigatorName;                          		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector                                     ExplosionLocation;                                		// 0x0008 (0x000C) [0x0000000000000000]              
	float                                              ExpirationTime;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.InteractiveObjectBalanceDefinition.LootAttachmentData
// 0x001C
struct FLootAttachmentData
{
	class UItemPoolDefinition*                         ItemPool;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FAttributeInitializationData                PoolProbability;                                  		// 0x0004 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AttachmentPointName;                              		// 0x0014 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.InteractiveObjectBalanceDefinition.LootConfigurationData
// 0x0028
struct FLootConfigurationData
{
	struct FName                                       ConfigurationName;                                		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UAttributeInitializationDefinition*          LootGameStageVarianceFormula;                     		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                Weight;                                           		// 0x000C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FLootAttachmentData >               ItemAttachments;                                  		// 0x001C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.WillowInteractiveObject.InteractiveObjectReplicatedStateData
// 0x001C
struct FInteractiveObjectReplicatedStateData
{
	struct FReplicatedBehaviorConsumerState            ReplicatedBehaviorConsumerState;                  		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FReplicatedInstanceDataState                ReplicatedInstanceDataState;                      		// 0x000C (0x0010) [0x0000000000000000]              
};

// ScriptStruct WillowGame.InteractiveObjectBalanceDefinition.InteractiveObjectGradeModifierData
// 0x0038
struct FInteractiveObjectGradeModifierData
{
	class UInteractiveObjectDefinition*                CustomInteractiveObject;                          		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FString                                     DisplayName;                                      		// 0x0004 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FAttributeInitializationData                ExpLevel;                                         		// 0x0010 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< class UInteractiveObjectLootListDefinition* > IncludedCustomLootLists;                          		// 0x0020 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< struct FLootConfigurationData >            CustomLoot;                                       		// 0x002C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.InteractiveObjectBalanceDefinition.InteractiveObjectGameStageGradeWeightData
// 0x0038(0x0060 - 0x0028)
struct FInteractiveObjectGameStageGradeWeightData : FGameStageGradeWeightData
{
	struct FInteractiveObjectGradeModifierData         GradeModifiers;                                   		// 0x0028 (0x0038) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.FiringModeDefinition.BulletImpactEventData
// 0x0014
struct FBulletImpactEventData
{
	unsigned char                                      DamageSurfaceType;                                		// 0x0000 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      bDisableRegularBulletDamage : 1;                  		// 0x0004 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	TArray< class UBehaviorBase* >                     Behaviors;                                        		// 0x0008 (0x000C) [0x0000000004400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct WillowGame.FiringModeDefinition.BulletEventResponse
// 0x0028
struct FBulletEventResponse
{
	int                                                SplitNum;                                         		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              SplitAngle;                                       		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              SplitAngleOffset;                                 		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              SplitDistance;                                    		// 0x000C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UFiringModeDefinition*                       SplitFire;                                        		// 0x0010 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              NewSpeed;                                         		// 0x0014 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      bDetonate : 1;                                    		// 0x0018 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      bRespawnTracer : 1;                               		// 0x0018 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	unsigned long                                      bUpdateBeamSourceLocation : 1;                    		// 0x0018 (0x0004) [0x0000000000000003] [0x00000004] ( CPF_Edit | CPF_Const )
	TArray< class UBehaviorBase* >                     Behaviors;                                        		// 0x001C (0x000C) [0x0000000004400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct WillowGame.FiringModeDefinition.BulletTimerEvent
// 0x002C
struct FBulletTimerEvent
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FBulletEventResponse                        Response;                                         		// 0x0004 (0x0028) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.FiringModeDefinition.WaveMotionData
// 0x0028
struct FWaveMotionData
{
	unsigned long                                      bUseCustomWaveMotion : 1;                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FVector                                     WaveFreq;                                         		// 0x0004 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     WaveAmp;                                          		// 0x0010 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     WavePhase;                                        		// 0x001C (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.FiringModeDefinition.FiringPatternLine
// 0x0044
struct FFiringPatternLine
{
	struct FRotator                                    StartPoint;                                       		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    EndPoint;                                         		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseStartPointOnly : 1;                           		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FWaveMotionData                             CustomWaveMotion;                                 		// 0x001C (0x0028) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.WillowGameReplicationInfo.ActiveAreaWaypointData
// 0x0014
struct FActiveAreaWaypointData
{
	struct FVector                                     WaypointLocation;                                 		// 0x0000 (0x000C) [0x0000000000000000]              
	int                                                WaypointRadius;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	class UMissionObjectiveDefinition*                 WaypointObjective;                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowGameReplicationInfo.ActiveWaypointData
// 0x0018
struct FActiveWaypointData
{
	struct FVector                                     WaypointLocation;                                 		// 0x0000 (0x000C) [0x0000000000000000]              
	class AActor*                                      WaypointActor;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	class UMissionObjectiveDefinition*                 WaypointObjective;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bCanTransition : 1;                               		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct WillowGame.WillowGameInfo.ColiseumStat
// 0x0008
struct FColiseumStat
{
	unsigned char                                      StatType;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                StatValue;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowGameInfo.ColiseumPlayerInfo
// 0x0010
struct FColiseumPlayerInfo
{
	class AWillowPlayerController*                     WPC;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FColiseumStat >                     Stats;                                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.WillowGameInfo.AreaWaypointData
// 0x000C
struct FAreaWaypointData
{
	class AActor*                                      WaypointActor;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                WaypointRadius;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	class UMissionObjectiveDefinition*                 WaypointObjective;                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowGameInfo.WaypointActorData
// 0x0014
struct FWaypointActorData
{
	class AActor*                                      WaypointActor;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	class UMissionObjectiveDefinition*                 WaypointObjective;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< class UWaypointComponent* >                Waypoints;                                        		// 0x0008 (0x000C) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct WillowGame.FrontendGFxMovie.MessageOfTheDay
// 0x001C
struct FMessageOfTheDay
{
	struct FString                                     Header;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Body;                                             		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                DisplayTime;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowScrollingList.DataProviderInfo
// 0x000C
struct FDataProviderInfo
{
	class UIWillowScrollingListDataProvider*           DataProvider;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0004 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	int                                                SelectedIndex;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.GameBalanceDefinition.MissionStateBalanceAdjustment
// 0x0034
struct FMissionStateBalanceAdjustment
{
	class UMissionDefinition*                          Mission;                                          		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                MinGameStage;                                     		// 0x0004 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                MaxGameStage;                                     		// 0x0014 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                AwesomeLevel;                                     		// 0x0024 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.GameBalanceDefinition.RegionBalanceData
// 0x0054
struct FRegionBalanceData
{
	class URegionDefinition*                           Region;                                           		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                MinDefaultGameStage;                              		// 0x0004 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                MaxDefaultGameStage;                              		// 0x0014 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                DefaultAwesomeLevel;                              		// 0x0024 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      bSpecifyBoostAbovePlayer : 1;                     		// 0x0034 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                GameStageIncreaseAbovePlayer;                     		// 0x0038 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< struct FMissionStateBalanceAdjustment >    MissionOverrides;                                 		// 0x0048 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.GFxTextListContent.FlashTextEntry
// 0x0020
struct FFlashTextEntry
{
	struct FString                                     TextEntry;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     IconFrameLabel;                                   		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      ArrayType;                                        		// 0x0018 (0x0001) [0x0000000000000000]              
	class UObject*                                     Obj;                                              		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.GrenadeModDefinition.GrenadeModBehaviorSequenceStateData
// 0x000C
struct FGrenadeModBehaviorSequenceStateData
{
	unsigned char                                      Action;                                           		// 0x0000 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       SequenceName;                                     		// 0x0004 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.GrenadeModPartDefinition.GrenadeModPartBehaviorSequenceStateData
// 0x000C
struct FGrenadeModPartBehaviorSequenceStateData
{
	unsigned char                                      Action;                                           		// 0x0000 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       SequenceName;                                     		// 0x0004 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.HitRegionHelper.HitRegionDamage
// 0x0028
struct FHitRegionDamage
{
	class UBodyHitRegionDefinition*                    BodyHitRegion;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              RecentDamage;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHasGored : 1;                                    		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< float >                                    LastPctHealthForRunDamageTriggeredBehaviors;      		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    LastPctHealthForRunHealingTriggeredBehaviors;     		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.HUDWidget_Minimap.MinimapIconClip
// 0x0010
struct FMinimapIconClip
{
	class UGFxObject*                                  Object;                                           		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bVisible : 1;                                     		// 0x0004 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	struct FVector2D                                   MapPos;                                           		// 0x0008 (0x0008) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct WillowGame.HUDWidget_Minimap.MinimapObjectiveIconClip
// 0x000C(0x001C - 0x0010)
struct FMinimapObjectiveIconClip : FMinimapIconClip
{
	class UGFxObject*                                  OptionalClip;                                     		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UGFxObject*                                  AboveClip;                                        		// 0x0014 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UGFxObject*                                  BelowClip;                                        		// 0x0018 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct WillowGame.PlayerSaveGame.UnloadableDlcEchoCallData
// 0x0010
struct FUnloadableDlcEchoCallData
{
	struct FString                                     CallDefName;                                      		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                DlcPackageId;                                     		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.HUDWidget_Missions.MissionWidgetMessage
// 0x0024
struct FMissionWidgetMessage
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned char                                      Category;                                         		// 0x0001 (0x0001) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	class UMissionDefinition*                          MissDef;                                          		// 0x0004 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	class UMissionObjectiveDefinition*                 ObjDef;                                           		// 0x0008 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned long                                      bBranch : 1;                                      		// 0x000C (0x0004) [0x0000000000002001] [0x00000001] ( CPF_Edit | CPF_Transient )
	int                                                Slot;                                             		// 0x0010 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	int                                                SwapFromSlot;                                     		// 0x0014 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned long                                      bSkipAnim : 1;                                    		// 0x0018 (0x0004) [0x0000000000002001] [0x00000001] ( CPF_Edit | CPF_Transient )
	int                                                ModuleNum;                                        		// 0x001C (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              EventTime;                                        		// 0x0020 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
};

// ScriptStruct WillowGame.HUDWidget_WorldSpace.WorldSpaceIcon
// 0x0018
struct FWorldSpaceIcon
{
	class UGFxObject*                                  IconClip;                                         		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UGFxObject*                                  ArrowClip;                                        		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bOccluded : 1;                                    		// 0x0008 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	float                                              NextOcclusionTestTime;                            		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CachedTextboxWidth;                               		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CachedTextboxHeight;                              		// 0x0014 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct WillowGame.HUDWidget_WorldSpace.ObjectiveIcon
// 0x002C(0x0044 - 0x0018)
struct FObjectiveIcon : FWorldSpaceIcon
{
	unsigned long                                      bInWorldSpace : 1;                                		// 0x0018 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	float                                              TransitionStartTime;                              		// 0x001C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     LastLocation;                                     		// 0x0020 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              FadeAlpha;                                        		// 0x002C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              FadeScale;                                        		// 0x0030 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UGFxObject*                                  ObjectiveClip;                                    		// 0x0034 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UGFxObject*                                  AboveClip;                                        		// 0x0038 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UGFxObject*                                  BelowClip;                                        		// 0x003C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UGFxObject*                                  OptionalClip;                                     		// 0x0040 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct WillowGame.HUDWidget_WorldSpace.PlayerIcon
// 0x0008(0x0020 - 0x0018)
struct FPlayerIcon : FWorldSpaceIcon
{
	class UGFxObject*                                  TextClip;                                         		// 0x0018 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UGFxObject*                                  StateClip;                                        		// 0x001C (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct WillowGame.HUDWidget_WorldSpace.WorldSpacePlayerInfo
// 0x0008
struct FWorldSpacePlayerInfo
{
	class AWillowPlayerReplicationInfo*                WPRI;                                             		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class AWillowPlayerPawn*                           WPP;                                              		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct WillowGame.IDesignerAttributeProvider.DesignerAttributeDefaultValueData
// 0x0014
struct FDesignerAttributeDefaultValueData
{
	class UDesignerAttributeDefinition*                DesignerAttribute;                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FAttributeInitializationData                BaseValue;                                        		// 0x0004 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.InventoryCardGFx.TopStatData
// 0x0034
struct FTopStatData
{
	struct FString                                     LabelText;                                        		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ValueText;                                        		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     AuxText;                                          		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      Arrow;                                            		// 0x0024 (0x0001) [0x0000000000000000]              
	struct FString                                     IconName;                                         		// 0x0028 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.InputDeviceDefinition.InputDeviceAxisData
// 0x0038
struct FInputDeviceAxisData
{
	struct FName                                       AxisName;                                         		// 0x0000 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      AxisParameter;                                    		// 0x0008 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              DeadZone;                                         		// 0x000C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              Speed;                                            		// 0x0010 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              AbsoluteAxis;                                     		// 0x0014 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                InvertMultiplier;                                 		// 0x0018 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       ActionName;                                       		// 0x001C (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FString                                     Caption;                                          		// 0x0024 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FName                                       KeyBindGroup;                                     		// 0x0030 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.InputDeviceDefinition.InputDeviceButtonData
// 0x0040
struct FInputDeviceButtonData
{
	struct FName                                       KeyName;                                          		// 0x0000 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< class UInputActionDefinition* >            PressActions;                                     		// 0x0008 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< class UInputActionDefinition* >            TapActions;                                       		// 0x0014 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< class UInputActionDefinition* >            HoldActions;                                      		// 0x0020 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FString                                     Caption;                                          		// 0x002C (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FName                                       KeyBindGroup;                                     		// 0x0038 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.InputDeviceDefinition.LookAxisDefinitionData
// 0x0008
struct FLookAxisDefinitionData
{
	class ULookAxisDefinition*                         Horizontal;                                       		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class ULookAxisDefinition*                         Vertical;                                         		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.InputRemappingDefinition.InputRemappingAxisData
// 0x0024
struct FInputRemappingAxisData
{
	struct FName                                       DefaultAxisName;                                  		// 0x0000 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       RemappedAxisName;                                 		// 0x0008 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      RemappedAxisParameter;                            		// 0x0010 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      bInvertInput : 1;                                 		// 0x0014 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	struct FString                                     Caption;                                          		// 0x0018 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.InputRemappingDefinition.InputRemappingButtonData
// 0x0040
struct FInputRemappingButtonData
{
	struct FName                                       DefaultKeyName;                                   		// 0x0000 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       RemappedKeyName;                                  		// 0x0008 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< class UInputActionDefinition* >            RemappedPressActions;                             		// 0x0010 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< class UInputActionDefinition* >            RemappedTapActions;                               		// 0x001C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< class UInputActionDefinition* >            RemappedHoldActions;                              		// 0x0028 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FString                                     Caption;                                          		// 0x0034 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.InterpTrackBehaviors.BehaviorKeyFrameEventData
// 0x0004(0x000C - 0x0008)
struct FBehaviorKeyFrameEventData : FSpecializedBehaviorEvent
{
	float                                              KeyTime;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.ISimpleAnimPlayer.SimpleAnimStateData
// 0x0004
struct FSimpleAnimStateData
{
	int                                                AnimState;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.LANServerBrowserGFxMovie.ResultEntry
// 0x002C
struct FResultEntry
{
	struct FOnlineGameSearchResult                     Game;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     Name;                                             		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ExpLevel;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                Mission;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                PlayThrough;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                NumPlayers;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                MaxPlayers;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                Ping;                                             		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.LevelDependencyList.PersistentMapDependencies
// 0x003C
struct FPersistentMapDependencies
{
	struct FName                                       PersistentMap;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FName >                             SecondaryMaps;                                    		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             ConnectedPersistents;                             		// 0x0014 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     LevelName;                                        		// 0x0020 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class UGameReleaseDefinition*                      GameReleaseDef;                                   		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< unsigned char >                            DiscoveryAchievements;                            		// 0x0030 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.LiftActionSkill.LiftBodyPair
// 0x0008
struct FLiftBodyPair
{
	class UPopulationBodyTag*                          BodyTag;                                          		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UPhaseLockDefinition*                        PhaseLockDef;                                     		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.LootConfigurationDefinition.LootData
// 0x001C
struct FLootData
{
	struct FAttributeInitializationData                Weight;                                           		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UItemPoolDefinition* >               ItemPools;                                        		// 0x0010 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.ManufacturerAttributeValueResolver.ManufacturerSelectorData
// 0x0018
struct FManufacturerSelectorData
{
	struct FName                                       AssociatedManufacturerName;                       		// 0x0000 (0x0008) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	struct FAttributeInitializationData                ValueIfMatched;                                   		// 0x0008 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.MarketingUnlockInventoryDefinition.UnlockItemData
// 0x001C
struct FUnlockItemData
{
	int                                                GameStage;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UInventoryBalanceDefinition* >       UnlockItems;                                      		// 0x0004 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< class UItemPoolDefinition* >               UnlockItemPools;                                  		// 0x0010 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.MarketplaceGFxMovie.MarketPlaceFilter
// 0x0024
struct FMarketPlaceFilter
{
	struct FString                                     Tag;                                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Caption;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Filter;                                           		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.MatchmakingLobbyGFxMovie.MatchmakingResultEntry
// 0x0024
struct FMatchmakingResultEntry
{
	struct FString                                     MatchTypeIconFrameName;                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     StatusIconFrameName;                              		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.MissionDefinition.RewardData
// 0x004C
struct FRewardData
{
	struct FAttributeInitializationData                ExperienceRewardPercentage;                       		// 0x0000 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      CurrencyRewardType;                               		// 0x0010 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                CreditRewardMultiplier;                           		// 0x0014 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                OtherCurrencyReward;                              		// 0x0024 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< class UInventoryBalanceDefinition* >       RewardItems;                                      		// 0x0034 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< class UItemPoolDefinition* >               RewardItemPools;                                  		// 0x0040 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.MissionDefinition.ObjectiveDependencyData
// 0x0005
struct FObjectiveDependencyData
{
	class UMissionObjectiveDefinition*                 Objective;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Status;                                           		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.MissionObjectiveWaypointComponent.MissionObjectiveWaypointData
// 0x0010
struct FMissionObjectiveWaypointData
{
	class UMissionObjectiveDefinition*                 LinkedObjective;                                  		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UMissionObjectiveSetDefinition* >    ObjectiveSetRestrictions;                         		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.MissionPopulationAspect.MissionItemPoolData
// 0x0010
struct FMissionItemPoolData
{
	unsigned long                                      bItemAlwaysGranted : 1;                           		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class UMissionObjectiveDefinition*                 ItemObjective;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMissionDefinition*                          DirectiveDefinition;                              		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UItemPoolDefinition*                         ItemPool;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.MissionTracker.MissionKickoffData
// 0x000C
struct FMissionKickoffData
{
	class UMissionDefinition*                          Mission;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	class AWillowPlayerController*                     PlayerThatAcceptedMission;                        		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bFromActivation : 1;                              		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct WillowGame.MissionTracker.MinimapIconHelper_Director
// 0x001C
struct FMinimapIconHelper_Director
{
	class UIMissionDirector*                           Director;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0004 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FVector                                     Location;                                         		// 0x0008 (0x000C) [0x0000000000000000]              
	class UMissionDefinition*                          ActionableMissionDefinition;                      		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHasMoreActionableMissions : 1;                   		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bBegins : 1;                                      		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bEnds : 1;                                        		// 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct WillowGame.MissionTracker.ObjectiveUpdateData
// 0x0008
struct FObjectiveUpdateData
{
	class UMissionObjectiveDefinition*                 Objective;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ObjectiveBit;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.MissionTracker.BlockedMissionData
// 0x0010
struct FBlockedMissionData
{
	class UMissionDefinition*                          BlockedMission;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< class UMissionDefinition* >                MissionBlockers;                                  		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.MissionTracker.DefendTargetData
// 0x0008
struct FDefendTargetData
{
	class UMissionObjectiveDefinition*                 Objective;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                PercentHealth;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.MissionTracker.DefendMissionData
// 0x000C
struct FDefendMissionData
{
	class UMissionObjectiveDefinition*                 Objective;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	class UITargetable*                                Target;                                           		// 0x0004 (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0008 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
};

// ScriptStruct WillowGame.MissionTracker.TimedMissionData
// 0x000C
struct FTimedMissionData
{
	class UMissionDefinition*                          Mission;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              SecondsLeft;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bTimerRunning : 1;                                		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct WillowGame.MissionTracker.LevelTransitionData
// 0x000C
struct FLevelTransitionData
{
	struct FName                                       TargetLevel;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	class ALevelTravelStation*                         LevelTransition;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.MissionTracker.MissionWaypointsData
// 0x0010
struct FMissionWaypointsData
{
	class UMissionDefinition*                          Mission;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< class UWaypointComponent* >                Waypoints;                                        		// 0x0004 (0x000C) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct WillowGame.MissionTracker.MissionObserversData
// 0x0010
struct FMissionObserversData
{
	class UMissionDefinition*                          Mission;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< class UIMission* >                         Observers;                                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.MissionTracker.MissionSetData
// 0x0014
struct FMissionSetData
{
	struct FName                                       PackageName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< class UMissionDefinition* >                Missions;                                         		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.WeaponPartListDefinition.PartGradeWeightData
// 0x0013
struct FPartGradeWeightData
{
	class UWeaponPartDefinition*                       Part;                                             		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< struct FManufacturerCustomGradeWeightData > Manufacturers;                                    		// 0x0004 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	unsigned char                                      MinGameStageIndex;                                		// 0x0010 (0x0001) [0x0000000000020002]              ( CPF_Const | CPF_EditConst )
	unsigned char                                      MaxGameStageIndex;                                		// 0x0011 (0x0001) [0x0000000000020002]              ( CPF_Const | CPF_EditConst )
	unsigned char                                      DefaultWeightIndex;                               		// 0x0012 (0x0001) [0x0000000000020002]              ( CPF_Const | CPF_EditConst )
};

// ScriptStruct WillowGame.WeaponPartListCollectionDefinition.WeaponCustomPartTypeData
// 0x0010
struct FWeaponCustomPartTypeData
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	TArray< struct FPartGradeWeightData >              WeightedParts;                                    		// 0x0004 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.NPCLoadBalancer.NPCList
// 0x0014
struct FNPCList
{
	class AWillowMind*                                 Mind;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              LastPathTime;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              PathRequestTime;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bWantsToPath : 1;                                 		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOnPerch : 1;                                     		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bForceStopped : 1;                                		// 0x000C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bIsPathing : 1;                                   		// 0x000C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bCanPath : 1;                                     		// 0x000C (0x0004) [0x0000000000000000] [0x00000010] 
	float                                              Score;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowSystemSettings.SystemOption
// 0x001C
struct FSystemOption
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                ValueCount;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                CurrValue;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           ValueStrings;                                     		// 0x0010 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.PassengerCameraDefinition.CameraLerpKeyFrame
// 0x0024
struct FCameraLerpKeyFrame
{
	float                                              Alpha;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      CameraTargetThisKeyFrame;                         		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      CameraRotationBehavior;                           		// 0x0005 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     BaseCameraPosition;                               		// 0x0008 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              CameraOffset;                                     		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    ForcedCameraRotation;                             		// 0x0018 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.PawnRelevanceUtilityCaching.RelevanceCacheStruct
// 0x0038
struct FRelevanceCacheStruct
{
	struct FName                                       RealViewerName;                                   		// 0x0000 (0x0008) [0x0000000000100000]              
	struct FName                                       ToPawnName;                                       		// 0x0008 (0x0008) [0x0000000000100000]              
	float                                              TimeCached;                                       		// 0x0010 (0x0004) [0x0000000000100000]              
	float                                              NextUpdateTime;                                   		// 0x0014 (0x0004) [0x0000000000100000]              
	unsigned long                                      bIsRelevant : 1;                                  		// 0x0018 (0x0004) [0x0000000000100000] [0x00000001] 
	struct FVector                                     FromLoc;                                          		// 0x001C (0x000C) [0x0000000000100000]              
	struct FVector                                     ToLoc;                                            		// 0x0028 (0x000C) [0x0000000000100000]              
	int                                                RotatingIndex;                                    		// 0x0034 (0x0004) [0x0000000000100000]              
};

// ScriptStruct WillowGame.PawnRelevanceUtilityFixedCost.RelevanceUpdateStruct
// 0x0028
struct FRelevanceUpdateStruct
{
	class APlayerController*                           FromRealViewer;                                   		// 0x0000 (0x0004) [0x0000000000100000]              
	struct FVector                                     SrcLocation;                                      		// 0x0004 (0x000C) [0x0000000000100000]              
	class AWillowPawn*                                 ToPawn;                                           		// 0x0010 (0x0004) [0x0000000000100000]              
	float                                              TimeRequested;                                    		// 0x0014 (0x0004) [0x0000000000100000]              
	unsigned long                                      bRelevant : 1;                                    		// 0x0018 (0x0004) [0x0000000000100000] [0x00000001] 
	unsigned char                                      ShouldRemove;                                     		// 0x001C (0x0001) [0x0000000000100000]              
	unsigned long                                      bIsForcedValue : 1;                               		// 0x0020 (0x0004) [0x0000000000100000] [0x00000001] 
	unsigned long                                      bForceNextCheckTrue : 1;                          		// 0x0020 (0x0004) [0x0000000000100000] [0x00000002] 
	float                                              NextUpdateTime;                                   		// 0x0024 (0x0004) [0x0000000000100000]              
};

// ScriptStruct WillowGame.PawnRelevanceUtilityFixedCost.RelevanceBucketStruct
// 0x0020
struct FRelevanceBucketStruct
{
	int                                                NdxToStartCheckFrom;                              		// 0x0000 (0x0004) [0x0000000000100000]              
	float                                              DistanceSquared;                                  		// 0x0004 (0x0004) [0x0000000000100000]              
	int                                                MinLineChecksPerFrame;                            		// 0x0008 (0x0004) [0x0000000000100000]              
	int                                                MaxLineChecksPerFrame;                            		// 0x000C (0x0004) [0x0000000000100000]              
	int                                                MaxIterationsPerFrame;                            		// 0x0010 (0x0004) [0x0000000000100000]              
	TArray< struct FRelevanceUpdateStruct >            Relevance;                                        		// 0x0014 (0x000C) [0x0000000000502000]              ( CPF_Transient | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.PCContextMenuObject.PCContextMenuItem
// 0x0018
struct FPCContextMenuItem
{
	struct FString                                     Caption;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Action;                                           		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.PlayerActionExpressionEvaluator.EvalActionData
// 0x0005
struct FEvalActionData
{
	unsigned long                                      bIsActive : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      Action;                                           		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.PlayerClassCountAttributeValueResolver.PlayerClassCountOverride
// 0x0008
struct FPlayerClassCountOverride
{
	int                                                Override;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class UPlayerClassIdentifierDefinition*            PlayerClassIdDef;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.PlayerInteractionManager.ActiveInteraction
// 0x0020
struct FActiveInteraction
{
	float                                              TimeLength;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              TimeRemaining;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	class UPlayerInteractionServer*                    InteractionServer;                                		// 0x0008 (0x0004) [0x0000000000000000]              
	TArray< class AWillowPlayerController* >           Players;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class AWillowPlayerController*                     Instigator;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsValid : 1;                                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct WillowGame.PlayerSkillTree.SkillTreeTierLayoutData
// 0x001C
struct FSkillTreeTierLayoutData
{
	class USkillTreeBranchDefinition*                  ParentBranchDefinition;                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TierNumber;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	class USkillTreeBranchDefinition*                  DependencyBranchDefinition;                       		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                DependencyTierNumber;                             		// 0x000C (0x0004) [0x0000000000000000]              
	TArray< class USkillDefinition* >                  Skills;                                           		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.WillowItemTypes.ItemMemento
// 0x0038
struct FItemMemento
{
	struct FInventorySerialNumber                      SerialNumber;                                     		// 0x0000 (0x0034) [0x0000000000000000]              
	unsigned long                                      bEquipped : 1;                                    		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDropOnDeath : 1;                                 		// 0x0034 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bShopsHaveInfiniteQuantity : 1;                   		// 0x0034 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bGrenadeStored : 1;                               		// 0x0034 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct WillowGame.PopulationFactoryWillowAIPawn.PopulatedAIPawnMemento
// 0x0018
struct FPopulatedAIPawnMemento
{
	TArray< struct FWeaponMemento >                    PawnWeapons;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemMemento >                      PawnItems;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.PopulationFactoryInteractiveObject.PopulatedInteractiveObjectMemento
// 0x0006
struct FPopulatedInteractiveObjectMemento
{
	int                                                BehaviorSequenceState;                            		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      bCanBeUsed[ 0x2 ];                                		// 0x0004 (0x0002) [0x0000000000000000]              
};

// ScriptStruct WillowGame.PopulationFactoryVendingMachine.FeaturedItemData
// 0x0038
struct FFeaturedItemData
{
	struct FAttributeInitializationData                CommerceMarkup;                                   		// 0x0000 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       LootConfiguration;                                		// 0x0010 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                GameStageValue;                                   		// 0x0018 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                AwesomeLevelValue;                                		// 0x0028 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.WillowPickup.PickupMemento
// 0x0010
struct FPickupMemento
{
	struct FRotator                                    Rotation;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	unsigned long                                      bIsAttachedToSomething : 1;                       		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct WillowGame.PopulationFactoryWillowInventory.PopulatedPickupMemento
// 0x0088
struct FPopulatedPickupMemento
{
	class UClass*                                      SavedInventoryClass;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FPickupMemento                              PickupMemento;                                    		// 0x0004 (0x0010) [0x0000000000000000]              
	struct FWeaponMemento                              WeaponMemento;                                    		// 0x0014 (0x003C) [0x0000000000000000]              
	struct FItemMemento                                ItemMemento;                                      		// 0x0050 (0x0038) [0x0000000000000000]              
};

// ScriptStruct WillowGame.PopulationFactoryWillowVehicle.VehicleDefaultCrewStruct
// 0x0020
struct FVehicleDefaultCrewStruct
{
	class UPopulationDefinition*                       PopulationDefForRole;                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Role;                                             		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FAttributeInitializationData                ProbabilityOfSpawn;                               		// 0x0008 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      OverrideDefaultSeat : 1;                          		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                PreferredSeat;                                    		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.VehicleBalanceDefinition.VehicleGradeModifierData
// 0x0020
struct FVehicleGradeModifierData
{
	class AWillowVehicle*                              CustomVehicle;                                    		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FString                                     DisplayName;                                      		// 0x0004 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	int                                                ExpLevel;                                         		// 0x0010 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< class UBehaviorBase* >                     OnSpawnCustomizations;                            		// 0x0014 (0x000C) [0x0000000004400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct WillowGame.VehicleBalanceDefinition.VehicleGameStageGradeWeightData
// 0x0020(0x0048 - 0x0028)
struct FVehicleGameStageGradeWeightData : FGameStageGradeWeightData
{
	struct FVehicleGradeModifierData                   GradeModifiers;                                   		// 0x0028 (0x0020) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.PopulationOpportunityDen.PopulationOptionDenSpawnData
// 0x0024
struct FPopulationOptionDenSpawnData
{
	struct FString                                     PopulationDefName;                                		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MaxActiveActors;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                NumTotalActors;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                NumActiveActors;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              NextSpawnTime;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                NumTotalExternalActors;                           		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                NumActiveExternalActors;                          		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.ProjectileDefinition.HomingRadiusThreshold
// 0x0014
struct FHomingRadiusThreshold
{
	float                                              Radius;                                           		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              MaxAngleCos;                                      		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< class UBehaviorBase* >                     Behaviors;                                        		// 0x0008 (0x000C) [0x0000000004400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct WillowGame.ReferenceSet.ObjectReference
// 0x0004
struct FObjectReference
{
	class UObject*                                     Obj;                                              		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.SkillEffectManager.DeferredSkillActivationData
// 0x001C
struct FDeferredSkillActivationData
{
	class AController*                                 SkillInstigator;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	class USkillDefinition*                            Definition;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	class UObject*                                     AdditionalSkillTarget;                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                SkillGrade;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             StateChangeDelegate;                              		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.SkillTreeBranchDefinition.Tier
// 0x0010
struct FTier
{
	TArray< class USkillDefinition* >                  Skills;                                           		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                PointsToUnlockNextTier;                           		// 0x000C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.SkillTreeBranchLayoutDefinition.TierLayout
// 0x000C
struct FTierLayout
{
	TArray< unsigned long >                            bCellIsOccupied;                                  		// 0x0000 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.SkillTreeGFxObject.SkillTreeUICell
// 0x001C
struct FSkillTreeUICell
{
	int                                                BranchNum;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TierNum;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                CellNum;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  Clip_Cell;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  Clip_Highlight;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  Clip_Outline;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  Clip_Overclocked;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.SkillTreeGFxObject.artifact_datum
// 0x0014
struct Fartifact_datum
{
	int                                                SkillIndex;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Grade;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     Name;                                             		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.SpecialMove_PerchRandomLoop.SMPerchRandomPair
// 0x0008
struct FSMPerchRandomPair
{
	float                                              Weight;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USpecialMove_Perch*                          SMD;                                              		// 0x0004 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
};

// ScriptStruct WillowGame.StatusMenuExGFxMovie.CachedInvData
// 0x0009
struct FCachedInvData
{
	class AWillowInventory*                            Inv;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bReadied : 1;                                     		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      TrashOrFavorite;                                  		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct WillowGame.StatusMenuGFxDefinition.DirectionData
// 0x0028
struct FDirectionData
{
	struct FName                                       This;                                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Left;                                             		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Right;                                            		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Up;                                               		// 0x0018 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Down;                                             		// 0x0020 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.StatusMenuMapGFxObject.ClipRect
// 0x0010
struct FClipRect
{
	float                                              Top;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Right;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Bottom;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Left;                                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.StatusMenuMapGFxObject.MapObjectData
// 0x0088
struct FMapObjectData
{
	class AWillowPlayerController*                     Player;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	class AWillowVehicle*                              Vehicle;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	class ALevelLandmark*                              Landmark;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	class AWillowInteractiveObject*                    ClientInteractiveObject;                          		// 0x000C (0x0004) [0x0000000000000000]              
	class AWillowPlayerReplicationInfo*                WPRI;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bWaypoint : 1;                                    		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bAreaWaypoint : 1;                                		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bOptional : 1;                                    		// 0x0014 (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                WaypointIndex;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FVector                                     CustomObjectLoc;                                  		// 0x001C (0x000C) [0x0000000000000000]              
	unsigned long                                      bIsDirty : 1;                                     		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector2D                                   TransformedLocation;                              		// 0x002C (0x0008) [0x0000000000000000]              
	float                                              Angle;                                            		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              Scale;                                            		// 0x0038 (0x0004) [0x0000000000000000]              
	struct FString                                     AS_IconClipPath;                                  		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AS_IconClipFrame;                                 		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AS_IconClipInnerFrame;                            		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AS_IconPath;                                      		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bShowInfoBox : 1;                                 		// 0x006C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     InfoBoxTitle;                                     		// 0x0070 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     InfoBoxDesc;                                      		// 0x007C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.TestMapsListDefinition.TestMapsListDatum
// 0x0018
struct FTestMapsListDatum
{
	unsigned long                                      bUseLoader : 1;                                   		// 0x0000 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	struct FString                                     MapDisplayName;                                   		// 0x0004 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FName                                       MapName;                                          		// 0x0010 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.TextMarkupDictionary.TextMarkupEntry
// 0x003C
struct FTextMarkupEntry
{
	struct FString                                     MarkupTag;                                        		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     HTMLMarkupBeginText;                              		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     HTMLMarkupEndText;                                		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     MarkupBeginTag;                                   		// 0x0024 (0x000C) [0x0000000000502000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     MarkupEndTag;                                     		// 0x0030 (0x000C) [0x0000000000502000]              ( CPF_Transient | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.WeaponTypeDefinition.ConditionalAnimationData
// 0x0014
struct FConditionalAnimationData
{
	class UExpressionEvaluator*                        Expression;                                       		// 0x0000 (0x0004) [0x0000000004000003]              ( CPF_Edit | CPF_Const | CPF_EditInline )
	struct FName                                       AnimationName;                                    		// 0x0004 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UCameraAnim*                                 CameraAnim;                                       		// 0x000C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UAnimSet*                                    AnimSet;                                          		// 0x0010 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.WeaponTypeDefinition.NameExpressionData
// 0x0024
struct FNameExpressionData
{
	TArray< struct FAttributeExpressionData >          Expressions;                                      		// 0x0000 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FString                                     PreModifier;                                      		// 0x000C (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     PostModifier;                                     		// 0x0018 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.VehicleClassDefinition.DamageTypeBySpeedStruct
// 0x0008
struct FDamageTypeBySpeedStruct
{
	float                                              Speed;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UDamageTypeDefinition*                       DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.VehicleClassDefinition.CollisionDamageCalculation
// 0x002C
struct FCollisionDamageCalculation
{
	class UDamageTypeDefinition*                       DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< struct FDamageTypeBySpeedStruct >          DamageTypes;                                      		// 0x0004 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FAttributeInitializationData                Formula;                                          		// 0x0010 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	float                                              MomentumFactor;                                   		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AddZMomentum;                                     		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bApplyReverseMomentum : 1;                        		// 0x0028 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bPercentOfTargetHealth : 1;                       		// 0x0028 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bApplySpeedDamage : 1;                            		// 0x0028 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bApplySpeedMomentum : 1;                          		// 0x0028 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
};

// ScriptStruct WillowGame.VehicleClassDefinition.VStatusEffectResistance
// 0x0020
struct FVStatusEffectResistance
{
	struct FAttributeInitializationData                ChanceResistance;                                 		// 0x0000 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                DurationResistance;                               		// 0x0010 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.VehicleCrewAnimSetLookupTable.VehicleCrewAnimSetMapping
// 0x000C
struct FVehicleCrewAnimSetMapping
{
	struct FName                                       CharacterName;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UAnimSet*                                    TheAnimSet;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.VehicleLifetimeManager.VSSUsageTracking
// 0x000C
struct FVSSUsageTracking
{
	class AVehicleSpawnStationTerminal*                TheTerminal;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       ThePlayerName;                                    		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WeaponAmmoResourceAttributeValueResolver.WeaponAmmoResourceSelectorData
// 0x0018
struct FWeaponAmmoResourceSelectorData
{
	struct FName                                       AssociatedResourceName;                           		// 0x0000 (0x0008) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	struct FAttributeInitializationData                ValueIfMatched;                                   		// 0x0008 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.WeaponScopeGFxDefinition.LabelToLinkageMapping
// 0x0018
struct FLabelToLinkageMapping
{
	struct FString                                     LabelName;                                        		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     LinkageName;                                      		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.WeaponStatusEffectAttributePresentationDefinition.AttributePresentationDamageTypeMapping
// 0x0008
struct FAttributePresentationDamageTypeMapping
{
	class UAttributePresentationDefinition*            Presentation;                                     		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UDamageTypeDefinition*                       DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.WeaponTypeAttributeValueResolver.WeaponTypeSelectorData
// 0x0014
struct FWeaponTypeSelectorData
{
	unsigned char                                      WeaponType;                                       		// 0x0000 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAttributeInitializationData                ValueIfMatched;                                   		// 0x0004 (0x0010) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.WillowAnimNode_AimState.AimAnimTransitionData
// 0x0018
struct FAimAnimTransitionData
{
	unsigned char                                      FromState;                                        		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ToState;                                          		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimName;                                         		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendInTime;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendOutTime;                                     		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bPlayInReverse : 1;                               		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct WillowGame.WillowAnimNode_Prism.BoneRotateData
// 0x0010
struct FBoneRotateData
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    Rotation;                                         		// 0x0004 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.WillowAnimNode_Prism.AnimDeltaDataList
// 0x000C
struct FAnimDeltaDataList
{
	TArray< int >                                      IndexList;                                        		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.WillowAnimNode_Prism.AnimSwapData
// 0x0008
struct FAnimSwapData
{
	int                                                Index1;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Index2;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.WillowAnimNode_Prism.PrismDataContainer
// 0x0054
struct FPrismDataContainer
{
	TArray< struct FBoneRotateData >                   RotateBoneTranslation;                            		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FBoneRotateData >                   RotateBone;                                       		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FBoneRotateData >                   RotateRefBone;                                    		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FAnimDeltaDataList >                AnimDeltaList;                                    		// 0x0024 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FAnimDeltaDataList >                AnimDeltaRefList;                                 		// 0x0030 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FAnimSwapData >                     SwapList;                                         		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FRotator                                    RotateRootMotion;                                 		// 0x0048 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.WillowAnimNodeFeatherBlend.FeatherBoneBlendTarget
// 0x000C
struct FFeatherBoneBlendTarget
{
	struct FName                                       StartBoneName;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendWeight;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.WillowItemTypes.ReplicatedInventoryCardData
// 0x0008
struct FReplicatedInventoryCardData
{
	float                                              ModifierValue;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ModifierStatIndex;                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowItem.UIStatModifierData
// 0x0029
struct FUIStatModifierData
{
	class UAttributePresentationDefinition*            AttributePresentation;                            		// 0x0000 (0x0004) [0x0000000000000000]              
	class UAttributePresentationDefinition*            ConstraintAttributePresentation;                  		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      AttributeStyle;                                   		// 0x0008 (0x0001) [0x0000000000000000]              
	float                                              ModifierTotal;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              CompareModifierTotal;                             		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                DefinitionIndex;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
	class UAttributePresentationDefinition*            SupplementalAttributePresentation;                		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned char                                      SupplementalAttributeStyle;                       		// 0x001C (0x0001) [0x0000000000000000]              
	float                                              SupplementalModifierTotal;                        		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUseSupplementalModifier : 1;                     		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      StatCombinationMethod;                            		// 0x0028 (0x0001) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowAutoAimStrategyDefinition.ProfileDefinition
// 0x0008
struct FProfileDefinition
{
	unsigned char                                      Profile;                                          		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class UWillowAutoAimProfileDefinition*             Definition;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.WillowAutoAimStrategy.LockOnProfile
// 0x0024
struct FLockOnProfile
{
	class UITargetable*                                Target;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0004 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FVector                                     Intersection;                                     		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FVector                                     MagneticCenterToIntersect;                        		// 0x0014 (0x000C) [0x0000000000000000]              
	unsigned long                                      bWithinWorldSpaceRadius : 1;                      		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct WillowGame.WillowAutoAimStrategy.ViewProfile
// 0x0070
struct FViewProfile
{
	class AWillowPlayerController*                     InPlayer;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     ViewNormal;                                       		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     ViewLocation;                                     		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FRotator                                    ViewRotation;                                     		// 0x001C (0x000C) [0x0000000000000000]              
	float                                              ViewNormalDotViewNormal;                          		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x002C (0x0004) MISSED OFFSET
	struct FMatrix                                     ViewMatrix;                                       		// 0x0030 (0x0040) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowCheatManager.BalanceMeResourceUpgradePath
// 0x0018
struct FBalanceMeResourceUpgradePath
{
	struct FString                                     ResourceName;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      PlayerLevelForEachUpgrade;                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.WillowCheatManager.StatusEffectNameMapping
// 0x0018
struct FStatusEffectNameMapping
{
	struct FString                                     StatusEffectName;                                 		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     StatusEffectDefinitionName;                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.WillowClanDefinition.ClanMaterialData
// 0x0008
struct FClanMaterialData
{
	class UMaterialInstance*                           SourceMaterial;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstance*                           ReplacementMaterial;                              		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.WillowClanDefinition.ClanSwitchData
// 0x000C
struct FClanSwitchData
{
	struct FName                                       SwitchName;                                       		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                SwitchValue;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.WillowCustomizationManager.PendingCustomization
// 0x0010
struct FPendingCustomization
{
	class UCustomizationDefinition*                    Definition;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< class UICustomizable* >                    Targets;                                          		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.WillowCustomizationManager.ProductCustomizationInfo
// 0x000C
struct FProductCustomizationInfo
{
	int                                                ProductID;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                NumUnlockableCustomizations;                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                NumCustomizations;                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowCustomizationManager.CustomizationSizeMapping
// 0x0008
struct FCustomizationSizeMapping
{
	int                                                ProductID;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                NumCustomizations;                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowDialogManager.QueuedPersonalEchoLog
// 0x0008
struct FQueuedPersonalEchoLog
{
	class UWillowDialogEventTag*                       Event;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	class UGearboxDialogGroup*                         Group;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowDialogNameTag.ScaleformPortraitData
// 0x0010
struct FScaleformPortraitData
{
	struct FString                                     ScaleformName;                                    		// 0x0000 (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	class USwfMovie*                                   PortraitMovie;                                    		// 0x000C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.WillowDialogNameTag.VideoPortraitData
// 0x0004
struct FVideoPortraitData
{
	class UTextureMovie*                               VideoMovie;                                       		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.WillowDialogNameTag.EchoPortraitInfo
// 0x0018
struct FEchoPortraitInfo
{
	unsigned char                                      PortraitType;                                     		// 0x0000 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FScaleformPortraitData                      ScaleformPortrait;                                		// 0x0004 (0x0010) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FVideoPortraitData                          VideoPortrait;                                    		// 0x0014 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.WillowDialogNameTag.EmotePortraitInfo
// 0x001C
struct FEmotePortraitInfo
{
	class UWillowDialogEmoteDefinition*                Emote;                                            		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FEchoPortraitInfo                           EmotePortrait;                                    		// 0x0004 (0x0018) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.WillowDialogNameTag.EmoteStance
// 0x0008
struct FEmoteStance
{
	class UWillowDialogEmoteDefinition*                Emote;                                            		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class USpecialMoveDefinition*                      StanceSpecialMove;                                		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.WillowDynamicNavMeshConnectionPoint.DynamicNavMeshConnection
// 0x0008
struct FDynamicNavMeshConnection
{
	float                                              MaxConnectionDistance;                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AWillowDynamicNavMeshConnectionPoint*        ConnectedPoint;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.WillowEffectCoordinator.CoordinatedEffectIndices
// 0x0008
struct FCoordinatedEffectIndices
{
	int                                                StartingIndex;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                EndingIndex;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowEffectCoordinator.CoordinatedEffectThread
// 0x0050
struct FCoordinatedEffectThread
{
	class UCoordinatedEffectDefinition*                EffectDefinition;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       IgnoreInstanceData;                               		// 0x0004 (0x0008) [0x0000000000000000]              
	float                                              LatentFloat;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              TargetFloat;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              ParticleSpeedMultiplier;                          		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FCoordinatedEffectIndices                   CriticalParticleEffects;                          		// 0x0018 (0x0008) [0x0000000000000000]              
	struct FCoordinatedEffectIndices                   ParticleEffects;                                  		// 0x0020 (0x0008) [0x0000000000000000]              
	struct FCoordinatedEffectIndices                   AudioEffects;                                     		// 0x0028 (0x0008) [0x0000000000000000]              
	struct FCoordinatedEffectIndices                   HiddenParticles;                                  		// 0x0030 (0x0008) [0x0000000000000000]              
	class AActor*                                      EffectOwner;                                      		// 0x0038 (0x0004) [0x0000000000000000]              
	unsigned char                                      EffectID;                                         		// 0x003C (0x0001) [0x0000000000000000]              
	unsigned long                                      bHideInstanceDataParticles : 1;                   		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPendingDelete : 1;                               		// 0x0040 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FScriptDelegate                             EffectCompleteDelegate;                           		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.WillowEffectCoordinator.CoordinatedEffectProcess
// 0x0012
struct FCoordinatedEffectProcess
{
	class UObject*                                     Target;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FCoordinatedEffectThread >          Threads;                                          		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      Player0MatIndex;                                  		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned char                                      Player1MatIndex;                                  		// 0x0011 (0x0001) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowReplicatedEmitter.FloatParameter
// 0x000C
struct FFloatParameter
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              Value;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowReplicatedEmitter.VectorParameter
// 0x0014
struct FVectorParameter
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector                                     Value;                                            		// 0x0008 (0x000C) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowReplicatedEmitter.ColorParameter
// 0x000C
struct FColorParameter
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FColor                                      Value;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowReplicatedEmitter.EmitterTemplateOptions
// 0x000C
struct FEmitterTemplateOptions
{
	class UParticleSystem*                             DefaultTemplate;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             CensoredTemplateAlternative;                      		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bEffectEligibleForCensoring : 1;                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct WillowGame.WillowExplosionImpactDefinition.DecalData
// 0x0020
struct FDecalData
{
	TArray< class UMaterialInterface* >                Materials;                                        		// 0x0000 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	float                                              Width;                                            		// 0x000C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              Height;                                           		// 0x0010 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              MinScale;                                         		// 0x0014 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              MaxScale;                                         		// 0x0018 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      RandomRotation : 1;                               		// 0x001C (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      CreateNewMaterialInstanceConstant : 1;            		// 0x001C (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.WillowGameViewportClient.GamepadState
// 0x0004
struct FGamepadState
{
	unsigned long                                      bConnected : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct WillowGame.WillowGameViewportClient.SubtitleProfile
// 0x0010
struct FSubtitleProfile
{
	float                                              MinX;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              MaxX;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              MinY;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              MaxY;                                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowUIInteraction.tMenuTextPos
// 0x0010
struct FtMenuTextPos
{
	unsigned char                                      TextHAlign;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                TextXPos;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      TextVAlign;                                       		// 0x0008 (0x0001) [0x0000000000000000]              
	int                                                TextYPos;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowUIInteraction.ColumnLayoutData
// 0x0015
struct FColumnLayoutData
{
	unsigned char                                      HeaderHAlign;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     Header;                                           		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	float                                              Width;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned char                                      DataHAlign;                                       		// 0x0014 (0x0001) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowUIInteraction.tMenuLayout
// 0x0078
struct FtMenuLayout
{
	class UTexture2D*                                  Background;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                BackgroundXPos;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                BackgroundYPos;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                BackgroundXL;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                BackgroundYL;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDrawOutlineToShowInputFocus : 1;                 		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                ColumnDataYL;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                ItemDetailYL;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	struct FString                                     DescriptionBoxHeader;                             		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      DescriptionBoxHeaderHAlign;                       		// 0x002C (0x0001) [0x0000000000000000]              
	unsigned long                                      bUnderlineDescriptionBoxHeader : 1;               		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                DescriptionBoxXPos;                               		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                DescriptionBoxYPos;                               		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                DescriptionBoxXL;                                 		// 0x003C (0x0004) [0x0000000000000000]              
	struct FtMenuTextPos                               TitlePos;                                         		// 0x0040 (0x0010) [0x0000000000000000]              
	unsigned long                                      bDrawHintSeparatorLine : 1;                       		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FtMenuTextPos                               HintPos;                                          		// 0x0054 (0x0010) [0x0000000000000000]              
	int                                                ColumnPadding;                                    		// 0x0064 (0x0004) [0x0000000000000000]              
	TArray< struct FColumnLayoutData >                 ColumnLayout;                                     		// 0x0068 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class UFont*                                       ColumnDataFont;                                   		// 0x0074 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowGFxColiseumOverlayMovie.PlayerLineInfo
// 0x0020
struct FPlayerLineInfo
{
	unsigned long                                      bUpdatedThisRound : 1;                            		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     Avatar;                                           		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                PlayerID;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                RoundKills;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                TotalKills;                                       		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowGFxDialogBox.DialogBoxButton
// 0x0038
struct FDialogBoxButton
{
	struct FString                                     Caption;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     TipText;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       Tag;                                              		// 0x0018 (0x0008) [0x0000000000000000]              
	TArray< struct FName >                             Keys;                                             		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             OnButtonClicked;                                  		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.WillowGFxDialogBox.DialogBoxLayout
// 0x001C
struct FDialogBoxLayout
{
	struct FName                                       LayoutTag;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       CancelTag;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	TArray< struct FDialogBoxButton >                  Buttons;                                          		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.WillowGFxEditDialog.MenuItemCallback
// 0x0014
struct FMenuItemCallback
{
	struct FName                                       Tag;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FScriptDelegate                             OnClicked;                                        		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.WillowGFxLobbyLoadCharacter.LoadCharacterData
// 0x0070
struct FLoadCharacterData
{
	int                                                SaveDataId;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                CharLevel;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     CharName;                                         		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CharClass;                                        		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PlayThrough;                                      		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ActiveMission;                                    		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PlotMission;                                      		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CharSaveDate;                                     		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CharPlayedTime;                                   		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CharPlayedTimeInt;                                		// 0x005C (0x0004) [0x0000000000000000]              
	struct FGuid                                       SaveGuid;                                         		// 0x0060 (0x0010) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowGFxMenuHelperSaveGame.SaveResult
// 0x00C4
struct FSaveResult
{
	int                                                charID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FPlayerSaveData                             Data;                                             		// 0x0004 (0x00C0) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.WillowGlobals.LoadingMovieExceptionInfo
// 0x0010
struct FLoadingMovieExceptionInfo
{
	struct FName                                       PersistentMapName;                                		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Tag;                                              		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.WillowHUDGFxMovie.AvailableTrackedSkill
// 0x0008
struct FAvailableTrackedSkill
{
	class USkillDefinition*                            SkillDef;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                RemappedSlot;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowHUDGFxMovie.TrackedSkillIconState
// 0x0010
struct FTrackedSkillIconState
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	class USwfMovie*                                   Icon;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                PercentComplete;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                StackCount;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowHUDGFxMovie.HUDInteractionIcon
// 0x0028
struct FHUDInteractionIcon
{
	struct FInteractionIconWithOverrides               Icons[ 0x2 ];                                     		// 0x0000 (0x0028) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowHUDGFxMovie.CriticalTextMessage
// 0x0020
struct FCriticalTextMessage
{
	struct FString                                     Message;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Title;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              DestroyTime;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FColor                                      DrawColor;                                        		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowHUDGFxMovie.CriticalTextMessageArray
// 0x000C
struct FCriticalTextMessageArray
{
	TArray< struct FCriticalTextMessage >              MessageArray;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.WillowPlayerReplicationInfo.TrackedSkillState
// 0x0008
struct FTrackedSkillState
{
	class USkillDefinition*                            SkillDef;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                PackedStackCountAndPercentComplete;               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowPlayerReplicationInfo.ReplicatedStandInGear
// 0x0154
struct FReplicatedStandInGear
{
	struct FWeaponDefinitionData                       Weapon1Data;                                      		// 0x0000 (0x0044) [0x0000000000000000]              
	struct FWeaponDefinitionData                       Weapon2Data;                                      		// 0x0044 (0x0044) [0x0000000000000000]              
	struct FItemDefinitionData                         ShieldData;                                       		// 0x0088 (0x0044) [0x0000000000000000]              
	struct FItemDefinitionData                         GrenadeModData;                                   		// 0x00CC (0x0044) [0x0000000000000000]              
	struct FItemDefinitionData                         ClassModData;                                     		// 0x0110 (0x0044) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowHUDGFxMovieDefinition.ScaledHUDElement
// 0x0010
struct FScaledHUDElement
{
	struct FString                                     ElementName;                                      		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UHUDScalingAnchorDefinition*                 Anchor;                                           		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.WillowInteractiveSwitch.TouchingPawn
// 0x0008
struct FTouchingPawn
{
	class APawn*                                       Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                VolumesTouched;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowProjectile.HitActorData
// 0x0044
struct FHitActorData
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0004 (0x001C) [0x0000000000080000]              ( CPF_Component )
	struct FVector                                     HitLocation;                                      		// 0x0020 (0x000C) [0x0000000000000000]              
	struct FVector                                     HitLocationRelativeToHitActor;                    		// 0x002C (0x000C) [0x0000000000000000]              
	struct FVector                                     HitNormal;                                        		// 0x0038 (0x000C) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowProjectile.HomingTargetedActorInfo
// 0x0008
struct FHomingTargetedActorInfo
{
	class AActor*                                      HomingActor;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                HomingActorCount;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowObstacleUtility.ObstaclePoint
// 0x000C
struct FObstaclePoint
{
	float                                              Value;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   Offset;                                           		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowObstacleUtility.ObstacleSegment
// 0x0018
struct FObstacleSegment
{
	struct FVector2D                                   P1;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   P2;                                               		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   Normal;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowObstacleUtility.VelocityObstacle
// 0x0048
struct FVelocityObstacle
{
	struct FObstacleSegment                            Segments[ 0x3 ];                                  		// 0x0000 (0x0048) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowPauseTicker.PauseTimerData
// 0x0018
struct FPauseTimerData
{
	struct FName                                       FuncName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      bLoop : 1;                                        		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Rate;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              Count;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	class UObject*                                     TimerObj;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowPlayerInput.InputDeviceButtonAddress
// 0x000C
struct FInputDeviceButtonAddress
{
	class UInputDeviceDefinition*                      SourceDevice;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                SourceIndex;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FPointer                                    RemappedButton;                                   		// 0x0008 (0x0004) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct WillowGame.WillowPlayerInput.InputButtonData
// 0x001C
struct FInputButtonData
{
	TArray< struct FInputDeviceButtonAddress >         InputDeviceHandlers;                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       ButtonName;                                       		// 0x000C (0x0008) [0x0000000000000000]              
	unsigned char                                      State;                                            		// 0x0014 (0x0001) [0x0000000000000000]              
	float                                              LastPressedTime;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowPlayerInput.DeviceLookAxisData
// 0x0014
struct FDeviceLookAxisData
{
	class UInputDeviceDefinition*                      SourceDevice;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       LookXAxisName;                                    		// 0x0004 (0x0008) [0x0000000000000000]              
	struct FName                                       LookYAxisName;                                    		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowPlayerInput.KeyRebindingData
// 0x0010
struct FKeyRebindingData
{
	struct FName                                       DefaultKeyName;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       RemappedKeyName;                                  		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowPlayerInput.InputDeviceAxisAddress
// 0x0008
struct FInputDeviceAxisAddress
{
	class UInputDeviceDefinition*                      SourceDevice;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                SourceIndex;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowPlayerInput.AccelStateData
// 0x0010
struct FAccelStateData
{
	unsigned long                                      bIsAccelerating : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Warmup;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              CurrentSpeed;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Direction;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowPlayerInput.InputAxisData
// 0x0028
struct FInputAxisData
{
	struct FName                                       AxisName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FInputDeviceAxisAddress                     InputDeviceHandler;                               		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FPointer                                    ParameterPtr;                                     		// 0x0010 (0x0004) [0x0000000000001000]              ( CPF_Native )
	struct FAccelStateData                             AccelState;                                       		// 0x0014 (0x0010) [0x0000000000000000]              
	unsigned long                                      bIsLookAxis : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsRemappedInverted : 1;                          		// 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct WillowGame.WillowPlayerPawn.SpeedTravelData
// 0x0005
struct FSpeedTravelData
{
	float                                              OriginLeaveTime;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      OriginRegion;                                     		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowPlayerPawn.WeatherSystemEffects
// 0x0008
struct FWeatherSystemEffects
{
	class UParticleSystem*                             WeatherSystemTemplate;                            		// 0x0000 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             ScreenEffectsTemplate;                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowPlayerPawn.AttachmentData
// 0x0025
struct FAttachmentData
{
	class AActor*                                      AttachmentBase;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       AttachmentBaseBoneName;                           		// 0x0004 (0x0008) [0x0000000000000000]              
	struct FVector                                     AttachmentRelativeOffset;                         		// 0x000C (0x000C) [0x0000000000000000]              
	struct FRotator                                    AttachmentRelativeRotation;                       		// 0x0018 (0x000C) [0x0000000000000000]              
	unsigned char                                      AttachmentPhysicsMode;                            		// 0x0024 (0x0001) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowPlayerPawnDataManager.AsyncDataRequest
// 0x002C
struct FAsyncDataRequest
{
	unsigned char                                      RequestType;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     ObjectPath;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UObject*                                     Instigator;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	class AWillowPlayerController*                     PlayerContext;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	class UObject*                                     Payload;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FName                                       CallbackEventName;                                		// 0x001C (0x0008) [0x0000000000000000]              
	int                                                IntParam;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              FloatParam;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowPointLight.LightValues
// 0x0010
struct FLightValues
{
	float                                              StartTime;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Radius;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Brightness;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      LightColor;                                       		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.WillowPopulationMaster.VehicleSpawnStationPooledVehicle
// 0x0008
struct FVehicleSpawnStationPooledVehicle
{
	class AWillowVehicle*                              SpawnedVehicle;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	class UVehicleSpawnStationVehicleDefinition*       SpawnVehicleDef;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowPopulationMaster.VehicleSpawnStationSlot
// 0x0010
struct FVehicleSpawnStationSlot
{
	TArray< struct FVehicleSpawnStationPooledVehicle > PooledVehicles;                                   		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PooledVehicleIndex;                               		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowPopulationMaster.PopOppSummary
// 0x0010
struct FPopOppSummary
{
	struct FString                                     Summary;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Count;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowPopulationPointDefinition.SpawnAnimPair
// 0x0008
struct FSpawnAnimPair
{
	class USpecialMove_Spawned*                        SpawnedAnim;                                      		// 0x0000 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class USpecialMove_PopulationPoint*                PointAnim;                                        		// 0x0004 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
};

// ScriptStruct WillowGame.WillowPopulationPointDefinition.SpawnAnimData
// 0x0020
struct FSpawnAnimData
{
	class UPopulationBodyTag*                          Key;                                              		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FSpawnAnimPair >                    AnimPairs;                                        		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FVector                                     PreviewMeshOffset;                                		// 0x0010 (0x000C) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              PreviewMeshScale;                                 		// 0x001C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.WillowPursuitGrid.PursuitNode
// 0x0030
struct FPursuitNode
{
	struct FVector                                     RelativeLocation;                                 		// 0x0000 (0x000C) [0x0000000000000000]              
	float                                              RelativeDistance;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              EvasiveActionDistance;                            		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FName                                       NodeType;                                         		// 0x0014 (0x0008) [0x0000000000000000]              
	unsigned long                                      bNeverFallback : 1;                               		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bMultipleReservations : 1;                        		// 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsReserved : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              LastReservedTime;                                 		// 0x0020 (0x0004) [0x0000000000000000]              
	class AActor*                                      ReservedBy;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              AIAlertDistance;                                  		// 0x0028 (0x0004) [0x0000000000000000]              
	class UFlagDefinition*                             AIAlertFlagDef;                                   		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowPursuitGridDefinition.PursuitNodeData
// 0x0024
struct FPursuitNodeData
{
	struct FVector                                     RelativeLocation;                                 		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       NodeType;                                         		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              EvasiveActionDistance;                            		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AIAlertDistance;                                  		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UFlagDefinition*                             AIAlertFlagDef;                                   		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bNeverFallback : 1;                               		// 0x0020 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bMultipleReservations : 1;                        		// 0x0020 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct WillowGame.WillowScrollingListDataProviderOptionsBase.DescriptionEntry
// 0x0010
struct FDescriptionEntry
{
	int                                                EventID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Description;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.WillowScrollingListDataProviderKeyboardMouseOptions.KeyBindInfo
// 0x0028
struct FKeyBindInfo
{
	struct FName                                       Tag;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       ActionName;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FString                                     Caption;                                          		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       CurrentKey;                                       		// 0x001C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  Object;                                           		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowStaggerAnimNodeBlend.ReferencePoint
// 0x000C
struct FReferencePoint
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       Name;                                             		// 0x0004 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.WillowStaggerAnimNodeBlend.ReferencePointComparisonData
// 0x0018
struct FReferencePointComparisonData
{
	struct FReferencePoint                             A;                                                		// 0x0000 (0x000C) [0x0000000004000003]              ( CPF_Edit | CPF_Const | CPF_EditInline )
	struct FReferencePoint                             B;                                                		// 0x000C (0x000C) [0x0000000004000003]              ( CPF_Edit | CPF_Const | CPF_EditInline )
};

// ScriptStruct WillowGame.WillowSystemSettings.Resolution
// 0x0008
struct FResolution
{
	int                                                Width;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Height;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowWeapon.LockOnTargetStateStruct
// 0x0010
struct FLockOnTargetStateStruct
{
	class AActor*                                      CurrentTarget;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              StartTime;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      LockOnRequested : 1;                              		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      LockOnInProgress : 1;                             		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              CoolDownStartTime;                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowWeapon.WeaponBoneControllerInstance
// 0x000C
struct FWeaponBoneControllerInstance
{
	unsigned char                                      SourcePartType;                                   		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      BoneControlType;                                  		// 0x0001 (0x0001) [0x0000000000000000]              
	class UIWeaponBoneController*                      BoneController;                                   		// 0x0004 (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0008 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
};

// ScriptStruct WillowGame.WillowWeapon.ShellCasingImpact
// 0x0010
struct FShellCasingImpact
{
	float                                              ImpactTime;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     ImpactLocation;                                   		// 0x0004 (0x000C) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowUIInteraction.ColumnData
// 0x0014
struct FColumnData
{
	struct FString                                     Text;                                             		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      HAlign;                                           		// 0x000C (0x0001) [0x0000000000000000]              
	struct FColor                                      TextColor;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowUIInteraction.tMenuData
// 0x0098
struct FtMenuData
{
	unsigned long                                      bIsSelectable : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< struct FColumnData >                       ColumnText;                                       		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     PrimaryActionCmd;                                 		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     SecondaryActionCmd;                               		// 0x001C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     TertiaryActionCmd;                                		// 0x0028 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     QuaternaryActionCmd;                              		// 0x0034 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     QuinaryActionCmd;                                 		// 0x0040 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     OverCmd;                                          		// 0x004C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     LeaveCmd;                                         		// 0x0058 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Data;                                             		// 0x0064 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      HintFontSize;                                     		// 0x0070 (0x0001) [0x0000000000100000]              
	struct FString                                     Hint;                                             		// 0x0074 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemDetail;                                       		// 0x0080 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     DescriptionBoxStr;                                		// 0x008C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.WillowUIInteraction.MenuHeaderData
// 0x0040
struct FMenuHeaderData
{
	struct FString                                     Header;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              Width;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     InterfaceName;                                    		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      FontSize;                                         		// 0x001C (0x0001) [0x0000000000000000]              
	struct FColor                                      TextColor;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FColor                                      TextHighlightColor;                               		// 0x0024 (0x0004) [0x0000000000000000]              
	struct FColor                                      IconColor;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDrawIcon : 1;                                    		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                IconU;                                            		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                IconV;                                            		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                IconUL;                                           		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                IconVL;                                           		// 0x003C (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowUIInteraction.SkillIndexLevelRequirementPair
// 0x0008
struct FSkillIndexLevelRequirementPair
{
	int                                                SkillIndex;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                PlayerLevelRequirement;                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowUIInteraction.DebugConsoleCommand
// 0x0034
struct FDebugConsoleCommand
{
	struct FString                                     MenuName;                                         		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     CommandName;                                      		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Command;                                          		// 0x0024 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bOnClient : 1;                                    		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct WillowGame.WillowUIInteraction.NetworkChannelData
// 0x0048
struct FNetworkChannelData
{
	struct FString                                     ChannelName;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     StateName;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      ActorClass;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FString                                     ActorClassName;                                   		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Role;                                             		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     RemoteRole;                                       		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ActorClassCount;                                  		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              ActorClassPercent;                                		// 0x0044 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowUIInteraction.ItemPartSettings
// 0x0014
struct FItemPartSettings
{
	class UItemPartListDefinition*                     PartList;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class UItemPartDefinition*                         Part;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     PartName;                                         		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.WillowUIInteraction.GearBuilderWeightedInventoryPart
// 0x000C
struct FGearBuilderWeightedInventoryPart
{
	class UWillowInventoryPartDefinition*              Part;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Weight;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              ProbabilityOfPickingThisPart;                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowUIInteraction.GearBuilderInventoryPartSlot
// 0x001C
struct FGearBuilderInventoryPartSlot
{
	struct FString                                     PartName;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SelectedPart;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	TArray< struct FGearBuilderWeightedInventoryPart > WeightedPartList;                                 		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.WillowUIInteraction.ItemSettings
// 0x011C
struct FItemSettings
{
	class UItemDefinition*                             ItemDefinition;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	class UInventoryBalanceDefinition*                 BalanceDefinition;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	class UManufacturerDefinition*                     ManufacturerDefinition;                           		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                ManufacturerGradeIndex;                           		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Level;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FGearBuilderInventoryPartSlot               GenericParts[ 0x9 ];                              		// 0x0014 (0x00FC) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CurrentPartBeingSet;                              		// 0x0110 (0x0004) [0x0000000000000000]              
	int                                                ItemBuilderIndex;                                 		// 0x0114 (0x0004) [0x0000000000000000]              
	int                                                ActiveSubmenuForThisItem;                         		// 0x0118 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowUIInteraction.GearBuilderWeightedWeaponPart
// 0x000C
struct FGearBuilderWeightedWeaponPart
{
	class UWeaponPartDefinition*                       Part;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Weight;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              ProbabilityOfPickingThisPart;                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowUIInteraction.GearBuilderWeaponPartSlot
// 0x001C
struct FGearBuilderWeaponPartSlot
{
	struct FString                                     PartName;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SelectedPart;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	TArray< struct FGearBuilderWeightedWeaponPart >    WeightedPartList;                                 		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.WillowUIInteraction.WeaponSettings
// 0x0114
struct FWeaponSettings
{
	class UWeaponTypeDefinition*                       WeaponTypeDefinition;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class UWeaponBalanceDefinition*                    BalanceDefinition;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	class UManufacturerDefinition*                     ManufacturerDefinition;                           		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                ManufacturerGradeIndex;                           		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Level;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FGearBuilderWeaponPartSlot                  GenericParts[ 0x9 ];                              		// 0x0014 (0x00FC) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CurrentPartBeingSet;                              		// 0x0110 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowUIInteraction.ItemBuilderData
// 0x003C
struct FItemBuilderData
{
	struct FString                                     TabName;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemName;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     BuildItemMessage;                                 		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     InventoryDefinitionClassName;                     		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           InventoryBalanceDefinitionNames;                  		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.WillowUIInteraction.ItemBuilderBalanceDefinition
// 0x0010
struct FItemBuilderBalanceDefinition
{
	class UClass*                                      InventoryDefinitionClass;                         		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           BalanceDefinitions;                               		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.WillowUIInteraction.GearBuilderCustomizationData
// 0x0010
struct FGearBuilderCustomizationData
{
	int                                                SortValue;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     BalanceDefinition;                                		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.WillowUIInteraction.GearBuilderCustomizationUsageData
// 0x0010
struct FGearBuilderCustomizationUsageData
{
	class UClass*                                      Usage;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FGearBuilderCustomizationData >     CustomizationBalanceDefinitions;                  		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.WillowVehicle.VirtualSeatStruct
// 0x000C
struct FVirtualSeatStruct
{
	struct FName                                       NameKey;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                CurrentRealSeat;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowVehicle.VehicleEffect
// 0x002C
struct FVehicleEffect
{
	struct FName                                       EffectStartTag;                                   		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       EffectEndTag;                                     		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             EffectTemplate;                                   		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       EffectSocket;                                     		// 0x0014 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystemComponent*                    EffectRef;                                        		// 0x001C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAkEvent*                                    EffectAudioStartAkEvent;                          		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAkEvent*                                    EffectAudioStopAkEvent;                           		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bOnlyPassengersSee : 1;                           		// 0x0028 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bShutOffOnDeath : 1;                              		// 0x0028 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct WillowGame.WillowVehicle.FDamageMorphTargets
// 0x0038
struct FFDamageMorphTargets
{
	struct FName                                       MorphNodeName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	class UMorphNodeWeight*                            MorphNode;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FName                                       LinkedMorphNodeName;                              		// 0x000C (0x0008) [0x0000000000000000]              
	int                                                LinkedMorphNodeIndex;                             		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FName                                       AssociatedSkelControl;                            		// 0x0018 (0x0008) [0x0000000000000000]              
	struct FName                                       InfluenceBone;                                    		// 0x0020 (0x0008) [0x0000000000000000]              
	int                                                Health;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
	TArray< struct FName >                             DamagePropNames;                                  		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct WillowGame.WillowVehicle.SuspensionSound
// 0x0010
struct FSuspensionSound
{
	float                                              LastSuspensionTravel;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              LastPlayTime;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FAkPlayingInfo                              PlayingInfo;                                      		// 0x0008 (0x0008) [0x0000000000080000]              ( CPF_Component )
};

// ScriptStruct WillowGame.WillowVehicle.IndexPair
// 0x0008
struct FIndexPair
{
	int                                                Index1;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Index2;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowVehicle_Tank.TankSensor
// 0x0014
struct FTankSensor
{
	struct FName                                       Socket;                                           		// 0x0000 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      Type;                                             		// 0x0008 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              SearchLength;                                     		// 0x000C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              HitLength;                                        		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct WillowGame.WillowVehicleSimCar.PhysicalMaterialTireModel
// 0x000C
struct FPhysicalMaterialTireModel
{
	class UPhysicalMaterial*                           PhysMaterial;                                     		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LongGripScaler;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LatGripScaler;                                    		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WillowGame.WillowVersusDuelGlobals.DuelTeamInfo
// 0x0008
struct FDuelTeamInfo
{
	class UPawnAllegiance*                             TeamAllegiance;                                   		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FColor                                      TeamColor;                                        		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.WillowVersusDuelGlobals.DuelTeamPair
// 0x0010
struct FDuelTeamPair
{
	struct FDuelTeamInfo                               ChallengerTeam;                                   		// 0x0000 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FDuelTeamInfo                               CompetitorTeam;                                   		// 0x0008 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct WillowGame.WillowVersusDuelInfo.TempWeaponStruct
// 0x0048
struct FTempWeaponStruct
{
	struct FWeaponDefinitionData                       DefinitionData;                                   		// 0x0000 (0x0044) [0x0000000000000000]              
	int                                                Ammo;                                             		// 0x0044 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WillowGame.WillowVersusDuelInfo.TempProfileStruct
// 0x0018
struct FTempProfileStruct
{
	class UPawnAllegiance*                             Allegiance;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Health;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Shield;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	TArray< struct FTempWeaponStruct >                 Weapons;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif