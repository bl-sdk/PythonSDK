#pragma once
// Borderlands 2 (1.8.5) SDK

#ifdef _MSC_VER
#pragma pack(push, 0x4)
#endif

#include "stdafx.h"

//---------------------------------------------------------------------------
//Constants
//---------------------------------------------------------------------------

#define CONST_GAMEEVENT_AGGREGATED_PLAYER_MATCH_WON              10004
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_TIMEALIVE              10001
#define CONST_GAMEEVENT_AGGREGATED_DATA                          10000
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_DEALT_WEAPON_DAMAGE    10202
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_KILLS                  10002
#define CONST_GAMEEVENT_AGGREGATED_TEAM_GAME_SCORE               10102
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_ROUND_WON              10005
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_DEATHS                 10003
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_DEALT_NORMALKILL       10006
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_RECEIVED_WASNORMALKILL 10007
#define CONST_GAMEEVENT_AGGREGATED_TEAM_KILLS                    10100
#define CONST_GAMEEVENT_AGGREGATED_TEAM_ROUND_WON                10104
#define CONST_GAMEEVENT_AGGREGATED_TEAM_DEATHS                   10101
#define CONST_GAMEEVENT_AGGREGATED_TEAM_MATCH_WON                10103
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_KILLS                  10200
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_DEATHS                 10201
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_DEALT_MELEEHITS        10206
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_DEALT_MELEE_DAMAGE     10203
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_RECEIVED_WEAPON_DAMAGE 10204
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_RECEIVED_MELEE_DAMAGE  10205
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_RECEIVED_WASMELEEHIT   10207
#define CONST_GAMEEVENT_AGGREGATED_GAME_SPECIFIC                 11000
#define CONST_GAMEEVENT_AGGREGATED_WEAPON_FIRED                  10300
#define CONST_GAMEEVENT_AGGREGATED_PAWN_SPAWN                    10400
#define CONST_LOADING_MOVIE                                      "LoadingMovie"

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GameFramework.GameSkelCtrl_Recoil.ERecoilStart
//enum class ERecoilStart : uint8_t
//{
//	ERS_Zero                       = 0,
//	ERS_Random                     = 1,
//	ERS_MAX                        = 2
//};


// Enum GameFramework.GameStateObject.GameSessionType
//enum class EGameSessionType : uint8_t
//{
//	GT_SessionInvalid              = 0,
//	GT_SinglePlayer                = 1,
//	GT_Coop                        = 2,
//	GT_Multiplayer                 = 3,
//	GT_MAX                         = 4
//};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameFramework.SeqAct_ModifyProperty.PropertyInfo
// 0x0018
struct FPropertyInfo
{
	struct FName                                       PropertyName;                                             // 0x0000(0x0008) (Edit)
	unsigned long                                      bModifyProperty : 1;                                      // 0x0008(0x0004) (Edit)
	struct FString                                     PropertyValue;                                            // 0x000C(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct GameFramework.GameSkelCtrl_Recoil.RecoilParams
// 0x0004
struct FRecoilParams
{
	unsigned char                                      X;                                                        // 0x0000(0x0001) (Edit)
	unsigned char                                      Y;                                                        // 0x0001(0x0001) (Edit)
	unsigned char                                      Z;                                                        // 0x0002(0x0001) (Edit)
	unsigned char                                      Padding;                                                  // 0x0003(0x0001) (Const, Transient)
};

// ScriptStruct GameFramework.GameSkelCtrl_Recoil.RecoilDef
// 0x0070
struct FRecoilDef
{
	float                                              TimeToGo;                                                 // 0x0000(0x0004) (Transient)
	float                                              TimeDuration;                                             // 0x0004(0x0004) (Edit)
	struct FVector                                     RotAmplitude;                                             // 0x0008(0x000C) (Edit)
	struct FVector                                     RotFrequency;                                             // 0x0014(0x000C) (Edit)
	struct FVector                                     RotSinOffset;                                             // 0x0020(0x000C)
	struct FRecoilParams                               RotParams;                                                // 0x002C(0x0004) (Edit)
	struct FRotator                                    RotOffset;                                                // 0x0030(0x000C) (Transient)
	struct FVector                                     LocAmplitude;                                             // 0x003C(0x000C) (Edit)
	struct FVector                                     LocFrequency;                                             // 0x0048(0x000C) (Edit)
	struct FVector                                     LocSinOffset;                                             // 0x0054(0x000C)
	struct FRecoilParams                               LocParams;                                                // 0x0060(0x0004) (Edit)
	struct FVector                                     LocOffset;                                                // 0x0064(0x000C) (Transient)
};

// ScriptStruct GameFramework.GameStatsAggregator.AggregateEventMapping
// 0x000C
struct FAggregateEventMapping
{
	int                                                EventID;                                                  // 0x0000(0x0004)
	int                                                AggregateID;                                              // 0x0004(0x0004)
	int                                                TargetAggregateID;                                        // 0x0008(0x0004)
};

// ScriptStruct GameFramework.GameStatsAggregator.GameEvents
// 0x003C
struct FGameEvents
{
	struct FMap_Mirror                                 Events;                                                   // 0x0000(0x003C) (Const, Native, Transient)
};

// ScriptStruct GameFramework.GameStatsAggregator.EventsBase
// 0x0048
struct FEventsBase
{
	struct FGameEvents                                 TotalEvents;                                              // 0x0000(0x003C)
	TArray<struct FGameEvents>                         EventsByClass;                                            // 0x003C(0x000C) (NeedCtorLink)
};

// ScriptStruct GameFramework.GameStatsAggregator.WeaponEvents
// 0x0000 (0x0048 - 0x0048)
struct FWeaponEvents : public FEventsBase
{

};

// ScriptStruct GameFramework.GameStatsAggregator.DamageEvents
// 0x0000 (0x0048 - 0x0048)
struct FDamageEvents : public FEventsBase
{

};

// ScriptStruct GameFramework.GameStatsAggregator.ProjectileEvents
// 0x0000 (0x0048 - 0x0048)
struct FProjectileEvents : public FEventsBase
{

};

// ScriptStruct GameFramework.GameStatsAggregator.PawnEvents
// 0x0000 (0x0048 - 0x0048)
struct FPawnEvents : public FEventsBase
{

};

// ScriptStruct GameFramework.GameStatsAggregator.TeamEvents
// 0x01A4
struct FTeamEvents
{
	struct FGameEvents                                 TotalEvents;                                              // 0x0000(0x003C)
	struct FWeaponEvents                               WeaponEvents;                                             // 0x003C(0x0048) (NeedCtorLink)
	struct FDamageEvents                               DamageAsPlayerEvents;                                     // 0x0084(0x0048) (NeedCtorLink)
	struct FDamageEvents                               DamageAsTargetEvents;                                     // 0x00CC(0x0048) (NeedCtorLink)
	struct FProjectileEvents                           ProjectileEvents;                                         // 0x0114(0x0048) (NeedCtorLink)
	struct FPawnEvents                                 PawnEvents;                                               // 0x015C(0x0048) (NeedCtorLink)
};

// ScriptStruct GameFramework.GameStatsAggregator.PlayerEvents
// 0x01A4
struct FPlayerEvents
{
	struct FGameEvents                                 TotalEvents;                                              // 0x0000(0x003C)
	struct FWeaponEvents                               WeaponEvents;                                             // 0x003C(0x0048) (NeedCtorLink)
	struct FDamageEvents                               DamageAsPlayerEvents;                                     // 0x0084(0x0048) (NeedCtorLink)
	struct FDamageEvents                               DamageAsTargetEvents;                                     // 0x00CC(0x0048) (NeedCtorLink)
	struct FProjectileEvents                           ProjectileEvents;                                         // 0x0114(0x0048) (NeedCtorLink)
	struct FPawnEvents                                 PawnEvents;                                               // 0x015C(0x0048) (NeedCtorLink)
};

// ScriptStruct GameFramework.GameStateObject.TeamState
// 0x0010
struct FTeamState
{
	int                                                TeamIndex;                                                // 0x0000(0x0004)
	TArray<int>                                        PlayerIndices;                                            // 0x0004(0x000C) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct GameFramework.GameStateObject.PlayerState
// 0x0010
struct FPlayerState
{
	int                                                PlayerIndex;                                              // 0x0000(0x0004)
	int                                                CurrentTeamIndex;                                         // 0x0004(0x0004)
	float                                              TimeSpawned;                                              // 0x0008(0x0004)
	float                                              TimeAliveSinceLastDeath;                                  // 0x000C(0x0004)
};

// ScriptStruct GameFramework.GameStatsAggregator.GameEvent
// 0x000C
struct FGameEvent
{
	TArray<float>                                      EventCountByTimePeriod;                                   // 0x0000(0x000C) (AlwaysInit, NeedCtorLink)
};

#ifdef _MSC_VER
#pragma pack(pop)
#endif
