/*
#############################################################################################
# Borderlands 2 (1.0.35.4705) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#pragma once
#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct GameFramework.GameSkelCtrl_Recoil.RecoilParams
// 0x0004
struct FRecoilParams
{
	unsigned char                                      X;                                                		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Y;                                                		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Z;                                                		// 0x0002 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Padding;                                          		// 0x0003 (0x0001) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
};

// ScriptStruct GameFramework.GameSkelCtrl_Recoil.RecoilDef
// 0x0070
struct FRecoilDef
{
	float                                              TimeToGo;                                         		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              TimeDuration;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RotAmplitude;                                     		// 0x0008 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RotFrequency;                                     		// 0x0014 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RotSinOffset;                                     		// 0x0020 (0x000C) [0x0000000000000000]              
	struct FRecoilParams                               RotParams;                                        		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    RotOffset;                                        		// 0x0030 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     LocAmplitude;                                     		// 0x003C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LocFrequency;                                     		// 0x0048 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LocSinOffset;                                     		// 0x0054 (0x000C) [0x0000000000000000]              
	struct FRecoilParams                               LocParams;                                        		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LocOffset;                                        		// 0x0064 (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct GameFramework.GameStateObject.TeamState
// 0x0010
struct FTeamState
{
	int                                                TeamIndex;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< int >                                      PlayerIndices;                                    		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct GameFramework.GameStateObject.PlayerState
// 0x0010
struct FPlayerState
{
	int                                                PlayerIndex;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                CurrentTeamIndex;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              TimeSpawned;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              TimeAliveSinceLastDeath;                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct GameFramework.GameStatsAggregator.AggregateEventMapping
// 0x000C
struct FAggregateEventMapping
{
	int                                                EventID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                AggregateID;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                TargetAggregateID;                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GameFramework.GameStatsAggregator.GameEvents
// 0x003C
struct FGameEvents
{
	struct FMap_Mirror                                 Events;                                           		// 0x0000 (0x003C) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
};

// ScriptStruct GameFramework.GameStatsAggregator.EventsBase
// 0x0048
struct FEventsBase
{
	struct FGameEvents                                 TotalEvents;                                      		// 0x0000 (0x003C) [0x0000000000000000]              
	TArray< struct FGameEvents >                       EventsByClass;                                    		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct GameFramework.GameStatsAggregator.WeaponEvents
// 0x0000(0x0048 - 0x0048)
struct FWeaponEvents : FEventsBase
{
};

// ScriptStruct GameFramework.GameStatsAggregator.DamageEvents
// 0x0000(0x0048 - 0x0048)
struct FDamageEvents : FEventsBase
{
};

// ScriptStruct GameFramework.GameStatsAggregator.ProjectileEvents
// 0x0000(0x0048 - 0x0048)
struct FProjectileEvents : FEventsBase
{
};

// ScriptStruct GameFramework.GameStatsAggregator.PawnEvents
// 0x0000(0x0048 - 0x0048)
struct FPawnEvents : FEventsBase
{
};

// ScriptStruct GameFramework.GameStatsAggregator.TeamEvents
// 0x01A4
struct FTeamEvents
{
	struct FGameEvents                                 TotalEvents;                                      		// 0x0000 (0x003C) [0x0000000000000000]              
	struct FWeaponEvents                               WeaponEvents;                                     		// 0x003C (0x0048) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FDamageEvents                               DamageAsPlayerEvents;                             		// 0x0084 (0x0048) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FDamageEvents                               DamageAsTargetEvents;                             		// 0x00CC (0x0048) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FProjectileEvents                           ProjectileEvents;                                 		// 0x0114 (0x0048) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPawnEvents                                 PawnEvents;                                       		// 0x015C (0x0048) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct GameFramework.GameStatsAggregator.PlayerEvents
// 0x01A4
struct FPlayerEvents
{
	struct FGameEvents                                 TotalEvents;                                      		// 0x0000 (0x003C) [0x0000000000000000]              
	struct FWeaponEvents                               WeaponEvents;                                     		// 0x003C (0x0048) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FDamageEvents                               DamageAsPlayerEvents;                             		// 0x0084 (0x0048) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FDamageEvents                               DamageAsTargetEvents;                             		// 0x00CC (0x0048) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FProjectileEvents                           ProjectileEvents;                                 		// 0x0114 (0x0048) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPawnEvents                                 PawnEvents;                                       		// 0x015C (0x0048) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct GameFramework.GameStatsAggregator.GameEvent
// 0x000C
struct FGameEvent
{
	TArray< float >                                    EventCountByTimePeriod;                           		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct GameFramework.SeqAct_ModifyProperty.PropertyInfo
// 0x0018
struct FPropertyInfo
{
	struct FName                                       PropertyName;                                     		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bModifyProperty : 1;                              		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FString                                     PropertyValue;                                    		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif